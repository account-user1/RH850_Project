/*
 *   Copyright 2004 by Green Hills Software,Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
 */
/***
 * ColdFire timer support.
 * Set SYSTEM_CLOCK to the appropriate value.
 * Check that the memory mapped register positions are correct
 * for your board.
 * If your code makes use of MBAR or ACR0, modify the TIMER_INIT
 * code appropriately.
 * Make sure no other interrupts use the same priority and level
 * as the timer interrupt.
 *
 * Recompile libsys with the appropriate cpu selected.
 */
#define MBARx	0x10000000

/*
   M5407C3	50Mhz
   M5307C3	45Mhz
   M5272C3	66Mhz
   M5249C3	70Mhz
*/
#define SYSTEM_CLOCK (50000000) /* 50Mhz timer clock */


#if defined(__MCF5407) || defined(__MCF5307)

#define TIMER0	(MBARx+0x140)  	/* timer0 base */
#define ICR1 	(MBARx+0x04D)  	/* timer0 interrupt control register */
#define IMR	(MBARx+0x044)	/* interrupt mask register */

#elif defined(__MCF5272)

#define TIMER0	(MBARx+0x200)
#define ICR1	(MBARx+0x020)	/* external interrupts 1-4 and timers */

#elif defined(__MCF5282)

/* Default system clock frequency to 64 MHz */
#undef SYSTEM_CLOCK
#define SYSTEM_CLOCK (64000000)

#define IPSBAR   0x40000000
#define TIMER0 (IPSBAR + 0x00150000)

#elif defined(__MCF5213)

/* Default system clock frequency to 48 MHz */
#undef SYSTEM_CLOCK
#define SYSTEM_CLOCK (48000000)

#define IPSBAR   0x40000000
#define TIMER0 (IPSBAR + 0x00150000)

#else /* older ColdFire V2 cores */

#define TIMER0	(MBARx+0x100)	/* timer 0 base */
#define ICR1 	(MBARx+0x01C)  	/* timer0 interrupt control register */
#define IMR	(MBARx+0x04D)	/* interrupt mask register */

#endif

#if defined(__MCF5282) || defined(__MCF5213)
struct __ghs_coldfire_timer
{
    uint16_t pcsr;  /* PIT Control and Status Register (PCSR) */
    uint16_t pmr;   /* PIT Modulus Register (PMR) */
    uint16_t pcntr; /* PIT Count Register (PCNTR) */
};
#else /* Other ColdFire cores */
struct __ghs_coldfire_timer
{
    uint16_t tmr; /* timer mode register */
    uint16_t pad0;
    uint16_t trr; /* timer reference register */
    uint16_t pad1;
    uint16_t tcr; /* timer capture register */
    uint16_t pad2;
    uint16_t tcn; /* timer counter register */
    uint16_t pad3;
    uint8_t pad4;
    uint8_t ter; /* timer event register */
};
#endif

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
        /* We scale the timer source by 256 to compensate for 16 bit timers */
	return (SYSTEM_CLOCK/256);
    }
}


uint32_t __ghs_exception_pc;
void __ghs_manprf_timer_coldfire_handler(void);

/* Wrapper for __ghs_manprf_timer_handler so we can
   disable interrupts and store the exception pc/sr
 */
#pragma asm
__ghs_manprf_timer_coldfire_handler:
         MOVE.W #0x2700,%SR   ; disable interrupts
	 MOVE.L %D0,-(%A7)    ; save D0
         ; save exception info to global variables
	 MOVE.L 8(%A7),%D0
	 MOVE.L %D0,__ghs_exception_pc
	 MOVE.L (%A7)+,%D0    ;restore D0 and A7
	 JMP __ghs_manprf_timer_handler

	 FSIZE	__ghs_manprf_timer_coldfire_handler,4
	 SCALL	__ghs_manprf_timer_coldfire_handler,__ghs_manprf_timer_handler
	 TYPE	__ghs_manprf_timer_coldfire_handler,@function
	 SIZE	__ghs_manprf_timer_coldfire_handler,.-__ghs_manprf_timer_coldfire_handler

#pragma endasm

#if defined(__MCF5272)

/* locate the interrupt handler at the correct exception vector */
#pragma asm
	 ; position this handler at autovector 5
	 ORG 0x114
	 DC.L __ghs_manprf_timer_coldfire_handler
	 previous
#pragma endasm


static void setup_timer_interrupt()
{
    volatile uint32_t *icr1 = (uint32_t*)ICR1;

    /* enable timer interrupts with priority 6*/
    *icr1 |= 0xe000;
}

#elif defined(__MCF5282)

/* Declare a pointer to the start of the vector table section */
extern char __ghsbegin_vector[];

static void setup_timer_interrupt()
{
    volatile uint32_t *icr55 = (uint32_t*)(IPSBAR + 0xc74);

    /* Interrupt level (1-7) and priority (0-7) must be unique.
       For simplicity, just assume we'll use values
       in the following pattern:
       ICR8  level 1, priority 0
       ...
       ICR15 level 1, priority 7
       ICR16 level 2, priority 0
       ...
       ICR63 level 7, priority 7
     */

    /* Write the ICR55 value to set a unique level and priority */
    *icr55 =
        0x28 |          /* Level 5 */
        0x03;           /* Priority 3 */

    /* Store the interrupt handler function into the vector table */
    *(volatile uint32_t *)(__ghsbegin_vector + (64+55) * 4) =
        (uint32_t)__ghs_manprf_timer_coldfire_handler;

    /* Write Interrupt Mask Register High (IMRL) for INTC0
       to clear bit 0, to prevent masking all interrupts */
    *(volatile uint32_t *)(IPSBAR + 0xc08) &= (uint32_t)(~1);

    /* Write Interrupt Mask Register High (IMRH) for INTC0
       to clear bit 23, unmasking source 55 (PIT0) interrupts */
    *(volatile uint32_t *)(IPSBAR + 0xc08) &= (uint32_t)(~(1 << 23));
    /* unmask the PIT0 interrupt */

}

#elif defined(__MCF5213)

/* Declare a pointer to the start of the vector table section */
extern char __ghsbegin_vector[];

static void setup_timer_interrupt()
{
    volatile uint32_t *icr55 = (uint32_t*)(IPSBAR + 0xc74);

    /* Interrupt level (1-7) and priority (0-7) must be unique.
       For simplicity, just assume we'll use values
       in the following pattern:
       ICR8  level 1, priority 0
       ...
       ICR15 level 1, priority 7
       ICR16 level 2, priority 0
       ...
       ICR63 level 7, priority 7
     */

    /* Write the ICR55 value to set a unique level and priority */
    *icr55 =
        0x28 |          /* Level 5 */
        0x03;           /* Priority 3 */

    /* Store the interrupt handler function into the vector table */
    *(volatile uint32_t *)(__ghsbegin_vector + (64+55) * 4) =
        (uint32_t)__ghs_manprf_timer_coldfire_handler;

    /* Write Interrupt Mask Register High (IMRL) for INTC0
       to clear bit 0, to prevent masking all interrupts */
    *(volatile uint32_t *)(IPSBAR + 0xc08) &= (uint32_t)(~1);

    /* Write Interrupt Mask Register High (IMRH) for INTC0
       to clear bit 23, unmasking source 55 (PIT0) interrupts */
    *(volatile uint32_t *)(IPSBAR + 0xc08) &= (uint32_t)(~(1 << 23));
    /* unmask the PIT0 interrupt */

}

#else /* chips that use autovectored timer interrupts */

/* locate the interrupt handler at the correct exception vector */
#pragma asm
	 ; position this handler at autovector 5
	 ORG 0x74
	 DC.L __ghs_manprf_timer_coldfire_handler
	 previous
#pragma endasm

static void setup_timer_interrupt()
{
    volatile uint8_t *icr1 = (uint8_t*)ICR1; /* interrupt controller for timer0 */
    volatile uint32_t *imr = (uint32_t*)IMR; /* interrupt mask register */

    /* give timer0 level 5, priority 3 (autovector at 5) */
    *icr1 = 0x80 | 0x17;
    /* unmask the timer0 interrupt */
    *imr &= ~(0x200);
}

#endif

#if defined(__MCF5282)

/* Initialize the timer.  This will overwrite MBAR and ACR0 */
void TIMER_INIT(unsigned int count)
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    /* Setup Internal Perepheral System Base Address register (IPSBAR)	 */
    *(volatile uint32_t *)(0x40000000) = IPSBAR | 1;

    setup_timer_interrupt();

    /* Write to PIT0 Control and Status Register (PCSR) to initialize
       the timer.
       Set Overwrite (OVW) so the value written to PMR is immediately
       loaded into the PCNTR. */
    timer->pcsr = 0x0010;

    /* Write to PIT0 Modulus Register (PMR) to set the reload value */
    timer->pmr = count;

    /* Write to PIT0 Control and Status Register (PCSR) to initialize
       the timer.
       */
    timer->pcsr =
	0x0700 |        /* Prescaler (PRE) = 0b0111 to divide system clock by 256 */
	0x0020 |        /* Halted (HALTED) stops timer in halted mode */
	0x0008 |        /* PIT Interrupt Enable (PIE) to enable PIT interrupts */
	0x0002 |        /* Reload (RLD) */
	0x0001;         /* PIT Enable (EN) */
}

/* Clear the timer interrupt and reset the timer
   Interrupts will be enabled with RTE restores the status register.
   */
void CLEAR_TIMER_INTERRUPT()
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    /* Write to PIT0 Control and Status Register (PCSR) PIT Interrupt
       Flag (PIF) to clear the PIT interrupt
       */
    timer->pcsr =
	0x0700 |        /* Prescaler (PRE) = 0b0111 to divide system clock by 256 */
	0x0020 |        /* Halted (HALTED) stops timer in halted mode */
	0x0008 |        /* PIT Interrupt Enable (PIE) to enable PIT interrupts */
	0x0004 |        /* PIT Interrupt Flag (PIF) to clear the PIT interrupt */
	0x0002 |        /* Reload (RLD) */
	0x0001;         /* PIT Enable (EN) */
}

#elif defined(__MCF5213)

/* Initialize the timer.  This will overwrite MBAR and ACR0 */
void TIMER_INIT(unsigned int count)
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    /* Setup Internal Peripheral System Base Address register (IPSBAR)	 */
    *(volatile uint32_t *)(0x40000000) = IPSBAR | 1;

    setup_timer_interrupt();

    /* Write to PIT0 Control and Status Register (PCSR) to initialize
       the timer.
       Set Overwrite (OVW) so the value written to PMR is immediately
       loaded into the PCNTR. */
    timer->pcsr = 0x0010;

    /* Write to PIT0 Modulus Register (PMR) to set the reload value */
    timer->pmr = count;

    /* Write to PIT0 Control and Status Register (PCSR) to initialize
       the timer.
       */
    timer->pcsr =
	0x0700 |        /* Prescaler (PRE) = 0b0111 to divide system clock by 256 */
	0x0020 |        /* Debug mode bit (DBG) stops timer in halted/debug mode */
	0x0008 |        /* PIT Interrupt Enable (PIE) to enable PIT interrupts */
	0x0002 |        /* Reload (RLD) */
	0x0001;         /* PIT Enable (EN) */
}

/* Clear the timer interrupt and reset the timer
   Interrupts will be enabled with RTE restores the status register.
   */
void CLEAR_TIMER_INTERRUPT()
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    /* Write to PIT0 Control and Status Register (PCSR) PIT Interrupt
       Flag (PIF) to clear the PIT interrupt
       */
    timer->pcsr =
	0x0700 |        /* Prescaler (PRE) = 0b0111 to divide system clock by 256 */
	0x0020 |        /* Debug mode bit (DBG) stops timer in halted/debug mode */
	0x0008 |        /* PIT Interrupt Enable (PIE) to enable PIT interrupts */
	0x0004 |        /* PIT Interrupt Flag (PIF) to clear the PIT interrupt */
	0x0002 |        /* Reload (RLD) */
	0x0001;         /* PIT Enable (EN) */
}

#else

/* Initialize the timer.  This will overwrite MBAR and ACR0 */
void TIMER_INIT(unsigned int count)
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    __MOVEC_MBAR(MBARx|0x1);
    __MOVEC_ACR0(MBARx|0xc040); /* do not cache memory mapped area */

    /* reset/disable timer */
    timer->tmr = 0x0000;
    timer->tcn = 0;
    timer->trr = count;

    setup_timer_interrupt();

    /* set and enable tmr0 */
    timer->tmr = 0xff13;
}

/* Clear the timer interrupt and reset the timer
   Interrupts will be enabled with RTE restores the status register.
   */
void CLEAR_TIMER_INTERRUPT()
{
    volatile struct __ghs_coldfire_timer *timer =
	(struct __ghs_coldfire_timer*)(TIMER0);

    timer->ter = 0x3; /* write event bits to clear */
    timer->tcn = 0x0;
}

#endif

/* Enable PIT interrupts by clearing the Status Register (SR)
   interrupt priority mask (I) field. */
#define ENABLE_TIMER_INTERRUPT __EI

/* Return the exception PC */
uint32_t GET_EPC(void)
{
    return __ghs_exception_pc;
}
