###############################################################################
# REGISTRY
#

LIBRARIES_TO_BUILD += renesas_mculib

renesas_mculib_FILES = \
    $(MCU_CORE_PATH)\src\Mcu.c \
    $(MCU_CORE_PATH)\src\Mcu_Ram.c \
    $(MCU_CORE_PATH)\src\Mcu_Version.c


CC_FILES_TO_BUILD += \
    $(MCU_CORE_PATH)\src\Mcu.c \
    $(MCU_CORE_PATH)\src\Mcu_Ram.c \
    $(MCU_CORE_PATH)\src\Mcu_Irq.c \
    $(MCU_CORE_PATH)\src\Mcu_Version.c \


OBJECTS_LINK_ONLY +=

GENERATED_SOURCE_FILES += \
     $(MCU_PROJECT_PATH)\src\Mcu_PBcfg.c \
     $(MCU_PROJECT_PATH)\src\Mcu_Hardware.c	 


MAKE_CLEAN_RULES += Mcu_clean_generated_files
MAKE_GENERATE_RULES += generate_Mcu_config
MAKE_DEBUG_RULES += debug_Mcu_makefile
MAKE_CONFIG_RULES += generate_Mcu_config

Mcu_clean_generated_files:
	@del $(MCU_CONFIG_PATH)\src\*.c
	@del $(MCU_CONFIG_PATH)\include\*.h

###############################################################################
# Command to print debug information                                          #
###############################################################################
debug_Mcu_makefile:
	@echo MCU_PROJECT_PATH = $(MCU_PROJECT_PATH)
	@echo MCU_CORE_PATH = $(MCU_CORE_PATH)
	@echo MCU_TOOL_PATH = $(MCU_TOOL_PATH)
	@echo MCU_CONFIG_PATH = $(MCU_CONFIG_PATH)
	@echo MCU_CONFIG_FILE = $(MCU_CONFIG_FILE)
	@echo MCU_DBASE_REQ = $(MCU_DBASE_REQ)


###############################################################################
# Command to trigger the tool and generate configuration files                #
###############################################################################
generate_Mcu_config:

