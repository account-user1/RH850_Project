###############################################################################
# REGISTRY
#

LIBRARIES_TO_BUILD += renesas_spilib

renesas_spilib_FILES = \
    $(SPI_CORE_PATH)\src\Spi.c \
    $(SPI_CORE_PATH)\src\Spi_Driver.c \
    $(SPI_CORE_PATH)\src\Spi_Scheduler.c \
    $(SPI_CORE_PATH)\src\Spi_Irq.c \
    $(SPI_CORE_PATH)\src\Spi_Ram.c \
    $(SPI_CORE_PATH)\src\Spi_Version.c


CC_FILES_TO_BUILD += \
    $(SPI_CORE_PATH)\src\Spi.c \
    $(SPI_CORE_PATH)\src\Spi_Driver.c \
    $(SPI_CORE_PATH)\src\Spi_Scheduler.c \
    $(SPI_CORE_PATH)\src\Spi_Irq.c \
    $(SPI_CORE_PATH)\src\Spi_Ram.c \
    $(SPI_CORE_PATH)\src\Spi_Version.c

OBJECTS_LINK_ONLY +=

GENERATED_SOURCE_FILES += \
     $(SPI_PROJECT_PATH)\src\Spi_Lcfg.c \
     $(SPI_PROJECT_PATH)\src\Spi_PBcfg.c \
	 $(SPI_PROJECT_PATH)\src\Spi_Hardware.c

MAKE_CLEAN_RULES += spi_clean_generated_files
MAKE_GENERATE_RULES += generate_spi_config
MAKE_DEBUG_RULES += debug_spi_makefile
MAKE_CONFIG_RULES += generate_spi_config

spi_clean_generated_files:
	@del $(SPI_CONFIG_PATH)\src\*.c
	@del $(SPI_CONFIG_PATH)\include\*.h

###############################################################################
# Command to print debug information                                          #
###############################################################################
debug_spi_makefile:
	@echo SPI_PROJECT_PATH = $(SPI_PROJECT_PATH)
	@echo SPI_CORE_PATH = $(SPI_CORE_PATH)
	@echo SPI_TOOL_PATH = $(SPI_TOOL_PATH)
	@echo SPI_CONFIG_PATH = $(SPI_CONFIG_PATH)
	@echo SPI_CONFIG_FILE = $(SPI_CONFIG_FILE)
	@echo SPI_DBASE_REQ = $(SPI_DBASE_REQ)

###############################################################################
# Command to trigger the tool and generate configuration files                #
###############################################################################
generate_spi_config:
ifeq ($(AUTOSAR_VERSION), 3.2.2)
	"$(SPI_TOOL_PATH)\$(MODULE_NAME)_$(MICRO_FAMILY).exe" -o "$(SPI_CONFIG_PATH)" "$(SPI_CONFIG_FILE)" "$(MCU_CONFIG_FILE)" "$(TRXML_CONFIG_FILE)" "$(SPI_BSWMDT_CONFIG_FILE)"
endif
ifeq ($(AUTOSAR_VERSION), 4.0.3)
	"$(SPI_TOOL_PATH)\$(MODULE_NAME)_$(MICRO_FAMILY).exe" -o "$(SPI_CONFIG_PATH)" "$(SPI_CONFIG_FILE)" "$(MCU_CONFIG_FILE)" "$(TRXML_CONFIG_FILE)" "$(SPI_BSWMDT_CONFIG_FILE)" "$(DEM_CONFIG_FILE)"
endif
