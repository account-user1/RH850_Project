/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_sgnl.c: ANSI signal() and raise() facilities, and NON-ANSI [u]alarm(). */

#include "indos.h"
#include "ind_thrd.h"
#include "ind_exit.h"

#if defined(LIBCISANSI)
int _U_empty_file_illegal;
#else /* !defined(LIBCISANSI) */

/******************************************************************************/
/*  #include <signal.h>							      */
/*  int raise(int sig);							      */
/*  Raise the signal, "sig" for the current process according to ANSI C.      */
/*  If sig==SIGKILL then terminate the process with status = 1.		      */
/*  Otherwise, execute the function set for the signal, "sig", by the most    */
/*  recent call to signal(), see below.					      */
/*	If the function specified is SIG_IGN then do nothing.		      */
/*	If the function specified is SIG_DFL then terminate the process with  */
/*		status=1.						      */
/*	Otherwise set the function SIG_DFL for "sig", then execute the	      */
/*		function with the signal, "sig" passed as an argument.	      */
/*  Return -1 if there is no such signal.  Return 0 if the operation succeeds.*/
/******************************************************************************/

/* BSD kill() varies slightly from Ansi raise() */
#if defined(ANYBSD) && !defined(NO_SIGNAL)
#include <signal.h>
int raise(int sig)
{
    void (*handler)() = signal(sig, SIG_IGN);

    if (handler == SIG_ERR)
	return -1;
    if (handler == SIG_DFL) {
	(void)signal(sig, SIG_DFL);
	return kill(getpid(), sig);
    }
    if (handler != SIG_IGN)
	(*handler)(sig);
    return 0;
}
#elif defined(ANYUNIX) && !defined(NO_SIGNAL)	
int raise(int sig)
{
    return(kill(getpid(),sig)); /*for a system that has a real signal()/kill()*/
}
#else	/* NO_SIGNAL or ! ( BSD or ANYUNIX) */

    /* this is a very basic signal mechanism, it only implements the minimal */
    /* requirements for ANSI C */

/******************************************************************************/
/*  #include <signal.h>							      */
/*  void (*signal(int sig, void (*func)(int)))(int);			      */
/*  Set the function to execute when the signal, "sig" is raised, see raise() */
/*	above.								      */
/*  If the function specified is SIG_IGN then raise() will do nothing.	      */
/*  If the function specified is SIG_DFL then raise() will terminate the      */
/*	process with status=1.						      */
/*  Otherwise set the function for signal "sig" to be "func".		      */
/*  Return -1 if there is no such signal.  Return the previous function	      */
/*	specified for the signal "sig" if the operation succeeds.	      */
/*									      */
/******************************************************************************/
#include <signal.h>

static __SIG_HANDLER static_SignalHandlers[_SIGMAX];

#if defined(USE_THREAD_LOCAL_SIGNAL)
static SignalHandler __gh_unused_signalhandler = 0;
#endif

static int __gh_signal_initialized;
static void __gh_signal_init(__SIG_HANDLER *SignalHandlers)
{
    int i;
/* Disable strong_fptr processing here, since these assignments don't actually
   represent new destinations for a call through a __SIG_HANDLER pointer. */
#pragma ghs startnostrongfptr
    for (i = 1; i <= _SIGMAX; i++)
	SignalHandlers[i-1] = SIG_DFL;
    for (i = SIGSTOP; i <= SIGIO; i++)
	SignalHandlers[i-1] = SIG_IGN;
    for (i = SIGPROF; i <= SIGUSR2; i++)
	SignalHandlers[i-1] = SIG_IGN;
#pragma ghs endnostrongfptr

    /* Set __gh_signal_initialized to indicate that signal
       handlers have been initialized. */
    __gh_signal_initialized = 1;
}

#if defined(EMBEDDED)
/* __ghs_default_signal_handler is called for signal SIGKILL or if the
   signal handler is SIG_DFL */
void __ghs_default_signal_handler(int sig)
{
    _Exit(EXIT_FAILURE);
}
#endif	/* EMBEDDED */

__SIG_HANDLER signal(int sig, __SIG_HANDLER func)
{
    __SIG_HANDLER	temp, *handlers;

    if (sig<=0 || sig>_SIGMAX)
#pragma ghs startnostrongfptr
	return(SIG_ERR);
#pragma ghs endnostrongfptr

/* If you provide a per-thread SignalHandlers array, define the
   preprocessor symbol USE_THREAD_LOCAL_SIGNAL when building this
   file and customize ind_thrd.c to return the per-thread array.
 */
#if defined(USE_THREAD_LOCAL_SIGNAL)
    /* Assigning a void * to a __SIG_HANDLER * violates strong_fptr rules.
       Disable strong_fptr processing, and use a fake assignment so the call
       graph will reflect the conversion from SignalHandler to __SIG_Handler.
       If the array returned by __ghs_GetThreadLocalStorageItem() is actually
       of type __SIG_HANDLER, the following line can be removed. */
    temp = __gh_unused_signalhandler;
#pragma ghs startnostrongfptr
    handlers = __ghs_GetThreadLocalStorageItem(__ghs_TLS_SignalHandlers);
#pragma ghs endnostrongfptr
    if (!handlers) {
#endif
	handlers = static_SignalHandlers;

        /* Check __gh_signal_initialized. If not set,
           initialize signal handlers. */
        if(__gh_signal_initialized != 1) {
	    __gh_signal_init(handlers);
        }
#if defined(USE_THREAD_LOCAL_SIGNAL)
    }
#endif

    temp = handlers[sig-1];
    handlers[sig-1] = func;
    return(temp);
}

int raise(int sig) 
 {
    __SIG_HANDLER	temp, *handlers;

    if (sig<=0 || sig>_SIGMAX)
	return(-1);
#if defined(USE_THREAD_LOCAL_SIGNAL)
    /* See the comment in signal(). */
    temp = __gh_unused_signalhandler;
#pragma ghs startnostrongfptr
    handlers = __ghs_GetThreadLocalStorageItem(__ghs_TLS_SignalHandlers);
#pragma ghs endnostrongfptr
    if (!handlers) {
#endif
	handlers = static_SignalHandlers;

        /* Check __gh_signal_initialized. If not set,
           initialize signal handlers. */
        if(__gh_signal_initialized != 1) {
	    __gh_signal_init(handlers);
        }
#if defined(USE_THREAD_LOCAL_SIGNAL)
    }
#endif

    temp = handlers[sig-1];
    if (sig==SIGKILL || temp==SIG_DFL)
	__ghs_default_signal_handler(sig);
    else if (temp!=SIG_IGN) {
#pragma ghs startnostrongfptr
        handlers[sig-1] = SIG_DFL;
#pragma ghs endnostrongfptr
	(*temp)(sig);
    }
    return(0);
}
#endif
#endif /* defined(LIBCISANSI) */
