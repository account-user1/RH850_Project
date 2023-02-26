/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.

 *
 *  This header file is #included by all of the files in the Low-Level
 *  System Library (libsys.a).
 *
 *  The various versions of Unix differ slightly in the content of this file
 *  but they differ greatly in where the information is kept in the local
 *  include files.  In addition, this header file must work correctly with
 *  and without the Green Hills Ansi C header files, which sometimes conflict
 *  with local include files.  Of course, if this is not native Unix, we may
 *  not have any local include files.
 *
 *  Therefore, we support 3 approaches.  In the first, only native header files
 *  are used.  The Green Hills Ansi C header files are not used at all.  This
 *  mode is appropriate for Unix System V.4 and any other Unix like environment
 *  which has been updated to Ansi C.
 *
 *  In the second, no native header files are used.  The Green Hills Ansi C
 *  header files are used for generic information and system specific
 *  information is provided directly in this file.
 *
 *  In the third, and most difficult situation, both native Unix and Green Hills
 *  Ansi C header files are used.  This invariably results in conflicts.
 *
*/

#ifdef __cplusplus		/* If C++ compiler, use C linkage */
extern "C" {
#endif

#include "inddef.h"
#include "inderrno.h"
#include "indlibvariant.h"

/* Case 1.  The full set of headers used with -ansi really work, use them.    */
#if defined(LIBCISANSI)||defined(SUNOS)||(defined(ANYSYSV)&&(defined(__m88k)||\
					  defined(__i386_)||defined(__m68k)))
#  ifdef __VXWORKS
#    include <vxWorks.h>
#    undef BSD
#    undef MSW
#    define _EXTENSION_POSIX_REENTRANT 1
#  endif
#  include <sys/types.h>
#  include <sys/stat.h>
#if defined(SUNOS)
#  include <sys/time.h>
#endif
#  include <time.h>
#  include <stdlib.h>
#  include <stddef.h>
#  include <unistd.h>		/* POSIX: close(),lseek(),read(),write() */
#  include <fcntl.h>		/* POSIX: creat(), open() */
#if !defined(CHORUS) && !defined (__OSE)
#  include <sys/times.h>	/* added for fortimes.c */
#endif

/* Case 2.  Only use default headers provided by GHS (/usr/include/ansi) */
#elif defined(CROSSUNIX)||!defined(ANYUNIX)
#    include <stdlib.h>
#    include <time.h>
#    include <stdint.h>
#if defined(ANYBSD)
typedef long unsigned ino_t;	/* BSD and System V.4 */
#else
typedef unsigned short ino_t;	/* System V.3 */
#endif
#if defined(ANYSYSV4)
typedef long dev_t;
#define __misc_t	long
#else
typedef short dev_t;
#define __misc_t	short
#endif

#if defined(__INTEGRITY)
/* off_t defined in <sys/types.h> */
#elif defined(__INTEGRITY_SHARED_LIBS)
#  if defined(__LLONG_BIT) && (__LLONG_BIT == 64)
   typedef long long    off_t;
#  else
#    error "off_t should be a signed 64bit type"
#  endif
#else
typedef long off_t;
#endif

/*#include <sys/stat.h> */
struct stat {
    dev_t	st_dev;
#ifdef SOLARIS20
    long	st_pad[3];
#endif
    ino_t	st_ino;
    __misc_t    st_mode;
    __misc_t	dummy1[4];	/* mode, nlink, uid, gid, rdev */
#ifdef SOLARIS20
    long	st_pad2[2];
#endif
    off_t	st_size;
#ifdef SOLARIS20
    long	dummy[19];
#else
    long	dummy[16];
#endif
};

/*#include <sys/time.h>*/
#if !defined(__INTEGRITY)
/* UNIX Structure representing time since epoch*/
struct timeval {
    long tv_sec;		/* seconds */
    long tv_usec;		/* fractional microseconds */
};
#endif

/*#include <sys/times.h>*/
struct tms {
    clock_t tms_utime;		/* user time */
    clock_t tms_stime;		/* system time */
    clock_t tms_cutime;		/* user time of all children */
    clock_t tms_cstime;		/* system time of all children */
};

/*#include <fcntl.h>*/
/* flags for open */
#define O_RDONLY        0	/* open for reading only */
#define O_WRONLY        1	/* open for writing only */
#define O_RDWR          2	/* open for reading or writing */
#define O_APPEND        8 	/* always write at the end of the file	*/
/* Use non-zero values for CROSSUNIX	*/
/* These values are consistent with numerous SysV and BSD variants, but */
/* are not implemented in the default stand-alone libind.a routines.	*/
#if defined(__INTEGRITY_SHARED_LIBS) || (defined(ANYBSD) && !defined(ANYSYSV))
/* Right for SUNOSv4, Tek, DecStation, ultrix, alpha, NeXT */
#define O_CREAT         0x200	/* create the file if it doesn't exist	*/
#define O_TRUNC         0x400	/* empty the file if in O_WRONLY or O_RDWR */
#define O_EXCL          0x800	/* fail if O_CREAT and file exists	*/
#else
/* Right for solaris2, m68030, m88000, AUX, SCO, MIPS, avion, sgi  */
#define O_CREAT         0x100	/* create the file if it doesn't exist	*/
#define O_TRUNC         0x200	/* empty the file if in O_WRONLY or O_RDWR */
#define O_EXCL          0x400	/* fail if O_CREAT and file exists	*/
#endif
/* In ind_stat.c we mention R_OK/W_OK/X_OK/F_OK but we don't provide any
 * courtesy definitions of it. However cctempnm.c expects W_OK to have
 * been defined; before 1994 it included unistd.h which on sun4 defines W_OK,
 * but no longer does. In either case MSW is out of luck unless we make
 * sure cctempnm.c will compile. Check for R_OK and if it has not been set
 * by anyone else, define all four symbols:
 */
#ifndef R_OK
#define R_OK 4
#define W_OK 2
#define X_OK 1
#define F_OK 0
#endif

/* Prototypes for ind_io.c functions */
int close(int);
int creat(const char *, int);
int open(const char *, int, ...);
off_t lseek(int, off_t, int);
long read(int, void *, long);
long write(int, const void *, long);
/* ind_sgnl.c wants to call _exit(); */
void _Exit(int);
/* ind_trnc.c wants to call access(), unlink(), and rename() */
/* unlink() is a bit sticky; we would like to use remove() instead, BUT that */
/* is in libansi.a which is being linked in before us (libind.a/libsys.a)... */
int access(const char *, int);
int unlink(const char *);
int rename(const char *, const char *);
/* ccclock.c calls times() */
int times(struct tms *);
/* ccexecl.c calls execve(). */
int execve(const char *, char * const *, char **);

#include <stddef.h>
void *sbrk(size_t);

/* ccmalloc_heap.c calls sbrk() */
/* ccmktime.c calls __gh_timezone, and ind_time.c does internally */
extern int __gh_timezone(void);

#include "indsyscl.h"

/* If a target has an implementation of __ghs_syscall64, use it.  This allows
 * 64-bit return values for calls like time(), read() and write() if the
 * syscall handler supports it.  If this implementation is not provided,
 * fall back on the 32-bit version. */
#if (defined(__PowerPC) || defined(__mips) || defined(__ARM) || \
     defined(__i386) || defined(__m68k)) && \
    ((defined(__LONG_BIT) && __LONG_BIT == 64) || \
     (defined(__LLONG_BIT) && __LLONG_BIT == 64))
/* All of these targets have 32-bit ints, which simplifies the declarations
 * below considerably.  This #error ensures that no run-time surprises happen
 * when this file is built in new configurations. */
#if __INT_BIT != 32
#error "__ghs_syscall prototype requires a 32-bit int"
#endif
#if (__LONG_BIT==64)
extern long __ghs_syscall64(int, ...);
#else
extern long long __ghs_syscall64(int, ...);
#endif
#else
/* 64-bit syscall implementation not available, fall back on the 32-bit
   implementation. */
#define __ghs_syscall64 __ghs_syscall
#endif

/* Avoid using stdarg on SH - assembly coding of __ghs_syscall is
 * strange/tedious and not worth the trouble.
 */
#if defined(__SH7000) || defined(__NDR) || defined(_ARC)
#pragma diag_suppress 1728
extern int __ghs_syscall();	
#else
#if (__INT_BIT==32)
extern int __ghs_syscall(int, ...);
#elif (__LONG_BIT==32)
extern long __ghs_syscall(long, ...);
#else
#error "A 32-bit data type is necessary for the prototype of __ghs_syscall"
#endif
#endif

/* Tektronics returns ETOOLONG if a file name is longer than its 256
 * character limit. This value is mapped to ENOENT.
 */
#if defined(TEKEM)
#define ETOOLONG   63
#endif
#if !defined(__windows)
extern void __ghs_set_stack_chk_guard(void);
#pragma weak __ghs_set_stack_chk_guard
uintptr_t *__ghs_get_stack_chk_guard_address(void);
#endif

/* Case 3.  Use conflicting headers from /usr/include AND /usr/include/ansi   */
/*	    This case is being phased out.  see case 1 for a better solution */
#else	/* ANYUNIX */
/*
 * The typedefs in GHS (Ansi) headers and in Unix headers frequently
 * conflict.  Suppress specific typedefs which we will never use
 * when #including GHS headers.  Unfortunately, the header files
 * themselves need these types, so #define size_t, etc. for the sake of
 * the header files, and #undef them after.
 */
#    define _SIZE_T	
#    define size_t		unsigned int
#    define _PTRDIFF_T
#    define ptrdiff_t	int
#    define _WCHAR_T
#    define wchar_t		int
/* this was only here for FOPEN_MAX, which is only used in indOS.h.  We
   can't #include stdio.h here, because GHS libraries are used with different
   implementation of the stdio library.  Moved the whole FOPEN_MAX logic back
   into indOS.c
    %include "indstdio.h"
*/
#    include <stdlib.h>
#    undef _SIZE_T
#    undef size_t
#    undef _PTRDIFF_T
#    undef ptrdiff_t
#    undef _WCHAR_T
#    undef wchar_t
#    include <sys/types.h>
#    include <sys/stat.h>
/* [JY] Wed Sep 16 16:14:44 PDT 1992. Sure is difficult to mix headers in C++ */
#ifdef __cplusplus
#    define open	__wrong__open__
#    include <fcntl.h>		/* only for cxfilebf.cxx */
#    undef open
#endif	/* __cplusplus */
#    if defined(ANYBSD) && ! defined(NEEDTZSET)
#      define _CLOCK_T
#      define _TIME_T
#      include <sys/time.h>
#      undef _CLOCK_T
#      undef _TIME_T
#    endif		/* ANYBSD and not NEEDTZSET */
#    include <sys/times.h> /* [JY] Fri Jun  4 15:07 1993 added for fortimes.c */
/* [JY] Fri Jul 30 15:44:09 PDT 1993.  ap30 88000 host needs these.  */
    int close(int);
    int creat(const char *, int);
    int open(const char *, int, ...);
    long lseek(int, long, int);
    int read(int, void *, int);
    int write(int, const void *, int);
/* End Of New Code */

#endif	/* ANYUNIX */

#ifndef NULL
#define NULL ((void*)0)
#endif

int __gh_timezone(void); /* [JY] Thu Aug  1 17:55:55 PDT 1996 */

#ifndef CLK_TCK			/* header for this varies between systems */
#define CLK_TCK	60		/* should be sysconf(_SC_CLK_TCK) on POSIX */
#endif
#ifndef CLOCKS_PER_SEC
#define CLOCKS_PER_SEC	1000000
#endif

#if defined(__OSE)
struct tms {
    clock_t tms_utime;          /* user time */
    clock_t tms_stime;          /* system time */
    clock_t tms_cutime;         /* user time of all children */
    clock_t tms_cstime;         /* system time of all children */
};
/* ccclock.c wants to call times() */
int times(struct tms *);
/* ccexecl.c wants to call execve(). */
int execve(char *, char **, char **);
/* ccmalloc.c needs to call sbrk() */
void *sbrk(int);
/* ccmktime.c wants to call __gh_timezone, and ind_time.c does internally */
extern int __gh_timezone(void);
#endif /* __OSE */



#ifdef __cplusplus		/* If C++ compiler, use C linkage */
}
#endif

