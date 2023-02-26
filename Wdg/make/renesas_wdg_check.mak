###############################################################################
# REGISTRY
#
PREPARE_CONFIGURATION_INTERFACE += WDG_DBASE_REQ

CHECK_VARS_WHICH_ARE_REQUIRED += WDG_DBASE_REQ


###############################################################################
# SPECIFIC
#
#ifneq ($(WDG_DBASE_REQ),yes)
#ifneq ($(WDG_DBASE_REQ),no)
#		$(error The value of the variable WDG_DBASE_REQ is not valid. \
#  Please specify whether database is required or not )
#endif
#endif

#ifneq ($(WDG_DRIVER_INSTANCE),DRIVERA)
#ifneq ($(WDG_DRIVER_INSTANCE),DRIVERB)
#ifneq ($(WDG_DRIVER_INSTANCE),DRIVERAB)
#		$(error The value of the variable WDG_DRIVER_INSTANCE is not valid. \
#  Please specify the instance name)
#endif
#endif
#endif 
