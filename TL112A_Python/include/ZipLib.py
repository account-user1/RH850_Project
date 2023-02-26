"""=====================================================================================================================
#      File:  ZipLib.py
#   Project:  Python library zipping utility
#    Author:  Jared Julien <jared.julien@nexteer.com>
# Copyright:  (c) 2017 Jared Julien
# ---------------------------------------------------------------------------------------------------------------------
# Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
# documentation files (the "Software"), to deal in the Software without restriction, including without limitation the
# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all copies or substantial portions of the
# Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS
# OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
# OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
# ---------------------------------------------------------------------------------------------------------------------
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-07-11  1     JWJ       Initial version
# -------------------------------------------------------------------------------------------------------------------"""

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import zipfile
import os
import sys
import logging
import argparse
from argparse import RawTextHelpFormatter



# ======================================================================================================================
# Software Version Information
# ----------------------------------------------------------------------------------------------------------------------
VERSION = "% version: 1 %"
AUTHOR = "% derived_by: kzdyfh %"



# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------



# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == "__main__":
    versionNumber = VERSION.split(':', 1)[1].strip('% ')
    authorId = AUTHOR.split(':', 1)[1].strip('% ')
    description = "Python library zipping tool\n"
    description += '- Version: %s\n' % versionNumber
    description += '- Author: %s' % authorId
    version = '%%(prog)s %s' % (versionNumber)

    # Parse the remainder of the arguments
    parser = argparse.ArgumentParser(description=description, formatter_class=RawTextHelpFormatter)
    parser.add_argument(
        'target',
        help='Directory containing a library to be zipped'
    )
    parser.add_argument(
        '-v',
        '--verbose',
        default=0,
        action='count',
        help='Output more detailed information to console.'
    )
    parser.add_argument(
        '-V',
        '--version',
        action='version',
        version=version,
        help='Display version number and exit.'
    )
    args = parser.parse_args()

    # Setup logging
    logLevel = [logging.WARNING, logging.INFO, logging.DEBUG][min(args.verbose, 2)]
    shellHandler = logging.StreamHandler()
    shellHandler.setLevel(logLevel)
    shellHandler.setFormatter(logging.Formatter('%(levelname)s: %(message)s'))
    logger = logging.getLogger('')
    logger.addHandler(shellHandler)
    logger.setLevel(logLevel)

    # Ensure that the target exists.
    if not os.path.exists(args.target):
        logging.critical('Target library directory does not exist')
        sys.exit(1)

    # Create a zip file named the same as the target directory.
    filename = args.target + '.zip'
    archive = zipfile.ZipFile(filename, 'w', zipfile.ZIP_DEFLATED)

    # Walk the directory and write files to archive.
    for root, dirs, files in os.walk(args.target):
        for filename in files:
            name, ext = os.path.splitext(filename)
            if ext not in ['.pyc', '.pyo']:
                archive.write(os.path.join(root, filename))

    archive.close()

# End of File
