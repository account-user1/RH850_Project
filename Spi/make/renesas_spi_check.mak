###############################################################################
# REGISTRY
#
PREPARE_CONFIGURATION_INTERFACE += SPI_DBASE_REQ

CHECK_VARS_WHICH_ARE_REQUIRED += SPI_DBASE_REQ


###############################################################################
# SPECIFIC
#
#ifneq ($(SPI_DBASE_REQ),yes)
#ifneq ($(SPI_DBASE_REQ),no)
#$(error The value of the variable SPI_DBASE_REQ is not valid. \
#  Please specify whether database is required or not )
#endif
#endif
