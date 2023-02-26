/*
 *   Copyright 2004 by Green Hills Software,Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
 */

#include <arm_ghs.h>

#if defined(__CORE_ARMV6M__) || \
    defined(__CORE_CORTEXM3__) || defined(__CORE_CORTEXM4__)

/***
 * Timer-Driven Profiling for Cortex-M family, using SysTick
 */

#define NVIC_BASE 		0xE000E000
#define NVIC_REG(offs)		(*(volatile unsigned int *)(NVIC_BASE + offs))
#define SYSTICK_CONTROL		NVIC_REG(0x10)
#define SYSTICK_RELOAD		NVIC_REG(0x14)
#define SYSTICK_CURRENT		NVIC_REG(0x18)
#define SYSTICK_CALIBRATION	NVIC_REG(0x1C)

#if defined(__ghs_board_is_arm_kinetisk40) || \
    defined(__ghs_board_is_arm_kinetisk60) || \
    defined(__ghs_board_is_arm_kinetisk70)
/* It is necessary for the address of the timer handler function to be placed
 * in the SysTick entry for the NVIC interrupt vector table.  By default this
 * table will normally start in ROM at address 0.  However, it is often
 * necessary to override this to point to a table at another address.  Some
 * Cortex-M BSPs do not have flash support.  If running with a RAM only layout,
 * it would be necessary to place a customer interrupt table in RAM. */
#pragma asm
.org 0x3C
.word __ghs_manprf_timer_handler
#pragma endasm
#endif

unsigned int TICKS_PER_SEC(void) { return SYSTICK_CALIBRATION * 100; }

#define ENABLE_TIMER_INTERRUPT() 	SYSTICK_CONTROL |= 3
#define CLEAR_TIMER_INTERRUPT()		SYSTICK_CURRENT = 0
#define TIMER_INIT(ti_count)		SYSTICK_RELOAD = ti_count
#define GET_EPC() 			(address)__builtin_return_address(0)


#elif defined(__ghs_board_is_arm_edb7212)

/***
 * Timer-Driven Profiling for Cirrus Logic edb7xxx
 */

#ifdef HIGH_INTERRUPT_VECTOR
/* use high interrupt vectors */
#define BASE_INTERRUPT_VECTOR 0xFFFF0000
#else
#define BASE_INTERRUPT_VECTOR 0x00000000
#endif

#define VECT_IRQ	(BASE_INTERRUPT_VECTOR + 0x18)
#define IRQ_POOL	(BASE_INTERRUPT_VECTOR + 0x38)

typedef volatile unsigned int mm_reg;

#define MM(x)		(*(mm_reg*)x)

#define SYSCON1		MM(0x80000100)	/* system control register 1 */

#define TC1D		MM(0x80000300)	/* decrementer 1 */
#define TC2D		MM(0x80000340)	/* decrementer 2 */
#define RTCDR		MM(0x80000380)	/* real time clock */
#define RTCMR		MM(0x800003C0)	/* real time clock match */

/* clock source frequency for TC1: SYSCON1[5]
 *  TC2: SYSCON1[7]	(clear: 2kHz, set 512kHz) */

/* RTC at 1Hz */

#define TC1OI		8
#define TC2OI		9

#define TC1_MASK	(1 << TC1OI)
#define TC2_MASK	(1 << TC2OI)

#define INTMR1		MM(0x80000280)	/* interrupt mask register */
#define INTSR1		MM(0x80000240)	/* interrupt status register */

#define TC1EOI		MM(0x800006C0)	/* write for end of interrupt */
#define TC2EOI		MM(0x80000700)	/* write for end of interrupt */

/* setup the IRQ vector */
/*  under PIC would want to adjust address word
 *   at runtime, or place handler in ABS section */
#pragma asm
.org VECT_IRQ
ldr pc, IRQ_ISR_pool
.org IRQ_POOL
IRQ_ISR_pool:
.word __ghs_manprf_timer_handler
#pragma endasm

#define TICKS_PER_SEC() 		(2*1000)

/* set compare register C; reset count register */
#define TIMER_INIT(ti_count)						\
   TC1D = ti_count;		/* set the decrementer value */

#define GET_EPC() (address)__builtin_return_address(0)

/* clear the timer interrupt with a read of status register */
#define CLEAR_TIMER_INTERRUPT()						\
   TC1EOI = 0xffffffff;
   
/* enable IRQ's */
#define ENABLE_IRQ() __SETSR(__GETSR()&~0x80)
   
/* TC Interrup Enable: RC compare */
#define ENABLE_TIMER_INTERRUPT()					\
   SYSCON1 = 0;								\
   INTMR1 = TC1_MASK;	/* Int. Controller: enable timer interrupt */	\
   ENABLE_IRQ();	/* enable IRQ interrupts */


#else	/* board type */

/* You must implement these functions for your board */
void __ghs_manprf_timer_init(unsigned int);
void __ghs_manprf_timer_interrupt_enable(void);
void __ghs_manprf_timer_interrupt_clear(void);    
unsigned int __ghs_manprf_timer_ticks_per_sec(void);


unsigned int TICKS_PER_SEC(void) { return __ghs_manprf_timer_ticks_per_sec(); }

#define CLEAR_TIMER_INTERRUPT() __ghs_manprf_timer_interrupt_clear()
#define ENABLE_TIMER_INTERRUPT() __ghs_manprf_timer_interrupt_enable()
#define TIMER_INIT __ghs_manprf_timer_init
#define GET_EPC() (address)__builtin_return_address(0)

#endif	/* board type */
