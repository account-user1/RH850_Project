###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# FR_PROJECT_PATH
# FR_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
MCU_OUTPUT_PATH =
MCU_TOOL_PATH = $(MCU_CORE_PATH)\generator

ifneq ( $(MCU_CONFIG_PATH), )
MCU_PROJECT_PATH = $(MCU_CONFIG_PATH)
else
MCU_PROJECT_PATH = $(MCU_CORE_PATH)\Cfg1
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_mcu
renesas_mcu_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(MCU_CORE_PATH)\include $(MCU_CORE_PATH)\src \
                    $(MCU_PROJECT_PATH)\include $(MCU_PROJECT_PATH)\src
CPP_INCLUDE_PATH += $(MCU_CORE_PATH)\include $(MCU_CORE_PATH)\src \
                    $(MCU_PROJECT_PATH)\include $(MCU_PROJECT_PATH)\src
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
