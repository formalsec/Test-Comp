import os
import sys
import glob
import json
import argparse
import subprocess

from threading import Thread, Lock

from validator.tables import test_dict, WATPATH
from validator.logger import progress, warn, info, indent
from validator.execution import WASP
from validator.generators import XMLSuiteGenerator, CSVTableGenerator

# Globals
def t_testcov(analyser, csv_writer, lock, size):
    global prev
    global tests_props 

    while True:
        try:
            lock.acquire()
            test, prop = tests_props.pop()
            prev = progress(
                f'Running {test}...',
                size - len(tests_props),
                size,
                prev=prev
            )
        except IndexError:
            break
        finally:
            lock.release()

        original = test.replace(f'{WATPATH}', 'original')\
                       .replace('.wat', '.i')
        if not os.path.exists(original):
            original = test.replace(f'{WATPATH}', 'original').replace('.wat', '.c')

        testsuite = test.replace(f'{WATPATH}', f'test-suite/{prop}')\
                         .replace('.wat', '.c.zip')
        if os.path.exists(testsuite) and (not os.path.exists(testsuite.replace(".zip", ""))):
            testCov(original, testsuite, prop)

def testCov(original, testsuite, prop):
    try:
        subprocess.check_output([
            '/home/fmarques/test-suite-validator/bin/testcov',
            '--memlimit', '6GB',
            '--timelimit-per-run', '3',
            '--no-plots',
            '--no-isolation',
            '--output', f'{testsuite.replace(".zip", "")}',
            '--results-format', 'csv',
            '--test-suite', testsuite,
            '-32', '--goal', f'original/properties/{prop}.prp',
            original
        ], timeout=300)
    except subprocess.CalledProcessError:
        warn(f'testCov: error: {original}')
    except subprocess.TimeoutExpired:
        warn(f'testCov: timeout: {original}')

def get_test_suite(testsuite):
    ret = []
    for testcase in testsuite:
        try:
            with open(testcase, 'r') as f:
                tests = json.load(f)
                tests = filter(
                    lambda t: not (('__hb' in t['name']) or \
                                   ('ternary' in t['name'])),
                    tests
                )
                ret.append(tests)
        except json.decoder.JSONDecodeError:
            pass
    return ret

def t_wasp_simpl(analyser, csv_writer, lock, size, test_list):
    global prev
    global tests

    while True:

        try:
            lock.acquire()
            test = tests.pop()
            prev = progress(
                f'Running {test}...',
                size - len(tests),
                size,
                prev=prev
            )
        except IndexError:
            break
        finally:
            lock.release()

        test_suite = os.path.join(
            'test-suite',
            os.path.basename(test_list),
            test.replace(f'{WATPATH}/', '').replace('.wat', '.c') + '.zip'
        )
        if os.path.exists(test_suite):
            continue

        solver_time = 0.0
        n_paths = 0
        instructions = 0
        answer, complete = None, False
        output_dir = os.path.join('output', os.path.basename(test))
        result = analyser.run(test, output_dir, 'cover-error-call')
        if result.crashed:
            answer = 'Crash'
        else:
            report_path = os.path.join(output_dir, 'report.json')
            try:
                with open(report_path, 'r') as f:
                    report = json.load(f)
                    answer = str(report['specification'])
                    solver_time = float(report['solver_time'])
                    n_paths = report['paths_explored']
                    instructions = report['instruction_counter']
                    complete = not report['incomplete']
            except (json.decoder.JSONDecodeError, FileNotFoundError):
                warn(f'Cannot read report \'{report_path}\'!', prefix='\n')

        runtime = round(result.runtime, 2)
        lock.acquire()
        csv_writer.add_row([
            result.file,
            answer,
            complete,
            runtime,
            solver_time,
            n_paths,
            instructions
        ])
        lock.release()



def t_wasp(analyser, csv_writer, lock, size):
    global prev
    global tests_props 

    while True:

        try:
            lock.acquire()
            test, prop = tests_props.pop()
            prev = progress(
                f'Running {test}...',
                size - len(tests_props),
                size,
                prev=prev
            )
        except IndexError:
            break
        finally:
            lock.release()

        with open(test.replace('.wat', '.yml'), 'r') as file:
            if prop not in file.read():
                continue

        test_suite = os.path.join(
            'test-suite',
            prop,
            test.replace(f'{WATPATH}/', '').replace('.wat', '.c') + '.zip'
        )
        if os.path.exists(test_suite):
            continue

        answer, complete = None, False
        output_dir = os.path.join('output', os.path.basename(test))
        result = analyser.run(test, output_dir, prop)
        if result.timeout:
            answer = 'Timeout'
        elif result.crashed:
            answer = 'Crash'
        else:
            report_path = os.path.join(output_dir, 'report.json')
            try:
                with open(report_path, 'r') as f:
                    report = json.load(f)
                    answer = str(report['specification'])
                    complete = not report['incomplete']
            except json.decoder.JSONDecodeError:
                warn(f'Cannot read report \'{report_path}\'!')

        # Timeout does not generate report, but we still have testcases
        if not result.crashed:
            witnesses = os.path.join(output_dir, 'test_suite', 'witness_*.json')
            error = get_test_suite(glob.glob(witnesses))
            testcases = os.path.join(output_dir, 'test_suite', 'test_*,json')
            tests = get_test_suite(glob.glob(testcases))
            suite = XMLSuiteGenerator(
                    'WASP', 
                    test.replace('_build', 'original').replace('.wat','.c'), 
                    prop,
                    error + tests
                )
            lock.acquire()
            suite.write(test_suite)
            lock.release()

        runtime = round(result.runtime, 2)
        lock.acquire()
        csv_writer.add_row([
            result.file,
            answer,
            complete,
            runtime
        ])
        lock.release()

def run(analyser, n_jobs, task, prop, categories, tool):
    global prev
    global tests_props 

    info(f'Starting Test-Comp Benchmarks...')
    info(f'jobs={n_jobs}')
    info(f'property={prop}')
    info(f'n_categories={len(categories)}')

    results = 'results'
    if not os.path.exists(results):
        os.makedirs(results)

    visited, lock = [], Lock()
    for cat, dirs in test_dict.items():

        if not (cat in categories):
            continue

        csv_writer = None
        if tool:
            csv_writer = CSVTableGenerator(
                file=os.path.join(results, f'result_{cat}_{tool}.csv'),
                header=['test', 'answer', 'is_complete', 't_wasp'],
                memory=False
            )
        info(f'Categories remaining: {len(categories) - len(visited)}')

        tests_props, prev = [], 0
        for fmt, _ in dirs:
            tests = glob.glob(fmt + '.wat')
            tests_props += list(map(lambda t: (t, prop), tests))

        threads, size = [], len(tests_props)
        for i in range(n_jobs):
            t = Thread(target=task, args=(analyser, csv_writer, lock, size,))
            threads.append(t)
            t.start()

        for t in threads:
            t.join()

        if tool:
            csv_writer.commit()
        visited.append(cat)

def run_list(analyser, n_jobs, task, test_list, output):
    global prev
    global tests

    info(f'Running tests in \'{test_list}\'...')
    info(f'jobs={n_jobs}')

    results = 'results'
    if not os.path.exists(results):
        os.makedirs(results)

    csv_writer = CSVTableGenerator(
        file=output,
        header=['test', 'answer', 'is_complete', 't_wasp', 't_solver', 'n_paths', 'instructions'],
        memory=False
    )

    tests, prev = [], 0
    with open(test_list, 'r') as f:
        tests = f.read().splitlines()

    threads, lock = [], Lock()
    for i in range(n_jobs):
        t = Thread(target=task, args=(analyser, csv_writer, lock, len(tests),
                                      test_list,))
        threads.append(t)
        t.start()

    for t in threads:
        t.join()

    csv_writer.commit()

def get_parser():
    parser = argparse.ArgumentParser(
        prog='validator',
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )

    parser.add_argument(
        '-j',
        '--jobs',
        dest='jobs',
        action='store',
        default='1',
        help='number of jobs to use'
    )

    parser.add_argument(
        '-branches',
        dest='branches',
        action='store_true',
        default=False,
        help='run Cover-Branches benchmarks'
    )

    parser.add_argument(
        '-error',
        dest='error',
        action='store_true',
        default=False,
        help='run Cover-Error benchmarks'
    )

    parser.add_argument(
        '--test-list',
        dest='test_list',
        action='store',
        default=None,
        help='use test list instead of Test-Comp default categories'
    )

    parser.add_argument(
        '--output',
        dest='output',
        action='store',
        default='results/results.csv',
        help='path to the results file'
    )

    parser.add_argument(
        '--smt-assume',
        dest='smt_assume',
        action='store_true',
        default=False,
        help=''
    )

    parser.add_argument(
        '--no-simplify',
        dest='simplify',
        action='store_false',
        default=True,
        help=''
    )

    parser.add_argument('category', help='category to run')

    return parser

def parse(argv):
    parser = get_parser()
    return parser.parse_args(argv)

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]
    args = parse(argv)

    if args.branches:
        prop = 'coverage-branches'
    elif args.error:
        prop = 'coverage-error-call'
    elif not args.test_list:
        warn('No property specified')
        return -1

    if args.category == 'all':
        categories = test_dict.keys()
    else:
        if not (args.category in test_dict.keys()):
            warn('Specified category not in benchmark data set!')
            return -1
        categories = [args.category]

    analyser = WASP(smt_assume=args.smt_assume, simplify=args.simplify)
    jobs = int(args.jobs)
    if not args.test_list:
        run(analyser, jobs , t_wasp   , prop, categories, 'WASP')
        run(analyser, 1    , t_testcov, prop, categories, None)
    else:
        if not os.path.exists(args.test_list):
            warn(f'File \'{args.test_list}\' not found!')
            return 1
        run_list(analyser, jobs, t_wasp_simpl, args.test_list, args.output)

    return 0
