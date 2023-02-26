# ======================================================================================================================
#      File: SwOptSw.py
#   Project: EA4 Software Options Switching Tool
#   Created: 2017-01-04
#  Modified: 2017-01-04
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
# ---------------------------------------------------------------------------------------------------------------------
# This tool is used to turn EA4 software features on/off by turning corresponding definitions in appropriate header
# files to STD_ON or STD_OFF respectively.
# ---------------------------------------------------------------------------------------------------------------------
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-01-04  1     Jared     Initial file creation with support for Swp, FltInj, DETs, XcpWr, MecUnlck, and McuErrInj
# ----------------------------------------------------------------------------------------------------------------------

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import os
import re
import stat
import argparse
import logging


# ======================================================================================================================
# Software Version Number
# ----------------------------------------------------------------------------------------------------------------------
VERSION_MAJOR = 1
VERSION_MINOR = 1
VERSION_BUILD = 2
VERSION = "%02d.%02d.%02d" % (VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD)
BUILD_DATE = "2016-12-21"


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def updateConfig(filename, pattern, replace):
    if os.path.exists(filename):
        logging.debug('Updating config file %s', filename)
        logging.debug('Pattern: \'%s\'', pattern.pattern)
        logging.debug('Replace: %s', repr(replace))
        with open(filename) as inFile:
            input = inFile.read()
        output = pattern.sub(replace, input)
        if input != output:
            logging.info('File changed, writing new contents to %s', filename)
            os.chmod(filename, stat.S_IWRITE)
            with open(filename, 'w') as outFile:
                outFile.write(output)
        else:
            logging.info('File (%s) did not change, write skipped', filename)
    else:
        logging.error('File (%s) does not exist, failed to update setting', filename)


# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == "__main__":
    description = "\n---[ EA4 Application Software Feature Switcher ]---\n"
    description += "Allows command line enable/disable of software features for EA4 programs.\n"
    description += '- Version: %s\n' % VERSION
    description += '- Build Date: %s\n' % BUILD_DATE
    description += '- Author: Jared Julien <jared.julien@nexteer.com>\n'
    parser = argparse.ArgumentParser(description=description, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('-d', '--det', action='store_true', help='enable DET')
    parser.add_argument('-s', '--sweep', action='store_true', help='enable sweep')
    parser.add_argument('-f', '--fltinj', action='store_true', help='enable fault injection')
    parser.add_argument('-x', '--xcp', action='store_true', help='enable XCP write access')
    parser.add_argument('-m', '--mec', action='store_true', help='enable NMEC unlock (no assist)')
    parser.add_argument('-e', '--errinj', action='store_true', help='enable micro diagnostics error injection')
    parser.add_argument('-v', '--verbose', default=0, action='count', help='output detailed information to console')
    args = parser.parse_args()

    # Setup logging
    levels = [logging.WARNING, logging.INFO, logging.DEBUG]
    logLevel = levels[min(args.verbose, 2)]
    logging.basicConfig(level=logLevel)
    logging.getLogger('requests').setLevel(logging.WARNING)

    # Print a welcome message
    print description

    # Print a summary of the selected configuration
    print
    print 'Setting Summary:'
    print '                 DET:', 'ON' if args.det else 'OFF'
    print '               Sweep:', 'ON' if args.sweep else 'OFF'
    print '     Fault Injection:', 'ON' if args.fltinj else 'OFF'
    print '     Error Injection:', 'ON' if args.errinj else 'OFF'
    print '    XCP Write Access:', 'ON' if args.xcp else 'OFF'
    print '  Nexteer MEC Unlock:', 'ON' if args.mec else 'OFF'
    print

    # Determine the integration project folder path automagically
    projectFolder = ''
    baseFolder = os.path.join('..', '..')
    for item in os.listdir(baseFolder):
        path = os.path.join(baseFolder, item)
        if os.path.isdir(path) and '_Eps_Impl_' in item:
            projectFolder = item
            logging.info('Determined integration project folder name to be "%s"', projectFolder)

    # Warn when doing a fault injection or sweep configuration without adding XCP write support
    if (args.sweep or args.fltinj) and not args.xcp:
        logging.warning('XCP write access is needed by Sweep or FltInj builds')

    # Enable/disable Development Error Trace (DET) module
    logging.debug('Setting DET enable')
    filename = os.path.join(baseFolder, projectFolder, 'generate', 'Det_Cfg.h')
    pattern = re.compile(r'\s*#?d?e?f?i?n?e? ?D?E?T?_?E?N?A?B?L?E?D?\s+#define DET_VERSION_INFO_API')
    if args.det:
        replace = '\n\n#define DET_ENABLED\n\n#define DET_VERSION_INFO_API'
        logging.info('Enabling DET')
    else:
        replace = '\n\n#define DET_VERSION_INFO_API'
        logging.info('Disabling DET')
    updateConfig(filename, pattern, replace)

    # Enable/disable fault injection
    logging.debug('Setting fault injection enable')
    filename = os.path.join(baseFolder, 'DF001A_FltInj_Impl', 'include', 'FltInj.h')
    pattern = re.compile(r'#define FLTINJENA\s+\(STD_O[NF]+\)')
    replace = '#define FLTINJENA\t\t\t\t\t\t\t\t   (STD_%s)' % ('ON' if args.fltinj else 'OFF')
    if args.fltinj:
        logging.info('Enabling fault injection')
    else:
        logging.info('Disabling fault injection')
    updateConfig(filename, pattern, replace)

    # Enable/disable micro diagnostics error injection
    logging.debug('Setting error injection enable')
    filename = os.path.join(baseFolder, 'DF003A_McuErrInj_Impl', 'include', 'McuErrInj.h')
    pattern = re.compile(r'#define MCUDIAGCERRINJ\s+\(STD_O[NF]+\)')
    replace = '#define MCUDIAGCERRINJ                        STD_%s' % ('ON' if args.errinj else 'OFF')
    if args.errinj:
        logging.info('Enabling error injection')
    else:
        logging.info('Disabling error injection')
    updateConfig(filename, pattern, replace)

    # Enable/disable sweep
    logging.debug('Setting sweep enable')
    filename = os.path.join(baseFolder, 'DF002A_Swp_Impl', 'include', 'Swp.h')
    pattern = re.compile(r'#define SWPENA\s+\(STD_O[NF]+\)')
    replace = '#define SWPENA\t\t(STD_%s)' % ('ON' if args.sweep else 'OFF')
    if args.sweep:
        logging.info('Enabling sweep')
    else:
        logging.info('Disabling sweep')
    updateConfig(filename, pattern, replace)

    # Enable/disable XCP write access
    logging.debug('Setting XCP write enable')
    filename = os.path.join(baseFolder, projectFolder, 'generate', 'TunSelnMngt_Cfg_private.h')
    pattern = re.compile(r'#define TUNSELNMNGTDEVLPMODENA\s+STD_O[NF]+')
    replace = '#define TUNSELNMNGTDEVLPMODENA         STD_%s' % ('ON' if args.xcp else 'OFF')
    if args.xcp:
        logging.info('Enabling XCP write access')
    else:
        logging.info('Disabling XCP write access')
    updateConfig(filename, pattern, replace)

    # Enable/disable XCP write access
    logging.debug('Setting NMEC unlock enable')
    filename = os.path.join(baseFolder, 'NM001A_CmnMfgSrv_Impl', 'include', 'CmnMfgSrv.h')
    pattern = re.compile(r'#define CMNMFGSRVNXTRMFGENACNTRUNLCK\s+STD_O[NF]+')
    replace = '#define CMNMFGSRVNXTRMFGENACNTRUNLCK  STD_%s' % ('ON' if args.mec else 'OFF')
    if args.mec:
        logging.info('Enabling NMEC unlock build')
    else:
        logging.info('Disabling NMEC unlock build')
    updateConfig(filename, pattern, replace)


# End of File: Ea4FeatureSwitch.py