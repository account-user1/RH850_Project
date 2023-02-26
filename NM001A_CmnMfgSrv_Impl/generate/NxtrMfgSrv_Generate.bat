setlocal

set ECUCFILE=%1
set GENDATADIR=%2
set APPSWCDIR=%3
set SWCNAME=%4

del %GENDATADIR%\MfgSrvCfg.c
del %GENDATADIR%\MfgSrvCfg.h
del %GENDATADIR%\MergedMfgSrv.odx-d
del %GENDATADIR%\EnadMfgSrv.odx-d
del %GENDATADIR%\EnadMfgSrvRef.html
del %GENDATADIR%\%SWCNAME%_GenErrors.log

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\MfgSrvCfg.c.tt -i=..\..\TL105A_Artt\tools\include -u="http://autosar.org/schema/r4.0" -o=%GENDATADIR% >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL105A_Artt\tools\artt.exe -d=%ECUCFILE% -t=.\MfgSrvCfg.h.tt -i=..\..\TL105A_Artt\tools\include -u="http://autosar.org/schema/r4.0" -o=%GENDATADIR% >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL112A_Python\tools\python.exe ..\..\TL113A_MfgSrvSuprt\tools\OdxMerge.py ..\..\NM001A_CmnMfgSrv_Impl\doc\CmnMfgSrv.odx-d ..\..\NM010A_ProgMfgSrv_Impl\doc\ProgMfgSrv.odx-d %GENDATADIR%\MergedMfgSrv.odx-d >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL112A_Python\tools\python.exe ..\..\TL113A_MfgSrvSuprt\tools\OdxTrim.py %GENDATADIR%\MergedMfgSrv.odx-d %ECUCFILE% %GENDATADIR%\EnadMfgSrv.odx-d >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

set ERRORLEVEL=
..\..\TL112A_Python\tools\python.exe ..\..\TL113A_MfgSrvSuprt\tools\OdxDoc.py --ecuc=%ECUCFILE% --overview=..\..\NM001A_CmnMfgSrv_Impl\doc\reference %GENDATADIR%\EnadMfgSrv.odx-d %GENDATADIR%\EnadMfgSrvRef.html >> %GENDATADIR%\%SWCNAME%_GenErrors.log 2>>&1
if %ERRORLEVEL% NEQ 0 goto end

:end
exit %ERRORLEVEL%
endlocal
