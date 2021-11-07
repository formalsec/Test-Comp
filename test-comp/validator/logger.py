import logging

fmt = '%(asctime)s: %(message)s'
dateFmt = '%H:%M:%S'

formatter = logging.Formatter(fmt=fmt, datefmt=dateFmt)

logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)

ch = logging.StreamHandler()
ch.setLevel(logging.INFO)
ch.setFormatter(formatter)

logger.addHandler(ch)
