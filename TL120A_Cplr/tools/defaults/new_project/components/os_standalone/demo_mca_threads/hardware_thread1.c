#include <stdio.h>
extern volatile int val0, val1, val2, val3;

int set_context(void);
#pragma asm
_set_context::
    mov		0x1006, r6
    mov		0x1007, r7
    mov		0x1008, r8
    mov		0x1009, r9
hang:
    jarl	hang, r10
    jmp		[lp]
    .type   _set_context,@function
    .size   _set_context,.-_set_context
#pragma endasm

int main()
{
    printf("Core 1 started\n");
    val1 = 0;
    while (!val0)
	;
    while (val0){
	if (val1 == 0x1111)
	    continue;
	val1++;
	if (val1 == 101)
	    val1 += set_context();
    }

    return 0;
}
