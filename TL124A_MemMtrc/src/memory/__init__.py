"""=====================================================================================================================
#      File: memory/__init__.py
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
import memory.fee
import memory.basic
import memory.types


# ======================================================================================================================
# Memory Container Class - used to define regions for each processor
# ----------------------------------------------------------------------------------------------------------------------
class Definition(object):
    # pylint: disable=R0903
    # Definition class does not need any additional public methods but is strictly required.

    """Memory definition class used to define a memory region for the processor.  The definition contains a range for
    the address space as well as a limit threshold for the memory and a textual name used during the reporting phase.
    Type is used to categorize the memory into one of the main type (Flash, RAM, FEE, etc.)."""

    def __init__(self, nameIn, typeIn, rangeIn, limitIn):
        self.name = nameIn
        self.type = typeIn
        self.range = rangeIn
        self.limit = limitIn

    def get_instance(self):
        """Return an instance of the appropriate memory container representing this definition.  For Flash of RAM a
        generic memory section is returned but for FEE a special FEE section is returned.  The istance is created and
        passed the information from this definition to allow it to initialize with the proper defs."""
        if self.type in [memory.types.FLASH, memory.types.RAM]:
            return memory.basic.Generic(self)
        elif self.type == memory.types.FEE:
            return memory.fee.Fee(self)
        else:
            raise AttributeError('Selected type does not have a memory definition')


# ----------------------------------------------------------------------------------------------------------------------
class Range(object):
    """Memory range used to define a start and end address for a memory definition (inclusive)."""

    def __init__(self, minimum=None, maximum=None):
        self.min = minimum
        self.max = maximum

    @property
    def available(self):
        """Returns the total number of bytes available in this memory range.  Assummes that the memory range is
        continuous and contains no holes."""
        if self.min is not None and self.max is not None:
            return self.max - self.min + 1
        return 0

    def between(self, section):
        """Returns boolean True if the supplied section is contained within this memory range.  This is determined if
        both the starting address of the section is after the starting address of the range and the ending address of
        the section is before the ending address of the range."""
        return section.start >= self.min and section.end <= self.max


# ----------------------------------------------------------------------------------------------------------------------
class Limit(object):
    """Defines a limit thresold for a memory definition used to aid in reporting when near or over the treshold."""

    def __init__(self, threshold, tolerance=0.1):
        """The threshold is the value in bytes which when crossed will be flagged as over limit.  The tolerance is used
        to calculate when near the limit but still below.  Tolerance is a percentage specified between 0 and 1."""
        self.threshold = threshold
        self.tolerance = tolerance

    def near(self, value):
        """Returns boolean True when the specific value is within the threshold of the limit."""
        return (self.threshold - self.tolerance) <= value < self.threshold

    def over(self, value):
        """Returns a boolean True is the specified value is greater than or equal to the threshold."""
        return value >= self.threshold


# End of File
