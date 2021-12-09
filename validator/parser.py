from argparse import ArgumentParser

parser = ArgumentParser()
parser.add_argument('n_threads', help='number of threads to launch', \
                    type=int)
parser.add_argument('task', help='task type (branches|error)', \
                    type=str)
parser.add_argument('category', help='category to run', \
                    type=str)
