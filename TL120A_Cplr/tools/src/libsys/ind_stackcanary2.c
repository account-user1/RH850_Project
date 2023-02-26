/*
                        Low-Level System Library

            Copyright 2010-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/* __stack_chk_guard should be randomly set.  This value is loaded into the
 * canary guard variable on stack frames.
 */
#include <stdint.h>
#include "indos.h"
uintptr_t __stack_chk_guard = (uintptr_t)0x37ab51bdb31a25cLL;

uintptr_t *__ghs_get_stack_chk_guard_address(void)
{
    return &__stack_chk_guard;
}

/* The user or OS should set an initial canary value by defining the function
 * __ghs_set_stack_chk_guard somewhere.
 *
 * #include "indos.h"
 * void __ghs_set_stack_chk_guard(void)
 * {
 *     *__ghs_get_stack_chk_guard_address() = <RANDOM_VALUE>;
 * }
 */
