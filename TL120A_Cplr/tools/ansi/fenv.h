/*
			ISO C Runtime Library

	Copyright (c) 2004-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _FENV_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _FENV_H
#if !defined(__NoFloat)

#ifdef __cplusplus
extern "C" {
#endif

/*
Each of the macros
    FE_DIVBYZERO
    FE_INEXACT
    FE_INVALID
    FE_OVERFLOW
    FE_UNDERFLOW
is defined if and only if the implementation supports the floating-point 
exception by means of the functions in 7.6.2. Additional implementation-
defined floating-point exceptions, with macro definitions beginning with
FE_ and an uppercase letter, may also be specified by the implementation.
The defined macros expand to integer constant expressions with values such
that bitwise ORs of all combinations of the macros result in distinct values.
*/
#if defined(__i386) || defined(__x86_64__)
#  define FE_INVALID	0x01
#  define FE_DIVBYZERO	0x04
#  define FE_OVERFLOW	0x08
#  define FE_UNDERFLOW	0x10
#  define FE_INEXACT	0x20
#  define FE_ALL_EXCEPT	0x3F
#else
#  define FE_DIVBYZERO	0x01
#  define FE_INEXACT	0x02
#  define FE_INVALID	0x04
#  define FE_OVERFLOW	0x08
#  define FE_UNDERFLOW	0x10
#  define FE_ALL_EXCEPT	0x1F
#endif

/*
Each of the macros
FE_DOWNWARD
FE_TONEAREST
FE_TOWARDZERO
FE_UPWARD
is defined if and only if the implementation supports getting and setting
the represented rounding direction by means of the fegetround and 
fesetround functions.  Additional implementation-defined rounding directions,
with macro definitions beginning with FE_ and an uppercase letter, may also 
be specified by the implementation. The defined macros expand to integer 
constant expressions whose values are distinct nonnegative values.
*/
#if defined(__i386) || defined(__x86_64__)
#  define FE_TONEAREST	0x0000
#  define FE_DOWNWARD	0x0400
#  define FE_UPWARD	0x0800
#  define FE_TOWARDZERO	0x0c00
#else
#  define FE_TOWARDZERO	0
#  define FE_TONEAREST	1
#  define FE_UPWARD	2
#  define FE_DOWNWARD	3
#endif

typedef long fenv_t;
/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
typedef struct { long __fe_state; } fexcept_t;
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#if __PTR_BIT == __SHRT_BIT
#define FE_DFL_ENV	((const fenv_t *)(short) -2)
#else
#define FE_DFL_ENV	((const fenv_t *) -2)
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

int feclearexcept(int);
int fegetexceptflag(fexcept_t *, int);
int feraiseexcept(int);
int fesetexceptflag(const fexcept_t *, int);
int fetestexcept(int);
int fegetround(void);
int fesetround(int);
int fegetenv(fenv_t *);
int feholdexcept(fenv_t *);
int fesetenv(const fenv_t *);
int feupdateenv(const fenv_t *);

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
	}
#endif	/* __cplusplus */
#endif  /* !defined(__NoFloat) */
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif  /* _FENV_H */
