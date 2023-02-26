/*
                C++ Library

        Copyright 1983-2013 Green Hills Software,Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/*
 * This file defines the _main function.  _main calls the constructor functions
 * in the global _ctors table of function pointers.
 *
 * This file will not be linked into C++ shared objects or DLLs on Linux,
 * Solaris, or Windows.  It's important that _main is not exported from a
 * shared object on these targets.  The _ctors global array should also not be
 * exported from a shared object.
 */

#include <stdlib.h>

typedef __attribute__((strong_fptr)) void (*__CTOR_VFPT)();
extern __CTOR_VFPT _ctors[];

#if defined(GHS_TDEH)
// trg/ppc/default.gpj sets USE_TDEH which causes
// src/edg/lib_src/lib*edge.gpj and integrity_edg_objs.gpj to set -DGHS_TDEH.
// rtos/intlib/sharedcppobjects.c is duplicated from here.  The
// src/configuration/defaults/bld_rules/ppc.bod file has a GHS_SUPPORTS_TDEH
// which allows INTEGRITY to use #ifdef GHS_TDEH, but this usage is dead now.
#pragma weak __ghs_uw_reg_eh_table
#pragma weak __ghsbegin_ghs_tdeh_table
#pragma weak __ghsend_ghs_tdeh_table
extern void* __ghsbegin_ghs_tdeh_table;
extern void* __ghsend_ghs_tdeh_table; 
extern "C" void __ghs_uw_reg_eh_table(void* begtable, void* endtable);
#endif

#if defined(__INTEGRITY_SHARED_LIBS)
extern "C" void __ghs_init_cx_atexit(void);
#elif defined(CXX_ATEXIT)
// pragma ghs reference does not mangle C++ names so use a C function here.
// This reference ensures that __call_dtors() is called even in C++ programs
// that do not call atexit and do not have function static destructors.
// __call_dtors must be called to destruct global objects and in CXX_ATEXIT
// mode, we do not register __call_dtors with atexit because atexit is
// implemented using __call_dtors infrastructure.
extern "C" void __atexit_cleanup_func(int val);
#pragma ghs reference __atexit_cleanup_func
#else
void __call_dtors(void);
#endif

/* Initialize the static constructors using the _ctors array.  Set up the call
   to __call_dtors at the exit. */
extern "C" void _main(void)
{
    int i = 0;
    static int been_here = 0;

    if (been_here)
	return;
    been_here = 1;

/*-----------------------------*/
/* initialize TDEH             */
/*-----------------------------*/
#if defined(GHS_TDEH)
#if defined(__ghs_pic)
    static void (* tdeh_init_funcp)(void*, void*) = __ghs_uw_reg_eh_table;
    if (tdeh_init_funcp)
#else  /* defined(__ghs_pic) */
    if (__ghs_uw_reg_eh_table)
#endif /* defined(__ghs_pic) */
	__ghs_uw_reg_eh_table(&__ghsbegin_ghs_tdeh_table, &__ghsend_ghs_tdeh_table);
#endif

#if defined(__INTEGRITY_SHARED_LIBS)
    /* Initialize the atexit() module to perform C++ style atexit
       processing which ensures the correct order of execution with
       respect to destructors. */
    __ghs_init_cx_atexit();
#elif !defined(CXX_ATEXIT)
    /* when using libansi, atexit_cleanup for C++ is hardcoded to call 
       __call_dtors so we don't need this, and it creates recursion. */
    atexit(__call_dtors);
#endif
    while (_ctors[i])
        (*_ctors[i++])();
}
