@ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   MotCtrlMgr_Generate.bat
REM * Module Description: Generates component configuration files.  Generated from TL109A_SwcSuprt.
REM * Project:            CBD
REM * Author:             Owen Tosh
REM *******************************************************************************************************************

SETLOCAL

REM get arguments
SET ECUC_FILE=%1
SET GENDATA_FOLDER=%2
set EXECUTEDDSCRIPTS=%3

REM set up paths
SET ARTT_TOOLS_PATH=..\..\..\TL105A_Artt\tools

REM clean up existing configuration files
IF EXIST "%GENDATA_FOLDER%\AR300A_MotCtrlMgr_DataDict.m" DEL "%GENDATA_FOLDER%\AR300A_MotCtrlMgr_DataDict.m"
IF EXIST "%GENDATA_FOLDER%\CDD_MotCtrlMgr.c" DEL "%GENDATA_FOLDER%\CDD_MotCtrlMgr.c"
IF EXIST "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.c" DEL "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.c"
IF EXIST "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.h" DEL "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.h"
IF EXIST "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Irq.c" DEL "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Irq.c"

REM generate AR300A_MotCtrlMgr_DataDict.m.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\AR300A_MotCtrlMgr_DataDict.m.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\AR300A_MotCtrlMgr_DataDict.m.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

REM generate CDD_MotCtrlMgr.c.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\CDD_MotCtrlMgr.c.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\CDD_MotCtrlMgr.c.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

REM generate CDD_MotCtrlMgr_Data.c.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\CDD_MotCtrlMgr_Data.c.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.c.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

REM generate CDD_MotCtrlMgr_Data.h.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\CDD_MotCtrlMgr_Data.h.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Data.h.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

REM generate CDD_MotCtrlMgr_Irq.c.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\CDD_MotCtrlMgr_Irq.c.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\CDD_MotCtrlMgr_Irq.c.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

if NOT "%EXECUTEDDSCRIPTS%" == "TRUE" goto end

matlab.exe -r "cd %GENDATADIR%; run ('AR300A_MotCtrlMgr_DataDict.m'); CreateDD('EA4'); VerifyDD('EA4', 'AR300A_MotCtrlMgr_DataDict'); quit" -nosplash -nojvm

:loop1
tasklist /fi "imagename eq MATLAB.exe" |find ":" > nul
if errorlevel 1 goto loop1

:end
EXIT %ERRORLEVEL%
ENDLOCAL
