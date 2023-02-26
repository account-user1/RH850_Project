setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set SWCNAME=%3

del %GENDATADIR%\CDD_%SWCNAME%_Cfg.c
del %GENDATADIR%\CDD_%SWCNAME%_Cfg_private.h
del %GENDATADIR%\CDD_%SWCNAME%_GenErrors.log

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Cfg.c.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\CDD_%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\CDD_%SWCNAME%_Cfg_private.h.tt -i=..\..\TL105A_Artt\tools\include  -u="http://autosar.org/schema/r4.0"  -o=%GENDATADIR% >>%GENDATADIR%\CDD_%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end



:end
exit %ERRORLEVEL%
endlocal
