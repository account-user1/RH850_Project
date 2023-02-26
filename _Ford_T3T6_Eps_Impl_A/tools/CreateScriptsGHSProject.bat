ECHO #!gbuild > scripts.gpj
ECHO [Subproject] >> scripts.gpj
for %%F in (../output/*.rc) do ECHO ..\output\%%F >> scripts.gpj
for %%F in (../output/*.py) do ECHO ..\output\%%F >> scripts.gpj