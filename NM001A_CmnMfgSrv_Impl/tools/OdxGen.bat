@echo off

set ERRORLEVEL=
..\..\TL112A_Python\tools\python.exe ..\..\TL113A_MfgSrvSuprt\tools\OdxGen.py CmnMfgSrv ..\doc\CmnMfgSrv.odx-d ..\src contract\MfgSrvCfg.h -v
if %ERRORLEVEL% NEQ 0 goto error

set ERRORLEVEL=
..\..\TL112A_Python\tools\python.exe ..\..\TL113A_MfgSrvSuprt\tools\OdxArxml.py ..\doc\CmnMfgSrv.odx-d CmnMfgSrv CmnMfgSrvCfg.arxml -v
if %ERRORLEVEL% NEQ 0 goto error

exit

:error
pause