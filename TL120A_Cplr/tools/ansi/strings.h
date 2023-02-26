/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STRINGS_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STRINGS_H

#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

int bcmp	(const void *__M1, const void *__M2, size_t __LEN);
void bcopy	(const void *__SRC, void *__DST, size_t __LEN);
void bzero	(void *__PTR, size_t __LEN);
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
char*index  	(const char *__STR, int __LEN);
char*rindex 	(const char *__STR, int __LEN);
int  ffs    	(int __VAL);
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _STRINGS_H */
