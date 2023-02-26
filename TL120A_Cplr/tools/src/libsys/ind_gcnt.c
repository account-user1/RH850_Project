/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
#if defined(EMBEDDED) || defined(__OSE)
#include "ind_retaddr.h"
#ifdef USE_BUILTIN_RETURN_ADDRESS
extern void __ghs_indgcount(void *head, void **ptail);
void __ghs_gcount(void *tail) {
    void *head = __builtin_return_address(0);
    __ghs_indgcount(head, &tail);
}
#else
#error "ind_gcnt.c invalid for target; write assembly or use ind_retaddr.h"
#endif
#endif
