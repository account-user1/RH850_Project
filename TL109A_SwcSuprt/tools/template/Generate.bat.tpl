## ********************************************************************************************************************
## * Copyright 2016 Nexteer
## * Nexteer Confidential
## *
## * Module File Name:   Generate.bat.tpl
## * Module Description: Template for component generation script.  To be processed by the mako template engine.
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
##      artt_templates - collection of strings
##
@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   ${component.short_name}_Generate.bat
REM * Module Description: Generates component configuration files.  Generated from TL109A_SwcSuprt.
REM * Project:            CBD
REM * Author:             Owen Tosh
REM *******************************************************************************************************************

SETLOCAL

REM get arguments
SET ECUC_FILE=%1
SET GENDATA_FOLDER=%2

REM set up paths
SET ARTT_TOOLS_PATH=..\..\..\TL105A_Artt\tools

REM clean up existing configuration files
% for artt_template in artt_templates:
IF EXIST "%GENDATA_FOLDER%\${artt_template[:-3]}" DEL "%GENDATA_FOLDER%\${artt_template[:-3]}"
% endfor

% for artt_template in artt_templates:
REM generate ${artt_template}
SET ERRORLEVEL=
%%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\${artt_template} -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\${artt_template}.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

% endfor

:end
EXIT %ERRORLEVEL%
ENDLOCAL
