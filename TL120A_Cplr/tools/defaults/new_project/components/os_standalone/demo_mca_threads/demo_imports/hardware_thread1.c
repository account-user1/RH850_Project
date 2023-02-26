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

extern int common_lib0_f0(int);
extern int common_lib1_f0(int);
extern int core0_lib0_f0(int);
    
int main()
{
    printf("Core 1 started\n");
    val1 = 0;
    {        
        int a1 = common_lib0_f0(10);
        int a2 = common_lib1_f0(11);
        int a3 = core0_lib0_f0(12);
        if (a1 != 10 || a2 != 27 || a3 != 4108)        
            printf("%d %d %d\n", a1, a2, a3);
    }
    
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
