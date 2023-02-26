/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STDLIB_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STDLIB_H

#include "ghs_null.h"		/* defines NULL and size_t */
#include "ghs_wchar.h"		/* defines wchar_t */

#ifdef __cplusplus
extern "C" {
#endif

/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
#ifndef _DIV_T
#define _DIV_T
typedef struct {
    int quot;		/* quotient */
    int rem;		/* remainder */
} div_t;
#endif
#ifndef _LDIV_T
#define _LDIV_T
typedef struct {
    long quot;		/* quotient */
    long rem;		/* remainder */
} ldiv_t;
#endif
#if defined(__LLONG_BIT)
#ifndef _LLDIV_T
#define _LLDIV_T
typedef struct {
    long long quot;	/* quotient */
    long long rem;	/* remainder */
} lldiv_t;
#endif
#endif
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#define EXIT_FAILURE	    1
#define EXIT_SUCCESS	    0
/* #define RAND_MAX	    (2029052025-1) */
#define RAND_MAX	    (0x7fff)
#if !defined(__MISRA_8)
#if defined(__WCHAR_BIT) && (__WCHAR_BIT == 16)
#define MB_CUR_MAX	    3	/* 3 bytes utf8 <==> 16 bits Unicode wchar_t */
#else
#define MB_CUR_MAX	    6
#endif
#endif /* !defined(__MISRA_8) */

#if defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif

#if !defined(__ATTRIBUTES) && !defined(__attribute__)
#define	__attribute__(x)	
#define	__undefine_attribute_at_end__
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#if defined(__cplusplus)
inline int  abs(int j) { return j<0 ? -j: j; }
inline long labs(long j) { return j<0 ? -j: j; }
#if defined(__LLONG_BIT)
inline long long llabs(long long j) { return j<0 ? -j: j; }
#endif
#else
   int abs(int) __attribute__((__const__));
   long int labs(long int) __attribute__((__const__));
#if defined(__LLONG_BIT)
   long long llabs(long long) __attribute__((__const__));
#endif
#endif

#if defined(__NO_LIBANSI_STRONG_FPTR) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
int		atexit(void (*__FNC)(void));
#else
typedef		__attribute__((strong_fptr("relax"))) void (*__ATEXIT_FNC)(void);
int		atexit(__ATEXIT_FNC __FNC);
#endif
#if (!defined(__MISRA_20_10) || (__MISRA_20_10 != 2)) && (!defined(__MISRA_125) || (__MISRA_125 != 2))
#if !defined(__NoFloat) && !defined(__NoDouble)
double		atof(const char *__STR);
#endif
int		atoi(const char *__STR);
long		atol(const char *__STR);
#if defined(__LLONG_BIT)
long long	atoll(const char *__STR);
#endif
#endif /* __MISRA_20_10 */
#if defined(__NO_LIBANSI_STRONG_FPTR) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
void*		bsearch(const void *__KEY, const void *__BAS, size_t __CNT, size_t __SIZ,
				int (*__FNC)(const void *, const void *)) __attribute__((__format__(__memset__,2,4)));
#else
typedef		__attribute__((strong_fptr("relax"))) int (*__BSRCH_CMP_FNC)(const void*, const void*);
void*		bsearch(const void *__KEY, const void *__BAS, size_t __CNT, size_t __SIZ,
	    			__BSRCH_CMP_FNC __FNC) __attribute__((__format__(__memset__,2,4)));
#endif
#if (!defined(__MISRA_20_4) || (__MISRA_20_4 != 2)) && (!defined(__MISRA_118) || (__MISRA_118 != 2))
void*		calloc(size_t __CNT, size_t __SIZ);
void		free(void *__MEM);
void*		malloc(size_t __SIZ);
void*		realloc(void *__MEM, size_t __SIZ) __attribute__((__format__(__memset__,1,2)));
#ifdef __ADSPBLACKFIN__
#include <stdlib_bf.h>
#endif
#endif /* __MISRA_20_4 */

div_t		div(int __NUM, int __DENOM) __attribute__((__const__));
ldiv_t		ldiv(long __NUM, long __DENOM) __attribute__((__const__));
#if defined(__LLONG_BIT)
lldiv_t		lldiv(long long __NUM, long long __DENOM) __attribute__((__const__));
#endif
int		mblen(const char *__MBS, size_t __CNT);
#if !defined(__MISRA_8)
size_t		mbstowcs(wchar_t*__Restrict __MBS,const char*__Restrict __WCS,size_t __CNT);
int		mbtowc(wchar_t * __Restrict __MBS,const char*__Restrict __WCS,size_t __CNT);
#endif /* !defined(__MISRA_8) */
#if defined(__NO_LIBANSI_STRONG_FPTR) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
void		qsort(void *__BAS, size_t __CNT, size_t __SIZ,
			      int (*__FNC)(const void*, const void*)) __attribute__((__format__(__memset__,1,3)));
#else
typedef		__attribute__((strong_fptr("relax"))) int (*__QSORT_CMP_FNC)(const void*, const void*);
void		qsort(void *__BAS, size_t __CNT, size_t __SIZ,
				__QSORT_CMP_FNC __FNC) __attribute__((__format__(__memset__,1,3)));
#endif
int		rand(void);
int		rand_r(unsigned __SEED[1]);
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
int		rand_r2(long __SEED[2]);
#endif
void		srand(unsigned int __SEED);
#if !defined(__NoFloat) && !defined(__NoDouble)
long double	strtold(const char* __Restrict __STR, char ** __Restrict __ENDP);
double		strtod(const char * __Restrict __STR, char ** __Restrict __ENDP);
#endif
#ifndef __NoFloat
float		strtof(const char * __Restrict __STR, char ** __Restrict __ENDP);
#endif
long		strtol(const char * __Restrict __STR, char ** __Restrict __ENDP, int __BASE);
unsigned long	strtoul(const char* __Restrict __STR, char ** __Restrict __ENDP, int __BASE);
#if defined(__LLONG_BIT)
long long	strtoll(const char* __Restrict __STR, char ** __Restrict __ENDP, int __BASE);
unsigned long long strtoull(const char * __Restrict __STR, char ** __Restrict __ENDP, int __BASE);
#endif
#if (!defined(__MISRA_20_11) || (__MISRA_20_11 != 2)) && (!defined(__MISRA_126) || (__MISRA_126 != 2))
void		abort(void) __attribute__((__noreturn__));
void		exit(int __VAL) __attribute__((__noreturn__));
void		_Exit(int __VAL) __attribute__((__noreturn__));
char*		getenv(const char *__STR);
#  if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
int		putenv(const char *__STR);
#  endif
#if !defined(__STRICT_ANSI__) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE) || defined(__INTEGRITY)
int		setenv(const char *__NAM, const char *__VAL, int __OVERWRITE);
int		unsetenv(const char *__NAM);
#endif
int		system(const char *__STR);
#endif /* __MISRA_20_11 */
#if !defined(__MISRA_8)
size_t		wcstombs(char * __Restrict __MBS, const wchar_t * __Restrict __WCS, size_t);
int		wctomb(char * __MBS, wchar_t __WCH);
#endif /* !defined(__MISRA_8 */
#if !defined(__STRICT_ANSI__) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
void		swab(const char *__SRC, char *__DST, int __CNT);
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#undef __Restrict

#ifdef __cplusplus
}

/* These belong in <cstdlib> and not here, according to ISO C++ standard */
/*
extern "C++" {
inline long abs(long _X) 	    {return (labs(_X)); }
inline ldiv_t div(long __NUM, long __DENOM) {return (ldiv(__NUM, __DENOM)); }
#if defined(__LLONG_BIT)
inline long long abs(long long _X)  {return (llabs(_X)); }
inline lldiv_t div(long long __NUM, long long __DENOM) {return (lldiv(__NUM, __DENOM)); }
#endif
}
*/
#endif /* __cplusplus */

#if defined(__undefine_attribute_at_end__)
#undef	__attribute__
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif			   /* _STDLIB_H */
