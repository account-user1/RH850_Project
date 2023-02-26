/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
#if defined(EMBEDDED)
#include "ind_retaddr.h"
#ifdef USE_BUILTIN_RETURN_ADDRESS
typedef void (*archeadtyp)(void);
extern void __ghs_indmcount(int *area, archeadtyp archead);
void __ghs_mcount(void *count) {
    void *archead = __builtin_return_address(0);
    __ghs_indmcount(count, (archeadtyp)archead);
}
#else
#error "ind_mcnt.c invalid for target; write assembly or use ind_retaddr.h"
#endif
#endif
