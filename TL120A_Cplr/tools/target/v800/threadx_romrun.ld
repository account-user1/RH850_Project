//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//

SECTIONS
{
//
// INTERNAL RAM SECTIONS
//

    .stack                           PAD(stack_reserve) ABS : > sram_memory
    .tdata					        ABS : > . 
    .sdabase			                   ALIGN(4) : > .
    .sdata						    : > .
    .sbss						    : > .

    .zdata			                        ABS : > zda_memory 
    .zbss					        ABS : > . 

//
// ROM SECTIONS
//

    .rozdata				                    : > flash_memory
    .robase				           ALIGN(4) : > .
    .rosdata						    : > .
    .rodata						    : > .
    .callt						    : > .
    .text						    : > .
    .reset						    : > .
    .syscall			                            : > .
    .secinfo						    : > .
    .fixaddr						    : > .
    .fixtype						    : > .
    .CROM.zdata				       CROM(.zdata) : > .
    .CROM.tdata				       CROM(.tdata) : > .
    .CROM.data				        CROM(.data) : > .
    .CROM.sdata				       CROM(.sdata) : > .

//
// RAM SECTIONS
//

    .data						    : > sram_memory
    .bss						    : > .

    .eventlog  ALIGN(8) PAD(eventlog_reserve)               : > .
    .heap      ALIGN(8) PAD(heap_reserve)                   : > .
    .free_mem  ALIGN(8) PAD(free_mem_reserve)               : > .

//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    ___ghs_ramstart  = MEMADDR(sram_memory);
    ___ghs_ramend    = MEMENDADDR(sram_memory);
    ___ghs_romstart  = MEMADDR(flash_memory);
    ___ghs_romend    = MEMENDADDR(flash_memory);

//
// These special symbols mark the bounds of RAM and ROM images of boot code.
// They are used by the GHS startup code (_start and __ghs_ind_crt0).
//
    ___ghs_rambootcodestart  = 0;
    ___ghs_rambootcodeend    = 0;
    ___ghs_rombootcodestart  = ADDR(.callt);
    ___ghs_rombootcodeend    = ENDADDR(.fixtype);
}
