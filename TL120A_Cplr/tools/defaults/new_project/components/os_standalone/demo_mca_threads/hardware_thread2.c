#include <stdio.h>
extern volatile int val0, val1, val2, val3;

int set_context(void);
#pragma asm
_set_context::
    mov		0x2006, r6
    mov		0x2007, r7
    mov		0x2008, r8
    mov		0x2009, r9
hang:
    jarl	hang, r10
    jmp		[lp]
    .type   _set_context,@function
    .size   _set_context,.-_set_context
#pragma endasm

int main()
{
    printf("Core 2 started\n");
    val2 = 0;
    while (!val0)
	;
    while (val0){
	if (val2 == 0x1122)
	    continue;
	val2++;
	if (val2 == 102)
	    val2 += set_context();
    }

    return 0;
}
