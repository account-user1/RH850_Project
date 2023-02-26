/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
#if 0	/* use #if 0 so this does not look like commented out code */
    Note.  This header is purposely not protected.  Its contents are all
    protected individually.  This only matters if a program (illegally) does
	#include <stdio.h>
	#undef NULL
	#include <stddef.h>
    Since most implementations work for the above program, we ought to also.
#endif

#ifdef __ghs__
#pragma ghs startnomisra
#endif

# if !defined(_ALLOCA_H) && !defined(_GHS_LOCALE_H) && !defined(_GHS_MALLOC_H) && \
     !defined(_STDDEF_H) && !defined(_STDIO_H) && \
     !defined(__GHS_STDLIB_H) && !defined(_STDLIB_H) && \
     !defined(_STRING_H) && !defined(_GHS_TIME_H) && !defined(_TIME_H) && \
    !defined(_GHS_WCHAR_H) && !defined(_GHS_WMEMCHR_H) && !defined(__INTEGRITY) && \
    !defined(INT_178B)
#  error Please include <stddef.h> instead of ghs_null.h
#endif

# if defined(NULL)
# elif !defined(__cplusplus) && !defined(__MISRA_45) && !defined(__MISRA_11_3)
#    define NULL ((void *)0)	/* cannot be assigned to a function pointer */
# elif __PTR_BIT > __INT_BIT
#    define NULL (0L)		/* int is smaller than pointer on this target */
# else
#    define NULL (0)		/* C++ requires this to be integral, not a pointer */
# endif	/* NULL */

# if !defined(_SIZE_T) && !defined(_SIZE_T_DEFINED)
#  define _SIZE_T
#  define _SIZE_T_DEFINED
#  if __PTR_BIT > __INT_BIT
     typedef unsigned long size_t;
#  else
     typedef unsigned int size_t;
#  endif
# endif	/* _SIZE_T */

#ifdef __ghs__
#pragma ghs endnomisra
#endif
