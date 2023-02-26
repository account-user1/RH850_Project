/*
                        Low-Level System Library

            Copyright 2007-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "ind_thrd.h"
#include <stddef.h>
#include <setjmp.h>

#if !defined(MINIMAL_STARTUP)
/* Acquire global lock.  Blocks until the lock becomes available. */
void __ghsLock(void)
{
}

/* Release global lock */
void __ghsUnlock(void)
{
}
#endif /* !defined(MINIMAL_STARTUP) */

/* A callback to initialize the lock data structure before it is used. */
void __gh_lock_init(void)
{
}

