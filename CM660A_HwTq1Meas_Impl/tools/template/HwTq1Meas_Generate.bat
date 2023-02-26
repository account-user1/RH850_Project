@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   HwTq1Meas_Generate.bat
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
IF EXIST "%GENDATA_FOLDER%\CDD_HwTq1Meas_Cfg.h" DEL "%GENDATA_FOLDER%\CDD_HwTq1Meas_Cfg.h"

REM generate CDD_HwTq1Meas_Cfg.h.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\CDD_HwTq1Meas_Cfg.h.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\CDD_HwTq1Meas_Cfg.h.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end


:end
EXIT %ERRORLEVEL%
ENDLOCAL
