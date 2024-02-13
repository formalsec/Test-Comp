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
