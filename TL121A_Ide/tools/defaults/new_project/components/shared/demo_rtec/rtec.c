#include "labels.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int anarray[10];

int main(int argc, char *argv[])
{
    int arindex;
    int *ptrint = 0;
    int tmp;
    int do_null_deref = 1;

    if(argc != 1) {
	if( !strcmp("noderef", argv[1]) )
	    do_null_deref = 0;
    }

    /* array boundary error  */
    arindex = 10;
    tmp = anarray[arindex];
    /* This may have been really tragic if we did a write...
       We will be dealing with garbage any way you look at it */
    printf("tmp = %d\n", tmp);

    /* case/switch with no match */
    arindex = 5;
    switch(arindex) {
    case 1:
	arindex++;
	break;
    case 2:
	arindex--;
	break;
    }

    /* free memory that wasn't allocated */
    ptrint = &arindex;
    free((void*) *ptrint);

    /* These last two operations will be detected, but if we attempt
       to continue running the process it may be halted by the OS.  To
       see the second of these examples change the do_null_deref
       variable to 0. */

    if(do_null_deref) {
	printf("WARNING: This may be an unrecoverable run time error.\n");
	/* dereference a NULL pointer */
	ptrint = 0;
	/* We cannot recover from this gracefully without handling
	   the segmentation violation */
    DereferenceNull:
	arindex = *ptrint;
    }

    /* divide by zero (yow!) */
    arindex = 0;
    /* We cannot recover from this gracefully without handling
       the exception */
    anarray[0] = 15 / arindex;

    return 0;
}
