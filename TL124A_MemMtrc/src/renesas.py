"""=====================================================================================================================
#      File: Ea4MemoryMetrics.py
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
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
# Python Standard Libraries
import logging
import xml.etree.ElementTree as ET
import re
import struct

# 3st Party Libraries
import elftools.elf.elffile  # https://pypi.python.org/pypi/pyelftools
import elftools.elf.sections # https://pypi.python.org/pypi/pyelftools

# 1st Party Libraries
import memory


# ======================================================================================================================
# Exceptions
# ----------------------------------------------------------------------------------------------------------------------
class ParseError(Exception):
    """Thrown when a parsing error occurs such as when an expected section wasn't found in an input file."""


# ======================================================================================================================
# Constants
# ----------------------------------------------------------------------------------------------------------------------
NAMESPACE = {
    'autosar': 'http://autosar.org/schema/r4.0',
}


# ======================================================================================================================
# Helper Functions
# ----------------------------------------------------------------------------------------------------------------------
def build_image(elf):
    """Build a binary image (in the form of a large list) from the supplied elf file.  The elftools library doesn't seem
    to provide support for parsing the program header information so that is effectively what's being done here.  Note:
    this function is very fragile and is specific to the EA4 ELF file architecture (assumms little endian)."""
    def read_long(addr):
        """Helper function to fetch a 4 byte long from the specified address in the elf file."""
        elf.stream.seek(addr)
        return struct.unpack('i', elf.stream.read(4))[0]
    phnum = elf.header['e_phnum']
    phentsize = elf.header['e_phentsize']
    phoff = elf.header['e_phoff']
    program = {}
    for idx in range(phnum):
        beginning = phoff + (phentsize * idx)
        secType = read_long(beginning)
        offset = read_long(beginning + 0x04)
        vaddr = read_long(beginning + 0x08)
        filesz = read_long(beginning + 0x10)
        memsz = read_long(beginning + 0x14)
        if secType == 1 and offset > 0 and filesz > 0 and memsz > 0:
            elf.stream.seek(offset)
            for byte in range(memsz):
                program[vaddr + byte] = ord(elf.stream.read(1))
    image = []
    for idx in range(max(program.keys()) + 1):
        image.append(program.get(idx, 0xFF))
    return image

# ----------------------------------------------------------------------------------------------------------------------
def get_symbol(elf, name):
    """Given the name of a symbol, determine it's address in the binary and look up it's value.  The symbol is expected
    to be a constant and the value returned is a byte array that must be converted to the proper type by the end user.
    """
    image = build_image(elf)
    symbols = elf.get_section_by_name('.symtab')
    for symbol in symbols.iter_symbols():
        if name in symbol.name:
            address = symbol.entry['st_value']
            size = symbol.entry['st_size']
            return image[address : address + size]
    return None

# ----------------------------------------------------------------------------------------------------------------------
def search_cfg(fee, parameters, name, default=None):
    """Search an XML tree holding FEE config information for the requested parameter and return it's value.  If not
    found return the default parameter."""
    prefix = '/MICROSAR/Fee_30_SmallSector/Fee' if fee.is_small else '/MICROSAR/Fee'
    name = prefix + name
    for parameter in parameters:
        if parameter.find('autosar:DEFINITION-REF', NAMESPACE).text == name:
            return int(parameter.find('autosar:VALUE', NAMESPACE).text)
    return default

# ----------------------------------------------------------------------------------------------------------------------
def parse_fee_regions(fee, tree):
    """Given a FEE reference and an XML tree contianing config information, extract all of the FEE region information
    and turn it into a list of Region instances under the fee."""
    # First, load the FEE regions from the config file.
    for packages in tree.findall('autosar:AR-PACKAGES', NAMESPACE):
        package = packages.find('autosar:AR-PACKAGE', NAMESPACE)
        for elements in package.findall('autosar:ELEMENTS', NAMESPACE):
            element = elements.find('autosar:ECUC-MODULE-CONFIGURATION-VALUES', NAMESPACE)
            definition = element.find('autosar:DEFINITION-REF', NAMESPACE)
            fee.is_small = 'smallsector' in definition.text.lower()
            containers = element.find('autosar:CONTAINERS', NAMESPACE)
            for container in containers.findall('autosar:ECUC-CONTAINER-VALUE', NAMESPACE):
                if 'FeePartitionConfiguration' not in container.find('autosar:DEFINITION-REF', NAMESPACE).text:
                    # Only interested in partition configurations at this point.
                    continue
                values = container.find('autosar:PARAMETER-VALUES', NAMESPACE)
                parameters = values.findall('autosar:ECUC-NUMERICAL-PARAM-VALUE', NAMESPACE)
                name = container.find('autosar:SHORT-NAME', NAMESPACE).text
                if fee.is_small:
                    address = search_cfg(fee, parameters, '/FeePartitionConfiguration/FeePartitionAddressAlignment', 64)
                    write = search_cfg(fee, parameters, '/FeePartitionConfiguration/FeePartitionWriteAlignment', 4)
                    size = search_cfg(fee, parameters, '/FeePartitionConfiguration/FeePartitionSize', 0)
                else:
                    address = search_cfg(fee, parameters, '/FeePartitionConfiguration/FeeAddressAlignment', 8)
                    size = search_cfg(fee, parameters, '/FeePartitionConfiguration/FeeUpperSectorSize', 0)
                    write = 0
                fee.add_region(name, address, write, size)

# ----------------------------------------------------------------------------------------------------------------------
def parse_fee_blocks(fee, tree):
    """Once the region(s) have been loaded, this function is used to parse blocks from the FEE config file and append
    them to the correspondings regions in the FEE memory instance."""
    for packages in tree.findall('autosar:AR-PACKAGES', NAMESPACE):
        for elements in packages.find('autosar:AR-PACKAGE', NAMESPACE).findall('autosar:ELEMENTS', NAMESPACE):
            element = elements.find('autosar:ECUC-MODULE-CONFIGURATION-VALUES', NAMESPACE)
            containers = element.find('autosar:CONTAINERS', NAMESPACE)
            for container in containers.findall('autosar:ECUC-CONTAINER-VALUE', NAMESPACE):
                if 'FeeBlockConfiguration' not in container.find('autosar:DEFINITION-REF', NAMESPACE).text:
                    # Only interested in block definitions at this point.
                    continue
                values = container.find('autosar:PARAMETER-VALUES', NAMESPACE)
                parameters = values.findall('autosar:ECUC-NUMERICAL-PARAM-VALUE', NAMESPACE)
                name = container.find('autosar:SHORT-NAME', NAMESPACE).text
                instances = search_cfg(fee, parameters, '/FeeBlockConfiguration/FeeNumberOfChunkInstances', 1)
                datasets = search_cfg(fee, parameters, '/FeeBlockConfiguration/FeeNumberOfDatasets', 1)
                size = search_cfg(fee, parameters, '/FeeBlockConfiguration/FeeBlockSize', 0)
                values = container.find('autosar:REFERENCE-VALUES', NAMESPACE)
                for reference in values.findall('autosar:ECUC-REFERENCE-VALUE', NAMESPACE):
                    if 'FeeBlockConfiguration/FeePartition' in reference.find('autosar:DEFINITION-REF', NAMESPACE).text:
                        partition = reference.find('autosar:VALUE-REF', NAMESPACE).text.split('/')[-1]
                        fee.add_block(partition, name, instances, datasets, size)


# ======================================================================================================================
# Processor Hardware Classes
# ----------------------------------------------------------------------------------------------------------------------
class Processor(object):
    """Base class used to represent a Renesas processor.  Extend the class and override the MEMORIES array with a list
    of memories specific to a device."""
    MEMORIES = []

    def __init__(self, elf, feeArxml, lnkrCmd):
        self.program = None
        self.version = None

        self.memories = []

        for definition in self.MEMORIES:
            mem = definition.get_instance()
            self.memories.append(mem)

        self.parse_elf(elf)
        self.parse_fee_cfg(feeArxml)
        self.parse_lnkr_cmd(lnkrCmd)
        self.sort()
        self.join_regions()

    @property
    def flash(self):
        """Return a list of memories for the device that are of type FLASH."""
        return [mem for mem in self.memories if mem.type == memory.types.FLASH]

    @property
    def ram(self):
        """Return a list of memories for the device that are of type RAM."""
        return [mem for mem in self.memories if mem.type == memory.types.RAM]

    @property
    def fee(self):
        """Return a list of memories for the device that are of type FEE."""
        return [mem for mem in self.memories if mem.type == memory.types.FEE]

    def append(self, section):
        """Append a memory section to the appropriate region based upon the sections address."""
        for mem in self.memories:
            if mem.within(section):
                mem.sections.append(section)
                return
        args = (section.name, self.__class__.__name__)
        logging.error('Unable to map section "%s" to a hardware location for the %s memory map', *args)

    def parse_elf(self, filename):
        """Parse the supplied ELF file to get the memory sections contained in RAM and Flash memories."""
        def parse_program_and_version(elf):
            """Helper functio to parse the program name and version number from the .elf file.  This convention is
            Nexteer specific and is looking for symbols defined in EA4 software by the NM001A component."""
            raw = get_symbol(elf, 'NxtrSwIds_SwRelNr')
            string = ''.join(chr(b) for b in raw)
            self.program = string[:16].replace('\0', '')
            self.version = string[16:].replace('\0', '')
        with open(filename, 'rb') as handle:
            elf = elftools.elf.elffile.ELFFile(handle)
            parse_program_and_version(elf)
            for sect in elf.iter_sections():
                if not isinstance(sect, elftools.elf.sections.Section):
                    continue
                section = memory.basic.Segment(sect.name, sect.header['sh_addr'], sect.header['sh_size'])
                if section.start == 0x00:
                    # Ignore special sections such as debug info and the symbol table that aren't in the application.
                    continue
                self.append(section)

    def parse_fee_cfg(self, filename):
        """Parse an ARXML configuration file to get the memory blocks for data flash."""
        for fee in self.fee:
            tree = ET.parse(filename)
            parse_fee_regions(fee, tree)
            parse_fee_blocks(fee, tree)



    def parse_lnkr_cmd(self, filename):
        """Parse a linker command file for the Green Hills compiler into the appropriate memory segments configured in
        the file for the corresponding program.  This file includes the breakdown for such things as the application and
        calibration regions and can even contain statements for the bootloader region."""
        with open(filename) as handle:
            contents = handle.read()
        memSect = re.findall(r'MEMORY\s+?\{\s+(.+?)\s*\}', contents, re.DOTALL)
        if not memSect:
            raise ParseError('No MEMORY section found in linker command file.')
        elif len(memSect) > 1:
            raise ParseError('More than one MEMORY section found in linker command file - only expected one.')
        sections = memSect[0].split('\n\n')
        for flash in self.flash:
            for section in sections:
                lines = section.split('\n')
                header = lines[0]
                if 'ORIGIN' not in header and 'LENGTH' not in header:
                    region = memory.basic.Region(header.lstrip(' /*').rstrip('*/ '))
                    lines = lines[1:]
                else:
                    region = memory.basic.Region('Unknown')
                for line in lines:
                    name = re.search(r'^\s*(\w+)', line)
                    origin = re.search(r'ORIGIN=0x([0-9a-fA-F]+)', line)
                    length = re.search(r'LENGTH=0x([0-9a-fA-F]+)', line)
                    if name and origin and length:
                        name = name.group(1)
                        origin = int(origin.group(1), 16)
                        length = int(length.group(1), 16)
                        region.segments.append(memory.basic.Segment(name, origin, length))
                if region.segments:
                    flash.regions.append(region)

    def sort(self):
        """Sort the memories by address in ascending order."""
        for mem in self.memories:
            mem.sort()

    def join_regions(self):
        """Step through the flash memory for the device and parse the flash sections into the regions that were
        previously parsed from the linker command file.  This helps to better sort the usage into the memory map that
        Nexteer has defined for the program rather than the overall map for the device.  This is importants as memory
        that has been allocated to cals is not available for application unless a change to the memory map (and most
        likely the bootloader) takes place."""
        for flash in self.flash:
            for section in flash.sections:
                for idx, region in enumerate(flash.regions):
                    if region.contains(section.start):
                        flash.regions[idx].sections.append(section)



# ----------------------------------------------------------------------------------------------------------------------
class dr7f701311(Processor):
    # pylint: disable=C0103
    # Class name does not meet standards but is names exactly like linker command filename.
    """Extension of the processor class with memory definitions for the Renesas dr7f701311 P1M device."""
    MEMORIES = {
        memory.Definition(
            'Flash',
            memory.types.FLASH,
            memory.Range(0x00000000, 0x00200000),
            memory.Limit(0.75)
        ),
        memory.Definition(
            'Local RAM',
            memory.types.RAM,
            memory.Range(0xFEBE0000, 0xFEBFFFFF),
            memory.Limit(0.8)
        ),
        memory.Definition(
            'FEE',
            memory.types.FEE,
            memory.Range(),
            memory.Limit(0.65)
        )
    }

# ----------------------------------------------------------------------------------------------------------------------
class dr7f701373(Processor):
    # pylint: disable=C0103
    # Class name does not meet standards but is names exactly like linker command filename.
    """Extension of the processor class with memory definitions for the Renesas dr7f701373 P1M-C device."""
    MEMORIES = {
        memory.Definition(
            'Flash',
            memory.types.FLASH,
            memory.Range(0x00000000, 0x00200000),
            memory.Limit(0.75)
        ),
        memory.Definition(
            'Local RAM',
            memory.types.RAM,
            memory.Range(0xFEBE0000, 0xFEBFFFFF),
            memory.Limit(0.8)
        ),
        memory.Definition(
            'Global RAM',
            memory.types.RAM,
            memory.Range(0xFEED8000, 0xFEF27FFF),
            memory.Limit(0.8)
        ),
        memory.Definition(
            'FEE',
            memory.types.FEE,
            memory.Range(),
            memory.Limit(0.65)
        )
    }

# End of File
