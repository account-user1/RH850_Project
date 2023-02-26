@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\XcpIf /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\XcpIf /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\XcpIf /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\XcpIf
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\XcpIf\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\XcpIf
xcopy ..\autosar\XcpIf_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\XcpIf\bswmd /s
xcopy ..\autosar\XcpIf_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\XcpIf /s
rem xcopy ..\tools\IntegrationCopy\InternalBehavior     %INTPJTDIR%\autosar\Config\InternalBehavior /s /y
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\XcpIf /s /y

pause
:end

endlocal
