/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_trnc.c: NON-ANSI truncate() facility. Provided for FORTRAN support. */

#include "indos.h"
#include "ind_io.h"

#if !defined(ANYBSD) && !defined(ANYSYSV4) 

#if defined(__VXWORKS)

#include <stdio.h>
#include <string.h>

#else

#ifndef L_tmpnam
#define L_tmpnam 32
#endif


#ifdef TMPNAMPREFIX
#   define L_TMPNAMEPREFIX 0
#elif defined(ANYUNIX)||defined(UNIXSYSCALLS)||defined(vms)||defined(__vms)
#   define TMPNAMPREFIX "gh_"
#   define L_TMPNAMEPREFIX 3
#else
#   define TMPNAMPREFIX "T"
#   define L_TMPNAMEPREFIX 1
#endif

/* access is better everywhere */
#define USE_ACCESS

#ifndef USE_ACESS
int stat(char *, struct stat *);
#endif

static char *tmpnam(char *s) {
/******************************************************************************/
/*  This static tmpnam function is only needed for truncate, which is	      */
/*  only needed if the Green Hills Fortran Library is being used.	      */
/*  There is an exact copy of this function in the Green Hills C library.     */
/******************************************************************************/
#pragma ghs nowarning 1908
    static const char hexmap[32]="0123456789abcdefghijklmnopqrstuv";
#pragma ghs endnowarning
    int cnt = 0;
    int chan, u=17;
    char *p, *q;
#ifdef TMPNAMPREFIX
/*    if (sizeof(space) < (sizeof(TMPNAMPREFIX) + 8)) */
/*	return NULL; */
#elif defined(ANYUNIX)||defined(UNIXSYSCALLS)||defined(vms)||defined(__vms)
#else
#endif
#if L_tmpnam < L_TMPNAMEPREFIX + 8
#   error L_tmpnam too small
#endif
#if defined(ANYUNIX) || defined(UNIXSYSCALLS) || defined(MSW)
    u = getpid();
#endif
/*    if ( s==NULL )	*/
/*	s=space;	*/
    for (p = s, q = TMPNAMPREFIX; *q; ) 
	*p++ = *q++;
#if defined(ANYUNIX) || defined(UNIXSYSCALLS) || defined(MSW)
    *p++ = hexmap[(u>>10) & 31];
    *p++ = hexmap[(u>>5) & 31];
    *p++ = hexmap[u & 31];
#endif
#ifndef USE_ACCESS
    olderrno = __gh_get_errno();	/* access does not mess with errno */
#endif
    do {
	char *qq = p;
	u = (++cnt & 0x0fffff);
	do {
	    *qq++ = hexmap[u & 31];
	    u >>= 5;
	} while (u);
	*qq = '\0';
#ifdef USE_ACESS
	chan = access(s, F_OK);
#else
	{
	struct stat st;
	chan = stat(s, &st);
	}
#endif
    } while ( chan!=-1 );
#ifndef USE_ACCESS
    __gh_set_errno(olderrno);
#endif
return(s);
}

#endif /* defined(__VXWORKS) */

/******************************************************************************/
/*  The Green Hills C Library does not use the truncate function, it is only  */
/*  needed if the Green Hills Fortran Library is being used.		      */
/*									      */
/*  int truncate(const char *path, int length);				      */
/*									      */
/*  If the file named "path" is longer than "length" bytes it is truncated    */
/*  to "length" bytes.							      */
/*									      */
/*  Return 0 if the named file is truncated or was previously less than	      */
/*  length bytes.  Return -1 if the file cannot be truncated, and set	      */
/*  errno appropriately.						      */
/*									      */
/*  REENTRANT								      */
/******************************************************************************/

#define _0777 0x1ff
#if defined(__VXWORKS)
#define __CREAT_ARG O_WRONLY
#else
#define __CREAT_ARG _0777
#endif

#define LBUFSIZ	1024

int truncate(const char *path, long length)
{
/*
   The following implementation copies the first "length" bytes of the file
   named "path" to a temporary file, then it creates a new file with
   the name "path" and copies the temporary file back into it.  At the end
   the temporary file is deleted.  The prefered implementation is to shorten
   the file without copying, but many operating systems lack such an operation.
*/
    char buf[LBUFSIZ];
    char namebuff[L_tmpnam];
    int inf, of;
    int count = 0;
    char *tmpname = tmpnam(namebuff);

/* handle the two trivial cases efficiently: 
	length is 0 and length is greater than or equal to actual size of file
*/
    if (length == 0) {
	if ((of = creat(path, __CREAT_ARG)) == -1)
	    return -1;
	close(of);
	return 0;
    }

#if !defined(CROSSUNIX) && \
       (defined(ANYUNIX)||defined(UNIXSYSCALLS)||defined(MSW)||defined(__VXWORKS))
    {
    struct stat stat1;
    if (stat((char *)path, &stat1) < 0)
	return -1;

    if (stat1.st_size != (unsigned long)-1 && length >= stat1.st_size)
	return 0;
    }
#endif

    if ((inf = open(path, 0, 0)) == -1 || (of = creat(tmpname, __CREAT_ARG)) == -1) 
    {
	if (inf != -1)
	    close(inf);
	return(-1);
    }
    while (length > 0 && (count = read(inf, buf, LBUFSIZ)) > 0) {
	if (count > length)
	    count = length;
	if (count > write(of, buf, count)) {
	    count = -1;
	    break;
	}
	length -= count;
    }
    close(inf);
    close(of);

    if (length == 0 && count >= 0) {

	if (rename(tmpname, path) == 0) {
	    return(0);
	}
#if defined(vms) || defined(__vms)
	delete(path);
#elif defined (__VXWORKS)
	{
	    char *tmp_path = malloc (strlen(path) + 1);
	    if (tmp_path == NULL)
		return -1;
	    strcpy (tmp_path, path);
	    unlink(tmp_path);
	    free (tmp_path);
	}	    
#else
	unlink(path);
#endif
	if (rename(tmpname, path) == 0) {
	    return(0);
	}

	if ((inf = open(tmpname, 0, 0)) == -1 || (of = creat(path, _0777)) == -1)
	{
	    if (inf != -1)
		close(inf);
	    return(-1);
	}
	while ((count = read(inf, buf, LBUFSIZ)) > 0)
	    if (count > write(of, buf, count)) {
		count = -1;
		break;
	    }
	close(inf);
	close(of);
    }
#if defined(vms) || defined(__vms)
    delete(tmpname);
#else
    unlink(tmpname);
#endif
    return(count);
}

#else

int _M_empty_file_illegal;

#endif	/* ! ANYBSD */
