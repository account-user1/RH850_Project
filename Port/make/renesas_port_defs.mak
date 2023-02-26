###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# PORT_PROJECT_PATH
# PORT_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
PORT_OUTPUT_PATH =
PORT_TOOL_PATH = $(PORT_CORE_PATH)\generator

ifneq ( $(PORT_CONFIG_PATH), )
PORT_PROJECT_PATH = $(PORT_CONFIG_PATH)
else
PORT_PROJECT_PATH = $(PORT_CORE_PATH)\cfg1
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_port
renesas_port_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(PORT_CORE_PATH)\include $(PORT_CORE_PATH)\src \
                    $(PORT_PROJECT_PATH)\include $(PORT_PROJECT_PATH)\src 
CPP_INCLUDE_PATH += $(PORT_CORE_PATH)\include $(PORT_CORE_PATH)\src \
                    $(PORT_PROJECT_PATH)\include $(PORT_PROJECT_PATH)\src 
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
