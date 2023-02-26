@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rem Keeping old directory paths to ensure files are removed from older NvMProxy versions
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\CDD_NvMProxy /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\CDD_NvMProxy /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\CDD_NvMProxy /s /q
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\NvMProxy /s /q
rmdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\NvMProxy /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\NvMProxy /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\NvMProxy
mkdir %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\NvMProxy\bswmd
mkdir %INTPJTDIR%\tools\SIP\BSWMD\NvMProxy
xcopy ..\autosar\NvMProxy_bswmd.arxml               %INTPJTDIR%\tools\SIP\Generators\Components\_Schemes\NvMProxy\bswmd /s
xcopy ..\autosar\NvMProxy_bswmd.arxml               %INTPJTDIR%\tools\SIP\BSWMD\NvMProxy /s
xcopy ..\tools\IntegrationCopy\InternalBehavior     %INTPJTDIR%\autosar\Config\InternalBehavior /s /y
xcopy ..\tools\IntegrationCopy\Configurator         %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\NvMProxy /s /y

pause
:end

endlocal
