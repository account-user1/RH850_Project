/*
			C Runtime Library
			Gnu compatibility

	Copyright (c) 2002-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _ALLOCA_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _ALLOCA_H

#ifdef __ghs__

#if defined(__ppc) || defined(__i386) || defined(__x86_64__) \
        || defined(__sparc__) || defined(__mc68000) \
        || defined(__mips) && !defined(__mips16) \
	|| defined(__FireFly__)

#ifdef __cplusplus
extern "C" {
#endif

#include "ghs_null.h" /* size_t */

#define alloca(size) __builtin_alloca(size)
#define __GHS_TARGET_IMPLEMENTS_ALLOCA

extern void *__builtin_alloca(size_t __CNT);
extern void *__get_stack_pointer (void);
extern void __set_stack_pointer (void *);

#ifdef __cplusplus
}
#endif

#endif /* __ppc */

#endif /* __ghs__ */

#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif	/* _ALLOCA_H */
