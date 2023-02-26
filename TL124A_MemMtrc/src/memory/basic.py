"""=====================================================================================================================
#      File: memory/basic.py
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
import memory.types


# ======================================================================================================================
# Memory Section Classes
# ----------------------------------------------------------------------------------------------------------------------
class Generic(object):
    """This is a generic memory section intended for use with one or more flash memories or RAM memories on a part."""

    EXCLUDED_SECTIONS = [
        '.heap',
        '.symtab',
        '.strtab',
    ]

    def __init__(self, definition):
        self.name = definition.name
        self.type = definition.type
        self.range = definition.range
        self.limit = definition.limit
        self.sections = []
        self.regions = []

    @property
    def available(self):
        """Return the total amount of available space for this memory.  For Flash memory, take into account the memory
        map as not all of the flash memory may be allocated."""
        if self.type == memory.types.FLASH:
            return sum([region.size for region in self.regions])
        return self.range.available

    @property
    def consumed(self):
        """Return the total number of bytes used in this memory.  For flash memory, use the underlying region to compute
        the usage."""
        if self.type == memory.types.FLASH:
            return sum([region.usage for region in self.regions])
        return sum([section.length for section in self.sections if section.name not in self.EXCLUDED_SECTIONS])

    @property
    def usage(self):
        """Return the percentage of memory used on a scale from zero to one.  This represents the percentage of this
        memory region that is currently utilized."""
        if self.available:
            return float(self.consumed) / self.available
        return 1

    @property
    def near_limit(self):
        """Returns boolean True if this memory region is within the configured threshold of the limit.  The limit is set
        to provide pass/fail criteria for memory usage and to provide colorful feedback within the reporting
        documentation."""
        return self.limit.near(self.usage)

    @property
    def over_limit(self):
        """Return boolean True if this memory region is over the configured threshold for the limit.  The limit is set
        to provide pass/fail criteria for memory usage and to provide colorful feedback within the reporting
        documentation."""
        return self.limit.over(self.usage)

    def within(self, section):
        """Given an address, return a boolean indicating if the address falls within this memory."""
        return self.range.between(section)

    def sort(self):
        """Sort the sections contained within this memory."""
        self.sections.sort(key=lambda section: section.start)


# ======================================================================================================================
# Region Class - Used to describe Flash sub-sections
# ----------------------------------------------------------------------------------------------------------------------
class Region(object):
    """Regions are used specifically within Flash memory to better group the memory segements into the chunks defined
    within the linker command file.  Regions are things like application and calibration sections within the memory
    map."""
    def __init__(self, name):
        self.name = name
        self.segments = []
        self.sections = []

    @property
    def start(self):
        """Returns the staring address for this section."""
        return min([segment.start for segment in self.segments])

    @property
    def end(self):
        """Returns the ending address for this section."""
        return max([segment.end for segment in self.segments])

    @property
    def size(self):
        """Returns the size (in bytes) for this section."""
        return self.end - self.start + 1

    @property
    def usage(self):
        """Returns the total number of bytes currently utilized within this section."""
        return sum([section.length for section in self.sections])

    @property
    def percent(self):
        """Returns the percentage of this section that is utilized on a scale from zero to one."""
        return float(self.usage) / self.size

    def contains(self, address):
        """Returns boolean True of the supplied address falls within this region."""
        return self.start <= address <= self.end

    def __repr__(self):
        """Pretty print this regions information for debugging."""
        parts = ['Region']
        parts.append('name="%s"' % self.name)
        parts.append('start=0x%08X' % self.start)
        parts.append('end=0x%08X' % self.end)
        parts.append('segments=[%s]' % ', '.join(repr(segment) for segment in self.segments))
        return '<' + ' '.join(parts) + '>'


# ----------------------------------------------------------------------------------------------------------------------
class Segment(object):
    # pylint: disable=R0903
    # No additinal public methods are needed to represent a segment but a class is required to better organize the
    # properties.

    """A simple piece of memory.  This generally corresponds with entries in the .elf file for linker sections."""

    def __init__(self, name, address, length):
        self.name = name
        self.start = address
        self.length = length

    @property
    def end(self):
        """Returns the end address for this segment knowing the start address and the length."""
        return self.start + self.length - 1

    def __repr__(self):
        """Pretty print this segment for debugging."""
        parts = ['Segment']
        parts.append('name="%s"' % self.name)
        parts.append('start=0x%08X' % self.start)
        parts.append('end=0x%08X' % self.end)
        parts.append('length=%d' % self.length)
        return '<' + ' '.join(parts) + '>'



# End of File
