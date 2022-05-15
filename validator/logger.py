import sys 

MAPPING = {
    'black'  : 90,
    'red'    : 91,
    'green'  : 92,
    'yellow' : 93,
    'blue'   : 94,
    'purple' : 95,
    'cyan'   : 96,
    'white'  : 97
}

BOLD = '\033[1m'
PREFIX = '\033['
SUFFIX = '\033[0m'

TIME_LIMIT=60
INST_LIMIT=10

def progress(msg, curr, total, prev=0):
    status = round((curr / total) * 100)
    color = MAPPING.get('cyan')
    prog_str = f'{BOLD}{PREFIX}{color}m{status:3}%{SUFFIX}'
    sys.stdout.write('\r')
    sys.stdout.write(' ' * prev)
    sys.stdout.write('\r')
    sys.stdout.write(f'[{prog_str}] {msg}')
    sys.stdout.flush()
    return len(msg) + 7

def warn(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get('purple')
    warn_str = f'{BOLD}{PREFIX}{color}mWARN{SUFFIX}'
    sys.stdout.write(f'[{warn_str}] {msg}\n')
    sys.stdout.flush()

def info(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get('green')
    warn_str = f'{BOLD}{PREFIX}{color}mINFO{SUFFIX}'
    sys.stdout.write(f'[{warn_str}] {msg}\n')
    sys.stdout.flush()

def indent(msg, prefix=None):
    if prefix:
        sys.stdout.write(prefix)
    color = MAPPING.get('white')
    ident_str = f'{BOLD}{PREFIX}{color}m....{SUFFIX}'
    sys.stdout.write(f'[{ident_str}] {msg}\n')
    sys.stdout.flush()
