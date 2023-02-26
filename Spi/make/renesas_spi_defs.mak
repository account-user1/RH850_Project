###############################################################################
# INTERNAL REQUIRED CONFIGURATION
#
# SPI_PROJECT_PATH
# SPI_BUILD_LIBRARY
#

###############################################################################
# REQUIRED (in base_make)
#
# PROJECT_ROOT
# SSC_ROOT

###############################################################################
# SPECIFIC
#
SPI_OUTPUT_PATH =
SPI_TOOL_PATH = $(SPI_CORE_PATH)\generator

ifneq ( $(SPI_CONFIG_PATH), )
SPI_PROJECT_PATH = $(SPI_CONFIG_PATH)
else
SPI_PROJECT_PATH = $(SPI_CORE_PATH)\Cfg1
endif

###############################################################################
# REGISTRY
#
SSC_PLUGINS += renesas_spi
renesas_spi_DEPENDENT_PLUGINS =

CC_INCLUDE_PATH += $(SPI_CORE_PATH)\include $(SPI_CORE_PATH)\src \
                    $(SPI_PROJECT_PATH)\include $(SPI_PROJECT_PATH)\src
CPP_INCLUDE_PATH += $(SPI_CORE_PATH)\include $(SPI_CORE_PATH)\src \
                    $(SPI_PROJECT_PATH)\include $(SPI_PROJECT_PATH)\src
ASM_INCLUDE_PATH +=
PREPROCESSOR_DEFINES +=
