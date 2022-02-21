#!/usr/bin/env python3
import os
import sys
import glob
import comby as cby

from threading import Thread

patterns = [
        (':[[h1]] __VERIFIER_nondet_:[[h2]](:[_])', \
                ':[h1] __VERIFIER_nondet_:[h2](char *)'),
        (':[[h1]] *__VERIFIER_nondet_:[[h2]](:[_])', \
                ':[h1] *__VERIFIER_nondet_:[h2](char *)'),
        ('unsigned :[[h1]] __VERIFIER_nondet_u:[[h1]](:[_])', \
                'unsigned :[h1] __VERIFIER_nondet_u:[h1](char *)'),
        ('return __VERIFIER_nondet_:[[h1]](...)', \
                'return __VERIFIER_nondet_:[h1](\"return_:[id()]\")'),
        (':[h1~\w+(\[\s*\w+\s*\])*]:[~\s*]=:[~\s*]__VERIFIER_nondet_:[h2]()', \
                ':[h1] = __VERIFIER_nondet_:[h2](\":[h1]\")'),
        (':[h1~\w+(\[\s*\w+\s*\])*]:[~\s*]=:[~\s*](:[cast]):[~\s*]__VERIFIER_nondet_:[h2]()', \
                ':[h1] = (:[cast]) __VERIFIER_nondet_:[h2](\":[h1]\")'),
        (':[h1~\w+(\[\s*\w+\s*\])*]:[~\s*]=:[~\s*]:[ops]:[~\s*]__VERIFIER_nondet_:[h2]()', \
                ':[h1] = :[ops] __VERIFIER_nondet_:[h2](\":[h1]\")'),
        (':[[h1]] = __VERIFIER_nondet_:[h2]()', \
                ':[h1] = __VERIFIER_nondet_:[h2](\":[h1]\")'),
        ('if:[~\s*](:[~\s*]__VERIFIER_nondet_:[h1]():[~\s*])', \
                'if (__VERIFIER_nondet_:[h1](\"if_:[id()]\"))'),
        (':[[cond]]:[~\s*](:[h2]__VERIFIER_nondet_:[h1]():[h3])', \
                ':[cond] (:[h2]__VERIFIER_nondet_:[h1](\":[cond]_:[id()]\"):[h3])'),
        ('void assume(...) {...}', ''),
        ('void assert(...) {...}', ''),
        ('void abort(...) {...}' , ''),
        ('__attribute__:[~\s?](...)', ''),
        ('__restrict', ''),
        ('__VERIFIER_nondet_:[h2]()', \
                '__VERIFIER_nondet_:[h2](\":[id()]\")')
]

dirs = [
        'for-wasp/array-cav19', 
        'for-wasp/array-crafted', 
        'for-wasp/array-examples',
        'for-wasp/array-fpi',
        'for-wasp/array-industry-pattern',
        'for-wasp/array-lopstr16',
        'for-wasp/array-multidimensional',
        'for-wasp/array-patterns',
        'for-wasp/array-programs',
        'for-wasp/array-memsafety',
        'for-wasp/array-memsafety-realloc',
        'for-wasp/array-tiling',
        'for-wasp/bitvector',
        'for-wasp/bitvector-loops',
        'for-wasp/bitvector-regression',
        'for-wasp/combinations',
        'for-wasp/float-benchs',
        'for-wasp/float-newlib',
        'for-wasp/floats-cbmc-regression',
        'for-wasp/floats-cdfpl',
        'for-wasp/floats-esbmc-regression',
        'for-wasp/forester-heap',
        'for-wasp/heap-data',
        'for-wasp/list-ext-properties',
        'for-wasp/list-ext2-properties',
        'for-wasp/list-ext3-properties',
        'for-wasp/list-properties',
        'for-wasp/list-simple',
        'for-wasp/locks',
        'for-wasp/loop-crafted',
        'for-wasp/loop-acceleration',
        'for-wasp/loop-floats-scientific-comp',
        'for-wasp/loop-industry-pattern',
        'for-wasp/loop-invariants',
        'for-wasp/loop-invgen',
        'for-wasp/loop-lit',
        'for-wasp/loop-new',
        'for-wasp/loop-simple',
        'for-wasp/loop-zilu',
        'for-wasp/loops',
        'for-wasp/loops-crafted-1',
        'for-wasp/ntdrivers',
        'for-wasp/ntdrivers-simplified',
        'for-wasp/openssl',
        'for-wasp/openssl-simplified',
        'for-wasp/recursive',
        'for-wasp/recursive-simple',
        'for-wasp/recursive-with-pointer',
        'for-wasp/reducercommutativity',
        'for-wasp/verifythis',
        'for-wasp/xcsp',
        'for-wasp/nla-digbench',
        'for-wasp/nla-digbench-scaling',
        'for-wasp/psyco',
        'for-wasp/systemc',
        'for-wasp/termination-crafted',
        'for-wasp/termination-crafted-lit',
        'for-wasp/memsafety',
        'for-wasp/memsafety-bftpd',
        'for-wasp/memsafety-ext',
        'for-wasp/memsafety-ext2',
        'for-wasp/termination-numeric',
        'for-wasp/ldv-sets',
        'for-wasp/ldv-regression',
        'for-wasp/heap-manipulation',
        'for-wasp/seq-mthreaded',
        'for-wasp/seq-pthread',
        'for-wasp/termination-dietlibc',
        'for-wasp/termination-memory-alloca',
        'for-wasp/termination-memory-linkedlists',
        'for-wasp/termination-15',
        'for-wasp/termination-recursive-malloc'
        'for-wasp/eca-programs',
        'for-wasp/eca-rers2012',
        'for-wasp/eca-rers2018'
]

def transform(i, test):
    comby = cby.Comby()
    print(f'Thread {i}: Transforming {test}...')

    with open(test, 'r') as f:
        data = f.read()

    for pattern in patterns:
        data = comby.rewrite(
            data, 
            pattern[0], 
            pattern[1],
            language='.c',
            args=dict(timeout=100, sequential='')
        )

    with open(test, 'w') as f:
        f.write(data)

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]

    n_threads = 1
    n_threads = int(argv[0]) if not (argv[0] is None) \
                             else 1
    for dir in dirs:

        tests = glob.glob(os.path.join(dir, '*.c'))
        while tests:
            threads = []
            for i in range(n_threads):
                try:
                    test = tests.pop()
                except IndexError:
                    break
                t = Thread(target=transform, args=(i, test,))
                threads.append(t)
                t.start()

            for t in threads:
                t.join()
    return 0

if __name__ == '__main__':
    sys.exit(main())
