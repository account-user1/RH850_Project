@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\Rte /s /q
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\RteAnalyzer /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\Rte
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\RteAnalyzer
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\%SWC%\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC%
xcopy ..\tools\IntegrationCopy\Configurator	%INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators /s
xcopy ..\autosar				%INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\%SWC%\bswmd /s
xcopy ..\autosar				%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s

pause
:end

endlocal

