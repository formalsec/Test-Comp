import time
import resource
import subprocess

class WASP:
    def __init__(
            self, 
            instr_limit=-1,
            # default 15mins
            time_limit=900,
            # default 15Gib
            mem_limit=15*1024*1024*1024
        ):
        self.instr_limit = instr_limit
        self.time_limit = time_limit
        self.mem_limit = mem_limit

    @staticmethod
    def limit_ram(limit):
        resource.setrlimit(resource.RLIMIT_AS, (limit, limit))

    def cmd(self, testFile, out_dir, prop):
        args = []
        if prop == 'coverage-branches':
            args.append('-b')
        return [
            'wasp', testFile,
            '-u',
            '-e', '(invoke \"__original_main\")',
            '-m', str(self.instrLimit),
            '-r', out_dir
        ] + args

    def run(self, test, out_dir, prop):
        start = time.time()
        stdout = None
        stderr = None
        crashed = False
        timeout = False
        try: 
            result = subprocess.run(
                    self.cmd(test, out_dir, prop),
                    timeout=self.timeLimit, 
                    preexec_fn=(lambda: WASP.limit_ram(self.memLimit)),
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
                test, 
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
