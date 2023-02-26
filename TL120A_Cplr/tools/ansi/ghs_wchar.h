/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/*
    ghs_wchar.h
    provides the declaration of wchar_t and nothing more.

    This file should only be included from other Green Hills headers.
*/

#if (defined(_WCHAR_T) || defined(_WCHAR_T_DEFINED))
/* header was already included once */
#elif defined(__MISRA_8) && (!defined(__IGNORE_MISRA_STDLIB))
/* MISRA 1998 Rule 8 prohibits any use of wchar_t */
#else
# ifdef __ghs__
#  pragma ghs startnomisra
# endif
# if !defined(__GHS_INTTYPES_H) && !defined(_STDDEF_H) && !defined(_STDLIB_H) && !defined(_GHS_WCHAR_H) && !defined(_GHS_WCTYPE_H)
#  error Please include <stddef.h> instead of ghs_wchar.h
# endif
# if defined(__WCHAR_TYPE__)
# elif defined(__WChar_Is_Int__) && defined(__WChar_Is_Unsigned__)
#   define __WCHAR_TYPE__ unsigned int
# elif defined(__WChar_Is_Int__)
#   define __WCHAR_TYPE__          int
# elif (__WCHAR_BIT == __LONG_BIT) && defined(__WChar_Is_Unsigned__)
#   define __WCHAR_TYPE__ unsigned long
# elif (__WCHAR_BIT == __LONG_BIT)
#   define __WCHAR_TYPE__          long
# elif (__WCHAR_BIT == __INT_BIT) && defined(__WChar_Is_Unsigned__)
#   define __WCHAR_TYPE__ unsigned int
# elif (__WCHAR_BIT == __INT_BIT)
#   define __WCHAR_TYPE__          int
# elif (__WCHAR_BIT == __SHRT_BIT) && defined(__WChar_Is_Unsigned__)
#   define __WCHAR_TYPE__ unsigned short
# elif (__WCHAR_BIT == __SHRT_BIT)
#   define __WCHAR_TYPE__          short
# else
#   error Unknown size of wchar_t
# endif
#ifdef __MISRA_8
/* make wchar_t a macro so our stdlib.h wrapper can #undef it later */
# define wchar_t __WCHAR_TYPE__
#else
    typedef __WCHAR_TYPE__ wchar_t;
#endif
# define _WCHAR_T
# define _WCHAR_T_DEFINED
# ifdef __ghs__
#  pragma ghs endnomisra
# endif
#endif
