/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
#if defined(__ARM) || defined(__ARM64__) || defined(__mips)
#if defined(__ARM)
#include <arm_ghs.h>
#elif defined(__ARM64__)
#include <arm64_ghs.h>
#elif defined(__mips)
#include <mips_ghs.h>
#endif
#define USE_BUILTIN_RETURN_ADDRESS
#endif
