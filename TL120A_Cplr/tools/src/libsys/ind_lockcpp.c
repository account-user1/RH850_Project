/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/*
 * Implementation of the C++ library locks
 */

/* Take a lock specified by the parameter passed in. A thread can return from
 * this function only if no other thread has called it with with the same
 * value of 'i' without releasing the lock. Currently, the values of 'i' are
 * in the range [0,2], inclusive.  See 'yvals.h' in the ecxx, eecxx, scxx
 * directories.
 */

#if defined(__Chorus)

/*
 * Chorus does not provide a recursive mutex which is required by 
 * the C++ libraries.  We synthesize one here.
 * DO NOT CHANGE THE ORDER OF ANY STATEMENTS in __ghs{Unl,L}ockCpp()
 */

#include <sync/chMutex.h>
#include <exec/chExec.h>

struct RecursiveMutex {
    KnMutex	mutex;
    KnThreadLid	owner;
    int		count;
};

#define THREAD_ID_NIL	(0)

struct RecursiveMutex theLocks[3] = {
	{ K_KNMUTEX_INITIALIZER, THREAD_ID_NIL, 0},
	{ K_KNMUTEX_INITIALIZER, THREAD_ID_NIL, 0},
	{ K_KNMUTEX_INITIALIZER, THREAD_ID_NIL, 0} 
	};

void __ghsLockCpp(int i)
{
    struct RecursiveMutex * rm = theLocks+i;
    KnThreadLid myThreadId = threadSelf();
    
    if(rm->owner==myThreadId) {
	rm->count++;
    } else {
	mutexGet(&rm->mutex);
	rm->owner = myThreadId;
	rm->count = 1;
    }
}

void __ghsUnlockCpp(int i)
{
    struct RecursiveMutex * rm = theLocks+i;
    if(--(rm->count)==0) {
	rm->owner = THREAD_ID_NIL;
	mutexRel(&rm->mutex);
    }
}

/* End __Chorus */
#elif defined(SOLARIS20) /* Solaris Native */
# define _REENTRANT
# include <thread.h>
# define MUTEX_INITIALIZER	(0)
# define THREAD_ID_NIL	(0)

struct RecursiveMutex {
    mutex_t	mutex;
    thread_t	owner;
    int		count;
} theLocks[3] = {
    { MUTEX_INITIALIZER, THREAD_ID_NIL, 0},
    { MUTEX_INITIALIZER, THREAD_ID_NIL, 0},
    { MUTEX_INITIALIZER, THREAD_ID_NIL, 0} 
};


void __ghsLockCpp(int i) 
{
    struct RecursiveMutex * rm = theLocks+i;
    thread_t myThreadId = thr_self();

    if(rm->owner==myThreadId) {
	rm->count++;
    } else {
	if(mutex_lock(&rm->mutex)==0) {
	    rm->owner = myThreadId;
	    rm->count = 1;
	}
    }
}

void __ghsUnlockCpp(int i) 
{
    struct RecursiveMutex * rm = theLocks+i;
    if(--(rm->count)==0) {
	rm->owner = THREAD_ID_NIL;
	mutex_unlock(&rm->mutex);
    }
}

/* End Solaris Native */
#elif defined(__OSE) 

#include "ose.h"
#include "ind_thrd.h"

/* we can't use plain OSE semaphores, as we need reentrant locks */
typedef struct ReentrantLock_struct {
    SEMAPHORE mutex;
    PROCESS owner;
    int count; /* how many times has the same process entered */
} ReentrantLock;

#define PROC_ID_NIL (0)

#define LOCK_COUNT 3
ReentrantLock lock_r[LOCK_COUNT] = {
    { {1, 0, 0}, PROC_ID_NIL, 1},
    { {1, 0, 0}, PROC_ID_NIL, 1},
    { {1, 0, 0}, PROC_ID_NIL, 1}
};

static void ose_lock_acquire( int i ) {
    PROCESS my_pid = current_process();
    if ( lock_r[i].owner == my_pid ) {
        ++lock_r[i].count;
    } else {
        wait_sem( & lock_r[i].mutex );
        lock_r[i].owner = my_pid;
        lock_r[i].count = 1; 
    }
}
    
static void ose_lock_release( int i ) {
    if ( --lock_r[i].count == 0 ) {
        lock_r[i].owner = 0;
        signal_sem( & lock_r[i].mutex );
    }
}

void __ghsLockCpp(int i) 
{ 
    if ( i < LOCK_COUNT )
	ose_lock_acquire( i );
}

void __ghsUnlockCpp(int i) 
{
    if (i < LOCK_COUNT ) 
	ose_lock_release( i );
}
/* End OSE */

/* End LynxOS */
#elif defined(__LYNX)

/* The LynxOS docs and headers are elusive as to whether they offer */
/* a builtin recursive mutex or not, so be safe and synthesize */
/* one here. */
#include <st.h>
#include <sem.h>
# define THREAD_ID_NIL	(0)

struct RecursiveMutex {
    synch_struct	mutex;
    tid_t		owner;
    int			count;
} theLocks[3] = {
    { U_MUTEX_INITIALIZER, THREAD_ID_NIL, 0 },
    { U_MUTEX_INITIALIZER, THREAD_ID_NIL, 0 },
    { U_MUTEX_INITIALIZER, THREAD_ID_NIL, 0 }
};

void __ghsLockCpp(int i)
{
    struct RecursiveMutex * rm = theLocks+i;
    tid_t my_id = getstid();
    
    if(rm->owner==my_id) {
	rm->count++;
    } else {
	if(mutex_enter(&rm->mutex, NULL)==0) {
	    rm->owner = my_id;
	    rm->count = 1;
	}
    }
}

void __ghsUnlockCpp(int i)
{
    struct RecursiveMutex * rm = theLocks+i;
    if(--(rm->count)==0) {
	rm->owner = THREAD_ID_NIL;
	mutex_exit(&rm->mutex);
    }
}

/* End LynxOS */
#elif defined(__LINUX)

#include <features.h>
#define __USE_GNU /* Do this to get access to the non-posix (*_NP) */
		  /* GNU extensions defined in pthreads.h */
#include <pthread.h>

static pthread_mutex_t theLocks[3] = {
    PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP,
    PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP,
    PTHREAD_RECURSIVE_MUTEX_INITIALIZER_NP
};

void __ghsLockCpp(int i)
{
    pthread_mutex_lock(&theLocks[i]);
}

void __ghsUnlockCpp(int i)
{
    pthread_mutex_unlock(&theLocks[i]);
}

/* End Linux */
#elif defined(_MC_EXEC)
/* Mercury libraries */
#include <pthread.h>

static pthread_mutex_t theLocks[3] = {
    PTHREAD_MUTEX_INITIALIZER,
    PTHREAD_MUTEX_INITIALIZER,
    PTHREAD_MUTEX_INITIALIZER
};

void __ghsLockCpp(int i)
{
    pthread_mutex_lock(&theLocks[i]);
}

void __ghsUnlockCpp(int i)
{
    pthread_mutex_unlock(&theLocks[i]);
}

/* End Mercury */

/* Begin Win32 (multithreaded only) */
#elif defined(__windows)

#if !defined (_MT)

void __ghsLockCpp(int i) { }
void __ghsUnlockCpp(int i) { }

#else /* !defined(_MT) */


#include <stdlib.h>
#include <windows.h>
#include <winbase.h>

/* We need this typedef from xmtx.h */
typedef long _Once_t;

static CRITICAL_SECTION winLocks[3];
static _Once_t winOnce[3] = { 0, 0, 0 };

void __ghsLockCpp(int i)
{   
    /* From Plauger src/pjp/c++/sxl/xmtx.c
       This will initialize the critical section only once for each mutex. */
    _Once_t *_Cntrl = winOnce+i;
    _Once_t old;
    
    if (*_Cntrl == 2)
	;
    else if ((old = InterlockedExchange(_Cntrl, 1)) == 0)
    {	/* execute _Func, mark as executed */
	InitializeCriticalSection(&winLocks[i]);
	*_Cntrl = 2;
    }	
    else if (old == 2)
	*_Cntrl = 2;
    else
	while (*_Cntrl != 2)
	    Sleep(1);

    EnterCriticalSection(winLocks+i);
}

void __ghsUnlockCpp(int i)
{
    LeaveCriticalSection(winLocks+i);
}    

#endif /* !defined(_MT) */

/* End Win32 */
#else

#include "ind_thrd.h"

void __ghsLockCpp(int i) 
{ 
    __ghsLock();
}

void __ghsUnlockCpp(int i) 
{ 
    __ghsUnlock();
}


#endif 










