#!/usr/bin/env python3
import os
import sys
import glob
import argparse

import xml.etree.ElementTree as ET

MAPPING = {
    "black" : 90,
    "red" : 91,
    "green" : 92,
    "yellow" : 93,
    "blue" : 94,
    "purple" : 95,
    "cyan" : 96,
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

def get_parser():
    parser = argparse.ArgumentParser(
        prog="run.py",
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )

    parser.add_argument("-j", "--jobs", dest="jobs", action="store",
                        default=1, help="number of jobs to run in parallel")
    parser.add_argument("-o", "--output", dest="output", action="store",
                        default="results")
    parser.add_argument("-c", "--conf", dest="conf", action="store",
                        default="configs/wasp-c.xml")
    parser.add_argument("--backend", dest="backend", action="store",
                        default="configs/backend/wasp-ce.json")
    parser.add_argument("--property", dest="property", action="store",
                        default="coverage-error-call")
    return parser

def parse(argv):
    return get_parser().parse_args(argv)

def parse_tasks(conf):
    tasks = {}
    root = ET.parse(conf).getroot()
    for task in root.findall("tasks"):
        for i in task.findall("includesfile"):
            task_name = task.attrib["name"]
            tasks[task_name] = []
            tasks_conf : str = i.text
            with open(tasks_conf, "r") as fd:
                tasks_set = fd.readlines()
            tasks_set = list(filter(lambda l: not l.startswith("#"), tasks_set))
            for tasks_file in tasks_set:
                tasks_file = tasks_file.strip()
                if not tasks_file:
                    continue
                benchmarks = glob.glob(
                    os.path.join(os.path.dirname(tasks_conf), tasks_file)
                )
                tasks[task_name] += list(benchmarks)
    return tasks

def run(tasks, prop, jobs):
    info("Starting Test-Comp Benchmarks...")
    info(f"property={prop}, jobs={jobs}")
    return 0

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]
    args = parse(argv)
    tasks = parse_tasks(args.conf)
    return run(tasks, args.property, args.jobs)

if __name__ == "__main__":
    sys.exit(main())
