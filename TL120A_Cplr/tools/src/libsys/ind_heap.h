/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_heap.h: declarations for callers of ind_heap.c */

#include <stddef.h>
int brk(void *addr);
void *sbrk(size_t size);
size_t __ghs_heapseg_size(void);
void *__ghs_alloc(int size, int align);
void *__ghs_calloc(int size, int align);
