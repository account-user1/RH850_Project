@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\TunSelnMngt /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\TunSelnMngt /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\TunSelnMngt /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\TunSelnMngt
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\TunSelnMngt\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\TunSelnMngt
xcopy ..\autosar\TunSelnMngt_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\TunSelnMngt\bswmd /s
xcopy ..\autosar\TunSelnMngt_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\TunSelnMngt /s
rem xcopy ..\tools\IntegrationCopy\InternalBehavior     %INTPJTDIR%\autosar\Config\InternalBehavior /s /y
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\TunSelnMngt /s /y

pause
:end

endlocal
