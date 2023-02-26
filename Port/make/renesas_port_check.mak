###############################################################################
# REGISTRY
#
PREPARE_CONFIGURATION_INTERFACE += PORT_DBASE_REQ

CHECK_VARS_WHICH_ARE_REQUIRED += PORT_DBASE_REQ


###############################################################################
# SPECIFIC
#
ifneq ($(PORT_DBASE_REQ),yes)
ifneq ($(PORT_DBASE_REQ),no)
$(error The value of the variable PORT_DBASE_REQ is not valid. \
  Please specify whether database is required or not )
endif
endif
