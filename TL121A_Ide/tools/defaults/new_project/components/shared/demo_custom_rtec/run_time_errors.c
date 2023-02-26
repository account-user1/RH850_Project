#include "labels.h"
#include <stdio.h>
#include <stdlib.h>

int anarray[10];

int main(void)
{
    int arindex;
    int *ptrint = 0;

/* array boundary error  */
    arindex = 10;
    arindex = anarray[arindex]; /* This may have been really tragic if we did a write...
                                   We will be dealing with garbage any way you look at it */

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

/* dereference a NULL pointer */
    ptrint = 0;
    arindex = *ptrint; /* depending on your target hardware you may not be able to
                          recover from this gracefully without handling the exception*/

/* divide by zero (yow!) */
    arindex = 0;
Done:
    anarray[0] = 15 / arindex; /* depending on your target hardware you may not be able to 
                                  recover from this gracefully without handling the exception*/

    return 0;
}
