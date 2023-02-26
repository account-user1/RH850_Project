/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _LOCAL_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _LOCAL_H

#ifdef __MISRA_121
# if __MISRA_121 == 2
#  error "(Misra Rule 121): the header <locale.h> not allowed"
# elif __MISRA_121 == 1
#  warning "(Misra Rule 121): the header <locale.h> not allowed"
# endif
#endif /* __MISRA_121 */

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__cplusplus) && !defined(NULL)
#define NULL 0L		/* C++ requires this to be integral, not a pointer */
#elif !defined(NULL)
#define NULL ((void *)0)/* locale.h stddef.h stdio.h stdlib.h string.h time.h */
#endif

/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
struct lconv {
    char *decimal_point;	/* "." */
    char *thousands_sep;	/* "" */
    char *grouping;		/* "" */
    char *int_curr_symbol;	/* "" */
    char *currency_symbol;	/* "" */
    char *mon_decimal_point;	/* "" */
    char *mon_thousands_sep;	/* "" */
    char *mon_grouping; 	/* "" */
    char *positive_sign;	/* "" */
    char *negative_sign;	/* "" */
    char int_frac_digits;	/* CHAR_MAX */
    char frac_digits;		/* CHAR_MAX */
    char p_cs_precedes; 	/* CHAR_MAX */
    char p_sep_by_space;	/* CHAR_MAX */
    char n_cs_precedes; 	/* CHAR_MAX */
    char n_sep_by_space;	/* CHAR_MAX */
    char p_sign_posn;		/* CHAR_MAX */
    char n_sign_posn;		/* CHAR_MAX */
    /* the following added in ISO C99 */
    char int_p_cs_precedes;	/* CHAR_MAX */
    char int_n_cs_precedes;	/* CHAR_MAX */
    char int_p_sep_by_space;	/* CHAR_MAX */
    char int_n_sep_by_space;	/* CHAR_MAX */
    char int_p_sign_posn;	/* CHAR_MAX */
    char int_n_sign_posn;	/* CHAR_MAX */
};
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#define LC_ALL		    (LC_COLLATE|LC_CTYPE|LC_MONETARY|LC_NUMERIC|LC_TIME)
#define LC_COLLATE	    (1<<0)
#define LC_CTYPE	    (1<<1)
#define LC_MONETARY	    (1<<2)
#define LC_NUMERIC	    (1<<3)
#define LC_TIME 	    (1<<4)
#define LC_MESSAGES	    (1<<5)

#if defined(__STDC__) || defined(__PROTOTYPES__) || defined(__EDG__)
char *setlocale(int , const char *);
struct lconv *localeconv(void);
#else
char *setlocale();
struct lconv *localeconv();
#endif

#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif /* _LOCAL_H */
