WATPATH = '_build'

PROP = 'coverage-branches'

test_dict = {
        'Arrays' : [
            (f'{WATPATH}/array-examples/*'         , f'{PROP}'),
            (f'{WATPATH}/array-industry-pattern/*' , f'{PROP}'),
            (f'{WATPATH}/reducercommutativity/*'   , f'{PROP}'),
            (f'{WATPATH}/array-tiling/*'           , f'{PROP}'),
            (f'{WATPATH}/array-programs/*'         , f'{PROP}'),
            (f'{WATPATH}/array-crafted/*'          , f'{PROP}'),
            (f'{WATPATH}/array-multidimensional/*' , f'{PROP}'),
            (f'{WATPATH}/array-patterns/*'         , f'{PROP}'),
            (f'{WATPATH}/array-cav19/*'            , f'{PROP}'),
            (f'{WATPATH}/array-lopstr16/*'         , f'{PROP}'),
            (f'{WATPATH}/array-fpi/*'              , f'{PROP}')
        ],
        'BitVectors' : [
            (f'{WATPATH}/bitvector/*'              , f'{PROP}'),
            (f'{WATPATH}/bitvector-regression/*'   , f'{PROP}'),
            (f'{WATPATH}/bitvector-loops/*'        , f'{PROP}')
        ],
        'ControlFlow' : [
            (f'{WATPATH}/ntdrivers-simplified/*'   , f'{PROP}'),
            (f'{WATPATH}/openssl-simplified/*'     , f'{PROP}'),
            (f'{WATPATH}/locks/*'                  , f'{PROP}'),
            (f'{WATPATH}/ntdrivers/*'              , f'{PROP}'),
            (f'{WATPATH}/openssl/*'                , f'{PROP}')
        ],
        'ECA' : [
            (f'{WATPATH}/eca-programs/*'           , f'{PROP}'),
            (f'{WATPATH}/eca-rers2012/*'           , f'{PROP}'),
            (f'{WATPATH}/eca-rers2018/*'           , f'{PROP}')
        ],
        'Floats' : [
            (f'{WATPATH}/floats-cdfpl/*'               , f'{PROP}'),
            (f'{WATPATH}/floats-cbmc-regression/*'     , f'{PROP}'),
            (f'{WATPATH}/float-benchs/*'               , f'{PROP}'),
            (f'{WATPATH}/floats-esbmc-regression/*'    , f'{PROP}'),
            (f'{WATPATH}/float-newlib/*'               , f'{PROP}'),
            (f'{WATPATH}/loop-floats-scientific-comp/*', f'{PROP}')
        ],
        'Heap' : [
            (f'{WATPATH}/heap-manipulation/*'      , f'{PROP}'),
            (f'{WATPATH}/list-properties/*'        , f'{PROP}'),
            (f'{WATPATH}/ldv-regression/*'         , f'{PROP}'),
            #(f'{WATPATH}/ddv-machzwd/*'            , f'{PROP}'),
            (f'{WATPATH}/forester-heap/*'          , f'{PROP}'),
            (f'{WATPATH}/list-ext-properties/*'    , f'{PROP}'),
            (f'{WATPATH}/list-ext2-properties/*'   , f'{PROP}'),
            (f'{WATPATH}/ldv-sets/*'               , f'{PROP}'),
            (f'{WATPATH}/list-simple/*'            , f'{PROP}'),
            (f'{WATPATH}/heap-data/*'              , f'{PROP}'),
            (f'{WATPATH}/list-ext3-properties/*'   , f'{PROP}')
        ],
        'Loops' : [
            (f'{WATPATH}/loops/*'                  , f'{PROP}'),
            (f'{WATPATH}/loop-acceleration/*'      , f'{PROP}'),
            (f'{WATPATH}/loop-crafted/*'           , f'{PROP}'),
            (f'{WATPATH}/loop-invgen/*'            , f'{PROP}'),
            (f'{WATPATH}/loop-lit/*'               , f'{PROP}'),
            (f'{WATPATH}/loop-new/*'               , f'{PROP}'),
            (f'{WATPATH}/loop-industry-pattern/*'  , f'{PROP}'),
            (f'{WATPATH}/loops-crafted-1/*'        , f'{PROP}'),
            (f'{WATPATH}/loop-invariants/*'        , f'{PROP}'),
            (f'{WATPATH}/loop-simple/*'            , f'{PROP}'),
            (f'{WATPATH}/loop-zilu/*'              , f'{PROP}'),
            (f'{WATPATH}/verifythis/duplets'       , f'{PROP}'),
            (f'{WATPATH}/verifythis/elimination_max', f'{PROP}'),
            (f'{WATPATH}/verifythis/lcp'           , f'{PROP}'),
            (f'{WATPATH}/verifythis/prefixsum_iter', f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_del_iter' , f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_del_iter_incorrect', f'{PROP}'),
            (f'{WATPATH}/nla-digbench/*'           , f'{PROP}'),
            (f'{WATPATH}/nla-digbench-scaling/*'   , f'{PROP}')
        ],
        'Recursive' : [
            (f'{WATPATH}/recursive/*'              , f'{PROP}'),
            (f'{WATPATH}/recursive-simple/*'       , f'{PROP}'),
            (f'{WATPATH}/recursive-with-pointer/*' , f'{PROP}'),
            (f'{WATPATH}/verifythis/prefixsum_rec' , f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_del_rec'  , f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_del_rec_incorrect', f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_max'      , f'{PROP}'),
            (f'{WATPATH}/verifythis/tree_max_incorrect', f'{PROP}'),
            (f'{WATPATH}/verifythis/elimination_max_rec', f'{PROP}'),
            (f'{WATPATH}/verifythis/elimination_max_rec_onepoint', f'{PROP}'),
        ],
        'Sequentialized' : [
            (f'{WATPATH}/systemc/*'                , f'{PROP}'),
            (f'{WATPATH}/seq-mthreaded/*'          , f'{PROP}'),
            (f'{WATPATH}/seq-pthread/*'            , f'{PROP}')
        ],
        'XCSP' : [(f'{WATPATH}/xcsp/*'             , f'{PROP}')],
        'Combinations' : [(f'{WATPATH}/combinations/*', f'{PROP}')],
        'MainHeap' : [
            (f'{WATPATH}/termination-dietlibc/*'   , f'{PROP}'),
            (f'{WATPATH}/termination-memory-alloca/*', f'{PROP}'),
            (f'{WATPATH}/termination-memory-linkedlists/*', f'{PROP}'),
            (f'{WATPATH}/termination-15/*'         , f'{PROP}'),
            (f'{WATPATH}/termination-recursive-malloc/*', f'{PROP}')
        ],
}
