/* Copyright 2012 The Mathworks, Inc. */

#ifndef POLYSPACE_LIBC_DEFS_H
/* already defined when running through polyspace-configure to avoid conflict with headers */
#define POLYSPACE_LIBC_DEFS_H

/*
 * Polyspace definitions for the LIBC.
 *
 * __polyspace__libc_defs.h
 *
 * This file aims at doing the necessary defines to prevent most compilation
 * problems with the LIBC header files.
 *
 * The file is automatically included in top of each source file when, either
 * the option -OS-target linux is set or the option -OS-target no-predefined-OS
 * is set and the option -no-default-system-includes is not set.
 */

/*
 * The list was obtained by running the following commands:
 * $ gcc -x c -m(32|64) [--std=c89] -dM -E - < /dev/null | sort
 * $ g++ -x c++ -m(32|64) [--std=c++98] -dM -E - < /dev/null | grep -vw __cplusplus | sort
 *
 * The output of the 4 commands was merged using conditional preprocessing that relies on the
 * following #defines:
 * -D __cplusplus  : when calling 'g++'
 * -D __MW_C89__   : when calling 'gcc --std=c89'
 * -D __MW_CXX98__ : when calling 'g++ -std=c++98'
 * -D __MW_I386__  : when calling 'gcc' or 'g++' with -m32
 * -D __MW_X86_64__ : when calling 'gcc' or 'g++' with -m64
 *
 * Additional processing was then performed to handle other targets and dialects using the
 * shipped set of system headers and take into account the macros that are automatically
 * predefined by the front-end:
 * -D __MW_GNU__ : when the GNU dialect is enabled
 * -D __OS_LINUX : when the option -OS-target linux is set
 */

/* Compiler identification (used in various GLIBC headers). */
/*
 * Those are automatically predefined by the front-end when the GNU dialect is enabled:
#ifdef __MW_GNU__
# define __GNUC__            4
# define __GNUC_MINOR__      4
# define __GNUC_PATCHLEVEL__ 5
# define __VERSION__         "4.4.5"
# ifdef __cpluscplus
#  define __GNUG__           4
# endif
#endif / * defined(__MW_GNU__) * /
 */

/* Used in various GLIBC headers. */
/*
 * The following is automatically predefined by the front-end based on various settings (language, dialect...):
#define __STDC__               1
#define __STDC_HOSTED__        1
 */
#define __NO_INLINE__          1
#if ((! defined(__cplusplus)) && defined(__MW_C89__)) || \
    (defined(__cplusplus) && defined(__MW_CXX98__)) || \
    (! defined(__OS_LINUX))
  /* Only defined with 'gcc --std=c89' or 'g++ --std=c++98' */
# define __STRICT_ANSI__ 1
#endif

/*
 * The following is automatically predefined by the front-end based when exceptions handling is enabled. 
#ifdef __cplusplus
# define __EXCEPTIONS 1
#endif
 */

/* Integer types (used in stddef.h). */
/*
 * Those are automatically predefined by the front-end:
#ifdef __MW_X86_64__
# define __SIZE_TYPE__    long unsigned int
# define __PTRDIFF_TYPE__ int
#else
# define __SIZE_TYPE__    unsigned int
# define __PTRDIFF_TYPE__ long int
#endif
 * The front-end defines _WCHAR_T when 'wchar_t' is a keyword:
#ifdef _WCHAR_T
# define __WCHAR_TYPE__   wchar_t
#else
# define __WCHAR_TYPE__   int
#endif
 */
/*
 * The following is automatically predefined by the front-end:
#define __WINT_TYPE__    unsigned int
 */

/* Integer limits (used in limits.h). */
/*
 * Those are automatically predefined by the front-end:
#define __CHAR_BIT__                         8
#define __SCHAR_MAX__                      127
#define __SHRT_MAX__                     32767
#define __INT_MAX__                 2147483647
#ifdef __MW_X86_64__
# define __LONG_MAX__      9223372036854775807L
#else
# define __LONG_MAX__               2147483647L
#endif
/ * The front-end defines __NO_LONG_LONG when 'long long' is disabled. * /
#ifndef __NO_LONG_LONG
# define __LONG_LONG_MAX__ 9223372036854775807LL
#endif
#define __WCHAR_MAX__               2147483647
 */

/* float limits (used in float.h). */
#define __FLT_DIG__           6
#define __FLT_EPSILON__       1.19209290e-7F
#define __FLT_MANT_DIG__      24
#define __FLT_MIN_10_EXP__    (-37)
#define __FLT_MAX_10_EXP__    38
#define __FLT_MIN_EXP__       (-125)
#define __FLT_MAX_EXP__       128
#define __FLT_MIN__           1.17549435e-38F
#define __FLT_MAX__           3.40282347e+38F
#define __FLT_RADIX__         2
/* float limits (used in libstdc++'s 'limits' file -> shipped as part of STL stubs). */
#define __FLT_DENORM_MIN__    1.40129846e-45F
#define __FLT_HAS_DENORM__    1
#define __FLT_HAS_INFINITY__  1
#define __FLT_HAS_QUIET_NAN__ 1

/* double limits (used in float.h). */
#define __DBL_DIG__           15
#define __DBL_EPSILON__       2.2204460492503131e-16
#define __DBL_MANT_DIG__      53
#define __DBL_MIN_EXP__       (-1021)
#define __DBL_MAX_EXP__       1024
#define __DBL_MIN__           2.2250738585072014e-308
#define __DBL_MAX__           1.7976931348623157e+308
#define __DBL_MIN_10_EXP__    (-307)
#define __DBL_MAX_10_EXP__    308
/* double limits (used in libstdc++'s 'limits' file -> shipped as part of STL stubs). */
#define __DBL_DENORM_MIN__    4.9406564584124654e-324
#define __DBL_HAS_DENORM__    1
#define __DBL_HAS_INFINITY__  1
#define __DBL_HAS_QUIET_NAN__ 1

/* long double limits (used in float.h). */
#define __LDBL_DIG__           18
#define __LDBL_EPSILON__       1.08420217248550443401e-19L
#define __LDBL_MANT_DIG__      64
#define __LDBL_MIN_10_EXP__    (-4931)
#define __LDBL_MAX_10_EXP__    4932
#define __LDBL_MIN_EXP__       (-16381)
#define __LDBL_MAX_EXP__       16384
#define __LDBL_MIN__           3.36210314311209350626e-4932L
#define __LDBL_MAX__           1.18973149535723176502e+4932L
/* long double limits (used in libstdc++'s 'limits' file -> shipped as part of STL stubs). */
/*#define __LDBL_DENORM_MIN__    3.64519953188247460253e-4951L*/ /* this constant is too big for a 'long double' when running on Windows */
#define __LDBL_HAS_DENORM__    1
#define __LDBL_HAS_INFINITY__  1
#define __LDBL_HAS_QUIET_NAN__ 1

#ifdef __OS_LINUX
  /* Processor identification (unused in the system headers but often used in applications). */
# ifdef __MW_X86_64__
#  define __amd64    1
#  define __amd64__  1
#  define __k8       1
#  define __k8__     1
#  define __x86_64   1
#  define __x86_64__ 1
   /* Used in some machine specific GCC headers and non-system headers -> not shipped */
#  define _LP64               1
#  define __LP64__            1
#  define __MMX__             1
#  define __SSE2_MATH__       1
#  define __SSE2__            1
#  define __SSE_MATH__        1
#  define __SSE__             1
# elif defined(__MW_I386__)
#  if ((! defined(__cplusplus)) && (! defined(__MW_C89__))) || \
       (defined(__cplusplus) && (! defined(__MW_CXX98__)))
#   define i386       1
#  endif
#  define __i386      1
#  define __i386__    1
#  define __i586      1
#  define __i586__    1
#  define __pentium   1
#  define __pentium__ 1
# endif

  /* O.S. identification (unused in the system headers but often used in applications). */
# if ((! defined(__cplusplus)) && (! defined(__MW_C89__))) || \
     (defined(__cplusplus) && (! defined(__MW_CXX98__)))
#  define linux        1
#  define unix         1
# endif
# define __unix        1
# define __unix__      1
# define __linux       1
# define __linux__     1
# define __gnu_linux__ 1
#endif /* defined(__OS_LINUX) */

/* Used in sys/cdefs.h */
#if defined __GNUC__ && __GNUC__ >= 2
# define __USER_LABEL_PREFIX__
#endif

#if defined(__GNUC__) && defined(__OS_LINUX)
  /* Used in various GLIBC headers. */
# ifdef __cplusplus
#  define _GNU_SOURCE  1
# endif

  /* Floating-point expression evaluation method (used in float.h when __STDC_VERSION__ >= 199901L -> not shipped) */
# ifdef __MW_X86_64__
#  define __FLT_EVAL_METHOD__ 0
# else
#  define __FLT_EVAL_METHOD__ 2
# endif

  /* Decimal settings. */
# define __DECIMAL_BID_FORMAT__  1 /* unused */
# define __DECIMAL_DIG__        21 /* used in float.h when __STDC_VERSION__ >= 199901L -> not shipped */
# define __DEC_EVAL_METHOD__     2 /* used in float.h when __STDC_WANT_DEC_FP__ is defined -> not shipped */

  /* Decimal 32 limits (used in float.h when __STDC_WANT_DEC_FP__ is defined -> not shipped). */
# define __DEC32_EPSILON__       1E-6DF
# define __DEC32_MANT_DIG__      7
# define __DEC32_MAX_EXP__       97
# define __DEC32_MAX__           9.999999E96DF
# define __DEC32_MIN_EXP__       (-94)
# define __DEC32_MIN__           1E-95DF
# define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF

  /* Decimal 64 limits. (used in float.h when __STDC_WANT_DEC_FP__ is defined -> not shipped) */
# define __DEC64_EPSILON__       1E-15DD
# define __DEC64_MANT_DIG__      16
# define __DEC64_MAX_EXP__       385
# define __DEC64_MAX__           9.999999999999999E384DD
# define __DEC64_MIN_EXP__       (-382)
# define __DEC64_MIN__           1E-383DD
# define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD

  /* Decimal 128 limits. (used in float.h when __STDC_WANT_DEC_FP__ is defined -> not shipped) */
# define __DEC128_EPSILON__       1E-33DL
# define __DEC128_MANT_DIG__      34
# define __DEC128_MAX_EXP__       6145
# define __DEC128_MAX__           9.999999999999999999999999999999999E6144DL
# define __DEC128_MIN_EXP__       (-6142)
# define __DEC128_MIN__           1E-6143DL
# define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL

  /* Used in various libstdc++ headers -> not shipped. */
# define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1
# define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1
# define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1
# define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 1
# ifdef __cplusplus
#  define __DEPRECATED 1
#  define __GXX_RTTI   1
#  define __GXX_WEAK__ 1
# endif

  /* Integer types (unused). */
# define __CHAR16_TYPE__   short unsigned int
# define __CHAR32_TYPE__   unsigned int
# if defined(__MW_X86_64__) || defined(__NO_LONG_LONG)
#  define __INTMAX_TYPE__  long int
#  define __UINTMAX_TYPE__ long unsigned int
# else
#  define __INTMAX_TYPE__  long long int
#  define __UINTMAX_TYPE__ long long unsigned int
# endif

  /* Integer limits (used in various libstdc++ headers -> not shipped. */
# if defined(__MW_X86_64__) || defined(__NO_LONG_LONG)
#  define __INTMAX_MAX__     9223372036854775807L
# else
#  define __INTMAX_MAX__     9223372036854775807LL
# endif

  /* sizeof() values (used in unwind.h -> not shipped). */
# define __SIZEOF_DOUBLE__        8
# define __SIZEOF_FLOAT__         4
# define __SIZEOF_INT__           4
# ifdef __MW_X86_64__
#  define __SIZEOF_LONG__         8
#  define __SIZEOF_POINTER__      8
#  define __SIZEOF_PTRDIFF_T__    8
#  define __SIZEOF_SIZE_T__       8
#  define __SIZEOF_LONG_DOUBLE__ 16
# else
#  define __SIZEOF_LONG__         4
#  define __SIZEOF_POINTER__      4
#  define __SIZEOF_PTRDIFF_T__    4
#  define __SIZEOF_SIZE_T__       4
#  define __SIZEOF_LONG_DOUBLE__ 12
# endif
# ifndef __NO_LONG_LONG
#  define __SIZEOF_LONG_LONG__    8
# endif
# define __SIZEOF_SHORT__         2
# define __SIZEOF_WCHAR_T__       4
# define __SIZEOF_WINT_T__        4

  /* Unused. */
# define __GNUC_GNU_INLINE__      1
# define __REGISTER_PREFIX__ 
# define __ELF__                  1
# define __BIGGEST_ALIGNMENT__   16
# define __FINITE_MATH_ONLY__     0
# define __GXX_ABI_VERSION     1002
# if defined(__cplusplus) || defined(__MW_X86_64__)
#  define __GCC_HAVE_DWARF2_CFI_ASM 1
# endif
#endif /* defined(__GNUC__) && defined(__OS_LINUX) */

#ifndef __MW_GNU__
  /* If the GNU dialect is not enabled but __GNUC__ is set anyway, disable some 'gcc' extensions
     that would have been disabled in sys/cdefs.h if __GNUC__ was not set. */
# if __GNUC__ >= 2
#  define __attribute__(x)
# endif
# if (__GNUC__ > 2) || ((__GNUC__ == 2) && __GNUC_MINOR__ >= 8)
#  define __extension__
# endif
# if (__GNUC__ > 2) || ((__GNUC__ == 2) && __GNUC_MINOR__ >= 92)
#  define __restrict
# endif
# ifdef __GNUC__
#  define __const    const
#  define __inline   inline
#  define __signed   signed
#  define __volatile volatile
# endif
# define __inline__ inline
# define __signed__ signed
# if (! defined(__GNUC__)) && (! defined(__NO_LONG_LONG))
#  define __GLIBC_HAVE_LONG_LONG 1
# endif
#endif /* !defined(__MW_GNU__) */

#endif /* POLYSPACE_LIBC_DEFS_H */
