for %%* in (../.) do set SWC=%%~n*

ECHO #!gbuild > %SWC%.gpj
ECHO [Subproject] >> %SWC%.gpj
ECHO # MCAL BUILD OPTIONS # >> %SWC%.gpj
ECHO 	-c >> %SWC%.gpj
ECHO 	-Osize >> %SWC%.gpj
ECHO 	-g >> %SWC%.gpj
ECHO 	-cpu=rh850g3m >> %SWC%.gpj
ECHO 	-gsize >> %SWC%.gpj
ECHO 	-prepare_dispose >> %SWC%.gpj
ECHO 	-inline_prologue >> %SWC%.gpj
ECHO 	-sda=all >> %SWC%.gpj
ECHO 	-Wundef >> %SWC%.gpj
ECHO 	-no_callt >> %SWC%.gpj
ECHO 	-reserve_r2 >> %SWC%.gpj
ECHO 	--short_enum >> %SWC%.gpj
ECHO 	--prototype_errors >> %SWC%.gpj
ECHO 	--diag_error 193 >> %SWC%.gpj
ECHO 	-dual_debug >> %SWC%.gpj
ECHO 	-large_sda >> %SWC%.gpj
ECHO 	--no_commons >> %SWC%.gpj
ECHO 	-shorten_loads >> %SWC%.gpj
ECHO 	-shorten_moves >> %SWC%.gpj
ECHO 	-Wshadow >> %SWC%.gpj
ECHO 	-nofloatio >> %SWC%.gpj
ECHO 	-ignore_callt_state_in_interrupts >> %SWC%.gpj
ECHO 	-delete >> %SWC%.gpj

for %%F in (../src/*.c) do ECHO ..\src\%%F >> %SWC%.gpj
for %%F in (../include/*.h) do ECHO ..\include\%%F >> %SWC%.gpj