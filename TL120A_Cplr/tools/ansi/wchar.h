/*
			ISO C/C++ Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_WCHAR_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif

#if !defined(__linux__)
#define _GHS_WCHAR_H
#endif

#if defined(__need_mbstate_t) && !defined(__mbstate_t_defined)
    /*  Some Linux distributions expect to get __mbstate_t here,
     *  and pretty much nothing else, if __need_mbstate_t is defined.
     *  The type should correspond with that of mbstate_t below. */
#   define __mbstate_t_defined	1
    typedef int __mbstate_t;
#endif

#if defined(__linux__)
#define _GHS_WCHAR_H
#endif

#ifdef __VXWORKS
#include <vxWorks.h>	/* vxWorks has its own idea about header files */
#else
# include "ghs_null.h"		/* defines NULL and size_t */
# include "ghs_wchar.h"		/* defines wchar_t */
#endif

#if (defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)) || defined(__MISRA_16_1)
#  include "ghs_valist.h"
#elif defined(__STDC__) || defined(__cplusplus)
# include <stdarg.h>
#endif

#if !defined(WEOF)
#define WEOF	((wint_t)(-1))
#endif /* !WEOF */

#ifndef WCHAR_MIN	/* could have been #defined in stdint.h */
#  if __WCHAR_BIT > __INT_BIT
#    ifdef __WChar_Is_Unsigned__
#      define WCHAR_MIN		0UL
#      define WCHAR_MAX	((((1UL<< ((__WCHAR_BIT)-1))-1)<<1)+1)
#    else
#      define WCHAR_MIN	  (-1L << ((__WCHAR_BIT)-1))
#      define WCHAR_MAX	((((1L << ((__WCHAR_BIT)-2))-1)<<1)+1)
#    endif
#  elif defined(__WChar_Is_Unsigned__)
#      define WCHAR_MIN		0U
#      define WCHAR_MAX	((((1U<< ((__WCHAR_BIT)-1))-1)<<1)+1)
#  else
#      define WCHAR_MIN	(-1<< ((__WCHAR_BIT)-1))
#      define WCHAR_MAX	((((1 << ((__WCHAR_BIT)-2))-1)<<1)+1)
#  endif
#endif

struct tm;
#if !defined(_MBSTATET) && !defined(_MBSTATE_T)
# define _MBSTATET
# define _MBSTATE_T
  typedef int mbstate_t;
#endif

/* the declaractions of wctype_t wint_t are duplicated in wchar.h and wctype.h */
#if defined(_WIN32)
/* wint_t and wctype_t are defined in many Microsoft headers */
# if !defined(_WCTYPE_T_DEFINED)
#   define _WCTYPE_T_DEFINED
    typedef wchar_t wint_t;
    typedef int wctype_t;
# endif /* _WCTYPE_T_DEFINED */
# define _WINTT				/* For PJP Header Files       */
# define _WCTYPET
#endif
#if !defined(_WINTT) && !defined(_WINT_T) /* Some hosts use _WINT_T to protect wint_t */
# define _WINTT
# define _WINT_T
/* ISO C99 7.24.1 "wint_t ...is an integer type unchanged by default argument
   promotions that can hold any value corresponding to members of the extended
   character set, as well as at least one value that does not correspond to 
   any member of the extended character set (see WEOF below);"
   We chose to make wint_t always signed, and larger than wchar_t if possible
   without resorting to long long.  WEOF is -1.  Do not make wint_t the same
   as wchar_t because C++ considers wchar_t a special type, and wint_t should
   always be an integral type independent of wchar_t.

   If longs and long longs are the same size, making wint_t long is not a
   good idea.  Stick to int.   
*/
# if (__WCHAR_BIT < __INT_BIT) || (defined(__LLONG_BIT) && (__LONG_BIT == __LLONG_BIT))
  typedef int wint_t;
# else
  typedef long wint_t;
# endif
#endif

#ifdef __cplusplus
extern "C" {
#endif	/* __cplusplus */

#if defined(_WIN32)
    /* fgetwc(), fputwc(), ungetwc() are defined in <stdio.h> on Windows. */
#    define __File_Type	struct _iobuf
#elif defined(__sun)		 /* Solaris native */
    /* On Solaris, you need to include stdio.h to get the mapping from
       __File_Type to FILE for C. */
#   include <stdio.h>
#define __No_File_Type_declaration
#define __File_Type	FILE
#elif defined(__VXWORKS)
#    define __File_Type	struct __sFILE
#elif defined(__OSE) || defined(_MC_EXEC)
#    define __File_Type	struct _FILE
#elif defined(__ghs) && defined(__LYNX) /* LynxOS */
#    define __File_Type	struct __iobuf
#elif defined(__ghs) && defined(__LINUX) /* Linux */
#    define __File_Type	struct _IO_FILE
#else	
#    define __File_Type	struct _iobuf
#endif

/* Edison has a clever way of supporting prototypes in K+R mode.
   If the first token after the ( in a function declaration is a
   keyword, the declaration is parsed as a prototype.  Otherwise
   it is parsed as an old-style definition.  Therefore in our
   headers, in -k+r mode, we avoid using typedef names as the
   first token in a prototype.  The const prefix before a typedef
   is okay, because const is a keyword.  When not in -k+r mode,
   we use the typedef name, which improves compiler error messages.
*/
#if !defined(__STDC__) && defined(__EDG__) && defined(_WCHAR_TYPE)
#define __Wchar_T _WCHAR_TYPE
#define __Wint_T  _WCHAR_TYPE
#elif !defined(__STDC__) && defined(__EDG__)
#ifdef __VXWORKS
#undef const		/* even in k+r mode we recognize const */
#endif
#define __Wchar_T const wchar_t
#define __Wint_T  const wint_t
#else
#define __Wchar_T wchar_t
#define __Wint_T  wint_t
#endif
#if defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#ifdef __File_Type
#ifndef __No_File_Type_declaration
__File_Type;
#endif
wint_t fgetwc(__File_Type *);
wint_t fputwc(__Wchar_T, __File_Type *);
wint_t ungetwc(__Wint_T, __File_Type *);
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
wint_t fgetwc_unlocked(__File_Type *);
wint_t fputwc_unlocked(__Wchar_T, __File_Type *);
#endif
wchar_t *fgetws(__Wchar_T*__Restrict, int, __File_Type * __Restrict);
int fputws(const wchar_t *__Restrict, __File_Type * __Restrict);
int fwprintf(__File_Type *__Restrict, const wchar_t* __Restrict, ...);
int fwscanf(__File_Type  *__Restrict, const wchar_t* __Restrict, ...);
int fwide(__File_Type*, int);
#if (defined(__STDC__) || defined(__cplusplus)) && defined(__ghs__)
int vfwprintf(__File_Type*__Restrict, const wchar_t* __Restrict, __gh_va_list);
int vfwscanf(__File_Type *__Restrict, const wchar_t* __Restrict, __gh_va_list);
#endif /* STDC */
#undef __No_File_Type_declaration
#endif	/* __File_Type */

    int wmemcmp(const wchar_t * __Restrict, const wchar_t * __Restrict, size_t);
wchar_t *wmemcpy(__Wchar_T * __Restrict, const wchar_t * __Restrict, size_t);
wchar_t *wmemmove(__Wchar_T *, const wchar_t *, size_t);
wchar_t *wmemset(__Wchar_T *, wchar_t, size_t);
int swprintf(__Wchar_T * __Restrict, size_t, const wchar_t * __Restrict, ...);
int swscanf(const wchar_t * __Restrict, const wchar_t * __Restrict, ...);
int wprintf(const wchar_t * __Restrict, ...);
int wscanf (const wchar_t * __Restrict, ...);
#if (defined(__STDC__) || defined(__cplusplus)) && defined(__ghs__)
int vswprintf(__Wchar_T*__Restrict, size_t, const wchar_t*__Restrict, __gh_va_list);
int vswscanf(const wchar_t * __Restrict, const wchar_t * __Restrict, __gh_va_list);
int vwprintf(const wchar_t * __Restrict, __gh_va_list);
int vwscanf (const wchar_t * __Restrict, __gh_va_list);
#endif /* STDC */
#if !defined(__NoFloat) && !defined(__NoDouble)
long double wcstold(const wchar_t * __Restrict, wchar_t ** __Restrict);
double wcstod(const wchar_t * __Restrict, wchar_t ** __Restrict);
#endif
#ifndef __NoFloat
float  wcstof(const wchar_t * __Restrict, wchar_t ** __Restrict);
#endif
long wcstol(const wchar_t * __Restrict, wchar_t ** __Restrict, int);
unsigned long wcstoul(const wchar_t * __Restrict, wchar_t ** __Restrict, int);
#ifdef __LLONG_BIT
long long wcstoll(const wchar_t * __Restrict, wchar_t ** __Restrict, int);
unsigned long long wcstoull(const wchar_t * __Restrict, wchar_t ** __Restrict, int);
#endif
wchar_t *wcscpy (__Wchar_T * __Restrict, const wchar_t * __Restrict);
wchar_t *wcsncpy(__Wchar_T * __Restrict, const wchar_t * __Restrict, size_t);
wchar_t *wcscat (__Wchar_T * __Restrict, const wchar_t * __Restrict);
wchar_t *wcsncat(__Wchar_T * __Restrict, const wchar_t * __Restrict, size_t);
    int wcscmp  (const wchar_t *, const wchar_t *);
    int wcscoll (const wchar_t *, const wchar_t *);
    int wcsncmp (const wchar_t *, const wchar_t *, size_t);
 size_t wcsxfrm (__Wchar_T * __Restrict, const wchar_t * __Restrict, size_t);
 size_t wcscspn (const wchar_t *, const wchar_t *);
 size_t wcsspn  (const wchar_t *, const wchar_t *);
wchar_t *wcstok (__Wchar_T * __Restrict, const wchar_t * __Restrict, wchar_t ** __Restrict);
 size_t wcslen  (const wchar_t *);
wchar_t *wmemset(__Wchar_T *, wchar_t, size_t);
 size_t wcsftime(__Wchar_T * __Restrict, size_t, const wchar_t * __Restrict, const struct tm * __Restrict);
 wint_t btowc   (int);
    int wctob   (__Wint_T);
    int mbsinit (const mbstate_t *);
 size_t mbrlen  (const char * __Restrict, size_t, mbstate_t * __Restrict);
 size_t mbrtowc (__Wchar_T * __Restrict, const char * __Restrict, size_t, mbstate_t * __Restrict);
 size_t wcrtomb (char * __Restrict, wchar_t, mbstate_t* __Restrict);
 size_t mbsrtowcs(__Wchar_T * __Restrict, const char ** __Restrict, size_t, mbstate_t * __Restrict);
 size_t wcsrtombs(char * __Restrict, const wchar_t ** __Restrict, size_t, mbstate_t * __Restrict); 

#ifndef __cplusplus
#ifdef __File_Type
wint_t getwc(__File_Type *);
wint_t getwchar(void);
wint_t putwc(__Wchar_T, __File_Type *);
wint_t putwchar(__Wchar_T);

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
wint_t getwc_unlocked(__File_Type *);
wint_t putwc_unlocked(__Wchar_T, __File_Type *);
wint_t getwchar_unlocked(void);
wint_t putwchar_unlocked(__Wchar_T);
#endif
#endif
#define getwc(f)		fgetwc(f)
#define getwchar()		fgetwc(stdin)
#define putwc(wc, f)		fputwc(wc, f)
#define putwchar(wc)		fputwc(wc, stdout)
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#define getwc_unlocked(f)	fgetwc_unlocked(f)
#define getwchar_unlocked()	fgetwc_unlocked(stdin)
#define putwc_unlocked(wc, f)	fputwc_unlocked(wc, f)
#define putwchar_unlocked(wc)	fputwc_unlocked(wc, stdout)
#endif

wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
wchar_t *wcschr (const wchar_t *, wchar_t);
wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
wchar_t *wcsrchr(const wchar_t *, wchar_t);
wchar_t *wcsstr (const wchar_t *, const wchar_t *);
#else

const wchar_t *wmemchr(const wchar_t *, wchar_t, size_t);
const wchar_t *wcschr (const wchar_t *, wchar_t);
const wchar_t *wcspbrk(const wchar_t *, const wchar_t *);
const wchar_t *wcsrchr(const wchar_t *, wchar_t);
const wchar_t *wcsstr (const wchar_t *, const wchar_t *);
}

#ifdef __File_Type
extern "C" {
/*
wint_t getwc(__File_Type *);
wint_t putwc(__Wchar_T, __File_Type *);
*/
#if !defined(FILE) && !defined(stdin)
wint_t getwchar(void);
wint_t putwchar(__Wchar_T);
#endif
}
inline wint_t getwc(__File_Type *__Fi)		{ return fgetwc(__Fi); }
inline wint_t putwc(wchar_t __WC, __File_Type*__Fi){return fputwc(__WC, __Fi); }
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
inline wint_t getwc_unlocked(__File_Type *__Fi)	{ return fgetwc_unlocked(__Fi); }
inline wint_t putwc_unlocked(wchar_t __WC, __File_Type *__Fi)	
						{ return fputwc_unlocked(__WC, __Fi); }
#endif
#if defined(FILE) || defined(stdin)
inline wint_t getwchar()			{ return fgetwc(stdin); }
inline wint_t putwchar(wchar_t __WC)		{ return fputwc(__WC, stdout); }
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
inline wint_t getwchar_unlocked()		{ return fgetwc_unlocked(stdin); }
inline wint_t putwchar_unlocked(wchar_t __WC)	{ return fputwc_unlocked(__WC, stdout); }
#endif
#endif
#endif

inline wchar_t *wmemchr(wchar_t *__GHS_S, wchar_t __GHS_C, size_t __GHS_N)
	{return ((wchar_t *)wmemchr((const wchar_t *)__GHS_S, __GHS_C, __GHS_N)); }
inline wchar_t *wcschr (wchar_t *__GHS_S, wchar_t __GHS_C)
	{return ((wchar_t *)wcschr ((const wchar_t *)__GHS_S, __GHS_C)); }
inline wchar_t *wcspbrk(wchar_t *__GHS_S, const wchar_t *__GHS_P)
	{return ((wchar_t *)wcspbrk((const wchar_t *)__GHS_S, __GHS_P)); }
inline wchar_t *wcsrchr(wchar_t *__GHS_S, wchar_t __GHS_C)
	{return ((wchar_t *)wcsrchr((const wchar_t *)__GHS_S, __GHS_C)); }
inline wchar_t *wcsstr (wchar_t *__GHS_S, const wchar_t *__GHS_P)
	{return ((wchar_t *)wcsstr ((const wchar_t *)__GHS_S, __GHS_P)); }
#endif	/* __cplusplus */

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#undef __File_Type
#undef __Restrict

#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif	/* _GHS_WCHAR_H */
