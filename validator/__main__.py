import os
import sys
import glob
import json
import subprocess

from threading import (Thread, Lock)

from validator.tables import test_dict, WATPATH, PROP
from validator.logger import logger as logging
from validator.parser import parser
from validator.execution import WASP
from validator.generators import (XMLSuiteGenerator, CSVTableGenerator)

def t_testcov(i, lock, tblWriter, analyser, sz):
    global srcs
    global counter

    while True:

        try:
            lock.acquire()
            data = srcs.pop()
            counter += 1
        except IndexError:
            break
        finally:
            lock.release()

        test, prop = data[0], data[1]
        original = test.replace(f'{WATPATH}', 'original').replace('.wat', '.i')
        if not os.path.exists(original):
            original = test.replace(f'{WATPATH}', 'original').replace('.wat', '.c')
        test_suite = test.replace(f'{WATPATH}', f'test-suite/{prop}').replace('.wat', '.c.zip')
        if os.path.exists(test_suite) and (not os.path.exists(test_suite.replace(".zip", ""))):
            logging.info(f'Thread {i}: running TestCov on \'{original}\' ({counter}/{sz})')
            testCov(original, test_suite, prop)

def testCov(original, test_suite, prop):
    try:
        subprocess.check_output([
            '../test-suite-validator/bin/testcov',
            '--memlimit', '6GB',
            '--timelimit-per-run', '3',
            '--no-plots',
            '--no-isolation',
            '--output', f'{test_suite.replace(".zip", "")}',
            '--results-format', 'csv',
            '--test-suite', test_suite,
            '-32', '--goal', f'original/properties/{prop}.prp',
            original
        ], timeout=300)
    except subprocess.CalledProcessError:
        logging.info(f'testCov: error: {original}')
    except subprocess.TimeoutExpired:
        logging.info(f'testCov: timeout: {original}')

def get_test_suite(testsuite):
    ret = []
    for testcase in testsuite:
        with open(testcase, 'r') as f:
            try:
                testcase_json = json.load(f)
                ret.append(filter(lambda t : not (('__hb' in t['name']) and ('ternary' in t['name'])), testcase_json))
            except json.decoder.JSONDecodeError:
                continue
    return ret
 
def t_wasp(i, lock, tblWriter, analyser, sz):
    global srcs
    global counter 

    while True:
        # We know cover error is alwasy false
        verdict  = False
        complete = False

        try:
            lock.acquire()
            data = srcs.pop()
            counter += 1
        except IndexError:
            break
        finally:
            lock.release()

        test, prop = data[0], data[1]
        with open(test.replace('.wat', '.yml'), 'r') as file:
            if prop not in file.read():
                continue

        test_suite = 'test-suite/{}/{}.zip'.format(prop, \
                test.replace(f'{WATPATH}/', '').replace('.wat', '.c'))
        out_dir = os.path.join('output', os.path.basename(test))
        if os.path.exists(test_suite):
            continue

        result = analyser.run(test, out_dir, prop)
        if result.timeout:
            ret = 'Timeout'
        elif result.crashed:
            ret = 'Crash'
        else:
            with open(f'{out_dir}/report.json', 'r') as f:
                try:
                    report = json.load(f)
                    ret = str(report['specification'])
                    complete = not report['incomplete']
                except json.decoder.JSONDecodeError:
                    logging.info(f'Thread {i}: Can not read report \'{out_dir}/report.json\'.')

        # Timeout does not generate report, but we still have testcases
        if not result.crashed:
            error = get_test_suite(glob.glob(f'{out_dir}/test_suite/witness_*.json'))
            tests = get_test_suite(glob.glob(f'{out_dir}/test_suite/test_*.json'))
            suite = XMLSuiteGenerator(
                    'WASP', 
                    test.replace('_build', 'original').replace('.wat','.c'), 
                    prop,
                    error + tests
                )
            lock.acquire()
            suite.write(test_suite)
            lock.release()

        time = round(result.time, 2)
        lock.acquire()
        tblWriter.addRow([
            result.fileName,
            ret,
            verdict,
            complete,
            time
        ])
        lock.release()

        logging.info(f'Thread {i}: Ran \'{test}\' in {time}s -> ret={ret} ({counter}/{sz})')

def main(n_threads, analyser, task, prop, categories):
    global srcs
    global counter

    lock = Lock()
    tblWriter = CSVTableGenerator(['test', 'answer', 'verdict', 'complete', 'time'])

    logging.info('Starting Test-Comp Benchmarks...')
    logging.info(f'Using {n_threads} thread(s)')
    logging.info(f'Using timeout={analyser.getTimeLimit()}s')
    logging.info(f'Using instrLimit={analyser.getInstrLimit()}')

    visited = []
    for cat, dirPropPair in test_dict.items():
        
        if not (cat in categories):
            continue

        logging.info(f'Categories remaining: {len(categories) - len(visited)}')

        counter = -1
        srcs = list()
        for pair in dirPropPair:
            dirFmt = pair[0]
            srcs = srcs + list(map(lambda t: (t, prop), glob.glob(f'{dirFmt}.wat')))

        threads = []
        size = len(srcs)
        for i in range(n_threads):
            t = Thread(target=task, args=(i, lock, tblWriter, analyser, size,))
            threads.append(t)
            t.start()

        for t in threads:
            t.join()

        if n_threads != 1:
            #tblWriter.write(f'results/{cat}_t{analyser.getTimeLimit()}_im{analyser.getInstrLimit()}.csv')
            tblWriter.clearTable()

        visited.append(cat)

if __name__ == '__main__':
    args = parser.parse_args()
    analyser = WASP('../wasp', timeLimit=900)

    prop = ''
    if args.task == 'branches':
        prop = 'coverage-branches'
    elif args.task == 'error':
        prop = 'coverage-error-call'
    else:
        logging.error('Invalid task type')
        sys.exit(1)

    categories = test_dict.keys()
    if args.category != 'all':
        if not (args.category in categories):
            logging.info(f'Invalid category \'{args.category}\' not in {str(categories)}.')
            sys.exit(1)
        categories = [args.category]

    main(args.n_threads, analyser, t_wasp, prop, categories)
    main(1, analyser, t_testcov, prop, categories)
