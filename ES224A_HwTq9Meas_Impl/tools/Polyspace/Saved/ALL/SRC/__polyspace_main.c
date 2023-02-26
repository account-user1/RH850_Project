#include "pst_stub_types.h"

extern void assert(int);


#define PST_TRUE() pst_random_int

/* Definition of max array size */

/* Number of bits of 1 byte and addressable unit size */

#define PST_SIZE_CHAR_IN_BITS 8

/* Memory zone addressable according to the target and the pointer configuration */

#define ARRAY_SIZE (2147483647 / PST_SIZE_CHAR_IN_BITS)
#define ARRAY_NBELEM_0(TY) (((ARRAY_SIZE / 2) - 1) / sizeof (TY))
#define ARRAY_NBELEM(TY) (ARRAY_NBELEM_0(TY) < 1 ? 1 : ARRAY_NBELEM_0(TY))


/* Declaration of random variables */

static volatile __PST__CHAR pst_random_char;

static volatile int pst_random_int;


/* Definition of needed stubs for function pointers */


/* Definition of init procedures */


/* Definition of variables init procedures */


/* Definition of functions */


/* Main */

void main(void)
{
    /* Initialization of global variables */

    while (PST_TRUE())
    {
        
        /* Call of functions */

        /* call of function Rte_Stub */
        if (PST_TRUE())
        { /* call it */
            extern __PST__VOID Rte_Stub(__PST__VOID);

            Rte_Stub();
        }
        
    }
}
