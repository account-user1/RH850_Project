/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/*
    This file is included in every library module which uses errno
*/
#ifndef __INDERRNO_H
#define __INDERRNO_H

#include <errno.h>

#include "inddef.h"

#if defined(EMBEDDED)

void __gh_set_errno(int err);
int  __gh_get_errno(void);

#else

#define __gh_set_errno(x)	((errno) = (x))
/* #define  __gh_get_errno(void)	(errno) */
static __inline int __gh_get_errno(void) { return errno; }

#endif

#endif /* __INDERRNO_H */
