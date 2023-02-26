# ======================================================================================================================
#      File: UpdateNxtrSwIds.py
#   Project: Nexteer Software IDs
#   Created: 2016-01-26
#  Modified: 2016-01-26
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2016 Nexteer Automotive
#
# Description:
# ------------
# This script is called via a build option on every build and is used to update NxtrSwIdsCfg.c in the generate folder
# of the integration project.  This script specifically sets the software origin to reflect the build type, the author
# is set to the z-id of the currently logged-in user, and the PSR ID is enforced as a non-zero value when performing a
# PSR build.
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2016-01-26  1     Jared     Initial file creation
# ----------------------------------------------------------------------------------------------------------------------
# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import os
import re
import sys
import glob
import getpass


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
BUILD_SERVER_USER = 'system'


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def setAuthor(input, author):
    find = r'NxtrSwIds_SwAuthor_Cnt_u08\[6U\] = "[a-zA-Z0-9]{0,6}";'
    replace = r'NxtrSwIds_SwAuthor_Cnt_u08[6U] = "%s";' % author
    return re.sub(find, replace, input)

# ----------------------------------------------------------------------------------------------------------------------
def getOriginFlag(input):
    return re.findall(r'NxtrSwIds_SwOrigin_Cnt_enum = SWORIGIN_([A-Z]+);', input)[0]

# ----------------------------------------------------------------------------------------------------------------------
def setOriginFlag(input, flag):
    find = r'NxtrSwIds_SwOrigin_Cnt_enum = SWORIGIN_([A-Z]+);'
    replace = r'NxtrSwIds_SwOrigin_Cnt_enum = SWORIGIN_%s;' % flag
    return re.sub(find, replace, input)

# ----------------------------------------------------------------------------------------------------------------------
def getPsrId(input):
    return int(re.findall(r'NxtrSwIds_PsrId_Cnt_u32 = ([0-9]+)', input)[0])


# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == "__main__":
    print 'Running %s' % sys.argv[0]
    search = '../../*_EPS_*/generate/NxtrSwIdsCfg.c'
    path = glob.glob(search)[0]
    filename = os.path.basename(path)
    with open(path) as inFile:
        source = inFile.read()
    input = source
    zid = getpass.getuser().lower()
    flag = getOriginFlag(source)
    if flag not in ['PROD', 'DEV', 'PSR']:
        print 'ERROR: Unknown origin flag in %s: "%s"' % (filename, flag)
        print 'Allowable values are [SWORIGIN_PROD, SWORIGIN_DEV, SWORIGIN_PSR]'
        sys.exit(1)
    if zid != BUILD_SERVER_USER:
        # we only care to change stuff if this isn't the build server
        if flag == 'PROD':
            # Don't allow production builds on machines other than the build server
            print 'WARNING: you are not the build server and as such cannot build a production build.'
            print 'Changing SWORIGIN_PROD to SWORIGIN_DEV in %s' % filename
            source = setOriginFlag(source, 'DEV')
        # Set this user's zid as the author of this build
        source = setAuthor(source, zid)
        if flag == 'PSR':
            psrId = getPsrId(source)
            if psrId == 0:
                print 'ERROR: PSR build without ID set - set ID in %s or change origin to SWORIGIN_DEV' % filename
                sys.exit(2)
    if input != source:
        with open(path, 'w+') as outFile:
            outFile.write(source)


# End of File: UpdateNxtrSwIds.py