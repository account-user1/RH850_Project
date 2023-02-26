/*
                     Memory Barriers

                    ISO C Runtime Library
        Copyright (C) 2009-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#if !defined(__GHS_BARRIER_H)
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define __GHS_BARRIER_H

#if defined(__ATTRIBUTES)
#define __ATTRIBUTE(x) __attribute__(x)
#else
#define __ATTRIBUTE(x)
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* does not have any side effects; does not read global memory */
void __schedule_barrier(void) __ATTRIBUTE((const,pure));

/* does not have any side effects; may read global memory */
void __force_stores(void) __ATTRIBUTE((pure));

void __memory_changed(void);


#undef __ATTRIBUTE

#ifdef __cplusplus
}
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif

#endif /* __GHS_BARRIER_H */
