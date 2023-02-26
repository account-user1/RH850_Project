ECHO #!gbuild > src.gpj
ECHO [Subproject] >> src.gpj
for %%F in (../src/*.c) do ECHO ..\src\%%F >> src.gpj
for %%F in (../src/StubbedComponents/*.c) do ECHO ..\src\StubbedComponents\%%F >> src.gpj
for %%F in (../src/*.850) do ECHO ..\src\%%F >> src.gpj