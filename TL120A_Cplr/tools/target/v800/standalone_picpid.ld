//
// Program layout for PIC and PID built programs.
//
//

SECTIONS
{
        .stack     0xfff00000   PAD(stack_reserve)  ABS :
        .tdata                  MAX_SIZE(256)       ABS :
        .zdata     0xffff8000                       ABS :
        .zbss                                       ABS :

        .rozdata   0x00001000                       ABS :
        .robase      ALIGN(16)                       ABS :
	.rosda_start ALIGN(16)                       ABS :
        .rosdata                                    ABS :
        .rosda_end                                  ABS :
        .rodata                                     ABS :
        .callt      0x00000000                           :
        .text                                           :
        .syscall     ALIGN(4)                           :
        .secinfo                                        :
        .fixaddr                                        :
        .fixtype                                        :

        .sdabase   0x00000000                           :
	.sda_start					:
        .sdata                                          :

        .sbss                                           :
	.sda_end					:
        .bss                                            :
        .data                                           :

        .heap        ALIGN(16)   PAD(heap_reserve)       :
}
