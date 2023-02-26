#ifndef __DR7F701373_PORT_HEADER__
#define __DR7F701373_PORT_HEADER__



/**********************************************************************************************************************
 Module File Name  : <Module>_RegDefns.h
 Module Description: Generated Register Definitions of Renesas Peripherals
 Project           : CBD
 Author            : Lucas Wendling
**********************************************************************************************************************
 Version Control:
 %version:          1 %
 %derived_by:       czgng4 %
----------------------------------------------------------------------------------------------------------------------
 Date      Rev      Author         Change Description
 -------   -------  --------  ----------------------------------------------------------------------------------------
 07/12/17  1        LWW       Header file generated from Renesas tool based on input files contained in tools directory
*********************************************************************************************************************/


#include "Std_Types.h"

#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define PRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile
#define __IOREG(reg, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg;
#endif

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3


/* ------------------------------------------------------------------ */
/* BIT ACCESS STRUCTURES                                              */
/* ------------------------------------------------------------------ */
typedef struct
{
    uint16 _P0_0 : 1;
    uint16 _P0_1 : 1;
    uint16 _P0_2 : 1;
    uint16 _P0_3 : 1;
    uint16 _P0_4 : 1;
    uint16 _P0_5 : 1;
    uint16 _P0_6 : 1;
    uint16 _P0_7 : 1;
    uint16 _P0_8 : 1;
    uint16 _P0_9 : 1;
    uint16 _P0_10 : 1;
    uint16 _P0_11 : 1;
    uint16 _P0_12 : 1;
    uint16 _P0_13 : 1;
    uint16 _P0_14 : 1;
    uint16 _P0_15 : 1;
} P0Bits_t;

typedef struct
{
    uint32 _PSR0_0 : 1;
    uint32 _PSR0_1 : 1;
    uint32 _PSR0_2 : 1;
    uint32 _PSR0_3 : 1;
    uint32 _PSR0_4 : 1;
    uint32 _PSR0_5 : 1;
    uint32 _PSR0_6 : 1;
    uint32 _PSR0_7 : 1;
    uint32 _PSR0_8 : 1;
    uint32 _PSR0_9 : 1;
    uint32 _PSR0_10 : 1;
    uint32 _PSR0_11 : 1;
    uint32 _PSR0_12 : 1;
    uint32 _PSR0_13 : 1;
    uint32 _PSR0_14 : 1;
    uint32 _PSR0_15 : 1;
    uint32 _PSR0_16 : 1;
    uint32 _PSR0_17 : 1;
    uint32 _PSR0_18 : 1;
    uint32 _PSR0_19 : 1;
    uint32 _PSR0_20 : 1;
    uint32 _PSR0_21 : 1;
    uint32 _PSR0_22 : 1;
    uint32 _PSR0_23 : 1;
    uint32 _PSR0_24 : 1;
    uint32 _PSR0_25 : 1;
    uint32 _PSR0_26 : 1;
    uint32 _PSR0_27 : 1;
    uint32 _PSR0_28 : 1;
    uint32 _PSR0_29 : 1;
    uint32 _PSR0_30 : 1;
    uint32 _PSR0_31 : 1;
} PSR0Bits_t;

typedef struct
{
    uint16 _PNOT0_0 : 1;
    uint16 _PNOT0_1 : 1;
    uint16 _PNOT0_2 : 1;
    uint16 _PNOT0_3 : 1;
    uint16 _PNOT0_4 : 1;
    uint16 _PNOT0_5 : 1;
    uint16 _PNOT0_6 : 1;
    uint16 _PNOT0_7 : 1;
    uint16 _PNOT0_8 : 1;
    uint16 _PNOT0_9 : 1;
    uint16 _PNOT0_10 : 1;
    uint16 _PNOT0_11 : 1;
    uint16 _PNOT0_12 : 1;
    uint16 _PNOT0_13 : 1;
    uint16 _PNOT0_14 : 1;
    uint16 _PNOT0_15 : 1;
} PNOT0Bits_t;

typedef struct
{
    const uint16 _PPR0_0 : 1;
    const uint16 _PPR0_1 : 1;
    const uint16 _PPR0_2 : 1;
    const uint16 _PPR0_3 : 1;
    const uint16 _PPR0_4 : 1;
    const uint16 _PPR0_5 : 1;
    const uint16 _PPR0_6 : 1;
    const uint16 _PPR0_7 : 1;
    const uint16 _PPR0_8 : 1;
    const uint16 _PPR0_9 : 1;
    const uint16 _PPR0_10 : 1;
    const uint16 _PPR0_11 : 1;
    const uint16 _PPR0_12 : 1;
    const uint16 _PPR0_13 : 1;
    const uint16 _PPR0_14 : 1;
    const uint16 _PPR0_15 : 1;
} PPR0Bits_t;

typedef struct
{
    uint16 _PM0_0 : 1;
    uint16 _PM0_1 : 1;
    uint16 _PM0_2 : 1;
    uint16 _PM0_3 : 1;
    uint16 _PM0_4 : 1;
    uint16 _PM0_5 : 1;
    uint16 _PM0_6 : 1;
    uint16 _PM0_7 : 1;
    uint16 _PM0_8 : 1;
    uint16 _PM0_9 : 1;
    uint16 _PM0_10 : 1;
    uint16 _PM0_11 : 1;
    uint16 _PM0_12 : 1;
    uint16 _PM0_13 : 1;
    uint16 _PM0_14 : 1;
    uint16 _PM0_15 : 1;
} PM0Bits_t;

typedef struct
{
    uint16 _PMC0_0 : 1;
    uint16 _PMC0_1 : 1;
    uint16 _PMC0_2 : 1;
    uint16 _PMC0_3 : 1;
    uint16 _PMC0_4 : 1;
    uint16 _PMC0_5 : 1;
    uint16 _PMC0_6 : 1;
    uint16 _PMC0_7 : 1;
    uint16 _PMC0_8 : 1;
    uint16 _PMC0_9 : 1;
    uint16 _PMC0_10 : 1;
    uint16 _PMC0_11 : 1;
    uint16 _PMC0_12 : 1;
    uint16 _PMC0_13 : 1;
    uint16 _PMC0_14 : 1;
    uint16 _PMC0_15 : 1;
} PMC0Bits_t;

typedef struct
{
    uint16 _PFC0_0 : 1;
    uint16 _PFC0_1 : 1;
    uint16 _PFC0_2 : 1;
    uint16 _PFC0_3 : 1;
    uint16 _PFC0_4 : 1;
    uint16 _PFC0_5 : 1;
    uint16 _PFC0_6 : 1;
    uint16 _PFC0_7 : 1;
    uint16 _PFC0_8 : 1;
    uint16 _PFC0_9 : 1;
    uint16 _PFC0_10 : 1;
    uint16 _PFC0_11 : 1;
    uint16 _PFC0_12 : 1;
    uint16 _PFC0_13 : 1;
    uint16 _PFC0_14 : 1;
    uint16 _PFC0_15 : 1;
} PFC0Bits_t;

typedef struct
{
    uint16 _PFCE0_0 : 1;
    uint16 _PFCE0_1 : 1;
    uint16 _PFCE0_2 : 1;
    uint16 _PFCE0_3 : 1;
    uint16 _PFCE0_4 : 1;
    uint16 _PFCE0_5 : 1;
    uint16 _PFCE0_6 : 1;
    uint16 _PFCE0_7 : 1;
    uint16 _PFCE0_8 : 1;
    uint16 _PFCE0_9 : 1;
    uint16 _PFCE0_10 : 1;
    uint16 _PFCE0_11 : 1;
    uint16 _PFCE0_12 : 1;
    uint16 _PFCE0_13 : 1;
    uint16 _PFCE0_14 : 1;
    uint16 _PFCE0_15 : 1;
} PFCE0Bits_t;

typedef struct
{
    uint32 _PMSR0_0 : 1;
    uint32 _PMSR0_1 : 1;
    uint32 _PMSR0_2 : 1;
    uint32 _PMSR0_3 : 1;
    uint32 _PMSR0_4 : 1;
    uint32 _PMSR0_5 : 1;
    uint32 _PMSR0_6 : 1;
    uint32 _PMSR0_7 : 1;
    uint32 _PMSR0_8 : 1;
    uint32 _PMSR0_9 : 1;
    uint32 _PMSR0_10 : 1;
    uint32 _PMSR0_11 : 1;
    uint32 _PMSR0_12 : 1;
    uint32 _PMSR0_13 : 1;
    uint32 _PMSR0_14 : 1;
    uint32 _PMSR0_15 : 1;
    uint32 _PMSR0_16 : 1;
    uint32 _PMSR0_17 : 1;
    uint32 _PMSR0_18 : 1;
    uint32 _PMSR0_19 : 1;
    uint32 _PMSR0_20 : 1;
    uint32 _PMSR0_21 : 1;
    uint32 _PMSR0_22 : 1;
    uint32 _PMSR0_23 : 1;
    uint32 _PMSR0_24 : 1;
    uint32 _PMSR0_25 : 1;
    uint32 _PMSR0_26 : 1;
    uint32 _PMSR0_27 : 1;
    uint32 _PMSR0_28 : 1;
    uint32 _PMSR0_29 : 1;
    uint32 _PMSR0_30 : 1;
    uint32 _PMSR0_31 : 1;
} PMSR0Bits_t;

typedef struct
{
    uint32 _PMCSR0_0 : 1;
    uint32 _PMCSR0_1 : 1;
    uint32 _PMCSR0_2 : 1;
    uint32 _PMCSR0_3 : 1;
    uint32 _PMCSR0_4 : 1;
    uint32 _PMCSR0_5 : 1;
    uint32 _PMCSR0_6 : 1;
    uint32 _PMCSR0_7 : 1;
    uint32 _PMCSR0_8 : 1;
    uint32 _PMCSR0_9 : 1;
    uint32 _PMCSR0_10 : 1;
    uint32 _PMCSR0_11 : 1;
    uint32 _PMCSR0_12 : 1;
    uint32 _PMCSR0_13 : 1;
    uint32 _PMCSR0_14 : 1;
    uint32 _PMCSR0_15 : 1;
    uint32 _PMCSR0_16 : 1;
    uint32 _PMCSR0_17 : 1;
    uint32 _PMCSR0_18 : 1;
    uint32 _PMCSR0_19 : 1;
    uint32 _PMCSR0_20 : 1;
    uint32 _PMCSR0_21 : 1;
    uint32 _PMCSR0_22 : 1;
    uint32 _PMCSR0_23 : 1;
    uint32 _PMCSR0_24 : 1;
    uint32 _PMCSR0_25 : 1;
    uint32 _PMCSR0_26 : 1;
    uint32 _PMCSR0_27 : 1;
    uint32 _PMCSR0_28 : 1;
    uint32 _PMCSR0_29 : 1;
    uint32 _PMCSR0_30 : 1;
    uint32 _PMCSR0_31 : 1;
} PMCSR0Bits_t;

typedef struct
{
    uint16 _PINV0_0 : 1;
    uint16 _PINV0_1 : 1;
    uint16 _PINV0_2 : 1;
    uint16 _PINV0_3 : 1;
    uint16 _PINV0_4 : 1;
    uint16 _PINV0_5 : 1;
    uint16 _PINV0_6 : 1;
    uint16 _PINV0_7 : 1;
    uint16 _PINV0_8 : 1;
    uint16 _PINV0_9 : 1;
    uint16 _PINV0_10 : 1;
    uint16 _PINV0_11 : 1;
    uint16 _PINV0_12 : 1;
    uint16 _PINV0_13 : 1;
    uint16 _PINV0_14 : 1;
    uint16 _PINV0_15 : 1;
} PINV0Bits_t;

typedef struct
{
    uint16 _P1_0 : 1;
    uint16 _P1_1 : 1;
    uint16 _P1_2 : 1;
    uint16 _P1_3 : 1;
    uint16 _P1_4 : 1;
    uint16 _P1_5 : 1;
    uint16 _P1_6 : 1;
    uint16 _P1_7 : 1;
    uint16 _P1_8 : 1;
    uint16 _P1_9 : 1;
    uint16 _P1_10 : 1;
    uint16 _P1_11 : 1;
    uint16 _P1_12 : 1;
    uint16 _P1_13 : 1;
    uint16 _P1_14 : 1;
    uint16 _P1_15 : 1;
} P1Bits_t;

typedef struct
{
    uint32 _PSR1_0 : 1;
    uint32 _PSR1_1 : 1;
    uint32 _PSR1_2 : 1;
    uint32 _PSR1_3 : 1;
    uint32 _PSR1_4 : 1;
    uint32 _PSR1_5 : 1;
    uint32 _PSR1_6 : 1;
    uint32 _PSR1_7 : 1;
    uint32 _PSR1_8 : 1;
    uint32 _PSR1_9 : 1;
    uint32 _PSR1_10 : 1;
    uint32 _PSR1_11 : 1;
    uint32 _PSR1_12 : 1;
    uint32 _PSR1_13 : 1;
    uint32 _PSR1_14 : 1;
    uint32 _PSR1_15 : 1;
    uint32 _PSR1_16 : 1;
    uint32 _PSR1_17 : 1;
    uint32 _PSR1_18 : 1;
    uint32 _PSR1_19 : 1;
    uint32 _PSR1_20 : 1;
    uint32 _PSR1_21 : 1;
    uint32 _PSR1_22 : 1;
    uint32 _PSR1_23 : 1;
    uint32 _PSR1_24 : 1;
    uint32 _PSR1_25 : 1;
    uint32 _PSR1_26 : 1;
    uint32 _PSR1_27 : 1;
    uint32 _PSR1_28 : 1;
    uint32 _PSR1_29 : 1;
    uint32 _PSR1_30 : 1;
    uint32 _PSR1_31 : 1;
} PSR1Bits_t;

typedef struct
{
    uint16 _PNOT1_0 : 1;
    uint16 _PNOT1_1 : 1;
    uint16 _PNOT1_2 : 1;
    uint16 _PNOT1_3 : 1;
    uint16 _PNOT1_4 : 1;
    uint16 _PNOT1_5 : 1;
    uint16 _PNOT1_6 : 1;
    uint16 _PNOT1_7 : 1;
    uint16 _PNOT1_8 : 1;
    uint16 _PNOT1_9 : 1;
    uint16 _PNOT1_10 : 1;
    uint16 _PNOT1_11 : 1;
    uint16 _PNOT1_12 : 1;
    uint16 _PNOT1_13 : 1;
    uint16 _PNOT1_14 : 1;
    uint16 _PNOT1_15 : 1;
} PNOT1Bits_t;

typedef struct
{
    const uint16 _PPR1_0 : 1;
    const uint16 _PPR1_1 : 1;
    const uint16 _PPR1_2 : 1;
    const uint16 _PPR1_3 : 1;
    const uint16 _PPR1_4 : 1;
    const uint16 _PPR1_5 : 1;
    const uint16 _PPR1_6 : 1;
    const uint16 _PPR1_7 : 1;
    const uint16 _PPR1_8 : 1;
    const uint16 _PPR1_9 : 1;
    const uint16 _PPR1_10 : 1;
    const uint16 _PPR1_11 : 1;
    const uint16 _PPR1_12 : 1;
    const uint16 _PPR1_13 : 1;
    const uint16 _PPR1_14 : 1;
    const uint16 _PPR1_15 : 1;
} PPR1Bits_t;

typedef struct
{
    uint16 _PM1_0 : 1;
    uint16 _PM1_1 : 1;
    uint16 _PM1_2 : 1;
    uint16 _PM1_3 : 1;
    uint16 _PM1_4 : 1;
    uint16 _PM1_5 : 1;
    uint16 _PM1_6 : 1;
    uint16 _PM1_7 : 1;
    uint16 _PM1_8 : 1;
    uint16 _PM1_9 : 1;
    uint16 _PM1_10 : 1;
    uint16 _PM1_11 : 1;
    uint16 _PM1_12 : 1;
    uint16 _PM1_13 : 1;
    uint16 _PM1_14 : 1;
    uint16 _PM1_15 : 1;
} PM1Bits_t;

typedef struct
{
    uint16 _PMC1_0 : 1;
    uint16 _PMC1_1 : 1;
    uint16 _PMC1_2 : 1;
    uint16 _PMC1_3 : 1;
    uint16 _PMC1_4 : 1;
    uint16 _PMC1_5 : 1;
    uint16 _PMC1_6 : 1;
    uint16 _PMC1_7 : 1;
    uint16 _PMC1_8 : 1;
    uint16 _PMC1_9 : 1;
    uint16 _PMC1_10 : 1;
    uint16 _PMC1_11 : 1;
    uint16 _PMC1_12 : 1;
    uint16 _PMC1_13 : 1;
    uint16 _PMC1_14 : 1;
    uint16 _PMC1_15 : 1;
} PMC1Bits_t;

typedef struct
{
    uint16 _PFC1_0 : 1;
    uint16 _PFC1_1 : 1;
    uint16 _PFC1_2 : 1;
    uint16 _PFC1_3 : 1;
    uint16 _PFC1_4 : 1;
    uint16 _PFC1_5 : 1;
    uint16 _PFC1_6 : 1;
    uint16 _PFC1_7 : 1;
    uint16 _PFC1_8 : 1;
    uint16 _PFC1_9 : 1;
    uint16 _PFC1_10 : 1;
    uint16 _PFC1_11 : 1;
    uint16 _PFC1_12 : 1;
    uint16 _PFC1_13 : 1;
    uint16 _PFC1_14 : 1;
    uint16 _PFC1_15 : 1;
} PFC1Bits_t;

typedef struct
{
    uint16 _PFCE1_0 : 1;
    uint16 _PFCE1_1 : 1;
    uint16 _PFCE1_2 : 1;
    uint16 _PFCE1_3 : 1;
    uint16 _PFCE1_4 : 1;
    uint16 _PFCE1_5 : 1;
    uint16 _PFCE1_6 : 1;
    uint16 _PFCE1_7 : 1;
    uint16 _PFCE1_8 : 1;
    uint16 _PFCE1_9 : 1;
    uint16 _PFCE1_10 : 1;
    uint16 _PFCE1_11 : 1;
    uint16 _PFCE1_12 : 1;
    uint16 _PFCE1_13 : 1;
    uint16 _PFCE1_14 : 1;
    uint16 _PFCE1_15 : 1;
} PFCE1Bits_t;

typedef struct
{
    uint32 _PMSR1_0 : 1;
    uint32 _PMSR1_1 : 1;
    uint32 _PMSR1_2 : 1;
    uint32 _PMSR1_3 : 1;
    uint32 _PMSR1_4 : 1;
    uint32 _PMSR1_5 : 1;
    uint32 _PMSR1_6 : 1;
    uint32 _PMSR1_7 : 1;
    uint32 _PMSR1_8 : 1;
    uint32 _PMSR1_9 : 1;
    uint32 _PMSR1_10 : 1;
    uint32 _PMSR1_11 : 1;
    uint32 _PMSR1_12 : 1;
    uint32 _PMSR1_13 : 1;
    uint32 _PMSR1_14 : 1;
    uint32 _PMSR1_15 : 1;
    uint32 _PMSR1_16 : 1;
    uint32 _PMSR1_17 : 1;
    uint32 _PMSR1_18 : 1;
    uint32 _PMSR1_19 : 1;
    uint32 _PMSR1_20 : 1;
    uint32 _PMSR1_21 : 1;
    uint32 _PMSR1_22 : 1;
    uint32 _PMSR1_23 : 1;
    uint32 _PMSR1_24 : 1;
    uint32 _PMSR1_25 : 1;
    uint32 _PMSR1_26 : 1;
    uint32 _PMSR1_27 : 1;
    uint32 _PMSR1_28 : 1;
    uint32 _PMSR1_29 : 1;
    uint32 _PMSR1_30 : 1;
    uint32 _PMSR1_31 : 1;
} PMSR1Bits_t;

typedef struct
{
    uint32 _PMCSR1_0 : 1;
    uint32 _PMCSR1_1 : 1;
    uint32 _PMCSR1_2 : 1;
    uint32 _PMCSR1_3 : 1;
    uint32 _PMCSR1_4 : 1;
    uint32 _PMCSR1_5 : 1;
    uint32 _PMCSR1_6 : 1;
    uint32 _PMCSR1_7 : 1;
    uint32 _PMCSR1_8 : 1;
    uint32 _PMCSR1_9 : 1;
    uint32 _PMCSR1_10 : 1;
    uint32 _PMCSR1_11 : 1;
    uint32 _PMCSR1_12 : 1;
    uint32 _PMCSR1_13 : 1;
    uint32 _PMCSR1_14 : 1;
    uint32 _PMCSR1_15 : 1;
    uint32 _PMCSR1_16 : 1;
    uint32 _PMCSR1_17 : 1;
    uint32 _PMCSR1_18 : 1;
    uint32 _PMCSR1_19 : 1;
    uint32 _PMCSR1_20 : 1;
    uint32 _PMCSR1_21 : 1;
    uint32 _PMCSR1_22 : 1;
    uint32 _PMCSR1_23 : 1;
    uint32 _PMCSR1_24 : 1;
    uint32 _PMCSR1_25 : 1;
    uint32 _PMCSR1_26 : 1;
    uint32 _PMCSR1_27 : 1;
    uint32 _PMCSR1_28 : 1;
    uint32 _PMCSR1_29 : 1;
    uint32 _PMCSR1_30 : 1;
    uint32 _PMCSR1_31 : 1;
} PMCSR1Bits_t;

typedef struct
{
    uint16 _PINV1_0 : 1;
    uint16 _PINV1_1 : 1;
    uint16 _PINV1_2 : 1;
    uint16 _PINV1_3 : 1;
    uint16 _PINV1_4 : 1;
    uint16 _PINV1_5 : 1;
    uint16 _PINV1_6 : 1;
    uint16 _PINV1_7 : 1;
    uint16 _PINV1_8 : 1;
    uint16 _PINV1_9 : 1;
    uint16 _PINV1_10 : 1;
    uint16 _PINV1_11 : 1;
    uint16 _PINV1_12 : 1;
    uint16 _PINV1_13 : 1;
    uint16 _PINV1_14 : 1;
    uint16 _PINV1_15 : 1;
} PINV1Bits_t;

typedef struct
{
    uint16 _P2_0 : 1;
    uint16 _P2_1 : 1;
    uint16 _P2_2 : 1;
    uint16 _P2_3 : 1;
    uint16 _P2_4 : 1;
    uint16 _P2_5 : 1;
    uint16 _P2_6 : 1;
    uint16 _P2_7 : 1;
    uint16 _P2_8 : 1;
    uint16 _P2_9 : 1;
    uint16 _P2_10 : 1;
    uint16 _P2_11 : 1;
    uint16 _P2_12 : 1;
    uint16 _P2_13 : 1;
    uint16 _P2_14 : 1;
    uint16 _P2_15 : 1;
} P2Bits_t;

typedef struct
{
    uint32 _PSR2_0 : 1;
    uint32 _PSR2_1 : 1;
    uint32 _PSR2_2 : 1;
    uint32 _PSR2_3 : 1;
    uint32 _PSR2_4 : 1;
    uint32 _PSR2_5 : 1;
    uint32 _PSR2_6 : 1;
    uint32 _PSR2_7 : 1;
    uint32 _PSR2_8 : 1;
    uint32 _PSR2_9 : 1;
    uint32 _PSR2_10 : 1;
    uint32 _PSR2_11 : 1;
    uint32 _PSR2_12 : 1;
    uint32 _PSR2_13 : 1;
    uint32 _PSR2_14 : 1;
    uint32 _PSR2_15 : 1;
    uint32 _PSR2_16 : 1;
    uint32 _PSR2_17 : 1;
    uint32 _PSR2_18 : 1;
    uint32 _PSR2_19 : 1;
    uint32 _PSR2_20 : 1;
    uint32 _PSR2_21 : 1;
    uint32 _PSR2_22 : 1;
    uint32 _PSR2_23 : 1;
    uint32 _PSR2_24 : 1;
    uint32 _PSR2_25 : 1;
    uint32 _PSR2_26 : 1;
    uint32 _PSR2_27 : 1;
    uint32 _PSR2_28 : 1;
    uint32 _PSR2_29 : 1;
    uint32 _PSR2_30 : 1;
    uint32 _PSR2_31 : 1;
} PSR2Bits_t;

typedef struct
{
    uint16 _PNOT2_0 : 1;
    uint16 _PNOT2_1 : 1;
    uint16 _PNOT2_2 : 1;
    uint16 _PNOT2_3 : 1;
    uint16 _PNOT2_4 : 1;
    uint16 _PNOT2_5 : 1;
    uint16 _PNOT2_6 : 1;
    uint16 _PNOT2_7 : 1;
    uint16 _PNOT2_8 : 1;
    uint16 _PNOT2_9 : 1;
    uint16 _PNOT2_10 : 1;
    uint16 _PNOT2_11 : 1;
    uint16 _PNOT2_12 : 1;
    uint16 _PNOT2_13 : 1;
    uint16 _PNOT2_14 : 1;
    uint16 _PNOT2_15 : 1;
} PNOT2Bits_t;

typedef struct
{
    const uint16 _PPR2_0 : 1;
    const uint16 _PPR2_1 : 1;
    const uint16 _PPR2_2 : 1;
    const uint16 _PPR2_3 : 1;
    const uint16 _PPR2_4 : 1;
    const uint16 _PPR2_5 : 1;
    const uint16 _PPR2_6 : 1;
    const uint16 _PPR2_7 : 1;
    const uint16 _PPR2_8 : 1;
    const uint16 _PPR2_9 : 1;
    const uint16 _PPR2_10 : 1;
    const uint16 _PPR2_11 : 1;
    const uint16 _PPR2_12 : 1;
    const uint16 _PPR2_13 : 1;
    const uint16 _PPR2_14 : 1;
    const uint16 _PPR2_15 : 1;
} PPR2Bits_t;

typedef struct
{
    uint16 _PM2_0 : 1;
    uint16 _PM2_1 : 1;
    uint16 _PM2_2 : 1;
    uint16 _PM2_3 : 1;
    uint16 _PM2_4 : 1;
    uint16 _PM2_5 : 1;
    uint16 _PM2_6 : 1;
    uint16 _PM2_7 : 1;
    uint16 _PM2_8 : 1;
    uint16 _PM2_9 : 1;
    uint16 _PM2_10 : 1;
    uint16 _PM2_11 : 1;
    uint16 _PM2_12 : 1;
    uint16 _PM2_13 : 1;
    uint16 _PM2_14 : 1;
    uint16 _PM2_15 : 1;
} PM2Bits_t;

typedef struct
{
    uint16 _PMC2_0 : 1;
    uint16 _PMC2_1 : 1;
    uint16 _PMC2_2 : 1;
    uint16 _PMC2_3 : 1;
    uint16 _PMC2_4 : 1;
    uint16 _PMC2_5 : 1;
    uint16 _PMC2_6 : 1;
    uint16 _PMC2_7 : 1;
    uint16 _PMC2_8 : 1;
    uint16 _PMC2_9 : 1;
    uint16 _PMC2_10 : 1;
    uint16 _PMC2_11 : 1;
    uint16 _PMC2_12 : 1;
    uint16 _PMC2_13 : 1;
    uint16 _PMC2_14 : 1;
    uint16 _PMC2_15 : 1;
} PMC2Bits_t;

typedef struct
{
    uint16 _PFC2_0 : 1;
    uint16 _PFC2_1 : 1;
    uint16 _PFC2_2 : 1;
    uint16 _PFC2_3 : 1;
    uint16 _PFC2_4 : 1;
    uint16 _PFC2_5 : 1;
    uint16 _PFC2_6 : 1;
    uint16 _PFC2_7 : 1;
    uint16 _PFC2_8 : 1;
    uint16 _PFC2_9 : 1;
    uint16 _PFC2_10 : 1;
    uint16 _PFC2_11 : 1;
    uint16 _PFC2_12 : 1;
    uint16 _PFC2_13 : 1;
    uint16 _PFC2_14 : 1;
    uint16 _PFC2_15 : 1;
} PFC2Bits_t;

typedef struct
{
    uint16 _PFCE2_0 : 1;
    uint16 _PFCE2_1 : 1;
    uint16 _PFCE2_2 : 1;
    uint16 _PFCE2_3 : 1;
    uint16 _PFCE2_4 : 1;
    uint16 _PFCE2_5 : 1;
    uint16 _PFCE2_6 : 1;
    uint16 _PFCE2_7 : 1;
    uint16 _PFCE2_8 : 1;
    uint16 _PFCE2_9 : 1;
    uint16 _PFCE2_10 : 1;
    uint16 _PFCE2_11 : 1;
    uint16 _PFCE2_12 : 1;
    uint16 _PFCE2_13 : 1;
    uint16 _PFCE2_14 : 1;
    uint16 _PFCE2_15 : 1;
} PFCE2Bits_t;

typedef struct
{
    uint32 _PMSR2_0 : 1;
    uint32 _PMSR2_1 : 1;
    uint32 _PMSR2_2 : 1;
    uint32 _PMSR2_3 : 1;
    uint32 _PMSR2_4 : 1;
    uint32 _PMSR2_5 : 1;
    uint32 _PMSR2_6 : 1;
    uint32 _PMSR2_7 : 1;
    uint32 _PMSR2_8 : 1;
    uint32 _PMSR2_9 : 1;
    uint32 _PMSR2_10 : 1;
    uint32 _PMSR2_11 : 1;
    uint32 _PMSR2_12 : 1;
    uint32 _PMSR2_13 : 1;
    uint32 _PMSR2_14 : 1;
    uint32 _PMSR2_15 : 1;
    uint32 _PMSR2_16 : 1;
    uint32 _PMSR2_17 : 1;
    uint32 _PMSR2_18 : 1;
    uint32 _PMSR2_19 : 1;
    uint32 _PMSR2_20 : 1;
    uint32 _PMSR2_21 : 1;
    uint32 _PMSR2_22 : 1;
    uint32 _PMSR2_23 : 1;
    uint32 _PMSR2_24 : 1;
    uint32 _PMSR2_25 : 1;
    uint32 _PMSR2_26 : 1;
    uint32 _PMSR2_27 : 1;
    uint32 _PMSR2_28 : 1;
    uint32 _PMSR2_29 : 1;
    uint32 _PMSR2_30 : 1;
    uint32 _PMSR2_31 : 1;
} PMSR2Bits_t;

typedef struct
{
    uint32 _PMCSR2_0 : 1;
    uint32 _PMCSR2_1 : 1;
    uint32 _PMCSR2_2 : 1;
    uint32 _PMCSR2_3 : 1;
    uint32 _PMCSR2_4 : 1;
    uint32 _PMCSR2_5 : 1;
    uint32 _PMCSR2_6 : 1;
    uint32 _PMCSR2_7 : 1;
    uint32 _PMCSR2_8 : 1;
    uint32 _PMCSR2_9 : 1;
    uint32 _PMCSR2_10 : 1;
    uint32 _PMCSR2_11 : 1;
    uint32 _PMCSR2_12 : 1;
    uint32 _PMCSR2_13 : 1;
    uint32 _PMCSR2_14 : 1;
    uint32 _PMCSR2_15 : 1;
    uint32 _PMCSR2_16 : 1;
    uint32 _PMCSR2_17 : 1;
    uint32 _PMCSR2_18 : 1;
    uint32 _PMCSR2_19 : 1;
    uint32 _PMCSR2_20 : 1;
    uint32 _PMCSR2_21 : 1;
    uint32 _PMCSR2_22 : 1;
    uint32 _PMCSR2_23 : 1;
    uint32 _PMCSR2_24 : 1;
    uint32 _PMCSR2_25 : 1;
    uint32 _PMCSR2_26 : 1;
    uint32 _PMCSR2_27 : 1;
    uint32 _PMCSR2_28 : 1;
    uint32 _PMCSR2_29 : 1;
    uint32 _PMCSR2_30 : 1;
    uint32 _PMCSR2_31 : 1;
} PMCSR2Bits_t;

typedef struct
{
    uint16 _PINV2_0 : 1;
    uint16 _PINV2_1 : 1;
    uint16 _PINV2_2 : 1;
    uint16 _PINV2_3 : 1;
    uint16 _PINV2_4 : 1;
    uint16 _PINV2_5 : 1;
    uint16 _PINV2_6 : 1;
    uint16 _PINV2_7 : 1;
    uint16 _PINV2_8 : 1;
    uint16 _PINV2_9 : 1;
    uint16 _PINV2_10 : 1;
    uint16 _PINV2_11 : 1;
    uint16 _PINV2_12 : 1;
    uint16 _PINV2_13 : 1;
    uint16 _PINV2_14 : 1;
    uint16 _PINV2_15 : 1;
} PINV2Bits_t;

typedef struct
{
    uint16 _P3_0 : 1;
    uint16 _P3_1 : 1;
    uint16 _P3_2 : 1;
    uint16 _P3_3 : 1;
    uint16 _P3_4 : 1;
    uint16 _P3_5 : 1;
    uint16 _P3_6 : 1;
    uint16 _P3_7 : 1;
    uint16 _P3_8 : 1;
    uint16 _P3_9 : 1;
    uint16 _P3_10 : 1;
    uint16 _P3_11 : 1;
    uint16 _P3_12 : 1;
    uint16 _P3_13 : 1;
    uint16 _P3_14 : 1;
    uint16 _P3_15 : 1;
} P3Bits_t;

typedef struct
{
    uint32 _PSR3_0 : 1;
    uint32 _PSR3_1 : 1;
    uint32 _PSR3_2 : 1;
    uint32 _PSR3_3 : 1;
    uint32 _PSR3_4 : 1;
    uint32 _PSR3_5 : 1;
    uint32 _PSR3_6 : 1;
    uint32 _PSR3_7 : 1;
    uint32 _PSR3_8 : 1;
    uint32 _PSR3_9 : 1;
    uint32 _PSR3_10 : 1;
    uint32 _PSR3_11 : 1;
    uint32 _PSR3_12 : 1;
    uint32 _PSR3_13 : 1;
    uint32 _PSR3_14 : 1;
    uint32 _PSR3_15 : 1;
    uint32 _PSR3_16 : 1;
    uint32 _PSR3_17 : 1;
    uint32 _PSR3_18 : 1;
    uint32 _PSR3_19 : 1;
    uint32 _PSR3_20 : 1;
    uint32 _PSR3_21 : 1;
    uint32 _PSR3_22 : 1;
    uint32 _PSR3_23 : 1;
    uint32 _PSR3_24 : 1;
    uint32 _PSR3_25 : 1;
    uint32 _PSR3_26 : 1;
    uint32 _PSR3_27 : 1;
    uint32 _PSR3_28 : 1;
    uint32 _PSR3_29 : 1;
    uint32 _PSR3_30 : 1;
    uint32 _PSR3_31 : 1;
} PSR3Bits_t;

typedef struct
{
    uint16 _PNOT3_0 : 1;
    uint16 _PNOT3_1 : 1;
    uint16 _PNOT3_2 : 1;
    uint16 _PNOT3_3 : 1;
    uint16 _PNOT3_4 : 1;
    uint16 _PNOT3_5 : 1;
    uint16 _PNOT3_6 : 1;
    uint16 _PNOT3_7 : 1;
    uint16 _PNOT3_8 : 1;
    uint16 _PNOT3_9 : 1;
    uint16 _PNOT3_10 : 1;
    uint16 _PNOT3_11 : 1;
    uint16 _PNOT3_12 : 1;
    uint16 _PNOT3_13 : 1;
    uint16 _PNOT3_14 : 1;
    uint16 _PNOT3_15 : 1;
} PNOT3Bits_t;

typedef struct
{
    const uint16 _PPR3_0 : 1;
    const uint16 _PPR3_1 : 1;
    const uint16 _PPR3_2 : 1;
    const uint16 _PPR3_3 : 1;
    const uint16 _PPR3_4 : 1;
    const uint16 _PPR3_5 : 1;
    const uint16 _PPR3_6 : 1;
    const uint16 _PPR3_7 : 1;
    const uint16 _PPR3_8 : 1;
    const uint16 _PPR3_9 : 1;
    const uint16 _PPR3_10 : 1;
    const uint16 _PPR3_11 : 1;
    const uint16 _PPR3_12 : 1;
    const uint16 _PPR3_13 : 1;
    const uint16 _PPR3_14 : 1;
    const uint16 _PPR3_15 : 1;
} PPR3Bits_t;

typedef struct
{
    uint16 _PM3_0 : 1;
    uint16 _PM3_1 : 1;
    uint16 _PM3_2 : 1;
    uint16 _PM3_3 : 1;
    uint16 _PM3_4 : 1;
    uint16 _PM3_5 : 1;
    uint16 _PM3_6 : 1;
    uint16 _PM3_7 : 1;
    uint16 _PM3_8 : 1;
    uint16 _PM3_9 : 1;
    uint16 _PM3_10 : 1;
    uint16 _PM3_11 : 1;
    uint16 _PM3_12 : 1;
    uint16 _PM3_13 : 1;
    uint16 _PM3_14 : 1;
    uint16 _PM3_15 : 1;
} PM3Bits_t;

typedef struct
{
    uint16 _PMC3_0 : 1;
    uint16 _PMC3_1 : 1;
    uint16 _PMC3_2 : 1;
    uint16 _PMC3_3 : 1;
    uint16 _PMC3_4 : 1;
    uint16 _PMC3_5 : 1;
    uint16 _PMC3_6 : 1;
    uint16 _PMC3_7 : 1;
    uint16 _PMC3_8 : 1;
    uint16 _PMC3_9 : 1;
    uint16 _PMC3_10 : 1;
    uint16 _PMC3_11 : 1;
    uint16 _PMC3_12 : 1;
    uint16 _PMC3_13 : 1;
    uint16 _PMC3_14 : 1;
    uint16 _PMC3_15 : 1;
} PMC3Bits_t;

typedef struct
{
    uint16 _PFC3_0 : 1;
    uint16 _PFC3_1 : 1;
    uint16 _PFC3_2 : 1;
    uint16 _PFC3_3 : 1;
    uint16 _PFC3_4 : 1;
    uint16 _PFC3_5 : 1;
    uint16 _PFC3_6 : 1;
    uint16 _PFC3_7 : 1;
    uint16 _PFC3_8 : 1;
    uint16 _PFC3_9 : 1;
    uint16 _PFC3_10 : 1;
    uint16 _PFC3_11 : 1;
    uint16 _PFC3_12 : 1;
    uint16 _PFC3_13 : 1;
    uint16 _PFC3_14 : 1;
    uint16 _PFC3_15 : 1;
} PFC3Bits_t;

typedef struct
{
    uint16 _PFCE3_0 : 1;
    uint16 _PFCE3_1 : 1;
    uint16 _PFCE3_2 : 1;
    uint16 _PFCE3_3 : 1;
    uint16 _PFCE3_4 : 1;
    uint16 _PFCE3_5 : 1;
    uint16 _PFCE3_6 : 1;
    uint16 _PFCE3_7 : 1;
    uint16 _PFCE3_8 : 1;
    uint16 _PFCE3_9 : 1;
    uint16 _PFCE3_10 : 1;
    uint16 _PFCE3_11 : 1;
    uint16 _PFCE3_12 : 1;
    uint16 _PFCE3_13 : 1;
    uint16 _PFCE3_14 : 1;
    uint16 _PFCE3_15 : 1;
} PFCE3Bits_t;

typedef struct
{
    uint32 _PMSR3_0 : 1;
    uint32 _PMSR3_1 : 1;
    uint32 _PMSR3_2 : 1;
    uint32 _PMSR3_3 : 1;
    uint32 _PMSR3_4 : 1;
    uint32 _PMSR3_5 : 1;
    uint32 _PMSR3_6 : 1;
    uint32 _PMSR3_7 : 1;
    uint32 _PMSR3_8 : 1;
    uint32 _PMSR3_9 : 1;
    uint32 _PMSR3_10 : 1;
    uint32 _PMSR3_11 : 1;
    uint32 _PMSR3_12 : 1;
    uint32 _PMSR3_13 : 1;
    uint32 _PMSR3_14 : 1;
    uint32 _PMSR3_15 : 1;
    uint32 _PMSR3_16 : 1;
    uint32 _PMSR3_17 : 1;
    uint32 _PMSR3_18 : 1;
    uint32 _PMSR3_19 : 1;
    uint32 _PMSR3_20 : 1;
    uint32 _PMSR3_21 : 1;
    uint32 _PMSR3_22 : 1;
    uint32 _PMSR3_23 : 1;
    uint32 _PMSR3_24 : 1;
    uint32 _PMSR3_25 : 1;
    uint32 _PMSR3_26 : 1;
    uint32 _PMSR3_27 : 1;
    uint32 _PMSR3_28 : 1;
    uint32 _PMSR3_29 : 1;
    uint32 _PMSR3_30 : 1;
    uint32 _PMSR3_31 : 1;
} PMSR3Bits_t;

typedef struct
{
    uint32 _PMCSR3_0 : 1;
    uint32 _PMCSR3_1 : 1;
    uint32 _PMCSR3_2 : 1;
    uint32 _PMCSR3_3 : 1;
    uint32 _PMCSR3_4 : 1;
    uint32 _PMCSR3_5 : 1;
    uint32 _PMCSR3_6 : 1;
    uint32 _PMCSR3_7 : 1;
    uint32 _PMCSR3_8 : 1;
    uint32 _PMCSR3_9 : 1;
    uint32 _PMCSR3_10 : 1;
    uint32 _PMCSR3_11 : 1;
    uint32 _PMCSR3_12 : 1;
    uint32 _PMCSR3_13 : 1;
    uint32 _PMCSR3_14 : 1;
    uint32 _PMCSR3_15 : 1;
    uint32 _PMCSR3_16 : 1;
    uint32 _PMCSR3_17 : 1;
    uint32 _PMCSR3_18 : 1;
    uint32 _PMCSR3_19 : 1;
    uint32 _PMCSR3_20 : 1;
    uint32 _PMCSR3_21 : 1;
    uint32 _PMCSR3_22 : 1;
    uint32 _PMCSR3_23 : 1;
    uint32 _PMCSR3_24 : 1;
    uint32 _PMCSR3_25 : 1;
    uint32 _PMCSR3_26 : 1;
    uint32 _PMCSR3_27 : 1;
    uint32 _PMCSR3_28 : 1;
    uint32 _PMCSR3_29 : 1;
    uint32 _PMCSR3_30 : 1;
    uint32 _PMCSR3_31 : 1;
} PMCSR3Bits_t;

typedef struct
{
    uint16 _PINV3_0 : 1;
    uint16 _PINV3_1 : 1;
    uint16 _PINV3_2 : 1;
    uint16 _PINV3_3 : 1;
    uint16 _PINV3_4 : 1;
    uint16 _PINV3_5 : 1;
    uint16 _PINV3_6 : 1;
    uint16 _PINV3_7 : 1;
    uint16 _PINV3_8 : 1;
    uint16 _PINV3_9 : 1;
    uint16 _PINV3_10 : 1;
    uint16 _PINV3_11 : 1;
    uint16 _PINV3_12 : 1;
    uint16 _PINV3_13 : 1;
    uint16 _PINV3_14 : 1;
    uint16 _PINV3_15 : 1;
} PINV3Bits_t;

typedef struct
{
    uint16 _P4_0 : 1;
    uint16 _P4_1 : 1;
    uint16 _P4_2 : 1;
    uint16 _P4_3 : 1;
    uint16 _P4_4 : 1;
    uint16 _P4_5 : 1;
    uint16 _P4_6 : 1;
    uint16 _P4_7 : 1;
    uint16 _P4_8 : 1;
    uint16 _P4_9 : 1;
    uint16 _P4_10 : 1;
    uint16 _P4_11 : 1;
    uint16 _P4_12 : 1;
    uint16 _P4_13 : 1;
    uint16 _P4_14 : 1;
    uint16 _P4_15 : 1;
} P4Bits_t;

typedef struct
{
    uint32 _PSR4_0 : 1;
    uint32 _PSR4_1 : 1;
    uint32 _PSR4_2 : 1;
    uint32 _PSR4_3 : 1;
    uint32 _PSR4_4 : 1;
    uint32 _PSR4_5 : 1;
    uint32 _PSR4_6 : 1;
    uint32 _PSR4_7 : 1;
    uint32 _PSR4_8 : 1;
    uint32 _PSR4_9 : 1;
    uint32 _PSR4_10 : 1;
    uint32 _PSR4_11 : 1;
    uint32 _PSR4_12 : 1;
    uint32 _PSR4_13 : 1;
    uint32 _PSR4_14 : 1;
    uint32 _PSR4_15 : 1;
    uint32 _PSR4_16 : 1;
    uint32 _PSR4_17 : 1;
    uint32 _PSR4_18 : 1;
    uint32 _PSR4_19 : 1;
    uint32 _PSR4_20 : 1;
    uint32 _PSR4_21 : 1;
    uint32 _PSR4_22 : 1;
    uint32 _PSR4_23 : 1;
    uint32 _PSR4_24 : 1;
    uint32 _PSR4_25 : 1;
    uint32 _PSR4_26 : 1;
    uint32 _PSR4_27 : 1;
    uint32 _PSR4_28 : 1;
    uint32 _PSR4_29 : 1;
    uint32 _PSR4_30 : 1;
    uint32 _PSR4_31 : 1;
} PSR4Bits_t;

typedef struct
{
    uint16 _PNOT4_0 : 1;
    uint16 _PNOT4_1 : 1;
    uint16 _PNOT4_2 : 1;
    uint16 _PNOT4_3 : 1;
    uint16 _PNOT4_4 : 1;
    uint16 _PNOT4_5 : 1;
    uint16 _PNOT4_6 : 1;
    uint16 _PNOT4_7 : 1;
    uint16 _PNOT4_8 : 1;
    uint16 _PNOT4_9 : 1;
    uint16 _PNOT4_10 : 1;
    uint16 _PNOT4_11 : 1;
    uint16 _PNOT4_12 : 1;
    uint16 _PNOT4_13 : 1;
    uint16 _PNOT4_14 : 1;
    uint16 _PNOT4_15 : 1;
} PNOT4Bits_t;

typedef struct
{
    const uint16 _PPR4_0 : 1;
    const uint16 _PPR4_1 : 1;
    const uint16 _PPR4_2 : 1;
    const uint16 _PPR4_3 : 1;
    const uint16 _PPR4_4 : 1;
    const uint16 _PPR4_5 : 1;
    const uint16 _PPR4_6 : 1;
    const uint16 _PPR4_7 : 1;
    const uint16 _PPR4_8 : 1;
    const uint16 _PPR4_9 : 1;
    const uint16 _PPR4_10 : 1;
    const uint16 _PPR4_11 : 1;
    const uint16 _PPR4_12 : 1;
    const uint16 _PPR4_13 : 1;
    const uint16 _PPR4_14 : 1;
    const uint16 _PPR4_15 : 1;
} PPR4Bits_t;

typedef struct
{
    uint16 _PM4_0 : 1;
    uint16 _PM4_1 : 1;
    uint16 _PM4_2 : 1;
    uint16 _PM4_3 : 1;
    uint16 _PM4_4 : 1;
    uint16 _PM4_5 : 1;
    uint16 _PM4_6 : 1;
    uint16 _PM4_7 : 1;
    uint16 _PM4_8 : 1;
    uint16 _PM4_9 : 1;
    uint16 _PM4_10 : 1;
    uint16 _PM4_11 : 1;
    uint16 _PM4_12 : 1;
    uint16 _PM4_13 : 1;
    uint16 _PM4_14 : 1;
    uint16 _PM4_15 : 1;
} PM4Bits_t;

typedef struct
{
    uint16 _PMC4_0 : 1;
    uint16 _PMC4_1 : 1;
    uint16 _PMC4_2 : 1;
    uint16 _PMC4_3 : 1;
    uint16 _PMC4_4 : 1;
    uint16 _PMC4_5 : 1;
    uint16 _PMC4_6 : 1;
    uint16 _PMC4_7 : 1;
    uint16 _PMC4_8 : 1;
    uint16 _PMC4_9 : 1;
    uint16 _PMC4_10 : 1;
    uint16 _PMC4_11 : 1;
    uint16 _PMC4_12 : 1;
    uint16 _PMC4_13 : 1;
    uint16 _PMC4_14 : 1;
    uint16 _PMC4_15 : 1;
} PMC4Bits_t;

typedef struct
{
    uint16 _PFC4_0 : 1;
    uint16 _PFC4_1 : 1;
    uint16 _PFC4_2 : 1;
    uint16 _PFC4_3 : 1;
    uint16 _PFC4_4 : 1;
    uint16 _PFC4_5 : 1;
    uint16 _PFC4_6 : 1;
    uint16 _PFC4_7 : 1;
    uint16 _PFC4_8 : 1;
    uint16 _PFC4_9 : 1;
    uint16 _PFC4_10 : 1;
    uint16 _PFC4_11 : 1;
    uint16 _PFC4_12 : 1;
    uint16 _PFC4_13 : 1;
    uint16 _PFC4_14 : 1;
    uint16 _PFC4_15 : 1;
} PFC4Bits_t;

typedef struct
{
    uint16 _PFCE4_0 : 1;
    uint16 _PFCE4_1 : 1;
    uint16 _PFCE4_2 : 1;
    uint16 _PFCE4_3 : 1;
    uint16 _PFCE4_4 : 1;
    uint16 _PFCE4_5 : 1;
    uint16 _PFCE4_6 : 1;
    uint16 _PFCE4_7 : 1;
    uint16 _PFCE4_8 : 1;
    uint16 _PFCE4_9 : 1;
    uint16 _PFCE4_10 : 1;
    uint16 _PFCE4_11 : 1;
    uint16 _PFCE4_12 : 1;
    uint16 _PFCE4_13 : 1;
    uint16 _PFCE4_14 : 1;
    uint16 _PFCE4_15 : 1;
} PFCE4Bits_t;

typedef struct
{
    uint32 _PMSR4_0 : 1;
    uint32 _PMSR4_1 : 1;
    uint32 _PMSR4_2 : 1;
    uint32 _PMSR4_3 : 1;
    uint32 _PMSR4_4 : 1;
    uint32 _PMSR4_5 : 1;
    uint32 _PMSR4_6 : 1;
    uint32 _PMSR4_7 : 1;
    uint32 _PMSR4_8 : 1;
    uint32 _PMSR4_9 : 1;
    uint32 _PMSR4_10 : 1;
    uint32 _PMSR4_11 : 1;
    uint32 _PMSR4_12 : 1;
    uint32 _PMSR4_13 : 1;
    uint32 _PMSR4_14 : 1;
    uint32 _PMSR4_15 : 1;
    uint32 _PMSR4_16 : 1;
    uint32 _PMSR4_17 : 1;
    uint32 _PMSR4_18 : 1;
    uint32 _PMSR4_19 : 1;
    uint32 _PMSR4_20 : 1;
    uint32 _PMSR4_21 : 1;
    uint32 _PMSR4_22 : 1;
    uint32 _PMSR4_23 : 1;
    uint32 _PMSR4_24 : 1;
    uint32 _PMSR4_25 : 1;
    uint32 _PMSR4_26 : 1;
    uint32 _PMSR4_27 : 1;
    uint32 _PMSR4_28 : 1;
    uint32 _PMSR4_29 : 1;
    uint32 _PMSR4_30 : 1;
    uint32 _PMSR4_31 : 1;
} PMSR4Bits_t;

typedef struct
{
    uint32 _PMCSR4_0 : 1;
    uint32 _PMCSR4_1 : 1;
    uint32 _PMCSR4_2 : 1;
    uint32 _PMCSR4_3 : 1;
    uint32 _PMCSR4_4 : 1;
    uint32 _PMCSR4_5 : 1;
    uint32 _PMCSR4_6 : 1;
    uint32 _PMCSR4_7 : 1;
    uint32 _PMCSR4_8 : 1;
    uint32 _PMCSR4_9 : 1;
    uint32 _PMCSR4_10 : 1;
    uint32 _PMCSR4_11 : 1;
    uint32 _PMCSR4_12 : 1;
    uint32 _PMCSR4_13 : 1;
    uint32 _PMCSR4_14 : 1;
    uint32 _PMCSR4_15 : 1;
    uint32 _PMCSR4_16 : 1;
    uint32 _PMCSR4_17 : 1;
    uint32 _PMCSR4_18 : 1;
    uint32 _PMCSR4_19 : 1;
    uint32 _PMCSR4_20 : 1;
    uint32 _PMCSR4_21 : 1;
    uint32 _PMCSR4_22 : 1;
    uint32 _PMCSR4_23 : 1;
    uint32 _PMCSR4_24 : 1;
    uint32 _PMCSR4_25 : 1;
    uint32 _PMCSR4_26 : 1;
    uint32 _PMCSR4_27 : 1;
    uint32 _PMCSR4_28 : 1;
    uint32 _PMCSR4_29 : 1;
    uint32 _PMCSR4_30 : 1;
    uint32 _PMCSR4_31 : 1;
} PMCSR4Bits_t;

typedef struct
{
    uint16 _PINV4_0 : 1;
    uint16 _PINV4_1 : 1;
    uint16 _PINV4_2 : 1;
    uint16 _PINV4_3 : 1;
    uint16 _PINV4_4 : 1;
    uint16 _PINV4_5 : 1;
    uint16 _PINV4_6 : 1;
    uint16 _PINV4_7 : 1;
    uint16 _PINV4_8 : 1;
    uint16 _PINV4_9 : 1;
    uint16 _PINV4_10 : 1;
    uint16 _PINV4_11 : 1;
    uint16 _PINV4_12 : 1;
    uint16 _PINV4_13 : 1;
    uint16 _PINV4_14 : 1;
    uint16 _PINV4_15 : 1;
} PINV4Bits_t;

typedef struct
{
    uint16 _P5_0 : 1;
    uint16 _P5_1 : 1;
    uint16 _P5_2 : 1;
    uint16 _P5_3 : 1;
    uint16 _P5_4 : 1;
    uint16 _P5_5 : 1;
    uint16 _P5_6 : 1;
    uint16 _P5_7 : 1;
    uint16 _P5_8 : 1;
    uint16 _P5_9 : 1;
    uint16 _P5_10 : 1;
    uint16 _P5_11 : 1;
    uint16 _P5_12 : 1;
    uint16 _P5_13 : 1;
    uint16 _P5_14 : 1;
    uint16 _P5_15 : 1;
} P5Bits_t;

typedef struct
{
    uint32 _PSR5_0 : 1;
    uint32 _PSR5_1 : 1;
    uint32 _PSR5_2 : 1;
    uint32 _PSR5_3 : 1;
    uint32 _PSR5_4 : 1;
    uint32 _PSR5_5 : 1;
    uint32 _PSR5_6 : 1;
    uint32 _PSR5_7 : 1;
    uint32 _PSR5_8 : 1;
    uint32 _PSR5_9 : 1;
    uint32 _PSR5_10 : 1;
    uint32 _PSR5_11 : 1;
    uint32 _PSR5_12 : 1;
    uint32 _PSR5_13 : 1;
    uint32 _PSR5_14 : 1;
    uint32 _PSR5_15 : 1;
    uint32 _PSR5_16 : 1;
    uint32 _PSR5_17 : 1;
    uint32 _PSR5_18 : 1;
    uint32 _PSR5_19 : 1;
    uint32 _PSR5_20 : 1;
    uint32 _PSR5_21 : 1;
    uint32 _PSR5_22 : 1;
    uint32 _PSR5_23 : 1;
    uint32 _PSR5_24 : 1;
    uint32 _PSR5_25 : 1;
    uint32 _PSR5_26 : 1;
    uint32 _PSR5_27 : 1;
    uint32 _PSR5_28 : 1;
    uint32 _PSR5_29 : 1;
    uint32 _PSR5_30 : 1;
    uint32 _PSR5_31 : 1;
} PSR5Bits_t;

typedef struct
{
    uint16 _PNOT5_0 : 1;
    uint16 _PNOT5_1 : 1;
    uint16 _PNOT5_2 : 1;
    uint16 _PNOT5_3 : 1;
    uint16 _PNOT5_4 : 1;
    uint16 _PNOT5_5 : 1;
    uint16 _PNOT5_6 : 1;
    uint16 _PNOT5_7 : 1;
    uint16 _PNOT5_8 : 1;
    uint16 _PNOT5_9 : 1;
    uint16 _PNOT5_10 : 1;
    uint16 _PNOT5_11 : 1;
    uint16 _PNOT5_12 : 1;
    uint16 _PNOT5_13 : 1;
    uint16 _PNOT5_14 : 1;
    uint16 _PNOT5_15 : 1;
} PNOT5Bits_t;

typedef struct
{
    const uint16 _PPR5_0 : 1;
    const uint16 _PPR5_1 : 1;
    const uint16 _PPR5_2 : 1;
    const uint16 _PPR5_3 : 1;
    const uint16 _PPR5_4 : 1;
    const uint16 _PPR5_5 : 1;
    const uint16 _PPR5_6 : 1;
    const uint16 _PPR5_7 : 1;
    const uint16 _PPR5_8 : 1;
    const uint16 _PPR5_9 : 1;
    const uint16 _PPR5_10 : 1;
    const uint16 _PPR5_11 : 1;
    const uint16 _PPR5_12 : 1;
    const uint16 _PPR5_13 : 1;
    const uint16 _PPR5_14 : 1;
    const uint16 _PPR5_15 : 1;
} PPR5Bits_t;

typedef struct
{
    uint16 _PM5_0 : 1;
    uint16 _PM5_1 : 1;
    uint16 _PM5_2 : 1;
    uint16 _PM5_3 : 1;
    uint16 _PM5_4 : 1;
    uint16 _PM5_5 : 1;
    uint16 _PM5_6 : 1;
    uint16 _PM5_7 : 1;
    uint16 _PM5_8 : 1;
    uint16 _PM5_9 : 1;
    uint16 _PM5_10 : 1;
    uint16 _PM5_11 : 1;
    uint16 _PM5_12 : 1;
    uint16 _PM5_13 : 1;
    uint16 _PM5_14 : 1;
    uint16 _PM5_15 : 1;
} PM5Bits_t;

typedef struct
{
    uint16 _PMC5_0 : 1;
    uint16 _PMC5_1 : 1;
    uint16 _PMC5_2 : 1;
    uint16 _PMC5_3 : 1;
    uint16 _PMC5_4 : 1;
    uint16 _PMC5_5 : 1;
    uint16 _PMC5_6 : 1;
    uint16 _PMC5_7 : 1;
    uint16 _PMC5_8 : 1;
    uint16 _PMC5_9 : 1;
    uint16 _PMC5_10 : 1;
    uint16 _PMC5_11 : 1;
    uint16 _PMC5_12 : 1;
    uint16 _PMC5_13 : 1;
    uint16 _PMC5_14 : 1;
    uint16 _PMC5_15 : 1;
} PMC5Bits_t;

typedef struct
{
    uint16 _PFC5_0 : 1;
    uint16 _PFC5_1 : 1;
    uint16 _PFC5_2 : 1;
    uint16 _PFC5_3 : 1;
    uint16 _PFC5_4 : 1;
    uint16 _PFC5_5 : 1;
    uint16 _PFC5_6 : 1;
    uint16 _PFC5_7 : 1;
    uint16 _PFC5_8 : 1;
    uint16 _PFC5_9 : 1;
    uint16 _PFC5_10 : 1;
    uint16 _PFC5_11 : 1;
    uint16 _PFC5_12 : 1;
    uint16 _PFC5_13 : 1;
    uint16 _PFC5_14 : 1;
    uint16 _PFC5_15 : 1;
} PFC5Bits_t;

typedef struct
{
    uint16 _PFCE5_0 : 1;
    uint16 _PFCE5_1 : 1;
    uint16 _PFCE5_2 : 1;
    uint16 _PFCE5_3 : 1;
    uint16 _PFCE5_4 : 1;
    uint16 _PFCE5_5 : 1;
    uint16 _PFCE5_6 : 1;
    uint16 _PFCE5_7 : 1;
    uint16 _PFCE5_8 : 1;
    uint16 _PFCE5_9 : 1;
    uint16 _PFCE5_10 : 1;
    uint16 _PFCE5_11 : 1;
    uint16 _PFCE5_12 : 1;
    uint16 _PFCE5_13 : 1;
    uint16 _PFCE5_14 : 1;
    uint16 _PFCE5_15 : 1;
} PFCE5Bits_t;

typedef struct
{
    uint32 _PMSR5_0 : 1;
    uint32 _PMSR5_1 : 1;
    uint32 _PMSR5_2 : 1;
    uint32 _PMSR5_3 : 1;
    uint32 _PMSR5_4 : 1;
    uint32 _PMSR5_5 : 1;
    uint32 _PMSR5_6 : 1;
    uint32 _PMSR5_7 : 1;
    uint32 _PMSR5_8 : 1;
    uint32 _PMSR5_9 : 1;
    uint32 _PMSR5_10 : 1;
    uint32 _PMSR5_11 : 1;
    uint32 _PMSR5_12 : 1;
    uint32 _PMSR5_13 : 1;
    uint32 _PMSR5_14 : 1;
    uint32 _PMSR5_15 : 1;
    uint32 _PMSR5_16 : 1;
    uint32 _PMSR5_17 : 1;
    uint32 _PMSR5_18 : 1;
    uint32 _PMSR5_19 : 1;
    uint32 _PMSR5_20 : 1;
    uint32 _PMSR5_21 : 1;
    uint32 _PMSR5_22 : 1;
    uint32 _PMSR5_23 : 1;
    uint32 _PMSR5_24 : 1;
    uint32 _PMSR5_25 : 1;
    uint32 _PMSR5_26 : 1;
    uint32 _PMSR5_27 : 1;
    uint32 _PMSR5_28 : 1;
    uint32 _PMSR5_29 : 1;
    uint32 _PMSR5_30 : 1;
    uint32 _PMSR5_31 : 1;
} PMSR5Bits_t;

typedef struct
{
    uint32 _PMCSR5_0 : 1;
    uint32 _PMCSR5_1 : 1;
    uint32 _PMCSR5_2 : 1;
    uint32 _PMCSR5_3 : 1;
    uint32 _PMCSR5_4 : 1;
    uint32 _PMCSR5_5 : 1;
    uint32 _PMCSR5_6 : 1;
    uint32 _PMCSR5_7 : 1;
    uint32 _PMCSR5_8 : 1;
    uint32 _PMCSR5_9 : 1;
    uint32 _PMCSR5_10 : 1;
    uint32 _PMCSR5_11 : 1;
    uint32 _PMCSR5_12 : 1;
    uint32 _PMCSR5_13 : 1;
    uint32 _PMCSR5_14 : 1;
    uint32 _PMCSR5_15 : 1;
    uint32 _PMCSR5_16 : 1;
    uint32 _PMCSR5_17 : 1;
    uint32 _PMCSR5_18 : 1;
    uint32 _PMCSR5_19 : 1;
    uint32 _PMCSR5_20 : 1;
    uint32 _PMCSR5_21 : 1;
    uint32 _PMCSR5_22 : 1;
    uint32 _PMCSR5_23 : 1;
    uint32 _PMCSR5_24 : 1;
    uint32 _PMCSR5_25 : 1;
    uint32 _PMCSR5_26 : 1;
    uint32 _PMCSR5_27 : 1;
    uint32 _PMCSR5_28 : 1;
    uint32 _PMCSR5_29 : 1;
    uint32 _PMCSR5_30 : 1;
    uint32 _PMCSR5_31 : 1;
} PMCSR5Bits_t;

typedef struct
{
    uint16 _PINV5_0 : 1;
    uint16 _PINV5_1 : 1;
    uint16 _PINV5_2 : 1;
    uint16 _PINV5_3 : 1;
    uint16 _PINV5_4 : 1;
    uint16 _PINV5_5 : 1;
    uint16 _PINV5_6 : 1;
    uint16 _PINV5_7 : 1;
    uint16 _PINV5_8 : 1;
    uint16 _PINV5_9 : 1;
    uint16 _PINV5_10 : 1;
    uint16 _PINV5_11 : 1;
    uint16 _PINV5_12 : 1;
    uint16 _PINV5_13 : 1;
    uint16 _PINV5_14 : 1;
    uint16 _PINV5_15 : 1;
} PINV5Bits_t;

typedef struct
{
    uint16 _P6_0 : 1;
    uint16 _P6_1 : 1;
    uint16 _P6_2 : 1;
    uint16 _P6_3 : 1;
    uint16 _P6_4 : 1;
    uint16 _P6_5 : 1;
    uint16 _P6_6 : 1;
    uint16 _P6_7 : 1;
    uint16 _P6_8 : 1;
    uint16 _P6_9 : 1;
    uint16 _P6_10 : 1;
    uint16 _P6_11 : 1;
    uint16 _P6_12 : 1;
    uint16 _P6_13 : 1;
    uint16 _P6_14 : 1;
    uint16 _P6_15 : 1;
} P6Bits_t;

typedef struct
{
    uint32 _PSR6_0 : 1;
    uint32 _PSR6_1 : 1;
    uint32 _PSR6_2 : 1;
    uint32 _PSR6_3 : 1;
    uint32 _PSR6_4 : 1;
    uint32 _PSR6_5 : 1;
    uint32 _PSR6_6 : 1;
    uint32 _PSR6_7 : 1;
    uint32 _PSR6_8 : 1;
    uint32 _PSR6_9 : 1;
    uint32 _PSR6_10 : 1;
    uint32 _PSR6_11 : 1;
    uint32 _PSR6_12 : 1;
    uint32 _PSR6_13 : 1;
    uint32 _PSR6_14 : 1;
    uint32 _PSR6_15 : 1;
    uint32 _PSR6_16 : 1;
    uint32 _PSR6_17 : 1;
    uint32 _PSR6_18 : 1;
    uint32 _PSR6_19 : 1;
    uint32 _PSR6_20 : 1;
    uint32 _PSR6_21 : 1;
    uint32 _PSR6_22 : 1;
    uint32 _PSR6_23 : 1;
    uint32 _PSR6_24 : 1;
    uint32 _PSR6_25 : 1;
    uint32 _PSR6_26 : 1;
    uint32 _PSR6_27 : 1;
    uint32 _PSR6_28 : 1;
    uint32 _PSR6_29 : 1;
    uint32 _PSR6_30 : 1;
    uint32 _PSR6_31 : 1;
} PSR6Bits_t;

typedef struct
{
    uint16 _PNOT6_0 : 1;
    uint16 _PNOT6_1 : 1;
    uint16 _PNOT6_2 : 1;
    uint16 _PNOT6_3 : 1;
    uint16 _PNOT6_4 : 1;
    uint16 _PNOT6_5 : 1;
    uint16 _PNOT6_6 : 1;
    uint16 _PNOT6_7 : 1;
    uint16 _PNOT6_8 : 1;
    uint16 _PNOT6_9 : 1;
    uint16 _PNOT6_10 : 1;
    uint16 _PNOT6_11 : 1;
    uint16 _PNOT6_12 : 1;
    uint16 _PNOT6_13 : 1;
    uint16 _PNOT6_14 : 1;
    uint16 _PNOT6_15 : 1;
} PNOT6Bits_t;

typedef struct
{
    const uint16 _PPR6_0 : 1;
    const uint16 _PPR6_1 : 1;
    const uint16 _PPR6_2 : 1;
    const uint16 _PPR6_3 : 1;
    const uint16 _PPR6_4 : 1;
    const uint16 _PPR6_5 : 1;
    const uint16 _PPR6_6 : 1;
    const uint16 _PPR6_7 : 1;
    const uint16 _PPR6_8 : 1;
    const uint16 _PPR6_9 : 1;
    const uint16 _PPR6_10 : 1;
    const uint16 _PPR6_11 : 1;
    const uint16 _PPR6_12 : 1;
    const uint16 _PPR6_13 : 1;
    const uint16 _PPR6_14 : 1;
    const uint16 _PPR6_15 : 1;
} PPR6Bits_t;

typedef struct
{
    uint16 _PM6_0 : 1;
    uint16 _PM6_1 : 1;
    uint16 _PM6_2 : 1;
    uint16 _PM6_3 : 1;
    uint16 _PM6_4 : 1;
    uint16 _PM6_5 : 1;
    uint16 _PM6_6 : 1;
    uint16 _PM6_7 : 1;
    uint16 _PM6_8 : 1;
    uint16 _PM6_9 : 1;
    uint16 _PM6_10 : 1;
    uint16 _PM6_11 : 1;
    uint16 _PM6_12 : 1;
    uint16 _PM6_13 : 1;
    uint16 _PM6_14 : 1;
    uint16 _PM6_15 : 1;
} PM6Bits_t;

typedef struct
{
    uint16 _PMC6_0 : 1;
    uint16 _PMC6_1 : 1;
    uint16 _PMC6_2 : 1;
    uint16 _PMC6_3 : 1;
    uint16 _PMC6_4 : 1;
    uint16 _PMC6_5 : 1;
    uint16 _PMC6_6 : 1;
    uint16 _PMC6_7 : 1;
    uint16 _PMC6_8 : 1;
    uint16 _PMC6_9 : 1;
    uint16 _PMC6_10 : 1;
    uint16 _PMC6_11 : 1;
    uint16 _PMC6_12 : 1;
    uint16 _PMC6_13 : 1;
    uint16 _PMC6_14 : 1;
    uint16 _PMC6_15 : 1;
} PMC6Bits_t;

typedef struct
{
    uint16 _PFC6_0 : 1;
    uint16 _PFC6_1 : 1;
    uint16 _PFC6_2 : 1;
    uint16 _PFC6_3 : 1;
    uint16 _PFC6_4 : 1;
    uint16 _PFC6_5 : 1;
    uint16 _PFC6_6 : 1;
    uint16 _PFC6_7 : 1;
    uint16 _PFC6_8 : 1;
    uint16 _PFC6_9 : 1;
    uint16 _PFC6_10 : 1;
    uint16 _PFC6_11 : 1;
    uint16 _PFC6_12 : 1;
    uint16 _PFC6_13 : 1;
    uint16 _PFC6_14 : 1;
    uint16 _PFC6_15 : 1;
} PFC6Bits_t;

typedef struct
{
    uint16 _PFCE6_0 : 1;
    uint16 _PFCE6_1 : 1;
    uint16 _PFCE6_2 : 1;
    uint16 _PFCE6_3 : 1;
    uint16 _PFCE6_4 : 1;
    uint16 _PFCE6_5 : 1;
    uint16 _PFCE6_6 : 1;
    uint16 _PFCE6_7 : 1;
    uint16 _PFCE6_8 : 1;
    uint16 _PFCE6_9 : 1;
    uint16 _PFCE6_10 : 1;
    uint16 _PFCE6_11 : 1;
    uint16 _PFCE6_12 : 1;
    uint16 _PFCE6_13 : 1;
    uint16 _PFCE6_14 : 1;
    uint16 _PFCE6_15 : 1;
} PFCE6Bits_t;

typedef struct
{
    uint32 _PMSR6_0 : 1;
    uint32 _PMSR6_1 : 1;
    uint32 _PMSR6_2 : 1;
    uint32 _PMSR6_3 : 1;
    uint32 _PMSR6_4 : 1;
    uint32 _PMSR6_5 : 1;
    uint32 _PMSR6_6 : 1;
    uint32 _PMSR6_7 : 1;
    uint32 _PMSR6_8 : 1;
    uint32 _PMSR6_9 : 1;
    uint32 _PMSR6_10 : 1;
    uint32 _PMSR6_11 : 1;
    uint32 _PMSR6_12 : 1;
    uint32 _PMSR6_13 : 1;
    uint32 _PMSR6_14 : 1;
    uint32 _PMSR6_15 : 1;
    uint32 _PMSR6_16 : 1;
    uint32 _PMSR6_17 : 1;
    uint32 _PMSR6_18 : 1;
    uint32 _PMSR6_19 : 1;
    uint32 _PMSR6_20 : 1;
    uint32 _PMSR6_21 : 1;
    uint32 _PMSR6_22 : 1;
    uint32 _PMSR6_23 : 1;
    uint32 _PMSR6_24 : 1;
    uint32 _PMSR6_25 : 1;
    uint32 _PMSR6_26 : 1;
    uint32 _PMSR6_27 : 1;
    uint32 _PMSR6_28 : 1;
    uint32 _PMSR6_29 : 1;
    uint32 _PMSR6_30 : 1;
    uint32 _PMSR6_31 : 1;
} PMSR6Bits_t;

typedef struct
{
    uint32 _PMCSR6_0 : 1;
    uint32 _PMCSR6_1 : 1;
    uint32 _PMCSR6_2 : 1;
    uint32 _PMCSR6_3 : 1;
    uint32 _PMCSR6_4 : 1;
    uint32 _PMCSR6_5 : 1;
    uint32 _PMCSR6_6 : 1;
    uint32 _PMCSR6_7 : 1;
    uint32 _PMCSR6_8 : 1;
    uint32 _PMCSR6_9 : 1;
    uint32 _PMCSR6_10 : 1;
    uint32 _PMCSR6_11 : 1;
    uint32 _PMCSR6_12 : 1;
    uint32 _PMCSR6_13 : 1;
    uint32 _PMCSR6_14 : 1;
    uint32 _PMCSR6_15 : 1;
    uint32 _PMCSR6_16 : 1;
    uint32 _PMCSR6_17 : 1;
    uint32 _PMCSR6_18 : 1;
    uint32 _PMCSR6_19 : 1;
    uint32 _PMCSR6_20 : 1;
    uint32 _PMCSR6_21 : 1;
    uint32 _PMCSR6_22 : 1;
    uint32 _PMCSR6_23 : 1;
    uint32 _PMCSR6_24 : 1;
    uint32 _PMCSR6_25 : 1;
    uint32 _PMCSR6_26 : 1;
    uint32 _PMCSR6_27 : 1;
    uint32 _PMCSR6_28 : 1;
    uint32 _PMCSR6_29 : 1;
    uint32 _PMCSR6_30 : 1;
    uint32 _PMCSR6_31 : 1;
} PMCSR6Bits_t;

typedef struct
{
    uint16 _PINV6_0 : 1;
    uint16 _PINV6_1 : 1;
    uint16 _PINV6_2 : 1;
    uint16 _PINV6_3 : 1;
    uint16 _PINV6_4 : 1;
    uint16 _PINV6_5 : 1;
    uint16 _PINV6_6 : 1;
    uint16 _PINV6_7 : 1;
    uint16 _PINV6_8 : 1;
    uint16 _PINV6_9 : 1;
    uint16 _PINV6_10 : 1;
    uint16 _PINV6_11 : 1;
    uint16 _PINV6_12 : 1;
    uint16 _PINV6_13 : 1;
    uint16 _PINV6_14 : 1;
    uint16 _PINV6_15 : 1;
} PINV6Bits_t;

typedef struct
{
    uint16 _P7_0 : 1;
    uint16 _P7_1 : 1;
    uint16 _P7_2 : 1;
    uint16 _P7_3 : 1;
    uint16 _P7_4 : 1;
    uint16 _P7_5 : 1;
    uint16 _P7_6 : 1;
    uint16 _P7_7 : 1;
    uint16 _P7_8 : 1;
    uint16 _P7_9 : 1;
    uint16 _P7_10 : 1;
    uint16 _P7_11 : 1;
    uint16 _P7_12 : 1;
    uint16 _P7_13 : 1;
    uint16 _P7_14 : 1;
    uint16 _P7_15 : 1;
} P7Bits_t;

typedef struct
{
    uint32 _PSR7_0 : 1;
    uint32 _PSR7_1 : 1;
    uint32 _PSR7_2 : 1;
    uint32 _PSR7_3 : 1;
    uint32 _PSR7_4 : 1;
    uint32 _PSR7_5 : 1;
    uint32 _PSR7_6 : 1;
    uint32 _PSR7_7 : 1;
    uint32 _PSR7_8 : 1;
    uint32 _PSR7_9 : 1;
    uint32 _PSR7_10 : 1;
    uint32 _PSR7_11 : 1;
    uint32 _PSR7_12 : 1;
    uint32 _PSR7_13 : 1;
    uint32 _PSR7_14 : 1;
    uint32 _PSR7_15 : 1;
    uint32 _PSR7_16 : 1;
    uint32 _PSR7_17 : 1;
    uint32 _PSR7_18 : 1;
    uint32 _PSR7_19 : 1;
    uint32 _PSR7_20 : 1;
    uint32 _PSR7_21 : 1;
    uint32 _PSR7_22 : 1;
    uint32 _PSR7_23 : 1;
    uint32 _PSR7_24 : 1;
    uint32 _PSR7_25 : 1;
    uint32 _PSR7_26 : 1;
    uint32 _PSR7_27 : 1;
    uint32 _PSR7_28 : 1;
    uint32 _PSR7_29 : 1;
    uint32 _PSR7_30 : 1;
    uint32 _PSR7_31 : 1;
} PSR7Bits_t;

typedef struct
{
    uint16 _PNOT7_0 : 1;
    uint16 _PNOT7_1 : 1;
    uint16 _PNOT7_2 : 1;
    uint16 _PNOT7_3 : 1;
    uint16 _PNOT7_4 : 1;
    uint16 _PNOT7_5 : 1;
    uint16 _PNOT7_6 : 1;
    uint16 _PNOT7_7 : 1;
    uint16 _PNOT7_8 : 1;
    uint16 _PNOT7_9 : 1;
    uint16 _PNOT7_10 : 1;
    uint16 _PNOT7_11 : 1;
    uint16 _PNOT7_12 : 1;
    uint16 _PNOT7_13 : 1;
    uint16 _PNOT7_14 : 1;
    uint16 _PNOT7_15 : 1;
} PNOT7Bits_t;

typedef struct
{
    const uint16 _PPR7_0 : 1;
    const uint16 _PPR7_1 : 1;
    const uint16 _PPR7_2 : 1;
    const uint16 _PPR7_3 : 1;
    const uint16 _PPR7_4 : 1;
    const uint16 _PPR7_5 : 1;
    const uint16 _PPR7_6 : 1;
    const uint16 _PPR7_7 : 1;
    const uint16 _PPR7_8 : 1;
    const uint16 _PPR7_9 : 1;
    const uint16 _PPR7_10 : 1;
    const uint16 _PPR7_11 : 1;
    const uint16 _PPR7_12 : 1;
    const uint16 _PPR7_13 : 1;
    const uint16 _PPR7_14 : 1;
    const uint16 _PPR7_15 : 1;
} PPR7Bits_t;

typedef struct
{
    uint16 _PM7_0 : 1;
    uint16 _PM7_1 : 1;
    uint16 _PM7_2 : 1;
    uint16 _PM7_3 : 1;
    uint16 _PM7_4 : 1;
    uint16 _PM7_5 : 1;
    uint16 _PM7_6 : 1;
    uint16 _PM7_7 : 1;
    uint16 _PM7_8 : 1;
    uint16 _PM7_9 : 1;
    uint16 _PM7_10 : 1;
    uint16 _PM7_11 : 1;
    uint16 _PM7_12 : 1;
    uint16 _PM7_13 : 1;
    uint16 _PM7_14 : 1;
    uint16 _PM7_15 : 1;
} PM7Bits_t;

typedef struct
{
    uint16 _PMC7_0 : 1;
    uint16 _PMC7_1 : 1;
    uint16 _PMC7_2 : 1;
    uint16 _PMC7_3 : 1;
    uint16 _PMC7_4 : 1;
    uint16 _PMC7_5 : 1;
    uint16 _PMC7_6 : 1;
    uint16 _PMC7_7 : 1;
    uint16 _PMC7_8 : 1;
    uint16 _PMC7_9 : 1;
    uint16 _PMC7_10 : 1;
    uint16 _PMC7_11 : 1;
    uint16 _PMC7_12 : 1;
    uint16 _PMC7_13 : 1;
    uint16 _PMC7_14 : 1;
    uint16 _PMC7_15 : 1;
} PMC7Bits_t;

typedef struct
{
    uint16 _PFC7_0 : 1;
    uint16 _PFC7_1 : 1;
    uint16 _PFC7_2 : 1;
    uint16 _PFC7_3 : 1;
    uint16 _PFC7_4 : 1;
    uint16 _PFC7_5 : 1;
    uint16 _PFC7_6 : 1;
    uint16 _PFC7_7 : 1;
    uint16 _PFC7_8 : 1;
    uint16 _PFC7_9 : 1;
    uint16 _PFC7_10 : 1;
    uint16 _PFC7_11 : 1;
    uint16 _PFC7_12 : 1;
    uint16 _PFC7_13 : 1;
    uint16 _PFC7_14 : 1;
    uint16 _PFC7_15 : 1;
} PFC7Bits_t;

typedef struct
{
    uint16 _PFCE7_0 : 1;
    uint16 _PFCE7_1 : 1;
    uint16 _PFCE7_2 : 1;
    uint16 _PFCE7_3 : 1;
    uint16 _PFCE7_4 : 1;
    uint16 _PFCE7_5 : 1;
    uint16 _PFCE7_6 : 1;
    uint16 _PFCE7_7 : 1;
    uint16 _PFCE7_8 : 1;
    uint16 _PFCE7_9 : 1;
    uint16 _PFCE7_10 : 1;
    uint16 _PFCE7_11 : 1;
    uint16 _PFCE7_12 : 1;
    uint16 _PFCE7_13 : 1;
    uint16 _PFCE7_14 : 1;
    uint16 _PFCE7_15 : 1;
} PFCE7Bits_t;

typedef struct
{
    uint32 _PMSR7_0 : 1;
    uint32 _PMSR7_1 : 1;
    uint32 _PMSR7_2 : 1;
    uint32 _PMSR7_3 : 1;
    uint32 _PMSR7_4 : 1;
    uint32 _PMSR7_5 : 1;
    uint32 _PMSR7_6 : 1;
    uint32 _PMSR7_7 : 1;
    uint32 _PMSR7_8 : 1;
    uint32 _PMSR7_9 : 1;
    uint32 _PMSR7_10 : 1;
    uint32 _PMSR7_11 : 1;
    uint32 _PMSR7_12 : 1;
    uint32 _PMSR7_13 : 1;
    uint32 _PMSR7_14 : 1;
    uint32 _PMSR7_15 : 1;
    uint32 _PMSR7_16 : 1;
    uint32 _PMSR7_17 : 1;
    uint32 _PMSR7_18 : 1;
    uint32 _PMSR7_19 : 1;
    uint32 _PMSR7_20 : 1;
    uint32 _PMSR7_21 : 1;
    uint32 _PMSR7_22 : 1;
    uint32 _PMSR7_23 : 1;
    uint32 _PMSR7_24 : 1;
    uint32 _PMSR7_25 : 1;
    uint32 _PMSR7_26 : 1;
    uint32 _PMSR7_27 : 1;
    uint32 _PMSR7_28 : 1;
    uint32 _PMSR7_29 : 1;
    uint32 _PMSR7_30 : 1;
    uint32 _PMSR7_31 : 1;
} PMSR7Bits_t;

typedef struct
{
    uint32 _PMCSR7_0 : 1;
    uint32 _PMCSR7_1 : 1;
    uint32 _PMCSR7_2 : 1;
    uint32 _PMCSR7_3 : 1;
    uint32 _PMCSR7_4 : 1;
    uint32 _PMCSR7_5 : 1;
    uint32 _PMCSR7_6 : 1;
    uint32 _PMCSR7_7 : 1;
    uint32 _PMCSR7_8 : 1;
    uint32 _PMCSR7_9 : 1;
    uint32 _PMCSR7_10 : 1;
    uint32 _PMCSR7_11 : 1;
    uint32 _PMCSR7_12 : 1;
    uint32 _PMCSR7_13 : 1;
    uint32 _PMCSR7_14 : 1;
    uint32 _PMCSR7_15 : 1;
    uint32 _PMCSR7_16 : 1;
    uint32 _PMCSR7_17 : 1;
    uint32 _PMCSR7_18 : 1;
    uint32 _PMCSR7_19 : 1;
    uint32 _PMCSR7_20 : 1;
    uint32 _PMCSR7_21 : 1;
    uint32 _PMCSR7_22 : 1;
    uint32 _PMCSR7_23 : 1;
    uint32 _PMCSR7_24 : 1;
    uint32 _PMCSR7_25 : 1;
    uint32 _PMCSR7_26 : 1;
    uint32 _PMCSR7_27 : 1;
    uint32 _PMCSR7_28 : 1;
    uint32 _PMCSR7_29 : 1;
    uint32 _PMCSR7_30 : 1;
    uint32 _PMCSR7_31 : 1;
} PMCSR7Bits_t;

typedef struct
{
    uint16 _PINV7_0 : 1;
    uint16 _PINV7_1 : 1;
    uint16 _PINV7_2 : 1;
    uint16 _PINV7_3 : 1;
    uint16 _PINV7_4 : 1;
    uint16 _PINV7_5 : 1;
    uint16 _PINV7_6 : 1;
    uint16 _PINV7_7 : 1;
    uint16 _PINV7_8 : 1;
    uint16 _PINV7_9 : 1;
    uint16 _PINV7_10 : 1;
    uint16 _PINV7_11 : 1;
    uint16 _PINV7_12 : 1;
    uint16 _PINV7_13 : 1;
    uint16 _PINV7_14 : 1;
    uint16 _PINV7_15 : 1;
} PINV7Bits_t;

typedef struct
{
    uint16 _P8_0 : 1;
    uint16 _P8_1 : 1;
    uint16 _P8_2 : 1;
    uint16 _P8_3 : 1;
    uint16 _P8_4 : 1;
    uint16 _P8_5 : 1;
    uint16 _P8_6 : 1;
    uint16 _P8_7 : 1;
    uint16 _P8_8 : 1;
    uint16 _P8_9 : 1;
    uint16 _P8_10 : 1;
    uint16 _P8_11 : 1;
    uint16 _P8_12 : 1;
    uint16 _P8_13 : 1;
    uint16 _P8_14 : 1;
    uint16 _P8_15 : 1;
} P8Bits_t;

typedef struct
{
    uint32 _PSR8_0 : 1;
    uint32 _PSR8_1 : 1;
    uint32 _PSR8_2 : 1;
    uint32 _PSR8_3 : 1;
    uint32 _PSR8_4 : 1;
    uint32 _PSR8_5 : 1;
    uint32 _PSR8_6 : 1;
    uint32 _PSR8_7 : 1;
    uint32 _PSR8_8 : 1;
    uint32 _PSR8_9 : 1;
    uint32 _PSR8_10 : 1;
    uint32 _PSR8_11 : 1;
    uint32 _PSR8_12 : 1;
    uint32 _PSR8_13 : 1;
    uint32 _PSR8_14 : 1;
    uint32 _PSR8_15 : 1;
    uint32 _PSR8_16 : 1;
    uint32 _PSR8_17 : 1;
    uint32 _PSR8_18 : 1;
    uint32 _PSR8_19 : 1;
    uint32 _PSR8_20 : 1;
    uint32 _PSR8_21 : 1;
    uint32 _PSR8_22 : 1;
    uint32 _PSR8_23 : 1;
    uint32 _PSR8_24 : 1;
    uint32 _PSR8_25 : 1;
    uint32 _PSR8_26 : 1;
    uint32 _PSR8_27 : 1;
    uint32 _PSR8_28 : 1;
    uint32 _PSR8_29 : 1;
    uint32 _PSR8_30 : 1;
    uint32 _PSR8_31 : 1;
} PSR8Bits_t;

typedef struct
{
    uint16 _PNOT8_0 : 1;
    uint16 _PNOT8_1 : 1;
    uint16 _PNOT8_2 : 1;
    uint16 _PNOT8_3 : 1;
    uint16 _PNOT8_4 : 1;
    uint16 _PNOT8_5 : 1;
    uint16 _PNOT8_6 : 1;
    uint16 _PNOT8_7 : 1;
    uint16 _PNOT8_8 : 1;
    uint16 _PNOT8_9 : 1;
    uint16 _PNOT8_10 : 1;
    uint16 _PNOT8_11 : 1;
    uint16 _PNOT8_12 : 1;
    uint16 _PNOT8_13 : 1;
    uint16 _PNOT8_14 : 1;
    uint16 _PNOT8_15 : 1;
} PNOT8Bits_t;

typedef struct
{
    const uint16 _PPR8_0 : 1;
    const uint16 _PPR8_1 : 1;
    const uint16 _PPR8_2 : 1;
    const uint16 _PPR8_3 : 1;
    const uint16 _PPR8_4 : 1;
    const uint16 _PPR8_5 : 1;
    const uint16 _PPR8_6 : 1;
    const uint16 _PPR8_7 : 1;
    const uint16 _PPR8_8 : 1;
    const uint16 _PPR8_9 : 1;
    const uint16 _PPR8_10 : 1;
    const uint16 _PPR8_11 : 1;
    const uint16 _PPR8_12 : 1;
    const uint16 _PPR8_13 : 1;
    const uint16 _PPR8_14 : 1;
    const uint16 _PPR8_15 : 1;
} PPR8Bits_t;

typedef struct
{
    uint16 _PM8_0 : 1;
    uint16 _PM8_1 : 1;
    uint16 _PM8_2 : 1;
    uint16 _PM8_3 : 1;
    uint16 _PM8_4 : 1;
    uint16 _PM8_5 : 1;
    uint16 _PM8_6 : 1;
    uint16 _PM8_7 : 1;
    uint16 _PM8_8 : 1;
    uint16 _PM8_9 : 1;
    uint16 _PM8_10 : 1;
    uint16 _PM8_11 : 1;
    uint16 _PM8_12 : 1;
    uint16 _PM8_13 : 1;
    uint16 _PM8_14 : 1;
    uint16 _PM8_15 : 1;
} PM8Bits_t;

typedef struct
{
    uint16 _PMC8_0 : 1;
    uint16 _PMC8_1 : 1;
    uint16 _PMC8_2 : 1;
    uint16 _PMC8_3 : 1;
    uint16 _PMC8_4 : 1;
    uint16 _PMC8_5 : 1;
    uint16 _PMC8_6 : 1;
    uint16 _PMC8_7 : 1;
    uint16 _PMC8_8 : 1;
    uint16 _PMC8_9 : 1;
    uint16 _PMC8_10 : 1;
    uint16 _PMC8_11 : 1;
    uint16 _PMC8_12 : 1;
    uint16 _PMC8_13 : 1;
    uint16 _PMC8_14 : 1;
    uint16 _PMC8_15 : 1;
} PMC8Bits_t;

typedef struct
{
    uint16 _PFC8_0 : 1;
    uint16 _PFC8_1 : 1;
    uint16 _PFC8_2 : 1;
    uint16 _PFC8_3 : 1;
    uint16 _PFC8_4 : 1;
    uint16 _PFC8_5 : 1;
    uint16 _PFC8_6 : 1;
    uint16 _PFC8_7 : 1;
    uint16 _PFC8_8 : 1;
    uint16 _PFC8_9 : 1;
    uint16 _PFC8_10 : 1;
    uint16 _PFC8_11 : 1;
    uint16 _PFC8_12 : 1;
    uint16 _PFC8_13 : 1;
    uint16 _PFC8_14 : 1;
    uint16 _PFC8_15 : 1;
} PFC8Bits_t;

typedef struct
{
    uint16 _PFCE8_0 : 1;
    uint16 _PFCE8_1 : 1;
    uint16 _PFCE8_2 : 1;
    uint16 _PFCE8_3 : 1;
    uint16 _PFCE8_4 : 1;
    uint16 _PFCE8_5 : 1;
    uint16 _PFCE8_6 : 1;
    uint16 _PFCE8_7 : 1;
    uint16 _PFCE8_8 : 1;
    uint16 _PFCE8_9 : 1;
    uint16 _PFCE8_10 : 1;
    uint16 _PFCE8_11 : 1;
    uint16 _PFCE8_12 : 1;
    uint16 _PFCE8_13 : 1;
    uint16 _PFCE8_14 : 1;
    uint16 _PFCE8_15 : 1;
} PFCE8Bits_t;

typedef struct
{
    uint32 _PMSR8_0 : 1;
    uint32 _PMSR8_1 : 1;
    uint32 _PMSR8_2 : 1;
    uint32 _PMSR8_3 : 1;
    uint32 _PMSR8_4 : 1;
    uint32 _PMSR8_5 : 1;
    uint32 _PMSR8_6 : 1;
    uint32 _PMSR8_7 : 1;
    uint32 _PMSR8_8 : 1;
    uint32 _PMSR8_9 : 1;
    uint32 _PMSR8_10 : 1;
    uint32 _PMSR8_11 : 1;
    uint32 _PMSR8_12 : 1;
    uint32 _PMSR8_13 : 1;
    uint32 _PMSR8_14 : 1;
    uint32 _PMSR8_15 : 1;
    uint32 _PMSR8_16 : 1;
    uint32 _PMSR8_17 : 1;
    uint32 _PMSR8_18 : 1;
    uint32 _PMSR8_19 : 1;
    uint32 _PMSR8_20 : 1;
    uint32 _PMSR8_21 : 1;
    uint32 _PMSR8_22 : 1;
    uint32 _PMSR8_23 : 1;
    uint32 _PMSR8_24 : 1;
    uint32 _PMSR8_25 : 1;
    uint32 _PMSR8_26 : 1;
    uint32 _PMSR8_27 : 1;
    uint32 _PMSR8_28 : 1;
    uint32 _PMSR8_29 : 1;
    uint32 _PMSR8_30 : 1;
    uint32 _PMSR8_31 : 1;
} PMSR8Bits_t;

typedef struct
{
    uint32 _PMCSR8_0 : 1;
    uint32 _PMCSR8_1 : 1;
    uint32 _PMCSR8_2 : 1;
    uint32 _PMCSR8_3 : 1;
    uint32 _PMCSR8_4 : 1;
    uint32 _PMCSR8_5 : 1;
    uint32 _PMCSR8_6 : 1;
    uint32 _PMCSR8_7 : 1;
    uint32 _PMCSR8_8 : 1;
    uint32 _PMCSR8_9 : 1;
    uint32 _PMCSR8_10 : 1;
    uint32 _PMCSR8_11 : 1;
    uint32 _PMCSR8_12 : 1;
    uint32 _PMCSR8_13 : 1;
    uint32 _PMCSR8_14 : 1;
    uint32 _PMCSR8_15 : 1;
    uint32 _PMCSR8_16 : 1;
    uint32 _PMCSR8_17 : 1;
    uint32 _PMCSR8_18 : 1;
    uint32 _PMCSR8_19 : 1;
    uint32 _PMCSR8_20 : 1;
    uint32 _PMCSR8_21 : 1;
    uint32 _PMCSR8_22 : 1;
    uint32 _PMCSR8_23 : 1;
    uint32 _PMCSR8_24 : 1;
    uint32 _PMCSR8_25 : 1;
    uint32 _PMCSR8_26 : 1;
    uint32 _PMCSR8_27 : 1;
    uint32 _PMCSR8_28 : 1;
    uint32 _PMCSR8_29 : 1;
    uint32 _PMCSR8_30 : 1;
    uint32 _PMCSR8_31 : 1;
} PMCSR8Bits_t;

typedef struct
{
    uint16 _PINV8_0 : 1;
    uint16 _PINV8_1 : 1;
    uint16 _PINV8_2 : 1;
    uint16 _PINV8_3 : 1;
    uint16 _PINV8_4 : 1;
    uint16 _PINV8_5 : 1;
    uint16 _PINV8_6 : 1;
    uint16 _PINV8_7 : 1;
    uint16 _PINV8_8 : 1;
    uint16 _PINV8_9 : 1;
    uint16 _PINV8_10 : 1;
    uint16 _PINV8_11 : 1;
    uint16 _PINV8_12 : 1;
    uint16 _PINV8_13 : 1;
    uint16 _PINV8_14 : 1;
    uint16 _PINV8_15 : 1;
} PINV8Bits_t;

typedef struct
{
    uint16 _P9_0 : 1;
    uint16 _P9_1 : 1;
    uint16 _P9_2 : 1;
    uint16 _P9_3 : 1;
    uint16 _P9_4 : 1;
    uint16 _P9_5 : 1;
    uint16 _P9_6 : 1;
    uint16 _P9_7 : 1;
    uint16 _P9_8 : 1;
    uint16 _P9_9 : 1;
    uint16 _P9_10 : 1;
    uint16 _P9_11 : 1;
    uint16 _P9_12 : 1;
    uint16 _P9_13 : 1;
    uint16 _P9_14 : 1;
    uint16 _P9_15 : 1;
} P9Bits_t;

typedef struct
{
    uint32 _PSR9_0 : 1;
    uint32 _PSR9_1 : 1;
    uint32 _PSR9_2 : 1;
    uint32 _PSR9_3 : 1;
    uint32 _PSR9_4 : 1;
    uint32 _PSR9_5 : 1;
    uint32 _PSR9_6 : 1;
    uint32 _PSR9_7 : 1;
    uint32 _PSR9_8 : 1;
    uint32 _PSR9_9 : 1;
    uint32 _PSR9_10 : 1;
    uint32 _PSR9_11 : 1;
    uint32 _PSR9_12 : 1;
    uint32 _PSR9_13 : 1;
    uint32 _PSR9_14 : 1;
    uint32 _PSR9_15 : 1;
    uint32 _PSR9_16 : 1;
    uint32 _PSR9_17 : 1;
    uint32 _PSR9_18 : 1;
    uint32 _PSR9_19 : 1;
    uint32 _PSR9_20 : 1;
    uint32 _PSR9_21 : 1;
    uint32 _PSR9_22 : 1;
    uint32 _PSR9_23 : 1;
    uint32 _PSR9_24 : 1;
    uint32 _PSR9_25 : 1;
    uint32 _PSR9_26 : 1;
    uint32 _PSR9_27 : 1;
    uint32 _PSR9_28 : 1;
    uint32 _PSR9_29 : 1;
    uint32 _PSR9_30 : 1;
    uint32 _PSR9_31 : 1;
} PSR9Bits_t;

typedef struct
{
    uint16 _PNOT9_0 : 1;
    uint16 _PNOT9_1 : 1;
    uint16 _PNOT9_2 : 1;
    uint16 _PNOT9_3 : 1;
    uint16 _PNOT9_4 : 1;
    uint16 _PNOT9_5 : 1;
    uint16 _PNOT9_6 : 1;
    uint16 _PNOT9_7 : 1;
    uint16 _PNOT9_8 : 1;
    uint16 _PNOT9_9 : 1;
    uint16 _PNOT9_10 : 1;
    uint16 _PNOT9_11 : 1;
    uint16 _PNOT9_12 : 1;
    uint16 _PNOT9_13 : 1;
    uint16 _PNOT9_14 : 1;
    uint16 _PNOT9_15 : 1;
} PNOT9Bits_t;

typedef struct
{
    const uint16 _PPR9_0 : 1;
    const uint16 _PPR9_1 : 1;
    const uint16 _PPR9_2 : 1;
    const uint16 _PPR9_3 : 1;
    const uint16 _PPR9_4 : 1;
    const uint16 _PPR9_5 : 1;
    const uint16 _PPR9_6 : 1;
    const uint16 _PPR9_7 : 1;
    const uint16 _PPR9_8 : 1;
    const uint16 _PPR9_9 : 1;
    const uint16 _PPR9_10 : 1;
    const uint16 _PPR9_11 : 1;
    const uint16 _PPR9_12 : 1;
    const uint16 _PPR9_13 : 1;
    const uint16 _PPR9_14 : 1;
    const uint16 _PPR9_15 : 1;
} PPR9Bits_t;

typedef struct
{
    uint16 _PM9_0 : 1;
    uint16 _PM9_1 : 1;
    uint16 _PM9_2 : 1;
    uint16 _PM9_3 : 1;
    uint16 _PM9_4 : 1;
    uint16 _PM9_5 : 1;
    uint16 _PM9_6 : 1;
    uint16 _PM9_7 : 1;
    uint16 _PM9_8 : 1;
    uint16 _PM9_9 : 1;
    uint16 _PM9_10 : 1;
    uint16 _PM9_11 : 1;
    uint16 _PM9_12 : 1;
    uint16 _PM9_13 : 1;
    uint16 _PM9_14 : 1;
    uint16 _PM9_15 : 1;
} PM9Bits_t;

typedef struct
{
    uint16 _PMC9_0 : 1;
    uint16 _PMC9_1 : 1;
    uint16 _PMC9_2 : 1;
    uint16 _PMC9_3 : 1;
    uint16 _PMC9_4 : 1;
    uint16 _PMC9_5 : 1;
    uint16 _PMC9_6 : 1;
    uint16 _PMC9_7 : 1;
    uint16 _PMC9_8 : 1;
    uint16 _PMC9_9 : 1;
    uint16 _PMC9_10 : 1;
    uint16 _PMC9_11 : 1;
    uint16 _PMC9_12 : 1;
    uint16 _PMC9_13 : 1;
    uint16 _PMC9_14 : 1;
    uint16 _PMC9_15 : 1;
} PMC9Bits_t;

typedef struct
{
    uint16 _PFC9_0 : 1;
    uint16 _PFC9_1 : 1;
    uint16 _PFC9_2 : 1;
    uint16 _PFC9_3 : 1;
    uint16 _PFC9_4 : 1;
    uint16 _PFC9_5 : 1;
    uint16 _PFC9_6 : 1;
    uint16 _PFC9_7 : 1;
    uint16 _PFC9_8 : 1;
    uint16 _PFC9_9 : 1;
    uint16 _PFC9_10 : 1;
    uint16 _PFC9_11 : 1;
    uint16 _PFC9_12 : 1;
    uint16 _PFC9_13 : 1;
    uint16 _PFC9_14 : 1;
    uint16 _PFC9_15 : 1;
} PFC9Bits_t;

typedef struct
{
    uint16 _PFCE9_0 : 1;
    uint16 _PFCE9_1 : 1;
    uint16 _PFCE9_2 : 1;
    uint16 _PFCE9_3 : 1;
    uint16 _PFCE9_4 : 1;
    uint16 _PFCE9_5 : 1;
    uint16 _PFCE9_6 : 1;
    uint16 _PFCE9_7 : 1;
    uint16 _PFCE9_8 : 1;
    uint16 _PFCE9_9 : 1;
    uint16 _PFCE9_10 : 1;
    uint16 _PFCE9_11 : 1;
    uint16 _PFCE9_12 : 1;
    uint16 _PFCE9_13 : 1;
    uint16 _PFCE9_14 : 1;
    uint16 _PFCE9_15 : 1;
} PFCE9Bits_t;

typedef struct
{
    uint32 _PMSR9_0 : 1;
    uint32 _PMSR9_1 : 1;
    uint32 _PMSR9_2 : 1;
    uint32 _PMSR9_3 : 1;
    uint32 _PMSR9_4 : 1;
    uint32 _PMSR9_5 : 1;
    uint32 _PMSR9_6 : 1;
    uint32 _PMSR9_7 : 1;
    uint32 _PMSR9_8 : 1;
    uint32 _PMSR9_9 : 1;
    uint32 _PMSR9_10 : 1;
    uint32 _PMSR9_11 : 1;
    uint32 _PMSR9_12 : 1;
    uint32 _PMSR9_13 : 1;
    uint32 _PMSR9_14 : 1;
    uint32 _PMSR9_15 : 1;
    uint32 _PMSR9_16 : 1;
    uint32 _PMSR9_17 : 1;
    uint32 _PMSR9_18 : 1;
    uint32 _PMSR9_19 : 1;
    uint32 _PMSR9_20 : 1;
    uint32 _PMSR9_21 : 1;
    uint32 _PMSR9_22 : 1;
    uint32 _PMSR9_23 : 1;
    uint32 _PMSR9_24 : 1;
    uint32 _PMSR9_25 : 1;
    uint32 _PMSR9_26 : 1;
    uint32 _PMSR9_27 : 1;
    uint32 _PMSR9_28 : 1;
    uint32 _PMSR9_29 : 1;
    uint32 _PMSR9_30 : 1;
    uint32 _PMSR9_31 : 1;
} PMSR9Bits_t;

typedef struct
{
    uint32 _PMCSR9_0 : 1;
    uint32 _PMCSR9_1 : 1;
    uint32 _PMCSR9_2 : 1;
    uint32 _PMCSR9_3 : 1;
    uint32 _PMCSR9_4 : 1;
    uint32 _PMCSR9_5 : 1;
    uint32 _PMCSR9_6 : 1;
    uint32 _PMCSR9_7 : 1;
    uint32 _PMCSR9_8 : 1;
    uint32 _PMCSR9_9 : 1;
    uint32 _PMCSR9_10 : 1;
    uint32 _PMCSR9_11 : 1;
    uint32 _PMCSR9_12 : 1;
    uint32 _PMCSR9_13 : 1;
    uint32 _PMCSR9_14 : 1;
    uint32 _PMCSR9_15 : 1;
    uint32 _PMCSR9_16 : 1;
    uint32 _PMCSR9_17 : 1;
    uint32 _PMCSR9_18 : 1;
    uint32 _PMCSR9_19 : 1;
    uint32 _PMCSR9_20 : 1;
    uint32 _PMCSR9_21 : 1;
    uint32 _PMCSR9_22 : 1;
    uint32 _PMCSR9_23 : 1;
    uint32 _PMCSR9_24 : 1;
    uint32 _PMCSR9_25 : 1;
    uint32 _PMCSR9_26 : 1;
    uint32 _PMCSR9_27 : 1;
    uint32 _PMCSR9_28 : 1;
    uint32 _PMCSR9_29 : 1;
    uint32 _PMCSR9_30 : 1;
    uint32 _PMCSR9_31 : 1;
} PMCSR9Bits_t;

typedef struct
{
    uint16 _PINV9_0 : 1;
    uint16 _PINV9_1 : 1;
    uint16 _PINV9_2 : 1;
    uint16 _PINV9_3 : 1;
    uint16 _PINV9_4 : 1;
    uint16 _PINV9_5 : 1;
    uint16 _PINV9_6 : 1;
    uint16 _PINV9_7 : 1;
    uint16 _PINV9_8 : 1;
    uint16 _PINV9_9 : 1;
    uint16 _PINV9_10 : 1;
    uint16 _PINV9_11 : 1;
    uint16 _PINV9_12 : 1;
    uint16 _PINV9_13 : 1;
    uint16 _PINV9_14 : 1;
    uint16 _PINV9_15 : 1;
} PINV9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR0_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR1_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR2_15Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR3_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR4_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR5_15Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR6_15Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR7_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_11Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_12Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_14Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR8_15Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_4Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} PCR9_8Bits_t;

typedef struct
{
    uint16 _PIBC0_0 : 1;
    uint16 _PIBC0_1 : 1;
    uint16 _PIBC0_2 : 1;
    uint16 _PIBC0_3 : 1;
    uint16 _PIBC0_4 : 1;
    uint16 _PIBC0_5 : 1;
    uint16 _PIBC0_6 : 1;
    uint16 _PIBC0_7 : 1;
    uint16 _PIBC0_8 : 1;
    uint16 _PIBC0_9 : 1;
    uint16 _PIBC0_10 : 1;
    uint16 _PIBC0_11 : 1;
    uint16 _PIBC0_12 : 1;
    uint16 _PIBC0_13 : 1;
    uint16 _PIBC0_14 : 1;
    uint16 _PIBC0_15 : 1;
} PIBC0Bits_t;

typedef struct
{
    uint16 _PBDC0_0 : 1;
    uint16 _PBDC0_1 : 1;
    uint16 _PBDC0_2 : 1;
    uint16 _PBDC0_3 : 1;
    uint16 _PBDC0_4 : 1;
    uint16 _PBDC0_5 : 1;
    uint16 _PBDC0_6 : 1;
    uint16 _PBDC0_7 : 1;
    uint16 _PBDC0_8 : 1;
    uint16 _PBDC0_9 : 1;
    uint16 _PBDC0_10 : 1;
    uint16 _PBDC0_11 : 1;
    uint16 _PBDC0_12 : 1;
    uint16 _PBDC0_13 : 1;
    uint16 _PBDC0_14 : 1;
    uint16 _PBDC0_15 : 1;
} PBDC0Bits_t;

typedef struct
{
    uint16 _PIPC0_0 : 1;
    uint16 _PIPC0_1 : 1;
    uint16 _PIPC0_2 : 1;
    uint16 _PIPC0_3 : 1;
    uint16 _PIPC0_4 : 1;
    uint16 _PIPC0_5 : 1;
    uint16 _PIPC0_6 : 1;
    uint16 _PIPC0_7 : 1;
    uint16 _PIPC0_8 : 1;
    uint16 _PIPC0_9 : 1;
    uint16 _PIPC0_10 : 1;
    uint16 _PIPC0_11 : 1;
    uint16 _PIPC0_12 : 1;
    uint16 _PIPC0_13 : 1;
    uint16 _PIPC0_14 : 1;
    uint16 _PIPC0_15 : 1;
} PIPC0Bits_t;

typedef struct
{
    uint16 _PU0_0 : 1;
    uint16 _PU0_1 : 1;
    uint16 _PU0_2 : 1;
    uint16 _PU0_3 : 1;
    uint16 _PU0_4 : 1;
    uint16 _PU0_5 : 1;
    uint16 _PU0_6 : 1;
    uint16 _PU0_7 : 1;
    uint16 _PU0_8 : 1;
    uint16 _PU0_9 : 1;
    uint16 _PU0_10 : 1;
    uint16 _PU0_11 : 1;
    uint16 _PU0_12 : 1;
    uint16 _PU0_13 : 1;
    uint16 _PU0_14 : 1;
    uint16 _PU0_15 : 1;
} PU0Bits_t;

typedef struct
{
    uint16 _PD0_0 : 1;
    uint16 _PD0_1 : 1;
    uint16 _PD0_2 : 1;
    uint16 _PD0_3 : 1;
    uint16 _PD0_4 : 1;
    uint16 _PD0_5 : 1;
    uint16 _PD0_6 : 1;
    uint16 _PD0_7 : 1;
    uint16 _PD0_8 : 1;
    uint16 _PD0_9 : 1;
    uint16 _PD0_10 : 1;
    uint16 _PD0_11 : 1;
    uint16 _PD0_12 : 1;
    uint16 _PD0_13 : 1;
    uint16 _PD0_14 : 1;
    uint16 _PD0_15 : 1;
} PD0Bits_t;

typedef struct
{
    uint32 _PODC0_0 : 1;
    uint32 _PODC0_1 : 1;
    uint32 _PODC0_2 : 1;
    uint32 _PODC0_3 : 1;
    uint32 _PODC0_4 : 1;
    uint32 _PODC0_5 : 1;
    uint32 _PODC0_6 : 1;
    uint32 _PODC0_7 : 1;
    uint32 _PODC0_8 : 1;
    uint32 _PODC0_9 : 1;
    uint32 _PODC0_10 : 1;
    uint32 _PODC0_11 : 1;
    uint32 _PODC0_12 : 1;
    uint32 _PODC0_13 : 1;
    uint32 _PODC0_14 : 1;
    uint32 _PODC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC0Bits_t;

typedef struct
{
    uint32 _PDSC0_0 : 1;
    uint32 _PDSC0_1 : 1;
    uint32 _PDSC0_2 : 1;
    uint32 _PDSC0_3 : 1;
    uint32 _PDSC0_4 : 1;
    uint32 _PDSC0_5 : 1;
    uint32 _PDSC0_6 : 1;
    uint32 _PDSC0_7 : 1;
    uint32 _PDSC0_8 : 1;
    uint32 _PDSC0_9 : 1;
    uint32 _PDSC0_10 : 1;
    uint32 _PDSC0_11 : 1;
    uint32 _PDSC0_12 : 1;
    uint32 _PDSC0_13 : 1;
    uint32 _PDSC0_14 : 1;
    uint32 _PDSC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC0Bits_t;

typedef struct
{
    uint16 _PIS0_0 : 1;
    uint16 _PIS0_1 : 1;
    uint16 _PIS0_2 : 1;
    uint16 _PIS0_3 : 1;
    uint16 _PIS0_4 : 1;
    uint16 _PIS0_5 : 1;
    uint16 _PIS0_6 : 1;
    uint16 _PIS0_7 : 1;
    uint16 _PIS0_8 : 1;
    uint16 _PIS0_9 : 1;
    uint16 _PIS0_10 : 1;
    uint16 _PIS0_11 : 1;
    uint16 _PIS0_12 : 1;
    uint16 _PIS0_13 : 1;
    uint16 _PIS0_14 : 1;
    uint16 _PIS0_15 : 1;
} PIS0Bits_t;

typedef struct
{
    uint32 _PUCC0_0 : 1;
    uint32 _PUCC0_1 : 1;
    uint32 _PUCC0_2 : 1;
    uint32 _PUCC0_3 : 1;
    uint32 _PUCC0_4 : 1;
    uint32 _PUCC0_5 : 1;
    uint32 _PUCC0_6 : 1;
    uint32 _PUCC0_7 : 1;
    uint32 _PUCC0_8 : 1;
    uint32 _PUCC0_9 : 1;
    uint32 _PUCC0_10 : 1;
    uint32 _PUCC0_11 : 1;
    uint32 _PUCC0_12 : 1;
    uint32 _PUCC0_13 : 1;
    uint32 _PUCC0_14 : 1;
    uint32 _PUCC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC0Bits_t;

typedef struct
{
    uint32 _PODCE0_0 : 1;
    uint32 _PODCE0_1 : 1;
    uint32 _PODCE0_2 : 1;
    uint32 _PODCE0_3 : 1;
    uint32 _PODCE0_4 : 1;
    uint32 _PODCE0_5 : 1;
    uint32 _PODCE0_6 : 1;
    uint32 _PODCE0_7 : 1;
    uint32 _PODCE0_8 : 1;
    uint32 _PODCE0_9 : 1;
    uint32 _PODCE0_10 : 1;
    uint32 _PODCE0_11 : 1;
    uint32 _PODCE0_12 : 1;
    uint32 _PODCE0_13 : 1;
    uint32 _PODCE0_14 : 1;
    uint32 _PODCE0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE0Bits_t;

typedef struct
{
    uint16 _PIBC1_0 : 1;
    uint16 _PIBC1_1 : 1;
    uint16 _PIBC1_2 : 1;
    uint16 _PIBC1_3 : 1;
    uint16 _PIBC1_4 : 1;
    uint16 _PIBC1_5 : 1;
    uint16 _PIBC1_6 : 1;
    uint16 _PIBC1_7 : 1;
    uint16 _PIBC1_8 : 1;
    uint16 _PIBC1_9 : 1;
    uint16 _PIBC1_10 : 1;
    uint16 _PIBC1_11 : 1;
    uint16 _PIBC1_12 : 1;
    uint16 _PIBC1_13 : 1;
    uint16 _PIBC1_14 : 1;
    uint16 _PIBC1_15 : 1;
} PIBC1Bits_t;

typedef struct
{
    uint16 _PBDC1_0 : 1;
    uint16 _PBDC1_1 : 1;
    uint16 _PBDC1_2 : 1;
    uint16 _PBDC1_3 : 1;
    uint16 _PBDC1_4 : 1;
    uint16 _PBDC1_5 : 1;
    uint16 _PBDC1_6 : 1;
    uint16 _PBDC1_7 : 1;
    uint16 _PBDC1_8 : 1;
    uint16 _PBDC1_9 : 1;
    uint16 _PBDC1_10 : 1;
    uint16 _PBDC1_11 : 1;
    uint16 _PBDC1_12 : 1;
    uint16 _PBDC1_13 : 1;
    uint16 _PBDC1_14 : 1;
    uint16 _PBDC1_15 : 1;
} PBDC1Bits_t;

typedef struct
{
    uint16 _PIPC1_0 : 1;
    uint16 _PIPC1_1 : 1;
    uint16 _PIPC1_2 : 1;
    uint16 _PIPC1_3 : 1;
    uint16 _PIPC1_4 : 1;
    uint16 _PIPC1_5 : 1;
    uint16 _PIPC1_6 : 1;
    uint16 _PIPC1_7 : 1;
    uint16 _PIPC1_8 : 1;
    uint16 _PIPC1_9 : 1;
    uint16 _PIPC1_10 : 1;
    uint16 _PIPC1_11 : 1;
    uint16 _PIPC1_12 : 1;
    uint16 _PIPC1_13 : 1;
    uint16 _PIPC1_14 : 1;
    uint16 _PIPC1_15 : 1;
} PIPC1Bits_t;

typedef struct
{
    uint16 _PU1_0 : 1;
    uint16 _PU1_1 : 1;
    uint16 _PU1_2 : 1;
    uint16 _PU1_3 : 1;
    uint16 _PU1_4 : 1;
    uint16 _PU1_5 : 1;
    uint16 _PU1_6 : 1;
    uint16 _PU1_7 : 1;
    uint16 _PU1_8 : 1;
    uint16 _PU1_9 : 1;
    uint16 _PU1_10 : 1;
    uint16 _PU1_11 : 1;
    uint16 _PU1_12 : 1;
    uint16 _PU1_13 : 1;
    uint16 _PU1_14 : 1;
    uint16 _PU1_15 : 1;
} PU1Bits_t;

typedef struct
{
    uint16 _PD1_0 : 1;
    uint16 _PD1_1 : 1;
    uint16 _PD1_2 : 1;
    uint16 _PD1_3 : 1;
    uint16 _PD1_4 : 1;
    uint16 _PD1_5 : 1;
    uint16 _PD1_6 : 1;
    uint16 _PD1_7 : 1;
    uint16 _PD1_8 : 1;
    uint16 _PD1_9 : 1;
    uint16 _PD1_10 : 1;
    uint16 _PD1_11 : 1;
    uint16 _PD1_12 : 1;
    uint16 _PD1_13 : 1;
    uint16 _PD1_14 : 1;
    uint16 _PD1_15 : 1;
} PD1Bits_t;

typedef struct
{
    uint32 _PODC1_0 : 1;
    uint32 _PODC1_1 : 1;
    uint32 _PODC1_2 : 1;
    uint32 _PODC1_3 : 1;
    uint32 _PODC1_4 : 1;
    uint32 _PODC1_5 : 1;
    uint32 _PODC1_6 : 1;
    uint32 _PODC1_7 : 1;
    uint32 _PODC1_8 : 1;
    uint32 _PODC1_9 : 1;
    uint32 _PODC1_10 : 1;
    uint32 _PODC1_11 : 1;
    uint32 _PODC1_12 : 1;
    uint32 _PODC1_13 : 1;
    uint32 _PODC1_14 : 1;
    uint32 _PODC1_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC1Bits_t;

typedef struct
{
    uint32 _PDSC1_0 : 1;
    uint32 _PDSC1_1 : 1;
    uint32 _PDSC1_2 : 1;
    uint32 _PDSC1_3 : 1;
    uint32 _PDSC1_4 : 1;
    uint32 _PDSC1_5 : 1;
    uint32 _PDSC1_6 : 1;
    uint32 _PDSC1_7 : 1;
    uint32 _PDSC1_8 : 1;
    uint32 _PDSC1_9 : 1;
    uint32 _PDSC1_10 : 1;
    uint32 _PDSC1_11 : 1;
    uint32 _PDSC1_12 : 1;
    uint32 _PDSC1_13 : 1;
    uint32 _PDSC1_14 : 1;
    uint32 _PDSC1_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC1Bits_t;

typedef struct
{
    uint16 _PIS1_0 : 1;
    uint16 _PIS1_1 : 1;
    uint16 _PIS1_2 : 1;
    uint16 _PIS1_3 : 1;
    uint16 _PIS1_4 : 1;
    uint16 _PIS1_5 : 1;
    uint16 _PIS1_6 : 1;
    uint16 _PIS1_7 : 1;
    uint16 _PIS1_8 : 1;
    uint16 _PIS1_9 : 1;
    uint16 _PIS1_10 : 1;
    uint16 _PIS1_11 : 1;
    uint16 _PIS1_12 : 1;
    uint16 _PIS1_13 : 1;
    uint16 _PIS1_14 : 1;
    uint16 _PIS1_15 : 1;
} PIS1Bits_t;

typedef struct
{
    uint32 _PUCC1_0 : 1;
    uint32 _PUCC1_1 : 1;
    uint32 _PUCC1_2 : 1;
    uint32 _PUCC1_3 : 1;
    uint32 _PUCC1_4 : 1;
    uint32 _PUCC1_5 : 1;
    uint32 _PUCC1_6 : 1;
    uint32 _PUCC1_7 : 1;
    uint32 _PUCC1_8 : 1;
    uint32 _PUCC1_9 : 1;
    uint32 _PUCC1_10 : 1;
    uint32 _PUCC1_11 : 1;
    uint32 _PUCC1_12 : 1;
    uint32 _PUCC1_13 : 1;
    uint32 _PUCC1_14 : 1;
    uint32 _PUCC1_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC1Bits_t;

typedef struct
{
    uint32 _PODCE1_0 : 1;
    uint32 _PODCE1_1 : 1;
    uint32 _PODCE1_2 : 1;
    uint32 _PODCE1_3 : 1;
    uint32 _PODCE1_4 : 1;
    uint32 _PODCE1_5 : 1;
    uint32 _PODCE1_6 : 1;
    uint32 _PODCE1_7 : 1;
    uint32 _PODCE1_8 : 1;
    uint32 _PODCE1_9 : 1;
    uint32 _PODCE1_10 : 1;
    uint32 _PODCE1_11 : 1;
    uint32 _PODCE1_12 : 1;
    uint32 _PODCE1_13 : 1;
    uint32 _PODCE1_14 : 1;
    uint32 _PODCE1_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE1Bits_t;

typedef struct
{
    uint16 _PIBC2_0 : 1;
    uint16 _PIBC2_1 : 1;
    uint16 _PIBC2_2 : 1;
    uint16 _PIBC2_3 : 1;
    uint16 _PIBC2_4 : 1;
    uint16 _PIBC2_5 : 1;
    uint16 _PIBC2_6 : 1;
    uint16 _PIBC2_7 : 1;
    uint16 _PIBC2_8 : 1;
    uint16 _PIBC2_9 : 1;
    uint16 _PIBC2_10 : 1;
    uint16 _PIBC2_11 : 1;
    uint16 _PIBC2_12 : 1;
    uint16 _PIBC2_13 : 1;
    uint16 _PIBC2_14 : 1;
    uint16 _PIBC2_15 : 1;
} PIBC2Bits_t;

typedef struct
{
    uint16 _PBDC2_0 : 1;
    uint16 _PBDC2_1 : 1;
    uint16 _PBDC2_2 : 1;
    uint16 _PBDC2_3 : 1;
    uint16 _PBDC2_4 : 1;
    uint16 _PBDC2_5 : 1;
    uint16 _PBDC2_6 : 1;
    uint16 _PBDC2_7 : 1;
    uint16 _PBDC2_8 : 1;
    uint16 _PBDC2_9 : 1;
    uint16 _PBDC2_10 : 1;
    uint16 _PBDC2_11 : 1;
    uint16 _PBDC2_12 : 1;
    uint16 _PBDC2_13 : 1;
    uint16 _PBDC2_14 : 1;
    uint16 _PBDC2_15 : 1;
} PBDC2Bits_t;

typedef struct
{
    uint16 _PIPC2_0 : 1;
    uint16 _PIPC2_1 : 1;
    uint16 _PIPC2_2 : 1;
    uint16 _PIPC2_3 : 1;
    uint16 _PIPC2_4 : 1;
    uint16 _PIPC2_5 : 1;
    uint16 _PIPC2_6 : 1;
    uint16 _PIPC2_7 : 1;
    uint16 _PIPC2_8 : 1;
    uint16 _PIPC2_9 : 1;
    uint16 _PIPC2_10 : 1;
    uint16 _PIPC2_11 : 1;
    uint16 _PIPC2_12 : 1;
    uint16 _PIPC2_13 : 1;
    uint16 _PIPC2_14 : 1;
    uint16 _PIPC2_15 : 1;
} PIPC2Bits_t;

typedef struct
{
    uint16 _PU2_0 : 1;
    uint16 _PU2_1 : 1;
    uint16 _PU2_2 : 1;
    uint16 _PU2_3 : 1;
    uint16 _PU2_4 : 1;
    uint16 _PU2_5 : 1;
    uint16 _PU2_6 : 1;
    uint16 _PU2_7 : 1;
    uint16 _PU2_8 : 1;
    uint16 _PU2_9 : 1;
    uint16 _PU2_10 : 1;
    uint16 _PU2_11 : 1;
    uint16 _PU2_12 : 1;
    uint16 _PU2_13 : 1;
    uint16 _PU2_14 : 1;
    uint16 _PU2_15 : 1;
} PU2Bits_t;

typedef struct
{
    uint16 _PD2_0 : 1;
    uint16 _PD2_1 : 1;
    uint16 _PD2_2 : 1;
    uint16 _PD2_3 : 1;
    uint16 _PD2_4 : 1;
    uint16 _PD2_5 : 1;
    uint16 _PD2_6 : 1;
    uint16 _PD2_7 : 1;
    uint16 _PD2_8 : 1;
    uint16 _PD2_9 : 1;
    uint16 _PD2_10 : 1;
    uint16 _PD2_11 : 1;
    uint16 _PD2_12 : 1;
    uint16 _PD2_13 : 1;
    uint16 _PD2_14 : 1;
    uint16 _PD2_15 : 1;
} PD2Bits_t;

typedef struct
{
    uint32 _PODC2_0 : 1;
    uint32 _PODC2_1 : 1;
    uint32 _PODC2_2 : 1;
    uint32 _PODC2_3 : 1;
    uint32 _PODC2_4 : 1;
    uint32 _PODC2_5 : 1;
    uint32 _PODC2_6 : 1;
    uint32 _PODC2_7 : 1;
    uint32 _PODC2_8 : 1;
    uint32 _PODC2_9 : 1;
    uint32 _PODC2_10 : 1;
    uint32 _PODC2_11 : 1;
    uint32 _PODC2_12 : 1;
    uint32 _PODC2_13 : 1;
    uint32 _PODC2_14 : 1;
    uint32 _PODC2_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC2Bits_t;

typedef struct
{
    uint32 _PDSC2_0 : 1;
    uint32 _PDSC2_1 : 1;
    uint32 _PDSC2_2 : 1;
    uint32 _PDSC2_3 : 1;
    uint32 _PDSC2_4 : 1;
    uint32 _PDSC2_5 : 1;
    uint32 _PDSC2_6 : 1;
    uint32 _PDSC2_7 : 1;
    uint32 _PDSC2_8 : 1;
    uint32 _PDSC2_9 : 1;
    uint32 _PDSC2_10 : 1;
    uint32 _PDSC2_11 : 1;
    uint32 _PDSC2_12 : 1;
    uint32 _PDSC2_13 : 1;
    uint32 _PDSC2_14 : 1;
    uint32 _PDSC2_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC2Bits_t;

typedef struct
{
    uint16 _PIS2_0 : 1;
    uint16 _PIS2_1 : 1;
    uint16 _PIS2_2 : 1;
    uint16 _PIS2_3 : 1;
    uint16 _PIS2_4 : 1;
    uint16 _PIS2_5 : 1;
    uint16 _PIS2_6 : 1;
    uint16 _PIS2_7 : 1;
    uint16 _PIS2_8 : 1;
    uint16 _PIS2_9 : 1;
    uint16 _PIS2_10 : 1;
    uint16 _PIS2_11 : 1;
    uint16 _PIS2_12 : 1;
    uint16 _PIS2_13 : 1;
    uint16 _PIS2_14 : 1;
    uint16 _PIS2_15 : 1;
} PIS2Bits_t;

typedef struct
{
    uint32 _PUCC2_0 : 1;
    uint32 _PUCC2_1 : 1;
    uint32 _PUCC2_2 : 1;
    uint32 _PUCC2_3 : 1;
    uint32 _PUCC2_4 : 1;
    uint32 _PUCC2_5 : 1;
    uint32 _PUCC2_6 : 1;
    uint32 _PUCC2_7 : 1;
    uint32 _PUCC2_8 : 1;
    uint32 _PUCC2_9 : 1;
    uint32 _PUCC2_10 : 1;
    uint32 _PUCC2_11 : 1;
    uint32 _PUCC2_12 : 1;
    uint32 _PUCC2_13 : 1;
    uint32 _PUCC2_14 : 1;
    uint32 _PUCC2_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC2Bits_t;

typedef struct
{
    uint32 _PODCE2_0 : 1;
    uint32 _PODCE2_1 : 1;
    uint32 _PODCE2_2 : 1;
    uint32 _PODCE2_3 : 1;
    uint32 _PODCE2_4 : 1;
    uint32 _PODCE2_5 : 1;
    uint32 _PODCE2_6 : 1;
    uint32 _PODCE2_7 : 1;
    uint32 _PODCE2_8 : 1;
    uint32 _PODCE2_9 : 1;
    uint32 _PODCE2_10 : 1;
    uint32 _PODCE2_11 : 1;
    uint32 _PODCE2_12 : 1;
    uint32 _PODCE2_13 : 1;
    uint32 _PODCE2_14 : 1;
    uint32 _PODCE2_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE2Bits_t;

typedef struct
{
    uint16 _PIBC3_0 : 1;
    uint16 _PIBC3_1 : 1;
    uint16 _PIBC3_2 : 1;
    uint16 _PIBC3_3 : 1;
    uint16 _PIBC3_4 : 1;
    uint16 _PIBC3_5 : 1;
    uint16 _PIBC3_6 : 1;
    uint16 _PIBC3_7 : 1;
    uint16 _PIBC3_8 : 1;
    uint16 _PIBC3_9 : 1;
    uint16 _PIBC3_10 : 1;
    uint16 _PIBC3_11 : 1;
    uint16 _PIBC3_12 : 1;
    uint16 _PIBC3_13 : 1;
    uint16 _PIBC3_14 : 1;
    uint16 _PIBC3_15 : 1;
} PIBC3Bits_t;

typedef struct
{
    uint16 _PBDC3_0 : 1;
    uint16 _PBDC3_1 : 1;
    uint16 _PBDC3_2 : 1;
    uint16 _PBDC3_3 : 1;
    uint16 _PBDC3_4 : 1;
    uint16 _PBDC3_5 : 1;
    uint16 _PBDC3_6 : 1;
    uint16 _PBDC3_7 : 1;
    uint16 _PBDC3_8 : 1;
    uint16 _PBDC3_9 : 1;
    uint16 _PBDC3_10 : 1;
    uint16 _PBDC3_11 : 1;
    uint16 _PBDC3_12 : 1;
    uint16 _PBDC3_13 : 1;
    uint16 _PBDC3_14 : 1;
    uint16 _PBDC3_15 : 1;
} PBDC3Bits_t;

typedef struct
{
    uint16 _PIPC3_0 : 1;
    uint16 _PIPC3_1 : 1;
    uint16 _PIPC3_2 : 1;
    uint16 _PIPC3_3 : 1;
    uint16 _PIPC3_4 : 1;
    uint16 _PIPC3_5 : 1;
    uint16 _PIPC3_6 : 1;
    uint16 _PIPC3_7 : 1;
    uint16 _PIPC3_8 : 1;
    uint16 _PIPC3_9 : 1;
    uint16 _PIPC3_10 : 1;
    uint16 _PIPC3_11 : 1;
    uint16 _PIPC3_12 : 1;
    uint16 _PIPC3_13 : 1;
    uint16 _PIPC3_14 : 1;
    uint16 _PIPC3_15 : 1;
} PIPC3Bits_t;

typedef struct
{
    uint16 _PU3_0 : 1;
    uint16 _PU3_1 : 1;
    uint16 _PU3_2 : 1;
    uint16 _PU3_3 : 1;
    uint16 _PU3_4 : 1;
    uint16 _PU3_5 : 1;
    uint16 _PU3_6 : 1;
    uint16 _PU3_7 : 1;
    uint16 _PU3_8 : 1;
    uint16 _PU3_9 : 1;
    uint16 _PU3_10 : 1;
    uint16 _PU3_11 : 1;
    uint16 _PU3_12 : 1;
    uint16 _PU3_13 : 1;
    uint16 _PU3_14 : 1;
    uint16 _PU3_15 : 1;
} PU3Bits_t;

typedef struct
{
    uint16 _PD3_0 : 1;
    uint16 _PD3_1 : 1;
    uint16 _PD3_2 : 1;
    uint16 _PD3_3 : 1;
    uint16 _PD3_4 : 1;
    uint16 _PD3_5 : 1;
    uint16 _PD3_6 : 1;
    uint16 _PD3_7 : 1;
    uint16 _PD3_8 : 1;
    uint16 _PD3_9 : 1;
    uint16 _PD3_10 : 1;
    uint16 _PD3_11 : 1;
    uint16 _PD3_12 : 1;
    uint16 _PD3_13 : 1;
    uint16 _PD3_14 : 1;
    uint16 _PD3_15 : 1;
} PD3Bits_t;

typedef struct
{
    uint32 _PODC3_0 : 1;
    uint32 _PODC3_1 : 1;
    uint32 _PODC3_2 : 1;
    uint32 _PODC3_3 : 1;
    uint32 _PODC3_4 : 1;
    uint32 _PODC3_5 : 1;
    uint32 _PODC3_6 : 1;
    uint32 _PODC3_7 : 1;
    uint32 _PODC3_8 : 1;
    uint32 _PODC3_9 : 1;
    uint32 _PODC3_10 : 1;
    uint32 _PODC3_11 : 1;
    uint32 _PODC3_12 : 1;
    uint32 _PODC3_13 : 1;
    uint32 _PODC3_14 : 1;
    uint32 _PODC3_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC3Bits_t;

typedef struct
{
    uint32 _PDSC3_0 : 1;
    uint32 _PDSC3_1 : 1;
    uint32 _PDSC3_2 : 1;
    uint32 _PDSC3_3 : 1;
    uint32 _PDSC3_4 : 1;
    uint32 _PDSC3_5 : 1;
    uint32 _PDSC3_6 : 1;
    uint32 _PDSC3_7 : 1;
    uint32 _PDSC3_8 : 1;
    uint32 _PDSC3_9 : 1;
    uint32 _PDSC3_10 : 1;
    uint32 _PDSC3_11 : 1;
    uint32 _PDSC3_12 : 1;
    uint32 _PDSC3_13 : 1;
    uint32 _PDSC3_14 : 1;
    uint32 _PDSC3_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC3Bits_t;

typedef struct
{
    uint16 _PIS3_0 : 1;
    uint16 _PIS3_1 : 1;
    uint16 _PIS3_2 : 1;
    uint16 _PIS3_3 : 1;
    uint16 _PIS3_4 : 1;
    uint16 _PIS3_5 : 1;
    uint16 _PIS3_6 : 1;
    uint16 _PIS3_7 : 1;
    uint16 _PIS3_8 : 1;
    uint16 _PIS3_9 : 1;
    uint16 _PIS3_10 : 1;
    uint16 _PIS3_11 : 1;
    uint16 _PIS3_12 : 1;
    uint16 _PIS3_13 : 1;
    uint16 _PIS3_14 : 1;
    uint16 _PIS3_15 : 1;
} PIS3Bits_t;

typedef struct
{
    uint32 _PUCC3_0 : 1;
    uint32 _PUCC3_1 : 1;
    uint32 _PUCC3_2 : 1;
    uint32 _PUCC3_3 : 1;
    uint32 _PUCC3_4 : 1;
    uint32 _PUCC3_5 : 1;
    uint32 _PUCC3_6 : 1;
    uint32 _PUCC3_7 : 1;
    uint32 _PUCC3_8 : 1;
    uint32 _PUCC3_9 : 1;
    uint32 _PUCC3_10 : 1;
    uint32 _PUCC3_11 : 1;
    uint32 _PUCC3_12 : 1;
    uint32 _PUCC3_13 : 1;
    uint32 _PUCC3_14 : 1;
    uint32 _PUCC3_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC3Bits_t;

typedef struct
{
    uint32 _PODCE3_0 : 1;
    uint32 _PODCE3_1 : 1;
    uint32 _PODCE3_2 : 1;
    uint32 _PODCE3_3 : 1;
    uint32 _PODCE3_4 : 1;
    uint32 _PODCE3_5 : 1;
    uint32 _PODCE3_6 : 1;
    uint32 _PODCE3_7 : 1;
    uint32 _PODCE3_8 : 1;
    uint32 _PODCE3_9 : 1;
    uint32 _PODCE3_10 : 1;
    uint32 _PODCE3_11 : 1;
    uint32 _PODCE3_12 : 1;
    uint32 _PODCE3_13 : 1;
    uint32 _PODCE3_14 : 1;
    uint32 _PODCE3_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE3Bits_t;

typedef struct
{
    uint16 _PIBC4_0 : 1;
    uint16 _PIBC4_1 : 1;
    uint16 _PIBC4_2 : 1;
    uint16 _PIBC4_3 : 1;
    uint16 _PIBC4_4 : 1;
    uint16 _PIBC4_5 : 1;
    uint16 _PIBC4_6 : 1;
    uint16 _PIBC4_7 : 1;
    uint16 _PIBC4_8 : 1;
    uint16 _PIBC4_9 : 1;
    uint16 _PIBC4_10 : 1;
    uint16 _PIBC4_11 : 1;
    uint16 _PIBC4_12 : 1;
    uint16 _PIBC4_13 : 1;
    uint16 _PIBC4_14 : 1;
    uint16 _PIBC4_15 : 1;
} PIBC4Bits_t;

typedef struct
{
    uint16 _PBDC4_0 : 1;
    uint16 _PBDC4_1 : 1;
    uint16 _PBDC4_2 : 1;
    uint16 _PBDC4_3 : 1;
    uint16 _PBDC4_4 : 1;
    uint16 _PBDC4_5 : 1;
    uint16 _PBDC4_6 : 1;
    uint16 _PBDC4_7 : 1;
    uint16 _PBDC4_8 : 1;
    uint16 _PBDC4_9 : 1;
    uint16 _PBDC4_10 : 1;
    uint16 _PBDC4_11 : 1;
    uint16 _PBDC4_12 : 1;
    uint16 _PBDC4_13 : 1;
    uint16 _PBDC4_14 : 1;
    uint16 _PBDC4_15 : 1;
} PBDC4Bits_t;

typedef struct
{
    uint16 _PIPC4_0 : 1;
    uint16 _PIPC4_1 : 1;
    uint16 _PIPC4_2 : 1;
    uint16 _PIPC4_3 : 1;
    uint16 _PIPC4_4 : 1;
    uint16 _PIPC4_5 : 1;
    uint16 _PIPC4_6 : 1;
    uint16 _PIPC4_7 : 1;
    uint16 _PIPC4_8 : 1;
    uint16 _PIPC4_9 : 1;
    uint16 _PIPC4_10 : 1;
    uint16 _PIPC4_11 : 1;
    uint16 _PIPC4_12 : 1;
    uint16 _PIPC4_13 : 1;
    uint16 _PIPC4_14 : 1;
    uint16 _PIPC4_15 : 1;
} PIPC4Bits_t;

typedef struct
{
    uint16 _PU4_0 : 1;
    uint16 _PU4_1 : 1;
    uint16 _PU4_2 : 1;
    uint16 _PU4_3 : 1;
    uint16 _PU4_4 : 1;
    uint16 _PU4_5 : 1;
    uint16 _PU4_6 : 1;
    uint16 _PU4_7 : 1;
    uint16 _PU4_8 : 1;
    uint16 _PU4_9 : 1;
    uint16 _PU4_10 : 1;
    uint16 _PU4_11 : 1;
    uint16 _PU4_12 : 1;
    uint16 _PU4_13 : 1;
    uint16 _PU4_14 : 1;
    uint16 _PU4_15 : 1;
} PU4Bits_t;

typedef struct
{
    uint16 _PD4_0 : 1;
    uint16 _PD4_1 : 1;
    uint16 _PD4_2 : 1;
    uint16 _PD4_3 : 1;
    uint16 _PD4_4 : 1;
    uint16 _PD4_5 : 1;
    uint16 _PD4_6 : 1;
    uint16 _PD4_7 : 1;
    uint16 _PD4_8 : 1;
    uint16 _PD4_9 : 1;
    uint16 _PD4_10 : 1;
    uint16 _PD4_11 : 1;
    uint16 _PD4_12 : 1;
    uint16 _PD4_13 : 1;
    uint16 _PD4_14 : 1;
    uint16 _PD4_15 : 1;
} PD4Bits_t;

typedef struct
{
    uint32 _PODC4_0 : 1;
    uint32 _PODC4_1 : 1;
    uint32 _PODC4_2 : 1;
    uint32 _PODC4_3 : 1;
    uint32 _PODC4_4 : 1;
    uint32 _PODC4_5 : 1;
    uint32 _PODC4_6 : 1;
    uint32 _PODC4_7 : 1;
    uint32 _PODC4_8 : 1;
    uint32 _PODC4_9 : 1;
    uint32 _PODC4_10 : 1;
    uint32 _PODC4_11 : 1;
    uint32 _PODC4_12 : 1;
    uint32 _PODC4_13 : 1;
    uint32 _PODC4_14 : 1;
    uint32 _PODC4_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC4Bits_t;

typedef struct
{
    uint32 _PDSC4_0 : 1;
    uint32 _PDSC4_1 : 1;
    uint32 _PDSC4_2 : 1;
    uint32 _PDSC4_3 : 1;
    uint32 _PDSC4_4 : 1;
    uint32 _PDSC4_5 : 1;
    uint32 _PDSC4_6 : 1;
    uint32 _PDSC4_7 : 1;
    uint32 _PDSC4_8 : 1;
    uint32 _PDSC4_9 : 1;
    uint32 _PDSC4_10 : 1;
    uint32 _PDSC4_11 : 1;
    uint32 _PDSC4_12 : 1;
    uint32 _PDSC4_13 : 1;
    uint32 _PDSC4_14 : 1;
    uint32 _PDSC4_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC4Bits_t;

typedef struct
{
    uint16 _PIS4_0 : 1;
    uint16 _PIS4_1 : 1;
    uint16 _PIS4_2 : 1;
    uint16 _PIS4_3 : 1;
    uint16 _PIS4_4 : 1;
    uint16 _PIS4_5 : 1;
    uint16 _PIS4_6 : 1;
    uint16 _PIS4_7 : 1;
    uint16 _PIS4_8 : 1;
    uint16 _PIS4_9 : 1;
    uint16 _PIS4_10 : 1;
    uint16 _PIS4_11 : 1;
    uint16 _PIS4_12 : 1;
    uint16 _PIS4_13 : 1;
    uint16 _PIS4_14 : 1;
    uint16 _PIS4_15 : 1;
} PIS4Bits_t;

typedef struct
{
    uint32 _PUCC4_0 : 1;
    uint32 _PUCC4_1 : 1;
    uint32 _PUCC4_2 : 1;
    uint32 _PUCC4_3 : 1;
    uint32 _PUCC4_4 : 1;
    uint32 _PUCC4_5 : 1;
    uint32 _PUCC4_6 : 1;
    uint32 _PUCC4_7 : 1;
    uint32 _PUCC4_8 : 1;
    uint32 _PUCC4_9 : 1;
    uint32 _PUCC4_10 : 1;
    uint32 _PUCC4_11 : 1;
    uint32 _PUCC4_12 : 1;
    uint32 _PUCC4_13 : 1;
    uint32 _PUCC4_14 : 1;
    uint32 _PUCC4_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC4Bits_t;

typedef struct
{
    uint32 _PODCE4_0 : 1;
    uint32 _PODCE4_1 : 1;
    uint32 _PODCE4_2 : 1;
    uint32 _PODCE4_3 : 1;
    uint32 _PODCE4_4 : 1;
    uint32 _PODCE4_5 : 1;
    uint32 _PODCE4_6 : 1;
    uint32 _PODCE4_7 : 1;
    uint32 _PODCE4_8 : 1;
    uint32 _PODCE4_9 : 1;
    uint32 _PODCE4_10 : 1;
    uint32 _PODCE4_11 : 1;
    uint32 _PODCE4_12 : 1;
    uint32 _PODCE4_13 : 1;
    uint32 _PODCE4_14 : 1;
    uint32 _PODCE4_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE4Bits_t;

typedef struct
{
    uint16 _PIBC5_0 : 1;
    uint16 _PIBC5_1 : 1;
    uint16 _PIBC5_2 : 1;
    uint16 _PIBC5_3 : 1;
    uint16 _PIBC5_4 : 1;
    uint16 _PIBC5_5 : 1;
    uint16 _PIBC5_6 : 1;
    uint16 _PIBC5_7 : 1;
    uint16 _PIBC5_8 : 1;
    uint16 _PIBC5_9 : 1;
    uint16 _PIBC5_10 : 1;
    uint16 _PIBC5_11 : 1;
    uint16 _PIBC5_12 : 1;
    uint16 _PIBC5_13 : 1;
    uint16 _PIBC5_14 : 1;
    uint16 _PIBC5_15 : 1;
} PIBC5Bits_t;

typedef struct
{
    uint16 _PBDC5_0 : 1;
    uint16 _PBDC5_1 : 1;
    uint16 _PBDC5_2 : 1;
    uint16 _PBDC5_3 : 1;
    uint16 _PBDC5_4 : 1;
    uint16 _PBDC5_5 : 1;
    uint16 _PBDC5_6 : 1;
    uint16 _PBDC5_7 : 1;
    uint16 _PBDC5_8 : 1;
    uint16 _PBDC5_9 : 1;
    uint16 _PBDC5_10 : 1;
    uint16 _PBDC5_11 : 1;
    uint16 _PBDC5_12 : 1;
    uint16 _PBDC5_13 : 1;
    uint16 _PBDC5_14 : 1;
    uint16 _PBDC5_15 : 1;
} PBDC5Bits_t;

typedef struct
{
    uint16 _PIPC5_0 : 1;
    uint16 _PIPC5_1 : 1;
    uint16 _PIPC5_2 : 1;
    uint16 _PIPC5_3 : 1;
    uint16 _PIPC5_4 : 1;
    uint16 _PIPC5_5 : 1;
    uint16 _PIPC5_6 : 1;
    uint16 _PIPC5_7 : 1;
    uint16 _PIPC5_8 : 1;
    uint16 _PIPC5_9 : 1;
    uint16 _PIPC5_10 : 1;
    uint16 _PIPC5_11 : 1;
    uint16 _PIPC5_12 : 1;
    uint16 _PIPC5_13 : 1;
    uint16 _PIPC5_14 : 1;
    uint16 _PIPC5_15 : 1;
} PIPC5Bits_t;

typedef struct
{
    uint16 _PU5_0 : 1;
    uint16 _PU5_1 : 1;
    uint16 _PU5_2 : 1;
    uint16 _PU5_3 : 1;
    uint16 _PU5_4 : 1;
    uint16 _PU5_5 : 1;
    uint16 _PU5_6 : 1;
    uint16 _PU5_7 : 1;
    uint16 _PU5_8 : 1;
    uint16 _PU5_9 : 1;
    uint16 _PU5_10 : 1;
    uint16 _PU5_11 : 1;
    uint16 _PU5_12 : 1;
    uint16 _PU5_13 : 1;
    uint16 _PU5_14 : 1;
    uint16 _PU5_15 : 1;
} PU5Bits_t;

typedef struct
{
    uint16 _PD5_0 : 1;
    uint16 _PD5_1 : 1;
    uint16 _PD5_2 : 1;
    uint16 _PD5_3 : 1;
    uint16 _PD5_4 : 1;
    uint16 _PD5_5 : 1;
    uint16 _PD5_6 : 1;
    uint16 _PD5_7 : 1;
    uint16 _PD5_8 : 1;
    uint16 _PD5_9 : 1;
    uint16 _PD5_10 : 1;
    uint16 _PD5_11 : 1;
    uint16 _PD5_12 : 1;
    uint16 _PD5_13 : 1;
    uint16 _PD5_14 : 1;
    uint16 _PD5_15 : 1;
} PD5Bits_t;

typedef struct
{
    uint32 _PODC5_0 : 1;
    uint32 _PODC5_1 : 1;
    uint32 _PODC5_2 : 1;
    uint32 _PODC5_3 : 1;
    uint32 _PODC5_4 : 1;
    uint32 _PODC5_5 : 1;
    uint32 _PODC5_6 : 1;
    uint32 _PODC5_7 : 1;
    uint32 _PODC5_8 : 1;
    uint32 _PODC5_9 : 1;
    uint32 _PODC5_10 : 1;
    uint32 _PODC5_11 : 1;
    uint32 _PODC5_12 : 1;
    uint32 _PODC5_13 : 1;
    uint32 _PODC5_14 : 1;
    uint32 _PODC5_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC5Bits_t;

typedef struct
{
    uint32 _PDSC5_0 : 1;
    uint32 _PDSC5_1 : 1;
    uint32 _PDSC5_2 : 1;
    uint32 _PDSC5_3 : 1;
    uint32 _PDSC5_4 : 1;
    uint32 _PDSC5_5 : 1;
    uint32 _PDSC5_6 : 1;
    uint32 _PDSC5_7 : 1;
    uint32 _PDSC5_8 : 1;
    uint32 _PDSC5_9 : 1;
    uint32 _PDSC5_10 : 1;
    uint32 _PDSC5_11 : 1;
    uint32 _PDSC5_12 : 1;
    uint32 _PDSC5_13 : 1;
    uint32 _PDSC5_14 : 1;
    uint32 _PDSC5_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC5Bits_t;

typedef struct
{
    uint16 _PIS5_0 : 1;
    uint16 _PIS5_1 : 1;
    uint16 _PIS5_2 : 1;
    uint16 _PIS5_3 : 1;
    uint16 _PIS5_4 : 1;
    uint16 _PIS5_5 : 1;
    uint16 _PIS5_6 : 1;
    uint16 _PIS5_7 : 1;
    uint16 _PIS5_8 : 1;
    uint16 _PIS5_9 : 1;
    uint16 _PIS5_10 : 1;
    uint16 _PIS5_11 : 1;
    uint16 _PIS5_12 : 1;
    uint16 _PIS5_13 : 1;
    uint16 _PIS5_14 : 1;
    uint16 _PIS5_15 : 1;
} PIS5Bits_t;

typedef struct
{
    uint32 _PUCC5_0 : 1;
    uint32 _PUCC5_1 : 1;
    uint32 _PUCC5_2 : 1;
    uint32 _PUCC5_3 : 1;
    uint32 _PUCC5_4 : 1;
    uint32 _PUCC5_5 : 1;
    uint32 _PUCC5_6 : 1;
    uint32 _PUCC5_7 : 1;
    uint32 _PUCC5_8 : 1;
    uint32 _PUCC5_9 : 1;
    uint32 _PUCC5_10 : 1;
    uint32 _PUCC5_11 : 1;
    uint32 _PUCC5_12 : 1;
    uint32 _PUCC5_13 : 1;
    uint32 _PUCC5_14 : 1;
    uint32 _PUCC5_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC5Bits_t;

typedef struct
{
    uint32 _PODCE5_0 : 1;
    uint32 _PODCE5_1 : 1;
    uint32 _PODCE5_2 : 1;
    uint32 _PODCE5_3 : 1;
    uint32 _PODCE5_4 : 1;
    uint32 _PODCE5_5 : 1;
    uint32 _PODCE5_6 : 1;
    uint32 _PODCE5_7 : 1;
    uint32 _PODCE5_8 : 1;
    uint32 _PODCE5_9 : 1;
    uint32 _PODCE5_10 : 1;
    uint32 _PODCE5_11 : 1;
    uint32 _PODCE5_12 : 1;
    uint32 _PODCE5_13 : 1;
    uint32 _PODCE5_14 : 1;
    uint32 _PODCE5_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE5Bits_t;

typedef struct
{
    uint16 _PIBC6_0 : 1;
    uint16 _PIBC6_1 : 1;
    uint16 _PIBC6_2 : 1;
    uint16 _PIBC6_3 : 1;
    uint16 _PIBC6_4 : 1;
    uint16 _PIBC6_5 : 1;
    uint16 _PIBC6_6 : 1;
    uint16 _PIBC6_7 : 1;
    uint16 _PIBC6_8 : 1;
    uint16 _PIBC6_9 : 1;
    uint16 _PIBC6_10 : 1;
    uint16 _PIBC6_11 : 1;
    uint16 _PIBC6_12 : 1;
    uint16 _PIBC6_13 : 1;
    uint16 _PIBC6_14 : 1;
    uint16 _PIBC6_15 : 1;
} PIBC6Bits_t;

typedef struct
{
    uint16 _PBDC6_0 : 1;
    uint16 _PBDC6_1 : 1;
    uint16 _PBDC6_2 : 1;
    uint16 _PBDC6_3 : 1;
    uint16 _PBDC6_4 : 1;
    uint16 _PBDC6_5 : 1;
    uint16 _PBDC6_6 : 1;
    uint16 _PBDC6_7 : 1;
    uint16 _PBDC6_8 : 1;
    uint16 _PBDC6_9 : 1;
    uint16 _PBDC6_10 : 1;
    uint16 _PBDC6_11 : 1;
    uint16 _PBDC6_12 : 1;
    uint16 _PBDC6_13 : 1;
    uint16 _PBDC6_14 : 1;
    uint16 _PBDC6_15 : 1;
} PBDC6Bits_t;

typedef struct
{
    uint16 _PIPC6_0 : 1;
    uint16 _PIPC6_1 : 1;
    uint16 _PIPC6_2 : 1;
    uint16 _PIPC6_3 : 1;
    uint16 _PIPC6_4 : 1;
    uint16 _PIPC6_5 : 1;
    uint16 _PIPC6_6 : 1;
    uint16 _PIPC6_7 : 1;
    uint16 _PIPC6_8 : 1;
    uint16 _PIPC6_9 : 1;
    uint16 _PIPC6_10 : 1;
    uint16 _PIPC6_11 : 1;
    uint16 _PIPC6_12 : 1;
    uint16 _PIPC6_13 : 1;
    uint16 _PIPC6_14 : 1;
    uint16 _PIPC6_15 : 1;
} PIPC6Bits_t;

typedef struct
{
    uint16 _PU6_0 : 1;
    uint16 _PU6_1 : 1;
    uint16 _PU6_2 : 1;
    uint16 _PU6_3 : 1;
    uint16 _PU6_4 : 1;
    uint16 _PU6_5 : 1;
    uint16 _PU6_6 : 1;
    uint16 _PU6_7 : 1;
    uint16 _PU6_8 : 1;
    uint16 _PU6_9 : 1;
    uint16 _PU6_10 : 1;
    uint16 _PU6_11 : 1;
    uint16 _PU6_12 : 1;
    uint16 _PU6_13 : 1;
    uint16 _PU6_14 : 1;
    uint16 _PU6_15 : 1;
} PU6Bits_t;

typedef struct
{
    uint16 _PD6_0 : 1;
    uint16 _PD6_1 : 1;
    uint16 _PD6_2 : 1;
    uint16 _PD6_3 : 1;
    uint16 _PD6_4 : 1;
    uint16 _PD6_5 : 1;
    uint16 _PD6_6 : 1;
    uint16 _PD6_7 : 1;
    uint16 _PD6_8 : 1;
    uint16 _PD6_9 : 1;
    uint16 _PD6_10 : 1;
    uint16 _PD6_11 : 1;
    uint16 _PD6_12 : 1;
    uint16 _PD6_13 : 1;
    uint16 _PD6_14 : 1;
    uint16 _PD6_15 : 1;
} PD6Bits_t;

typedef struct
{
    uint32 _PODC6_0 : 1;
    uint32 _PODC6_1 : 1;
    uint32 _PODC6_2 : 1;
    uint32 _PODC6_3 : 1;
    uint32 _PODC6_4 : 1;
    uint32 _PODC6_5 : 1;
    uint32 _PODC6_6 : 1;
    uint32 _PODC6_7 : 1;
    uint32 _PODC6_8 : 1;
    uint32 _PODC6_9 : 1;
    uint32 _PODC6_10 : 1;
    uint32 _PODC6_11 : 1;
    uint32 _PODC6_12 : 1;
    uint32 _PODC6_13 : 1;
    uint32 _PODC6_14 : 1;
    uint32 _PODC6_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC6Bits_t;

typedef struct
{
    uint32 _PDSC6_0 : 1;
    uint32 _PDSC6_1 : 1;
    uint32 _PDSC6_2 : 1;
    uint32 _PDSC6_3 : 1;
    uint32 _PDSC6_4 : 1;
    uint32 _PDSC6_5 : 1;
    uint32 _PDSC6_6 : 1;
    uint32 _PDSC6_7 : 1;
    uint32 _PDSC6_8 : 1;
    uint32 _PDSC6_9 : 1;
    uint32 _PDSC6_10 : 1;
    uint32 _PDSC6_11 : 1;
    uint32 _PDSC6_12 : 1;
    uint32 _PDSC6_13 : 1;
    uint32 _PDSC6_14 : 1;
    uint32 _PDSC6_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC6Bits_t;

typedef struct
{
    uint16 _PIS6_0 : 1;
    uint16 _PIS6_1 : 1;
    uint16 _PIS6_2 : 1;
    uint16 _PIS6_3 : 1;
    uint16 _PIS6_4 : 1;
    uint16 _PIS6_5 : 1;
    uint16 _PIS6_6 : 1;
    uint16 _PIS6_7 : 1;
    uint16 _PIS6_8 : 1;
    uint16 _PIS6_9 : 1;
    uint16 _PIS6_10 : 1;
    uint16 _PIS6_11 : 1;
    uint16 _PIS6_12 : 1;
    uint16 _PIS6_13 : 1;
    uint16 _PIS6_14 : 1;
    uint16 _PIS6_15 : 1;
} PIS6Bits_t;

typedef struct
{
    uint32 _PUCC6_0 : 1;
    uint32 _PUCC6_1 : 1;
    uint32 _PUCC6_2 : 1;
    uint32 _PUCC6_3 : 1;
    uint32 _PUCC6_4 : 1;
    uint32 _PUCC6_5 : 1;
    uint32 _PUCC6_6 : 1;
    uint32 _PUCC6_7 : 1;
    uint32 _PUCC6_8 : 1;
    uint32 _PUCC6_9 : 1;
    uint32 _PUCC6_10 : 1;
    uint32 _PUCC6_11 : 1;
    uint32 _PUCC6_12 : 1;
    uint32 _PUCC6_13 : 1;
    uint32 _PUCC6_14 : 1;
    uint32 _PUCC6_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC6Bits_t;

typedef struct
{
    uint32 _PODCE6_0 : 1;
    uint32 _PODCE6_1 : 1;
    uint32 _PODCE6_2 : 1;
    uint32 _PODCE6_3 : 1;
    uint32 _PODCE6_4 : 1;
    uint32 _PODCE6_5 : 1;
    uint32 _PODCE6_6 : 1;
    uint32 _PODCE6_7 : 1;
    uint32 _PODCE6_8 : 1;
    uint32 _PODCE6_9 : 1;
    uint32 _PODCE6_10 : 1;
    uint32 _PODCE6_11 : 1;
    uint32 _PODCE6_12 : 1;
    uint32 _PODCE6_13 : 1;
    uint32 _PODCE6_14 : 1;
    uint32 _PODCE6_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE6Bits_t;

typedef struct
{
    uint16 _PIBC7_0 : 1;
    uint16 _PIBC7_1 : 1;
    uint16 _PIBC7_2 : 1;
    uint16 _PIBC7_3 : 1;
    uint16 _PIBC7_4 : 1;
    uint16 _PIBC7_5 : 1;
    uint16 _PIBC7_6 : 1;
    uint16 _PIBC7_7 : 1;
    uint16 _PIBC7_8 : 1;
    uint16 _PIBC7_9 : 1;
    uint16 _PIBC7_10 : 1;
    uint16 _PIBC7_11 : 1;
    uint16 _PIBC7_12 : 1;
    uint16 _PIBC7_13 : 1;
    uint16 _PIBC7_14 : 1;
    uint16 _PIBC7_15 : 1;
} PIBC7Bits_t;

typedef struct
{
    uint16 _PBDC7_0 : 1;
    uint16 _PBDC7_1 : 1;
    uint16 _PBDC7_2 : 1;
    uint16 _PBDC7_3 : 1;
    uint16 _PBDC7_4 : 1;
    uint16 _PBDC7_5 : 1;
    uint16 _PBDC7_6 : 1;
    uint16 _PBDC7_7 : 1;
    uint16 _PBDC7_8 : 1;
    uint16 _PBDC7_9 : 1;
    uint16 _PBDC7_10 : 1;
    uint16 _PBDC7_11 : 1;
    uint16 _PBDC7_12 : 1;
    uint16 _PBDC7_13 : 1;
    uint16 _PBDC7_14 : 1;
    uint16 _PBDC7_15 : 1;
} PBDC7Bits_t;

typedef struct
{
    uint16 _PIPC7_0 : 1;
    uint16 _PIPC7_1 : 1;
    uint16 _PIPC7_2 : 1;
    uint16 _PIPC7_3 : 1;
    uint16 _PIPC7_4 : 1;
    uint16 _PIPC7_5 : 1;
    uint16 _PIPC7_6 : 1;
    uint16 _PIPC7_7 : 1;
    uint16 _PIPC7_8 : 1;
    uint16 _PIPC7_9 : 1;
    uint16 _PIPC7_10 : 1;
    uint16 _PIPC7_11 : 1;
    uint16 _PIPC7_12 : 1;
    uint16 _PIPC7_13 : 1;
    uint16 _PIPC7_14 : 1;
    uint16 _PIPC7_15 : 1;
} PIPC7Bits_t;

typedef struct
{
    uint16 _PU7_0 : 1;
    uint16 _PU7_1 : 1;
    uint16 _PU7_2 : 1;
    uint16 _PU7_3 : 1;
    uint16 _PU7_4 : 1;
    uint16 _PU7_5 : 1;
    uint16 _PU7_6 : 1;
    uint16 _PU7_7 : 1;
    uint16 _PU7_8 : 1;
    uint16 _PU7_9 : 1;
    uint16 _PU7_10 : 1;
    uint16 _PU7_11 : 1;
    uint16 _PU7_12 : 1;
    uint16 _PU7_13 : 1;
    uint16 _PU7_14 : 1;
    uint16 _PU7_15 : 1;
} PU7Bits_t;

typedef struct
{
    uint16 _PD7_0 : 1;
    uint16 _PD7_1 : 1;
    uint16 _PD7_2 : 1;
    uint16 _PD7_3 : 1;
    uint16 _PD7_4 : 1;
    uint16 _PD7_5 : 1;
    uint16 _PD7_6 : 1;
    uint16 _PD7_7 : 1;
    uint16 _PD7_8 : 1;
    uint16 _PD7_9 : 1;
    uint16 _PD7_10 : 1;
    uint16 _PD7_11 : 1;
    uint16 _PD7_12 : 1;
    uint16 _PD7_13 : 1;
    uint16 _PD7_14 : 1;
    uint16 _PD7_15 : 1;
} PD7Bits_t;

typedef struct
{
    uint32 _PODC7_0 : 1;
    uint32 _PODC7_1 : 1;
    uint32 _PODC7_2 : 1;
    uint32 _PODC7_3 : 1;
    uint32 _PODC7_4 : 1;
    uint32 _PODC7_5 : 1;
    uint32 _PODC7_6 : 1;
    uint32 _PODC7_7 : 1;
    uint32 _PODC7_8 : 1;
    uint32 _PODC7_9 : 1;
    uint32 _PODC7_10 : 1;
    uint32 _PODC7_11 : 1;
    uint32 _PODC7_12 : 1;
    uint32 _PODC7_13 : 1;
    uint32 _PODC7_14 : 1;
    uint32 _PODC7_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC7Bits_t;

typedef struct
{
    uint32 _PDSC7_0 : 1;
    uint32 _PDSC7_1 : 1;
    uint32 _PDSC7_2 : 1;
    uint32 _PDSC7_3 : 1;
    uint32 _PDSC7_4 : 1;
    uint32 _PDSC7_5 : 1;
    uint32 _PDSC7_6 : 1;
    uint32 _PDSC7_7 : 1;
    uint32 _PDSC7_8 : 1;
    uint32 _PDSC7_9 : 1;
    uint32 _PDSC7_10 : 1;
    uint32 _PDSC7_11 : 1;
    uint32 _PDSC7_12 : 1;
    uint32 _PDSC7_13 : 1;
    uint32 _PDSC7_14 : 1;
    uint32 _PDSC7_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC7Bits_t;

typedef struct
{
    uint16 _PIS7_0 : 1;
    uint16 _PIS7_1 : 1;
    uint16 _PIS7_2 : 1;
    uint16 _PIS7_3 : 1;
    uint16 _PIS7_4 : 1;
    uint16 _PIS7_5 : 1;
    uint16 _PIS7_6 : 1;
    uint16 _PIS7_7 : 1;
    uint16 _PIS7_8 : 1;
    uint16 _PIS7_9 : 1;
    uint16 _PIS7_10 : 1;
    uint16 _PIS7_11 : 1;
    uint16 _PIS7_12 : 1;
    uint16 _PIS7_13 : 1;
    uint16 _PIS7_14 : 1;
    uint16 _PIS7_15 : 1;
} PIS7Bits_t;

typedef struct
{
    uint32 _PUCC7_0 : 1;
    uint32 _PUCC7_1 : 1;
    uint32 _PUCC7_2 : 1;
    uint32 _PUCC7_3 : 1;
    uint32 _PUCC7_4 : 1;
    uint32 _PUCC7_5 : 1;
    uint32 _PUCC7_6 : 1;
    uint32 _PUCC7_7 : 1;
    uint32 _PUCC7_8 : 1;
    uint32 _PUCC7_9 : 1;
    uint32 _PUCC7_10 : 1;
    uint32 _PUCC7_11 : 1;
    uint32 _PUCC7_12 : 1;
    uint32 _PUCC7_13 : 1;
    uint32 _PUCC7_14 : 1;
    uint32 _PUCC7_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC7Bits_t;

typedef struct
{
    uint32 _PODCE7_0 : 1;
    uint32 _PODCE7_1 : 1;
    uint32 _PODCE7_2 : 1;
    uint32 _PODCE7_3 : 1;
    uint32 _PODCE7_4 : 1;
    uint32 _PODCE7_5 : 1;
    uint32 _PODCE7_6 : 1;
    uint32 _PODCE7_7 : 1;
    uint32 _PODCE7_8 : 1;
    uint32 _PODCE7_9 : 1;
    uint32 _PODCE7_10 : 1;
    uint32 _PODCE7_11 : 1;
    uint32 _PODCE7_12 : 1;
    uint32 _PODCE7_13 : 1;
    uint32 _PODCE7_14 : 1;
    uint32 _PODCE7_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE7Bits_t;

typedef struct
{
    uint16 _PIBC8_0 : 1;
    uint16 _PIBC8_1 : 1;
    uint16 _PIBC8_2 : 1;
    uint16 _PIBC8_3 : 1;
    uint16 _PIBC8_4 : 1;
    uint16 _PIBC8_5 : 1;
    uint16 _PIBC8_6 : 1;
    uint16 _PIBC8_7 : 1;
    uint16 _PIBC8_8 : 1;
    uint16 _PIBC8_9 : 1;
    uint16 _PIBC8_10 : 1;
    uint16 _PIBC8_11 : 1;
    uint16 _PIBC8_12 : 1;
    uint16 _PIBC8_13 : 1;
    uint16 _PIBC8_14 : 1;
    uint16 _PIBC8_15 : 1;
} PIBC8Bits_t;

typedef struct
{
    uint16 _PBDC8_0 : 1;
    uint16 _PBDC8_1 : 1;
    uint16 _PBDC8_2 : 1;
    uint16 _PBDC8_3 : 1;
    uint16 _PBDC8_4 : 1;
    uint16 _PBDC8_5 : 1;
    uint16 _PBDC8_6 : 1;
    uint16 _PBDC8_7 : 1;
    uint16 _PBDC8_8 : 1;
    uint16 _PBDC8_9 : 1;
    uint16 _PBDC8_10 : 1;
    uint16 _PBDC8_11 : 1;
    uint16 _PBDC8_12 : 1;
    uint16 _PBDC8_13 : 1;
    uint16 _PBDC8_14 : 1;
    uint16 _PBDC8_15 : 1;
} PBDC8Bits_t;

typedef struct
{
    uint16 _PIPC8_0 : 1;
    uint16 _PIPC8_1 : 1;
    uint16 _PIPC8_2 : 1;
    uint16 _PIPC8_3 : 1;
    uint16 _PIPC8_4 : 1;
    uint16 _PIPC8_5 : 1;
    uint16 _PIPC8_6 : 1;
    uint16 _PIPC8_7 : 1;
    uint16 _PIPC8_8 : 1;
    uint16 _PIPC8_9 : 1;
    uint16 _PIPC8_10 : 1;
    uint16 _PIPC8_11 : 1;
    uint16 _PIPC8_12 : 1;
    uint16 _PIPC8_13 : 1;
    uint16 _PIPC8_14 : 1;
    uint16 _PIPC8_15 : 1;
} PIPC8Bits_t;

typedef struct
{
    uint16 _PU8_0 : 1;
    uint16 _PU8_1 : 1;
    uint16 _PU8_2 : 1;
    uint16 _PU8_3 : 1;
    uint16 _PU8_4 : 1;
    uint16 _PU8_5 : 1;
    uint16 _PU8_6 : 1;
    uint16 _PU8_7 : 1;
    uint16 _PU8_8 : 1;
    uint16 _PU8_9 : 1;
    uint16 _PU8_10 : 1;
    uint16 _PU8_11 : 1;
    uint16 _PU8_12 : 1;
    uint16 _PU8_13 : 1;
    uint16 _PU8_14 : 1;
    uint16 _PU8_15 : 1;
} PU8Bits_t;

typedef struct
{
    uint16 _PD8_0 : 1;
    uint16 _PD8_1 : 1;
    uint16 _PD8_2 : 1;
    uint16 _PD8_3 : 1;
    uint16 _PD8_4 : 1;
    uint16 _PD8_5 : 1;
    uint16 _PD8_6 : 1;
    uint16 _PD8_7 : 1;
    uint16 _PD8_8 : 1;
    uint16 _PD8_9 : 1;
    uint16 _PD8_10 : 1;
    uint16 _PD8_11 : 1;
    uint16 _PD8_12 : 1;
    uint16 _PD8_13 : 1;
    uint16 _PD8_14 : 1;
    uint16 _PD8_15 : 1;
} PD8Bits_t;

typedef struct
{
    uint32 _PODC8_0 : 1;
    uint32 _PODC8_1 : 1;
    uint32 _PODC8_2 : 1;
    uint32 _PODC8_3 : 1;
    uint32 _PODC8_4 : 1;
    uint32 _PODC8_5 : 1;
    uint32 _PODC8_6 : 1;
    uint32 _PODC8_7 : 1;
    uint32 _PODC8_8 : 1;
    uint32 _PODC8_9 : 1;
    uint32 _PODC8_10 : 1;
    uint32 _PODC8_11 : 1;
    uint32 _PODC8_12 : 1;
    uint32 _PODC8_13 : 1;
    uint32 _PODC8_14 : 1;
    uint32 _PODC8_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC8Bits_t;

typedef struct
{
    uint32 _PDSC8_0 : 1;
    uint32 _PDSC8_1 : 1;
    uint32 _PDSC8_2 : 1;
    uint32 _PDSC8_3 : 1;
    uint32 _PDSC8_4 : 1;
    uint32 _PDSC8_5 : 1;
    uint32 _PDSC8_6 : 1;
    uint32 _PDSC8_7 : 1;
    uint32 _PDSC8_8 : 1;
    uint32 _PDSC8_9 : 1;
    uint32 _PDSC8_10 : 1;
    uint32 _PDSC8_11 : 1;
    uint32 _PDSC8_12 : 1;
    uint32 _PDSC8_13 : 1;
    uint32 _PDSC8_14 : 1;
    uint32 _PDSC8_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC8Bits_t;

typedef struct
{
    uint16 _PIS8_0 : 1;
    uint16 _PIS8_1 : 1;
    uint16 _PIS8_2 : 1;
    uint16 _PIS8_3 : 1;
    uint16 _PIS8_4 : 1;
    uint16 _PIS8_5 : 1;
    uint16 _PIS8_6 : 1;
    uint16 _PIS8_7 : 1;
    uint16 _PIS8_8 : 1;
    uint16 _PIS8_9 : 1;
    uint16 _PIS8_10 : 1;
    uint16 _PIS8_11 : 1;
    uint16 _PIS8_12 : 1;
    uint16 _PIS8_13 : 1;
    uint16 _PIS8_14 : 1;
    uint16 _PIS8_15 : 1;
} PIS8Bits_t;

typedef struct
{
    uint32 _PUCC8_0 : 1;
    uint32 _PUCC8_1 : 1;
    uint32 _PUCC8_2 : 1;
    uint32 _PUCC8_3 : 1;
    uint32 _PUCC8_4 : 1;
    uint32 _PUCC8_5 : 1;
    uint32 _PUCC8_6 : 1;
    uint32 _PUCC8_7 : 1;
    uint32 _PUCC8_8 : 1;
    uint32 _PUCC8_9 : 1;
    uint32 _PUCC8_10 : 1;
    uint32 _PUCC8_11 : 1;
    uint32 _PUCC8_12 : 1;
    uint32 _PUCC8_13 : 1;
    uint32 _PUCC8_14 : 1;
    uint32 _PUCC8_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC8Bits_t;

typedef struct
{
    uint32 _PODCE8_0 : 1;
    uint32 _PODCE8_1 : 1;
    uint32 _PODCE8_2 : 1;
    uint32 _PODCE8_3 : 1;
    uint32 _PODCE8_4 : 1;
    uint32 _PODCE8_5 : 1;
    uint32 _PODCE8_6 : 1;
    uint32 _PODCE8_7 : 1;
    uint32 _PODCE8_8 : 1;
    uint32 _PODCE8_9 : 1;
    uint32 _PODCE8_10 : 1;
    uint32 _PODCE8_11 : 1;
    uint32 _PODCE8_12 : 1;
    uint32 _PODCE8_13 : 1;
    uint32 _PODCE8_14 : 1;
    uint32 _PODCE8_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE8Bits_t;

typedef struct
{
    uint16 _PIBC9_0 : 1;
    uint16 _PIBC9_1 : 1;
    uint16 _PIBC9_2 : 1;
    uint16 _PIBC9_3 : 1;
    uint16 _PIBC9_4 : 1;
    uint16 _PIBC9_5 : 1;
    uint16 _PIBC9_6 : 1;
    uint16 _PIBC9_7 : 1;
    uint16 _PIBC9_8 : 1;
    uint16 _PIBC9_9 : 1;
    uint16 _PIBC9_10 : 1;
    uint16 _PIBC9_11 : 1;
    uint16 _PIBC9_12 : 1;
    uint16 _PIBC9_13 : 1;
    uint16 _PIBC9_14 : 1;
    uint16 _PIBC9_15 : 1;
} PIBC9Bits_t;

typedef struct
{
    uint16 _PBDC9_0 : 1;
    uint16 _PBDC9_1 : 1;
    uint16 _PBDC9_2 : 1;
    uint16 _PBDC9_3 : 1;
    uint16 _PBDC9_4 : 1;
    uint16 _PBDC9_5 : 1;
    uint16 _PBDC9_6 : 1;
    uint16 _PBDC9_7 : 1;
    uint16 _PBDC9_8 : 1;
    uint16 _PBDC9_9 : 1;
    uint16 _PBDC9_10 : 1;
    uint16 _PBDC9_11 : 1;
    uint16 _PBDC9_12 : 1;
    uint16 _PBDC9_13 : 1;
    uint16 _PBDC9_14 : 1;
    uint16 _PBDC9_15 : 1;
} PBDC9Bits_t;

typedef struct
{
    uint16 _PIPC9_0 : 1;
    uint16 _PIPC9_1 : 1;
    uint16 _PIPC9_2 : 1;
    uint16 _PIPC9_3 : 1;
    uint16 _PIPC9_4 : 1;
    uint16 _PIPC9_5 : 1;
    uint16 _PIPC9_6 : 1;
    uint16 _PIPC9_7 : 1;
    uint16 _PIPC9_8 : 1;
    uint16 _PIPC9_9 : 1;
    uint16 _PIPC9_10 : 1;
    uint16 _PIPC9_11 : 1;
    uint16 _PIPC9_12 : 1;
    uint16 _PIPC9_13 : 1;
    uint16 _PIPC9_14 : 1;
    uint16 _PIPC9_15 : 1;
} PIPC9Bits_t;

typedef struct
{
    uint16 _PU9_0 : 1;
    uint16 _PU9_1 : 1;
    uint16 _PU9_2 : 1;
    uint16 _PU9_3 : 1;
    uint16 _PU9_4 : 1;
    uint16 _PU9_5 : 1;
    uint16 _PU9_6 : 1;
    uint16 _PU9_7 : 1;
    uint16 _PU9_8 : 1;
    uint16 _PU9_9 : 1;
    uint16 _PU9_10 : 1;
    uint16 _PU9_11 : 1;
    uint16 _PU9_12 : 1;
    uint16 _PU9_13 : 1;
    uint16 _PU9_14 : 1;
    uint16 _PU9_15 : 1;
} PU9Bits_t;

typedef struct
{
    uint16 _PD9_0 : 1;
    uint16 _PD9_1 : 1;
    uint16 _PD9_2 : 1;
    uint16 _PD9_3 : 1;
    uint16 _PD9_4 : 1;
    uint16 _PD9_5 : 1;
    uint16 _PD9_6 : 1;
    uint16 _PD9_7 : 1;
    uint16 _PD9_8 : 1;
    uint16 _PD9_9 : 1;
    uint16 _PD9_10 : 1;
    uint16 _PD9_11 : 1;
    uint16 _PD9_12 : 1;
    uint16 _PD9_13 : 1;
    uint16 _PD9_14 : 1;
    uint16 _PD9_15 : 1;
} PD9Bits_t;

typedef struct
{
    uint32 _PODC9_0 : 1;
    uint32 _PODC9_1 : 1;
    uint32 _PODC9_2 : 1;
    uint32 _PODC9_3 : 1;
    uint32 _PODC9_4 : 1;
    uint32 _PODC9_5 : 1;
    uint32 _PODC9_6 : 1;
    uint32 _PODC9_7 : 1;
    uint32 _PODC9_8 : 1;
    uint32 _PODC9_9 : 1;
    uint32 _PODC9_10 : 1;
    uint32 _PODC9_11 : 1;
    uint32 _PODC9_12 : 1;
    uint32 _PODC9_13 : 1;
    uint32 _PODC9_14 : 1;
    uint32 _PODC9_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODC9Bits_t;

typedef struct
{
    uint32 _PDSC9_0 : 1;
    uint32 _PDSC9_1 : 1;
    uint32 _PDSC9_2 : 1;
    uint32 _PDSC9_3 : 1;
    uint32 _PDSC9_4 : 1;
    uint32 _PDSC9_5 : 1;
    uint32 _PDSC9_6 : 1;
    uint32 _PDSC9_7 : 1;
    uint32 _PDSC9_8 : 1;
    uint32 _PDSC9_9 : 1;
    uint32 _PDSC9_10 : 1;
    uint32 _PDSC9_11 : 1;
    uint32 _PDSC9_12 : 1;
    uint32 _PDSC9_13 : 1;
    uint32 _PDSC9_14 : 1;
    uint32 _PDSC9_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PDSC9Bits_t;

typedef struct
{
    uint16 _PIS9_0 : 1;
    uint16 _PIS9_1 : 1;
    uint16 _PIS9_2 : 1;
    uint16 _PIS9_3 : 1;
    uint16 _PIS9_4 : 1;
    uint16 _PIS9_5 : 1;
    uint16 _PIS9_6 : 1;
    uint16 _PIS9_7 : 1;
    uint16 _PIS9_8 : 1;
    uint16 _PIS9_9 : 1;
    uint16 _PIS9_10 : 1;
    uint16 _PIS9_11 : 1;
    uint16 _PIS9_12 : 1;
    uint16 _PIS9_13 : 1;
    uint16 _PIS9_14 : 1;
    uint16 _PIS9_15 : 1;
} PIS9Bits_t;

typedef struct
{
    uint32 _PUCC9_0 : 1;
    uint32 _PUCC9_1 : 1;
    uint32 _PUCC9_2 : 1;
    uint32 _PUCC9_3 : 1;
    uint32 _PUCC9_4 : 1;
    uint32 _PUCC9_5 : 1;
    uint32 _PUCC9_6 : 1;
    uint32 _PUCC9_7 : 1;
    uint32 _PUCC9_8 : 1;
    uint32 _PUCC9_9 : 1;
    uint32 _PUCC9_10 : 1;
    uint32 _PUCC9_11 : 1;
    uint32 _PUCC9_12 : 1;
    uint32 _PUCC9_13 : 1;
    uint32 _PUCC9_14 : 1;
    uint32 _PUCC9_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PUCC9Bits_t;

typedef struct
{
    uint32 _PODCE9_0 : 1;
    uint32 _PODCE9_1 : 1;
    uint32 _PODCE9_2 : 1;
    uint32 _PODCE9_3 : 1;
    uint32 _PODCE9_4 : 1;
    uint32 _PODCE9_5 : 1;
    uint32 _PODCE9_6 : 1;
    uint32 _PODCE9_7 : 1;
    uint32 _PODCE9_8 : 1;
    uint32 _PODCE9_9 : 1;
    uint32 _PODCE9_10 : 1;
    uint32 _PODCE9_11 : 1;
    uint32 _PODCE9_12 : 1;
    uint32 _PODCE9_13 : 1;
    uint32 _PODCE9_14 : 1;
    uint32 _PODCE9_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PODCE9Bits_t;

typedef struct
{
    uint8 _P0_0 : 1;
    uint8 _P0_1 : 1;
    uint8 _P0_2 : 1;
    uint8 _P0_3 : 1;
    uint8 _P0_4 : 1;
    uint8 _P0_5 : 1;
    uint8 _P0_6 : 1;
    uint8 _P0_7 : 1;
} JP0Bits_t;

typedef struct
{
    uint32 _PSR0_0 : 1;
    uint32 _PSR0_1 : 1;
    uint32 _PSR0_2 : 1;
    uint32 _PSR0_3 : 1;
    uint32 _PSR0_4 : 1;
    uint32 _PSR0_5 : 1;
    uint32 _PSR0_6 : 1;
    uint32 _PSR0_7 : 1;
    uint32 _PSR0_8 : 1;
    uint32 _PSR0_9 : 1;
    uint32 _PSR0_10 : 1;
    uint32 _PSR0_11 : 1;
    uint32 _PSR0_12 : 1;
    uint32 _PSR0_13 : 1;
    uint32 _PSR0_14 : 1;
    uint32 _PSR0_15 : 1;
    uint32 _PSR0_16 : 1;
    uint32 _PSR0_17 : 1;
    uint32 _PSR0_18 : 1;
    uint32 _PSR0_19 : 1;
    uint32 _PSR0_20 : 1;
    uint32 _PSR0_21 : 1;
    uint32 _PSR0_22 : 1;
    uint32 _PSR0_23 : 1;
    uint32 _PSR0_24 : 1;
    uint32 _PSR0_25 : 1;
    uint32 _PSR0_26 : 1;
    uint32 _PSR0_27 : 1;
    uint32 _PSR0_28 : 1;
    uint32 _PSR0_29 : 1;
    uint32 _PSR0_30 : 1;
    uint32 _PSR0_31 : 1;
} JPSR0Bits_t;

typedef struct
{
    uint8 _PNOT0_0 : 1;
    uint8 _PNOT0_1 : 1;
    uint8 _PNOT0_2 : 1;
    uint8 _PNOT0_3 : 1;
    uint8 _PNOT0_4 : 1;
    uint8 _PNOT0_5 : 1;
    uint8 _PNOT0_6 : 1;
    uint8 _PNOT0_7 : 1;
} JPNOT0Bits_t;

typedef struct
{
    const uint8 _PPR0_0 : 1;
    const uint8 _PPR0_1 : 1;
    const uint8 _PPR0_2 : 1;
    const uint8 _PPR0_3 : 1;
    const uint8 _PPR0_4 : 1;
    const uint8 _PPR0_5 : 1;
    const uint8 _PPR0_6 : 1;
    const uint8 _PPR0_7 : 1;
} JPPR0Bits_t;

typedef struct
{
    uint8 _PM0_0 : 1;
    uint8 _PM0_1 : 1;
    uint8 _PM0_2 : 1;
    uint8 _PM0_3 : 1;
    uint8 _PM0_4 : 1;
    uint8 _PM0_5 : 1;
    uint8 _PM0_6 : 1;
    uint8 _PM0_7 : 1;
} JPM0Bits_t;

typedef struct
{
    uint8 _PMC0_0 : 1;
    uint8 _PMC0_1 : 1;
    uint8 _PMC0_2 : 1;
    uint8 _PMC0_3 : 1;
    uint8 _PMC0_4 : 1;
    uint8 _PMC0_5 : 1;
    uint8 _PMC0_6 : 1;
    uint8 _PMC0_7 : 1;
} JPMC0Bits_t;

typedef struct
{
    uint8 _PFCE0_0 : 1;
    uint8 _PFCE0_1 : 1;
    uint8 _PFCE0_2 : 1;
    uint8 _PFCE0_3 : 1;
    uint8 _PFCE0_4 : 1;
    uint8 _PFCE0_5 : 1;
    uint8 _PFCE0_6 : 1;
    uint8 _PFCE0_7 : 1;
} JPFCE0Bits_t;

typedef struct
{
    uint32 _PMSR0_0 : 1;
    uint32 _PMSR0_1 : 1;
    uint32 _PMSR0_2 : 1;
    uint32 _PMSR0_3 : 1;
    uint32 _PMSR0_4 : 1;
    uint32 _PMSR0_5 : 1;
    uint32 _PMSR0_6 : 1;
    uint32 _PMSR0_7 : 1;
    uint32 _PMSR0_8 : 1;
    uint32 _PMSR0_9 : 1;
    uint32 _PMSR0_10 : 1;
    uint32 _PMSR0_11 : 1;
    uint32 _PMSR0_12 : 1;
    uint32 _PMSR0_13 : 1;
    uint32 _PMSR0_14 : 1;
    uint32 _PMSR0_15 : 1;
    uint32 _PMSR0_16 : 1;
    uint32 _PMSR0_17 : 1;
    uint32 _PMSR0_18 : 1;
    uint32 _PMSR0_19 : 1;
    uint32 _PMSR0_20 : 1;
    uint32 _PMSR0_21 : 1;
    uint32 _PMSR0_22 : 1;
    uint32 _PMSR0_23 : 1;
    uint32 _PMSR0_24 : 1;
    uint32 _PMSR0_25 : 1;
    uint32 _PMSR0_26 : 1;
    uint32 _PMSR0_27 : 1;
    uint32 _PMSR0_28 : 1;
    uint32 _PMSR0_29 : 1;
    uint32 _PMSR0_30 : 1;
    uint32 _PMSR0_31 : 1;
} JPMSR0Bits_t;

typedef struct
{
    uint32 _PMCSR0_0 : 1;
    uint32 _PMCSR0_1 : 1;
    uint32 _PMCSR0_2 : 1;
    uint32 _PMCSR0_3 : 1;
    uint32 _PMCSR0_4 : 1;
    uint32 _PMCSR0_5 : 1;
    uint32 _PMCSR0_6 : 1;
    uint32 _PMCSR0_7 : 1;
    uint32 _PMCSR0_8 : 1;
    uint32 _PMCSR0_9 : 1;
    uint32 _PMCSR0_10 : 1;
    uint32 _PMCSR0_11 : 1;
    uint32 _PMCSR0_12 : 1;
    uint32 _PMCSR0_13 : 1;
    uint32 _PMCSR0_14 : 1;
    uint32 _PMCSR0_15 : 1;
    uint32 _PMCSR0_16 : 1;
    uint32 _PMCSR0_17 : 1;
    uint32 _PMCSR0_18 : 1;
    uint32 _PMCSR0_19 : 1;
    uint32 _PMCSR0_20 : 1;
    uint32 _PMCSR0_21 : 1;
    uint32 _PMCSR0_22 : 1;
    uint32 _PMCSR0_23 : 1;
    uint32 _PMCSR0_24 : 1;
    uint32 _PMCSR0_25 : 1;
    uint32 _PMCSR0_26 : 1;
    uint32 _PMCSR0_27 : 1;
    uint32 _PMCSR0_28 : 1;
    uint32 _PMCSR0_29 : 1;
    uint32 _PMCSR0_30 : 1;
    uint32 _PMCSR0_31 : 1;
} JPMCSR0Bits_t;

typedef struct
{
    uint8 _PINV0_0 : 1;
    uint8 _PINV0_1 : 1;
    uint8 _PINV0_2 : 1;
    uint8 _PINV0_3 : 1;
    uint8 _PINV0_4 : 1;
    uint8 _PINV0_5 : 1;
    uint8 _PINV0_6 : 1;
    uint8 _PINV0_7 : 1;
} JPINV0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_0Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_1Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_2Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_3Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_5Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_6Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_7Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_8Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_9Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_10Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_13Bits_t;

typedef struct
{
    uint32 _PFC : 1;
    uint32 _PFCE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PM : 1;
    uint32 _PIPC : 1;
    uint32 _PMC : 1;
    uint32 padding7 : 1;
    const uint32 _PPR : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _P : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _PIBC : 1;
    uint32 _PBDC : 1;
    uint32 _PD : 1;
    uint32 _PU : 1;
    uint32 _PIS : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _PDSC : 1;
    uint32 _PUCC : 1;
    uint32 padding26 : 1;
    uint32 _PODCE : 1;
    uint32 _PODC : 1;
    uint32 padding29 : 1;
    uint32 _PINV : 1;
    uint32 padding31 : 1;
} JPCR0_14Bits_t;

typedef struct
{
    uint8 _PIBC0_0 : 1;
    uint8 _PIBC0_1 : 1;
    uint8 _PIBC0_2 : 1;
    uint8 _PIBC0_3 : 1;
    uint8 _PIBC0_4 : 1;
    uint8 _PIBC0_5 : 1;
    uint8 _PIBC0_6 : 1;
    uint8 _PIBC0_7 : 1;
} JPIBC0Bits_t;

typedef struct
{
    uint8 _PBDC0_0 : 1;
    uint8 _PBDC0_1 : 1;
    uint8 _PBDC0_2 : 1;
    uint8 _PBDC0_3 : 1;
    uint8 _PBDC0_4 : 1;
    uint8 _PBDC0_5 : 1;
    uint8 _PBDC0_6 : 1;
    uint8 _PBDC0_7 : 1;
} JPBDC0Bits_t;

typedef struct
{
    uint8 _PU0_0 : 1;
    uint8 _PU0_1 : 1;
    uint8 _PU0_2 : 1;
    uint8 _PU0_3 : 1;
    uint8 _PU0_4 : 1;
    uint8 _PU0_5 : 1;
    uint8 _PU0_6 : 1;
    uint8 _PU0_7 : 1;
} JPU0Bits_t;

typedef struct
{
    uint8 _PD0_0 : 1;
    uint8 _PD0_1 : 1;
    uint8 _PD0_2 : 1;
    uint8 _PD0_3 : 1;
    uint8 _PD0_4 : 1;
    uint8 _PD0_5 : 1;
    uint8 _PD0_6 : 1;
    uint8 _PD0_7 : 1;
} JPD0Bits_t;

typedef struct
{
    uint32 _PODC0_0 : 1;
    uint32 _PODC0_1 : 1;
    uint32 _PODC0_2 : 1;
    uint32 _PODC0_3 : 1;
    uint32 _PODC0_4 : 1;
    uint32 _PODC0_5 : 1;
    uint32 _PODC0_6 : 1;
    uint32 _PODC0_7 : 1;
    uint32 _PODC0_8 : 1;
    uint32 _PODC0_9 : 1;
    uint32 _PODC0_10 : 1;
    uint32 _PODC0_11 : 1;
    uint32 _PODC0_12 : 1;
    uint32 _PODC0_13 : 1;
    uint32 _PODC0_14 : 1;
    uint32 _PODC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} JPODC0Bits_t;

typedef struct
{
    uint32 _PDSC0_0 : 1;
    uint32 _PDSC0_1 : 1;
    uint32 _PDSC0_2 : 1;
    uint32 _PDSC0_3 : 1;
    uint32 _PDSC0_4 : 1;
    uint32 _PDSC0_5 : 1;
    uint32 _PDSC0_6 : 1;
    uint32 _PDSC0_7 : 1;
    uint32 _PDSC0_8 : 1;
    uint32 _PDSC0_9 : 1;
    uint32 _PDSC0_10 : 1;
    uint32 _PDSC0_11 : 1;
    uint32 _PDSC0_12 : 1;
    uint32 _PDSC0_13 : 1;
    uint32 _PDSC0_14 : 1;
    uint32 _PDSC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} JPDSC0Bits_t;

typedef struct
{
    uint8 _PIS0_0 : 1;
    uint8 _PIS0_1 : 1;
    uint8 _PIS0_2 : 1;
    uint8 _PIS0_3 : 1;
    uint8 _PIS0_4 : 1;
    uint8 _PIS0_5 : 1;
    uint8 _PIS0_6 : 1;
    uint8 _PIS0_7 : 1;
} JPIS0Bits_t;

typedef struct
{
    uint32 _PUCC0_0 : 1;
    uint32 _PUCC0_1 : 1;
    uint32 _PUCC0_2 : 1;
    uint32 _PUCC0_3 : 1;
    uint32 _PUCC0_4 : 1;
    uint32 _PUCC0_5 : 1;
    uint32 _PUCC0_6 : 1;
    uint32 _PUCC0_7 : 1;
    uint32 _PUCC0_8 : 1;
    uint32 _PUCC0_9 : 1;
    uint32 _PUCC0_10 : 1;
    uint32 _PUCC0_11 : 1;
    uint32 _PUCC0_12 : 1;
    uint32 _PUCC0_13 : 1;
    uint32 _PUCC0_14 : 1;
    uint32 _PUCC0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} JPUCC0Bits_t;

typedef struct
{
    uint32 _PODCE0_0 : 1;
    uint32 _PODCE0_1 : 1;
    uint32 _PODCE0_2 : 1;
    uint32 _PODCE0_3 : 1;
    uint32 _PODCE0_4 : 1;
    uint32 _PODCE0_5 : 1;
    uint32 _PODCE0_6 : 1;
    uint32 _PODCE0_7 : 1;
    uint32 _PODCE0_8 : 1;
    uint32 _PODCE0_9 : 1;
    uint32 _PODCE0_10 : 1;
    uint32 _PODCE0_11 : 1;
    uint32 _PODCE0_12 : 1;
    uint32 _PODCE0_13 : 1;
    uint32 _PODCE0_14 : 1;
    uint32 _PODCE0_15 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} JPODCE0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint16 UINT16;
    P0Bits_t BIT;
} P0_t;

typedef union
{
    uint32 UINT32;
    PSR0Bits_t BIT;
} PSR0_t;

typedef union
{
    uint16 UINT16;
    PNOT0Bits_t BIT;
} PNOT0_t;

typedef union
{
    uint16 UINT16;
    const PPR0Bits_t BIT;
} PPR0_t;

typedef union
{
    uint16 UINT16;
    PM0Bits_t BIT;
} PM0_t;

typedef union
{
    uint16 UINT16;
    PMC0Bits_t BIT;
} PMC0_t;

typedef union
{
    uint16 UINT16;
    PFC0Bits_t BIT;
} PFC0_t;

typedef union
{
    uint16 UINT16;
    PFCE0Bits_t BIT;
} PFCE0_t;

typedef union
{
    uint32 UINT32;
    PMSR0Bits_t BIT;
} PMSR0_t;

typedef union
{
    uint32 UINT32;
    PMCSR0Bits_t BIT;
} PMCSR0_t;

typedef union
{
    uint16 UINT16;
    PINV0Bits_t BIT;
} PINV0_t;

typedef union
{
    uint16 UINT16;
    P1Bits_t BIT;
} P1_t;

typedef union
{
    uint32 UINT32;
    PSR1Bits_t BIT;
} PSR1_t;

typedef union
{
    uint16 UINT16;
    PNOT1Bits_t BIT;
} PNOT1_t;

typedef union
{
    uint16 UINT16;
    const PPR1Bits_t BIT;
} PPR1_t;

typedef union
{
    uint16 UINT16;
    PM1Bits_t BIT;
} PM1_t;

typedef union
{
    uint16 UINT16;
    PMC1Bits_t BIT;
} PMC1_t;

typedef union
{
    uint16 UINT16;
    PFC1Bits_t BIT;
} PFC1_t;

typedef union
{
    uint16 UINT16;
    PFCE1Bits_t BIT;
} PFCE1_t;

typedef union
{
    uint32 UINT32;
    PMSR1Bits_t BIT;
} PMSR1_t;

typedef union
{
    uint32 UINT32;
    PMCSR1Bits_t BIT;
} PMCSR1_t;

typedef union
{
    uint16 UINT16;
    PINV1Bits_t BIT;
} PINV1_t;

typedef union
{
    uint16 UINT16;
    P2Bits_t BIT;
} P2_t;

typedef union
{
    uint32 UINT32;
    PSR2Bits_t BIT;
} PSR2_t;

typedef union
{
    uint16 UINT16;
    PNOT2Bits_t BIT;
} PNOT2_t;

typedef union
{
    uint16 UINT16;
    const PPR2Bits_t BIT;
} PPR2_t;

typedef union
{
    uint16 UINT16;
    PM2Bits_t BIT;
} PM2_t;

typedef union
{
    uint16 UINT16;
    PMC2Bits_t BIT;
} PMC2_t;

typedef union
{
    uint16 UINT16;
    PFC2Bits_t BIT;
} PFC2_t;

typedef union
{
    uint16 UINT16;
    PFCE2Bits_t BIT;
} PFCE2_t;

typedef union
{
    uint32 UINT32;
    PMSR2Bits_t BIT;
} PMSR2_t;

typedef union
{
    uint32 UINT32;
    PMCSR2Bits_t BIT;
} PMCSR2_t;

typedef union
{
    uint16 UINT16;
    PINV2Bits_t BIT;
} PINV2_t;

typedef union
{
    uint16 UINT16;
    P3Bits_t BIT;
} P3_t;

typedef union
{
    uint32 UINT32;
    PSR3Bits_t BIT;
} PSR3_t;

typedef union
{
    uint16 UINT16;
    PNOT3Bits_t BIT;
} PNOT3_t;

typedef union
{
    uint16 UINT16;
    const PPR3Bits_t BIT;
} PPR3_t;

typedef union
{
    uint16 UINT16;
    PM3Bits_t BIT;
} PM3_t;

typedef union
{
    uint16 UINT16;
    PMC3Bits_t BIT;
} PMC3_t;

typedef union
{
    uint16 UINT16;
    PFC3Bits_t BIT;
} PFC3_t;

typedef union
{
    uint16 UINT16;
    PFCE3Bits_t BIT;
} PFCE3_t;

typedef union
{
    uint32 UINT32;
    PMSR3Bits_t BIT;
} PMSR3_t;

typedef union
{
    uint32 UINT32;
    PMCSR3Bits_t BIT;
} PMCSR3_t;

typedef union
{
    uint16 UINT16;
    PINV3Bits_t BIT;
} PINV3_t;

typedef union
{
    uint16 UINT16;
    P4Bits_t BIT;
} P4_t;

typedef union
{
    uint32 UINT32;
    PSR4Bits_t BIT;
} PSR4_t;

typedef union
{
    uint16 UINT16;
    PNOT4Bits_t BIT;
} PNOT4_t;

typedef union
{
    uint16 UINT16;
    const PPR4Bits_t BIT;
} PPR4_t;

typedef union
{
    uint16 UINT16;
    PM4Bits_t BIT;
} PM4_t;

typedef union
{
    uint16 UINT16;
    PMC4Bits_t BIT;
} PMC4_t;

typedef union
{
    uint16 UINT16;
    PFC4Bits_t BIT;
} PFC4_t;

typedef union
{
    uint16 UINT16;
    PFCE4Bits_t BIT;
} PFCE4_t;

typedef union
{
    uint32 UINT32;
    PMSR4Bits_t BIT;
} PMSR4_t;

typedef union
{
    uint32 UINT32;
    PMCSR4Bits_t BIT;
} PMCSR4_t;

typedef union
{
    uint16 UINT16;
    PINV4Bits_t BIT;
} PINV4_t;

typedef union
{
    uint16 UINT16;
    P5Bits_t BIT;
} P5_t;

typedef union
{
    uint32 UINT32;
    PSR5Bits_t BIT;
} PSR5_t;

typedef union
{
    uint16 UINT16;
    PNOT5Bits_t BIT;
} PNOT5_t;

typedef union
{
    uint16 UINT16;
    const PPR5Bits_t BIT;
} PPR5_t;

typedef union
{
    uint16 UINT16;
    PM5Bits_t BIT;
} PM5_t;

typedef union
{
    uint16 UINT16;
    PMC5Bits_t BIT;
} PMC5_t;

typedef union
{
    uint16 UINT16;
    PFC5Bits_t BIT;
} PFC5_t;

typedef union
{
    uint16 UINT16;
    PFCE5Bits_t BIT;
} PFCE5_t;

typedef union
{
    uint32 UINT32;
    PMSR5Bits_t BIT;
} PMSR5_t;

typedef union
{
    uint32 UINT32;
    PMCSR5Bits_t BIT;
} PMCSR5_t;

typedef union
{
    uint16 UINT16;
    PINV5Bits_t BIT;
} PINV5_t;

typedef union
{
    uint16 UINT16;
    P6Bits_t BIT;
} P6_t;

typedef union
{
    uint32 UINT32;
    PSR6Bits_t BIT;
} PSR6_t;

typedef union
{
    uint16 UINT16;
    PNOT6Bits_t BIT;
} PNOT6_t;

typedef union
{
    uint16 UINT16;
    const PPR6Bits_t BIT;
} PPR6_t;

typedef union
{
    uint16 UINT16;
    PM6Bits_t BIT;
} PM6_t;

typedef union
{
    uint16 UINT16;
    PMC6Bits_t BIT;
} PMC6_t;

typedef union
{
    uint16 UINT16;
    PFC6Bits_t BIT;
} PFC6_t;

typedef union
{
    uint16 UINT16;
    PFCE6Bits_t BIT;
} PFCE6_t;

typedef union
{
    uint32 UINT32;
    PMSR6Bits_t BIT;
} PMSR6_t;

typedef union
{
    uint32 UINT32;
    PMCSR6Bits_t BIT;
} PMCSR6_t;

typedef union
{
    uint16 UINT16;
    PINV6Bits_t BIT;
} PINV6_t;

typedef union
{
    uint16 UINT16;
    P7Bits_t BIT;
} P7_t;

typedef union
{
    uint32 UINT32;
    PSR7Bits_t BIT;
} PSR7_t;

typedef union
{
    uint16 UINT16;
    PNOT7Bits_t BIT;
} PNOT7_t;

typedef union
{
    uint16 UINT16;
    const PPR7Bits_t BIT;
} PPR7_t;

typedef union
{
    uint16 UINT16;
    PM7Bits_t BIT;
} PM7_t;

typedef union
{
    uint16 UINT16;
    PMC7Bits_t BIT;
} PMC7_t;

typedef union
{
    uint16 UINT16;
    PFC7Bits_t BIT;
} PFC7_t;

typedef union
{
    uint16 UINT16;
    PFCE7Bits_t BIT;
} PFCE7_t;

typedef union
{
    uint32 UINT32;
    PMSR7Bits_t BIT;
} PMSR7_t;

typedef union
{
    uint32 UINT32;
    PMCSR7Bits_t BIT;
} PMCSR7_t;

typedef union
{
    uint16 UINT16;
    PINV7Bits_t BIT;
} PINV7_t;

typedef union
{
    uint16 UINT16;
    P8Bits_t BIT;
} P8_t;

typedef union
{
    uint32 UINT32;
    PSR8Bits_t BIT;
} PSR8_t;

typedef union
{
    uint16 UINT16;
    PNOT8Bits_t BIT;
} PNOT8_t;

typedef union
{
    uint16 UINT16;
    const PPR8Bits_t BIT;
} PPR8_t;

typedef union
{
    uint16 UINT16;
    PM8Bits_t BIT;
} PM8_t;

typedef union
{
    uint16 UINT16;
    PMC8Bits_t BIT;
} PMC8_t;

typedef union
{
    uint16 UINT16;
    PFC8Bits_t BIT;
} PFC8_t;

typedef union
{
    uint16 UINT16;
    PFCE8Bits_t BIT;
} PFCE8_t;

typedef union
{
    uint32 UINT32;
    PMSR8Bits_t BIT;
} PMSR8_t;

typedef union
{
    uint32 UINT32;
    PMCSR8Bits_t BIT;
} PMCSR8_t;

typedef union
{
    uint16 UINT16;
    PINV8Bits_t BIT;
} PINV8_t;

typedef union
{
    uint16 UINT16;
    P9Bits_t BIT;
} P9_t;

typedef union
{
    uint32 UINT32;
    PSR9Bits_t BIT;
} PSR9_t;

typedef union
{
    uint16 UINT16;
    PNOT9Bits_t BIT;
} PNOT9_t;

typedef union
{
    uint16 UINT16;
    const PPR9Bits_t BIT;
} PPR9_t;

typedef union
{
    uint16 UINT16;
    PM9Bits_t BIT;
} PM9_t;

typedef union
{
    uint16 UINT16;
    PMC9Bits_t BIT;
} PMC9_t;

typedef union
{
    uint16 UINT16;
    PFC9Bits_t BIT;
} PFC9_t;

typedef union
{
    uint16 UINT16;
    PFCE9Bits_t BIT;
} PFCE9_t;

typedef union
{
    uint32 UINT32;
    PMSR9Bits_t BIT;
} PMSR9_t;

typedef union
{
    uint32 UINT32;
    PMCSR9Bits_t BIT;
} PMCSR9_t;

typedef union
{
    uint16 UINT16;
    PINV9Bits_t BIT;
} PINV9_t;

typedef union
{
    uint32 UINT32;
    PCR0_0Bits_t BIT;
} PCR0_0_t;

typedef union
{
    uint32 UINT32;
    PCR0_1Bits_t BIT;
} PCR0_1_t;

typedef union
{
    uint32 UINT32;
    PCR0_2Bits_t BIT;
} PCR0_2_t;

typedef union
{
    uint32 UINT32;
    PCR0_3Bits_t BIT;
} PCR0_3_t;

typedef union
{
    uint32 UINT32;
    PCR0_4Bits_t BIT;
} PCR0_4_t;

typedef union
{
    uint32 UINT32;
    PCR0_5Bits_t BIT;
} PCR0_5_t;

typedef union
{
    uint32 UINT32;
    PCR0_6Bits_t BIT;
} PCR0_6_t;

typedef union
{
    uint32 UINT32;
    PCR0_7Bits_t BIT;
} PCR0_7_t;

typedef union
{
    uint32 UINT32;
    PCR0_8Bits_t BIT;
} PCR0_8_t;

typedef union
{
    uint32 UINT32;
    PCR0_9Bits_t BIT;
} PCR0_9_t;

typedef union
{
    uint32 UINT32;
    PCR0_10Bits_t BIT;
} PCR0_10_t;

typedef union
{
    uint32 UINT32;
    PCR0_13Bits_t BIT;
} PCR0_13_t;

typedef union
{
    uint32 UINT32;
    PCR0_14Bits_t BIT;
} PCR0_14_t;

typedef union
{
    uint32 UINT32;
    PCR1_1Bits_t BIT;
} PCR1_1_t;

typedef union
{
    uint32 UINT32;
    PCR1_2Bits_t BIT;
} PCR1_2_t;

typedef union
{
    uint32 UINT32;
    PCR1_3Bits_t BIT;
} PCR1_3_t;

typedef union
{
    uint32 UINT32;
    PCR1_4Bits_t BIT;
} PCR1_4_t;

typedef union
{
    uint32 UINT32;
    PCR1_5Bits_t BIT;
} PCR1_5_t;

typedef union
{
    uint32 UINT32;
    PCR1_6Bits_t BIT;
} PCR1_6_t;

typedef union
{
    uint32 UINT32;
    PCR1_7Bits_t BIT;
} PCR1_7_t;

typedef union
{
    uint32 UINT32;
    PCR2_0Bits_t BIT;
} PCR2_0_t;

typedef union
{
    uint32 UINT32;
    PCR2_1Bits_t BIT;
} PCR2_1_t;

typedef union
{
    uint32 UINT32;
    PCR2_2Bits_t BIT;
} PCR2_2_t;

typedef union
{
    uint32 UINT32;
    PCR2_3Bits_t BIT;
} PCR2_3_t;

typedef union
{
    uint32 UINT32;
    PCR2_4Bits_t BIT;
} PCR2_4_t;

typedef union
{
    uint32 UINT32;
    PCR2_5Bits_t BIT;
} PCR2_5_t;

typedef union
{
    uint32 UINT32;
    PCR2_6Bits_t BIT;
} PCR2_6_t;

typedef union
{
    uint32 UINT32;
    PCR2_7Bits_t BIT;
} PCR2_7_t;

typedef union
{
    uint32 UINT32;
    PCR2_8Bits_t BIT;
} PCR2_8_t;

typedef union
{
    uint32 UINT32;
    PCR2_9Bits_t BIT;
} PCR2_9_t;

typedef union
{
    uint32 UINT32;
    PCR2_10Bits_t BIT;
} PCR2_10_t;

typedef union
{
    uint32 UINT32;
    PCR2_11Bits_t BIT;
} PCR2_11_t;

typedef union
{
    uint32 UINT32;
    PCR2_12Bits_t BIT;
} PCR2_12_t;

typedef union
{
    uint32 UINT32;
    PCR2_13Bits_t BIT;
} PCR2_13_t;

typedef union
{
    uint32 UINT32;
    PCR2_14Bits_t BIT;
} PCR2_14_t;

typedef union
{
    uint32 UINT32;
    PCR2_15Bits_t BIT;
} PCR2_15_t;

typedef union
{
    uint32 UINT32;
    PCR3_0Bits_t BIT;
} PCR3_0_t;

typedef union
{
    uint32 UINT32;
    PCR3_1Bits_t BIT;
} PCR3_1_t;

typedef union
{
    uint32 UINT32;
    PCR3_2Bits_t BIT;
} PCR3_2_t;

typedef union
{
    uint32 UINT32;
    PCR3_3Bits_t BIT;
} PCR3_3_t;

typedef union
{
    uint32 UINT32;
    PCR3_4Bits_t BIT;
} PCR3_4_t;

typedef union
{
    uint32 UINT32;
    PCR3_5Bits_t BIT;
} PCR3_5_t;

typedef union
{
    uint32 UINT32;
    PCR3_6Bits_t BIT;
} PCR3_6_t;

typedef union
{
    uint32 UINT32;
    PCR3_7Bits_t BIT;
} PCR3_7_t;

typedef union
{
    uint32 UINT32;
    PCR3_8Bits_t BIT;
} PCR3_8_t;

typedef union
{
    uint32 UINT32;
    PCR3_9Bits_t BIT;
} PCR3_9_t;

typedef union
{
    uint32 UINT32;
    PCR3_10Bits_t BIT;
} PCR3_10_t;

typedef union
{
    uint32 UINT32;
    PCR3_11Bits_t BIT;
} PCR3_11_t;

typedef union
{
    uint32 UINT32;
    PCR3_12Bits_t BIT;
} PCR3_12_t;

typedef union
{
    uint32 UINT32;
    PCR3_13Bits_t BIT;
} PCR3_13_t;

typedef union
{
    uint32 UINT32;
    PCR3_14Bits_t BIT;
} PCR3_14_t;

typedef union
{
    uint32 UINT32;
    PCR4_0Bits_t BIT;
} PCR4_0_t;

typedef union
{
    uint32 UINT32;
    PCR4_1Bits_t BIT;
} PCR4_1_t;

typedef union
{
    uint32 UINT32;
    PCR4_2Bits_t BIT;
} PCR4_2_t;

typedef union
{
    uint32 UINT32;
    PCR4_3Bits_t BIT;
} PCR4_3_t;

typedef union
{
    uint32 UINT32;
    PCR4_4Bits_t BIT;
} PCR4_4_t;

typedef union
{
    uint32 UINT32;
    PCR4_5Bits_t BIT;
} PCR4_5_t;

typedef union
{
    uint32 UINT32;
    PCR4_6Bits_t BIT;
} PCR4_6_t;

typedef union
{
    uint32 UINT32;
    PCR4_7Bits_t BIT;
} PCR4_7_t;

typedef union
{
    uint32 UINT32;
    PCR4_8Bits_t BIT;
} PCR4_8_t;

typedef union
{
    uint32 UINT32;
    PCR4_9Bits_t BIT;
} PCR4_9_t;

typedef union
{
    uint32 UINT32;
    PCR4_10Bits_t BIT;
} PCR4_10_t;

typedef union
{
    uint32 UINT32;
    PCR4_11Bits_t BIT;
} PCR4_11_t;

typedef union
{
    uint32 UINT32;
    PCR4_12Bits_t BIT;
} PCR4_12_t;

typedef union
{
    uint32 UINT32;
    PCR4_13Bits_t BIT;
} PCR4_13_t;

typedef union
{
    uint32 UINT32;
    PCR4_14Bits_t BIT;
} PCR4_14_t;

typedef union
{
    uint32 UINT32;
    PCR5_0Bits_t BIT;
} PCR5_0_t;

typedef union
{
    uint32 UINT32;
    PCR5_1Bits_t BIT;
} PCR5_1_t;

typedef union
{
    uint32 UINT32;
    PCR5_4Bits_t BIT;
} PCR5_4_t;

typedef union
{
    uint32 UINT32;
    PCR5_5Bits_t BIT;
} PCR5_5_t;

typedef union
{
    uint32 UINT32;
    PCR5_6Bits_t BIT;
} PCR5_6_t;

typedef union
{
    uint32 UINT32;
    PCR5_7Bits_t BIT;
} PCR5_7_t;

typedef union
{
    uint32 UINT32;
    PCR5_8Bits_t BIT;
} PCR5_8_t;

typedef union
{
    uint32 UINT32;
    PCR5_9Bits_t BIT;
} PCR5_9_t;

typedef union
{
    uint32 UINT32;
    PCR5_10Bits_t BIT;
} PCR5_10_t;

typedef union
{
    uint32 UINT32;
    PCR5_11Bits_t BIT;
} PCR5_11_t;

typedef union
{
    uint32 UINT32;
    PCR5_12Bits_t BIT;
} PCR5_12_t;

typedef union
{
    uint32 UINT32;
    PCR5_13Bits_t BIT;
} PCR5_13_t;

typedef union
{
    uint32 UINT32;
    PCR5_14Bits_t BIT;
} PCR5_14_t;

typedef union
{
    uint32 UINT32;
    PCR5_15Bits_t BIT;
} PCR5_15_t;

typedef union
{
    uint32 UINT32;
    PCR6_0Bits_t BIT;
} PCR6_0_t;

typedef union
{
    uint32 UINT32;
    PCR6_1Bits_t BIT;
} PCR6_1_t;

typedef union
{
    uint32 UINT32;
    PCR6_2Bits_t BIT;
} PCR6_2_t;

typedef union
{
    uint32 UINT32;
    PCR6_3Bits_t BIT;
} PCR6_3_t;

typedef union
{
    uint32 UINT32;
    PCR6_4Bits_t BIT;
} PCR6_4_t;

typedef union
{
    uint32 UINT32;
    PCR6_5Bits_t BIT;
} PCR6_5_t;

typedef union
{
    uint32 UINT32;
    PCR6_6Bits_t BIT;
} PCR6_6_t;

typedef union
{
    uint32 UINT32;
    PCR6_7Bits_t BIT;
} PCR6_7_t;

typedef union
{
    uint32 UINT32;
    PCR6_8Bits_t BIT;
} PCR6_8_t;

typedef union
{
    uint32 UINT32;
    PCR6_9Bits_t BIT;
} PCR6_9_t;

typedef union
{
    uint32 UINT32;
    PCR6_10Bits_t BIT;
} PCR6_10_t;

typedef union
{
    uint32 UINT32;
    PCR6_11Bits_t BIT;
} PCR6_11_t;

typedef union
{
    uint32 UINT32;
    PCR6_12Bits_t BIT;
} PCR6_12_t;

typedef union
{
    uint32 UINT32;
    PCR6_13Bits_t BIT;
} PCR6_13_t;

typedef union
{
    uint32 UINT32;
    PCR6_14Bits_t BIT;
} PCR6_14_t;

typedef union
{
    uint32 UINT32;
    PCR6_15Bits_t BIT;
} PCR6_15_t;

typedef union
{
    uint32 UINT32;
    PCR7_0Bits_t BIT;
} PCR7_0_t;

typedef union
{
    uint32 UINT32;
    PCR7_1Bits_t BIT;
} PCR7_1_t;

typedef union
{
    uint32 UINT32;
    PCR7_2Bits_t BIT;
} PCR7_2_t;

typedef union
{
    uint32 UINT32;
    PCR7_3Bits_t BIT;
} PCR7_3_t;

typedef union
{
    uint32 UINT32;
    PCR7_4Bits_t BIT;
} PCR7_4_t;

typedef union
{
    uint32 UINT32;
    PCR7_5Bits_t BIT;
} PCR7_5_t;

typedef union
{
    uint32 UINT32;
    PCR7_6Bits_t BIT;
} PCR7_6_t;

typedef union
{
    uint32 UINT32;
    PCR7_7Bits_t BIT;
} PCR7_7_t;

typedef union
{
    uint32 UINT32;
    PCR7_8Bits_t BIT;
} PCR7_8_t;

typedef union
{
    uint32 UINT32;
    PCR7_9Bits_t BIT;
} PCR7_9_t;

typedef union
{
    uint32 UINT32;
    PCR8_0Bits_t BIT;
} PCR8_0_t;

typedef union
{
    uint32 UINT32;
    PCR8_1Bits_t BIT;
} PCR8_1_t;

typedef union
{
    uint32 UINT32;
    PCR8_2Bits_t BIT;
} PCR8_2_t;

typedef union
{
    uint32 UINT32;
    PCR8_3Bits_t BIT;
} PCR8_3_t;

typedef union
{
    uint32 UINT32;
    PCR8_4Bits_t BIT;
} PCR8_4_t;

typedef union
{
    uint32 UINT32;
    PCR8_5Bits_t BIT;
} PCR8_5_t;

typedef union
{
    uint32 UINT32;
    PCR8_6Bits_t BIT;
} PCR8_6_t;

typedef union
{
    uint32 UINT32;
    PCR8_7Bits_t BIT;
} PCR8_7_t;

typedef union
{
    uint32 UINT32;
    PCR8_8Bits_t BIT;
} PCR8_8_t;

typedef union
{
    uint32 UINT32;
    PCR8_9Bits_t BIT;
} PCR8_9_t;

typedef union
{
    uint32 UINT32;
    PCR8_10Bits_t BIT;
} PCR8_10_t;

typedef union
{
    uint32 UINT32;
    PCR8_11Bits_t BIT;
} PCR8_11_t;

typedef union
{
    uint32 UINT32;
    PCR8_12Bits_t BIT;
} PCR8_12_t;

typedef union
{
    uint32 UINT32;
    PCR8_13Bits_t BIT;
} PCR8_13_t;

typedef union
{
    uint32 UINT32;
    PCR8_14Bits_t BIT;
} PCR8_14_t;

typedef union
{
    uint32 UINT32;
    PCR8_15Bits_t BIT;
} PCR8_15_t;

typedef union
{
    uint32 UINT32;
    PCR9_0Bits_t BIT;
} PCR9_0_t;

typedef union
{
    uint32 UINT32;
    PCR9_1Bits_t BIT;
} PCR9_1_t;

typedef union
{
    uint32 UINT32;
    PCR9_2Bits_t BIT;
} PCR9_2_t;

typedef union
{
    uint32 UINT32;
    PCR9_3Bits_t BIT;
} PCR9_3_t;

typedef union
{
    uint32 UINT32;
    PCR9_4Bits_t BIT;
} PCR9_4_t;

typedef union
{
    uint32 UINT32;
    PCR9_5Bits_t BIT;
} PCR9_5_t;

typedef union
{
    uint32 UINT32;
    PCR9_6Bits_t BIT;
} PCR9_6_t;

typedef union
{
    uint32 UINT32;
    PCR9_7Bits_t BIT;
} PCR9_7_t;

typedef union
{
    uint32 UINT32;
    PCR9_8Bits_t BIT;
} PCR9_8_t;

typedef union
{
    uint16 UINT16;
    PIBC0Bits_t BIT;
} PIBC0_t;

typedef union
{
    uint16 UINT16;
    PBDC0Bits_t BIT;
} PBDC0_t;

typedef union
{
    uint16 UINT16;
    PIPC0Bits_t BIT;
} PIPC0_t;

typedef union
{
    uint16 UINT16;
    PU0Bits_t BIT;
} PU0_t;

typedef union
{
    uint16 UINT16;
    PD0Bits_t BIT;
} PD0_t;

typedef union
{
    uint32 UINT32;
    PODC0Bits_t BIT;
} PODC0_t;

typedef union
{
    uint32 UINT32;
    PDSC0Bits_t BIT;
} PDSC0_t;

typedef union
{
    uint16 UINT16;
    PIS0Bits_t BIT;
} PIS0_t;

typedef union
{
    uint32 UINT32;
    PUCC0Bits_t BIT;
} PUCC0_t;

typedef union
{
    uint32 UINT32;
    PODCE0Bits_t BIT;
} PODCE0_t;

typedef union
{
    uint16 UINT16;
    PIBC1Bits_t BIT;
} PIBC1_t;

typedef union
{
    uint16 UINT16;
    PBDC1Bits_t BIT;
} PBDC1_t;

typedef union
{
    uint16 UINT16;
    PIPC1Bits_t BIT;
} PIPC1_t;

typedef union
{
    uint16 UINT16;
    PU1Bits_t BIT;
} PU1_t;

typedef union
{
    uint16 UINT16;
    PD1Bits_t BIT;
} PD1_t;

typedef union
{
    uint32 UINT32;
    PODC1Bits_t BIT;
} PODC1_t;

typedef union
{
    uint32 UINT32;
    PDSC1Bits_t BIT;
} PDSC1_t;

typedef union
{
    uint16 UINT16;
    PIS1Bits_t BIT;
} PIS1_t;

typedef union
{
    uint32 UINT32;
    PUCC1Bits_t BIT;
} PUCC1_t;

typedef union
{
    uint32 UINT32;
    PODCE1Bits_t BIT;
} PODCE1_t;

typedef union
{
    uint16 UINT16;
    PIBC2Bits_t BIT;
} PIBC2_t;

typedef union
{
    uint16 UINT16;
    PBDC2Bits_t BIT;
} PBDC2_t;

typedef union
{
    uint16 UINT16;
    PIPC2Bits_t BIT;
} PIPC2_t;

typedef union
{
    uint16 UINT16;
    PU2Bits_t BIT;
} PU2_t;

typedef union
{
    uint16 UINT16;
    PD2Bits_t BIT;
} PD2_t;

typedef union
{
    uint32 UINT32;
    PODC2Bits_t BIT;
} PODC2_t;

typedef union
{
    uint32 UINT32;
    PDSC2Bits_t BIT;
} PDSC2_t;

typedef union
{
    uint16 UINT16;
    PIS2Bits_t BIT;
} PIS2_t;

typedef union
{
    uint32 UINT32;
    PUCC2Bits_t BIT;
} PUCC2_t;

typedef union
{
    uint32 UINT32;
    PODCE2Bits_t BIT;
} PODCE2_t;

typedef union
{
    uint16 UINT16;
    PIBC3Bits_t BIT;
} PIBC3_t;

typedef union
{
    uint16 UINT16;
    PBDC3Bits_t BIT;
} PBDC3_t;

typedef union
{
    uint16 UINT16;
    PIPC3Bits_t BIT;
} PIPC3_t;

typedef union
{
    uint16 UINT16;
    PU3Bits_t BIT;
} PU3_t;

typedef union
{
    uint16 UINT16;
    PD3Bits_t BIT;
} PD3_t;

typedef union
{
    uint32 UINT32;
    PODC3Bits_t BIT;
} PODC3_t;

typedef union
{
    uint32 UINT32;
    PDSC3Bits_t BIT;
} PDSC3_t;

typedef union
{
    uint16 UINT16;
    PIS3Bits_t BIT;
} PIS3_t;

typedef union
{
    uint32 UINT32;
    PUCC3Bits_t BIT;
} PUCC3_t;

typedef union
{
    uint32 UINT32;
    PODCE3Bits_t BIT;
} PODCE3_t;

typedef union
{
    uint16 UINT16;
    PIBC4Bits_t BIT;
} PIBC4_t;

typedef union
{
    uint16 UINT16;
    PBDC4Bits_t BIT;
} PBDC4_t;

typedef union
{
    uint16 UINT16;
    PIPC4Bits_t BIT;
} PIPC4_t;

typedef union
{
    uint16 UINT16;
    PU4Bits_t BIT;
} PU4_t;

typedef union
{
    uint16 UINT16;
    PD4Bits_t BIT;
} PD4_t;

typedef union
{
    uint32 UINT32;
    PODC4Bits_t BIT;
} PODC4_t;

typedef union
{
    uint32 UINT32;
    PDSC4Bits_t BIT;
} PDSC4_t;

typedef union
{
    uint16 UINT16;
    PIS4Bits_t BIT;
} PIS4_t;

typedef union
{
    uint32 UINT32;
    PUCC4Bits_t BIT;
} PUCC4_t;

typedef union
{
    uint32 UINT32;
    PODCE4Bits_t BIT;
} PODCE4_t;

typedef union
{
    uint16 UINT16;
    PIBC5Bits_t BIT;
} PIBC5_t;

typedef union
{
    uint16 UINT16;
    PBDC5Bits_t BIT;
} PBDC5_t;

typedef union
{
    uint16 UINT16;
    PIPC5Bits_t BIT;
} PIPC5_t;

typedef union
{
    uint16 UINT16;
    PU5Bits_t BIT;
} PU5_t;

typedef union
{
    uint16 UINT16;
    PD5Bits_t BIT;
} PD5_t;

typedef union
{
    uint32 UINT32;
    PODC5Bits_t BIT;
} PODC5_t;

typedef union
{
    uint32 UINT32;
    PDSC5Bits_t BIT;
} PDSC5_t;

typedef union
{
    uint16 UINT16;
    PIS5Bits_t BIT;
} PIS5_t;

typedef union
{
    uint32 UINT32;
    PUCC5Bits_t BIT;
} PUCC5_t;

typedef union
{
    uint32 UINT32;
    PODCE5Bits_t BIT;
} PODCE5_t;

typedef union
{
    uint16 UINT16;
    PIBC6Bits_t BIT;
} PIBC6_t;

typedef union
{
    uint16 UINT16;
    PBDC6Bits_t BIT;
} PBDC6_t;

typedef union
{
    uint16 UINT16;
    PIPC6Bits_t BIT;
} PIPC6_t;

typedef union
{
    uint16 UINT16;
    PU6Bits_t BIT;
} PU6_t;

typedef union
{
    uint16 UINT16;
    PD6Bits_t BIT;
} PD6_t;

typedef union
{
    uint32 UINT32;
    PODC6Bits_t BIT;
} PODC6_t;

typedef union
{
    uint32 UINT32;
    PDSC6Bits_t BIT;
} PDSC6_t;

typedef union
{
    uint16 UINT16;
    PIS6Bits_t BIT;
} PIS6_t;

typedef union
{
    uint32 UINT32;
    PUCC6Bits_t BIT;
} PUCC6_t;

typedef union
{
    uint32 UINT32;
    PODCE6Bits_t BIT;
} PODCE6_t;

typedef union
{
    uint16 UINT16;
    PIBC7Bits_t BIT;
} PIBC7_t;

typedef union
{
    uint16 UINT16;
    PBDC7Bits_t BIT;
} PBDC7_t;

typedef union
{
    uint16 UINT16;
    PIPC7Bits_t BIT;
} PIPC7_t;

typedef union
{
    uint16 UINT16;
    PU7Bits_t BIT;
} PU7_t;

typedef union
{
    uint16 UINT16;
    PD7Bits_t BIT;
} PD7_t;

typedef union
{
    uint32 UINT32;
    PODC7Bits_t BIT;
} PODC7_t;

typedef union
{
    uint32 UINT32;
    PDSC7Bits_t BIT;
} PDSC7_t;

typedef union
{
    uint16 UINT16;
    PIS7Bits_t BIT;
} PIS7_t;

typedef union
{
    uint32 UINT32;
    PUCC7Bits_t BIT;
} PUCC7_t;

typedef union
{
    uint32 UINT32;
    PODCE7Bits_t BIT;
} PODCE7_t;

typedef union
{
    uint16 UINT16;
    PIBC8Bits_t BIT;
} PIBC8_t;

typedef union
{
    uint16 UINT16;
    PBDC8Bits_t BIT;
} PBDC8_t;

typedef union
{
    uint16 UINT16;
    PIPC8Bits_t BIT;
} PIPC8_t;

typedef union
{
    uint16 UINT16;
    PU8Bits_t BIT;
} PU8_t;

typedef union
{
    uint16 UINT16;
    PD8Bits_t BIT;
} PD8_t;

typedef union
{
    uint32 UINT32;
    PODC8Bits_t BIT;
} PODC8_t;

typedef union
{
    uint32 UINT32;
    PDSC8Bits_t BIT;
} PDSC8_t;

typedef union
{
    uint16 UINT16;
    PIS8Bits_t BIT;
} PIS8_t;

typedef union
{
    uint32 UINT32;
    PUCC8Bits_t BIT;
} PUCC8_t;

typedef union
{
    uint32 UINT32;
    PODCE8Bits_t BIT;
} PODCE8_t;

typedef union
{
    uint16 UINT16;
    PIBC9Bits_t BIT;
} PIBC9_t;

typedef union
{
    uint16 UINT16;
    PBDC9Bits_t BIT;
} PBDC9_t;

typedef union
{
    uint16 UINT16;
    PIPC9Bits_t BIT;
} PIPC9_t;

typedef union
{
    uint16 UINT16;
    PU9Bits_t BIT;
} PU9_t;

typedef union
{
    uint16 UINT16;
    PD9Bits_t BIT;
} PD9_t;

typedef union
{
    uint32 UINT32;
    PODC9Bits_t BIT;
} PODC9_t;

typedef union
{
    uint32 UINT32;
    PDSC9Bits_t BIT;
} PDSC9_t;

typedef union
{
    uint16 UINT16;
    PIS9Bits_t BIT;
} PIS9_t;

typedef union
{
    uint32 UINT32;
    PUCC9Bits_t BIT;
} PUCC9_t;

typedef union
{
    uint32 UINT32;
    PODCE9Bits_t BIT;
} PODCE9_t;

typedef union
{
    uint8 UINT8;
    JP0Bits_t BIT;
} JP0_t;

typedef union
{
    uint32 UINT32;
    JPSR0Bits_t BIT;
} JPSR0_t;

typedef union
{
    uint8 UINT8;
    JPNOT0Bits_t BIT;
} JPNOT0_t;

typedef union
{
    uint8 UINT8;
    const JPPR0Bits_t BIT;
} JPPR0_t;

typedef union
{
    uint8 UINT8;
    JPM0Bits_t BIT;
} JPM0_t;

typedef union
{
    uint8 UINT8;
    JPMC0Bits_t BIT;
} JPMC0_t;

typedef union
{
    uint8 UINT8;
    JPFCE0Bits_t BIT;
} JPFCE0_t;

typedef union
{
    uint32 UINT32;
    JPMSR0Bits_t BIT;
} JPMSR0_t;

typedef union
{
    uint32 UINT32;
    JPMCSR0Bits_t BIT;
} JPMCSR0_t;

typedef union
{
    uint8 UINT8;
    JPINV0Bits_t BIT;
} JPINV0_t;

typedef union
{
    uint32 UINT32;
    JPCR0_0Bits_t BIT;
} JPCR0_0_t;

typedef union
{
    uint32 UINT32;
    JPCR0_1Bits_t BIT;
} JPCR0_1_t;

typedef union
{
    uint32 UINT32;
    JPCR0_2Bits_t BIT;
} JPCR0_2_t;

typedef union
{
    uint32 UINT32;
    JPCR0_3Bits_t BIT;
} JPCR0_3_t;

typedef union
{
    uint32 UINT32;
    JPCR0_5Bits_t BIT;
} JPCR0_5_t;

typedef union
{
    uint32 UINT32;
    JPCR0_6Bits_t BIT;
} JPCR0_6_t;

typedef union
{
    uint32 UINT32;
    JPCR0_7Bits_t BIT;
} JPCR0_7_t;

typedef union
{
    uint32 UINT32;
    JPCR0_8Bits_t BIT;
} JPCR0_8_t;

typedef union
{
    uint32 UINT32;
    JPCR0_9Bits_t BIT;
} JPCR0_9_t;

typedef union
{
    uint32 UINT32;
    JPCR0_10Bits_t BIT;
} JPCR0_10_t;

typedef union
{
    uint32 UINT32;
    JPCR0_13Bits_t BIT;
} JPCR0_13_t;

typedef union
{
    uint32 UINT32;
    JPCR0_14Bits_t BIT;
} JPCR0_14_t;

typedef union
{
    uint8 UINT8;
    JPIBC0Bits_t BIT;
} JPIBC0_t;

typedef union
{
    uint8 UINT8;
    JPBDC0Bits_t BIT;
} JPBDC0_t;

typedef union
{
    uint8 UINT8;
    JPU0Bits_t BIT;
} JPU0_t;

typedef union
{
    uint8 UINT8;
    JPD0Bits_t BIT;
} JPD0_t;

typedef union
{
    uint32 UINT32;
    JPODC0Bits_t BIT;
} JPODC0_t;

typedef union
{
    uint32 UINT32;
    JPDSC0Bits_t BIT;
} JPDSC0_t;

typedef union
{
    uint8 UINT8;
    JPIS0Bits_t BIT;
} JPIS0_t;

typedef union
{
    uint32 UINT32;
    JPUCC0Bits_t BIT;
} JPUCC0_t;

typedef union
{
    uint32 UINT32;
    JPODCE0Bits_t BIT;
} JPODCE0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(P0_BASE, 0xFFC10000, __READ_WRITE, P0_t);
__IOREG(PSR0_BASE, 0xFFC10004, __READ_WRITE, PSR0_t);
__IOREG(PNOT0_BASE, 0xFFC10008, __READ_WRITE, PNOT0_t);
__IOREG(PPR0_BASE, 0xFFC1000C, __READ, PPR0_t);
__IOREG(PM0_BASE, 0xFFC10010, __READ_WRITE, PM0_t);
__IOREG(PMC0_BASE, 0xFFC10014, __READ_WRITE, PMC0_t);
__IOREG(PFC0_BASE, 0xFFC10018, __READ_WRITE, PFC0_t);
__IOREG(PFCE0_BASE, 0xFFC1001C, __READ_WRITE, PFCE0_t);
__IOREG(PMSR0_BASE, 0xFFC10020, __READ_WRITE, PMSR0_t);
__IOREG(PMCSR0_BASE, 0xFFC10024, __READ_WRITE, PMCSR0_t);
__IOREG(PINV0_BASE, 0xFFC10030, __READ_WRITE, PINV0_t);
__IOREG(P1_BASE, 0xFFC10040, __READ_WRITE, P1_t);
__IOREG(PSR1_BASE, 0xFFC10044, __READ_WRITE, PSR1_t);
__IOREG(PNOT1_BASE, 0xFFC10048, __READ_WRITE, PNOT1_t);
__IOREG(PPR1_BASE, 0xFFC1004C, __READ, PPR1_t);
__IOREG(PM1_BASE, 0xFFC10050, __READ_WRITE, PM1_t);
__IOREG(PMC1_BASE, 0xFFC10054, __READ_WRITE, PMC1_t);
__IOREG(PFC1_BASE, 0xFFC10058, __READ_WRITE, PFC1_t);
__IOREG(PFCE1_BASE, 0xFFC1005C, __READ_WRITE, PFCE1_t);
__IOREG(PMSR1_BASE, 0xFFC10060, __READ_WRITE, PMSR1_t);
__IOREG(PMCSR1_BASE, 0xFFC10064, __READ_WRITE, PMCSR1_t);
__IOREG(PINV1_BASE, 0xFFC10070, __READ_WRITE, PINV1_t);
__IOREG(P2_BASE, 0xFFC10080, __READ_WRITE, P2_t);
__IOREG(PSR2_BASE, 0xFFC10084, __READ_WRITE, PSR2_t);
__IOREG(PNOT2_BASE, 0xFFC10088, __READ_WRITE, PNOT2_t);
__IOREG(PPR2_BASE, 0xFFC1008C, __READ, PPR2_t);
__IOREG(PM2_BASE, 0xFFC10090, __READ_WRITE, PM2_t);
__IOREG(PMC2_BASE, 0xFFC10094, __READ_WRITE, PMC2_t);
__IOREG(PFC2_BASE, 0xFFC10098, __READ_WRITE, PFC2_t);
__IOREG(PFCE2_BASE, 0xFFC1009C, __READ_WRITE, PFCE2_t);
__IOREG(PMSR2_BASE, 0xFFC100A0, __READ_WRITE, PMSR2_t);
__IOREG(PMCSR2_BASE, 0xFFC100A4, __READ_WRITE, PMCSR2_t);
__IOREG(PINV2_BASE, 0xFFC100B0, __READ_WRITE, PINV2_t);
__IOREG(P3_BASE, 0xFFC100C0, __READ_WRITE, P3_t);
__IOREG(PSR3_BASE, 0xFFC100C4, __READ_WRITE, PSR3_t);
__IOREG(PNOT3_BASE, 0xFFC100C8, __READ_WRITE, PNOT3_t);
__IOREG(PPR3_BASE, 0xFFC100CC, __READ, PPR3_t);
__IOREG(PM3_BASE, 0xFFC100D0, __READ_WRITE, PM3_t);
__IOREG(PMC3_BASE, 0xFFC100D4, __READ_WRITE, PMC3_t);
__IOREG(PFC3_BASE, 0xFFC100D8, __READ_WRITE, PFC3_t);
__IOREG(PFCE3_BASE, 0xFFC100DC, __READ_WRITE, PFCE3_t);
__IOREG(PMSR3_BASE, 0xFFC100E0, __READ_WRITE, PMSR3_t);
__IOREG(PMCSR3_BASE, 0xFFC100E4, __READ_WRITE, PMCSR3_t);
__IOREG(PINV3_BASE, 0xFFC100F0, __READ_WRITE, PINV3_t);
__IOREG(P4_BASE, 0xFFC10100, __READ_WRITE, P4_t);
__IOREG(PSR4_BASE, 0xFFC10104, __READ_WRITE, PSR4_t);
__IOREG(PNOT4_BASE, 0xFFC10108, __READ_WRITE, PNOT4_t);
__IOREG(PPR4_BASE, 0xFFC1010C, __READ, PPR4_t);
__IOREG(PM4_BASE, 0xFFC10110, __READ_WRITE, PM4_t);
__IOREG(PMC4_BASE, 0xFFC10114, __READ_WRITE, PMC4_t);
__IOREG(PFC4_BASE, 0xFFC10118, __READ_WRITE, PFC4_t);
__IOREG(PFCE4_BASE, 0xFFC1011C, __READ_WRITE, PFCE4_t);
__IOREG(PMSR4_BASE, 0xFFC10120, __READ_WRITE, PMSR4_t);
__IOREG(PMCSR4_BASE, 0xFFC10124, __READ_WRITE, PMCSR4_t);
__IOREG(PINV4_BASE, 0xFFC10130, __READ_WRITE, PINV4_t);
__IOREG(P5_BASE, 0xFFC10140, __READ_WRITE, P5_t);
__IOREG(PSR5_BASE, 0xFFC10144, __READ_WRITE, PSR5_t);
__IOREG(PNOT5_BASE, 0xFFC10148, __READ_WRITE, PNOT5_t);
__IOREG(PPR5_BASE, 0xFFC1014C, __READ, PPR5_t);
__IOREG(PM5_BASE, 0xFFC10150, __READ_WRITE, PM5_t);
__IOREG(PMC5_BASE, 0xFFC10154, __READ_WRITE, PMC5_t);
__IOREG(PFC5_BASE, 0xFFC10158, __READ_WRITE, PFC5_t);
__IOREG(PFCE5_BASE, 0xFFC1015C, __READ_WRITE, PFCE5_t);
__IOREG(PMSR5_BASE, 0xFFC10160, __READ_WRITE, PMSR5_t);
__IOREG(PMCSR5_BASE, 0xFFC10164, __READ_WRITE, PMCSR5_t);
__IOREG(PINV5_BASE, 0xFFC10170, __READ_WRITE, PINV5_t);
__IOREG(P6_BASE, 0xFFC10180, __READ_WRITE, P6_t);
__IOREG(PSR6_BASE, 0xFFC10184, __READ_WRITE, PSR6_t);
__IOREG(PNOT6_BASE, 0xFFC10188, __READ_WRITE, PNOT6_t);
__IOREG(PPR6_BASE, 0xFFC1018C, __READ, PPR6_t);
__IOREG(PM6_BASE, 0xFFC10190, __READ_WRITE, PM6_t);
__IOREG(PMC6_BASE, 0xFFC10194, __READ_WRITE, PMC6_t);
__IOREG(PFC6_BASE, 0xFFC10198, __READ_WRITE, PFC6_t);
__IOREG(PFCE6_BASE, 0xFFC1019C, __READ_WRITE, PFCE6_t);
__IOREG(PMSR6_BASE, 0xFFC101A0, __READ_WRITE, PMSR6_t);
__IOREG(PMCSR6_BASE, 0xFFC101A4, __READ_WRITE, PMCSR6_t);
__IOREG(PINV6_BASE, 0xFFC101B0, __READ_WRITE, PINV6_t);
__IOREG(P7_BASE, 0xFFC101C0, __READ_WRITE, P7_t);
__IOREG(PSR7_BASE, 0xFFC101C4, __READ_WRITE, PSR7_t);
__IOREG(PNOT7_BASE, 0xFFC101C8, __READ_WRITE, PNOT7_t);
__IOREG(PPR7_BASE, 0xFFC101CC, __READ, PPR7_t);
__IOREG(PM7_BASE, 0xFFC101D0, __READ_WRITE, PM7_t);
__IOREG(PMC7_BASE, 0xFFC101D4, __READ_WRITE, PMC7_t);
__IOREG(PFC7_BASE, 0xFFC101D8, __READ_WRITE, PFC7_t);
__IOREG(PFCE7_BASE, 0xFFC101DC, __READ_WRITE, PFCE7_t);
__IOREG(PMSR7_BASE, 0xFFC101E0, __READ_WRITE, PMSR7_t);
__IOREG(PMCSR7_BASE, 0xFFC101E4, __READ_WRITE, PMCSR7_t);
__IOREG(PINV7_BASE, 0xFFC101F0, __READ_WRITE, PINV7_t);
__IOREG(P8_BASE, 0xFFC10200, __READ_WRITE, P8_t);
__IOREG(PSR8_BASE, 0xFFC10204, __READ_WRITE, PSR8_t);
__IOREG(PNOT8_BASE, 0xFFC10208, __READ_WRITE, PNOT8_t);
__IOREG(PPR8_BASE, 0xFFC1020C, __READ, PPR8_t);
__IOREG(PM8_BASE, 0xFFC10210, __READ_WRITE, PM8_t);
__IOREG(PMC8_BASE, 0xFFC10214, __READ_WRITE, PMC8_t);
__IOREG(PFC8_BASE, 0xFFC10218, __READ_WRITE, PFC8_t);
__IOREG(PFCE8_BASE, 0xFFC1021C, __READ_WRITE, PFCE8_t);
__IOREG(PMSR8_BASE, 0xFFC10220, __READ_WRITE, PMSR8_t);
__IOREG(PMCSR8_BASE, 0xFFC10224, __READ_WRITE, PMCSR8_t);
__IOREG(PINV8_BASE, 0xFFC10230, __READ_WRITE, PINV8_t);
__IOREG(P9_BASE, 0xFFC10240, __READ_WRITE, P9_t);
__IOREG(PSR9_BASE, 0xFFC10244, __READ_WRITE, PSR9_t);
__IOREG(PNOT9_BASE, 0xFFC10248, __READ_WRITE, PNOT9_t);
__IOREG(PPR9_BASE, 0xFFC1024C, __READ, PPR9_t);
__IOREG(PM9_BASE, 0xFFC10250, __READ_WRITE, PM9_t);
__IOREG(PMC9_BASE, 0xFFC10254, __READ_WRITE, PMC9_t);
__IOREG(PFC9_BASE, 0xFFC10258, __READ_WRITE, PFC9_t);
__IOREG(PFCE9_BASE, 0xFFC1025C, __READ_WRITE, PFCE9_t);
__IOREG(PMSR9_BASE, 0xFFC10260, __READ_WRITE, PMSR9_t);
__IOREG(PMCSR9_BASE, 0xFFC10264, __READ_WRITE, PMCSR9_t);
__IOREG(PINV9_BASE, 0xFFC10270, __READ_WRITE, PINV9_t);
__IOREG(PCR0_0_BASE, 0xFFC12000, __READ_WRITE, PCR0_0_t);
__IOREG(PCR0_1_BASE, 0xFFC12004, __READ_WRITE, PCR0_1_t);
__IOREG(PCR0_2_BASE, 0xFFC12008, __READ_WRITE, PCR0_2_t);
__IOREG(PCR0_3_BASE, 0xFFC1200C, __READ_WRITE, PCR0_3_t);
__IOREG(PCR0_4_BASE, 0xFFC12010, __READ_WRITE, PCR0_4_t);
__IOREG(PCR0_5_BASE, 0xFFC12014, __READ_WRITE, PCR0_5_t);
__IOREG(PCR0_6_BASE, 0xFFC12018, __READ_WRITE, PCR0_6_t);
__IOREG(PCR0_7_BASE, 0xFFC1201C, __READ_WRITE, PCR0_7_t);
__IOREG(PCR0_8_BASE, 0xFFC12020, __READ_WRITE, PCR0_8_t);
__IOREG(PCR0_9_BASE, 0xFFC12024, __READ_WRITE, PCR0_9_t);
__IOREG(PCR0_10_BASE, 0xFFC12028, __READ_WRITE, PCR0_10_t);
__IOREG(PCR0_13_BASE, 0xFFC12034, __READ_WRITE, PCR0_13_t);
__IOREG(PCR0_14_BASE, 0xFFC12038, __READ_WRITE, PCR0_14_t);
__IOREG(PCR1_1_BASE, 0xFFC12044, __READ_WRITE, PCR1_1_t);
__IOREG(PCR1_2_BASE, 0xFFC12048, __READ_WRITE, PCR1_2_t);
__IOREG(PCR1_3_BASE, 0xFFC1204C, __READ_WRITE, PCR1_3_t);
__IOREG(PCR1_4_BASE, 0xFFC12050, __READ_WRITE, PCR1_4_t);
__IOREG(PCR1_5_BASE, 0xFFC12054, __READ_WRITE, PCR1_5_t);
__IOREG(PCR1_6_BASE, 0xFFC12058, __READ_WRITE, PCR1_6_t);
__IOREG(PCR1_7_BASE, 0xFFC1205C, __READ_WRITE, PCR1_7_t);
__IOREG(PCR2_0_BASE, 0xFFC12080, __READ_WRITE, PCR2_0_t);
__IOREG(PCR2_1_BASE, 0xFFC12084, __READ_WRITE, PCR2_1_t);
__IOREG(PCR2_2_BASE, 0xFFC12088, __READ_WRITE, PCR2_2_t);
__IOREG(PCR2_3_BASE, 0xFFC1208C, __READ_WRITE, PCR2_3_t);
__IOREG(PCR2_4_BASE, 0xFFC12090, __READ_WRITE, PCR2_4_t);
__IOREG(PCR2_5_BASE, 0xFFC12094, __READ_WRITE, PCR2_5_t);
__IOREG(PCR2_6_BASE, 0xFFC12098, __READ_WRITE, PCR2_6_t);
__IOREG(PCR2_7_BASE, 0xFFC1209C, __READ_WRITE, PCR2_7_t);
__IOREG(PCR2_8_BASE, 0xFFC120A0, __READ_WRITE, PCR2_8_t);
__IOREG(PCR2_9_BASE, 0xFFC120A4, __READ_WRITE, PCR2_9_t);
__IOREG(PCR2_10_BASE, 0xFFC120A8, __READ_WRITE, PCR2_10_t);
__IOREG(PCR2_11_BASE, 0xFFC120AC, __READ_WRITE, PCR2_11_t);
__IOREG(PCR2_12_BASE, 0xFFC120B0, __READ_WRITE, PCR2_12_t);
__IOREG(PCR2_13_BASE, 0xFFC120B4, __READ_WRITE, PCR2_13_t);
__IOREG(PCR2_14_BASE, 0xFFC120B8, __READ_WRITE, PCR2_14_t);
__IOREG(PCR2_15_BASE, 0xFFC120BC, __READ_WRITE, PCR2_15_t);
__IOREG(PCR3_0_BASE, 0xFFC120C0, __READ_WRITE, PCR3_0_t);
__IOREG(PCR3_1_BASE, 0xFFC120C4, __READ_WRITE, PCR3_1_t);
__IOREG(PCR3_2_BASE, 0xFFC120C8, __READ_WRITE, PCR3_2_t);
__IOREG(PCR3_3_BASE, 0xFFC120CC, __READ_WRITE, PCR3_3_t);
__IOREG(PCR3_4_BASE, 0xFFC120D0, __READ_WRITE, PCR3_4_t);
__IOREG(PCR3_5_BASE, 0xFFC120D4, __READ_WRITE, PCR3_5_t);
__IOREG(PCR3_6_BASE, 0xFFC120D8, __READ_WRITE, PCR3_6_t);
__IOREG(PCR3_7_BASE, 0xFFC120DC, __READ_WRITE, PCR3_7_t);
__IOREG(PCR3_8_BASE, 0xFFC120E0, __READ_WRITE, PCR3_8_t);
__IOREG(PCR3_9_BASE, 0xFFC120E4, __READ_WRITE, PCR3_9_t);
__IOREG(PCR3_10_BASE, 0xFFC120E8, __READ_WRITE, PCR3_10_t);
__IOREG(PCR3_11_BASE, 0xFFC120EC, __READ_WRITE, PCR3_11_t);
__IOREG(PCR3_12_BASE, 0xFFC120F0, __READ_WRITE, PCR3_12_t);
__IOREG(PCR3_13_BASE, 0xFFC120F4, __READ_WRITE, PCR3_13_t);
__IOREG(PCR3_14_BASE, 0xFFC120F8, __READ_WRITE, PCR3_14_t);
__IOREG(PCR4_0_BASE, 0xFFC12100, __READ_WRITE, PCR4_0_t);
__IOREG(PCR4_1_BASE, 0xFFC12104, __READ_WRITE, PCR4_1_t);
__IOREG(PCR4_2_BASE, 0xFFC12108, __READ_WRITE, PCR4_2_t);
__IOREG(PCR4_3_BASE, 0xFFC1210C, __READ_WRITE, PCR4_3_t);
__IOREG(PCR4_4_BASE, 0xFFC12110, __READ_WRITE, PCR4_4_t);
__IOREG(PCR4_5_BASE, 0xFFC12114, __READ_WRITE, PCR4_5_t);
__IOREG(PCR4_6_BASE, 0xFFC12118, __READ_WRITE, PCR4_6_t);
__IOREG(PCR4_7_BASE, 0xFFC1211C, __READ_WRITE, PCR4_7_t);
__IOREG(PCR4_8_BASE, 0xFFC12120, __READ_WRITE, PCR4_8_t);
__IOREG(PCR4_9_BASE, 0xFFC12124, __READ_WRITE, PCR4_9_t);
__IOREG(PCR4_10_BASE, 0xFFC12128, __READ_WRITE, PCR4_10_t);
__IOREG(PCR4_11_BASE, 0xFFC1212C, __READ_WRITE, PCR4_11_t);
__IOREG(PCR4_12_BASE, 0xFFC12130, __READ_WRITE, PCR4_12_t);
__IOREG(PCR4_13_BASE, 0xFFC12134, __READ_WRITE, PCR4_13_t);
__IOREG(PCR4_14_BASE, 0xFFC12138, __READ_WRITE, PCR4_14_t);
__IOREG(PCR5_0_BASE, 0xFFC12140, __READ_WRITE, PCR5_0_t);
__IOREG(PCR5_1_BASE, 0xFFC12144, __READ_WRITE, PCR5_1_t);
__IOREG(PCR5_4_BASE, 0xFFC12150, __READ_WRITE, PCR5_4_t);
__IOREG(PCR5_5_BASE, 0xFFC12154, __READ_WRITE, PCR5_5_t);
__IOREG(PCR5_6_BASE, 0xFFC12158, __READ_WRITE, PCR5_6_t);
__IOREG(PCR5_7_BASE, 0xFFC1215C, __READ_WRITE, PCR5_7_t);
__IOREG(PCR5_8_BASE, 0xFFC12160, __READ_WRITE, PCR5_8_t);
__IOREG(PCR5_9_BASE, 0xFFC12164, __READ_WRITE, PCR5_9_t);
__IOREG(PCR5_10_BASE, 0xFFC12168, __READ_WRITE, PCR5_10_t);
__IOREG(PCR5_11_BASE, 0xFFC1216C, __READ_WRITE, PCR5_11_t);
__IOREG(PCR5_12_BASE, 0xFFC12170, __READ_WRITE, PCR5_12_t);
__IOREG(PCR5_13_BASE, 0xFFC12174, __READ_WRITE, PCR5_13_t);
__IOREG(PCR5_14_BASE, 0xFFC12178, __READ_WRITE, PCR5_14_t);
__IOREG(PCR5_15_BASE, 0xFFC1217C, __READ_WRITE, PCR5_15_t);
__IOREG(PCR6_0_BASE, 0xFFC12180, __READ_WRITE, PCR6_0_t);
__IOREG(PCR6_1_BASE, 0xFFC12184, __READ_WRITE, PCR6_1_t);
__IOREG(PCR6_2_BASE, 0xFFC12188, __READ_WRITE, PCR6_2_t);
__IOREG(PCR6_3_BASE, 0xFFC1218C, __READ_WRITE, PCR6_3_t);
__IOREG(PCR6_4_BASE, 0xFFC12190, __READ_WRITE, PCR6_4_t);
__IOREG(PCR6_5_BASE, 0xFFC12194, __READ_WRITE, PCR6_5_t);
__IOREG(PCR6_6_BASE, 0xFFC12198, __READ_WRITE, PCR6_6_t);
__IOREG(PCR6_7_BASE, 0xFFC1219C, __READ_WRITE, PCR6_7_t);
__IOREG(PCR6_8_BASE, 0xFFC121A0, __READ_WRITE, PCR6_8_t);
__IOREG(PCR6_9_BASE, 0xFFC121A4, __READ_WRITE, PCR6_9_t);
__IOREG(PCR6_10_BASE, 0xFFC121A8, __READ_WRITE, PCR6_10_t);
__IOREG(PCR6_11_BASE, 0xFFC121AC, __READ_WRITE, PCR6_11_t);
__IOREG(PCR6_12_BASE, 0xFFC121B0, __READ_WRITE, PCR6_12_t);
__IOREG(PCR6_13_BASE, 0xFFC121B4, __READ_WRITE, PCR6_13_t);
__IOREG(PCR6_14_BASE, 0xFFC121B8, __READ_WRITE, PCR6_14_t);
__IOREG(PCR6_15_BASE, 0xFFC121BC, __READ_WRITE, PCR6_15_t);
__IOREG(PCR7_0_BASE, 0xFFC121C0, __READ_WRITE, PCR7_0_t);
__IOREG(PCR7_1_BASE, 0xFFC121C4, __READ_WRITE, PCR7_1_t);
__IOREG(PCR7_2_BASE, 0xFFC121C8, __READ_WRITE, PCR7_2_t);
__IOREG(PCR7_3_BASE, 0xFFC121CC, __READ_WRITE, PCR7_3_t);
__IOREG(PCR7_4_BASE, 0xFFC121D0, __READ_WRITE, PCR7_4_t);
__IOREG(PCR7_5_BASE, 0xFFC121D4, __READ_WRITE, PCR7_5_t);
__IOREG(PCR7_6_BASE, 0xFFC121D8, __READ_WRITE, PCR7_6_t);
__IOREG(PCR7_7_BASE, 0xFFC121DC, __READ_WRITE, PCR7_7_t);
__IOREG(PCR7_8_BASE, 0xFFC121E0, __READ_WRITE, PCR7_8_t);
__IOREG(PCR7_9_BASE, 0xFFC121E4, __READ_WRITE, PCR7_9_t);
__IOREG(PCR8_0_BASE, 0xFFC12200, __READ_WRITE, PCR8_0_t);
__IOREG(PCR8_1_BASE, 0xFFC12204, __READ_WRITE, PCR8_1_t);
__IOREG(PCR8_2_BASE, 0xFFC12208, __READ_WRITE, PCR8_2_t);
__IOREG(PCR8_3_BASE, 0xFFC1220C, __READ_WRITE, PCR8_3_t);
__IOREG(PCR8_4_BASE, 0xFFC12210, __READ_WRITE, PCR8_4_t);
__IOREG(PCR8_5_BASE, 0xFFC12214, __READ_WRITE, PCR8_5_t);
__IOREG(PCR8_6_BASE, 0xFFC12218, __READ_WRITE, PCR8_6_t);
__IOREG(PCR8_7_BASE, 0xFFC1221C, __READ_WRITE, PCR8_7_t);
__IOREG(PCR8_8_BASE, 0xFFC12220, __READ_WRITE, PCR8_8_t);
__IOREG(PCR8_9_BASE, 0xFFC12224, __READ_WRITE, PCR8_9_t);
__IOREG(PCR8_10_BASE, 0xFFC12228, __READ_WRITE, PCR8_10_t);
__IOREG(PCR8_11_BASE, 0xFFC1222C, __READ_WRITE, PCR8_11_t);
__IOREG(PCR8_12_BASE, 0xFFC12230, __READ_WRITE, PCR8_12_t);
__IOREG(PCR8_13_BASE, 0xFFC12234, __READ_WRITE, PCR8_13_t);
__IOREG(PCR8_14_BASE, 0xFFC12238, __READ_WRITE, PCR8_14_t);
__IOREG(PCR8_15_BASE, 0xFFC1223C, __READ_WRITE, PCR8_15_t);
__IOREG(PCR9_0_BASE, 0xFFC12240, __READ_WRITE, PCR9_0_t);
__IOREG(PCR9_1_BASE, 0xFFC12244, __READ_WRITE, PCR9_1_t);
__IOREG(PCR9_2_BASE, 0xFFC12248, __READ_WRITE, PCR9_2_t);
__IOREG(PCR9_3_BASE, 0xFFC1224C, __READ_WRITE, PCR9_3_t);
__IOREG(PCR9_4_BASE, 0xFFC12250, __READ_WRITE, PCR9_4_t);
__IOREG(PCR9_5_BASE, 0xFFC12254, __READ_WRITE, PCR9_5_t);
__IOREG(PCR9_6_BASE, 0xFFC12258, __READ_WRITE, PCR9_6_t);
__IOREG(PCR9_7_BASE, 0xFFC1225C, __READ_WRITE, PCR9_7_t);
__IOREG(PCR9_8_BASE, 0xFFC12260, __READ_WRITE, PCR9_8_t);
__IOREG(PIBC0_BASE, 0xFFC14000, __READ_WRITE, PIBC0_t);
__IOREG(PBDC0_BASE, 0xFFC14004, __READ_WRITE, PBDC0_t);
__IOREG(PIPC0_BASE, 0xFFC14008, __READ_WRITE, PIPC0_t);
__IOREG(PU0_BASE, 0xFFC1400C, __READ_WRITE, PU0_t);
__IOREG(PD0_BASE, 0xFFC14010, __READ_WRITE, PD0_t);
__IOREG(PODC0_BASE, 0xFFC14014, __READ_WRITE, PODC0_t);
__IOREG(PDSC0_BASE, 0xFFC14018, __READ_WRITE, PDSC0_t);
__IOREG(PIS0_BASE, 0xFFC1401C, __READ_WRITE, PIS0_t);
__IOREG(PUCC0_BASE, 0xFFC14028, __READ_WRITE, PUCC0_t);
__IOREG(PODCE0_BASE, 0xFFC14038, __READ_WRITE, PODCE0_t);
__IOREG(PIBC1_BASE, 0xFFC14040, __READ_WRITE, PIBC1_t);
__IOREG(PBDC1_BASE, 0xFFC14044, __READ_WRITE, PBDC1_t);
__IOREG(PIPC1_BASE, 0xFFC14048, __READ_WRITE, PIPC1_t);
__IOREG(PU1_BASE, 0xFFC1404C, __READ_WRITE, PU1_t);
__IOREG(PD1_BASE, 0xFFC14050, __READ_WRITE, PD1_t);
__IOREG(PODC1_BASE, 0xFFC14054, __READ_WRITE, PODC1_t);
__IOREG(PDSC1_BASE, 0xFFC14058, __READ_WRITE, PDSC1_t);
__IOREG(PIS1_BASE, 0xFFC1405C, __READ_WRITE, PIS1_t);
__IOREG(PUCC1_BASE, 0xFFC14068, __READ_WRITE, PUCC1_t);
__IOREG(PODCE1_BASE, 0xFFC14078, __READ_WRITE, PODCE1_t);
__IOREG(PIBC2_BASE, 0xFFC14080, __READ_WRITE, PIBC2_t);
__IOREG(PBDC2_BASE, 0xFFC14084, __READ_WRITE, PBDC2_t);
__IOREG(PIPC2_BASE, 0xFFC14088, __READ_WRITE, PIPC2_t);
__IOREG(PU2_BASE, 0xFFC1408C, __READ_WRITE, PU2_t);
__IOREG(PD2_BASE, 0xFFC14090, __READ_WRITE, PD2_t);
__IOREG(PODC2_BASE, 0xFFC14094, __READ_WRITE, PODC2_t);
__IOREG(PDSC2_BASE, 0xFFC14098, __READ_WRITE, PDSC2_t);
__IOREG(PIS2_BASE, 0xFFC1409C, __READ_WRITE, PIS2_t);
__IOREG(PUCC2_BASE, 0xFFC140A8, __READ_WRITE, PUCC2_t);
__IOREG(PODCE2_BASE, 0xFFC140B8, __READ_WRITE, PODCE2_t);
__IOREG(PIBC3_BASE, 0xFFC140C0, __READ_WRITE, PIBC3_t);
__IOREG(PBDC3_BASE, 0xFFC140C4, __READ_WRITE, PBDC3_t);
__IOREG(PIPC3_BASE, 0xFFC140C8, __READ_WRITE, PIPC3_t);
__IOREG(PU3_BASE, 0xFFC140CC, __READ_WRITE, PU3_t);
__IOREG(PD3_BASE, 0xFFC140D0, __READ_WRITE, PD3_t);
__IOREG(PODC3_BASE, 0xFFC140D4, __READ_WRITE, PODC3_t);
__IOREG(PDSC3_BASE, 0xFFC140D8, __READ_WRITE, PDSC3_t);
__IOREG(PIS3_BASE, 0xFFC140DC, __READ_WRITE, PIS3_t);
__IOREG(PUCC3_BASE, 0xFFC140E8, __READ_WRITE, PUCC3_t);
__IOREG(PODCE3_BASE, 0xFFC140F8, __READ_WRITE, PODCE3_t);
__IOREG(PIBC4_BASE, 0xFFC14100, __READ_WRITE, PIBC4_t);
__IOREG(PBDC4_BASE, 0xFFC14104, __READ_WRITE, PBDC4_t);
__IOREG(PIPC4_BASE, 0xFFC14108, __READ_WRITE, PIPC4_t);
__IOREG(PU4_BASE, 0xFFC1410C, __READ_WRITE, PU4_t);
__IOREG(PD4_BASE, 0xFFC14110, __READ_WRITE, PD4_t);
__IOREG(PODC4_BASE, 0xFFC14114, __READ_WRITE, PODC4_t);
__IOREG(PDSC4_BASE, 0xFFC14118, __READ_WRITE, PDSC4_t);
__IOREG(PIS4_BASE, 0xFFC1411C, __READ_WRITE, PIS4_t);
__IOREG(PUCC4_BASE, 0xFFC14128, __READ_WRITE, PUCC4_t);
__IOREG(PODCE4_BASE, 0xFFC14138, __READ_WRITE, PODCE4_t);
__IOREG(PIBC5_BASE, 0xFFC14140, __READ_WRITE, PIBC5_t);
__IOREG(PBDC5_BASE, 0xFFC14144, __READ_WRITE, PBDC5_t);
__IOREG(PIPC5_BASE, 0xFFC14148, __READ_WRITE, PIPC5_t);
__IOREG(PU5_BASE, 0xFFC1414C, __READ_WRITE, PU5_t);
__IOREG(PD5_BASE, 0xFFC14150, __READ_WRITE, PD5_t);
__IOREG(PODC5_BASE, 0xFFC14154, __READ_WRITE, PODC5_t);
__IOREG(PDSC5_BASE, 0xFFC14158, __READ_WRITE, PDSC5_t);
__IOREG(PIS5_BASE, 0xFFC1415C, __READ_WRITE, PIS5_t);
__IOREG(PUCC5_BASE, 0xFFC14168, __READ_WRITE, PUCC5_t);
__IOREG(PODCE5_BASE, 0xFFC14178, __READ_WRITE, PODCE5_t);
__IOREG(PIBC6_BASE, 0xFFC14180, __READ_WRITE, PIBC6_t);
__IOREG(PBDC6_BASE, 0xFFC14184, __READ_WRITE, PBDC6_t);
__IOREG(PIPC6_BASE, 0xFFC14188, __READ_WRITE, PIPC6_t);
__IOREG(PU6_BASE, 0xFFC1418C, __READ_WRITE, PU6_t);
__IOREG(PD6_BASE, 0xFFC14190, __READ_WRITE, PD6_t);
__IOREG(PODC6_BASE, 0xFFC14194, __READ_WRITE, PODC6_t);
__IOREG(PDSC6_BASE, 0xFFC14198, __READ_WRITE, PDSC6_t);
__IOREG(PIS6_BASE, 0xFFC1419C, __READ_WRITE, PIS6_t);
__IOREG(PUCC6_BASE, 0xFFC141A8, __READ_WRITE, PUCC6_t);
__IOREG(PODCE6_BASE, 0xFFC141B8, __READ_WRITE, PODCE6_t);
__IOREG(PIBC7_BASE, 0xFFC141C0, __READ_WRITE, PIBC7_t);
__IOREG(PBDC7_BASE, 0xFFC141C4, __READ_WRITE, PBDC7_t);
__IOREG(PIPC7_BASE, 0xFFC141C8, __READ_WRITE, PIPC7_t);
__IOREG(PU7_BASE, 0xFFC141CC, __READ_WRITE, PU7_t);
__IOREG(PD7_BASE, 0xFFC141D0, __READ_WRITE, PD7_t);
__IOREG(PODC7_BASE, 0xFFC141D4, __READ_WRITE, PODC7_t);
__IOREG(PDSC7_BASE, 0xFFC141D8, __READ_WRITE, PDSC7_t);
__IOREG(PIS7_BASE, 0xFFC141DC, __READ_WRITE, PIS7_t);
__IOREG(PUCC7_BASE, 0xFFC141E8, __READ_WRITE, PUCC7_t);
__IOREG(PODCE7_BASE, 0xFFC141F8, __READ_WRITE, PODCE7_t);
__IOREG(PIBC8_BASE, 0xFFC14200, __READ_WRITE, PIBC8_t);
__IOREG(PBDC8_BASE, 0xFFC14204, __READ_WRITE, PBDC8_t);
__IOREG(PIPC8_BASE, 0xFFC14208, __READ_WRITE, PIPC8_t);
__IOREG(PU8_BASE, 0xFFC1420C, __READ_WRITE, PU8_t);
__IOREG(PD8_BASE, 0xFFC14210, __READ_WRITE, PD8_t);
__IOREG(PODC8_BASE, 0xFFC14214, __READ_WRITE, PODC8_t);
__IOREG(PDSC8_BASE, 0xFFC14218, __READ_WRITE, PDSC8_t);
__IOREG(PIS8_BASE, 0xFFC1421C, __READ_WRITE, PIS8_t);
__IOREG(PUCC8_BASE, 0xFFC14228, __READ_WRITE, PUCC8_t);
__IOREG(PODCE8_BASE, 0xFFC14238, __READ_WRITE, PODCE8_t);
__IOREG(PIBC9_BASE, 0xFFC14240, __READ_WRITE, PIBC9_t);
__IOREG(PBDC9_BASE, 0xFFC14244, __READ_WRITE, PBDC9_t);
__IOREG(PIPC9_BASE, 0xFFC14248, __READ_WRITE, PIPC9_t);
__IOREG(PU9_BASE, 0xFFC1424C, __READ_WRITE, PU9_t);
__IOREG(PD9_BASE, 0xFFC14250, __READ_WRITE, PD9_t);
__IOREG(PODC9_BASE, 0xFFC14254, __READ_WRITE, PODC9_t);
__IOREG(PDSC9_BASE, 0xFFC14258, __READ_WRITE, PDSC9_t);
__IOREG(PIS9_BASE, 0xFFC1425C, __READ_WRITE, PIS9_t);
__IOREG(PUCC9_BASE, 0xFFC14268, __READ_WRITE, PUCC9_t);
__IOREG(PODCE9_BASE, 0xFFC14278, __READ_WRITE, PODCE9_t);
__IOREG(JP0_BASE, 0xFFC20000, __READ_WRITE, JP0_t);
__IOREG(JPSR0_BASE, 0xFFC20004, __READ_WRITE, JPSR0_t);
__IOREG(JPNOT0_BASE, 0xFFC20008, __READ_WRITE, JPNOT0_t);
__IOREG(JPPR0_BASE, 0xFFC2000C, __READ, JPPR0_t);
__IOREG(JPM0_BASE, 0xFFC20010, __READ_WRITE, JPM0_t);
__IOREG(JPMC0_BASE, 0xFFC20014, __READ_WRITE, JPMC0_t);
__IOREG(JPFCE0_BASE, 0xFFC2001C, __READ_WRITE, JPFCE0_t);
__IOREG(JPMSR0_BASE, 0xFFC20020, __READ_WRITE, JPMSR0_t);
__IOREG(JPMCSR0_BASE, 0xFFC20024, __READ_WRITE, JPMCSR0_t);
__IOREG(JPINV0_BASE, 0xFFC20030, __READ_WRITE, JPINV0_t);
__IOREG(JPCR0_0_BASE, 0xFFC22000, __READ_WRITE, JPCR0_0_t);
__IOREG(JPCR0_1_BASE, 0xFFC22004, __READ_WRITE, JPCR0_1_t);
__IOREG(JPCR0_2_BASE, 0xFFC22008, __READ_WRITE, JPCR0_2_t);
__IOREG(JPCR0_3_BASE, 0xFFC2200C, __READ_WRITE, JPCR0_3_t);
__IOREG(JPCR0_5_BASE, 0xFFC22014, __READ_WRITE, JPCR0_5_t);
__IOREG(JPCR0_6_BASE, 0xFFC22018, __READ_WRITE, JPCR0_6_t);
__IOREG(JPCR0_7_BASE, 0xFFC2201C, __READ_WRITE, JPCR0_7_t);
__IOREG(JPCR0_8_BASE, 0xFFC22020, __READ_WRITE, JPCR0_8_t);
__IOREG(JPCR0_9_BASE, 0xFFC22024, __READ_WRITE, JPCR0_9_t);
__IOREG(JPCR0_10_BASE, 0xFFC22028, __READ_WRITE, JPCR0_10_t);
__IOREG(JPCR0_13_BASE, 0xFFC2202C, __READ_WRITE, JPCR0_13_t);
__IOREG(JPCR0_14_BASE, 0xFFC22030, __READ_WRITE, JPCR0_14_t);
__IOREG(JPIBC0_BASE, 0xFFC24000, __READ_WRITE, JPIBC0_t);
__IOREG(JPBDC0_BASE, 0xFFC24004, __READ_WRITE, JPBDC0_t);
__IOREG(JPU0_BASE, 0xFFC2400C, __READ_WRITE, JPU0_t);
__IOREG(JPD0_BASE, 0xFFC24010, __READ_WRITE, JPD0_t);
__IOREG(JPODC0_BASE, 0xFFC24014, __READ_WRITE, JPODC0_t);
__IOREG(JPDSC0_BASE, 0xFFC24018, __READ_WRITE, JPDSC0_t);
__IOREG(JPIS0_BASE, 0xFFC2401C, __READ_WRITE, JPIS0_t);
__IOREG(JPUCC0_BASE, 0xFFC24028, __READ_WRITE, JPUCC0_t);
__IOREG(JPODCE0_BASE, 0xFFC24038, __READ_WRITE, JPODCE0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define P0 P0_BASE.UINT16
#define P0_P0_0 P0_BASE.BIT._P0_0
#define P0_P0_1 P0_BASE.BIT._P0_1
#define P0_P0_2 P0_BASE.BIT._P0_2
#define P0_P0_3 P0_BASE.BIT._P0_3
#define P0_P0_4 P0_BASE.BIT._P0_4
#define P0_P0_5 P0_BASE.BIT._P0_5
#define P0_P0_6 P0_BASE.BIT._P0_6
#define P0_P0_7 P0_BASE.BIT._P0_7
#define P0_P0_8 P0_BASE.BIT._P0_8
#define P0_P0_9 P0_BASE.BIT._P0_9
#define P0_P0_10 P0_BASE.BIT._P0_10
#define P0_P0_11 P0_BASE.BIT._P0_11
#define P0_P0_12 P0_BASE.BIT._P0_12
#define P0_P0_13 P0_BASE.BIT._P0_13
#define P0_P0_14 P0_BASE.BIT._P0_14
#define P0_P0_15 P0_BASE.BIT._P0_15
#define PSR0 PSR0_BASE.UINT32
#define PSR0_PSR0_0 PSR0_BASE.BIT._PSR0_0
#define PSR0_PSR0_1 PSR0_BASE.BIT._PSR0_1
#define PSR0_PSR0_2 PSR0_BASE.BIT._PSR0_2
#define PSR0_PSR0_3 PSR0_BASE.BIT._PSR0_3
#define PSR0_PSR0_4 PSR0_BASE.BIT._PSR0_4
#define PSR0_PSR0_5 PSR0_BASE.BIT._PSR0_5
#define PSR0_PSR0_6 PSR0_BASE.BIT._PSR0_6
#define PSR0_PSR0_7 PSR0_BASE.BIT._PSR0_7
#define PSR0_PSR0_8 PSR0_BASE.BIT._PSR0_8
#define PSR0_PSR0_9 PSR0_BASE.BIT._PSR0_9
#define PSR0_PSR0_10 PSR0_BASE.BIT._PSR0_10
#define PSR0_PSR0_11 PSR0_BASE.BIT._PSR0_11
#define PSR0_PSR0_12 PSR0_BASE.BIT._PSR0_12
#define PSR0_PSR0_13 PSR0_BASE.BIT._PSR0_13
#define PSR0_PSR0_14 PSR0_BASE.BIT._PSR0_14
#define PSR0_PSR0_15 PSR0_BASE.BIT._PSR0_15
#define PSR0_PSR0_16 PSR0_BASE.BIT._PSR0_16
#define PSR0_PSR0_17 PSR0_BASE.BIT._PSR0_17
#define PSR0_PSR0_18 PSR0_BASE.BIT._PSR0_18
#define PSR0_PSR0_19 PSR0_BASE.BIT._PSR0_19
#define PSR0_PSR0_20 PSR0_BASE.BIT._PSR0_20
#define PSR0_PSR0_21 PSR0_BASE.BIT._PSR0_21
#define PSR0_PSR0_22 PSR0_BASE.BIT._PSR0_22
#define PSR0_PSR0_23 PSR0_BASE.BIT._PSR0_23
#define PSR0_PSR0_24 PSR0_BASE.BIT._PSR0_24
#define PSR0_PSR0_25 PSR0_BASE.BIT._PSR0_25
#define PSR0_PSR0_26 PSR0_BASE.BIT._PSR0_26
#define PSR0_PSR0_27 PSR0_BASE.BIT._PSR0_27
#define PSR0_PSR0_28 PSR0_BASE.BIT._PSR0_28
#define PSR0_PSR0_29 PSR0_BASE.BIT._PSR0_29
#define PSR0_PSR0_30 PSR0_BASE.BIT._PSR0_30
#define PSR0_PSR0_31 PSR0_BASE.BIT._PSR0_31
#define PNOT0 PNOT0_BASE.UINT16
#define PNOT0_PNOT0_0 PNOT0_BASE.BIT._PNOT0_0
#define PNOT0_PNOT0_1 PNOT0_BASE.BIT._PNOT0_1
#define PNOT0_PNOT0_2 PNOT0_BASE.BIT._PNOT0_2
#define PNOT0_PNOT0_3 PNOT0_BASE.BIT._PNOT0_3
#define PNOT0_PNOT0_4 PNOT0_BASE.BIT._PNOT0_4
#define PNOT0_PNOT0_5 PNOT0_BASE.BIT._PNOT0_5
#define PNOT0_PNOT0_6 PNOT0_BASE.BIT._PNOT0_6
#define PNOT0_PNOT0_7 PNOT0_BASE.BIT._PNOT0_7
#define PNOT0_PNOT0_8 PNOT0_BASE.BIT._PNOT0_8
#define PNOT0_PNOT0_9 PNOT0_BASE.BIT._PNOT0_9
#define PNOT0_PNOT0_10 PNOT0_BASE.BIT._PNOT0_10
#define PNOT0_PNOT0_11 PNOT0_BASE.BIT._PNOT0_11
#define PNOT0_PNOT0_12 PNOT0_BASE.BIT._PNOT0_12
#define PNOT0_PNOT0_13 PNOT0_BASE.BIT._PNOT0_13
#define PNOT0_PNOT0_14 PNOT0_BASE.BIT._PNOT0_14
#define PNOT0_PNOT0_15 PNOT0_BASE.BIT._PNOT0_15
#define PPR0 PPR0_BASE.UINT16
#define PPR0_PPR0_0 PPR0_BASE.BIT._PPR0_0
#define PPR0_PPR0_1 PPR0_BASE.BIT._PPR0_1
#define PPR0_PPR0_2 PPR0_BASE.BIT._PPR0_2
#define PPR0_PPR0_3 PPR0_BASE.BIT._PPR0_3
#define PPR0_PPR0_4 PPR0_BASE.BIT._PPR0_4
#define PPR0_PPR0_5 PPR0_BASE.BIT._PPR0_5
#define PPR0_PPR0_6 PPR0_BASE.BIT._PPR0_6
#define PPR0_PPR0_7 PPR0_BASE.BIT._PPR0_7
#define PPR0_PPR0_8 PPR0_BASE.BIT._PPR0_8
#define PPR0_PPR0_9 PPR0_BASE.BIT._PPR0_9
#define PPR0_PPR0_10 PPR0_BASE.BIT._PPR0_10
#define PPR0_PPR0_11 PPR0_BASE.BIT._PPR0_11
#define PPR0_PPR0_12 PPR0_BASE.BIT._PPR0_12
#define PPR0_PPR0_13 PPR0_BASE.BIT._PPR0_13
#define PPR0_PPR0_14 PPR0_BASE.BIT._PPR0_14
#define PPR0_PPR0_15 PPR0_BASE.BIT._PPR0_15
#define PM0 PM0_BASE.UINT16
#define PM0_PM0_0 PM0_BASE.BIT._PM0_0
#define PM0_PM0_1 PM0_BASE.BIT._PM0_1
#define PM0_PM0_2 PM0_BASE.BIT._PM0_2
#define PM0_PM0_3 PM0_BASE.BIT._PM0_3
#define PM0_PM0_4 PM0_BASE.BIT._PM0_4
#define PM0_PM0_5 PM0_BASE.BIT._PM0_5
#define PM0_PM0_6 PM0_BASE.BIT._PM0_6
#define PM0_PM0_7 PM0_BASE.BIT._PM0_7
#define PM0_PM0_8 PM0_BASE.BIT._PM0_8
#define PM0_PM0_9 PM0_BASE.BIT._PM0_9
#define PM0_PM0_10 PM0_BASE.BIT._PM0_10
#define PM0_PM0_11 PM0_BASE.BIT._PM0_11
#define PM0_PM0_12 PM0_BASE.BIT._PM0_12
#define PM0_PM0_13 PM0_BASE.BIT._PM0_13
#define PM0_PM0_14 PM0_BASE.BIT._PM0_14
#define PM0_PM0_15 PM0_BASE.BIT._PM0_15
#define PMC0 PMC0_BASE.UINT16
#define PMC0_PMC0_0 PMC0_BASE.BIT._PMC0_0
#define PMC0_PMC0_1 PMC0_BASE.BIT._PMC0_1
#define PMC0_PMC0_2 PMC0_BASE.BIT._PMC0_2
#define PMC0_PMC0_3 PMC0_BASE.BIT._PMC0_3
#define PMC0_PMC0_4 PMC0_BASE.BIT._PMC0_4
#define PMC0_PMC0_5 PMC0_BASE.BIT._PMC0_5
#define PMC0_PMC0_6 PMC0_BASE.BIT._PMC0_6
#define PMC0_PMC0_7 PMC0_BASE.BIT._PMC0_7
#define PMC0_PMC0_8 PMC0_BASE.BIT._PMC0_8
#define PMC0_PMC0_9 PMC0_BASE.BIT._PMC0_9
#define PMC0_PMC0_10 PMC0_BASE.BIT._PMC0_10
#define PMC0_PMC0_11 PMC0_BASE.BIT._PMC0_11
#define PMC0_PMC0_12 PMC0_BASE.BIT._PMC0_12
#define PMC0_PMC0_13 PMC0_BASE.BIT._PMC0_13
#define PMC0_PMC0_14 PMC0_BASE.BIT._PMC0_14
#define PMC0_PMC0_15 PMC0_BASE.BIT._PMC0_15
#define PFC0 PFC0_BASE.UINT16
#define PFC0_PFC0_0 PFC0_BASE.BIT._PFC0_0
#define PFC0_PFC0_1 PFC0_BASE.BIT._PFC0_1
#define PFC0_PFC0_2 PFC0_BASE.BIT._PFC0_2
#define PFC0_PFC0_3 PFC0_BASE.BIT._PFC0_3
#define PFC0_PFC0_4 PFC0_BASE.BIT._PFC0_4
#define PFC0_PFC0_5 PFC0_BASE.BIT._PFC0_5
#define PFC0_PFC0_6 PFC0_BASE.BIT._PFC0_6
#define PFC0_PFC0_7 PFC0_BASE.BIT._PFC0_7
#define PFC0_PFC0_8 PFC0_BASE.BIT._PFC0_8
#define PFC0_PFC0_9 PFC0_BASE.BIT._PFC0_9
#define PFC0_PFC0_10 PFC0_BASE.BIT._PFC0_10
#define PFC0_PFC0_11 PFC0_BASE.BIT._PFC0_11
#define PFC0_PFC0_12 PFC0_BASE.BIT._PFC0_12
#define PFC0_PFC0_13 PFC0_BASE.BIT._PFC0_13
#define PFC0_PFC0_14 PFC0_BASE.BIT._PFC0_14
#define PFC0_PFC0_15 PFC0_BASE.BIT._PFC0_15
#define PFCE0 PFCE0_BASE.UINT16
#define PFCE0_PFCE0_0 PFCE0_BASE.BIT._PFCE0_0
#define PFCE0_PFCE0_1 PFCE0_BASE.BIT._PFCE0_1
#define PFCE0_PFCE0_2 PFCE0_BASE.BIT._PFCE0_2
#define PFCE0_PFCE0_3 PFCE0_BASE.BIT._PFCE0_3
#define PFCE0_PFCE0_4 PFCE0_BASE.BIT._PFCE0_4
#define PFCE0_PFCE0_5 PFCE0_BASE.BIT._PFCE0_5
#define PFCE0_PFCE0_6 PFCE0_BASE.BIT._PFCE0_6
#define PFCE0_PFCE0_7 PFCE0_BASE.BIT._PFCE0_7
#define PFCE0_PFCE0_8 PFCE0_BASE.BIT._PFCE0_8
#define PFCE0_PFCE0_9 PFCE0_BASE.BIT._PFCE0_9
#define PFCE0_PFCE0_10 PFCE0_BASE.BIT._PFCE0_10
#define PFCE0_PFCE0_11 PFCE0_BASE.BIT._PFCE0_11
#define PFCE0_PFCE0_12 PFCE0_BASE.BIT._PFCE0_12
#define PFCE0_PFCE0_13 PFCE0_BASE.BIT._PFCE0_13
#define PFCE0_PFCE0_14 PFCE0_BASE.BIT._PFCE0_14
#define PFCE0_PFCE0_15 PFCE0_BASE.BIT._PFCE0_15
#define PMSR0 PMSR0_BASE.UINT32
#define PMSR0_PMSR0_0 PMSR0_BASE.BIT._PMSR0_0
#define PMSR0_PMSR0_1 PMSR0_BASE.BIT._PMSR0_1
#define PMSR0_PMSR0_2 PMSR0_BASE.BIT._PMSR0_2
#define PMSR0_PMSR0_3 PMSR0_BASE.BIT._PMSR0_3
#define PMSR0_PMSR0_4 PMSR0_BASE.BIT._PMSR0_4
#define PMSR0_PMSR0_5 PMSR0_BASE.BIT._PMSR0_5
#define PMSR0_PMSR0_6 PMSR0_BASE.BIT._PMSR0_6
#define PMSR0_PMSR0_7 PMSR0_BASE.BIT._PMSR0_7
#define PMSR0_PMSR0_8 PMSR0_BASE.BIT._PMSR0_8
#define PMSR0_PMSR0_9 PMSR0_BASE.BIT._PMSR0_9
#define PMSR0_PMSR0_10 PMSR0_BASE.BIT._PMSR0_10
#define PMSR0_PMSR0_11 PMSR0_BASE.BIT._PMSR0_11
#define PMSR0_PMSR0_12 PMSR0_BASE.BIT._PMSR0_12
#define PMSR0_PMSR0_13 PMSR0_BASE.BIT._PMSR0_13
#define PMSR0_PMSR0_14 PMSR0_BASE.BIT._PMSR0_14
#define PMSR0_PMSR0_15 PMSR0_BASE.BIT._PMSR0_15
#define PMSR0_PMSR0_16 PMSR0_BASE.BIT._PMSR0_16
#define PMSR0_PMSR0_17 PMSR0_BASE.BIT._PMSR0_17
#define PMSR0_PMSR0_18 PMSR0_BASE.BIT._PMSR0_18
#define PMSR0_PMSR0_19 PMSR0_BASE.BIT._PMSR0_19
#define PMSR0_PMSR0_20 PMSR0_BASE.BIT._PMSR0_20
#define PMSR0_PMSR0_21 PMSR0_BASE.BIT._PMSR0_21
#define PMSR0_PMSR0_22 PMSR0_BASE.BIT._PMSR0_22
#define PMSR0_PMSR0_23 PMSR0_BASE.BIT._PMSR0_23
#define PMSR0_PMSR0_24 PMSR0_BASE.BIT._PMSR0_24
#define PMSR0_PMSR0_25 PMSR0_BASE.BIT._PMSR0_25
#define PMSR0_PMSR0_26 PMSR0_BASE.BIT._PMSR0_26
#define PMSR0_PMSR0_27 PMSR0_BASE.BIT._PMSR0_27
#define PMSR0_PMSR0_28 PMSR0_BASE.BIT._PMSR0_28
#define PMSR0_PMSR0_29 PMSR0_BASE.BIT._PMSR0_29
#define PMSR0_PMSR0_30 PMSR0_BASE.BIT._PMSR0_30
#define PMSR0_PMSR0_31 PMSR0_BASE.BIT._PMSR0_31
#define PMCSR0 PMCSR0_BASE.UINT32
#define PMCSR0_PMCSR0_0 PMCSR0_BASE.BIT._PMCSR0_0
#define PMCSR0_PMCSR0_1 PMCSR0_BASE.BIT._PMCSR0_1
#define PMCSR0_PMCSR0_2 PMCSR0_BASE.BIT._PMCSR0_2
#define PMCSR0_PMCSR0_3 PMCSR0_BASE.BIT._PMCSR0_3
#define PMCSR0_PMCSR0_4 PMCSR0_BASE.BIT._PMCSR0_4
#define PMCSR0_PMCSR0_5 PMCSR0_BASE.BIT._PMCSR0_5
#define PMCSR0_PMCSR0_6 PMCSR0_BASE.BIT._PMCSR0_6
#define PMCSR0_PMCSR0_7 PMCSR0_BASE.BIT._PMCSR0_7
#define PMCSR0_PMCSR0_8 PMCSR0_BASE.BIT._PMCSR0_8
#define PMCSR0_PMCSR0_9 PMCSR0_BASE.BIT._PMCSR0_9
#define PMCSR0_PMCSR0_10 PMCSR0_BASE.BIT._PMCSR0_10
#define PMCSR0_PMCSR0_11 PMCSR0_BASE.BIT._PMCSR0_11
#define PMCSR0_PMCSR0_12 PMCSR0_BASE.BIT._PMCSR0_12
#define PMCSR0_PMCSR0_13 PMCSR0_BASE.BIT._PMCSR0_13
#define PMCSR0_PMCSR0_14 PMCSR0_BASE.BIT._PMCSR0_14
#define PMCSR0_PMCSR0_15 PMCSR0_BASE.BIT._PMCSR0_15
#define PMCSR0_PMCSR0_16 PMCSR0_BASE.BIT._PMCSR0_16
#define PMCSR0_PMCSR0_17 PMCSR0_BASE.BIT._PMCSR0_17
#define PMCSR0_PMCSR0_18 PMCSR0_BASE.BIT._PMCSR0_18
#define PMCSR0_PMCSR0_19 PMCSR0_BASE.BIT._PMCSR0_19
#define PMCSR0_PMCSR0_20 PMCSR0_BASE.BIT._PMCSR0_20
#define PMCSR0_PMCSR0_21 PMCSR0_BASE.BIT._PMCSR0_21
#define PMCSR0_PMCSR0_22 PMCSR0_BASE.BIT._PMCSR0_22
#define PMCSR0_PMCSR0_23 PMCSR0_BASE.BIT._PMCSR0_23
#define PMCSR0_PMCSR0_24 PMCSR0_BASE.BIT._PMCSR0_24
#define PMCSR0_PMCSR0_25 PMCSR0_BASE.BIT._PMCSR0_25
#define PMCSR0_PMCSR0_26 PMCSR0_BASE.BIT._PMCSR0_26
#define PMCSR0_PMCSR0_27 PMCSR0_BASE.BIT._PMCSR0_27
#define PMCSR0_PMCSR0_28 PMCSR0_BASE.BIT._PMCSR0_28
#define PMCSR0_PMCSR0_29 PMCSR0_BASE.BIT._PMCSR0_29
#define PMCSR0_PMCSR0_30 PMCSR0_BASE.BIT._PMCSR0_30
#define PMCSR0_PMCSR0_31 PMCSR0_BASE.BIT._PMCSR0_31
#define PINV0 PINV0_BASE.UINT16
#define PINV0_PINV0_0 PINV0_BASE.BIT._PINV0_0
#define PINV0_PINV0_1 PINV0_BASE.BIT._PINV0_1
#define PINV0_PINV0_2 PINV0_BASE.BIT._PINV0_2
#define PINV0_PINV0_3 PINV0_BASE.BIT._PINV0_3
#define PINV0_PINV0_4 PINV0_BASE.BIT._PINV0_4
#define PINV0_PINV0_5 PINV0_BASE.BIT._PINV0_5
#define PINV0_PINV0_6 PINV0_BASE.BIT._PINV0_6
#define PINV0_PINV0_7 PINV0_BASE.BIT._PINV0_7
#define PINV0_PINV0_8 PINV0_BASE.BIT._PINV0_8
#define PINV0_PINV0_9 PINV0_BASE.BIT._PINV0_9
#define PINV0_PINV0_10 PINV0_BASE.BIT._PINV0_10
#define PINV0_PINV0_11 PINV0_BASE.BIT._PINV0_11
#define PINV0_PINV0_12 PINV0_BASE.BIT._PINV0_12
#define PINV0_PINV0_13 PINV0_BASE.BIT._PINV0_13
#define PINV0_PINV0_14 PINV0_BASE.BIT._PINV0_14
#define PINV0_PINV0_15 PINV0_BASE.BIT._PINV0_15
#define P1 P1_BASE.UINT16
#define P1_P1_0 P1_BASE.BIT._P1_0
#define P1_P1_1 P1_BASE.BIT._P1_1
#define P1_P1_2 P1_BASE.BIT._P1_2
#define P1_P1_3 P1_BASE.BIT._P1_3
#define P1_P1_4 P1_BASE.BIT._P1_4
#define P1_P1_5 P1_BASE.BIT._P1_5
#define P1_P1_6 P1_BASE.BIT._P1_6
#define P1_P1_7 P1_BASE.BIT._P1_7
#define P1_P1_8 P1_BASE.BIT._P1_8
#define P1_P1_9 P1_BASE.BIT._P1_9
#define P1_P1_10 P1_BASE.BIT._P1_10
#define P1_P1_11 P1_BASE.BIT._P1_11
#define P1_P1_12 P1_BASE.BIT._P1_12
#define P1_P1_13 P1_BASE.BIT._P1_13
#define P1_P1_14 P1_BASE.BIT._P1_14
#define P1_P1_15 P1_BASE.BIT._P1_15
#define PSR1 PSR1_BASE.UINT32
#define PSR1_PSR1_0 PSR1_BASE.BIT._PSR1_0
#define PSR1_PSR1_1 PSR1_BASE.BIT._PSR1_1
#define PSR1_PSR1_2 PSR1_BASE.BIT._PSR1_2
#define PSR1_PSR1_3 PSR1_BASE.BIT._PSR1_3
#define PSR1_PSR1_4 PSR1_BASE.BIT._PSR1_4
#define PSR1_PSR1_5 PSR1_BASE.BIT._PSR1_5
#define PSR1_PSR1_6 PSR1_BASE.BIT._PSR1_6
#define PSR1_PSR1_7 PSR1_BASE.BIT._PSR1_7
#define PSR1_PSR1_8 PSR1_BASE.BIT._PSR1_8
#define PSR1_PSR1_9 PSR1_BASE.BIT._PSR1_9
#define PSR1_PSR1_10 PSR1_BASE.BIT._PSR1_10
#define PSR1_PSR1_11 PSR1_BASE.BIT._PSR1_11
#define PSR1_PSR1_12 PSR1_BASE.BIT._PSR1_12
#define PSR1_PSR1_13 PSR1_BASE.BIT._PSR1_13
#define PSR1_PSR1_14 PSR1_BASE.BIT._PSR1_14
#define PSR1_PSR1_15 PSR1_BASE.BIT._PSR1_15
#define PSR1_PSR1_16 PSR1_BASE.BIT._PSR1_16
#define PSR1_PSR1_17 PSR1_BASE.BIT._PSR1_17
#define PSR1_PSR1_18 PSR1_BASE.BIT._PSR1_18
#define PSR1_PSR1_19 PSR1_BASE.BIT._PSR1_19
#define PSR1_PSR1_20 PSR1_BASE.BIT._PSR1_20
#define PSR1_PSR1_21 PSR1_BASE.BIT._PSR1_21
#define PSR1_PSR1_22 PSR1_BASE.BIT._PSR1_22
#define PSR1_PSR1_23 PSR1_BASE.BIT._PSR1_23
#define PSR1_PSR1_24 PSR1_BASE.BIT._PSR1_24
#define PSR1_PSR1_25 PSR1_BASE.BIT._PSR1_25
#define PSR1_PSR1_26 PSR1_BASE.BIT._PSR1_26
#define PSR1_PSR1_27 PSR1_BASE.BIT._PSR1_27
#define PSR1_PSR1_28 PSR1_BASE.BIT._PSR1_28
#define PSR1_PSR1_29 PSR1_BASE.BIT._PSR1_29
#define PSR1_PSR1_30 PSR1_BASE.BIT._PSR1_30
#define PSR1_PSR1_31 PSR1_BASE.BIT._PSR1_31
#define PNOT1 PNOT1_BASE.UINT16
#define PNOT1_PNOT1_0 PNOT1_BASE.BIT._PNOT1_0
#define PNOT1_PNOT1_1 PNOT1_BASE.BIT._PNOT1_1
#define PNOT1_PNOT1_2 PNOT1_BASE.BIT._PNOT1_2
#define PNOT1_PNOT1_3 PNOT1_BASE.BIT._PNOT1_3
#define PNOT1_PNOT1_4 PNOT1_BASE.BIT._PNOT1_4
#define PNOT1_PNOT1_5 PNOT1_BASE.BIT._PNOT1_5
#define PNOT1_PNOT1_6 PNOT1_BASE.BIT._PNOT1_6
#define PNOT1_PNOT1_7 PNOT1_BASE.BIT._PNOT1_7
#define PNOT1_PNOT1_8 PNOT1_BASE.BIT._PNOT1_8
#define PNOT1_PNOT1_9 PNOT1_BASE.BIT._PNOT1_9
#define PNOT1_PNOT1_10 PNOT1_BASE.BIT._PNOT1_10
#define PNOT1_PNOT1_11 PNOT1_BASE.BIT._PNOT1_11
#define PNOT1_PNOT1_12 PNOT1_BASE.BIT._PNOT1_12
#define PNOT1_PNOT1_13 PNOT1_BASE.BIT._PNOT1_13
#define PNOT1_PNOT1_14 PNOT1_BASE.BIT._PNOT1_14
#define PNOT1_PNOT1_15 PNOT1_BASE.BIT._PNOT1_15
#define PPR1 PPR1_BASE.UINT16
#define PPR1_PPR1_0 PPR1_BASE.BIT._PPR1_0
#define PPR1_PPR1_1 PPR1_BASE.BIT._PPR1_1
#define PPR1_PPR1_2 PPR1_BASE.BIT._PPR1_2
#define PPR1_PPR1_3 PPR1_BASE.BIT._PPR1_3
#define PPR1_PPR1_4 PPR1_BASE.BIT._PPR1_4
#define PPR1_PPR1_5 PPR1_BASE.BIT._PPR1_5
#define PPR1_PPR1_6 PPR1_BASE.BIT._PPR1_6
#define PPR1_PPR1_7 PPR1_BASE.BIT._PPR1_7
#define PPR1_PPR1_8 PPR1_BASE.BIT._PPR1_8
#define PPR1_PPR1_9 PPR1_BASE.BIT._PPR1_9
#define PPR1_PPR1_10 PPR1_BASE.BIT._PPR1_10
#define PPR1_PPR1_11 PPR1_BASE.BIT._PPR1_11
#define PPR1_PPR1_12 PPR1_BASE.BIT._PPR1_12
#define PPR1_PPR1_13 PPR1_BASE.BIT._PPR1_13
#define PPR1_PPR1_14 PPR1_BASE.BIT._PPR1_14
#define PPR1_PPR1_15 PPR1_BASE.BIT._PPR1_15
#define PM1 PM1_BASE.UINT16
#define PM1_PM1_0 PM1_BASE.BIT._PM1_0
#define PM1_PM1_1 PM1_BASE.BIT._PM1_1
#define PM1_PM1_2 PM1_BASE.BIT._PM1_2
#define PM1_PM1_3 PM1_BASE.BIT._PM1_3
#define PM1_PM1_4 PM1_BASE.BIT._PM1_4
#define PM1_PM1_5 PM1_BASE.BIT._PM1_5
#define PM1_PM1_6 PM1_BASE.BIT._PM1_6
#define PM1_PM1_7 PM1_BASE.BIT._PM1_7
#define PM1_PM1_8 PM1_BASE.BIT._PM1_8
#define PM1_PM1_9 PM1_BASE.BIT._PM1_9
#define PM1_PM1_10 PM1_BASE.BIT._PM1_10
#define PM1_PM1_11 PM1_BASE.BIT._PM1_11
#define PM1_PM1_12 PM1_BASE.BIT._PM1_12
#define PM1_PM1_13 PM1_BASE.BIT._PM1_13
#define PM1_PM1_14 PM1_BASE.BIT._PM1_14
#define PM1_PM1_15 PM1_BASE.BIT._PM1_15
#define PMC1 PMC1_BASE.UINT16
#define PMC1_PMC1_0 PMC1_BASE.BIT._PMC1_0
#define PMC1_PMC1_1 PMC1_BASE.BIT._PMC1_1
#define PMC1_PMC1_2 PMC1_BASE.BIT._PMC1_2
#define PMC1_PMC1_3 PMC1_BASE.BIT._PMC1_3
#define PMC1_PMC1_4 PMC1_BASE.BIT._PMC1_4
#define PMC1_PMC1_5 PMC1_BASE.BIT._PMC1_5
#define PMC1_PMC1_6 PMC1_BASE.BIT._PMC1_6
#define PMC1_PMC1_7 PMC1_BASE.BIT._PMC1_7
#define PMC1_PMC1_8 PMC1_BASE.BIT._PMC1_8
#define PMC1_PMC1_9 PMC1_BASE.BIT._PMC1_9
#define PMC1_PMC1_10 PMC1_BASE.BIT._PMC1_10
#define PMC1_PMC1_11 PMC1_BASE.BIT._PMC1_11
#define PMC1_PMC1_12 PMC1_BASE.BIT._PMC1_12
#define PMC1_PMC1_13 PMC1_BASE.BIT._PMC1_13
#define PMC1_PMC1_14 PMC1_BASE.BIT._PMC1_14
#define PMC1_PMC1_15 PMC1_BASE.BIT._PMC1_15
#define PFC1 PFC1_BASE.UINT16
#define PFC1_PFC1_0 PFC1_BASE.BIT._PFC1_0
#define PFC1_PFC1_1 PFC1_BASE.BIT._PFC1_1
#define PFC1_PFC1_2 PFC1_BASE.BIT._PFC1_2
#define PFC1_PFC1_3 PFC1_BASE.BIT._PFC1_3
#define PFC1_PFC1_4 PFC1_BASE.BIT._PFC1_4
#define PFC1_PFC1_5 PFC1_BASE.BIT._PFC1_5
#define PFC1_PFC1_6 PFC1_BASE.BIT._PFC1_6
#define PFC1_PFC1_7 PFC1_BASE.BIT._PFC1_7
#define PFC1_PFC1_8 PFC1_BASE.BIT._PFC1_8
#define PFC1_PFC1_9 PFC1_BASE.BIT._PFC1_9
#define PFC1_PFC1_10 PFC1_BASE.BIT._PFC1_10
#define PFC1_PFC1_11 PFC1_BASE.BIT._PFC1_11
#define PFC1_PFC1_12 PFC1_BASE.BIT._PFC1_12
#define PFC1_PFC1_13 PFC1_BASE.BIT._PFC1_13
#define PFC1_PFC1_14 PFC1_BASE.BIT._PFC1_14
#define PFC1_PFC1_15 PFC1_BASE.BIT._PFC1_15
#define PFCE1 PFCE1_BASE.UINT16
#define PFCE1_PFCE1_0 PFCE1_BASE.BIT._PFCE1_0
#define PFCE1_PFCE1_1 PFCE1_BASE.BIT._PFCE1_1
#define PFCE1_PFCE1_2 PFCE1_BASE.BIT._PFCE1_2
#define PFCE1_PFCE1_3 PFCE1_BASE.BIT._PFCE1_3
#define PFCE1_PFCE1_4 PFCE1_BASE.BIT._PFCE1_4
#define PFCE1_PFCE1_5 PFCE1_BASE.BIT._PFCE1_5
#define PFCE1_PFCE1_6 PFCE1_BASE.BIT._PFCE1_6
#define PFCE1_PFCE1_7 PFCE1_BASE.BIT._PFCE1_7
#define PFCE1_PFCE1_8 PFCE1_BASE.BIT._PFCE1_8
#define PFCE1_PFCE1_9 PFCE1_BASE.BIT._PFCE1_9
#define PFCE1_PFCE1_10 PFCE1_BASE.BIT._PFCE1_10
#define PFCE1_PFCE1_11 PFCE1_BASE.BIT._PFCE1_11
#define PFCE1_PFCE1_12 PFCE1_BASE.BIT._PFCE1_12
#define PFCE1_PFCE1_13 PFCE1_BASE.BIT._PFCE1_13
#define PFCE1_PFCE1_14 PFCE1_BASE.BIT._PFCE1_14
#define PFCE1_PFCE1_15 PFCE1_BASE.BIT._PFCE1_15
#define PMSR1 PMSR1_BASE.UINT32
#define PMSR1_PMSR1_0 PMSR1_BASE.BIT._PMSR1_0
#define PMSR1_PMSR1_1 PMSR1_BASE.BIT._PMSR1_1
#define PMSR1_PMSR1_2 PMSR1_BASE.BIT._PMSR1_2
#define PMSR1_PMSR1_3 PMSR1_BASE.BIT._PMSR1_3
#define PMSR1_PMSR1_4 PMSR1_BASE.BIT._PMSR1_4
#define PMSR1_PMSR1_5 PMSR1_BASE.BIT._PMSR1_5
#define PMSR1_PMSR1_6 PMSR1_BASE.BIT._PMSR1_6
#define PMSR1_PMSR1_7 PMSR1_BASE.BIT._PMSR1_7
#define PMSR1_PMSR1_8 PMSR1_BASE.BIT._PMSR1_8
#define PMSR1_PMSR1_9 PMSR1_BASE.BIT._PMSR1_9
#define PMSR1_PMSR1_10 PMSR1_BASE.BIT._PMSR1_10
#define PMSR1_PMSR1_11 PMSR1_BASE.BIT._PMSR1_11
#define PMSR1_PMSR1_12 PMSR1_BASE.BIT._PMSR1_12
#define PMSR1_PMSR1_13 PMSR1_BASE.BIT._PMSR1_13
#define PMSR1_PMSR1_14 PMSR1_BASE.BIT._PMSR1_14
#define PMSR1_PMSR1_15 PMSR1_BASE.BIT._PMSR1_15
#define PMSR1_PMSR1_16 PMSR1_BASE.BIT._PMSR1_16
#define PMSR1_PMSR1_17 PMSR1_BASE.BIT._PMSR1_17
#define PMSR1_PMSR1_18 PMSR1_BASE.BIT._PMSR1_18
#define PMSR1_PMSR1_19 PMSR1_BASE.BIT._PMSR1_19
#define PMSR1_PMSR1_20 PMSR1_BASE.BIT._PMSR1_20
#define PMSR1_PMSR1_21 PMSR1_BASE.BIT._PMSR1_21
#define PMSR1_PMSR1_22 PMSR1_BASE.BIT._PMSR1_22
#define PMSR1_PMSR1_23 PMSR1_BASE.BIT._PMSR1_23
#define PMSR1_PMSR1_24 PMSR1_BASE.BIT._PMSR1_24
#define PMSR1_PMSR1_25 PMSR1_BASE.BIT._PMSR1_25
#define PMSR1_PMSR1_26 PMSR1_BASE.BIT._PMSR1_26
#define PMSR1_PMSR1_27 PMSR1_BASE.BIT._PMSR1_27
#define PMSR1_PMSR1_28 PMSR1_BASE.BIT._PMSR1_28
#define PMSR1_PMSR1_29 PMSR1_BASE.BIT._PMSR1_29
#define PMSR1_PMSR1_30 PMSR1_BASE.BIT._PMSR1_30
#define PMSR1_PMSR1_31 PMSR1_BASE.BIT._PMSR1_31
#define PMCSR1 PMCSR1_BASE.UINT32
#define PMCSR1_PMCSR1_0 PMCSR1_BASE.BIT._PMCSR1_0
#define PMCSR1_PMCSR1_1 PMCSR1_BASE.BIT._PMCSR1_1
#define PMCSR1_PMCSR1_2 PMCSR1_BASE.BIT._PMCSR1_2
#define PMCSR1_PMCSR1_3 PMCSR1_BASE.BIT._PMCSR1_3
#define PMCSR1_PMCSR1_4 PMCSR1_BASE.BIT._PMCSR1_4
#define PMCSR1_PMCSR1_5 PMCSR1_BASE.BIT._PMCSR1_5
#define PMCSR1_PMCSR1_6 PMCSR1_BASE.BIT._PMCSR1_6
#define PMCSR1_PMCSR1_7 PMCSR1_BASE.BIT._PMCSR1_7
#define PMCSR1_PMCSR1_8 PMCSR1_BASE.BIT._PMCSR1_8
#define PMCSR1_PMCSR1_9 PMCSR1_BASE.BIT._PMCSR1_9
#define PMCSR1_PMCSR1_10 PMCSR1_BASE.BIT._PMCSR1_10
#define PMCSR1_PMCSR1_11 PMCSR1_BASE.BIT._PMCSR1_11
#define PMCSR1_PMCSR1_12 PMCSR1_BASE.BIT._PMCSR1_12
#define PMCSR1_PMCSR1_13 PMCSR1_BASE.BIT._PMCSR1_13
#define PMCSR1_PMCSR1_14 PMCSR1_BASE.BIT._PMCSR1_14
#define PMCSR1_PMCSR1_15 PMCSR1_BASE.BIT._PMCSR1_15
#define PMCSR1_PMCSR1_16 PMCSR1_BASE.BIT._PMCSR1_16
#define PMCSR1_PMCSR1_17 PMCSR1_BASE.BIT._PMCSR1_17
#define PMCSR1_PMCSR1_18 PMCSR1_BASE.BIT._PMCSR1_18
#define PMCSR1_PMCSR1_19 PMCSR1_BASE.BIT._PMCSR1_19
#define PMCSR1_PMCSR1_20 PMCSR1_BASE.BIT._PMCSR1_20
#define PMCSR1_PMCSR1_21 PMCSR1_BASE.BIT._PMCSR1_21
#define PMCSR1_PMCSR1_22 PMCSR1_BASE.BIT._PMCSR1_22
#define PMCSR1_PMCSR1_23 PMCSR1_BASE.BIT._PMCSR1_23
#define PMCSR1_PMCSR1_24 PMCSR1_BASE.BIT._PMCSR1_24
#define PMCSR1_PMCSR1_25 PMCSR1_BASE.BIT._PMCSR1_25
#define PMCSR1_PMCSR1_26 PMCSR1_BASE.BIT._PMCSR1_26
#define PMCSR1_PMCSR1_27 PMCSR1_BASE.BIT._PMCSR1_27
#define PMCSR1_PMCSR1_28 PMCSR1_BASE.BIT._PMCSR1_28
#define PMCSR1_PMCSR1_29 PMCSR1_BASE.BIT._PMCSR1_29
#define PMCSR1_PMCSR1_30 PMCSR1_BASE.BIT._PMCSR1_30
#define PMCSR1_PMCSR1_31 PMCSR1_BASE.BIT._PMCSR1_31
#define PINV1 PINV1_BASE.UINT16
#define PINV1_PINV1_0 PINV1_BASE.BIT._PINV1_0
#define PINV1_PINV1_1 PINV1_BASE.BIT._PINV1_1
#define PINV1_PINV1_2 PINV1_BASE.BIT._PINV1_2
#define PINV1_PINV1_3 PINV1_BASE.BIT._PINV1_3
#define PINV1_PINV1_4 PINV1_BASE.BIT._PINV1_4
#define PINV1_PINV1_5 PINV1_BASE.BIT._PINV1_5
#define PINV1_PINV1_6 PINV1_BASE.BIT._PINV1_6
#define PINV1_PINV1_7 PINV1_BASE.BIT._PINV1_7
#define PINV1_PINV1_8 PINV1_BASE.BIT._PINV1_8
#define PINV1_PINV1_9 PINV1_BASE.BIT._PINV1_9
#define PINV1_PINV1_10 PINV1_BASE.BIT._PINV1_10
#define PINV1_PINV1_11 PINV1_BASE.BIT._PINV1_11
#define PINV1_PINV1_12 PINV1_BASE.BIT._PINV1_12
#define PINV1_PINV1_13 PINV1_BASE.BIT._PINV1_13
#define PINV1_PINV1_14 PINV1_BASE.BIT._PINV1_14
#define PINV1_PINV1_15 PINV1_BASE.BIT._PINV1_15
#define P2 P2_BASE.UINT16
#define P2_P2_0 P2_BASE.BIT._P2_0
#define P2_P2_1 P2_BASE.BIT._P2_1
#define P2_P2_2 P2_BASE.BIT._P2_2
#define P2_P2_3 P2_BASE.BIT._P2_3
#define P2_P2_4 P2_BASE.BIT._P2_4
#define P2_P2_5 P2_BASE.BIT._P2_5
#define P2_P2_6 P2_BASE.BIT._P2_6
#define P2_P2_7 P2_BASE.BIT._P2_7
#define P2_P2_8 P2_BASE.BIT._P2_8
#define P2_P2_9 P2_BASE.BIT._P2_9
#define P2_P2_10 P2_BASE.BIT._P2_10
#define P2_P2_11 P2_BASE.BIT._P2_11
#define P2_P2_12 P2_BASE.BIT._P2_12
#define P2_P2_13 P2_BASE.BIT._P2_13
#define P2_P2_14 P2_BASE.BIT._P2_14
#define P2_P2_15 P2_BASE.BIT._P2_15
#define PSR2 PSR2_BASE.UINT32
#define PSR2_PSR2_0 PSR2_BASE.BIT._PSR2_0
#define PSR2_PSR2_1 PSR2_BASE.BIT._PSR2_1
#define PSR2_PSR2_2 PSR2_BASE.BIT._PSR2_2
#define PSR2_PSR2_3 PSR2_BASE.BIT._PSR2_3
#define PSR2_PSR2_4 PSR2_BASE.BIT._PSR2_4
#define PSR2_PSR2_5 PSR2_BASE.BIT._PSR2_5
#define PSR2_PSR2_6 PSR2_BASE.BIT._PSR2_6
#define PSR2_PSR2_7 PSR2_BASE.BIT._PSR2_7
#define PSR2_PSR2_8 PSR2_BASE.BIT._PSR2_8
#define PSR2_PSR2_9 PSR2_BASE.BIT._PSR2_9
#define PSR2_PSR2_10 PSR2_BASE.BIT._PSR2_10
#define PSR2_PSR2_11 PSR2_BASE.BIT._PSR2_11
#define PSR2_PSR2_12 PSR2_BASE.BIT._PSR2_12
#define PSR2_PSR2_13 PSR2_BASE.BIT._PSR2_13
#define PSR2_PSR2_14 PSR2_BASE.BIT._PSR2_14
#define PSR2_PSR2_15 PSR2_BASE.BIT._PSR2_15
#define PSR2_PSR2_16 PSR2_BASE.BIT._PSR2_16
#define PSR2_PSR2_17 PSR2_BASE.BIT._PSR2_17
#define PSR2_PSR2_18 PSR2_BASE.BIT._PSR2_18
#define PSR2_PSR2_19 PSR2_BASE.BIT._PSR2_19
#define PSR2_PSR2_20 PSR2_BASE.BIT._PSR2_20
#define PSR2_PSR2_21 PSR2_BASE.BIT._PSR2_21
#define PSR2_PSR2_22 PSR2_BASE.BIT._PSR2_22
#define PSR2_PSR2_23 PSR2_BASE.BIT._PSR2_23
#define PSR2_PSR2_24 PSR2_BASE.BIT._PSR2_24
#define PSR2_PSR2_25 PSR2_BASE.BIT._PSR2_25
#define PSR2_PSR2_26 PSR2_BASE.BIT._PSR2_26
#define PSR2_PSR2_27 PSR2_BASE.BIT._PSR2_27
#define PSR2_PSR2_28 PSR2_BASE.BIT._PSR2_28
#define PSR2_PSR2_29 PSR2_BASE.BIT._PSR2_29
#define PSR2_PSR2_30 PSR2_BASE.BIT._PSR2_30
#define PSR2_PSR2_31 PSR2_BASE.BIT._PSR2_31
#define PNOT2 PNOT2_BASE.UINT16
#define PNOT2_PNOT2_0 PNOT2_BASE.BIT._PNOT2_0
#define PNOT2_PNOT2_1 PNOT2_BASE.BIT._PNOT2_1
#define PNOT2_PNOT2_2 PNOT2_BASE.BIT._PNOT2_2
#define PNOT2_PNOT2_3 PNOT2_BASE.BIT._PNOT2_3
#define PNOT2_PNOT2_4 PNOT2_BASE.BIT._PNOT2_4
#define PNOT2_PNOT2_5 PNOT2_BASE.BIT._PNOT2_5
#define PNOT2_PNOT2_6 PNOT2_BASE.BIT._PNOT2_6
#define PNOT2_PNOT2_7 PNOT2_BASE.BIT._PNOT2_7
#define PNOT2_PNOT2_8 PNOT2_BASE.BIT._PNOT2_8
#define PNOT2_PNOT2_9 PNOT2_BASE.BIT._PNOT2_9
#define PNOT2_PNOT2_10 PNOT2_BASE.BIT._PNOT2_10
#define PNOT2_PNOT2_11 PNOT2_BASE.BIT._PNOT2_11
#define PNOT2_PNOT2_12 PNOT2_BASE.BIT._PNOT2_12
#define PNOT2_PNOT2_13 PNOT2_BASE.BIT._PNOT2_13
#define PNOT2_PNOT2_14 PNOT2_BASE.BIT._PNOT2_14
#define PNOT2_PNOT2_15 PNOT2_BASE.BIT._PNOT2_15
#define PPR2 PPR2_BASE.UINT16
#define PPR2_PPR2_0 PPR2_BASE.BIT._PPR2_0
#define PPR2_PPR2_1 PPR2_BASE.BIT._PPR2_1
#define PPR2_PPR2_2 PPR2_BASE.BIT._PPR2_2
#define PPR2_PPR2_3 PPR2_BASE.BIT._PPR2_3
#define PPR2_PPR2_4 PPR2_BASE.BIT._PPR2_4
#define PPR2_PPR2_5 PPR2_BASE.BIT._PPR2_5
#define PPR2_PPR2_6 PPR2_BASE.BIT._PPR2_6
#define PPR2_PPR2_7 PPR2_BASE.BIT._PPR2_7
#define PPR2_PPR2_8 PPR2_BASE.BIT._PPR2_8
#define PPR2_PPR2_9 PPR2_BASE.BIT._PPR2_9
#define PPR2_PPR2_10 PPR2_BASE.BIT._PPR2_10
#define PPR2_PPR2_11 PPR2_BASE.BIT._PPR2_11
#define PPR2_PPR2_12 PPR2_BASE.BIT._PPR2_12
#define PPR2_PPR2_13 PPR2_BASE.BIT._PPR2_13
#define PPR2_PPR2_14 PPR2_BASE.BIT._PPR2_14
#define PPR2_PPR2_15 PPR2_BASE.BIT._PPR2_15
#define PM2 PM2_BASE.UINT16
#define PM2_PM2_0 PM2_BASE.BIT._PM2_0
#define PM2_PM2_1 PM2_BASE.BIT._PM2_1
#define PM2_PM2_2 PM2_BASE.BIT._PM2_2
#define PM2_PM2_3 PM2_BASE.BIT._PM2_3
#define PM2_PM2_4 PM2_BASE.BIT._PM2_4
#define PM2_PM2_5 PM2_BASE.BIT._PM2_5
#define PM2_PM2_6 PM2_BASE.BIT._PM2_6
#define PM2_PM2_7 PM2_BASE.BIT._PM2_7
#define PM2_PM2_8 PM2_BASE.BIT._PM2_8
#define PM2_PM2_9 PM2_BASE.BIT._PM2_9
#define PM2_PM2_10 PM2_BASE.BIT._PM2_10
#define PM2_PM2_11 PM2_BASE.BIT._PM2_11
#define PM2_PM2_12 PM2_BASE.BIT._PM2_12
#define PM2_PM2_13 PM2_BASE.BIT._PM2_13
#define PM2_PM2_14 PM2_BASE.BIT._PM2_14
#define PM2_PM2_15 PM2_BASE.BIT._PM2_15
#define PMC2 PMC2_BASE.UINT16
#define PMC2_PMC2_0 PMC2_BASE.BIT._PMC2_0
#define PMC2_PMC2_1 PMC2_BASE.BIT._PMC2_1
#define PMC2_PMC2_2 PMC2_BASE.BIT._PMC2_2
#define PMC2_PMC2_3 PMC2_BASE.BIT._PMC2_3
#define PMC2_PMC2_4 PMC2_BASE.BIT._PMC2_4
#define PMC2_PMC2_5 PMC2_BASE.BIT._PMC2_5
#define PMC2_PMC2_6 PMC2_BASE.BIT._PMC2_6
#define PMC2_PMC2_7 PMC2_BASE.BIT._PMC2_7
#define PMC2_PMC2_8 PMC2_BASE.BIT._PMC2_8
#define PMC2_PMC2_9 PMC2_BASE.BIT._PMC2_9
#define PMC2_PMC2_10 PMC2_BASE.BIT._PMC2_10
#define PMC2_PMC2_11 PMC2_BASE.BIT._PMC2_11
#define PMC2_PMC2_12 PMC2_BASE.BIT._PMC2_12
#define PMC2_PMC2_13 PMC2_BASE.BIT._PMC2_13
#define PMC2_PMC2_14 PMC2_BASE.BIT._PMC2_14
#define PMC2_PMC2_15 PMC2_BASE.BIT._PMC2_15
#define PFC2 PFC2_BASE.UINT16
#define PFC2_PFC2_0 PFC2_BASE.BIT._PFC2_0
#define PFC2_PFC2_1 PFC2_BASE.BIT._PFC2_1
#define PFC2_PFC2_2 PFC2_BASE.BIT._PFC2_2
#define PFC2_PFC2_3 PFC2_BASE.BIT._PFC2_3
#define PFC2_PFC2_4 PFC2_BASE.BIT._PFC2_4
#define PFC2_PFC2_5 PFC2_BASE.BIT._PFC2_5
#define PFC2_PFC2_6 PFC2_BASE.BIT._PFC2_6
#define PFC2_PFC2_7 PFC2_BASE.BIT._PFC2_7
#define PFC2_PFC2_8 PFC2_BASE.BIT._PFC2_8
#define PFC2_PFC2_9 PFC2_BASE.BIT._PFC2_9
#define PFC2_PFC2_10 PFC2_BASE.BIT._PFC2_10
#define PFC2_PFC2_11 PFC2_BASE.BIT._PFC2_11
#define PFC2_PFC2_12 PFC2_BASE.BIT._PFC2_12
#define PFC2_PFC2_13 PFC2_BASE.BIT._PFC2_13
#define PFC2_PFC2_14 PFC2_BASE.BIT._PFC2_14
#define PFC2_PFC2_15 PFC2_BASE.BIT._PFC2_15
#define PFCE2 PFCE2_BASE.UINT16
#define PFCE2_PFCE2_0 PFCE2_BASE.BIT._PFCE2_0
#define PFCE2_PFCE2_1 PFCE2_BASE.BIT._PFCE2_1
#define PFCE2_PFCE2_2 PFCE2_BASE.BIT._PFCE2_2
#define PFCE2_PFCE2_3 PFCE2_BASE.BIT._PFCE2_3
#define PFCE2_PFCE2_4 PFCE2_BASE.BIT._PFCE2_4
#define PFCE2_PFCE2_5 PFCE2_BASE.BIT._PFCE2_5
#define PFCE2_PFCE2_6 PFCE2_BASE.BIT._PFCE2_6
#define PFCE2_PFCE2_7 PFCE2_BASE.BIT._PFCE2_7
#define PFCE2_PFCE2_8 PFCE2_BASE.BIT._PFCE2_8
#define PFCE2_PFCE2_9 PFCE2_BASE.BIT._PFCE2_9
#define PFCE2_PFCE2_10 PFCE2_BASE.BIT._PFCE2_10
#define PFCE2_PFCE2_11 PFCE2_BASE.BIT._PFCE2_11
#define PFCE2_PFCE2_12 PFCE2_BASE.BIT._PFCE2_12
#define PFCE2_PFCE2_13 PFCE2_BASE.BIT._PFCE2_13
#define PFCE2_PFCE2_14 PFCE2_BASE.BIT._PFCE2_14
#define PFCE2_PFCE2_15 PFCE2_BASE.BIT._PFCE2_15
#define PMSR2 PMSR2_BASE.UINT32
#define PMSR2_PMSR2_0 PMSR2_BASE.BIT._PMSR2_0
#define PMSR2_PMSR2_1 PMSR2_BASE.BIT._PMSR2_1
#define PMSR2_PMSR2_2 PMSR2_BASE.BIT._PMSR2_2
#define PMSR2_PMSR2_3 PMSR2_BASE.BIT._PMSR2_3
#define PMSR2_PMSR2_4 PMSR2_BASE.BIT._PMSR2_4
#define PMSR2_PMSR2_5 PMSR2_BASE.BIT._PMSR2_5
#define PMSR2_PMSR2_6 PMSR2_BASE.BIT._PMSR2_6
#define PMSR2_PMSR2_7 PMSR2_BASE.BIT._PMSR2_7
#define PMSR2_PMSR2_8 PMSR2_BASE.BIT._PMSR2_8
#define PMSR2_PMSR2_9 PMSR2_BASE.BIT._PMSR2_9
#define PMSR2_PMSR2_10 PMSR2_BASE.BIT._PMSR2_10
#define PMSR2_PMSR2_11 PMSR2_BASE.BIT._PMSR2_11
#define PMSR2_PMSR2_12 PMSR2_BASE.BIT._PMSR2_12
#define PMSR2_PMSR2_13 PMSR2_BASE.BIT._PMSR2_13
#define PMSR2_PMSR2_14 PMSR2_BASE.BIT._PMSR2_14
#define PMSR2_PMSR2_15 PMSR2_BASE.BIT._PMSR2_15
#define PMSR2_PMSR2_16 PMSR2_BASE.BIT._PMSR2_16
#define PMSR2_PMSR2_17 PMSR2_BASE.BIT._PMSR2_17
#define PMSR2_PMSR2_18 PMSR2_BASE.BIT._PMSR2_18
#define PMSR2_PMSR2_19 PMSR2_BASE.BIT._PMSR2_19
#define PMSR2_PMSR2_20 PMSR2_BASE.BIT._PMSR2_20
#define PMSR2_PMSR2_21 PMSR2_BASE.BIT._PMSR2_21
#define PMSR2_PMSR2_22 PMSR2_BASE.BIT._PMSR2_22
#define PMSR2_PMSR2_23 PMSR2_BASE.BIT._PMSR2_23
#define PMSR2_PMSR2_24 PMSR2_BASE.BIT._PMSR2_24
#define PMSR2_PMSR2_25 PMSR2_BASE.BIT._PMSR2_25
#define PMSR2_PMSR2_26 PMSR2_BASE.BIT._PMSR2_26
#define PMSR2_PMSR2_27 PMSR2_BASE.BIT._PMSR2_27
#define PMSR2_PMSR2_28 PMSR2_BASE.BIT._PMSR2_28
#define PMSR2_PMSR2_29 PMSR2_BASE.BIT._PMSR2_29
#define PMSR2_PMSR2_30 PMSR2_BASE.BIT._PMSR2_30
#define PMSR2_PMSR2_31 PMSR2_BASE.BIT._PMSR2_31
#define PMCSR2 PMCSR2_BASE.UINT32
#define PMCSR2_PMCSR2_0 PMCSR2_BASE.BIT._PMCSR2_0
#define PMCSR2_PMCSR2_1 PMCSR2_BASE.BIT._PMCSR2_1
#define PMCSR2_PMCSR2_2 PMCSR2_BASE.BIT._PMCSR2_2
#define PMCSR2_PMCSR2_3 PMCSR2_BASE.BIT._PMCSR2_3
#define PMCSR2_PMCSR2_4 PMCSR2_BASE.BIT._PMCSR2_4
#define PMCSR2_PMCSR2_5 PMCSR2_BASE.BIT._PMCSR2_5
#define PMCSR2_PMCSR2_6 PMCSR2_BASE.BIT._PMCSR2_6
#define PMCSR2_PMCSR2_7 PMCSR2_BASE.BIT._PMCSR2_7
#define PMCSR2_PMCSR2_8 PMCSR2_BASE.BIT._PMCSR2_8
#define PMCSR2_PMCSR2_9 PMCSR2_BASE.BIT._PMCSR2_9
#define PMCSR2_PMCSR2_10 PMCSR2_BASE.BIT._PMCSR2_10
#define PMCSR2_PMCSR2_11 PMCSR2_BASE.BIT._PMCSR2_11
#define PMCSR2_PMCSR2_12 PMCSR2_BASE.BIT._PMCSR2_12
#define PMCSR2_PMCSR2_13 PMCSR2_BASE.BIT._PMCSR2_13
#define PMCSR2_PMCSR2_14 PMCSR2_BASE.BIT._PMCSR2_14
#define PMCSR2_PMCSR2_15 PMCSR2_BASE.BIT._PMCSR2_15
#define PMCSR2_PMCSR2_16 PMCSR2_BASE.BIT._PMCSR2_16
#define PMCSR2_PMCSR2_17 PMCSR2_BASE.BIT._PMCSR2_17
#define PMCSR2_PMCSR2_18 PMCSR2_BASE.BIT._PMCSR2_18
#define PMCSR2_PMCSR2_19 PMCSR2_BASE.BIT._PMCSR2_19
#define PMCSR2_PMCSR2_20 PMCSR2_BASE.BIT._PMCSR2_20
#define PMCSR2_PMCSR2_21 PMCSR2_BASE.BIT._PMCSR2_21
#define PMCSR2_PMCSR2_22 PMCSR2_BASE.BIT._PMCSR2_22
#define PMCSR2_PMCSR2_23 PMCSR2_BASE.BIT._PMCSR2_23
#define PMCSR2_PMCSR2_24 PMCSR2_BASE.BIT._PMCSR2_24
#define PMCSR2_PMCSR2_25 PMCSR2_BASE.BIT._PMCSR2_25
#define PMCSR2_PMCSR2_26 PMCSR2_BASE.BIT._PMCSR2_26
#define PMCSR2_PMCSR2_27 PMCSR2_BASE.BIT._PMCSR2_27
#define PMCSR2_PMCSR2_28 PMCSR2_BASE.BIT._PMCSR2_28
#define PMCSR2_PMCSR2_29 PMCSR2_BASE.BIT._PMCSR2_29
#define PMCSR2_PMCSR2_30 PMCSR2_BASE.BIT._PMCSR2_30
#define PMCSR2_PMCSR2_31 PMCSR2_BASE.BIT._PMCSR2_31
#define PINV2 PINV2_BASE.UINT16
#define PINV2_PINV2_0 PINV2_BASE.BIT._PINV2_0
#define PINV2_PINV2_1 PINV2_BASE.BIT._PINV2_1
#define PINV2_PINV2_2 PINV2_BASE.BIT._PINV2_2
#define PINV2_PINV2_3 PINV2_BASE.BIT._PINV2_3
#define PINV2_PINV2_4 PINV2_BASE.BIT._PINV2_4
#define PINV2_PINV2_5 PINV2_BASE.BIT._PINV2_5
#define PINV2_PINV2_6 PINV2_BASE.BIT._PINV2_6
#define PINV2_PINV2_7 PINV2_BASE.BIT._PINV2_7
#define PINV2_PINV2_8 PINV2_BASE.BIT._PINV2_8
#define PINV2_PINV2_9 PINV2_BASE.BIT._PINV2_9
#define PINV2_PINV2_10 PINV2_BASE.BIT._PINV2_10
#define PINV2_PINV2_11 PINV2_BASE.BIT._PINV2_11
#define PINV2_PINV2_12 PINV2_BASE.BIT._PINV2_12
#define PINV2_PINV2_13 PINV2_BASE.BIT._PINV2_13
#define PINV2_PINV2_14 PINV2_BASE.BIT._PINV2_14
#define PINV2_PINV2_15 PINV2_BASE.BIT._PINV2_15
#define P3 P3_BASE.UINT16
#define P3_P3_0 P3_BASE.BIT._P3_0
#define P3_P3_1 P3_BASE.BIT._P3_1
#define P3_P3_2 P3_BASE.BIT._P3_2
#define P3_P3_3 P3_BASE.BIT._P3_3
#define P3_P3_4 P3_BASE.BIT._P3_4
#define P3_P3_5 P3_BASE.BIT._P3_5
#define P3_P3_6 P3_BASE.BIT._P3_6
#define P3_P3_7 P3_BASE.BIT._P3_7
#define P3_P3_8 P3_BASE.BIT._P3_8
#define P3_P3_9 P3_BASE.BIT._P3_9
#define P3_P3_10 P3_BASE.BIT._P3_10
#define P3_P3_11 P3_BASE.BIT._P3_11
#define P3_P3_12 P3_BASE.BIT._P3_12
#define P3_P3_13 P3_BASE.BIT._P3_13
#define P3_P3_14 P3_BASE.BIT._P3_14
#define P3_P3_15 P3_BASE.BIT._P3_15
#define PSR3 PSR3_BASE.UINT32
#define PSR3_PSR3_0 PSR3_BASE.BIT._PSR3_0
#define PSR3_PSR3_1 PSR3_BASE.BIT._PSR3_1
#define PSR3_PSR3_2 PSR3_BASE.BIT._PSR3_2
#define PSR3_PSR3_3 PSR3_BASE.BIT._PSR3_3
#define PSR3_PSR3_4 PSR3_BASE.BIT._PSR3_4
#define PSR3_PSR3_5 PSR3_BASE.BIT._PSR3_5
#define PSR3_PSR3_6 PSR3_BASE.BIT._PSR3_6
#define PSR3_PSR3_7 PSR3_BASE.BIT._PSR3_7
#define PSR3_PSR3_8 PSR3_BASE.BIT._PSR3_8
#define PSR3_PSR3_9 PSR3_BASE.BIT._PSR3_9
#define PSR3_PSR3_10 PSR3_BASE.BIT._PSR3_10
#define PSR3_PSR3_11 PSR3_BASE.BIT._PSR3_11
#define PSR3_PSR3_12 PSR3_BASE.BIT._PSR3_12
#define PSR3_PSR3_13 PSR3_BASE.BIT._PSR3_13
#define PSR3_PSR3_14 PSR3_BASE.BIT._PSR3_14
#define PSR3_PSR3_15 PSR3_BASE.BIT._PSR3_15
#define PSR3_PSR3_16 PSR3_BASE.BIT._PSR3_16
#define PSR3_PSR3_17 PSR3_BASE.BIT._PSR3_17
#define PSR3_PSR3_18 PSR3_BASE.BIT._PSR3_18
#define PSR3_PSR3_19 PSR3_BASE.BIT._PSR3_19
#define PSR3_PSR3_20 PSR3_BASE.BIT._PSR3_20
#define PSR3_PSR3_21 PSR3_BASE.BIT._PSR3_21
#define PSR3_PSR3_22 PSR3_BASE.BIT._PSR3_22
#define PSR3_PSR3_23 PSR3_BASE.BIT._PSR3_23
#define PSR3_PSR3_24 PSR3_BASE.BIT._PSR3_24
#define PSR3_PSR3_25 PSR3_BASE.BIT._PSR3_25
#define PSR3_PSR3_26 PSR3_BASE.BIT._PSR3_26
#define PSR3_PSR3_27 PSR3_BASE.BIT._PSR3_27
#define PSR3_PSR3_28 PSR3_BASE.BIT._PSR3_28
#define PSR3_PSR3_29 PSR3_BASE.BIT._PSR3_29
#define PSR3_PSR3_30 PSR3_BASE.BIT._PSR3_30
#define PSR3_PSR3_31 PSR3_BASE.BIT._PSR3_31
#define PNOT3 PNOT3_BASE.UINT16
#define PNOT3_PNOT3_0 PNOT3_BASE.BIT._PNOT3_0
#define PNOT3_PNOT3_1 PNOT3_BASE.BIT._PNOT3_1
#define PNOT3_PNOT3_2 PNOT3_BASE.BIT._PNOT3_2
#define PNOT3_PNOT3_3 PNOT3_BASE.BIT._PNOT3_3
#define PNOT3_PNOT3_4 PNOT3_BASE.BIT._PNOT3_4
#define PNOT3_PNOT3_5 PNOT3_BASE.BIT._PNOT3_5
#define PNOT3_PNOT3_6 PNOT3_BASE.BIT._PNOT3_6
#define PNOT3_PNOT3_7 PNOT3_BASE.BIT._PNOT3_7
#define PNOT3_PNOT3_8 PNOT3_BASE.BIT._PNOT3_8
#define PNOT3_PNOT3_9 PNOT3_BASE.BIT._PNOT3_9
#define PNOT3_PNOT3_10 PNOT3_BASE.BIT._PNOT3_10
#define PNOT3_PNOT3_11 PNOT3_BASE.BIT._PNOT3_11
#define PNOT3_PNOT3_12 PNOT3_BASE.BIT._PNOT3_12
#define PNOT3_PNOT3_13 PNOT3_BASE.BIT._PNOT3_13
#define PNOT3_PNOT3_14 PNOT3_BASE.BIT._PNOT3_14
#define PNOT3_PNOT3_15 PNOT3_BASE.BIT._PNOT3_15
#define PPR3 PPR3_BASE.UINT16
#define PPR3_PPR3_0 PPR3_BASE.BIT._PPR3_0
#define PPR3_PPR3_1 PPR3_BASE.BIT._PPR3_1
#define PPR3_PPR3_2 PPR3_BASE.BIT._PPR3_2
#define PPR3_PPR3_3 PPR3_BASE.BIT._PPR3_3
#define PPR3_PPR3_4 PPR3_BASE.BIT._PPR3_4
#define PPR3_PPR3_5 PPR3_BASE.BIT._PPR3_5
#define PPR3_PPR3_6 PPR3_BASE.BIT._PPR3_6
#define PPR3_PPR3_7 PPR3_BASE.BIT._PPR3_7
#define PPR3_PPR3_8 PPR3_BASE.BIT._PPR3_8
#define PPR3_PPR3_9 PPR3_BASE.BIT._PPR3_9
#define PPR3_PPR3_10 PPR3_BASE.BIT._PPR3_10
#define PPR3_PPR3_11 PPR3_BASE.BIT._PPR3_11
#define PPR3_PPR3_12 PPR3_BASE.BIT._PPR3_12
#define PPR3_PPR3_13 PPR3_BASE.BIT._PPR3_13
#define PPR3_PPR3_14 PPR3_BASE.BIT._PPR3_14
#define PPR3_PPR3_15 PPR3_BASE.BIT._PPR3_15
#define PM3 PM3_BASE.UINT16
#define PM3_PM3_0 PM3_BASE.BIT._PM3_0
#define PM3_PM3_1 PM3_BASE.BIT._PM3_1
#define PM3_PM3_2 PM3_BASE.BIT._PM3_2
#define PM3_PM3_3 PM3_BASE.BIT._PM3_3
#define PM3_PM3_4 PM3_BASE.BIT._PM3_4
#define PM3_PM3_5 PM3_BASE.BIT._PM3_5
#define PM3_PM3_6 PM3_BASE.BIT._PM3_6
#define PM3_PM3_7 PM3_BASE.BIT._PM3_7
#define PM3_PM3_8 PM3_BASE.BIT._PM3_8
#define PM3_PM3_9 PM3_BASE.BIT._PM3_9
#define PM3_PM3_10 PM3_BASE.BIT._PM3_10
#define PM3_PM3_11 PM3_BASE.BIT._PM3_11
#define PM3_PM3_12 PM3_BASE.BIT._PM3_12
#define PM3_PM3_13 PM3_BASE.BIT._PM3_13
#define PM3_PM3_14 PM3_BASE.BIT._PM3_14
#define PM3_PM3_15 PM3_BASE.BIT._PM3_15
#define PMC3 PMC3_BASE.UINT16
#define PMC3_PMC3_0 PMC3_BASE.BIT._PMC3_0
#define PMC3_PMC3_1 PMC3_BASE.BIT._PMC3_1
#define PMC3_PMC3_2 PMC3_BASE.BIT._PMC3_2
#define PMC3_PMC3_3 PMC3_BASE.BIT._PMC3_3
#define PMC3_PMC3_4 PMC3_BASE.BIT._PMC3_4
#define PMC3_PMC3_5 PMC3_BASE.BIT._PMC3_5
#define PMC3_PMC3_6 PMC3_BASE.BIT._PMC3_6
#define PMC3_PMC3_7 PMC3_BASE.BIT._PMC3_7
#define PMC3_PMC3_8 PMC3_BASE.BIT._PMC3_8
#define PMC3_PMC3_9 PMC3_BASE.BIT._PMC3_9
#define PMC3_PMC3_10 PMC3_BASE.BIT._PMC3_10
#define PMC3_PMC3_11 PMC3_BASE.BIT._PMC3_11
#define PMC3_PMC3_12 PMC3_BASE.BIT._PMC3_12
#define PMC3_PMC3_13 PMC3_BASE.BIT._PMC3_13
#define PMC3_PMC3_14 PMC3_BASE.BIT._PMC3_14
#define PMC3_PMC3_15 PMC3_BASE.BIT._PMC3_15
#define PFC3 PFC3_BASE.UINT16
#define PFC3_PFC3_0 PFC3_BASE.BIT._PFC3_0
#define PFC3_PFC3_1 PFC3_BASE.BIT._PFC3_1
#define PFC3_PFC3_2 PFC3_BASE.BIT._PFC3_2
#define PFC3_PFC3_3 PFC3_BASE.BIT._PFC3_3
#define PFC3_PFC3_4 PFC3_BASE.BIT._PFC3_4
#define PFC3_PFC3_5 PFC3_BASE.BIT._PFC3_5
#define PFC3_PFC3_6 PFC3_BASE.BIT._PFC3_6
#define PFC3_PFC3_7 PFC3_BASE.BIT._PFC3_7
#define PFC3_PFC3_8 PFC3_BASE.BIT._PFC3_8
#define PFC3_PFC3_9 PFC3_BASE.BIT._PFC3_9
#define PFC3_PFC3_10 PFC3_BASE.BIT._PFC3_10
#define PFC3_PFC3_11 PFC3_BASE.BIT._PFC3_11
#define PFC3_PFC3_12 PFC3_BASE.BIT._PFC3_12
#define PFC3_PFC3_13 PFC3_BASE.BIT._PFC3_13
#define PFC3_PFC3_14 PFC3_BASE.BIT._PFC3_14
#define PFC3_PFC3_15 PFC3_BASE.BIT._PFC3_15
#define PFCE3 PFCE3_BASE.UINT16
#define PFCE3_PFCE3_0 PFCE3_BASE.BIT._PFCE3_0
#define PFCE3_PFCE3_1 PFCE3_BASE.BIT._PFCE3_1
#define PFCE3_PFCE3_2 PFCE3_BASE.BIT._PFCE3_2
#define PFCE3_PFCE3_3 PFCE3_BASE.BIT._PFCE3_3
#define PFCE3_PFCE3_4 PFCE3_BASE.BIT._PFCE3_4
#define PFCE3_PFCE3_5 PFCE3_BASE.BIT._PFCE3_5
#define PFCE3_PFCE3_6 PFCE3_BASE.BIT._PFCE3_6
#define PFCE3_PFCE3_7 PFCE3_BASE.BIT._PFCE3_7
#define PFCE3_PFCE3_8 PFCE3_BASE.BIT._PFCE3_8
#define PFCE3_PFCE3_9 PFCE3_BASE.BIT._PFCE3_9
#define PFCE3_PFCE3_10 PFCE3_BASE.BIT._PFCE3_10
#define PFCE3_PFCE3_11 PFCE3_BASE.BIT._PFCE3_11
#define PFCE3_PFCE3_12 PFCE3_BASE.BIT._PFCE3_12
#define PFCE3_PFCE3_13 PFCE3_BASE.BIT._PFCE3_13
#define PFCE3_PFCE3_14 PFCE3_BASE.BIT._PFCE3_14
#define PFCE3_PFCE3_15 PFCE3_BASE.BIT._PFCE3_15
#define PMSR3 PMSR3_BASE.UINT32
#define PMSR3_PMSR3_0 PMSR3_BASE.BIT._PMSR3_0
#define PMSR3_PMSR3_1 PMSR3_BASE.BIT._PMSR3_1
#define PMSR3_PMSR3_2 PMSR3_BASE.BIT._PMSR3_2
#define PMSR3_PMSR3_3 PMSR3_BASE.BIT._PMSR3_3
#define PMSR3_PMSR3_4 PMSR3_BASE.BIT._PMSR3_4
#define PMSR3_PMSR3_5 PMSR3_BASE.BIT._PMSR3_5
#define PMSR3_PMSR3_6 PMSR3_BASE.BIT._PMSR3_6
#define PMSR3_PMSR3_7 PMSR3_BASE.BIT._PMSR3_7
#define PMSR3_PMSR3_8 PMSR3_BASE.BIT._PMSR3_8
#define PMSR3_PMSR3_9 PMSR3_BASE.BIT._PMSR3_9
#define PMSR3_PMSR3_10 PMSR3_BASE.BIT._PMSR3_10
#define PMSR3_PMSR3_11 PMSR3_BASE.BIT._PMSR3_11
#define PMSR3_PMSR3_12 PMSR3_BASE.BIT._PMSR3_12
#define PMSR3_PMSR3_13 PMSR3_BASE.BIT._PMSR3_13
#define PMSR3_PMSR3_14 PMSR3_BASE.BIT._PMSR3_14
#define PMSR3_PMSR3_15 PMSR3_BASE.BIT._PMSR3_15
#define PMSR3_PMSR3_16 PMSR3_BASE.BIT._PMSR3_16
#define PMSR3_PMSR3_17 PMSR3_BASE.BIT._PMSR3_17
#define PMSR3_PMSR3_18 PMSR3_BASE.BIT._PMSR3_18
#define PMSR3_PMSR3_19 PMSR3_BASE.BIT._PMSR3_19
#define PMSR3_PMSR3_20 PMSR3_BASE.BIT._PMSR3_20
#define PMSR3_PMSR3_21 PMSR3_BASE.BIT._PMSR3_21
#define PMSR3_PMSR3_22 PMSR3_BASE.BIT._PMSR3_22
#define PMSR3_PMSR3_23 PMSR3_BASE.BIT._PMSR3_23
#define PMSR3_PMSR3_24 PMSR3_BASE.BIT._PMSR3_24
#define PMSR3_PMSR3_25 PMSR3_BASE.BIT._PMSR3_25
#define PMSR3_PMSR3_26 PMSR3_BASE.BIT._PMSR3_26
#define PMSR3_PMSR3_27 PMSR3_BASE.BIT._PMSR3_27
#define PMSR3_PMSR3_28 PMSR3_BASE.BIT._PMSR3_28
#define PMSR3_PMSR3_29 PMSR3_BASE.BIT._PMSR3_29
#define PMSR3_PMSR3_30 PMSR3_BASE.BIT._PMSR3_30
#define PMSR3_PMSR3_31 PMSR3_BASE.BIT._PMSR3_31
#define PMCSR3 PMCSR3_BASE.UINT32
#define PMCSR3_PMCSR3_0 PMCSR3_BASE.BIT._PMCSR3_0
#define PMCSR3_PMCSR3_1 PMCSR3_BASE.BIT._PMCSR3_1
#define PMCSR3_PMCSR3_2 PMCSR3_BASE.BIT._PMCSR3_2
#define PMCSR3_PMCSR3_3 PMCSR3_BASE.BIT._PMCSR3_3
#define PMCSR3_PMCSR3_4 PMCSR3_BASE.BIT._PMCSR3_4
#define PMCSR3_PMCSR3_5 PMCSR3_BASE.BIT._PMCSR3_5
#define PMCSR3_PMCSR3_6 PMCSR3_BASE.BIT._PMCSR3_6
#define PMCSR3_PMCSR3_7 PMCSR3_BASE.BIT._PMCSR3_7
#define PMCSR3_PMCSR3_8 PMCSR3_BASE.BIT._PMCSR3_8
#define PMCSR3_PMCSR3_9 PMCSR3_BASE.BIT._PMCSR3_9
#define PMCSR3_PMCSR3_10 PMCSR3_BASE.BIT._PMCSR3_10
#define PMCSR3_PMCSR3_11 PMCSR3_BASE.BIT._PMCSR3_11
#define PMCSR3_PMCSR3_12 PMCSR3_BASE.BIT._PMCSR3_12
#define PMCSR3_PMCSR3_13 PMCSR3_BASE.BIT._PMCSR3_13
#define PMCSR3_PMCSR3_14 PMCSR3_BASE.BIT._PMCSR3_14
#define PMCSR3_PMCSR3_15 PMCSR3_BASE.BIT._PMCSR3_15
#define PMCSR3_PMCSR3_16 PMCSR3_BASE.BIT._PMCSR3_16
#define PMCSR3_PMCSR3_17 PMCSR3_BASE.BIT._PMCSR3_17
#define PMCSR3_PMCSR3_18 PMCSR3_BASE.BIT._PMCSR3_18
#define PMCSR3_PMCSR3_19 PMCSR3_BASE.BIT._PMCSR3_19
#define PMCSR3_PMCSR3_20 PMCSR3_BASE.BIT._PMCSR3_20
#define PMCSR3_PMCSR3_21 PMCSR3_BASE.BIT._PMCSR3_21
#define PMCSR3_PMCSR3_22 PMCSR3_BASE.BIT._PMCSR3_22
#define PMCSR3_PMCSR3_23 PMCSR3_BASE.BIT._PMCSR3_23
#define PMCSR3_PMCSR3_24 PMCSR3_BASE.BIT._PMCSR3_24
#define PMCSR3_PMCSR3_25 PMCSR3_BASE.BIT._PMCSR3_25
#define PMCSR3_PMCSR3_26 PMCSR3_BASE.BIT._PMCSR3_26
#define PMCSR3_PMCSR3_27 PMCSR3_BASE.BIT._PMCSR3_27
#define PMCSR3_PMCSR3_28 PMCSR3_BASE.BIT._PMCSR3_28
#define PMCSR3_PMCSR3_29 PMCSR3_BASE.BIT._PMCSR3_29
#define PMCSR3_PMCSR3_30 PMCSR3_BASE.BIT._PMCSR3_30
#define PMCSR3_PMCSR3_31 PMCSR3_BASE.BIT._PMCSR3_31
#define PINV3 PINV3_BASE.UINT16
#define PINV3_PINV3_0 PINV3_BASE.BIT._PINV3_0
#define PINV3_PINV3_1 PINV3_BASE.BIT._PINV3_1
#define PINV3_PINV3_2 PINV3_BASE.BIT._PINV3_2
#define PINV3_PINV3_3 PINV3_BASE.BIT._PINV3_3
#define PINV3_PINV3_4 PINV3_BASE.BIT._PINV3_4
#define PINV3_PINV3_5 PINV3_BASE.BIT._PINV3_5
#define PINV3_PINV3_6 PINV3_BASE.BIT._PINV3_6
#define PINV3_PINV3_7 PINV3_BASE.BIT._PINV3_7
#define PINV3_PINV3_8 PINV3_BASE.BIT._PINV3_8
#define PINV3_PINV3_9 PINV3_BASE.BIT._PINV3_9
#define PINV3_PINV3_10 PINV3_BASE.BIT._PINV3_10
#define PINV3_PINV3_11 PINV3_BASE.BIT._PINV3_11
#define PINV3_PINV3_12 PINV3_BASE.BIT._PINV3_12
#define PINV3_PINV3_13 PINV3_BASE.BIT._PINV3_13
#define PINV3_PINV3_14 PINV3_BASE.BIT._PINV3_14
#define PINV3_PINV3_15 PINV3_BASE.BIT._PINV3_15
#define P4 P4_BASE.UINT16
#define P4_P4_0 P4_BASE.BIT._P4_0
#define P4_P4_1 P4_BASE.BIT._P4_1
#define P4_P4_2 P4_BASE.BIT._P4_2
#define P4_P4_3 P4_BASE.BIT._P4_3
#define P4_P4_4 P4_BASE.BIT._P4_4
#define P4_P4_5 P4_BASE.BIT._P4_5
#define P4_P4_6 P4_BASE.BIT._P4_6
#define P4_P4_7 P4_BASE.BIT._P4_7
#define P4_P4_8 P4_BASE.BIT._P4_8
#define P4_P4_9 P4_BASE.BIT._P4_9
#define P4_P4_10 P4_BASE.BIT._P4_10
#define P4_P4_11 P4_BASE.BIT._P4_11
#define P4_P4_12 P4_BASE.BIT._P4_12
#define P4_P4_13 P4_BASE.BIT._P4_13
#define P4_P4_14 P4_BASE.BIT._P4_14
#define P4_P4_15 P4_BASE.BIT._P4_15
#define PSR4 PSR4_BASE.UINT32
#define PSR4_PSR4_0 PSR4_BASE.BIT._PSR4_0
#define PSR4_PSR4_1 PSR4_BASE.BIT._PSR4_1
#define PSR4_PSR4_2 PSR4_BASE.BIT._PSR4_2
#define PSR4_PSR4_3 PSR4_BASE.BIT._PSR4_3
#define PSR4_PSR4_4 PSR4_BASE.BIT._PSR4_4
#define PSR4_PSR4_5 PSR4_BASE.BIT._PSR4_5
#define PSR4_PSR4_6 PSR4_BASE.BIT._PSR4_6
#define PSR4_PSR4_7 PSR4_BASE.BIT._PSR4_7
#define PSR4_PSR4_8 PSR4_BASE.BIT._PSR4_8
#define PSR4_PSR4_9 PSR4_BASE.BIT._PSR4_9
#define PSR4_PSR4_10 PSR4_BASE.BIT._PSR4_10
#define PSR4_PSR4_11 PSR4_BASE.BIT._PSR4_11
#define PSR4_PSR4_12 PSR4_BASE.BIT._PSR4_12
#define PSR4_PSR4_13 PSR4_BASE.BIT._PSR4_13
#define PSR4_PSR4_14 PSR4_BASE.BIT._PSR4_14
#define PSR4_PSR4_15 PSR4_BASE.BIT._PSR4_15
#define PSR4_PSR4_16 PSR4_BASE.BIT._PSR4_16
#define PSR4_PSR4_17 PSR4_BASE.BIT._PSR4_17
#define PSR4_PSR4_18 PSR4_BASE.BIT._PSR4_18
#define PSR4_PSR4_19 PSR4_BASE.BIT._PSR4_19
#define PSR4_PSR4_20 PSR4_BASE.BIT._PSR4_20
#define PSR4_PSR4_21 PSR4_BASE.BIT._PSR4_21
#define PSR4_PSR4_22 PSR4_BASE.BIT._PSR4_22
#define PSR4_PSR4_23 PSR4_BASE.BIT._PSR4_23
#define PSR4_PSR4_24 PSR4_BASE.BIT._PSR4_24
#define PSR4_PSR4_25 PSR4_BASE.BIT._PSR4_25
#define PSR4_PSR4_26 PSR4_BASE.BIT._PSR4_26
#define PSR4_PSR4_27 PSR4_BASE.BIT._PSR4_27
#define PSR4_PSR4_28 PSR4_BASE.BIT._PSR4_28
#define PSR4_PSR4_29 PSR4_BASE.BIT._PSR4_29
#define PSR4_PSR4_30 PSR4_BASE.BIT._PSR4_30
#define PSR4_PSR4_31 PSR4_BASE.BIT._PSR4_31
#define PNOT4 PNOT4_BASE.UINT16
#define PNOT4_PNOT4_0 PNOT4_BASE.BIT._PNOT4_0
#define PNOT4_PNOT4_1 PNOT4_BASE.BIT._PNOT4_1
#define PNOT4_PNOT4_2 PNOT4_BASE.BIT._PNOT4_2
#define PNOT4_PNOT4_3 PNOT4_BASE.BIT._PNOT4_3
#define PNOT4_PNOT4_4 PNOT4_BASE.BIT._PNOT4_4
#define PNOT4_PNOT4_5 PNOT4_BASE.BIT._PNOT4_5
#define PNOT4_PNOT4_6 PNOT4_BASE.BIT._PNOT4_6
#define PNOT4_PNOT4_7 PNOT4_BASE.BIT._PNOT4_7
#define PNOT4_PNOT4_8 PNOT4_BASE.BIT._PNOT4_8
#define PNOT4_PNOT4_9 PNOT4_BASE.BIT._PNOT4_9
#define PNOT4_PNOT4_10 PNOT4_BASE.BIT._PNOT4_10
#define PNOT4_PNOT4_11 PNOT4_BASE.BIT._PNOT4_11
#define PNOT4_PNOT4_12 PNOT4_BASE.BIT._PNOT4_12
#define PNOT4_PNOT4_13 PNOT4_BASE.BIT._PNOT4_13
#define PNOT4_PNOT4_14 PNOT4_BASE.BIT._PNOT4_14
#define PNOT4_PNOT4_15 PNOT4_BASE.BIT._PNOT4_15
#define PPR4 PPR4_BASE.UINT16
#define PPR4_PPR4_0 PPR4_BASE.BIT._PPR4_0
#define PPR4_PPR4_1 PPR4_BASE.BIT._PPR4_1
#define PPR4_PPR4_2 PPR4_BASE.BIT._PPR4_2
#define PPR4_PPR4_3 PPR4_BASE.BIT._PPR4_3
#define PPR4_PPR4_4 PPR4_BASE.BIT._PPR4_4
#define PPR4_PPR4_5 PPR4_BASE.BIT._PPR4_5
#define PPR4_PPR4_6 PPR4_BASE.BIT._PPR4_6
#define PPR4_PPR4_7 PPR4_BASE.BIT._PPR4_7
#define PPR4_PPR4_8 PPR4_BASE.BIT._PPR4_8
#define PPR4_PPR4_9 PPR4_BASE.BIT._PPR4_9
#define PPR4_PPR4_10 PPR4_BASE.BIT._PPR4_10
#define PPR4_PPR4_11 PPR4_BASE.BIT._PPR4_11
#define PPR4_PPR4_12 PPR4_BASE.BIT._PPR4_12
#define PPR4_PPR4_13 PPR4_BASE.BIT._PPR4_13
#define PPR4_PPR4_14 PPR4_BASE.BIT._PPR4_14
#define PPR4_PPR4_15 PPR4_BASE.BIT._PPR4_15
#define PM4 PM4_BASE.UINT16
#define PM4_PM4_0 PM4_BASE.BIT._PM4_0
#define PM4_PM4_1 PM4_BASE.BIT._PM4_1
#define PM4_PM4_2 PM4_BASE.BIT._PM4_2
#define PM4_PM4_3 PM4_BASE.BIT._PM4_3
#define PM4_PM4_4 PM4_BASE.BIT._PM4_4
#define PM4_PM4_5 PM4_BASE.BIT._PM4_5
#define PM4_PM4_6 PM4_BASE.BIT._PM4_6
#define PM4_PM4_7 PM4_BASE.BIT._PM4_7
#define PM4_PM4_8 PM4_BASE.BIT._PM4_8
#define PM4_PM4_9 PM4_BASE.BIT._PM4_9
#define PM4_PM4_10 PM4_BASE.BIT._PM4_10
#define PM4_PM4_11 PM4_BASE.BIT._PM4_11
#define PM4_PM4_12 PM4_BASE.BIT._PM4_12
#define PM4_PM4_13 PM4_BASE.BIT._PM4_13
#define PM4_PM4_14 PM4_BASE.BIT._PM4_14
#define PM4_PM4_15 PM4_BASE.BIT._PM4_15
#define PMC4 PMC4_BASE.UINT16
#define PMC4_PMC4_0 PMC4_BASE.BIT._PMC4_0
#define PMC4_PMC4_1 PMC4_BASE.BIT._PMC4_1
#define PMC4_PMC4_2 PMC4_BASE.BIT._PMC4_2
#define PMC4_PMC4_3 PMC4_BASE.BIT._PMC4_3
#define PMC4_PMC4_4 PMC4_BASE.BIT._PMC4_4
#define PMC4_PMC4_5 PMC4_BASE.BIT._PMC4_5
#define PMC4_PMC4_6 PMC4_BASE.BIT._PMC4_6
#define PMC4_PMC4_7 PMC4_BASE.BIT._PMC4_7
#define PMC4_PMC4_8 PMC4_BASE.BIT._PMC4_8
#define PMC4_PMC4_9 PMC4_BASE.BIT._PMC4_9
#define PMC4_PMC4_10 PMC4_BASE.BIT._PMC4_10
#define PMC4_PMC4_11 PMC4_BASE.BIT._PMC4_11
#define PMC4_PMC4_12 PMC4_BASE.BIT._PMC4_12
#define PMC4_PMC4_13 PMC4_BASE.BIT._PMC4_13
#define PMC4_PMC4_14 PMC4_BASE.BIT._PMC4_14
#define PMC4_PMC4_15 PMC4_BASE.BIT._PMC4_15
#define PFC4 PFC4_BASE.UINT16
#define PFC4_PFC4_0 PFC4_BASE.BIT._PFC4_0
#define PFC4_PFC4_1 PFC4_BASE.BIT._PFC4_1
#define PFC4_PFC4_2 PFC4_BASE.BIT._PFC4_2
#define PFC4_PFC4_3 PFC4_BASE.BIT._PFC4_3
#define PFC4_PFC4_4 PFC4_BASE.BIT._PFC4_4
#define PFC4_PFC4_5 PFC4_BASE.BIT._PFC4_5
#define PFC4_PFC4_6 PFC4_BASE.BIT._PFC4_6
#define PFC4_PFC4_7 PFC4_BASE.BIT._PFC4_7
#define PFC4_PFC4_8 PFC4_BASE.BIT._PFC4_8
#define PFC4_PFC4_9 PFC4_BASE.BIT._PFC4_9
#define PFC4_PFC4_10 PFC4_BASE.BIT._PFC4_10
#define PFC4_PFC4_11 PFC4_BASE.BIT._PFC4_11
#define PFC4_PFC4_12 PFC4_BASE.BIT._PFC4_12
#define PFC4_PFC4_13 PFC4_BASE.BIT._PFC4_13
#define PFC4_PFC4_14 PFC4_BASE.BIT._PFC4_14
#define PFC4_PFC4_15 PFC4_BASE.BIT._PFC4_15
#define PFCE4 PFCE4_BASE.UINT16
#define PFCE4_PFCE4_0 PFCE4_BASE.BIT._PFCE4_0
#define PFCE4_PFCE4_1 PFCE4_BASE.BIT._PFCE4_1
#define PFCE4_PFCE4_2 PFCE4_BASE.BIT._PFCE4_2
#define PFCE4_PFCE4_3 PFCE4_BASE.BIT._PFCE4_3
#define PFCE4_PFCE4_4 PFCE4_BASE.BIT._PFCE4_4
#define PFCE4_PFCE4_5 PFCE4_BASE.BIT._PFCE4_5
#define PFCE4_PFCE4_6 PFCE4_BASE.BIT._PFCE4_6
#define PFCE4_PFCE4_7 PFCE4_BASE.BIT._PFCE4_7
#define PFCE4_PFCE4_8 PFCE4_BASE.BIT._PFCE4_8
#define PFCE4_PFCE4_9 PFCE4_BASE.BIT._PFCE4_9
#define PFCE4_PFCE4_10 PFCE4_BASE.BIT._PFCE4_10
#define PFCE4_PFCE4_11 PFCE4_BASE.BIT._PFCE4_11
#define PFCE4_PFCE4_12 PFCE4_BASE.BIT._PFCE4_12
#define PFCE4_PFCE4_13 PFCE4_BASE.BIT._PFCE4_13
#define PFCE4_PFCE4_14 PFCE4_BASE.BIT._PFCE4_14
#define PFCE4_PFCE4_15 PFCE4_BASE.BIT._PFCE4_15
#define PMSR4 PMSR4_BASE.UINT32
#define PMSR4_PMSR4_0 PMSR4_BASE.BIT._PMSR4_0
#define PMSR4_PMSR4_1 PMSR4_BASE.BIT._PMSR4_1
#define PMSR4_PMSR4_2 PMSR4_BASE.BIT._PMSR4_2
#define PMSR4_PMSR4_3 PMSR4_BASE.BIT._PMSR4_3
#define PMSR4_PMSR4_4 PMSR4_BASE.BIT._PMSR4_4
#define PMSR4_PMSR4_5 PMSR4_BASE.BIT._PMSR4_5
#define PMSR4_PMSR4_6 PMSR4_BASE.BIT._PMSR4_6
#define PMSR4_PMSR4_7 PMSR4_BASE.BIT._PMSR4_7
#define PMSR4_PMSR4_8 PMSR4_BASE.BIT._PMSR4_8
#define PMSR4_PMSR4_9 PMSR4_BASE.BIT._PMSR4_9
#define PMSR4_PMSR4_10 PMSR4_BASE.BIT._PMSR4_10
#define PMSR4_PMSR4_11 PMSR4_BASE.BIT._PMSR4_11
#define PMSR4_PMSR4_12 PMSR4_BASE.BIT._PMSR4_12
#define PMSR4_PMSR4_13 PMSR4_BASE.BIT._PMSR4_13
#define PMSR4_PMSR4_14 PMSR4_BASE.BIT._PMSR4_14
#define PMSR4_PMSR4_15 PMSR4_BASE.BIT._PMSR4_15
#define PMSR4_PMSR4_16 PMSR4_BASE.BIT._PMSR4_16
#define PMSR4_PMSR4_17 PMSR4_BASE.BIT._PMSR4_17
#define PMSR4_PMSR4_18 PMSR4_BASE.BIT._PMSR4_18
#define PMSR4_PMSR4_19 PMSR4_BASE.BIT._PMSR4_19
#define PMSR4_PMSR4_20 PMSR4_BASE.BIT._PMSR4_20
#define PMSR4_PMSR4_21 PMSR4_BASE.BIT._PMSR4_21
#define PMSR4_PMSR4_22 PMSR4_BASE.BIT._PMSR4_22
#define PMSR4_PMSR4_23 PMSR4_BASE.BIT._PMSR4_23
#define PMSR4_PMSR4_24 PMSR4_BASE.BIT._PMSR4_24
#define PMSR4_PMSR4_25 PMSR4_BASE.BIT._PMSR4_25
#define PMSR4_PMSR4_26 PMSR4_BASE.BIT._PMSR4_26
#define PMSR4_PMSR4_27 PMSR4_BASE.BIT._PMSR4_27
#define PMSR4_PMSR4_28 PMSR4_BASE.BIT._PMSR4_28
#define PMSR4_PMSR4_29 PMSR4_BASE.BIT._PMSR4_29
#define PMSR4_PMSR4_30 PMSR4_BASE.BIT._PMSR4_30
#define PMSR4_PMSR4_31 PMSR4_BASE.BIT._PMSR4_31
#define PMCSR4 PMCSR4_BASE.UINT32
#define PMCSR4_PMCSR4_0 PMCSR4_BASE.BIT._PMCSR4_0
#define PMCSR4_PMCSR4_1 PMCSR4_BASE.BIT._PMCSR4_1
#define PMCSR4_PMCSR4_2 PMCSR4_BASE.BIT._PMCSR4_2
#define PMCSR4_PMCSR4_3 PMCSR4_BASE.BIT._PMCSR4_3
#define PMCSR4_PMCSR4_4 PMCSR4_BASE.BIT._PMCSR4_4
#define PMCSR4_PMCSR4_5 PMCSR4_BASE.BIT._PMCSR4_5
#define PMCSR4_PMCSR4_6 PMCSR4_BASE.BIT._PMCSR4_6
#define PMCSR4_PMCSR4_7 PMCSR4_BASE.BIT._PMCSR4_7
#define PMCSR4_PMCSR4_8 PMCSR4_BASE.BIT._PMCSR4_8
#define PMCSR4_PMCSR4_9 PMCSR4_BASE.BIT._PMCSR4_9
#define PMCSR4_PMCSR4_10 PMCSR4_BASE.BIT._PMCSR4_10
#define PMCSR4_PMCSR4_11 PMCSR4_BASE.BIT._PMCSR4_11
#define PMCSR4_PMCSR4_12 PMCSR4_BASE.BIT._PMCSR4_12
#define PMCSR4_PMCSR4_13 PMCSR4_BASE.BIT._PMCSR4_13
#define PMCSR4_PMCSR4_14 PMCSR4_BASE.BIT._PMCSR4_14
#define PMCSR4_PMCSR4_15 PMCSR4_BASE.BIT._PMCSR4_15
#define PMCSR4_PMCSR4_16 PMCSR4_BASE.BIT._PMCSR4_16
#define PMCSR4_PMCSR4_17 PMCSR4_BASE.BIT._PMCSR4_17
#define PMCSR4_PMCSR4_18 PMCSR4_BASE.BIT._PMCSR4_18
#define PMCSR4_PMCSR4_19 PMCSR4_BASE.BIT._PMCSR4_19
#define PMCSR4_PMCSR4_20 PMCSR4_BASE.BIT._PMCSR4_20
#define PMCSR4_PMCSR4_21 PMCSR4_BASE.BIT._PMCSR4_21
#define PMCSR4_PMCSR4_22 PMCSR4_BASE.BIT._PMCSR4_22
#define PMCSR4_PMCSR4_23 PMCSR4_BASE.BIT._PMCSR4_23
#define PMCSR4_PMCSR4_24 PMCSR4_BASE.BIT._PMCSR4_24
#define PMCSR4_PMCSR4_25 PMCSR4_BASE.BIT._PMCSR4_25
#define PMCSR4_PMCSR4_26 PMCSR4_BASE.BIT._PMCSR4_26
#define PMCSR4_PMCSR4_27 PMCSR4_BASE.BIT._PMCSR4_27
#define PMCSR4_PMCSR4_28 PMCSR4_BASE.BIT._PMCSR4_28
#define PMCSR4_PMCSR4_29 PMCSR4_BASE.BIT._PMCSR4_29
#define PMCSR4_PMCSR4_30 PMCSR4_BASE.BIT._PMCSR4_30
#define PMCSR4_PMCSR4_31 PMCSR4_BASE.BIT._PMCSR4_31
#define PINV4 PINV4_BASE.UINT16
#define PINV4_PINV4_0 PINV4_BASE.BIT._PINV4_0
#define PINV4_PINV4_1 PINV4_BASE.BIT._PINV4_1
#define PINV4_PINV4_2 PINV4_BASE.BIT._PINV4_2
#define PINV4_PINV4_3 PINV4_BASE.BIT._PINV4_3
#define PINV4_PINV4_4 PINV4_BASE.BIT._PINV4_4
#define PINV4_PINV4_5 PINV4_BASE.BIT._PINV4_5
#define PINV4_PINV4_6 PINV4_BASE.BIT._PINV4_6
#define PINV4_PINV4_7 PINV4_BASE.BIT._PINV4_7
#define PINV4_PINV4_8 PINV4_BASE.BIT._PINV4_8
#define PINV4_PINV4_9 PINV4_BASE.BIT._PINV4_9
#define PINV4_PINV4_10 PINV4_BASE.BIT._PINV4_10
#define PINV4_PINV4_11 PINV4_BASE.BIT._PINV4_11
#define PINV4_PINV4_12 PINV4_BASE.BIT._PINV4_12
#define PINV4_PINV4_13 PINV4_BASE.BIT._PINV4_13
#define PINV4_PINV4_14 PINV4_BASE.BIT._PINV4_14
#define PINV4_PINV4_15 PINV4_BASE.BIT._PINV4_15
#define P5 P5_BASE.UINT16
#define P5_P5_0 P5_BASE.BIT._P5_0
#define P5_P5_1 P5_BASE.BIT._P5_1
#define P5_P5_2 P5_BASE.BIT._P5_2
#define P5_P5_3 P5_BASE.BIT._P5_3
#define P5_P5_4 P5_BASE.BIT._P5_4
#define P5_P5_5 P5_BASE.BIT._P5_5
#define P5_P5_6 P5_BASE.BIT._P5_6
#define P5_P5_7 P5_BASE.BIT._P5_7
#define P5_P5_8 P5_BASE.BIT._P5_8
#define P5_P5_9 P5_BASE.BIT._P5_9
#define P5_P5_10 P5_BASE.BIT._P5_10
#define P5_P5_11 P5_BASE.BIT._P5_11
#define P5_P5_12 P5_BASE.BIT._P5_12
#define P5_P5_13 P5_BASE.BIT._P5_13
#define P5_P5_14 P5_BASE.BIT._P5_14
#define P5_P5_15 P5_BASE.BIT._P5_15
#define PSR5 PSR5_BASE.UINT32
#define PSR5_PSR5_0 PSR5_BASE.BIT._PSR5_0
#define PSR5_PSR5_1 PSR5_BASE.BIT._PSR5_1
#define PSR5_PSR5_2 PSR5_BASE.BIT._PSR5_2
#define PSR5_PSR5_3 PSR5_BASE.BIT._PSR5_3
#define PSR5_PSR5_4 PSR5_BASE.BIT._PSR5_4
#define PSR5_PSR5_5 PSR5_BASE.BIT._PSR5_5
#define PSR5_PSR5_6 PSR5_BASE.BIT._PSR5_6
#define PSR5_PSR5_7 PSR5_BASE.BIT._PSR5_7
#define PSR5_PSR5_8 PSR5_BASE.BIT._PSR5_8
#define PSR5_PSR5_9 PSR5_BASE.BIT._PSR5_9
#define PSR5_PSR5_10 PSR5_BASE.BIT._PSR5_10
#define PSR5_PSR5_11 PSR5_BASE.BIT._PSR5_11
#define PSR5_PSR5_12 PSR5_BASE.BIT._PSR5_12
#define PSR5_PSR5_13 PSR5_BASE.BIT._PSR5_13
#define PSR5_PSR5_14 PSR5_BASE.BIT._PSR5_14
#define PSR5_PSR5_15 PSR5_BASE.BIT._PSR5_15
#define PSR5_PSR5_16 PSR5_BASE.BIT._PSR5_16
#define PSR5_PSR5_17 PSR5_BASE.BIT._PSR5_17
#define PSR5_PSR5_18 PSR5_BASE.BIT._PSR5_18
#define PSR5_PSR5_19 PSR5_BASE.BIT._PSR5_19
#define PSR5_PSR5_20 PSR5_BASE.BIT._PSR5_20
#define PSR5_PSR5_21 PSR5_BASE.BIT._PSR5_21
#define PSR5_PSR5_22 PSR5_BASE.BIT._PSR5_22
#define PSR5_PSR5_23 PSR5_BASE.BIT._PSR5_23
#define PSR5_PSR5_24 PSR5_BASE.BIT._PSR5_24
#define PSR5_PSR5_25 PSR5_BASE.BIT._PSR5_25
#define PSR5_PSR5_26 PSR5_BASE.BIT._PSR5_26
#define PSR5_PSR5_27 PSR5_BASE.BIT._PSR5_27
#define PSR5_PSR5_28 PSR5_BASE.BIT._PSR5_28
#define PSR5_PSR5_29 PSR5_BASE.BIT._PSR5_29
#define PSR5_PSR5_30 PSR5_BASE.BIT._PSR5_30
#define PSR5_PSR5_31 PSR5_BASE.BIT._PSR5_31
#define PNOT5 PNOT5_BASE.UINT16
#define PNOT5_PNOT5_0 PNOT5_BASE.BIT._PNOT5_0
#define PNOT5_PNOT5_1 PNOT5_BASE.BIT._PNOT5_1
#define PNOT5_PNOT5_2 PNOT5_BASE.BIT._PNOT5_2
#define PNOT5_PNOT5_3 PNOT5_BASE.BIT._PNOT5_3
#define PNOT5_PNOT5_4 PNOT5_BASE.BIT._PNOT5_4
#define PNOT5_PNOT5_5 PNOT5_BASE.BIT._PNOT5_5
#define PNOT5_PNOT5_6 PNOT5_BASE.BIT._PNOT5_6
#define PNOT5_PNOT5_7 PNOT5_BASE.BIT._PNOT5_7
#define PNOT5_PNOT5_8 PNOT5_BASE.BIT._PNOT5_8
#define PNOT5_PNOT5_9 PNOT5_BASE.BIT._PNOT5_9
#define PNOT5_PNOT5_10 PNOT5_BASE.BIT._PNOT5_10
#define PNOT5_PNOT5_11 PNOT5_BASE.BIT._PNOT5_11
#define PNOT5_PNOT5_12 PNOT5_BASE.BIT._PNOT5_12
#define PNOT5_PNOT5_13 PNOT5_BASE.BIT._PNOT5_13
#define PNOT5_PNOT5_14 PNOT5_BASE.BIT._PNOT5_14
#define PNOT5_PNOT5_15 PNOT5_BASE.BIT._PNOT5_15
#define PPR5 PPR5_BASE.UINT16
#define PPR5_PPR5_0 PPR5_BASE.BIT._PPR5_0
#define PPR5_PPR5_1 PPR5_BASE.BIT._PPR5_1
#define PPR5_PPR5_2 PPR5_BASE.BIT._PPR5_2
#define PPR5_PPR5_3 PPR5_BASE.BIT._PPR5_3
#define PPR5_PPR5_4 PPR5_BASE.BIT._PPR5_4
#define PPR5_PPR5_5 PPR5_BASE.BIT._PPR5_5
#define PPR5_PPR5_6 PPR5_BASE.BIT._PPR5_6
#define PPR5_PPR5_7 PPR5_BASE.BIT._PPR5_7
#define PPR5_PPR5_8 PPR5_BASE.BIT._PPR5_8
#define PPR5_PPR5_9 PPR5_BASE.BIT._PPR5_9
#define PPR5_PPR5_10 PPR5_BASE.BIT._PPR5_10
#define PPR5_PPR5_11 PPR5_BASE.BIT._PPR5_11
#define PPR5_PPR5_12 PPR5_BASE.BIT._PPR5_12
#define PPR5_PPR5_13 PPR5_BASE.BIT._PPR5_13
#define PPR5_PPR5_14 PPR5_BASE.BIT._PPR5_14
#define PPR5_PPR5_15 PPR5_BASE.BIT._PPR5_15
#define PM5 PM5_BASE.UINT16
#define PM5_PM5_0 PM5_BASE.BIT._PM5_0
#define PM5_PM5_1 PM5_BASE.BIT._PM5_1
#define PM5_PM5_2 PM5_BASE.BIT._PM5_2
#define PM5_PM5_3 PM5_BASE.BIT._PM5_3
#define PM5_PM5_4 PM5_BASE.BIT._PM5_4
#define PM5_PM5_5 PM5_BASE.BIT._PM5_5
#define PM5_PM5_6 PM5_BASE.BIT._PM5_6
#define PM5_PM5_7 PM5_BASE.BIT._PM5_7
#define PM5_PM5_8 PM5_BASE.BIT._PM5_8
#define PM5_PM5_9 PM5_BASE.BIT._PM5_9
#define PM5_PM5_10 PM5_BASE.BIT._PM5_10
#define PM5_PM5_11 PM5_BASE.BIT._PM5_11
#define PM5_PM5_12 PM5_BASE.BIT._PM5_12
#define PM5_PM5_13 PM5_BASE.BIT._PM5_13
#define PM5_PM5_14 PM5_BASE.BIT._PM5_14
#define PM5_PM5_15 PM5_BASE.BIT._PM5_15
#define PMC5 PMC5_BASE.UINT16
#define PMC5_PMC5_0 PMC5_BASE.BIT._PMC5_0
#define PMC5_PMC5_1 PMC5_BASE.BIT._PMC5_1
#define PMC5_PMC5_2 PMC5_BASE.BIT._PMC5_2
#define PMC5_PMC5_3 PMC5_BASE.BIT._PMC5_3
#define PMC5_PMC5_4 PMC5_BASE.BIT._PMC5_4
#define PMC5_PMC5_5 PMC5_BASE.BIT._PMC5_5
#define PMC5_PMC5_6 PMC5_BASE.BIT._PMC5_6
#define PMC5_PMC5_7 PMC5_BASE.BIT._PMC5_7
#define PMC5_PMC5_8 PMC5_BASE.BIT._PMC5_8
#define PMC5_PMC5_9 PMC5_BASE.BIT._PMC5_9
#define PMC5_PMC5_10 PMC5_BASE.BIT._PMC5_10
#define PMC5_PMC5_11 PMC5_BASE.BIT._PMC5_11
#define PMC5_PMC5_12 PMC5_BASE.BIT._PMC5_12
#define PMC5_PMC5_13 PMC5_BASE.BIT._PMC5_13
#define PMC5_PMC5_14 PMC5_BASE.BIT._PMC5_14
#define PMC5_PMC5_15 PMC5_BASE.BIT._PMC5_15
#define PFC5 PFC5_BASE.UINT16
#define PFC5_PFC5_0 PFC5_BASE.BIT._PFC5_0
#define PFC5_PFC5_1 PFC5_BASE.BIT._PFC5_1
#define PFC5_PFC5_2 PFC5_BASE.BIT._PFC5_2
#define PFC5_PFC5_3 PFC5_BASE.BIT._PFC5_3
#define PFC5_PFC5_4 PFC5_BASE.BIT._PFC5_4
#define PFC5_PFC5_5 PFC5_BASE.BIT._PFC5_5
#define PFC5_PFC5_6 PFC5_BASE.BIT._PFC5_6
#define PFC5_PFC5_7 PFC5_BASE.BIT._PFC5_7
#define PFC5_PFC5_8 PFC5_BASE.BIT._PFC5_8
#define PFC5_PFC5_9 PFC5_BASE.BIT._PFC5_9
#define PFC5_PFC5_10 PFC5_BASE.BIT._PFC5_10
#define PFC5_PFC5_11 PFC5_BASE.BIT._PFC5_11
#define PFC5_PFC5_12 PFC5_BASE.BIT._PFC5_12
#define PFC5_PFC5_13 PFC5_BASE.BIT._PFC5_13
#define PFC5_PFC5_14 PFC5_BASE.BIT._PFC5_14
#define PFC5_PFC5_15 PFC5_BASE.BIT._PFC5_15
#define PFCE5 PFCE5_BASE.UINT16
#define PFCE5_PFCE5_0 PFCE5_BASE.BIT._PFCE5_0
#define PFCE5_PFCE5_1 PFCE5_BASE.BIT._PFCE5_1
#define PFCE5_PFCE5_2 PFCE5_BASE.BIT._PFCE5_2
#define PFCE5_PFCE5_3 PFCE5_BASE.BIT._PFCE5_3
#define PFCE5_PFCE5_4 PFCE5_BASE.BIT._PFCE5_4
#define PFCE5_PFCE5_5 PFCE5_BASE.BIT._PFCE5_5
#define PFCE5_PFCE5_6 PFCE5_BASE.BIT._PFCE5_6
#define PFCE5_PFCE5_7 PFCE5_BASE.BIT._PFCE5_7
#define PFCE5_PFCE5_8 PFCE5_BASE.BIT._PFCE5_8
#define PFCE5_PFCE5_9 PFCE5_BASE.BIT._PFCE5_9
#define PFCE5_PFCE5_10 PFCE5_BASE.BIT._PFCE5_10
#define PFCE5_PFCE5_11 PFCE5_BASE.BIT._PFCE5_11
#define PFCE5_PFCE5_12 PFCE5_BASE.BIT._PFCE5_12
#define PFCE5_PFCE5_13 PFCE5_BASE.BIT._PFCE5_13
#define PFCE5_PFCE5_14 PFCE5_BASE.BIT._PFCE5_14
#define PFCE5_PFCE5_15 PFCE5_BASE.BIT._PFCE5_15
#define PMSR5 PMSR5_BASE.UINT32
#define PMSR5_PMSR5_0 PMSR5_BASE.BIT._PMSR5_0
#define PMSR5_PMSR5_1 PMSR5_BASE.BIT._PMSR5_1
#define PMSR5_PMSR5_2 PMSR5_BASE.BIT._PMSR5_2
#define PMSR5_PMSR5_3 PMSR5_BASE.BIT._PMSR5_3
#define PMSR5_PMSR5_4 PMSR5_BASE.BIT._PMSR5_4
#define PMSR5_PMSR5_5 PMSR5_BASE.BIT._PMSR5_5
#define PMSR5_PMSR5_6 PMSR5_BASE.BIT._PMSR5_6
#define PMSR5_PMSR5_7 PMSR5_BASE.BIT._PMSR5_7
#define PMSR5_PMSR5_8 PMSR5_BASE.BIT._PMSR5_8
#define PMSR5_PMSR5_9 PMSR5_BASE.BIT._PMSR5_9
#define PMSR5_PMSR5_10 PMSR5_BASE.BIT._PMSR5_10
#define PMSR5_PMSR5_11 PMSR5_BASE.BIT._PMSR5_11
#define PMSR5_PMSR5_12 PMSR5_BASE.BIT._PMSR5_12
#define PMSR5_PMSR5_13 PMSR5_BASE.BIT._PMSR5_13
#define PMSR5_PMSR5_14 PMSR5_BASE.BIT._PMSR5_14
#define PMSR5_PMSR5_15 PMSR5_BASE.BIT._PMSR5_15
#define PMSR5_PMSR5_16 PMSR5_BASE.BIT._PMSR5_16
#define PMSR5_PMSR5_17 PMSR5_BASE.BIT._PMSR5_17
#define PMSR5_PMSR5_18 PMSR5_BASE.BIT._PMSR5_18
#define PMSR5_PMSR5_19 PMSR5_BASE.BIT._PMSR5_19
#define PMSR5_PMSR5_20 PMSR5_BASE.BIT._PMSR5_20
#define PMSR5_PMSR5_21 PMSR5_BASE.BIT._PMSR5_21
#define PMSR5_PMSR5_22 PMSR5_BASE.BIT._PMSR5_22
#define PMSR5_PMSR5_23 PMSR5_BASE.BIT._PMSR5_23
#define PMSR5_PMSR5_24 PMSR5_BASE.BIT._PMSR5_24
#define PMSR5_PMSR5_25 PMSR5_BASE.BIT._PMSR5_25
#define PMSR5_PMSR5_26 PMSR5_BASE.BIT._PMSR5_26
#define PMSR5_PMSR5_27 PMSR5_BASE.BIT._PMSR5_27
#define PMSR5_PMSR5_28 PMSR5_BASE.BIT._PMSR5_28
#define PMSR5_PMSR5_29 PMSR5_BASE.BIT._PMSR5_29
#define PMSR5_PMSR5_30 PMSR5_BASE.BIT._PMSR5_30
#define PMSR5_PMSR5_31 PMSR5_BASE.BIT._PMSR5_31
#define PMCSR5 PMCSR5_BASE.UINT32
#define PMCSR5_PMCSR5_0 PMCSR5_BASE.BIT._PMCSR5_0
#define PMCSR5_PMCSR5_1 PMCSR5_BASE.BIT._PMCSR5_1
#define PMCSR5_PMCSR5_2 PMCSR5_BASE.BIT._PMCSR5_2
#define PMCSR5_PMCSR5_3 PMCSR5_BASE.BIT._PMCSR5_3
#define PMCSR5_PMCSR5_4 PMCSR5_BASE.BIT._PMCSR5_4
#define PMCSR5_PMCSR5_5 PMCSR5_BASE.BIT._PMCSR5_5
#define PMCSR5_PMCSR5_6 PMCSR5_BASE.BIT._PMCSR5_6
#define PMCSR5_PMCSR5_7 PMCSR5_BASE.BIT._PMCSR5_7
#define PMCSR5_PMCSR5_8 PMCSR5_BASE.BIT._PMCSR5_8
#define PMCSR5_PMCSR5_9 PMCSR5_BASE.BIT._PMCSR5_9
#define PMCSR5_PMCSR5_10 PMCSR5_BASE.BIT._PMCSR5_10
#define PMCSR5_PMCSR5_11 PMCSR5_BASE.BIT._PMCSR5_11
#define PMCSR5_PMCSR5_12 PMCSR5_BASE.BIT._PMCSR5_12
#define PMCSR5_PMCSR5_13 PMCSR5_BASE.BIT._PMCSR5_13
#define PMCSR5_PMCSR5_14 PMCSR5_BASE.BIT._PMCSR5_14
#define PMCSR5_PMCSR5_15 PMCSR5_BASE.BIT._PMCSR5_15
#define PMCSR5_PMCSR5_16 PMCSR5_BASE.BIT._PMCSR5_16
#define PMCSR5_PMCSR5_17 PMCSR5_BASE.BIT._PMCSR5_17
#define PMCSR5_PMCSR5_18 PMCSR5_BASE.BIT._PMCSR5_18
#define PMCSR5_PMCSR5_19 PMCSR5_BASE.BIT._PMCSR5_19
#define PMCSR5_PMCSR5_20 PMCSR5_BASE.BIT._PMCSR5_20
#define PMCSR5_PMCSR5_21 PMCSR5_BASE.BIT._PMCSR5_21
#define PMCSR5_PMCSR5_22 PMCSR5_BASE.BIT._PMCSR5_22
#define PMCSR5_PMCSR5_23 PMCSR5_BASE.BIT._PMCSR5_23
#define PMCSR5_PMCSR5_24 PMCSR5_BASE.BIT._PMCSR5_24
#define PMCSR5_PMCSR5_25 PMCSR5_BASE.BIT._PMCSR5_25
#define PMCSR5_PMCSR5_26 PMCSR5_BASE.BIT._PMCSR5_26
#define PMCSR5_PMCSR5_27 PMCSR5_BASE.BIT._PMCSR5_27
#define PMCSR5_PMCSR5_28 PMCSR5_BASE.BIT._PMCSR5_28
#define PMCSR5_PMCSR5_29 PMCSR5_BASE.BIT._PMCSR5_29
#define PMCSR5_PMCSR5_30 PMCSR5_BASE.BIT._PMCSR5_30
#define PMCSR5_PMCSR5_31 PMCSR5_BASE.BIT._PMCSR5_31
#define PINV5 PINV5_BASE.UINT16
#define PINV5_PINV5_0 PINV5_BASE.BIT._PINV5_0
#define PINV5_PINV5_1 PINV5_BASE.BIT._PINV5_1
#define PINV5_PINV5_2 PINV5_BASE.BIT._PINV5_2
#define PINV5_PINV5_3 PINV5_BASE.BIT._PINV5_3
#define PINV5_PINV5_4 PINV5_BASE.BIT._PINV5_4
#define PINV5_PINV5_5 PINV5_BASE.BIT._PINV5_5
#define PINV5_PINV5_6 PINV5_BASE.BIT._PINV5_6
#define PINV5_PINV5_7 PINV5_BASE.BIT._PINV5_7
#define PINV5_PINV5_8 PINV5_BASE.BIT._PINV5_8
#define PINV5_PINV5_9 PINV5_BASE.BIT._PINV5_9
#define PINV5_PINV5_10 PINV5_BASE.BIT._PINV5_10
#define PINV5_PINV5_11 PINV5_BASE.BIT._PINV5_11
#define PINV5_PINV5_12 PINV5_BASE.BIT._PINV5_12
#define PINV5_PINV5_13 PINV5_BASE.BIT._PINV5_13
#define PINV5_PINV5_14 PINV5_BASE.BIT._PINV5_14
#define PINV5_PINV5_15 PINV5_BASE.BIT._PINV5_15
#define P6 P6_BASE.UINT16
#define P6_P6_0 P6_BASE.BIT._P6_0
#define P6_P6_1 P6_BASE.BIT._P6_1
#define P6_P6_2 P6_BASE.BIT._P6_2
#define P6_P6_3 P6_BASE.BIT._P6_3
#define P6_P6_4 P6_BASE.BIT._P6_4
#define P6_P6_5 P6_BASE.BIT._P6_5
#define P6_P6_6 P6_BASE.BIT._P6_6
#define P6_P6_7 P6_BASE.BIT._P6_7
#define P6_P6_8 P6_BASE.BIT._P6_8
#define P6_P6_9 P6_BASE.BIT._P6_9
#define P6_P6_10 P6_BASE.BIT._P6_10
#define P6_P6_11 P6_BASE.BIT._P6_11
#define P6_P6_12 P6_BASE.BIT._P6_12
#define P6_P6_13 P6_BASE.BIT._P6_13
#define P6_P6_14 P6_BASE.BIT._P6_14
#define P6_P6_15 P6_BASE.BIT._P6_15
#define PSR6 PSR6_BASE.UINT32
#define PSR6_PSR6_0 PSR6_BASE.BIT._PSR6_0
#define PSR6_PSR6_1 PSR6_BASE.BIT._PSR6_1
#define PSR6_PSR6_2 PSR6_BASE.BIT._PSR6_2
#define PSR6_PSR6_3 PSR6_BASE.BIT._PSR6_3
#define PSR6_PSR6_4 PSR6_BASE.BIT._PSR6_4
#define PSR6_PSR6_5 PSR6_BASE.BIT._PSR6_5
#define PSR6_PSR6_6 PSR6_BASE.BIT._PSR6_6
#define PSR6_PSR6_7 PSR6_BASE.BIT._PSR6_7
#define PSR6_PSR6_8 PSR6_BASE.BIT._PSR6_8
#define PSR6_PSR6_9 PSR6_BASE.BIT._PSR6_9
#define PSR6_PSR6_10 PSR6_BASE.BIT._PSR6_10
#define PSR6_PSR6_11 PSR6_BASE.BIT._PSR6_11
#define PSR6_PSR6_12 PSR6_BASE.BIT._PSR6_12
#define PSR6_PSR6_13 PSR6_BASE.BIT._PSR6_13
#define PSR6_PSR6_14 PSR6_BASE.BIT._PSR6_14
#define PSR6_PSR6_15 PSR6_BASE.BIT._PSR6_15
#define PSR6_PSR6_16 PSR6_BASE.BIT._PSR6_16
#define PSR6_PSR6_17 PSR6_BASE.BIT._PSR6_17
#define PSR6_PSR6_18 PSR6_BASE.BIT._PSR6_18
#define PSR6_PSR6_19 PSR6_BASE.BIT._PSR6_19
#define PSR6_PSR6_20 PSR6_BASE.BIT._PSR6_20
#define PSR6_PSR6_21 PSR6_BASE.BIT._PSR6_21
#define PSR6_PSR6_22 PSR6_BASE.BIT._PSR6_22
#define PSR6_PSR6_23 PSR6_BASE.BIT._PSR6_23
#define PSR6_PSR6_24 PSR6_BASE.BIT._PSR6_24
#define PSR6_PSR6_25 PSR6_BASE.BIT._PSR6_25
#define PSR6_PSR6_26 PSR6_BASE.BIT._PSR6_26
#define PSR6_PSR6_27 PSR6_BASE.BIT._PSR6_27
#define PSR6_PSR6_28 PSR6_BASE.BIT._PSR6_28
#define PSR6_PSR6_29 PSR6_BASE.BIT._PSR6_29
#define PSR6_PSR6_30 PSR6_BASE.BIT._PSR6_30
#define PSR6_PSR6_31 PSR6_BASE.BIT._PSR6_31
#define PNOT6 PNOT6_BASE.UINT16
#define PNOT6_PNOT6_0 PNOT6_BASE.BIT._PNOT6_0
#define PNOT6_PNOT6_1 PNOT6_BASE.BIT._PNOT6_1
#define PNOT6_PNOT6_2 PNOT6_BASE.BIT._PNOT6_2
#define PNOT6_PNOT6_3 PNOT6_BASE.BIT._PNOT6_3
#define PNOT6_PNOT6_4 PNOT6_BASE.BIT._PNOT6_4
#define PNOT6_PNOT6_5 PNOT6_BASE.BIT._PNOT6_5
#define PNOT6_PNOT6_6 PNOT6_BASE.BIT._PNOT6_6
#define PNOT6_PNOT6_7 PNOT6_BASE.BIT._PNOT6_7
#define PNOT6_PNOT6_8 PNOT6_BASE.BIT._PNOT6_8
#define PNOT6_PNOT6_9 PNOT6_BASE.BIT._PNOT6_9
#define PNOT6_PNOT6_10 PNOT6_BASE.BIT._PNOT6_10
#define PNOT6_PNOT6_11 PNOT6_BASE.BIT._PNOT6_11
#define PNOT6_PNOT6_12 PNOT6_BASE.BIT._PNOT6_12
#define PNOT6_PNOT6_13 PNOT6_BASE.BIT._PNOT6_13
#define PNOT6_PNOT6_14 PNOT6_BASE.BIT._PNOT6_14
#define PNOT6_PNOT6_15 PNOT6_BASE.BIT._PNOT6_15
#define PPR6 PPR6_BASE.UINT16
#define PPR6_PPR6_0 PPR6_BASE.BIT._PPR6_0
#define PPR6_PPR6_1 PPR6_BASE.BIT._PPR6_1
#define PPR6_PPR6_2 PPR6_BASE.BIT._PPR6_2
#define PPR6_PPR6_3 PPR6_BASE.BIT._PPR6_3
#define PPR6_PPR6_4 PPR6_BASE.BIT._PPR6_4
#define PPR6_PPR6_5 PPR6_BASE.BIT._PPR6_5
#define PPR6_PPR6_6 PPR6_BASE.BIT._PPR6_6
#define PPR6_PPR6_7 PPR6_BASE.BIT._PPR6_7
#define PPR6_PPR6_8 PPR6_BASE.BIT._PPR6_8
#define PPR6_PPR6_9 PPR6_BASE.BIT._PPR6_9
#define PPR6_PPR6_10 PPR6_BASE.BIT._PPR6_10
#define PPR6_PPR6_11 PPR6_BASE.BIT._PPR6_11
#define PPR6_PPR6_12 PPR6_BASE.BIT._PPR6_12
#define PPR6_PPR6_13 PPR6_BASE.BIT._PPR6_13
#define PPR6_PPR6_14 PPR6_BASE.BIT._PPR6_14
#define PPR6_PPR6_15 PPR6_BASE.BIT._PPR6_15
#define PM6 PM6_BASE.UINT16
#define PM6_PM6_0 PM6_BASE.BIT._PM6_0
#define PM6_PM6_1 PM6_BASE.BIT._PM6_1
#define PM6_PM6_2 PM6_BASE.BIT._PM6_2
#define PM6_PM6_3 PM6_BASE.BIT._PM6_3
#define PM6_PM6_4 PM6_BASE.BIT._PM6_4
#define PM6_PM6_5 PM6_BASE.BIT._PM6_5
#define PM6_PM6_6 PM6_BASE.BIT._PM6_6
#define PM6_PM6_7 PM6_BASE.BIT._PM6_7
#define PM6_PM6_8 PM6_BASE.BIT._PM6_8
#define PM6_PM6_9 PM6_BASE.BIT._PM6_9
#define PM6_PM6_10 PM6_BASE.BIT._PM6_10
#define PM6_PM6_11 PM6_BASE.BIT._PM6_11
#define PM6_PM6_12 PM6_BASE.BIT._PM6_12
#define PM6_PM6_13 PM6_BASE.BIT._PM6_13
#define PM6_PM6_14 PM6_BASE.BIT._PM6_14
#define PM6_PM6_15 PM6_BASE.BIT._PM6_15
#define PMC6 PMC6_BASE.UINT16
#define PMC6_PMC6_0 PMC6_BASE.BIT._PMC6_0
#define PMC6_PMC6_1 PMC6_BASE.BIT._PMC6_1
#define PMC6_PMC6_2 PMC6_BASE.BIT._PMC6_2
#define PMC6_PMC6_3 PMC6_BASE.BIT._PMC6_3
#define PMC6_PMC6_4 PMC6_BASE.BIT._PMC6_4
#define PMC6_PMC6_5 PMC6_BASE.BIT._PMC6_5
#define PMC6_PMC6_6 PMC6_BASE.BIT._PMC6_6
#define PMC6_PMC6_7 PMC6_BASE.BIT._PMC6_7
#define PMC6_PMC6_8 PMC6_BASE.BIT._PMC6_8
#define PMC6_PMC6_9 PMC6_BASE.BIT._PMC6_9
#define PMC6_PMC6_10 PMC6_BASE.BIT._PMC6_10
#define PMC6_PMC6_11 PMC6_BASE.BIT._PMC6_11
#define PMC6_PMC6_12 PMC6_BASE.BIT._PMC6_12
#define PMC6_PMC6_13 PMC6_BASE.BIT._PMC6_13
#define PMC6_PMC6_14 PMC6_BASE.BIT._PMC6_14
#define PMC6_PMC6_15 PMC6_BASE.BIT._PMC6_15
#define PFC6 PFC6_BASE.UINT16
#define PFC6_PFC6_0 PFC6_BASE.BIT._PFC6_0
#define PFC6_PFC6_1 PFC6_BASE.BIT._PFC6_1
#define PFC6_PFC6_2 PFC6_BASE.BIT._PFC6_2
#define PFC6_PFC6_3 PFC6_BASE.BIT._PFC6_3
#define PFC6_PFC6_4 PFC6_BASE.BIT._PFC6_4
#define PFC6_PFC6_5 PFC6_BASE.BIT._PFC6_5
#define PFC6_PFC6_6 PFC6_BASE.BIT._PFC6_6
#define PFC6_PFC6_7 PFC6_BASE.BIT._PFC6_7
#define PFC6_PFC6_8 PFC6_BASE.BIT._PFC6_8
#define PFC6_PFC6_9 PFC6_BASE.BIT._PFC6_9
#define PFC6_PFC6_10 PFC6_BASE.BIT._PFC6_10
#define PFC6_PFC6_11 PFC6_BASE.BIT._PFC6_11
#define PFC6_PFC6_12 PFC6_BASE.BIT._PFC6_12
#define PFC6_PFC6_13 PFC6_BASE.BIT._PFC6_13
#define PFC6_PFC6_14 PFC6_BASE.BIT._PFC6_14
#define PFC6_PFC6_15 PFC6_BASE.BIT._PFC6_15
#define PFCE6 PFCE6_BASE.UINT16
#define PFCE6_PFCE6_0 PFCE6_BASE.BIT._PFCE6_0
#define PFCE6_PFCE6_1 PFCE6_BASE.BIT._PFCE6_1
#define PFCE6_PFCE6_2 PFCE6_BASE.BIT._PFCE6_2
#define PFCE6_PFCE6_3 PFCE6_BASE.BIT._PFCE6_3
#define PFCE6_PFCE6_4 PFCE6_BASE.BIT._PFCE6_4
#define PFCE6_PFCE6_5 PFCE6_BASE.BIT._PFCE6_5
#define PFCE6_PFCE6_6 PFCE6_BASE.BIT._PFCE6_6
#define PFCE6_PFCE6_7 PFCE6_BASE.BIT._PFCE6_7
#define PFCE6_PFCE6_8 PFCE6_BASE.BIT._PFCE6_8
#define PFCE6_PFCE6_9 PFCE6_BASE.BIT._PFCE6_9
#define PFCE6_PFCE6_10 PFCE6_BASE.BIT._PFCE6_10
#define PFCE6_PFCE6_11 PFCE6_BASE.BIT._PFCE6_11
#define PFCE6_PFCE6_12 PFCE6_BASE.BIT._PFCE6_12
#define PFCE6_PFCE6_13 PFCE6_BASE.BIT._PFCE6_13
#define PFCE6_PFCE6_14 PFCE6_BASE.BIT._PFCE6_14
#define PFCE6_PFCE6_15 PFCE6_BASE.BIT._PFCE6_15
#define PMSR6 PMSR6_BASE.UINT32
#define PMSR6_PMSR6_0 PMSR6_BASE.BIT._PMSR6_0
#define PMSR6_PMSR6_1 PMSR6_BASE.BIT._PMSR6_1
#define PMSR6_PMSR6_2 PMSR6_BASE.BIT._PMSR6_2
#define PMSR6_PMSR6_3 PMSR6_BASE.BIT._PMSR6_3
#define PMSR6_PMSR6_4 PMSR6_BASE.BIT._PMSR6_4
#define PMSR6_PMSR6_5 PMSR6_BASE.BIT._PMSR6_5
#define PMSR6_PMSR6_6 PMSR6_BASE.BIT._PMSR6_6
#define PMSR6_PMSR6_7 PMSR6_BASE.BIT._PMSR6_7
#define PMSR6_PMSR6_8 PMSR6_BASE.BIT._PMSR6_8
#define PMSR6_PMSR6_9 PMSR6_BASE.BIT._PMSR6_9
#define PMSR6_PMSR6_10 PMSR6_BASE.BIT._PMSR6_10
#define PMSR6_PMSR6_11 PMSR6_BASE.BIT._PMSR6_11
#define PMSR6_PMSR6_12 PMSR6_BASE.BIT._PMSR6_12
#define PMSR6_PMSR6_13 PMSR6_BASE.BIT._PMSR6_13
#define PMSR6_PMSR6_14 PMSR6_BASE.BIT._PMSR6_14
#define PMSR6_PMSR6_15 PMSR6_BASE.BIT._PMSR6_15
#define PMSR6_PMSR6_16 PMSR6_BASE.BIT._PMSR6_16
#define PMSR6_PMSR6_17 PMSR6_BASE.BIT._PMSR6_17
#define PMSR6_PMSR6_18 PMSR6_BASE.BIT._PMSR6_18
#define PMSR6_PMSR6_19 PMSR6_BASE.BIT._PMSR6_19
#define PMSR6_PMSR6_20 PMSR6_BASE.BIT._PMSR6_20
#define PMSR6_PMSR6_21 PMSR6_BASE.BIT._PMSR6_21
#define PMSR6_PMSR6_22 PMSR6_BASE.BIT._PMSR6_22
#define PMSR6_PMSR6_23 PMSR6_BASE.BIT._PMSR6_23
#define PMSR6_PMSR6_24 PMSR6_BASE.BIT._PMSR6_24
#define PMSR6_PMSR6_25 PMSR6_BASE.BIT._PMSR6_25
#define PMSR6_PMSR6_26 PMSR6_BASE.BIT._PMSR6_26
#define PMSR6_PMSR6_27 PMSR6_BASE.BIT._PMSR6_27
#define PMSR6_PMSR6_28 PMSR6_BASE.BIT._PMSR6_28
#define PMSR6_PMSR6_29 PMSR6_BASE.BIT._PMSR6_29
#define PMSR6_PMSR6_30 PMSR6_BASE.BIT._PMSR6_30
#define PMSR6_PMSR6_31 PMSR6_BASE.BIT._PMSR6_31
#define PMCSR6 PMCSR6_BASE.UINT32
#define PMCSR6_PMCSR6_0 PMCSR6_BASE.BIT._PMCSR6_0
#define PMCSR6_PMCSR6_1 PMCSR6_BASE.BIT._PMCSR6_1
#define PMCSR6_PMCSR6_2 PMCSR6_BASE.BIT._PMCSR6_2
#define PMCSR6_PMCSR6_3 PMCSR6_BASE.BIT._PMCSR6_3
#define PMCSR6_PMCSR6_4 PMCSR6_BASE.BIT._PMCSR6_4
#define PMCSR6_PMCSR6_5 PMCSR6_BASE.BIT._PMCSR6_5
#define PMCSR6_PMCSR6_6 PMCSR6_BASE.BIT._PMCSR6_6
#define PMCSR6_PMCSR6_7 PMCSR6_BASE.BIT._PMCSR6_7
#define PMCSR6_PMCSR6_8 PMCSR6_BASE.BIT._PMCSR6_8
#define PMCSR6_PMCSR6_9 PMCSR6_BASE.BIT._PMCSR6_9
#define PMCSR6_PMCSR6_10 PMCSR6_BASE.BIT._PMCSR6_10
#define PMCSR6_PMCSR6_11 PMCSR6_BASE.BIT._PMCSR6_11
#define PMCSR6_PMCSR6_12 PMCSR6_BASE.BIT._PMCSR6_12
#define PMCSR6_PMCSR6_13 PMCSR6_BASE.BIT._PMCSR6_13
#define PMCSR6_PMCSR6_14 PMCSR6_BASE.BIT._PMCSR6_14
#define PMCSR6_PMCSR6_15 PMCSR6_BASE.BIT._PMCSR6_15
#define PMCSR6_PMCSR6_16 PMCSR6_BASE.BIT._PMCSR6_16
#define PMCSR6_PMCSR6_17 PMCSR6_BASE.BIT._PMCSR6_17
#define PMCSR6_PMCSR6_18 PMCSR6_BASE.BIT._PMCSR6_18
#define PMCSR6_PMCSR6_19 PMCSR6_BASE.BIT._PMCSR6_19
#define PMCSR6_PMCSR6_20 PMCSR6_BASE.BIT._PMCSR6_20
#define PMCSR6_PMCSR6_21 PMCSR6_BASE.BIT._PMCSR6_21
#define PMCSR6_PMCSR6_22 PMCSR6_BASE.BIT._PMCSR6_22
#define PMCSR6_PMCSR6_23 PMCSR6_BASE.BIT._PMCSR6_23
#define PMCSR6_PMCSR6_24 PMCSR6_BASE.BIT._PMCSR6_24
#define PMCSR6_PMCSR6_25 PMCSR6_BASE.BIT._PMCSR6_25
#define PMCSR6_PMCSR6_26 PMCSR6_BASE.BIT._PMCSR6_26
#define PMCSR6_PMCSR6_27 PMCSR6_BASE.BIT._PMCSR6_27
#define PMCSR6_PMCSR6_28 PMCSR6_BASE.BIT._PMCSR6_28
#define PMCSR6_PMCSR6_29 PMCSR6_BASE.BIT._PMCSR6_29
#define PMCSR6_PMCSR6_30 PMCSR6_BASE.BIT._PMCSR6_30
#define PMCSR6_PMCSR6_31 PMCSR6_BASE.BIT._PMCSR6_31
#define PINV6 PINV6_BASE.UINT16
#define PINV6_PINV6_0 PINV6_BASE.BIT._PINV6_0
#define PINV6_PINV6_1 PINV6_BASE.BIT._PINV6_1
#define PINV6_PINV6_2 PINV6_BASE.BIT._PINV6_2
#define PINV6_PINV6_3 PINV6_BASE.BIT._PINV6_3
#define PINV6_PINV6_4 PINV6_BASE.BIT._PINV6_4
#define PINV6_PINV6_5 PINV6_BASE.BIT._PINV6_5
#define PINV6_PINV6_6 PINV6_BASE.BIT._PINV6_6
#define PINV6_PINV6_7 PINV6_BASE.BIT._PINV6_7
#define PINV6_PINV6_8 PINV6_BASE.BIT._PINV6_8
#define PINV6_PINV6_9 PINV6_BASE.BIT._PINV6_9
#define PINV6_PINV6_10 PINV6_BASE.BIT._PINV6_10
#define PINV6_PINV6_11 PINV6_BASE.BIT._PINV6_11
#define PINV6_PINV6_12 PINV6_BASE.BIT._PINV6_12
#define PINV6_PINV6_13 PINV6_BASE.BIT._PINV6_13
#define PINV6_PINV6_14 PINV6_BASE.BIT._PINV6_14
#define PINV6_PINV6_15 PINV6_BASE.BIT._PINV6_15
#define P7 P7_BASE.UINT16
#define P7_P7_0 P7_BASE.BIT._P7_0
#define P7_P7_1 P7_BASE.BIT._P7_1
#define P7_P7_2 P7_BASE.BIT._P7_2
#define P7_P7_3 P7_BASE.BIT._P7_3
#define P7_P7_4 P7_BASE.BIT._P7_4
#define P7_P7_5 P7_BASE.BIT._P7_5
#define P7_P7_6 P7_BASE.BIT._P7_6
#define P7_P7_7 P7_BASE.BIT._P7_7
#define P7_P7_8 P7_BASE.BIT._P7_8
#define P7_P7_9 P7_BASE.BIT._P7_9
#define P7_P7_10 P7_BASE.BIT._P7_10
#define P7_P7_11 P7_BASE.BIT._P7_11
#define P7_P7_12 P7_BASE.BIT._P7_12
#define P7_P7_13 P7_BASE.BIT._P7_13
#define P7_P7_14 P7_BASE.BIT._P7_14
#define P7_P7_15 P7_BASE.BIT._P7_15
#define PSR7 PSR7_BASE.UINT32
#define PSR7_PSR7_0 PSR7_BASE.BIT._PSR7_0
#define PSR7_PSR7_1 PSR7_BASE.BIT._PSR7_1
#define PSR7_PSR7_2 PSR7_BASE.BIT._PSR7_2
#define PSR7_PSR7_3 PSR7_BASE.BIT._PSR7_3
#define PSR7_PSR7_4 PSR7_BASE.BIT._PSR7_4
#define PSR7_PSR7_5 PSR7_BASE.BIT._PSR7_5
#define PSR7_PSR7_6 PSR7_BASE.BIT._PSR7_6
#define PSR7_PSR7_7 PSR7_BASE.BIT._PSR7_7
#define PSR7_PSR7_8 PSR7_BASE.BIT._PSR7_8
#define PSR7_PSR7_9 PSR7_BASE.BIT._PSR7_9
#define PSR7_PSR7_10 PSR7_BASE.BIT._PSR7_10
#define PSR7_PSR7_11 PSR7_BASE.BIT._PSR7_11
#define PSR7_PSR7_12 PSR7_BASE.BIT._PSR7_12
#define PSR7_PSR7_13 PSR7_BASE.BIT._PSR7_13
#define PSR7_PSR7_14 PSR7_BASE.BIT._PSR7_14
#define PSR7_PSR7_15 PSR7_BASE.BIT._PSR7_15
#define PSR7_PSR7_16 PSR7_BASE.BIT._PSR7_16
#define PSR7_PSR7_17 PSR7_BASE.BIT._PSR7_17
#define PSR7_PSR7_18 PSR7_BASE.BIT._PSR7_18
#define PSR7_PSR7_19 PSR7_BASE.BIT._PSR7_19
#define PSR7_PSR7_20 PSR7_BASE.BIT._PSR7_20
#define PSR7_PSR7_21 PSR7_BASE.BIT._PSR7_21
#define PSR7_PSR7_22 PSR7_BASE.BIT._PSR7_22
#define PSR7_PSR7_23 PSR7_BASE.BIT._PSR7_23
#define PSR7_PSR7_24 PSR7_BASE.BIT._PSR7_24
#define PSR7_PSR7_25 PSR7_BASE.BIT._PSR7_25
#define PSR7_PSR7_26 PSR7_BASE.BIT._PSR7_26
#define PSR7_PSR7_27 PSR7_BASE.BIT._PSR7_27
#define PSR7_PSR7_28 PSR7_BASE.BIT._PSR7_28
#define PSR7_PSR7_29 PSR7_BASE.BIT._PSR7_29
#define PSR7_PSR7_30 PSR7_BASE.BIT._PSR7_30
#define PSR7_PSR7_31 PSR7_BASE.BIT._PSR7_31
#define PNOT7 PNOT7_BASE.UINT16
#define PNOT7_PNOT7_0 PNOT7_BASE.BIT._PNOT7_0
#define PNOT7_PNOT7_1 PNOT7_BASE.BIT._PNOT7_1
#define PNOT7_PNOT7_2 PNOT7_BASE.BIT._PNOT7_2
#define PNOT7_PNOT7_3 PNOT7_BASE.BIT._PNOT7_3
#define PNOT7_PNOT7_4 PNOT7_BASE.BIT._PNOT7_4
#define PNOT7_PNOT7_5 PNOT7_BASE.BIT._PNOT7_5
#define PNOT7_PNOT7_6 PNOT7_BASE.BIT._PNOT7_6
#define PNOT7_PNOT7_7 PNOT7_BASE.BIT._PNOT7_7
#define PNOT7_PNOT7_8 PNOT7_BASE.BIT._PNOT7_8
#define PNOT7_PNOT7_9 PNOT7_BASE.BIT._PNOT7_9
#define PNOT7_PNOT7_10 PNOT7_BASE.BIT._PNOT7_10
#define PNOT7_PNOT7_11 PNOT7_BASE.BIT._PNOT7_11
#define PNOT7_PNOT7_12 PNOT7_BASE.BIT._PNOT7_12
#define PNOT7_PNOT7_13 PNOT7_BASE.BIT._PNOT7_13
#define PNOT7_PNOT7_14 PNOT7_BASE.BIT._PNOT7_14
#define PNOT7_PNOT7_15 PNOT7_BASE.BIT._PNOT7_15
#define PPR7 PPR7_BASE.UINT16
#define PPR7_PPR7_0 PPR7_BASE.BIT._PPR7_0
#define PPR7_PPR7_1 PPR7_BASE.BIT._PPR7_1
#define PPR7_PPR7_2 PPR7_BASE.BIT._PPR7_2
#define PPR7_PPR7_3 PPR7_BASE.BIT._PPR7_3
#define PPR7_PPR7_4 PPR7_BASE.BIT._PPR7_4
#define PPR7_PPR7_5 PPR7_BASE.BIT._PPR7_5
#define PPR7_PPR7_6 PPR7_BASE.BIT._PPR7_6
#define PPR7_PPR7_7 PPR7_BASE.BIT._PPR7_7
#define PPR7_PPR7_8 PPR7_BASE.BIT._PPR7_8
#define PPR7_PPR7_9 PPR7_BASE.BIT._PPR7_9
#define PPR7_PPR7_10 PPR7_BASE.BIT._PPR7_10
#define PPR7_PPR7_11 PPR7_BASE.BIT._PPR7_11
#define PPR7_PPR7_12 PPR7_BASE.BIT._PPR7_12
#define PPR7_PPR7_13 PPR7_BASE.BIT._PPR7_13
#define PPR7_PPR7_14 PPR7_BASE.BIT._PPR7_14
#define PPR7_PPR7_15 PPR7_BASE.BIT._PPR7_15
#define PM7 PM7_BASE.UINT16
#define PM7_PM7_0 PM7_BASE.BIT._PM7_0
#define PM7_PM7_1 PM7_BASE.BIT._PM7_1
#define PM7_PM7_2 PM7_BASE.BIT._PM7_2
#define PM7_PM7_3 PM7_BASE.BIT._PM7_3
#define PM7_PM7_4 PM7_BASE.BIT._PM7_4
#define PM7_PM7_5 PM7_BASE.BIT._PM7_5
#define PM7_PM7_6 PM7_BASE.BIT._PM7_6
#define PM7_PM7_7 PM7_BASE.BIT._PM7_7
#define PM7_PM7_8 PM7_BASE.BIT._PM7_8
#define PM7_PM7_9 PM7_BASE.BIT._PM7_9
#define PM7_PM7_10 PM7_BASE.BIT._PM7_10
#define PM7_PM7_11 PM7_BASE.BIT._PM7_11
#define PM7_PM7_12 PM7_BASE.BIT._PM7_12
#define PM7_PM7_13 PM7_BASE.BIT._PM7_13
#define PM7_PM7_14 PM7_BASE.BIT._PM7_14
#define PM7_PM7_15 PM7_BASE.BIT._PM7_15
#define PMC7 PMC7_BASE.UINT16
#define PMC7_PMC7_0 PMC7_BASE.BIT._PMC7_0
#define PMC7_PMC7_1 PMC7_BASE.BIT._PMC7_1
#define PMC7_PMC7_2 PMC7_BASE.BIT._PMC7_2
#define PMC7_PMC7_3 PMC7_BASE.BIT._PMC7_3
#define PMC7_PMC7_4 PMC7_BASE.BIT._PMC7_4
#define PMC7_PMC7_5 PMC7_BASE.BIT._PMC7_5
#define PMC7_PMC7_6 PMC7_BASE.BIT._PMC7_6
#define PMC7_PMC7_7 PMC7_BASE.BIT._PMC7_7
#define PMC7_PMC7_8 PMC7_BASE.BIT._PMC7_8
#define PMC7_PMC7_9 PMC7_BASE.BIT._PMC7_9
#define PMC7_PMC7_10 PMC7_BASE.BIT._PMC7_10
#define PMC7_PMC7_11 PMC7_BASE.BIT._PMC7_11
#define PMC7_PMC7_12 PMC7_BASE.BIT._PMC7_12
#define PMC7_PMC7_13 PMC7_BASE.BIT._PMC7_13
#define PMC7_PMC7_14 PMC7_BASE.BIT._PMC7_14
#define PMC7_PMC7_15 PMC7_BASE.BIT._PMC7_15
#define PFC7 PFC7_BASE.UINT16
#define PFC7_PFC7_0 PFC7_BASE.BIT._PFC7_0
#define PFC7_PFC7_1 PFC7_BASE.BIT._PFC7_1
#define PFC7_PFC7_2 PFC7_BASE.BIT._PFC7_2
#define PFC7_PFC7_3 PFC7_BASE.BIT._PFC7_3
#define PFC7_PFC7_4 PFC7_BASE.BIT._PFC7_4
#define PFC7_PFC7_5 PFC7_BASE.BIT._PFC7_5
#define PFC7_PFC7_6 PFC7_BASE.BIT._PFC7_6
#define PFC7_PFC7_7 PFC7_BASE.BIT._PFC7_7
#define PFC7_PFC7_8 PFC7_BASE.BIT._PFC7_8
#define PFC7_PFC7_9 PFC7_BASE.BIT._PFC7_9
#define PFC7_PFC7_10 PFC7_BASE.BIT._PFC7_10
#define PFC7_PFC7_11 PFC7_BASE.BIT._PFC7_11
#define PFC7_PFC7_12 PFC7_BASE.BIT._PFC7_12
#define PFC7_PFC7_13 PFC7_BASE.BIT._PFC7_13
#define PFC7_PFC7_14 PFC7_BASE.BIT._PFC7_14
#define PFC7_PFC7_15 PFC7_BASE.BIT._PFC7_15
#define PFCE7 PFCE7_BASE.UINT16
#define PFCE7_PFCE7_0 PFCE7_BASE.BIT._PFCE7_0
#define PFCE7_PFCE7_1 PFCE7_BASE.BIT._PFCE7_1
#define PFCE7_PFCE7_2 PFCE7_BASE.BIT._PFCE7_2
#define PFCE7_PFCE7_3 PFCE7_BASE.BIT._PFCE7_3
#define PFCE7_PFCE7_4 PFCE7_BASE.BIT._PFCE7_4
#define PFCE7_PFCE7_5 PFCE7_BASE.BIT._PFCE7_5
#define PFCE7_PFCE7_6 PFCE7_BASE.BIT._PFCE7_6
#define PFCE7_PFCE7_7 PFCE7_BASE.BIT._PFCE7_7
#define PFCE7_PFCE7_8 PFCE7_BASE.BIT._PFCE7_8
#define PFCE7_PFCE7_9 PFCE7_BASE.BIT._PFCE7_9
#define PFCE7_PFCE7_10 PFCE7_BASE.BIT._PFCE7_10
#define PFCE7_PFCE7_11 PFCE7_BASE.BIT._PFCE7_11
#define PFCE7_PFCE7_12 PFCE7_BASE.BIT._PFCE7_12
#define PFCE7_PFCE7_13 PFCE7_BASE.BIT._PFCE7_13
#define PFCE7_PFCE7_14 PFCE7_BASE.BIT._PFCE7_14
#define PFCE7_PFCE7_15 PFCE7_BASE.BIT._PFCE7_15
#define PMSR7 PMSR7_BASE.UINT32
#define PMSR7_PMSR7_0 PMSR7_BASE.BIT._PMSR7_0
#define PMSR7_PMSR7_1 PMSR7_BASE.BIT._PMSR7_1
#define PMSR7_PMSR7_2 PMSR7_BASE.BIT._PMSR7_2
#define PMSR7_PMSR7_3 PMSR7_BASE.BIT._PMSR7_3
#define PMSR7_PMSR7_4 PMSR7_BASE.BIT._PMSR7_4
#define PMSR7_PMSR7_5 PMSR7_BASE.BIT._PMSR7_5
#define PMSR7_PMSR7_6 PMSR7_BASE.BIT._PMSR7_6
#define PMSR7_PMSR7_7 PMSR7_BASE.BIT._PMSR7_7
#define PMSR7_PMSR7_8 PMSR7_BASE.BIT._PMSR7_8
#define PMSR7_PMSR7_9 PMSR7_BASE.BIT._PMSR7_9
#define PMSR7_PMSR7_10 PMSR7_BASE.BIT._PMSR7_10
#define PMSR7_PMSR7_11 PMSR7_BASE.BIT._PMSR7_11
#define PMSR7_PMSR7_12 PMSR7_BASE.BIT._PMSR7_12
#define PMSR7_PMSR7_13 PMSR7_BASE.BIT._PMSR7_13
#define PMSR7_PMSR7_14 PMSR7_BASE.BIT._PMSR7_14
#define PMSR7_PMSR7_15 PMSR7_BASE.BIT._PMSR7_15
#define PMSR7_PMSR7_16 PMSR7_BASE.BIT._PMSR7_16
#define PMSR7_PMSR7_17 PMSR7_BASE.BIT._PMSR7_17
#define PMSR7_PMSR7_18 PMSR7_BASE.BIT._PMSR7_18
#define PMSR7_PMSR7_19 PMSR7_BASE.BIT._PMSR7_19
#define PMSR7_PMSR7_20 PMSR7_BASE.BIT._PMSR7_20
#define PMSR7_PMSR7_21 PMSR7_BASE.BIT._PMSR7_21
#define PMSR7_PMSR7_22 PMSR7_BASE.BIT._PMSR7_22
#define PMSR7_PMSR7_23 PMSR7_BASE.BIT._PMSR7_23
#define PMSR7_PMSR7_24 PMSR7_BASE.BIT._PMSR7_24
#define PMSR7_PMSR7_25 PMSR7_BASE.BIT._PMSR7_25
#define PMSR7_PMSR7_26 PMSR7_BASE.BIT._PMSR7_26
#define PMSR7_PMSR7_27 PMSR7_BASE.BIT._PMSR7_27
#define PMSR7_PMSR7_28 PMSR7_BASE.BIT._PMSR7_28
#define PMSR7_PMSR7_29 PMSR7_BASE.BIT._PMSR7_29
#define PMSR7_PMSR7_30 PMSR7_BASE.BIT._PMSR7_30
#define PMSR7_PMSR7_31 PMSR7_BASE.BIT._PMSR7_31
#define PMCSR7 PMCSR7_BASE.UINT32
#define PMCSR7_PMCSR7_0 PMCSR7_BASE.BIT._PMCSR7_0
#define PMCSR7_PMCSR7_1 PMCSR7_BASE.BIT._PMCSR7_1
#define PMCSR7_PMCSR7_2 PMCSR7_BASE.BIT._PMCSR7_2
#define PMCSR7_PMCSR7_3 PMCSR7_BASE.BIT._PMCSR7_3
#define PMCSR7_PMCSR7_4 PMCSR7_BASE.BIT._PMCSR7_4
#define PMCSR7_PMCSR7_5 PMCSR7_BASE.BIT._PMCSR7_5
#define PMCSR7_PMCSR7_6 PMCSR7_BASE.BIT._PMCSR7_6
#define PMCSR7_PMCSR7_7 PMCSR7_BASE.BIT._PMCSR7_7
#define PMCSR7_PMCSR7_8 PMCSR7_BASE.BIT._PMCSR7_8
#define PMCSR7_PMCSR7_9 PMCSR7_BASE.BIT._PMCSR7_9
#define PMCSR7_PMCSR7_10 PMCSR7_BASE.BIT._PMCSR7_10
#define PMCSR7_PMCSR7_11 PMCSR7_BASE.BIT._PMCSR7_11
#define PMCSR7_PMCSR7_12 PMCSR7_BASE.BIT._PMCSR7_12
#define PMCSR7_PMCSR7_13 PMCSR7_BASE.BIT._PMCSR7_13
#define PMCSR7_PMCSR7_14 PMCSR7_BASE.BIT._PMCSR7_14
#define PMCSR7_PMCSR7_15 PMCSR7_BASE.BIT._PMCSR7_15
#define PMCSR7_PMCSR7_16 PMCSR7_BASE.BIT._PMCSR7_16
#define PMCSR7_PMCSR7_17 PMCSR7_BASE.BIT._PMCSR7_17
#define PMCSR7_PMCSR7_18 PMCSR7_BASE.BIT._PMCSR7_18
#define PMCSR7_PMCSR7_19 PMCSR7_BASE.BIT._PMCSR7_19
#define PMCSR7_PMCSR7_20 PMCSR7_BASE.BIT._PMCSR7_20
#define PMCSR7_PMCSR7_21 PMCSR7_BASE.BIT._PMCSR7_21
#define PMCSR7_PMCSR7_22 PMCSR7_BASE.BIT._PMCSR7_22
#define PMCSR7_PMCSR7_23 PMCSR7_BASE.BIT._PMCSR7_23
#define PMCSR7_PMCSR7_24 PMCSR7_BASE.BIT._PMCSR7_24
#define PMCSR7_PMCSR7_25 PMCSR7_BASE.BIT._PMCSR7_25
#define PMCSR7_PMCSR7_26 PMCSR7_BASE.BIT._PMCSR7_26
#define PMCSR7_PMCSR7_27 PMCSR7_BASE.BIT._PMCSR7_27
#define PMCSR7_PMCSR7_28 PMCSR7_BASE.BIT._PMCSR7_28
#define PMCSR7_PMCSR7_29 PMCSR7_BASE.BIT._PMCSR7_29
#define PMCSR7_PMCSR7_30 PMCSR7_BASE.BIT._PMCSR7_30
#define PMCSR7_PMCSR7_31 PMCSR7_BASE.BIT._PMCSR7_31
#define PINV7 PINV7_BASE.UINT16
#define PINV7_PINV7_0 PINV7_BASE.BIT._PINV7_0
#define PINV7_PINV7_1 PINV7_BASE.BIT._PINV7_1
#define PINV7_PINV7_2 PINV7_BASE.BIT._PINV7_2
#define PINV7_PINV7_3 PINV7_BASE.BIT._PINV7_3
#define PINV7_PINV7_4 PINV7_BASE.BIT._PINV7_4
#define PINV7_PINV7_5 PINV7_BASE.BIT._PINV7_5
#define PINV7_PINV7_6 PINV7_BASE.BIT._PINV7_6
#define PINV7_PINV7_7 PINV7_BASE.BIT._PINV7_7
#define PINV7_PINV7_8 PINV7_BASE.BIT._PINV7_8
#define PINV7_PINV7_9 PINV7_BASE.BIT._PINV7_9
#define PINV7_PINV7_10 PINV7_BASE.BIT._PINV7_10
#define PINV7_PINV7_11 PINV7_BASE.BIT._PINV7_11
#define PINV7_PINV7_12 PINV7_BASE.BIT._PINV7_12
#define PINV7_PINV7_13 PINV7_BASE.BIT._PINV7_13
#define PINV7_PINV7_14 PINV7_BASE.BIT._PINV7_14
#define PINV7_PINV7_15 PINV7_BASE.BIT._PINV7_15
#define P8 P8_BASE.UINT16
#define P8_P8_0 P8_BASE.BIT._P8_0
#define P8_P8_1 P8_BASE.BIT._P8_1
#define P8_P8_2 P8_BASE.BIT._P8_2
#define P8_P8_3 P8_BASE.BIT._P8_3
#define P8_P8_4 P8_BASE.BIT._P8_4
#define P8_P8_5 P8_BASE.BIT._P8_5
#define P8_P8_6 P8_BASE.BIT._P8_6
#define P8_P8_7 P8_BASE.BIT._P8_7
#define P8_P8_8 P8_BASE.BIT._P8_8
#define P8_P8_9 P8_BASE.BIT._P8_9
#define P8_P8_10 P8_BASE.BIT._P8_10
#define P8_P8_11 P8_BASE.BIT._P8_11
#define P8_P8_12 P8_BASE.BIT._P8_12
#define P8_P8_13 P8_BASE.BIT._P8_13
#define P8_P8_14 P8_BASE.BIT._P8_14
#define P8_P8_15 P8_BASE.BIT._P8_15
#define PSR8 PSR8_BASE.UINT32
#define PSR8_PSR8_0 PSR8_BASE.BIT._PSR8_0
#define PSR8_PSR8_1 PSR8_BASE.BIT._PSR8_1
#define PSR8_PSR8_2 PSR8_BASE.BIT._PSR8_2
#define PSR8_PSR8_3 PSR8_BASE.BIT._PSR8_3
#define PSR8_PSR8_4 PSR8_BASE.BIT._PSR8_4
#define PSR8_PSR8_5 PSR8_BASE.BIT._PSR8_5
#define PSR8_PSR8_6 PSR8_BASE.BIT._PSR8_6
#define PSR8_PSR8_7 PSR8_BASE.BIT._PSR8_7
#define PSR8_PSR8_8 PSR8_BASE.BIT._PSR8_8
#define PSR8_PSR8_9 PSR8_BASE.BIT._PSR8_9
#define PSR8_PSR8_10 PSR8_BASE.BIT._PSR8_10
#define PSR8_PSR8_11 PSR8_BASE.BIT._PSR8_11
#define PSR8_PSR8_12 PSR8_BASE.BIT._PSR8_12
#define PSR8_PSR8_13 PSR8_BASE.BIT._PSR8_13
#define PSR8_PSR8_14 PSR8_BASE.BIT._PSR8_14
#define PSR8_PSR8_15 PSR8_BASE.BIT._PSR8_15
#define PSR8_PSR8_16 PSR8_BASE.BIT._PSR8_16
#define PSR8_PSR8_17 PSR8_BASE.BIT._PSR8_17
#define PSR8_PSR8_18 PSR8_BASE.BIT._PSR8_18
#define PSR8_PSR8_19 PSR8_BASE.BIT._PSR8_19
#define PSR8_PSR8_20 PSR8_BASE.BIT._PSR8_20
#define PSR8_PSR8_21 PSR8_BASE.BIT._PSR8_21
#define PSR8_PSR8_22 PSR8_BASE.BIT._PSR8_22
#define PSR8_PSR8_23 PSR8_BASE.BIT._PSR8_23
#define PSR8_PSR8_24 PSR8_BASE.BIT._PSR8_24
#define PSR8_PSR8_25 PSR8_BASE.BIT._PSR8_25
#define PSR8_PSR8_26 PSR8_BASE.BIT._PSR8_26
#define PSR8_PSR8_27 PSR8_BASE.BIT._PSR8_27
#define PSR8_PSR8_28 PSR8_BASE.BIT._PSR8_28
#define PSR8_PSR8_29 PSR8_BASE.BIT._PSR8_29
#define PSR8_PSR8_30 PSR8_BASE.BIT._PSR8_30
#define PSR8_PSR8_31 PSR8_BASE.BIT._PSR8_31
#define PNOT8 PNOT8_BASE.UINT16
#define PNOT8_PNOT8_0 PNOT8_BASE.BIT._PNOT8_0
#define PNOT8_PNOT8_1 PNOT8_BASE.BIT._PNOT8_1
#define PNOT8_PNOT8_2 PNOT8_BASE.BIT._PNOT8_2
#define PNOT8_PNOT8_3 PNOT8_BASE.BIT._PNOT8_3
#define PNOT8_PNOT8_4 PNOT8_BASE.BIT._PNOT8_4
#define PNOT8_PNOT8_5 PNOT8_BASE.BIT._PNOT8_5
#define PNOT8_PNOT8_6 PNOT8_BASE.BIT._PNOT8_6
#define PNOT8_PNOT8_7 PNOT8_BASE.BIT._PNOT8_7
#define PNOT8_PNOT8_8 PNOT8_BASE.BIT._PNOT8_8
#define PNOT8_PNOT8_9 PNOT8_BASE.BIT._PNOT8_9
#define PNOT8_PNOT8_10 PNOT8_BASE.BIT._PNOT8_10
#define PNOT8_PNOT8_11 PNOT8_BASE.BIT._PNOT8_11
#define PNOT8_PNOT8_12 PNOT8_BASE.BIT._PNOT8_12
#define PNOT8_PNOT8_13 PNOT8_BASE.BIT._PNOT8_13
#define PNOT8_PNOT8_14 PNOT8_BASE.BIT._PNOT8_14
#define PNOT8_PNOT8_15 PNOT8_BASE.BIT._PNOT8_15
#define PPR8 PPR8_BASE.UINT16
#define PPR8_PPR8_0 PPR8_BASE.BIT._PPR8_0
#define PPR8_PPR8_1 PPR8_BASE.BIT._PPR8_1
#define PPR8_PPR8_2 PPR8_BASE.BIT._PPR8_2
#define PPR8_PPR8_3 PPR8_BASE.BIT._PPR8_3
#define PPR8_PPR8_4 PPR8_BASE.BIT._PPR8_4
#define PPR8_PPR8_5 PPR8_BASE.BIT._PPR8_5
#define PPR8_PPR8_6 PPR8_BASE.BIT._PPR8_6
#define PPR8_PPR8_7 PPR8_BASE.BIT._PPR8_7
#define PPR8_PPR8_8 PPR8_BASE.BIT._PPR8_8
#define PPR8_PPR8_9 PPR8_BASE.BIT._PPR8_9
#define PPR8_PPR8_10 PPR8_BASE.BIT._PPR8_10
#define PPR8_PPR8_11 PPR8_BASE.BIT._PPR8_11
#define PPR8_PPR8_12 PPR8_BASE.BIT._PPR8_12
#define PPR8_PPR8_13 PPR8_BASE.BIT._PPR8_13
#define PPR8_PPR8_14 PPR8_BASE.BIT._PPR8_14
#define PPR8_PPR8_15 PPR8_BASE.BIT._PPR8_15
#define PM8 PM8_BASE.UINT16
#define PM8_PM8_0 PM8_BASE.BIT._PM8_0
#define PM8_PM8_1 PM8_BASE.BIT._PM8_1
#define PM8_PM8_2 PM8_BASE.BIT._PM8_2
#define PM8_PM8_3 PM8_BASE.BIT._PM8_3
#define PM8_PM8_4 PM8_BASE.BIT._PM8_4
#define PM8_PM8_5 PM8_BASE.BIT._PM8_5
#define PM8_PM8_6 PM8_BASE.BIT._PM8_6
#define PM8_PM8_7 PM8_BASE.BIT._PM8_7
#define PM8_PM8_8 PM8_BASE.BIT._PM8_8
#define PM8_PM8_9 PM8_BASE.BIT._PM8_9
#define PM8_PM8_10 PM8_BASE.BIT._PM8_10
#define PM8_PM8_11 PM8_BASE.BIT._PM8_11
#define PM8_PM8_12 PM8_BASE.BIT._PM8_12
#define PM8_PM8_13 PM8_BASE.BIT._PM8_13
#define PM8_PM8_14 PM8_BASE.BIT._PM8_14
#define PM8_PM8_15 PM8_BASE.BIT._PM8_15
#define PMC8 PMC8_BASE.UINT16
#define PMC8_PMC8_0 PMC8_BASE.BIT._PMC8_0
#define PMC8_PMC8_1 PMC8_BASE.BIT._PMC8_1
#define PMC8_PMC8_2 PMC8_BASE.BIT._PMC8_2
#define PMC8_PMC8_3 PMC8_BASE.BIT._PMC8_3
#define PMC8_PMC8_4 PMC8_BASE.BIT._PMC8_4
#define PMC8_PMC8_5 PMC8_BASE.BIT._PMC8_5
#define PMC8_PMC8_6 PMC8_BASE.BIT._PMC8_6
#define PMC8_PMC8_7 PMC8_BASE.BIT._PMC8_7
#define PMC8_PMC8_8 PMC8_BASE.BIT._PMC8_8
#define PMC8_PMC8_9 PMC8_BASE.BIT._PMC8_9
#define PMC8_PMC8_10 PMC8_BASE.BIT._PMC8_10
#define PMC8_PMC8_11 PMC8_BASE.BIT._PMC8_11
#define PMC8_PMC8_12 PMC8_BASE.BIT._PMC8_12
#define PMC8_PMC8_13 PMC8_BASE.BIT._PMC8_13
#define PMC8_PMC8_14 PMC8_BASE.BIT._PMC8_14
#define PMC8_PMC8_15 PMC8_BASE.BIT._PMC8_15
#define PFC8 PFC8_BASE.UINT16
#define PFC8_PFC8_0 PFC8_BASE.BIT._PFC8_0
#define PFC8_PFC8_1 PFC8_BASE.BIT._PFC8_1
#define PFC8_PFC8_2 PFC8_BASE.BIT._PFC8_2
#define PFC8_PFC8_3 PFC8_BASE.BIT._PFC8_3
#define PFC8_PFC8_4 PFC8_BASE.BIT._PFC8_4
#define PFC8_PFC8_5 PFC8_BASE.BIT._PFC8_5
#define PFC8_PFC8_6 PFC8_BASE.BIT._PFC8_6
#define PFC8_PFC8_7 PFC8_BASE.BIT._PFC8_7
#define PFC8_PFC8_8 PFC8_BASE.BIT._PFC8_8
#define PFC8_PFC8_9 PFC8_BASE.BIT._PFC8_9
#define PFC8_PFC8_10 PFC8_BASE.BIT._PFC8_10
#define PFC8_PFC8_11 PFC8_BASE.BIT._PFC8_11
#define PFC8_PFC8_12 PFC8_BASE.BIT._PFC8_12
#define PFC8_PFC8_13 PFC8_BASE.BIT._PFC8_13
#define PFC8_PFC8_14 PFC8_BASE.BIT._PFC8_14
#define PFC8_PFC8_15 PFC8_BASE.BIT._PFC8_15
#define PFCE8 PFCE8_BASE.UINT16
#define PFCE8_PFCE8_0 PFCE8_BASE.BIT._PFCE8_0
#define PFCE8_PFCE8_1 PFCE8_BASE.BIT._PFCE8_1
#define PFCE8_PFCE8_2 PFCE8_BASE.BIT._PFCE8_2
#define PFCE8_PFCE8_3 PFCE8_BASE.BIT._PFCE8_3
#define PFCE8_PFCE8_4 PFCE8_BASE.BIT._PFCE8_4
#define PFCE8_PFCE8_5 PFCE8_BASE.BIT._PFCE8_5
#define PFCE8_PFCE8_6 PFCE8_BASE.BIT._PFCE8_6
#define PFCE8_PFCE8_7 PFCE8_BASE.BIT._PFCE8_7
#define PFCE8_PFCE8_8 PFCE8_BASE.BIT._PFCE8_8
#define PFCE8_PFCE8_9 PFCE8_BASE.BIT._PFCE8_9
#define PFCE8_PFCE8_10 PFCE8_BASE.BIT._PFCE8_10
#define PFCE8_PFCE8_11 PFCE8_BASE.BIT._PFCE8_11
#define PFCE8_PFCE8_12 PFCE8_BASE.BIT._PFCE8_12
#define PFCE8_PFCE8_13 PFCE8_BASE.BIT._PFCE8_13
#define PFCE8_PFCE8_14 PFCE8_BASE.BIT._PFCE8_14
#define PFCE8_PFCE8_15 PFCE8_BASE.BIT._PFCE8_15
#define PMSR8 PMSR8_BASE.UINT32
#define PMSR8_PMSR8_0 PMSR8_BASE.BIT._PMSR8_0
#define PMSR8_PMSR8_1 PMSR8_BASE.BIT._PMSR8_1
#define PMSR8_PMSR8_2 PMSR8_BASE.BIT._PMSR8_2
#define PMSR8_PMSR8_3 PMSR8_BASE.BIT._PMSR8_3
#define PMSR8_PMSR8_4 PMSR8_BASE.BIT._PMSR8_4
#define PMSR8_PMSR8_5 PMSR8_BASE.BIT._PMSR8_5
#define PMSR8_PMSR8_6 PMSR8_BASE.BIT._PMSR8_6
#define PMSR8_PMSR8_7 PMSR8_BASE.BIT._PMSR8_7
#define PMSR8_PMSR8_8 PMSR8_BASE.BIT._PMSR8_8
#define PMSR8_PMSR8_9 PMSR8_BASE.BIT._PMSR8_9
#define PMSR8_PMSR8_10 PMSR8_BASE.BIT._PMSR8_10
#define PMSR8_PMSR8_11 PMSR8_BASE.BIT._PMSR8_11
#define PMSR8_PMSR8_12 PMSR8_BASE.BIT._PMSR8_12
#define PMSR8_PMSR8_13 PMSR8_BASE.BIT._PMSR8_13
#define PMSR8_PMSR8_14 PMSR8_BASE.BIT._PMSR8_14
#define PMSR8_PMSR8_15 PMSR8_BASE.BIT._PMSR8_15
#define PMSR8_PMSR8_16 PMSR8_BASE.BIT._PMSR8_16
#define PMSR8_PMSR8_17 PMSR8_BASE.BIT._PMSR8_17
#define PMSR8_PMSR8_18 PMSR8_BASE.BIT._PMSR8_18
#define PMSR8_PMSR8_19 PMSR8_BASE.BIT._PMSR8_19
#define PMSR8_PMSR8_20 PMSR8_BASE.BIT._PMSR8_20
#define PMSR8_PMSR8_21 PMSR8_BASE.BIT._PMSR8_21
#define PMSR8_PMSR8_22 PMSR8_BASE.BIT._PMSR8_22
#define PMSR8_PMSR8_23 PMSR8_BASE.BIT._PMSR8_23
#define PMSR8_PMSR8_24 PMSR8_BASE.BIT._PMSR8_24
#define PMSR8_PMSR8_25 PMSR8_BASE.BIT._PMSR8_25
#define PMSR8_PMSR8_26 PMSR8_BASE.BIT._PMSR8_26
#define PMSR8_PMSR8_27 PMSR8_BASE.BIT._PMSR8_27
#define PMSR8_PMSR8_28 PMSR8_BASE.BIT._PMSR8_28
#define PMSR8_PMSR8_29 PMSR8_BASE.BIT._PMSR8_29
#define PMSR8_PMSR8_30 PMSR8_BASE.BIT._PMSR8_30
#define PMSR8_PMSR8_31 PMSR8_BASE.BIT._PMSR8_31
#define PMCSR8 PMCSR8_BASE.UINT32
#define PMCSR8_PMCSR8_0 PMCSR8_BASE.BIT._PMCSR8_0
#define PMCSR8_PMCSR8_1 PMCSR8_BASE.BIT._PMCSR8_1
#define PMCSR8_PMCSR8_2 PMCSR8_BASE.BIT._PMCSR8_2
#define PMCSR8_PMCSR8_3 PMCSR8_BASE.BIT._PMCSR8_3
#define PMCSR8_PMCSR8_4 PMCSR8_BASE.BIT._PMCSR8_4
#define PMCSR8_PMCSR8_5 PMCSR8_BASE.BIT._PMCSR8_5
#define PMCSR8_PMCSR8_6 PMCSR8_BASE.BIT._PMCSR8_6
#define PMCSR8_PMCSR8_7 PMCSR8_BASE.BIT._PMCSR8_7
#define PMCSR8_PMCSR8_8 PMCSR8_BASE.BIT._PMCSR8_8
#define PMCSR8_PMCSR8_9 PMCSR8_BASE.BIT._PMCSR8_9
#define PMCSR8_PMCSR8_10 PMCSR8_BASE.BIT._PMCSR8_10
#define PMCSR8_PMCSR8_11 PMCSR8_BASE.BIT._PMCSR8_11
#define PMCSR8_PMCSR8_12 PMCSR8_BASE.BIT._PMCSR8_12
#define PMCSR8_PMCSR8_13 PMCSR8_BASE.BIT._PMCSR8_13
#define PMCSR8_PMCSR8_14 PMCSR8_BASE.BIT._PMCSR8_14
#define PMCSR8_PMCSR8_15 PMCSR8_BASE.BIT._PMCSR8_15
#define PMCSR8_PMCSR8_16 PMCSR8_BASE.BIT._PMCSR8_16
#define PMCSR8_PMCSR8_17 PMCSR8_BASE.BIT._PMCSR8_17
#define PMCSR8_PMCSR8_18 PMCSR8_BASE.BIT._PMCSR8_18
#define PMCSR8_PMCSR8_19 PMCSR8_BASE.BIT._PMCSR8_19
#define PMCSR8_PMCSR8_20 PMCSR8_BASE.BIT._PMCSR8_20
#define PMCSR8_PMCSR8_21 PMCSR8_BASE.BIT._PMCSR8_21
#define PMCSR8_PMCSR8_22 PMCSR8_BASE.BIT._PMCSR8_22
#define PMCSR8_PMCSR8_23 PMCSR8_BASE.BIT._PMCSR8_23
#define PMCSR8_PMCSR8_24 PMCSR8_BASE.BIT._PMCSR8_24
#define PMCSR8_PMCSR8_25 PMCSR8_BASE.BIT._PMCSR8_25
#define PMCSR8_PMCSR8_26 PMCSR8_BASE.BIT._PMCSR8_26
#define PMCSR8_PMCSR8_27 PMCSR8_BASE.BIT._PMCSR8_27
#define PMCSR8_PMCSR8_28 PMCSR8_BASE.BIT._PMCSR8_28
#define PMCSR8_PMCSR8_29 PMCSR8_BASE.BIT._PMCSR8_29
#define PMCSR8_PMCSR8_30 PMCSR8_BASE.BIT._PMCSR8_30
#define PMCSR8_PMCSR8_31 PMCSR8_BASE.BIT._PMCSR8_31
#define PINV8 PINV8_BASE.UINT16
#define PINV8_PINV8_0 PINV8_BASE.BIT._PINV8_0
#define PINV8_PINV8_1 PINV8_BASE.BIT._PINV8_1
#define PINV8_PINV8_2 PINV8_BASE.BIT._PINV8_2
#define PINV8_PINV8_3 PINV8_BASE.BIT._PINV8_3
#define PINV8_PINV8_4 PINV8_BASE.BIT._PINV8_4
#define PINV8_PINV8_5 PINV8_BASE.BIT._PINV8_5
#define PINV8_PINV8_6 PINV8_BASE.BIT._PINV8_6
#define PINV8_PINV8_7 PINV8_BASE.BIT._PINV8_7
#define PINV8_PINV8_8 PINV8_BASE.BIT._PINV8_8
#define PINV8_PINV8_9 PINV8_BASE.BIT._PINV8_9
#define PINV8_PINV8_10 PINV8_BASE.BIT._PINV8_10
#define PINV8_PINV8_11 PINV8_BASE.BIT._PINV8_11
#define PINV8_PINV8_12 PINV8_BASE.BIT._PINV8_12
#define PINV8_PINV8_13 PINV8_BASE.BIT._PINV8_13
#define PINV8_PINV8_14 PINV8_BASE.BIT._PINV8_14
#define PINV8_PINV8_15 PINV8_BASE.BIT._PINV8_15
#define P9 P9_BASE.UINT16
#define P9_P9_0 P9_BASE.BIT._P9_0
#define P9_P9_1 P9_BASE.BIT._P9_1
#define P9_P9_2 P9_BASE.BIT._P9_2
#define P9_P9_3 P9_BASE.BIT._P9_3
#define P9_P9_4 P9_BASE.BIT._P9_4
#define P9_P9_5 P9_BASE.BIT._P9_5
#define P9_P9_6 P9_BASE.BIT._P9_6
#define P9_P9_7 P9_BASE.BIT._P9_7
#define P9_P9_8 P9_BASE.BIT._P9_8
#define P9_P9_9 P9_BASE.BIT._P9_9
#define P9_P9_10 P9_BASE.BIT._P9_10
#define P9_P9_11 P9_BASE.BIT._P9_11
#define P9_P9_12 P9_BASE.BIT._P9_12
#define P9_P9_13 P9_BASE.BIT._P9_13
#define P9_P9_14 P9_BASE.BIT._P9_14
#define P9_P9_15 P9_BASE.BIT._P9_15
#define PSR9 PSR9_BASE.UINT32
#define PSR9_PSR9_0 PSR9_BASE.BIT._PSR9_0
#define PSR9_PSR9_1 PSR9_BASE.BIT._PSR9_1
#define PSR9_PSR9_2 PSR9_BASE.BIT._PSR9_2
#define PSR9_PSR9_3 PSR9_BASE.BIT._PSR9_3
#define PSR9_PSR9_4 PSR9_BASE.BIT._PSR9_4
#define PSR9_PSR9_5 PSR9_BASE.BIT._PSR9_5
#define PSR9_PSR9_6 PSR9_BASE.BIT._PSR9_6
#define PSR9_PSR9_7 PSR9_BASE.BIT._PSR9_7
#define PSR9_PSR9_8 PSR9_BASE.BIT._PSR9_8
#define PSR9_PSR9_9 PSR9_BASE.BIT._PSR9_9
#define PSR9_PSR9_10 PSR9_BASE.BIT._PSR9_10
#define PSR9_PSR9_11 PSR9_BASE.BIT._PSR9_11
#define PSR9_PSR9_12 PSR9_BASE.BIT._PSR9_12
#define PSR9_PSR9_13 PSR9_BASE.BIT._PSR9_13
#define PSR9_PSR9_14 PSR9_BASE.BIT._PSR9_14
#define PSR9_PSR9_15 PSR9_BASE.BIT._PSR9_15
#define PSR9_PSR9_16 PSR9_BASE.BIT._PSR9_16
#define PSR9_PSR9_17 PSR9_BASE.BIT._PSR9_17
#define PSR9_PSR9_18 PSR9_BASE.BIT._PSR9_18
#define PSR9_PSR9_19 PSR9_BASE.BIT._PSR9_19
#define PSR9_PSR9_20 PSR9_BASE.BIT._PSR9_20
#define PSR9_PSR9_21 PSR9_BASE.BIT._PSR9_21
#define PSR9_PSR9_22 PSR9_BASE.BIT._PSR9_22
#define PSR9_PSR9_23 PSR9_BASE.BIT._PSR9_23
#define PSR9_PSR9_24 PSR9_BASE.BIT._PSR9_24
#define PSR9_PSR9_25 PSR9_BASE.BIT._PSR9_25
#define PSR9_PSR9_26 PSR9_BASE.BIT._PSR9_26
#define PSR9_PSR9_27 PSR9_BASE.BIT._PSR9_27
#define PSR9_PSR9_28 PSR9_BASE.BIT._PSR9_28
#define PSR9_PSR9_29 PSR9_BASE.BIT._PSR9_29
#define PSR9_PSR9_30 PSR9_BASE.BIT._PSR9_30
#define PSR9_PSR9_31 PSR9_BASE.BIT._PSR9_31
#define PNOT9 PNOT9_BASE.UINT16
#define PNOT9_PNOT9_0 PNOT9_BASE.BIT._PNOT9_0
#define PNOT9_PNOT9_1 PNOT9_BASE.BIT._PNOT9_1
#define PNOT9_PNOT9_2 PNOT9_BASE.BIT._PNOT9_2
#define PNOT9_PNOT9_3 PNOT9_BASE.BIT._PNOT9_3
#define PNOT9_PNOT9_4 PNOT9_BASE.BIT._PNOT9_4
#define PNOT9_PNOT9_5 PNOT9_BASE.BIT._PNOT9_5
#define PNOT9_PNOT9_6 PNOT9_BASE.BIT._PNOT9_6
#define PNOT9_PNOT9_7 PNOT9_BASE.BIT._PNOT9_7
#define PNOT9_PNOT9_8 PNOT9_BASE.BIT._PNOT9_8
#define PNOT9_PNOT9_9 PNOT9_BASE.BIT._PNOT9_9
#define PNOT9_PNOT9_10 PNOT9_BASE.BIT._PNOT9_10
#define PNOT9_PNOT9_11 PNOT9_BASE.BIT._PNOT9_11
#define PNOT9_PNOT9_12 PNOT9_BASE.BIT._PNOT9_12
#define PNOT9_PNOT9_13 PNOT9_BASE.BIT._PNOT9_13
#define PNOT9_PNOT9_14 PNOT9_BASE.BIT._PNOT9_14
#define PNOT9_PNOT9_15 PNOT9_BASE.BIT._PNOT9_15
#define PPR9 PPR9_BASE.UINT16
#define PPR9_PPR9_0 PPR9_BASE.BIT._PPR9_0
#define PPR9_PPR9_1 PPR9_BASE.BIT._PPR9_1
#define PPR9_PPR9_2 PPR9_BASE.BIT._PPR9_2
#define PPR9_PPR9_3 PPR9_BASE.BIT._PPR9_3
#define PPR9_PPR9_4 PPR9_BASE.BIT._PPR9_4
#define PPR9_PPR9_5 PPR9_BASE.BIT._PPR9_5
#define PPR9_PPR9_6 PPR9_BASE.BIT._PPR9_6
#define PPR9_PPR9_7 PPR9_BASE.BIT._PPR9_7
#define PPR9_PPR9_8 PPR9_BASE.BIT._PPR9_8
#define PPR9_PPR9_9 PPR9_BASE.BIT._PPR9_9
#define PPR9_PPR9_10 PPR9_BASE.BIT._PPR9_10
#define PPR9_PPR9_11 PPR9_BASE.BIT._PPR9_11
#define PPR9_PPR9_12 PPR9_BASE.BIT._PPR9_12
#define PPR9_PPR9_13 PPR9_BASE.BIT._PPR9_13
#define PPR9_PPR9_14 PPR9_BASE.BIT._PPR9_14
#define PPR9_PPR9_15 PPR9_BASE.BIT._PPR9_15
#define PM9 PM9_BASE.UINT16
#define PM9_PM9_0 PM9_BASE.BIT._PM9_0
#define PM9_PM9_1 PM9_BASE.BIT._PM9_1
#define PM9_PM9_2 PM9_BASE.BIT._PM9_2
#define PM9_PM9_3 PM9_BASE.BIT._PM9_3
#define PM9_PM9_4 PM9_BASE.BIT._PM9_4
#define PM9_PM9_5 PM9_BASE.BIT._PM9_5
#define PM9_PM9_6 PM9_BASE.BIT._PM9_6
#define PM9_PM9_7 PM9_BASE.BIT._PM9_7
#define PM9_PM9_8 PM9_BASE.BIT._PM9_8
#define PM9_PM9_9 PM9_BASE.BIT._PM9_9
#define PM9_PM9_10 PM9_BASE.BIT._PM9_10
#define PM9_PM9_11 PM9_BASE.BIT._PM9_11
#define PM9_PM9_12 PM9_BASE.BIT._PM9_12
#define PM9_PM9_13 PM9_BASE.BIT._PM9_13
#define PM9_PM9_14 PM9_BASE.BIT._PM9_14
#define PM9_PM9_15 PM9_BASE.BIT._PM9_15
#define PMC9 PMC9_BASE.UINT16
#define PMC9_PMC9_0 PMC9_BASE.BIT._PMC9_0
#define PMC9_PMC9_1 PMC9_BASE.BIT._PMC9_1
#define PMC9_PMC9_2 PMC9_BASE.BIT._PMC9_2
#define PMC9_PMC9_3 PMC9_BASE.BIT._PMC9_3
#define PMC9_PMC9_4 PMC9_BASE.BIT._PMC9_4
#define PMC9_PMC9_5 PMC9_BASE.BIT._PMC9_5
#define PMC9_PMC9_6 PMC9_BASE.BIT._PMC9_6
#define PMC9_PMC9_7 PMC9_BASE.BIT._PMC9_7
#define PMC9_PMC9_8 PMC9_BASE.BIT._PMC9_8
#define PMC9_PMC9_9 PMC9_BASE.BIT._PMC9_9
#define PMC9_PMC9_10 PMC9_BASE.BIT._PMC9_10
#define PMC9_PMC9_11 PMC9_BASE.BIT._PMC9_11
#define PMC9_PMC9_12 PMC9_BASE.BIT._PMC9_12
#define PMC9_PMC9_13 PMC9_BASE.BIT._PMC9_13
#define PMC9_PMC9_14 PMC9_BASE.BIT._PMC9_14
#define PMC9_PMC9_15 PMC9_BASE.BIT._PMC9_15
#define PFC9 PFC9_BASE.UINT16
#define PFC9_PFC9_0 PFC9_BASE.BIT._PFC9_0
#define PFC9_PFC9_1 PFC9_BASE.BIT._PFC9_1
#define PFC9_PFC9_2 PFC9_BASE.BIT._PFC9_2
#define PFC9_PFC9_3 PFC9_BASE.BIT._PFC9_3
#define PFC9_PFC9_4 PFC9_BASE.BIT._PFC9_4
#define PFC9_PFC9_5 PFC9_BASE.BIT._PFC9_5
#define PFC9_PFC9_6 PFC9_BASE.BIT._PFC9_6
#define PFC9_PFC9_7 PFC9_BASE.BIT._PFC9_7
#define PFC9_PFC9_8 PFC9_BASE.BIT._PFC9_8
#define PFC9_PFC9_9 PFC9_BASE.BIT._PFC9_9
#define PFC9_PFC9_10 PFC9_BASE.BIT._PFC9_10
#define PFC9_PFC9_11 PFC9_BASE.BIT._PFC9_11
#define PFC9_PFC9_12 PFC9_BASE.BIT._PFC9_12
#define PFC9_PFC9_13 PFC9_BASE.BIT._PFC9_13
#define PFC9_PFC9_14 PFC9_BASE.BIT._PFC9_14
#define PFC9_PFC9_15 PFC9_BASE.BIT._PFC9_15
#define PFCE9 PFCE9_BASE.UINT16
#define PFCE9_PFCE9_0 PFCE9_BASE.BIT._PFCE9_0
#define PFCE9_PFCE9_1 PFCE9_BASE.BIT._PFCE9_1
#define PFCE9_PFCE9_2 PFCE9_BASE.BIT._PFCE9_2
#define PFCE9_PFCE9_3 PFCE9_BASE.BIT._PFCE9_3
#define PFCE9_PFCE9_4 PFCE9_BASE.BIT._PFCE9_4
#define PFCE9_PFCE9_5 PFCE9_BASE.BIT._PFCE9_5
#define PFCE9_PFCE9_6 PFCE9_BASE.BIT._PFCE9_6
#define PFCE9_PFCE9_7 PFCE9_BASE.BIT._PFCE9_7
#define PFCE9_PFCE9_8 PFCE9_BASE.BIT._PFCE9_8
#define PFCE9_PFCE9_9 PFCE9_BASE.BIT._PFCE9_9
#define PFCE9_PFCE9_10 PFCE9_BASE.BIT._PFCE9_10
#define PFCE9_PFCE9_11 PFCE9_BASE.BIT._PFCE9_11
#define PFCE9_PFCE9_12 PFCE9_BASE.BIT._PFCE9_12
#define PFCE9_PFCE9_13 PFCE9_BASE.BIT._PFCE9_13
#define PFCE9_PFCE9_14 PFCE9_BASE.BIT._PFCE9_14
#define PFCE9_PFCE9_15 PFCE9_BASE.BIT._PFCE9_15
#define PMSR9 PMSR9_BASE.UINT32
#define PMSR9_PMSR9_0 PMSR9_BASE.BIT._PMSR9_0
#define PMSR9_PMSR9_1 PMSR9_BASE.BIT._PMSR9_1
#define PMSR9_PMSR9_2 PMSR9_BASE.BIT._PMSR9_2
#define PMSR9_PMSR9_3 PMSR9_BASE.BIT._PMSR9_3
#define PMSR9_PMSR9_4 PMSR9_BASE.BIT._PMSR9_4
#define PMSR9_PMSR9_5 PMSR9_BASE.BIT._PMSR9_5
#define PMSR9_PMSR9_6 PMSR9_BASE.BIT._PMSR9_6
#define PMSR9_PMSR9_7 PMSR9_BASE.BIT._PMSR9_7
#define PMSR9_PMSR9_8 PMSR9_BASE.BIT._PMSR9_8
#define PMSR9_PMSR9_9 PMSR9_BASE.BIT._PMSR9_9
#define PMSR9_PMSR9_10 PMSR9_BASE.BIT._PMSR9_10
#define PMSR9_PMSR9_11 PMSR9_BASE.BIT._PMSR9_11
#define PMSR9_PMSR9_12 PMSR9_BASE.BIT._PMSR9_12
#define PMSR9_PMSR9_13 PMSR9_BASE.BIT._PMSR9_13
#define PMSR9_PMSR9_14 PMSR9_BASE.BIT._PMSR9_14
#define PMSR9_PMSR9_15 PMSR9_BASE.BIT._PMSR9_15
#define PMSR9_PMSR9_16 PMSR9_BASE.BIT._PMSR9_16
#define PMSR9_PMSR9_17 PMSR9_BASE.BIT._PMSR9_17
#define PMSR9_PMSR9_18 PMSR9_BASE.BIT._PMSR9_18
#define PMSR9_PMSR9_19 PMSR9_BASE.BIT._PMSR9_19
#define PMSR9_PMSR9_20 PMSR9_BASE.BIT._PMSR9_20
#define PMSR9_PMSR9_21 PMSR9_BASE.BIT._PMSR9_21
#define PMSR9_PMSR9_22 PMSR9_BASE.BIT._PMSR9_22
#define PMSR9_PMSR9_23 PMSR9_BASE.BIT._PMSR9_23
#define PMSR9_PMSR9_24 PMSR9_BASE.BIT._PMSR9_24
#define PMSR9_PMSR9_25 PMSR9_BASE.BIT._PMSR9_25
#define PMSR9_PMSR9_26 PMSR9_BASE.BIT._PMSR9_26
#define PMSR9_PMSR9_27 PMSR9_BASE.BIT._PMSR9_27
#define PMSR9_PMSR9_28 PMSR9_BASE.BIT._PMSR9_28
#define PMSR9_PMSR9_29 PMSR9_BASE.BIT._PMSR9_29
#define PMSR9_PMSR9_30 PMSR9_BASE.BIT._PMSR9_30
#define PMSR9_PMSR9_31 PMSR9_BASE.BIT._PMSR9_31
#define PMCSR9 PMCSR9_BASE.UINT32
#define PMCSR9_PMCSR9_0 PMCSR9_BASE.BIT._PMCSR9_0
#define PMCSR9_PMCSR9_1 PMCSR9_BASE.BIT._PMCSR9_1
#define PMCSR9_PMCSR9_2 PMCSR9_BASE.BIT._PMCSR9_2
#define PMCSR9_PMCSR9_3 PMCSR9_BASE.BIT._PMCSR9_3
#define PMCSR9_PMCSR9_4 PMCSR9_BASE.BIT._PMCSR9_4
#define PMCSR9_PMCSR9_5 PMCSR9_BASE.BIT._PMCSR9_5
#define PMCSR9_PMCSR9_6 PMCSR9_BASE.BIT._PMCSR9_6
#define PMCSR9_PMCSR9_7 PMCSR9_BASE.BIT._PMCSR9_7
#define PMCSR9_PMCSR9_8 PMCSR9_BASE.BIT._PMCSR9_8
#define PMCSR9_PMCSR9_9 PMCSR9_BASE.BIT._PMCSR9_9
#define PMCSR9_PMCSR9_10 PMCSR9_BASE.BIT._PMCSR9_10
#define PMCSR9_PMCSR9_11 PMCSR9_BASE.BIT._PMCSR9_11
#define PMCSR9_PMCSR9_12 PMCSR9_BASE.BIT._PMCSR9_12
#define PMCSR9_PMCSR9_13 PMCSR9_BASE.BIT._PMCSR9_13
#define PMCSR9_PMCSR9_14 PMCSR9_BASE.BIT._PMCSR9_14
#define PMCSR9_PMCSR9_15 PMCSR9_BASE.BIT._PMCSR9_15
#define PMCSR9_PMCSR9_16 PMCSR9_BASE.BIT._PMCSR9_16
#define PMCSR9_PMCSR9_17 PMCSR9_BASE.BIT._PMCSR9_17
#define PMCSR9_PMCSR9_18 PMCSR9_BASE.BIT._PMCSR9_18
#define PMCSR9_PMCSR9_19 PMCSR9_BASE.BIT._PMCSR9_19
#define PMCSR9_PMCSR9_20 PMCSR9_BASE.BIT._PMCSR9_20
#define PMCSR9_PMCSR9_21 PMCSR9_BASE.BIT._PMCSR9_21
#define PMCSR9_PMCSR9_22 PMCSR9_BASE.BIT._PMCSR9_22
#define PMCSR9_PMCSR9_23 PMCSR9_BASE.BIT._PMCSR9_23
#define PMCSR9_PMCSR9_24 PMCSR9_BASE.BIT._PMCSR9_24
#define PMCSR9_PMCSR9_25 PMCSR9_BASE.BIT._PMCSR9_25
#define PMCSR9_PMCSR9_26 PMCSR9_BASE.BIT._PMCSR9_26
#define PMCSR9_PMCSR9_27 PMCSR9_BASE.BIT._PMCSR9_27
#define PMCSR9_PMCSR9_28 PMCSR9_BASE.BIT._PMCSR9_28
#define PMCSR9_PMCSR9_29 PMCSR9_BASE.BIT._PMCSR9_29
#define PMCSR9_PMCSR9_30 PMCSR9_BASE.BIT._PMCSR9_30
#define PMCSR9_PMCSR9_31 PMCSR9_BASE.BIT._PMCSR9_31
#define PINV9 PINV9_BASE.UINT16
#define PINV9_PINV9_0 PINV9_BASE.BIT._PINV9_0
#define PINV9_PINV9_1 PINV9_BASE.BIT._PINV9_1
#define PINV9_PINV9_2 PINV9_BASE.BIT._PINV9_2
#define PINV9_PINV9_3 PINV9_BASE.BIT._PINV9_3
#define PINV9_PINV9_4 PINV9_BASE.BIT._PINV9_4
#define PINV9_PINV9_5 PINV9_BASE.BIT._PINV9_5
#define PINV9_PINV9_6 PINV9_BASE.BIT._PINV9_6
#define PINV9_PINV9_7 PINV9_BASE.BIT._PINV9_7
#define PINV9_PINV9_8 PINV9_BASE.BIT._PINV9_8
#define PINV9_PINV9_9 PINV9_BASE.BIT._PINV9_9
#define PINV9_PINV9_10 PINV9_BASE.BIT._PINV9_10
#define PINV9_PINV9_11 PINV9_BASE.BIT._PINV9_11
#define PINV9_PINV9_12 PINV9_BASE.BIT._PINV9_12
#define PINV9_PINV9_13 PINV9_BASE.BIT._PINV9_13
#define PINV9_PINV9_14 PINV9_BASE.BIT._PINV9_14
#define PINV9_PINV9_15 PINV9_BASE.BIT._PINV9_15
#define PCR0_0 PCR0_0_BASE.UINT32
#define PCR0_0_PFC PCR0_0_BASE.BIT._PFC
#define PCR0_0_PFCE PCR0_0_BASE.BIT._PFCE
#define PCR0_0_PM PCR0_0_BASE.BIT._PM
#define PCR0_0_PIPC PCR0_0_BASE.BIT._PIPC
#define PCR0_0_PMC PCR0_0_BASE.BIT._PMC
#define PCR0_0_PPR PCR0_0_BASE.BIT._PPR
#define PCR0_0_P PCR0_0_BASE.BIT._P
#define PCR0_0_PIBC PCR0_0_BASE.BIT._PIBC
#define PCR0_0_PBDC PCR0_0_BASE.BIT._PBDC
#define PCR0_0_PD PCR0_0_BASE.BIT._PD
#define PCR0_0_PU PCR0_0_BASE.BIT._PU
#define PCR0_0_PIS PCR0_0_BASE.BIT._PIS
#define PCR0_0_PDSC PCR0_0_BASE.BIT._PDSC
#define PCR0_0_PUCC PCR0_0_BASE.BIT._PUCC
#define PCR0_0_PODCE PCR0_0_BASE.BIT._PODCE
#define PCR0_0_PODC PCR0_0_BASE.BIT._PODC
#define PCR0_0_PINV PCR0_0_BASE.BIT._PINV
#define PCR0_1 PCR0_1_BASE.UINT32
#define PCR0_1_PFC PCR0_1_BASE.BIT._PFC
#define PCR0_1_PFCE PCR0_1_BASE.BIT._PFCE
#define PCR0_1_PM PCR0_1_BASE.BIT._PM
#define PCR0_1_PIPC PCR0_1_BASE.BIT._PIPC
#define PCR0_1_PMC PCR0_1_BASE.BIT._PMC
#define PCR0_1_PPR PCR0_1_BASE.BIT._PPR
#define PCR0_1_P PCR0_1_BASE.BIT._P
#define PCR0_1_PIBC PCR0_1_BASE.BIT._PIBC
#define PCR0_1_PBDC PCR0_1_BASE.BIT._PBDC
#define PCR0_1_PD PCR0_1_BASE.BIT._PD
#define PCR0_1_PU PCR0_1_BASE.BIT._PU
#define PCR0_1_PIS PCR0_1_BASE.BIT._PIS
#define PCR0_1_PDSC PCR0_1_BASE.BIT._PDSC
#define PCR0_1_PUCC PCR0_1_BASE.BIT._PUCC
#define PCR0_1_PODCE PCR0_1_BASE.BIT._PODCE
#define PCR0_1_PODC PCR0_1_BASE.BIT._PODC
#define PCR0_1_PINV PCR0_1_BASE.BIT._PINV
#define PCR0_2 PCR0_2_BASE.UINT32
#define PCR0_2_PFC PCR0_2_BASE.BIT._PFC
#define PCR0_2_PFCE PCR0_2_BASE.BIT._PFCE
#define PCR0_2_PM PCR0_2_BASE.BIT._PM
#define PCR0_2_PIPC PCR0_2_BASE.BIT._PIPC
#define PCR0_2_PMC PCR0_2_BASE.BIT._PMC
#define PCR0_2_PPR PCR0_2_BASE.BIT._PPR
#define PCR0_2_P PCR0_2_BASE.BIT._P
#define PCR0_2_PIBC PCR0_2_BASE.BIT._PIBC
#define PCR0_2_PBDC PCR0_2_BASE.BIT._PBDC
#define PCR0_2_PD PCR0_2_BASE.BIT._PD
#define PCR0_2_PU PCR0_2_BASE.BIT._PU
#define PCR0_2_PIS PCR0_2_BASE.BIT._PIS
#define PCR0_2_PDSC PCR0_2_BASE.BIT._PDSC
#define PCR0_2_PUCC PCR0_2_BASE.BIT._PUCC
#define PCR0_2_PODCE PCR0_2_BASE.BIT._PODCE
#define PCR0_2_PODC PCR0_2_BASE.BIT._PODC
#define PCR0_2_PINV PCR0_2_BASE.BIT._PINV
#define PCR0_3 PCR0_3_BASE.UINT32
#define PCR0_3_PFC PCR0_3_BASE.BIT._PFC
#define PCR0_3_PFCE PCR0_3_BASE.BIT._PFCE
#define PCR0_3_PM PCR0_3_BASE.BIT._PM
#define PCR0_3_PIPC PCR0_3_BASE.BIT._PIPC
#define PCR0_3_PMC PCR0_3_BASE.BIT._PMC
#define PCR0_3_PPR PCR0_3_BASE.BIT._PPR
#define PCR0_3_P PCR0_3_BASE.BIT._P
#define PCR0_3_PIBC PCR0_3_BASE.BIT._PIBC
#define PCR0_3_PBDC PCR0_3_BASE.BIT._PBDC
#define PCR0_3_PD PCR0_3_BASE.BIT._PD
#define PCR0_3_PU PCR0_3_BASE.BIT._PU
#define PCR0_3_PIS PCR0_3_BASE.BIT._PIS
#define PCR0_3_PDSC PCR0_3_BASE.BIT._PDSC
#define PCR0_3_PUCC PCR0_3_BASE.BIT._PUCC
#define PCR0_3_PODCE PCR0_3_BASE.BIT._PODCE
#define PCR0_3_PODC PCR0_3_BASE.BIT._PODC
#define PCR0_3_PINV PCR0_3_BASE.BIT._PINV
#define PCR0_4 PCR0_4_BASE.UINT32
#define PCR0_4_PFC PCR0_4_BASE.BIT._PFC
#define PCR0_4_PFCE PCR0_4_BASE.BIT._PFCE
#define PCR0_4_PM PCR0_4_BASE.BIT._PM
#define PCR0_4_PIPC PCR0_4_BASE.BIT._PIPC
#define PCR0_4_PMC PCR0_4_BASE.BIT._PMC
#define PCR0_4_PPR PCR0_4_BASE.BIT._PPR
#define PCR0_4_P PCR0_4_BASE.BIT._P
#define PCR0_4_PIBC PCR0_4_BASE.BIT._PIBC
#define PCR0_4_PBDC PCR0_4_BASE.BIT._PBDC
#define PCR0_4_PD PCR0_4_BASE.BIT._PD
#define PCR0_4_PU PCR0_4_BASE.BIT._PU
#define PCR0_4_PIS PCR0_4_BASE.BIT._PIS
#define PCR0_4_PDSC PCR0_4_BASE.BIT._PDSC
#define PCR0_4_PUCC PCR0_4_BASE.BIT._PUCC
#define PCR0_4_PODCE PCR0_4_BASE.BIT._PODCE
#define PCR0_4_PODC PCR0_4_BASE.BIT._PODC
#define PCR0_4_PINV PCR0_4_BASE.BIT._PINV
#define PCR0_5 PCR0_5_BASE.UINT32
#define PCR0_5_PFC PCR0_5_BASE.BIT._PFC
#define PCR0_5_PFCE PCR0_5_BASE.BIT._PFCE
#define PCR0_5_PM PCR0_5_BASE.BIT._PM
#define PCR0_5_PIPC PCR0_5_BASE.BIT._PIPC
#define PCR0_5_PMC PCR0_5_BASE.BIT._PMC
#define PCR0_5_PPR PCR0_5_BASE.BIT._PPR
#define PCR0_5_P PCR0_5_BASE.BIT._P
#define PCR0_5_PIBC PCR0_5_BASE.BIT._PIBC
#define PCR0_5_PBDC PCR0_5_BASE.BIT._PBDC
#define PCR0_5_PD PCR0_5_BASE.BIT._PD
#define PCR0_5_PU PCR0_5_BASE.BIT._PU
#define PCR0_5_PIS PCR0_5_BASE.BIT._PIS
#define PCR0_5_PDSC PCR0_5_BASE.BIT._PDSC
#define PCR0_5_PUCC PCR0_5_BASE.BIT._PUCC
#define PCR0_5_PODCE PCR0_5_BASE.BIT._PODCE
#define PCR0_5_PODC PCR0_5_BASE.BIT._PODC
#define PCR0_5_PINV PCR0_5_BASE.BIT._PINV
#define PCR0_6 PCR0_6_BASE.UINT32
#define PCR0_6_PFC PCR0_6_BASE.BIT._PFC
#define PCR0_6_PFCE PCR0_6_BASE.BIT._PFCE
#define PCR0_6_PM PCR0_6_BASE.BIT._PM
#define PCR0_6_PIPC PCR0_6_BASE.BIT._PIPC
#define PCR0_6_PMC PCR0_6_BASE.BIT._PMC
#define PCR0_6_PPR PCR0_6_BASE.BIT._PPR
#define PCR0_6_P PCR0_6_BASE.BIT._P
#define PCR0_6_PIBC PCR0_6_BASE.BIT._PIBC
#define PCR0_6_PBDC PCR0_6_BASE.BIT._PBDC
#define PCR0_6_PD PCR0_6_BASE.BIT._PD
#define PCR0_6_PU PCR0_6_BASE.BIT._PU
#define PCR0_6_PIS PCR0_6_BASE.BIT._PIS
#define PCR0_6_PDSC PCR0_6_BASE.BIT._PDSC
#define PCR0_6_PUCC PCR0_6_BASE.BIT._PUCC
#define PCR0_6_PODCE PCR0_6_BASE.BIT._PODCE
#define PCR0_6_PODC PCR0_6_BASE.BIT._PODC
#define PCR0_6_PINV PCR0_6_BASE.BIT._PINV
#define PCR0_7 PCR0_7_BASE.UINT32
#define PCR0_7_PFC PCR0_7_BASE.BIT._PFC
#define PCR0_7_PFCE PCR0_7_BASE.BIT._PFCE
#define PCR0_7_PM PCR0_7_BASE.BIT._PM
#define PCR0_7_PIPC PCR0_7_BASE.BIT._PIPC
#define PCR0_7_PMC PCR0_7_BASE.BIT._PMC
#define PCR0_7_PPR PCR0_7_BASE.BIT._PPR
#define PCR0_7_P PCR0_7_BASE.BIT._P
#define PCR0_7_PIBC PCR0_7_BASE.BIT._PIBC
#define PCR0_7_PBDC PCR0_7_BASE.BIT._PBDC
#define PCR0_7_PD PCR0_7_BASE.BIT._PD
#define PCR0_7_PU PCR0_7_BASE.BIT._PU
#define PCR0_7_PIS PCR0_7_BASE.BIT._PIS
#define PCR0_7_PDSC PCR0_7_BASE.BIT._PDSC
#define PCR0_7_PUCC PCR0_7_BASE.BIT._PUCC
#define PCR0_7_PODCE PCR0_7_BASE.BIT._PODCE
#define PCR0_7_PODC PCR0_7_BASE.BIT._PODC
#define PCR0_7_PINV PCR0_7_BASE.BIT._PINV
#define PCR0_8 PCR0_8_BASE.UINT32
#define PCR0_8_PFC PCR0_8_BASE.BIT._PFC
#define PCR0_8_PFCE PCR0_8_BASE.BIT._PFCE
#define PCR0_8_PM PCR0_8_BASE.BIT._PM
#define PCR0_8_PIPC PCR0_8_BASE.BIT._PIPC
#define PCR0_8_PMC PCR0_8_BASE.BIT._PMC
#define PCR0_8_PPR PCR0_8_BASE.BIT._PPR
#define PCR0_8_P PCR0_8_BASE.BIT._P
#define PCR0_8_PIBC PCR0_8_BASE.BIT._PIBC
#define PCR0_8_PBDC PCR0_8_BASE.BIT._PBDC
#define PCR0_8_PD PCR0_8_BASE.BIT._PD
#define PCR0_8_PU PCR0_8_BASE.BIT._PU
#define PCR0_8_PIS PCR0_8_BASE.BIT._PIS
#define PCR0_8_PDSC PCR0_8_BASE.BIT._PDSC
#define PCR0_8_PUCC PCR0_8_BASE.BIT._PUCC
#define PCR0_8_PODCE PCR0_8_BASE.BIT._PODCE
#define PCR0_8_PODC PCR0_8_BASE.BIT._PODC
#define PCR0_8_PINV PCR0_8_BASE.BIT._PINV
#define PCR0_9 PCR0_9_BASE.UINT32
#define PCR0_9_PFC PCR0_9_BASE.BIT._PFC
#define PCR0_9_PFCE PCR0_9_BASE.BIT._PFCE
#define PCR0_9_PM PCR0_9_BASE.BIT._PM
#define PCR0_9_PIPC PCR0_9_BASE.BIT._PIPC
#define PCR0_9_PMC PCR0_9_BASE.BIT._PMC
#define PCR0_9_PPR PCR0_9_BASE.BIT._PPR
#define PCR0_9_P PCR0_9_BASE.BIT._P
#define PCR0_9_PIBC PCR0_9_BASE.BIT._PIBC
#define PCR0_9_PBDC PCR0_9_BASE.BIT._PBDC
#define PCR0_9_PD PCR0_9_BASE.BIT._PD
#define PCR0_9_PU PCR0_9_BASE.BIT._PU
#define PCR0_9_PIS PCR0_9_BASE.BIT._PIS
#define PCR0_9_PDSC PCR0_9_BASE.BIT._PDSC
#define PCR0_9_PUCC PCR0_9_BASE.BIT._PUCC
#define PCR0_9_PODCE PCR0_9_BASE.BIT._PODCE
#define PCR0_9_PODC PCR0_9_BASE.BIT._PODC
#define PCR0_9_PINV PCR0_9_BASE.BIT._PINV
#define PCR0_10 PCR0_10_BASE.UINT32
#define PCR0_10_PFC PCR0_10_BASE.BIT._PFC
#define PCR0_10_PFCE PCR0_10_BASE.BIT._PFCE
#define PCR0_10_PM PCR0_10_BASE.BIT._PM
#define PCR0_10_PIPC PCR0_10_BASE.BIT._PIPC
#define PCR0_10_PMC PCR0_10_BASE.BIT._PMC
#define PCR0_10_PPR PCR0_10_BASE.BIT._PPR
#define PCR0_10_P PCR0_10_BASE.BIT._P
#define PCR0_10_PIBC PCR0_10_BASE.BIT._PIBC
#define PCR0_10_PBDC PCR0_10_BASE.BIT._PBDC
#define PCR0_10_PD PCR0_10_BASE.BIT._PD
#define PCR0_10_PU PCR0_10_BASE.BIT._PU
#define PCR0_10_PIS PCR0_10_BASE.BIT._PIS
#define PCR0_10_PDSC PCR0_10_BASE.BIT._PDSC
#define PCR0_10_PUCC PCR0_10_BASE.BIT._PUCC
#define PCR0_10_PODCE PCR0_10_BASE.BIT._PODCE
#define PCR0_10_PODC PCR0_10_BASE.BIT._PODC
#define PCR0_10_PINV PCR0_10_BASE.BIT._PINV
#define PCR0_13 PCR0_13_BASE.UINT32
#define PCR0_13_PFC PCR0_13_BASE.BIT._PFC
#define PCR0_13_PFCE PCR0_13_BASE.BIT._PFCE
#define PCR0_13_PM PCR0_13_BASE.BIT._PM
#define PCR0_13_PIPC PCR0_13_BASE.BIT._PIPC
#define PCR0_13_PMC PCR0_13_BASE.BIT._PMC
#define PCR0_13_PPR PCR0_13_BASE.BIT._PPR
#define PCR0_13_P PCR0_13_BASE.BIT._P
#define PCR0_13_PIBC PCR0_13_BASE.BIT._PIBC
#define PCR0_13_PBDC PCR0_13_BASE.BIT._PBDC
#define PCR0_13_PD PCR0_13_BASE.BIT._PD
#define PCR0_13_PU PCR0_13_BASE.BIT._PU
#define PCR0_13_PIS PCR0_13_BASE.BIT._PIS
#define PCR0_13_PDSC PCR0_13_BASE.BIT._PDSC
#define PCR0_13_PUCC PCR0_13_BASE.BIT._PUCC
#define PCR0_13_PODCE PCR0_13_BASE.BIT._PODCE
#define PCR0_13_PODC PCR0_13_BASE.BIT._PODC
#define PCR0_13_PINV PCR0_13_BASE.BIT._PINV
#define PCR0_14 PCR0_14_BASE.UINT32
#define PCR0_14_PFC PCR0_14_BASE.BIT._PFC
#define PCR0_14_PFCE PCR0_14_BASE.BIT._PFCE
#define PCR0_14_PM PCR0_14_BASE.BIT._PM
#define PCR0_14_PIPC PCR0_14_BASE.BIT._PIPC
#define PCR0_14_PMC PCR0_14_BASE.BIT._PMC
#define PCR0_14_PPR PCR0_14_BASE.BIT._PPR
#define PCR0_14_P PCR0_14_BASE.BIT._P
#define PCR0_14_PIBC PCR0_14_BASE.BIT._PIBC
#define PCR0_14_PBDC PCR0_14_BASE.BIT._PBDC
#define PCR0_14_PD PCR0_14_BASE.BIT._PD
#define PCR0_14_PU PCR0_14_BASE.BIT._PU
#define PCR0_14_PIS PCR0_14_BASE.BIT._PIS
#define PCR0_14_PDSC PCR0_14_BASE.BIT._PDSC
#define PCR0_14_PUCC PCR0_14_BASE.BIT._PUCC
#define PCR0_14_PODCE PCR0_14_BASE.BIT._PODCE
#define PCR0_14_PODC PCR0_14_BASE.BIT._PODC
#define PCR0_14_PINV PCR0_14_BASE.BIT._PINV
#define PCR1_1 PCR1_1_BASE.UINT32
#define PCR1_1_PFC PCR1_1_BASE.BIT._PFC
#define PCR1_1_PFCE PCR1_1_BASE.BIT._PFCE
#define PCR1_1_PM PCR1_1_BASE.BIT._PM
#define PCR1_1_PIPC PCR1_1_BASE.BIT._PIPC
#define PCR1_1_PMC PCR1_1_BASE.BIT._PMC
#define PCR1_1_PPR PCR1_1_BASE.BIT._PPR
#define PCR1_1_P PCR1_1_BASE.BIT._P
#define PCR1_1_PIBC PCR1_1_BASE.BIT._PIBC
#define PCR1_1_PBDC PCR1_1_BASE.BIT._PBDC
#define PCR1_1_PD PCR1_1_BASE.BIT._PD
#define PCR1_1_PU PCR1_1_BASE.BIT._PU
#define PCR1_1_PIS PCR1_1_BASE.BIT._PIS
#define PCR1_1_PDSC PCR1_1_BASE.BIT._PDSC
#define PCR1_1_PUCC PCR1_1_BASE.BIT._PUCC
#define PCR1_1_PODCE PCR1_1_BASE.BIT._PODCE
#define PCR1_1_PODC PCR1_1_BASE.BIT._PODC
#define PCR1_1_PINV PCR1_1_BASE.BIT._PINV
#define PCR1_2 PCR1_2_BASE.UINT32
#define PCR1_2_PFC PCR1_2_BASE.BIT._PFC
#define PCR1_2_PFCE PCR1_2_BASE.BIT._PFCE
#define PCR1_2_PM PCR1_2_BASE.BIT._PM
#define PCR1_2_PIPC PCR1_2_BASE.BIT._PIPC
#define PCR1_2_PMC PCR1_2_BASE.BIT._PMC
#define PCR1_2_PPR PCR1_2_BASE.BIT._PPR
#define PCR1_2_P PCR1_2_BASE.BIT._P
#define PCR1_2_PIBC PCR1_2_BASE.BIT._PIBC
#define PCR1_2_PBDC PCR1_2_BASE.BIT._PBDC
#define PCR1_2_PD PCR1_2_BASE.BIT._PD
#define PCR1_2_PU PCR1_2_BASE.BIT._PU
#define PCR1_2_PIS PCR1_2_BASE.BIT._PIS
#define PCR1_2_PDSC PCR1_2_BASE.BIT._PDSC
#define PCR1_2_PUCC PCR1_2_BASE.BIT._PUCC
#define PCR1_2_PODCE PCR1_2_BASE.BIT._PODCE
#define PCR1_2_PODC PCR1_2_BASE.BIT._PODC
#define PCR1_2_PINV PCR1_2_BASE.BIT._PINV
#define PCR1_3 PCR1_3_BASE.UINT32
#define PCR1_3_PFC PCR1_3_BASE.BIT._PFC
#define PCR1_3_PFCE PCR1_3_BASE.BIT._PFCE
#define PCR1_3_PM PCR1_3_BASE.BIT._PM
#define PCR1_3_PIPC PCR1_3_BASE.BIT._PIPC
#define PCR1_3_PMC PCR1_3_BASE.BIT._PMC
#define PCR1_3_PPR PCR1_3_BASE.BIT._PPR
#define PCR1_3_P PCR1_3_BASE.BIT._P
#define PCR1_3_PIBC PCR1_3_BASE.BIT._PIBC
#define PCR1_3_PBDC PCR1_3_BASE.BIT._PBDC
#define PCR1_3_PD PCR1_3_BASE.BIT._PD
#define PCR1_3_PU PCR1_3_BASE.BIT._PU
#define PCR1_3_PIS PCR1_3_BASE.BIT._PIS
#define PCR1_3_PDSC PCR1_3_BASE.BIT._PDSC
#define PCR1_3_PUCC PCR1_3_BASE.BIT._PUCC
#define PCR1_3_PODCE PCR1_3_BASE.BIT._PODCE
#define PCR1_3_PODC PCR1_3_BASE.BIT._PODC
#define PCR1_3_PINV PCR1_3_BASE.BIT._PINV
#define PCR1_4 PCR1_4_BASE.UINT32
#define PCR1_4_PFC PCR1_4_BASE.BIT._PFC
#define PCR1_4_PFCE PCR1_4_BASE.BIT._PFCE
#define PCR1_4_PM PCR1_4_BASE.BIT._PM
#define PCR1_4_PIPC PCR1_4_BASE.BIT._PIPC
#define PCR1_4_PMC PCR1_4_BASE.BIT._PMC
#define PCR1_4_PPR PCR1_4_BASE.BIT._PPR
#define PCR1_4_P PCR1_4_BASE.BIT._P
#define PCR1_4_PIBC PCR1_4_BASE.BIT._PIBC
#define PCR1_4_PBDC PCR1_4_BASE.BIT._PBDC
#define PCR1_4_PD PCR1_4_BASE.BIT._PD
#define PCR1_4_PU PCR1_4_BASE.BIT._PU
#define PCR1_4_PIS PCR1_4_BASE.BIT._PIS
#define PCR1_4_PDSC PCR1_4_BASE.BIT._PDSC
#define PCR1_4_PUCC PCR1_4_BASE.BIT._PUCC
#define PCR1_4_PODCE PCR1_4_BASE.BIT._PODCE
#define PCR1_4_PODC PCR1_4_BASE.BIT._PODC
#define PCR1_4_PINV PCR1_4_BASE.BIT._PINV
#define PCR1_5 PCR1_5_BASE.UINT32
#define PCR1_5_PFC PCR1_5_BASE.BIT._PFC
#define PCR1_5_PFCE PCR1_5_BASE.BIT._PFCE
#define PCR1_5_PM PCR1_5_BASE.BIT._PM
#define PCR1_5_PIPC PCR1_5_BASE.BIT._PIPC
#define PCR1_5_PMC PCR1_5_BASE.BIT._PMC
#define PCR1_5_PPR PCR1_5_BASE.BIT._PPR
#define PCR1_5_P PCR1_5_BASE.BIT._P
#define PCR1_5_PIBC PCR1_5_BASE.BIT._PIBC
#define PCR1_5_PBDC PCR1_5_BASE.BIT._PBDC
#define PCR1_5_PD PCR1_5_BASE.BIT._PD
#define PCR1_5_PU PCR1_5_BASE.BIT._PU
#define PCR1_5_PIS PCR1_5_BASE.BIT._PIS
#define PCR1_5_PDSC PCR1_5_BASE.BIT._PDSC
#define PCR1_5_PUCC PCR1_5_BASE.BIT._PUCC
#define PCR1_5_PODCE PCR1_5_BASE.BIT._PODCE
#define PCR1_5_PODC PCR1_5_BASE.BIT._PODC
#define PCR1_5_PINV PCR1_5_BASE.BIT._PINV
#define PCR1_6 PCR1_6_BASE.UINT32
#define PCR1_6_PFC PCR1_6_BASE.BIT._PFC
#define PCR1_6_PFCE PCR1_6_BASE.BIT._PFCE
#define PCR1_6_PM PCR1_6_BASE.BIT._PM
#define PCR1_6_PIPC PCR1_6_BASE.BIT._PIPC
#define PCR1_6_PMC PCR1_6_BASE.BIT._PMC
#define PCR1_6_PPR PCR1_6_BASE.BIT._PPR
#define PCR1_6_P PCR1_6_BASE.BIT._P
#define PCR1_6_PIBC PCR1_6_BASE.BIT._PIBC
#define PCR1_6_PBDC PCR1_6_BASE.BIT._PBDC
#define PCR1_6_PD PCR1_6_BASE.BIT._PD
#define PCR1_6_PU PCR1_6_BASE.BIT._PU
#define PCR1_6_PIS PCR1_6_BASE.BIT._PIS
#define PCR1_6_PDSC PCR1_6_BASE.BIT._PDSC
#define PCR1_6_PUCC PCR1_6_BASE.BIT._PUCC
#define PCR1_6_PODCE PCR1_6_BASE.BIT._PODCE
#define PCR1_6_PODC PCR1_6_BASE.BIT._PODC
#define PCR1_6_PINV PCR1_6_BASE.BIT._PINV
#define PCR1_7 PCR1_7_BASE.UINT32
#define PCR1_7_PFC PCR1_7_BASE.BIT._PFC
#define PCR1_7_PFCE PCR1_7_BASE.BIT._PFCE
#define PCR1_7_PM PCR1_7_BASE.BIT._PM
#define PCR1_7_PIPC PCR1_7_BASE.BIT._PIPC
#define PCR1_7_PMC PCR1_7_BASE.BIT._PMC
#define PCR1_7_PPR PCR1_7_BASE.BIT._PPR
#define PCR1_7_P PCR1_7_BASE.BIT._P
#define PCR1_7_PIBC PCR1_7_BASE.BIT._PIBC
#define PCR1_7_PBDC PCR1_7_BASE.BIT._PBDC
#define PCR1_7_PD PCR1_7_BASE.BIT._PD
#define PCR1_7_PU PCR1_7_BASE.BIT._PU
#define PCR1_7_PIS PCR1_7_BASE.BIT._PIS
#define PCR1_7_PDSC PCR1_7_BASE.BIT._PDSC
#define PCR1_7_PUCC PCR1_7_BASE.BIT._PUCC
#define PCR1_7_PODCE PCR1_7_BASE.BIT._PODCE
#define PCR1_7_PODC PCR1_7_BASE.BIT._PODC
#define PCR1_7_PINV PCR1_7_BASE.BIT._PINV
#define PCR2_0 PCR2_0_BASE.UINT32
#define PCR2_0_PFC PCR2_0_BASE.BIT._PFC
#define PCR2_0_PFCE PCR2_0_BASE.BIT._PFCE
#define PCR2_0_PM PCR2_0_BASE.BIT._PM
#define PCR2_0_PIPC PCR2_0_BASE.BIT._PIPC
#define PCR2_0_PMC PCR2_0_BASE.BIT._PMC
#define PCR2_0_PPR PCR2_0_BASE.BIT._PPR
#define PCR2_0_P PCR2_0_BASE.BIT._P
#define PCR2_0_PIBC PCR2_0_BASE.BIT._PIBC
#define PCR2_0_PBDC PCR2_0_BASE.BIT._PBDC
#define PCR2_0_PD PCR2_0_BASE.BIT._PD
#define PCR2_0_PU PCR2_0_BASE.BIT._PU
#define PCR2_0_PIS PCR2_0_BASE.BIT._PIS
#define PCR2_0_PDSC PCR2_0_BASE.BIT._PDSC
#define PCR2_0_PUCC PCR2_0_BASE.BIT._PUCC
#define PCR2_0_PODCE PCR2_0_BASE.BIT._PODCE
#define PCR2_0_PODC PCR2_0_BASE.BIT._PODC
#define PCR2_0_PINV PCR2_0_BASE.BIT._PINV
#define PCR2_1 PCR2_1_BASE.UINT32
#define PCR2_1_PFC PCR2_1_BASE.BIT._PFC
#define PCR2_1_PFCE PCR2_1_BASE.BIT._PFCE
#define PCR2_1_PM PCR2_1_BASE.BIT._PM
#define PCR2_1_PIPC PCR2_1_BASE.BIT._PIPC
#define PCR2_1_PMC PCR2_1_BASE.BIT._PMC
#define PCR2_1_PPR PCR2_1_BASE.BIT._PPR
#define PCR2_1_P PCR2_1_BASE.BIT._P
#define PCR2_1_PIBC PCR2_1_BASE.BIT._PIBC
#define PCR2_1_PBDC PCR2_1_BASE.BIT._PBDC
#define PCR2_1_PD PCR2_1_BASE.BIT._PD
#define PCR2_1_PU PCR2_1_BASE.BIT._PU
#define PCR2_1_PIS PCR2_1_BASE.BIT._PIS
#define PCR2_1_PDSC PCR2_1_BASE.BIT._PDSC
#define PCR2_1_PUCC PCR2_1_BASE.BIT._PUCC
#define PCR2_1_PODCE PCR2_1_BASE.BIT._PODCE
#define PCR2_1_PODC PCR2_1_BASE.BIT._PODC
#define PCR2_1_PINV PCR2_1_BASE.BIT._PINV
#define PCR2_2 PCR2_2_BASE.UINT32
#define PCR2_2_PFC PCR2_2_BASE.BIT._PFC
#define PCR2_2_PFCE PCR2_2_BASE.BIT._PFCE
#define PCR2_2_PM PCR2_2_BASE.BIT._PM
#define PCR2_2_PIPC PCR2_2_BASE.BIT._PIPC
#define PCR2_2_PMC PCR2_2_BASE.BIT._PMC
#define PCR2_2_PPR PCR2_2_BASE.BIT._PPR
#define PCR2_2_P PCR2_2_BASE.BIT._P
#define PCR2_2_PIBC PCR2_2_BASE.BIT._PIBC
#define PCR2_2_PBDC PCR2_2_BASE.BIT._PBDC
#define PCR2_2_PD PCR2_2_BASE.BIT._PD
#define PCR2_2_PU PCR2_2_BASE.BIT._PU
#define PCR2_2_PIS PCR2_2_BASE.BIT._PIS
#define PCR2_2_PDSC PCR2_2_BASE.BIT._PDSC
#define PCR2_2_PUCC PCR2_2_BASE.BIT._PUCC
#define PCR2_2_PODCE PCR2_2_BASE.BIT._PODCE
#define PCR2_2_PODC PCR2_2_BASE.BIT._PODC
#define PCR2_2_PINV PCR2_2_BASE.BIT._PINV
#define PCR2_3 PCR2_3_BASE.UINT32
#define PCR2_3_PFC PCR2_3_BASE.BIT._PFC
#define PCR2_3_PFCE PCR2_3_BASE.BIT._PFCE
#define PCR2_3_PM PCR2_3_BASE.BIT._PM
#define PCR2_3_PIPC PCR2_3_BASE.BIT._PIPC
#define PCR2_3_PMC PCR2_3_BASE.BIT._PMC
#define PCR2_3_PPR PCR2_3_BASE.BIT._PPR
#define PCR2_3_P PCR2_3_BASE.BIT._P
#define PCR2_3_PIBC PCR2_3_BASE.BIT._PIBC
#define PCR2_3_PBDC PCR2_3_BASE.BIT._PBDC
#define PCR2_3_PD PCR2_3_BASE.BIT._PD
#define PCR2_3_PU PCR2_3_BASE.BIT._PU
#define PCR2_3_PIS PCR2_3_BASE.BIT._PIS
#define PCR2_3_PDSC PCR2_3_BASE.BIT._PDSC
#define PCR2_3_PUCC PCR2_3_BASE.BIT._PUCC
#define PCR2_3_PODCE PCR2_3_BASE.BIT._PODCE
#define PCR2_3_PODC PCR2_3_BASE.BIT._PODC
#define PCR2_3_PINV PCR2_3_BASE.BIT._PINV
#define PCR2_4 PCR2_4_BASE.UINT32
#define PCR2_4_PFC PCR2_4_BASE.BIT._PFC
#define PCR2_4_PFCE PCR2_4_BASE.BIT._PFCE
#define PCR2_4_PM PCR2_4_BASE.BIT._PM
#define PCR2_4_PIPC PCR2_4_BASE.BIT._PIPC
#define PCR2_4_PMC PCR2_4_BASE.BIT._PMC
#define PCR2_4_PPR PCR2_4_BASE.BIT._PPR
#define PCR2_4_P PCR2_4_BASE.BIT._P
#define PCR2_4_PIBC PCR2_4_BASE.BIT._PIBC
#define PCR2_4_PBDC PCR2_4_BASE.BIT._PBDC
#define PCR2_4_PD PCR2_4_BASE.BIT._PD
#define PCR2_4_PU PCR2_4_BASE.BIT._PU
#define PCR2_4_PIS PCR2_4_BASE.BIT._PIS
#define PCR2_4_PDSC PCR2_4_BASE.BIT._PDSC
#define PCR2_4_PUCC PCR2_4_BASE.BIT._PUCC
#define PCR2_4_PODCE PCR2_4_BASE.BIT._PODCE
#define PCR2_4_PODC PCR2_4_BASE.BIT._PODC
#define PCR2_4_PINV PCR2_4_BASE.BIT._PINV
#define PCR2_5 PCR2_5_BASE.UINT32
#define PCR2_5_PFC PCR2_5_BASE.BIT._PFC
#define PCR2_5_PFCE PCR2_5_BASE.BIT._PFCE
#define PCR2_5_PM PCR2_5_BASE.BIT._PM
#define PCR2_5_PIPC PCR2_5_BASE.BIT._PIPC
#define PCR2_5_PMC PCR2_5_BASE.BIT._PMC
#define PCR2_5_PPR PCR2_5_BASE.BIT._PPR
#define PCR2_5_P PCR2_5_BASE.BIT._P
#define PCR2_5_PIBC PCR2_5_BASE.BIT._PIBC
#define PCR2_5_PBDC PCR2_5_BASE.BIT._PBDC
#define PCR2_5_PD PCR2_5_BASE.BIT._PD
#define PCR2_5_PU PCR2_5_BASE.BIT._PU
#define PCR2_5_PIS PCR2_5_BASE.BIT._PIS
#define PCR2_5_PDSC PCR2_5_BASE.BIT._PDSC
#define PCR2_5_PUCC PCR2_5_BASE.BIT._PUCC
#define PCR2_5_PODCE PCR2_5_BASE.BIT._PODCE
#define PCR2_5_PODC PCR2_5_BASE.BIT._PODC
#define PCR2_5_PINV PCR2_5_BASE.BIT._PINV
#define PCR2_6 PCR2_6_BASE.UINT32
#define PCR2_6_PFC PCR2_6_BASE.BIT._PFC
#define PCR2_6_PFCE PCR2_6_BASE.BIT._PFCE
#define PCR2_6_PM PCR2_6_BASE.BIT._PM
#define PCR2_6_PIPC PCR2_6_BASE.BIT._PIPC
#define PCR2_6_PMC PCR2_6_BASE.BIT._PMC
#define PCR2_6_PPR PCR2_6_BASE.BIT._PPR
#define PCR2_6_P PCR2_6_BASE.BIT._P
#define PCR2_6_PIBC PCR2_6_BASE.BIT._PIBC
#define PCR2_6_PBDC PCR2_6_BASE.BIT._PBDC
#define PCR2_6_PD PCR2_6_BASE.BIT._PD
#define PCR2_6_PU PCR2_6_BASE.BIT._PU
#define PCR2_6_PIS PCR2_6_BASE.BIT._PIS
#define PCR2_6_PDSC PCR2_6_BASE.BIT._PDSC
#define PCR2_6_PUCC PCR2_6_BASE.BIT._PUCC
#define PCR2_6_PODCE PCR2_6_BASE.BIT._PODCE
#define PCR2_6_PODC PCR2_6_BASE.BIT._PODC
#define PCR2_6_PINV PCR2_6_BASE.BIT._PINV
#define PCR2_7 PCR2_7_BASE.UINT32
#define PCR2_7_PFC PCR2_7_BASE.BIT._PFC
#define PCR2_7_PFCE PCR2_7_BASE.BIT._PFCE
#define PCR2_7_PM PCR2_7_BASE.BIT._PM
#define PCR2_7_PIPC PCR2_7_BASE.BIT._PIPC
#define PCR2_7_PMC PCR2_7_BASE.BIT._PMC
#define PCR2_7_PPR PCR2_7_BASE.BIT._PPR
#define PCR2_7_P PCR2_7_BASE.BIT._P
#define PCR2_7_PIBC PCR2_7_BASE.BIT._PIBC
#define PCR2_7_PBDC PCR2_7_BASE.BIT._PBDC
#define PCR2_7_PD PCR2_7_BASE.BIT._PD
#define PCR2_7_PU PCR2_7_BASE.BIT._PU
#define PCR2_7_PIS PCR2_7_BASE.BIT._PIS
#define PCR2_7_PDSC PCR2_7_BASE.BIT._PDSC
#define PCR2_7_PUCC PCR2_7_BASE.BIT._PUCC
#define PCR2_7_PODCE PCR2_7_BASE.BIT._PODCE
#define PCR2_7_PODC PCR2_7_BASE.BIT._PODC
#define PCR2_7_PINV PCR2_7_BASE.BIT._PINV
#define PCR2_8 PCR2_8_BASE.UINT32
#define PCR2_8_PFC PCR2_8_BASE.BIT._PFC
#define PCR2_8_PFCE PCR2_8_BASE.BIT._PFCE
#define PCR2_8_PM PCR2_8_BASE.BIT._PM
#define PCR2_8_PIPC PCR2_8_BASE.BIT._PIPC
#define PCR2_8_PMC PCR2_8_BASE.BIT._PMC
#define PCR2_8_PPR PCR2_8_BASE.BIT._PPR
#define PCR2_8_P PCR2_8_BASE.BIT._P
#define PCR2_8_PIBC PCR2_8_BASE.BIT._PIBC
#define PCR2_8_PBDC PCR2_8_BASE.BIT._PBDC
#define PCR2_8_PD PCR2_8_BASE.BIT._PD
#define PCR2_8_PU PCR2_8_BASE.BIT._PU
#define PCR2_8_PIS PCR2_8_BASE.BIT._PIS
#define PCR2_8_PDSC PCR2_8_BASE.BIT._PDSC
#define PCR2_8_PUCC PCR2_8_BASE.BIT._PUCC
#define PCR2_8_PODCE PCR2_8_BASE.BIT._PODCE
#define PCR2_8_PODC PCR2_8_BASE.BIT._PODC
#define PCR2_8_PINV PCR2_8_BASE.BIT._PINV
#define PCR2_9 PCR2_9_BASE.UINT32
#define PCR2_9_PFC PCR2_9_BASE.BIT._PFC
#define PCR2_9_PFCE PCR2_9_BASE.BIT._PFCE
#define PCR2_9_PM PCR2_9_BASE.BIT._PM
#define PCR2_9_PIPC PCR2_9_BASE.BIT._PIPC
#define PCR2_9_PMC PCR2_9_BASE.BIT._PMC
#define PCR2_9_PPR PCR2_9_BASE.BIT._PPR
#define PCR2_9_P PCR2_9_BASE.BIT._P
#define PCR2_9_PIBC PCR2_9_BASE.BIT._PIBC
#define PCR2_9_PBDC PCR2_9_BASE.BIT._PBDC
#define PCR2_9_PD PCR2_9_BASE.BIT._PD
#define PCR2_9_PU PCR2_9_BASE.BIT._PU
#define PCR2_9_PIS PCR2_9_BASE.BIT._PIS
#define PCR2_9_PDSC PCR2_9_BASE.BIT._PDSC
#define PCR2_9_PUCC PCR2_9_BASE.BIT._PUCC
#define PCR2_9_PODCE PCR2_9_BASE.BIT._PODCE
#define PCR2_9_PODC PCR2_9_BASE.BIT._PODC
#define PCR2_9_PINV PCR2_9_BASE.BIT._PINV
#define PCR2_10 PCR2_10_BASE.UINT32
#define PCR2_10_PFC PCR2_10_BASE.BIT._PFC
#define PCR2_10_PFCE PCR2_10_BASE.BIT._PFCE
#define PCR2_10_PM PCR2_10_BASE.BIT._PM
#define PCR2_10_PIPC PCR2_10_BASE.BIT._PIPC
#define PCR2_10_PMC PCR2_10_BASE.BIT._PMC
#define PCR2_10_PPR PCR2_10_BASE.BIT._PPR
#define PCR2_10_P PCR2_10_BASE.BIT._P
#define PCR2_10_PIBC PCR2_10_BASE.BIT._PIBC
#define PCR2_10_PBDC PCR2_10_BASE.BIT._PBDC
#define PCR2_10_PD PCR2_10_BASE.BIT._PD
#define PCR2_10_PU PCR2_10_BASE.BIT._PU
#define PCR2_10_PIS PCR2_10_BASE.BIT._PIS
#define PCR2_10_PDSC PCR2_10_BASE.BIT._PDSC
#define PCR2_10_PUCC PCR2_10_BASE.BIT._PUCC
#define PCR2_10_PODCE PCR2_10_BASE.BIT._PODCE
#define PCR2_10_PODC PCR2_10_BASE.BIT._PODC
#define PCR2_10_PINV PCR2_10_BASE.BIT._PINV
#define PCR2_11 PCR2_11_BASE.UINT32
#define PCR2_11_PFC PCR2_11_BASE.BIT._PFC
#define PCR2_11_PFCE PCR2_11_BASE.BIT._PFCE
#define PCR2_11_PM PCR2_11_BASE.BIT._PM
#define PCR2_11_PIPC PCR2_11_BASE.BIT._PIPC
#define PCR2_11_PMC PCR2_11_BASE.BIT._PMC
#define PCR2_11_PPR PCR2_11_BASE.BIT._PPR
#define PCR2_11_P PCR2_11_BASE.BIT._P
#define PCR2_11_PIBC PCR2_11_BASE.BIT._PIBC
#define PCR2_11_PBDC PCR2_11_BASE.BIT._PBDC
#define PCR2_11_PD PCR2_11_BASE.BIT._PD
#define PCR2_11_PU PCR2_11_BASE.BIT._PU
#define PCR2_11_PIS PCR2_11_BASE.BIT._PIS
#define PCR2_11_PDSC PCR2_11_BASE.BIT._PDSC
#define PCR2_11_PUCC PCR2_11_BASE.BIT._PUCC
#define PCR2_11_PODCE PCR2_11_BASE.BIT._PODCE
#define PCR2_11_PODC PCR2_11_BASE.BIT._PODC
#define PCR2_11_PINV PCR2_11_BASE.BIT._PINV
#define PCR2_12 PCR2_12_BASE.UINT32
#define PCR2_12_PFC PCR2_12_BASE.BIT._PFC
#define PCR2_12_PFCE PCR2_12_BASE.BIT._PFCE
#define PCR2_12_PM PCR2_12_BASE.BIT._PM
#define PCR2_12_PIPC PCR2_12_BASE.BIT._PIPC
#define PCR2_12_PMC PCR2_12_BASE.BIT._PMC
#define PCR2_12_PPR PCR2_12_BASE.BIT._PPR
#define PCR2_12_P PCR2_12_BASE.BIT._P
#define PCR2_12_PIBC PCR2_12_BASE.BIT._PIBC
#define PCR2_12_PBDC PCR2_12_BASE.BIT._PBDC
#define PCR2_12_PD PCR2_12_BASE.BIT._PD
#define PCR2_12_PU PCR2_12_BASE.BIT._PU
#define PCR2_12_PIS PCR2_12_BASE.BIT._PIS
#define PCR2_12_PDSC PCR2_12_BASE.BIT._PDSC
#define PCR2_12_PUCC PCR2_12_BASE.BIT._PUCC
#define PCR2_12_PODCE PCR2_12_BASE.BIT._PODCE
#define PCR2_12_PODC PCR2_12_BASE.BIT._PODC
#define PCR2_12_PINV PCR2_12_BASE.BIT._PINV
#define PCR2_13 PCR2_13_BASE.UINT32
#define PCR2_13_PFC PCR2_13_BASE.BIT._PFC
#define PCR2_13_PFCE PCR2_13_BASE.BIT._PFCE
#define PCR2_13_PM PCR2_13_BASE.BIT._PM
#define PCR2_13_PIPC PCR2_13_BASE.BIT._PIPC
#define PCR2_13_PMC PCR2_13_BASE.BIT._PMC
#define PCR2_13_PPR PCR2_13_BASE.BIT._PPR
#define PCR2_13_P PCR2_13_BASE.BIT._P
#define PCR2_13_PIBC PCR2_13_BASE.BIT._PIBC
#define PCR2_13_PBDC PCR2_13_BASE.BIT._PBDC
#define PCR2_13_PD PCR2_13_BASE.BIT._PD
#define PCR2_13_PU PCR2_13_BASE.BIT._PU
#define PCR2_13_PIS PCR2_13_BASE.BIT._PIS
#define PCR2_13_PDSC PCR2_13_BASE.BIT._PDSC
#define PCR2_13_PUCC PCR2_13_BASE.BIT._PUCC
#define PCR2_13_PODCE PCR2_13_BASE.BIT._PODCE
#define PCR2_13_PODC PCR2_13_BASE.BIT._PODC
#define PCR2_13_PINV PCR2_13_BASE.BIT._PINV
#define PCR2_14 PCR2_14_BASE.UINT32
#define PCR2_14_PFC PCR2_14_BASE.BIT._PFC
#define PCR2_14_PFCE PCR2_14_BASE.BIT._PFCE
#define PCR2_14_PM PCR2_14_BASE.BIT._PM
#define PCR2_14_PIPC PCR2_14_BASE.BIT._PIPC
#define PCR2_14_PMC PCR2_14_BASE.BIT._PMC
#define PCR2_14_PPR PCR2_14_BASE.BIT._PPR
#define PCR2_14_P PCR2_14_BASE.BIT._P
#define PCR2_14_PIBC PCR2_14_BASE.BIT._PIBC
#define PCR2_14_PBDC PCR2_14_BASE.BIT._PBDC
#define PCR2_14_PD PCR2_14_BASE.BIT._PD
#define PCR2_14_PU PCR2_14_BASE.BIT._PU
#define PCR2_14_PIS PCR2_14_BASE.BIT._PIS
#define PCR2_14_PDSC PCR2_14_BASE.BIT._PDSC
#define PCR2_14_PUCC PCR2_14_BASE.BIT._PUCC
#define PCR2_14_PODCE PCR2_14_BASE.BIT._PODCE
#define PCR2_14_PODC PCR2_14_BASE.BIT._PODC
#define PCR2_14_PINV PCR2_14_BASE.BIT._PINV
#define PCR2_15 PCR2_15_BASE.UINT32
#define PCR2_15_PFC PCR2_15_BASE.BIT._PFC
#define PCR2_15_PFCE PCR2_15_BASE.BIT._PFCE
#define PCR2_15_PM PCR2_15_BASE.BIT._PM
#define PCR2_15_PIPC PCR2_15_BASE.BIT._PIPC
#define PCR2_15_PMC PCR2_15_BASE.BIT._PMC
#define PCR2_15_PPR PCR2_15_BASE.BIT._PPR
#define PCR2_15_P PCR2_15_BASE.BIT._P
#define PCR2_15_PIBC PCR2_15_BASE.BIT._PIBC
#define PCR2_15_PBDC PCR2_15_BASE.BIT._PBDC
#define PCR2_15_PD PCR2_15_BASE.BIT._PD
#define PCR2_15_PU PCR2_15_BASE.BIT._PU
#define PCR2_15_PIS PCR2_15_BASE.BIT._PIS
#define PCR2_15_PDSC PCR2_15_BASE.BIT._PDSC
#define PCR2_15_PUCC PCR2_15_BASE.BIT._PUCC
#define PCR2_15_PODCE PCR2_15_BASE.BIT._PODCE
#define PCR2_15_PODC PCR2_15_BASE.BIT._PODC
#define PCR2_15_PINV PCR2_15_BASE.BIT._PINV
#define PCR3_0 PCR3_0_BASE.UINT32
#define PCR3_0_PFC PCR3_0_BASE.BIT._PFC
#define PCR3_0_PFCE PCR3_0_BASE.BIT._PFCE
#define PCR3_0_PM PCR3_0_BASE.BIT._PM
#define PCR3_0_PIPC PCR3_0_BASE.BIT._PIPC
#define PCR3_0_PMC PCR3_0_BASE.BIT._PMC
#define PCR3_0_PPR PCR3_0_BASE.BIT._PPR
#define PCR3_0_P PCR3_0_BASE.BIT._P
#define PCR3_0_PIBC PCR3_0_BASE.BIT._PIBC
#define PCR3_0_PBDC PCR3_0_BASE.BIT._PBDC
#define PCR3_0_PD PCR3_0_BASE.BIT._PD
#define PCR3_0_PU PCR3_0_BASE.BIT._PU
#define PCR3_0_PIS PCR3_0_BASE.BIT._PIS
#define PCR3_0_PDSC PCR3_0_BASE.BIT._PDSC
#define PCR3_0_PUCC PCR3_0_BASE.BIT._PUCC
#define PCR3_0_PODCE PCR3_0_BASE.BIT._PODCE
#define PCR3_0_PODC PCR3_0_BASE.BIT._PODC
#define PCR3_0_PINV PCR3_0_BASE.BIT._PINV
#define PCR3_1 PCR3_1_BASE.UINT32
#define PCR3_1_PFC PCR3_1_BASE.BIT._PFC
#define PCR3_1_PFCE PCR3_1_BASE.BIT._PFCE
#define PCR3_1_PM PCR3_1_BASE.BIT._PM
#define PCR3_1_PIPC PCR3_1_BASE.BIT._PIPC
#define PCR3_1_PMC PCR3_1_BASE.BIT._PMC
#define PCR3_1_PPR PCR3_1_BASE.BIT._PPR
#define PCR3_1_P PCR3_1_BASE.BIT._P
#define PCR3_1_PIBC PCR3_1_BASE.BIT._PIBC
#define PCR3_1_PBDC PCR3_1_BASE.BIT._PBDC
#define PCR3_1_PD PCR3_1_BASE.BIT._PD
#define PCR3_1_PU PCR3_1_BASE.BIT._PU
#define PCR3_1_PIS PCR3_1_BASE.BIT._PIS
#define PCR3_1_PDSC PCR3_1_BASE.BIT._PDSC
#define PCR3_1_PUCC PCR3_1_BASE.BIT._PUCC
#define PCR3_1_PODCE PCR3_1_BASE.BIT._PODCE
#define PCR3_1_PODC PCR3_1_BASE.BIT._PODC
#define PCR3_1_PINV PCR3_1_BASE.BIT._PINV
#define PCR3_2 PCR3_2_BASE.UINT32
#define PCR3_2_PFC PCR3_2_BASE.BIT._PFC
#define PCR3_2_PFCE PCR3_2_BASE.BIT._PFCE
#define PCR3_2_PM PCR3_2_BASE.BIT._PM
#define PCR3_2_PIPC PCR3_2_BASE.BIT._PIPC
#define PCR3_2_PMC PCR3_2_BASE.BIT._PMC
#define PCR3_2_PPR PCR3_2_BASE.BIT._PPR
#define PCR3_2_P PCR3_2_BASE.BIT._P
#define PCR3_2_PIBC PCR3_2_BASE.BIT._PIBC
#define PCR3_2_PBDC PCR3_2_BASE.BIT._PBDC
#define PCR3_2_PD PCR3_2_BASE.BIT._PD
#define PCR3_2_PU PCR3_2_BASE.BIT._PU
#define PCR3_2_PIS PCR3_2_BASE.BIT._PIS
#define PCR3_2_PDSC PCR3_2_BASE.BIT._PDSC
#define PCR3_2_PUCC PCR3_2_BASE.BIT._PUCC
#define PCR3_2_PODCE PCR3_2_BASE.BIT._PODCE
#define PCR3_2_PODC PCR3_2_BASE.BIT._PODC
#define PCR3_2_PINV PCR3_2_BASE.BIT._PINV
#define PCR3_3 PCR3_3_BASE.UINT32
#define PCR3_3_PFC PCR3_3_BASE.BIT._PFC
#define PCR3_3_PFCE PCR3_3_BASE.BIT._PFCE
#define PCR3_3_PM PCR3_3_BASE.BIT._PM
#define PCR3_3_PIPC PCR3_3_BASE.BIT._PIPC
#define PCR3_3_PMC PCR3_3_BASE.BIT._PMC
#define PCR3_3_PPR PCR3_3_BASE.BIT._PPR
#define PCR3_3_P PCR3_3_BASE.BIT._P
#define PCR3_3_PIBC PCR3_3_BASE.BIT._PIBC
#define PCR3_3_PBDC PCR3_3_BASE.BIT._PBDC
#define PCR3_3_PD PCR3_3_BASE.BIT._PD
#define PCR3_3_PU PCR3_3_BASE.BIT._PU
#define PCR3_3_PIS PCR3_3_BASE.BIT._PIS
#define PCR3_3_PDSC PCR3_3_BASE.BIT._PDSC
#define PCR3_3_PUCC PCR3_3_BASE.BIT._PUCC
#define PCR3_3_PODCE PCR3_3_BASE.BIT._PODCE
#define PCR3_3_PODC PCR3_3_BASE.BIT._PODC
#define PCR3_3_PINV PCR3_3_BASE.BIT._PINV
#define PCR3_4 PCR3_4_BASE.UINT32
#define PCR3_4_PFC PCR3_4_BASE.BIT._PFC
#define PCR3_4_PFCE PCR3_4_BASE.BIT._PFCE
#define PCR3_4_PM PCR3_4_BASE.BIT._PM
#define PCR3_4_PIPC PCR3_4_BASE.BIT._PIPC
#define PCR3_4_PMC PCR3_4_BASE.BIT._PMC
#define PCR3_4_PPR PCR3_4_BASE.BIT._PPR
#define PCR3_4_P PCR3_4_BASE.BIT._P
#define PCR3_4_PIBC PCR3_4_BASE.BIT._PIBC
#define PCR3_4_PBDC PCR3_4_BASE.BIT._PBDC
#define PCR3_4_PD PCR3_4_BASE.BIT._PD
#define PCR3_4_PU PCR3_4_BASE.BIT._PU
#define PCR3_4_PIS PCR3_4_BASE.BIT._PIS
#define PCR3_4_PDSC PCR3_4_BASE.BIT._PDSC
#define PCR3_4_PUCC PCR3_4_BASE.BIT._PUCC
#define PCR3_4_PODCE PCR3_4_BASE.BIT._PODCE
#define PCR3_4_PODC PCR3_4_BASE.BIT._PODC
#define PCR3_4_PINV PCR3_4_BASE.BIT._PINV
#define PCR3_5 PCR3_5_BASE.UINT32
#define PCR3_5_PFC PCR3_5_BASE.BIT._PFC
#define PCR3_5_PFCE PCR3_5_BASE.BIT._PFCE
#define PCR3_5_PM PCR3_5_BASE.BIT._PM
#define PCR3_5_PIPC PCR3_5_BASE.BIT._PIPC
#define PCR3_5_PMC PCR3_5_BASE.BIT._PMC
#define PCR3_5_PPR PCR3_5_BASE.BIT._PPR
#define PCR3_5_P PCR3_5_BASE.BIT._P
#define PCR3_5_PIBC PCR3_5_BASE.BIT._PIBC
#define PCR3_5_PBDC PCR3_5_BASE.BIT._PBDC
#define PCR3_5_PD PCR3_5_BASE.BIT._PD
#define PCR3_5_PU PCR3_5_BASE.BIT._PU
#define PCR3_5_PIS PCR3_5_BASE.BIT._PIS
#define PCR3_5_PDSC PCR3_5_BASE.BIT._PDSC
#define PCR3_5_PUCC PCR3_5_BASE.BIT._PUCC
#define PCR3_5_PODCE PCR3_5_BASE.BIT._PODCE
#define PCR3_5_PODC PCR3_5_BASE.BIT._PODC
#define PCR3_5_PINV PCR3_5_BASE.BIT._PINV
#define PCR3_6 PCR3_6_BASE.UINT32
#define PCR3_6_PFC PCR3_6_BASE.BIT._PFC
#define PCR3_6_PFCE PCR3_6_BASE.BIT._PFCE
#define PCR3_6_PM PCR3_6_BASE.BIT._PM
#define PCR3_6_PIPC PCR3_6_BASE.BIT._PIPC
#define PCR3_6_PMC PCR3_6_BASE.BIT._PMC
#define PCR3_6_PPR PCR3_6_BASE.BIT._PPR
#define PCR3_6_P PCR3_6_BASE.BIT._P
#define PCR3_6_PIBC PCR3_6_BASE.BIT._PIBC
#define PCR3_6_PBDC PCR3_6_BASE.BIT._PBDC
#define PCR3_6_PD PCR3_6_BASE.BIT._PD
#define PCR3_6_PU PCR3_6_BASE.BIT._PU
#define PCR3_6_PIS PCR3_6_BASE.BIT._PIS
#define PCR3_6_PDSC PCR3_6_BASE.BIT._PDSC
#define PCR3_6_PUCC PCR3_6_BASE.BIT._PUCC
#define PCR3_6_PODCE PCR3_6_BASE.BIT._PODCE
#define PCR3_6_PODC PCR3_6_BASE.BIT._PODC
#define PCR3_6_PINV PCR3_6_BASE.BIT._PINV
#define PCR3_7 PCR3_7_BASE.UINT32
#define PCR3_7_PFC PCR3_7_BASE.BIT._PFC
#define PCR3_7_PFCE PCR3_7_BASE.BIT._PFCE
#define PCR3_7_PM PCR3_7_BASE.BIT._PM
#define PCR3_7_PIPC PCR3_7_BASE.BIT._PIPC
#define PCR3_7_PMC PCR3_7_BASE.BIT._PMC
#define PCR3_7_PPR PCR3_7_BASE.BIT._PPR
#define PCR3_7_P PCR3_7_BASE.BIT._P
#define PCR3_7_PIBC PCR3_7_BASE.BIT._PIBC
#define PCR3_7_PBDC PCR3_7_BASE.BIT._PBDC
#define PCR3_7_PD PCR3_7_BASE.BIT._PD
#define PCR3_7_PU PCR3_7_BASE.BIT._PU
#define PCR3_7_PIS PCR3_7_BASE.BIT._PIS
#define PCR3_7_PDSC PCR3_7_BASE.BIT._PDSC
#define PCR3_7_PUCC PCR3_7_BASE.BIT._PUCC
#define PCR3_7_PODCE PCR3_7_BASE.BIT._PODCE
#define PCR3_7_PODC PCR3_7_BASE.BIT._PODC
#define PCR3_7_PINV PCR3_7_BASE.BIT._PINV
#define PCR3_8 PCR3_8_BASE.UINT32
#define PCR3_8_PFC PCR3_8_BASE.BIT._PFC
#define PCR3_8_PFCE PCR3_8_BASE.BIT._PFCE
#define PCR3_8_PM PCR3_8_BASE.BIT._PM
#define PCR3_8_PIPC PCR3_8_BASE.BIT._PIPC
#define PCR3_8_PMC PCR3_8_BASE.BIT._PMC
#define PCR3_8_PPR PCR3_8_BASE.BIT._PPR
#define PCR3_8_P PCR3_8_BASE.BIT._P
#define PCR3_8_PIBC PCR3_8_BASE.BIT._PIBC
#define PCR3_8_PBDC PCR3_8_BASE.BIT._PBDC
#define PCR3_8_PD PCR3_8_BASE.BIT._PD
#define PCR3_8_PU PCR3_8_BASE.BIT._PU
#define PCR3_8_PIS PCR3_8_BASE.BIT._PIS
#define PCR3_8_PDSC PCR3_8_BASE.BIT._PDSC
#define PCR3_8_PUCC PCR3_8_BASE.BIT._PUCC
#define PCR3_8_PODCE PCR3_8_BASE.BIT._PODCE
#define PCR3_8_PODC PCR3_8_BASE.BIT._PODC
#define PCR3_8_PINV PCR3_8_BASE.BIT._PINV
#define PCR3_9 PCR3_9_BASE.UINT32
#define PCR3_9_PFC PCR3_9_BASE.BIT._PFC
#define PCR3_9_PFCE PCR3_9_BASE.BIT._PFCE
#define PCR3_9_PM PCR3_9_BASE.BIT._PM
#define PCR3_9_PIPC PCR3_9_BASE.BIT._PIPC
#define PCR3_9_PMC PCR3_9_BASE.BIT._PMC
#define PCR3_9_PPR PCR3_9_BASE.BIT._PPR
#define PCR3_9_P PCR3_9_BASE.BIT._P
#define PCR3_9_PIBC PCR3_9_BASE.BIT._PIBC
#define PCR3_9_PBDC PCR3_9_BASE.BIT._PBDC
#define PCR3_9_PD PCR3_9_BASE.BIT._PD
#define PCR3_9_PU PCR3_9_BASE.BIT._PU
#define PCR3_9_PIS PCR3_9_BASE.BIT._PIS
#define PCR3_9_PDSC PCR3_9_BASE.BIT._PDSC
#define PCR3_9_PUCC PCR3_9_BASE.BIT._PUCC
#define PCR3_9_PODCE PCR3_9_BASE.BIT._PODCE
#define PCR3_9_PODC PCR3_9_BASE.BIT._PODC
#define PCR3_9_PINV PCR3_9_BASE.BIT._PINV
#define PCR3_10 PCR3_10_BASE.UINT32
#define PCR3_10_PFC PCR3_10_BASE.BIT._PFC
#define PCR3_10_PFCE PCR3_10_BASE.BIT._PFCE
#define PCR3_10_PM PCR3_10_BASE.BIT._PM
#define PCR3_10_PIPC PCR3_10_BASE.BIT._PIPC
#define PCR3_10_PMC PCR3_10_BASE.BIT._PMC
#define PCR3_10_PPR PCR3_10_BASE.BIT._PPR
#define PCR3_10_P PCR3_10_BASE.BIT._P
#define PCR3_10_PIBC PCR3_10_BASE.BIT._PIBC
#define PCR3_10_PBDC PCR3_10_BASE.BIT._PBDC
#define PCR3_10_PD PCR3_10_BASE.BIT._PD
#define PCR3_10_PU PCR3_10_BASE.BIT._PU
#define PCR3_10_PIS PCR3_10_BASE.BIT._PIS
#define PCR3_10_PDSC PCR3_10_BASE.BIT._PDSC
#define PCR3_10_PUCC PCR3_10_BASE.BIT._PUCC
#define PCR3_10_PODCE PCR3_10_BASE.BIT._PODCE
#define PCR3_10_PODC PCR3_10_BASE.BIT._PODC
#define PCR3_10_PINV PCR3_10_BASE.BIT._PINV
#define PCR3_11 PCR3_11_BASE.UINT32
#define PCR3_11_PFC PCR3_11_BASE.BIT._PFC
#define PCR3_11_PFCE PCR3_11_BASE.BIT._PFCE
#define PCR3_11_PM PCR3_11_BASE.BIT._PM
#define PCR3_11_PIPC PCR3_11_BASE.BIT._PIPC
#define PCR3_11_PMC PCR3_11_BASE.BIT._PMC
#define PCR3_11_PPR PCR3_11_BASE.BIT._PPR
#define PCR3_11_P PCR3_11_BASE.BIT._P
#define PCR3_11_PIBC PCR3_11_BASE.BIT._PIBC
#define PCR3_11_PBDC PCR3_11_BASE.BIT._PBDC
#define PCR3_11_PD PCR3_11_BASE.BIT._PD
#define PCR3_11_PU PCR3_11_BASE.BIT._PU
#define PCR3_11_PIS PCR3_11_BASE.BIT._PIS
#define PCR3_11_PDSC PCR3_11_BASE.BIT._PDSC
#define PCR3_11_PUCC PCR3_11_BASE.BIT._PUCC
#define PCR3_11_PODCE PCR3_11_BASE.BIT._PODCE
#define PCR3_11_PODC PCR3_11_BASE.BIT._PODC
#define PCR3_11_PINV PCR3_11_BASE.BIT._PINV
#define PCR3_12 PCR3_12_BASE.UINT32
#define PCR3_12_PFC PCR3_12_BASE.BIT._PFC
#define PCR3_12_PFCE PCR3_12_BASE.BIT._PFCE
#define PCR3_12_PM PCR3_12_BASE.BIT._PM
#define PCR3_12_PIPC PCR3_12_BASE.BIT._PIPC
#define PCR3_12_PMC PCR3_12_BASE.BIT._PMC
#define PCR3_12_PPR PCR3_12_BASE.BIT._PPR
#define PCR3_12_P PCR3_12_BASE.BIT._P
#define PCR3_12_PIBC PCR3_12_BASE.BIT._PIBC
#define PCR3_12_PBDC PCR3_12_BASE.BIT._PBDC
#define PCR3_12_PD PCR3_12_BASE.BIT._PD
#define PCR3_12_PU PCR3_12_BASE.BIT._PU
#define PCR3_12_PIS PCR3_12_BASE.BIT._PIS
#define PCR3_12_PDSC PCR3_12_BASE.BIT._PDSC
#define PCR3_12_PUCC PCR3_12_BASE.BIT._PUCC
#define PCR3_12_PODCE PCR3_12_BASE.BIT._PODCE
#define PCR3_12_PODC PCR3_12_BASE.BIT._PODC
#define PCR3_12_PINV PCR3_12_BASE.BIT._PINV
#define PCR3_13 PCR3_13_BASE.UINT32
#define PCR3_13_PFC PCR3_13_BASE.BIT._PFC
#define PCR3_13_PFCE PCR3_13_BASE.BIT._PFCE
#define PCR3_13_PM PCR3_13_BASE.BIT._PM
#define PCR3_13_PIPC PCR3_13_BASE.BIT._PIPC
#define PCR3_13_PMC PCR3_13_BASE.BIT._PMC
#define PCR3_13_PPR PCR3_13_BASE.BIT._PPR
#define PCR3_13_P PCR3_13_BASE.BIT._P
#define PCR3_13_PIBC PCR3_13_BASE.BIT._PIBC
#define PCR3_13_PBDC PCR3_13_BASE.BIT._PBDC
#define PCR3_13_PD PCR3_13_BASE.BIT._PD
#define PCR3_13_PU PCR3_13_BASE.BIT._PU
#define PCR3_13_PIS PCR3_13_BASE.BIT._PIS
#define PCR3_13_PDSC PCR3_13_BASE.BIT._PDSC
#define PCR3_13_PUCC PCR3_13_BASE.BIT._PUCC
#define PCR3_13_PODCE PCR3_13_BASE.BIT._PODCE
#define PCR3_13_PODC PCR3_13_BASE.BIT._PODC
#define PCR3_13_PINV PCR3_13_BASE.BIT._PINV
#define PCR3_14 PCR3_14_BASE.UINT32
#define PCR3_14_PFC PCR3_14_BASE.BIT._PFC
#define PCR3_14_PFCE PCR3_14_BASE.BIT._PFCE
#define PCR3_14_PM PCR3_14_BASE.BIT._PM
#define PCR3_14_PIPC PCR3_14_BASE.BIT._PIPC
#define PCR3_14_PMC PCR3_14_BASE.BIT._PMC
#define PCR3_14_PPR PCR3_14_BASE.BIT._PPR
#define PCR3_14_P PCR3_14_BASE.BIT._P
#define PCR3_14_PIBC PCR3_14_BASE.BIT._PIBC
#define PCR3_14_PBDC PCR3_14_BASE.BIT._PBDC
#define PCR3_14_PD PCR3_14_BASE.BIT._PD
#define PCR3_14_PU PCR3_14_BASE.BIT._PU
#define PCR3_14_PIS PCR3_14_BASE.BIT._PIS
#define PCR3_14_PDSC PCR3_14_BASE.BIT._PDSC
#define PCR3_14_PUCC PCR3_14_BASE.BIT._PUCC
#define PCR3_14_PODCE PCR3_14_BASE.BIT._PODCE
#define PCR3_14_PODC PCR3_14_BASE.BIT._PODC
#define PCR3_14_PINV PCR3_14_BASE.BIT._PINV
#define PCR4_0 PCR4_0_BASE.UINT32
#define PCR4_0_PFC PCR4_0_BASE.BIT._PFC
#define PCR4_0_PFCE PCR4_0_BASE.BIT._PFCE
#define PCR4_0_PM PCR4_0_BASE.BIT._PM
#define PCR4_0_PIPC PCR4_0_BASE.BIT._PIPC
#define PCR4_0_PMC PCR4_0_BASE.BIT._PMC
#define PCR4_0_PPR PCR4_0_BASE.BIT._PPR
#define PCR4_0_P PCR4_0_BASE.BIT._P
#define PCR4_0_PIBC PCR4_0_BASE.BIT._PIBC
#define PCR4_0_PBDC PCR4_0_BASE.BIT._PBDC
#define PCR4_0_PD PCR4_0_BASE.BIT._PD
#define PCR4_0_PU PCR4_0_BASE.BIT._PU
#define PCR4_0_PIS PCR4_0_BASE.BIT._PIS
#define PCR4_0_PDSC PCR4_0_BASE.BIT._PDSC
#define PCR4_0_PUCC PCR4_0_BASE.BIT._PUCC
#define PCR4_0_PODCE PCR4_0_BASE.BIT._PODCE
#define PCR4_0_PODC PCR4_0_BASE.BIT._PODC
#define PCR4_0_PINV PCR4_0_BASE.BIT._PINV
#define PCR4_1 PCR4_1_BASE.UINT32
#define PCR4_1_PFC PCR4_1_BASE.BIT._PFC
#define PCR4_1_PFCE PCR4_1_BASE.BIT._PFCE
#define PCR4_1_PM PCR4_1_BASE.BIT._PM
#define PCR4_1_PIPC PCR4_1_BASE.BIT._PIPC
#define PCR4_1_PMC PCR4_1_BASE.BIT._PMC
#define PCR4_1_PPR PCR4_1_BASE.BIT._PPR
#define PCR4_1_P PCR4_1_BASE.BIT._P
#define PCR4_1_PIBC PCR4_1_BASE.BIT._PIBC
#define PCR4_1_PBDC PCR4_1_BASE.BIT._PBDC
#define PCR4_1_PD PCR4_1_BASE.BIT._PD
#define PCR4_1_PU PCR4_1_BASE.BIT._PU
#define PCR4_1_PIS PCR4_1_BASE.BIT._PIS
#define PCR4_1_PDSC PCR4_1_BASE.BIT._PDSC
#define PCR4_1_PUCC PCR4_1_BASE.BIT._PUCC
#define PCR4_1_PODCE PCR4_1_BASE.BIT._PODCE
#define PCR4_1_PODC PCR4_1_BASE.BIT._PODC
#define PCR4_1_PINV PCR4_1_BASE.BIT._PINV
#define PCR4_2 PCR4_2_BASE.UINT32
#define PCR4_2_PFC PCR4_2_BASE.BIT._PFC
#define PCR4_2_PFCE PCR4_2_BASE.BIT._PFCE
#define PCR4_2_PM PCR4_2_BASE.BIT._PM
#define PCR4_2_PIPC PCR4_2_BASE.BIT._PIPC
#define PCR4_2_PMC PCR4_2_BASE.BIT._PMC
#define PCR4_2_PPR PCR4_2_BASE.BIT._PPR
#define PCR4_2_P PCR4_2_BASE.BIT._P
#define PCR4_2_PIBC PCR4_2_BASE.BIT._PIBC
#define PCR4_2_PBDC PCR4_2_BASE.BIT._PBDC
#define PCR4_2_PD PCR4_2_BASE.BIT._PD
#define PCR4_2_PU PCR4_2_BASE.BIT._PU
#define PCR4_2_PIS PCR4_2_BASE.BIT._PIS
#define PCR4_2_PDSC PCR4_2_BASE.BIT._PDSC
#define PCR4_2_PUCC PCR4_2_BASE.BIT._PUCC
#define PCR4_2_PODCE PCR4_2_BASE.BIT._PODCE
#define PCR4_2_PODC PCR4_2_BASE.BIT._PODC
#define PCR4_2_PINV PCR4_2_BASE.BIT._PINV
#define PCR4_3 PCR4_3_BASE.UINT32
#define PCR4_3_PFC PCR4_3_BASE.BIT._PFC
#define PCR4_3_PFCE PCR4_3_BASE.BIT._PFCE
#define PCR4_3_PM PCR4_3_BASE.BIT._PM
#define PCR4_3_PIPC PCR4_3_BASE.BIT._PIPC
#define PCR4_3_PMC PCR4_3_BASE.BIT._PMC
#define PCR4_3_PPR PCR4_3_BASE.BIT._PPR
#define PCR4_3_P PCR4_3_BASE.BIT._P
#define PCR4_3_PIBC PCR4_3_BASE.BIT._PIBC
#define PCR4_3_PBDC PCR4_3_BASE.BIT._PBDC
#define PCR4_3_PD PCR4_3_BASE.BIT._PD
#define PCR4_3_PU PCR4_3_BASE.BIT._PU
#define PCR4_3_PIS PCR4_3_BASE.BIT._PIS
#define PCR4_3_PDSC PCR4_3_BASE.BIT._PDSC
#define PCR4_3_PUCC PCR4_3_BASE.BIT._PUCC
#define PCR4_3_PODCE PCR4_3_BASE.BIT._PODCE
#define PCR4_3_PODC PCR4_3_BASE.BIT._PODC
#define PCR4_3_PINV PCR4_3_BASE.BIT._PINV
#define PCR4_4 PCR4_4_BASE.UINT32
#define PCR4_4_PFC PCR4_4_BASE.BIT._PFC
#define PCR4_4_PFCE PCR4_4_BASE.BIT._PFCE
#define PCR4_4_PM PCR4_4_BASE.BIT._PM
#define PCR4_4_PIPC PCR4_4_BASE.BIT._PIPC
#define PCR4_4_PMC PCR4_4_BASE.BIT._PMC
#define PCR4_4_PPR PCR4_4_BASE.BIT._PPR
#define PCR4_4_P PCR4_4_BASE.BIT._P
#define PCR4_4_PIBC PCR4_4_BASE.BIT._PIBC
#define PCR4_4_PBDC PCR4_4_BASE.BIT._PBDC
#define PCR4_4_PD PCR4_4_BASE.BIT._PD
#define PCR4_4_PU PCR4_4_BASE.BIT._PU
#define PCR4_4_PIS PCR4_4_BASE.BIT._PIS
#define PCR4_4_PDSC PCR4_4_BASE.BIT._PDSC
#define PCR4_4_PUCC PCR4_4_BASE.BIT._PUCC
#define PCR4_4_PODCE PCR4_4_BASE.BIT._PODCE
#define PCR4_4_PODC PCR4_4_BASE.BIT._PODC
#define PCR4_4_PINV PCR4_4_BASE.BIT._PINV
#define PCR4_5 PCR4_5_BASE.UINT32
#define PCR4_5_PFC PCR4_5_BASE.BIT._PFC
#define PCR4_5_PFCE PCR4_5_BASE.BIT._PFCE
#define PCR4_5_PM PCR4_5_BASE.BIT._PM
#define PCR4_5_PIPC PCR4_5_BASE.BIT._PIPC
#define PCR4_5_PMC PCR4_5_BASE.BIT._PMC
#define PCR4_5_PPR PCR4_5_BASE.BIT._PPR
#define PCR4_5_P PCR4_5_BASE.BIT._P
#define PCR4_5_PIBC PCR4_5_BASE.BIT._PIBC
#define PCR4_5_PBDC PCR4_5_BASE.BIT._PBDC
#define PCR4_5_PD PCR4_5_BASE.BIT._PD
#define PCR4_5_PU PCR4_5_BASE.BIT._PU
#define PCR4_5_PIS PCR4_5_BASE.BIT._PIS
#define PCR4_5_PDSC PCR4_5_BASE.BIT._PDSC
#define PCR4_5_PUCC PCR4_5_BASE.BIT._PUCC
#define PCR4_5_PODCE PCR4_5_BASE.BIT._PODCE
#define PCR4_5_PODC PCR4_5_BASE.BIT._PODC
#define PCR4_5_PINV PCR4_5_BASE.BIT._PINV
#define PCR4_6 PCR4_6_BASE.UINT32
#define PCR4_6_PFC PCR4_6_BASE.BIT._PFC
#define PCR4_6_PFCE PCR4_6_BASE.BIT._PFCE
#define PCR4_6_PM PCR4_6_BASE.BIT._PM
#define PCR4_6_PIPC PCR4_6_BASE.BIT._PIPC
#define PCR4_6_PMC PCR4_6_BASE.BIT._PMC
#define PCR4_6_PPR PCR4_6_BASE.BIT._PPR
#define PCR4_6_P PCR4_6_BASE.BIT._P
#define PCR4_6_PIBC PCR4_6_BASE.BIT._PIBC
#define PCR4_6_PBDC PCR4_6_BASE.BIT._PBDC
#define PCR4_6_PD PCR4_6_BASE.BIT._PD
#define PCR4_6_PU PCR4_6_BASE.BIT._PU
#define PCR4_6_PIS PCR4_6_BASE.BIT._PIS
#define PCR4_6_PDSC PCR4_6_BASE.BIT._PDSC
#define PCR4_6_PUCC PCR4_6_BASE.BIT._PUCC
#define PCR4_6_PODCE PCR4_6_BASE.BIT._PODCE
#define PCR4_6_PODC PCR4_6_BASE.BIT._PODC
#define PCR4_6_PINV PCR4_6_BASE.BIT._PINV
#define PCR4_7 PCR4_7_BASE.UINT32
#define PCR4_7_PFC PCR4_7_BASE.BIT._PFC
#define PCR4_7_PFCE PCR4_7_BASE.BIT._PFCE
#define PCR4_7_PM PCR4_7_BASE.BIT._PM
#define PCR4_7_PIPC PCR4_7_BASE.BIT._PIPC
#define PCR4_7_PMC PCR4_7_BASE.BIT._PMC
#define PCR4_7_PPR PCR4_7_BASE.BIT._PPR
#define PCR4_7_P PCR4_7_BASE.BIT._P
#define PCR4_7_PIBC PCR4_7_BASE.BIT._PIBC
#define PCR4_7_PBDC PCR4_7_BASE.BIT._PBDC
#define PCR4_7_PD PCR4_7_BASE.BIT._PD
#define PCR4_7_PU PCR4_7_BASE.BIT._PU
#define PCR4_7_PIS PCR4_7_BASE.BIT._PIS
#define PCR4_7_PDSC PCR4_7_BASE.BIT._PDSC
#define PCR4_7_PUCC PCR4_7_BASE.BIT._PUCC
#define PCR4_7_PODCE PCR4_7_BASE.BIT._PODCE
#define PCR4_7_PODC PCR4_7_BASE.BIT._PODC
#define PCR4_7_PINV PCR4_7_BASE.BIT._PINV
#define PCR4_8 PCR4_8_BASE.UINT32
#define PCR4_8_PFC PCR4_8_BASE.BIT._PFC
#define PCR4_8_PFCE PCR4_8_BASE.BIT._PFCE
#define PCR4_8_PM PCR4_8_BASE.BIT._PM
#define PCR4_8_PIPC PCR4_8_BASE.BIT._PIPC
#define PCR4_8_PMC PCR4_8_BASE.BIT._PMC
#define PCR4_8_PPR PCR4_8_BASE.BIT._PPR
#define PCR4_8_P PCR4_8_BASE.BIT._P
#define PCR4_8_PIBC PCR4_8_BASE.BIT._PIBC
#define PCR4_8_PBDC PCR4_8_BASE.BIT._PBDC
#define PCR4_8_PD PCR4_8_BASE.BIT._PD
#define PCR4_8_PU PCR4_8_BASE.BIT._PU
#define PCR4_8_PIS PCR4_8_BASE.BIT._PIS
#define PCR4_8_PDSC PCR4_8_BASE.BIT._PDSC
#define PCR4_8_PUCC PCR4_8_BASE.BIT._PUCC
#define PCR4_8_PODCE PCR4_8_BASE.BIT._PODCE
#define PCR4_8_PODC PCR4_8_BASE.BIT._PODC
#define PCR4_8_PINV PCR4_8_BASE.BIT._PINV
#define PCR4_9 PCR4_9_BASE.UINT32
#define PCR4_9_PFC PCR4_9_BASE.BIT._PFC
#define PCR4_9_PFCE PCR4_9_BASE.BIT._PFCE
#define PCR4_9_PM PCR4_9_BASE.BIT._PM
#define PCR4_9_PIPC PCR4_9_BASE.BIT._PIPC
#define PCR4_9_PMC PCR4_9_BASE.BIT._PMC
#define PCR4_9_PPR PCR4_9_BASE.BIT._PPR
#define PCR4_9_P PCR4_9_BASE.BIT._P
#define PCR4_9_PIBC PCR4_9_BASE.BIT._PIBC
#define PCR4_9_PBDC PCR4_9_BASE.BIT._PBDC
#define PCR4_9_PD PCR4_9_BASE.BIT._PD
#define PCR4_9_PU PCR4_9_BASE.BIT._PU
#define PCR4_9_PIS PCR4_9_BASE.BIT._PIS
#define PCR4_9_PDSC PCR4_9_BASE.BIT._PDSC
#define PCR4_9_PUCC PCR4_9_BASE.BIT._PUCC
#define PCR4_9_PODCE PCR4_9_BASE.BIT._PODCE
#define PCR4_9_PODC PCR4_9_BASE.BIT._PODC
#define PCR4_9_PINV PCR4_9_BASE.BIT._PINV
#define PCR4_10 PCR4_10_BASE.UINT32
#define PCR4_10_PFC PCR4_10_BASE.BIT._PFC
#define PCR4_10_PFCE PCR4_10_BASE.BIT._PFCE
#define PCR4_10_PM PCR4_10_BASE.BIT._PM
#define PCR4_10_PIPC PCR4_10_BASE.BIT._PIPC
#define PCR4_10_PMC PCR4_10_BASE.BIT._PMC
#define PCR4_10_PPR PCR4_10_BASE.BIT._PPR
#define PCR4_10_P PCR4_10_BASE.BIT._P
#define PCR4_10_PIBC PCR4_10_BASE.BIT._PIBC
#define PCR4_10_PBDC PCR4_10_BASE.BIT._PBDC
#define PCR4_10_PD PCR4_10_BASE.BIT._PD
#define PCR4_10_PU PCR4_10_BASE.BIT._PU
#define PCR4_10_PIS PCR4_10_BASE.BIT._PIS
#define PCR4_10_PDSC PCR4_10_BASE.BIT._PDSC
#define PCR4_10_PUCC PCR4_10_BASE.BIT._PUCC
#define PCR4_10_PODCE PCR4_10_BASE.BIT._PODCE
#define PCR4_10_PODC PCR4_10_BASE.BIT._PODC
#define PCR4_10_PINV PCR4_10_BASE.BIT._PINV
#define PCR4_11 PCR4_11_BASE.UINT32
#define PCR4_11_PFC PCR4_11_BASE.BIT._PFC
#define PCR4_11_PFCE PCR4_11_BASE.BIT._PFCE
#define PCR4_11_PM PCR4_11_BASE.BIT._PM
#define PCR4_11_PIPC PCR4_11_BASE.BIT._PIPC
#define PCR4_11_PMC PCR4_11_BASE.BIT._PMC
#define PCR4_11_PPR PCR4_11_BASE.BIT._PPR
#define PCR4_11_P PCR4_11_BASE.BIT._P
#define PCR4_11_PIBC PCR4_11_BASE.BIT._PIBC
#define PCR4_11_PBDC PCR4_11_BASE.BIT._PBDC
#define PCR4_11_PD PCR4_11_BASE.BIT._PD
#define PCR4_11_PU PCR4_11_BASE.BIT._PU
#define PCR4_11_PIS PCR4_11_BASE.BIT._PIS
#define PCR4_11_PDSC PCR4_11_BASE.BIT._PDSC
#define PCR4_11_PUCC PCR4_11_BASE.BIT._PUCC
#define PCR4_11_PODCE PCR4_11_BASE.BIT._PODCE
#define PCR4_11_PODC PCR4_11_BASE.BIT._PODC
#define PCR4_11_PINV PCR4_11_BASE.BIT._PINV
#define PCR4_12 PCR4_12_BASE.UINT32
#define PCR4_12_PFC PCR4_12_BASE.BIT._PFC
#define PCR4_12_PFCE PCR4_12_BASE.BIT._PFCE
#define PCR4_12_PM PCR4_12_BASE.BIT._PM
#define PCR4_12_PIPC PCR4_12_BASE.BIT._PIPC
#define PCR4_12_PMC PCR4_12_BASE.BIT._PMC
#define PCR4_12_PPR PCR4_12_BASE.BIT._PPR
#define PCR4_12_P PCR4_12_BASE.BIT._P
#define PCR4_12_PIBC PCR4_12_BASE.BIT._PIBC
#define PCR4_12_PBDC PCR4_12_BASE.BIT._PBDC
#define PCR4_12_PD PCR4_12_BASE.BIT._PD
#define PCR4_12_PU PCR4_12_BASE.BIT._PU
#define PCR4_12_PIS PCR4_12_BASE.BIT._PIS
#define PCR4_12_PDSC PCR4_12_BASE.BIT._PDSC
#define PCR4_12_PUCC PCR4_12_BASE.BIT._PUCC
#define PCR4_12_PODCE PCR4_12_BASE.BIT._PODCE
#define PCR4_12_PODC PCR4_12_BASE.BIT._PODC
#define PCR4_12_PINV PCR4_12_BASE.BIT._PINV
#define PCR4_13 PCR4_13_BASE.UINT32
#define PCR4_13_PFC PCR4_13_BASE.BIT._PFC
#define PCR4_13_PFCE PCR4_13_BASE.BIT._PFCE
#define PCR4_13_PM PCR4_13_BASE.BIT._PM
#define PCR4_13_PIPC PCR4_13_BASE.BIT._PIPC
#define PCR4_13_PMC PCR4_13_BASE.BIT._PMC
#define PCR4_13_PPR PCR4_13_BASE.BIT._PPR
#define PCR4_13_P PCR4_13_BASE.BIT._P
#define PCR4_13_PIBC PCR4_13_BASE.BIT._PIBC
#define PCR4_13_PBDC PCR4_13_BASE.BIT._PBDC
#define PCR4_13_PD PCR4_13_BASE.BIT._PD
#define PCR4_13_PU PCR4_13_BASE.BIT._PU
#define PCR4_13_PIS PCR4_13_BASE.BIT._PIS
#define PCR4_13_PDSC PCR4_13_BASE.BIT._PDSC
#define PCR4_13_PUCC PCR4_13_BASE.BIT._PUCC
#define PCR4_13_PODCE PCR4_13_BASE.BIT._PODCE
#define PCR4_13_PODC PCR4_13_BASE.BIT._PODC
#define PCR4_13_PINV PCR4_13_BASE.BIT._PINV
#define PCR4_14 PCR4_14_BASE.UINT32
#define PCR4_14_PFC PCR4_14_BASE.BIT._PFC
#define PCR4_14_PFCE PCR4_14_BASE.BIT._PFCE
#define PCR4_14_PM PCR4_14_BASE.BIT._PM
#define PCR4_14_PIPC PCR4_14_BASE.BIT._PIPC
#define PCR4_14_PMC PCR4_14_BASE.BIT._PMC
#define PCR4_14_PPR PCR4_14_BASE.BIT._PPR
#define PCR4_14_P PCR4_14_BASE.BIT._P
#define PCR4_14_PIBC PCR4_14_BASE.BIT._PIBC
#define PCR4_14_PBDC PCR4_14_BASE.BIT._PBDC
#define PCR4_14_PD PCR4_14_BASE.BIT._PD
#define PCR4_14_PU PCR4_14_BASE.BIT._PU
#define PCR4_14_PIS PCR4_14_BASE.BIT._PIS
#define PCR4_14_PDSC PCR4_14_BASE.BIT._PDSC
#define PCR4_14_PUCC PCR4_14_BASE.BIT._PUCC
#define PCR4_14_PODCE PCR4_14_BASE.BIT._PODCE
#define PCR4_14_PODC PCR4_14_BASE.BIT._PODC
#define PCR4_14_PINV PCR4_14_BASE.BIT._PINV
#define PCR5_0 PCR5_0_BASE.UINT32
#define PCR5_0_PFC PCR5_0_BASE.BIT._PFC
#define PCR5_0_PFCE PCR5_0_BASE.BIT._PFCE
#define PCR5_0_PM PCR5_0_BASE.BIT._PM
#define PCR5_0_PIPC PCR5_0_BASE.BIT._PIPC
#define PCR5_0_PMC PCR5_0_BASE.BIT._PMC
#define PCR5_0_PPR PCR5_0_BASE.BIT._PPR
#define PCR5_0_P PCR5_0_BASE.BIT._P
#define PCR5_0_PIBC PCR5_0_BASE.BIT._PIBC
#define PCR5_0_PBDC PCR5_0_BASE.BIT._PBDC
#define PCR5_0_PD PCR5_0_BASE.BIT._PD
#define PCR5_0_PU PCR5_0_BASE.BIT._PU
#define PCR5_0_PIS PCR5_0_BASE.BIT._PIS
#define PCR5_0_PDSC PCR5_0_BASE.BIT._PDSC
#define PCR5_0_PUCC PCR5_0_BASE.BIT._PUCC
#define PCR5_0_PODCE PCR5_0_BASE.BIT._PODCE
#define PCR5_0_PODC PCR5_0_BASE.BIT._PODC
#define PCR5_0_PINV PCR5_0_BASE.BIT._PINV
#define PCR5_1 PCR5_1_BASE.UINT32
#define PCR5_1_PFC PCR5_1_BASE.BIT._PFC
#define PCR5_1_PFCE PCR5_1_BASE.BIT._PFCE
#define PCR5_1_PM PCR5_1_BASE.BIT._PM
#define PCR5_1_PIPC PCR5_1_BASE.BIT._PIPC
#define PCR5_1_PMC PCR5_1_BASE.BIT._PMC
#define PCR5_1_PPR PCR5_1_BASE.BIT._PPR
#define PCR5_1_P PCR5_1_BASE.BIT._P
#define PCR5_1_PIBC PCR5_1_BASE.BIT._PIBC
#define PCR5_1_PBDC PCR5_1_BASE.BIT._PBDC
#define PCR5_1_PD PCR5_1_BASE.BIT._PD
#define PCR5_1_PU PCR5_1_BASE.BIT._PU
#define PCR5_1_PIS PCR5_1_BASE.BIT._PIS
#define PCR5_1_PDSC PCR5_1_BASE.BIT._PDSC
#define PCR5_1_PUCC PCR5_1_BASE.BIT._PUCC
#define PCR5_1_PODCE PCR5_1_BASE.BIT._PODCE
#define PCR5_1_PODC PCR5_1_BASE.BIT._PODC
#define PCR5_1_PINV PCR5_1_BASE.BIT._PINV
#define PCR5_4 PCR5_4_BASE.UINT32
#define PCR5_4_PFC PCR5_4_BASE.BIT._PFC
#define PCR5_4_PFCE PCR5_4_BASE.BIT._PFCE
#define PCR5_4_PM PCR5_4_BASE.BIT._PM
#define PCR5_4_PIPC PCR5_4_BASE.BIT._PIPC
#define PCR5_4_PMC PCR5_4_BASE.BIT._PMC
#define PCR5_4_PPR PCR5_4_BASE.BIT._PPR
#define PCR5_4_P PCR5_4_BASE.BIT._P
#define PCR5_4_PIBC PCR5_4_BASE.BIT._PIBC
#define PCR5_4_PBDC PCR5_4_BASE.BIT._PBDC
#define PCR5_4_PD PCR5_4_BASE.BIT._PD
#define PCR5_4_PU PCR5_4_BASE.BIT._PU
#define PCR5_4_PIS PCR5_4_BASE.BIT._PIS
#define PCR5_4_PDSC PCR5_4_BASE.BIT._PDSC
#define PCR5_4_PUCC PCR5_4_BASE.BIT._PUCC
#define PCR5_4_PODCE PCR5_4_BASE.BIT._PODCE
#define PCR5_4_PODC PCR5_4_BASE.BIT._PODC
#define PCR5_4_PINV PCR5_4_BASE.BIT._PINV
#define PCR5_5 PCR5_5_BASE.UINT32
#define PCR5_5_PFC PCR5_5_BASE.BIT._PFC
#define PCR5_5_PFCE PCR5_5_BASE.BIT._PFCE
#define PCR5_5_PM PCR5_5_BASE.BIT._PM
#define PCR5_5_PIPC PCR5_5_BASE.BIT._PIPC
#define PCR5_5_PMC PCR5_5_BASE.BIT._PMC
#define PCR5_5_PPR PCR5_5_BASE.BIT._PPR
#define PCR5_5_P PCR5_5_BASE.BIT._P
#define PCR5_5_PIBC PCR5_5_BASE.BIT._PIBC
#define PCR5_5_PBDC PCR5_5_BASE.BIT._PBDC
#define PCR5_5_PD PCR5_5_BASE.BIT._PD
#define PCR5_5_PU PCR5_5_BASE.BIT._PU
#define PCR5_5_PIS PCR5_5_BASE.BIT._PIS
#define PCR5_5_PDSC PCR5_5_BASE.BIT._PDSC
#define PCR5_5_PUCC PCR5_5_BASE.BIT._PUCC
#define PCR5_5_PODCE PCR5_5_BASE.BIT._PODCE
#define PCR5_5_PODC PCR5_5_BASE.BIT._PODC
#define PCR5_5_PINV PCR5_5_BASE.BIT._PINV
#define PCR5_6 PCR5_6_BASE.UINT32
#define PCR5_6_PFC PCR5_6_BASE.BIT._PFC
#define PCR5_6_PFCE PCR5_6_BASE.BIT._PFCE
#define PCR5_6_PM PCR5_6_BASE.BIT._PM
#define PCR5_6_PIPC PCR5_6_BASE.BIT._PIPC
#define PCR5_6_PMC PCR5_6_BASE.BIT._PMC
#define PCR5_6_PPR PCR5_6_BASE.BIT._PPR
#define PCR5_6_P PCR5_6_BASE.BIT._P
#define PCR5_6_PIBC PCR5_6_BASE.BIT._PIBC
#define PCR5_6_PBDC PCR5_6_BASE.BIT._PBDC
#define PCR5_6_PD PCR5_6_BASE.BIT._PD
#define PCR5_6_PU PCR5_6_BASE.BIT._PU
#define PCR5_6_PIS PCR5_6_BASE.BIT._PIS
#define PCR5_6_PDSC PCR5_6_BASE.BIT._PDSC
#define PCR5_6_PUCC PCR5_6_BASE.BIT._PUCC
#define PCR5_6_PODCE PCR5_6_BASE.BIT._PODCE
#define PCR5_6_PODC PCR5_6_BASE.BIT._PODC
#define PCR5_6_PINV PCR5_6_BASE.BIT._PINV
#define PCR5_7 PCR5_7_BASE.UINT32
#define PCR5_7_PFC PCR5_7_BASE.BIT._PFC
#define PCR5_7_PFCE PCR5_7_BASE.BIT._PFCE
#define PCR5_7_PM PCR5_7_BASE.BIT._PM
#define PCR5_7_PIPC PCR5_7_BASE.BIT._PIPC
#define PCR5_7_PMC PCR5_7_BASE.BIT._PMC
#define PCR5_7_PPR PCR5_7_BASE.BIT._PPR
#define PCR5_7_P PCR5_7_BASE.BIT._P
#define PCR5_7_PIBC PCR5_7_BASE.BIT._PIBC
#define PCR5_7_PBDC PCR5_7_BASE.BIT._PBDC
#define PCR5_7_PD PCR5_7_BASE.BIT._PD
#define PCR5_7_PU PCR5_7_BASE.BIT._PU
#define PCR5_7_PIS PCR5_7_BASE.BIT._PIS
#define PCR5_7_PDSC PCR5_7_BASE.BIT._PDSC
#define PCR5_7_PUCC PCR5_7_BASE.BIT._PUCC
#define PCR5_7_PODCE PCR5_7_BASE.BIT._PODCE
#define PCR5_7_PODC PCR5_7_BASE.BIT._PODC
#define PCR5_7_PINV PCR5_7_BASE.BIT._PINV
#define PCR5_8 PCR5_8_BASE.UINT32
#define PCR5_8_PFC PCR5_8_BASE.BIT._PFC
#define PCR5_8_PFCE PCR5_8_BASE.BIT._PFCE
#define PCR5_8_PM PCR5_8_BASE.BIT._PM
#define PCR5_8_PIPC PCR5_8_BASE.BIT._PIPC
#define PCR5_8_PMC PCR5_8_BASE.BIT._PMC
#define PCR5_8_PPR PCR5_8_BASE.BIT._PPR
#define PCR5_8_P PCR5_8_BASE.BIT._P
#define PCR5_8_PIBC PCR5_8_BASE.BIT._PIBC
#define PCR5_8_PBDC PCR5_8_BASE.BIT._PBDC
#define PCR5_8_PD PCR5_8_BASE.BIT._PD
#define PCR5_8_PU PCR5_8_BASE.BIT._PU
#define PCR5_8_PIS PCR5_8_BASE.BIT._PIS
#define PCR5_8_PDSC PCR5_8_BASE.BIT._PDSC
#define PCR5_8_PUCC PCR5_8_BASE.BIT._PUCC
#define PCR5_8_PODCE PCR5_8_BASE.BIT._PODCE
#define PCR5_8_PODC PCR5_8_BASE.BIT._PODC
#define PCR5_8_PINV PCR5_8_BASE.BIT._PINV
#define PCR5_9 PCR5_9_BASE.UINT32
#define PCR5_9_PFC PCR5_9_BASE.BIT._PFC
#define PCR5_9_PFCE PCR5_9_BASE.BIT._PFCE
#define PCR5_9_PM PCR5_9_BASE.BIT._PM
#define PCR5_9_PIPC PCR5_9_BASE.BIT._PIPC
#define PCR5_9_PMC PCR5_9_BASE.BIT._PMC
#define PCR5_9_PPR PCR5_9_BASE.BIT._PPR
#define PCR5_9_P PCR5_9_BASE.BIT._P
#define PCR5_9_PIBC PCR5_9_BASE.BIT._PIBC
#define PCR5_9_PBDC PCR5_9_BASE.BIT._PBDC
#define PCR5_9_PD PCR5_9_BASE.BIT._PD
#define PCR5_9_PU PCR5_9_BASE.BIT._PU
#define PCR5_9_PIS PCR5_9_BASE.BIT._PIS
#define PCR5_9_PDSC PCR5_9_BASE.BIT._PDSC
#define PCR5_9_PUCC PCR5_9_BASE.BIT._PUCC
#define PCR5_9_PODCE PCR5_9_BASE.BIT._PODCE
#define PCR5_9_PODC PCR5_9_BASE.BIT._PODC
#define PCR5_9_PINV PCR5_9_BASE.BIT._PINV
#define PCR5_10 PCR5_10_BASE.UINT32
#define PCR5_10_PFC PCR5_10_BASE.BIT._PFC
#define PCR5_10_PFCE PCR5_10_BASE.BIT._PFCE
#define PCR5_10_PM PCR5_10_BASE.BIT._PM
#define PCR5_10_PIPC PCR5_10_BASE.BIT._PIPC
#define PCR5_10_PMC PCR5_10_BASE.BIT._PMC
#define PCR5_10_PPR PCR5_10_BASE.BIT._PPR
#define PCR5_10_P PCR5_10_BASE.BIT._P
#define PCR5_10_PIBC PCR5_10_BASE.BIT._PIBC
#define PCR5_10_PBDC PCR5_10_BASE.BIT._PBDC
#define PCR5_10_PD PCR5_10_BASE.BIT._PD
#define PCR5_10_PU PCR5_10_BASE.BIT._PU
#define PCR5_10_PIS PCR5_10_BASE.BIT._PIS
#define PCR5_10_PDSC PCR5_10_BASE.BIT._PDSC
#define PCR5_10_PUCC PCR5_10_BASE.BIT._PUCC
#define PCR5_10_PODCE PCR5_10_BASE.BIT._PODCE
#define PCR5_10_PODC PCR5_10_BASE.BIT._PODC
#define PCR5_10_PINV PCR5_10_BASE.BIT._PINV
#define PCR5_11 PCR5_11_BASE.UINT32
#define PCR5_11_PFC PCR5_11_BASE.BIT._PFC
#define PCR5_11_PFCE PCR5_11_BASE.BIT._PFCE
#define PCR5_11_PM PCR5_11_BASE.BIT._PM
#define PCR5_11_PIPC PCR5_11_BASE.BIT._PIPC
#define PCR5_11_PMC PCR5_11_BASE.BIT._PMC
#define PCR5_11_PPR PCR5_11_BASE.BIT._PPR
#define PCR5_11_P PCR5_11_BASE.BIT._P
#define PCR5_11_PIBC PCR5_11_BASE.BIT._PIBC
#define PCR5_11_PBDC PCR5_11_BASE.BIT._PBDC
#define PCR5_11_PD PCR5_11_BASE.BIT._PD
#define PCR5_11_PU PCR5_11_BASE.BIT._PU
#define PCR5_11_PIS PCR5_11_BASE.BIT._PIS
#define PCR5_11_PDSC PCR5_11_BASE.BIT._PDSC
#define PCR5_11_PUCC PCR5_11_BASE.BIT._PUCC
#define PCR5_11_PODCE PCR5_11_BASE.BIT._PODCE
#define PCR5_11_PODC PCR5_11_BASE.BIT._PODC
#define PCR5_11_PINV PCR5_11_BASE.BIT._PINV
#define PCR5_12 PCR5_12_BASE.UINT32
#define PCR5_12_PFC PCR5_12_BASE.BIT._PFC
#define PCR5_12_PFCE PCR5_12_BASE.BIT._PFCE
#define PCR5_12_PM PCR5_12_BASE.BIT._PM
#define PCR5_12_PIPC PCR5_12_BASE.BIT._PIPC
#define PCR5_12_PMC PCR5_12_BASE.BIT._PMC
#define PCR5_12_PPR PCR5_12_BASE.BIT._PPR
#define PCR5_12_P PCR5_12_BASE.BIT._P
#define PCR5_12_PIBC PCR5_12_BASE.BIT._PIBC
#define PCR5_12_PBDC PCR5_12_BASE.BIT._PBDC
#define PCR5_12_PD PCR5_12_BASE.BIT._PD
#define PCR5_12_PU PCR5_12_BASE.BIT._PU
#define PCR5_12_PIS PCR5_12_BASE.BIT._PIS
#define PCR5_12_PDSC PCR5_12_BASE.BIT._PDSC
#define PCR5_12_PUCC PCR5_12_BASE.BIT._PUCC
#define PCR5_12_PODCE PCR5_12_BASE.BIT._PODCE
#define PCR5_12_PODC PCR5_12_BASE.BIT._PODC
#define PCR5_12_PINV PCR5_12_BASE.BIT._PINV
#define PCR5_13 PCR5_13_BASE.UINT32
#define PCR5_13_PFC PCR5_13_BASE.BIT._PFC
#define PCR5_13_PFCE PCR5_13_BASE.BIT._PFCE
#define PCR5_13_PM PCR5_13_BASE.BIT._PM
#define PCR5_13_PIPC PCR5_13_BASE.BIT._PIPC
#define PCR5_13_PMC PCR5_13_BASE.BIT._PMC
#define PCR5_13_PPR PCR5_13_BASE.BIT._PPR
#define PCR5_13_P PCR5_13_BASE.BIT._P
#define PCR5_13_PIBC PCR5_13_BASE.BIT._PIBC
#define PCR5_13_PBDC PCR5_13_BASE.BIT._PBDC
#define PCR5_13_PD PCR5_13_BASE.BIT._PD
#define PCR5_13_PU PCR5_13_BASE.BIT._PU
#define PCR5_13_PIS PCR5_13_BASE.BIT._PIS
#define PCR5_13_PDSC PCR5_13_BASE.BIT._PDSC
#define PCR5_13_PUCC PCR5_13_BASE.BIT._PUCC
#define PCR5_13_PODCE PCR5_13_BASE.BIT._PODCE
#define PCR5_13_PODC PCR5_13_BASE.BIT._PODC
#define PCR5_13_PINV PCR5_13_BASE.BIT._PINV
#define PCR5_14 PCR5_14_BASE.UINT32
#define PCR5_14_PFC PCR5_14_BASE.BIT._PFC
#define PCR5_14_PFCE PCR5_14_BASE.BIT._PFCE
#define PCR5_14_PM PCR5_14_BASE.BIT._PM
#define PCR5_14_PIPC PCR5_14_BASE.BIT._PIPC
#define PCR5_14_PMC PCR5_14_BASE.BIT._PMC
#define PCR5_14_PPR PCR5_14_BASE.BIT._PPR
#define PCR5_14_P PCR5_14_BASE.BIT._P
#define PCR5_14_PIBC PCR5_14_BASE.BIT._PIBC
#define PCR5_14_PBDC PCR5_14_BASE.BIT._PBDC
#define PCR5_14_PD PCR5_14_BASE.BIT._PD
#define PCR5_14_PU PCR5_14_BASE.BIT._PU
#define PCR5_14_PIS PCR5_14_BASE.BIT._PIS
#define PCR5_14_PDSC PCR5_14_BASE.BIT._PDSC
#define PCR5_14_PUCC PCR5_14_BASE.BIT._PUCC
#define PCR5_14_PODCE PCR5_14_BASE.BIT._PODCE
#define PCR5_14_PODC PCR5_14_BASE.BIT._PODC
#define PCR5_14_PINV PCR5_14_BASE.BIT._PINV
#define PCR5_15 PCR5_15_BASE.UINT32
#define PCR5_15_PFC PCR5_15_BASE.BIT._PFC
#define PCR5_15_PFCE PCR5_15_BASE.BIT._PFCE
#define PCR5_15_PM PCR5_15_BASE.BIT._PM
#define PCR5_15_PIPC PCR5_15_BASE.BIT._PIPC
#define PCR5_15_PMC PCR5_15_BASE.BIT._PMC
#define PCR5_15_PPR PCR5_15_BASE.BIT._PPR
#define PCR5_15_P PCR5_15_BASE.BIT._P
#define PCR5_15_PIBC PCR5_15_BASE.BIT._PIBC
#define PCR5_15_PBDC PCR5_15_BASE.BIT._PBDC
#define PCR5_15_PD PCR5_15_BASE.BIT._PD
#define PCR5_15_PU PCR5_15_BASE.BIT._PU
#define PCR5_15_PIS PCR5_15_BASE.BIT._PIS
#define PCR5_15_PDSC PCR5_15_BASE.BIT._PDSC
#define PCR5_15_PUCC PCR5_15_BASE.BIT._PUCC
#define PCR5_15_PODCE PCR5_15_BASE.BIT._PODCE
#define PCR5_15_PODC PCR5_15_BASE.BIT._PODC
#define PCR5_15_PINV PCR5_15_BASE.BIT._PINV
#define PCR6_0 PCR6_0_BASE.UINT32
#define PCR6_0_PFC PCR6_0_BASE.BIT._PFC
#define PCR6_0_PFCE PCR6_0_BASE.BIT._PFCE
#define PCR6_0_PM PCR6_0_BASE.BIT._PM
#define PCR6_0_PIPC PCR6_0_BASE.BIT._PIPC
#define PCR6_0_PMC PCR6_0_BASE.BIT._PMC
#define PCR6_0_PPR PCR6_0_BASE.BIT._PPR
#define PCR6_0_P PCR6_0_BASE.BIT._P
#define PCR6_0_PIBC PCR6_0_BASE.BIT._PIBC
#define PCR6_0_PBDC PCR6_0_BASE.BIT._PBDC
#define PCR6_0_PD PCR6_0_BASE.BIT._PD
#define PCR6_0_PU PCR6_0_BASE.BIT._PU
#define PCR6_0_PIS PCR6_0_BASE.BIT._PIS
#define PCR6_0_PDSC PCR6_0_BASE.BIT._PDSC
#define PCR6_0_PUCC PCR6_0_BASE.BIT._PUCC
#define PCR6_0_PODCE PCR6_0_BASE.BIT._PODCE
#define PCR6_0_PODC PCR6_0_BASE.BIT._PODC
#define PCR6_0_PINV PCR6_0_BASE.BIT._PINV
#define PCR6_1 PCR6_1_BASE.UINT32
#define PCR6_1_PFC PCR6_1_BASE.BIT._PFC
#define PCR6_1_PFCE PCR6_1_BASE.BIT._PFCE
#define PCR6_1_PM PCR6_1_BASE.BIT._PM
#define PCR6_1_PIPC PCR6_1_BASE.BIT._PIPC
#define PCR6_1_PMC PCR6_1_BASE.BIT._PMC
#define PCR6_1_PPR PCR6_1_BASE.BIT._PPR
#define PCR6_1_P PCR6_1_BASE.BIT._P
#define PCR6_1_PIBC PCR6_1_BASE.BIT._PIBC
#define PCR6_1_PBDC PCR6_1_BASE.BIT._PBDC
#define PCR6_1_PD PCR6_1_BASE.BIT._PD
#define PCR6_1_PU PCR6_1_BASE.BIT._PU
#define PCR6_1_PIS PCR6_1_BASE.BIT._PIS
#define PCR6_1_PDSC PCR6_1_BASE.BIT._PDSC
#define PCR6_1_PUCC PCR6_1_BASE.BIT._PUCC
#define PCR6_1_PODCE PCR6_1_BASE.BIT._PODCE
#define PCR6_1_PODC PCR6_1_BASE.BIT._PODC
#define PCR6_1_PINV PCR6_1_BASE.BIT._PINV
#define PCR6_2 PCR6_2_BASE.UINT32
#define PCR6_2_PFC PCR6_2_BASE.BIT._PFC
#define PCR6_2_PFCE PCR6_2_BASE.BIT._PFCE
#define PCR6_2_PM PCR6_2_BASE.BIT._PM
#define PCR6_2_PIPC PCR6_2_BASE.BIT._PIPC
#define PCR6_2_PMC PCR6_2_BASE.BIT._PMC
#define PCR6_2_PPR PCR6_2_BASE.BIT._PPR
#define PCR6_2_P PCR6_2_BASE.BIT._P
#define PCR6_2_PIBC PCR6_2_BASE.BIT._PIBC
#define PCR6_2_PBDC PCR6_2_BASE.BIT._PBDC
#define PCR6_2_PD PCR6_2_BASE.BIT._PD
#define PCR6_2_PU PCR6_2_BASE.BIT._PU
#define PCR6_2_PIS PCR6_2_BASE.BIT._PIS
#define PCR6_2_PDSC PCR6_2_BASE.BIT._PDSC
#define PCR6_2_PUCC PCR6_2_BASE.BIT._PUCC
#define PCR6_2_PODCE PCR6_2_BASE.BIT._PODCE
#define PCR6_2_PODC PCR6_2_BASE.BIT._PODC
#define PCR6_2_PINV PCR6_2_BASE.BIT._PINV
#define PCR6_3 PCR6_3_BASE.UINT32
#define PCR6_3_PFC PCR6_3_BASE.BIT._PFC
#define PCR6_3_PFCE PCR6_3_BASE.BIT._PFCE
#define PCR6_3_PM PCR6_3_BASE.BIT._PM
#define PCR6_3_PIPC PCR6_3_BASE.BIT._PIPC
#define PCR6_3_PMC PCR6_3_BASE.BIT._PMC
#define PCR6_3_PPR PCR6_3_BASE.BIT._PPR
#define PCR6_3_P PCR6_3_BASE.BIT._P
#define PCR6_3_PIBC PCR6_3_BASE.BIT._PIBC
#define PCR6_3_PBDC PCR6_3_BASE.BIT._PBDC
#define PCR6_3_PD PCR6_3_BASE.BIT._PD
#define PCR6_3_PU PCR6_3_BASE.BIT._PU
#define PCR6_3_PIS PCR6_3_BASE.BIT._PIS
#define PCR6_3_PDSC PCR6_3_BASE.BIT._PDSC
#define PCR6_3_PUCC PCR6_3_BASE.BIT._PUCC
#define PCR6_3_PODCE PCR6_3_BASE.BIT._PODCE
#define PCR6_3_PODC PCR6_3_BASE.BIT._PODC
#define PCR6_3_PINV PCR6_3_BASE.BIT._PINV
#define PCR6_4 PCR6_4_BASE.UINT32
#define PCR6_4_PFC PCR6_4_BASE.BIT._PFC
#define PCR6_4_PFCE PCR6_4_BASE.BIT._PFCE
#define PCR6_4_PM PCR6_4_BASE.BIT._PM
#define PCR6_4_PIPC PCR6_4_BASE.BIT._PIPC
#define PCR6_4_PMC PCR6_4_BASE.BIT._PMC
#define PCR6_4_PPR PCR6_4_BASE.BIT._PPR
#define PCR6_4_P PCR6_4_BASE.BIT._P
#define PCR6_4_PIBC PCR6_4_BASE.BIT._PIBC
#define PCR6_4_PBDC PCR6_4_BASE.BIT._PBDC
#define PCR6_4_PD PCR6_4_BASE.BIT._PD
#define PCR6_4_PU PCR6_4_BASE.BIT._PU
#define PCR6_4_PIS PCR6_4_BASE.BIT._PIS
#define PCR6_4_PDSC PCR6_4_BASE.BIT._PDSC
#define PCR6_4_PUCC PCR6_4_BASE.BIT._PUCC
#define PCR6_4_PODCE PCR6_4_BASE.BIT._PODCE
#define PCR6_4_PODC PCR6_4_BASE.BIT._PODC
#define PCR6_4_PINV PCR6_4_BASE.BIT._PINV
#define PCR6_5 PCR6_5_BASE.UINT32
#define PCR6_5_PFC PCR6_5_BASE.BIT._PFC
#define PCR6_5_PFCE PCR6_5_BASE.BIT._PFCE
#define PCR6_5_PM PCR6_5_BASE.BIT._PM
#define PCR6_5_PIPC PCR6_5_BASE.BIT._PIPC
#define PCR6_5_PMC PCR6_5_BASE.BIT._PMC
#define PCR6_5_PPR PCR6_5_BASE.BIT._PPR
#define PCR6_5_P PCR6_5_BASE.BIT._P
#define PCR6_5_PIBC PCR6_5_BASE.BIT._PIBC
#define PCR6_5_PBDC PCR6_5_BASE.BIT._PBDC
#define PCR6_5_PD PCR6_5_BASE.BIT._PD
#define PCR6_5_PU PCR6_5_BASE.BIT._PU
#define PCR6_5_PIS PCR6_5_BASE.BIT._PIS
#define PCR6_5_PDSC PCR6_5_BASE.BIT._PDSC
#define PCR6_5_PUCC PCR6_5_BASE.BIT._PUCC
#define PCR6_5_PODCE PCR6_5_BASE.BIT._PODCE
#define PCR6_5_PODC PCR6_5_BASE.BIT._PODC
#define PCR6_5_PINV PCR6_5_BASE.BIT._PINV
#define PCR6_6 PCR6_6_BASE.UINT32
#define PCR6_6_PFC PCR6_6_BASE.BIT._PFC
#define PCR6_6_PFCE PCR6_6_BASE.BIT._PFCE
#define PCR6_6_PM PCR6_6_BASE.BIT._PM
#define PCR6_6_PIPC PCR6_6_BASE.BIT._PIPC
#define PCR6_6_PMC PCR6_6_BASE.BIT._PMC
#define PCR6_6_PPR PCR6_6_BASE.BIT._PPR
#define PCR6_6_P PCR6_6_BASE.BIT._P
#define PCR6_6_PIBC PCR6_6_BASE.BIT._PIBC
#define PCR6_6_PBDC PCR6_6_BASE.BIT._PBDC
#define PCR6_6_PD PCR6_6_BASE.BIT._PD
#define PCR6_6_PU PCR6_6_BASE.BIT._PU
#define PCR6_6_PIS PCR6_6_BASE.BIT._PIS
#define PCR6_6_PDSC PCR6_6_BASE.BIT._PDSC
#define PCR6_6_PUCC PCR6_6_BASE.BIT._PUCC
#define PCR6_6_PODCE PCR6_6_BASE.BIT._PODCE
#define PCR6_6_PODC PCR6_6_BASE.BIT._PODC
#define PCR6_6_PINV PCR6_6_BASE.BIT._PINV
#define PCR6_7 PCR6_7_BASE.UINT32
#define PCR6_7_PFC PCR6_7_BASE.BIT._PFC
#define PCR6_7_PFCE PCR6_7_BASE.BIT._PFCE
#define PCR6_7_PM PCR6_7_BASE.BIT._PM
#define PCR6_7_PIPC PCR6_7_BASE.BIT._PIPC
#define PCR6_7_PMC PCR6_7_BASE.BIT._PMC
#define PCR6_7_PPR PCR6_7_BASE.BIT._PPR
#define PCR6_7_P PCR6_7_BASE.BIT._P
#define PCR6_7_PIBC PCR6_7_BASE.BIT._PIBC
#define PCR6_7_PBDC PCR6_7_BASE.BIT._PBDC
#define PCR6_7_PD PCR6_7_BASE.BIT._PD
#define PCR6_7_PU PCR6_7_BASE.BIT._PU
#define PCR6_7_PIS PCR6_7_BASE.BIT._PIS
#define PCR6_7_PDSC PCR6_7_BASE.BIT._PDSC
#define PCR6_7_PUCC PCR6_7_BASE.BIT._PUCC
#define PCR6_7_PODCE PCR6_7_BASE.BIT._PODCE
#define PCR6_7_PODC PCR6_7_BASE.BIT._PODC
#define PCR6_7_PINV PCR6_7_BASE.BIT._PINV
#define PCR6_8 PCR6_8_BASE.UINT32
#define PCR6_8_PFC PCR6_8_BASE.BIT._PFC
#define PCR6_8_PFCE PCR6_8_BASE.BIT._PFCE
#define PCR6_8_PM PCR6_8_BASE.BIT._PM
#define PCR6_8_PIPC PCR6_8_BASE.BIT._PIPC
#define PCR6_8_PMC PCR6_8_BASE.BIT._PMC
#define PCR6_8_PPR PCR6_8_BASE.BIT._PPR
#define PCR6_8_P PCR6_8_BASE.BIT._P
#define PCR6_8_PIBC PCR6_8_BASE.BIT._PIBC
#define PCR6_8_PBDC PCR6_8_BASE.BIT._PBDC
#define PCR6_8_PD PCR6_8_BASE.BIT._PD
#define PCR6_8_PU PCR6_8_BASE.BIT._PU
#define PCR6_8_PIS PCR6_8_BASE.BIT._PIS
#define PCR6_8_PDSC PCR6_8_BASE.BIT._PDSC
#define PCR6_8_PUCC PCR6_8_BASE.BIT._PUCC
#define PCR6_8_PODCE PCR6_8_BASE.BIT._PODCE
#define PCR6_8_PODC PCR6_8_BASE.BIT._PODC
#define PCR6_8_PINV PCR6_8_BASE.BIT._PINV
#define PCR6_9 PCR6_9_BASE.UINT32
#define PCR6_9_PFC PCR6_9_BASE.BIT._PFC
#define PCR6_9_PFCE PCR6_9_BASE.BIT._PFCE
#define PCR6_9_PM PCR6_9_BASE.BIT._PM
#define PCR6_9_PIPC PCR6_9_BASE.BIT._PIPC
#define PCR6_9_PMC PCR6_9_BASE.BIT._PMC
#define PCR6_9_PPR PCR6_9_BASE.BIT._PPR
#define PCR6_9_P PCR6_9_BASE.BIT._P
#define PCR6_9_PIBC PCR6_9_BASE.BIT._PIBC
#define PCR6_9_PBDC PCR6_9_BASE.BIT._PBDC
#define PCR6_9_PD PCR6_9_BASE.BIT._PD
#define PCR6_9_PU PCR6_9_BASE.BIT._PU
#define PCR6_9_PIS PCR6_9_BASE.BIT._PIS
#define PCR6_9_PDSC PCR6_9_BASE.BIT._PDSC
#define PCR6_9_PUCC PCR6_9_BASE.BIT._PUCC
#define PCR6_9_PODCE PCR6_9_BASE.BIT._PODCE
#define PCR6_9_PODC PCR6_9_BASE.BIT._PODC
#define PCR6_9_PINV PCR6_9_BASE.BIT._PINV
#define PCR6_10 PCR6_10_BASE.UINT32
#define PCR6_10_PFC PCR6_10_BASE.BIT._PFC
#define PCR6_10_PFCE PCR6_10_BASE.BIT._PFCE
#define PCR6_10_PM PCR6_10_BASE.BIT._PM
#define PCR6_10_PIPC PCR6_10_BASE.BIT._PIPC
#define PCR6_10_PMC PCR6_10_BASE.BIT._PMC
#define PCR6_10_PPR PCR6_10_BASE.BIT._PPR
#define PCR6_10_P PCR6_10_BASE.BIT._P
#define PCR6_10_PIBC PCR6_10_BASE.BIT._PIBC
#define PCR6_10_PBDC PCR6_10_BASE.BIT._PBDC
#define PCR6_10_PD PCR6_10_BASE.BIT._PD
#define PCR6_10_PU PCR6_10_BASE.BIT._PU
#define PCR6_10_PIS PCR6_10_BASE.BIT._PIS
#define PCR6_10_PDSC PCR6_10_BASE.BIT._PDSC
#define PCR6_10_PUCC PCR6_10_BASE.BIT._PUCC
#define PCR6_10_PODCE PCR6_10_BASE.BIT._PODCE
#define PCR6_10_PODC PCR6_10_BASE.BIT._PODC
#define PCR6_10_PINV PCR6_10_BASE.BIT._PINV
#define PCR6_11 PCR6_11_BASE.UINT32
#define PCR6_11_PFC PCR6_11_BASE.BIT._PFC
#define PCR6_11_PFCE PCR6_11_BASE.BIT._PFCE
#define PCR6_11_PM PCR6_11_BASE.BIT._PM
#define PCR6_11_PIPC PCR6_11_BASE.BIT._PIPC
#define PCR6_11_PMC PCR6_11_BASE.BIT._PMC
#define PCR6_11_PPR PCR6_11_BASE.BIT._PPR
#define PCR6_11_P PCR6_11_BASE.BIT._P
#define PCR6_11_PIBC PCR6_11_BASE.BIT._PIBC
#define PCR6_11_PBDC PCR6_11_BASE.BIT._PBDC
#define PCR6_11_PD PCR6_11_BASE.BIT._PD
#define PCR6_11_PU PCR6_11_BASE.BIT._PU
#define PCR6_11_PIS PCR6_11_BASE.BIT._PIS
#define PCR6_11_PDSC PCR6_11_BASE.BIT._PDSC
#define PCR6_11_PUCC PCR6_11_BASE.BIT._PUCC
#define PCR6_11_PODCE PCR6_11_BASE.BIT._PODCE
#define PCR6_11_PODC PCR6_11_BASE.BIT._PODC
#define PCR6_11_PINV PCR6_11_BASE.BIT._PINV
#define PCR6_12 PCR6_12_BASE.UINT32
#define PCR6_12_PFC PCR6_12_BASE.BIT._PFC
#define PCR6_12_PFCE PCR6_12_BASE.BIT._PFCE
#define PCR6_12_PM PCR6_12_BASE.BIT._PM
#define PCR6_12_PIPC PCR6_12_BASE.BIT._PIPC
#define PCR6_12_PMC PCR6_12_BASE.BIT._PMC
#define PCR6_12_PPR PCR6_12_BASE.BIT._PPR
#define PCR6_12_P PCR6_12_BASE.BIT._P
#define PCR6_12_PIBC PCR6_12_BASE.BIT._PIBC
#define PCR6_12_PBDC PCR6_12_BASE.BIT._PBDC
#define PCR6_12_PD PCR6_12_BASE.BIT._PD
#define PCR6_12_PU PCR6_12_BASE.BIT._PU
#define PCR6_12_PIS PCR6_12_BASE.BIT._PIS
#define PCR6_12_PDSC PCR6_12_BASE.BIT._PDSC
#define PCR6_12_PUCC PCR6_12_BASE.BIT._PUCC
#define PCR6_12_PODCE PCR6_12_BASE.BIT._PODCE
#define PCR6_12_PODC PCR6_12_BASE.BIT._PODC
#define PCR6_12_PINV PCR6_12_BASE.BIT._PINV
#define PCR6_13 PCR6_13_BASE.UINT32
#define PCR6_13_PFC PCR6_13_BASE.BIT._PFC
#define PCR6_13_PFCE PCR6_13_BASE.BIT._PFCE
#define PCR6_13_PM PCR6_13_BASE.BIT._PM
#define PCR6_13_PIPC PCR6_13_BASE.BIT._PIPC
#define PCR6_13_PMC PCR6_13_BASE.BIT._PMC
#define PCR6_13_PPR PCR6_13_BASE.BIT._PPR
#define PCR6_13_P PCR6_13_BASE.BIT._P
#define PCR6_13_PIBC PCR6_13_BASE.BIT._PIBC
#define PCR6_13_PBDC PCR6_13_BASE.BIT._PBDC
#define PCR6_13_PD PCR6_13_BASE.BIT._PD
#define PCR6_13_PU PCR6_13_BASE.BIT._PU
#define PCR6_13_PIS PCR6_13_BASE.BIT._PIS
#define PCR6_13_PDSC PCR6_13_BASE.BIT._PDSC
#define PCR6_13_PUCC PCR6_13_BASE.BIT._PUCC
#define PCR6_13_PODCE PCR6_13_BASE.BIT._PODCE
#define PCR6_13_PODC PCR6_13_BASE.BIT._PODC
#define PCR6_13_PINV PCR6_13_BASE.BIT._PINV
#define PCR6_14 PCR6_14_BASE.UINT32
#define PCR6_14_PFC PCR6_14_BASE.BIT._PFC
#define PCR6_14_PFCE PCR6_14_BASE.BIT._PFCE
#define PCR6_14_PM PCR6_14_BASE.BIT._PM
#define PCR6_14_PIPC PCR6_14_BASE.BIT._PIPC
#define PCR6_14_PMC PCR6_14_BASE.BIT._PMC
#define PCR6_14_PPR PCR6_14_BASE.BIT._PPR
#define PCR6_14_P PCR6_14_BASE.BIT._P
#define PCR6_14_PIBC PCR6_14_BASE.BIT._PIBC
#define PCR6_14_PBDC PCR6_14_BASE.BIT._PBDC
#define PCR6_14_PD PCR6_14_BASE.BIT._PD
#define PCR6_14_PU PCR6_14_BASE.BIT._PU
#define PCR6_14_PIS PCR6_14_BASE.BIT._PIS
#define PCR6_14_PDSC PCR6_14_BASE.BIT._PDSC
#define PCR6_14_PUCC PCR6_14_BASE.BIT._PUCC
#define PCR6_14_PODCE PCR6_14_BASE.BIT._PODCE
#define PCR6_14_PODC PCR6_14_BASE.BIT._PODC
#define PCR6_14_PINV PCR6_14_BASE.BIT._PINV
#define PCR6_15 PCR6_15_BASE.UINT32
#define PCR6_15_PFC PCR6_15_BASE.BIT._PFC
#define PCR6_15_PFCE PCR6_15_BASE.BIT._PFCE
#define PCR6_15_PM PCR6_15_BASE.BIT._PM
#define PCR6_15_PIPC PCR6_15_BASE.BIT._PIPC
#define PCR6_15_PMC PCR6_15_BASE.BIT._PMC
#define PCR6_15_PPR PCR6_15_BASE.BIT._PPR
#define PCR6_15_P PCR6_15_BASE.BIT._P
#define PCR6_15_PIBC PCR6_15_BASE.BIT._PIBC
#define PCR6_15_PBDC PCR6_15_BASE.BIT._PBDC
#define PCR6_15_PD PCR6_15_BASE.BIT._PD
#define PCR6_15_PU PCR6_15_BASE.BIT._PU
#define PCR6_15_PIS PCR6_15_BASE.BIT._PIS
#define PCR6_15_PDSC PCR6_15_BASE.BIT._PDSC
#define PCR6_15_PUCC PCR6_15_BASE.BIT._PUCC
#define PCR6_15_PODCE PCR6_15_BASE.BIT._PODCE
#define PCR6_15_PODC PCR6_15_BASE.BIT._PODC
#define PCR6_15_PINV PCR6_15_BASE.BIT._PINV
#define PCR7_0 PCR7_0_BASE.UINT32
#define PCR7_0_PFC PCR7_0_BASE.BIT._PFC
#define PCR7_0_PFCE PCR7_0_BASE.BIT._PFCE
#define PCR7_0_PM PCR7_0_BASE.BIT._PM
#define PCR7_0_PIPC PCR7_0_BASE.BIT._PIPC
#define PCR7_0_PMC PCR7_0_BASE.BIT._PMC
#define PCR7_0_PPR PCR7_0_BASE.BIT._PPR
#define PCR7_0_P PCR7_0_BASE.BIT._P
#define PCR7_0_PIBC PCR7_0_BASE.BIT._PIBC
#define PCR7_0_PBDC PCR7_0_BASE.BIT._PBDC
#define PCR7_0_PD PCR7_0_BASE.BIT._PD
#define PCR7_0_PU PCR7_0_BASE.BIT._PU
#define PCR7_0_PIS PCR7_0_BASE.BIT._PIS
#define PCR7_0_PDSC PCR7_0_BASE.BIT._PDSC
#define PCR7_0_PUCC PCR7_0_BASE.BIT._PUCC
#define PCR7_0_PODCE PCR7_0_BASE.BIT._PODCE
#define PCR7_0_PODC PCR7_0_BASE.BIT._PODC
#define PCR7_0_PINV PCR7_0_BASE.BIT._PINV
#define PCR7_1 PCR7_1_BASE.UINT32
#define PCR7_1_PFC PCR7_1_BASE.BIT._PFC
#define PCR7_1_PFCE PCR7_1_BASE.BIT._PFCE
#define PCR7_1_PM PCR7_1_BASE.BIT._PM
#define PCR7_1_PIPC PCR7_1_BASE.BIT._PIPC
#define PCR7_1_PMC PCR7_1_BASE.BIT._PMC
#define PCR7_1_PPR PCR7_1_BASE.BIT._PPR
#define PCR7_1_P PCR7_1_BASE.BIT._P
#define PCR7_1_PIBC PCR7_1_BASE.BIT._PIBC
#define PCR7_1_PBDC PCR7_1_BASE.BIT._PBDC
#define PCR7_1_PD PCR7_1_BASE.BIT._PD
#define PCR7_1_PU PCR7_1_BASE.BIT._PU
#define PCR7_1_PIS PCR7_1_BASE.BIT._PIS
#define PCR7_1_PDSC PCR7_1_BASE.BIT._PDSC
#define PCR7_1_PUCC PCR7_1_BASE.BIT._PUCC
#define PCR7_1_PODCE PCR7_1_BASE.BIT._PODCE
#define PCR7_1_PODC PCR7_1_BASE.BIT._PODC
#define PCR7_1_PINV PCR7_1_BASE.BIT._PINV
#define PCR7_2 PCR7_2_BASE.UINT32
#define PCR7_2_PFC PCR7_2_BASE.BIT._PFC
#define PCR7_2_PFCE PCR7_2_BASE.BIT._PFCE
#define PCR7_2_PM PCR7_2_BASE.BIT._PM
#define PCR7_2_PIPC PCR7_2_BASE.BIT._PIPC
#define PCR7_2_PMC PCR7_2_BASE.BIT._PMC
#define PCR7_2_PPR PCR7_2_BASE.BIT._PPR
#define PCR7_2_P PCR7_2_BASE.BIT._P
#define PCR7_2_PIBC PCR7_2_BASE.BIT._PIBC
#define PCR7_2_PBDC PCR7_2_BASE.BIT._PBDC
#define PCR7_2_PD PCR7_2_BASE.BIT._PD
#define PCR7_2_PU PCR7_2_BASE.BIT._PU
#define PCR7_2_PIS PCR7_2_BASE.BIT._PIS
#define PCR7_2_PDSC PCR7_2_BASE.BIT._PDSC
#define PCR7_2_PUCC PCR7_2_BASE.BIT._PUCC
#define PCR7_2_PODCE PCR7_2_BASE.BIT._PODCE
#define PCR7_2_PODC PCR7_2_BASE.BIT._PODC
#define PCR7_2_PINV PCR7_2_BASE.BIT._PINV
#define PCR7_3 PCR7_3_BASE.UINT32
#define PCR7_3_PFC PCR7_3_BASE.BIT._PFC
#define PCR7_3_PFCE PCR7_3_BASE.BIT._PFCE
#define PCR7_3_PM PCR7_3_BASE.BIT._PM
#define PCR7_3_PIPC PCR7_3_BASE.BIT._PIPC
#define PCR7_3_PMC PCR7_3_BASE.BIT._PMC
#define PCR7_3_PPR PCR7_3_BASE.BIT._PPR
#define PCR7_3_P PCR7_3_BASE.BIT._P
#define PCR7_3_PIBC PCR7_3_BASE.BIT._PIBC
#define PCR7_3_PBDC PCR7_3_BASE.BIT._PBDC
#define PCR7_3_PD PCR7_3_BASE.BIT._PD
#define PCR7_3_PU PCR7_3_BASE.BIT._PU
#define PCR7_3_PIS PCR7_3_BASE.BIT._PIS
#define PCR7_3_PDSC PCR7_3_BASE.BIT._PDSC
#define PCR7_3_PUCC PCR7_3_BASE.BIT._PUCC
#define PCR7_3_PODCE PCR7_3_BASE.BIT._PODCE
#define PCR7_3_PODC PCR7_3_BASE.BIT._PODC
#define PCR7_3_PINV PCR7_3_BASE.BIT._PINV
#define PCR7_4 PCR7_4_BASE.UINT32
#define PCR7_4_PFC PCR7_4_BASE.BIT._PFC
#define PCR7_4_PFCE PCR7_4_BASE.BIT._PFCE
#define PCR7_4_PM PCR7_4_BASE.BIT._PM
#define PCR7_4_PIPC PCR7_4_BASE.BIT._PIPC
#define PCR7_4_PMC PCR7_4_BASE.BIT._PMC
#define PCR7_4_PPR PCR7_4_BASE.BIT._PPR
#define PCR7_4_P PCR7_4_BASE.BIT._P
#define PCR7_4_PIBC PCR7_4_BASE.BIT._PIBC
#define PCR7_4_PBDC PCR7_4_BASE.BIT._PBDC
#define PCR7_4_PD PCR7_4_BASE.BIT._PD
#define PCR7_4_PU PCR7_4_BASE.BIT._PU
#define PCR7_4_PIS PCR7_4_BASE.BIT._PIS
#define PCR7_4_PDSC PCR7_4_BASE.BIT._PDSC
#define PCR7_4_PUCC PCR7_4_BASE.BIT._PUCC
#define PCR7_4_PODCE PCR7_4_BASE.BIT._PODCE
#define PCR7_4_PODC PCR7_4_BASE.BIT._PODC
#define PCR7_4_PINV PCR7_4_BASE.BIT._PINV
#define PCR7_5 PCR7_5_BASE.UINT32
#define PCR7_5_PFC PCR7_5_BASE.BIT._PFC
#define PCR7_5_PFCE PCR7_5_BASE.BIT._PFCE
#define PCR7_5_PM PCR7_5_BASE.BIT._PM
#define PCR7_5_PIPC PCR7_5_BASE.BIT._PIPC
#define PCR7_5_PMC PCR7_5_BASE.BIT._PMC
#define PCR7_5_PPR PCR7_5_BASE.BIT._PPR
#define PCR7_5_P PCR7_5_BASE.BIT._P
#define PCR7_5_PIBC PCR7_5_BASE.BIT._PIBC
#define PCR7_5_PBDC PCR7_5_BASE.BIT._PBDC
#define PCR7_5_PD PCR7_5_BASE.BIT._PD
#define PCR7_5_PU PCR7_5_BASE.BIT._PU
#define PCR7_5_PIS PCR7_5_BASE.BIT._PIS
#define PCR7_5_PDSC PCR7_5_BASE.BIT._PDSC
#define PCR7_5_PUCC PCR7_5_BASE.BIT._PUCC
#define PCR7_5_PODCE PCR7_5_BASE.BIT._PODCE
#define PCR7_5_PODC PCR7_5_BASE.BIT._PODC
#define PCR7_5_PINV PCR7_5_BASE.BIT._PINV
#define PCR7_6 PCR7_6_BASE.UINT32
#define PCR7_6_PFC PCR7_6_BASE.BIT._PFC
#define PCR7_6_PFCE PCR7_6_BASE.BIT._PFCE
#define PCR7_6_PM PCR7_6_BASE.BIT._PM
#define PCR7_6_PIPC PCR7_6_BASE.BIT._PIPC
#define PCR7_6_PMC PCR7_6_BASE.BIT._PMC
#define PCR7_6_PPR PCR7_6_BASE.BIT._PPR
#define PCR7_6_P PCR7_6_BASE.BIT._P
#define PCR7_6_PIBC PCR7_6_BASE.BIT._PIBC
#define PCR7_6_PBDC PCR7_6_BASE.BIT._PBDC
#define PCR7_6_PD PCR7_6_BASE.BIT._PD
#define PCR7_6_PU PCR7_6_BASE.BIT._PU
#define PCR7_6_PIS PCR7_6_BASE.BIT._PIS
#define PCR7_6_PDSC PCR7_6_BASE.BIT._PDSC
#define PCR7_6_PUCC PCR7_6_BASE.BIT._PUCC
#define PCR7_6_PODCE PCR7_6_BASE.BIT._PODCE
#define PCR7_6_PODC PCR7_6_BASE.BIT._PODC
#define PCR7_6_PINV PCR7_6_BASE.BIT._PINV
#define PCR7_7 PCR7_7_BASE.UINT32
#define PCR7_7_PFC PCR7_7_BASE.BIT._PFC
#define PCR7_7_PFCE PCR7_7_BASE.BIT._PFCE
#define PCR7_7_PM PCR7_7_BASE.BIT._PM
#define PCR7_7_PIPC PCR7_7_BASE.BIT._PIPC
#define PCR7_7_PMC PCR7_7_BASE.BIT._PMC
#define PCR7_7_PPR PCR7_7_BASE.BIT._PPR
#define PCR7_7_P PCR7_7_BASE.BIT._P
#define PCR7_7_PIBC PCR7_7_BASE.BIT._PIBC
#define PCR7_7_PBDC PCR7_7_BASE.BIT._PBDC
#define PCR7_7_PD PCR7_7_BASE.BIT._PD
#define PCR7_7_PU PCR7_7_BASE.BIT._PU
#define PCR7_7_PIS PCR7_7_BASE.BIT._PIS
#define PCR7_7_PDSC PCR7_7_BASE.BIT._PDSC
#define PCR7_7_PUCC PCR7_7_BASE.BIT._PUCC
#define PCR7_7_PODCE PCR7_7_BASE.BIT._PODCE
#define PCR7_7_PODC PCR7_7_BASE.BIT._PODC
#define PCR7_7_PINV PCR7_7_BASE.BIT._PINV
#define PCR7_8 PCR7_8_BASE.UINT32
#define PCR7_8_PFC PCR7_8_BASE.BIT._PFC
#define PCR7_8_PFCE PCR7_8_BASE.BIT._PFCE
#define PCR7_8_PM PCR7_8_BASE.BIT._PM
#define PCR7_8_PIPC PCR7_8_BASE.BIT._PIPC
#define PCR7_8_PMC PCR7_8_BASE.BIT._PMC
#define PCR7_8_PPR PCR7_8_BASE.BIT._PPR
#define PCR7_8_P PCR7_8_BASE.BIT._P
#define PCR7_8_PIBC PCR7_8_BASE.BIT._PIBC
#define PCR7_8_PBDC PCR7_8_BASE.BIT._PBDC
#define PCR7_8_PD PCR7_8_BASE.BIT._PD
#define PCR7_8_PU PCR7_8_BASE.BIT._PU
#define PCR7_8_PIS PCR7_8_BASE.BIT._PIS
#define PCR7_8_PDSC PCR7_8_BASE.BIT._PDSC
#define PCR7_8_PUCC PCR7_8_BASE.BIT._PUCC
#define PCR7_8_PODCE PCR7_8_BASE.BIT._PODCE
#define PCR7_8_PODC PCR7_8_BASE.BIT._PODC
#define PCR7_8_PINV PCR7_8_BASE.BIT._PINV
#define PCR7_9 PCR7_9_BASE.UINT32
#define PCR7_9_PFC PCR7_9_BASE.BIT._PFC
#define PCR7_9_PFCE PCR7_9_BASE.BIT._PFCE
#define PCR7_9_PM PCR7_9_BASE.BIT._PM
#define PCR7_9_PIPC PCR7_9_BASE.BIT._PIPC
#define PCR7_9_PMC PCR7_9_BASE.BIT._PMC
#define PCR7_9_PPR PCR7_9_BASE.BIT._PPR
#define PCR7_9_P PCR7_9_BASE.BIT._P
#define PCR7_9_PIBC PCR7_9_BASE.BIT._PIBC
#define PCR7_9_PBDC PCR7_9_BASE.BIT._PBDC
#define PCR7_9_PD PCR7_9_BASE.BIT._PD
#define PCR7_9_PU PCR7_9_BASE.BIT._PU
#define PCR7_9_PIS PCR7_9_BASE.BIT._PIS
#define PCR7_9_PDSC PCR7_9_BASE.BIT._PDSC
#define PCR7_9_PUCC PCR7_9_BASE.BIT._PUCC
#define PCR7_9_PODCE PCR7_9_BASE.BIT._PODCE
#define PCR7_9_PODC PCR7_9_BASE.BIT._PODC
#define PCR7_9_PINV PCR7_9_BASE.BIT._PINV
#define PCR8_0 PCR8_0_BASE.UINT32
#define PCR8_0_PFC PCR8_0_BASE.BIT._PFC
#define PCR8_0_PFCE PCR8_0_BASE.BIT._PFCE
#define PCR8_0_PM PCR8_0_BASE.BIT._PM
#define PCR8_0_PIPC PCR8_0_BASE.BIT._PIPC
#define PCR8_0_PMC PCR8_0_BASE.BIT._PMC
#define PCR8_0_PPR PCR8_0_BASE.BIT._PPR
#define PCR8_0_P PCR8_0_BASE.BIT._P
#define PCR8_0_PIBC PCR8_0_BASE.BIT._PIBC
#define PCR8_0_PBDC PCR8_0_BASE.BIT._PBDC
#define PCR8_0_PD PCR8_0_BASE.BIT._PD
#define PCR8_0_PU PCR8_0_BASE.BIT._PU
#define PCR8_0_PIS PCR8_0_BASE.BIT._PIS
#define PCR8_0_PDSC PCR8_0_BASE.BIT._PDSC
#define PCR8_0_PUCC PCR8_0_BASE.BIT._PUCC
#define PCR8_0_PODCE PCR8_0_BASE.BIT._PODCE
#define PCR8_0_PODC PCR8_0_BASE.BIT._PODC
#define PCR8_0_PINV PCR8_0_BASE.BIT._PINV
#define PCR8_1 PCR8_1_BASE.UINT32
#define PCR8_1_PFC PCR8_1_BASE.BIT._PFC
#define PCR8_1_PFCE PCR8_1_BASE.BIT._PFCE
#define PCR8_1_PM PCR8_1_BASE.BIT._PM
#define PCR8_1_PIPC PCR8_1_BASE.BIT._PIPC
#define PCR8_1_PMC PCR8_1_BASE.BIT._PMC
#define PCR8_1_PPR PCR8_1_BASE.BIT._PPR
#define PCR8_1_P PCR8_1_BASE.BIT._P
#define PCR8_1_PIBC PCR8_1_BASE.BIT._PIBC
#define PCR8_1_PBDC PCR8_1_BASE.BIT._PBDC
#define PCR8_1_PD PCR8_1_BASE.BIT._PD
#define PCR8_1_PU PCR8_1_BASE.BIT._PU
#define PCR8_1_PIS PCR8_1_BASE.BIT._PIS
#define PCR8_1_PDSC PCR8_1_BASE.BIT._PDSC
#define PCR8_1_PUCC PCR8_1_BASE.BIT._PUCC
#define PCR8_1_PODCE PCR8_1_BASE.BIT._PODCE
#define PCR8_1_PODC PCR8_1_BASE.BIT._PODC
#define PCR8_1_PINV PCR8_1_BASE.BIT._PINV
#define PCR8_2 PCR8_2_BASE.UINT32
#define PCR8_2_PFC PCR8_2_BASE.BIT._PFC
#define PCR8_2_PFCE PCR8_2_BASE.BIT._PFCE
#define PCR8_2_PM PCR8_2_BASE.BIT._PM
#define PCR8_2_PIPC PCR8_2_BASE.BIT._PIPC
#define PCR8_2_PMC PCR8_2_BASE.BIT._PMC
#define PCR8_2_PPR PCR8_2_BASE.BIT._PPR
#define PCR8_2_P PCR8_2_BASE.BIT._P
#define PCR8_2_PIBC PCR8_2_BASE.BIT._PIBC
#define PCR8_2_PBDC PCR8_2_BASE.BIT._PBDC
#define PCR8_2_PD PCR8_2_BASE.BIT._PD
#define PCR8_2_PU PCR8_2_BASE.BIT._PU
#define PCR8_2_PIS PCR8_2_BASE.BIT._PIS
#define PCR8_2_PDSC PCR8_2_BASE.BIT._PDSC
#define PCR8_2_PUCC PCR8_2_BASE.BIT._PUCC
#define PCR8_2_PODCE PCR8_2_BASE.BIT._PODCE
#define PCR8_2_PODC PCR8_2_BASE.BIT._PODC
#define PCR8_2_PINV PCR8_2_BASE.BIT._PINV
#define PCR8_3 PCR8_3_BASE.UINT32
#define PCR8_3_PFC PCR8_3_BASE.BIT._PFC
#define PCR8_3_PFCE PCR8_3_BASE.BIT._PFCE
#define PCR8_3_PM PCR8_3_BASE.BIT._PM
#define PCR8_3_PIPC PCR8_3_BASE.BIT._PIPC
#define PCR8_3_PMC PCR8_3_BASE.BIT._PMC
#define PCR8_3_PPR PCR8_3_BASE.BIT._PPR
#define PCR8_3_P PCR8_3_BASE.BIT._P
#define PCR8_3_PIBC PCR8_3_BASE.BIT._PIBC
#define PCR8_3_PBDC PCR8_3_BASE.BIT._PBDC
#define PCR8_3_PD PCR8_3_BASE.BIT._PD
#define PCR8_3_PU PCR8_3_BASE.BIT._PU
#define PCR8_3_PIS PCR8_3_BASE.BIT._PIS
#define PCR8_3_PDSC PCR8_3_BASE.BIT._PDSC
#define PCR8_3_PUCC PCR8_3_BASE.BIT._PUCC
#define PCR8_3_PODCE PCR8_3_BASE.BIT._PODCE
#define PCR8_3_PODC PCR8_3_BASE.BIT._PODC
#define PCR8_3_PINV PCR8_3_BASE.BIT._PINV
#define PCR8_4 PCR8_4_BASE.UINT32
#define PCR8_4_PFC PCR8_4_BASE.BIT._PFC
#define PCR8_4_PFCE PCR8_4_BASE.BIT._PFCE
#define PCR8_4_PM PCR8_4_BASE.BIT._PM
#define PCR8_4_PIPC PCR8_4_BASE.BIT._PIPC
#define PCR8_4_PMC PCR8_4_BASE.BIT._PMC
#define PCR8_4_PPR PCR8_4_BASE.BIT._PPR
#define PCR8_4_P PCR8_4_BASE.BIT._P
#define PCR8_4_PIBC PCR8_4_BASE.BIT._PIBC
#define PCR8_4_PBDC PCR8_4_BASE.BIT._PBDC
#define PCR8_4_PD PCR8_4_BASE.BIT._PD
#define PCR8_4_PU PCR8_4_BASE.BIT._PU
#define PCR8_4_PIS PCR8_4_BASE.BIT._PIS
#define PCR8_4_PDSC PCR8_4_BASE.BIT._PDSC
#define PCR8_4_PUCC PCR8_4_BASE.BIT._PUCC
#define PCR8_4_PODCE PCR8_4_BASE.BIT._PODCE
#define PCR8_4_PODC PCR8_4_BASE.BIT._PODC
#define PCR8_4_PINV PCR8_4_BASE.BIT._PINV
#define PCR8_5 PCR8_5_BASE.UINT32
#define PCR8_5_PFC PCR8_5_BASE.BIT._PFC
#define PCR8_5_PFCE PCR8_5_BASE.BIT._PFCE
#define PCR8_5_PM PCR8_5_BASE.BIT._PM
#define PCR8_5_PIPC PCR8_5_BASE.BIT._PIPC
#define PCR8_5_PMC PCR8_5_BASE.BIT._PMC
#define PCR8_5_PPR PCR8_5_BASE.BIT._PPR
#define PCR8_5_P PCR8_5_BASE.BIT._P
#define PCR8_5_PIBC PCR8_5_BASE.BIT._PIBC
#define PCR8_5_PBDC PCR8_5_BASE.BIT._PBDC
#define PCR8_5_PD PCR8_5_BASE.BIT._PD
#define PCR8_5_PU PCR8_5_BASE.BIT._PU
#define PCR8_5_PIS PCR8_5_BASE.BIT._PIS
#define PCR8_5_PDSC PCR8_5_BASE.BIT._PDSC
#define PCR8_5_PUCC PCR8_5_BASE.BIT._PUCC
#define PCR8_5_PODCE PCR8_5_BASE.BIT._PODCE
#define PCR8_5_PODC PCR8_5_BASE.BIT._PODC
#define PCR8_5_PINV PCR8_5_BASE.BIT._PINV
#define PCR8_6 PCR8_6_BASE.UINT32
#define PCR8_6_PFC PCR8_6_BASE.BIT._PFC
#define PCR8_6_PFCE PCR8_6_BASE.BIT._PFCE
#define PCR8_6_PM PCR8_6_BASE.BIT._PM
#define PCR8_6_PIPC PCR8_6_BASE.BIT._PIPC
#define PCR8_6_PMC PCR8_6_BASE.BIT._PMC
#define PCR8_6_PPR PCR8_6_BASE.BIT._PPR
#define PCR8_6_P PCR8_6_BASE.BIT._P
#define PCR8_6_PIBC PCR8_6_BASE.BIT._PIBC
#define PCR8_6_PBDC PCR8_6_BASE.BIT._PBDC
#define PCR8_6_PD PCR8_6_BASE.BIT._PD
#define PCR8_6_PU PCR8_6_BASE.BIT._PU
#define PCR8_6_PIS PCR8_6_BASE.BIT._PIS
#define PCR8_6_PDSC PCR8_6_BASE.BIT._PDSC
#define PCR8_6_PUCC PCR8_6_BASE.BIT._PUCC
#define PCR8_6_PODCE PCR8_6_BASE.BIT._PODCE
#define PCR8_6_PODC PCR8_6_BASE.BIT._PODC
#define PCR8_6_PINV PCR8_6_BASE.BIT._PINV
#define PCR8_7 PCR8_7_BASE.UINT32
#define PCR8_7_PFC PCR8_7_BASE.BIT._PFC
#define PCR8_7_PFCE PCR8_7_BASE.BIT._PFCE
#define PCR8_7_PM PCR8_7_BASE.BIT._PM
#define PCR8_7_PIPC PCR8_7_BASE.BIT._PIPC
#define PCR8_7_PMC PCR8_7_BASE.BIT._PMC
#define PCR8_7_PPR PCR8_7_BASE.BIT._PPR
#define PCR8_7_P PCR8_7_BASE.BIT._P
#define PCR8_7_PIBC PCR8_7_BASE.BIT._PIBC
#define PCR8_7_PBDC PCR8_7_BASE.BIT._PBDC
#define PCR8_7_PD PCR8_7_BASE.BIT._PD
#define PCR8_7_PU PCR8_7_BASE.BIT._PU
#define PCR8_7_PIS PCR8_7_BASE.BIT._PIS
#define PCR8_7_PDSC PCR8_7_BASE.BIT._PDSC
#define PCR8_7_PUCC PCR8_7_BASE.BIT._PUCC
#define PCR8_7_PODCE PCR8_7_BASE.BIT._PODCE
#define PCR8_7_PODC PCR8_7_BASE.BIT._PODC
#define PCR8_7_PINV PCR8_7_BASE.BIT._PINV
#define PCR8_8 PCR8_8_BASE.UINT32
#define PCR8_8_PFC PCR8_8_BASE.BIT._PFC
#define PCR8_8_PFCE PCR8_8_BASE.BIT._PFCE
#define PCR8_8_PM PCR8_8_BASE.BIT._PM
#define PCR8_8_PIPC PCR8_8_BASE.BIT._PIPC
#define PCR8_8_PMC PCR8_8_BASE.BIT._PMC
#define PCR8_8_PPR PCR8_8_BASE.BIT._PPR
#define PCR8_8_P PCR8_8_BASE.BIT._P
#define PCR8_8_PIBC PCR8_8_BASE.BIT._PIBC
#define PCR8_8_PBDC PCR8_8_BASE.BIT._PBDC
#define PCR8_8_PD PCR8_8_BASE.BIT._PD
#define PCR8_8_PU PCR8_8_BASE.BIT._PU
#define PCR8_8_PIS PCR8_8_BASE.BIT._PIS
#define PCR8_8_PDSC PCR8_8_BASE.BIT._PDSC
#define PCR8_8_PUCC PCR8_8_BASE.BIT._PUCC
#define PCR8_8_PODCE PCR8_8_BASE.BIT._PODCE
#define PCR8_8_PODC PCR8_8_BASE.BIT._PODC
#define PCR8_8_PINV PCR8_8_BASE.BIT._PINV
#define PCR8_9 PCR8_9_BASE.UINT32
#define PCR8_9_PFC PCR8_9_BASE.BIT._PFC
#define PCR8_9_PFCE PCR8_9_BASE.BIT._PFCE
#define PCR8_9_PM PCR8_9_BASE.BIT._PM
#define PCR8_9_PIPC PCR8_9_BASE.BIT._PIPC
#define PCR8_9_PMC PCR8_9_BASE.BIT._PMC
#define PCR8_9_PPR PCR8_9_BASE.BIT._PPR
#define PCR8_9_P PCR8_9_BASE.BIT._P
#define PCR8_9_PIBC PCR8_9_BASE.BIT._PIBC
#define PCR8_9_PBDC PCR8_9_BASE.BIT._PBDC
#define PCR8_9_PD PCR8_9_BASE.BIT._PD
#define PCR8_9_PU PCR8_9_BASE.BIT._PU
#define PCR8_9_PIS PCR8_9_BASE.BIT._PIS
#define PCR8_9_PDSC PCR8_9_BASE.BIT._PDSC
#define PCR8_9_PUCC PCR8_9_BASE.BIT._PUCC
#define PCR8_9_PODCE PCR8_9_BASE.BIT._PODCE
#define PCR8_9_PODC PCR8_9_BASE.BIT._PODC
#define PCR8_9_PINV PCR8_9_BASE.BIT._PINV
#define PCR8_10 PCR8_10_BASE.UINT32
#define PCR8_10_PFC PCR8_10_BASE.BIT._PFC
#define PCR8_10_PFCE PCR8_10_BASE.BIT._PFCE
#define PCR8_10_PM PCR8_10_BASE.BIT._PM
#define PCR8_10_PIPC PCR8_10_BASE.BIT._PIPC
#define PCR8_10_PMC PCR8_10_BASE.BIT._PMC
#define PCR8_10_PPR PCR8_10_BASE.BIT._PPR
#define PCR8_10_P PCR8_10_BASE.BIT._P
#define PCR8_10_PIBC PCR8_10_BASE.BIT._PIBC
#define PCR8_10_PBDC PCR8_10_BASE.BIT._PBDC
#define PCR8_10_PD PCR8_10_BASE.BIT._PD
#define PCR8_10_PU PCR8_10_BASE.BIT._PU
#define PCR8_10_PIS PCR8_10_BASE.BIT._PIS
#define PCR8_10_PDSC PCR8_10_BASE.BIT._PDSC
#define PCR8_10_PUCC PCR8_10_BASE.BIT._PUCC
#define PCR8_10_PODCE PCR8_10_BASE.BIT._PODCE
#define PCR8_10_PODC PCR8_10_BASE.BIT._PODC
#define PCR8_10_PINV PCR8_10_BASE.BIT._PINV
#define PCR8_11 PCR8_11_BASE.UINT32
#define PCR8_11_PFC PCR8_11_BASE.BIT._PFC
#define PCR8_11_PFCE PCR8_11_BASE.BIT._PFCE
#define PCR8_11_PM PCR8_11_BASE.BIT._PM
#define PCR8_11_PIPC PCR8_11_BASE.BIT._PIPC
#define PCR8_11_PMC PCR8_11_BASE.BIT._PMC
#define PCR8_11_PPR PCR8_11_BASE.BIT._PPR
#define PCR8_11_P PCR8_11_BASE.BIT._P
#define PCR8_11_PIBC PCR8_11_BASE.BIT._PIBC
#define PCR8_11_PBDC PCR8_11_BASE.BIT._PBDC
#define PCR8_11_PD PCR8_11_BASE.BIT._PD
#define PCR8_11_PU PCR8_11_BASE.BIT._PU
#define PCR8_11_PIS PCR8_11_BASE.BIT._PIS
#define PCR8_11_PDSC PCR8_11_BASE.BIT._PDSC
#define PCR8_11_PUCC PCR8_11_BASE.BIT._PUCC
#define PCR8_11_PODCE PCR8_11_BASE.BIT._PODCE
#define PCR8_11_PODC PCR8_11_BASE.BIT._PODC
#define PCR8_11_PINV PCR8_11_BASE.BIT._PINV
#define PCR8_12 PCR8_12_BASE.UINT32
#define PCR8_12_PFC PCR8_12_BASE.BIT._PFC
#define PCR8_12_PFCE PCR8_12_BASE.BIT._PFCE
#define PCR8_12_PM PCR8_12_BASE.BIT._PM
#define PCR8_12_PIPC PCR8_12_BASE.BIT._PIPC
#define PCR8_12_PMC PCR8_12_BASE.BIT._PMC
#define PCR8_12_PPR PCR8_12_BASE.BIT._PPR
#define PCR8_12_P PCR8_12_BASE.BIT._P
#define PCR8_12_PIBC PCR8_12_BASE.BIT._PIBC
#define PCR8_12_PBDC PCR8_12_BASE.BIT._PBDC
#define PCR8_12_PD PCR8_12_BASE.BIT._PD
#define PCR8_12_PU PCR8_12_BASE.BIT._PU
#define PCR8_12_PIS PCR8_12_BASE.BIT._PIS
#define PCR8_12_PDSC PCR8_12_BASE.BIT._PDSC
#define PCR8_12_PUCC PCR8_12_BASE.BIT._PUCC
#define PCR8_12_PODCE PCR8_12_BASE.BIT._PODCE
#define PCR8_12_PODC PCR8_12_BASE.BIT._PODC
#define PCR8_12_PINV PCR8_12_BASE.BIT._PINV
#define PCR8_13 PCR8_13_BASE.UINT32
#define PCR8_13_PFC PCR8_13_BASE.BIT._PFC
#define PCR8_13_PFCE PCR8_13_BASE.BIT._PFCE
#define PCR8_13_PM PCR8_13_BASE.BIT._PM
#define PCR8_13_PIPC PCR8_13_BASE.BIT._PIPC
#define PCR8_13_PMC PCR8_13_BASE.BIT._PMC
#define PCR8_13_PPR PCR8_13_BASE.BIT._PPR
#define PCR8_13_P PCR8_13_BASE.BIT._P
#define PCR8_13_PIBC PCR8_13_BASE.BIT._PIBC
#define PCR8_13_PBDC PCR8_13_BASE.BIT._PBDC
#define PCR8_13_PD PCR8_13_BASE.BIT._PD
#define PCR8_13_PU PCR8_13_BASE.BIT._PU
#define PCR8_13_PIS PCR8_13_BASE.BIT._PIS
#define PCR8_13_PDSC PCR8_13_BASE.BIT._PDSC
#define PCR8_13_PUCC PCR8_13_BASE.BIT._PUCC
#define PCR8_13_PODCE PCR8_13_BASE.BIT._PODCE
#define PCR8_13_PODC PCR8_13_BASE.BIT._PODC
#define PCR8_13_PINV PCR8_13_BASE.BIT._PINV
#define PCR8_14 PCR8_14_BASE.UINT32
#define PCR8_14_PFC PCR8_14_BASE.BIT._PFC
#define PCR8_14_PFCE PCR8_14_BASE.BIT._PFCE
#define PCR8_14_PM PCR8_14_BASE.BIT._PM
#define PCR8_14_PIPC PCR8_14_BASE.BIT._PIPC
#define PCR8_14_PMC PCR8_14_BASE.BIT._PMC
#define PCR8_14_PPR PCR8_14_BASE.BIT._PPR
#define PCR8_14_P PCR8_14_BASE.BIT._P
#define PCR8_14_PIBC PCR8_14_BASE.BIT._PIBC
#define PCR8_14_PBDC PCR8_14_BASE.BIT._PBDC
#define PCR8_14_PD PCR8_14_BASE.BIT._PD
#define PCR8_14_PU PCR8_14_BASE.BIT._PU
#define PCR8_14_PIS PCR8_14_BASE.BIT._PIS
#define PCR8_14_PDSC PCR8_14_BASE.BIT._PDSC
#define PCR8_14_PUCC PCR8_14_BASE.BIT._PUCC
#define PCR8_14_PODCE PCR8_14_BASE.BIT._PODCE
#define PCR8_14_PODC PCR8_14_BASE.BIT._PODC
#define PCR8_14_PINV PCR8_14_BASE.BIT._PINV
#define PCR8_15 PCR8_15_BASE.UINT32
#define PCR8_15_PFC PCR8_15_BASE.BIT._PFC
#define PCR8_15_PFCE PCR8_15_BASE.BIT._PFCE
#define PCR8_15_PM PCR8_15_BASE.BIT._PM
#define PCR8_15_PIPC PCR8_15_BASE.BIT._PIPC
#define PCR8_15_PMC PCR8_15_BASE.BIT._PMC
#define PCR8_15_PPR PCR8_15_BASE.BIT._PPR
#define PCR8_15_P PCR8_15_BASE.BIT._P
#define PCR8_15_PIBC PCR8_15_BASE.BIT._PIBC
#define PCR8_15_PBDC PCR8_15_BASE.BIT._PBDC
#define PCR8_15_PD PCR8_15_BASE.BIT._PD
#define PCR8_15_PU PCR8_15_BASE.BIT._PU
#define PCR8_15_PIS PCR8_15_BASE.BIT._PIS
#define PCR8_15_PDSC PCR8_15_BASE.BIT._PDSC
#define PCR8_15_PUCC PCR8_15_BASE.BIT._PUCC
#define PCR8_15_PODCE PCR8_15_BASE.BIT._PODCE
#define PCR8_15_PODC PCR8_15_BASE.BIT._PODC
#define PCR8_15_PINV PCR8_15_BASE.BIT._PINV
#define PCR9_0 PCR9_0_BASE.UINT32
#define PCR9_0_PFC PCR9_0_BASE.BIT._PFC
#define PCR9_0_PFCE PCR9_0_BASE.BIT._PFCE
#define PCR9_0_PM PCR9_0_BASE.BIT._PM
#define PCR9_0_PIPC PCR9_0_BASE.BIT._PIPC
#define PCR9_0_PMC PCR9_0_BASE.BIT._PMC
#define PCR9_0_PPR PCR9_0_BASE.BIT._PPR
#define PCR9_0_P PCR9_0_BASE.BIT._P
#define PCR9_0_PIBC PCR9_0_BASE.BIT._PIBC
#define PCR9_0_PBDC PCR9_0_BASE.BIT._PBDC
#define PCR9_0_PD PCR9_0_BASE.BIT._PD
#define PCR9_0_PU PCR9_0_BASE.BIT._PU
#define PCR9_0_PIS PCR9_0_BASE.BIT._PIS
#define PCR9_0_PDSC PCR9_0_BASE.BIT._PDSC
#define PCR9_0_PUCC PCR9_0_BASE.BIT._PUCC
#define PCR9_0_PODCE PCR9_0_BASE.BIT._PODCE
#define PCR9_0_PODC PCR9_0_BASE.BIT._PODC
#define PCR9_0_PINV PCR9_0_BASE.BIT._PINV
#define PCR9_1 PCR9_1_BASE.UINT32
#define PCR9_1_PFC PCR9_1_BASE.BIT._PFC
#define PCR9_1_PFCE PCR9_1_BASE.BIT._PFCE
#define PCR9_1_PM PCR9_1_BASE.BIT._PM
#define PCR9_1_PIPC PCR9_1_BASE.BIT._PIPC
#define PCR9_1_PMC PCR9_1_BASE.BIT._PMC
#define PCR9_1_PPR PCR9_1_BASE.BIT._PPR
#define PCR9_1_P PCR9_1_BASE.BIT._P
#define PCR9_1_PIBC PCR9_1_BASE.BIT._PIBC
#define PCR9_1_PBDC PCR9_1_BASE.BIT._PBDC
#define PCR9_1_PD PCR9_1_BASE.BIT._PD
#define PCR9_1_PU PCR9_1_BASE.BIT._PU
#define PCR9_1_PIS PCR9_1_BASE.BIT._PIS
#define PCR9_1_PDSC PCR9_1_BASE.BIT._PDSC
#define PCR9_1_PUCC PCR9_1_BASE.BIT._PUCC
#define PCR9_1_PODCE PCR9_1_BASE.BIT._PODCE
#define PCR9_1_PODC PCR9_1_BASE.BIT._PODC
#define PCR9_1_PINV PCR9_1_BASE.BIT._PINV
#define PCR9_2 PCR9_2_BASE.UINT32
#define PCR9_2_PFC PCR9_2_BASE.BIT._PFC
#define PCR9_2_PFCE PCR9_2_BASE.BIT._PFCE
#define PCR9_2_PM PCR9_2_BASE.BIT._PM
#define PCR9_2_PIPC PCR9_2_BASE.BIT._PIPC
#define PCR9_2_PMC PCR9_2_BASE.BIT._PMC
#define PCR9_2_PPR PCR9_2_BASE.BIT._PPR
#define PCR9_2_P PCR9_2_BASE.BIT._P
#define PCR9_2_PIBC PCR9_2_BASE.BIT._PIBC
#define PCR9_2_PBDC PCR9_2_BASE.BIT._PBDC
#define PCR9_2_PD PCR9_2_BASE.BIT._PD
#define PCR9_2_PU PCR9_2_BASE.BIT._PU
#define PCR9_2_PIS PCR9_2_BASE.BIT._PIS
#define PCR9_2_PDSC PCR9_2_BASE.BIT._PDSC
#define PCR9_2_PUCC PCR9_2_BASE.BIT._PUCC
#define PCR9_2_PODCE PCR9_2_BASE.BIT._PODCE
#define PCR9_2_PODC PCR9_2_BASE.BIT._PODC
#define PCR9_2_PINV PCR9_2_BASE.BIT._PINV
#define PCR9_3 PCR9_3_BASE.UINT32
#define PCR9_3_PFC PCR9_3_BASE.BIT._PFC
#define PCR9_3_PFCE PCR9_3_BASE.BIT._PFCE
#define PCR9_3_PM PCR9_3_BASE.BIT._PM
#define PCR9_3_PIPC PCR9_3_BASE.BIT._PIPC
#define PCR9_3_PMC PCR9_3_BASE.BIT._PMC
#define PCR9_3_PPR PCR9_3_BASE.BIT._PPR
#define PCR9_3_P PCR9_3_BASE.BIT._P
#define PCR9_3_PIBC PCR9_3_BASE.BIT._PIBC
#define PCR9_3_PBDC PCR9_3_BASE.BIT._PBDC
#define PCR9_3_PD PCR9_3_BASE.BIT._PD
#define PCR9_3_PU PCR9_3_BASE.BIT._PU
#define PCR9_3_PIS PCR9_3_BASE.BIT._PIS
#define PCR9_3_PDSC PCR9_3_BASE.BIT._PDSC
#define PCR9_3_PUCC PCR9_3_BASE.BIT._PUCC
#define PCR9_3_PODCE PCR9_3_BASE.BIT._PODCE
#define PCR9_3_PODC PCR9_3_BASE.BIT._PODC
#define PCR9_3_PINV PCR9_3_BASE.BIT._PINV
#define PCR9_4 PCR9_4_BASE.UINT32
#define PCR9_4_PFC PCR9_4_BASE.BIT._PFC
#define PCR9_4_PFCE PCR9_4_BASE.BIT._PFCE
#define PCR9_4_PM PCR9_4_BASE.BIT._PM
#define PCR9_4_PIPC PCR9_4_BASE.BIT._PIPC
#define PCR9_4_PMC PCR9_4_BASE.BIT._PMC
#define PCR9_4_PPR PCR9_4_BASE.BIT._PPR
#define PCR9_4_P PCR9_4_BASE.BIT._P
#define PCR9_4_PIBC PCR9_4_BASE.BIT._PIBC
#define PCR9_4_PBDC PCR9_4_BASE.BIT._PBDC
#define PCR9_4_PD PCR9_4_BASE.BIT._PD
#define PCR9_4_PU PCR9_4_BASE.BIT._PU
#define PCR9_4_PIS PCR9_4_BASE.BIT._PIS
#define PCR9_4_PDSC PCR9_4_BASE.BIT._PDSC
#define PCR9_4_PUCC PCR9_4_BASE.BIT._PUCC
#define PCR9_4_PODCE PCR9_4_BASE.BIT._PODCE
#define PCR9_4_PODC PCR9_4_BASE.BIT._PODC
#define PCR9_4_PINV PCR9_4_BASE.BIT._PINV
#define PCR9_5 PCR9_5_BASE.UINT32
#define PCR9_5_PFC PCR9_5_BASE.BIT._PFC
#define PCR9_5_PFCE PCR9_5_BASE.BIT._PFCE
#define PCR9_5_PM PCR9_5_BASE.BIT._PM
#define PCR9_5_PIPC PCR9_5_BASE.BIT._PIPC
#define PCR9_5_PMC PCR9_5_BASE.BIT._PMC
#define PCR9_5_PPR PCR9_5_BASE.BIT._PPR
#define PCR9_5_P PCR9_5_BASE.BIT._P
#define PCR9_5_PIBC PCR9_5_BASE.BIT._PIBC
#define PCR9_5_PBDC PCR9_5_BASE.BIT._PBDC
#define PCR9_5_PD PCR9_5_BASE.BIT._PD
#define PCR9_5_PU PCR9_5_BASE.BIT._PU
#define PCR9_5_PIS PCR9_5_BASE.BIT._PIS
#define PCR9_5_PDSC PCR9_5_BASE.BIT._PDSC
#define PCR9_5_PUCC PCR9_5_BASE.BIT._PUCC
#define PCR9_5_PODCE PCR9_5_BASE.BIT._PODCE
#define PCR9_5_PODC PCR9_5_BASE.BIT._PODC
#define PCR9_5_PINV PCR9_5_BASE.BIT._PINV
#define PCR9_6 PCR9_6_BASE.UINT32
#define PCR9_6_PFC PCR9_6_BASE.BIT._PFC
#define PCR9_6_PFCE PCR9_6_BASE.BIT._PFCE
#define PCR9_6_PM PCR9_6_BASE.BIT._PM
#define PCR9_6_PIPC PCR9_6_BASE.BIT._PIPC
#define PCR9_6_PMC PCR9_6_BASE.BIT._PMC
#define PCR9_6_PPR PCR9_6_BASE.BIT._PPR
#define PCR9_6_P PCR9_6_BASE.BIT._P
#define PCR9_6_PIBC PCR9_6_BASE.BIT._PIBC
#define PCR9_6_PBDC PCR9_6_BASE.BIT._PBDC
#define PCR9_6_PD PCR9_6_BASE.BIT._PD
#define PCR9_6_PU PCR9_6_BASE.BIT._PU
#define PCR9_6_PIS PCR9_6_BASE.BIT._PIS
#define PCR9_6_PDSC PCR9_6_BASE.BIT._PDSC
#define PCR9_6_PUCC PCR9_6_BASE.BIT._PUCC
#define PCR9_6_PODCE PCR9_6_BASE.BIT._PODCE
#define PCR9_6_PODC PCR9_6_BASE.BIT._PODC
#define PCR9_6_PINV PCR9_6_BASE.BIT._PINV
#define PCR9_7 PCR9_7_BASE.UINT32
#define PCR9_7_PFC PCR9_7_BASE.BIT._PFC
#define PCR9_7_PFCE PCR9_7_BASE.BIT._PFCE
#define PCR9_7_PM PCR9_7_BASE.BIT._PM
#define PCR9_7_PIPC PCR9_7_BASE.BIT._PIPC
#define PCR9_7_PMC PCR9_7_BASE.BIT._PMC
#define PCR9_7_PPR PCR9_7_BASE.BIT._PPR
#define PCR9_7_P PCR9_7_BASE.BIT._P
#define PCR9_7_PIBC PCR9_7_BASE.BIT._PIBC
#define PCR9_7_PBDC PCR9_7_BASE.BIT._PBDC
#define PCR9_7_PD PCR9_7_BASE.BIT._PD
#define PCR9_7_PU PCR9_7_BASE.BIT._PU
#define PCR9_7_PIS PCR9_7_BASE.BIT._PIS
#define PCR9_7_PDSC PCR9_7_BASE.BIT._PDSC
#define PCR9_7_PUCC PCR9_7_BASE.BIT._PUCC
#define PCR9_7_PODCE PCR9_7_BASE.BIT._PODCE
#define PCR9_7_PODC PCR9_7_BASE.BIT._PODC
#define PCR9_7_PINV PCR9_7_BASE.BIT._PINV
#define PCR9_8 PCR9_8_BASE.UINT32
#define PCR9_8_PFC PCR9_8_BASE.BIT._PFC
#define PCR9_8_PFCE PCR9_8_BASE.BIT._PFCE
#define PCR9_8_PM PCR9_8_BASE.BIT._PM
#define PCR9_8_PIPC PCR9_8_BASE.BIT._PIPC
#define PCR9_8_PMC PCR9_8_BASE.BIT._PMC
#define PCR9_8_PPR PCR9_8_BASE.BIT._PPR
#define PCR9_8_P PCR9_8_BASE.BIT._P
#define PCR9_8_PIBC PCR9_8_BASE.BIT._PIBC
#define PCR9_8_PBDC PCR9_8_BASE.BIT._PBDC
#define PCR9_8_PD PCR9_8_BASE.BIT._PD
#define PCR9_8_PU PCR9_8_BASE.BIT._PU
#define PCR9_8_PIS PCR9_8_BASE.BIT._PIS
#define PCR9_8_PDSC PCR9_8_BASE.BIT._PDSC
#define PCR9_8_PUCC PCR9_8_BASE.BIT._PUCC
#define PCR9_8_PODCE PCR9_8_BASE.BIT._PODCE
#define PCR9_8_PODC PCR9_8_BASE.BIT._PODC
#define PCR9_8_PINV PCR9_8_BASE.BIT._PINV
#define PIBC0 PIBC0_BASE.UINT16
#define PIBC0_PIBC0_0 PIBC0_BASE.BIT._PIBC0_0
#define PIBC0_PIBC0_1 PIBC0_BASE.BIT._PIBC0_1
#define PIBC0_PIBC0_2 PIBC0_BASE.BIT._PIBC0_2
#define PIBC0_PIBC0_3 PIBC0_BASE.BIT._PIBC0_3
#define PIBC0_PIBC0_4 PIBC0_BASE.BIT._PIBC0_4
#define PIBC0_PIBC0_5 PIBC0_BASE.BIT._PIBC0_5
#define PIBC0_PIBC0_6 PIBC0_BASE.BIT._PIBC0_6
#define PIBC0_PIBC0_7 PIBC0_BASE.BIT._PIBC0_7
#define PIBC0_PIBC0_8 PIBC0_BASE.BIT._PIBC0_8
#define PIBC0_PIBC0_9 PIBC0_BASE.BIT._PIBC0_9
#define PIBC0_PIBC0_10 PIBC0_BASE.BIT._PIBC0_10
#define PIBC0_PIBC0_11 PIBC0_BASE.BIT._PIBC0_11
#define PIBC0_PIBC0_12 PIBC0_BASE.BIT._PIBC0_12
#define PIBC0_PIBC0_13 PIBC0_BASE.BIT._PIBC0_13
#define PIBC0_PIBC0_14 PIBC0_BASE.BIT._PIBC0_14
#define PIBC0_PIBC0_15 PIBC0_BASE.BIT._PIBC0_15
#define PBDC0 PBDC0_BASE.UINT16
#define PBDC0_PBDC0_0 PBDC0_BASE.BIT._PBDC0_0
#define PBDC0_PBDC0_1 PBDC0_BASE.BIT._PBDC0_1
#define PBDC0_PBDC0_2 PBDC0_BASE.BIT._PBDC0_2
#define PBDC0_PBDC0_3 PBDC0_BASE.BIT._PBDC0_3
#define PBDC0_PBDC0_4 PBDC0_BASE.BIT._PBDC0_4
#define PBDC0_PBDC0_5 PBDC0_BASE.BIT._PBDC0_5
#define PBDC0_PBDC0_6 PBDC0_BASE.BIT._PBDC0_6
#define PBDC0_PBDC0_7 PBDC0_BASE.BIT._PBDC0_7
#define PBDC0_PBDC0_8 PBDC0_BASE.BIT._PBDC0_8
#define PBDC0_PBDC0_9 PBDC0_BASE.BIT._PBDC0_9
#define PBDC0_PBDC0_10 PBDC0_BASE.BIT._PBDC0_10
#define PBDC0_PBDC0_11 PBDC0_BASE.BIT._PBDC0_11
#define PBDC0_PBDC0_12 PBDC0_BASE.BIT._PBDC0_12
#define PBDC0_PBDC0_13 PBDC0_BASE.BIT._PBDC0_13
#define PBDC0_PBDC0_14 PBDC0_BASE.BIT._PBDC0_14
#define PBDC0_PBDC0_15 PBDC0_BASE.BIT._PBDC0_15
#define PIPC0 PIPC0_BASE.UINT16
#define PIPC0_PIPC0_0 PIPC0_BASE.BIT._PIPC0_0
#define PIPC0_PIPC0_1 PIPC0_BASE.BIT._PIPC0_1
#define PIPC0_PIPC0_2 PIPC0_BASE.BIT._PIPC0_2
#define PIPC0_PIPC0_3 PIPC0_BASE.BIT._PIPC0_3
#define PIPC0_PIPC0_4 PIPC0_BASE.BIT._PIPC0_4
#define PIPC0_PIPC0_5 PIPC0_BASE.BIT._PIPC0_5
#define PIPC0_PIPC0_6 PIPC0_BASE.BIT._PIPC0_6
#define PIPC0_PIPC0_7 PIPC0_BASE.BIT._PIPC0_7
#define PIPC0_PIPC0_8 PIPC0_BASE.BIT._PIPC0_8
#define PIPC0_PIPC0_9 PIPC0_BASE.BIT._PIPC0_9
#define PIPC0_PIPC0_10 PIPC0_BASE.BIT._PIPC0_10
#define PIPC0_PIPC0_11 PIPC0_BASE.BIT._PIPC0_11
#define PIPC0_PIPC0_12 PIPC0_BASE.BIT._PIPC0_12
#define PIPC0_PIPC0_13 PIPC0_BASE.BIT._PIPC0_13
#define PIPC0_PIPC0_14 PIPC0_BASE.BIT._PIPC0_14
#define PIPC0_PIPC0_15 PIPC0_BASE.BIT._PIPC0_15
#define PU0 PU0_BASE.UINT16
#define PU0_PU0_0 PU0_BASE.BIT._PU0_0
#define PU0_PU0_1 PU0_BASE.BIT._PU0_1
#define PU0_PU0_2 PU0_BASE.BIT._PU0_2
#define PU0_PU0_3 PU0_BASE.BIT._PU0_3
#define PU0_PU0_4 PU0_BASE.BIT._PU0_4
#define PU0_PU0_5 PU0_BASE.BIT._PU0_5
#define PU0_PU0_6 PU0_BASE.BIT._PU0_6
#define PU0_PU0_7 PU0_BASE.BIT._PU0_7
#define PU0_PU0_8 PU0_BASE.BIT._PU0_8
#define PU0_PU0_9 PU0_BASE.BIT._PU0_9
#define PU0_PU0_10 PU0_BASE.BIT._PU0_10
#define PU0_PU0_11 PU0_BASE.BIT._PU0_11
#define PU0_PU0_12 PU0_BASE.BIT._PU0_12
#define PU0_PU0_13 PU0_BASE.BIT._PU0_13
#define PU0_PU0_14 PU0_BASE.BIT._PU0_14
#define PU0_PU0_15 PU0_BASE.BIT._PU0_15
#define PD0 PD0_BASE.UINT16
#define PD0_PD0_0 PD0_BASE.BIT._PD0_0
#define PD0_PD0_1 PD0_BASE.BIT._PD0_1
#define PD0_PD0_2 PD0_BASE.BIT._PD0_2
#define PD0_PD0_3 PD0_BASE.BIT._PD0_3
#define PD0_PD0_4 PD0_BASE.BIT._PD0_4
#define PD0_PD0_5 PD0_BASE.BIT._PD0_5
#define PD0_PD0_6 PD0_BASE.BIT._PD0_6
#define PD0_PD0_7 PD0_BASE.BIT._PD0_7
#define PD0_PD0_8 PD0_BASE.BIT._PD0_8
#define PD0_PD0_9 PD0_BASE.BIT._PD0_9
#define PD0_PD0_10 PD0_BASE.BIT._PD0_10
#define PD0_PD0_11 PD0_BASE.BIT._PD0_11
#define PD0_PD0_12 PD0_BASE.BIT._PD0_12
#define PD0_PD0_13 PD0_BASE.BIT._PD0_13
#define PD0_PD0_14 PD0_BASE.BIT._PD0_14
#define PD0_PD0_15 PD0_BASE.BIT._PD0_15
#define PODC0 PODC0_BASE.UINT32
#define PODC0_PODC0_0 PODC0_BASE.BIT._PODC0_0
#define PODC0_PODC0_1 PODC0_BASE.BIT._PODC0_1
#define PODC0_PODC0_2 PODC0_BASE.BIT._PODC0_2
#define PODC0_PODC0_3 PODC0_BASE.BIT._PODC0_3
#define PODC0_PODC0_4 PODC0_BASE.BIT._PODC0_4
#define PODC0_PODC0_5 PODC0_BASE.BIT._PODC0_5
#define PODC0_PODC0_6 PODC0_BASE.BIT._PODC0_6
#define PODC0_PODC0_7 PODC0_BASE.BIT._PODC0_7
#define PODC0_PODC0_8 PODC0_BASE.BIT._PODC0_8
#define PODC0_PODC0_9 PODC0_BASE.BIT._PODC0_9
#define PODC0_PODC0_10 PODC0_BASE.BIT._PODC0_10
#define PODC0_PODC0_11 PODC0_BASE.BIT._PODC0_11
#define PODC0_PODC0_12 PODC0_BASE.BIT._PODC0_12
#define PODC0_PODC0_13 PODC0_BASE.BIT._PODC0_13
#define PODC0_PODC0_14 PODC0_BASE.BIT._PODC0_14
#define PODC0_PODC0_15 PODC0_BASE.BIT._PODC0_15
#define PDSC0 PDSC0_BASE.UINT32
#define PDSC0_PDSC0_0 PDSC0_BASE.BIT._PDSC0_0
#define PDSC0_PDSC0_1 PDSC0_BASE.BIT._PDSC0_1
#define PDSC0_PDSC0_2 PDSC0_BASE.BIT._PDSC0_2
#define PDSC0_PDSC0_3 PDSC0_BASE.BIT._PDSC0_3
#define PDSC0_PDSC0_4 PDSC0_BASE.BIT._PDSC0_4
#define PDSC0_PDSC0_5 PDSC0_BASE.BIT._PDSC0_5
#define PDSC0_PDSC0_6 PDSC0_BASE.BIT._PDSC0_6
#define PDSC0_PDSC0_7 PDSC0_BASE.BIT._PDSC0_7
#define PDSC0_PDSC0_8 PDSC0_BASE.BIT._PDSC0_8
#define PDSC0_PDSC0_9 PDSC0_BASE.BIT._PDSC0_9
#define PDSC0_PDSC0_10 PDSC0_BASE.BIT._PDSC0_10
#define PDSC0_PDSC0_11 PDSC0_BASE.BIT._PDSC0_11
#define PDSC0_PDSC0_12 PDSC0_BASE.BIT._PDSC0_12
#define PDSC0_PDSC0_13 PDSC0_BASE.BIT._PDSC0_13
#define PDSC0_PDSC0_14 PDSC0_BASE.BIT._PDSC0_14
#define PDSC0_PDSC0_15 PDSC0_BASE.BIT._PDSC0_15
#define PIS0 PIS0_BASE.UINT16
#define PIS0_PIS0_0 PIS0_BASE.BIT._PIS0_0
#define PIS0_PIS0_1 PIS0_BASE.BIT._PIS0_1
#define PIS0_PIS0_2 PIS0_BASE.BIT._PIS0_2
#define PIS0_PIS0_3 PIS0_BASE.BIT._PIS0_3
#define PIS0_PIS0_4 PIS0_BASE.BIT._PIS0_4
#define PIS0_PIS0_5 PIS0_BASE.BIT._PIS0_5
#define PIS0_PIS0_6 PIS0_BASE.BIT._PIS0_6
#define PIS0_PIS0_7 PIS0_BASE.BIT._PIS0_7
#define PIS0_PIS0_8 PIS0_BASE.BIT._PIS0_8
#define PIS0_PIS0_9 PIS0_BASE.BIT._PIS0_9
#define PIS0_PIS0_10 PIS0_BASE.BIT._PIS0_10
#define PIS0_PIS0_11 PIS0_BASE.BIT._PIS0_11
#define PIS0_PIS0_12 PIS0_BASE.BIT._PIS0_12
#define PIS0_PIS0_13 PIS0_BASE.BIT._PIS0_13
#define PIS0_PIS0_14 PIS0_BASE.BIT._PIS0_14
#define PIS0_PIS0_15 PIS0_BASE.BIT._PIS0_15
#define PUCC0 PUCC0_BASE.UINT32
#define PUCC0_PUCC0_0 PUCC0_BASE.BIT._PUCC0_0
#define PUCC0_PUCC0_1 PUCC0_BASE.BIT._PUCC0_1
#define PUCC0_PUCC0_2 PUCC0_BASE.BIT._PUCC0_2
#define PUCC0_PUCC0_3 PUCC0_BASE.BIT._PUCC0_3
#define PUCC0_PUCC0_4 PUCC0_BASE.BIT._PUCC0_4
#define PUCC0_PUCC0_5 PUCC0_BASE.BIT._PUCC0_5
#define PUCC0_PUCC0_6 PUCC0_BASE.BIT._PUCC0_6
#define PUCC0_PUCC0_7 PUCC0_BASE.BIT._PUCC0_7
#define PUCC0_PUCC0_8 PUCC0_BASE.BIT._PUCC0_8
#define PUCC0_PUCC0_9 PUCC0_BASE.BIT._PUCC0_9
#define PUCC0_PUCC0_10 PUCC0_BASE.BIT._PUCC0_10
#define PUCC0_PUCC0_11 PUCC0_BASE.BIT._PUCC0_11
#define PUCC0_PUCC0_12 PUCC0_BASE.BIT._PUCC0_12
#define PUCC0_PUCC0_13 PUCC0_BASE.BIT._PUCC0_13
#define PUCC0_PUCC0_14 PUCC0_BASE.BIT._PUCC0_14
#define PUCC0_PUCC0_15 PUCC0_BASE.BIT._PUCC0_15
#define PODCE0 PODCE0_BASE.UINT32
#define PODCE0_PODCE0_0 PODCE0_BASE.BIT._PODCE0_0
#define PODCE0_PODCE0_1 PODCE0_BASE.BIT._PODCE0_1
#define PODCE0_PODCE0_2 PODCE0_BASE.BIT._PODCE0_2
#define PODCE0_PODCE0_3 PODCE0_BASE.BIT._PODCE0_3
#define PODCE0_PODCE0_4 PODCE0_BASE.BIT._PODCE0_4
#define PODCE0_PODCE0_5 PODCE0_BASE.BIT._PODCE0_5
#define PODCE0_PODCE0_6 PODCE0_BASE.BIT._PODCE0_6
#define PODCE0_PODCE0_7 PODCE0_BASE.BIT._PODCE0_7
#define PODCE0_PODCE0_8 PODCE0_BASE.BIT._PODCE0_8
#define PODCE0_PODCE0_9 PODCE0_BASE.BIT._PODCE0_9
#define PODCE0_PODCE0_10 PODCE0_BASE.BIT._PODCE0_10
#define PODCE0_PODCE0_11 PODCE0_BASE.BIT._PODCE0_11
#define PODCE0_PODCE0_12 PODCE0_BASE.BIT._PODCE0_12
#define PODCE0_PODCE0_13 PODCE0_BASE.BIT._PODCE0_13
#define PODCE0_PODCE0_14 PODCE0_BASE.BIT._PODCE0_14
#define PODCE0_PODCE0_15 PODCE0_BASE.BIT._PODCE0_15
#define PIBC1 PIBC1_BASE.UINT16
#define PIBC1_PIBC1_0 PIBC1_BASE.BIT._PIBC1_0
#define PIBC1_PIBC1_1 PIBC1_BASE.BIT._PIBC1_1
#define PIBC1_PIBC1_2 PIBC1_BASE.BIT._PIBC1_2
#define PIBC1_PIBC1_3 PIBC1_BASE.BIT._PIBC1_3
#define PIBC1_PIBC1_4 PIBC1_BASE.BIT._PIBC1_4
#define PIBC1_PIBC1_5 PIBC1_BASE.BIT._PIBC1_5
#define PIBC1_PIBC1_6 PIBC1_BASE.BIT._PIBC1_6
#define PIBC1_PIBC1_7 PIBC1_BASE.BIT._PIBC1_7
#define PIBC1_PIBC1_8 PIBC1_BASE.BIT._PIBC1_8
#define PIBC1_PIBC1_9 PIBC1_BASE.BIT._PIBC1_9
#define PIBC1_PIBC1_10 PIBC1_BASE.BIT._PIBC1_10
#define PIBC1_PIBC1_11 PIBC1_BASE.BIT._PIBC1_11
#define PIBC1_PIBC1_12 PIBC1_BASE.BIT._PIBC1_12
#define PIBC1_PIBC1_13 PIBC1_BASE.BIT._PIBC1_13
#define PIBC1_PIBC1_14 PIBC1_BASE.BIT._PIBC1_14
#define PIBC1_PIBC1_15 PIBC1_BASE.BIT._PIBC1_15
#define PBDC1 PBDC1_BASE.UINT16
#define PBDC1_PBDC1_0 PBDC1_BASE.BIT._PBDC1_0
#define PBDC1_PBDC1_1 PBDC1_BASE.BIT._PBDC1_1
#define PBDC1_PBDC1_2 PBDC1_BASE.BIT._PBDC1_2
#define PBDC1_PBDC1_3 PBDC1_BASE.BIT._PBDC1_3
#define PBDC1_PBDC1_4 PBDC1_BASE.BIT._PBDC1_4
#define PBDC1_PBDC1_5 PBDC1_BASE.BIT._PBDC1_5
#define PBDC1_PBDC1_6 PBDC1_BASE.BIT._PBDC1_6
#define PBDC1_PBDC1_7 PBDC1_BASE.BIT._PBDC1_7
#define PBDC1_PBDC1_8 PBDC1_BASE.BIT._PBDC1_8
#define PBDC1_PBDC1_9 PBDC1_BASE.BIT._PBDC1_9
#define PBDC1_PBDC1_10 PBDC1_BASE.BIT._PBDC1_10
#define PBDC1_PBDC1_11 PBDC1_BASE.BIT._PBDC1_11
#define PBDC1_PBDC1_12 PBDC1_BASE.BIT._PBDC1_12
#define PBDC1_PBDC1_13 PBDC1_BASE.BIT._PBDC1_13
#define PBDC1_PBDC1_14 PBDC1_BASE.BIT._PBDC1_14
#define PBDC1_PBDC1_15 PBDC1_BASE.BIT._PBDC1_15
#define PIPC1 PIPC1_BASE.UINT16
#define PIPC1_PIPC1_0 PIPC1_BASE.BIT._PIPC1_0
#define PIPC1_PIPC1_1 PIPC1_BASE.BIT._PIPC1_1
#define PIPC1_PIPC1_2 PIPC1_BASE.BIT._PIPC1_2
#define PIPC1_PIPC1_3 PIPC1_BASE.BIT._PIPC1_3
#define PIPC1_PIPC1_4 PIPC1_BASE.BIT._PIPC1_4
#define PIPC1_PIPC1_5 PIPC1_BASE.BIT._PIPC1_5
#define PIPC1_PIPC1_6 PIPC1_BASE.BIT._PIPC1_6
#define PIPC1_PIPC1_7 PIPC1_BASE.BIT._PIPC1_7
#define PIPC1_PIPC1_8 PIPC1_BASE.BIT._PIPC1_8
#define PIPC1_PIPC1_9 PIPC1_BASE.BIT._PIPC1_9
#define PIPC1_PIPC1_10 PIPC1_BASE.BIT._PIPC1_10
#define PIPC1_PIPC1_11 PIPC1_BASE.BIT._PIPC1_11
#define PIPC1_PIPC1_12 PIPC1_BASE.BIT._PIPC1_12
#define PIPC1_PIPC1_13 PIPC1_BASE.BIT._PIPC1_13
#define PIPC1_PIPC1_14 PIPC1_BASE.BIT._PIPC1_14
#define PIPC1_PIPC1_15 PIPC1_BASE.BIT._PIPC1_15
#define PU1 PU1_BASE.UINT16
#define PU1_PU1_0 PU1_BASE.BIT._PU1_0
#define PU1_PU1_1 PU1_BASE.BIT._PU1_1
#define PU1_PU1_2 PU1_BASE.BIT._PU1_2
#define PU1_PU1_3 PU1_BASE.BIT._PU1_3
#define PU1_PU1_4 PU1_BASE.BIT._PU1_4
#define PU1_PU1_5 PU1_BASE.BIT._PU1_5
#define PU1_PU1_6 PU1_BASE.BIT._PU1_6
#define PU1_PU1_7 PU1_BASE.BIT._PU1_7
#define PU1_PU1_8 PU1_BASE.BIT._PU1_8
#define PU1_PU1_9 PU1_BASE.BIT._PU1_9
#define PU1_PU1_10 PU1_BASE.BIT._PU1_10
#define PU1_PU1_11 PU1_BASE.BIT._PU1_11
#define PU1_PU1_12 PU1_BASE.BIT._PU1_12
#define PU1_PU1_13 PU1_BASE.BIT._PU1_13
#define PU1_PU1_14 PU1_BASE.BIT._PU1_14
#define PU1_PU1_15 PU1_BASE.BIT._PU1_15
#define PD1 PD1_BASE.UINT16
#define PD1_PD1_0 PD1_BASE.BIT._PD1_0
#define PD1_PD1_1 PD1_BASE.BIT._PD1_1
#define PD1_PD1_2 PD1_BASE.BIT._PD1_2
#define PD1_PD1_3 PD1_BASE.BIT._PD1_3
#define PD1_PD1_4 PD1_BASE.BIT._PD1_4
#define PD1_PD1_5 PD1_BASE.BIT._PD1_5
#define PD1_PD1_6 PD1_BASE.BIT._PD1_6
#define PD1_PD1_7 PD1_BASE.BIT._PD1_7
#define PD1_PD1_8 PD1_BASE.BIT._PD1_8
#define PD1_PD1_9 PD1_BASE.BIT._PD1_9
#define PD1_PD1_10 PD1_BASE.BIT._PD1_10
#define PD1_PD1_11 PD1_BASE.BIT._PD1_11
#define PD1_PD1_12 PD1_BASE.BIT._PD1_12
#define PD1_PD1_13 PD1_BASE.BIT._PD1_13
#define PD1_PD1_14 PD1_BASE.BIT._PD1_14
#define PD1_PD1_15 PD1_BASE.BIT._PD1_15
#define PODC1 PODC1_BASE.UINT32
#define PODC1_PODC1_0 PODC1_BASE.BIT._PODC1_0
#define PODC1_PODC1_1 PODC1_BASE.BIT._PODC1_1
#define PODC1_PODC1_2 PODC1_BASE.BIT._PODC1_2
#define PODC1_PODC1_3 PODC1_BASE.BIT._PODC1_3
#define PODC1_PODC1_4 PODC1_BASE.BIT._PODC1_4
#define PODC1_PODC1_5 PODC1_BASE.BIT._PODC1_5
#define PODC1_PODC1_6 PODC1_BASE.BIT._PODC1_6
#define PODC1_PODC1_7 PODC1_BASE.BIT._PODC1_7
#define PODC1_PODC1_8 PODC1_BASE.BIT._PODC1_8
#define PODC1_PODC1_9 PODC1_BASE.BIT._PODC1_9
#define PODC1_PODC1_10 PODC1_BASE.BIT._PODC1_10
#define PODC1_PODC1_11 PODC1_BASE.BIT._PODC1_11
#define PODC1_PODC1_12 PODC1_BASE.BIT._PODC1_12
#define PODC1_PODC1_13 PODC1_BASE.BIT._PODC1_13
#define PODC1_PODC1_14 PODC1_BASE.BIT._PODC1_14
#define PODC1_PODC1_15 PODC1_BASE.BIT._PODC1_15
#define PDSC1 PDSC1_BASE.UINT32
#define PDSC1_PDSC1_0 PDSC1_BASE.BIT._PDSC1_0
#define PDSC1_PDSC1_1 PDSC1_BASE.BIT._PDSC1_1
#define PDSC1_PDSC1_2 PDSC1_BASE.BIT._PDSC1_2
#define PDSC1_PDSC1_3 PDSC1_BASE.BIT._PDSC1_3
#define PDSC1_PDSC1_4 PDSC1_BASE.BIT._PDSC1_4
#define PDSC1_PDSC1_5 PDSC1_BASE.BIT._PDSC1_5
#define PDSC1_PDSC1_6 PDSC1_BASE.BIT._PDSC1_6
#define PDSC1_PDSC1_7 PDSC1_BASE.BIT._PDSC1_7
#define PDSC1_PDSC1_8 PDSC1_BASE.BIT._PDSC1_8
#define PDSC1_PDSC1_9 PDSC1_BASE.BIT._PDSC1_9
#define PDSC1_PDSC1_10 PDSC1_BASE.BIT._PDSC1_10
#define PDSC1_PDSC1_11 PDSC1_BASE.BIT._PDSC1_11
#define PDSC1_PDSC1_12 PDSC1_BASE.BIT._PDSC1_12
#define PDSC1_PDSC1_13 PDSC1_BASE.BIT._PDSC1_13
#define PDSC1_PDSC1_14 PDSC1_BASE.BIT._PDSC1_14
#define PDSC1_PDSC1_15 PDSC1_BASE.BIT._PDSC1_15
#define PIS1 PIS1_BASE.UINT16
#define PIS1_PIS1_0 PIS1_BASE.BIT._PIS1_0
#define PIS1_PIS1_1 PIS1_BASE.BIT._PIS1_1
#define PIS1_PIS1_2 PIS1_BASE.BIT._PIS1_2
#define PIS1_PIS1_3 PIS1_BASE.BIT._PIS1_3
#define PIS1_PIS1_4 PIS1_BASE.BIT._PIS1_4
#define PIS1_PIS1_5 PIS1_BASE.BIT._PIS1_5
#define PIS1_PIS1_6 PIS1_BASE.BIT._PIS1_6
#define PIS1_PIS1_7 PIS1_BASE.BIT._PIS1_7
#define PIS1_PIS1_8 PIS1_BASE.BIT._PIS1_8
#define PIS1_PIS1_9 PIS1_BASE.BIT._PIS1_9
#define PIS1_PIS1_10 PIS1_BASE.BIT._PIS1_10
#define PIS1_PIS1_11 PIS1_BASE.BIT._PIS1_11
#define PIS1_PIS1_12 PIS1_BASE.BIT._PIS1_12
#define PIS1_PIS1_13 PIS1_BASE.BIT._PIS1_13
#define PIS1_PIS1_14 PIS1_BASE.BIT._PIS1_14
#define PIS1_PIS1_15 PIS1_BASE.BIT._PIS1_15
#define PUCC1 PUCC1_BASE.UINT32
#define PUCC1_PUCC1_0 PUCC1_BASE.BIT._PUCC1_0
#define PUCC1_PUCC1_1 PUCC1_BASE.BIT._PUCC1_1
#define PUCC1_PUCC1_2 PUCC1_BASE.BIT._PUCC1_2
#define PUCC1_PUCC1_3 PUCC1_BASE.BIT._PUCC1_3
#define PUCC1_PUCC1_4 PUCC1_BASE.BIT._PUCC1_4
#define PUCC1_PUCC1_5 PUCC1_BASE.BIT._PUCC1_5
#define PUCC1_PUCC1_6 PUCC1_BASE.BIT._PUCC1_6
#define PUCC1_PUCC1_7 PUCC1_BASE.BIT._PUCC1_7
#define PUCC1_PUCC1_8 PUCC1_BASE.BIT._PUCC1_8
#define PUCC1_PUCC1_9 PUCC1_BASE.BIT._PUCC1_9
#define PUCC1_PUCC1_10 PUCC1_BASE.BIT._PUCC1_10
#define PUCC1_PUCC1_11 PUCC1_BASE.BIT._PUCC1_11
#define PUCC1_PUCC1_12 PUCC1_BASE.BIT._PUCC1_12
#define PUCC1_PUCC1_13 PUCC1_BASE.BIT._PUCC1_13
#define PUCC1_PUCC1_14 PUCC1_BASE.BIT._PUCC1_14
#define PUCC1_PUCC1_15 PUCC1_BASE.BIT._PUCC1_15
#define PODCE1 PODCE1_BASE.UINT32
#define PODCE1_PODCE1_0 PODCE1_BASE.BIT._PODCE1_0
#define PODCE1_PODCE1_1 PODCE1_BASE.BIT._PODCE1_1
#define PODCE1_PODCE1_2 PODCE1_BASE.BIT._PODCE1_2
#define PODCE1_PODCE1_3 PODCE1_BASE.BIT._PODCE1_3
#define PODCE1_PODCE1_4 PODCE1_BASE.BIT._PODCE1_4
#define PODCE1_PODCE1_5 PODCE1_BASE.BIT._PODCE1_5
#define PODCE1_PODCE1_6 PODCE1_BASE.BIT._PODCE1_6
#define PODCE1_PODCE1_7 PODCE1_BASE.BIT._PODCE1_7
#define PODCE1_PODCE1_8 PODCE1_BASE.BIT._PODCE1_8
#define PODCE1_PODCE1_9 PODCE1_BASE.BIT._PODCE1_9
#define PODCE1_PODCE1_10 PODCE1_BASE.BIT._PODCE1_10
#define PODCE1_PODCE1_11 PODCE1_BASE.BIT._PODCE1_11
#define PODCE1_PODCE1_12 PODCE1_BASE.BIT._PODCE1_12
#define PODCE1_PODCE1_13 PODCE1_BASE.BIT._PODCE1_13
#define PODCE1_PODCE1_14 PODCE1_BASE.BIT._PODCE1_14
#define PODCE1_PODCE1_15 PODCE1_BASE.BIT._PODCE1_15
#define PIBC2 PIBC2_BASE.UINT16
#define PIBC2_PIBC2_0 PIBC2_BASE.BIT._PIBC2_0
#define PIBC2_PIBC2_1 PIBC2_BASE.BIT._PIBC2_1
#define PIBC2_PIBC2_2 PIBC2_BASE.BIT._PIBC2_2
#define PIBC2_PIBC2_3 PIBC2_BASE.BIT._PIBC2_3
#define PIBC2_PIBC2_4 PIBC2_BASE.BIT._PIBC2_4
#define PIBC2_PIBC2_5 PIBC2_BASE.BIT._PIBC2_5
#define PIBC2_PIBC2_6 PIBC2_BASE.BIT._PIBC2_6
#define PIBC2_PIBC2_7 PIBC2_BASE.BIT._PIBC2_7
#define PIBC2_PIBC2_8 PIBC2_BASE.BIT._PIBC2_8
#define PIBC2_PIBC2_9 PIBC2_BASE.BIT._PIBC2_9
#define PIBC2_PIBC2_10 PIBC2_BASE.BIT._PIBC2_10
#define PIBC2_PIBC2_11 PIBC2_BASE.BIT._PIBC2_11
#define PIBC2_PIBC2_12 PIBC2_BASE.BIT._PIBC2_12
#define PIBC2_PIBC2_13 PIBC2_BASE.BIT._PIBC2_13
#define PIBC2_PIBC2_14 PIBC2_BASE.BIT._PIBC2_14
#define PIBC2_PIBC2_15 PIBC2_BASE.BIT._PIBC2_15
#define PBDC2 PBDC2_BASE.UINT16
#define PBDC2_PBDC2_0 PBDC2_BASE.BIT._PBDC2_0
#define PBDC2_PBDC2_1 PBDC2_BASE.BIT._PBDC2_1
#define PBDC2_PBDC2_2 PBDC2_BASE.BIT._PBDC2_2
#define PBDC2_PBDC2_3 PBDC2_BASE.BIT._PBDC2_3
#define PBDC2_PBDC2_4 PBDC2_BASE.BIT._PBDC2_4
#define PBDC2_PBDC2_5 PBDC2_BASE.BIT._PBDC2_5
#define PBDC2_PBDC2_6 PBDC2_BASE.BIT._PBDC2_6
#define PBDC2_PBDC2_7 PBDC2_BASE.BIT._PBDC2_7
#define PBDC2_PBDC2_8 PBDC2_BASE.BIT._PBDC2_8
#define PBDC2_PBDC2_9 PBDC2_BASE.BIT._PBDC2_9
#define PBDC2_PBDC2_10 PBDC2_BASE.BIT._PBDC2_10
#define PBDC2_PBDC2_11 PBDC2_BASE.BIT._PBDC2_11
#define PBDC2_PBDC2_12 PBDC2_BASE.BIT._PBDC2_12
#define PBDC2_PBDC2_13 PBDC2_BASE.BIT._PBDC2_13
#define PBDC2_PBDC2_14 PBDC2_BASE.BIT._PBDC2_14
#define PBDC2_PBDC2_15 PBDC2_BASE.BIT._PBDC2_15
#define PIPC2 PIPC2_BASE.UINT16
#define PIPC2_PIPC2_0 PIPC2_BASE.BIT._PIPC2_0
#define PIPC2_PIPC2_1 PIPC2_BASE.BIT._PIPC2_1
#define PIPC2_PIPC2_2 PIPC2_BASE.BIT._PIPC2_2
#define PIPC2_PIPC2_3 PIPC2_BASE.BIT._PIPC2_3
#define PIPC2_PIPC2_4 PIPC2_BASE.BIT._PIPC2_4
#define PIPC2_PIPC2_5 PIPC2_BASE.BIT._PIPC2_5
#define PIPC2_PIPC2_6 PIPC2_BASE.BIT._PIPC2_6
#define PIPC2_PIPC2_7 PIPC2_BASE.BIT._PIPC2_7
#define PIPC2_PIPC2_8 PIPC2_BASE.BIT._PIPC2_8
#define PIPC2_PIPC2_9 PIPC2_BASE.BIT._PIPC2_9
#define PIPC2_PIPC2_10 PIPC2_BASE.BIT._PIPC2_10
#define PIPC2_PIPC2_11 PIPC2_BASE.BIT._PIPC2_11
#define PIPC2_PIPC2_12 PIPC2_BASE.BIT._PIPC2_12
#define PIPC2_PIPC2_13 PIPC2_BASE.BIT._PIPC2_13
#define PIPC2_PIPC2_14 PIPC2_BASE.BIT._PIPC2_14
#define PIPC2_PIPC2_15 PIPC2_BASE.BIT._PIPC2_15
#define PU2 PU2_BASE.UINT16
#define PU2_PU2_0 PU2_BASE.BIT._PU2_0
#define PU2_PU2_1 PU2_BASE.BIT._PU2_1
#define PU2_PU2_2 PU2_BASE.BIT._PU2_2
#define PU2_PU2_3 PU2_BASE.BIT._PU2_3
#define PU2_PU2_4 PU2_BASE.BIT._PU2_4
#define PU2_PU2_5 PU2_BASE.BIT._PU2_5
#define PU2_PU2_6 PU2_BASE.BIT._PU2_6
#define PU2_PU2_7 PU2_BASE.BIT._PU2_7
#define PU2_PU2_8 PU2_BASE.BIT._PU2_8
#define PU2_PU2_9 PU2_BASE.BIT._PU2_9
#define PU2_PU2_10 PU2_BASE.BIT._PU2_10
#define PU2_PU2_11 PU2_BASE.BIT._PU2_11
#define PU2_PU2_12 PU2_BASE.BIT._PU2_12
#define PU2_PU2_13 PU2_BASE.BIT._PU2_13
#define PU2_PU2_14 PU2_BASE.BIT._PU2_14
#define PU2_PU2_15 PU2_BASE.BIT._PU2_15
#define PD2 PD2_BASE.UINT16
#define PD2_PD2_0 PD2_BASE.BIT._PD2_0
#define PD2_PD2_1 PD2_BASE.BIT._PD2_1
#define PD2_PD2_2 PD2_BASE.BIT._PD2_2
#define PD2_PD2_3 PD2_BASE.BIT._PD2_3
#define PD2_PD2_4 PD2_BASE.BIT._PD2_4
#define PD2_PD2_5 PD2_BASE.BIT._PD2_5
#define PD2_PD2_6 PD2_BASE.BIT._PD2_6
#define PD2_PD2_7 PD2_BASE.BIT._PD2_7
#define PD2_PD2_8 PD2_BASE.BIT._PD2_8
#define PD2_PD2_9 PD2_BASE.BIT._PD2_9
#define PD2_PD2_10 PD2_BASE.BIT._PD2_10
#define PD2_PD2_11 PD2_BASE.BIT._PD2_11
#define PD2_PD2_12 PD2_BASE.BIT._PD2_12
#define PD2_PD2_13 PD2_BASE.BIT._PD2_13
#define PD2_PD2_14 PD2_BASE.BIT._PD2_14
#define PD2_PD2_15 PD2_BASE.BIT._PD2_15
#define PODC2 PODC2_BASE.UINT32
#define PODC2_PODC2_0 PODC2_BASE.BIT._PODC2_0
#define PODC2_PODC2_1 PODC2_BASE.BIT._PODC2_1
#define PODC2_PODC2_2 PODC2_BASE.BIT._PODC2_2
#define PODC2_PODC2_3 PODC2_BASE.BIT._PODC2_3
#define PODC2_PODC2_4 PODC2_BASE.BIT._PODC2_4
#define PODC2_PODC2_5 PODC2_BASE.BIT._PODC2_5
#define PODC2_PODC2_6 PODC2_BASE.BIT._PODC2_6
#define PODC2_PODC2_7 PODC2_BASE.BIT._PODC2_7
#define PODC2_PODC2_8 PODC2_BASE.BIT._PODC2_8
#define PODC2_PODC2_9 PODC2_BASE.BIT._PODC2_9
#define PODC2_PODC2_10 PODC2_BASE.BIT._PODC2_10
#define PODC2_PODC2_11 PODC2_BASE.BIT._PODC2_11
#define PODC2_PODC2_12 PODC2_BASE.BIT._PODC2_12
#define PODC2_PODC2_13 PODC2_BASE.BIT._PODC2_13
#define PODC2_PODC2_14 PODC2_BASE.BIT._PODC2_14
#define PODC2_PODC2_15 PODC2_BASE.BIT._PODC2_15
#define PDSC2 PDSC2_BASE.UINT32
#define PDSC2_PDSC2_0 PDSC2_BASE.BIT._PDSC2_0
#define PDSC2_PDSC2_1 PDSC2_BASE.BIT._PDSC2_1
#define PDSC2_PDSC2_2 PDSC2_BASE.BIT._PDSC2_2
#define PDSC2_PDSC2_3 PDSC2_BASE.BIT._PDSC2_3
#define PDSC2_PDSC2_4 PDSC2_BASE.BIT._PDSC2_4
#define PDSC2_PDSC2_5 PDSC2_BASE.BIT._PDSC2_5
#define PDSC2_PDSC2_6 PDSC2_BASE.BIT._PDSC2_6
#define PDSC2_PDSC2_7 PDSC2_BASE.BIT._PDSC2_7
#define PDSC2_PDSC2_8 PDSC2_BASE.BIT._PDSC2_8
#define PDSC2_PDSC2_9 PDSC2_BASE.BIT._PDSC2_9
#define PDSC2_PDSC2_10 PDSC2_BASE.BIT._PDSC2_10
#define PDSC2_PDSC2_11 PDSC2_BASE.BIT._PDSC2_11
#define PDSC2_PDSC2_12 PDSC2_BASE.BIT._PDSC2_12
#define PDSC2_PDSC2_13 PDSC2_BASE.BIT._PDSC2_13
#define PDSC2_PDSC2_14 PDSC2_BASE.BIT._PDSC2_14
#define PDSC2_PDSC2_15 PDSC2_BASE.BIT._PDSC2_15
#define PIS2 PIS2_BASE.UINT16
#define PIS2_PIS2_0 PIS2_BASE.BIT._PIS2_0
#define PIS2_PIS2_1 PIS2_BASE.BIT._PIS2_1
#define PIS2_PIS2_2 PIS2_BASE.BIT._PIS2_2
#define PIS2_PIS2_3 PIS2_BASE.BIT._PIS2_3
#define PIS2_PIS2_4 PIS2_BASE.BIT._PIS2_4
#define PIS2_PIS2_5 PIS2_BASE.BIT._PIS2_5
#define PIS2_PIS2_6 PIS2_BASE.BIT._PIS2_6
#define PIS2_PIS2_7 PIS2_BASE.BIT._PIS2_7
#define PIS2_PIS2_8 PIS2_BASE.BIT._PIS2_8
#define PIS2_PIS2_9 PIS2_BASE.BIT._PIS2_9
#define PIS2_PIS2_10 PIS2_BASE.BIT._PIS2_10
#define PIS2_PIS2_11 PIS2_BASE.BIT._PIS2_11
#define PIS2_PIS2_12 PIS2_BASE.BIT._PIS2_12
#define PIS2_PIS2_13 PIS2_BASE.BIT._PIS2_13
#define PIS2_PIS2_14 PIS2_BASE.BIT._PIS2_14
#define PIS2_PIS2_15 PIS2_BASE.BIT._PIS2_15
#define PUCC2 PUCC2_BASE.UINT32
#define PUCC2_PUCC2_0 PUCC2_BASE.BIT._PUCC2_0
#define PUCC2_PUCC2_1 PUCC2_BASE.BIT._PUCC2_1
#define PUCC2_PUCC2_2 PUCC2_BASE.BIT._PUCC2_2
#define PUCC2_PUCC2_3 PUCC2_BASE.BIT._PUCC2_3
#define PUCC2_PUCC2_4 PUCC2_BASE.BIT._PUCC2_4
#define PUCC2_PUCC2_5 PUCC2_BASE.BIT._PUCC2_5
#define PUCC2_PUCC2_6 PUCC2_BASE.BIT._PUCC2_6
#define PUCC2_PUCC2_7 PUCC2_BASE.BIT._PUCC2_7
#define PUCC2_PUCC2_8 PUCC2_BASE.BIT._PUCC2_8
#define PUCC2_PUCC2_9 PUCC2_BASE.BIT._PUCC2_9
#define PUCC2_PUCC2_10 PUCC2_BASE.BIT._PUCC2_10
#define PUCC2_PUCC2_11 PUCC2_BASE.BIT._PUCC2_11
#define PUCC2_PUCC2_12 PUCC2_BASE.BIT._PUCC2_12
#define PUCC2_PUCC2_13 PUCC2_BASE.BIT._PUCC2_13
#define PUCC2_PUCC2_14 PUCC2_BASE.BIT._PUCC2_14
#define PUCC2_PUCC2_15 PUCC2_BASE.BIT._PUCC2_15
#define PODCE2 PODCE2_BASE.UINT32
#define PODCE2_PODCE2_0 PODCE2_BASE.BIT._PODCE2_0
#define PODCE2_PODCE2_1 PODCE2_BASE.BIT._PODCE2_1
#define PODCE2_PODCE2_2 PODCE2_BASE.BIT._PODCE2_2
#define PODCE2_PODCE2_3 PODCE2_BASE.BIT._PODCE2_3
#define PODCE2_PODCE2_4 PODCE2_BASE.BIT._PODCE2_4
#define PODCE2_PODCE2_5 PODCE2_BASE.BIT._PODCE2_5
#define PODCE2_PODCE2_6 PODCE2_BASE.BIT._PODCE2_6
#define PODCE2_PODCE2_7 PODCE2_BASE.BIT._PODCE2_7
#define PODCE2_PODCE2_8 PODCE2_BASE.BIT._PODCE2_8
#define PODCE2_PODCE2_9 PODCE2_BASE.BIT._PODCE2_9
#define PODCE2_PODCE2_10 PODCE2_BASE.BIT._PODCE2_10
#define PODCE2_PODCE2_11 PODCE2_BASE.BIT._PODCE2_11
#define PODCE2_PODCE2_12 PODCE2_BASE.BIT._PODCE2_12
#define PODCE2_PODCE2_13 PODCE2_BASE.BIT._PODCE2_13
#define PODCE2_PODCE2_14 PODCE2_BASE.BIT._PODCE2_14
#define PODCE2_PODCE2_15 PODCE2_BASE.BIT._PODCE2_15
#define PIBC3 PIBC3_BASE.UINT16
#define PIBC3_PIBC3_0 PIBC3_BASE.BIT._PIBC3_0
#define PIBC3_PIBC3_1 PIBC3_BASE.BIT._PIBC3_1
#define PIBC3_PIBC3_2 PIBC3_BASE.BIT._PIBC3_2
#define PIBC3_PIBC3_3 PIBC3_BASE.BIT._PIBC3_3
#define PIBC3_PIBC3_4 PIBC3_BASE.BIT._PIBC3_4
#define PIBC3_PIBC3_5 PIBC3_BASE.BIT._PIBC3_5
#define PIBC3_PIBC3_6 PIBC3_BASE.BIT._PIBC3_6
#define PIBC3_PIBC3_7 PIBC3_BASE.BIT._PIBC3_7
#define PIBC3_PIBC3_8 PIBC3_BASE.BIT._PIBC3_8
#define PIBC3_PIBC3_9 PIBC3_BASE.BIT._PIBC3_9
#define PIBC3_PIBC3_10 PIBC3_BASE.BIT._PIBC3_10
#define PIBC3_PIBC3_11 PIBC3_BASE.BIT._PIBC3_11
#define PIBC3_PIBC3_12 PIBC3_BASE.BIT._PIBC3_12
#define PIBC3_PIBC3_13 PIBC3_BASE.BIT._PIBC3_13
#define PIBC3_PIBC3_14 PIBC3_BASE.BIT._PIBC3_14
#define PIBC3_PIBC3_15 PIBC3_BASE.BIT._PIBC3_15
#define PBDC3 PBDC3_BASE.UINT16
#define PBDC3_PBDC3_0 PBDC3_BASE.BIT._PBDC3_0
#define PBDC3_PBDC3_1 PBDC3_BASE.BIT._PBDC3_1
#define PBDC3_PBDC3_2 PBDC3_BASE.BIT._PBDC3_2
#define PBDC3_PBDC3_3 PBDC3_BASE.BIT._PBDC3_3
#define PBDC3_PBDC3_4 PBDC3_BASE.BIT._PBDC3_4
#define PBDC3_PBDC3_5 PBDC3_BASE.BIT._PBDC3_5
#define PBDC3_PBDC3_6 PBDC3_BASE.BIT._PBDC3_6
#define PBDC3_PBDC3_7 PBDC3_BASE.BIT._PBDC3_7
#define PBDC3_PBDC3_8 PBDC3_BASE.BIT._PBDC3_8
#define PBDC3_PBDC3_9 PBDC3_BASE.BIT._PBDC3_9
#define PBDC3_PBDC3_10 PBDC3_BASE.BIT._PBDC3_10
#define PBDC3_PBDC3_11 PBDC3_BASE.BIT._PBDC3_11
#define PBDC3_PBDC3_12 PBDC3_BASE.BIT._PBDC3_12
#define PBDC3_PBDC3_13 PBDC3_BASE.BIT._PBDC3_13
#define PBDC3_PBDC3_14 PBDC3_BASE.BIT._PBDC3_14
#define PBDC3_PBDC3_15 PBDC3_BASE.BIT._PBDC3_15
#define PIPC3 PIPC3_BASE.UINT16
#define PIPC3_PIPC3_0 PIPC3_BASE.BIT._PIPC3_0
#define PIPC3_PIPC3_1 PIPC3_BASE.BIT._PIPC3_1
#define PIPC3_PIPC3_2 PIPC3_BASE.BIT._PIPC3_2
#define PIPC3_PIPC3_3 PIPC3_BASE.BIT._PIPC3_3
#define PIPC3_PIPC3_4 PIPC3_BASE.BIT._PIPC3_4
#define PIPC3_PIPC3_5 PIPC3_BASE.BIT._PIPC3_5
#define PIPC3_PIPC3_6 PIPC3_BASE.BIT._PIPC3_6
#define PIPC3_PIPC3_7 PIPC3_BASE.BIT._PIPC3_7
#define PIPC3_PIPC3_8 PIPC3_BASE.BIT._PIPC3_8
#define PIPC3_PIPC3_9 PIPC3_BASE.BIT._PIPC3_9
#define PIPC3_PIPC3_10 PIPC3_BASE.BIT._PIPC3_10
#define PIPC3_PIPC3_11 PIPC3_BASE.BIT._PIPC3_11
#define PIPC3_PIPC3_12 PIPC3_BASE.BIT._PIPC3_12
#define PIPC3_PIPC3_13 PIPC3_BASE.BIT._PIPC3_13
#define PIPC3_PIPC3_14 PIPC3_BASE.BIT._PIPC3_14
#define PIPC3_PIPC3_15 PIPC3_BASE.BIT._PIPC3_15
#define PU3 PU3_BASE.UINT16
#define PU3_PU3_0 PU3_BASE.BIT._PU3_0
#define PU3_PU3_1 PU3_BASE.BIT._PU3_1
#define PU3_PU3_2 PU3_BASE.BIT._PU3_2
#define PU3_PU3_3 PU3_BASE.BIT._PU3_3
#define PU3_PU3_4 PU3_BASE.BIT._PU3_4
#define PU3_PU3_5 PU3_BASE.BIT._PU3_5
#define PU3_PU3_6 PU3_BASE.BIT._PU3_6
#define PU3_PU3_7 PU3_BASE.BIT._PU3_7
#define PU3_PU3_8 PU3_BASE.BIT._PU3_8
#define PU3_PU3_9 PU3_BASE.BIT._PU3_9
#define PU3_PU3_10 PU3_BASE.BIT._PU3_10
#define PU3_PU3_11 PU3_BASE.BIT._PU3_11
#define PU3_PU3_12 PU3_BASE.BIT._PU3_12
#define PU3_PU3_13 PU3_BASE.BIT._PU3_13
#define PU3_PU3_14 PU3_BASE.BIT._PU3_14
#define PU3_PU3_15 PU3_BASE.BIT._PU3_15
#define PD3 PD3_BASE.UINT16
#define PD3_PD3_0 PD3_BASE.BIT._PD3_0
#define PD3_PD3_1 PD3_BASE.BIT._PD3_1
#define PD3_PD3_2 PD3_BASE.BIT._PD3_2
#define PD3_PD3_3 PD3_BASE.BIT._PD3_3
#define PD3_PD3_4 PD3_BASE.BIT._PD3_4
#define PD3_PD3_5 PD3_BASE.BIT._PD3_5
#define PD3_PD3_6 PD3_BASE.BIT._PD3_6
#define PD3_PD3_7 PD3_BASE.BIT._PD3_7
#define PD3_PD3_8 PD3_BASE.BIT._PD3_8
#define PD3_PD3_9 PD3_BASE.BIT._PD3_9
#define PD3_PD3_10 PD3_BASE.BIT._PD3_10
#define PD3_PD3_11 PD3_BASE.BIT._PD3_11
#define PD3_PD3_12 PD3_BASE.BIT._PD3_12
#define PD3_PD3_13 PD3_BASE.BIT._PD3_13
#define PD3_PD3_14 PD3_BASE.BIT._PD3_14
#define PD3_PD3_15 PD3_BASE.BIT._PD3_15
#define PODC3 PODC3_BASE.UINT32
#define PODC3_PODC3_0 PODC3_BASE.BIT._PODC3_0
#define PODC3_PODC3_1 PODC3_BASE.BIT._PODC3_1
#define PODC3_PODC3_2 PODC3_BASE.BIT._PODC3_2
#define PODC3_PODC3_3 PODC3_BASE.BIT._PODC3_3
#define PODC3_PODC3_4 PODC3_BASE.BIT._PODC3_4
#define PODC3_PODC3_5 PODC3_BASE.BIT._PODC3_5
#define PODC3_PODC3_6 PODC3_BASE.BIT._PODC3_6
#define PODC3_PODC3_7 PODC3_BASE.BIT._PODC3_7
#define PODC3_PODC3_8 PODC3_BASE.BIT._PODC3_8
#define PODC3_PODC3_9 PODC3_BASE.BIT._PODC3_9
#define PODC3_PODC3_10 PODC3_BASE.BIT._PODC3_10
#define PODC3_PODC3_11 PODC3_BASE.BIT._PODC3_11
#define PODC3_PODC3_12 PODC3_BASE.BIT._PODC3_12
#define PODC3_PODC3_13 PODC3_BASE.BIT._PODC3_13
#define PODC3_PODC3_14 PODC3_BASE.BIT._PODC3_14
#define PODC3_PODC3_15 PODC3_BASE.BIT._PODC3_15
#define PDSC3 PDSC3_BASE.UINT32
#define PDSC3_PDSC3_0 PDSC3_BASE.BIT._PDSC3_0
#define PDSC3_PDSC3_1 PDSC3_BASE.BIT._PDSC3_1
#define PDSC3_PDSC3_2 PDSC3_BASE.BIT._PDSC3_2
#define PDSC3_PDSC3_3 PDSC3_BASE.BIT._PDSC3_3
#define PDSC3_PDSC3_4 PDSC3_BASE.BIT._PDSC3_4
#define PDSC3_PDSC3_5 PDSC3_BASE.BIT._PDSC3_5
#define PDSC3_PDSC3_6 PDSC3_BASE.BIT._PDSC3_6
#define PDSC3_PDSC3_7 PDSC3_BASE.BIT._PDSC3_7
#define PDSC3_PDSC3_8 PDSC3_BASE.BIT._PDSC3_8
#define PDSC3_PDSC3_9 PDSC3_BASE.BIT._PDSC3_9
#define PDSC3_PDSC3_10 PDSC3_BASE.BIT._PDSC3_10
#define PDSC3_PDSC3_11 PDSC3_BASE.BIT._PDSC3_11
#define PDSC3_PDSC3_12 PDSC3_BASE.BIT._PDSC3_12
#define PDSC3_PDSC3_13 PDSC3_BASE.BIT._PDSC3_13
#define PDSC3_PDSC3_14 PDSC3_BASE.BIT._PDSC3_14
#define PDSC3_PDSC3_15 PDSC3_BASE.BIT._PDSC3_15
#define PIS3 PIS3_BASE.UINT16
#define PIS3_PIS3_0 PIS3_BASE.BIT._PIS3_0
#define PIS3_PIS3_1 PIS3_BASE.BIT._PIS3_1
#define PIS3_PIS3_2 PIS3_BASE.BIT._PIS3_2
#define PIS3_PIS3_3 PIS3_BASE.BIT._PIS3_3
#define PIS3_PIS3_4 PIS3_BASE.BIT._PIS3_4
#define PIS3_PIS3_5 PIS3_BASE.BIT._PIS3_5
#define PIS3_PIS3_6 PIS3_BASE.BIT._PIS3_6
#define PIS3_PIS3_7 PIS3_BASE.BIT._PIS3_7
#define PIS3_PIS3_8 PIS3_BASE.BIT._PIS3_8
#define PIS3_PIS3_9 PIS3_BASE.BIT._PIS3_9
#define PIS3_PIS3_10 PIS3_BASE.BIT._PIS3_10
#define PIS3_PIS3_11 PIS3_BASE.BIT._PIS3_11
#define PIS3_PIS3_12 PIS3_BASE.BIT._PIS3_12
#define PIS3_PIS3_13 PIS3_BASE.BIT._PIS3_13
#define PIS3_PIS3_14 PIS3_BASE.BIT._PIS3_14
#define PIS3_PIS3_15 PIS3_BASE.BIT._PIS3_15
#define PUCC3 PUCC3_BASE.UINT32
#define PUCC3_PUCC3_0 PUCC3_BASE.BIT._PUCC3_0
#define PUCC3_PUCC3_1 PUCC3_BASE.BIT._PUCC3_1
#define PUCC3_PUCC3_2 PUCC3_BASE.BIT._PUCC3_2
#define PUCC3_PUCC3_3 PUCC3_BASE.BIT._PUCC3_3
#define PUCC3_PUCC3_4 PUCC3_BASE.BIT._PUCC3_4
#define PUCC3_PUCC3_5 PUCC3_BASE.BIT._PUCC3_5
#define PUCC3_PUCC3_6 PUCC3_BASE.BIT._PUCC3_6
#define PUCC3_PUCC3_7 PUCC3_BASE.BIT._PUCC3_7
#define PUCC3_PUCC3_8 PUCC3_BASE.BIT._PUCC3_8
#define PUCC3_PUCC3_9 PUCC3_BASE.BIT._PUCC3_9
#define PUCC3_PUCC3_10 PUCC3_BASE.BIT._PUCC3_10
#define PUCC3_PUCC3_11 PUCC3_BASE.BIT._PUCC3_11
#define PUCC3_PUCC3_12 PUCC3_BASE.BIT._PUCC3_12
#define PUCC3_PUCC3_13 PUCC3_BASE.BIT._PUCC3_13
#define PUCC3_PUCC3_14 PUCC3_BASE.BIT._PUCC3_14
#define PUCC3_PUCC3_15 PUCC3_BASE.BIT._PUCC3_15
#define PODCE3 PODCE3_BASE.UINT32
#define PODCE3_PODCE3_0 PODCE3_BASE.BIT._PODCE3_0
#define PODCE3_PODCE3_1 PODCE3_BASE.BIT._PODCE3_1
#define PODCE3_PODCE3_2 PODCE3_BASE.BIT._PODCE3_2
#define PODCE3_PODCE3_3 PODCE3_BASE.BIT._PODCE3_3
#define PODCE3_PODCE3_4 PODCE3_BASE.BIT._PODCE3_4
#define PODCE3_PODCE3_5 PODCE3_BASE.BIT._PODCE3_5
#define PODCE3_PODCE3_6 PODCE3_BASE.BIT._PODCE3_6
#define PODCE3_PODCE3_7 PODCE3_BASE.BIT._PODCE3_7
#define PODCE3_PODCE3_8 PODCE3_BASE.BIT._PODCE3_8
#define PODCE3_PODCE3_9 PODCE3_BASE.BIT._PODCE3_9
#define PODCE3_PODCE3_10 PODCE3_BASE.BIT._PODCE3_10
#define PODCE3_PODCE3_11 PODCE3_BASE.BIT._PODCE3_11
#define PODCE3_PODCE3_12 PODCE3_BASE.BIT._PODCE3_12
#define PODCE3_PODCE3_13 PODCE3_BASE.BIT._PODCE3_13
#define PODCE3_PODCE3_14 PODCE3_BASE.BIT._PODCE3_14
#define PODCE3_PODCE3_15 PODCE3_BASE.BIT._PODCE3_15
#define PIBC4 PIBC4_BASE.UINT16
#define PIBC4_PIBC4_0 PIBC4_BASE.BIT._PIBC4_0
#define PIBC4_PIBC4_1 PIBC4_BASE.BIT._PIBC4_1
#define PIBC4_PIBC4_2 PIBC4_BASE.BIT._PIBC4_2
#define PIBC4_PIBC4_3 PIBC4_BASE.BIT._PIBC4_3
#define PIBC4_PIBC4_4 PIBC4_BASE.BIT._PIBC4_4
#define PIBC4_PIBC4_5 PIBC4_BASE.BIT._PIBC4_5
#define PIBC4_PIBC4_6 PIBC4_BASE.BIT._PIBC4_6
#define PIBC4_PIBC4_7 PIBC4_BASE.BIT._PIBC4_7
#define PIBC4_PIBC4_8 PIBC4_BASE.BIT._PIBC4_8
#define PIBC4_PIBC4_9 PIBC4_BASE.BIT._PIBC4_9
#define PIBC4_PIBC4_10 PIBC4_BASE.BIT._PIBC4_10
#define PIBC4_PIBC4_11 PIBC4_BASE.BIT._PIBC4_11
#define PIBC4_PIBC4_12 PIBC4_BASE.BIT._PIBC4_12
#define PIBC4_PIBC4_13 PIBC4_BASE.BIT._PIBC4_13
#define PIBC4_PIBC4_14 PIBC4_BASE.BIT._PIBC4_14
#define PIBC4_PIBC4_15 PIBC4_BASE.BIT._PIBC4_15
#define PBDC4 PBDC4_BASE.UINT16
#define PBDC4_PBDC4_0 PBDC4_BASE.BIT._PBDC4_0
#define PBDC4_PBDC4_1 PBDC4_BASE.BIT._PBDC4_1
#define PBDC4_PBDC4_2 PBDC4_BASE.BIT._PBDC4_2
#define PBDC4_PBDC4_3 PBDC4_BASE.BIT._PBDC4_3
#define PBDC4_PBDC4_4 PBDC4_BASE.BIT._PBDC4_4
#define PBDC4_PBDC4_5 PBDC4_BASE.BIT._PBDC4_5
#define PBDC4_PBDC4_6 PBDC4_BASE.BIT._PBDC4_6
#define PBDC4_PBDC4_7 PBDC4_BASE.BIT._PBDC4_7
#define PBDC4_PBDC4_8 PBDC4_BASE.BIT._PBDC4_8
#define PBDC4_PBDC4_9 PBDC4_BASE.BIT._PBDC4_9
#define PBDC4_PBDC4_10 PBDC4_BASE.BIT._PBDC4_10
#define PBDC4_PBDC4_11 PBDC4_BASE.BIT._PBDC4_11
#define PBDC4_PBDC4_12 PBDC4_BASE.BIT._PBDC4_12
#define PBDC4_PBDC4_13 PBDC4_BASE.BIT._PBDC4_13
#define PBDC4_PBDC4_14 PBDC4_BASE.BIT._PBDC4_14
#define PBDC4_PBDC4_15 PBDC4_BASE.BIT._PBDC4_15
#define PIPC4 PIPC4_BASE.UINT16
#define PIPC4_PIPC4_0 PIPC4_BASE.BIT._PIPC4_0
#define PIPC4_PIPC4_1 PIPC4_BASE.BIT._PIPC4_1
#define PIPC4_PIPC4_2 PIPC4_BASE.BIT._PIPC4_2
#define PIPC4_PIPC4_3 PIPC4_BASE.BIT._PIPC4_3
#define PIPC4_PIPC4_4 PIPC4_BASE.BIT._PIPC4_4
#define PIPC4_PIPC4_5 PIPC4_BASE.BIT._PIPC4_5
#define PIPC4_PIPC4_6 PIPC4_BASE.BIT._PIPC4_6
#define PIPC4_PIPC4_7 PIPC4_BASE.BIT._PIPC4_7
#define PIPC4_PIPC4_8 PIPC4_BASE.BIT._PIPC4_8
#define PIPC4_PIPC4_9 PIPC4_BASE.BIT._PIPC4_9
#define PIPC4_PIPC4_10 PIPC4_BASE.BIT._PIPC4_10
#define PIPC4_PIPC4_11 PIPC4_BASE.BIT._PIPC4_11
#define PIPC4_PIPC4_12 PIPC4_BASE.BIT._PIPC4_12
#define PIPC4_PIPC4_13 PIPC4_BASE.BIT._PIPC4_13
#define PIPC4_PIPC4_14 PIPC4_BASE.BIT._PIPC4_14
#define PIPC4_PIPC4_15 PIPC4_BASE.BIT._PIPC4_15
#define PU4 PU4_BASE.UINT16
#define PU4_PU4_0 PU4_BASE.BIT._PU4_0
#define PU4_PU4_1 PU4_BASE.BIT._PU4_1
#define PU4_PU4_2 PU4_BASE.BIT._PU4_2
#define PU4_PU4_3 PU4_BASE.BIT._PU4_3
#define PU4_PU4_4 PU4_BASE.BIT._PU4_4
#define PU4_PU4_5 PU4_BASE.BIT._PU4_5
#define PU4_PU4_6 PU4_BASE.BIT._PU4_6
#define PU4_PU4_7 PU4_BASE.BIT._PU4_7
#define PU4_PU4_8 PU4_BASE.BIT._PU4_8
#define PU4_PU4_9 PU4_BASE.BIT._PU4_9
#define PU4_PU4_10 PU4_BASE.BIT._PU4_10
#define PU4_PU4_11 PU4_BASE.BIT._PU4_11
#define PU4_PU4_12 PU4_BASE.BIT._PU4_12
#define PU4_PU4_13 PU4_BASE.BIT._PU4_13
#define PU4_PU4_14 PU4_BASE.BIT._PU4_14
#define PU4_PU4_15 PU4_BASE.BIT._PU4_15
#define PD4 PD4_BASE.UINT16
#define PD4_PD4_0 PD4_BASE.BIT._PD4_0
#define PD4_PD4_1 PD4_BASE.BIT._PD4_1
#define PD4_PD4_2 PD4_BASE.BIT._PD4_2
#define PD4_PD4_3 PD4_BASE.BIT._PD4_3
#define PD4_PD4_4 PD4_BASE.BIT._PD4_4
#define PD4_PD4_5 PD4_BASE.BIT._PD4_5
#define PD4_PD4_6 PD4_BASE.BIT._PD4_6
#define PD4_PD4_7 PD4_BASE.BIT._PD4_7
#define PD4_PD4_8 PD4_BASE.BIT._PD4_8
#define PD4_PD4_9 PD4_BASE.BIT._PD4_9
#define PD4_PD4_10 PD4_BASE.BIT._PD4_10
#define PD4_PD4_11 PD4_BASE.BIT._PD4_11
#define PD4_PD4_12 PD4_BASE.BIT._PD4_12
#define PD4_PD4_13 PD4_BASE.BIT._PD4_13
#define PD4_PD4_14 PD4_BASE.BIT._PD4_14
#define PD4_PD4_15 PD4_BASE.BIT._PD4_15
#define PODC4 PODC4_BASE.UINT32
#define PODC4_PODC4_0 PODC4_BASE.BIT._PODC4_0
#define PODC4_PODC4_1 PODC4_BASE.BIT._PODC4_1
#define PODC4_PODC4_2 PODC4_BASE.BIT._PODC4_2
#define PODC4_PODC4_3 PODC4_BASE.BIT._PODC4_3
#define PODC4_PODC4_4 PODC4_BASE.BIT._PODC4_4
#define PODC4_PODC4_5 PODC4_BASE.BIT._PODC4_5
#define PODC4_PODC4_6 PODC4_BASE.BIT._PODC4_6
#define PODC4_PODC4_7 PODC4_BASE.BIT._PODC4_7
#define PODC4_PODC4_8 PODC4_BASE.BIT._PODC4_8
#define PODC4_PODC4_9 PODC4_BASE.BIT._PODC4_9
#define PODC4_PODC4_10 PODC4_BASE.BIT._PODC4_10
#define PODC4_PODC4_11 PODC4_BASE.BIT._PODC4_11
#define PODC4_PODC4_12 PODC4_BASE.BIT._PODC4_12
#define PODC4_PODC4_13 PODC4_BASE.BIT._PODC4_13
#define PODC4_PODC4_14 PODC4_BASE.BIT._PODC4_14
#define PODC4_PODC4_15 PODC4_BASE.BIT._PODC4_15
#define PDSC4 PDSC4_BASE.UINT32
#define PDSC4_PDSC4_0 PDSC4_BASE.BIT._PDSC4_0
#define PDSC4_PDSC4_1 PDSC4_BASE.BIT._PDSC4_1
#define PDSC4_PDSC4_2 PDSC4_BASE.BIT._PDSC4_2
#define PDSC4_PDSC4_3 PDSC4_BASE.BIT._PDSC4_3
#define PDSC4_PDSC4_4 PDSC4_BASE.BIT._PDSC4_4
#define PDSC4_PDSC4_5 PDSC4_BASE.BIT._PDSC4_5
#define PDSC4_PDSC4_6 PDSC4_BASE.BIT._PDSC4_6
#define PDSC4_PDSC4_7 PDSC4_BASE.BIT._PDSC4_7
#define PDSC4_PDSC4_8 PDSC4_BASE.BIT._PDSC4_8
#define PDSC4_PDSC4_9 PDSC4_BASE.BIT._PDSC4_9
#define PDSC4_PDSC4_10 PDSC4_BASE.BIT._PDSC4_10
#define PDSC4_PDSC4_11 PDSC4_BASE.BIT._PDSC4_11
#define PDSC4_PDSC4_12 PDSC4_BASE.BIT._PDSC4_12
#define PDSC4_PDSC4_13 PDSC4_BASE.BIT._PDSC4_13
#define PDSC4_PDSC4_14 PDSC4_BASE.BIT._PDSC4_14
#define PDSC4_PDSC4_15 PDSC4_BASE.BIT._PDSC4_15
#define PIS4 PIS4_BASE.UINT16
#define PIS4_PIS4_0 PIS4_BASE.BIT._PIS4_0
#define PIS4_PIS4_1 PIS4_BASE.BIT._PIS4_1
#define PIS4_PIS4_2 PIS4_BASE.BIT._PIS4_2
#define PIS4_PIS4_3 PIS4_BASE.BIT._PIS4_3
#define PIS4_PIS4_4 PIS4_BASE.BIT._PIS4_4
#define PIS4_PIS4_5 PIS4_BASE.BIT._PIS4_5
#define PIS4_PIS4_6 PIS4_BASE.BIT._PIS4_6
#define PIS4_PIS4_7 PIS4_BASE.BIT._PIS4_7
#define PIS4_PIS4_8 PIS4_BASE.BIT._PIS4_8
#define PIS4_PIS4_9 PIS4_BASE.BIT._PIS4_9
#define PIS4_PIS4_10 PIS4_BASE.BIT._PIS4_10
#define PIS4_PIS4_11 PIS4_BASE.BIT._PIS4_11
#define PIS4_PIS4_12 PIS4_BASE.BIT._PIS4_12
#define PIS4_PIS4_13 PIS4_BASE.BIT._PIS4_13
#define PIS4_PIS4_14 PIS4_BASE.BIT._PIS4_14
#define PIS4_PIS4_15 PIS4_BASE.BIT._PIS4_15
#define PUCC4 PUCC4_BASE.UINT32
#define PUCC4_PUCC4_0 PUCC4_BASE.BIT._PUCC4_0
#define PUCC4_PUCC4_1 PUCC4_BASE.BIT._PUCC4_1
#define PUCC4_PUCC4_2 PUCC4_BASE.BIT._PUCC4_2
#define PUCC4_PUCC4_3 PUCC4_BASE.BIT._PUCC4_3
#define PUCC4_PUCC4_4 PUCC4_BASE.BIT._PUCC4_4
#define PUCC4_PUCC4_5 PUCC4_BASE.BIT._PUCC4_5
#define PUCC4_PUCC4_6 PUCC4_BASE.BIT._PUCC4_6
#define PUCC4_PUCC4_7 PUCC4_BASE.BIT._PUCC4_7
#define PUCC4_PUCC4_8 PUCC4_BASE.BIT._PUCC4_8
#define PUCC4_PUCC4_9 PUCC4_BASE.BIT._PUCC4_9
#define PUCC4_PUCC4_10 PUCC4_BASE.BIT._PUCC4_10
#define PUCC4_PUCC4_11 PUCC4_BASE.BIT._PUCC4_11
#define PUCC4_PUCC4_12 PUCC4_BASE.BIT._PUCC4_12
#define PUCC4_PUCC4_13 PUCC4_BASE.BIT._PUCC4_13
#define PUCC4_PUCC4_14 PUCC4_BASE.BIT._PUCC4_14
#define PUCC4_PUCC4_15 PUCC4_BASE.BIT._PUCC4_15
#define PODCE4 PODCE4_BASE.UINT32
#define PODCE4_PODCE4_0 PODCE4_BASE.BIT._PODCE4_0
#define PODCE4_PODCE4_1 PODCE4_BASE.BIT._PODCE4_1
#define PODCE4_PODCE4_2 PODCE4_BASE.BIT._PODCE4_2
#define PODCE4_PODCE4_3 PODCE4_BASE.BIT._PODCE4_3
#define PODCE4_PODCE4_4 PODCE4_BASE.BIT._PODCE4_4
#define PODCE4_PODCE4_5 PODCE4_BASE.BIT._PODCE4_5
#define PODCE4_PODCE4_6 PODCE4_BASE.BIT._PODCE4_6
#define PODCE4_PODCE4_7 PODCE4_BASE.BIT._PODCE4_7
#define PODCE4_PODCE4_8 PODCE4_BASE.BIT._PODCE4_8
#define PODCE4_PODCE4_9 PODCE4_BASE.BIT._PODCE4_9
#define PODCE4_PODCE4_10 PODCE4_BASE.BIT._PODCE4_10
#define PODCE4_PODCE4_11 PODCE4_BASE.BIT._PODCE4_11
#define PODCE4_PODCE4_12 PODCE4_BASE.BIT._PODCE4_12
#define PODCE4_PODCE4_13 PODCE4_BASE.BIT._PODCE4_13
#define PODCE4_PODCE4_14 PODCE4_BASE.BIT._PODCE4_14
#define PODCE4_PODCE4_15 PODCE4_BASE.BIT._PODCE4_15
#define PIBC5 PIBC5_BASE.UINT16
#define PIBC5_PIBC5_0 PIBC5_BASE.BIT._PIBC5_0
#define PIBC5_PIBC5_1 PIBC5_BASE.BIT._PIBC5_1
#define PIBC5_PIBC5_2 PIBC5_BASE.BIT._PIBC5_2
#define PIBC5_PIBC5_3 PIBC5_BASE.BIT._PIBC5_3
#define PIBC5_PIBC5_4 PIBC5_BASE.BIT._PIBC5_4
#define PIBC5_PIBC5_5 PIBC5_BASE.BIT._PIBC5_5
#define PIBC5_PIBC5_6 PIBC5_BASE.BIT._PIBC5_6
#define PIBC5_PIBC5_7 PIBC5_BASE.BIT._PIBC5_7
#define PIBC5_PIBC5_8 PIBC5_BASE.BIT._PIBC5_8
#define PIBC5_PIBC5_9 PIBC5_BASE.BIT._PIBC5_9
#define PIBC5_PIBC5_10 PIBC5_BASE.BIT._PIBC5_10
#define PIBC5_PIBC5_11 PIBC5_BASE.BIT._PIBC5_11
#define PIBC5_PIBC5_12 PIBC5_BASE.BIT._PIBC5_12
#define PIBC5_PIBC5_13 PIBC5_BASE.BIT._PIBC5_13
#define PIBC5_PIBC5_14 PIBC5_BASE.BIT._PIBC5_14
#define PIBC5_PIBC5_15 PIBC5_BASE.BIT._PIBC5_15
#define PBDC5 PBDC5_BASE.UINT16
#define PBDC5_PBDC5_0 PBDC5_BASE.BIT._PBDC5_0
#define PBDC5_PBDC5_1 PBDC5_BASE.BIT._PBDC5_1
#define PBDC5_PBDC5_2 PBDC5_BASE.BIT._PBDC5_2
#define PBDC5_PBDC5_3 PBDC5_BASE.BIT._PBDC5_3
#define PBDC5_PBDC5_4 PBDC5_BASE.BIT._PBDC5_4
#define PBDC5_PBDC5_5 PBDC5_BASE.BIT._PBDC5_5
#define PBDC5_PBDC5_6 PBDC5_BASE.BIT._PBDC5_6
#define PBDC5_PBDC5_7 PBDC5_BASE.BIT._PBDC5_7
#define PBDC5_PBDC5_8 PBDC5_BASE.BIT._PBDC5_8
#define PBDC5_PBDC5_9 PBDC5_BASE.BIT._PBDC5_9
#define PBDC5_PBDC5_10 PBDC5_BASE.BIT._PBDC5_10
#define PBDC5_PBDC5_11 PBDC5_BASE.BIT._PBDC5_11
#define PBDC5_PBDC5_12 PBDC5_BASE.BIT._PBDC5_12
#define PBDC5_PBDC5_13 PBDC5_BASE.BIT._PBDC5_13
#define PBDC5_PBDC5_14 PBDC5_BASE.BIT._PBDC5_14
#define PBDC5_PBDC5_15 PBDC5_BASE.BIT._PBDC5_15
#define PIPC5 PIPC5_BASE.UINT16
#define PIPC5_PIPC5_0 PIPC5_BASE.BIT._PIPC5_0
#define PIPC5_PIPC5_1 PIPC5_BASE.BIT._PIPC5_1
#define PIPC5_PIPC5_2 PIPC5_BASE.BIT._PIPC5_2
#define PIPC5_PIPC5_3 PIPC5_BASE.BIT._PIPC5_3
#define PIPC5_PIPC5_4 PIPC5_BASE.BIT._PIPC5_4
#define PIPC5_PIPC5_5 PIPC5_BASE.BIT._PIPC5_5
#define PIPC5_PIPC5_6 PIPC5_BASE.BIT._PIPC5_6
#define PIPC5_PIPC5_7 PIPC5_BASE.BIT._PIPC5_7
#define PIPC5_PIPC5_8 PIPC5_BASE.BIT._PIPC5_8
#define PIPC5_PIPC5_9 PIPC5_BASE.BIT._PIPC5_9
#define PIPC5_PIPC5_10 PIPC5_BASE.BIT._PIPC5_10
#define PIPC5_PIPC5_11 PIPC5_BASE.BIT._PIPC5_11
#define PIPC5_PIPC5_12 PIPC5_BASE.BIT._PIPC5_12
#define PIPC5_PIPC5_13 PIPC5_BASE.BIT._PIPC5_13
#define PIPC5_PIPC5_14 PIPC5_BASE.BIT._PIPC5_14
#define PIPC5_PIPC5_15 PIPC5_BASE.BIT._PIPC5_15
#define PU5 PU5_BASE.UINT16
#define PU5_PU5_0 PU5_BASE.BIT._PU5_0
#define PU5_PU5_1 PU5_BASE.BIT._PU5_1
#define PU5_PU5_2 PU5_BASE.BIT._PU5_2
#define PU5_PU5_3 PU5_BASE.BIT._PU5_3
#define PU5_PU5_4 PU5_BASE.BIT._PU5_4
#define PU5_PU5_5 PU5_BASE.BIT._PU5_5
#define PU5_PU5_6 PU5_BASE.BIT._PU5_6
#define PU5_PU5_7 PU5_BASE.BIT._PU5_7
#define PU5_PU5_8 PU5_BASE.BIT._PU5_8
#define PU5_PU5_9 PU5_BASE.BIT._PU5_9
#define PU5_PU5_10 PU5_BASE.BIT._PU5_10
#define PU5_PU5_11 PU5_BASE.BIT._PU5_11
#define PU5_PU5_12 PU5_BASE.BIT._PU5_12
#define PU5_PU5_13 PU5_BASE.BIT._PU5_13
#define PU5_PU5_14 PU5_BASE.BIT._PU5_14
#define PU5_PU5_15 PU5_BASE.BIT._PU5_15
#define PD5 PD5_BASE.UINT16
#define PD5_PD5_0 PD5_BASE.BIT._PD5_0
#define PD5_PD5_1 PD5_BASE.BIT._PD5_1
#define PD5_PD5_2 PD5_BASE.BIT._PD5_2
#define PD5_PD5_3 PD5_BASE.BIT._PD5_3
#define PD5_PD5_4 PD5_BASE.BIT._PD5_4
#define PD5_PD5_5 PD5_BASE.BIT._PD5_5
#define PD5_PD5_6 PD5_BASE.BIT._PD5_6
#define PD5_PD5_7 PD5_BASE.BIT._PD5_7
#define PD5_PD5_8 PD5_BASE.BIT._PD5_8
#define PD5_PD5_9 PD5_BASE.BIT._PD5_9
#define PD5_PD5_10 PD5_BASE.BIT._PD5_10
#define PD5_PD5_11 PD5_BASE.BIT._PD5_11
#define PD5_PD5_12 PD5_BASE.BIT._PD5_12
#define PD5_PD5_13 PD5_BASE.BIT._PD5_13
#define PD5_PD5_14 PD5_BASE.BIT._PD5_14
#define PD5_PD5_15 PD5_BASE.BIT._PD5_15
#define PODC5 PODC5_BASE.UINT32
#define PODC5_PODC5_0 PODC5_BASE.BIT._PODC5_0
#define PODC5_PODC5_1 PODC5_BASE.BIT._PODC5_1
#define PODC5_PODC5_2 PODC5_BASE.BIT._PODC5_2
#define PODC5_PODC5_3 PODC5_BASE.BIT._PODC5_3
#define PODC5_PODC5_4 PODC5_BASE.BIT._PODC5_4
#define PODC5_PODC5_5 PODC5_BASE.BIT._PODC5_5
#define PODC5_PODC5_6 PODC5_BASE.BIT._PODC5_6
#define PODC5_PODC5_7 PODC5_BASE.BIT._PODC5_7
#define PODC5_PODC5_8 PODC5_BASE.BIT._PODC5_8
#define PODC5_PODC5_9 PODC5_BASE.BIT._PODC5_9
#define PODC5_PODC5_10 PODC5_BASE.BIT._PODC5_10
#define PODC5_PODC5_11 PODC5_BASE.BIT._PODC5_11
#define PODC5_PODC5_12 PODC5_BASE.BIT._PODC5_12
#define PODC5_PODC5_13 PODC5_BASE.BIT._PODC5_13
#define PODC5_PODC5_14 PODC5_BASE.BIT._PODC5_14
#define PODC5_PODC5_15 PODC5_BASE.BIT._PODC5_15
#define PDSC5 PDSC5_BASE.UINT32
#define PDSC5_PDSC5_0 PDSC5_BASE.BIT._PDSC5_0
#define PDSC5_PDSC5_1 PDSC5_BASE.BIT._PDSC5_1
#define PDSC5_PDSC5_2 PDSC5_BASE.BIT._PDSC5_2
#define PDSC5_PDSC5_3 PDSC5_BASE.BIT._PDSC5_3
#define PDSC5_PDSC5_4 PDSC5_BASE.BIT._PDSC5_4
#define PDSC5_PDSC5_5 PDSC5_BASE.BIT._PDSC5_5
#define PDSC5_PDSC5_6 PDSC5_BASE.BIT._PDSC5_6
#define PDSC5_PDSC5_7 PDSC5_BASE.BIT._PDSC5_7
#define PDSC5_PDSC5_8 PDSC5_BASE.BIT._PDSC5_8
#define PDSC5_PDSC5_9 PDSC5_BASE.BIT._PDSC5_9
#define PDSC5_PDSC5_10 PDSC5_BASE.BIT._PDSC5_10
#define PDSC5_PDSC5_11 PDSC5_BASE.BIT._PDSC5_11
#define PDSC5_PDSC5_12 PDSC5_BASE.BIT._PDSC5_12
#define PDSC5_PDSC5_13 PDSC5_BASE.BIT._PDSC5_13
#define PDSC5_PDSC5_14 PDSC5_BASE.BIT._PDSC5_14
#define PDSC5_PDSC5_15 PDSC5_BASE.BIT._PDSC5_15
#define PIS5 PIS5_BASE.UINT16
#define PIS5_PIS5_0 PIS5_BASE.BIT._PIS5_0
#define PIS5_PIS5_1 PIS5_BASE.BIT._PIS5_1
#define PIS5_PIS5_2 PIS5_BASE.BIT._PIS5_2
#define PIS5_PIS5_3 PIS5_BASE.BIT._PIS5_3
#define PIS5_PIS5_4 PIS5_BASE.BIT._PIS5_4
#define PIS5_PIS5_5 PIS5_BASE.BIT._PIS5_5
#define PIS5_PIS5_6 PIS5_BASE.BIT._PIS5_6
#define PIS5_PIS5_7 PIS5_BASE.BIT._PIS5_7
#define PIS5_PIS5_8 PIS5_BASE.BIT._PIS5_8
#define PIS5_PIS5_9 PIS5_BASE.BIT._PIS5_9
#define PIS5_PIS5_10 PIS5_BASE.BIT._PIS5_10
#define PIS5_PIS5_11 PIS5_BASE.BIT._PIS5_11
#define PIS5_PIS5_12 PIS5_BASE.BIT._PIS5_12
#define PIS5_PIS5_13 PIS5_BASE.BIT._PIS5_13
#define PIS5_PIS5_14 PIS5_BASE.BIT._PIS5_14
#define PIS5_PIS5_15 PIS5_BASE.BIT._PIS5_15
#define PUCC5 PUCC5_BASE.UINT32
#define PUCC5_PUCC5_0 PUCC5_BASE.BIT._PUCC5_0
#define PUCC5_PUCC5_1 PUCC5_BASE.BIT._PUCC5_1
#define PUCC5_PUCC5_2 PUCC5_BASE.BIT._PUCC5_2
#define PUCC5_PUCC5_3 PUCC5_BASE.BIT._PUCC5_3
#define PUCC5_PUCC5_4 PUCC5_BASE.BIT._PUCC5_4
#define PUCC5_PUCC5_5 PUCC5_BASE.BIT._PUCC5_5
#define PUCC5_PUCC5_6 PUCC5_BASE.BIT._PUCC5_6
#define PUCC5_PUCC5_7 PUCC5_BASE.BIT._PUCC5_7
#define PUCC5_PUCC5_8 PUCC5_BASE.BIT._PUCC5_8
#define PUCC5_PUCC5_9 PUCC5_BASE.BIT._PUCC5_9
#define PUCC5_PUCC5_10 PUCC5_BASE.BIT._PUCC5_10
#define PUCC5_PUCC5_11 PUCC5_BASE.BIT._PUCC5_11
#define PUCC5_PUCC5_12 PUCC5_BASE.BIT._PUCC5_12
#define PUCC5_PUCC5_13 PUCC5_BASE.BIT._PUCC5_13
#define PUCC5_PUCC5_14 PUCC5_BASE.BIT._PUCC5_14
#define PUCC5_PUCC5_15 PUCC5_BASE.BIT._PUCC5_15
#define PODCE5 PODCE5_BASE.UINT32
#define PODCE5_PODCE5_0 PODCE5_BASE.BIT._PODCE5_0
#define PODCE5_PODCE5_1 PODCE5_BASE.BIT._PODCE5_1
#define PODCE5_PODCE5_2 PODCE5_BASE.BIT._PODCE5_2
#define PODCE5_PODCE5_3 PODCE5_BASE.BIT._PODCE5_3
#define PODCE5_PODCE5_4 PODCE5_BASE.BIT._PODCE5_4
#define PODCE5_PODCE5_5 PODCE5_BASE.BIT._PODCE5_5
#define PODCE5_PODCE5_6 PODCE5_BASE.BIT._PODCE5_6
#define PODCE5_PODCE5_7 PODCE5_BASE.BIT._PODCE5_7
#define PODCE5_PODCE5_8 PODCE5_BASE.BIT._PODCE5_8
#define PODCE5_PODCE5_9 PODCE5_BASE.BIT._PODCE5_9
#define PODCE5_PODCE5_10 PODCE5_BASE.BIT._PODCE5_10
#define PODCE5_PODCE5_11 PODCE5_BASE.BIT._PODCE5_11
#define PODCE5_PODCE5_12 PODCE5_BASE.BIT._PODCE5_12
#define PODCE5_PODCE5_13 PODCE5_BASE.BIT._PODCE5_13
#define PODCE5_PODCE5_14 PODCE5_BASE.BIT._PODCE5_14
#define PODCE5_PODCE5_15 PODCE5_BASE.BIT._PODCE5_15
#define PIBC6 PIBC6_BASE.UINT16
#define PIBC6_PIBC6_0 PIBC6_BASE.BIT._PIBC6_0
#define PIBC6_PIBC6_1 PIBC6_BASE.BIT._PIBC6_1
#define PIBC6_PIBC6_2 PIBC6_BASE.BIT._PIBC6_2
#define PIBC6_PIBC6_3 PIBC6_BASE.BIT._PIBC6_3
#define PIBC6_PIBC6_4 PIBC6_BASE.BIT._PIBC6_4
#define PIBC6_PIBC6_5 PIBC6_BASE.BIT._PIBC6_5
#define PIBC6_PIBC6_6 PIBC6_BASE.BIT._PIBC6_6
#define PIBC6_PIBC6_7 PIBC6_BASE.BIT._PIBC6_7
#define PIBC6_PIBC6_8 PIBC6_BASE.BIT._PIBC6_8
#define PIBC6_PIBC6_9 PIBC6_BASE.BIT._PIBC6_9
#define PIBC6_PIBC6_10 PIBC6_BASE.BIT._PIBC6_10
#define PIBC6_PIBC6_11 PIBC6_BASE.BIT._PIBC6_11
#define PIBC6_PIBC6_12 PIBC6_BASE.BIT._PIBC6_12
#define PIBC6_PIBC6_13 PIBC6_BASE.BIT._PIBC6_13
#define PIBC6_PIBC6_14 PIBC6_BASE.BIT._PIBC6_14
#define PIBC6_PIBC6_15 PIBC6_BASE.BIT._PIBC6_15
#define PBDC6 PBDC6_BASE.UINT16
#define PBDC6_PBDC6_0 PBDC6_BASE.BIT._PBDC6_0
#define PBDC6_PBDC6_1 PBDC6_BASE.BIT._PBDC6_1
#define PBDC6_PBDC6_2 PBDC6_BASE.BIT._PBDC6_2
#define PBDC6_PBDC6_3 PBDC6_BASE.BIT._PBDC6_3
#define PBDC6_PBDC6_4 PBDC6_BASE.BIT._PBDC6_4
#define PBDC6_PBDC6_5 PBDC6_BASE.BIT._PBDC6_5
#define PBDC6_PBDC6_6 PBDC6_BASE.BIT._PBDC6_6
#define PBDC6_PBDC6_7 PBDC6_BASE.BIT._PBDC6_7
#define PBDC6_PBDC6_8 PBDC6_BASE.BIT._PBDC6_8
#define PBDC6_PBDC6_9 PBDC6_BASE.BIT._PBDC6_9
#define PBDC6_PBDC6_10 PBDC6_BASE.BIT._PBDC6_10
#define PBDC6_PBDC6_11 PBDC6_BASE.BIT._PBDC6_11
#define PBDC6_PBDC6_12 PBDC6_BASE.BIT._PBDC6_12
#define PBDC6_PBDC6_13 PBDC6_BASE.BIT._PBDC6_13
#define PBDC6_PBDC6_14 PBDC6_BASE.BIT._PBDC6_14
#define PBDC6_PBDC6_15 PBDC6_BASE.BIT._PBDC6_15
#define PIPC6 PIPC6_BASE.UINT16
#define PIPC6_PIPC6_0 PIPC6_BASE.BIT._PIPC6_0
#define PIPC6_PIPC6_1 PIPC6_BASE.BIT._PIPC6_1
#define PIPC6_PIPC6_2 PIPC6_BASE.BIT._PIPC6_2
#define PIPC6_PIPC6_3 PIPC6_BASE.BIT._PIPC6_3
#define PIPC6_PIPC6_4 PIPC6_BASE.BIT._PIPC6_4
#define PIPC6_PIPC6_5 PIPC6_BASE.BIT._PIPC6_5
#define PIPC6_PIPC6_6 PIPC6_BASE.BIT._PIPC6_6
#define PIPC6_PIPC6_7 PIPC6_BASE.BIT._PIPC6_7
#define PIPC6_PIPC6_8 PIPC6_BASE.BIT._PIPC6_8
#define PIPC6_PIPC6_9 PIPC6_BASE.BIT._PIPC6_9
#define PIPC6_PIPC6_10 PIPC6_BASE.BIT._PIPC6_10
#define PIPC6_PIPC6_11 PIPC6_BASE.BIT._PIPC6_11
#define PIPC6_PIPC6_12 PIPC6_BASE.BIT._PIPC6_12
#define PIPC6_PIPC6_13 PIPC6_BASE.BIT._PIPC6_13
#define PIPC6_PIPC6_14 PIPC6_BASE.BIT._PIPC6_14
#define PIPC6_PIPC6_15 PIPC6_BASE.BIT._PIPC6_15
#define PU6 PU6_BASE.UINT16
#define PU6_PU6_0 PU6_BASE.BIT._PU6_0
#define PU6_PU6_1 PU6_BASE.BIT._PU6_1
#define PU6_PU6_2 PU6_BASE.BIT._PU6_2
#define PU6_PU6_3 PU6_BASE.BIT._PU6_3
#define PU6_PU6_4 PU6_BASE.BIT._PU6_4
#define PU6_PU6_5 PU6_BASE.BIT._PU6_5
#define PU6_PU6_6 PU6_BASE.BIT._PU6_6
#define PU6_PU6_7 PU6_BASE.BIT._PU6_7
#define PU6_PU6_8 PU6_BASE.BIT._PU6_8
#define PU6_PU6_9 PU6_BASE.BIT._PU6_9
#define PU6_PU6_10 PU6_BASE.BIT._PU6_10
#define PU6_PU6_11 PU6_BASE.BIT._PU6_11
#define PU6_PU6_12 PU6_BASE.BIT._PU6_12
#define PU6_PU6_13 PU6_BASE.BIT._PU6_13
#define PU6_PU6_14 PU6_BASE.BIT._PU6_14
#define PU6_PU6_15 PU6_BASE.BIT._PU6_15
#define PD6 PD6_BASE.UINT16
#define PD6_PD6_0 PD6_BASE.BIT._PD6_0
#define PD6_PD6_1 PD6_BASE.BIT._PD6_1
#define PD6_PD6_2 PD6_BASE.BIT._PD6_2
#define PD6_PD6_3 PD6_BASE.BIT._PD6_3
#define PD6_PD6_4 PD6_BASE.BIT._PD6_4
#define PD6_PD6_5 PD6_BASE.BIT._PD6_5
#define PD6_PD6_6 PD6_BASE.BIT._PD6_6
#define PD6_PD6_7 PD6_BASE.BIT._PD6_7
#define PD6_PD6_8 PD6_BASE.BIT._PD6_8
#define PD6_PD6_9 PD6_BASE.BIT._PD6_9
#define PD6_PD6_10 PD6_BASE.BIT._PD6_10
#define PD6_PD6_11 PD6_BASE.BIT._PD6_11
#define PD6_PD6_12 PD6_BASE.BIT._PD6_12
#define PD6_PD6_13 PD6_BASE.BIT._PD6_13
#define PD6_PD6_14 PD6_BASE.BIT._PD6_14
#define PD6_PD6_15 PD6_BASE.BIT._PD6_15
#define PODC6 PODC6_BASE.UINT32
#define PODC6_PODC6_0 PODC6_BASE.BIT._PODC6_0
#define PODC6_PODC6_1 PODC6_BASE.BIT._PODC6_1
#define PODC6_PODC6_2 PODC6_BASE.BIT._PODC6_2
#define PODC6_PODC6_3 PODC6_BASE.BIT._PODC6_3
#define PODC6_PODC6_4 PODC6_BASE.BIT._PODC6_4
#define PODC6_PODC6_5 PODC6_BASE.BIT._PODC6_5
#define PODC6_PODC6_6 PODC6_BASE.BIT._PODC6_6
#define PODC6_PODC6_7 PODC6_BASE.BIT._PODC6_7
#define PODC6_PODC6_8 PODC6_BASE.BIT._PODC6_8
#define PODC6_PODC6_9 PODC6_BASE.BIT._PODC6_9
#define PODC6_PODC6_10 PODC6_BASE.BIT._PODC6_10
#define PODC6_PODC6_11 PODC6_BASE.BIT._PODC6_11
#define PODC6_PODC6_12 PODC6_BASE.BIT._PODC6_12
#define PODC6_PODC6_13 PODC6_BASE.BIT._PODC6_13
#define PODC6_PODC6_14 PODC6_BASE.BIT._PODC6_14
#define PODC6_PODC6_15 PODC6_BASE.BIT._PODC6_15
#define PDSC6 PDSC6_BASE.UINT32
#define PDSC6_PDSC6_0 PDSC6_BASE.BIT._PDSC6_0
#define PDSC6_PDSC6_1 PDSC6_BASE.BIT._PDSC6_1
#define PDSC6_PDSC6_2 PDSC6_BASE.BIT._PDSC6_2
#define PDSC6_PDSC6_3 PDSC6_BASE.BIT._PDSC6_3
#define PDSC6_PDSC6_4 PDSC6_BASE.BIT._PDSC6_4
#define PDSC6_PDSC6_5 PDSC6_BASE.BIT._PDSC6_5
#define PDSC6_PDSC6_6 PDSC6_BASE.BIT._PDSC6_6
#define PDSC6_PDSC6_7 PDSC6_BASE.BIT._PDSC6_7
#define PDSC6_PDSC6_8 PDSC6_BASE.BIT._PDSC6_8
#define PDSC6_PDSC6_9 PDSC6_BASE.BIT._PDSC6_9
#define PDSC6_PDSC6_10 PDSC6_BASE.BIT._PDSC6_10
#define PDSC6_PDSC6_11 PDSC6_BASE.BIT._PDSC6_11
#define PDSC6_PDSC6_12 PDSC6_BASE.BIT._PDSC6_12
#define PDSC6_PDSC6_13 PDSC6_BASE.BIT._PDSC6_13
#define PDSC6_PDSC6_14 PDSC6_BASE.BIT._PDSC6_14
#define PDSC6_PDSC6_15 PDSC6_BASE.BIT._PDSC6_15
#define PIS6 PIS6_BASE.UINT16
#define PIS6_PIS6_0 PIS6_BASE.BIT._PIS6_0
#define PIS6_PIS6_1 PIS6_BASE.BIT._PIS6_1
#define PIS6_PIS6_2 PIS6_BASE.BIT._PIS6_2
#define PIS6_PIS6_3 PIS6_BASE.BIT._PIS6_3
#define PIS6_PIS6_4 PIS6_BASE.BIT._PIS6_4
#define PIS6_PIS6_5 PIS6_BASE.BIT._PIS6_5
#define PIS6_PIS6_6 PIS6_BASE.BIT._PIS6_6
#define PIS6_PIS6_7 PIS6_BASE.BIT._PIS6_7
#define PIS6_PIS6_8 PIS6_BASE.BIT._PIS6_8
#define PIS6_PIS6_9 PIS6_BASE.BIT._PIS6_9
#define PIS6_PIS6_10 PIS6_BASE.BIT._PIS6_10
#define PIS6_PIS6_11 PIS6_BASE.BIT._PIS6_11
#define PIS6_PIS6_12 PIS6_BASE.BIT._PIS6_12
#define PIS6_PIS6_13 PIS6_BASE.BIT._PIS6_13
#define PIS6_PIS6_14 PIS6_BASE.BIT._PIS6_14
#define PIS6_PIS6_15 PIS6_BASE.BIT._PIS6_15
#define PUCC6 PUCC6_BASE.UINT32
#define PUCC6_PUCC6_0 PUCC6_BASE.BIT._PUCC6_0
#define PUCC6_PUCC6_1 PUCC6_BASE.BIT._PUCC6_1
#define PUCC6_PUCC6_2 PUCC6_BASE.BIT._PUCC6_2
#define PUCC6_PUCC6_3 PUCC6_BASE.BIT._PUCC6_3
#define PUCC6_PUCC6_4 PUCC6_BASE.BIT._PUCC6_4
#define PUCC6_PUCC6_5 PUCC6_BASE.BIT._PUCC6_5
#define PUCC6_PUCC6_6 PUCC6_BASE.BIT._PUCC6_6
#define PUCC6_PUCC6_7 PUCC6_BASE.BIT._PUCC6_7
#define PUCC6_PUCC6_8 PUCC6_BASE.BIT._PUCC6_8
#define PUCC6_PUCC6_9 PUCC6_BASE.BIT._PUCC6_9
#define PUCC6_PUCC6_10 PUCC6_BASE.BIT._PUCC6_10
#define PUCC6_PUCC6_11 PUCC6_BASE.BIT._PUCC6_11
#define PUCC6_PUCC6_12 PUCC6_BASE.BIT._PUCC6_12
#define PUCC6_PUCC6_13 PUCC6_BASE.BIT._PUCC6_13
#define PUCC6_PUCC6_14 PUCC6_BASE.BIT._PUCC6_14
#define PUCC6_PUCC6_15 PUCC6_BASE.BIT._PUCC6_15
#define PODCE6 PODCE6_BASE.UINT32
#define PODCE6_PODCE6_0 PODCE6_BASE.BIT._PODCE6_0
#define PODCE6_PODCE6_1 PODCE6_BASE.BIT._PODCE6_1
#define PODCE6_PODCE6_2 PODCE6_BASE.BIT._PODCE6_2
#define PODCE6_PODCE6_3 PODCE6_BASE.BIT._PODCE6_3
#define PODCE6_PODCE6_4 PODCE6_BASE.BIT._PODCE6_4
#define PODCE6_PODCE6_5 PODCE6_BASE.BIT._PODCE6_5
#define PODCE6_PODCE6_6 PODCE6_BASE.BIT._PODCE6_6
#define PODCE6_PODCE6_7 PODCE6_BASE.BIT._PODCE6_7
#define PODCE6_PODCE6_8 PODCE6_BASE.BIT._PODCE6_8
#define PODCE6_PODCE6_9 PODCE6_BASE.BIT._PODCE6_9
#define PODCE6_PODCE6_10 PODCE6_BASE.BIT._PODCE6_10
#define PODCE6_PODCE6_11 PODCE6_BASE.BIT._PODCE6_11
#define PODCE6_PODCE6_12 PODCE6_BASE.BIT._PODCE6_12
#define PODCE6_PODCE6_13 PODCE6_BASE.BIT._PODCE6_13
#define PODCE6_PODCE6_14 PODCE6_BASE.BIT._PODCE6_14
#define PODCE6_PODCE6_15 PODCE6_BASE.BIT._PODCE6_15
#define PIBC7 PIBC7_BASE.UINT16
#define PIBC7_PIBC7_0 PIBC7_BASE.BIT._PIBC7_0
#define PIBC7_PIBC7_1 PIBC7_BASE.BIT._PIBC7_1
#define PIBC7_PIBC7_2 PIBC7_BASE.BIT._PIBC7_2
#define PIBC7_PIBC7_3 PIBC7_BASE.BIT._PIBC7_3
#define PIBC7_PIBC7_4 PIBC7_BASE.BIT._PIBC7_4
#define PIBC7_PIBC7_5 PIBC7_BASE.BIT._PIBC7_5
#define PIBC7_PIBC7_6 PIBC7_BASE.BIT._PIBC7_6
#define PIBC7_PIBC7_7 PIBC7_BASE.BIT._PIBC7_7
#define PIBC7_PIBC7_8 PIBC7_BASE.BIT._PIBC7_8
#define PIBC7_PIBC7_9 PIBC7_BASE.BIT._PIBC7_9
#define PIBC7_PIBC7_10 PIBC7_BASE.BIT._PIBC7_10
#define PIBC7_PIBC7_11 PIBC7_BASE.BIT._PIBC7_11
#define PIBC7_PIBC7_12 PIBC7_BASE.BIT._PIBC7_12
#define PIBC7_PIBC7_13 PIBC7_BASE.BIT._PIBC7_13
#define PIBC7_PIBC7_14 PIBC7_BASE.BIT._PIBC7_14
#define PIBC7_PIBC7_15 PIBC7_BASE.BIT._PIBC7_15
#define PBDC7 PBDC7_BASE.UINT16
#define PBDC7_PBDC7_0 PBDC7_BASE.BIT._PBDC7_0
#define PBDC7_PBDC7_1 PBDC7_BASE.BIT._PBDC7_1
#define PBDC7_PBDC7_2 PBDC7_BASE.BIT._PBDC7_2
#define PBDC7_PBDC7_3 PBDC7_BASE.BIT._PBDC7_3
#define PBDC7_PBDC7_4 PBDC7_BASE.BIT._PBDC7_4
#define PBDC7_PBDC7_5 PBDC7_BASE.BIT._PBDC7_5
#define PBDC7_PBDC7_6 PBDC7_BASE.BIT._PBDC7_6
#define PBDC7_PBDC7_7 PBDC7_BASE.BIT._PBDC7_7
#define PBDC7_PBDC7_8 PBDC7_BASE.BIT._PBDC7_8
#define PBDC7_PBDC7_9 PBDC7_BASE.BIT._PBDC7_9
#define PBDC7_PBDC7_10 PBDC7_BASE.BIT._PBDC7_10
#define PBDC7_PBDC7_11 PBDC7_BASE.BIT._PBDC7_11
#define PBDC7_PBDC7_12 PBDC7_BASE.BIT._PBDC7_12
#define PBDC7_PBDC7_13 PBDC7_BASE.BIT._PBDC7_13
#define PBDC7_PBDC7_14 PBDC7_BASE.BIT._PBDC7_14
#define PBDC7_PBDC7_15 PBDC7_BASE.BIT._PBDC7_15
#define PIPC7 PIPC7_BASE.UINT16
#define PIPC7_PIPC7_0 PIPC7_BASE.BIT._PIPC7_0
#define PIPC7_PIPC7_1 PIPC7_BASE.BIT._PIPC7_1
#define PIPC7_PIPC7_2 PIPC7_BASE.BIT._PIPC7_2
#define PIPC7_PIPC7_3 PIPC7_BASE.BIT._PIPC7_3
#define PIPC7_PIPC7_4 PIPC7_BASE.BIT._PIPC7_4
#define PIPC7_PIPC7_5 PIPC7_BASE.BIT._PIPC7_5
#define PIPC7_PIPC7_6 PIPC7_BASE.BIT._PIPC7_6
#define PIPC7_PIPC7_7 PIPC7_BASE.BIT._PIPC7_7
#define PIPC7_PIPC7_8 PIPC7_BASE.BIT._PIPC7_8
#define PIPC7_PIPC7_9 PIPC7_BASE.BIT._PIPC7_9
#define PIPC7_PIPC7_10 PIPC7_BASE.BIT._PIPC7_10
#define PIPC7_PIPC7_11 PIPC7_BASE.BIT._PIPC7_11
#define PIPC7_PIPC7_12 PIPC7_BASE.BIT._PIPC7_12
#define PIPC7_PIPC7_13 PIPC7_BASE.BIT._PIPC7_13
#define PIPC7_PIPC7_14 PIPC7_BASE.BIT._PIPC7_14
#define PIPC7_PIPC7_15 PIPC7_BASE.BIT._PIPC7_15
#define PU7 PU7_BASE.UINT16
#define PU7_PU7_0 PU7_BASE.BIT._PU7_0
#define PU7_PU7_1 PU7_BASE.BIT._PU7_1
#define PU7_PU7_2 PU7_BASE.BIT._PU7_2
#define PU7_PU7_3 PU7_BASE.BIT._PU7_3
#define PU7_PU7_4 PU7_BASE.BIT._PU7_4
#define PU7_PU7_5 PU7_BASE.BIT._PU7_5
#define PU7_PU7_6 PU7_BASE.BIT._PU7_6
#define PU7_PU7_7 PU7_BASE.BIT._PU7_7
#define PU7_PU7_8 PU7_BASE.BIT._PU7_8
#define PU7_PU7_9 PU7_BASE.BIT._PU7_9
#define PU7_PU7_10 PU7_BASE.BIT._PU7_10
#define PU7_PU7_11 PU7_BASE.BIT._PU7_11
#define PU7_PU7_12 PU7_BASE.BIT._PU7_12
#define PU7_PU7_13 PU7_BASE.BIT._PU7_13
#define PU7_PU7_14 PU7_BASE.BIT._PU7_14
#define PU7_PU7_15 PU7_BASE.BIT._PU7_15
#define PD7 PD7_BASE.UINT16
#define PD7_PD7_0 PD7_BASE.BIT._PD7_0
#define PD7_PD7_1 PD7_BASE.BIT._PD7_1
#define PD7_PD7_2 PD7_BASE.BIT._PD7_2
#define PD7_PD7_3 PD7_BASE.BIT._PD7_3
#define PD7_PD7_4 PD7_BASE.BIT._PD7_4
#define PD7_PD7_5 PD7_BASE.BIT._PD7_5
#define PD7_PD7_6 PD7_BASE.BIT._PD7_6
#define PD7_PD7_7 PD7_BASE.BIT._PD7_7
#define PD7_PD7_8 PD7_BASE.BIT._PD7_8
#define PD7_PD7_9 PD7_BASE.BIT._PD7_9
#define PD7_PD7_10 PD7_BASE.BIT._PD7_10
#define PD7_PD7_11 PD7_BASE.BIT._PD7_11
#define PD7_PD7_12 PD7_BASE.BIT._PD7_12
#define PD7_PD7_13 PD7_BASE.BIT._PD7_13
#define PD7_PD7_14 PD7_BASE.BIT._PD7_14
#define PD7_PD7_15 PD7_BASE.BIT._PD7_15
#define PODC7 PODC7_BASE.UINT32
#define PODC7_PODC7_0 PODC7_BASE.BIT._PODC7_0
#define PODC7_PODC7_1 PODC7_BASE.BIT._PODC7_1
#define PODC7_PODC7_2 PODC7_BASE.BIT._PODC7_2
#define PODC7_PODC7_3 PODC7_BASE.BIT._PODC7_3
#define PODC7_PODC7_4 PODC7_BASE.BIT._PODC7_4
#define PODC7_PODC7_5 PODC7_BASE.BIT._PODC7_5
#define PODC7_PODC7_6 PODC7_BASE.BIT._PODC7_6
#define PODC7_PODC7_7 PODC7_BASE.BIT._PODC7_7
#define PODC7_PODC7_8 PODC7_BASE.BIT._PODC7_8
#define PODC7_PODC7_9 PODC7_BASE.BIT._PODC7_9
#define PODC7_PODC7_10 PODC7_BASE.BIT._PODC7_10
#define PODC7_PODC7_11 PODC7_BASE.BIT._PODC7_11
#define PODC7_PODC7_12 PODC7_BASE.BIT._PODC7_12
#define PODC7_PODC7_13 PODC7_BASE.BIT._PODC7_13
#define PODC7_PODC7_14 PODC7_BASE.BIT._PODC7_14
#define PODC7_PODC7_15 PODC7_BASE.BIT._PODC7_15
#define PDSC7 PDSC7_BASE.UINT32
#define PDSC7_PDSC7_0 PDSC7_BASE.BIT._PDSC7_0
#define PDSC7_PDSC7_1 PDSC7_BASE.BIT._PDSC7_1
#define PDSC7_PDSC7_2 PDSC7_BASE.BIT._PDSC7_2
#define PDSC7_PDSC7_3 PDSC7_BASE.BIT._PDSC7_3
#define PDSC7_PDSC7_4 PDSC7_BASE.BIT._PDSC7_4
#define PDSC7_PDSC7_5 PDSC7_BASE.BIT._PDSC7_5
#define PDSC7_PDSC7_6 PDSC7_BASE.BIT._PDSC7_6
#define PDSC7_PDSC7_7 PDSC7_BASE.BIT._PDSC7_7
#define PDSC7_PDSC7_8 PDSC7_BASE.BIT._PDSC7_8
#define PDSC7_PDSC7_9 PDSC7_BASE.BIT._PDSC7_9
#define PDSC7_PDSC7_10 PDSC7_BASE.BIT._PDSC7_10
#define PDSC7_PDSC7_11 PDSC7_BASE.BIT._PDSC7_11
#define PDSC7_PDSC7_12 PDSC7_BASE.BIT._PDSC7_12
#define PDSC7_PDSC7_13 PDSC7_BASE.BIT._PDSC7_13
#define PDSC7_PDSC7_14 PDSC7_BASE.BIT._PDSC7_14
#define PDSC7_PDSC7_15 PDSC7_BASE.BIT._PDSC7_15
#define PIS7 PIS7_BASE.UINT16
#define PIS7_PIS7_0 PIS7_BASE.BIT._PIS7_0
#define PIS7_PIS7_1 PIS7_BASE.BIT._PIS7_1
#define PIS7_PIS7_2 PIS7_BASE.BIT._PIS7_2
#define PIS7_PIS7_3 PIS7_BASE.BIT._PIS7_3
#define PIS7_PIS7_4 PIS7_BASE.BIT._PIS7_4
#define PIS7_PIS7_5 PIS7_BASE.BIT._PIS7_5
#define PIS7_PIS7_6 PIS7_BASE.BIT._PIS7_6
#define PIS7_PIS7_7 PIS7_BASE.BIT._PIS7_7
#define PIS7_PIS7_8 PIS7_BASE.BIT._PIS7_8
#define PIS7_PIS7_9 PIS7_BASE.BIT._PIS7_9
#define PIS7_PIS7_10 PIS7_BASE.BIT._PIS7_10
#define PIS7_PIS7_11 PIS7_BASE.BIT._PIS7_11
#define PIS7_PIS7_12 PIS7_BASE.BIT._PIS7_12
#define PIS7_PIS7_13 PIS7_BASE.BIT._PIS7_13
#define PIS7_PIS7_14 PIS7_BASE.BIT._PIS7_14
#define PIS7_PIS7_15 PIS7_BASE.BIT._PIS7_15
#define PUCC7 PUCC7_BASE.UINT32
#define PUCC7_PUCC7_0 PUCC7_BASE.BIT._PUCC7_0
#define PUCC7_PUCC7_1 PUCC7_BASE.BIT._PUCC7_1
#define PUCC7_PUCC7_2 PUCC7_BASE.BIT._PUCC7_2
#define PUCC7_PUCC7_3 PUCC7_BASE.BIT._PUCC7_3
#define PUCC7_PUCC7_4 PUCC7_BASE.BIT._PUCC7_4
#define PUCC7_PUCC7_5 PUCC7_BASE.BIT._PUCC7_5
#define PUCC7_PUCC7_6 PUCC7_BASE.BIT._PUCC7_6
#define PUCC7_PUCC7_7 PUCC7_BASE.BIT._PUCC7_7
#define PUCC7_PUCC7_8 PUCC7_BASE.BIT._PUCC7_8
#define PUCC7_PUCC7_9 PUCC7_BASE.BIT._PUCC7_9
#define PUCC7_PUCC7_10 PUCC7_BASE.BIT._PUCC7_10
#define PUCC7_PUCC7_11 PUCC7_BASE.BIT._PUCC7_11
#define PUCC7_PUCC7_12 PUCC7_BASE.BIT._PUCC7_12
#define PUCC7_PUCC7_13 PUCC7_BASE.BIT._PUCC7_13
#define PUCC7_PUCC7_14 PUCC7_BASE.BIT._PUCC7_14
#define PUCC7_PUCC7_15 PUCC7_BASE.BIT._PUCC7_15
#define PODCE7 PODCE7_BASE.UINT32
#define PODCE7_PODCE7_0 PODCE7_BASE.BIT._PODCE7_0
#define PODCE7_PODCE7_1 PODCE7_BASE.BIT._PODCE7_1
#define PODCE7_PODCE7_2 PODCE7_BASE.BIT._PODCE7_2
#define PODCE7_PODCE7_3 PODCE7_BASE.BIT._PODCE7_3
#define PODCE7_PODCE7_4 PODCE7_BASE.BIT._PODCE7_4
#define PODCE7_PODCE7_5 PODCE7_BASE.BIT._PODCE7_5
#define PODCE7_PODCE7_6 PODCE7_BASE.BIT._PODCE7_6
#define PODCE7_PODCE7_7 PODCE7_BASE.BIT._PODCE7_7
#define PODCE7_PODCE7_8 PODCE7_BASE.BIT._PODCE7_8
#define PODCE7_PODCE7_9 PODCE7_BASE.BIT._PODCE7_9
#define PODCE7_PODCE7_10 PODCE7_BASE.BIT._PODCE7_10
#define PODCE7_PODCE7_11 PODCE7_BASE.BIT._PODCE7_11
#define PODCE7_PODCE7_12 PODCE7_BASE.BIT._PODCE7_12
#define PODCE7_PODCE7_13 PODCE7_BASE.BIT._PODCE7_13
#define PODCE7_PODCE7_14 PODCE7_BASE.BIT._PODCE7_14
#define PODCE7_PODCE7_15 PODCE7_BASE.BIT._PODCE7_15
#define PIBC8 PIBC8_BASE.UINT16
#define PIBC8_PIBC8_0 PIBC8_BASE.BIT._PIBC8_0
#define PIBC8_PIBC8_1 PIBC8_BASE.BIT._PIBC8_1
#define PIBC8_PIBC8_2 PIBC8_BASE.BIT._PIBC8_2
#define PIBC8_PIBC8_3 PIBC8_BASE.BIT._PIBC8_3
#define PIBC8_PIBC8_4 PIBC8_BASE.BIT._PIBC8_4
#define PIBC8_PIBC8_5 PIBC8_BASE.BIT._PIBC8_5
#define PIBC8_PIBC8_6 PIBC8_BASE.BIT._PIBC8_6
#define PIBC8_PIBC8_7 PIBC8_BASE.BIT._PIBC8_7
#define PIBC8_PIBC8_8 PIBC8_BASE.BIT._PIBC8_8
#define PIBC8_PIBC8_9 PIBC8_BASE.BIT._PIBC8_9
#define PIBC8_PIBC8_10 PIBC8_BASE.BIT._PIBC8_10
#define PIBC8_PIBC8_11 PIBC8_BASE.BIT._PIBC8_11
#define PIBC8_PIBC8_12 PIBC8_BASE.BIT._PIBC8_12
#define PIBC8_PIBC8_13 PIBC8_BASE.BIT._PIBC8_13
#define PIBC8_PIBC8_14 PIBC8_BASE.BIT._PIBC8_14
#define PIBC8_PIBC8_15 PIBC8_BASE.BIT._PIBC8_15
#define PBDC8 PBDC8_BASE.UINT16
#define PBDC8_PBDC8_0 PBDC8_BASE.BIT._PBDC8_0
#define PBDC8_PBDC8_1 PBDC8_BASE.BIT._PBDC8_1
#define PBDC8_PBDC8_2 PBDC8_BASE.BIT._PBDC8_2
#define PBDC8_PBDC8_3 PBDC8_BASE.BIT._PBDC8_3
#define PBDC8_PBDC8_4 PBDC8_BASE.BIT._PBDC8_4
#define PBDC8_PBDC8_5 PBDC8_BASE.BIT._PBDC8_5
#define PBDC8_PBDC8_6 PBDC8_BASE.BIT._PBDC8_6
#define PBDC8_PBDC8_7 PBDC8_BASE.BIT._PBDC8_7
#define PBDC8_PBDC8_8 PBDC8_BASE.BIT._PBDC8_8
#define PBDC8_PBDC8_9 PBDC8_BASE.BIT._PBDC8_9
#define PBDC8_PBDC8_10 PBDC8_BASE.BIT._PBDC8_10
#define PBDC8_PBDC8_11 PBDC8_BASE.BIT._PBDC8_11
#define PBDC8_PBDC8_12 PBDC8_BASE.BIT._PBDC8_12
#define PBDC8_PBDC8_13 PBDC8_BASE.BIT._PBDC8_13
#define PBDC8_PBDC8_14 PBDC8_BASE.BIT._PBDC8_14
#define PBDC8_PBDC8_15 PBDC8_BASE.BIT._PBDC8_15
#define PIPC8 PIPC8_BASE.UINT16
#define PIPC8_PIPC8_0 PIPC8_BASE.BIT._PIPC8_0
#define PIPC8_PIPC8_1 PIPC8_BASE.BIT._PIPC8_1
#define PIPC8_PIPC8_2 PIPC8_BASE.BIT._PIPC8_2
#define PIPC8_PIPC8_3 PIPC8_BASE.BIT._PIPC8_3
#define PIPC8_PIPC8_4 PIPC8_BASE.BIT._PIPC8_4
#define PIPC8_PIPC8_5 PIPC8_BASE.BIT._PIPC8_5
#define PIPC8_PIPC8_6 PIPC8_BASE.BIT._PIPC8_6
#define PIPC8_PIPC8_7 PIPC8_BASE.BIT._PIPC8_7
#define PIPC8_PIPC8_8 PIPC8_BASE.BIT._PIPC8_8
#define PIPC8_PIPC8_9 PIPC8_BASE.BIT._PIPC8_9
#define PIPC8_PIPC8_10 PIPC8_BASE.BIT._PIPC8_10
#define PIPC8_PIPC8_11 PIPC8_BASE.BIT._PIPC8_11
#define PIPC8_PIPC8_12 PIPC8_BASE.BIT._PIPC8_12
#define PIPC8_PIPC8_13 PIPC8_BASE.BIT._PIPC8_13
#define PIPC8_PIPC8_14 PIPC8_BASE.BIT._PIPC8_14
#define PIPC8_PIPC8_15 PIPC8_BASE.BIT._PIPC8_15
#define PU8 PU8_BASE.UINT16
#define PU8_PU8_0 PU8_BASE.BIT._PU8_0
#define PU8_PU8_1 PU8_BASE.BIT._PU8_1
#define PU8_PU8_2 PU8_BASE.BIT._PU8_2
#define PU8_PU8_3 PU8_BASE.BIT._PU8_3
#define PU8_PU8_4 PU8_BASE.BIT._PU8_4
#define PU8_PU8_5 PU8_BASE.BIT._PU8_5
#define PU8_PU8_6 PU8_BASE.BIT._PU8_6
#define PU8_PU8_7 PU8_BASE.BIT._PU8_7
#define PU8_PU8_8 PU8_BASE.BIT._PU8_8
#define PU8_PU8_9 PU8_BASE.BIT._PU8_9
#define PU8_PU8_10 PU8_BASE.BIT._PU8_10
#define PU8_PU8_11 PU8_BASE.BIT._PU8_11
#define PU8_PU8_12 PU8_BASE.BIT._PU8_12
#define PU8_PU8_13 PU8_BASE.BIT._PU8_13
#define PU8_PU8_14 PU8_BASE.BIT._PU8_14
#define PU8_PU8_15 PU8_BASE.BIT._PU8_15
#define PD8 PD8_BASE.UINT16
#define PD8_PD8_0 PD8_BASE.BIT._PD8_0
#define PD8_PD8_1 PD8_BASE.BIT._PD8_1
#define PD8_PD8_2 PD8_BASE.BIT._PD8_2
#define PD8_PD8_3 PD8_BASE.BIT._PD8_3
#define PD8_PD8_4 PD8_BASE.BIT._PD8_4
#define PD8_PD8_5 PD8_BASE.BIT._PD8_5
#define PD8_PD8_6 PD8_BASE.BIT._PD8_6
#define PD8_PD8_7 PD8_BASE.BIT._PD8_7
#define PD8_PD8_8 PD8_BASE.BIT._PD8_8
#define PD8_PD8_9 PD8_BASE.BIT._PD8_9
#define PD8_PD8_10 PD8_BASE.BIT._PD8_10
#define PD8_PD8_11 PD8_BASE.BIT._PD8_11
#define PD8_PD8_12 PD8_BASE.BIT._PD8_12
#define PD8_PD8_13 PD8_BASE.BIT._PD8_13
#define PD8_PD8_14 PD8_BASE.BIT._PD8_14
#define PD8_PD8_15 PD8_BASE.BIT._PD8_15
#define PODC8 PODC8_BASE.UINT32
#define PODC8_PODC8_0 PODC8_BASE.BIT._PODC8_0
#define PODC8_PODC8_1 PODC8_BASE.BIT._PODC8_1
#define PODC8_PODC8_2 PODC8_BASE.BIT._PODC8_2
#define PODC8_PODC8_3 PODC8_BASE.BIT._PODC8_3
#define PODC8_PODC8_4 PODC8_BASE.BIT._PODC8_4
#define PODC8_PODC8_5 PODC8_BASE.BIT._PODC8_5
#define PODC8_PODC8_6 PODC8_BASE.BIT._PODC8_6
#define PODC8_PODC8_7 PODC8_BASE.BIT._PODC8_7
#define PODC8_PODC8_8 PODC8_BASE.BIT._PODC8_8
#define PODC8_PODC8_9 PODC8_BASE.BIT._PODC8_9
#define PODC8_PODC8_10 PODC8_BASE.BIT._PODC8_10
#define PODC8_PODC8_11 PODC8_BASE.BIT._PODC8_11
#define PODC8_PODC8_12 PODC8_BASE.BIT._PODC8_12
#define PODC8_PODC8_13 PODC8_BASE.BIT._PODC8_13
#define PODC8_PODC8_14 PODC8_BASE.BIT._PODC8_14
#define PODC8_PODC8_15 PODC8_BASE.BIT._PODC8_15
#define PDSC8 PDSC8_BASE.UINT32
#define PDSC8_PDSC8_0 PDSC8_BASE.BIT._PDSC8_0
#define PDSC8_PDSC8_1 PDSC8_BASE.BIT._PDSC8_1
#define PDSC8_PDSC8_2 PDSC8_BASE.BIT._PDSC8_2
#define PDSC8_PDSC8_3 PDSC8_BASE.BIT._PDSC8_3
#define PDSC8_PDSC8_4 PDSC8_BASE.BIT._PDSC8_4
#define PDSC8_PDSC8_5 PDSC8_BASE.BIT._PDSC8_5
#define PDSC8_PDSC8_6 PDSC8_BASE.BIT._PDSC8_6
#define PDSC8_PDSC8_7 PDSC8_BASE.BIT._PDSC8_7
#define PDSC8_PDSC8_8 PDSC8_BASE.BIT._PDSC8_8
#define PDSC8_PDSC8_9 PDSC8_BASE.BIT._PDSC8_9
#define PDSC8_PDSC8_10 PDSC8_BASE.BIT._PDSC8_10
#define PDSC8_PDSC8_11 PDSC8_BASE.BIT._PDSC8_11
#define PDSC8_PDSC8_12 PDSC8_BASE.BIT._PDSC8_12
#define PDSC8_PDSC8_13 PDSC8_BASE.BIT._PDSC8_13
#define PDSC8_PDSC8_14 PDSC8_BASE.BIT._PDSC8_14
#define PDSC8_PDSC8_15 PDSC8_BASE.BIT._PDSC8_15
#define PIS8 PIS8_BASE.UINT16
#define PIS8_PIS8_0 PIS8_BASE.BIT._PIS8_0
#define PIS8_PIS8_1 PIS8_BASE.BIT._PIS8_1
#define PIS8_PIS8_2 PIS8_BASE.BIT._PIS8_2
#define PIS8_PIS8_3 PIS8_BASE.BIT._PIS8_3
#define PIS8_PIS8_4 PIS8_BASE.BIT._PIS8_4
#define PIS8_PIS8_5 PIS8_BASE.BIT._PIS8_5
#define PIS8_PIS8_6 PIS8_BASE.BIT._PIS8_6
#define PIS8_PIS8_7 PIS8_BASE.BIT._PIS8_7
#define PIS8_PIS8_8 PIS8_BASE.BIT._PIS8_8
#define PIS8_PIS8_9 PIS8_BASE.BIT._PIS8_9
#define PIS8_PIS8_10 PIS8_BASE.BIT._PIS8_10
#define PIS8_PIS8_11 PIS8_BASE.BIT._PIS8_11
#define PIS8_PIS8_12 PIS8_BASE.BIT._PIS8_12
#define PIS8_PIS8_13 PIS8_BASE.BIT._PIS8_13
#define PIS8_PIS8_14 PIS8_BASE.BIT._PIS8_14
#define PIS8_PIS8_15 PIS8_BASE.BIT._PIS8_15
#define PUCC8 PUCC8_BASE.UINT32
#define PUCC8_PUCC8_0 PUCC8_BASE.BIT._PUCC8_0
#define PUCC8_PUCC8_1 PUCC8_BASE.BIT._PUCC8_1
#define PUCC8_PUCC8_2 PUCC8_BASE.BIT._PUCC8_2
#define PUCC8_PUCC8_3 PUCC8_BASE.BIT._PUCC8_3
#define PUCC8_PUCC8_4 PUCC8_BASE.BIT._PUCC8_4
#define PUCC8_PUCC8_5 PUCC8_BASE.BIT._PUCC8_5
#define PUCC8_PUCC8_6 PUCC8_BASE.BIT._PUCC8_6
#define PUCC8_PUCC8_7 PUCC8_BASE.BIT._PUCC8_7
#define PUCC8_PUCC8_8 PUCC8_BASE.BIT._PUCC8_8
#define PUCC8_PUCC8_9 PUCC8_BASE.BIT._PUCC8_9
#define PUCC8_PUCC8_10 PUCC8_BASE.BIT._PUCC8_10
#define PUCC8_PUCC8_11 PUCC8_BASE.BIT._PUCC8_11
#define PUCC8_PUCC8_12 PUCC8_BASE.BIT._PUCC8_12
#define PUCC8_PUCC8_13 PUCC8_BASE.BIT._PUCC8_13
#define PUCC8_PUCC8_14 PUCC8_BASE.BIT._PUCC8_14
#define PUCC8_PUCC8_15 PUCC8_BASE.BIT._PUCC8_15
#define PODCE8 PODCE8_BASE.UINT32
#define PODCE8_PODCE8_0 PODCE8_BASE.BIT._PODCE8_0
#define PODCE8_PODCE8_1 PODCE8_BASE.BIT._PODCE8_1
#define PODCE8_PODCE8_2 PODCE8_BASE.BIT._PODCE8_2
#define PODCE8_PODCE8_3 PODCE8_BASE.BIT._PODCE8_3
#define PODCE8_PODCE8_4 PODCE8_BASE.BIT._PODCE8_4
#define PODCE8_PODCE8_5 PODCE8_BASE.BIT._PODCE8_5
#define PODCE8_PODCE8_6 PODCE8_BASE.BIT._PODCE8_6
#define PODCE8_PODCE8_7 PODCE8_BASE.BIT._PODCE8_7
#define PODCE8_PODCE8_8 PODCE8_BASE.BIT._PODCE8_8
#define PODCE8_PODCE8_9 PODCE8_BASE.BIT._PODCE8_9
#define PODCE8_PODCE8_10 PODCE8_BASE.BIT._PODCE8_10
#define PODCE8_PODCE8_11 PODCE8_BASE.BIT._PODCE8_11
#define PODCE8_PODCE8_12 PODCE8_BASE.BIT._PODCE8_12
#define PODCE8_PODCE8_13 PODCE8_BASE.BIT._PODCE8_13
#define PODCE8_PODCE8_14 PODCE8_BASE.BIT._PODCE8_14
#define PODCE8_PODCE8_15 PODCE8_BASE.BIT._PODCE8_15
#define PIBC9 PIBC9_BASE.UINT16
#define PIBC9_PIBC9_0 PIBC9_BASE.BIT._PIBC9_0
#define PIBC9_PIBC9_1 PIBC9_BASE.BIT._PIBC9_1
#define PIBC9_PIBC9_2 PIBC9_BASE.BIT._PIBC9_2
#define PIBC9_PIBC9_3 PIBC9_BASE.BIT._PIBC9_3
#define PIBC9_PIBC9_4 PIBC9_BASE.BIT._PIBC9_4
#define PIBC9_PIBC9_5 PIBC9_BASE.BIT._PIBC9_5
#define PIBC9_PIBC9_6 PIBC9_BASE.BIT._PIBC9_6
#define PIBC9_PIBC9_7 PIBC9_BASE.BIT._PIBC9_7
#define PIBC9_PIBC9_8 PIBC9_BASE.BIT._PIBC9_8
#define PIBC9_PIBC9_9 PIBC9_BASE.BIT._PIBC9_9
#define PIBC9_PIBC9_10 PIBC9_BASE.BIT._PIBC9_10
#define PIBC9_PIBC9_11 PIBC9_BASE.BIT._PIBC9_11
#define PIBC9_PIBC9_12 PIBC9_BASE.BIT._PIBC9_12
#define PIBC9_PIBC9_13 PIBC9_BASE.BIT._PIBC9_13
#define PIBC9_PIBC9_14 PIBC9_BASE.BIT._PIBC9_14
#define PIBC9_PIBC9_15 PIBC9_BASE.BIT._PIBC9_15
#define PBDC9 PBDC9_BASE.UINT16
#define PBDC9_PBDC9_0 PBDC9_BASE.BIT._PBDC9_0
#define PBDC9_PBDC9_1 PBDC9_BASE.BIT._PBDC9_1
#define PBDC9_PBDC9_2 PBDC9_BASE.BIT._PBDC9_2
#define PBDC9_PBDC9_3 PBDC9_BASE.BIT._PBDC9_3
#define PBDC9_PBDC9_4 PBDC9_BASE.BIT._PBDC9_4
#define PBDC9_PBDC9_5 PBDC9_BASE.BIT._PBDC9_5
#define PBDC9_PBDC9_6 PBDC9_BASE.BIT._PBDC9_6
#define PBDC9_PBDC9_7 PBDC9_BASE.BIT._PBDC9_7
#define PBDC9_PBDC9_8 PBDC9_BASE.BIT._PBDC9_8
#define PBDC9_PBDC9_9 PBDC9_BASE.BIT._PBDC9_9
#define PBDC9_PBDC9_10 PBDC9_BASE.BIT._PBDC9_10
#define PBDC9_PBDC9_11 PBDC9_BASE.BIT._PBDC9_11
#define PBDC9_PBDC9_12 PBDC9_BASE.BIT._PBDC9_12
#define PBDC9_PBDC9_13 PBDC9_BASE.BIT._PBDC9_13
#define PBDC9_PBDC9_14 PBDC9_BASE.BIT._PBDC9_14
#define PBDC9_PBDC9_15 PBDC9_BASE.BIT._PBDC9_15
#define PIPC9 PIPC9_BASE.UINT16
#define PIPC9_PIPC9_0 PIPC9_BASE.BIT._PIPC9_0
#define PIPC9_PIPC9_1 PIPC9_BASE.BIT._PIPC9_1
#define PIPC9_PIPC9_2 PIPC9_BASE.BIT._PIPC9_2
#define PIPC9_PIPC9_3 PIPC9_BASE.BIT._PIPC9_3
#define PIPC9_PIPC9_4 PIPC9_BASE.BIT._PIPC9_4
#define PIPC9_PIPC9_5 PIPC9_BASE.BIT._PIPC9_5
#define PIPC9_PIPC9_6 PIPC9_BASE.BIT._PIPC9_6
#define PIPC9_PIPC9_7 PIPC9_BASE.BIT._PIPC9_7
#define PIPC9_PIPC9_8 PIPC9_BASE.BIT._PIPC9_8
#define PIPC9_PIPC9_9 PIPC9_BASE.BIT._PIPC9_9
#define PIPC9_PIPC9_10 PIPC9_BASE.BIT._PIPC9_10
#define PIPC9_PIPC9_11 PIPC9_BASE.BIT._PIPC9_11
#define PIPC9_PIPC9_12 PIPC9_BASE.BIT._PIPC9_12
#define PIPC9_PIPC9_13 PIPC9_BASE.BIT._PIPC9_13
#define PIPC9_PIPC9_14 PIPC9_BASE.BIT._PIPC9_14
#define PIPC9_PIPC9_15 PIPC9_BASE.BIT._PIPC9_15
#define PU9 PU9_BASE.UINT16
#define PU9_PU9_0 PU9_BASE.BIT._PU9_0
#define PU9_PU9_1 PU9_BASE.BIT._PU9_1
#define PU9_PU9_2 PU9_BASE.BIT._PU9_2
#define PU9_PU9_3 PU9_BASE.BIT._PU9_3
#define PU9_PU9_4 PU9_BASE.BIT._PU9_4
#define PU9_PU9_5 PU9_BASE.BIT._PU9_5
#define PU9_PU9_6 PU9_BASE.BIT._PU9_6
#define PU9_PU9_7 PU9_BASE.BIT._PU9_7
#define PU9_PU9_8 PU9_BASE.BIT._PU9_8
#define PU9_PU9_9 PU9_BASE.BIT._PU9_9
#define PU9_PU9_10 PU9_BASE.BIT._PU9_10
#define PU9_PU9_11 PU9_BASE.BIT._PU9_11
#define PU9_PU9_12 PU9_BASE.BIT._PU9_12
#define PU9_PU9_13 PU9_BASE.BIT._PU9_13
#define PU9_PU9_14 PU9_BASE.BIT._PU9_14
#define PU9_PU9_15 PU9_BASE.BIT._PU9_15
#define PD9 PD9_BASE.UINT16
#define PD9_PD9_0 PD9_BASE.BIT._PD9_0
#define PD9_PD9_1 PD9_BASE.BIT._PD9_1
#define PD9_PD9_2 PD9_BASE.BIT._PD9_2
#define PD9_PD9_3 PD9_BASE.BIT._PD9_3
#define PD9_PD9_4 PD9_BASE.BIT._PD9_4
#define PD9_PD9_5 PD9_BASE.BIT._PD9_5
#define PD9_PD9_6 PD9_BASE.BIT._PD9_6
#define PD9_PD9_7 PD9_BASE.BIT._PD9_7
#define PD9_PD9_8 PD9_BASE.BIT._PD9_8
#define PD9_PD9_9 PD9_BASE.BIT._PD9_9
#define PD9_PD9_10 PD9_BASE.BIT._PD9_10
#define PD9_PD9_11 PD9_BASE.BIT._PD9_11
#define PD9_PD9_12 PD9_BASE.BIT._PD9_12
#define PD9_PD9_13 PD9_BASE.BIT._PD9_13
#define PD9_PD9_14 PD9_BASE.BIT._PD9_14
#define PD9_PD9_15 PD9_BASE.BIT._PD9_15
#define PODC9 PODC9_BASE.UINT32
#define PODC9_PODC9_0 PODC9_BASE.BIT._PODC9_0
#define PODC9_PODC9_1 PODC9_BASE.BIT._PODC9_1
#define PODC9_PODC9_2 PODC9_BASE.BIT._PODC9_2
#define PODC9_PODC9_3 PODC9_BASE.BIT._PODC9_3
#define PODC9_PODC9_4 PODC9_BASE.BIT._PODC9_4
#define PODC9_PODC9_5 PODC9_BASE.BIT._PODC9_5
#define PODC9_PODC9_6 PODC9_BASE.BIT._PODC9_6
#define PODC9_PODC9_7 PODC9_BASE.BIT._PODC9_7
#define PODC9_PODC9_8 PODC9_BASE.BIT._PODC9_8
#define PODC9_PODC9_9 PODC9_BASE.BIT._PODC9_9
#define PODC9_PODC9_10 PODC9_BASE.BIT._PODC9_10
#define PODC9_PODC9_11 PODC9_BASE.BIT._PODC9_11
#define PODC9_PODC9_12 PODC9_BASE.BIT._PODC9_12
#define PODC9_PODC9_13 PODC9_BASE.BIT._PODC9_13
#define PODC9_PODC9_14 PODC9_BASE.BIT._PODC9_14
#define PODC9_PODC9_15 PODC9_BASE.BIT._PODC9_15
#define PDSC9 PDSC9_BASE.UINT32
#define PDSC9_PDSC9_0 PDSC9_BASE.BIT._PDSC9_0
#define PDSC9_PDSC9_1 PDSC9_BASE.BIT._PDSC9_1
#define PDSC9_PDSC9_2 PDSC9_BASE.BIT._PDSC9_2
#define PDSC9_PDSC9_3 PDSC9_BASE.BIT._PDSC9_3
#define PDSC9_PDSC9_4 PDSC9_BASE.BIT._PDSC9_4
#define PDSC9_PDSC9_5 PDSC9_BASE.BIT._PDSC9_5
#define PDSC9_PDSC9_6 PDSC9_BASE.BIT._PDSC9_6
#define PDSC9_PDSC9_7 PDSC9_BASE.BIT._PDSC9_7
#define PDSC9_PDSC9_8 PDSC9_BASE.BIT._PDSC9_8
#define PDSC9_PDSC9_9 PDSC9_BASE.BIT._PDSC9_9
#define PDSC9_PDSC9_10 PDSC9_BASE.BIT._PDSC9_10
#define PDSC9_PDSC9_11 PDSC9_BASE.BIT._PDSC9_11
#define PDSC9_PDSC9_12 PDSC9_BASE.BIT._PDSC9_12
#define PDSC9_PDSC9_13 PDSC9_BASE.BIT._PDSC9_13
#define PDSC9_PDSC9_14 PDSC9_BASE.BIT._PDSC9_14
#define PDSC9_PDSC9_15 PDSC9_BASE.BIT._PDSC9_15
#define PIS9 PIS9_BASE.UINT16
#define PIS9_PIS9_0 PIS9_BASE.BIT._PIS9_0
#define PIS9_PIS9_1 PIS9_BASE.BIT._PIS9_1
#define PIS9_PIS9_2 PIS9_BASE.BIT._PIS9_2
#define PIS9_PIS9_3 PIS9_BASE.BIT._PIS9_3
#define PIS9_PIS9_4 PIS9_BASE.BIT._PIS9_4
#define PIS9_PIS9_5 PIS9_BASE.BIT._PIS9_5
#define PIS9_PIS9_6 PIS9_BASE.BIT._PIS9_6
#define PIS9_PIS9_7 PIS9_BASE.BIT._PIS9_7
#define PIS9_PIS9_8 PIS9_BASE.BIT._PIS9_8
#define PIS9_PIS9_9 PIS9_BASE.BIT._PIS9_9
#define PIS9_PIS9_10 PIS9_BASE.BIT._PIS9_10
#define PIS9_PIS9_11 PIS9_BASE.BIT._PIS9_11
#define PIS9_PIS9_12 PIS9_BASE.BIT._PIS9_12
#define PIS9_PIS9_13 PIS9_BASE.BIT._PIS9_13
#define PIS9_PIS9_14 PIS9_BASE.BIT._PIS9_14
#define PIS9_PIS9_15 PIS9_BASE.BIT._PIS9_15
#define PUCC9 PUCC9_BASE.UINT32
#define PUCC9_PUCC9_0 PUCC9_BASE.BIT._PUCC9_0
#define PUCC9_PUCC9_1 PUCC9_BASE.BIT._PUCC9_1
#define PUCC9_PUCC9_2 PUCC9_BASE.BIT._PUCC9_2
#define PUCC9_PUCC9_3 PUCC9_BASE.BIT._PUCC9_3
#define PUCC9_PUCC9_4 PUCC9_BASE.BIT._PUCC9_4
#define PUCC9_PUCC9_5 PUCC9_BASE.BIT._PUCC9_5
#define PUCC9_PUCC9_6 PUCC9_BASE.BIT._PUCC9_6
#define PUCC9_PUCC9_7 PUCC9_BASE.BIT._PUCC9_7
#define PUCC9_PUCC9_8 PUCC9_BASE.BIT._PUCC9_8
#define PUCC9_PUCC9_9 PUCC9_BASE.BIT._PUCC9_9
#define PUCC9_PUCC9_10 PUCC9_BASE.BIT._PUCC9_10
#define PUCC9_PUCC9_11 PUCC9_BASE.BIT._PUCC9_11
#define PUCC9_PUCC9_12 PUCC9_BASE.BIT._PUCC9_12
#define PUCC9_PUCC9_13 PUCC9_BASE.BIT._PUCC9_13
#define PUCC9_PUCC9_14 PUCC9_BASE.BIT._PUCC9_14
#define PUCC9_PUCC9_15 PUCC9_BASE.BIT._PUCC9_15
#define PODCE9 PODCE9_BASE.UINT32
#define PODCE9_PODCE9_0 PODCE9_BASE.BIT._PODCE9_0
#define PODCE9_PODCE9_1 PODCE9_BASE.BIT._PODCE9_1
#define PODCE9_PODCE9_2 PODCE9_BASE.BIT._PODCE9_2
#define PODCE9_PODCE9_3 PODCE9_BASE.BIT._PODCE9_3
#define PODCE9_PODCE9_4 PODCE9_BASE.BIT._PODCE9_4
#define PODCE9_PODCE9_5 PODCE9_BASE.BIT._PODCE9_5
#define PODCE9_PODCE9_6 PODCE9_BASE.BIT._PODCE9_6
#define PODCE9_PODCE9_7 PODCE9_BASE.BIT._PODCE9_7
#define PODCE9_PODCE9_8 PODCE9_BASE.BIT._PODCE9_8
#define PODCE9_PODCE9_9 PODCE9_BASE.BIT._PODCE9_9
#define PODCE9_PODCE9_10 PODCE9_BASE.BIT._PODCE9_10
#define PODCE9_PODCE9_11 PODCE9_BASE.BIT._PODCE9_11
#define PODCE9_PODCE9_12 PODCE9_BASE.BIT._PODCE9_12
#define PODCE9_PODCE9_13 PODCE9_BASE.BIT._PODCE9_13
#define PODCE9_PODCE9_14 PODCE9_BASE.BIT._PODCE9_14
#define PODCE9_PODCE9_15 PODCE9_BASE.BIT._PODCE9_15
#define JP0 JP0_BASE.UINT8
#define JP0_P0_0 JP0_BASE.BIT._P0_0
#define JP0_P0_1 JP0_BASE.BIT._P0_1
#define JP0_P0_2 JP0_BASE.BIT._P0_2
#define JP0_P0_3 JP0_BASE.BIT._P0_3
#define JP0_P0_4 JP0_BASE.BIT._P0_4
#define JP0_P0_5 JP0_BASE.BIT._P0_5
#define JP0_P0_6 JP0_BASE.BIT._P0_6
#define JP0_P0_7 JP0_BASE.BIT._P0_7
#define JPSR0 JPSR0_BASE.UINT32
#define JPSR0_PSR0_0 JPSR0_BASE.BIT._PSR0_0
#define JPSR0_PSR0_1 JPSR0_BASE.BIT._PSR0_1
#define JPSR0_PSR0_2 JPSR0_BASE.BIT._PSR0_2
#define JPSR0_PSR0_3 JPSR0_BASE.BIT._PSR0_3
#define JPSR0_PSR0_4 JPSR0_BASE.BIT._PSR0_4
#define JPSR0_PSR0_5 JPSR0_BASE.BIT._PSR0_5
#define JPSR0_PSR0_6 JPSR0_BASE.BIT._PSR0_6
#define JPSR0_PSR0_7 JPSR0_BASE.BIT._PSR0_7
#define JPSR0_PSR0_8 JPSR0_BASE.BIT._PSR0_8
#define JPSR0_PSR0_9 JPSR0_BASE.BIT._PSR0_9
#define JPSR0_PSR0_10 JPSR0_BASE.BIT._PSR0_10
#define JPSR0_PSR0_11 JPSR0_BASE.BIT._PSR0_11
#define JPSR0_PSR0_12 JPSR0_BASE.BIT._PSR0_12
#define JPSR0_PSR0_13 JPSR0_BASE.BIT._PSR0_13
#define JPSR0_PSR0_14 JPSR0_BASE.BIT._PSR0_14
#define JPSR0_PSR0_15 JPSR0_BASE.BIT._PSR0_15
#define JPSR0_PSR0_16 JPSR0_BASE.BIT._PSR0_16
#define JPSR0_PSR0_17 JPSR0_BASE.BIT._PSR0_17
#define JPSR0_PSR0_18 JPSR0_BASE.BIT._PSR0_18
#define JPSR0_PSR0_19 JPSR0_BASE.BIT._PSR0_19
#define JPSR0_PSR0_20 JPSR0_BASE.BIT._PSR0_20
#define JPSR0_PSR0_21 JPSR0_BASE.BIT._PSR0_21
#define JPSR0_PSR0_22 JPSR0_BASE.BIT._PSR0_22
#define JPSR0_PSR0_23 JPSR0_BASE.BIT._PSR0_23
#define JPSR0_PSR0_24 JPSR0_BASE.BIT._PSR0_24
#define JPSR0_PSR0_25 JPSR0_BASE.BIT._PSR0_25
#define JPSR0_PSR0_26 JPSR0_BASE.BIT._PSR0_26
#define JPSR0_PSR0_27 JPSR0_BASE.BIT._PSR0_27
#define JPSR0_PSR0_28 JPSR0_BASE.BIT._PSR0_28
#define JPSR0_PSR0_29 JPSR0_BASE.BIT._PSR0_29
#define JPSR0_PSR0_30 JPSR0_BASE.BIT._PSR0_30
#define JPSR0_PSR0_31 JPSR0_BASE.BIT._PSR0_31
#define JPNOT0 JPNOT0_BASE.UINT8
#define JPNOT0_PNOT0_0 JPNOT0_BASE.BIT._PNOT0_0
#define JPNOT0_PNOT0_1 JPNOT0_BASE.BIT._PNOT0_1
#define JPNOT0_PNOT0_2 JPNOT0_BASE.BIT._PNOT0_2
#define JPNOT0_PNOT0_3 JPNOT0_BASE.BIT._PNOT0_3
#define JPNOT0_PNOT0_4 JPNOT0_BASE.BIT._PNOT0_4
#define JPNOT0_PNOT0_5 JPNOT0_BASE.BIT._PNOT0_5
#define JPNOT0_PNOT0_6 JPNOT0_BASE.BIT._PNOT0_6
#define JPNOT0_PNOT0_7 JPNOT0_BASE.BIT._PNOT0_7
#define JPPR0 JPPR0_BASE.UINT8
#define JPPR0_PPR0_0 JPPR0_BASE.BIT._PPR0_0
#define JPPR0_PPR0_1 JPPR0_BASE.BIT._PPR0_1
#define JPPR0_PPR0_2 JPPR0_BASE.BIT._PPR0_2
#define JPPR0_PPR0_3 JPPR0_BASE.BIT._PPR0_3
#define JPPR0_PPR0_4 JPPR0_BASE.BIT._PPR0_4
#define JPPR0_PPR0_5 JPPR0_BASE.BIT._PPR0_5
#define JPPR0_PPR0_6 JPPR0_BASE.BIT._PPR0_6
#define JPPR0_PPR0_7 JPPR0_BASE.BIT._PPR0_7
#define JPM0 JPM0_BASE.UINT8
#define JPM0_PM0_0 JPM0_BASE.BIT._PM0_0
#define JPM0_PM0_1 JPM0_BASE.BIT._PM0_1
#define JPM0_PM0_2 JPM0_BASE.BIT._PM0_2
#define JPM0_PM0_3 JPM0_BASE.BIT._PM0_3
#define JPM0_PM0_4 JPM0_BASE.BIT._PM0_4
#define JPM0_PM0_5 JPM0_BASE.BIT._PM0_5
#define JPM0_PM0_6 JPM0_BASE.BIT._PM0_6
#define JPM0_PM0_7 JPM0_BASE.BIT._PM0_7
#define JPMC0 JPMC0_BASE.UINT8
#define JPMC0_PMC0_0 JPMC0_BASE.BIT._PMC0_0
#define JPMC0_PMC0_1 JPMC0_BASE.BIT._PMC0_1
#define JPMC0_PMC0_2 JPMC0_BASE.BIT._PMC0_2
#define JPMC0_PMC0_3 JPMC0_BASE.BIT._PMC0_3
#define JPMC0_PMC0_4 JPMC0_BASE.BIT._PMC0_4
#define JPMC0_PMC0_5 JPMC0_BASE.BIT._PMC0_5
#define JPMC0_PMC0_6 JPMC0_BASE.BIT._PMC0_6
#define JPMC0_PMC0_7 JPMC0_BASE.BIT._PMC0_7
#define JPFCE0 JPFCE0_BASE.UINT8
#define JPFCE0_PFCE0_0 JPFCE0_BASE.BIT._PFCE0_0
#define JPFCE0_PFCE0_1 JPFCE0_BASE.BIT._PFCE0_1
#define JPFCE0_PFCE0_2 JPFCE0_BASE.BIT._PFCE0_2
#define JPFCE0_PFCE0_3 JPFCE0_BASE.BIT._PFCE0_3
#define JPFCE0_PFCE0_4 JPFCE0_BASE.BIT._PFCE0_4
#define JPFCE0_PFCE0_5 JPFCE0_BASE.BIT._PFCE0_5
#define JPFCE0_PFCE0_6 JPFCE0_BASE.BIT._PFCE0_6
#define JPFCE0_PFCE0_7 JPFCE0_BASE.BIT._PFCE0_7
#define JPMSR0 JPMSR0_BASE.UINT32
#define JPMSR0_PMSR0_0 JPMSR0_BASE.BIT._PMSR0_0
#define JPMSR0_PMSR0_1 JPMSR0_BASE.BIT._PMSR0_1
#define JPMSR0_PMSR0_2 JPMSR0_BASE.BIT._PMSR0_2
#define JPMSR0_PMSR0_3 JPMSR0_BASE.BIT._PMSR0_3
#define JPMSR0_PMSR0_4 JPMSR0_BASE.BIT._PMSR0_4
#define JPMSR0_PMSR0_5 JPMSR0_BASE.BIT._PMSR0_5
#define JPMSR0_PMSR0_6 JPMSR0_BASE.BIT._PMSR0_6
#define JPMSR0_PMSR0_7 JPMSR0_BASE.BIT._PMSR0_7
#define JPMSR0_PMSR0_8 JPMSR0_BASE.BIT._PMSR0_8
#define JPMSR0_PMSR0_9 JPMSR0_BASE.BIT._PMSR0_9
#define JPMSR0_PMSR0_10 JPMSR0_BASE.BIT._PMSR0_10
#define JPMSR0_PMSR0_11 JPMSR0_BASE.BIT._PMSR0_11
#define JPMSR0_PMSR0_12 JPMSR0_BASE.BIT._PMSR0_12
#define JPMSR0_PMSR0_13 JPMSR0_BASE.BIT._PMSR0_13
#define JPMSR0_PMSR0_14 JPMSR0_BASE.BIT._PMSR0_14
#define JPMSR0_PMSR0_15 JPMSR0_BASE.BIT._PMSR0_15
#define JPMSR0_PMSR0_16 JPMSR0_BASE.BIT._PMSR0_16
#define JPMSR0_PMSR0_17 JPMSR0_BASE.BIT._PMSR0_17
#define JPMSR0_PMSR0_18 JPMSR0_BASE.BIT._PMSR0_18
#define JPMSR0_PMSR0_19 JPMSR0_BASE.BIT._PMSR0_19
#define JPMSR0_PMSR0_20 JPMSR0_BASE.BIT._PMSR0_20
#define JPMSR0_PMSR0_21 JPMSR0_BASE.BIT._PMSR0_21
#define JPMSR0_PMSR0_22 JPMSR0_BASE.BIT._PMSR0_22
#define JPMSR0_PMSR0_23 JPMSR0_BASE.BIT._PMSR0_23
#define JPMSR0_PMSR0_24 JPMSR0_BASE.BIT._PMSR0_24
#define JPMSR0_PMSR0_25 JPMSR0_BASE.BIT._PMSR0_25
#define JPMSR0_PMSR0_26 JPMSR0_BASE.BIT._PMSR0_26
#define JPMSR0_PMSR0_27 JPMSR0_BASE.BIT._PMSR0_27
#define JPMSR0_PMSR0_28 JPMSR0_BASE.BIT._PMSR0_28
#define JPMSR0_PMSR0_29 JPMSR0_BASE.BIT._PMSR0_29
#define JPMSR0_PMSR0_30 JPMSR0_BASE.BIT._PMSR0_30
#define JPMSR0_PMSR0_31 JPMSR0_BASE.BIT._PMSR0_31
#define JPMCSR0 JPMCSR0_BASE.UINT32
#define JPMCSR0_PMCSR0_0 JPMCSR0_BASE.BIT._PMCSR0_0
#define JPMCSR0_PMCSR0_1 JPMCSR0_BASE.BIT._PMCSR0_1
#define JPMCSR0_PMCSR0_2 JPMCSR0_BASE.BIT._PMCSR0_2
#define JPMCSR0_PMCSR0_3 JPMCSR0_BASE.BIT._PMCSR0_3
#define JPMCSR0_PMCSR0_4 JPMCSR0_BASE.BIT._PMCSR0_4
#define JPMCSR0_PMCSR0_5 JPMCSR0_BASE.BIT._PMCSR0_5
#define JPMCSR0_PMCSR0_6 JPMCSR0_BASE.BIT._PMCSR0_6
#define JPMCSR0_PMCSR0_7 JPMCSR0_BASE.BIT._PMCSR0_7
#define JPMCSR0_PMCSR0_8 JPMCSR0_BASE.BIT._PMCSR0_8
#define JPMCSR0_PMCSR0_9 JPMCSR0_BASE.BIT._PMCSR0_9
#define JPMCSR0_PMCSR0_10 JPMCSR0_BASE.BIT._PMCSR0_10
#define JPMCSR0_PMCSR0_11 JPMCSR0_BASE.BIT._PMCSR0_11
#define JPMCSR0_PMCSR0_12 JPMCSR0_BASE.BIT._PMCSR0_12
#define JPMCSR0_PMCSR0_13 JPMCSR0_BASE.BIT._PMCSR0_13
#define JPMCSR0_PMCSR0_14 JPMCSR0_BASE.BIT._PMCSR0_14
#define JPMCSR0_PMCSR0_15 JPMCSR0_BASE.BIT._PMCSR0_15
#define JPMCSR0_PMCSR0_16 JPMCSR0_BASE.BIT._PMCSR0_16
#define JPMCSR0_PMCSR0_17 JPMCSR0_BASE.BIT._PMCSR0_17
#define JPMCSR0_PMCSR0_18 JPMCSR0_BASE.BIT._PMCSR0_18
#define JPMCSR0_PMCSR0_19 JPMCSR0_BASE.BIT._PMCSR0_19
#define JPMCSR0_PMCSR0_20 JPMCSR0_BASE.BIT._PMCSR0_20
#define JPMCSR0_PMCSR0_21 JPMCSR0_BASE.BIT._PMCSR0_21
#define JPMCSR0_PMCSR0_22 JPMCSR0_BASE.BIT._PMCSR0_22
#define JPMCSR0_PMCSR0_23 JPMCSR0_BASE.BIT._PMCSR0_23
#define JPMCSR0_PMCSR0_24 JPMCSR0_BASE.BIT._PMCSR0_24
#define JPMCSR0_PMCSR0_25 JPMCSR0_BASE.BIT._PMCSR0_25
#define JPMCSR0_PMCSR0_26 JPMCSR0_BASE.BIT._PMCSR0_26
#define JPMCSR0_PMCSR0_27 JPMCSR0_BASE.BIT._PMCSR0_27
#define JPMCSR0_PMCSR0_28 JPMCSR0_BASE.BIT._PMCSR0_28
#define JPMCSR0_PMCSR0_29 JPMCSR0_BASE.BIT._PMCSR0_29
#define JPMCSR0_PMCSR0_30 JPMCSR0_BASE.BIT._PMCSR0_30
#define JPMCSR0_PMCSR0_31 JPMCSR0_BASE.BIT._PMCSR0_31
#define JPINV0 JPINV0_BASE.UINT8
#define JPINV0_PINV0_0 JPINV0_BASE.BIT._PINV0_0
#define JPINV0_PINV0_1 JPINV0_BASE.BIT._PINV0_1
#define JPINV0_PINV0_2 JPINV0_BASE.BIT._PINV0_2
#define JPINV0_PINV0_3 JPINV0_BASE.BIT._PINV0_3
#define JPINV0_PINV0_4 JPINV0_BASE.BIT._PINV0_4
#define JPINV0_PINV0_5 JPINV0_BASE.BIT._PINV0_5
#define JPINV0_PINV0_6 JPINV0_BASE.BIT._PINV0_6
#define JPINV0_PINV0_7 JPINV0_BASE.BIT._PINV0_7
#define JPCR0_0 JPCR0_0_BASE.UINT32
#define JPCR0_0_PFC JPCR0_0_BASE.BIT._PFC
#define JPCR0_0_PFCE JPCR0_0_BASE.BIT._PFCE
#define JPCR0_0_PM JPCR0_0_BASE.BIT._PM
#define JPCR0_0_PIPC JPCR0_0_BASE.BIT._PIPC
#define JPCR0_0_PMC JPCR0_0_BASE.BIT._PMC
#define JPCR0_0_PPR JPCR0_0_BASE.BIT._PPR
#define JPCR0_0_P JPCR0_0_BASE.BIT._P
#define JPCR0_0_PIBC JPCR0_0_BASE.BIT._PIBC
#define JPCR0_0_PBDC JPCR0_0_BASE.BIT._PBDC
#define JPCR0_0_PD JPCR0_0_BASE.BIT._PD
#define JPCR0_0_PU JPCR0_0_BASE.BIT._PU
#define JPCR0_0_PIS JPCR0_0_BASE.BIT._PIS
#define JPCR0_0_PDSC JPCR0_0_BASE.BIT._PDSC
#define JPCR0_0_PUCC JPCR0_0_BASE.BIT._PUCC
#define JPCR0_0_PODCE JPCR0_0_BASE.BIT._PODCE
#define JPCR0_0_PODC JPCR0_0_BASE.BIT._PODC
#define JPCR0_0_PINV JPCR0_0_BASE.BIT._PINV
#define JPCR0_1 JPCR0_1_BASE.UINT32
#define JPCR0_1_PFC JPCR0_1_BASE.BIT._PFC
#define JPCR0_1_PFCE JPCR0_1_BASE.BIT._PFCE
#define JPCR0_1_PM JPCR0_1_BASE.BIT._PM
#define JPCR0_1_PIPC JPCR0_1_BASE.BIT._PIPC
#define JPCR0_1_PMC JPCR0_1_BASE.BIT._PMC
#define JPCR0_1_PPR JPCR0_1_BASE.BIT._PPR
#define JPCR0_1_P JPCR0_1_BASE.BIT._P
#define JPCR0_1_PIBC JPCR0_1_BASE.BIT._PIBC
#define JPCR0_1_PBDC JPCR0_1_BASE.BIT._PBDC
#define JPCR0_1_PD JPCR0_1_BASE.BIT._PD
#define JPCR0_1_PU JPCR0_1_BASE.BIT._PU
#define JPCR0_1_PIS JPCR0_1_BASE.BIT._PIS
#define JPCR0_1_PDSC JPCR0_1_BASE.BIT._PDSC
#define JPCR0_1_PUCC JPCR0_1_BASE.BIT._PUCC
#define JPCR0_1_PODCE JPCR0_1_BASE.BIT._PODCE
#define JPCR0_1_PODC JPCR0_1_BASE.BIT._PODC
#define JPCR0_1_PINV JPCR0_1_BASE.BIT._PINV
#define JPCR0_2 JPCR0_2_BASE.UINT32
#define JPCR0_2_PFC JPCR0_2_BASE.BIT._PFC
#define JPCR0_2_PFCE JPCR0_2_BASE.BIT._PFCE
#define JPCR0_2_PM JPCR0_2_BASE.BIT._PM
#define JPCR0_2_PIPC JPCR0_2_BASE.BIT._PIPC
#define JPCR0_2_PMC JPCR0_2_BASE.BIT._PMC
#define JPCR0_2_PPR JPCR0_2_BASE.BIT._PPR
#define JPCR0_2_P JPCR0_2_BASE.BIT._P
#define JPCR0_2_PIBC JPCR0_2_BASE.BIT._PIBC
#define JPCR0_2_PBDC JPCR0_2_BASE.BIT._PBDC
#define JPCR0_2_PD JPCR0_2_BASE.BIT._PD
#define JPCR0_2_PU JPCR0_2_BASE.BIT._PU
#define JPCR0_2_PIS JPCR0_2_BASE.BIT._PIS
#define JPCR0_2_PDSC JPCR0_2_BASE.BIT._PDSC
#define JPCR0_2_PUCC JPCR0_2_BASE.BIT._PUCC
#define JPCR0_2_PODCE JPCR0_2_BASE.BIT._PODCE
#define JPCR0_2_PODC JPCR0_2_BASE.BIT._PODC
#define JPCR0_2_PINV JPCR0_2_BASE.BIT._PINV
#define JPCR0_3 JPCR0_3_BASE.UINT32
#define JPCR0_3_PFC JPCR0_3_BASE.BIT._PFC
#define JPCR0_3_PFCE JPCR0_3_BASE.BIT._PFCE
#define JPCR0_3_PM JPCR0_3_BASE.BIT._PM
#define JPCR0_3_PIPC JPCR0_3_BASE.BIT._PIPC
#define JPCR0_3_PMC JPCR0_3_BASE.BIT._PMC
#define JPCR0_3_PPR JPCR0_3_BASE.BIT._PPR
#define JPCR0_3_P JPCR0_3_BASE.BIT._P
#define JPCR0_3_PIBC JPCR0_3_BASE.BIT._PIBC
#define JPCR0_3_PBDC JPCR0_3_BASE.BIT._PBDC
#define JPCR0_3_PD JPCR0_3_BASE.BIT._PD
#define JPCR0_3_PU JPCR0_3_BASE.BIT._PU
#define JPCR0_3_PIS JPCR0_3_BASE.BIT._PIS
#define JPCR0_3_PDSC JPCR0_3_BASE.BIT._PDSC
#define JPCR0_3_PUCC JPCR0_3_BASE.BIT._PUCC
#define JPCR0_3_PODCE JPCR0_3_BASE.BIT._PODCE
#define JPCR0_3_PODC JPCR0_3_BASE.BIT._PODC
#define JPCR0_3_PINV JPCR0_3_BASE.BIT._PINV
#define JPCR0_5 JPCR0_5_BASE.UINT32
#define JPCR0_5_PFC JPCR0_5_BASE.BIT._PFC
#define JPCR0_5_PFCE JPCR0_5_BASE.BIT._PFCE
#define JPCR0_5_PM JPCR0_5_BASE.BIT._PM
#define JPCR0_5_PIPC JPCR0_5_BASE.BIT._PIPC
#define JPCR0_5_PMC JPCR0_5_BASE.BIT._PMC
#define JPCR0_5_PPR JPCR0_5_BASE.BIT._PPR
#define JPCR0_5_P JPCR0_5_BASE.BIT._P
#define JPCR0_5_PIBC JPCR0_5_BASE.BIT._PIBC
#define JPCR0_5_PBDC JPCR0_5_BASE.BIT._PBDC
#define JPCR0_5_PD JPCR0_5_BASE.BIT._PD
#define JPCR0_5_PU JPCR0_5_BASE.BIT._PU
#define JPCR0_5_PIS JPCR0_5_BASE.BIT._PIS
#define JPCR0_5_PDSC JPCR0_5_BASE.BIT._PDSC
#define JPCR0_5_PUCC JPCR0_5_BASE.BIT._PUCC
#define JPCR0_5_PODCE JPCR0_5_BASE.BIT._PODCE
#define JPCR0_5_PODC JPCR0_5_BASE.BIT._PODC
#define JPCR0_5_PINV JPCR0_5_BASE.BIT._PINV
#define JPCR0_6 JPCR0_6_BASE.UINT32
#define JPCR0_6_PFC JPCR0_6_BASE.BIT._PFC
#define JPCR0_6_PFCE JPCR0_6_BASE.BIT._PFCE
#define JPCR0_6_PM JPCR0_6_BASE.BIT._PM
#define JPCR0_6_PIPC JPCR0_6_BASE.BIT._PIPC
#define JPCR0_6_PMC JPCR0_6_BASE.BIT._PMC
#define JPCR0_6_PPR JPCR0_6_BASE.BIT._PPR
#define JPCR0_6_P JPCR0_6_BASE.BIT._P
#define JPCR0_6_PIBC JPCR0_6_BASE.BIT._PIBC
#define JPCR0_6_PBDC JPCR0_6_BASE.BIT._PBDC
#define JPCR0_6_PD JPCR0_6_BASE.BIT._PD
#define JPCR0_6_PU JPCR0_6_BASE.BIT._PU
#define JPCR0_6_PIS JPCR0_6_BASE.BIT._PIS
#define JPCR0_6_PDSC JPCR0_6_BASE.BIT._PDSC
#define JPCR0_6_PUCC JPCR0_6_BASE.BIT._PUCC
#define JPCR0_6_PODCE JPCR0_6_BASE.BIT._PODCE
#define JPCR0_6_PODC JPCR0_6_BASE.BIT._PODC
#define JPCR0_6_PINV JPCR0_6_BASE.BIT._PINV
#define JPCR0_7 JPCR0_7_BASE.UINT32
#define JPCR0_7_PFC JPCR0_7_BASE.BIT._PFC
#define JPCR0_7_PFCE JPCR0_7_BASE.BIT._PFCE
#define JPCR0_7_PM JPCR0_7_BASE.BIT._PM
#define JPCR0_7_PIPC JPCR0_7_BASE.BIT._PIPC
#define JPCR0_7_PMC JPCR0_7_BASE.BIT._PMC
#define JPCR0_7_PPR JPCR0_7_BASE.BIT._PPR
#define JPCR0_7_P JPCR0_7_BASE.BIT._P
#define JPCR0_7_PIBC JPCR0_7_BASE.BIT._PIBC
#define JPCR0_7_PBDC JPCR0_7_BASE.BIT._PBDC
#define JPCR0_7_PD JPCR0_7_BASE.BIT._PD
#define JPCR0_7_PU JPCR0_7_BASE.BIT._PU
#define JPCR0_7_PIS JPCR0_7_BASE.BIT._PIS
#define JPCR0_7_PDSC JPCR0_7_BASE.BIT._PDSC
#define JPCR0_7_PUCC JPCR0_7_BASE.BIT._PUCC
#define JPCR0_7_PODCE JPCR0_7_BASE.BIT._PODCE
#define JPCR0_7_PODC JPCR0_7_BASE.BIT._PODC
#define JPCR0_7_PINV JPCR0_7_BASE.BIT._PINV
#define JPCR0_8 JPCR0_8_BASE.UINT32
#define JPCR0_8_PFC JPCR0_8_BASE.BIT._PFC
#define JPCR0_8_PFCE JPCR0_8_BASE.BIT._PFCE
#define JPCR0_8_PM JPCR0_8_BASE.BIT._PM
#define JPCR0_8_PIPC JPCR0_8_BASE.BIT._PIPC
#define JPCR0_8_PMC JPCR0_8_BASE.BIT._PMC
#define JPCR0_8_PPR JPCR0_8_BASE.BIT._PPR
#define JPCR0_8_P JPCR0_8_BASE.BIT._P
#define JPCR0_8_PIBC JPCR0_8_BASE.BIT._PIBC
#define JPCR0_8_PBDC JPCR0_8_BASE.BIT._PBDC
#define JPCR0_8_PD JPCR0_8_BASE.BIT._PD
#define JPCR0_8_PU JPCR0_8_BASE.BIT._PU
#define JPCR0_8_PIS JPCR0_8_BASE.BIT._PIS
#define JPCR0_8_PDSC JPCR0_8_BASE.BIT._PDSC
#define JPCR0_8_PUCC JPCR0_8_BASE.BIT._PUCC
#define JPCR0_8_PODCE JPCR0_8_BASE.BIT._PODCE
#define JPCR0_8_PODC JPCR0_8_BASE.BIT._PODC
#define JPCR0_8_PINV JPCR0_8_BASE.BIT._PINV
#define JPCR0_9 JPCR0_9_BASE.UINT32
#define JPCR0_9_PFC JPCR0_9_BASE.BIT._PFC
#define JPCR0_9_PFCE JPCR0_9_BASE.BIT._PFCE
#define JPCR0_9_PM JPCR0_9_BASE.BIT._PM
#define JPCR0_9_PIPC JPCR0_9_BASE.BIT._PIPC
#define JPCR0_9_PMC JPCR0_9_BASE.BIT._PMC
#define JPCR0_9_PPR JPCR0_9_BASE.BIT._PPR
#define JPCR0_9_P JPCR0_9_BASE.BIT._P
#define JPCR0_9_PIBC JPCR0_9_BASE.BIT._PIBC
#define JPCR0_9_PBDC JPCR0_9_BASE.BIT._PBDC
#define JPCR0_9_PD JPCR0_9_BASE.BIT._PD
#define JPCR0_9_PU JPCR0_9_BASE.BIT._PU
#define JPCR0_9_PIS JPCR0_9_BASE.BIT._PIS
#define JPCR0_9_PDSC JPCR0_9_BASE.BIT._PDSC
#define JPCR0_9_PUCC JPCR0_9_BASE.BIT._PUCC
#define JPCR0_9_PODCE JPCR0_9_BASE.BIT._PODCE
#define JPCR0_9_PODC JPCR0_9_BASE.BIT._PODC
#define JPCR0_9_PINV JPCR0_9_BASE.BIT._PINV
#define JPCR0_10 JPCR0_10_BASE.UINT32
#define JPCR0_10_PFC JPCR0_10_BASE.BIT._PFC
#define JPCR0_10_PFCE JPCR0_10_BASE.BIT._PFCE
#define JPCR0_10_PM JPCR0_10_BASE.BIT._PM
#define JPCR0_10_PIPC JPCR0_10_BASE.BIT._PIPC
#define JPCR0_10_PMC JPCR0_10_BASE.BIT._PMC
#define JPCR0_10_PPR JPCR0_10_BASE.BIT._PPR
#define JPCR0_10_P JPCR0_10_BASE.BIT._P
#define JPCR0_10_PIBC JPCR0_10_BASE.BIT._PIBC
#define JPCR0_10_PBDC JPCR0_10_BASE.BIT._PBDC
#define JPCR0_10_PD JPCR0_10_BASE.BIT._PD
#define JPCR0_10_PU JPCR0_10_BASE.BIT._PU
#define JPCR0_10_PIS JPCR0_10_BASE.BIT._PIS
#define JPCR0_10_PDSC JPCR0_10_BASE.BIT._PDSC
#define JPCR0_10_PUCC JPCR0_10_BASE.BIT._PUCC
#define JPCR0_10_PODCE JPCR0_10_BASE.BIT._PODCE
#define JPCR0_10_PODC JPCR0_10_BASE.BIT._PODC
#define JPCR0_10_PINV JPCR0_10_BASE.BIT._PINV
#define JPCR0_13 JPCR0_13_BASE.UINT32
#define JPCR0_13_PFC JPCR0_13_BASE.BIT._PFC
#define JPCR0_13_PFCE JPCR0_13_BASE.BIT._PFCE
#define JPCR0_13_PM JPCR0_13_BASE.BIT._PM
#define JPCR0_13_PIPC JPCR0_13_BASE.BIT._PIPC
#define JPCR0_13_PMC JPCR0_13_BASE.BIT._PMC
#define JPCR0_13_PPR JPCR0_13_BASE.BIT._PPR
#define JPCR0_13_P JPCR0_13_BASE.BIT._P
#define JPCR0_13_PIBC JPCR0_13_BASE.BIT._PIBC
#define JPCR0_13_PBDC JPCR0_13_BASE.BIT._PBDC
#define JPCR0_13_PD JPCR0_13_BASE.BIT._PD
#define JPCR0_13_PU JPCR0_13_BASE.BIT._PU
#define JPCR0_13_PIS JPCR0_13_BASE.BIT._PIS
#define JPCR0_13_PDSC JPCR0_13_BASE.BIT._PDSC
#define JPCR0_13_PUCC JPCR0_13_BASE.BIT._PUCC
#define JPCR0_13_PODCE JPCR0_13_BASE.BIT._PODCE
#define JPCR0_13_PODC JPCR0_13_BASE.BIT._PODC
#define JPCR0_13_PINV JPCR0_13_BASE.BIT._PINV
#define JPCR0_14 JPCR0_14_BASE.UINT32
#define JPCR0_14_PFC JPCR0_14_BASE.BIT._PFC
#define JPCR0_14_PFCE JPCR0_14_BASE.BIT._PFCE
#define JPCR0_14_PM JPCR0_14_BASE.BIT._PM
#define JPCR0_14_PIPC JPCR0_14_BASE.BIT._PIPC
#define JPCR0_14_PMC JPCR0_14_BASE.BIT._PMC
#define JPCR0_14_PPR JPCR0_14_BASE.BIT._PPR
#define JPCR0_14_P JPCR0_14_BASE.BIT._P
#define JPCR0_14_PIBC JPCR0_14_BASE.BIT._PIBC
#define JPCR0_14_PBDC JPCR0_14_BASE.BIT._PBDC
#define JPCR0_14_PD JPCR0_14_BASE.BIT._PD
#define JPCR0_14_PU JPCR0_14_BASE.BIT._PU
#define JPCR0_14_PIS JPCR0_14_BASE.BIT._PIS
#define JPCR0_14_PDSC JPCR0_14_BASE.BIT._PDSC
#define JPCR0_14_PUCC JPCR0_14_BASE.BIT._PUCC
#define JPCR0_14_PODCE JPCR0_14_BASE.BIT._PODCE
#define JPCR0_14_PODC JPCR0_14_BASE.BIT._PODC
#define JPCR0_14_PINV JPCR0_14_BASE.BIT._PINV
#define JPIBC0 JPIBC0_BASE.UINT8
#define JPIBC0_PIBC0_0 JPIBC0_BASE.BIT._PIBC0_0
#define JPIBC0_PIBC0_1 JPIBC0_BASE.BIT._PIBC0_1
#define JPIBC0_PIBC0_2 JPIBC0_BASE.BIT._PIBC0_2
#define JPIBC0_PIBC0_3 JPIBC0_BASE.BIT._PIBC0_3
#define JPIBC0_PIBC0_4 JPIBC0_BASE.BIT._PIBC0_4
#define JPIBC0_PIBC0_5 JPIBC0_BASE.BIT._PIBC0_5
#define JPIBC0_PIBC0_6 JPIBC0_BASE.BIT._PIBC0_6
#define JPIBC0_PIBC0_7 JPIBC0_BASE.BIT._PIBC0_7
#define JPBDC0 JPBDC0_BASE.UINT8
#define JPBDC0_PBDC0_0 JPBDC0_BASE.BIT._PBDC0_0
#define JPBDC0_PBDC0_1 JPBDC0_BASE.BIT._PBDC0_1
#define JPBDC0_PBDC0_2 JPBDC0_BASE.BIT._PBDC0_2
#define JPBDC0_PBDC0_3 JPBDC0_BASE.BIT._PBDC0_3
#define JPBDC0_PBDC0_4 JPBDC0_BASE.BIT._PBDC0_4
#define JPBDC0_PBDC0_5 JPBDC0_BASE.BIT._PBDC0_5
#define JPBDC0_PBDC0_6 JPBDC0_BASE.BIT._PBDC0_6
#define JPBDC0_PBDC0_7 JPBDC0_BASE.BIT._PBDC0_7
#define JPU0 JPU0_BASE.UINT8
#define JPU0_PU0_0 JPU0_BASE.BIT._PU0_0
#define JPU0_PU0_1 JPU0_BASE.BIT._PU0_1
#define JPU0_PU0_2 JPU0_BASE.BIT._PU0_2
#define JPU0_PU0_3 JPU0_BASE.BIT._PU0_3
#define JPU0_PU0_4 JPU0_BASE.BIT._PU0_4
#define JPU0_PU0_5 JPU0_BASE.BIT._PU0_5
#define JPU0_PU0_6 JPU0_BASE.BIT._PU0_6
#define JPU0_PU0_7 JPU0_BASE.BIT._PU0_7
#define JPD0 JPD0_BASE.UINT8
#define JPD0_PD0_0 JPD0_BASE.BIT._PD0_0
#define JPD0_PD0_1 JPD0_BASE.BIT._PD0_1
#define JPD0_PD0_2 JPD0_BASE.BIT._PD0_2
#define JPD0_PD0_3 JPD0_BASE.BIT._PD0_3
#define JPD0_PD0_4 JPD0_BASE.BIT._PD0_4
#define JPD0_PD0_5 JPD0_BASE.BIT._PD0_5
#define JPD0_PD0_6 JPD0_BASE.BIT._PD0_6
#define JPD0_PD0_7 JPD0_BASE.BIT._PD0_7
#define JPODC0 JPODC0_BASE.UINT32
#define JPODC0_PODC0_0 JPODC0_BASE.BIT._PODC0_0
#define JPODC0_PODC0_1 JPODC0_BASE.BIT._PODC0_1
#define JPODC0_PODC0_2 JPODC0_BASE.BIT._PODC0_2
#define JPODC0_PODC0_3 JPODC0_BASE.BIT._PODC0_3
#define JPODC0_PODC0_4 JPODC0_BASE.BIT._PODC0_4
#define JPODC0_PODC0_5 JPODC0_BASE.BIT._PODC0_5
#define JPODC0_PODC0_6 JPODC0_BASE.BIT._PODC0_6
#define JPODC0_PODC0_7 JPODC0_BASE.BIT._PODC0_7
#define JPODC0_PODC0_8 JPODC0_BASE.BIT._PODC0_8
#define JPODC0_PODC0_9 JPODC0_BASE.BIT._PODC0_9
#define JPODC0_PODC0_10 JPODC0_BASE.BIT._PODC0_10
#define JPODC0_PODC0_11 JPODC0_BASE.BIT._PODC0_11
#define JPODC0_PODC0_12 JPODC0_BASE.BIT._PODC0_12
#define JPODC0_PODC0_13 JPODC0_BASE.BIT._PODC0_13
#define JPODC0_PODC0_14 JPODC0_BASE.BIT._PODC0_14
#define JPODC0_PODC0_15 JPODC0_BASE.BIT._PODC0_15
#define JPDSC0 JPDSC0_BASE.UINT32
#define JPDSC0_PDSC0_0 JPDSC0_BASE.BIT._PDSC0_0
#define JPDSC0_PDSC0_1 JPDSC0_BASE.BIT._PDSC0_1
#define JPDSC0_PDSC0_2 JPDSC0_BASE.BIT._PDSC0_2
#define JPDSC0_PDSC0_3 JPDSC0_BASE.BIT._PDSC0_3
#define JPDSC0_PDSC0_4 JPDSC0_BASE.BIT._PDSC0_4
#define JPDSC0_PDSC0_5 JPDSC0_BASE.BIT._PDSC0_5
#define JPDSC0_PDSC0_6 JPDSC0_BASE.BIT._PDSC0_6
#define JPDSC0_PDSC0_7 JPDSC0_BASE.BIT._PDSC0_7
#define JPDSC0_PDSC0_8 JPDSC0_BASE.BIT._PDSC0_8
#define JPDSC0_PDSC0_9 JPDSC0_BASE.BIT._PDSC0_9
#define JPDSC0_PDSC0_10 JPDSC0_BASE.BIT._PDSC0_10
#define JPDSC0_PDSC0_11 JPDSC0_BASE.BIT._PDSC0_11
#define JPDSC0_PDSC0_12 JPDSC0_BASE.BIT._PDSC0_12
#define JPDSC0_PDSC0_13 JPDSC0_BASE.BIT._PDSC0_13
#define JPDSC0_PDSC0_14 JPDSC0_BASE.BIT._PDSC0_14
#define JPDSC0_PDSC0_15 JPDSC0_BASE.BIT._PDSC0_15
#define JPIS0 JPIS0_BASE.UINT8
#define JPIS0_PIS0_0 JPIS0_BASE.BIT._PIS0_0
#define JPIS0_PIS0_1 JPIS0_BASE.BIT._PIS0_1
#define JPIS0_PIS0_2 JPIS0_BASE.BIT._PIS0_2
#define JPIS0_PIS0_3 JPIS0_BASE.BIT._PIS0_3
#define JPIS0_PIS0_4 JPIS0_BASE.BIT._PIS0_4
#define JPIS0_PIS0_5 JPIS0_BASE.BIT._PIS0_5
#define JPIS0_PIS0_6 JPIS0_BASE.BIT._PIS0_6
#define JPIS0_PIS0_7 JPIS0_BASE.BIT._PIS0_7
#define JPUCC0 JPUCC0_BASE.UINT32
#define JPUCC0_PUCC0_0 JPUCC0_BASE.BIT._PUCC0_0
#define JPUCC0_PUCC0_1 JPUCC0_BASE.BIT._PUCC0_1
#define JPUCC0_PUCC0_2 JPUCC0_BASE.BIT._PUCC0_2
#define JPUCC0_PUCC0_3 JPUCC0_BASE.BIT._PUCC0_3
#define JPUCC0_PUCC0_4 JPUCC0_BASE.BIT._PUCC0_4
#define JPUCC0_PUCC0_5 JPUCC0_BASE.BIT._PUCC0_5
#define JPUCC0_PUCC0_6 JPUCC0_BASE.BIT._PUCC0_6
#define JPUCC0_PUCC0_7 JPUCC0_BASE.BIT._PUCC0_7
#define JPUCC0_PUCC0_8 JPUCC0_BASE.BIT._PUCC0_8
#define JPUCC0_PUCC0_9 JPUCC0_BASE.BIT._PUCC0_9
#define JPUCC0_PUCC0_10 JPUCC0_BASE.BIT._PUCC0_10
#define JPUCC0_PUCC0_11 JPUCC0_BASE.BIT._PUCC0_11
#define JPUCC0_PUCC0_12 JPUCC0_BASE.BIT._PUCC0_12
#define JPUCC0_PUCC0_13 JPUCC0_BASE.BIT._PUCC0_13
#define JPUCC0_PUCC0_14 JPUCC0_BASE.BIT._PUCC0_14
#define JPUCC0_PUCC0_15 JPUCC0_BASE.BIT._PUCC0_15
#define JPODCE0 JPODCE0_BASE.UINT32
#define JPODCE0_PODCE0_0 JPODCE0_BASE.BIT._PODCE0_0
#define JPODCE0_PODCE0_1 JPODCE0_BASE.BIT._PODCE0_1
#define JPODCE0_PODCE0_2 JPODCE0_BASE.BIT._PODCE0_2
#define JPODCE0_PODCE0_3 JPODCE0_BASE.BIT._PODCE0_3
#define JPODCE0_PODCE0_4 JPODCE0_BASE.BIT._PODCE0_4
#define JPODCE0_PODCE0_5 JPODCE0_BASE.BIT._PODCE0_5
#define JPODCE0_PODCE0_6 JPODCE0_BASE.BIT._PODCE0_6
#define JPODCE0_PODCE0_7 JPODCE0_BASE.BIT._PODCE0_7
#define JPODCE0_PODCE0_8 JPODCE0_BASE.BIT._PODCE0_8
#define JPODCE0_PODCE0_9 JPODCE0_BASE.BIT._PODCE0_9
#define JPODCE0_PODCE0_10 JPODCE0_BASE.BIT._PODCE0_10
#define JPODCE0_PODCE0_11 JPODCE0_BASE.BIT._PODCE0_11
#define JPODCE0_PODCE0_12 JPODCE0_BASE.BIT._PODCE0_12
#define JPODCE0_PODCE0_13 JPODCE0_BASE.BIT._PODCE0_13
#define JPODCE0_PODCE0_14 JPODCE0_BASE.BIT._PODCE0_14
#define JPODCE0_PODCE0_15 JPODCE0_BASE.BIT._PODCE0_15

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif