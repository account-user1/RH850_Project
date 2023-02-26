/*
 *  Blackfin Timer Driven Profiling Example
 *
 *  Copyright 2003
 *  by Green Hills Software Inc.
 *
 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
 */

#include <cdefBF533.h>

/* These defines are missing from some Analog header files */
#ifndef PLL_CTL
#define PLL_CTL (0xffc00000)
#endif
#ifndef PLL_DIV
#define PLL_DIV (0xffc00004)
#endif
#ifndef pPLL_CTL
#define pPLL_CTL ((volatile unsigned short *)PLL_CTL)
#endif
#ifndef pPLL_DIV
#define pPLL_DIV ((volatile unsigned short *)PLL_DIV)
#endif

/* This should be set to CLKIN - assume 27MHz, which is what the
   ADSP-BF533 EZ-KIT Lite has. */
#define INPUT_CLOCK (27000000)

/* Number of cycles between each counter decrement */
#define TICK_RATE (16)

/* Return the number of times the count register is decremented per
   second. On Blackfin, calculate by reading PLL_CTL and having CLKIN
   defined above. This is implemented as described in Chapter 8 of the
   ADSP-BF533 Blackfin Processor Specification. Note that other Blackfin
   processors may differ slightly. */
int TICKS_PER_SEC(void) {
    short pll_ctl = *pPLL_CTL;
    int csel = ((*pPLL_DIV) >> 4) & 3;
    int clock = INPUT_CLOCK; /* Initialize clock to CLKIN */
    int msel = (pll_ctl >> 9) & 0x3f;

    if (msel == 0)
        /* MSEL of 0 has special meaning */
        msel = 64;
    clock *= msel;
    /* Divide clock by DF */
    clock >>= (pll_ctl & 1);
    /* clock is now VCO, so shift by CSEL to get CCLK */
    clock >>= csel;
    
    /* TICKS_PER_SEC is CCLK (clock) divided by TCOUNT + 1 */
    return clock / TICK_RATE;
}

/* Initialize the count and compare registers. */
void TIMER_INIT(unsigned int compare)
{
    /* Setup TCOUNT */
    *pTCOUNT = compare;
}

/* Enable the timer interrupt */
void ENABLE_TIMER_INTERRUPT(void)
{
    /* Set TMPWR to turn on power to the timer. */
    *pTCNTL = 1;

    /* Setup the event vector */
    *pEVT6 = (void *) __ghs_manprf_timer_handler;

    /* Enable the core timer interrupt */
    *pIMASK |= (1 << 6);

    /* Decrement TCOUNT every TICK_RATE cycles */
    *pTSCALE = TICK_RATE - 1;

    /* Ensure all those writes had time to take effect */
    __CSYNC();

    /* Start the timer */
    *pTCNTL = 3;
}

/* Read the exception PC. */
asm unsigned int GET_EPC(void)
{
    /* move from reti */
    r0 = reti;
}

/* Clear the timer interrupt. */
void CLEAR_TIMER_INTERRUPT(void)
{
    /* Restart the timer, clear TINT */
    *pTCNTL = 3;

    __CSYNC();
}
