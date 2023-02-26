@echo ########################################
@echo Internal RTE Installation Batch
@echo ########################################
@echo .
@echo ***********************************
@echo Copy Common Dlls
@echo ***********************************

@echo on
if exist "%CommonProgramFiles%" set SharedFilesBase=%CommonProgramFiles%
rem - On Windows 7 'CommonProgramFiles(x86)' has to be used.
rem - On Windows XP 'CommonProgramFiles(x86)' does not exist. -> Use 'CommonProgramFiles'  
if exist "%CommonProgramFiles(x86)%" set SharedFilesBase=%CommonProgramFiles(x86)%


if not exist "%SharedFilesBase%\Vector"          mkdir "%SharedFilesBase%\Vector"
if not exist "%SharedFilesBase%\Vector\DaVinci"  mkdir "%SharedFilesBase%\Vector\DaVinci"

copy /Y "DaVinciCommon\DVSharedComponentProxy.dll"  "%SharedFilesBase%\Vector\DaVinci"
copy /Y "DaVinciCommon\MultiOsMgr.dll"              "%SharedFilesBase%\Vector\DaVinci"
copy /Y "DaVinciCommon\DEVApplicationInterface.dll" "%SharedFilesBase%\Vector\DaVinci"


@echo .
@echo ***********************************
@echo Register Common Dlls
@echo ***********************************
@echo .
"%windir%/system32/regsvr32.exe" /s "%SharedFilesBase%\Vector\DaVinci\DVSharedComponentProxy.dll"
"%windir%/system32/regsvr32.exe" /s "%SharedFilesBase%\Vector\DaVinci\MultiOsMgr.dll"
"%windir%/system32/regsvr32.exe" /s "%SharedFilesBase%\Vector\DaVinci\DEVApplicationInterface.dll"


