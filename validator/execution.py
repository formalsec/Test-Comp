import time
import resource
import subprocess

class WASP:
    def __init__(
            self, 
            smt_assume=False,
            simplify=True,
            instr_limit=-1,
            # default 15mins
            time_limit=1800,
            # default 15Gib
            mem_limit=15*1024*1024*1024
        ):
        self.smt_assume = smt_assume
        self.simplify = simplify
        self.instr_limit = instr_limit
        self.time_limit = time_limit
        self.mem_limit = mem_limit

    @staticmethod
    def limit_ram(limit):
        resource.setrlimit(resource.RLIMIT_AS, (limit, limit))

    def cmd(self, file, output_dir, property):
        args = []
        if property == 'coverage-branches':
            args.append('-b')
        if self.smt_assume:
            args.append('--smt-assume')
        if not self.simplify:
            args.append('--no-simplify')
        return [
            'wasp', file,
            '-u',
            '-e', '(invoke \"__original_main\")',
            '-m', str(self.instr_limit),
            '--workspace', output_dir,
        ] + args

    def run(self, file, output_dir, property):
        start = time.time()
        stdout = None
        stderr = None
        crashed = False
        timeout = False
        try: 
            result = subprocess.run(
                    self.cmd(file, output_dir, property),
                    timeout=self.time_limit, 
                    preexec_fn=(lambda: WASP.limit_ram(self.mem_limit)),
                    capture_output=True,
                    check=True
                )
            stdout = result.stdout
            stderr = result.stderr
        except subprocess.TimeoutExpired:
            timeout = True
        except subprocess.CalledProcessError:
            crashed = True

        runtime = time.time() - start
        return ExecutionResult(
                file, 
                stdout,
                stderr,
                crashed, 
                timeout, 
                runtime 
            )

class ExecutionResult:
    def __init__(
            self,
            file,
            stdout,
            stderr,
            crashed,
            timeout,
            runtime
        ):
        self.file = file
        self.stdout = stdout
        self.stderr = stderr
        self.crashed = crashed
        self.timeout = timeout
        self.runtime = runtime
