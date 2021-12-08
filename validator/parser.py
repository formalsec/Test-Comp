from argparse import ArgumentParser

parser = ArgumentParser()
parser.add_argument('n_threads', help='number of threads to launch', \
                    type=int)
