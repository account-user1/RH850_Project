for %%* in (../.) do set SWC=%%~n*
 
ECHO VersionTag45>.\QAC\QAC.prj
ECHO ProjectDataflowFile=..\..\..\TL100A_QACSuprt\tools\QAC8.1.1\df_pers_component.p_d>>.\QAC\QAC.prj
ECHO StartProjectMarker>>.\QAC\QAC.prj
ECHO FolderName=%SWC%>>.\QAC\QAC.prj
ECHO SourcePath=>>.\QAC\QAC.prj
ECHO OutputPath=..\..\doc\QAC_Results>>.\QAC\QAC.prj
ECHO SubsPers=..\..\..\TL100A_QACSuprt\tools\QAC8.1.1\m_pers.p_s>>.\QAC\QAC.prj
ECHO AnalPers=..\..\..\TL100A_QACSuprt\tools\QAC8.1.1\a_pers_component.p_a>>.\QAC\QAC.prj
ECHO CompPers=..\..\..\TL100A_QACSuprt\tools\QAC8.1.1\c_pers_component.p_c>>.\QAC\QAC.prj
for %%F in (../src/*.c) do ECHO ..\..\src\%%F>>.\QAC\QAC.prj
ECHO EndContainedFilesMarker>>.\QAC\QAC.prj
