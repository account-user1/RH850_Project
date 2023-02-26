/*
			ISO C Runtime Library

	Copyright (c) 2003-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _TGMATH_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _TGMATH_H

#ifdef __cplusplus
#error tgmath.h is intended for C99, not C++.
#elif __STDC_VERSION__ < 199901L

#error tgmath.h requires ISO C99 support in the compiler

#elif !defined(__NoFloat) && defined(__EDG__)

#include <math.h>
#include <complex.h>

/* functions which have all 6 variants */
#define __gh_tg1(fn,X)     __generic(X, , ,fn,fn##f,fn##l,c##fn,c##fn##f,c##fn##l)(X)
#define __gh_tg2(fn,X,Y)   __generic(X,Y, ,fn,fn##f,fn##l,c##fn,c##fn##f,c##fn##l)(X,Y)
#define __gh_tg3(fn,X,Y,Z) __generic(X,Y,Z,fn,fn##f,fn##l,c##fn,c##fn##f,c##fn##l)(X,Y,Z)

/* functions which have no complex variants */
#define __gh_tg1r(fn,X)     __generic(X, , ,fn,fn##f,fn##l,,,)(X)
#define __gh_tg2r(fn,X,Y)   __generic(X,Y, ,fn,fn##f,fn##l,,,)(X,Y)
#define __gh_tm2r(fn,X,N)   __generic(X, , ,fn,fn##f,fn##l,,,)(X,N)
#define __gh_tg3r(fn,X,Y,Z) __generic(X,Y,Z,fn,fn##f,fn##l,,,)(X,Y,Z)
#define __gh_tm3r(fn,X,Y,N) __generic(X,Y, ,fn,fn##f,fn##l,,,)(X,Y,N)

/* functions which have no real variants */
#define __gh_tg1c(fn,X)     __generic(X, , ,fn,fn##f,fn##l,fn,fn##f,fn##l)(X)
#define __gh_tg2c(fn,X,Y)   __generic(X,Y, ,fn,fn##f,fn##l,fn,fn##f,fn##l)(X,Y)
#define __gh_tg3c(fn,X,Y,Z) __generic(X,Y,Z,fn,fn##f,fn##l,fn,fn##f,fn##l)(X,Y,Z)

/*
    Table from 7.22
   <math.h>  <complex.h> type-generic
   function  function	    macro
   --------  --------   -------------
    acos	cacos	acos
    asin	casin	asin
    atan	catan	atan
    acosh	cacosh	acosh
    asinh	casinh	asinh
    atanh	catanh	atanh
    cos 	ccos	cos
    sin 	csin	sin
    tan 	ctan	tan
    cosh	ccosh	cosh
    sinh	csinh	sinh
    tanh	ctanh	tanh
    exp 	cexp	exp
    log 	clog	log
    pow 	cpow	pow
    sqrt	csqrt	sqrt
    fabs	cabs	fabs
*/

#define acos(X) 	__gh_tg1 (acos, X)
#define asin(X) 	__gh_tg1 (asin, X)
#define atan(X) 	__gh_tg1 (atan, X)
#define acosh(X)	__gh_tg1 (acosh, X)
#define asinh(X)	__gh_tg1 (asinh, X)
#define atanh(X)	__gh_tg1 (atanh, X)
#define cos(X)  	__gh_tg1 (cos, X)
#define sin(X)  	__gh_tg1 (sin, X)
#define tan(X)  	__gh_tg1 (tan, X)
#define cosh(X) 	__gh_tg1 (cosh, X)
#define sinh(X) 	__gh_tg1 (sinh, X)
#define tanh(X) 	__gh_tg1 (tanh, X)
#define exp(X)  	__gh_tg1 (exp, X)
#define log(X)  	__gh_tg1 (log, X)
#define pow(X, Y)	__gh_tg2 (pow, X, Y)
#define sqrt(X) 	__gh_tg1 (sqrt, X)
#define fabs(X) 	__generic(X,,,fabs,fabsf,fabsl,cabs,cabsf,cabsl)(X)

/*
	atan2	  fma	  llround     remainder
	cbrt	  fmax	  log10       remquo
	ceil	  fmin	  log1p       rint
	copysign  fmod	  log2	      round
	erf	  frexp   logb	      scalbln
	erfc	  hypot   lrint       scalbn
	exp2	  ilogb   lround      tgamma
	expm1	  ldexp   nearbyint   trunc
	fdim	  lgamma  nextafter
	floor	  llrint  nexttoward
*/
#define atan2(X, Y)	__gh_tg2r(atan2, X, Y)
#define ceil(X) 	__gh_tg1r(ceil, X)
#define copysign(X, Y)	__gh_tg2r(copysign, X, Y)
#define erf(X)  	__gh_tg1r(erf, X)
#define erfc(X) 	__gh_tg1r(erfc, X)
#define exp2(X) 	__gh_tg1r(exp2, X)
#define expm1(X)	__gh_tg1r(expm1, X)
#define fdim(X, Y)	__gh_tg2r(fdim, X, Y)
#define floor(X)	__gh_tg1r(floor, X)
#define fmax(X, Y)	__gh_tg2r(fmax, X, Y)
#define fmin(X, Y)	__gh_tg2r(fmin, X, Y)
#define fmod(X, Y)	__gh_tg2r(fmod, X, Y)
#define frexp(X, N)	__gh_tm2r(frexp, X, N)
#define hypot(X, Y)	__gh_tg2r(hypot, X, Y)
#define ilogb(X)	__gh_tg1r(ilogb, X)
#define ldexp(X, N)	__gh_tm2r(ldexp, X, N)
#define llround(X)	__gh_tg1r(llround, X)
#define log10(X)	__gh_tg1r(log10, X)
#define log1p(X)	__gh_tg1r(log1p, X)
#define logb(X) 	__gh_tg1r(logb, X)
#define log2(X) 	__gh_tg1r(log2, X)
#define lround(X)	__gh_tg1r(lround, X)
#define round(X)	__gh_tg1r(round, X)
#define scalbn(X, N)	__gh_tm2r(scalbn, X, N)
#define scalbln(X, N)	__gh_tm2r(scalbln, X, N)
#define trunc(X)	__gh_tg1r(trunc, X)
#define cbrt(X) 	__gh_tg1r(cbrt, X)
#define fma(X, Y, Z)	__gh_tg3r(fma, X, Y, Z)
#define remainder(X, Y)	__gh_tg2r(remainder, X, Y)
#define remquo(X, Y, N)	__gh_tm3r(remquo, X, Y, N)
#define lgamma(X)	__gh_tg1r(lgamma, X)
#define tgamma(X)	__gh_tg1r(tgamma, X)

#define llrint(X)	__gh_tg1r(llrint, X)
#define lrint(X)	__gh_tg1r(lrint, X)
#define rint(X) 	__gh_tg1r(rint, X)
#define nearbyint(X)	__gh_tg1r(nearbyint, X)
#define nextafter(X, Y)	__gh_tg2r(nextafter, X, Y)
#define nexttoward(X,N)	__gh_tm2r(nexttoward, X, N)

#define carg(X)		__gh_tg1c(carg,  X)
#define cimag(X)	__gh_tg1c(cimag, X)
#define conj(X)		__gh_tg1c(conj,  X)
#define cproj(X)	__gh_tg1c(cproj, X)
#define creal(X)	__gh_tg1c(creal, X)

#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif  /* !defined(__NoFloat) */
#endif  /* _TGMATH_H */
