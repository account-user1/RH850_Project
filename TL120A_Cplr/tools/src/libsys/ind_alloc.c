/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_alloc.c: Machine Independent low-level heap growth facilities. */

#include "indos.h"
#include <string.h>		/* for memset() */
#include "ind_thrd.h"
#include <stdint.h>

#if defined(EMBEDDED)


/******************************************************************************/
/* void *__ghs_alloc (int size, int align);				      */
/*  Return a pointer to at least size bytes of contiguous read/write memory,  */
/*  at an address that is aligned to at least a multiple of align. This is a  */
/*  front end to sbrk(), mainly for internal use by the Low-Level Libraries.  */
/*									      */
/*  NOTE: 'align' MUST BE A POSITIVE POWER OF TWO. We also return differently.*/
/*									      */
/*  Return 0 on an error and set errno = ENOMEM.			      */
/******************************************************************************/
void *__ghs_alloc (int size, int align)
{
    /* cast to short for v850e with 16bit data pointers. harmless elsewhere. */
    char *m1 = (char *)(short)-1;
    char *ret;

    __ghsLock();
    ret = sbrk(0);
    if (ret == m1)
	ret = 0;
    else {
	ret = sbrk((-(intptr_t)ret) & (align-1));	/* align our pointer */
	if (ret == m1 || sbrk(size) == m1)	/* do the real allocation */
	    ret = 0;
    }
    __ghsUnlock();
    return ret;
}

/******************************************************************************/
/* void *__ghs_calloc (int size, int align);				      */
/*  Allocate some memory by passing our arguments to __ghs_alloc(), then use  */
/*  memset() to clear the memory to 0 if the allocation was successful.	      */
/*									      */
/*  NOTE: 'align' MUST BE A POSITIVE POWER OF TWO.			      */
/******************************************************************************/
void *__ghs_calloc (int size, int align)
{
    void *p = __ghs_alloc(size, align);
    if (!p)
	return p;
    return memset(p, '\0', size);
}

#endif
