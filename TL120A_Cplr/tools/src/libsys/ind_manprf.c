/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/*
 * Target Driven Timer-Based Profiling Framework:
 *  - This file provides sample implementations of a timer-interrupt driven
 *  profiler using the debug server supported MANPROF system call.
 *  - To use timer-based profiling:
 *   1) provide implementations of the following low-level macros for your
 *      board (see ppc_manprf.h, arm_manprf.h for examples) :
 *       TICKS_PER_SEC
 *       TIMER_INIT
 *       GET_EPC
 *       CLEAR_TIMER_INTERRUPT
 *       ENABLE_TIMER_INTERRUPT
 *   2) rebuild ind_manprf.o(libsys.a).
 *   3) relink your standalone application using the -timer_profile driver
 *      option (or "-u __ghs_manprf_timer_handler" linker option).
 *   4) enable profiling in MULTI before running your application.  
 */
#if defined(EMBEDDED) && defined(__ELF)

#include "indsyscl.h"
#include "indos.h"
#include "ind_exit.h"
#include <stdint.h>

#if defined(__THUMB) && !defined(__THUMB2_AWARE)
/* This module should not be compiled in Thumb mode */
#pragma ghs nothumb
#endif	/* __THUMB */

/* extern prototypes (needed by ppc_manprf.h) */
#if defined(__ppc)
#if defined(__SPE__)    || defined(__ppc440)   || defined(__ppc440ep) ||     \
    defined(__ppc440gx) || defined(__ppc440gr)
/* Force the interrupt handler to be 16-byte aligned. */
#pragma alignfunc(16)
#endif
#endif
__interrupt void __ghs_manprf_timer_handler(void);

/* Pull in the low-level (asm) macro implementations */
#if defined(__ppc)
#include "ppc_manprf.h"
#elif defined(__mips)
#include "mip_manprf.h"
#elif defined(__ARM)
#include "arm_manprf.h"
#elif defined(__ColdFire)
#include "coldfire_manprf.h"
#elif defined(__ADSPBLACKFIN__)
#include "bf_manprf.h"
#else
/* you will need to implement the following items
 *  for your processor / board. see ppc_manprf.h
 *  and arm_manprf.h for examples */
#define NO_BUILD_MANPRF 1
#endif

#if !defined(NO_BUILD_MANPRF)

static void __ghs_manprf_end(void);

/* FREQUENCY: number of times per second the PC is sampled.
 *  default: 60 Hz. you may adjust this as necessary. */
#define 		FREQUENCY 	60
/* PROFBUFSIZE: number of samples the static PC sample buffer holds.
 *  default: 120 samples.  you may adjust this as necessary according
 *  to your memory resources and/or frequency at which you want to
 *  send the profiling information to the debug server. */
#define		 	PROFBUFSIZE 	120

#if __PTR_BIT == 64
typedef uint64_t address;
#else
typedef uint32_t address;
#endif
/* timer_value: number of cycles between timer interrupts. */
static 	int 		timer_value = 1;
/* PC Sample Buffer:
 *  sample_count: number of used entries in profile_buffer PC sample buffer */
static 	int          	sample_count = 0;
/*  profile_buffer: PC sample static buffer */
static 	address		profile_buffer[PROFBUFSIZE];


/***************************************************************************
 * __ghs_manprf_init() is called from __ghs_ind_crt1() when this module
 *  is linked into the program.  
 *  - registers an 'at exit' callback
 *  - compute the value to use in the counter/compare or decrementer
 *  - initialize the timer
 *  - initialize profiling
 *  - enable the timer interrupt
 ***************************************************************************/
#pragma ghs startnoinline
void __ghs_manprf_init(void)
{
    /* Request that this variable be allocated to a register so only
     *  the register case need be handled by asm macros */
    register unsigned int counter;
    /* register with low level _exit() */    
    static struct __GHS_AT_EXIT gae;
    if (!gae.func) {
	gae.func = __ghs_manprf_end;
	__ghs_at_exit(&gae);
    }
    /* Calculate clock cycle delay required to produce a timer interrupt at
     * specified frequency in Hz. */
    counter = timer_value = TICKS_PER_SEC() / FREQUENCY;
    /* Set initial count and compare values (or decrementer) */
    TIMER_INIT(counter);
    /* Call SYSCALL_MANPROF with buf=NULL, cnt=frequency of sample rate,
     * to initialize sample frequency. */
    __ghs_syscall(SYSCALL_MANPROF, NULL, FREQUENCY);
    /* Enable the timer interrupt. */
    ENABLE_TIMER_INTERRUPT();    
}
#pragma ghs endnoinline

/***************************************************************************
 * flush_buffer() sends the PC sample buffer to the debug server using
 *  system call emulation.
 *  - invoke SYSCALL_MANPROF to send the PC samples to the debug server.
 *  - clear the PC sample buffer.
 ***************************************************************************/
static void flush_buffer(void)
{
    /* send profile count data to debug server using syscall emulation */
    __ghs_syscall(SYSCALL_MANPROF, profile_buffer, sample_count);
    /* clear the PC sample buffer */
    sample_count = 0;
}

/***************************************************************************
 * __ghs_manprf_end() sends any remaining PC samples at program termination.
 ***************************************************************************/
static void __ghs_manprf_end(void)
{
    if (sample_count > 0) flush_buffer();
}

/***************************************************************************
 * __ghs_manprf_timer_handler() is the timer interrupt handler.
 *  you should include code that jumps to this handler from within the
 *  appropriate interrupt vector entry.
 *  - collect PC samples
 *  - when buffer is full, send data to the debug server using system call
 *     emulation.
 *  - reset the timer interrupt.
 ***************************************************************************/
#if defined(__ppc)
#if defined(__SPE__)    || defined(__ppc440)   || defined(__ppc440ep) ||     \
    defined(__ppc440gx) || defined(__ppc440gr)
/* Force the interrupt handler to be 16-byte aligned. */
#pragma alignfunc(16)
#endif
#endif
__interrupt void __ghs_manprf_timer_handler(void)
{
    /* General Notes:
     *  Your target may or may not have separate vectors per each
     *   interrupt.  Here we assume that the timer is the only interrupt
     *   handled by this ISR.
     *  Normally during an ISR, you may want to re-enable interrupts after
     *   saving critical state.  Here, we do not re-enable interrupts
     *   (until return).
     */
    
    /* make sure this gets into a register so that only
     *  the register case need be handled by (asm) macros */
    register unsigned int counter;
    /* sample the current program counter */
    profile_buffer[sample_count++] = GET_EPC();
    /* if we have filled the PC sample buffer, send its contents to the
     *  debug server */
    if (sample_count >= PROFBUFSIZE) flush_buffer();
    /* reset the decrementer/counter so that the timer interrupt fires
     *  at the desired time interval */
    counter = timer_value;
    /* re-initialize the timer (or decrementer) */
    TIMER_INIT(counter);
    /* clear the timer interrupt so it can fire again */
    CLEAR_TIMER_INTERRUPT();
}

#endif /* !defined(NO_BUILD_MANPRF) */

#endif	/* EMBEDDED && __ELF */
