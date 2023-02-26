ECHO #!gbuild > include.gpj
ECHO [Subproject] >> include.gpj
for %%F in (../include/*.h) do ECHO ..\include\%%F >> include.gpj