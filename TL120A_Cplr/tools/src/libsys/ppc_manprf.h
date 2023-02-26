/*
 *   Copyright 2004 by Green Hills Software,Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
 */
#include <ppc_ghs.h>

/***
 * Tested on IBM PowerPC 750FX Evaluation Board (Buckeye)
 *           IBM PowerPC 440GX Reference Board
 *              (don't use board's ROM monitor to reset the board as it
 *               causes unhandled external interrupts; make sure
 *               $USE_ROM_MONITOR is set to 0 in board setup script.)
 *           Embedded Planet RPX Classic LF MPC857T
 *           Embedded Planet EP8260
 *           Embedded Planet EP405 with 405gpr
 *           Freescale MPC55xxDEMO with MPC5534
 *           Freescale LITE5200
 *              (tested without using ROM monitor to reset the board; make
 *               sure $ROM_MONITOR is set to 0 in board setup script.)
 *
 * Should work on most PowerPC implemenations.
 * All implementations need to set TICKS_PER_SEC.
 */

/* TICKS_PER_SEC: on some targets you may be able to read or
 * compute this value. If so, define a function called
 * __ghs_manprf_timer_ticks_per_sec that returns the timer
 * frequency. Otherwise, you'll want to set this value here.
 */
#pragma weak __ghs_manprf_timer_ticks_per_sec
unsigned int __ghs_manprf_timer_ticks_per_sec(void);
unsigned int TICKS_PER_SEC(void) {
    if(__ghs_manprf_timer_ticks_per_sec) {
        return __ghs_manprf_timer_ticks_per_sec();
    } else {
	return 20000000;
    }
}

/**************** PPC85xx, PPC55xx, PPC440 ****************/
#if defined(__SPE__)    || defined(__ppc440)   || defined(__ppc440ep) ||     \
    defined(__ppc440gx) || defined(__ppc440gr)

#ifdef __SPE__
#define ENABLE_TIMEBASE                                                     \
  /* Enable HID0[TBEN] */ __MTSPR(1008, __MFSPR(1008) | 0x4000);
#else
#define ENABLE_TIMEBASE /* Already enabled. */ ;
#endif

#define ENABLE_TIMER_INTERRUPT                                              \
  /* Make IVPR and IVOR10 point to a 16-byte aligned jump to the handler */ \
  /* Also make IVOR15 point to the same instruction because e500 requires a \
   * valid opcode at the Debug interrupt vector for successful debugging */ \
  {                                                                         \
    unsigned vector = (unsigned)&__ghs_manprf_timer_handler;                \
    __MTSPR(0x03f/*IVPR*/,   vector & 0xffff0000);                          \
    __MTSPR(0x19f/*IVOR15*/, vector & 0x0000fff0);                          \
    __MTSPR(0x19a/*IVOR10*/, vector & 0x0000fff0);                          \
  }                                                                         \
  /* Enable TCR[PIE] */                                                     \
  __MTSPR(0x154/*TCR*/, 0x04000000);                                        \
  ENABLE_TIMEBASE                                                           \
  /* Enable interrupts. in particular, set MSR_EE=1 to enable               \
   *  the decrementer interrupts (note: enables all external                \
   *  interrupts) */                                                        \
  __EI

/* Initialize the decrementer register. */
#define TIMER_INIT(count) __MTSPR(22/*DEC*/, count);                        \
  /* Clear TSR[TIS] */                                                      \
  __MTSPR(0x150/*TSR*/, 0x08000000)


/**************** PPC40x ****************/
#elif defined(__ppc405) || defined(__ppc403) || defined(__ppc401)

#define __PIT_VECTOR_ADDRESS 0x00001000

#define ENABLE_TIMER_INTERRUPT                                              \
  /* Setup EVPR to vector correctly */                                      \
  __MTSPR(0x3d6/*EVPR*/, __PIT_VECTOR_ADDRESS & 0xffff0000);                \
  /* Enable TCR[PIE] */                                                     \
  __MTSPR(0x3da/*TCR*/, 0x04000000);                                        \
  /* Enable interrupts. in particular, set MSR_EE=1 to enable               \
   *  the decrementer interrupts (note: enables all external                \
   *  interrupts) */                                                        \
  __EI

/* setup the interrupt vector: timer interrupt (assumes EVPR = 0) */
#pragma intvect __ghs_manprf_timer_handler __PIT_VECTOR_ADDRESS

/* Initialize the PIT register. */
#define TIMER_INIT(count) __MTSPR(0x3db/*PIT*/, count);                     \
  /* Clear TSR[PIS] */                                                      \
  __MTSPR(0x3d8/*TSR*/, 0x08000000)

#else


/**************** PPC8xx ****************/
#if defined(__ppc821)    || defined(__ppc823)  || defined(__ppc823e)   ||    \
    defined(__ppc850)    || defined(__ppc852t) || defined(__ppc855t)   ||    \
    defined(__ppc857dsl) || defined(__ppc857t) || defined(__ppc859dsl) ||    \
    defined(__ppc859t)   || defined(__ppc860)  || defined(__ppc862)    ||    \
    defined(__ppc866p)   || defined(__ppc866t) || defined(__ppc870)    ||    \
    defined(__ppc875)    || defined(__ppc880)  || defined(__ppc885)

/* Initialize the decrementer register. */
#define TIMER_INIT(count)                                                    \
  /*  Need to unprotect the decrementer by writting 0x55ccaa33 to TBK */     \
  *(volatile int*)((__MFSPR(638/*IMMR*/)&0xffff0000)+0x30c) = 0x55ccaa33;    \
  /* Initialize the decrementer register. */                                 \
  __MTSPR(22/*DEC*/, count)


/**************** PPC52xx ****************/
#elif defined(__ppc5200)

#define TIMER_INIT(count)                                                    \
  /* Assume MBAR == 0x80000000 (as on reset). Turn on TBEN (Time Base   */   \
  /* Enable) in the XLB Arbiter Configuration Register, at MBAR+0x1F40. */   \
  *(int *)(0x80001F40) |= 0x2000;                                            \
  /* Initialize the decrementer register. */                                 \
  __MTSPR(22/*DEC*/, count)

#else


/**************** All Other PowerPC's ****************/

/* Initialize the decrementer register. */
#define TIMER_INIT(count) __MTSPR(22/*DEC*/, count)

#endif

/* setup the interrupt vector: timer interrupt */
#pragma intvect __ghs_manprf_timer_handler 0x00000900

/* Enable interrupts. in particular, set MSR_EE=1 to enable
 *  the decrementer interrupts (note: enables all external
 *  interrupts) */
#define ENABLE_TIMER_INTERRUPT __EI

#endif

/* Return address points to next instruction to execute.
 *  Use that value as the sample. */
#define GET_EPC() (address)__builtin_return_address(0)

#define CLEAR_TIMER_INTERRUPT()
    /* PowerPC interrupt cleared on return */
