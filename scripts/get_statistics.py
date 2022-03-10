import os
import csv
import sys

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]

    tables = []
    for tbl in argv:
        with open(tbl, 'r') as f:
            reader = csv.DictReader(f)
            lines = list(reader)

            N = len(lines)

            total  = sum(map(lambda row: float(row['t_wasp'])    , lines))
            solver = sum(map(lambda row: float(row['t_solver'])  , lines))
            paths  = sum(map(lambda row: int(row['n_paths'])     , lines))
            cmds   = sum(map(lambda row: int(row['instructions']), lines))

            timeouts = list(map(lambda row: row['answer'], lines)).count('Timeout')
            errors   = list(map(lambda row: row['answer'], lines)).count('False')

            tables.append([
                total/3600.0,
                solver/3600.0,
                paths,
                cmds/(N-timeouts),
                errors
            ])

    print('T_WASP,T_Solver,n_paths,avg-cmds,n_assert_falses')

    for i in range(0, 5):
        n = len(tables)
        for j in range(n):
            sep = '' if (i == 4) and (j == (n - 1)) else ','
            sys.stdout.write('tbl' + str(j) + sep)
    sys.stdout.write('\n')

    for i in range(0, 5):
        n = len(tables)
        for j in range(n):
            sep = '' if (i == 4) and (j == (n - 1)) else ','
            sys.stdout.write(f'{tables[j][i]}{sep}')
    sys.stdout.write('\n')

    sys.stdout.flush()

    return 0

if __name__ == '__main__':
    sys.exit(main())
