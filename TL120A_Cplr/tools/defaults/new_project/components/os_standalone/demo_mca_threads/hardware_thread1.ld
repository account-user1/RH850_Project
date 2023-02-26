MEMORY {
    zda_memory		: ORIGIN = 0xffff8000, LENGTH = 28K
    sfr_memory		: ORIGIN = 0xfffff000, LENGTH = 4K

    sram_shared		: ORIGIN = 0x10000000, LENGTH = 1M
    sram_core0		: ORIGIN = .,          LENGTH = 4M
    sram_core1		: ORIGIN = .,          LENGTH = 4M
    sram_core2		: ORIGIN = .,          LENGTH = 4M
    sram_core3		: ORIGIN = .,          LENGTH = 4M
}

CONSTANTS {

    heap_reserve = 1M
    stack_reserve = 1M - (32K + 256)

}

SECTIONS
{
//
// RAM SECTIONS
//
    .callt                                                  : > sram_core1
    .text                                                   : > .
    .syscall                                       ALIGN(4) : > .
    .secinfo                                                : > .
    .fixaddr                                                : > .
    .fixtype                                                : > .

    .robase                                        ALIGN(4) : > .
    .rosdata                                                : > .
    .rodata                                                 : > .
 
    .sdabase                                       ALIGN(4) : > .
    .sdata                                                  : > .
    .sbss                                                   : > .

    .data                                                   : > .
    .bss                                                    : > .

    .heap                       ALIGN(8)  PAD(heap_reserve) : > .

    .stack                  ALIGN(4) PAD(stack_reserve) ABS : > .
    .tdata                                              ABS : > zda_memory
    .rozdata                                            ABS : > .
    .zdata                                              ABS : > . 
    .zbss                                               ABS : > . 


//
// These special symbols mark the bounds of RAM and ROM memory.
// They are used by the MULTI debugger.
//
    ___ghs_ramstart  = MEMADDR(sram_core1);
    ___ghs_ramend    = MEMENDADDR(sram_core1);
    
}
