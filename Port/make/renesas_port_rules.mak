###############################################################################
# REGISTRY
#

LIBRARIES_TO_BUILD += renesas_portlib

renesas_portlib_FILES = \
    $(PORT_CORE_PATH)\src\Port.c\
    $(PORT_CORE_PATH)\src\Port_Ram.c\
	$(PORT_CORE_PATH)\src\Port_Version.c

CC_FILES_TO_BUILD += \
    $(PORT_CORE_PATH)\src\Port.c\
    $(PORT_CORE_PATH)\src\Port_Ram.c\
    $(PORT_CORE_PATH)\src\Port_Version.c

OBJECTS_LINK_ONLY +=

ifeq ($(PORT_DBASE_REQ),yes)
GENERATED_SOURCE_FILES += \
     $(PORT_PROJECT_PATH)\src\Port_PBcfg.c
endif

ifeq ($(PORT_DBASE_REQ),no)
GENERATED_SOURCE_FILES +=
endif

MAKE_CLEAN_RULES += port_clean_generated_files
MAKE_GENERATE_RULES += generate_port_config
MAKE_DEBUG_RULES += debug_port_makefile
MAKE_CONFIG_RULES += generate_port_config

port_clean_generated_files:
	@del $(PORT_CONFIG_PATH)\src\*.c
	@del $(PORT_CONFIG_PATH)\include\*.h

###############################################################################
# Command to print debug information                                          #
###############################################################################
debug_port_makefile:
	@echo PORT_PROJECT_PATH = $(PORT_PROJECT_PATH)
	@echo PORT_CORE_PATH = $(PORT_CORE_PATH)
	@echo PORT_TOOL_PATH = $(PORT_TOOL_PATH)
	@echo PORT_CONFIG_PATH = $(PORT_CONFIG_PATH)
	@echo PORT_CONFIG_FILE = $(PORT_CONFIG_FILE)
	@echo PORT_DBASE_REQ = $(PORT_DBASE_REQ)

###############################################################################
# Command to trigger the tool and generate configuration files                #
###############################################################################
generate_port_config:
ifeq ($(VERSION), LOWER_VERSION)
	"$(PORT_TOOL_PATH)\Port_X1x.exe" -o $(PORT_CONFIG_PATH) $(PORT_CONFIG_FILE) $(MCU_CONFIG_FILE) $(TRXML_CONFIG_FILE) $(PORT_BSWMDT_CONFIG_FILE)
endif

ifeq ($(VERSION), HIGHER_VERSION)
	"$(PORT_TOOL_PATH)\Port_X1x.exe" -o $(PORT_CONFIG_PATH) $(PORT_CONFIG_FILE) $(MCU_CONFIG_FILE) $(TRXML_CONFIG_FILE) $(DEM_CONFIG_FILE) $(PORT_BSWMDT_CONFIG_FILE) 
endif



