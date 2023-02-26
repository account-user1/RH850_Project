import os

# This module should be kept compatible with Python 1.5.2.

__revision__ = "$Id: debug.py 299610 2007-11-09 21:10:21Z andrey $"

# If DISTUTILS_DEBUG is anything other than the empty string, we run in
# debug mode.
DEBUG = os.environ.get('DISTUTILS_DEBUG')

