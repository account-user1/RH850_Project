#include <stdio.h>
#include <v800_ghs.h>
extern volatile int val0, val1, val2, val3;

void enable_thread(int tid)
{
#pragma asm
    movhi	0x8000, zero, r7	-- EN=1
    ldsr	r6, 10, 1		-- set tcsel
    ldtc.sr	r7, 5, 2		-- set thread's HTCTL
#pragma endasm
}

typedef struct {
    unsigned int r6,r7,r8,r9,r10,pc;
} context;

void get_context(int tid, context *ctx)
{
#pragma asm
    ldsr	r6, 10, 1		-- set tcsel
    sttc.gr	r6, r10
    st.w	r10, 0[r7]		-- save thread's r6
    sttc.gr	r7, r10
    st.w	r10, 4[r7]		-- save thread's r7
    sttc.gr	r8, r10
    st.w	r10, 8[r7]		-- save thread's r8
    sttc.gr	r9, r10
    st.w	r10, 12[r7]		-- save thread's r9
    sttc.gr	r10, r10
    st.w	r10, 16[r7]		-- save thread's r10
    sttc.pc	r10
    st.w	r10, 20[r7]		-- save thread's pc
    add		4, r10
    ldtc.pc	r10			-- advance thread's pc
    mov		0x1000, r10
    ldtc.gr	r10, r10		-- set thread's r10
#pragma endasm
}

void print_context(int tid)
{
    context ctx;
    get_context(tid, &ctx);
    printf("Context for thread %d\n", tid);
    printf("  R6 = 0x%08x\n", ctx.r6);
    printf("  R7 = 0x%08x\n", ctx.r7);
    printf("  R8 = 0x%08x\n", ctx.r8);
    printf("  R9 = 0x%08x\n", ctx.r9);
    printf("  PC = %s\n", (ctx.pc + 4 == ctx.r10) ? "VALID" : "INVALID");
}

int old1=0, old2=0, old3=0;
void check()
{
    printf("val0 = %08x", val0);
    printf(", Thread1: %s", (val1 >= old1) ? "PASS" : "FAIL");
    printf(", Thread2: %s", (val2 >= old2) ? "PASS" : "FAIL");
    printf(", Thread3: %s\n", (val3 >= old3) ? "PASS" : "FAIL");
    old1=val1;
    old2=val2;
    old3=val3;
}

extern int common_lib0_f0(int);
extern int common_lib1_f0(int);
extern int core1_lib0_f0(int);

int main()
{
    int i,j;
    __LDSR(23, 2, 3);  // Set HTSCCTL.RND to indicate 4 schedule slots
    __LDSR(24, 2, 0x03020100);  // Set HTSTBL0 to schedule our 4 threads
    asm("dst");	/* start multi-threading */
    /* Enable threads 1, 2, and 3 */
    enable_thread(1);
    enable_thread(2);
    enable_thread(3);
    /* Wait for the other cores to begin */
    while (val1 || val2 || val3)
	;

    {        
        int a1 = common_lib0_f0(10);
        int a2 = common_lib1_f0(11);
        int a3 = core1_lib0_f0(12);
        if (a1 != 10 || a2 != 27 || a3 != 4108)
            printf("ERROR: %d %d %d\n", a1, a2, a3);
    }
    
    val0 = 0;
    for (i=0; i<10; i++){
	asm("dst");
	for (j=0; j< 1000; j++){
	    val0++;
	}
	asm("est");
	check();
    }    
    printf("val0 = 0x%08x, val1 = 0x%08x, val2 = 0x%08x, val3 = 0x%08x\n", val0, val1, val2, val3);
    printf("---- printing thread contexts ----\n");
    print_context(1);
    print_context(2);
    print_context(3);

    old1 += 0x1000;
    old2 += 0x1000;
    old3 += 0x1000;
    
    for (i=0; i<10; i++){
	asm("dst");
	for (j=0; j< 2000; j++){
	    val0++;
	}
	asm("est");
	check();
    }
    printf("val0 = 0x%08x, val1 = 0x%08x, val2 = 0x%08x, val3 = 0x%08x\n", val0, val1, val2, val3);

    asm("dst");
    val0 = 0;
    return 0;
}
