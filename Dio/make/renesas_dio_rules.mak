###############################################################################
# REGISTRY
#

LIBRARIES_TO_BUILD += renesas_diolib

renesas_diolib_FILES += \
    $(DIO_CORE_PATH)\src\Dio.c \
	$(DIO_CORE_PATH)\src\Dio_Version.c

ifeq ($(DIO_R3_REQ),no)
renesas_diolib_FILES += \
    $(DIO_CORE_PATH)\src\Dio_Ram.c 
endif
    

CC_FILES_TO_BUILD += \
    $(DIO_CORE_PATH)\src\Dio.c \
	$(DIO_CORE_PATH)\src\Dio_Version.c \
  $(DIO_CORE_PATH)\src\Dio_Ram.c
    
 

OBJECTS_LINK_ONLY +=


GENERATED_SOURCE_FILES += \
     $(DIO_PROJECT_PATH)\src\Dio_PBcfg.c \
	 $(DIO_PROJECT_PATH)\src\Dio_Hardware.c \
	 $(DIO_PROJECT_PATH)\src\Dio_Lcfg.c 

MAKE_CLEAN_RULES += dio_clean_generated_files
MAKE_GENERATE_RULES += generate_dio_config
MAKE_DEBUG_RULES += debug_dio_makefile
MAKE_CONFIG_RULES += generate_dio_config

dio_clean_generated_files:
	@del $(DIO_CONFIG_PATH)\src\*.c
	@del $(DIO_CONFIG_PATH)\include\*.h

###############################################################################
# Command to print debug information                                          #
###############################################################################
debug_dio_makefile:
	@echo DIO_PROJECT_PATH = $(DIO_PROJECT_PATH)
	@echo DIO_CORE_PATH = $(DIO_CORE_PATH)
	@echo DIO_TOOL_PATH = $(DIO_TOOL_PATH)
	@echo DIO_CONFIG_PATH = $(DIO_CONFIG_PATH)
	@echo DIO_CONFIG_FILE = $(DIO_CONFIG_FILE)
	@echo DIO_DBASE_REQ = $(DIO_DBASE_REQ)

###############################################################################
# Command to trigger the tool and generate configuration files                #
###############################################################################
generate_dio_config:
	"$(DIO_TOOL_PATH)\Dio_X1x.exe" -o "$(DIO_CONFIG_PATH)" "$(DIO_CONFIG_FILE)" "$(TRXML_CONFIG_FILE)" "$(DIO_BSWMDT_CONFIG_FILE)"
