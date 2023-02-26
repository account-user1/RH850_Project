/*
			ISO C Runtime Library

	Copyright (c) 2002-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef __GHS_STDINT_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_STDINT_H

/* -------------------- Exact width integers -------------------- */
#ifdef __VXWORKS
#  include <vxWorks.h>	/* vxWorks has its own idea about header files */
#else
#if __CHAR_BIT==8
  typedef   signed char int8_t;
  typedef unsigned char uint8_t;
#endif

#if __INT_BIT==16
  typedef   signed int int16_t;
  typedef unsigned int uint16_t;
#elif __SHRT_BIT==16
  typedef   signed short int16_t;
  typedef unsigned short uint16_t;
#elif __CHAR_BIT==16
  typedef   signed char int16_t;
  typedef unsigned char uint16_t;
#endif
#if __INT_BIT==32
  typedef   signed int int32_t;
  typedef unsigned int uint32_t;
#elif __LONG_BIT==32
  typedef   signed long int32_t;
  typedef unsigned long uint32_t;
#elif __SHRT_BIT==32
  typedef   signed short int32_t;
  typedef unsigned short uint32_t;
#endif
#if __INT_BIT==64
  typedef   signed int int64_t;
  typedef unsigned int uint64_t;
#elif __LONG_BIT==64
  typedef   signed long int64_t;
  typedef unsigned long uint64_t;
#elif defined(__LLONG_BIT) && __LLONG_BIT==64
  typedef   signed long long int64_t;
  typedef unsigned long long uint64_t;
#endif
#if defined(__EINT1_BIT) && __EINT1_BIT==128
  typedef   signed __extended_int1 int128_t;
  typedef unsigned __extended_int1 uint128_t;
#endif
#endif	/* __VXWORKS */

#if __INT_BIT==24
  typedef   signed int int24_t;
  typedef unsigned int uint24_t;
#elif __LONG_BIT==24
  typedef   signed long int24_t;
  typedef unsigned long uint24_t;
#elif __SHRT_BIT==24
  typedef   signed short int24_t;
  typedef unsigned short uint24_t;
#elif __CHAR_BIT==24
  typedef   signed char int24_t;
  typedef unsigned char uint24_t;
#endif

#if __INT_BIT==48
  typedef   signed int int48_t;
  typedef unsigned int uint48_t;
#elif __LONG_BIT==48
  typedef   signed long int48_t;
  typedef unsigned long uint48_t;
#elif __SHRT_BIT==48
  typedef   signed short int48_t;
  typedef unsigned short uint48_t;
#endif


/* In C++ macros in this file must be hidden unless __STDC_LIMIT_MACROS */
#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)
#  if __CHAR_BIT==8
#    define INT8_MIN	(-128)
#    define INT8_MAX	(127)
#    define UINT8_MAX	(255)
#  endif
#  if (__INT_BIT==16) || (__SHRT_BIT==16) || (__CHAR_BIT==16)
#    define INT16_MIN	(-32767-1)
#    define INT16_MAX	(32767)
#    define UINT16_MAX	(65535U)
#  endif
#  if (__INT_BIT==24) || (__LONG_BIT==24) || (__SHRT_BIT==24) || (__CHAR_BIT==24)
#    define INT24_MIN	(-0x7fffff-1)
#    define INT24_MAX	(0x7fffff)
#    define UINT24_MAX	(0xffffffu)
#  endif
#  if (__INT_BIT==32) || (__LONG_BIT==32) || (__SHRT_BIT==32) 
#    define INT32_MIN	(-2147483647-1)
#    define INT32_MAX	(2147483647)
#    define UINT32_MAX	(4294967295U)
#  endif
#  if (__INT_BIT==48) || (__LONG_BIT==48) || (__SHRT_BIT==48) 
#    define INT48_MIN	(-0x7fffffffffff-1)
#    define INT48_MAX	(0x7fffffffffff)
#    define UINT48_MAX	(0xffffffffffffu)
#  endif
#  if (__INT_BIT==64) || (__LONG_BIT==64) || defined(__LLONG_BIT) && (__LLONG_BIT==64) 
#    define INT64_MIN	(-0x7fffffffffffffff-1)
#    define INT64_MAX	(0x7fffffffffffffff)
#    define UINT64_MAX	(0xffffffffffffffffu)
#  endif
#  if defined(__EINT1_BIT) && (__EINT1_BIT==128)
#    define INT128_MIN  (-0x7fffffffffffffffffffffffffffffff-1)
#    define INT128_MAX  (0x7fffffffffffffffffffffffffffffff)
#    define UINT128_MAX (0xffffffffffffffffffffffffffffffffu)
#  endif
#endif /* !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS) */

/* -------------------- Minimum width integers -------------------- */
/* The fastest type is one that matches the size of an integer register.
   So far that is 32 or 64 bits, matching either int, long, or long long.
 */
#if defined(__REG_BIT) && (__REG_BIT == __LONG_BIT) && defined(__VXWORKS)
#define	___FAST32	long
#define	___FAST32_BIT	__REG_BIT
#elif defined(__REG_BIT) && (__REG_BIT == __INT_BIT)
#define	___FAST32	int
#define	___FAST32_BIT	__REG_BIT
#elif defined(__REG_BIT) && (__REG_BIT == __LONG_BIT)
#define	___FAST32	long
#define	___FAST32_BIT	__REG_BIT
#elif defined(__REG_BIT) &&  defined(__LLONG_BIT) && (__REG_BIT == __LLONG_BIT)
#define	___FAST32	long long
#define	___FAST32_BIT	__REG_BIT
#elif (__INT_BIT < 32)
#define	___FAST32	long
#define	___FAST32_BIT	__LONG_BIT
#else
#define	___FAST32	int
#define	___FAST32_BIT	__INT_BIT
#endif
typedef   signed ___FAST32  int_fast8_t;
typedef unsigned ___FAST32 uint_fast8_t;
typedef   signed ___FAST32  int_fast16_t;
typedef unsigned ___FAST32 uint_fast16_t;
typedef   signed ___FAST32  int_fast24_t;
typedef unsigned ___FAST32 uint_fast24_t;
typedef   signed ___FAST32  int_fast32_t;
typedef unsigned ___FAST32 uint_fast32_t;
#undef	__FAST32

  /* char is guaranteed at least 8 bits and no larger than short/int */
  typedef   signed char int_least8_t;
  typedef unsigned char uint_least8_t;
#  define ___IL8BIT	__CHAR_BIT

#if (__CHAR_BIT < __SHRT_BIT) && (__CHAR_BIT >= 16)
  typedef   signed char int_least16_t;
  typedef unsigned char uint_least16_t;
#  define ___IL16BIT	__CHAR_BIT
#else
  /* short is guaranteed at least 16 bits and no larger than int/long */
  typedef   signed short int_least16_t;
  typedef unsigned short uint_least16_t;
#  define ___IL16BIT	__SHRT_BIT
#endif

#if (__CHAR_BIT < __SHRT_BIT) && (__CHAR_BIT >= 24)
  typedef   signed char int_least24_t;
  typedef unsigned char uint_least24_t;
#  define ___IL24BIT	__CHAR_BIT
#elif (__SHRT_BIT < __INT_BIT) && (__SHRT_BIT >= 24)
  typedef   signed short int_least24_t;
  typedef unsigned short uint_least24_t;
#  define ___IL24BIT	__SHRT_BIT
#elif __INT_BIT >= 24
  typedef   signed int int_least24_t;
  typedef unsigned int uint_least24_t;
#  define ___IL24BIT	__INT_BIT
#else
  /* long is guaranteed at least 32 bits */
  typedef   signed long int_least24_t;
  typedef unsigned long uint_least24_t;
#  define ___IL24BIT	__LONG_BIT
#endif

#if (__CHAR_BIT < __SHRT_BIT) && (__CHAR_BIT >= 32)
  typedef   signed char int_least32_t;
  typedef unsigned char uint_least32_t;
#  define ___IL32BIT	__CHAR_BIT
#elif (__SHRT_BIT < __INT_BIT) && (__SHRT_BIT >= 32)
  typedef   signed short int_least32_t;
  typedef unsigned short uint_least32_t;
#  define ___IL32BIT	__SHRT_BIT
#elif __INT_BIT >= 32
  typedef   signed int int_least32_t;
  typedef unsigned int uint_least32_t;
#  define ___IL32BIT	__INT_BIT
#else
  /* long is guaranteed at least 32 bits */
  typedef   signed long int_least32_t;
  typedef unsigned long uint_least32_t;
#  define ___IL32BIT	__LONG_BIT
#endif

#if (__CHAR_BIT < __SHRT_BIT) && (__CHAR_BIT >= 48)
  typedef   signed char int_least48_t;
  typedef unsigned char uint_least48_t;
  typedef   signed char int_fast48_t;
  typedef unsigned char uint_fast48_t;
#  define ___IL48BIT	__CHAR_BIT
#elif (__SHRT_BIT < __INT_BIT) && (__SHRT_BIT >= 48)
  typedef   signed short int_least48_t;
  typedef unsigned short uint_least48_t;
  typedef   signed short int_fast48_t;
  typedef unsigned short uint_fast48_t;
#  define ___IL48BIT	__SHRT_BIT
#elif __INT_BIT >= 48
  typedef   signed int int_least48_t;
  typedef unsigned int uint_least48_t;
  typedef   signed int int_least48_t;
  typedef unsigned int uint_least48_t;
#  define ___IL48BIT	__INT_BIT
#elif __LONG_BIT >= 48
  typedef   signed long int_least48_t;
  typedef unsigned long uint_least48_t;
  typedef   signed long int_fast48_t;
  typedef unsigned long uint_fast48_t;
#  define ___IL48BIT	__LONG_BIT
#elif defined(__LLONG_BIT) && __LLONG_BIT >= 48
  typedef   signed long long int_least48_t;
  typedef unsigned long long uint_least48_t;
  typedef   signed long long int_fast48_t;
  typedef unsigned long long uint_fast48_t;
#  define ___IL48BIT	__LLONG_BIT
#endif

#if (__CHAR_BIT < __SHRT_BIT) && (__CHAR_BIT >= 64)
  typedef   signed char int_least64_t;
  typedef unsigned char uint_least64_t;
  typedef   signed char int_fast64_t;
  typedef unsigned char uint_fast64_t;
#  define ___IL64BIT	__CHAR_BIT
#elif (__SHRT_BIT < __INT_BIT) && (__SHRT_BIT >= 64)
  typedef   signed short int_least64_t;
  typedef unsigned short uint_least64_t;
  typedef   signed short int_fast64_t;
  typedef unsigned short uint_fast64_t;
#  define ___IL64BIT	__SHRT_BIT
#elif __INT_BIT >= 64
  typedef   signed int int_least64_t;
  typedef unsigned int uint_least64_t;
  typedef   signed int int_fast64_t;
  typedef unsigned int uint_fast64_t;
#  define ___IL64BIT	__INT_BIT
#elif __LONG_BIT >= 64
  typedef   signed long int_least64_t;
  typedef unsigned long uint_least64_t;
  typedef   signed long int_fast64_t;
  typedef unsigned long uint_fast64_t;
#  define ___IL64BIT	__LONG_BIT
#elif defined(__LLONG_BIT) && __LLONG_BIT >= 64
  typedef   signed long long int_least64_t;
  typedef unsigned long long uint_least64_t;
  typedef   signed long long int_fast64_t;
  typedef unsigned long long uint_fast64_t;
#  define ___IL64BIT	__LLONG_BIT
#endif

#if defined(__LLONG_BIT) && __LLONG_BIT >= 128
  typedef   signed long long int_least128_t;
  typedef unsigned long long uint_least128_t;
  typedef   signed long long int_fast128_t;
  typedef unsigned long long uint_fast128_t;
#  define ___IL128BIT	__LLONG_BIT
#elif defined(__EINT1_BIT) && (__EINT1_BIT>=128)
  typedef   signed __extended_int1 int_least128_t;
  typedef unsigned __extended_int1 uint_least128_t;
  typedef   signed __extended_int1 int_fast128_t;
  typedef unsigned __extended_int1 uint_fast128_t;
#  define ___IL128BIT	__EINT1_BIT
#endif

#if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)
/* I do not see how to create an 8 bit type, without a cast */
/* which is not legal in C.  So any type the size of int or */
/* smaller has a degenerate macro in this implementation */

#  if defined(__EINT1_BIT) && __EINT1_BIT >= 128
#    define INT128_C(n)  (n##g)
#    define UINT128_C(n) (n##ug)
#  endif

#  if __INT_BIT >= 64
#    define INT64_C(n)	((n)+0)
#    define UINT64_C(n)	((n)+0U)
#  elif __LONG_BIT >= 64
#    define INT64_C(n)	((n)+0L)
#    define UINT64_C(n)	((n)+0UL)
#  elif defined(__LLONG_BIT) && __LLONG_BIT >= 64
#    define INT64_C(n)	((n)+0LL)
#    define UINT64_C(n)	((n)+0ULL)
#  endif

#  if __INT_BIT >= 48
#    define INT48_C(n)	((n)+0)
#    define UINT48_C(n)	((n)+0U)
#  elif __LONG_BIT >= 48
#    define INT48_C(n)	((n)+0L)
#    define UINT48_C(n)	((n)+0UL)
#  elif defined(__LLONG_BIT) && __LLONG_BIT >= 48
#    define INT48_C(n)	((n)+0LL)
#    define UINT48_C(n)	((n)+0ULL)
#  endif

#  if __INT_BIT >= 32
#    define INT32_C(n)	((n)+0)
#    define UINT32_C(n)	((n)+0U)
#  elif __LONG_BIT >= 32
#    define INT32_C(n)	((n)+0L)
#    define UINT32_C(n)	((n)+0UL)
#  elif defined(__LLONG_BIT) && __LLONG_BIT >= 32
#    define INT32_C(n)	((n)+0LL)
#    define UINT32_C(n)	((n)+0ULL)
#  endif
#  if __INT_BIT >= 24
#    define INT24_C(n)	((n)+0)
#    define UINT24_C(n)	((n)+0U)
#  elif __LONG_BIT >= 24
#    define INT24_C(n)	((n)+0L)
#    define UINT24_C(n)	((n)+0UL)
#  elif defined(__LLONG_BIT) && __LLONG_BIT >= 24
#    define INT24_C(n)	((n)+0LL)
#    define UINT24_C(n)	((n)+0ULL)
#  endif

#  define INT16_C(n)	((n)+0)
#  define UINT16_C(n)	((n)+0U)
#  define INT8_C(n)	((n)+0)
#  define UINT8_C(n)	((n)+0U)
#endif

#if __PTR_BIT <= __INT_BIT
  typedef   signed int intptr_t;
  typedef unsigned int uintptr_t;
#  define ___IPBIT	__INT_BIT
#elif __PTR_BIT <= __LONG_BIT
  typedef   signed long intptr_t;
  typedef unsigned long uintptr_t;
#  define ___IPBIT	__LONG_BIT
#elif defined(__LLONG_BIT) && __PTR_BIT <= __LLONG_BIT
  typedef   signed long long intptr_t;
  typedef unsigned long long uintptr_t;
#  define ___IPBIT	__LLONG_BIT
#endif

#if defined(__EINT1_BIT) && defined(__LLONG_BIT) && __EINT1_BIT > __LLONG_BIT
  typedef   signed __extended_int1 intmax_t;
  typedef unsigned __extended_int1 uintmax_t;
#    define INTMAX_C(n)		(n##g)
#    define UINTMAX_C(n)	(n##ug)
#  define ___IMBIT	__EINT1_BIT
#elif defined(__LLONG_BIT) && __LLONG_BIT >= __LONG_BIT
  typedef   signed long long intmax_t;
  typedef unsigned long long uintmax_t;
#  define ___IMBIT	__LLONG_BIT
#  if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)
#    define INTMAX_C(n)		((n)+0LL)
#    define UINTMAX_C(n)	((n)+0ULL)
#  endif
#else /* __LONG_BIT >= __INT_BIT */
  typedef   signed long intmax_t;
  typedef unsigned long uintmax_t;
#  define ___IMBIT	__LONG_BIT
#  if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)
#    define INTMAX_C(n)		((n)+0L)
#    define UINTMAX_C(n)	((n)+0UL)
#  endif
/*
#else
  typedef   signed int intmax_t;
  typedef unsigned int uintmax_t;
#  define ___IMBIT	__INT_BIT
#  if !defined(__cplusplus) || defined(__STDC_CONSTANT_MACROS)
#    define INTMAX_C(n)		((n)+0)
#    define UINTMAX_C(n)	((n)+0U)
#  endif
*/
#endif

#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

#  define ___MIN_FROM_BIT(__m1, __Bit_)	   (__m1 << ((__Bit_)-1))
#  define ___MAX_FROM_BIT(__1,  __Bit_)	((((__1  << ((__Bit_)-2))-1)<<1)+1)
#  define ___UMAX_FROM_BIT(__1u,__Bit_) ((((__1u << ((__Bit_)-2))-1)<<2)+3)

#  define INT_LEAST8_MIN	 ___MIN_FROM_BIT( INT8_C(-1), ___IL8BIT)
#  define INT_LEAST8_MAX	 ___MAX_FROM_BIT( INT8_C(1),  ___IL8BIT)
#  define UINT_LEAST8_MAX	___UMAX_FROM_BIT(UINT8_C(1),  ___IL8BIT)

#  define INT_LEAST16_MIN	 ___MIN_FROM_BIT( INT16_C(-1),___IL16BIT)
#  define INT_LEAST16_MAX	 ___MAX_FROM_BIT( INT16_C(1), ___IL16BIT)
#  define UINT_LEAST16_MAX	___UMAX_FROM_BIT(UINT16_C(1), ___IL16BIT)

#  define INT_LEAST24_MIN	 ___MIN_FROM_BIT( INT24_C(-1),___IL24BIT)
#  define INT_LEAST24_MAX	 ___MAX_FROM_BIT( INT24_C(1), ___IL24BIT)
#  define UINT_LEAST24_MAX	___UMAX_FROM_BIT(UINT24_C(1), ___IL24BIT)

#  define INT_LEAST32_MIN	 ___MIN_FROM_BIT( INT32_C(-1),___IL32BIT)
#  define INT_LEAST32_MAX	 ___MAX_FROM_BIT( INT32_C(1), ___IL32BIT)
#  define UINT_LEAST32_MAX	___UMAX_FROM_BIT(UINT32_C(1), ___IL32BIT)
#ifdef ___IL48BIT
#  define INT_LEAST48_MIN	 ___MIN_FROM_BIT( INT48_C(-1),___IL48BIT)
#  define INT_LEAST48_MAX	 ___MAX_FROM_BIT( INT48_C(1), ___IL48BIT)
#  define UINT_LEAST48_MAX	___UMAX_FROM_BIT(UINT48_C(1), ___IL48BIT)
#endif
#ifdef ___IL64BIT
#  define INT_LEAST64_MIN	 ___MIN_FROM_BIT( INT64_C(-1),___IL64BIT)
#  define INT_LEAST64_MAX	 ___MAX_FROM_BIT( INT64_C(1), ___IL64BIT)
#  define UINT_LEAST64_MAX	___UMAX_FROM_BIT(UINT64_C(1), ___IL64BIT)
#endif
#ifdef ___IL128BIT
#  define UINT_LEAST128_MAX	(340282366920938463463374607431768211455)
#  define  INT_LEAST128_MIN	(-1-170141183460469231731687303715884105727)
#  define  INT_LEAST128_MAX	(170141183460469231731687303715884105727)
/*
#  define INT_LEAST128_MIN	 ___MIN_FROM_BIT( INT128_C(-1),___IL128BIT)
#  define INT_LEAST128_MAX	 ___MAX_FROM_BIT( INT128_C(1), ___IL128BIT)
#  define UINT_LEAST128_MAX	___UMAX_FROM_BIT(UINT128_C(1), ___IL128BIT)
*/
#endif

#if __PTR_BIT <= __INT_BIT
#  define INTPTR_MIN		 ___MIN_FROM_BIT(-1, ___IPBIT)
#  define INTPTR_MAX		 ___MAX_FROM_BIT( 1, ___IPBIT)
#  define UINTPTR_MAX		___UMAX_FROM_BIT(1U, ___IPBIT)
#elif __PTR_BIT <= __LONG_BIT
#  define INTPTR_MIN		 ___MIN_FROM_BIT(-1L, ___IPBIT)
#  define INTPTR_MAX		 ___MAX_FROM_BIT( 1L, ___IPBIT)
#  define UINTPTR_MAX		___UMAX_FROM_BIT(1UL, ___IPBIT)
#elif defined(__LLONG_BIT) && __PTR_BIT <= __LLONG_BIT
#  define INTPTR_MIN		 ___MIN_FROM_BIT(-1LL, ___IPBIT)
#  define INTPTR_MAX		 ___MAX_FROM_BIT( 1LL, ___IPBIT)
#  define UINTPTR_MAX		___UMAX_FROM_BIT(1ULL, ___IPBIT)
#endif

#  define SIZE_MAX		UINTPTR_MAX
#  define PTRDIFF_MIN		 INTPTR_MIN
#  define PTRDIFF_MAX		 INTPTR_MAX

#if ___IMBIT == 128
#define UINTMAX_MAX		340282366920938463463374607431768211455
#define  INTMAX_MIN		-1-170141183460469231731687303715884105727
#define  INTMAX_MAX		170141183460469231731687303715884105727
#else
#  define INTMAX_MIN		 ___MIN_FROM_BIT(INTMAX_C(-1),___IMBIT)
#  define INTMAX_MAX		 ___MAX_FROM_BIT(INTMAX_C(1), ___IMBIT)
#  define UINTMAX_MAX		___UMAX_FROM_BIT(UINTMAX_C(1),___IMBIT)
#endif

#  define SIG_ATOMIC_MIN	___MIN_FROM_BIT(-1, __INT_BIT)
#  define SIG_ATOMIC_MAX	___MAX_FROM_BIT( 1, __INT_BIT)

# ifndef WCHAR_MIN	/* could have been #defined in wchar.h */
#  if __WCHAR_BIT > __INT_BIT
#   ifdef __WChar_Is_Unsigned__
#     define WCHAR_MIN		(0ul)
#     define WCHAR_MAX		___UMAX_FROM_BIT(1UL,__WCHAR_BIT)
#   else
#    define WCHAR_MIN		___MIN_FROM_BIT(-1L, __WCHAR_BIT)
#    define WCHAR_MAX		___MAX_FROM_BIT( 1L, __WCHAR_BIT)
#   endif
#  else
#   ifdef __WChar_Is_Unsigned__
#     define WCHAR_MIN		(0u)
#     define WCHAR_MAX		___UMAX_FROM_BIT(1U,__WCHAR_BIT)
#   else
#    define WCHAR_MIN		___MIN_FROM_BIT(-1, __WCHAR_BIT)
#    define WCHAR_MAX		___MAX_FROM_BIT( 1, __WCHAR_BIT)
#   endif
#  endif
# endif
/* wint_t will always be signed.  If wchar_t is unsigned, try to make wint_t *
 * larger than wchar_t so ((wint_t)-1) is distinct from all wchar_t values.  */
/* If longs and long longs are the same size, making wint_t long is not a
 * good idea.  Stick to int.
 */
#if !defined(_WIN32) && defined(__WChar_Is_Unsigned__) && \
    ((__WCHAR_BIT < __INT_BIT) || (defined(__LLONG_BIT) && (__LONG_BIT == __LLONG_BIT)))
#  define WINT_MIN		___MIN_FROM_BIT(-1, __INT_BIT)
#  define WINT_MAX		___MAX_FROM_BIT( 1, __INT_BIT)
#elif !defined(_WIN32) && defined(__WChar_Is_Unsigned__) && (__WCHAR_BIT < __LONG_BIT)
#  define WINT_MIN		___MIN_FROM_BIT(-1L, __LONG_BIT)
#  define WINT_MAX		___MAX_FROM_BIT( 1L, __LONG_BIT)
#else
#  define WINT_MAX		WCHAR_MAX
#  define WINT_MIN		WCHAR_MIN
#endif

#if ___FAST32_BIT == 32
#  define INT_FAST32_MIN	 INT_LEAST32_MIN
#  define INT_FAST32_MAX	 INT_LEAST32_MAX
#  define UINT_FAST32_MAX	UINT_LEAST32_MAX
#else
#  define INT_FAST32_MIN	 INT_LEAST64_MIN
#  define INT_FAST32_MAX	 INT_LEAST64_MAX
#  define UINT_FAST32_MAX	UINT_LEAST64_MAX
#endif
#undef	___FAST32_BIT
#  define INT_FAST8_MIN		 INT_FAST32_MIN
#  define INT_FAST8_MAX		 INT_FAST32_MAX
#  define UINT_FAST8_MAX	UINT_FAST32_MAX
#  define INT_FAST16_MIN	 INT_FAST32_MIN
#  define INT_FAST16_MAX	 INT_FAST32_MAX
#  define UINT_FAST16_MAX	UINT_FAST32_MAX

#  define INT_FAST24_MIN	 INT_FAST32_MIN
#  define INT_FAST24_MAX	 INT_FAST32_MAX
#  define UINT_FAST24_MAX	UINT_FAST32_MAX
#ifdef ___IL48BIT
#  define INT_FAST48_MIN	 INT_LEAST48_MIN
#  define INT_FAST48_MAX	 INT_LEAST48_MAX
#  define UINT_FAST48_MAX	UINT_LEAST48_MAX
#endif
#ifdef ___IL64BIT
#  define INT_FAST64_MIN	 INT_LEAST64_MIN
#  define INT_FAST64_MAX	 INT_LEAST64_MAX
#  define UINT_FAST64_MAX	UINT_LEAST64_MAX
#endif
#ifdef ___IL128BIT
#  define INT_FAST128_MIN	 INT_LEAST128_MIN
#  define INT_FAST128_MAX	 INT_LEAST128_MAX
#  define UINT_FAST128_MAX	UINT_LEAST128_MAX
#endif

#endif /* !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS) */

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_STDINT_H */
