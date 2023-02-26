/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_exit.c: low-level startup & shutdown. Machine Independent. */

/* please examine ind_io.c for an overview of this file's contents */

#if defined(EMBEDDED)

#include "indos.h"
#include "ind_exit.h"
#include "ind_thrd.h"

#pragma weak __cpp_exception_cleanup
extern void __cpp_exception_cleanup(void **);
#pragma weak __ghs_cpp_exception_cleanup
extern void __ghs_cpp_exception_cleanup(void);

/*============================================================================*/
/*   FUNCTIONS ALWAYS NEEDED TO RUN PROGRAMS COMPILED WITH THE DEFAULT CRT0   */
/*============================================================================*/
/*	_exit()		terminate the program				      */
/*	__ghs_at_exit()	arrange for a function to be invoked at exit() time   */
/*============================================================================*/

static struct __GHS_AT_EXIT *exitlisthead;

/******************************************************************************/
/*  void _exit (code);							      */
/*  Exit from the program with a status code specified by code.		      */
/*  DO NOT RETURN!							      */
/*									      */
/*  This function is called by exit() after the libraries have shut down,     */
/*  and also by ind_crt0.c in the event that the program's main() returns.    */
/******************************************************************************/
#pragma weak _exit = _Exit
void _Exit (int code)
{
    struct __GHS_AT_EXIT *el;

    __ghsLock();
    for (el = exitlisthead; el; el = el->next)
	el->func();

/* [nikola] Mon Sep 20 15:07:55 PDT 1999 - cleanup the exception handling */
#ifndef __disable_thread_safe_extensions
/*--------------------*/
/* C++ Thread-safe    */
/* Exception handling */
/*--------------------*/
    {
	if(__ghs_weak_sym_check(__cpp_exception_cleanup))
	    __ghs_cpp_exception_cleanup();
    }
#endif /* !defined(__disable_thread_safe_extensions) */
    __ghsUnlock();

#pragma ghs nowarning 1547	/* Syscall prototype problems */
    (void)__ghs_syscall(SYSCALL_EXIT, code);
#pragma ghs endnowarning 1547
/* If we get here, SYSCALL_EXIT didn't do anything. Loop forever. */
    for (;;)
	continue;
}

/******************************************************************************/
/*  void __ghs_at_exit (struct __GHS_AT_EXIT *gae);			      */
/*  Add gae to the list of functions to be executed when _Exit() is called.   */
/******************************************************************************/
void __ghs_at_exit (struct __GHS_AT_EXIT *gae)
{
    __ghsLock();
    gae->next = exitlisthead;
    exitlisthead = gae;
    __ghsUnlock();
}
#endif	/* EMBEDDED */
