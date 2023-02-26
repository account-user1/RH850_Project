/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_RNERR_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_RNERR_H

#ifdef __cplusplus
extern "C" {
#endif

extern int _rnerr_control(int _N, int _V);

#define RTE_NONE					(0)
#define RTE_ARRAY_INDEX_OUT_OF_BOUNDS			(1)
#define RTE_BAD_VARIANT					(2)
#define RTE_NULL_DEREFERENCE				(3)
#define RTE_INVALID_CASE				(4)
#define RTE_REFERENCE_TO_UNINITIALIZED			(5)
#define RTE_ASSIGNMENT_OUT_OF_BOUNDS			(6)
#define RTE_DIVIDE_BY_ZERO				(7)
#define RTE_VALUE_OUTSIDE_OP_TYPE			(8)
#define RTE_FREE_OF_UNALLOCATED				(9)
#define RTE_FREE_OF_ALREADY_FREE			(10)
#define RTE_MALLOC_INTERNALS_CORRUPTED			(11)
#define RTE_ACCESS_OF_UNALLOCATED			(12)
#define RTE_MEMORY_LEAK					(13)
#define RTE_OVERFLOW					(14)
#define RTE_TOO_MANY_ERRORS				(15)
#define RTE_WRITE_TO_WATCHPOINT				(16)
#define RTE_NO_RETURN_FROM_FUNCTION			(17)
#define RTE_CALL_TO_AMBIGUOUS_VIRTUAL_FUNCTION		(18)
#define RTE_FREE_OF_NULL				(19)
#define RTE_OUT_OF_HEAP					(20)
#define RTE_OUT_OF_STACK				(21)
#define RTE_SHIFT_OUT_OF_RANGE				(22)
#define RTE_MEMORY_ALLOCATION				(23)
#define RTE_RECENT_WRITE_TO_FREE			(24)
#define RTE_RECENT_WRITE_PAST_END_OF_ALLOCATED		(25)
#define RTE_READ_FROM_RECENTLY_FREE			(26)
#define RTE_MEMORY_ALLOCATION_COLLECTION		(27)
#define RTE_MEMORY_LEAK_COLLECTION			(28)

/* malloc library bookkeeping and internal corruption errors */
#define RTEM_NONE							(0)
    /* heap extent tracking / memrange sweeping problems */
#define RTEM_UNSUPPORTED_DISCONTIGUOUS_HEAP_AND_MEM_RANGE_OVERLAP	(1)
#define RTEM_HEAP_RANGE_DOES_NOT_MATCH_HEAP_MEMRANGE			(2)
#define RTEM_HEAP_RANGE_OVERLAPS_WITH_NON_HEAP_MEMRANGE			(3)
    /* small block corruption problems */
#define RTEM_SMALL_BLOCK_INVALID_SIZE_HEADER				(4)
#define RTEM_SMALL_BLOCK_MISMATCHED_SIZE_HEADER				(5)
#define RTEM_SMALL_BLOCK_INVALID_POSTFIX_TAG				(6)
    /* large block corruption problems */
#define RTEM_LARGE_BLOCK_OUT_OF_HEAP_RANGE				(7)
#define RTEM_LARGE_BLOCK_INVALID_SIZE_HEADER				(8)
#define RTEM_LARGE_BLOCK_INVALID_POSTFIX_TAG				(9)
#define RTEM_LARGE_BLOCK_NULL_NEXT_BLOCK				(10)
#define RTEM_LARGE_BLOCK_OVERLAPS_WITH_NEXT_BLOCK			(11)
#define RTEM_LARGE_BLOCK_LIST_IS_NOT_CIRCULAR				(12)
#define RTEM_LARGE_BLOCK_INVALID_PREV_BLOCK				(13)
    /* misc problems */
#define RTEM_ALLOCATED_BLOCK_HASH_TABLE_CORRUPTION			(14)
#define RTEM_UNEXPECTED_DISCONTIGUOUS_HEAP				(15)
#define RTEM_BLOCK_FROM_SBRK_TOO_LARGE_TO_FREE                          (16)
    
#ifdef __cplusplus
}
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_RNERR_H */
