//
// Program layout for starting in ROM, copying data to RAM,
// and continuing to execute out of ROM.
//

SECTIONS
{
//
// RAM SECTIONS
//
    .sda_start			                   ALIGN(16) : > sram_memory
    .sdabase						    : > .
    .sdata						    : > .
    .sbss						    : > .
    .sda_end						    : > .

    .stack                  ALIGN(4) PAD(stack_reserve) ABS : > iram_memory,sram_memory,global_memory
    .data					   ALIGN(16) : > dram_memory,sram_memory,global_memory
    .bss						    : > .

    .heap	                ALIGN(16) PAD(heap_reserve)  : > .

    .tdata				       ALIGN(16) ABS : > iram_memory,zda_memory,sram_memory,global_memory
    .zdata			                        ABS : > zda_memory,iram_memory,sram_memory,global_memory
    .zbss					        ABS : > .

    // Allow small hook functions to execute out of RAM where
    // MULTI can set software breakpoints for debugging.
    .multibreak						: {
   	libind.a(indmultibreak.o)(.text)
	libdbmem.a(indmultibreak.o)(.text)
    	libind.a(indrnerr_wrap.o)(.text)
	libdbmem.a(indrnerr_wrap.o)(.text)
    }							  > sram_memory,global_memory
    .syscall			                            : > .

//
// ROM SECTIONS
//

    .reset						    : > flash_rsvd1,flash_memory
    .rozdata				                ABS : > rozda_memory,flash_memory
    .robase				           ALIGN(16) : > flash_memory
    .rosda_start			           ALIGN(16) : > .
    .rosdata						    : > .
    .rosda_end						    : > .
    .rodata						    : > .
    .callt					   ALIGN(4) : > .
    .text						    : > .
    .ROM.syscall 		               ROM(.syscall): > .
    .secinfo						    : > .
    .fixaddr						    : > .
    .fixtype						    : > .
    .CROM.zdata				       CROM(.zdata) : > .
    .CROM.tdata				       CROM(.tdata) : > .
    .CROM.data				        CROM(.data) : > .
    .CROM.sdata				       CROM(.sdata) : > .
    .CROM.multibreak 		          CROM(.multibreak) : > .

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

//
// This special symbol marks the the first address executed after the
// ROM to RAM copy is complete.  It is used by the MULTI debugger.
//
    ___ghs_after_romcopy = ___ghs_ind_crt1;

//
// This symbol points to the ROM copy of __dotsyscall (which is in RAM).
// It overrides the weak symbol in startup code, which is called before RAM
// has been initialized.  This symbol is used by the MULTI debugger.
//
    ___ghs_initial_dotsyscall = ADDR(.ROM.syscall);
}

// Redirect calls to __rnerr Runtime Error Checking function to a wrapper
// function located in RAM so we can set a software breakpoint on it. 
OPTION("-wrap __rnerr")

// Pull in alternate _multiend definitions to move into RAM for
// Command Line Procedure Calls.
OPTION("-u __multiend_ram")
