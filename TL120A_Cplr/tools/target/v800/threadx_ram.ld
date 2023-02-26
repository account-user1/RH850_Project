//
// Program layout for running out of RAM.
//
//

SECTIONS
{
    .stack                           PAD(stack_reserve) ABS : > sram_memory
    .tdata					        ABS : > .
    .sdabase			                   ALIGN(4) : > .
    .sdata						    : > .
    .sbss						    : > .

    .rozdata					        ABS : > zda_memory
    .zdata			                        ABS : > .
    .zbss					        ABS : > .

    .robase				           ALIGN(4) : > sram_memory
    .rosdata						    : > .
    .rodata						    : > .
    .callt						    : > .
    .text						    : > .
    .reset						    : > .
    .syscall			                            : > .
    .secinfo						    : > .
    .fixaddr						    : > .
    .fixtype						    : > .

    .data						    : > sram_memory
    .bss						    : > .

    .eventlog       ALIGN(8) PAD(eventlog_reserve)          : > .
    .heap           ALIGN(8) PAD(heap_reserve)              : > .
    .free_mem       ALIGN(8) PAD(free_mem_reserve)          : > .

//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    ___ghs_ramstart  = MEMADDR(sram_memory);
    ___ghs_ramend    = MEMENDADDR(sram_memory);
    ___ghs_romstart  = MEMADDR(flash_memory);
    ___ghs_romend    = MEMENDADDR(flash_memory);
}


