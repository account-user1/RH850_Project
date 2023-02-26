regsvr32.exe /s DaVinci_BO77.dll
regsvr32.exe /s DVImExSrv.dll
DaVinciDEV.exe /Register
DVGraphicsExporter.exe /Register
DVDCFUtility.exe /Register
if defined CommonProgramFiles(x86) (cd /D "%CommonProgramFiles(x86)%\Vector\DaVinci") else cd /D "%CommonProgramFiles%\Vector\DaVinci"
call RegisterCommon.bat

