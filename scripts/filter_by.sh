#!/bin/sh

query_word=$1

dirs=$(find for-wasp -type d)
for d in $dirs; do
  size=$(grep -r -e "$query_word" $d | wc -l)
  echo "$size $d"
done | sort -h
