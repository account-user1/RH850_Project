/*
                        ISO C Runtime Library

        Copyright (c) 1983-2013 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _FLOAT_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _FLOAT_H
#if !defined(__NoFloat)
#define FLT_RADIX       2
/*
 * R3900 single precision rounds to zero in hardware.
 * But R3900 double precision rounds to nearest in software.
 * ANSI lacks this specific case, so use -1 which means indeterminate.
 */
#if defined(__mips) && defined(__R3900__) && !defined(__SoftwareFloat)
#define FLT_ROUNDS      -1
#else
#define FLT_ROUNDS      1       /* most systems implement round to nearest */
#endif

#ifdef  FLT_EVAL_METHOD /* this is repeated in math.h and float.h */
#elif defined(__rs6000c) && !defined(__ghs_fprecise)
/* PPC RS6000c evaluates floats and doubles in 64-bit arithmatic expressions*/
# define FLT_EVAL_METHOD 1
#elif (defined(__m68020) || defined(__m68030) || defined(__i386) || defined(__x86_64__)) && \
        !defined(__SoftwareDouble) && !defined(__ghs_fprecise) && !defined(__AMD64_ABI__)
/* 68020, 68030, and i386 use 80 bit precision.  When __ghs_fprecise is
 * on, the compiler generates extra code to round precisely. */
# define FLT_EVAL_METHOD (-1)
#else
# define FLT_EVAL_METHOD 0
#endif

#define FLT_MANT_DIG    (24)
#define FLT_EPSILON     (1.1920929e-7f)
#define FLT_DIG         (6)
#define FLT_MIN_EXP     (-125)
#define FLT_MIN         (1.175494350822287508e-38f)
#define FLT_MIN_10_EXP  (-37)
#define FLT_MAX_EXP     (128)
#define FLT_MAX         (3.40282347e+38f)
#define FLT_MAX_10_EXP  (38)

#if defined(__NoDouble)
#elif defined(__FloatSingle)
#define DBL_MANT_DIG    (24)
#define DBL_EPSILON     (1.1920929e-7f)
#define DBL_DIG         (6)
#define DBL_MIN_EXP     (-125)
#define DBL_MIN         (1.175494350822287508e-38f)
#define DBL_MIN_10_EXP  (-37)
#define DBL_MAX_EXP     (128)
#define DBL_MAX         (3.40282347e+38f)
#define DBL_MAX_10_EXP  (38)

#define LDBL_MANT_DIG    (24)
#define LDBL_EPSILON     (1.1920929e-7f)
#define LDBL_DIG         (6)
#define LDBL_MIN_EXP     (-125)
#define LDBL_MIN         (1.175494350822287508e-38f)
#define LDBL_MIN_10_EXP  (-37)
#define LDBL_MAX_EXP     (128)
#define LDBL_MAX         (3.40282347e+38f)
#define LDBL_MAX_10_EXP  (38)

#else /* !__FloatSingle */

#define DBL_MANT_DIG    (53)
#define DBL_EPSILON     (2.2204460492503131e-16)
#define DBL_DIG         (15)
#define DBL_MIN_EXP     (-1021)
#define DBL_MIN         (2.2250738585072014e-308)

#define DBL_MIN_10_EXP  (-307)
#define DBL_MAX         (1.7976931348623157e+308)
#define DBL_MAX_EXP     (1024)
#define DBL_MAX_10_EXP  (308)

#if __LDBL_SIZE == 16 && defined(__LDBL_IS_DBL_DBL)
/* Reference: C99(n1256) and C99RationaleV5.10, both in Sec 5.2.4.2.2 */
#define LDBL_MANT_DIG   (106)
#define LDBL_EPSILON    (4.94065645841246544176568792868221372e-324L)
#define LDBL_DIG        (31)
#define LDBL_MIN        (2.00416836000897277799610805135016205e-292L)
#define LDBL_MIN_EXP    (-968)
#define LDBL_MIN_10_EXP (-291)
#define LDBL_MAX        (1.79769313486231580793728971405301199e+308L)
#define LDBL_MAX_EXP    (1024)
#define LDBL_MAX_10_EXP (308)
#elif (__LDBL_SIZE == 12) || (__LDBL_SIZE == 16)
# define LDBL_MANT_DIG   (64)
# define LDBL_EPSILON    (1.08420217248550443400745280086994171142578125e-19L)
# define LDBL_DIG        (18)
# define LDBL_MIN_EXP    (-16381)
# define LDBL_MIN        (3.36210314311209350626e-4932L)
# define LDBL_MIN_10_EXP (-4931)
# define LDBL_MAX        (1.18973149535723176502e+4932L)
# define LDBL_MAX_EXP    (16384)
# define LDBL_MAX_10_EXP (4932)
#else /* long double same size as double, but with L suffix */
# define LDBL_MANT_DIG    (53)
# define LDBL_EPSILON     (2.2204460492503131e-16L)
# define LDBL_DIG         (15)
# define LDBL_MIN_EXP     (-1021)
# define LDBL_MIN         (2.2250738585072014e-308L)

# define LDBL_MIN_10_EXP  (-307)
# define LDBL_MAX         (1.7976931348623157e+308L)
# define LDBL_MAX_EXP     (1024)
# define LDBL_MAX_10_EXP  (308)
#endif

#endif /* !__FloatSingle */

#ifndef DECIMAL_DIG
#define DECIMAL_DIG     (LDBL_DIG+1)
#endif

#endif  /* !defined(__NoFloat) */
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif  /* _FLOAT_H */
