#ifndef __DR7F701373_PMMA1_HEADER__
#define __DR7F701373_PMMA1_HEADER__



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
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
    uint32 _PMMA1PWR : 1;
} PMMA1CTLBits_t;

typedef struct
{
    uint32 _PMMA1HWT0 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT0 : 1;
    uint32 _PMMA1TO0 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO0 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG0 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP0 : 1;
    uint32 _PMMA1ST0 : 1;
} PMMA1TCTL0Bits_t;

typedef struct
{
    uint32 _PMMA1HWT1 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT1 : 1;
    uint32 _PMMA1TO1 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO1 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG1 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP1 : 1;
    uint32 _PMMA1ST1 : 1;
} PMMA1TCTL1Bits_t;

typedef struct
{
    uint32 _PMMA1HWT2 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT2 : 1;
    uint32 _PMMA1TO2 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO2 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG2 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP2 : 1;
    uint32 _PMMA1ST2 : 1;
} PMMA1TCTL2Bits_t;

typedef struct
{
    uint32 _PMMA1HWT3 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT3 : 1;
    uint32 _PMMA1TO3 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO3 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG3 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP3 : 1;
    uint32 _PMMA1ST3 : 1;
} PMMA1TCTL3Bits_t;

typedef struct
{
    uint32 _PMMA1HWT4 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT4 : 1;
    uint32 _PMMA1TO4 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO4 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG4 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP4 : 1;
    uint32 _PMMA1ST4 : 1;
} PMMA1TCTL4Bits_t;

typedef struct
{
    uint32 _PMMA1HWT5 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT5 : 1;
    uint32 _PMMA1TO5 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO5 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG5 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP5 : 1;
    uint32 _PMMA1ST5 : 1;
} PMMA1TCTL5Bits_t;

typedef struct
{
    uint32 _PMMA1HWT6 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT6 : 1;
    uint32 _PMMA1TO6 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO6 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG6 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP6 : 1;
    uint32 _PMMA1ST6 : 1;
} PMMA1TCTL6Bits_t;

typedef struct
{
    uint32 _PMMA1HWT7 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA1SWT7 : 1;
    uint32 _PMMA1TO7 : 2;
    uint32 _PMMA1MD : 1;
    uint32 _PMMA1PRIO7 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1TGLG7 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA1SP7 : 1;
    uint32 _PMMA1ST7 : 1;
} PMMA1TCTL7Bits_t;

typedef struct
{
    uint32 _PMMA1TTX0 : 32;
} PMMA1TTX0Bits_t;

typedef struct
{
    uint32 _PMMA1TTX1 : 32;
} PMMA1TTX1Bits_t;

typedef struct
{
    uint32 _PMMA1TTX2 : 32;
} PMMA1TTX2Bits_t;

typedef struct
{
    uint32 _PMMA1TTX3 : 32;
} PMMA1TTX3Bits_t;

typedef struct
{
    uint32 _PMMA1TTX4 : 32;
} PMMA1TTX4Bits_t;

typedef struct
{
    uint32 _PMMA1TTX5 : 32;
} PMMA1TTX5Bits_t;

typedef struct
{
    uint32 _PMMA1TTX6 : 32;
} PMMA1TTX6Bits_t;

typedef struct
{
    uint32 _PMMA1TTX7 : 32;
} PMMA1TTX7Bits_t;

typedef struct
{
    const uint32 _PMMA1RX : 32;
} PMMA1RXBits_t;

typedef struct
{
    const uint32 _PMMA1TCNT0 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT0Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT1 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT1Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT2 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT2Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT3 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT3Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT4 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT4Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT5 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT5Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT6 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT6Bits_t;

typedef struct
{
    const uint32 _PMMA1TCNT7 : 8;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
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
} PMMA1TCNT7Bits_t;

typedef struct
{
    const uint32 _PMMA1PF0 : 1;
    const uint32 _PMMA1PF1 : 1;
    const uint32 _PMMA1PF2 : 1;
    const uint32 _PMMA1PF3 : 1;
    const uint32 _PMMA1PF4 : 1;
    const uint32 _PMMA1PF5 : 1;
    const uint32 _PMMA1PF6 : 1;
    const uint32 _PMMA1PF7 : 1;
    const uint32 _PMMA1AF0 : 1;
    const uint32 _PMMA1AF1 : 1;
    const uint32 _PMMA1AF2 : 1;
    const uint32 _PMMA1AF3 : 1;
    const uint32 _PMMA1AF4 : 1;
    const uint32 _PMMA1AF5 : 1;
    const uint32 _PMMA1AF6 : 1;
    const uint32 _PMMA1AF7 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PMMA1EN0 : 1;
    const uint32 _PMMA1EN1 : 1;
    const uint32 _PMMA1EN2 : 1;
    const uint32 _PMMA1EN3 : 1;
    const uint32 _PMMA1EN4 : 1;
    const uint32 _PMMA1EN5 : 1;
    const uint32 _PMMA1EN6 : 1;
    const uint32 _PMMA1EN7 : 1;
} PMMA1STR0Bits_t;

typedef struct
{
    const uint32 _PMMA1TF0 : 1;
    const uint32 _PMMA1TF1 : 1;
    const uint32 _PMMA1TF2 : 1;
    const uint32 _PMMA1TF3 : 1;
    const uint32 _PMMA1TF4 : 1;
    const uint32 _PMMA1TF5 : 1;
    const uint32 _PMMA1TF6 : 1;
    const uint32 _PMMA1TF7 : 1;
    const uint32 _PMMA1RF0 : 1;
    const uint32 _PMMA1RF1 : 1;
    const uint32 _PMMA1RF2 : 1;
    const uint32 _PMMA1RF3 : 1;
    const uint32 _PMMA1RF4 : 1;
    const uint32 _PMMA1RF5 : 1;
    const uint32 _PMMA1RF6 : 1;
    const uint32 _PMMA1RF7 : 1;
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
} PMMA1STR1Bits_t;

typedef struct
{
    uint32 _PMMA1CLTF0 : 1;
    uint32 _PMMA1CLTF1 : 1;
    uint32 _PMMA1CLTF2 : 1;
    uint32 _PMMA1CLTF3 : 1;
    uint32 _PMMA1CLTF4 : 1;
    uint32 _PMMA1CLTF5 : 1;
    uint32 _PMMA1CLTF6 : 1;
    uint32 _PMMA1CLTF7 : 1;
    uint32 _PMMA1CLRF0 : 1;
    uint32 _PMMA1CLRF1 : 1;
    uint32 _PMMA1CLRF2 : 1;
    uint32 _PMMA1CLRF3 : 1;
    uint32 _PMMA1CLRF4 : 1;
    uint32 _PMMA1CLRF5 : 1;
    uint32 _PMMA1CLRF6 : 1;
    uint32 _PMMA1CLRF7 : 1;
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
} PMMA1STCBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PMMA1CTLBits_t BIT;
} PMMA1CTL_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL0Bits_t BIT;
} PMMA1TCTL0_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL1Bits_t BIT;
} PMMA1TCTL1_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL2Bits_t BIT;
} PMMA1TCTL2_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL3Bits_t BIT;
} PMMA1TCTL3_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL4Bits_t BIT;
} PMMA1TCTL4_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL5Bits_t BIT;
} PMMA1TCTL5_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL6Bits_t BIT;
} PMMA1TCTL6_t;

typedef union
{
    uint32 UINT32;
    PMMA1TCTL7Bits_t BIT;
} PMMA1TCTL7_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX0Bits_t BIT;
} PMMA1TTX0_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX1Bits_t BIT;
} PMMA1TTX1_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX2Bits_t BIT;
} PMMA1TTX2_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX3Bits_t BIT;
} PMMA1TTX3_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX4Bits_t BIT;
} PMMA1TTX4_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX5Bits_t BIT;
} PMMA1TTX5_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX6Bits_t BIT;
} PMMA1TTX6_t;

typedef union
{
    uint32 UINT32;
    PMMA1TTX7Bits_t BIT;
} PMMA1TTX7_t;

typedef union
{
    uint32 UINT32;
    const PMMA1RXBits_t BIT;
} PMMA1RX_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT0Bits_t BIT;
} PMMA1TCNT0_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT1Bits_t BIT;
} PMMA1TCNT1_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT2Bits_t BIT;
} PMMA1TCNT2_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT3Bits_t BIT;
} PMMA1TCNT3_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT4Bits_t BIT;
} PMMA1TCNT4_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT5Bits_t BIT;
} PMMA1TCNT5_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT6Bits_t BIT;
} PMMA1TCNT6_t;

typedef union
{
    uint32 UINT32;
    const PMMA1TCNT7Bits_t BIT;
} PMMA1TCNT7_t;

typedef union
{
    uint32 UINT32;
    const PMMA1STR0Bits_t BIT;
} PMMA1STR0_t;

typedef union
{
    uint32 UINT32;
    const PMMA1STR1Bits_t BIT;
} PMMA1STR1_t;

typedef union
{
    uint32 UINT32;
    PMMA1STCBits_t BIT;
} PMMA1STC_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PMMA1CTL_BASE, 0xFFCA2000, __READ_WRITE, PMMA1CTL_t);
__IOREG(PMMA1TCTL0_BASE, 0xFFCA2004, __READ_WRITE, PMMA1TCTL0_t);
__IOREG(PMMA1TCTL1_BASE, 0xFFCA2008, __READ_WRITE, PMMA1TCTL1_t);
__IOREG(PMMA1TCTL2_BASE, 0xFFCA200C, __READ_WRITE, PMMA1TCTL2_t);
__IOREG(PMMA1TCTL3_BASE, 0xFFCA2010, __READ_WRITE, PMMA1TCTL3_t);
__IOREG(PMMA1TCTL4_BASE, 0xFFCA2014, __READ_WRITE, PMMA1TCTL4_t);
__IOREG(PMMA1TCTL5_BASE, 0xFFCA2018, __READ_WRITE, PMMA1TCTL5_t);
__IOREG(PMMA1TCTL6_BASE, 0xFFCA201C, __READ_WRITE, PMMA1TCTL6_t);
__IOREG(PMMA1TCTL7_BASE, 0xFFCA2020, __READ_WRITE, PMMA1TCTL7_t);
__IOREG(PMMA1TTX0_BASE, 0xFFCA2024, __READ_WRITE, PMMA1TTX0_t);
__IOREG(PMMA1TTX1_BASE, 0xFFCA2028, __READ_WRITE, PMMA1TTX1_t);
__IOREG(PMMA1TTX2_BASE, 0xFFCA202C, __READ_WRITE, PMMA1TTX2_t);
__IOREG(PMMA1TTX3_BASE, 0xFFCA2030, __READ_WRITE, PMMA1TTX3_t);
__IOREG(PMMA1TTX4_BASE, 0xFFCA2034, __READ_WRITE, PMMA1TTX4_t);
__IOREG(PMMA1TTX5_BASE, 0xFFCA2038, __READ_WRITE, PMMA1TTX5_t);
__IOREG(PMMA1TTX6_BASE, 0xFFCA203C, __READ_WRITE, PMMA1TTX6_t);
__IOREG(PMMA1TTX7_BASE, 0xFFCA2040, __READ_WRITE, PMMA1TTX7_t);
__IOREG(PMMA1RX_BASE, 0xFFCA2044, __READ, PMMA1RX_t);
__IOREG(PMMA1TCNT0_BASE, 0xFFCA2048, __READ, PMMA1TCNT0_t);
__IOREG(PMMA1TCNT1_BASE, 0xFFCA204C, __READ, PMMA1TCNT1_t);
__IOREG(PMMA1TCNT2_BASE, 0xFFCA2050, __READ, PMMA1TCNT2_t);
__IOREG(PMMA1TCNT3_BASE, 0xFFCA2054, __READ, PMMA1TCNT3_t);
__IOREG(PMMA1TCNT4_BASE, 0xFFCA2058, __READ, PMMA1TCNT4_t);
__IOREG(PMMA1TCNT5_BASE, 0xFFCA205C, __READ, PMMA1TCNT5_t);
__IOREG(PMMA1TCNT6_BASE, 0xFFCA2060, __READ, PMMA1TCNT6_t);
__IOREG(PMMA1TCNT7_BASE, 0xFFCA2064, __READ, PMMA1TCNT7_t);
__IOREG(PMMA1STR0_BASE, 0xFFCA2068, __READ, PMMA1STR0_t);
__IOREG(PMMA1STR1_BASE, 0xFFCA206C, __READ, PMMA1STR1_t);
__IOREG(PMMA1STC_BASE, 0xFFCA2070, __READ_WRITE, PMMA1STC_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PMMA1CTL PMMA1CTL_BASE.UINT32
#define PMMA1CTL_PMMA1PWR PMMA1CTL_BASE.BIT._PMMA1PWR
#define PMMA1TCTL0 PMMA1TCTL0_BASE.UINT32
#define PMMA1TCTL0_PMMA1HWT0 PMMA1TCTL0_BASE.BIT._PMMA1HWT0
#define PMMA1TCTL0_PMMA1SWT0 PMMA1TCTL0_BASE.BIT._PMMA1SWT0
#define PMMA1TCTL0_PMMA1TO0 PMMA1TCTL0_BASE.BIT._PMMA1TO0
#define PMMA1TCTL0_PMMA1MD PMMA1TCTL0_BASE.BIT._PMMA1MD
#define PMMA1TCTL0_PMMA1PRIO0 PMMA1TCTL0_BASE.BIT._PMMA1PRIO0
#define PMMA1TCTL0_CSIH1TGLG0 PMMA1TCTL0_BASE.BIT._CSIH1TGLG0
#define PMMA1TCTL0_PMMA1SP0 PMMA1TCTL0_BASE.BIT._PMMA1SP0
#define PMMA1TCTL0_PMMA1ST0 PMMA1TCTL0_BASE.BIT._PMMA1ST0
#define PMMA1TCTL1 PMMA1TCTL1_BASE.UINT32
#define PMMA1TCTL1_PMMA1HWT1 PMMA1TCTL1_BASE.BIT._PMMA1HWT1
#define PMMA1TCTL1_PMMA1SWT1 PMMA1TCTL1_BASE.BIT._PMMA1SWT1
#define PMMA1TCTL1_PMMA1TO1 PMMA1TCTL1_BASE.BIT._PMMA1TO1
#define PMMA1TCTL1_PMMA1MD PMMA1TCTL1_BASE.BIT._PMMA1MD
#define PMMA1TCTL1_PMMA1PRIO1 PMMA1TCTL1_BASE.BIT._PMMA1PRIO1
#define PMMA1TCTL1_CSIH1TGLG1 PMMA1TCTL1_BASE.BIT._CSIH1TGLG1
#define PMMA1TCTL1_PMMA1SP1 PMMA1TCTL1_BASE.BIT._PMMA1SP1
#define PMMA1TCTL1_PMMA1ST1 PMMA1TCTL1_BASE.BIT._PMMA1ST1
#define PMMA1TCTL2 PMMA1TCTL2_BASE.UINT32
#define PMMA1TCTL2_PMMA1HWT2 PMMA1TCTL2_BASE.BIT._PMMA1HWT2
#define PMMA1TCTL2_PMMA1SWT2 PMMA1TCTL2_BASE.BIT._PMMA1SWT2
#define PMMA1TCTL2_PMMA1TO2 PMMA1TCTL2_BASE.BIT._PMMA1TO2
#define PMMA1TCTL2_PMMA1MD PMMA1TCTL2_BASE.BIT._PMMA1MD
#define PMMA1TCTL2_PMMA1PRIO2 PMMA1TCTL2_BASE.BIT._PMMA1PRIO2
#define PMMA1TCTL2_CSIH1TGLG2 PMMA1TCTL2_BASE.BIT._CSIH1TGLG2
#define PMMA1TCTL2_PMMA1SP2 PMMA1TCTL2_BASE.BIT._PMMA1SP2
#define PMMA1TCTL2_PMMA1ST2 PMMA1TCTL2_BASE.BIT._PMMA1ST2
#define PMMA1TCTL3 PMMA1TCTL3_BASE.UINT32
#define PMMA1TCTL3_PMMA1HWT3 PMMA1TCTL3_BASE.BIT._PMMA1HWT3
#define PMMA1TCTL3_PMMA1SWT3 PMMA1TCTL3_BASE.BIT._PMMA1SWT3
#define PMMA1TCTL3_PMMA1TO3 PMMA1TCTL3_BASE.BIT._PMMA1TO3
#define PMMA1TCTL3_PMMA1MD PMMA1TCTL3_BASE.BIT._PMMA1MD
#define PMMA1TCTL3_PMMA1PRIO3 PMMA1TCTL3_BASE.BIT._PMMA1PRIO3
#define PMMA1TCTL3_CSIH1TGLG3 PMMA1TCTL3_BASE.BIT._CSIH1TGLG3
#define PMMA1TCTL3_PMMA1SP3 PMMA1TCTL3_BASE.BIT._PMMA1SP3
#define PMMA1TCTL3_PMMA1ST3 PMMA1TCTL3_BASE.BIT._PMMA1ST3
#define PMMA1TCTL4 PMMA1TCTL4_BASE.UINT32
#define PMMA1TCTL4_PMMA1HWT4 PMMA1TCTL4_BASE.BIT._PMMA1HWT4
#define PMMA1TCTL4_PMMA1SWT4 PMMA1TCTL4_BASE.BIT._PMMA1SWT4
#define PMMA1TCTL4_PMMA1TO4 PMMA1TCTL4_BASE.BIT._PMMA1TO4
#define PMMA1TCTL4_PMMA1MD PMMA1TCTL4_BASE.BIT._PMMA1MD
#define PMMA1TCTL4_PMMA1PRIO4 PMMA1TCTL4_BASE.BIT._PMMA1PRIO4
#define PMMA1TCTL4_CSIH1TGLG4 PMMA1TCTL4_BASE.BIT._CSIH1TGLG4
#define PMMA1TCTL4_PMMA1SP4 PMMA1TCTL4_BASE.BIT._PMMA1SP4
#define PMMA1TCTL4_PMMA1ST4 PMMA1TCTL4_BASE.BIT._PMMA1ST4
#define PMMA1TCTL5 PMMA1TCTL5_BASE.UINT32
#define PMMA1TCTL5_PMMA1HWT5 PMMA1TCTL5_BASE.BIT._PMMA1HWT5
#define PMMA1TCTL5_PMMA1SWT5 PMMA1TCTL5_BASE.BIT._PMMA1SWT5
#define PMMA1TCTL5_PMMA1TO5 PMMA1TCTL5_BASE.BIT._PMMA1TO5
#define PMMA1TCTL5_PMMA1MD PMMA1TCTL5_BASE.BIT._PMMA1MD
#define PMMA1TCTL5_PMMA1PRIO5 PMMA1TCTL5_BASE.BIT._PMMA1PRIO5
#define PMMA1TCTL5_CSIH1TGLG5 PMMA1TCTL5_BASE.BIT._CSIH1TGLG5
#define PMMA1TCTL5_PMMA1SP5 PMMA1TCTL5_BASE.BIT._PMMA1SP5
#define PMMA1TCTL5_PMMA1ST5 PMMA1TCTL5_BASE.BIT._PMMA1ST5
#define PMMA1TCTL6 PMMA1TCTL6_BASE.UINT32
#define PMMA1TCTL6_PMMA1HWT6 PMMA1TCTL6_BASE.BIT._PMMA1HWT6
#define PMMA1TCTL6_PMMA1SWT6 PMMA1TCTL6_BASE.BIT._PMMA1SWT6
#define PMMA1TCTL6_PMMA1TO6 PMMA1TCTL6_BASE.BIT._PMMA1TO6
#define PMMA1TCTL6_PMMA1MD PMMA1TCTL6_BASE.BIT._PMMA1MD
#define PMMA1TCTL6_PMMA1PRIO6 PMMA1TCTL6_BASE.BIT._PMMA1PRIO6
#define PMMA1TCTL6_CSIH1TGLG6 PMMA1TCTL6_BASE.BIT._CSIH1TGLG6
#define PMMA1TCTL6_PMMA1SP6 PMMA1TCTL6_BASE.BIT._PMMA1SP6
#define PMMA1TCTL6_PMMA1ST6 PMMA1TCTL6_BASE.BIT._PMMA1ST6
#define PMMA1TCTL7 PMMA1TCTL7_BASE.UINT32
#define PMMA1TCTL7_PMMA1HWT7 PMMA1TCTL7_BASE.BIT._PMMA1HWT7
#define PMMA1TCTL7_PMMA1SWT7 PMMA1TCTL7_BASE.BIT._PMMA1SWT7
#define PMMA1TCTL7_PMMA1TO7 PMMA1TCTL7_BASE.BIT._PMMA1TO7
#define PMMA1TCTL7_PMMA1MD PMMA1TCTL7_BASE.BIT._PMMA1MD
#define PMMA1TCTL7_PMMA1PRIO7 PMMA1TCTL7_BASE.BIT._PMMA1PRIO7
#define PMMA1TCTL7_CSIH1TGLG7 PMMA1TCTL7_BASE.BIT._CSIH1TGLG7
#define PMMA1TCTL7_PMMA1SP7 PMMA1TCTL7_BASE.BIT._PMMA1SP7
#define PMMA1TCTL7_PMMA1ST7 PMMA1TCTL7_BASE.BIT._PMMA1ST7
#define PMMA1TTX0 PMMA1TTX0_BASE.UINT32
#define PMMA1TTX0_PMMA1TTX0 PMMA1TTX0_BASE.BIT._PMMA1TTX0
#define PMMA1TTX1 PMMA1TTX1_BASE.UINT32
#define PMMA1TTX1_PMMA1TTX1 PMMA1TTX1_BASE.BIT._PMMA1TTX1
#define PMMA1TTX2 PMMA1TTX2_BASE.UINT32
#define PMMA1TTX2_PMMA1TTX2 PMMA1TTX2_BASE.BIT._PMMA1TTX2
#define PMMA1TTX3 PMMA1TTX3_BASE.UINT32
#define PMMA1TTX3_PMMA1TTX3 PMMA1TTX3_BASE.BIT._PMMA1TTX3
#define PMMA1TTX4 PMMA1TTX4_BASE.UINT32
#define PMMA1TTX4_PMMA1TTX4 PMMA1TTX4_BASE.BIT._PMMA1TTX4
#define PMMA1TTX5 PMMA1TTX5_BASE.UINT32
#define PMMA1TTX5_PMMA1TTX5 PMMA1TTX5_BASE.BIT._PMMA1TTX5
#define PMMA1TTX6 PMMA1TTX6_BASE.UINT32
#define PMMA1TTX6_PMMA1TTX6 PMMA1TTX6_BASE.BIT._PMMA1TTX6
#define PMMA1TTX7 PMMA1TTX7_BASE.UINT32
#define PMMA1TTX7_PMMA1TTX7 PMMA1TTX7_BASE.BIT._PMMA1TTX7
#define PMMA1RX PMMA1RX_BASE.UINT32
#define PMMA1RX_PMMA1RX PMMA1RX_BASE.BIT._PMMA1RX
#define PMMA1TCNT0 PMMA1TCNT0_BASE.UINT32
#define PMMA1TCNT0_PMMA1TCNT0 PMMA1TCNT0_BASE.BIT._PMMA1TCNT0
#define PMMA1TCNT1 PMMA1TCNT1_BASE.UINT32
#define PMMA1TCNT1_PMMA1TCNT1 PMMA1TCNT1_BASE.BIT._PMMA1TCNT1
#define PMMA1TCNT2 PMMA1TCNT2_BASE.UINT32
#define PMMA1TCNT2_PMMA1TCNT2 PMMA1TCNT2_BASE.BIT._PMMA1TCNT2
#define PMMA1TCNT3 PMMA1TCNT3_BASE.UINT32
#define PMMA1TCNT3_PMMA1TCNT3 PMMA1TCNT3_BASE.BIT._PMMA1TCNT3
#define PMMA1TCNT4 PMMA1TCNT4_BASE.UINT32
#define PMMA1TCNT4_PMMA1TCNT4 PMMA1TCNT4_BASE.BIT._PMMA1TCNT4
#define PMMA1TCNT5 PMMA1TCNT5_BASE.UINT32
#define PMMA1TCNT5_PMMA1TCNT5 PMMA1TCNT5_BASE.BIT._PMMA1TCNT5
#define PMMA1TCNT6 PMMA1TCNT6_BASE.UINT32
#define PMMA1TCNT6_PMMA1TCNT6 PMMA1TCNT6_BASE.BIT._PMMA1TCNT6
#define PMMA1TCNT7 PMMA1TCNT7_BASE.UINT32
#define PMMA1TCNT7_PMMA1TCNT7 PMMA1TCNT7_BASE.BIT._PMMA1TCNT7
#define PMMA1STR0 PMMA1STR0_BASE.UINT32
#define PMMA1STR0_PMMA1PF0 PMMA1STR0_BASE.BIT._PMMA1PF0
#define PMMA1STR0_PMMA1PF1 PMMA1STR0_BASE.BIT._PMMA1PF1
#define PMMA1STR0_PMMA1PF2 PMMA1STR0_BASE.BIT._PMMA1PF2
#define PMMA1STR0_PMMA1PF3 PMMA1STR0_BASE.BIT._PMMA1PF3
#define PMMA1STR0_PMMA1PF4 PMMA1STR0_BASE.BIT._PMMA1PF4
#define PMMA1STR0_PMMA1PF5 PMMA1STR0_BASE.BIT._PMMA1PF5
#define PMMA1STR0_PMMA1PF6 PMMA1STR0_BASE.BIT._PMMA1PF6
#define PMMA1STR0_PMMA1PF7 PMMA1STR0_BASE.BIT._PMMA1PF7
#define PMMA1STR0_PMMA1AF0 PMMA1STR0_BASE.BIT._PMMA1AF0
#define PMMA1STR0_PMMA1AF1 PMMA1STR0_BASE.BIT._PMMA1AF1
#define PMMA1STR0_PMMA1AF2 PMMA1STR0_BASE.BIT._PMMA1AF2
#define PMMA1STR0_PMMA1AF3 PMMA1STR0_BASE.BIT._PMMA1AF3
#define PMMA1STR0_PMMA1AF4 PMMA1STR0_BASE.BIT._PMMA1AF4
#define PMMA1STR0_PMMA1AF5 PMMA1STR0_BASE.BIT._PMMA1AF5
#define PMMA1STR0_PMMA1AF6 PMMA1STR0_BASE.BIT._PMMA1AF6
#define PMMA1STR0_PMMA1AF7 PMMA1STR0_BASE.BIT._PMMA1AF7
#define PMMA1STR0_PMMA1EN0 PMMA1STR0_BASE.BIT._PMMA1EN0
#define PMMA1STR0_PMMA1EN1 PMMA1STR0_BASE.BIT._PMMA1EN1
#define PMMA1STR0_PMMA1EN2 PMMA1STR0_BASE.BIT._PMMA1EN2
#define PMMA1STR0_PMMA1EN3 PMMA1STR0_BASE.BIT._PMMA1EN3
#define PMMA1STR0_PMMA1EN4 PMMA1STR0_BASE.BIT._PMMA1EN4
#define PMMA1STR0_PMMA1EN5 PMMA1STR0_BASE.BIT._PMMA1EN5
#define PMMA1STR0_PMMA1EN6 PMMA1STR0_BASE.BIT._PMMA1EN6
#define PMMA1STR0_PMMA1EN7 PMMA1STR0_BASE.BIT._PMMA1EN7
#define PMMA1STR1 PMMA1STR1_BASE.UINT32
#define PMMA1STR1_PMMA1TF0 PMMA1STR1_BASE.BIT._PMMA1TF0
#define PMMA1STR1_PMMA1TF1 PMMA1STR1_BASE.BIT._PMMA1TF1
#define PMMA1STR1_PMMA1TF2 PMMA1STR1_BASE.BIT._PMMA1TF2
#define PMMA1STR1_PMMA1TF3 PMMA1STR1_BASE.BIT._PMMA1TF3
#define PMMA1STR1_PMMA1TF4 PMMA1STR1_BASE.BIT._PMMA1TF4
#define PMMA1STR1_PMMA1TF5 PMMA1STR1_BASE.BIT._PMMA1TF5
#define PMMA1STR1_PMMA1TF6 PMMA1STR1_BASE.BIT._PMMA1TF6
#define PMMA1STR1_PMMA1TF7 PMMA1STR1_BASE.BIT._PMMA1TF7
#define PMMA1STR1_PMMA1RF0 PMMA1STR1_BASE.BIT._PMMA1RF0
#define PMMA1STR1_PMMA1RF1 PMMA1STR1_BASE.BIT._PMMA1RF1
#define PMMA1STR1_PMMA1RF2 PMMA1STR1_BASE.BIT._PMMA1RF2
#define PMMA1STR1_PMMA1RF3 PMMA1STR1_BASE.BIT._PMMA1RF3
#define PMMA1STR1_PMMA1RF4 PMMA1STR1_BASE.BIT._PMMA1RF4
#define PMMA1STR1_PMMA1RF5 PMMA1STR1_BASE.BIT._PMMA1RF5
#define PMMA1STR1_PMMA1RF6 PMMA1STR1_BASE.BIT._PMMA1RF6
#define PMMA1STR1_PMMA1RF7 PMMA1STR1_BASE.BIT._PMMA1RF7
#define PMMA1STC PMMA1STC_BASE.UINT32
#define PMMA1STC_PMMA1CLTF0 PMMA1STC_BASE.BIT._PMMA1CLTF0
#define PMMA1STC_PMMA1CLTF1 PMMA1STC_BASE.BIT._PMMA1CLTF1
#define PMMA1STC_PMMA1CLTF2 PMMA1STC_BASE.BIT._PMMA1CLTF2
#define PMMA1STC_PMMA1CLTF3 PMMA1STC_BASE.BIT._PMMA1CLTF3
#define PMMA1STC_PMMA1CLTF4 PMMA1STC_BASE.BIT._PMMA1CLTF4
#define PMMA1STC_PMMA1CLTF5 PMMA1STC_BASE.BIT._PMMA1CLTF5
#define PMMA1STC_PMMA1CLTF6 PMMA1STC_BASE.BIT._PMMA1CLTF6
#define PMMA1STC_PMMA1CLTF7 PMMA1STC_BASE.BIT._PMMA1CLTF7
#define PMMA1STC_PMMA1CLRF0 PMMA1STC_BASE.BIT._PMMA1CLRF0
#define PMMA1STC_PMMA1CLRF1 PMMA1STC_BASE.BIT._PMMA1CLRF1
#define PMMA1STC_PMMA1CLRF2 PMMA1STC_BASE.BIT._PMMA1CLRF2
#define PMMA1STC_PMMA1CLRF3 PMMA1STC_BASE.BIT._PMMA1CLRF3
#define PMMA1STC_PMMA1CLRF4 PMMA1STC_BASE.BIT._PMMA1CLRF4
#define PMMA1STC_PMMA1CLRF5 PMMA1STC_BASE.BIT._PMMA1CLRF5
#define PMMA1STC_PMMA1CLRF6 PMMA1STC_BASE.BIT._PMMA1CLRF6
#define PMMA1STC_PMMA1CLRF7 PMMA1STC_BASE.BIT._PMMA1CLRF7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif