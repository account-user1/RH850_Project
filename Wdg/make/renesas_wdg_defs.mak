###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# WDG_PROJECT_PATH
# WDG_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
WDG_OUTPUT_PATH =
WDG_TOOL_PATH = $(WDG_CORE_PATH)\generator

ifneq ( $(WDG_CONFIG_PATH), )
WDG_PROJECT_PATH = $(WDG_CONFIG_PATH)
else
WDG_PROJECT_PATH = $(WDG_CORE_PATH)\Cfg1
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_wdg
renesas_wdg_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(WDG_CORE_PATH)\include $(WDG_CORE_PATH)\src \
                    $(WDG_PROJECT_PATH)\include $(WDG_PROJECT_PATH)\src
CPP_INCLUDE_PATH += $(WDG_CORE_PATH)\include $(WDG_CORE_PATH)\src \
                    $(WDG_PROJECT_PATH)\include $(WDG_PROJECT_PATH)\src
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
