/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_io.h: declarations for callers of ind_io.c */

#if defined(__VXWORKS) || defined (__OSE)
#  include <unistd.h>
#else

/*      Basic I/O Routines					*/

long write (int fno, const void *buf, long size);
long read (int fno, void *buf, long size);
int open (const char *filename, int mode, ...);
int creat (const char *filename, int prot);
int close (int fno);
#ifdef __INTEGRITY_SHARED_LIBS
int hostio_creat (const char *filename, int prot);
/*   INTEGRITY's lseek has off_t defined to be a 64 bit signed integer. */
long long lseek (int fno, long long offset, int end);
#else
long lseek (int fno, long offset, int end);
#endif
int unlink (const char *name);
int fcntl (int fno, int cmd, int arg);

/*	Host I/O-specific defaults for above routines		*/
#ifndef __INTEGRITY_SHARED_LIBS
long __ghs_hostio_write (int fno, const void *buf, long size);
long __ghs_hostio_read (int fno, void *buf, long size);
int __ghs_hostio_open (const char *filename, int mode, ...);
int __ghs_hostio_creat (const char *filename, int prot);
int __ghs_hostio_close (int fno);
long __ghs_hostio_lseek (int fno, long offset, int end);
int __ghs_hostio_unlink (const char *name);
int __ghs_hostio_fcntl (int fno, int cmd, int arg);
#endif

/*	Optional Function					*/

int getpid (void);

#endif /* __VXWORKS || __OSE */
