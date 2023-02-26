
CONSTANTS {

    heap_reserve = 1M
    stack_reserve = 1M - (32K + 256)

}

SECTIONS
{
	.stack	   0xfff00000	pad(stack_reserve)  ABS	:
	.tdata			max_size(256)       ABS	:
	.zdata	   0xffff8000			    ABS	:
	.zbss					    ABS	:

	.rozdata       0x1000			    ABS	:
	.robase	     align(16)				:
	.rosda_start					:
	.rosdata					:
	.rosda_end					:
	.rodata						:
	.callt						:
	.text						:
	.syscall     align(4)				:
	.secinfo					:
	.fixaddr					:
	.fixtype					:

	.ROM.data			     ROM(.data)	:
	.ROM.sdata 			    ROM(.sdata)	:

	.data	   0x00300000				:
	.sda_start     align(16)				:
	.sdata						:
	.sbss						:
	.sda_end					:
	.bss						:

	.heap	     align(16)	pad(heap_reserve)	:
}
