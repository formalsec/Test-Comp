# Running

- Clone the repository and submodules

```shell-session
$ git clone git@github.com:formalsec/Test-Comp.git
$ cd Test-Comp
$ git submodule init
$ git submodule update
```

- Run the script

```shell-session
$ ./run.py
```

- To run vairous instances in parellel, specify the number of threads in `-j`:

```shell-session
$ ./run.py -j 10
```

# Selecting benchmarks

To run more or fewer benchmarks, edit owi's benchmark definition file at
[share/owic.xml](share/owic.xml). Simply comment or uncomment the XML tag
`<tasks>` for the benchmarks you wish to run or skip.

# Results

Currently, this script executes owi and searches for the string `Reached problem!`
in the stderr to verify if owi found the problem in the benchmark or not.
**Testsuite validation using test-suite-validator appears to be broken at the moment.**

This script will create a file `results/all.csv` with the answer to every benchmark
in the dataset. The answer column in this file will be `True` if owi detected a
problem, `False` if not, and `Timeout` if owi timed out.
