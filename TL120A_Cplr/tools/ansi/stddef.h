/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STDDEF_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STDDEF_H

#include "ghs_null.h"		/* defines NULL and size_t */
#include "ghs_wchar.h"		/* defines wchar_t */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _PTRDIFF_T
#define _PTRDIFF_T
# if (__PTR_BIT <= __INT_BIT) || (__INT_BIT == __LONG_BIT)
typedef int ptrdiff_t;
# elif (__PTR_BIT <= __LONG_BIT) || (__LONG_BIT == __LLONG_BIT)
typedef long ptrdiff_t;
# else
typedef long long ptrdiff_t;
# endif
#endif	/* _PTRDIFF_T */

#if (!defined(__MISRA_20_6) || (__MISRA_20_6 != 2)) && (!defined(__MISRA_120) || (__MISRA_120 != 2)) && !defined(__SC3__)
#if (defined(__cplusplus) || defined(__EDG__) || defined(__GHS_OFFSETOF_NEW_FORM__)) && !defined(__GHS_OFFSETOF_OLD_FORM__) 
#if defined(__STDC__)
#define offsetof(t, memb) (__INTADDR__(&(((t *)0)->memb)))
#else /* K&R mode */
#define offsetof(t, memb) _Pragma("ghs nowarning 178") \
                          (__INTADDR__(&(((t *)0)->memb))) \
                          _Pragma("ghs endnowarning")
#endif /* __STDC__ vs K&R */
#else
#define offsetof(type,id)	((size_t)(((char*)&(((type *)16)->id))-((char*)((type *)16))))
#endif  /* __cplusplus */
#endif  /* __MISRA_20_6 */

#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif  /* _STDDEF_H */
