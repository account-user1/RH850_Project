/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef __GHS_LIMITS_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_LIMITS_H

#if defined(__linux)
# include <features.h>

# if defined(__USE_POSIX)
#  include <bits/posix1_lim.h>
# endif

# if defined(__USE_POSIX2)
#  include <bits/posix2_lim.h>
# endif

# if defined(__USE_XOPEN)
#  include <bits/xopen_lim.h>
# endif
#endif	/* linux */

#ifdef __CHAR_BIT
#  define CHAR_BIT __CHAR_BIT
#else
#  define CHAR_BIT    8
#endif
#define MB_LEN_MAX	    6

#define SCHAR_MIN	(-1 << ((CHAR_BIT)-1))
#define SCHAR_MAX	((((1 << ((CHAR_BIT)-2))-1)<<1)+1)
#if (CHAR_BIT < __INT_BIT) || !(defined(__PROTOTYPES__) || defined(__EDG__))
#  define UCHAR_MAX	((((1 << ((CHAR_BIT)-2))-1)<<2)+3)
#else
#  define UCHAR_MAX	((((1U << ((CHAR_BIT)-2))-1)<<2)+3)
#endif
#define SHRT_MIN	(-1 << ((__SHRT_BIT)-1))
#define SHRT_MAX	((((1 << ((__SHRT_BIT)-2))-1)<<1)+1)
#if (__SHRT_BIT < __INT_BIT) || !(defined(__PROTOTYPES__) || defined(__EDG__))
#  define USHRT_MAX	((((1 << ((__SHRT_BIT)-2))-1)<<2)+3)
#else
#  define USHRT_MAX	((((1U << ((__SHRT_BIT)-2))-1)<<2)+3)
#endif
#define INT_MIN 	(-1 << ((__INT_BIT)-1))
#define INT_MAX 	((((1 << ((__INT_BIT)-2))-1)<<1)+1)
#if !(defined(__PROTOTYPES__) || defined(__EDG__))
#  define UINT_MAX	((((1 << ((__INT_BIT)-2))-1)<<2)+3)
#else
#  define UINT_MAX	((((1U << ((__INT_BIT)-2))-1)<<2)+3)
#endif
#if defined(__LONG_BIT) && (__LONG_BIT==32)
#  define LONG_MIN      (-2147483647L-1L)
#  define LONG_MAX      2147483647L
#  define ULONG_MAX     4294967295UL
#else
#  define LONG_MIN	(-1L << ((__LONG_BIT)-1))
#  define LONG_MAX	((((1L << ((__LONG_BIT)-2))-1)<<1)+1)
#  if !(defined(__PROTOTYPES__) || defined(__EDG__))
#    define ULONG_MAX	((((1L << ((__LONG_BIT)-2))-1)<<2)+3)
#  else
#    define ULONG_MAX	((((1UL << ((__LONG_BIT)-2))-1)<<2)+3)
#  endif
#endif

#if defined(__LLONG_BIT) && (__LLONG_BIT==64)
#  define LLONG_MIN	(-9223372036854775807LL-1LL)
#  define LLONG_MAX	  9223372036854775807LL
#  define ULLONG_MAX	 18446744073709551615uLL
#elif defined(__LLONG_BIT)
#  define LLONG_MIN  	(-1LL << ((__LLONG_BIT)-1))
#  define LLONG_MAX  	((((1LL << ((__LLONG_BIT)-2))-1)<<1)+1)
#  define ULLONG_MAX 	((((1ULL << ((__LLONG_BIT)-2))-1)<<2)+3)
#endif /* __LLONG_BIT==64 */

#if defined(__EINT1_BIT)
#  define EINT1_MIN  	(-1g << ((__EINT1_BIT)-1))
#  define EINT1_MAX  	((((1g << ((__EINT1_BIT)-2))-1)<<1)+1)
#  define UEINT1_MAX 	((((1ug << ((__EINT1_BIT)-2))-1)<<2)+3)
#endif

#ifdef __Char_Is_Unsigned__
#  define CHAR_MIN    0
#  define CHAR_MAX    UCHAR_MAX
#else
#  define CHAR_MIN    SCHAR_MIN
#  define CHAR_MAX    SCHAR_MAX
#endif

#if defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)
#define ARG_MAX 0x20000
#endif
#if (defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)) || \
    (defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)) && !defined(__linux)
/* Indeterminate values */
/*
 %define LINK_MAX
 %define MAX_CANON
 %define MAX_INPUT
 %define NAME_MAX
 %define OPEN_MAX
 %define PATH_MAX
 %define PIPE_BUF
 %define STREAM_MAX
 %define TZNAME_MAX
*/
#define SSIZE_MAX	LONG_MAX
#define NGROUPS_MAX 		8
#define LOGIN_NAME_MAX		9

/* non-POSIX define--maximum path for any file */
#define __ABS_PATH_MAX 1025

/* POSIX minimum maximums.  System must support this much or more. */
#define _POSIX_AIO_LISTIO_MAX	2
#define _POSIX_AIO_MAX		1
#define _POSIX_ARG_MAX		4096
#define _POSIX_CHILD_MAX	25
#define _POSIX_CLOCKRES_MIN	20000000
#define _POSIX_DELAYTIMER_MAX	32
#define _POSIX_HOST_NAME_MAX	255
#define _POSIX_LINK_MAX		8
#define _POSIX_LOGIN_NAME_MAX	9
#define _POSIX_MAX_CANON	255
#define _POSIX_MAX_INPUT	255
#define _POSIX_MQ_OPEN_MAX	8
#define _POSIX_MQ_PRIO_MAX	32
#define _POSIX_NAME_MAX		14
#define _POSIX_NGROUPS_MAX	8
#define _POSIX_OPEN_MAX		20
#define _POSIX_PATH_MAX		256
#define _POSIX_PIPE_BUF		512
#define _POSIX_RE_DUP_MAX	255
#define _POSIX_RTSIG_MAX	8
#define _POSIX_SEM_NSEMS_MAX	256
#define _POSIX_SEM_VALUE_MAX	32767
#define _POSIX_SIGQUEUE_MAX	32
#define _POSIX_SSIZE_MAX	32767
#define _POSIX_STREAM_MAX	8
#define _POSIX_SYMLINK_MAX	255
#define _POSIX_SYMLOOP_MAX	8
#define _POSIX_THREAD_DESTRUCTOR_ITERATIONS	4
#define _POSIX_THREAD_KEYS_MAX			128
#define _POSIX_THREAD_THREADS_MAX		64
#define _POSIX_TIMER_MAX	32
#define _POSIX_TTY_NAME_MAX	9
#define _POSIX_TZNAME_MAX	6

#define _POSIX2_BC_BASE_MAX	99
#define BC_BASE_MAX		99

#define _POSIX2_BC_DIM_MAX	2048
#define BC_DIM_MAX		2048

#define _POSIX2_BC_SCALE_MAX	99
#define BC_SCALE_MAX		99

#define _POSIX2_BC_STRING_MAX	1000
#define BC_STRING_MAX		1000

#define _POSIX2_CHARCLASS_NAME_MAX	14
#define CHARCLASS_NAME_MAX		14

#define _POSIX2_COLL_WEIGHTS_MAX	2
#define COLL_WEIGHTS_MAX		2

#define _POSIX2_EXPR_NEST_MAX	32
#define EXPR_NEST_MAX		32

#define _POSIX2_LINE_MAX	2048
#define LINE_MAX		2048

#define _POSIX2_RE_DUP_MAX	255
#define RE_DUP_MAX		255

#define _XOPEN_IOV_MAX		16
#define IOV_MAX			32

/* POSIX maximums  */
#define AIO_LISTIO_MAX		32	/* arbitrary */
#define AIO_MAX			32	/* arbitrary */
#define AIO_PRIO_DELTA_MAX 	127
#define CHILD_MAX		32	/* arbitrary */

#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* __GHS_LIMITS_H */
