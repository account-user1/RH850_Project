/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.

    Subtle issues handled in this file:
    (1) C++ defines 5 functions differently than ISO/ANSI C.
        In C++, these functions all return pointer to const,
	which seems more correct, but is still different.
	Our 'solution' is to prototype the functions according to
	the standard, and provide inline functions which lack the
	const qualifier.  The inliner declaration must appear after
	the normal declaration for this to work.
    (2) Various old functions are prototyped here under #if.
	These must be hidden for strict ANSI C mode or POSIX.
    (3) Various new Gnu functions are also prototyped here.
*/

#ifndef _STRING_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STRING_H
#include "ghs_null.h"		/* defines NULL and size_t */

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif
#if !defined(__ATTRIBUTES) && !defined(__attribute__)
#define	__attribute__(x)	
#define	__undefine_attribute_at_end__
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#ifdef __cplusplus
const void *memchr (const void *__MEM, int __CH, size_t __n);
const char *strchr (const char *__STR, int __CH);
const char *strpbrk(const char *__STR, const char *__BRK);
const char *strrchr(const char *__STR, int __CH);
const char *strstr (const char *__STR, const char *__PAT);
extern "C++" {
inline void *memchr(void *_S, int _C, size_t _N)
	{return ((void *)memchr((const void *)_S, _C, _N)); }
inline char *strchr(char *_S, int _C)
	{return ((char *)strchr((const char *)_S, _C)); }
inline char *strpbrk(char *_S, const char *_P)
	{return ((char *)strpbrk((const char *)_S, _P)); }
inline char *strrchr(char *_S, int _C)
	{return ((char *)strrchr((const char *)_S, _C)); }
inline char *strstr(char *_S, const char *_P)
	{return ((char *)strstr((const char *)_S, _P)); }
}
#else
char *strpbrk(const char *__STR, const char *__BRK) __attribute__((__pure__));
char *strchr (const char *__STR, int __CH) __attribute__((__pure__));
char *strrchr(const char *__STR, int __CH) __attribute__((__pure__));
char *strstr (const char *__STR, const char *__PAT) __attribute__((__pure__));
void *memchr (const void *__MEM, int __CH, size_t __LEN) __attribute__((__pure__));
#endif

void *memcpy  (void *__Restrict __DST, const void *__Restrict __SRC, size_t __LEN) __attribute__((__format__(__memcpy__,1,2,3)));
void *memset  (void *, int, size_t __LEN) __attribute__((__format__(__memset__,1,3)));
void *memmove (void * _DST, const void *__SRC, size_t __LEN) __attribute__((__format__(__memcpy__,1,2,3)));

char *strcat  (char *__Restrict __DST, const char * __Restrict __SRC);
char *strncat (char *__Restrict __DST, const char * __Restrict __SRC, size_t __LEN);
char *strcpy  (char *__Restrict __DST, const char * __Restrict __SRC);
char *strncpy (char *__Restrict __DST, const char * __Restrict __SRC, size_t __LEN);

int    memcmp (const void *__M1, const void *__M2, size_t __LEN) __attribute__((__pure__,__format__(__memcpy__,1,2,3)));
int    strcmp (const char *__ST1, const char *__ST2) __attribute__((__pure__));
int    strncmp(const char *__ST1, const char *__ST2, size_t __LEN) __attribute__((__pure__));
size_t strlen (const char *__STR) __attribute__((__pure__));
char *strtok  (char *__Restrict __STR, const char *__Restrict __TOK);
int    strcoll(const char *__ST1, const char *__ST2) __attribute__((__pure__));

size_t strcspn(const char *__STR, const char *__SET) __attribute__((__pure__));
size_t strspn (const char *__STR, const char *__SET) __attribute__((__pure__));
size_t strxfrm(char *__Restrict __STR, const char *__Restrict __SET, size_t __LEN);

char *strerror(int);

#if defined(__INTEGRITY) && !defined(INT_178B_FULL)
# include <INTEGRITY_version.h>
# if !defined(__INTEGRITY_MAJOR_VERSION) || (__INTEGRITY_MAJOR_VERSION <= 5)
#  define __SKIP_STRDUP   1
#  define __SKIP_STRNLEN   1
# endif
#endif

#if !defined(__STRICT_ANSI__) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
/* in POSIX.1-2001, but not in ISO C99 */
char *strtok_r (char *__Restrict __STR, const char *__Restrict __TOK, char ** __Restrict);
# if !defined(__SKIP_STRDUP)
char *strdup   (const char *);	
# endif
#endif	/* POSIX.1-2001, but not ISO C99 */
#if !defined(__STRICT_ANSI__) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
/* from old BSD Unix which were not made part of ANSI C, C99, or POSIX */
void bcopy     (const void *__Restrict __DST, void *__Restrict __SRC, size_t __LEN);
void bzero     (void *__MEM, size_t __LEN);
int  bcmp      (const void *__MEM, const void *, size_t __LEN) __attribute__((__pure__));
int  ffs       (int) __attribute__((__pure__));
/* Added in GHS v5.0 from BSD Unix or Gnu */
int  strcasecmp (const char *__STR1, const char *__STR2) __attribute__((__pure__));
int  strncasecmp(const char *__STR1, const char *__STR2, size_t __LEN) __attribute__((__pure__));
void *memrchr   (const void *__MEM, int, size_t __LEN) __attribute__((__pure__));
/* Added in GHS v6.0 from BSD Unix or Gnu */
char  *strndup  (const char *__STR, size_t __LEN);
# if !defined(__SKIP_STRNLEN)
size_t strnlen  (const char *__STR, size_t __LEN) __attribute__((__pure__));
# endif
void *mempcpy   (void *__Restrict __M1, const void *__Restrict __M2, size_t __LEN);
#endif	/* Not POSIX or ISO C99 */
#if defined(__BSD_INDEX_PROTOTYPE) || defined(_XOPEN_SOURCE_EXTENDED) || \
   (defined(__INTEGRITY) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE))
/* From old BSD Unix which is part of X/Open XPG4.2 and Single Unix Specification, version 3 */
/* Even so it is in the legacy group of SUS and may be removed in a future release */
char*index     (const char *__STR, int __LEN) __attribute__((__pure__));
char*rindex    (const char *__STR, int __LEN) __attribute__((__pure__));
#endif

#if defined(__INTEGRITY)
#undef __SKIP_STRDUP
#undef __SKIP_STRNLEN 
#endif

#if defined(__linux__) && !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
char*strerror_r (int __ERR, char *__BUF, size_t __LEN);
char *strsep    (char *__Restrict *__Restrict __STP, const char *__Restrict __SET);

void __bzero    (void *__MEM, size_t __LEN);
char *(basename)(const char *__STR);
void *memccpy   (void *__DST, const void *__SRC, int __CH, size_t __LEN);
char *strfry    (char *);
void *memfrob   (void *__MEM, size_t __LEN);
void *rawmemchr (const void *__MEM, int __CH) __attribute__((__pure__));
char *strchrnul (const char *, int) __attribute__((__pure__));
char *strcasestr(const char *, const char *) __attribute__((__pure__));
void *memmem    (const void *__M1, size_t __LN1 , const void *__M2, size_t __LN2) __attribute__((__pure__));
void *__mempcpy (void *__Restrict __M1, const void *__Restrict __M2, size_t __LEN);
int strverscmp  (const char *__STR1, const char *__STR2) __attribute__((__pure__));
char *strsignal (int __SIG);
char *__stpcpy  (char *__Restrict __DST, const char *__Restrict __SRC);
char *stpcpy    (char *__Restrict __DST, const char *__Restrict __SRC);
char *__stpncpy (char *__Restrict __DST, const char *__Restrict __SRC, size_t __LEN);
char *stpncpy   (char *__Restrict __DST, const char *__Restrict __SRC, size_t __LEN);
/* end of extensions */
#endif	/* __linux__ */

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#if defined(__STDC__) && !defined(__ONLY_STANDARD_KEYWORDS_IN_C) \
 && defined(__GHS_Inline_Memory_Functions)
#include "ghs_mem.h"
#endif	/* __STDC__  && !__ONLY_STANDARD_KEYWORDS_IN_C */

#if defined(__STDC__) && !defined(__ONLY_STANDARD_KEYWORDS_IN_C) \
 && defined(__GHS_Inline_String_Functions)
#include "ghs_str.h"
#endif	/* __STDC__ && !__ONLY_STANDARD_KEYWORDS_IN_C */

#undef __Restrict
#if defined(__undefine_attribute_at_end__)
#undef	__attribute__	
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif      /* _STRING_H */
