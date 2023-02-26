/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_gprf.c: Call Graph Profiling module. */

#include "inddef.h"
#if !defined(__INTEGRITY)
#include "ind_crt1.h"
#endif
#include "ind_io.h"
#include "ind_exit.h"
#include "ind_heap.h"
#include "indos.h" /* For O_CREAT etc. */

#include <string.h> /* for memset() */
#include <stdint.h> /* for int32_t, etc. */

/* Constants to establish the size of the hash table and the
   size of the arc pool.

   The number of entries in the hash table is the size of the
   .text section divided by HASHDIVISOR.

   The hash function is the call source's offset into the
   .text section divided by the HASHDIVISOR.

   HASHDIVISOR should be a power of 2 and sized so a small
   number of call sources lie in each hash bucket
   Use an unsigned constant so division is a simple shift.

   Decreasing HASHDIVISOR will increase the hash table size
   and reduce the linked list searching needed for consecutive
   function calls that would otherwise hash to the same hash table
   entry.
 */
#define HASHDIVISOR 32U

/* The number of entries in the arc pool is ARCMULTIPLIER arcs for
   each ARCDIVISOR bytes in the .text section. This fraction,
   ARCMULTIPLIER/ARCDIVISOR, is 3/32 by default.

   If you see the error "gcount: not enough arcs to record call graph",
   adjust these quantities to make a larger fraction, such as 1/8.

   If you see the error "gcount: could not allocate memory", adjust
   these quantities to make a smaller fraction. Most programs can
   can use a fraction of 1/16 or 1/32 without running out of arcs.

   If ARCDIVISOR is an unsigned power of 2, the division operation
   will consist of a simple shift.
 */
#define ARCMULTIPLIER	 3U
#define ARCDIVISOR	32U

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

/* Typedef for address. It must be at least 32 bits */
#if __PTR_BIT <= 32
typedef int32_t arcf_t;
#else /* __PTR_BIT */
typedef char *  arcf_t;
#endif /* __PTR_BIT */

/* Arc data structure held in the arc pool */
typedef struct _Arc {
    arcf_t	arctail; /* Address in caller function */
    arcf_t	archead; /* Address in called function */
    int32_t	count;
    struct _Arc *next;
} Arc;


/* Process only the .text section.
   (.vletext is used in place of .text for certain PowerPC targets.)

   Code to process .secinfo could be added, although .secinfo is
   primarily used to describe program sections that must be copied
   from ROM to RAM, and not to mark text sections. Any program
   text sections that were copied from ROM to RAM, however,
   could be detected by examining .secinfo.
 */
#ifdef __vle
#define TEXT_BEGIN __ghsbegin_vletext
#define TEXT_END   __ghsend_vletext
extern void __ghsbegin_vletext(void), __ghsend_vletext(void);
#else
#define TEXT_BEGIN __ghsbegin_text
#define TEXT_END   __ghsend_text
#  ifdef __NC_FASTCC
extern void __attribute__((force_cdecl)) __ghsbegin_text(void), __ghsend_text(void);
#  else
extern void __ghsbegin_text(void), __ghsend_text(void);
#  endif /* __NC_FASTCC */
#endif
static int32_t __ghscallgraph_nomemory;


/************
  Hash Table
*************/
/* The hash table of pointers to Arcs */
static Arc **        __ghscallgraph_hashtbl;
/* The total number of entries in the hash table */
static unsigned long __ghscallgraph_hashtbl_count;


/**********
  Arc Pool
***********/
/* The pool of arc data structures */
static Arc *         __ghscallgraph_arcpool;
/* The total number of arcs in the arc pool */
static unsigned long __ghscallgraph_arcpool_count;
/* The next available arc in the arc pool */
static unsigned long __ghscallgraph_arcpool_next;


/************
  Arc Buffer
*************/
/* The arc buffer used by __ghs_prof_dump_callgraph to hold a
   reasonable amount of callgraph data for each call to write()  */
static char *        __ghscallgraph_arcbuffer;
/* The maximum number of arcs held by the arc buffer */
#define ARCBUFFER_MAX_ELEMENTS 1024
/* The number of arcs held by the arc buffer */
static unsigned long __ghscallgraph_arcbuffer_elements;
/* The size of one arc to hold arctail, archead, and count */
#define ARCBUFFER_ARCSIZE (2*sizeof(arcf_t) + sizeof(int32_t))
/* The total size, in bytes, of the arc buffer */
static unsigned long __ghscallgraph_arcbuffer_bytesize;


/* The size, in bytes, of memory allocated in __ghs_prof_init_callgraph */
static unsigned long __ghscallgraph_memallocated;

/* Prevents reentrancy from interrupt handlers. */
#ifdef __disable_thread_safe_extensions
static int32_t __ghscallgraph_in_gcount;
#endif

/* Holds the atexit call to __ghs_prof_dump_callgraph. This is checked by
   __ghs_prof_dump_callgraph to determine if any data exists to dump. */
static struct __GHS_AT_EXIT atexit_dump_callgraph;

/**
 * __ghs_prof_clear_callgraph()
 *
 * Clears the call graph information.  This is run by a command-line
 * procedure call from MULTI using the "profilemode clear" command.
 *
 * This allows you to retrieve the call graph for a specific interval
 * in a run of a program by stopping the program, clearing the data,
 * running to another point, and then dumping the call graph data.
 *
 */
void __ghs_prof_clear_callgraph(void) {
    if (__ghscallgraph_hashtbl) {
	memset((char *) __ghscallgraph_hashtbl, 0,
		__ghscallgraph_memallocated);
    }
#ifdef __disable_thread_safe_extensions
    __ghscallgraph_in_gcount = 0;
#endif
}

#define _0660	0x1b0	/* MISRA C does not allow octal constants */

/**
 * __ghs_prof_dump_callgraph()
 *
 * Writes out the call graph information.  This is run by a command-line
 * procedure call from MULTI using the "profdump" command.
 *
 * This allows you to retrieve the call graph for a specific interval
 * in a run of a program by stopping the program, clearing the data,
 * running to another point, and then dumping the call graph data.
 *
 */
void __ghs_prof_dump_callgraph(void) {
    static const char writefailed[] = "gcount: could not write gmon.out\n";
    int32_t fd;
    unsigned long hashidx;
    int32_t arcbufferidx;

#if __PTR_BIT <= 32
    /* lpc, hpc, count */
    int32_t gmon_header[3];
#else /* __PTR_BIT */
    /* 64-bit pointer data */
    /* [0-1]=lpc, [2-3]=hpc, [4]=cnt
     * use 32-bit array to avoid padding */
    uint32_t gmon_header[5];
#endif /* __PTR_BIT */

    static const char gmonout[] = "gmon.out";

    /* If no arcs were ever recorded, just return. */
    if (!atexit_dump_callgraph.func) {
	return;
    }

    if (__ghscallgraph_nomemory != 0) {
	PERROR("gcount: could not allocate memory\n");
	return;
    }

#ifdef __disable_thread_safe_extensions
    __ghscallgraph_in_gcount = 1;		/* disable profiling */
#endif

    if(__ghscallgraph_arcpool_next >=
	    __ghscallgraph_arcpool_count) {
	/* If you get this error, decrease the size of
	   ARCDIVISOR, above. It should be a power of 2. */
	PERROR("gcount: not enough arcs to record call graph\n");
    }

    /************************
      Write gmon.out header
    ************************/

    /* The header contains begin_addr, end_addr, sizeof(mcount bucket) */
    gmon_header[0] = gmon_header[1] = 0; /* no sampling information */
#if __PTR_BIT <= 32
    gmon_header[2] = sizeof(gmon_header);
#else /* __PTR_BIT */
    /* 64-bit support */
    gmon_header[2] = gmon_header[3] = 0;
    gmon_header[4] = sizeof(gmon_header);
#endif /* __PTR_BIT */

    if ((fd = HOSTIO_CREAT(gmonout, _0660)) < 0) {
	PERROR("gcount: could not create gmon.out\n");
	return;
    }

    if (HOSTIO_WRITE(fd, gmon_header, sizeof(gmon_header)) != sizeof(gmon_header)) {
	PERROR(writefailed);
	goto closefile;
    }

    /**********************
      Write callgraph arcs
    ***********************/

    arcbufferidx = 0;
    for(hashidx = 0; hashidx < __ghscallgraph_hashtbl_count; ++hashidx) {
	Arc *a = __ghscallgraph_hashtbl[hashidx];
	while(a != NULL) {
	    memcpy((void *)(__ghscallgraph_arcbuffer +
		    arcbufferidx * ARCBUFFER_ARCSIZE),
		    (void *)a, ARCBUFFER_ARCSIZE);
	    arcbufferidx++;

	    /* Check if the arc buffer is full */
	    if(arcbufferidx == __ghscallgraph_arcbuffer_elements) {
		/* Write out the arc buffer */
		if (HOSTIO_WRITE(fd, __ghscallgraph_arcbuffer,
			__ghscallgraph_arcbuffer_bytesize) !=
			__ghscallgraph_arcbuffer_bytesize) {
		    PERROR(writefailed);
		    goto closefile;
		}
		/* Start filling the arc buffer again */
		arcbufferidx = 0;
	    }

	    a = a->next;
	}
    }

    /* Check if any unwritten arcs remain in the arc buffer */
    if(arcbufferidx != 0) {
	int32_t size = arcbufferidx * ARCBUFFER_ARCSIZE;
	/* Write out the arc buffer */
	if (HOSTIO_WRITE(fd, __ghscallgraph_arcbuffer, size) != size) {
	    PERROR(writefailed);
	}
    }

closefile:
    HOSTIO_CLOSE(fd);

    /* Ideally, the code should free the arc buffer, hash table and
     * arc pool, but __ghs_alloc() allocates through sbrk(), which
     * doesn't allow that.
     */

    /* do not clear __ghscallgraph_in_gcount, because we are finished
     * profiling. It will be cleared in __ghs_prof_clear_callgraph().
     */
}

/**
 * init_callgraph()
 *
 * Allocate memory to hold the call graph information. This is called
 * by __ghs_indgcount() the first time __ghs_indgcount() executes.
 *
 * Returns 0 for success, -1 if the memory could not be allocated.
 *
 */
static int32_t init_callgraph(void) {
    __ghscallgraph_arcpool_count = 0;
    __ghscallgraph_arcpool_next = 0;

    /* Compute the number of hash table entries and memory required */
    __ghscallgraph_hashtbl_count = ((char *)TEXT_END -
	    (char *)TEXT_BEGIN + HASHDIVISOR-1)/HASHDIVISOR;
    __ghscallgraph_memallocated =
	(unsigned long)(__ghscallgraph_hashtbl_count *
		sizeof(Arc *));

    /* Compute the number of arcs to allocate and memory required */
    __ghscallgraph_arcpool_count = (unsigned long)((char *)TEXT_END -
		    (char *)TEXT_BEGIN + ARCDIVISOR-1)/ARCDIVISOR;
#if defined(ARCMULTIPLIER)
    __ghscallgraph_arcpool_count *= ARCMULTIPLIER;
#endif
    __ghscallgraph_memallocated +=
	(unsigned long)(__ghscallgraph_arcpool_count *
		sizeof(Arc));

    /* Compute the size of the arc buffer used in
       __ghs_prof_dump_callgraph */
    __ghscallgraph_arcbuffer_elements =
	(__ghscallgraph_arcpool_count < ARCBUFFER_MAX_ELEMENTS) ?
	__ghscallgraph_arcpool_count : ARCBUFFER_MAX_ELEMENTS;
    __ghscallgraph_arcbuffer_bytesize =
	__ghscallgraph_arcbuffer_elements *
	ARCBUFFER_ARCSIZE;
    __ghscallgraph_memallocated +=
	__ghscallgraph_arcbuffer_bytesize;

    /* Allocate memory for the hash table, arc pool, and arc buffer */
    __ghscallgraph_hashtbl =
	(Arc **)__ghs_calloc(__ghscallgraph_memallocated , 1);

    if (!__ghscallgraph_hashtbl) {
	PERROR("gcount: could not allocate ");
	{
	    int i;
	    char digits[20]; /* This is enough for a 64-bit quantity */
	    unsigned long memallocated = __ghscallgraph_memallocated;
	    digits[0]='0';
	    for(i=0;memallocated && i<20;++i) {
		digits[i] = '0' + (memallocated % 10);
		memallocated/=10;
	    }
	    do {
		write(2, (void *)(digits+i), 1);
	    } while (i--);
	}
	PERROR(" bytes from .heap\n");
	__ghscallgraph_memallocated = 0;
	__ghscallgraph_nomemory = 1;
	return -1;
    }

    /* Place the arc pool just after the hash table */
    __ghscallgraph_arcpool = (Arc *)(__ghscallgraph_hashtbl +
	    __ghscallgraph_hashtbl_count);

    /* Place the arc buffer just after the arc pool */
    __ghscallgraph_arcbuffer = (char *)(
	    __ghscallgraph_arcpool +
	    __ghscallgraph_arcpool_count);

    /* Arrange for __ghs_prof_dump_callgraph() to be called when the
       program exits. */
    if (!atexit_dump_callgraph.func) {
	atexit_dump_callgraph.func = __ghs_prof_dump_callgraph;
	__ghs_at_exit(&atexit_dump_callgraph);
    }

    return 0;
}


/**
 * __ghs_indgcount()
 *
 * Adds one call arc into the call graph. Called by the assembly
 * routine __ghs_gcount(), which is in turn called in the prologue
 * of functions compiled with the -pg (Call Graph) option.
 *
 * archead is an address in the caller of __ghs_gcount.
 *
 * arctail is a pointer to an address in the caller of the caller
 * of __ghs_gcount().

 * The addresses actually are the return addresses passed to the callee
 * and to __ghs_indgcount().
 * The following pseudocode illustrates this.
 *
 * void caller() {
 *   callee()
 * after_callee:
 * }
 *
 * void callee() {
 *   __ghs_gcount(address to return to in caller);
 * after_ghs_gcount:
 * }
 *
 * void __ghs_gcount(address to return to in caller) {
 *   __ghs_indgcount(address to return to in callee,
 *     pointer to address to return to in caller);
 * }
 *
 * Therefore the above sequence is equivalent to
 * __ghs_gcount(after_callee) ->
 * __ghs_indgcount(after_ghs_gcount, &after_callee)
 *
 */
void __ghs_indgcount(void (*archead)(void), void (**parctail)(void))
{
    Arc *arcptr, **arcnextptr;
    void *arctail;
    unsigned long hashidx;
#ifdef __disable_thread_safe_extensions
    if (__ghscallgraph_in_gcount)
	return;
    __ghscallgraph_in_gcount = 1;
#endif
    if (__ghscallgraph_nomemory)
	return;

    if (!__ghscallgraph_hashtbl) {
	if (init_callgraph() != 0) {
	    /* Leave __ghscallgraph_in_gcount set; this module
	       is now inactive. */
	    return;
	}
    }

    arctail = *parctail;
    hashidx = ((char *)arctail - (char *)TEXT_BEGIN) / HASHDIVISOR;

    /* Verify that the caller (arctail) is in the hash table */
    if(hashidx >= __ghscallgraph_hashtbl_count) {
	goto unlock;
    }

    arcnextptr = &(__ghscallgraph_hashtbl[hashidx]);

    /* The linked list holds arcs in the order they were added */
    for(;;) {

	arcptr = *arcnextptr;

	/* Check if there are no more arcs at earlier addresses */
	if(!arcptr) {
	    /* Add this arc after all other arcs (if any) */
	    break;
	}

	if((arcf_t)arctail == arcptr->arctail) {
	    if((arcf_t)archead == arcptr->archead) {
		/* Increment the existing arc count in this location */
		arcptr->count++;
		goto unlock;
	    }
	}

	/* Advance to the next arc in the list */
	arcnextptr = &(arcptr->next);
    }

    if(__ghscallgraph_arcpool_next >=
	    __ghscallgraph_arcpool_count) {
	/* This is an error condition. It is reported in
	   __ghs_prof_dump_callgraph(). Set the next
	   index to one greater than the arc pool size
	   to distinguish the case where the arc pool
	   is exactly large enough from the case where
	   the arc pool is actually exhausted.
	 */
	__ghscallgraph_arcpool_next =
	    __ghscallgraph_arcpool_count + 1;
	goto unlock;
    }

    /* Add new arc to the linked list in the hash table. */
    arcptr = __ghscallgraph_arcpool + __ghscallgraph_arcpool_next;
    arcptr->archead = (arcf_t)archead;
    arcptr->arctail = (arcf_t)arctail;
    arcptr->count = 1;
    arcptr->next = *arcnextptr;
    *arcnextptr = arcptr;
    __ghscallgraph_arcpool_next++;

unlock:
#ifdef __disable_thread_safe_extensions
    __ghscallgraph_in_gcount = 0;
#endif
    return;
}
