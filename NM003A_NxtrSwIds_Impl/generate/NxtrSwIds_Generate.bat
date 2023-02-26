setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set APPSWCDIR=%3
set SWCNAME=%4

del %GENDATADIR%\NxtrSwIdsCfg.c
del %GENDATADIR%\%SWCNAME%_GenErrors.log

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\NxtrSwIdsCfg.c.tt -i=..\..\TL105A_Artt\tools\include -u="http://autosar.org/schema/r4.0" -o=%GENDATADIR% >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1

exit %ERRORLEVEL%
endlocal
