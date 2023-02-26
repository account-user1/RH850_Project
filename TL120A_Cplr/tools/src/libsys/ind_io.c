/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_io.c: core set of low-level I/O functions. Machine Independent. */

/*
 * This module, and ind_exit.c, contain the lowest level I/O functions in the
 * Green Hills C library.  These functions provide a very simple UNIX-like
 * system call interface.
 *
 * The default implementations provided here all call down to __ghs_syscall()
 * in the ind_call.* assembly file. This expects the environment to trap calls
 * to __dotsyscall in the ".syscall" section, which contains a NOP that may be
 * patched by software debuggers or triggered by hardware debuggers. If nothing
 * happens, __ghs_syscall() returns a generic -1 and sets the C "errno" to 0.
 *
 * Please see the Green Hills C Library Documentation for complete directions
 * as to how to customize this module for your system.  The most essential
 * group of functions appears in ind_exit.c (for size reasons), with more
 * optional groups of functions appearing later in this file.
 *
 * All functions have been have are weak symbols.  This is done so that any
 * or all of the functions can be redefined by the user from a separate
 * object file, and not result in multiply-defined symbol problems from the
 * linker.
 *
 * MEMORY ALLOCATION: low-level memory allocation is now done in ind_heap.c
*/

#if defined(EMBEDDED)

#include "indos.h"
#include "ind_io.h"

#if (__CHAR_BIT > 8) || 1
#  define DO_OPEN_CREAT_MODE
#endif

#if defined(DO_OPEN_CREAT_MODE)
#include <stdarg.h>
#endif

/*============================================================================*/
/*	FUNCTIONS NEEDED TO PRINT OUT HELLO WORLD AND ENTER SIMPLE INPUT      */
/*============================================================================*/
/*	write()		output an array of characters to a file descriptor    */
/*	read()		input an array of characters from a file descriptor   */
/*============================================================================*/

/******************************************************************************/
/*  int write (int fno, const void *buf, int size);			      */
/*  Write at most size bytes into the file connected to fno (where fno is     */
/*  one of the file numbers returned by open() or creat()) into buf.	      */
/*  Return the number of bytes written, or -1 to indicate an error and	      */
/*  set errno appropriately.						      */
/*									      */
/*  Note that line breaks have not received any special processing.  If you   */
/*  are reimplementing this to talk to a serial port and a terminal, you will */
/*  need to output a "\r\n" sequence for each '\n' in the character array.    */
/*  The typical symptom that this is necessary is "barber pole" text output.  */
/******************************************************************************/
#pragma weak write=__ghs_hostio_write
long __ghs_hostio_write (int fno, const void *buf, long size)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall64(SYSCALL_WRITE, fno, buf, size);
#pragma ghs endnowarning 1547
}

/******************************************************************************/
/* int read (int fno, void *buf, int size);				      */
/*  Read at most size bytes into buf from the file connected to fno (where    */
/*  fno is one of the file numbers returned by open() or creat()).	      */
/*  Return the number of bytes read.  Return 0 at end of file.  Return -1 on  */
/*  error and set errno appropriately.					      */
/*									      */
/*  The stdio libraries assume that (as on unix) line breaks are converted to */
/*  single '\n' characters by the time read() returns success. If you are     */
/*  taking characters from a terminal, replace any '\r' you see with a '\n'.  */
/******************************************************************************/
#pragma weak read=__ghs_hostio_read
long __ghs_hostio_read (int fno, void *buf, long size)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall64(SYSCALL_READ, fno, buf, size);
#pragma ghs endnowarning 1547
}

/*============================================================================*/
/*	  FUNCTIONS NEEDED TO USE THE HOST FILESYSTEM FROM YOUR TARGET	      */
/*============================================================================*/
/*	open()		start using a file				      */
/*	creat()		create a new file and start using it		      */
/*	close()		stop using a file				      */
/*	lseek()		move around in a file				      */
/*	unlink()	delete a file on the host (!!) (be careful!)	      */
/*	fcntl()		do evil things to the file descriptor (avoid this)    */
/*============================================================================*/

/******************************************************************************/
/* int open (const char *filename, int mode, ...);			      */
/*  Open the file named filename with the indicated mode.		      */
/*  filename is a null terminated string and mode is one of the following     */
/*									      */
/*	0	=> open for reading					      */
/*	1	=> open for writing					      */
/*	2	=> open for reading & writing				      */
/*									      */
/*  If the open is successful return a small non-negative integer file number.*/
/*  On failure return -1, and set errno in accordance with the error.	      */
/******************************************************************************/
#pragma ghs nowarning 236 /* va_arg() "controlling expression is constant" */
#pragma weak open=__ghs_hostio_open
int __ghs_hostio_open (const char *filename, int flags, ...)
{
    if(flags & O_CREAT) {
	int mode;
#if defined(DO_OPEN_CREAT_MODE)
	va_list va;

	va_start(va, flags);

	mode = va_arg(va, int);
	
	va_end(va);
#else
	mode = 066;
#endif
#pragma ghs nowarning 1547	/* Syscall prototype problems */
	return __ghs_syscall(SYSCALL_OPEN2, filename, flags, mode);	
#pragma ghs endnowarning 1547
    } else {
#pragma ghs nowarning 1547	/* Syscall prototype problems */
	return __ghs_syscall(SYSCALL_OPEN, filename, flags);
#pragma ghs endnowarning 1547
    }
}

/******************************************************************************/
/* int creat (const char *filename, int prot);				      */
/*  Create and open for writing a file named filename with protection	      */
/*  as specified by prot.  filename is a null terminated string.	      */
/*  prot is expressed in unix format, it is the logical or of:		      */
/*									      */
/*		0400: owner read 					      */
/*		0200: owner write					      */
/*		0100: owner execute/search directory			      */
/*		0040: group read					      */
/*		0020: group write					      */
/*		0010: group execute/search directory			      */
/*		0004: other (world) read				      */
/*		0002: other (world) write				      */
/*		0001: other (world) execute/search directory		      */
/*									      */
/*  For things like terminals that cannot be created it should just open the  */
/*  device.  If successful, return a small integer file number.  On failure   */
/*  return -1 and set errno appropriately.				      */
/******************************************************************************/
#pragma weak creat=__ghs_hostio_creat
int __ghs_hostio_creat (const char *filename, int prot)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall(SYSCALL_CREAT, filename, prot);
#pragma ghs endnowarning 1547
} 

/******************************************************************************/
/* int close (int fno);							      */
/*  Close the file associated with the file number fno (returned by open()    */
/*  or creat()).  Return 0 if all goes well.  Return -1 if something went     */
/*  wrong and set errno appropriately.					      */
/******************************************************************************/
#pragma weak close=__ghs_hostio_close
int __ghs_hostio_close (int fno)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall(SYSCALL_CLOSE, fno);
#pragma ghs endnowarning 1547
}

/******************************************************************************/
/* long lseek (int fno, long offset, int end);				      */
/*  Seek to a new position within the file connected to the file number fno   */
/*  (returned by open() or creat()).  If end is 0, seek to offset bytes from  */
/*  the beginning of the file.  If end is 1, seek to offset bytes from the    */
/*  current position in the file.  If end is 2 seek to offset bytes from      */
/*  the end of the file.  lseek does no I/O.  The next I/O operation to	      */
/*  file number fno will begin at the new position in the file.		      */
/*									      */
/*  Return the offset from the beginning of the file after the seek takes     */
/*  place.  If an error occurs return -1 and set errno appropriately.	      */
/*  If an error occurs the file position is not changed.		      */
/******************************************************************************/
#pragma weak lseek=__ghs_hostio_lseek
off_t __ghs_hostio_lseek (int fno, off_t offset, int end)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall(SYSCALL_LSEEK, fno, (long)offset, end);
#pragma ghs endnowarning 1547
}

/******************************************************************************/
/*  int unlink (const char *name);					      */
/*									      */
/*  name is the name of a file.  The named file is deleted.		      */
/*  Return 0 if the named file is deleted.  Return -1 if there is no such     */
/*  file or if the file cannot be deleted, and set errno appropriately.	      */
/******************************************************************************/
#pragma weak unlink=__ghs_hostio_unlink
int __ghs_hostio_unlink (const char *name)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall(SYSCALL_UNLINK, name);
#pragma ghs endnowarning 1547
}

/******************************************************************************/
/* int fcntl (int fno, int cmd, int arg);				      */
/* When running under a Green Hills debugger, calls the host fcntl() function */
/* with the specified arguments.  NO VALIDATION OR TRANSLATION IS PERFORMED.  */
/* This call was added for use by C++ libraries only and should be avoided    */
/* because the argument values may vary from host to host.		      */
/*									      */
/*  Return the value which was returned by the host fcntl() call.             */
/*  If an error occurs return -1 and set errno appropriately.		      */
/******************************************************************************/
#pragma weak fcntl=__ghs_hostio_fcntl
int __ghs_hostio_fcntl (int fno, int cmd, int arg)
{
#pragma ghs nowarning 1547	/* Syscall prototype problems */
    return __ghs_syscall(SYSCALL_FCNTL, fno, cmd, arg);
#pragma ghs endnowarning 1547
}
#endif	/* EMBEDDED */
