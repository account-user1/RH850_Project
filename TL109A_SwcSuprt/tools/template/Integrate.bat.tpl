## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Integrate.bat.tpl
## * Module Description: Template for component integration script.  To be processed by the mako template engine.
## * Project:            TL109A_SwcSuprt
## * Author:             Owen Tosh
## ********************************************************************************************************************
## * Version Control:
## *------------------------------------------------------------------------------------------------------------------
## * Date      Rev      Author    Change Description                                                          SCR #
## * --------  -------  --------  --------------------------------------------------------------------------  -------
## * 12/01/16   1       OT        Initial version
## ********************************************************************************************************************
##
##  Expected template variables:
##      component - main component object
##      bswmd_file - string
##
@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   Integrate.bat
REM * Module Description: Copies component files to an integration project.  Generated from TL109A_SwcSuprt.
REM * Project:            CBD
REM * Author:             Owen Tosh
REM *******************************************************************************************************************

SETLOCAL

REM set up constants
SET INT_PATH_SEARCH="..\..\..\*_EPS_*"

REM get integration component path
FOR /D %%G IN (%INT_PATH_SEARCH%) DO SET INT_BASE_PATH=%%G
IF [%INT_BASE_PATH%]==[] GOTO intpath_error
ECHO Integration project relative path is:
ECHO %INT_BASE_PATH%
ECHO.

REM set integration paths
SET INT_CONFIG_PATH=%INT_BASE_PATH%\tools\SIP\DaVinciConfigurator\Generators\${component.name}
SET INT_BSWMD_PATH=%INT_BASE_PATH%\tools\SIP\BSWMD\${component.name}

REM delete old integration files
ECHO Deleting old integration files...
RMDIR %INT_CONFIG_PATH% /s /q
RMDIR %INT_BSWMD_PATH% /s /q
ECHO.

REM copy new integration files
ECHO Copying new integration files...
MKDIR %INT_CONFIG_PATH%
MKDIR %INT_BSWMD_PATH%
XCOPY .\Configurator %INT_CONFIG_PATH% /s /q
XCOPY ..\..\autosar\${bswmd_file} %INT_BSWMD_PATH% /s /q
ECHO.

REM wait to display message
PAUSE

REM end script
GOTO :end


:intpath_error
ECHO The integration project was not found.
ECHO.
ECHO Expecting a path to match %INT_PATH_SEARCH%.
ECHO.

PAUSE
GOTO :end


:end
ENDLOCAL
