
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
	.robase	     align(4)			    ABS	:
	.rosdata				    ABS	:
	.rodata					    ABS	:
	.callt		    0				:
	.text		     				:
	.syscall     align(4)				:
	.secinfo					:
	.fixaddr					:
	.fixtype					:

	.ROM.data			     ROM(.data)	:
	.ROM.sdata 			    ROM(.sdata)	:

	.sdabase	    0				:
	.sdata						:

	.sbss						:
	.bss						:
	.data						:

	.heap	     align(8)	pad(heap_reserve)	:
}
