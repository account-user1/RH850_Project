/*
			ISO C/C++ Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_WCTYPE_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_WCTYPE_H

#include "ghs_wchar.h"		/* defines wchar_t */

#if !defined(WEOF)
#define WEOF	((wint_t)(-1))
#endif /* !WEOF */

/* the declaractions of wctype_t wint_t are duplicated in wchar.h and wctype.h */
#if defined(_WIN32)
/* wint_t and wctype_t are defined in many Microsoft headers */
# if !defined(_WCTYPE_T_DEFINED)
#   define _WCTYPE_T_DEFINED
    typedef wchar_t wint_t;
    typedef int wctype_t;
# endif /* _WCTYPE_T_DEFINED */
# define _WINTT				/* For PJP Header Files       */
# define _WCTYPET
#endif
#if !defined(_WINTT) && !defined(_WINT_T) /* Some hosts use _WINT_T to protect wint_t */
# define _WINTT
# define _WINT_T
/* ISO C99 7.24.1 "wint_t ...is an integer type unchanged by default argument
   promotions that can hold any value corresponding to members of the extended
   character set, as well as at least one value that does not correspond to 
   any member of the extended character set (see WEOF below);"
   We chose to make wint_t always signed, and larger than wchar_t if possible
   without resorting to long long.  WEOF is -1.  Do not make wint_t the same
   as wchar_t because C++ considers wchar_t a special type, and wint_t should
   always be an integral type independent of wchar_t.

   If longs and long longs are the same size, making wint_t long is not a
   good idea.  Stick to int.   
*/
# if (__WCHAR_BIT < __INT_BIT) || (defined(__LLONG_BIT) && (__LONG_BIT == __LLONG_BIT))
  typedef int wint_t;
# else
  typedef long wint_t;
# endif
#endif
#if !defined(_WCTYPET) && !defined(_WCTYPE_T) /* Some hosts use _WCTYPE_T to protect wctype_t */
# define _WCTYPET
# define _WCTYPE_T
  typedef int wctype_t;
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef int wctrans_t;

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

wctype_t wctype(const char *);

#if !defined(__STDC__) && defined(__EDG__) && defined(_WCHAR_TYPE)
#define __Wint_T  _WCHAR_TYPE
#elif !defined(__STDC__) && defined(__EDG__)
#define __Wint_T  const wint_t
#else
#define __Wint_T  wint_t
#endif
      int iswctype(__Wint_T, wctype_t);
      int iswcntrl(__Wint_T);
      int iswspace(__Wint_T);
      int iswblank(__Wint_T);
      int iswgraph(__Wint_T);
      int iswprint(__Wint_T);
      int iswdigit(__Wint_T);
      int iswxdigit(__Wint_T);
      int iswalnum(__Wint_T);
      int iswalpha(__Wint_T);
      int iswupper(__Wint_T);
      int iswlower(__Wint_T);
      int iswpunct(__Wint_T);
   wint_t towupper(__Wint_T);
   wint_t towlower(__Wint_T);
wctrans_t wctrans(const char *);
   wint_t towctrans(__Wint_T, wctrans_t);

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
}
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_WCTYPE_H */
