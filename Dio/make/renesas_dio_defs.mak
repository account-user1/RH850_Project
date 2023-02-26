###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# DIO_PROJECT_PATH
# DIO_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
DIO_OUTPUT_PATH =
DIO_TOOL_PATH = $(DIO_CORE_PATH)\generator

ifneq ( $(DIO_CONFIG_PATH), )
DIO_PROJECT_PATH = $(DIO_CONFIG_PATH)
else
DIO_PROJECT_PATH = $(DIO_CORE_PATH)\Cfg1
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_dio
renesas_dio_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(DIO_CORE_PATH)\include $(DIO_CORE_PATH)\src \
                    $(DIO_PROJECT_PATH)\include $(DIO_PROJECT_PATH)\src 
CPP_INCLUDE_PATH += $(DIO_CORE_PATH)\include $(DIO_CORE_PATH)\src \
                    $(DIO_PROJECT_PATH)\include $(DIO_PROJECT_PATH)\src
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
