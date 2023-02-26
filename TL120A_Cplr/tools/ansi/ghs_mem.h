/*
		Inline all 5 ANSI C mem* functions.

		    ISO C Runtime Library
	Copyright (C) 2002-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#if	!defined(__GHS_MEM_H)
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_MEM_H
#ifndef _STRING_H
# error	Please include <string.h> instead of ghs_mem.h
#endif

/************************************************************************/
/* #define __GHS_EXTERN_INLINE for C/C++ extern inline functions	*/
/************************************************************************/

#if	defined(__cplusplus)
#    define __GHS_EXTERN_INLINE	extern "C" inline	/* ANSI/ISO C++	*/
#elif   defined(__KCC)  || (defined(__GNUC__) && !defined(__GNUC_STDC_INLINE__))
#    define __GHS_EXTERN_INLINE extern   __inline__     /* KAI C/GNU C  */
#elif	defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#    define __GHS_EXTERN_INLINE		   inline	/* ANSI/ISO C99	*/
#    define __GHS_RENAME_MEMFUNCS
#else
#    define __GHS_EXTERN_INLINE		 __inline	/* GHS C	*/
#    define __GHS_RENAME_MEMFUNCS
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

#if	!defined(__GHS_CPU_WHILE0) && 0 /* previously used for ST100	*/
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
#define	__GHS_INCR(__GHS_P)	(__GHS_P-1)		/* preincrement	*/
#define	__GHS_DECR(__GHS_P)	__GHS_P			/* predecrement	*/
#define	__GHS_NEXT(__GHS_P)	__GHS_P++		/* next address	*/
#define	__GHS_PREV(__GHS_P)	__GHS_P--		/* prev address	*/
#define	__GHS_LAST(__GHS_P)	(__GHS_P-1)		/* last address	*/
#else							/*--------------*/
#define	__GHS_INCR(__GHS_P)	__GHS_P			/* preincrement	*/
#define	__GHS_DECR(__GHS_P)	(__GHS_P-1)		/* predecrement	*/
#define	__GHS_NEXT(__GHS_P)	++__GHS_P		/* next address	*/
#define	__GHS_PREV(__GHS_P)	--__GHS_P		/* prev address	*/
#define	__GHS_LAST(__GHS_P)	__GHS_P			/* last address	*/
#endif							/*--------------*/

/************************************************************************/
/* memchr: find a character in an N byte string				*/
/************************************************************************/
#ifdef __GHS_RENAME_MEMFUNCS
#pragma ghs do_not_expand_empty_macro
#define memchr(__GHS_CV, __GHS_M, __GHS_n)	__ghs_memchr(__GHS_CV, __GHS_M, __GHS_n)
#endif
__GHS_EXTERN_INLINE __GHS_CONST
void *	memchr (const void *__GHS_CV, int __GHS_M, size_t __GHS_n)
	{
	     size_t __GHS_N = __GHS_n;
	const char *__GHS_T = __GHS_DECR((char *) __GHS_CV);
        __GHS_M = (char) __GHS_M;
	__GHS_LOOPS(__GHS_N)
		{
		const char __GHS_C = *__GHS_NEXT(__GHS_T);
		if (__GHS_C==__GHS_M) return (void *) __GHS_LAST(__GHS_T);
		}
	__GHS_LOOPE(__GHS_N);
	return (void *) 0; }

/************************************************************************/
/* memcmp: compare two N byte strings					*/
/************************************************************************/
#ifdef __GHS_RENAME_MEMFUNCS
#pragma ghs do_not_expand_empty_macro
#define memcmp(__GHS_CV1, __GHS_CV2, __GHS_n)	__ghs_memcmp(__GHS_CV1, __GHS_CV2, __GHS_n)
#endif
__GHS_EXTERN_INLINE
int	memcmp (const void *__GHS_CV1, const void *__GHS_CV2, size_t __GHS_n) __attribute__((__format__(__memcpy__,1,2,3)));
__GHS_EXTERN_INLINE
int	memcmp (const void *__GHS_CV1, const void *__GHS_CV2, size_t __GHS_n)
	{
	const unsigned char *__GHS_S1 = __GHS_DECR((unsigned char *) __GHS_CV1);
	const unsigned char *__GHS_S2 = __GHS_DECR((unsigned char *) __GHS_CV2);
	size_t __GHS_N  = __GHS_n;
	int __GHS_R  = 0;
	__GHS_LOOPS(__GHS_N)
	   if ((__GHS_R = *__GHS_NEXT(__GHS_S1) - *__GHS_NEXT(__GHS_S2)) != 0) break;
	__GHS_LOOPE(__GHS_N);
	return __GHS_R; 
	}

/************************************************************************/
/* #define __GHS_INRANGE(I,L,H) as ((L<=I) && (I<=H)), efficiently	*/
/************************************************************************/
#if defined(__PTR_BIT) && defined(__LLONG_BIT) && __PTR_BIT <= __LLONG_BIT
#define	__GHS_INRANGE(I,L,H) (((unsigned long long) ((I)-(L)))<=((unsigned long long) ((H)-(L))))
#else
#define	__GHS_INRANGE(I,L,H) (((unsigned long) ((I)-(L)))<=((unsigned long) ((H)-(L))))
#endif

/************************************************************************/
/* memmove: copy an N byte string safely (copy Right to Left if overlap)*/
/************************************************************************/
#ifdef __GHS_RENAME_MEMFUNCS
#pragma ghs do_not_expand_empty_macro
#define memmove(__GHS_R, __GHS_CV, __GHS_n)	__ghs_memmove(__GHS_R, __GHS_CV, __GHS_n)
#endif

#if	!defined(__GHS_CPU_WHILE0)			/* not canonic form */
#undef	__GHS_LOOPS
#define	__GHS_LOOPS(__GHS_N) do {
#endif /* !defined(__GHS_CPU_WHILE0) */

__GHS_EXTERN_INLINE
void *	memmove(void *__GHS_R, const void *__GHS_CV, size_t __GHS_n) __attribute__((__format__(__memcpy__,1,2,3)));
__GHS_EXTERN_INLINE
void *	memmove(void *__GHS_R, const void *__GHS_CV, size_t __GHS_n)
	{
	    size_t __GHS_N = __GHS_n;
	      char*__GHS_T = (char *) __GHS_R;
	const char*__GHS_S = (char *) __GHS_CV;

#if	!defined(__GHS_CPU_WHILE0)			/* not canonic form */
	if (__GHS_N==0) return __GHS_R;			/* only test 0 once */
#endif

	if (__GHS_INRANGE(__GHS_T,__GHS_S,__GHS_S+__GHS_N)) /* unsafe move? */
	   {
	   __GHS_T = __GHS_INCR(__GHS_T+__GHS_N);
	   __GHS_S = __GHS_INCR(__GHS_S+__GHS_N);
	   __GHS_LOOPS(__GHS_N) *__GHS_PREV(__GHS_T) = *__GHS_PREV(__GHS_S);
	   __GHS_LOOPE(__GHS_N);
	   }
      else if (__GHS_INRANGE(__GHS_S, __GHS_T, __GHS_T+__GHS_N)) {
	   __GHS_S = __GHS_DECR(__GHS_S);
	   __GHS_T = __GHS_DECR(__GHS_T);
	   __GHS_LOOPS(__GHS_N) *__GHS_NEXT(__GHS_T) = *__GHS_NEXT(__GHS_S);
	   __GHS_LOOPE(__GHS_N);
	   }
      else {
	  (void)memcpy(__GHS_T, __GHS_S, __GHS_N);
      }
	return __GHS_R; }

#undef	__GHS_INRANGE
#undef	__GHS_EXTERN_INLINE
#undef	__GHS_LOOPS
#undef	__GHS_LOOPE
#undef	__GHS_INCR
#undef	__GHS_DECR
#undef	__GHS_NEXT
#undef	__GHS_PREV
#undef	__GHS_LAST

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* !defined(__GHS_MEM_H)	*/
