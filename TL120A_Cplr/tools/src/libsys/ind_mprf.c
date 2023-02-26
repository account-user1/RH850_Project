/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_mprf.c: Machine Independent Call Count Profiling module. */

#include "inddef.h"
#include "ind_exit.h"
#include "ind_heap.h"
#include "ind_io.h"
#include "ind_thrd.h"
#include "indos.h"

/* This is the number of CNT structures we will allocate at one time. */
/* When we use up all the current CNT structures, we will allocate another */
/* set, and link them together in a linked list. */
#if defined(__V850) && (__PTR_BIT==16)
#define CNTCHUNKSIZE 128
#elif defined(__ARM)
#define CNTCHUNKSIZE 256
#else
#define CNTCHUNKSIZE 1024
#endif

#if __PTR_BIT <= 32
typedef struct {
    int pc;	        /* This holds the pc of the function. */
    int *countPtr;	/* This points to the call count of the function. */
} CNT;
#else /* __PTR_BIT */
/* 64-bit data */

typedef struct {
    char *pc;	        /* This holds the pc of the function. */
    int  *countPtr;	/* This points to the call count of the function. */
} CNT;
#endif /* __PTR_BIT */

typedef struct CNT_List {
    struct CNT_List *next;	/* Pointer to the next list node. */
    int numUsed;		/* The number of array elements used. */
    CNT counts[CNTCHUNKSIZE];	/* The array of count information. */
} CNT_List;

#if __PTR_BIT > 32
/*
 * Use a packed array of 32-bit values to avoid padding that would occur
 * with 64-bit alignment.
 */
typedef struct {
    unsigned int pc[2];	/* This holds the pc of the function. */
    int countPtr;	/* This points to the call count of the function. */
} CNT_packed;

typedef struct {
    unsigned int pc[2];
} pc_overlay;

typedef struct CNT_List_packed {
    struct CNT_List *next;	/* Pointer to the next list node. */
    int numUsed;		/* The number of array elements used. */
    CNT_packed counts[CNTCHUNKSIZE];	/* The array of count information. */
} CNT_List_packed;
#endif /* __PTR_BIT */

/* cntHead points at the head of our counts list.  cntTail points at
 * the tail of the list, since we will insert at the end.  (We could insert
 * at the beginning, but that will cause the output to appear in reverse order,
 * which is different than the previous behavior, so I kept it in order).
 * cntFreeList holds all the CNT_List structures that are no longer in use.
 * This only happens when the list is cleared, or when we dump the list.  When
 * we dump the list, we allocate an extra CNT_List structure to help us make
 * less calls to write().
 */
static CNT_List *__cntHead__, *__cntTail__, *__cntFreeList__;
#ifdef __disable_thread_safe_extensions
static int in_mcount;
#endif

/* Macro for printing errors */
#define PERROR(msg) write(2, msg, sizeof(msg)-1);

/* File System I/O Calls to write the file to the host */
#if defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)
#define HOSTIO_CREAT hostio_creat
#define HOSTIO_WRITE write
#define HOSTIO_CLOSE close
#else
#define HOSTIO_CREAT __ghs_hostio_creat
#define HOSTIO_WRITE __ghs_hostio_write
#define HOSTIO_CLOSE __ghs_hostio_close
#endif

#define _0660	0x1b0	/* MISRA C does not allow octal constants */

/* Holds the atexit call to __ghs_prof_dump_callcounts. This is checked by
   __ghs_prof_dump_callcounts to determine if any data exists to dump. */
static struct __GHS_AT_EXIT atexit_dump_callcounts;

/**
 * Clears the call count information.  This can be used as a command line
 * procedure call from MULTI so that you can get the call counts for a
 * specific interval in a run of a program.  Just stop the program, clear
 * the data, run to another point, and dump.
 *
 * @author	Jimmy
 */
void __ghs_prof_clear_callcounts(void)
{
    CNT_List *p, *next;
    int i;

    for (p = __cntHead__; p; p = next) {
	next = p->next;

	/* Clear all the counts to 0 for this set.  For good measure, also
	 * set the pc's to 0. */
	for (i=0; i<p->numUsed; i++) {
	    p->counts[i].pc = 0;
	    *(p->counts[i].countPtr) = 0;
	}

	/* Now free this set by putting it on the free list. */
	p->next = __cntFreeList__;
	__cntFreeList__ = p;
    }
    __cntHead__ = 0;
    __cntTail__ = 0;
}

/**
 * Dumps the call count information.  This function used to be written
 * as if it were only called once.  It trashed the data structures it used,
 * and also locked up mcount by setting in_mcount and not unsetting it.
 * But now, MULTI may call this function when it does a profdump, so I fixed
 * it to behave properly.  And I also cleared out all the obfuscated code in
 * here.  You should have seen this function before I rewrote it.
 *
 * @author	Jimmy
 */
void __ghs_prof_dump_callcounts(void)
{
#if __PTR_BIT <= 32
    int h[3];		/* lpc, hpc, count */
#else /* __PTR_BIT */
    int h[5];		/* lpc[0-1], hpc[2-3], count */
#endif /* __PTR_BIT */
    int CNT_size;
    int fd, totalUsed;
    static const char monout[] = "mon.out";
    CNT_List *p;

    /* If no call counts were ever recorded, just return. */
    if (!atexit_dump_callcounts.func) {
	return;
    }

    /* creat() and write() may have been compiled for profiling */
#ifdef __disable_thread_safe_extensions
    in_mcount = 1;
#endif

    for (totalUsed = 0, p = __cntHead__; p; p = p->next)
	totalUsed += p->numUsed;

    /* construct header for mon.out file */
#if __PTR_BIT <= 32
    h[0] = h[1] = 0;		/* no stochastic samples */
    h[2] = totalUsed;
    CNT_size = sizeof(CNT);
#else /* __PTR_BIT */
    h[0] = h[1] = h[2] = h[3] = 0;	/* no stochastic samples */
    h[4] = totalUsed;
    CNT_size = sizeof(CNT_packed);
#endif /* __PTR_BIT */

    /* Write out the file. Walk the list of buffer chunks and write each one. */

    /* Use hostio, since the file belongs on the host system, not the target
     * system.
     */
    if ((fd = HOSTIO_CREAT(monout, _0660)) < 0) {
        PERROR("mcount: could not create mon.out\n");
    } else {
	if (HOSTIO_WRITE(fd, h, sizeof(h)) != sizeof(h)) {
	    PERROR("mcount: could not write mon.out\n");
	} else if (totalUsed > 0) {
	    int i, len;
#ifdef USE_STACK
#if __PTR_BIT <= 32
	    CNT_List local, *temp = &local;
#else /* __PTR_BIT */
	    /* 64-bit Code */
	    CNT_List_packed local, *temp = &local;
#endif /* __PTR_BIT */
#else
#if __PTR_BIT <= 32
	    /* 32-bit Code */
	    CNT_List *temp;

	    /* We need to allocate one CNT_List structure so that we can */
	    /* write our buffers out 1024 at a time instead of 1 at a time. */
	    if (__cntFreeList__) {
		temp = __cntFreeList__;
		__cntFreeList__ = __cntFreeList__->next;
	    } else {
		/* Second argument to __ghs_calloc is alignment */
		temp = (CNT_List *) __ghs_calloc(sizeof(CNT_List), 16);
	    }

#else /* __PTR_BIT */
	    /* 64-bit Code */
	    static CNT_List_packed *temp = NULL;
	    /* Only allocate once */
	    if( temp == NULL )
		temp = (CNT_List_packed *) __ghs_calloc(sizeof(CNT_List_packed),
			16 );
#endif /* __PTR_BIT */

	    if (!temp) {
		PERROR("__ghs_prof_dump_callcounts: Could not allocate memory.\n");
		return;
	    }
#endif

	    /* Now traverse our list of call count sets, and write */
	    /* them out one set of 1024 at a time.  We will copy the */
	    /* sets to temp, with the modification that instead of */
	    /* the pointers to the count, we will fill temp with the */
	    /* actual counts instead. */
	    for (p = __cntHead__; p; p = p->next) {
		for (i=0;i<p->numUsed;i++) {

#if __PTR_BIT <= 32
		    temp->counts[i].pc = p->counts[i].pc;
#else /* __PTR_BIT */
		    /* 64-bit Code */
		    {
			pc_overlay *tpc;
			tpc = (pc_overlay *)(&p->counts[i].pc);
			temp->counts[i].pc[0] = tpc->pc[0];
			temp->counts[i].pc[1] = tpc->pc[1];
		    }
#endif /* __PTR_BIT */
#if defined(__PTR_BIT) && __PTR_BIT < 32 && __PTR_BIT == __SHRT_BIT
		    temp->counts[i].countPtr = (int *)(short)(*p->counts[i].countPtr);
#else
#if __PTR_BIT <= 32
		    temp->counts[i].countPtr = (int *)(*p->counts[i].countPtr);
#else /* __PTR_BIT */
		    temp->counts[i].countPtr = (int)(*p->counts[i].countPtr);
#endif /* __PTR_BIT */
#endif
		}
		/* update the len based on the size */
		len = p->numUsed * CNT_size;
		/* Write out up to 1024 at a time. */
		if (HOSTIO_WRITE(fd, (void *) temp->counts, len) != len) {
		    PERROR("mcount: could not write mon.out\n");
		    break;
		}
	    }

#if __PTR_BIT <= 32
#ifndef USE_STACK
	    /* Put temp on the free list, since we are done with it. */
	    temp->next = __cntFreeList__;
	    __cntFreeList__ = temp;
#endif
#endif /* __PTR_BIT */
	}
	HOSTIO_CLOSE(fd);
    }
#ifdef __disable_thread_safe_extensions
    in_mcount = 0;
#endif
}

/**
 * Updates the call count information.
 *
 * @param	area	A pointer to a memory location which holds the
 *			call count for this function.  This location should
 *			hold 0 if this is the first time the function has
 *			been called.
 * @param	archead	The address of the function.
 * @author	Jimmy
 */
void __ghs_indmcount(int *area, void (*archead)(void))
{
    static int nomemory;
#ifdef __disable_thread_safe_extensions
    /* This is not thread-safe; our intent is to prevent infinite recursion. */
    if (in_mcount)
	return;
    in_mcount = 1;
#endif

    if (nomemory)
	return;
    /* If the count is 0, that means we have not added this function to
     * our list of counts.  Otherwise we already have so all we have to do
     * is increment the count. */
    if (!*area) {
	/* Lock only when changing the call count data structures */
	__ghs_ProfileLock();
	/* We need to add this function to our list.  First check for
	 * unused slots in cntTail. */
	if (!__cntTail__ || __cntTail__->numUsed == CNTCHUNKSIZE) {
	    /* Allocate a new set of CNT structures.  Either this
	     * is the first set, or we used up all of the previous set. */
	    CNT_List *p;

	    /* Get one off the free list first, otherwise allocate one */
	    if (__cntFreeList__) {
		p = __cntFreeList__;
		__cntFreeList__ = __cntFreeList__->next;
		p->next = 0;
		p->numUsed = 0;
	    } else
		p = (CNT_List *) __ghs_calloc(sizeof(CNT_List), 16);

	    /* Check for any errors. */
	    if (!p) {
		PERROR("mcount: could not allocate memory\n");
		__ghs_ProfileUnlock();
		nomemory = 1;
		return;		/* LEAVE in_mcount SET, we're inactive now. */
	    } else {
		if (!atexit_dump_callcounts.func) {
		    atexit_dump_callcounts.func = __ghs_prof_dump_callcounts;
		    __ghs_at_exit(&atexit_dump_callcounts);
		}
	    }

	    /* Now insert the new set at the end of the list. */
	    if (__cntTail__) {
		__cntTail__->next = p;
		__cntTail__ = p;
	    } else {
		__cntHead__ = __cntTail__ = p;
	    }
	}
	/* Add the function to our list. */
#if __PTR_BIT <= 32
	__cntTail__->counts[__cntTail__->numUsed].pc = (int) archead;
#else /* __PTR_BIT */
	__cntTail__->counts[__cntTail__->numUsed].pc = (char *)archead;
#endif /* __PTR_BIT */
	__cntTail__->counts[__cntTail__->numUsed++].countPtr = (int *) area;

	__ghs_ProfileUnlock();
    }
    ++*area;

#ifdef __disable_thread_safe_extensions
    in_mcount = 0;
#endif
}
