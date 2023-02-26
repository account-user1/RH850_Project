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

/*
  C++ Exception Handling
  ======================

  These routines allow C++ exceptions to be used in multiple threads.
  The default implementation uses __ghs_GetThreadLocalStorageItem
  to return a thread-specific __eh_globals pointer.

*/
#ifndef __disable_thread_safe_extensions

extern void __cpp_exception_init(void **);
extern void __cpp_exception_cleanup(void **);

/* Must be called after __cpp_except_init() is called to allocate
 * and initialize the per-thread exception handling structure */
void *__get_eh_globals(void)
{
    return *(void **)__ghs_GetThreadLocalStorageItem(__ghs_TLS___eh_globals);
}

/* __ghs_cpp_exception_init retrieves the eh_globals field from
   thread-local storage and calls __cpp_exception_init to avoid
   having all thread-local storage routines linked into minimal
   programs.

   This function is pulled in by the C++ library when exceptions
   are enabled because __get_eh_globals (above) is referenced.
 */
void __ghs_cpp_exception_init(void) {
    void *eh_globals;
    eh_globals = __ghs_GetThreadLocalStorageItem(__ghs_TLS___eh_globals);
    __cpp_exception_init(eh_globals);
}

/* __ghs_cpp_exception_cleanup retrieves the eh_globals field from
   thread-local storage and calls __cpp_exception_cleanup to avoid
   having all thread-local storage routines linked into minimal
   programs.

   This function is pulled in by the C++ library when exceptions
   are enabled because __get_eh_globals (above) is referenced.
 */
void __ghs_cpp_exception_cleanup(void) {
    void *eh_globals;
    eh_globals = __ghs_GetThreadLocalStorageItem(__ghs_TLS___eh_globals);
    __cpp_exception_cleanup(eh_globals);
}

#endif /* __disable_thread_safe_extensions */

