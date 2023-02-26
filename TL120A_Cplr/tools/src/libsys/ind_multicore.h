/*
                        Low-Level System Library

            Copyright 2014-2015 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_multicore.h: declarations for callers of ind_multicore.c */

#include "ind_thrd.h"

#define MAX_CORES 8

void __ghs_add_local_storage(ThreadLocalStorage *local_storage);
typedef int (*__ghs_syscall_fptr)(int, ...);
void __ghs_register_syscall_func(__ghs_syscall_fptr func, char **env);
unsigned int __ghs_coreid(void);

