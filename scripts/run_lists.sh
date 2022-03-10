#!/bin/sh

ASSUMES_DIR=results/assumes
MALLOCS_DIR=results/mallocs

mkdir -p $ASSUMES_DIR
mkdir -p $MALLOCS_DIR

./bin/validator -j 10 --test-list assumes.txt --output $ASSUMES_DIR/results_old.csv all
./bin/validator -j 10 --test-list assumes.txt --smt-assume --output $ASSUMES_DIR/results_new.csv all
./bin/validator -j 10 --test-list mallocs.txt --smt-assume --no-simplify --output $MALLOCS_DIR/results_old.csv all
./bin/validator -j 10 --test-list mallocs.txt --smt-assume --output $MALLOCS_DIR/results_new.csv all

python scripts/get_statistics.py \
  $ASSUMES_DIR/results_new.csv \
  $ASSUMES_DIR/results_old.csv > results/table3.csv
python scripts/get_statistics.py \
  $MALLOCS_DIR/results_new.csv \
  $MALLOCS_DIR/results_old.csv | tail -n 1 >> results/table3.csv
