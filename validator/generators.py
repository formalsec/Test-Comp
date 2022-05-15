import os
import csv
import hashlib

from lxml import etree
from zipfile import ZipFile
from datetime import datetime

METADATA_DTD = '<!DOCTYPE test-metadata PUBLIC "+//IDN sosy-lab.org//DTD test-format test-metadata 1.1//EN" "https://sosy-lab.org/test-format/test-metadata-1.1.dtd">'
TESTCASE_DTD = '<!DOCTYPE testcase PUBLIC "+//IDN sosy-lab.org//DTD test-format testcase 1.1//EN" "https://sosy-lab.org/test-format/testcase-1.1.dtd">'

ERROR_SPEC = 'COVER( init(main()), FQL(COVER EDGES(@CALL(reach_error))) )'
BRANCH_SPEC = 'COVER( init(main()), FQL(COVER EDGES(@DECISIONEDGE)) )'

SPECIFICATION = {
        'coverage-error-call' : ERROR_SPEC,
        'coverage-branches' : BRANCH_SPEC
    }

class XMLSuiteGenerator:
    def __init__(
            self,
            producer,
            fileName,
            specification,
            json_suite,
        ):
        self.producer = producer
        self.fileName = fileName
        self.specification = specification
        self.json_suite = json_suite

    @staticmethod
    def getHash(file):
        with open(file, 'r') as fd:
            data = fd.read()
        return hashlib.sha256(data.encode('UTF-8')).hexdigest()

    @staticmethod
    def getDatetime():
        return str(datetime.now())

    def getSpecification(self):
        return SPECIFICATION[self.specification]

    def createTag(self, parent, name, val, attrs=None):
        if attrs is None:
            attrs = {}
        tag = etree.SubElement(parent, name, attrs)
        tag.text = val

    def createSuiteDir(self, suite):
        dirName = os.path.dirname(suite)
        if not os.path.exists(dirName):
            os.makedirs(dirName)

    def buildMetadata(self):
        metadata = etree.Element('test-metadata')
        self.createTag(metadata, 'sourcecodelang', 'C')
        self.createTag(metadata, 'producer', self.producer)
        self.createTag(metadata, 'specification', self.getSpecification())
        self.createTag(metadata, 'programfile', self.fileName)
        self.createTag(metadata, 'programhash', 
                XMLSuiteGenerator.getHash(self.fileName))
        self.createTag(metadata, 'entryfunction', 'main')
        self.createTag(metadata, 'architecture', '32bit')
        self.createTag(metadata, 'creationtime', 
                XMLSuiteGenerator.getDatetime())
        return etree.tostring(
                metadata,
                encoding='UTF-8',
                xml_declaration=True,
                pretty_print=True,
                doctype=METADATA_DTD
            )

    def buildTestsuite(self, tv):
        parent = etree.Element('testsuite')
        for test in tv:
            attrs = dict(variable=test['name'],
                             type=test['type'])
            self.createTag(parent, 'input', test['value'])
        return etree.tostring(
                parent,
                encoding='UTF-8',
                xml_declaration=True,
                pretty_print=True,
                doctype=TESTCASE_DTD
            )

    def write(self, suite):
        # prepare each file in a list with the format:
        # [(fileName_1, data_1), .., (fileName_N, data_N)]
        metadata = self.buildMetadata()
        testcases = map(self.buildTestsuite, self.json_suite)
        testsuite = map(lambda t: (f'testcase-{t[0]}.xml', t[1]), enumerate(testcases))
        testsuite = [('metadata.xml', metadata)] + list(testsuite) 
        # create directory structure if necessary
        self.createSuiteDir(suite)
        with ZipFile(suite, 'w') as zip_file:
            for name, data in testsuite:
                zip_file.writestr(name, data)
            zip_file.close()

class RowLengthDiffersException(Exception):
    def __init__(self, len1, len2):
        self.len1 = len1
        self.len2 = len2
        self.message = f'Expected row length of \'{len1}\' but got \'{len2}\''
        super().__init__(self.message)

    def __str__(self):
        return self.message

class CSVTableGenerator:
    def __init__(self, file='result.csv', header=[], memory=False):
        self.file = file
        self.header = header
        self.memory = memory
        self.rsize = len(header)
        self.table = []

        with open(self.file, 'w') as f:
            writer = csv.writer(f)
            writer.writerow(self.header)

    def clear_table(self):
        if self.memory:
            self.table.clear()

    def add_row(self, row):
        if len(row) != self.rsize:
            raise RowLengthDiffersException(self.rsize, len(row))
        if self.memory:
            self.table.append(row) 
        else:
            with open(self.file, 'a') as f:
                writer = csv.writer(f)
                writer.writerow(row)

    def commit(self):
        if self.memory:
            with open(self.file, 'a') as f:
                writer = csv.writer(f)
                writer.writerows(self.table)
