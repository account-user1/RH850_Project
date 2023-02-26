"""=====================================================================================================================
#      File: Ea4MemoryMetrics.py
#   Project: EA4 project memory metrics parsing tool
#   Created: 2017-12-20
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-12-20  1     Jared     Initial file creation
# -------------------------------------------------------------------------------------------------------------------"""

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
# Python Standard Libraries
import os
import sys
import glob
import argparse
import logging
import datetime

# Add the include directory for this component to the system path to allow importing of local libraries.
relInclude = os.path.join('..', 'include')
absInclude = os.path.abspath(relInclude)
sys.path.insert(1, absInclude)

# 3rd Party Libraries
import tabulate  # https://pypi.python.org/pypi/tabulate/0.7.7

# 1st Party Libraries
import renesas
import report


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
DIE_NO_INTEGRATION_PROJECT = 1
DIE_NO_ELF = 2
DIE_NO_FEE_ARXML = 3
DIE_NO_LINKER = 4
DIE_TOO_MANY_LINKER = 5
DIE_INVALID_OUTPUT = 6
DIE_INVALID_TYPE = 7
DIE_PROCESSOR_NOT_SUPPORTED = 8


# ======================================================================================================================
# Software Version Number
# ----------------------------------------------------------------------------------------------------------------------
VERSION_MAJOR = 1
VERSION_MINOR = 0
VERSION_BUILD = 0
VERSION = "%02d.%02d.%02d" % (VERSION_MAJOR, VERSION_MINOR, VERSION_BUILD)


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def print_summary(device):
    """Print to the console a summay of the memory regions for the supplied processor."""
    table = []
    for flash in device.flash:
        print
        print flash.name
        for section in flash.sections:
            table.append([section.name, hex(section.start), section.length])
        print tabulate.tabulate(table)
    for ram in device.ram:
        print
        print ram.name
        for section in ram.sections:
            table.append([section.name, hex(section.start), section.length])
        print tabulate.tabulate(table)
    for feeMem in device.fee:
        for region in feeMem.regions:
            print region
            for block in region.blocks:
                print ' ', block
    for mem in device.memories:
        print '%s: %0.2f%%' % (mem.name, mem.usage * 100)


# ======================================================================================================================
# Main Function
# ----------------------------------------------------------------------------------------------------------------------
if __name__ == '__main__':
    description = "Nexteer Embedded Software Metrics Tool"
    parser = argparse.ArgumentParser(description=description)
    parser.add_argument(
        '-v', '--verbose',
        default=0,
        action='count',
        help='Output detailed information to console'
    )
    parser.add_argument(
        '-V', '--version',
        action='version',
        version='%%(prog)s %s' % VERSION,
        help='Display version number and exit'
    )
    parser.add_argument(
        '-d', '--dir',
        help='Integration project directory used to attempt auto-location of input files'
    )
    parser.add_argument(
        '-e', '--elf',
        help='Override path to ELF file (If omitted, tool will search within dir above)'
    )
    parser.add_argument(
        '-f', '--fee',
        help='Override path to FEE ECUC ARXML file (If omitted, tool will search within dir above)'
    )
    parser.add_argument(
        '-l', '--linker',
        help='Override path to linker command file (If omitted, tool will search within dir above)'
    )
    parser.add_argument(
        '-o', '--output',
        help='Filename of the report output (defaults to ../output/MemoryMetrics_<Timestamp>)'
    )
    parser.add_argument(
        '-t', '--type',
        choices=['text', 'html'],
        default='html',
        help='Report output format'
    )
    args = parser.parse_args()

    # Setup logging
    levels = [logging.WARNING, logging.INFO, logging.DEBUG]
    logLevel = levels[min(args.verbose, 2)]
    logging.basicConfig(level=logLevel, format='%(levelname)s: %(message)s')

    # Determine the path to the integration project.
    if args.dir:
        integration = args.dir
        if not os.path.exists(integration):
            logging.critical('Specified integration project path is invalid')
            sys.exit(DIE_NO_INTEGRATION_PROJECT)
    elif not args.elf or not args.fee or not args.linker:
        # If the inputs dictate pathes to all of the required files, don't bother looking for the integration project.
        path = os.path.join('..', '..', '*_EPS_*')
        matches = glob.glob(path)
        if len(matches) != 1:
            logging.critical('Cannot determine path to integration project within specified directory')
            sys.exit(DIE_NO_INTEGRATION_PROJECT)
        integration = matches[0]

    # Determine path to ELF file.
    if args.elf:
        # If specified, use that file.
        elf = args.elf
        # Ensure that the input file exits.
        if not os.path.exists(elf):
            logging.critical('Specified ELF file does not exist')
            sys.exit(DIE_NO_ELF)
    else:
        # Search the integration project for the .elf file in the typical output folder location.
        path = os.path.join(integration, 'output', '*.elf')
        logging.info('No path to ELF supplied as an input, automatically searching %s for one', path)
        matches = glob.glob(path)
        if not matches:
            # No .elf file in output folder.
            logging.critical('No elf file found in output path of integration project - has this project been built?')
            sys.exit(DIE_NO_ELF)
        elif len(matches) == 1:
            # Exactly one .elf file in output folder (best case scenario).
            elf = matches[0]
            short = os.path.basename(elf)
            logging.info('Found only one ELF file in output directory, using that (%s)', short)
        else:
            # More than one .elf file in output folder, lets use the newest one.
            # Sort the matches using the creation time in reverse order.
            matches.sort(key=os.path.getctime, reverse=True)
            # The above sort ensures that the zeroth entry in the list is now the newest .elf file.
            elf = matches[0]
            short = os.path.basename(elf)
            logging.warning('More than one ELF file found in output directory, using newest (%s)', short)
            logging.warning('If this is incorrect use the --elf switch to specify the proper elf manually')

    # Determine path to FEE ECUC ARXML file.
    if args.fee:
        # If specified, use that file.
        fee = args.fee
        # Ensure that the specified FEE file exists.
        if not os.path.exists(fee):
            logging.critical('Specified FEE ECUC ARXML file does not exist')
            sys.exit(DIE_NO_FEE_ARXML)
    else:
        # Search the integration project for the FEE ARXML at the usual location in the autosar folder.
        logging.info('No path to FEE ECUC ARXML supplied as an input')
        fee = os.path.join(integration, 'autosar', 'Config', 'ECUC', 'EPS_Fee_ecuc.arxml')
        if not os.path.exists(fee):
            logging.critical('Unable to locate FEE ECUC file at %s as expected', fee)
            logging.critical('Specify an ECUC file manually using --fee switch')
            sys.exit(DIE_NO_FEE_ARXML)

    # Determine path to the linker command file.
    if args.linker:
        # If a specific path was give, use that file.
        linker = args.linker
        # Ensure that the specified linker command file exists.
        if not os.path.exists(linker):
            logging.critical('Specified linker command file does not exist')
            sys.exit(DIE_NO_LINKER)
    else:
        # Search for the linker command file in the tools directory of the integration project.
        path = os.path.join(integration, 'tools', '*.ld')
        logging.info('No path to linker command file supplied as an input, automatically searching %s for one', path)
        matches = glob.glob(path)
        if not matches:
            # No .ld file in output folder.
            logging.critical('No linker command file found in tools path of integration project')
            sys.exit(DIE_NO_LINKER)
        elif len(matches) == 1:
            # Exactly one .ld file in output folder (best case scenario).
            linker = matches[0]
            short = os.path.basename(linker)
            logging.info('Found only one ELF file in output directory, using that (%s)', short)
        else:
            # More than one linker command file?!? Not sure which one to use.
            logging.critical('More than one linker command file was found - unable to determine which to use.')
            logging.critical('Use the --linker switch to specify the correct file')
            sys.exit(DIE_TOO_MANY_LINKER)

    # Determine the processor type from the linker command file name.
    linkerFile = os.path.basename(linker)
    processorName = os.path.splitext(linkerFile)[0]
    try:
        processorType = getattr(renesas, processorName)
    except AttributeError:
        logging.critical('Processor used by this project is not supported by the current version of this tool')
        sys.exit(DIE_PROCESSOR_NOT_SUPPORTED)

    # Print a debug report showing all of the pathes.
    logging.debug('ELF: %s', elf)
    logging.debug('Fee: %s', fee)
    logging.debug('Linker: %s', linker)

    # Build up a processor object from the supplied files.
    processor = processorType(elf, fee, linker)

    # Determine output filename.
    if args.output:
        output = args.output
        if not os.path.splitext(output)[0]:
            logging.critical('Specified output filename is invalid')
            sys.exit(DIE_INVALID_OUTPUT)
    else:
        timestamp = datetime.datetime.now().strftime('%Y%m%dT%H%M')
        output = os.path.join('..', 'output', 'MemoryMetrics_%s' % timestamp)

    # Create the output directory if it doesn't exist.
    folder = os.path.dirname(output)
    if not os.path.exists(folder):
        os.makedirs(folder)

    # Extract the extension to be used at generation to ensure application of proper extension.
    base = os.path.basename(output)
    filename, extension = os.path.splitext(base)

    # Generate the report.
    if args.type == 'text':
        print_summary(processor)
    elif args.type == 'html':
        if extension not in ['.htm', '.html']:
            output += '.html'
        report.html.generate(processor, output)
    else:
        logging.critical('Invalid report type specified')
        sys.exit(DIE_INVALID_TYPE)


# End of File
