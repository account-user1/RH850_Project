/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifdef __ghs__
#pragma ghs startnomisra
#endif
#ifdef __cplusplus
extern "C" {
#endif

#undef assert
#if defined(__STDC__) || defined(__PROTOTYPES__) || defined(__EDG__)
void assert(int);
#endif

#ifdef NDEBUG
# define assert(ignore)	((void)0)
#elif defined(__unix) || defined(__unix__) || defined(__linux__)
   /* This unix version is very portable and will work with any C library. */
#  include <stdio.h>		/* for stderr */
#  undef assert
#if defined(__ATTRIBUTES__)
void abort(void) __attribute__((__noreturn__));
#else
void abort(void);
#endif

#  if defined(__STDC__)
#   define assert(value)	((void)((value) || \
	    (fprintf(stderr, \
		"Assertion failed: " #value ", file " __FILE__ ", line %d\n", \
					__LINE__), abort(),0)))
#  else
#   define assert(value)	((void)((value) || \
	    (fprintf(stderr, "Assertion failed: \"value\", file %s, line %d\n", \
					__FILE__,__LINE__),exit(1),0)))
#  endif 
#elif defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901)
   int _assert_(const char *, const char *, int, const char *);
#  define assert(val)	((void)(((val)!=0)?0:_assert_(#val,__FILE__,__LINE__,__func__)))
#elif defined(__STDC__)		/* This version is compact for embedded */
   int _assert(const char *, const char *, int);
# if defined(__ALTERNATE_ASSERT_MACRO) || defined(__MISRA_12_6) || defined(__MISRA_13_2)
#  define assert(val)   ((void)(((val)!=0)?0:_assert(#val,__FILE__,__LINE__)))
# else
#  define assert(val)   (_Pragma("ghs nowarning 236") \
                         ((void)(((val))?0:_assert(#val,__FILE__,__LINE__))) \
                         _Pragma("ghs endnowarning 236"))
# endif
#else		/* would pass "val" here but that fails if val contains ".  */
#if defined(__PROTOTYPES__) || defined(__EDG__)
   int _assert(const char *, const char *, int);
#endif
#  define assert(val)	((void)((val)||_assert("val",__FILE__,__LINE__)))
#endif 

#ifndef __cplusplus
#  if !defined(__STRICT_ANSI__) && !defined(static_assert)
#    define static_assert(const_expr, str_literal) _Static_assert((const_expr), str_literal)
#  endif
#endif 
   
#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
