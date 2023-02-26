###############################################################################
# REGISTRY
#
PREPARE_CONFIGURATION_INTERFACE += FLS_DBASE_REQ

CHECK_VARS_WHICH_ARE_REQUIRED += FLS_DBASE_REQ


###############################################################################
# SPECIFIC
#
# ifneq ($(FLS_DBASE_REQ),yes)
  # ifneq ($(FLS_DBASE_REQ),no)
    # $(error The value of the variable FLS_DBASE_REQ is not valid. \
      # Please specify whether database is required or not )
  # endif
# endif
