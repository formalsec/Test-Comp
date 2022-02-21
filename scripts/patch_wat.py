#!/usr/bin/env python3
import re
import os
import sys

patterns = [
    ('call \$assume'                        , 'sym_assume'),
    ('call \$assume_abort_if_not'           , 'sym_assume'),
    ('call \$assume_cycle_if_not'           , 'sym_assume'),
    ('call \$assert'                        , 'sym_assert'),
    ('call \$sym_int'                       , 'i32.symbolic'),
    ('call \$sym_long'                      ,'i64.symbolic'),
    ('call \$sym_float'                     , 'f32.symbolic'),
    ('call \$sym_double'                    , 'f64.symbolic'),
    ('call \$__VERIFIER_nondet_bool'        , 'b32.symbolic'),
    ('call \$__VERIFIER_nondet_char'        , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_uchar'       , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_short'       , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_ushort'      , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_int'         , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_uint'        , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_long'        , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_ulong'       , 'i32.symbolic'),
    ('call \$__VERIFIER_nondet_float'       , 'f32.symbolic'),
    ('call \$__VERIFIER_nondet_double'      , 'f64.symbolic'),
    ('call \$is_symbolic'                   , 'is_symbolic'),
    ('call \$alloc'                         , 'alloc'),
    ('call \$free'                          , 'free'),
    ('call \$dealloc'                       , 'free'),
    ('\(elem \(;0;\) \(i32.const 1\) func'  , '(elem (;0;) (i32.const 1)'),
    ('anyfunc'                              , 'funcref'),
    ('call \$IFG'                           , '__trace_condition'),
    ('call \$__ternary'                     , '__ternary_op'),
    ('call \$__logand'                      , 'i32.__logand'),
    ('call \$__logor'                       , 'i32.__logor')
]

def sub_patterns(line):
    for (pattern, repl) in patterns:
        line = re.sub(pattern, repl, line)
    return line

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]

    test = argv[0]
    if not os.path.exists(test):
        return -1

    print(f'Transforming {test}...')
    with open(test, 'r') as f:
        lines = f.read().splitlines()

    text = '\n'.join(map(sub_patterns, lines))
    with open(test, 'w') as f:
        f.write(text)

    return 0

if __name__ == '__main__':
    sys.exit(main())
