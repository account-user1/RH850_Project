/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_time.c: ANSI time() and times() facilities. */

#include "indos.h"

#ifdef NEED_TIME_DEFS

#if !defined(ANYUNIX) && !defined(UNIXSYSCALLS) && !defined(SIMULATE)
/******************************************************************************/
/*  time_t time(time_t *tptr);						      */
/*									      */
/*  Return the current time relative to the Epoch (truncated to the most      */
/*  recent second), Midnight 00:00 January 1, 1970 Greenwich Mean Time.       */
/*  If tptr is non-null also store the time into *tptr.			      */
/*									      */
/*  If all you have is local time, not Greenwich Mean Time, then return the   */
/*  local time and return 0 from __gh_timezone().			      */
/*  This function is used for the C time_t and struct tm functions and the    */
/*  Fortran secnds, time(), idate(), date(), and fdate() functions.	      */
/*									      */
/*  NO DEFAULT IMPLEMENTATION						      */
/******************************************************************************/
time_t time(time_t *tptr) {
    time_t the_time = -1;

#if defined(EMBEDDED)
#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    the_time = __ghs_syscall64(SYSCALL_MONTIME);
#pragma ghs endnowarning 1547
#endif
/*
 *  If no other implementation provided, return time = -1
 */
    if (tptr!=NULL)
	*tptr= the_time;
    return(the_time);
}
#endif	/* !ANYUNIX and !UNIXSYSCALLS and !SIMULATE */

#if !defined(ANYUNIX) && !defined(UNIXSYSCALLS)
/******************************************************************************/
/* #include <sys/types.h>						      */
/* #include <sys/times.h>						      */
/* int times(struct tms *buffer);					      */
/*									      */
/*  Place the process execution time in user mode in buffer->tms_utime	      */
/*  Place the process execution time in system mode in buffer->tms_stime      */
/*  Returns the elapsed time since EPOCH in clock ticks, or -1 on failure.    */
/*  All times are measured in clock ticks = 1/CLOCKS_PER_SEC second	      */
/*  This function is used for the C clock() function and the Fortran	      */
/*     dtime(), etime(), and mclock() functions.			      */
/*									      */
/*  NO DEFAULT IMPLEMENTATION						      */
/******************************************************************************/
int times(struct tms *buffer) {
/*
 *  If no other implementation provided, return time = 0
 */
    buffer->tms_utime = 0;
    buffer->tms_stime = 0;
    buffer->tms_cutime = 0;
    buffer->tms_cstime = 0;
    return -1;
}
#else
int _I_empty_file_illegal;
#endif	/* ANYUNIX or UNIXSYSCALLS */

#endif
