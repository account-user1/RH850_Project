/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

	This program is the property of Green Hills Software, Inc. Its contents
	are proprietary information and no part of it is to be disclosed to
	anyone except employees of Green Hills Software, Inc., or as agreed
	in writing signed by the President of Green Hills Software, Inc.
*/

/*
    ANSI C requires these functions, and allows them to also be macros.
    ANSI C++ requires them to be only functions, but allows them to be inline.

    This implementation works as follows:
	
    1.	In C, all functions are prototyped unconditionally.
	In C++, all functions are prototyped unless __CALL_CTYPE_FUNCTIONS__

    2.	If defined __CALL_CTYPE_FUNCTIONS__, only prototypes are provided for
	the functions and the rest of the file is skipped.  No macros 
	will be defined and no inline functions will be declared.

    3.	Inline versions of all functions are declared with hidden names.
	(In C, this depends on the Green Hills C __inline feature.)

    4.	In C++, inline versions of the functions are declared which invoke
	the inline versions with hidden names.  If the address of isspace is
	taken, a static copy of the function will be created.

    5.	In C, macros are define'd which invoke the inline versions with hidden
	names.  To take the address of isspace, first use #undef isspace to 
	remove the macro, then take the address of isspace.

    6.	In all cases, these functions are safe:
	a.  Arguments with side-effects are always evaluated once.
	b.  Out of range arguments always return false.

    7.	With --saferc=1 macros do NOT invoke inline functions because that is an
	extension.  Rather, macros are expanded into expressions if they are safe
	and function calls if the expression is not safe.
*/
	 
#ifndef _GHS_CTYPE_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_CTYPE_H

#ifdef __cplusplus
extern "C" {
# if !defined(__inline)
#  define __need_to_undef_inline
#  define __inline inline
# endif	/* __inline */
#elif defined(__GNUC__)
# if !defined(__inline)
#  define __need_to_undef_inline
#  define __inline static __inline__
# endif /* __inline */
#elif defined(__SC3__)
# if !defined(__inline)
#  define __need_to_undef_inline
#  define __inline inline
# endif /* __inline */
#endif /* __cplusplus, __GNUC__ */

#if defined(__STDC__) || defined(__PROTOTYPES__) || defined(__EDG__)
/* ANSI C, C++ style function arguments */
# define __A0	int
# define __A1	int __Ch__
#else
/* K&R style function arguments */
# define __A0
# define __A1	__Ch__
#endif	/* __STDC__ */

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

/* Prototypes are required in ANSI always.  
   Prototypes are needed in C++ when inline versions are not used. */
#if defined(__CALL_CTYPE_FUNCTIONS__) || (!defined(__cplusplus) && !(defined(__inline) && defined(__GNUC__))) 
int isalnum (__A0);
int isalpha (__A0);
int isblank (__A0);
int iscntrl (__A0);
int isdigit (__A0);
int isgraph (__A0);
int islower (__A0);
int isprint (__A0);
int ispunct (__A0);
int isspace (__A0);
int isupper (__A0);
int isxdigit(__A0);
int tolower (__A0);
int toupper (__A0);
#if (!defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) /* deprecated */
int isascii (__A0);
int toascii (__A0);
#endif	/* non-ANSI C functions    */
#endif /* defined(__cplusplus) || defined(__CALL_CTYPE_FUNCTIONS__) */

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifndef __CALL_CTYPE_FUNCTIONS__

#define	__INRANGE(c,l,h) (((unsigned) ((c) - (l))) <= ((unsigned) ((h)-(l))))

#if defined(__mips)
# define	_OR_	|		/*  SLTIU is shorter than BLT/NOP */
#else
# define	_OR_	||
#endif	/* __mips */

#if defined(__ONLY_STANDARD_KEYWORDS_IN_C) && !defined(__cplusplus) && \
	defined(__STDC__) && (__STDC__) && \
	(!defined(__STDC_VERSION__) || (__STDC_VERSION__ < 199901L))
/* anything that requires evaluation of __Ch__ more than once is a
   function call. Only simple cases are generated inline in C89. */
#define __ISALPHA(__Ch__) (__INRANGE((__Ch__|0x20),'a','z'))
#define __ISALNUM(__Ch__) ((isalnum)(__Ch__))
#define __ISBLANK(__Ch__) ((isblank)(__Ch__))
#define __ISCNTRL(__Ch__) ((iscntrl)(__Ch__))
#define __ISDIGIT(__Ch__) (__INRANGE(__Ch__,'0','9'))
#define __ISGRAPH(__Ch__) (__INRANGE(__Ch__,0x21,0x7e))
#define __ISLOWER(__Ch__) (__INRANGE(__Ch__,'a','z'))
#define __ISPRINT(__Ch__) (__INRANGE(__Ch__,0x20,0x7e))
#define __ISPUNCT(__Ch__) ((ispunct)(__Ch__))
#define __ISSPACE(__Ch__) ((isspace)(__Ch__))
#define __ISUPPER(__Ch__) (__INRANGE(__Ch__,'A','Z'))
#define __ISXDIGIT(__Ch__)((isxdigit)(__Ch__))
#define __TOLOWER(__Ch__) (__Ch__ + (__INRANGE(__Ch__,'A','Z')<<5))
#define __TOUPPER(__Ch__) (__Ch__ - (__INRANGE(__Ch__,'a','z')<<5))
#else
__inline int __ISALPHA(__A1) {
  return __INRANGE((__Ch__|0x20),'a','z');
}
__inline int __ISALNUM(__A1) {
  return __INRANGE((__Ch__|0x20),'a','z') _OR_ __INRANGE(__Ch__,'0','9');
}
__inline int __ISBLANK(__A1) {
  return (__Ch__=='\t') _OR_ (__Ch__==' ');
}
__inline int __ISCNTRL(__A1) {
  return (((unsigned) __Ch__)<=0x1f) _OR_ (__Ch__==0x7f);
}
__inline int __ISDIGIT(__A1) {
  return __INRANGE(__Ch__,'0','9');
}
__inline int __ISGRAPH(__A1) {
  return __INRANGE(__Ch__,0x21,0x7e);
}
__inline int __ISLOWER(__A1) {
  return __INRANGE(__Ch__,'a','z');
}
__inline int __ISPRINT(__A1) {
  return __INRANGE(__Ch__,0x20,0x7e);
}
__inline int __ISPUNCT(__A1) {
  return __INRANGE(__Ch__,'!','/') _OR_ __INRANGE(__Ch__,':','@') _OR_ 
	 __INRANGE(__Ch__,'[','`') _OR_ __INRANGE(__Ch__,'{','~');
}
__inline int __ISSPACE(__A1) {
  return (__Ch__==0x20) _OR_ __INRANGE(__Ch__,'\t','\r');
}
__inline int __ISUPPER(__A1) {
  return __INRANGE(__Ch__,'A','Z');
}
__inline int __ISXDIGIT(__A1) {
  return __INRANGE(__Ch__,'0','9') _OR_ __INRANGE((__Ch__|0x20),'a','f');
}
__inline int __TOLOWER(__A1) {
  return __Ch__ + (__INRANGE(__Ch__,'A','Z')<<5);
/*return __INRANGE(__Ch__,'A','Z') ? 'a'+(__Ch__-'A') : __Ch__;*/
}
__inline int __TOUPPER(__A1) {
  return __Ch__ - (__INRANGE(__Ch__,'a','z')<<5);
/*return __INRANGE(__Ch__,'a','z') ? 'A'+(__Ch__-'a') : __Ch__;*/
}

#if (!defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) /* deprecated */
__inline int __ISASCII(__A1)  {
  return ((unsigned) __Ch__)<=0x7f;
}
__inline int __TOASCII(__A1) {
  return __Ch__&0x7f;
}
#endif	/* non-ANSI C functions    */

#if defined(_STD_BEGIN) && defined(__cplusplus) && !defined(_Isspace)/* used by our C++ libs */
inline int _Isspace (int __Ch__) { return	__ISSPACE(__Ch__); }
#endif

#undef __INRANGE

#endif	/* defined(__ONLY_STANDARD_KEYWORDS_IN_C) */

#undef __A0
#undef __A1

#if defined(__cplusplus) || defined(__inline)
__inline int isalnum (int __Ch__) { return	__ISALNUM(__Ch__); }
__inline int isalpha (int __Ch__) { return	__ISALPHA(__Ch__); }
__inline int isblank (int __Ch__) { return	__ISBLANK(__Ch__); }
__inline int iscntrl (int __Ch__) { return	__ISCNTRL(__Ch__); }
__inline int isdigit (int __Ch__) { return	__ISDIGIT(__Ch__); }
__inline int isgraph (int __Ch__) { return	__ISGRAPH(__Ch__); }
__inline int islower (int __Ch__) { return	__ISLOWER(__Ch__); }
__inline int isprint (int __Ch__) { return	__ISPRINT(__Ch__); }
__inline int ispunct (int __Ch__) { return	__ISPUNCT(__Ch__); }
__inline int isspace (int __Ch__) { return	__ISSPACE(__Ch__); }
__inline int isupper (int __Ch__) { return	__ISUPPER(__Ch__); }
__inline int isxdigit(int __Ch__) { return	__ISXDIGIT(__Ch__); }
__inline int tolower (int __Ch__) { return	__TOLOWER(__Ch__); }
__inline int toupper (int __Ch__) { return	__TOUPPER(__Ch__); }
#if (!defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) /* deprecated */
__inline int isascii (int __Ch__) { return	__ISASCII(__Ch__); }
__inline int toascii (int __Ch__) { return	__TOASCII(__Ch__); }
#endif	/* non-ANSI C functions    */

#else	/* __cplusplus */

# define isalnum(c) 			__ISALNUM(c)
# define isalpha(c) 			__ISALPHA(c)
# define isblank(c) 			__ISBLANK(c)
# define iscntrl(c)		 	__ISCNTRL(c)
# define isdigit(c)		 	__ISDIGIT(c)
# define isgraph(c) 			__ISGRAPH(c)
# define islower(c) 			__ISLOWER(c)
# define isprint(c) 			__ISPRINT(c)
# define ispunct(c) 			__ISPUNCT(c)
# define isspace(c) 			__ISSPACE(c)
# define isupper(c) 			__ISUPPER(c)
# define isxdigit(c) 			__ISXDIGIT(c)
# define tolower(c) 			__TOLOWER(c)
# define toupper(c) 			__TOUPPER(c)
# if (!defined(__STDC__) || __STDC__==0) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) /* deprecated */
#  define isascii(c) 			__ISASCII(c)
#  define toascii(c) 			__TOASCII(c)
# endif	/* non-ANSI C functions    */
#endif	/* __cplusplus */

#endif	/* __CALL_CTYPE_FUNCTIONS__ */

#ifdef __need_to_undef_inline
#undef __inline
#undef __need_to_undef_inline
#endif

#if defined(__cplusplus)
} /* extern "C" */
#endif	/* __cplusplus */

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_CTYPE_H */
