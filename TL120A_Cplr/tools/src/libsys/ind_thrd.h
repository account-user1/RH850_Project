/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _THREAD_H_
#define _THREAD_H_

#include <signal.h>
#include <stdio.h>
#include <time.h>
#include <setjmp.h>
#include <stdint.h>		/* For uintmax_t */

#if !defined(_SIGMAX)
#  if defined(SOLARIS20)
#    define _SIGMAX MAXSIG
#  elif defined(__linux)
#    define _SIGMAX (NSIG-1)
#  endif
#endif

#if defined(_SIGMAX)
typedef void (*SignalHandler)(int);

/*
  The following specifiers are used when calling
  __ghs_GetThreadLocalStorageItem.

  If __ghs_GetThreadLocalStorageItem is customized to
  return a per-thread errno value, define the preprocessor symbol
  USE_THREAD_LOCAL_ERRNO in ind_errn.c.

  If __ghs_GetThreadLocalStorageItem is customized to
  return a per-thread SignalHandlers array, define the preprocessor symbol
  USE_THREAD_LOCAL_SIGNAL in ind_sgnl.c.
 */

enum __ghs_ThreadLocalStorage_specifier {
    __ghs_TLS_asctime_buff,
    __ghs_TLS_tmpnam_space,
    __ghs_TLS_strtok_saved_pos,
    __ghs_TLS_Errno,
    __ghs_TLS_gmtime_temp,
    __ghs_TLS___eh_globals,
    __ghs_TLS_SignalHandlers
};

#ifdef __ghs_pic
#pragma weak __ghs_undefined_func
extern void *__ghs_undefined_func(int);
#endif /* __ghs_pic */

#if defined(__INTEGRITY_SHARED_LIBS)
/* Allow INTEGRITY libraries to use GetThreadLocalStorage or
   __ghs_GetThreadLocalStorageItem */
#pragma weak __ghs_GetThreadLocalStorageItem
/* Allow asctim, strtok, and tmpnam in INTEGRITY libraries to
   to use either GetThreadLocalStorage or
   __ghs_GetThreadLocalStorageItem */
#define GHS_LEGACY_TLS_COMPATIBILITY
#endif

/*
 * __ghs_GetThreadLocalStorageItem() retrieves thread-local storage
 * items needed by library code. In previous releases, this symbol
 * was declared weak to allow use of the legacy GetThreadLocalStorage
 * interface used in releases prior to MULTI 4.2.3.
 *
 * Developing a new thread-local storage implementation:
 *
 * Customized thread-local storage implementations that will only
 * use runtime libraries from MULTI releases 4.2.3 and later
 * can implement __ghs_GetThreadLocalStorageItem() only.  If
 * compatibility with earlier releases is also required, the
 * implementation of GetThreadLocalStorage() is required as well.
 *
 * Upgrading a legacy thread-local storage implementation:
 *
 * If you have a customized thread-local storage implementation
 * that was developed with the previous GetThreadLocalStorage
 * capability, add the following implementation of
 * __ghs_GetThreadLocalStorageItem to maintain compatibility with
 * runtime libraries provided with MULTI 4.2.3 and later.
 *
 *      __ghs_GetThreadLocalStorageItem implementation that
 *      uses an existing GetThreadLocalStorage routine:

	void *__ghs_GetThreadLocalStorageItem(int specifier)
	{
	    ThreadLocalStorage *tls = GetThreadLocalStorage();
	    if(!tls)
		return (void *)0;
	    switch (specifier) {
		case (int)__ghs_TLS_Errno:
		    return (void *)&tls->Errno;
		case (int)__ghs_TLS_SignalHandlers:
		    return (void *)&tls->SignalHandlers;
		case (int)__ghs_TLS_asctime_buff:
		    return (void *)&tls->asctime_buff;
		case (int)__ghs_TLS_tmpnam_space:
		    return (void *)&tls->tmpnam_space;
		case (int)__ghs_TLS_strtok_saved_pos:
		    return (void *)&tls->strtok_saved_pos;
		case (int)__ghs_TLS_gmtime_temp:
		    return (void *)&tls->gmtime_temp;
		case (int)__ghs_TLS___eh_globals:
		    return (void *)&tls->__eh_globals;
	    }
	    return (void *)0;
	}

 */
extern void *__ghs_GetThreadLocalStorageItem(int);

/*
 * Some of the functions in this file are to be implemented by the user for
 * use by the Green Hills Libraries.  See the Building book for more
 * information.
 *
 */

/* Acquire a lock which can be obtained from within an interrupt handler. */
#pragma weak __ghs_InterruptLock
void __ghs_InterruptLock(void);

/* Release the lock acquired via __ghs_InterruptLock. */
#pragma weak __ghs_InterruptUnlock
void __ghs_InterruptUnlock(void);

#ifdef __ghs_pic
#define __ghs_weak_sym_check(_fn) ((void*)_fn != (void*)__ghs_undefined_func)
#else
#define __ghs_weak_sym_check(_fn) (_fn)
#endif

/* Struct used by earlier GetThreadLocalStorage mechanism.
   Use of ThreadLocalStorage from outside libsys is not supported.
   */
typedef struct
{
	int			Errno;
	SignalHandler 		SignalHandlers[_SIGMAX];
	char			tmpnam_space[L_tmpnam];
	char			asctime_buff[30];
	char			*strtok_saved_pos;
	struct tm		gmtime_temp;
	void 			*__eh_globals;
} ThreadLocalStorage;

#if defined(GHS_LEGACY_TLS_COMPATIBILITY)
/* Allow INTEGRITY libraries to use either GetThreadLocalStorage or
 * __ghs_GetThreadLocalStorageItem
 */

/* Return pointer to thread local storage */
#pragma weak GetThreadLocalStorage
ThreadLocalStorage *GetThreadLocalStorage(void);

#ifdef __ghs_pic
#define __ghs_SafeGetThreadLocalStorageItem(item) \
    ((&__ghs_GetThreadLocalStorageItem == &__ghs_undefined_func) ? \
	    (&(GetThreadLocalStorage()->item)) : \
	    (__ghs_GetThreadLocalStorageItem(__ghs_TLS_ ## item)))	
#else
#define __ghs_SafeGetThreadLocalStorageItem(item) \
    (!(&__ghs_GetThreadLocalStorageItem) ? \
	    (&(GetThreadLocalStorage()->item)) : \
	    (__ghs_GetThreadLocalStorageItem(__ghs_TLS_ ## item)))
#endif
#endif /* defined(GHS_LEGACY_TLS_COMPATIBILITY) */

/* A "static" buffer to be shared between ind_gmtm.c and ind_tmzn.c */
extern struct tm __ghs_static_gmtime_temp;

/* Define wrappers for profiling hooks to call interrupt lock if available,
 * otherwise fall back on _ghsLock.  The interrupt lock is necessary if
 * profiling may be used for code executing at interrupt level, or in some
 * other context (e.g. kernel-internal) where the ghsLock cannot be used. */
#define __ghs_ProfileLock() { 						\
    if (__ghs_weak_sym_check(__ghs_InterruptLock))			\
	__ghs_InterruptLock();						\
    else								\
	__ghsLock();							\
}
#define __ghs_ProfileUnlock() { 					\
    if (__ghs_weak_sym_check(__ghs_InterruptUnlock))			\
	__ghs_InterruptUnlock();					\
    else								\
	__ghsUnlock();							\
}

/* Acquire global lock.  Blocks until the lock becomes available. */
/* Implemented by the user for Green Hills libraries.  */
void __ghsLock(void);

/* Release global lock */
/* Implemented by the user for Green Hills libraries.  */
void __ghsUnlock(void);

/* Save arbitrary state across a setjmp() */
/* Implemented by the user for Green Hills libraries.  */
int  __ghs_SaveSignalContext(jmp_buf);

/* Restore arbitrary state across a longjmp() */
/* Implemented by the user for Green Hills libraries.  */
void __ghs_RestoreSignalContext(jmp_buf);

/* Define an inteface for retrieving the thread ID of the calling thread.
 * 
 * This function is optional and may not be implemented by the target.
 */
#pragma weak __ghs_GetCurrentThreadID
uintmax_t __ghs_GetCurrentThreadID(void);

/* Define wrapper that callers can use that deals with the above symbol
 * being weak.
 */
#define __ghs_CurrentThreadID() \
    (__ghs_weak_sym_check(__ghs_GetCurrentThreadID) ? __ghs_GetCurrentThreadID() : 0)

/* Define a GHS inteface for reporting a run-time error on the calling thread.
 * The target may halt, exit, or do some other application-specific behavior
 * in response.
 *
 * This function is optional and may not be implemented by the target.
 */
#pragma weak __ghs_RunTimeErrorDetected
void __ghs_RunTimeErrorDetected(void);

/* Define a GHS inteface for fetching the calling thread's name, if any. If
 * the thread has a name, up to buflen characters will be filled into buf.
 * *actual_len, which must not be NULL, will be filled in with the actual
 * task name length. If there is room in the buffer for the terminating \0,
 * the task name will be NULL terminated.
 *
 * This function is optional, and may not be implemented by the target.
 */
#pragma weak __ghs_GetCurrentThreadName
void __ghs_GetCurrentThreadName(char *buf, size_t buflen, size_t *actual_len);



#if (!defined (EMBEDDED) && !defined (__OSE)) || defined(MINIMAL_STARTUP)
__inline void __ghsLock(void) { }
__inline void __ghsUnlock(void) { }
#endif /* !EMBEDDED && !__OSE */


#define GHSLOCK		__ghsLock();
#define GHSUNLOCK	__ghsUnlock();

/* macros used in stdio library source */
#ifndef __disable_thread_safe_extensions
# define LOCKFILE(f)	flockfile(f);
# define TRYLOCKFILE(f)	ftrylockfile(f);
# define UNLOCKFILE(f)	funlockfile(f);
# define LOCKCREATE(f)	flockcreate(f);
# define LOCKCLEANUP(f)	flockdestroy(f);
# define LOCKINUSE(f)   __ghs_flock_in_use(f)
/* prototypes for FILE lock routines (not in POSIX API) */

void ** __ghs_flock_ptr(void *);

/* Acquire lock for FILE *addr */
/* Implemented by the user for Green Hills libraries.  */
void __ghs_flock_file(void *);

/* Release lock for FILE *addr */
/* Implemented by the user for Green Hills libraries.  */
void __ghs_funlock_file(void *);

/* Non blocking acquire lock for FILE *addr.  May return -1 if */
/* this cannot be implemented. Returns 0 on success and nonzero. */
/* Implemented by the user for Green Hills libraries.  */
int __ghs_ftrylock_file(void *);

int __ghs_flock_in_use(void *);

/* Callbacks to initialize local lock data structures before they */
/* are used. */
/* Implemented by the user for Green Hills libraries.  */
void __ghs_flock_create(void **);
void __ghs_flock_destroy(void *);
#else
# define LOCKFILE(f)
# define TRYLOCKFILE(f)	-1;	/* no lock obtained */
# define UNLOCKFILE(f)
# define LOCKCREATE(f)	
# define LOCKCLEANUP(f)
# define LOCKINUSE(f) 0
#endif
/* prototypes for FILE lock routines (not in POSIX API) */
void flockcreate(FILE *stream);
void flockdestroy(FILE *stream);

/* Generic lock routines that can be used by the libraries for non
 * FILE-based locks. These routines may be left undefined. If defined, they
 * must be included in the program whenever __ghsLock() and __ghsUnlock()
 * are, such as by defining them in the same compilation unit as __ghsLock()
 * and __ghsUnlock(). Weak references alone will not cause an object to
 * be linked from a library.
 */
extern void __ghs_lock_create(void **lockaddr);
extern void __ghs_lock_destroy(void *lockaddr);
extern void __ghs_lock_lock(void *lockaddr);
extern void __ghs_lock_unlock(void *lockaddr);
#pragma weak __ghs_lock_create
#pragma weak __ghs_lock_destroy
#pragma weak __ghs_lock_lock
#pragma weak __ghs_lock_unlock


#ifdef __Declare_Initialization_Routines__
#pragma weak __gh_iob_init
extern void __gh_iob_init(void);
#pragma weak __gh_error_init
extern void __gh_error_init(void);
#pragma weak __gh_lock_init

/* A callback to initialize the lock data structure before it is used. */
/* This function is provided by the user for use by the Green Hills libraries.
 */
extern void __gh_lock_init(void);
#if defined(__OSE)
#else
#pragma weak __cpp_exception_init
#endif /* __OSE */
extern void __cpp_exception_init(void **);
#if defined(__OSE)
#else
#pragma weak __cpp_exception_cleanup
#endif /* __OSE */
extern void __cpp_exception_cleanup(void **);
#endif /* __Declare_Initialization_Routines__ */
#endif /* defined(_SIGMAX) */
#endif /* _THREAD_H_ */

