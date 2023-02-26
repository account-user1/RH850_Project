/*
                        Low-Level System Library

            Copyright 1990-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_bcnt.c: compiler internal functions for Block Coverage Profiling. */

#if defined(EMBEDDED) || defined(__OSE)

#include "indos.h"
#include "ind_io.h"
#include "ind_exit.h"
#include "ind_thrd.h"

struct blk { void (*addr)(void); unsigned int cnt; };
struct bhdr { int len; struct blk *info; int inserted; struct bhdr *next; };
static struct bhdr *blocklisthead;

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

/* Holds the atexit call to __ghs_prof_dump_coverage. This is checked by
   __ghs_prof_dump_coverage to determine if any data exists to dump. */
static struct __GHS_AT_EXIT atexit_dump_coverage;

/**
 * Clears the coverage information.  This can be used as a command line
 * procedure call from MULTI to make it possible to generate coverage
 * information only for a specific interval in a run of a program.
 * Stop the program, call __ghs_prof_clear_coverage(), run to another
 * point, dump.
 *
 * The functions remain in the linked list so that any future block
 * coverage data gathered within a function, such as a main loop,
 * that is currently executing but that is not called again,
 * will be output by __ghs_prof_dump_coverage.
 *
 */
void __ghs_prof_clear_coverage(void)
{
    int i;
    struct bhdr *p, *next;

    for (p = blocklisthead; p; p = next) {
	next = p->next;
	if (p->len > 0) {
	    /* Reset all counts to 0 except the last block's count. */
	    for (i = 0; i < p->len - 1; i++)
		p->info[i].cnt = 0;
	    /* The last block's count can be either a special -1 marker or a
	       normal run count. */
	    if (p->info[p->len - 1].cnt != (unsigned int)-1)
		p->info[p->len - 1].cnt = 0;
	}
    }
}

#define _0644	0x1a4	/* MISRA C does not allow octal constants */

/* This routine is global to allow it to be called from MULTI */
void __ghs_prof_dump_coverage(void)
{
    int fd;
    struct bhdr *test;

    /* If no blocks were ever counted, just return. */
    if (!atexit_dump_coverage.func) {
	return;
    }

    /*
     * Use hostio, since the file belongs on the host system, not
     * the target system.
     */
    fd = HOSTIO_CREAT("bmon.out", _0644);

    if (fd == -1) {
	PERROR("bcount: could not create bmon.out\n");
	return;
    }
    for (test = blocklisthead; test; test = test->next) {
	int contains_nonzero_count = 0;
	int i;
	int cnt;
	if (test->len > 0) {
	    for (i = 0; i < test->len - 1; i++) {
		if (test->info[i].cnt != 0) {
		    contains_nonzero_count = 1;
		    break;
		}
	    }
	    /* The last block can have either a special -1 marker count or a
	       normal run count. */
	    if (test->info[test->len - 1].cnt != 0 &&
		    test->info[test->len - 1].cnt != (unsigned int)-1)
		contains_nonzero_count = 1;
	}
	/* Don't write out any block count data if no block in this function
	   has executed.  This can happen if __ghs_prof_clear_coverage was run,
	   as from the MULTI command "profilemode clear". */
	if(contains_nonzero_count == 0)
	    continue;
#if __PTR_BIT <= 32
	cnt = sizeof(struct blk)*test->len;
	if (HOSTIO_WRITE(fd, test->info, cnt) != cnt) {
	    PERROR("bcount: write failed for bmon.out\n");
	    HOSTIO_CLOSE(fd);
	    return;
	}
#else /* __PTR_BIT */
	cnt = sizeof(void *) + sizeof(int);
	for( i=0; i<test->len; i++ ) {
	    /* only write the packed data */
	    if(HOSTIO_WRITE(fd, &(test->info[i]), cnt) != cnt ) {
		PERROR("bcount: write failed for bmon.out\n");
		HOSTIO_CLOSE(fd);
		return;
	    }
	}
#endif /* __PTR_BIT */
    }
    HOSTIO_CLOSE(fd);
}

void __ghs_bcount(struct bhdr *routinfo, void (*routaddr)(void))
{
    __ghs_ProfileLock();
    if (routinfo->inserted) {
	__ghs_ProfileUnlock();
	return;
    }
    if (!blocklisthead) {
	if (!atexit_dump_coverage.func) {
	    atexit_dump_coverage.func = __ghs_prof_dump_coverage;
	    __ghs_at_exit(&atexit_dump_coverage);
	}
    }

    routinfo->inserted = 1;
    routinfo->next = blocklisthead;
    blocklisthead = routinfo;
    __ghs_ProfileUnlock();
}

#endif /* defined(EMBEDDED) */
