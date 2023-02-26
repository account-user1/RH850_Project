/*
                        ISO C Runtime Library

        Copyright (c) 1983-2004 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/


#ifndef _SIGSETJMP_H
#define _SIGSETJMP_H
#pragma ghs startnomisra

#ifndef __MISRA_20_7
#define __MISRA_20_7  0
#define __defined_MISRA_20_7
#endif
#ifndef __MISRA_122
#define __MISRA_122  0
#define __defined_MISRA_122
#endif
#if (__MISRA_20_7 != 2) && (__MISRA_122 != 2)

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__STDC__) || defined(__PROTOTYPES__)
#define __ARGS(x)               x
#else
#define __ARGS(x)               ()
#endif

typedef double sigjmp_buf[(sizeof(jmp_buf)/sizeof(double))+3];
int  sigsetjmp  __ARGS((sigjmp_buf, int));
void siglongjmp __ARGS((sigjmp_buf, int));

/* sigsetjmp is implemented as a macro, since it calls setjmp.  If it were a
   function instead, we would pop the stack frame after the setjmp,
   invalidating the saved state. */
jmp_buf* __sigsetjmp_helper(sigjmp_buf __buf, int __savemask);
#define sigsetjmp(buf, savemask) setjmp(*__sigsetjmp_helper((buf),(savemask)))

#undef __ARGS
#ifdef __cplusplus
}
#endif
#endif /* __MISRA_20_7 */
#ifdef __defined_MISRA_122
#undef __defined_MISRA_122
#undef __MISRA_122
#endif
#ifdef __defined_MISRA_20_7
#undef __defined_MISRA_20_7
#undef __MISRA_20_7
#endif
#pragma ghs endnomisra
#endif
