ECHO #!gbuild > generate.gpj
ECHO [Subproject] >> generate.gpj
for %%F in (../generate/*.c) do ECHO ..\generate\%%F >> generate.gpj
for %%F in (../generate/Dio/*.c) do (
ECHO ..\generate\Dio\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/Fls/*.c) do (
ECHO ..\generate\Fls\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/Mcu/*.c) do (
ECHO ..\generate\Mcu\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/Port/*.c) do (
ECHO ..\generate\Port\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/Spi/*.c) do (
ECHO ..\generate\Spi\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/Wdg/*.c) do (
ECHO ..\generate\Wdg\%%F >> generate.gpj
ECHO # MCAL BUILD OPTIONS # >> generate.gpj
ECHO 	-c >> generate.gpj
ECHO 	-Osize >> generate.gpj
ECHO 	-g >> generate.gpj
ECHO 	-cpu=rh850g3m >> generate.gpj
ECHO 	-gsize >> generate.gpj
ECHO 	-prepare_dispose >> generate.gpj
ECHO 	-inline_prologue >> generate.gpj
ECHO 	-sda=all >> generate.gpj
ECHO 	-Wundef >> generate.gpj
ECHO 	-no_callt >> generate.gpj
ECHO 	-reserve_r2 >> generate.gpj
ECHO 	--short_enum >> generate.gpj
ECHO 	--prototype_errors >> generate.gpj
ECHO 	--diag_error 193 >> generate.gpj
ECHO 	-dual_debug >> generate.gpj
ECHO 	-large_sda >> generate.gpj
ECHO 	--no_commons >> generate.gpj
ECHO 	-shorten_loads >> generate.gpj
ECHO 	-shorten_moves >> generate.gpj
ECHO 	-Wshadow >> generate.gpj
ECHO 	-nofloatio >> generate.gpj
ECHO 	-ignore_callt_state_in_interrupts >> generate.gpj
ECHO 	-delete >> generate.gpj
)
for %%F in (../generate/*.h) do ECHO ..\generate\%%F >> generate.gpj
for %%F in (../generate/Components/*.h) do ECHO ..\generate\Components\%%F >> generate.gpj
for %%F in (../generate/Dio/*.h) do ECHO ..\generate\Dio\%%F >> generate.gpj
for %%F in (../generate/Fls/*.h) do ECHO ..\generate\Fls\%%F >> generate.gpj
for %%F in (../generate/Mcu/*.h) do ECHO ..\generate\Mcu\%%F >> generate.gpj
for %%F in (../generate/Port/*.h) do ECHO ..\generate\Port\%%F >> generate.gpj
for %%F in (../generate/Spi/*.h) do ECHO ..\generate\Spi\%%F >> generate.gpj
for %%F in (../generate/Wdg/*.h) do ECHO ..\generate\Wdg\%%F >> generate.gpj
for %%F in (../generate/*.dld) do ECHO ..\generate\%%F >> generate.gpj