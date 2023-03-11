#!/usr/bin/env python3
import os
import sys
import csv
import glob
import yaml
import json
import time
import resource
import argparse
import subprocess

import xml.etree.ElementTree as ET

from threading import Thread, Lock

MAPPING = {
    "black": 90,
    "red": 91,
    "green": 92,
    "yellow": 93,
    "blue": 94,
    "purple": 95,
    "cyan": 96,
    "white": 97
}

BOLD = "\033[1m"
PREFIX = "\033["
SUFFIX = "\033[0m"


def progress(msg, curr, total, prev=0):
    status = round((curr / total) * 100)
    color = MAPPING.get("cyan")
    prog_str = f"{BOLD}{PREFIX}{color}m{status:3}%{SUFFIX}"
    sys.stdout.write("\r")
    sys.stdout.write(" " * prev)
    sys.stdout.write("\r")
    sys.stdout.write(f"[{prog_str}] {msg}")
    sys.stdout.flush()
    return len(msg) + 7


def warn(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get("purple")
    warn_str = f"{BOLD}{PREFIX}{color}mWARN{SUFFIX}"
    sys.stdout.write(f"[{warn_str}] {msg}\n")
    sys.stdout.flush()


def info(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get("green")
    warn_str = f"{BOLD}{PREFIX}{color}mINFO{SUFFIX}"
    sys.stdout.write(f"[{warn_str}] {msg}\n")
    sys.stdout.flush()


def indent(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get("white")
    ident_str = f"{BOLD}{PREFIX}{color}m....{SUFFIX}"
    sys.stdout.write(f"[{ident_str}] {msg}\n")
    sys.stdout.flush()

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


def get_parser():
    parser = argparse.ArgumentParser(
        prog="run.py",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )

    parser.add_argument("-j", "--jobs", dest="jobs", action="store", type=int,
                        default=1, help="number of jobs to run in parallel")
    parser.add_argument("-c", "--conf", dest="conf", action="store",
                        default="share/wasp-c.xml")
    parser.add_argument("--results", dest="results", action="store",
                        default="results")
    parser.add_argument("--backend", dest="backend", action="store",
                        default="share/backend/wasp-ce.json")
    parser.add_argument("--property", dest="property", action="store",
        default="sv-benchmarks/c/properties/coverage-error-call.prp")
    return parser


def parse(argv):
    return get_parser().parse_args(argv)


def parse_report(f):
    try:
        with open(f, "r") as fd:
            return json.load(fd)
    except:
        return { "specification" : "Timeout", "solver_time" : 0.0,
                "paths_explored" : 0 }

def parse_yaml(f):
    with open(f, "r") as fd:
        return yaml.load(fd, Loader=yaml.SafeLoader)

def parse_list(f):
    with open(f, "r") as fd:
        data = fd.readlines()
    return list(map(lambda l: l.strip(),
                    filter(lambda l: not l.startswith("#"), data)))


def parse_tasks(conf):
    tasks = {}
    root = ET.parse(conf).getroot()
    for task in root.findall("tasks"):
        name = task.attrib["name"]
        tasks[name] = set()
        for i in task.findall("includesfile"):
            tasks_sets = parse_list(i.text)
            for tasks_set_file in tasks_sets:
                if not tasks_set_file:
                    continue
                tasks_set = glob.glob(
                    os.path.join(os.path.dirname(i.text), tasks_set_file)
                )
                tasks[name] = tasks[name].union(set(tasks_set))
        for i in task.findall("excludesfile"):
            tasks_sets = parse_list(i.text)
            for tasks_set_file in tasks_sets:
                if not tasks_set_file:
                    continue
                if tasks_set_file.startswith("sv-benchmarks"):
                    tasks_set = glob.glob(tasks_set_file)
                else:
                    tasks_set = glob.glob(
                        os.path.join(os.path.dirname(i.text), tasks_set_file)
                    )
                tasks[name] = tasks[name].difference(set(tasks_set))
    return tasks

def limit_ram(limit):
    resource.setrlimit(resource.RLIMIT_AS, (limit, limit))

def execute(benchmark, output_dir, backend, prop):
    result = {
        "runtime" : 0.0,
        "answer" : "Timeout",
        "solver_time" : 0.0,
        "paths_explored" : 0
    }
    start = time.time()
    try:
        cmd = [
                "wasp-c", benchmark,
                "--output", output_dir,
                "--backend", backend,
                "--test-comp",
                "--property", prop,
                "--arch", "32",
                "--timeout", "900"
            ]
        subprocess.run(cmd, capture_output=True, check=True)
        report = parse_report(os.path.join(output_dir, "report.json"))
        result["answer"] = str(report["specification"])
        result["solver_time"] = float(report["solver_time"])
        result["paths_explored"] = int(report["paths_explored"])
    except subprocess.TimeoutExpired:
        result["answer"] = "Timeout"
    except subprocess.CalledProcessError:
        result["answer"] = "Crash"
    result["runtime"] = time.time() - start
    return result

def run_benchmarks(lock, conf):
    global prev
    global benchmarks

    size = conf["size"]
    prop = conf["prop"]
    backend = conf["backend"]
    table = conf["table"]
    while True:
        try:
            lock.acquire()
            benchmark = benchmarks.pop()
            prev = progress(f"Running {benchmark}", size - len(benchmarks), size,
                            prev = prev)
        except KeyError:
            break
        finally:
            lock.release()

        benchmark_conf = parse_yaml(benchmark)
        skip = True
        for prp in benchmark_conf["properties"]:
            prop_name = os.path.basename(prop)
            prp_name = os.path.basename(prp["property_file"])
            if prop_name == prp_name:
                skip = False
                break
        if skip:
            continue

        benchmark_file = os.path.join(os.path.dirname(benchmark),
                                      benchmark_conf["input_files"])
        output_dir = os.path.join("wasp-out",
            os.path.basename(os.path.dirname(benchmark_file)),
            os.path.basename(benchmark_file))
        result = execute(benchmark_file, output_dir, backend, prop)

        lock.acquire()
        table.add_row([
            benchmark_file,
            result["answer"],
            result["runtime"],
            result["solver_time"],
            result["paths_explored"]
        ])
        lock.release()
    return 0


def run(tasks, args):
    global prev
    global benchmarks
    info("Starting Test-Comp Benchmarks...")
    info(f"property={args.property}, jobs={args.jobs}")

    if not os.path.exists(args.results):
        os.makedirs(args.results)

    lock = Lock()
    for cat, benchmarks in tasks.items():
        info(f"Analysing \"{cat}\" benchmarks.", prefix="\n")
        table = CSVTableGenerator(
            file = os.path.join(args.results, f"{cat}.csv"),
            header=["test", "answer", "t_backend", "t_solver", "paths"],
            memory=False
        )
        threads, size, prev = [], len(benchmarks), 0
        for _ in range(args.jobs):
            conf = {
                "prop" : args.property,
                "size" : size,
                "backend" : args.backend,
                "table" : table
            }
            t = Thread(target=run_benchmarks, args=(lock, conf,))
            threads.append(t)
            t.start()

        for t in threads:
            t.join()

        table.commit()

    return 0


def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]
    args = parse(argv)
    tasks = parse_tasks(args.conf)
    return run(tasks, args)


if __name__ == "__main__":
    sys.exit(main())
