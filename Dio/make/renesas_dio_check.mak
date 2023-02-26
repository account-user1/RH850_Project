###############################################################################
# REGISTRY
#
PREPARE_CONFIGURATION_INTERFACE += DIO_DBASE_REQ

CHECK_VARS_WHICH_ARE_REQUIRED += DIO_DBASE_REQ



###############################################################################
# SPECIFIC
#
#ifneq ($(DIO_DBASE_REQ),yes)
#ifneq ($(DIO_DBASE_REQ),no)
#		$(error The value of the variable DIO_DBASE_REQ is not valid. \
#  Please specify whether database is required or not )
#endif
#endif