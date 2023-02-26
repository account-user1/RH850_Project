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

:VariantSelection
echo.
echo Please Select Micro Variant number to integrate:
echo.
echo 1 = R7F701373
echo 2 = R7F701374
echo.
set /p MicroVariant= Variant Number (1-2)?
echo.
if "%MicroVariant%" == "1" (
echo Variant selected is R7F701373
goto CopyVariantA )
if "%MicroVariant%" == "2" (
echo Variant selected is R7F701374
goto CopyVariantB )
echo Invalid Variant Selected
goto VariantSelection )

:CopyVariantA
xcopy ..\autosar\R403_PORT_P1X-C_73.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
xcopy ..\autosar\Port_bswmd_rec.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
goto end
:CopyVariantB
xcopy ..\autosar\R403_PORT_P1X-C_74.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
xcopy ..\autosar\Port_bswmd_rec.arxml	%INTPJTDIR%\tools\SIP\BSWMD\%SWC% /s
:end

pause

endlocal

