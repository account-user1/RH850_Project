/*
                        ISO C Runtime Library

        Copyright (c) 1983-2013 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _MATH_H 
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _MATH_H
#if !defined(__NoFloat)

#ifdef __cplusplus
extern "C" {
#endif

/* The following macros are listed in the order they appear in ISO C99 */

#ifdef  FLT_EVAL_METHOD /* this is repeated in math.h and float.h */
#define __FLT_EVAL_METHOD FLT_EVAL_METHOD
#elif defined(__NoDouble)
# define __FLT_EVAL_METHOD 0
#elif defined(__rs6000c) && !defined(__ghs_fprecise)
/* PPC RS6000c evaluates floats and doubles in 64-bit arithmatic expressions*/
# define __FLT_EVAL_METHOD 1
#elif (defined(__m68020) || defined(__m68030) || defined(__i386) || defined(__x86_64__)) && \
        !defined(__SoftwareDouble) && !defined(__ghs_fprecise) && !defined(__AMD64_ABI__)
/* 68020, 68030, and i386 use 80 bit precision.  When __ghs_fprecise is
 * on, the compiler generates extra code to round precisely. */
# define __FLT_EVAL_METHOD (-1)
#else
# define __FLT_EVAL_METHOD 0
#endif

#if defined(__NoDouble)
  typedef float  float_t;
#elif __FLT_EVAL_METHOD == 1
  typedef double double_t;
  typedef double float_t;
#elif __FLT_EVAL_METHOD == 2
  typedef long double double_t;
  typedef long double float_t;
#else
  typedef double double_t;
  typedef float  float_t;
#endif

/* deprecated as of 3/5/04:
   define HUGE          HUGE_VAL
   define HUGEFLOAT     HUGE_VALF
*/

/*
    The macro INFINITY expands to a constant expression of type float 
    representing positive or unsigned infinity, if available; else to
    a positive constant of type float that overflows at translation time.
*/
#if defined(__EDG__)
#define INFINITY      __INFINITY__
#define NAN           __NAN__
#else
# if __INT_BIT == 32
    static union { int __V_; float __f_;} __Infinity ={0x7f800000},__NaN ={0x7fc00000};
# else
    static union {long __V_; float __f_;} __Infinity ={0x7f800000},__NaN ={0x7fc00000};
# endif
#define INFINITY        __Infinity.__f_
#define NAN             __NaN.__f_
#endif

#if (defined(__cplusplus) && defined(_MSC_VER)) || defined(__NoDouble)  /* --microsoft rejects the casts */
#define HUGE_VAL        INFINITY
#define HUGE_VALF       INFINITY
#define HUGE_VALL       INFINITY
#else
#define HUGE_VAL        ((double)INFINITY)
#define HUGE_VALF       INFINITY
#define HUGE_VALL       ((long double)INFINITY)
#endif

#define FP_ZERO         0
#define FP_NORMAL       1
#define FP_SUBNORMAL    2
#define FP_NAN          3
#define FP_INFINITE     4

/*
    The macro FP_FAST_FMA is optionally defined. If defined, it indicates 
    that the fma function generally executes about as fast as, or faster 
    than, a multiply and an add of double operands.
#define FAST_FMA        1
#define FAST_FMAF       1
#define FAST_FMAL       1
*/

#define FP_ILOGB0       (1+(-1 << ((__INT_BIT)-1)))     /* -INT_MAX */
#define FP_ILOGBNAN     (-1 << ((__INT_BIT)-1))         /* INT_MIN */

/*
    If the expression math_errhandling & MATH_ERREXCEPT can be nonzero,
    the implementation shall define the macros FE_DIVBYZERO, FE_INVALID,
    and FE_OVERFLOW in <fenv.h>.
*/
#define MATH_ERRNO      1
#define MATH_ERREXCEPT  2
#define math_errhandling        1

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && \
    !defined(__MISRA_20_5) && !defined(__MISRA_119)
#define EDOM    33      /* also #define'd in errno.h */
#define ERANGE  34      /* also #define'd in errno.h */
#endif

#if defined(__STDC__) || defined(__PROTOTYPES__) || defined(__EDG__)
# define __ARGS(x)      x
#else
# define __ARGS(x)      ()
  double cabs();
#endif

#if !defined(__ATTRIBUTES) && !defined(__attribute__)
#define __attribute__(x)        
#define __undefine_attribute_at_end__
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#if !defined(__NoDouble)
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
double atof     __ARGS((const char *));
#endif

double acos     __ARGS((double));
double asin     __ARGS((double));
double atan     (double) __attribute__((__const__));
double atan2    (double, double) __attribute__((__const__));
double cos      (double) __attribute__((__const__));
double sin      (double) __attribute__((__const__));
double tan      __ARGS((double));

double cosh     __ARGS((double));
double sinh     __ARGS((double));
double tanh     __ARGS((double));

double exp      __ARGS((double));
double exp2     __ARGS((double));
double expm1    __ARGS((double));
double frexp    (double, int *);
double ldexp    __ARGS((double, int));
double log      __ARGS((double));
double log10    __ARGS((double));
double modf     (double, double *);

double pow      __ARGS((double, double));
double sqrt     __ARGS((double));

/* Added by ISO C99 */
double ceil     (double) __attribute__((__const__));
double floor    (double) __attribute__((__const__));
double round    (double) __attribute__((__const__));
long   lround   __ARGS((double));
#if defined(__LLONG_BIT)
long long llround  __ARGS((double));
#endif
double trunc    (double) __attribute__((__const__));
double fabs     (double) __attribute__((__const__));
double fmod     (double, double);
double remainder __ARGS((double, double));
double log2     __ARGS((double));
double logb     __ARGS((double));
double scalbln  __ARGS((double, long));
double cbrt     (double) __attribute__((__const__));
double remquo   __ARGS((double, double, int *));
double lgamma   __ARGS((double));
double tgamma   __ARGS((double));
double nearbyint  __ARGS((double));
double rint     __ARGS((double));
long   lrint    __ARGS((double));
#if defined(__LLONG_BIT)
long long llrint __ARGS((double));
#endif
double nextafter __ARGS((double, double));
double nexttoward __ARGS((double, long double));
float  nexttowardf __ARGS((float, long double));
double fma      (double, double, double) __attribute__((__const__));
double copysign (double, double) __attribute__((__const__));
#if defined(__STDC__)   /* k+r did not have long double */
long double cosl  (long double) __attribute__((__const__));
long double sinl  (long double) __attribute__((__const__));
long double tanl  (long double);
long double coshl (long double);
long double sinhl (long double);
long double tanhl (long double);

long double acosl (long double);
long double asinl (long double);
long double atanl (long double) __attribute__((__const__));
long double atan2l(long double, long double) __attribute__((__const__));

long double acoshl(long double);
long double asinhl(long double);
long double atanhl(long double);

long double sqrtl (long double);
long double ceill (long double) __attribute__((__const__));
long double floorl(long double) __attribute__((__const__));
long      lroundl (long double);
#if defined(__LLONG_BIT)
long long llroundl(long double);
#endif

long double fabsl (long double) __attribute__((__const__));
long double frexpl(long double, int*);
long double ldexpl(long double, int);
long double fmodl (long double, long double);
long double powl  (long double, long double);
long double expl  (long double);
long double exp2l (long double);
long double expm1l(long double);
int         ilogbl(long double) __attribute__((__const__));
long double logl  (long double);
long double log10l(long double);
long double log1pl(long double);
long double log2l (long double);
long double logbl (long double);
long double modfl (long double, long double *);
long double scalbnl    (long double, int);
long double scalblnl   (long double, long);
long double hypotl     (long double, long double);
long double erfl       (long double);
long double erfcl      (long double);
long double remainderl (long double, long double);
long double copysignl  (long double, long double) __attribute__((__const__));
long double fminl      (long double, long double) __attribute__((__const__));
long double fmaxl      (long double, long double) __attribute__((__const__));
long double cbrtl      (long double) __attribute__((__const__));
long double fdiml      (long double,long double);
long double nanl       (const char *);
long double roundl     (long double) __attribute__((__const__));
long double truncl     (long double) __attribute__((__const__));
long double fmal       (long double, long double, long double) __attribute__((__const__));
long double remquol    (long double, long double, int *);
long double lgammal    (long double);
long double tgammal    (long double);
long double nearbyintl (long double);
long double nextafterl (long double, long double);
long double nexttowardl(long double, long double);
long double rintl      (long double);
long int    lrintl     (long double);

#if defined(__LLONG_BIT)
long long   llrintl    (long double);
#endif
#endif  /* __STDC__ */
/* End of added by ISO C99 */
#endif  /* __NoDouble */

long   lroundf  __ARGS((float));
#if defined(__LLONG_BIT)
long long llroundf __ARGS((float));
#endif
float  remainderf __ARGS((float, float));
float  log2f    __ARGS((float));
float  logbf    __ARGS((float));
float  scalblnf __ARGS((float, long));
float  erff     __ARGS((float));
float  erfcf    __ARGS((float));
float  cbrtf    (float) __attribute__((__const__));
float  remquof  __ARGS((float, float, int *));
float  lgammaf  __ARGS((float));
float  tgammaf  __ARGS((float));
float  nearbyintf __ARGS((float));
float  rintf    __ARGS((float));
long   lrintf   __ARGS((float));
#if defined(__LLONG_BIT)
long long llrintf __ARGS((float));
#endif
float  nextafterf __ARGS((float, float));
float  fmaf     (float, float, float) __attribute__((__const__));
float  copysignf (float, float) __attribute__((__const__));

#if !defined(_WIN32)
#if !defined(__NoDouble)
/* Microsoft libraries do not support these extensions */
double acosh    __ARGS((double));       /* part of ISO C99 */
double asinh    __ARGS((double));       /* part of ISO C99 */
double atanh    __ARGS((double));       /* part of ISO C99 */
double hypot    __ARGS((double, double));/* part of ISO C99 */
/* ISO C says these are macros and does not require function versions */
int isnan       (double) __attribute__((__const__));
int isinf       (double) __attribute__((__const__));
int isfinite    (double) __attribute__((__const__));
int isnormal    (double) __attribute__((__const__));
int signbit     (double) __attribute__((__const__));

int __fpclassifyd (double) __attribute__((__const__));
int __fpclassifyl (long double) __attribute__((__const__));
#endif  /* __NoDouble */
int __fpclassifyf (float) __attribute__((__const__));

#if defined(__EDG__) && defined(__NoDouble)
#define isnan(__x)      __isnanf(__x)
#define isinf(__x)      __isinff(__x)
#define fpclassify(__x) __fpclassifyf(__x)
#define isnormal(__x)   __isnormalf(__x)
#define isfinite(__x)   __isfinitef(__x)
#define signbit(__x)    __signbitf(__x)
#elif defined(__EDG__) && !defined(__FloatSingle) /* && (__STDC_VERSION__>=199901L) */
#define isnan(__x)     __generic(__x, , ,__isnand,__isnanf,__isnanl,,,)(__x)
#define isinf(__x)     __generic(__x, , ,__isinfd,__isinff,__isinfl,,,)(__x)
#define fpclassify(__x) __generic(__x,, ,__fpclassifyd,__fpclassifyf,__fpclassifyl,,,)(__x)
#define isnormal(__x)  __generic(__x, , ,__isnormald,__isnormalf,__isnormall,,,)(__x)
#define isfinite(__x)  __generic(__x, , ,__isfinited,__isfinitef,__isfinitel,,,)(__x)
#define signbit(__x)   __generic(__x, , ,__signbitd,__signbitf,__signbitl,,,)(__x)
#elif defined(__EDG__) && (__LDBL_SIZE >= 12)
#define isnan(__x)      ((sizeof(__x)==sizeof(float))? __isnanf(__x): \
                         (sizeof(__x)==sizeof(double))?__isnand(__x): __isnanl(__x))
#define isinf(__x)      ((sizeof(__x)==sizeof(float))? __isinff(__x): \
                         (sizeof(__x)==sizeof(double))?__isinfd(__x): __isinfl(__x))
#define fpclassify(__x) ((sizeof(__x)==sizeof(float))? __fpclassifyf(__x): \
                         (sizeof(__x)==sizeof(double))?__fpclassifyd(__x): __fpclassifyl(__x))
#define isnormal(__x)   ((sizeof(__x)==sizeof(float))? __isnormalf(__x): \
                         (sizeof(__x)==sizeof(double))?__isnormald(__x): __isnormall(__x))
#define isfinite(__x)   ((sizeof(__x)==sizeof(float))? __isfinitef(__x): \
                         (sizeof(__x)==sizeof(double))?__isfinited(__x): __isfinitel(__x))
#define signbit(__x)    ((sizeof(__x)==sizeof(float))? __signbitf(__x): \
                         (sizeof(__x)==sizeof(double))?__signbitd(__x): __signbitl(__x))
#else
#define isnan(__x)      ((sizeof(__x)==sizeof(float))?  __isnanf(__x): (isnan)(__x))
#define isinf(__x)      ((sizeof(__x)==sizeof(float))?  __isinff(__x): (isinf)(__x))
#define fpclassify(__x) \
        ((sizeof(__x)==sizeof(float))?  __fpclassifyf(__x): __fpclassifyd(__x))
#define isnormal(__x)   ((sizeof(__x)==sizeof(float))?  __isnormalf(__x): (__isnormald)(__x))
#define isfinite(__x)   ((sizeof(__x)==sizeof(float))?  __isfinitef(__x): (__isfinited)(__x))
#define signbit(__x)    ((sizeof(__x)==sizeof(float))?  __signbitf(__x): (__signbitd)(__x))
#endif

#define isunordered(__x, __y)   (isnan(__x) || isnan(__y))
#if defined(__EDG__) && defined(__NoDouble)
int __fcompare(float,float) __attribute__((__const__));
#define isgreater(__x, __y)     __fcompare(__x,__y)
#define isgreaterequal(__x,__y) __fcompare(__y,__x)
#define isless(__x, __y)        __fcompare(__x,__y)
#define islessequal(__x,__y)    __fcompare(__x,__y)
#define islessgreater(__x,__y)  __fcompare(__x,__y)
#elif defined(__EDG__) && !defined(__FloatSingle) /* && (__STDC_VERSION__>=199901L) */
int __fcompare(float,float) __attribute__((__const__));
int __dcompare(double,double) __attribute__((__const__));
int __lcompare(long double,long double) __attribute__((__const__));
#define isgreater(__x, __y)     (__generic(__x,__y,,__dcompare,__fcompare,__lcompare,,,)(__x,__y)==1)
#define isgreaterequal(__x,__y) (__generic(__x,__y,,__dcompare,__fcompare,__lcompare,,,)(__y,__x)<=0)
#define isless(__x, __y)        (__generic(__x,__y,,__dcompare,__fcompare,__lcompare,,,)(__x,__y)< 0)
#define islessequal(__x,__y)    (__generic(__x,__y,,__dcompare,__fcompare,__lcompare,,,)(__x,__y)<=0)
#define islessgreater(__x,__y)  (__generic(__x,__y,,__dcompare,__fcompare,__lcompare,,,)(__x,__y)&1)
#else
int __fcompare(float,float) __attribute__((__const__));
int __dcompare(double,double) __attribute__((__const__));
#define isgreater(__x, __y)     (((sizeof(__x)==sizeof(float))?__fcompare(__x,__y):__dcompare(__x,__y))==1)
#define isgreaterequal(__x,__y) (((sizeof(__x)==sizeof(float))?__fcompare(__y,__x):__dcompare(__y,__x))<=0)
#define isless(__x, __y)        (((sizeof(__x)==sizeof(float))?__fcompare(__x,__y):__dcompare(__x,__y))< 0)
#define islessequal(__x,__y)    (((sizeof(__x)==sizeof(float))?__fcompare(__x,__y):__dcompare(__x,__y))<=0)
#define islessgreater(__x,__y)  (((sizeof(__x)==sizeof(float))?__fcompare(__x,__y):__dcompare(__x,__y))&1)
#endif

# undef __32type
# if (__SHRT_BIT == 32)
#  define __32type short
# elif (__INT_BIT == 32)
#  define __32type int
# elif (__LONG_BIT == 32)
#  define __32type long
# endif

#if !defined(__32type) || defined(__ONLY_STANDARD_KEYWORDS_IN_C)
int __isnanf    __ARGS((float));
int __isinff    __ARGS((float));
#if !defined(__NoDouble)
int __isnand    __ARGS((double));
int __isinfd    __ARGS((double));
int __isnanl    __ARGS((long double));
int __isinfl    __ARGS((long double));
int __signbitl  __ARGS((long double));
int __signbitd  __ARGS((double));
int __isnormall __ARGS((long double));
int __isnormald __ARGS((double));
int __isfinitel __ARGS((long double));
int __isfinited __ARGS((double));
#endif  /* __NoDouble */
int __signbitf  __ARGS((float));
int __isnormalf __ARGS((float));
int __isfinitef __ARGS((float));

#else

#define __u32type unsigned __32type

#if defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__)
#define __Inline_keyword_       static inline
#elif defined(__cplusplus) || defined(__SC3__) || \
    (defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 199901L))
#define __Inline_keyword_       inline
#else
#define __Inline_keyword_       __inline
#endif

/* note, the first test will fail if float.h is not #include'd first */
#if (defined(DBL_MANT_DIG) && (LDBL_MANT_DIG > DBL_MANT_DIG)) || (__LDBL_SIZE>=12)
# define _M_    _MM_,
# if defined(__LittleEndian)
#  define __GeT_ExP(_H_)        (_H_ << 17)
#  define _Shift        17
# else
#  define __GeT_ExP(_H_)        (_H_ << 1)
#  define _Shift        1
# endif
# define __LDbl_Max_Exp 0xfffe0000u
  /* ignore integer bit when checking mantissa */
# define __LDbl_Mant_Zero ((_V_._I_._L_ ==0) && ((_V_._I_._MM_<<1)==0))
#else
# define _M_
# define __GeT_ExP(_H_) ((_H_ << 1) >> 21)
# define _Shift 1
# define __LDbl_Max_Exp 0x7ffu
# define __LDbl_Mant_Zero ((_V_._I_._L_==0) && ((_V_._I_._H_ << 12)==0))
#endif

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma ghs nowarning 1959,1968
#pragma pack (push, __ghs_max_pack_value)
#endif
#if defined(__NoDouble)
#elif defined(__DOUBLE_HL)
typedef union { struct {  __32type _H_, _M_ _L_; } _I_; long double _X_; } __Ldouble_int_u;
typedef union { struct { __u32type _H_, _M_ _L_; } _I_; long double _X_; } __Ldouble_uns_u;
typedef union { struct {  __32type _H_, _L_; } _I_; double _X_; } __Double_int_u;
typedef union { struct { __u32type _H_, _L_; } _I_; double _X_; } __Double_uns_u;
#else
typedef union { struct {  __32type _L_, _M_ _H_; } _I_; long double _X_; } __Ldouble_int_u;
typedef union { struct { __u32type _L_, _M_ _H_; } _I_; long double _X_; } __Ldouble_uns_u;
typedef union { struct {  __32type _L_, _H_; } _I_; double _X_; } __Double_int_u;
typedef union { struct { __u32type _L_, _H_; } _I_; double _X_; } __Double_uns_u;
#endif

# undef __64type
# if (__INT_BIT == 64)
#  define __64type int
# elif (__LONG_BIT == 64)
#  define __64type long
# elif defined(__LLONG_BIT) && (__LLONG_BIT == 64)
#  define __64type long long
# endif
# ifdef __64type
#  define __u64type unsigned __64type
# endif


#if !defined(__NO_GHS_GETDBITS) && defined(__64type) && !defined(__FloatSingle__) && !defined(__NoDouble)
__u64type __ghs_getdbits(double) __attribute__((__const__));
double    __ghs_setdbits(__u64type) __attribute__((__const__));
#endif
#if !defined(__NO_GHS_GETFBITS) && defined(__32type)
__u32type __ghs_getfbits(float) __attribute__((__const__));
float     __ghs_setfbits(__u32type) __attribute__((__const__));
#endif

/* signbit */
#if !defined(__NoDouble)
 __Inline_keyword_ int __signbitd(double __x) 
 {
#if defined(__BigEndian__) && (defined(__mc68000) || defined(__ColdFire__))
    return (*(const unsigned char*)&__x) >> 7;
#elif defined(__i386)
    return ((const unsigned char*)&__x)[7] >> 7;
#elif defined(__BigEndian__) && (defined(__SH7000) && defined(__SoftwareDouble))
    return (*(const signed char*)&__x) < 0;
#elif defined(__LittleEndian__) && (defined(__SH7000) && defined(__SoftwareDouble))
    return ((const signed char*)&__x)[7] < 0;
#elif !defined(__NO_GHS_GETFBITS) && defined(__FloatSingle__)
    return 0 > (__32type)__ghs_getfbits((float)__x);
#elif  defined(__NO_GHS_GETDBITS) || !defined(__64type)
    __Double_int_u _V_; _V_._X_ = __x;
    return _V_._I_._H_ < 0;
#else
    return (__u64type)__ghs_getdbits((double)__x) >> 63;
#endif
 }
 __Inline_keyword_ int __signbitl(long double __x) 
 {
#if defined(__BigEndian__) && (defined(__mc68000) || defined(__ColdFire__))
    return (*(const unsigned char*)&__x) >> 7;
#elif (__LDBL_SIZE <= 8)
    return __signbitd(__x);
#else
#  if defined(__BigEndian__)
    return (*(const unsigned char*)&__x) >> 7;
#  else
    return ((const unsigned char*)&__x)[9] >> 7;
#  endif
#endif
 }
#endif  /* __NoDouble */

 __Inline_keyword_ int __signbitf(float __x) 
 {
#if defined(__BigEndian__) && defined(__FR__)
    return (*(const unsigned char*)&__x) >> 7;
#elif defined(__mc68000) && !defined(__SoftwareFloat)
    return (*(const unsigned char*)&__x) >> 7;
#elif defined(__NO_GHS_GETFBITS) || (defined(__mc68000))
    union { __32type _I_; float _X_; } _V_;
    _V_._X_ = __x;
    return _V_._I_ < 0;
#else
    return 0 > (__32type)__ghs_getfbits((float)__x);
#endif
 }

/* isnormal */
#if !defined(__NoDouble)
 __Inline_keyword_ int __isnormall(long double __x) 
 {
    __Ldouble_uns_u _V_; __u32type __ExP__;
    _V_._X_ = __x; __ExP__ = __GeT_ExP(_V_._I_._H_);
    return (0 < __ExP__) && (__ExP__ < __LDbl_Max_Exp);
 }
 __Inline_keyword_ int __isnormald(double __x) 
 {
#if defined(__NO_GHS_GETDBITS) || !defined(__64type) || defined(__FloatSingle__)
    __Double_uns_u _V_; __u32type __ExP__;
    _V_._X_ = __x; __ExP__ = ((_V_._I_._H_ << 1) >> 21);
    return (0 < __ExP__) && (__ExP__ < 2047);
#elif defined(__REG_BIT) && (__REG_BIT == 64)
    int __ExP__ = (__64type)(__ghs_getdbits(__x) << 1) >> 53;
    return (unsigned)(__ExP__+1) > 1u; /* exponent bits are neither all 0's nor all 1's */
#else
    __32type __ExP__ = (__32type)(__ghs_getdbits(__x) >> 32);
    __ExP__ <<= 1;
    __ExP__ >>= 21;
    return (__u32type)(__ExP__+1) > 1u; /* exponent bits are neither all 0's nor all 1's */
#endif
 }
#endif  /* __NoDouble */
 __Inline_keyword_ int __isnormalf(float __x) 
 {
#if defined(__NO_GHS_GETFBITS)
    union { __u32type _I_; float _X_; } _V_; __u32type __ExP__;
    _V_._X_ = __x; __ExP__ = ((_V_._I_ << 1) >> 24);
    return (0 < __ExP__) && (__ExP__ < 255);
#else
    __32type __ExP__ = (__32type)(__ghs_getfbits(__x) << 1) >> 24;
    return (__u32type)(__ExP__+1) > 1u; /* exponent bits are neither all 0's nor all 1's */
#endif
 }

/* isfinite */
#if !defined(__NoDouble)
 __Inline_keyword_ int __isfinitel(long double __x) 
 {
    __Ldouble_uns_u _V_; _V_._X_ = __x;
    return __GeT_ExP(_V_._I_._H_) < __LDbl_Max_Exp;
 }
 __Inline_keyword_ int __isfinited(double __x) 
 {
#if defined(__NO_GHS_GETDBITS) || !defined(__64type) || defined(__FloatSingle__)
    __Double_uns_u _V_; _V_._X_ = __x;
    return ((_V_._I_._H_ << 1) >> 21) < 2047;
#elif defined(__REG_BIT) && (__REG_BIT == 64)
    int __ExP__ = (int)((__64type)(__ghs_getdbits(__x) << 1) >> 53);
    return (__ExP__ != -1);
#else
    __32type __ExP__ = (__32type)(__ghs_getdbits(__x) >> 32);
    __ExP__ <<= 1;
    __ExP__ >>= 21;
    return (__ExP__ != -1);
#endif
 }
#endif  /* __NoDouble */
 __Inline_keyword_ int __isfinitef(float __x) 
 {
#if defined(__NO_GHS_GETFBITS)
    union { __u32type _I_; float _X_; } _V_; _V_._X_ = __x;
    return ((_V_._I_ << 1) >> 24) < 255;
#else
    __u32type __ExP__ = (__ghs_getfbits(__x) << 1) >> 24;
    return (__ExP__ < 255);
#endif
 }

/* isnan */ 
#if !defined(__NoDouble)
 __Inline_keyword_ int __isnanl(long double __x) 
 {
    __Ldouble_uns_u _V_; _V_._X_ = __x; 
    return (__GeT_ExP(_V_._I_._H_) == __LDbl_Max_Exp) && !__LDbl_Mant_Zero;
 }
 __Inline_keyword_ int __isnand(double __x) 
 {
#if defined(__NO_GHS_GETDBITS) || !defined(__64type) || defined(__FloatSingle__)
    __Double_uns_u _V_; __u32type __t__; 
    _V_._X_ = __x; __t__ = (_V_._I_._H_ << 1) >> 21;
    return (__t__==2047) && ((_V_._I_._L_!=0) || ((_V_._I_._H_ << 12)!=0));
#elif defined(__REG_BIT) && (__REG_BIT == 64)
    __u64type __X__ = (__ghs_getdbits(__x) << 1);
    return (__X__ > 0xffe0000000000000u);
#else
    __u64type __X__ = __ghs_getdbits(__x);
    __u32type __H__ = (__u32type)(__X__ >> 32) << 1;
    if ((__u32type)__X__ != 0) __H__++;
    return (__H__ > 0xffe00000u);
#endif
 }
#endif  /* __NoDouble */
 __Inline_keyword_ int __isnanf(float __x) 
 {
#if defined(__NO_GHS_GETFBITS)
    union { __u32type _I_; float _X_; } _V_; _V_._X_ = __x;
    return (_V_._I_ << 1) > 0xff000000u;
#else
    __u32type _I_ = (__ghs_getfbits(__x) << 1);
    return (_I_ > 0xff000000u);
#endif
 }

/* isinf */
#if !defined(__NoDouble)
 __Inline_keyword_ int __isinfl(long double __x) 
 {
    __Ldouble_uns_u _V_; _V_._X_ = __x;
    return (__GeT_ExP(_V_._I_._H_) == __LDbl_Max_Exp) && __LDbl_Mant_Zero;
 }
 __Inline_keyword_ int __isinfd(double __x) 
 {
#if defined(__NO_GHS_GETDBITS) || !defined(__64type) || defined(__FloatSingle__) || defined(__mc68000)
    __Double_uns_u _V_; _V_._X_ = __x;
    return (((_V_._I_._H_ << 1) == 0xffe00000u) && (_V_._I_._L_==0));
#elif defined(__REG_BIT) && (__REG_BIT == 64)
    __u64type __X__ = (__ghs_getdbits(__x) << 1);
    return (__X__ == 0xffe0000000000000u);
#else
    __u64type __X__ = __ghs_getdbits(__x);
    __u32type __H__ = (__u32type)(__X__ >> 32) << 1;
    return (__H__ == 0xffe00000u) && ((__u32type)__X__ == 0);
    /*
    if ((__u32type)__X__ != 0) __H__++;
    return (__H__ == 0xffe00000u);
    */
#endif
 }
#endif  /* __NoDouble */
 __Inline_keyword_ int __isinff(float __x) 
 {
#if defined(__NO_GHS_GETFBITS)
    union { __u32type _I_; float _X_; } _V_; _V_._X_ = __x;
    return ((_V_._I_ << 1) == 0xff000000u);
#else
    __u32type _I_ = (__ghs_getfbits(__x) << 1);
    return (_I_ == 0xff000000u);
#endif
 }

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma ghs endnowarning 1959,1968
#pragma pack(pop)
#endif

#undef __Inline_keyword_
#undef __32type
#undef __u32type
#undef _M_
#undef _Shift
#undef __LDbl_Max_Exp
#undef __LDbl_Mant_Zero
#endif  /* __32type */

/* Added by ISO C99 */
#if !defined(__NoDouble)
int     ilogb   (double) __attribute__((__const__));
double  log1p   __ARGS((double));
double  scalbn  __ARGS((double, int));
double fdim     __ARGS((double,double));
double fmax     (double,double) __attribute__((__const__));
double fmin     (double,double) __attribute__((__const__));
double  nan     (const char *) __attribute__((__const__));
double erf      __ARGS((double));
double erfc     __ARGS((double));
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
double gamma    __ARGS((double));
#endif
#endif  /* __NoDouble */
int     ilogbf  (float) __attribute__((__const__));
float   log1pf  __ARGS((float));
float   scalbnf __ARGS((float, int));
float  fdimf    __ARGS((float, float));
float  fmaxf    (float, float) __attribute__((__const__));
float  fminf    (float, float) __attribute__((__const__));
float   nanf    (const char *) __attribute__((__const__));
/* End of added by ISO C99 */

#if (defined(__cplusplus) || !defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && !defined(__NoDouble)
/* These are all MATH EXTENSIONS */
double j0       __ARGS((double));
double j1       __ARGS((double));
double jn       __ARGS((int, double));
double y0       __ARGS((double));
double y1       __ARGS((double));
double yn       __ARGS((int, double));
#endif /* (defined(__cplusplus) || !defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) */

float acoshf    __ARGS((float));
float asinhf    __ARGS((float));
float atanhf    __ARGS((float));
float acosf     __ARGS((float));
float asinf     __ARGS((float));
float atanf     (float) __attribute__((__const__));
float atan2f    (float, float) __attribute__((__const__));
float cosf      (float) __attribute__((__const__));
float sinf      (float) __attribute__((__const__));
float tanf      __ARGS((float));
float coshf     __ARGS((float));
float sinhf     __ARGS((float));
float tanhf     __ARGS((float));
float expf      __ARGS((float));
float exp2f     __ARGS((float));
float expm1f    __ARGS((float));
float frexpf    (float, int *);
float hypotf    __ARGS((float, float));
float ldexpf    __ARGS((float, int));
float logf      __ARGS((float));
float log10f    __ARGS((float));
float powf      __ARGS((float, float));
#if defined(__STDC__) || !defined(__CCOM__) || !defined(__mips)
float sqrtf     __ARGS((float));
float fabsf     (float) __attribute__((__const__));
#endif
float ceilf     (float) __attribute__((__const__));
float floorf    (float) __attribute__((__const__));
float roundf    (float) __attribute__((__const__));
float truncf    (float) __attribute__((__const__));
float fmodf     (float, float);
float modff     (float, float *);
#endif /* !defined(_WIN32) */

#if (!defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#define M_PI       3.14159265358979323846
#define M_PI_2     1.570796326794896619231
#define M_PI_4     0.785398163397448309616
#define M_1_PI     0.318309886183790671538
#define M_2_PI     0.636619772367581343076
#define M_E        2.718281828459045235360
#define M_LN2      0.69314718055994530942
#define M_LN10     2.30258509299404568402
#define M_SQRT2    1.41421356237309504880
#define M_LOG10E   0.434294481903251827651
#define M_LOG2E    1.442695040888963407
#define M_2_SQRTPI 1.12837916709551257390

#define DOMAIN          1
#define SING            2
#define OVERFLOW        3
#define UNDERFLOW       4
#define TLOSS           5
#define PLOSS           6
#endif  /* __STDC__ == 0 and !_POSIX_SOURCE and !_POSIX_C_SOURCE */

#if defined(__undefine_attribute_at_end__)
#undef  __attribute__
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
        }
#if defined(_WIN32)
/* Microsoft libraries do not have float versions of these functions. */
inline float acosf(float _X)    {return ((float)acos((double)_X)); }
inline float asinf(float _X)    {return ((float)asin((double)_X)); }
inline float atanf(float _X)    {return ((float)atan((double)_X)); }
inline float atan2f(float _X, float _Y) {return ((float)atan2((double)_X, (double)_Y)); }
inline float cosf(float _X)     {return ((float)cos((double)_X)); }
inline float sinf(float _X)     {return ((float)sin((double)_X)); }
inline float tanf(float _X)     {return ((float)tan((double)_X)); }
inline float coshf(float _X)    {return ((float)cosh((double)_X)); }
inline float sinhf(float _X)    {return ((float)sinh((double)_X)); }
inline float tanhf(float _X)    {return ((float)tanh((double)_X)); }
inline float expf(float _X)     {return ((float)exp((double)_X)); }
inline float frexpf(float _X, int *_Y)  {return ((float)frexp((double)_X, _Y)); }
inline float ldexpf(float _X, int _Y)   {return ((float)ldexp((double)_X, _Y)); }
inline float logf(float _X)     {return ((float)log((double)_X)); }
inline float log10f(float _X)   {return ((float)log10((double)_X)); }
inline float sqrtf(float _X)    {return ((float)sqrt((double)_X)); }
inline float powf(float _X, float _Y)   {return ((float)pow((double)_X, (double)_Y)); }
#endif
/* According to ISO C++ 26.5, the float and long double versions of
   the transcendentals should only be available when <cmath> is included,
   and not when <math.h> alone is included.  For backwards compatibility with
   previous releases, the user may use -D__GHS_OVERLOAD_FUNCTIONS_IN_MATH_H, 
   to make those declarations visible in math.h, against the standard.
   This has the incorrect side-effect of adding the transcendentals to
   the std:: namespace, which should be done by <cmath>, not <math.h>.
   In a future release, __GHS_OVERLOAD_FUNCTIONS_IN_MATH_H will be removed.
*/
#ifdef __GHS_OVERLOAD_FUNCTIONS_IN_MATH_H
# include <cmath>
#endif
#endif /* __cplusplus */

#undef __ARGS
#endif /* !defined(__NoFloat) */
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif /* !defined(_MATH_H) */
