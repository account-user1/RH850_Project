/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_heap.c: Machine Independent low-level heap growth facilities. */

#include "indos.h"
#include <string.h>		/* for memset() */
#include <stddef.h>		/* for memset() */
#include "ind_thrd.h"

#if defined(EMBEDDED)
/******************************************************************************/
/* int brk (void *addr);						      */
/*  Extend the heap. Depending on the environment, this may just test for     */
/*  valid memory at addr-1 (like under the ROM Monitor) or it may result in   */
/*  process memory allocation (by a simulator process). Return 0 on success.  */
/*									      */
/*  Return -1 on an error and set errno = ENOMEM.			      */
/*									      */
/*  brk() is no longer called, and is only here for programs that want to use */
/*  it directly and know what they are doing. If possible, use only sbrk().   */
/******************************************************************************/
#if 0
int brk (void *addr)
{
    if (__ghs_syscall(SYSCALL_BRK, addr)) {
	__gh_set_errno(ENOMEM);
	return -1;
    }
    return 0;
}
#endif

/******************************************************************************/
/* void *__ghs_heapseg_size (void);					      */
/*									      */
/*  Return the size of the heap segment being managed by sbrk.		      */
/*									      */
/*  __ghs_heapseg_size is normally only called during startup and only by     */
/*  malloc().                                                                 */
/******************************************************************************/

size_t __ghs_heapseg_size(void)
{
    extern char __ghsbegin_heap[], __ghsend_heap[];
    return (&__ghsend_heap[0] - &__ghsbegin_heap[0]);
}

/******************************************************************************/
/* void *sbrk (size_t size);						      */
/*  Return a pointer to at least size bytes of contiguous read/write memory.  */
/*  The memory returned by sbrk on different calls need not be contiguous     */
/*  with each other (although they should be for compatibility with unix).    */
/*									      */
/*  Return -1 on an error and set errno = ENOMEM.			      */
/*									      */
/*  sbrk is normally only called by malloc.				      */
/*									      */
/*  WARNING: __ghs_alloc() relies on our contiguous algorithm and our	      */
/*  behavior for size==0, which returns the next-available pointer.	      */
/******************************************************************************/

void *sbrk (size_t size)
{
    extern char __ghsbegin_heap[], __ghsend_heap[];
    static char *pt;
    char *npt;
    void *ret;

    __ghsLock();
    if (pt == NULL)
	pt = __ghsbegin_heap;
    npt = pt + size;
    if (__ghsbegin_heap <= npt && npt <= __ghsend_heap)
	ret = ((pt = npt) - size);
    else {
	/* cast to short for v850e with 16bit data pointers. harmless elsewhere. */
	ret = (void *)(short)-1;
	__gh_set_errno(ENOMEM);
    }
    __ghsUnlock();
    return ret;
}


#endif
