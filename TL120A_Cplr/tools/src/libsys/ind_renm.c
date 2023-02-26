/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_renm.c: ANSI rename() facility. */

#include "indos.h"

/* If an external ANSI-compliant libc.a is available, it will have rename() */
#if !defined(LIBCISANSI)
/******************************************************************************/
/*  int rename(const char *old, const char *new);			      */
/*  Rename the file named "old" to the name "new".			      */
/*  Return 0 if the operation succeeds.  Return -1 if there is no such        */
/*  file or if the file cannot be renamed, and set errno appropriately	      */
/******************************************************************************/
int rename(const char *old, const char *new) {
#if defined(EMBEDDED)
#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    return __ghs_syscall(SYSCALL_RENAME, old, new);
#pragma ghs endnowarning 1547
#elif 0	/* no known systems still require this to be provided for them */
    if (link(old, new)!=0)
	return(-1);
    return(unlink(old));
#else
/*
 *  If no other implementation is provided, return -1 (there are no files)
 */
    return(-1);
#endif
}
#endif	/* !LIBCISANSI */
