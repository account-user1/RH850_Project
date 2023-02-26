/*
                        Low-Level System Library

            Copyright 2006-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/* This module is meant to perform stack checking using the -stack_check
 * option.
 */

/* Get __get_stack_pointer() on appropriate targets */
#include <alloca.h>
#include "ind_io.h" /* write() */
#include <stdlib.h> /* exit() */
extern char __ghsbegin_stack[], __ghsend_stack[];

#ifdef __ghs_pid
/* Using these variables instead of directly referencing __ghsbegin_stack
   and __ghsend_stack gives the linker a chance to fix up these addresses.
   This is important if, for example, we link with PID but the stack is
   absoultely located in the link map. */
static void* begin_stack_addr = __ghsbegin_stack;
static void* end_stack_addr = __ghsend_stack;
#else
#define begin_stack_addr __ghsbegin_stack
#define end_stack_addr   __ghsend_stack
#endif

#pragma ghs startnoinline

static void emit_stack_error(void) 
{
    static const char err[] = "Stack overflow error\n";
    (void)write(2 /* stderr */, err, sizeof(err)-1);
    /* exit is already pulled in by ind_crt1.c, so use it */
    exit(1);
}

#pragma ghs max_instances 2
void __stkchk(void)
{
    static int did_error = 0;
#ifdef __GHS_TARGET_IMPLEMENTS_ALLOCA
    void *sp = __get_stack_pointer();
#else
    char loc;
    void *sp = (void *)&loc;
#endif /* __GHS_TARGET_IMPLEMENTS_ALLOCA */

#if defined(__StarCore__)
    /* Most targets have a stack that grows down, but StarCore has
       a stack that grows up.
     */    
    if (sp < begin_stack_addr || sp >= end_stack_addr)
#else
    if (sp <= begin_stack_addr || sp > end_stack_addr)
#endif
	if (!did_error) {
	    did_error = 1;
	    emit_stack_error();
	}
}
