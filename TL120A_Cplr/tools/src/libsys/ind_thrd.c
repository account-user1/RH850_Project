/*
                        Low-Level System Library

            Copyright 2004-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "ind_thrd.h"
#include <stddef.h>
#include <setjmp.h>

/*
  Thread-Local Library Data Retrieval
  ===================================

  ThreadLocalStorage is a structure that contains all static library data
  that the Green Hills libraries allow to be allocated per-thread. To
  configure the libraries to allow the maximum amount of thread safety,
  the contents of this structure must be allocated for each thread
  and __ghs_GetThreadLocalStorageItem must return the specified
  thread-specific library data when called.

  An implementation can choose which of these data structures to allocate
  for each thread. For example, an implementation may choose to
  allocate an errno value for each thread, but not the strtok_saved_pos
  pointer. The application could then use strtok_r instead of strtok for
  thread-safety.

  If C++ with exceptions is being used, the __eh_globals entry must be
  allocated for each thread.

  If __ghs_GetThreadLocalStorageItem is customized to
  return a per-thread errno value, define the preprocessor symbol
  USE_THREAD_LOCAL_ERRNO in ind_errn.c.

  If __ghs_GetThreadLocalStorageItem is customized to
  return a per-thread SignalHandlers array, define the preprocessor symbol
  USE_THREAD_LOCAL_SIGNAL in ind_sgnl.c.
  
*/

/* Provide global __eh_globals value to support C++ exception handling
   in a single-threaded system.
 */
static void *__eh_globals;

/* __ghs_GetThreadLocalStorageItem returns pointers to various
   per-thread library data.

   Return NULL for any per-thread data item not implemented. A global
   value will be used.

   Exception: The default implementation of C++ Exception Handling
   support defined below depends on this function using a global
   __eh_globals value if a per-thread value is not implemented.
*/
#pragma ghs startnomisra
void *__ghs_GetThreadLocalStorageItem(int specifier)
{
    void *ptlsitem = 0;
    switch (specifier) {
	case (int)__ghs_TLS_Errno:
	    /* Set ptslsitem to the address of the per-thread errno value.
	       The per-thread errno value should have the type int.

	       If returning a per-thread errno value, define the
	       preprocessor symbol USE_THREAD_LOCAL_ERRNO in ind_errn.c.

	       This item is used by numerous library functions.
	    */
	    break;
	case (int)__ghs_TLS_SignalHandlers:
	    /* Set ptslsitem to the address of the per-thread SignalHandlers
	       array. The per-thread SignalHandlers array should have the
	       array type as in the following declaration:
	       SignalHandler SignalHandlers[_SIGMAX];
	       The SignalHandler type is defined in ind_thrd.h and
	       the _SIGMAX constant is defined in signal.h.

	       This item is used by the library functions signal() and
	       raise().

	       If you provide a per-thread SignalHandlers array, define the
	       preprocessor symbol USE_THREAD_LOCAL_SIGNAL in ind_sgnl.c.

	       If you provide a per-thread SignalHandlers array, the entries
	       must be initialized properly before use. See
	       __gh_signal_init() in ind_sgnl.c for an example of how this
	       can be done.
	    */
	    break;
	case (int)__ghs_TLS_asctime_buff:
	    /* Set ptslsitem to the address of the per-thread asctime_buff
	       array. The per-thread asctime_buff array should have the
	       array type as in the following declaration:
	       char asctime_buff[30];

	       This item is used by the library functions asctime() and
	       ctime(). The library provides asctime_r() and ctime_r(),
	       inherently thread-safe versions of these functions.
	    */
	    break;
	case (int)__ghs_TLS_tmpnam_space:
	    /* Set ptslsitem to the address of the per-thread tmpnam_space
	       array. The per-thread tmpnam_space array should have the
	       array type as in the following declaration:
	       char tmpnam_space[L_tmpnam];
	       The constant is defined in <stdio.h>

	       This item is used by the library function tmpnam() when
	       passed NULL. The library provides tmpnam_r(), an
	       inherently thread-safe version of tmpnam().
	    */
	    break;
	case (int)__ghs_TLS_strtok_saved_pos:
	    /* Set ptslsitem to the address of the per-thread
	       strtok_saved_pos pointer. The per-thread strtok_saved_pos
	       pointer should have the type "char *".

	       This item is used by the library function strtok().
	       The library provides strtok_r(), an inherently thread-safe
	       version of strtok().
	    */
	    break;
	case (int)__ghs_TLS_gmtime_temp:
	    /* Set ptslsitem to the address of the per-thread gmtime_temp
	       value. The per-thread gmtime_temp value should have the
	       type "struct tm" defined in time.h, included by indos.h.

	       This item is used by the library functions gmtime() and
	       localtime(). The library provides gmtime_r() and
	       localtime_r(), inherently thread-safe versions of these
	       functions.
	    */
	    break;
	case (int)__ghs_TLS___eh_globals:
	    /* Set ptslsitem to the address of the per-thread __eh_globals
	       value. The per-thread __eh_globals value should have the
	       type "void *".

	       This item is used by C++ exception handling.

	       The default implementation of C++ exception handling
	       support defined below requires that the address of the
	       global __eh_globals, and not NULL, be returned here.
	    */
	    ptlsitem = (void *)&__eh_globals;
	    break;

	default:
            /* Return NULL for any unknown per-thread data item to
               cause a global value to be used.
             */
	    break;
    }
    return ptlsitem;
}
#pragma ghs endnomisra

/*
  Saving State Across setjmp() Calls
  ==================================

  These routines can be used to save and restore arbitrary state
  across calls to setjmp() and longjmp().
*/
int __ghs_SaveSignalContext(jmp_buf jmpbuf)
{
    return 0;
}

/* Restore arbitrary state across a longjmp() */
void __ghs_RestoreSignalContext(jmp_buf jmpbuf)
{
}

/*
  File Locks
  ======================

  These routines can be customized to implement per-file locks to allow
  thread-safe I/O.

*/

/* Acquire lock for FILE *addr */
void __ghs_flock_file(void *addr) {}

/* Release lock for FILE *addr */
void __ghs_funlock_file(void *addr) {}

/* Non blocking acquire lock for FILE *addr.  May return -1 if */
/* this is not implemented. Returns 0 on success and nonzero otherwise. */
int __ghs_ftrylock_file(void *addr) { return -1; }

/* Callbacks to initialize local lock data structures before they */
/* are used. */
void __ghs_flock_create(void **addr) {}
void __ghs_flock_destroy(void *addr) {}
