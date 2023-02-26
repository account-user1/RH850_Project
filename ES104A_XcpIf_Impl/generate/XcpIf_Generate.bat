setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set APPSWCDIR=%3
set SWCNAME=%4

del %GENDATADIR%\CDD_%SWCNAME%_Cfg.h
del %GENDATADIR%\CDD_%SWCNAME%_GenErrors.log

rem Cfg_private.h generation
set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Cfg.h.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\CDD_%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

:end
exit %ERRORLEVEL%
endlocal
