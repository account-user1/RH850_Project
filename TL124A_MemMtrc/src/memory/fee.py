"""=====================================================================================================================
#      File: memory/fee.py
#   Project: EA4 project memory metrics parsing tool
#   Created: 2017-05-16
#    Author: Jared Julien
#     Email: jared.julien@nexteer.com
# Copyright: (c) 2017 Nexteer Automotive
#
#                              .-----.
#                              | FEE |
#                              '-----'
#                                 |
#               .-----------------o-----------------.
#               |                                   |
#           .-------.                           .-------.
#           | Regn0 |                           | Regn1 |
#           '-------'                           '-------'
#               |                                   |
#     .---------o--------.           .---------o----o---o---------.
#     |         |        |           |         |        |         |
# .------.  .------.  .------.   .------.  .------.  .------.  .------.
# | BlkA |  | BlkB |  | BlkC |   | BlkD |  | BlkE |  | BlkF |  | BlkG |
# '------'  '------'  '------'   '------'  '------'  '------'  '------'
#
# The Fee class overrides the properties of the Generic memory class to better facilitate the block configuration and
# static nature of FEE blocks vs. other forms of memory.  The Fee class also handles calculation of overheads for FEE
# blocks in memory to more accurately represent the amount of space that is used by a given block in physical memory.
#
# Date        Rev   Author    Change Description
# ==========  ====  ========  =========================================================================================
# 2017-05-16  1     Jared     Initial file creation
# -------------------------------------------------------------------------------------------------------------------"""

# ======================================================================================================================
# Import Statements
# ----------------------------------------------------------------------------------------------------------------------
import memory.basic


# ======================================================================================================================
# FEE Memory Section Classes
# ----------------------------------------------------------------------------------------------------------------------
class Fee(memory.basic.Generic):
    """Extens the Generic memory class and overrides some of the property calculations to account for the fee regions
    and block configuration."""
    def __init__(self, definition):
        memory.basic.Generic.__init__(self, definition)
        self.is_small = None

    @property
    def consumed(self):
        """Returns the total consumed space for all of the regions within this overall FEE container."""
        return sum([region.consumed for region in self.regions])

    @property
    def available(self):
        """Returns the total available space for all FEE regions withing theis Fee container."""
        return sum([region.available for region in self.regions])

    @property
    def usage(self):
        """Returns the percentage of the available space that has been consumed between [0, 1]."""
        if self.available == 0:
            return 1
        return float(self.consumed) / self.available

    @property
    def near_limit(self):
        """Returns boolean True when the current FEE usage is within tolerance of the threshold set in the
        configuration."""
        return self.limit.near(self.usage)

    @property
    def over_limit(self):
        """Returns boolean True when the current FEE usage exceeds the threshold set in the configuration."""
        return self.limit.over(self.usage)

    def add_region(self, name, address, write, size):
        """Add a region to this FEE image.  The attributes name, address, write, and size define the region.
        The address parameter is the address alignment, in bytes, for the processor.  The write parameter is
        the write alignment, in bytes, for the processor."""
        region = Region(self)
        region.name = name
        region.address = address
        region.write = write
        region.size = size
        self.regions.append(region)
        return region

    def add_block(self, region, name, instances, datasets, size):
        # pylint: disable=R0913
        # Argument count cannot be reduced and still describe a block without increased complexity.

        """Add a FEE block into the specified region of FEE memory.  The attributes for name, instances,
        datasets, and size define the FEE block."""

        def get_region(name):
            """Helper function to lookup a region by name."""
            for region in self.regions:
                if region.name == name:
                    return region
            raise IndexError('No region exists with the specified name "%s"' % name)

        region = get_region(region)
        block = Block(region)
        block.name = name
        block.instances = instances
        block.datasets = datasets
        block.size = size
        region.blocks.append(block)
        return block


# ----------------------------------------------------------------------------------------------------------------------
class Region(object):
    """A region is a subcontainer within the FEE memory that holds blocks.  There must be at least one region
    but can often be two or even more.  This depends upon the project configuration."""
    def __init__(self, fee):
        self.fee = fee
        self.name = ''
        self.size = 0
        self.address = 8
        self.write = 4
        self.blocks = []

    @property
    def available(self):
        """Returns the overall size of this region, which indicates the total amount of space available
        within the region in bytes."""
        return self.size

    @property
    def user_data(self):
        """Returns the total number of bytes of user data within this region.  This total only indicates the
        number of bytes allocated by the software and does not include any overhead for headers or
        alignments."""
        return sum([block.user_data for block in self.blocks])

    @property
    def overhead(self):
        """Returns the total overhead for this region in bytes.  Overhead is calculated for each block below
        and then summed together to produce a total.  See the block.overhead for more information about
        the actual overhead calculation."""
        return sum([block.overhead for block in self.blocks])

    @property
    def consumed(self):
        """Returns the total number of bytes consumed by this region.  This value includes both the user data
        and the overhead for each block representing the actual physical footprint of the FEE data."""
        return self.user_data + self.overhead

    @property
    def free(self):
        """Returns the amount of bytes NOT being used by this region."""
        return self.available - self.consumed

    @property
    def usage(self):
        """Returns the percentage, between zero and 1, of space consumed by the user data and overhead for
        this region."""
        if self.available == 0:
            return 1
        return float(self.consumed) / self.available

    def __repr__(self):
        """Make a pretty representation of this region for use when printing for debug."""
        parts = ['Region']
        parts.append('name="%s"' % self.name)
        parts.append('size=%d' % self.size)
        parts.append('address_alignment=%d' % self.address)
        parts.append('write_alignment=%d' % self.write)
        return '<' + ' '.join(parts) + '>'


# ----------------------------------------------------------------------------------------------------------------------
class Block(object):
    """A Block is the smallest unit in the FEE image.  The block represnts a block in the FEE configuration
    and holds a single "chunk" of NvM data being stored for a component."""
    def __init__(self, region):
        self.region = region
        self.name = ''
        self.instances = 1
        self.datasets = 1
        self.size = 0

    @property
    def user_data(self):
        """Returns the number of user data bytes for this block without any overhead."""
        return self.size * self.instances * self.datasets

    @property
    def overhead(self):
        """Calculates the overhead for this block.  This calculation is different between FEE and Small
        Sector FEE.  The overhead calculation was stolen out of devompiled Java classes from within the
        Vector FEE .jar file to better represent the calculations that are actually being used by Vector
        within Configurator.  The overhead takes into account the header information and/or address/write
        alignments as well as the number of instances and datasets for the block."""
        def align(num, alignment):
            """Helper function to handle alignment of a number to an upper boardary.  Num will be increased to the next
            highest integer multiple of alignment."""
            return int((num + alignment - 1) / alignment) * alignment
        if self.region.fee.is_small:
            writeBoundary = align((2 * self.region.write) + 1 + self.size, self.region.write)
            writeOverhead = writeBoundary - self.size
            blockSize = align(self.region.write + (self.instances * writeBoundary), self.region.address)
            blockOverhead = blockSize - (self.instances * writeBoundary)
            return ((writeOverhead * self.instances) + blockOverhead) * self.datasets
        aligned = align(self.size + 2, self.region.address)
        less = aligned - self.size
        total = less * self.instances
        total += align(16, self.region.address)
        total += align(8, self.region.address)
        return total * self.datasets

    @property
    def footprint(self):
        """Return the overall footprint of this block in bytes including both user data and overhead."""
        return self.user_data + self.overhead

    def __repr__(self):
        """Make a pretty representation of this block for use when printing for debug."""
        parts = ['Block']
        parts.append('name="%s"' % self.name)
        parts.append('instances=%d' % self.instances)
        parts.append('size=%d' % self.user_data)
        parts.append('overhead=%d' % self.overhead)
        return '<' + ' '.join(parts) + '>'


# End of File
