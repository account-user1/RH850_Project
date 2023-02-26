for %%* in (../.) do set SWC=%%~n*

ECHO #!gbuild > %SWC%.gpj
ECHO [Subproject] >> %SWC%.gpj
for %%F in (../src/*.c) do ECHO ..\src\%%F >> %SWC%.gpj
for %%F in (../include/*.h) do ECHO ..\include\%%F >> %SWC%.gpj