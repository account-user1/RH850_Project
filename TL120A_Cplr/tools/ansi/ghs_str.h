/*
		Inline 12 ISO C str* functions.

		    ISO C Runtime Library
	Copyright (C) 2002-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#if !defined(__GHS_STR_H)
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_STR_H
#ifndef _STRING_H
# error	Please include <string.h> instead of ghs_str.h
#endif

/************************************************************************/
/* #define __GHS_EXTERN_INLINE for C/C++ extern inline functions	*/
/************************************************************************/

#if	defined(__cplusplus)
#    define __GHS_EXTERN_INLINE	extern "C" inline	/* ANSI/ISO C++	*/
#elif   defined(__KCC)  || (defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__))
#    define __GHS_EXTERN_INLINE extern   __inline__     /* KAI/GNU C    */
#elif	defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#    define __GHS_EXTERN_INLINE		   inline	/* ANSI/ISO C99	*/
#    define __GHS_RENAME_STRFUNCS
#else
#    define __GHS_EXTERN_INLINE		 __inline	/* GHS C	*/
#    define __GHS_RENAME_STRFUNCS
#endif

/************************************************************************/
/* #define __GHS_CONST							*/
/************************************************************************/

#if	!defined(__GHS_CONST)
#if	 defined(__cplusplus)				/* C++?		*/
#define	__GHS_CONST const				/* yes		*/
#else
#define	__GHS_CONST					/* no		*/
#endif
#endif

/************************************************************************/
/* #define __GHS_CPU_WHILE0						*/
/************************************************************************/

#if	!defined(__GHS_CPU_WHILE0) && 0	/* previously used for ST100	*/
#define	__GHS_CPU_WHILE0/* use: while (N--) { loop_body }		*/
#endif			/* else use:  if(N) { loop_body } while (--N);	*/

/************************************************************************/
/* #define __GHS_LOOPS(N) (Loop Start) and __GHS_LOOPE(N) (Loop End)	*/
/************************************************************************/

#if	defined(__GHS_CPU_WHILE0)			/* canonic form	*/
#	define	__GHS_LOOPS(__GHS_N) while(__GHS_N--) {	/* H/W loop top	*/
#	define	__GHS_LOOPE(__GHS_N) }			/* H/W loop end	*/
#else
#	define	__GHS_LOOPS(__GHS_N) if (__GHS_N) do {	/* 0 trip loop?	*/
#	define	__GHS_LOOPE(__GHS_N) } while(--__GHS_N)	/* count trips	*/
#endif

/************************************************************************/
/*	#define __GHS_CPU_PREINC					*/
/************************************************************************/

#if defined(__ppc)
#   if !defined(__GHS_CPU_PREINC)			/*--------------*/
#   define	__GHS_CPU_PREINC			/* *p++ -> *++p	*/
#   endif						/*--------------*/
#endif

#if	!defined(__GHS_CPU_PREINC)			/*--------------*/
#define	__GHS_DECR(__GHS_P)	__GHS_P			/* predecrement	*/
#define	__GHS_NEXT(__GHS_P)	__GHS_P++		/* next address	*/
#define	__GHS_LAST(__GHS_P)	(__GHS_P-1)		/* last address	*/
#else							/*--------------*/
#define	__GHS_DECR(__GHS_P)	(__GHS_P-1)		/* predecrement	*/
#define	__GHS_NEXT(__GHS_P)	++__GHS_P		/* next address	*/
#define	__GHS_LAST(__GHS_P)	__GHS_P			/* last address	*/
#endif							/*--------------*/

/************************************************************************/
/* strlen: search a 0-terminated string for a 0 byte			*/
/************************************************************************/
#ifdef __GHS_FORCE_USE_STRFUNCS
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strlen(__GHS_CS)	__ghs_strlen(__GHS_CS)
#endif
__GHS_EXTERN_INLINE
size_t	strlen(const char *__GHS_CS)
	{
	const char *__GHS_S = __GHS_DECR(__GHS_CS);
	while (*__GHS_NEXT(__GHS_S)) {}
	return __GHS_LAST(__GHS_S)-__GHS_CS; }
#endif  /* defined(__GHS_FORCE_USE_STRFUNCS) */

/************************************************************************/
/* strchr: search a 0-terminated string for the first byte match	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strchr(__GHS_CS, __GHS_M)	__ghs_strchr(__GHS_CS, __GHS_M)
#endif
__GHS_EXTERN_INLINE __GHS_CONST
char *	strchr(const char *__GHS_CS, int __GHS_M)
	{
	       char __GHS_C = 0;
	const char *__GHS_S = __GHS_DECR(__GHS_CS);
        __GHS_M = (char) __GHS_M;
	do {
	   __GHS_C = *__GHS_NEXT(__GHS_S);
	   if (__GHS_C==__GHS_M)
		return (__GHS_CONST char *) __GHS_LAST(__GHS_S);
	   } while (__GHS_C);
	return 0; }

/************************************************************************/
/* strrchr: search a 0-terminated string for the last byte match	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strrchr(__GHS_CS, __GHS_M)	__ghs_strrchr(__GHS_CS, __GHS_M)
#endif
__GHS_EXTERN_INLINE __GHS_CONST
char *	strrchr(const char *__GHS_CS, int __GHS_M)
	{
	       char __GHS_C = 0;
	const char *__GHS_S = __GHS_DECR(__GHS_CS);
	__GHS_CONST char *__GHS_R = 0;
        __GHS_M = (char) __GHS_M;
	do {
	   __GHS_C = *__GHS_NEXT(__GHS_S);
	   if (__GHS_C==__GHS_M) __GHS_R = (char *) __GHS_LAST(__GHS_S);
	   } while (__GHS_C);
	return __GHS_R; }

/************************************************************************/
/* strcpy: copy a 0-terminated string					*/
/************************************************************************/
#ifdef __GHS_FORCE_USE_STRFUNCS

#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strcpy(__GHS_R, __GHS_CS)	__ghs_strcpy(__GHS_R, __GHS_CS)
#endif

__GHS_EXTERN_INLINE
char *	strcpy (char *__GHS_R, const char *__GHS_CS)
	{
	      char *__GHS_T = __GHS_DECR(__GHS_R);
	const char *__GHS_S = __GHS_DECR(__GHS_CS);
	while ((*__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S)) != 0) {}
	return __GHS_R; }
#endif  /* defined(__GHS_FORCE_USE_STRFUNCS) */

/************************************************************************/
/* strncpy: copy a 0-terminated string for n bytes, fill with 0 bytes	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strncpy(__GHS_R, __GHS_CS, __GHS_n)	__ghs_strncpy(__GHS_R, __GHS_CS, __GHS_n)
#endif
#if	defined(__GHS_CPU_WHILE0)
__GHS_EXTERN_INLINE
char *	strncpy(char *__GHS_R, const char *__GHS_CS, size_t __GHS_n)
	{
	size_t __GHS_N = __GHS_n;

	      char *__GHS_T = __GHS_DECR(__GHS_R);
	const char *__GHS_S = __GHS_DECR(__GHS_CS);

	__GHS_LOOPS(__GHS_N)
		if ((*__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S))==0)
			{ __GHS_T--; break; }
	__GHS_LOOPE(__GHS_N);

	__GHS_N++;		/* -1->0 */

	__GHS_LOOPS(__GHS_N)	*__GHS_NEXT(__GHS_T) = 0;
	__GHS_LOOPE(__GHS_N);

	return __GHS_R; }

#else

__GHS_EXTERN_INLINE
char *	strncpy(char *__GHS_R, const char *__GHS_CS, size_t __GHS_n)
	{
	size_t __GHS_N = __GHS_n;

	if (__GHS_N)
	   {
	         char *__GHS_T = __GHS_DECR(__GHS_R);
	   const char *__GHS_S = __GHS_DECR(__GHS_CS);

	   do	{
		if ((*__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S))==0)
			{ __GHS_T--; break; }
		} while (--__GHS_N);

	   __GHS_LOOPS(__GHS_N) *__GHS_NEXT(__GHS_T) = 0;
	   __GHS_LOOPE(__GHS_N);
	   }

	return __GHS_R; }
#endif

/************************************************************************/
/* strcmp: compare two 0-terminated strings				*/
/************************************************************************/
#ifdef __GHS_FORCE_USE_STRFUNCS
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strcmp(__GHS_CS1, __GHS_CS2)	__ghs_strcmp(__GHS_CS1, __GHS_CS2)
#endif

__GHS_EXTERN_INLINE
int	strcmp(const char *__GHS_CS1, const char *__GHS_CS2)
	{
	     int __GHS_R = 0;

	const char *__GHS_S1 = __GHS_DECR(__GHS_CS1);
	const char *__GHS_S2 = __GHS_DECR(__GHS_CS2);
	unsigned char __GHS_C1 = 0;

	do	{
		unsigned char __GHS_C2 = *__GHS_NEXT(__GHS_S2);
			      __GHS_C1 = *__GHS_NEXT(__GHS_S1);
		__GHS_R  = __GHS_C1 - __GHS_C2;
		if (__GHS_R) break;
		} while (__GHS_C1);

	return __GHS_R; 
	}

#endif  /* defined(__GHS_FORCE_USE_STRFUNCS) */

/************************************************************************/
/* strncmp: compare two 0-terminated strings for n bytes		*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strncmp(__GHS_CS1, __GHS_CS2, __GHS_n)	__ghs_strncmp(__GHS_CS1, __GHS_CS2, __GHS_n)
#endif
__GHS_EXTERN_INLINE
int strncmp(const char *__GHS_CS1, const char *__GHS_CS2, size_t __GHS_n)
	{
	const char *__GHS_S1 = __GHS_DECR(__GHS_CS1);
	const char *__GHS_S2 = __GHS_DECR(__GHS_CS2);
	     size_t __GHS_N  = __GHS_n;
		int __GHS_R  = 0;

	__GHS_LOOPS(__GHS_N)
		const unsigned char __GHS_C1 = *__GHS_NEXT(__GHS_S1);
		const unsigned char __GHS_C2 = *__GHS_NEXT(__GHS_S2);
		__GHS_R  = __GHS_C1 - __GHS_C2;
		if (__GHS_R || (__GHS_C1==0)) break;
	__GHS_LOOPE(__GHS_N);

	return __GHS_R; 
	}

/************************************************************************/
/* strcat: append a 0-terminated string to a 0-terminated string	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strcat(__GHS_R, __GHS_CS)	__ghs_strcat(__GHS_R, __GHS_CS)
#endif
__GHS_EXTERN_INLINE
char *	strcat(char *__GHS_R, const char *__GHS_CS)
	{
	char *__GHS_T = __GHS_DECR(__GHS_R);
	while (*__GHS_NEXT(__GHS_T)) {}

	__GHS_T--;
	{
	const char *__GHS_S = __GHS_DECR(__GHS_CS);
	while ((*__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S)) != 0) {}
	}

	return __GHS_R; }

/************************************************************************/
/* strncat: append one 0-terminated string to another for n bytes	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strncat(__GHS_R, __GHS_CS, __GHS_n)	__ghs_strncat(__GHS_R, __GHS_CS, __GHS_n)
#endif
__GHS_EXTERN_INLINE
char *	strncat(char *__GHS_R, const char *__GHS_CS, size_t __GHS_n)
	{
	size_t __GHS_N = __GHS_n;

	if (__GHS_N)
		{
		char *__GHS_T = __GHS_DECR(__GHS_R);

		while (*__GHS_NEXT(__GHS_T)) {}

		__GHS_T--;
		{
		const char *__GHS_S = __GHS_DECR(__GHS_CS);

		__GHS_LOOPS(__GHS_N)
			if ((*__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S))==0)
				return __GHS_R;
		__GHS_LOOPE(__GHS_N);
		}

		*__GHS_NEXT(__GHS_T) = 0;
		}

	return __GHS_R; }

/************************************************************************/
/* strstr: find first 0-terminated substring in a 0-terminated string	*/
/************************************************************************/
#ifdef __GHS_RENAME_STRFUNCS
#pragma ghs do_not_expand_empty_macro
#define strstr(__GHS_CS1, __GHS_CS2)	__ghs_strstr(__GHS_CS1, __GHS_CS2)
#endif
__GHS_EXTERN_INLINE __GHS_CONST
char *	strstr( const char *__GHS_CS1, const char *__GHS_CS2)
	{	      char  __GHS_C1 = 0;

	const char*__GHS_P  =  __GHS_DECR(__GHS_CS1);		/*->1st CS1 char*/
	const char*__GHS_S2 =  __GHS_DECR(__GHS_CS2);		/*->1st CS2 char*/
	const char __GHS_M  = *__GHS_NEXT(__GHS_S2);		/*  1st CS2 char*/

	if (__GHS_M==0) return (char *) __GHS_CS1;	/* CS2 null?	*/

__GHS_LOOP:
	while ((__GHS_C1=*__GHS_NEXT(__GHS_P))!=__GHS_M)/* find __GHS_M	*/
	   if (__GHS_C1==0) return 0;			/* 0=>no match	*/

	{
	const char *__GHS_S1 = __GHS_P;				/*->2nd CS1 char*/
	      char  __GHS_C2 = __GHS_M;				/* = __GHS_C1	*/
	const char *__GHS_S2_INNER = __GHS_S2;

	while (__GHS_C2)
	   {
	   if (__GHS_C1!=__GHS_C2) goto __GHS_LOOP;
	   __GHS_C1 = *__GHS_NEXT(__GHS_S1);
	   __GHS_C2 = *__GHS_NEXT(__GHS_S2_INNER);
	   }
	}

	return (__GHS_CONST char *) __GHS_LAST(__GHS_P);
	}

#undef	__GHS_EXTERN_INLINE
#undef	__GHS_CONST
#undef	__GHS_LOOPS
#undef	__GHS_LOOPE
#undef	__GHS_DECR
#undef	__GHS_NEXT
#undef	__GHS_LAST

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* !defined(__GHS_STR_H) */
