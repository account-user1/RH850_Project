@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   SWCSupport.bat
REM * Module Description: Launches the SWC Support script for the current component.  Copied from TL109A_SwcSuprt.
REM * Project:            CBD
REM * Author:             Owen Tosh
REM *******************************************************************************************************************
REM * Version Control:
REM *-----------------------------------------------------------------------------------------------------------------
REM * Date      Rev      Author    Change Description                                                         SCR #
REM * --------  -------  --------  -------------------------------------------------------------------------  -------
REM * 12/01/16   1       OT        Initial version
REM *******************************************************************************************************************


SETLOCAL

REM if run without a command, run as GUI - otherwise, run in command-line format
IF [%1]==[] (
    SET PYTHON_EXE=TL112A_Python\tools\pythonw.exe
) ELSE (
    SET PYTHON_EXE=TL112A_Python\tools\python.exe
)
SET SCRIPT_FILE=TL109A_SwcSuprt\tools\swcsuprt.py

REM get parent of current component folder
FOR /D %%G in ("%CD%\..\..\.") DO SET PARENT_PATH=%%~fG

REM get current component folder
FOR /D %%G in ("%CD%\..\.") DO SET COMPONENT_PATH=%%~fG

REM ensure we're not running from inside the template folder
FOR /D %%G in ("%CD%\..\.") DO IF %%~nG==ComponentTemplate GOTO template_error

REM set path to python binary
SET PYTHON_FULL_PATH=%PARENT_PATH%\%PYTHON_EXE%
IF NOT EXIST "%PYTHON_FULL_PATH%" GOTO python_error

REM set path to swcsuprt script
SET SCRIPT_FULL_PATH=%PARENT_PATH%\%SCRIPT_FILE%
IF NOT EXIST "%SCRIPT_FULL_PATH%" GOTO script_error

REM execute command
IF [%1]==[] (
    REM if running from a shortcut, run detached (gui)
    START "SWC Support" "%PYTHON_FULL_PATH%" "%SCRIPT_FULL_PATH%" "%COMPONENT_PATH%"
) ELSE (
    REM if running from command line, run in current context
    "%PYTHON_FULL_PATH%" "%SCRIPT_FULL_PATH%" "%COMPONENT_PATH%" %1
)

REM end script
GOTO :end


:template_error
ECHO.
ECHO This batch file isn't designed to run from the template folder.
ECHO.

IF [%1]==[] PAUSE
GOTO :end


:python_error
ECHO.
ECHO The Python binary was not found at the expected location:
ECHO %PYTHON_FULL_PATH%
ECHO.
ECHO Download the python component, or run the SWCSupport script manually.
ECHO.

IF [%1]==[] PAUSE
GOTO :end


:script_error
ECHO.
ECHO The SWCSupport script was not found at the expected location:
ECHO %SCRIPT_FULL_PATH%
ECHO.
ECHO Download the SWCSupport component, or run the script manually.
ECHO.

IF [%1]==[] PAUSE
GOTO :end


:end
ENDLOCAL
