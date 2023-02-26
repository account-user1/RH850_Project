@Echo Off
setlocal

for %%* in (../.) do set SWC=%%~n*

for /D %%G in ("..\..\*_EPS_*") do set INTPJTDIR=%%G
echo Integration project relative path is: %INTPJTDIR%

echo Deleting Old Directory
rmdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s /q
rmdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s /q
echo Copying New Directory
mkdir %INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC%
mkdir %INTPJTDIR%\tools\SIP\BSWMD\%SWC%
xcopy ..\tools\IntegrationCopy\Configurator	%INTPJTDIR%\tools\SIP\DaVinciConfigurator\Generators\%SWC% /s

xcopy ..\autosar\R403_MCU_P1X-C.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
xcopy ..\autosar\Mcu_bswmd_rec.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
:end

pause

endlocal

