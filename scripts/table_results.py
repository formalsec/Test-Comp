#!/usr/bin/env python3
import os
import sys
import csv
import glob
import pandas

def read_csv(file):
    with open(file, "r") as fd:
        return list(csv.DictReader(fd))

def gen_table(results):
    table = {
        "Category" : [],
        "Falses": [],
        "Trues": [],
        "Timeouts" : [],
        "Crashes" : [],
        "Time" : [],
        "Solver" : [],
        "Paths" : []
    }
    for file, rows in results:
        rows = list(rows)
        answers = list(map(lambda r: r["answer"], rows))
        table["Category"].append(os.path.splitext(os.path.basename(file))[0])
        table["Falses"].append(str(answers.count("False")))
        table["Trues"].append(str(answers.count("True")))
        table["Timeouts"].append(str(answers.count("Timeout")))
        table["Crashes"].append(str(answers.count("Crash")))
        table["Time"].append(
            str(round(sum(map(lambda r: float(r["t_backend"]), rows)), 3)))
        table["Solver"].append(
            str(round(sum(map(lambda r: float(r["t_solver"]), rows)), 3)))
        table["Paths"].append(str(sum(map(lambda r: int(r["paths"]), rows))))
    # Total
    table["Category"].append("Total")
    table["Falses"].append(str(sum(map(int, table["Falses"]))))
    table["Trues"].append(str(sum(map(int, table["Trues"]))))
    table["Timeouts"].append(str(sum(map(int, table["Timeouts"]))))
    table["Crashes"].append(str(sum(map(int, table["Crashes"]))))
    table["Time"].append(str(round(sum(map(float, table["Time"])), 3)))
    table["Solver"].append(str(round(sum(map(float, table["Solver"])), 3)))
    table["Paths"].append(str(sum(map(int, table["Paths"]))))
    return table

def main(argv=None):
    if argv is None:
        argv = sys.argv[1:]

    results_dir = argv[0]
    results_csvs = glob.glob(os.path.join(results_dir, "*.csv"))
    table = gen_table(zip(results_csvs, list(map(read_csv, results_csvs))))
    print(pandas.DataFrame(table).style.to_latex())
    return 0

if __name__ == '__main__':
    sys.exit(main())
