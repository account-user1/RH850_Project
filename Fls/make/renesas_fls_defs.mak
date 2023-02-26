###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# FLS_PROJECT_PATH
# FLS_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
FLS_OUTPUT_PATH =
FLS_TOOL_PATH = $(FLS_CORE_PATH)\generator

ifneq ( $(FLS_CONFIG_PATH), )
FLS_PROJECT_PATH = $(FLS_CONFIG_PATH)
else
FLS_PROJECT_PATH = $(FLS_CORE_PATH)\config
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_fls
renesas_fls_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(FLS_CORE_PATH)\include $(FLS_CORE_PATH)\src \
                    $(FLS_PROJECT_PATH)\include $(FLS_PROJECT_PATH)\src
CPP_INCLUDE_PATH += $(FLS_CORE_PATH)\include $(FLS_CORE_PATH)\src \
                    $(FLS_PROJECT_PATH)\include $(FLS_PROJECT_PATH)\src
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
