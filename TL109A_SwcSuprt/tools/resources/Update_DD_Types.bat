@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer 
REM * Nexteer Confidential
REM *
REM * Module File Name:   Update_DD_Types.bat
REM * Module Description: Launcher for the updatedd.py script
REM * Project:            TL109A_SwcSuprt
REM * Author:             Owen Tosh
REM *******************************************************************************************************************
REM * Version Control:
REM *-----------------------------------------------------------------------------------------------------------------
REM * Date      Rev      Author    Change Description                                                         SCR #
REM * --------  -------  --------  -------------------------------------------------------------------------  -------
REM * 12/01/16   1       OT        Initial version
REM *******************************************************************************************************************


REM configuration
set PYTHON_EXE=TL112A_Python\tools\pythonw.exe
set SCRIPT_FILE=updatedd.py

REM get parent of current component folder
FOR /D %%G in (%CD%\..\..\..\.) DO set PARENT_PATH=%%~fG

REM set path to python binary
set PYTHON_FULL_PATH=%PARENT_PATH%\%PYTHON_EXE%
IF NOT EXIST "%PYTHON_FULL_PATH%" GOTO python_error

REM execute command
start "Update DD Types" "%PYTHON_FULL_PATH%" "%SCRIPT_FILE%"

REM end script
GOTO :eof


:python_error
ECHO.
ECHO The Python binary was not found at the expected location:
ECHO %PYTHON_FULL_PATH%
ECHO.
ECHO Download the python component, or run the script manually.
ECHO.

pause
GOTO :eof
