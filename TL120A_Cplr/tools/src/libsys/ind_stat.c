/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_stat.c: NON-ANSI access(), fstat(), and stat() facilities. */

#include "indos.h"

#if defined(EMBEDDED)
/******************************************************************************/
/*  #include <unistd.h>							      */
/*  int access(const char *name, int mode)				      */
/*  name is the name of a file, prot is the Logical Or of the following flags */
/*		R_OK	4: readable					      */
/*		W_OK	2: writable					      */
/*		X_OK	1: executable or directory searchable (Unused) 	      */
/*		F_OK	0: file exists					      */
/*  If mode is zero then test only for file existence.			      */
/*  Return 0 if all of the specified operations are possible on the file.     */
/*  Return -1 if any of the specified operations are not possible on the file */
/*  and set errno appropriately.					      */
/******************************************************************************/
int access(const char *name, int mode) {
#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    return __ghs_syscall(SYSCALL_ACCESS, name, mode);
#pragma ghs endnowarning 1547
}

/******************************************************************************/
/*  #include <stat.h>							      */
/*  int fstat(int fno, struct stat *statptr);				      */
/*									      */
/*  fno is a file number returned by open() or creat().  In the two fields    */
/*  st_dev and st_ino place values which uniquely identify the file or device */
/*  opened on file number fno.  In unix these are the device number and the   */
/*  inode (file) number on the device.					      */
/*  The field st_size is set to the size of the file in bytes, -1 if the size */
/*  is unknown.								      */
/*									      */
/*  Return 0 if the file status is correctly returned.  Return -1 if no file  */
/*  is opened on file number fno, and set errno appropriately.		      */
/******************************************************************************/
int fstat(int fno, struct stat *statptr) {
/*
 *  If no other implementation is provided, return device and inode number 0.
 */
    unsigned int tmp[2];
    
    statptr->st_dev = 0;
    statptr->st_ino = 0;
    statptr->st_size = -1;		/* Don't know size of file */
    statptr->st_mode = 0;

#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    if (__ghs_syscall(SYSCALL_GETFDATTR, fno, &tmp,
	    (sizeof(tmp[0]))|SYSCALL_ATTR_SIZE|SYSCALL_ATTR_MODE) == -1)
	return -1;
#pragma ghs endnowarning 1547

#if (SYSCALL_ATTR_SIZE >= SYSCALL_ATTR_MODE)
#  error misordered attributes
#endif
    
    statptr->st_size = tmp[0];
    statptr->st_mode = tmp[1];
    
    return(0);
}

/******************************************************************************/
/*  #include <stat.h>							      */
/*  int stat(char *name, struct stat *statptr);				      */
/*									      */
/*  name is the name of a file.  In the two fields st_dev and st_ino place    */
/*  values which uniquely identify the named file or device.  In unix, these  */
/*  are the device number and the inode (file) number on the device.	      */
/*  The field st_size is set to the size of the file in bytes, -1 if the size */
/*  is unknown.								      */
/*									      */
/*  Return 0 if the file status is correctly returned.  Return -1 if no file  */
/*  with that name exists, and set errno appropriately.			      */
/******************************************************************************/
int stat(char *name, struct stat *statptr) {
/*
 *  If no other implementation provided, return device and inode number 0.
 */
    unsigned int tmp[2];

    statptr->st_dev = 0;
    statptr->st_ino = 0;
    statptr->st_size = -1;		/* Don't know size of file */
    statptr->st_mode = 0;

#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    if (__ghs_syscall(SYSCALL_GETFNATTR, name, &tmp,
	    (sizeof(tmp[0]))|SYSCALL_ATTR_SIZE|SYSCALL_ATTR_MODE) == -1)
	return -1;
#pragma ghs endnowarning 1547

#if (SYSCALL_ATTR_SIZE >= SYSCALL_ATTR_MODE)
#  error misordered attributes
#endif
    
    statptr->st_size = tmp[0];
    statptr->st_mode = tmp[1];
    
    return(0);
}
#else
int _K_empty_file_illegal;
#endif
