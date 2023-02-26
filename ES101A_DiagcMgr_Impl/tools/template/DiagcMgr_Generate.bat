REM @ECHO off

REM *******************************************************************************************************************
REM * Copyright 2016 Nexteer
REM * Nexteer Confidential
REM *
REM * Module File Name:   DiagcMgr_Generate.bat
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
IF EXIST "%GENDATA_FOLDER%\DiagcMgr_Cfg.c" DEL "%GENDATA_FOLDER%\DiagcMgr_Cfg.c"
IF EXIST "%GENDATA_FOLDER%\DiagcMgr_Cfg.h" DEL "%GENDATA_FOLDER%\DiagcMgr_Cfg.h"


REM generate DiagcMgr_Cfg.h.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\DiagcMgr_Cfg.h.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log" 2>>&1
IF %ERRORLEVEL% NEQ 0 GOTO end

REM generate DiagcMgr_Cfg.c.tt
SET ERRORLEVEL=
%ARTT_TOOLS_PATH%\artt.exe -d="%ECUC_FILE%" -t=.\DiagcMgr_Cfg.c.tt -i=%ARTT_TOOLS_PATH%\include -u="http://autosar.org/schema/r4.0" -o="%GENDATA_FOLDER%" >> "%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log" 2>>&1
IF %ERRORLEVEL% EQU 10 GOTO error1
IF %ERRORLEVEL% EQU 11 GOTO error2
IF %ERRORLEVEL% EQU 12 GOTO error3
IF %ERRORLEVEL% EQU 13 GOTO error4
IF %ERRORLEVEL% EQU 14 GOTO error5
IF %ERRORLEVEL% EQU 15 GOTO error6
GOTO end


:error1
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: More than one Dem DTC is configured under same enable conditions >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:error2
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: Number of Dem DTCs and DiagcMgr Enable conditions don't match >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:error3
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: DTC Idx configured is non sequential >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:error4
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: NTC with Latching Enabled has Zero Threshold >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:error5
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: Too many NTCs configured as Latching. Max number of LtchgNTCs supported is 20.  >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:error6
ECHO.>>"%GENDATA_FOLDER%\DiagcMgr_Cfg.h.tt.log"
ECHO CONFIGURATION ERROR: A Non-Zero Latching Threshold is set for a Non Latching NTC >>"%GENDATA_FOLDER%\DiagcMgr_Cfg.c.tt.log"
GOTO end

:end
EXIT %ERRORLEVEL%
ENDLOCAL
