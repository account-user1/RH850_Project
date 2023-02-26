/*
			ISO C Runtime Library

	Copyright (c) 2003-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _COMPLEX_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _COMPLEX_H
#if !defined(__NoFloat) && defined(__EDG__)

#ifdef __cplusplus
#error complex.h is intended for C99. Use <complex> for C++ instead
#elif __STDC_VERSION__ < 199901L
#error complex.h requires ISO C99 support in the compiler
#endif

#define complex		_Complex
#define _Complex_I	((float _Complex)__I__)
#define imaginary	_Imaginary
#ifdef imaginary
# define _Imaginary_I	((float _Imaginary)__I__)
# define I		_Imaginary_I
#else
# define I		_Complex_I
#endif

#if !defined(__ATTRIBUTES) && !defined(__attribute__)
#define	__attribute__(x)	
#define	__undefine_attribute_at_end__
#endif

/* #pragma STDC CX_LIMITED_RANGE on-off-switch */

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

float  complex cacosf(float complex);
float  complex casinf(float complex);
float  complex catanf(float complex);
float  complex ccosf(float complex);
float  complex csinf(float complex);
float  complex ctanf(float complex);
float  complex cacoshf(float complex);
float  complex casinhf(float complex);
float  complex catanhf(float complex);
float  complex ccoshf(float complex);
float  complex csinhf(float complex);
float  complex ctanhf(float complex);
float  complex cexpf(float complex);
float  complex clogf(float complex);
float  cabsf(float complex) __attribute__((__const__));
float  complex cpowf(float complex, float complex);
float  complex csqrtf(float complex);
float  cargf(float complex) __attribute__((__const__));
float  cimagf(float complex) __attribute__((__const__));
float  complex conjf(float complex) __attribute__((__const__));
float  complex cprojf(float complex) __attribute__((__const__));
float  crealf(float complex) __attribute__((__const__));

#if !defined(__NoDouble)
double complex cacos(double complex);
double complex casin(double complex);
double complex catan(double complex);
double complex ccos(double complex);
double complex csin(double complex);
double complex ctan(double complex);
double complex cacosh(double complex);
double complex casinh(double complex);
double complex catanh(double complex);
double complex ccosh(double complex);
double complex csinh(double complex);
double complex ctanh(double complex);
double complex cexp(double complex);
double complex clog(double complex);
double cabs(double complex) __attribute__((__const__));
double complex cpow(double complex, double complex);
double complex csqrt(double complex);
double carg(double complex) __attribute__((__const__));
double cimag(double complex) __attribute__((__const__));
double complex conj(double complex) __attribute__((__const__));
double complex cproj(double complex) __attribute__((__const__));
double creal(double complex) __attribute__((__const__));

long double creall(long double complex);
long double complex cacosl(long double complex);
long double complex casinl(long double complex);
long double complex catanl(long double complex);
long double complex ccosl(long double complex);
long double complex csinl(long double complex);
long double complex ctanl(long double complex);
long double complex cacoshl(long double complex);
long double complex casinhl(long double complex);
long double complex catanhl(long double complex);
long double complex ccoshl(long double complex);
long double complex csinhl(long double complex);
long double complex ctanhl(long double complex);
long double complex cexpl(long double complex);
long double complex clogl(long double complex);
long double cabsl(long double complex) __attribute__((__const__));
long double complex cpowl(long double complex, long double complex);
long double complex csqrtl(long double complex);
long double cargl(long double complex) __attribute__((__const__));
long double cimagl(long double complex) __attribute__((__const__));
long double complex conjl(long double complex) __attribute__((__const__));
long double complex cprojl(long double complex) __attribute__((__const__));
long double creall(long double complex) __attribute__((__const__));
#endif	/* 1 */

#if defined(__undefine_attribute_at_end__)
#undef	__attribute__
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#endif  /* !defined(__NoFloat) */
#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif  /* _COMPLEX_H */
