"""=====================================================================================================================
#      File: report/format.py
#   Project: EA4 project memory metrics parsing tool
#   Created: 2017-05-16
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-05-16  1     Jared     Initial file creation
# -------------------------------------------------------------------------------------------------------------------"""

# ======================================================================================================================
# Formatting Functions
# ----------------------------------------------------------------------------------------------------------------------
def sizeof(num, suffix=''):
    """Given a number of bytes as an input, convert it into a human-friendly approximation showing units."""
    for unit in ['', 'k', 'M', 'G', 'T', 'P', 'E', 'Z']:
        if abs(num) < 1024.0:
            if int(num) == float(num):
                return "%d%s%s" % (num, unit, suffix)
            return "%3.1f%s%s" % (num, unit, suffix)
        num /= 1024.0
    if int(num) == float(num):
        return "%dY%s" % (num, suffix)
    return "%.1fY%s" % (num, suffix)

# ----------------------------------------------------------------------------------------------------------------------
def percent(num, limit=None):
    """Convert an input between zero and one to a human-friendly string including a percent sign.  If limit is specified
    then the decimal point will be limited to an integer number of digits."""
    formatStr = ('%%.%df%%%%' % limit) if limit else '%f%%'
    return formatStr % (num * 100)



# End of File
