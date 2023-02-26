/*
                        Low-Level System Library

            Copyright 2010-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/* This module contains the library support for stack canaries.
 */

#include "ind_io.h" /* write() */
#include <stdlib.h>

/* This routine is called when a canary check fails.  The compiler assumes
 * it will never return.
 */
void __stack_chk_fail(void)
{
#if defined(__INTEGRITY_SHARED_LIBS) || defined(__sun)
    /* For now, INTEGRITY will just spin.  In the end, this needs to be
     * defined in the INTEGRITY libraries.
     *
     * For SPARC native, -stack_protector is not supported, and this is just
     * a stub.
     */
    while (1) {
	(void)0;
    }
#else
    static const char err[] = "Stack canary corrupted\n";
    
    (void)write(2 /* stderr */, err, sizeof(err)-1);

    _Exit(1);

    /* NOTREACHED */
#endif
}
