/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_exit.h: declarations for callers of ind_exit.c */

/*   FUNCTIONS ALWAYS NEEDED TO RUN PROGRAMS COMPILED WITH THE DEFAULT CRT0   */

typedef __attribute__((strong_fptr)) void (*__ghs_at_exit_fptr)(void);

struct __GHS_AT_EXIT {
    __ghs_at_exit_fptr func;
    struct __GHS_AT_EXIT *next;
};
#if defined(__GNUC__)
#define __Noreturn __attribute__((noreturn))
#else
#define __Noreturn
#endif /* __GNUC__ */
void _Exit (int code) __Noreturn;
void __ghs_at_exit (struct __GHS_AT_EXIT *gae);

