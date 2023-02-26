/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_MALLOC_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_MALLOC_H

#ifdef __cplusplus
extern "C" {
#endif

#include "ghs_null.h" /* defines NULL and size_t */
#include <stdint.h>   /* for uintpt_t */

/******************************************************************************/

/* the ANSI standard interface */
void*		calloc(size_t __CNT, size_t __SIZ);
void		free(void *);
void*		malloc(size_t __SIZ);
void*		realloc(void *, size_t);

#if defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)
void		free_unlocked(void *);
void*		malloc_unlocked(size_t __SIZ);
#endif

/******************************************************************************/

/* Extra routines for compatibility with Linux and Solaris */
#if defined(__LINUX) || (defined(__sun) && defined(__sysV4))
size_t 		malloc_usable_size(void *);
void		cfree(void *);
void*           memalign(size_t __SIZ, size_t __AMT);
void*           valloc(size_t __SIZ);
void*           pvalloc(size_t __SIZ);
#endif

/* Unsupported stub for linkage compatibility with Linux and Solaris */
#if defined(__LINUX) || (defined(__sun) && defined(__sysV4))
struct mallinfo {
  int arena; int ordblks; int smblks; int hblks; int hblkhd;
  int usmblks; int fsmblks; int uordblks; int fordblks; int keepcost;
};
struct mallinfo	mallinfo(void);
int 		mallopt(int, int);
#endif

/******************************************************************************/

/* retrieving various pieces of statistical information */
int   __malloc_info     (int, int *);

#define M_KEY_BYTES_FROM_OS                1
#define M_KEY_BYTES_CURRENTLY_FREE         2
#define M_KEY_BYTES_TOTAL_ALLOC            3
#define M_KEY_BYTES_CURRENT_USER_ALLOC     4
#define M_KEY_BYTES_MAX_USER_ALLOC         5

/******************************************************************************/

/* forcing a library check.  If useTheseOptions==0, check with the level
** of the last call to malloc_set_debug_options 
*/
void malloc_check_lib          (int /* useTheseOptions */);

/* controlling the amount of checking */
int  malloc_set_debug_options  (int /* newOptions */);
#define M_CHECK_ENV_CONTROL    "MALLOC_CHECK_OPTIONS"

/* different levels of checking to enable */
#define M_CHECK_LEVEL_MASK                       (0x0f)
#define M_CHECK_LEVEL_NONE                       (0x00)
#define M_CHECK_LEVEL_MINIMAL                    (0x01)
#define M_CHECK_LEVEL_OCCASIONALLY_MAXIMAL       (0x02)
#define M_CHECK_LEVEL_FREQUENTLY_MAXIMAL         (0x03)
#define M_CHECK_LEVEL_MAXIMAL                    (0x04)

/******************************************************************************/

/* Routines only available to the checked library.
 * They are exported for use by MULTI and for certain forms of test automation.
 * They are not real-time and should not be used in production systems.
 */
void __malloc_setmarks        (void);
void __malloc_showleaks       (int /* showNew */);
void __malloc_showallocations (int /* showNew */);

/******************************************************************************/

/* These routines are not supported for general use.
 */
#if defined(__ELF)
typedef struct {
    uintptr_t     addr;
    size_t        size;
    unsigned char is_ram;
    unsigned char is_executable;
    unsigned char is_writable;
    unsigned char is_dead_stack;
    unsigned char rfu[4];
} __ghs_OSMemorySegment;
  
extern size_t __ghs_GetOSMemorySegments(__ghs_OSMemorySegment * __ENT,
	                                 size_t __CNT);
#endif

/******************************************************************************/

#ifdef __cplusplus
}
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_MALLOC_H */
