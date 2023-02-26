/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "inddef.h"
#include "ind_crt1.h"
#include "ind_exit.h"
#include "ind_thrd.h"
#include "indos.h"
void exit(int);
int atexit(void (*function)(void));
#if defined (__CRT_TRACE_INIT)
extern void __ghs_trace_init(void);
#endif
#pragma weak __ghs_board_devices_init
extern void __ghs_board_devices_init(void);
#pragma weak __gh_iob_init
extern void __gh_iob_init(void);
#pragma weak __gh_lock_init
extern void __gh_lock_init(void);
#pragma weak __cpp_exception_init
extern void __cpp_exception_init(void **);
#pragma weak __ghs_cpp_exception_init
extern void __ghs_cpp_exception_init(void);
#pragma weak __ghs_manprf_init
extern void __ghs_manprf_init(void);
#pragma weak __ghs_coverage_init
extern void __ghs_coverage_init(void);
#if defined(__mips) && !defined(__TRW_RH32__)
int __ghs_start_pmon_profiling(void);
#endif
#if defined(__StarCore__)
extern void __destroy_global_chain(void);
extern void __exec_staticinit(void);
#endif
    /* Declare 'main' as a far function on MIPS when in LocalPIC mode,
       so that it can be reached however large the user program is.
       Without being 'far', 'main' can be out of the range of 16-bits
       that a local pic call allows when the user program is too large. */
#if defined(__mips) && !defined(__TRW_RH32) && \
	defined(__ghs_pic) && defined(__localpic)
#pragma ghs callmode=far
extern 	int main(int argc, char ** argv, char **envp);
#pragma ghs callmode=default
#else
extern	int main (int argc, char **argv, char **envp);
#endif


/*----------------------------------------------------------------------*/
/* ind_crt1.c: Machine Independent library initialization startup code. */
/*									*/
/* CALLED FROM:  __ghs_ind_crt0 in ind_crt0.c				*/
/* ENTRY POINT:  __ghs_ind_crt1 					*/
/*----------------------------------------------------------------------*/
/* This is the first C function called by the standard libraries after	*/
/* memory and static and global data have been initialized.  It         */
/* initializes the ANSI C and other run time libraries before jumping   */
/* to the application entry point (main).				*/
/* Arguments to the initialization routine:  argc, argv, and envp.	*/
/* These are valid if the program is run from the debugger or 0 if not.	*/
/* If argc==0, we construct the arguments to main() on our stack frame. */
/* You may change these arguments to provide any other default values	*/
/*----------------------------------------------------------------------*/

#if defined(RODATA_IS_INDEPENDENT)
#  define CONST_FUNCP *
#else
#  define CONST_FUNCP *const
#endif

char **environ;

#ifdef __mips
#pragma ghs far
#endif
void __ghs_ind_crt1 (int argc, char *argv[], char *envp[])
{
    /* Hold the default arguments to main() when they are not passed
     * to the target by the debugger.
     */
    char noname[2];
    char *arg[2];
    char *env[2];

#if defined (__CRT_TRACE_INIT)
/*------------------*/
/* initialize trace */
/*------------------*/
    {
	__ghs_trace_init();
    }
#endif

/*--------------------------*/
/* initialize board devices */
/*--------------------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP bdi_ftyp)(void);
	static bdi_ftyp board_devices_init_funcp = __ghs_board_devices_init;
	if (board_devices_init_funcp)
#else  /* defined(__ghs_pic) */
	if (__ghs_board_devices_init)
#endif /* defined(__ghs_pic) */
	__ghs_board_devices_init();
    }

/*-----------------*/
/* initialize lock */
/*-----------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP li_ftyp)(void);
	static li_ftyp lock_init_funcp = __gh_lock_init;
	/* If ind_thrd.c is loaded, initialize the C library lock */
	if (lock_init_funcp)
#else  /* defined(__ghs_pic) */
	if (__gh_lock_init)
#endif /* defined(__ghs_pic) */
	 __gh_lock_init();
    }
	
/*----------------*/
/* initialize iob */
/*----------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP ii_ftyp)(void);
	static ii_ftyp iob_init_funcp = __gh_iob_init;
	/* if ind_iob.c is loaded, initialize _iob for stdin,stdout,stderr */
	if (iob_init_funcp)
#else  /* defined(__ghs_pic) */
	if (__gh_iob_init)
#endif /* defined(__ghs_pic) */
	 __gh_iob_init();
    }

#if !defined(__disable_thread_safe_extensions) && !defined(__OSE)
/*--------------------*/
/* C++ Thread-safe    */
/* Exception handling */
/*--------------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP ci_ftyp)(void**);
	static ci_ftyp cpp_init_funcp = __cpp_exception_init;
	if (cpp_init_funcp)
#else  /* defined(__ghs_pic) */
	if (__cpp_exception_init)
#endif /* defined(__ghs_pic) */
	    __ghs_cpp_exception_init();
    }
#endif /* !defined(__disable_thread_safe_extensions) && !defined(__OSE) */

/*-----------------------------*/
/* initialize manual profiling */
/*-----------------------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP mp_ftyp)(void);
	static mp_ftyp man_prf_funcp = __ghs_manprf_init;
	/* if ind_manprf.c is loaded, initialize manual profiling */
	if (man_prf_funcp)
#else  /* defined(__ghs_pic) */
	if (__ghs_manprf_init)
#endif /* defined(__ghs_pic) */
	__ghs_manprf_init();
    }

/*----------------------------------*/
/* initialize -coverage=* profiling */
/*----------------------------------*/
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP coi_ftyp)(void);
	static coi_ftyp cov_init_funcp = __ghs_coverage_init;
	if (cov_init_funcp)
#else  /* defined(__ghs_pic) */
	if (__ghs_coverage_init)
#endif /* defined(__ghs_pic) */
	__ghs_coverage_init();
    }

#if !defined(__OSE)
/*----------------------------------*/
/* initialize -stack_protector      */
/*----------------------------------*/    
    {
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP stackpro_ftyp)(void);
	static stackpro_ftyp fp = __ghs_set_stack_chk_guard;
	if (fp)
#else  /* defined(__ghs_pic) */
	if (__ghs_set_stack_chk_guard)
#endif /* defined(__ghs_pic) */
	__ghs_set_stack_chk_guard();
    }
#endif /* __OSE */


#if defined(__arm__)
/*---------------------------------*/
/* validate .ghtws section info    */
/*---------------------------------*/
    {
	extern void __ghs_validate_ghtws(void);
        #pragma weak __ghs_validate_ghtws
#if defined(__ghs_pic)
	typedef __attribute__((strong_fptr)) void (CONST_FUNCP ghtws_ftyp)(void);
	static ghtws_ftyp fp = __ghs_validate_ghtws;
	if (fp)
#else  /* defined(__ghs_pic) */
	if (__ghs_validate_ghtws)
#endif /* defined(__ghs_pic) */
	    __ghs_validate_ghtws();	
    }
#endif /* __arm__ */
    
/*--------------------------------------------*/
/* set default arguments to main()            */
/*--------------------------------------------*/

    /* Check if the debugger did not supply arguments
     * (for example, when executing out of flash)
     */
    if (!argc) {
	noname[0] = 0;
	noname[1] = 0;

	arg[0] = noname;
	arg[1] = 0;

	env[0] = noname+1;
	env[1] = 0;

	envp = env;
	argv = arg;

	argc = 1;
    }
    environ = envp;

#if defined(__StarCore__)
    /* for C++ with the SC3 compiler */
    {
	/* make destructors be called when we exit */
	#pragma weak __destroy_global_chain
	static void (CONST_FUNCP dgc_funcp)(void) = __destroy_global_chain;
	if (dgc_funcp)
	    atexit(__destroy_global_chain);

	/* call the static constructors */
	__exec_staticinit();
    }
#endif

    /* This is a suitable location to place any additional initialization
       routines that must execute prior to main()
     */

/*------------------------------*/
/* call main(argc, argv, envp)	*/
/*------------------------------*/
    exit(main(argc, argv, envp));
    /* exit() will shut down the C library and call _Exit() */
    _Exit(-1);
    /* _Exit() should never return. If it does, let our caller handle it.   */
    return;
}

#if defined(__StarCore__)
/* function needed for C++ with StarCore SC3 compiler
 * this calls the static constructors */
#pragma weak __ghsbegin_staticinit
#pragma weak __ghsend_staticinit
extern void (*__ghsbegin_staticinit)(void);
extern void (*__ghsend_staticinit)(void);

void __exec_staticinit(void)
{
    void (**cpp_staticinit)(void) = &__ghsbegin_staticinit;
    void (*init_end)(void) = __ghsend_staticinit;

    while(*cpp_staticinit != init_end)
    {
	(*cpp_staticinit++)();
    }
}
#endif /* ___StarCore__ */
