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
#include "inderrno.h"
#include "ind_thrd.h"

/*
  Thread-Local errno Values
  =========================

  To make library functions that set errno thread-safe, references
  to errno are made using __gh_get_errno and __gh_set_errno when
  EMBEDDED is defined.

  By default this file causes the libraries to use a single,
  global errno value.

  If __ghs_GetThreadLocalStorageItem is customized to
  return a per-thread errno value, this file must be built with the
  preprocessor symbol USE_THREAD_LOCAL_ERRNO defined.

  Programs not compiled with the proper definition of errno will
  reference the global errno value. If a per-thread errno value
  is implemented, programs must #include <errno.h> to
  properly reference errno.

  These errno functions are provided in this file instead of in
  ind_thrd.c to avoid pulling in the contents of ind_thrd.c for
  stand-alone programs that reference errno without otherwise
  referencing the contents of ind_thrd.c (unless USE_THREAD_LOCAL_ERRNO
  is defined).

*/

/* If __ghs_GetThreadLocalStorageItem returns per-thread errno,
   uncomment the following preprocessor macro or specify the compiler
   option -DUSE_THREAD_LOCAL_ERRNO when bulding this file.
 */
/* #define USE_THREAD_LOCAL_ERRNO */

/*
  If compiling with the MINIMAL_STARTUP option,
  __ghs_GetThreadLocalStorageItem does not exist, so use the
  global errno.
*/
#if defined(MINIMAL_STARTUP)
#undef USE_THREAD_LOCAL_ERRNO
#endif

/*  Define the global errno value. */
#undef errno
int errno;

int *__gh_errno_ptr(void)
{
#if defined(USE_THREAD_LOCAL_ERRNO)
    int *errnoptr = __ghs_GetThreadLocalStorageItem(__ghs_TLS_Errno);
    if(!errnoptr)
	errnoptr = &errno;
    return errnoptr;
#else
    return &errno;
#endif
}

void __gh_set_errno(int err)
{
#if defined(USE_THREAD_LOCAL_ERRNO)
    int *p = __gh_errno_ptr();
    *p = err;
#else
    errno = err;
#endif
}

int  __gh_get_errno(void)
{
#if defined(USE_THREAD_LOCAL_ERRNO)
    int *p = __gh_errno_ptr();
    return *p;
#else
    return errno;
#endif
}
