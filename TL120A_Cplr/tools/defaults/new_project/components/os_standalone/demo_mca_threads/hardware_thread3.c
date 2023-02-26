#include <stdio.h>
extern volatile int val0, val1, val2, val3;

int set_context(void);
#pragma asm
_set_context::
    mov		0x3006, r6
    mov		0x3007, r7
    mov		0x3008, r8
    mov		0x3009, r9
hang:
    jarl	hang, r10
    jmp		[lp]
    .type   _set_context,@function
    .size   _set_context,.-_set_context
#pragma endasm

int main()
{
    printf("Core 3 started\n");
    val3 = 0;
    while (!val0)
	;
    while (val0){
	if (val3 == 0x1133)
	    continue;
	val3++;
	if (val3 == 103)
	    val3 += set_context();
    }

    return 0;
}
