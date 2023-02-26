#ifndef __DR7F701373_PMMA0_HEADER__
#define __DR7F701373_PMMA0_HEADER__



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
    uint32 _PMMA0PWR : 1;
} PMMA0CTLBits_t;

typedef struct
{
    uint32 _PMMA0HWT0 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT0 : 1;
    uint32 _PMMA0TO0 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO0 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG0 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP0 : 1;
    uint32 _PMMA0ST0 : 1;
} PMMA0TCTL0Bits_t;

typedef struct
{
    uint32 _PMMA0HWT1 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT1 : 1;
    uint32 _PMMA0TO1 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO1 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG1 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP1 : 1;
    uint32 _PMMA0ST1 : 1;
} PMMA0TCTL1Bits_t;

typedef struct
{
    uint32 _PMMA0HWT2 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT2 : 1;
    uint32 _PMMA0TO2 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO2 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG2 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP2 : 1;
    uint32 _PMMA0ST2 : 1;
} PMMA0TCTL2Bits_t;

typedef struct
{
    uint32 _PMMA0HWT3 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT3 : 1;
    uint32 _PMMA0TO3 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO3 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG3 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP3 : 1;
    uint32 _PMMA0ST3 : 1;
} PMMA0TCTL3Bits_t;

typedef struct
{
    uint32 _PMMA0HWT4 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT4 : 1;
    uint32 _PMMA0TO4 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO4 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG4 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP4 : 1;
    uint32 _PMMA0ST4 : 1;
} PMMA0TCTL4Bits_t;

typedef struct
{
    uint32 _PMMA0HWT5 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT5 : 1;
    uint32 _PMMA0TO5 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO5 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG5 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP5 : 1;
    uint32 _PMMA0ST5 : 1;
} PMMA0TCTL5Bits_t;

typedef struct
{
    uint32 _PMMA0HWT6 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT6 : 1;
    uint32 _PMMA0TO6 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO6 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG6 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP6 : 1;
    uint32 _PMMA0ST6 : 1;
} PMMA0TCTL6Bits_t;

typedef struct
{
    uint32 _PMMA0HWT7 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA0SWT7 : 1;
    uint32 _PMMA0TO7 : 2;
    uint32 _PMMA0MD : 1;
    uint32 _PMMA0PRIO7 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0TGLG7 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA0SP7 : 1;
    uint32 _PMMA0ST7 : 1;
} PMMA0TCTL7Bits_t;

typedef struct
{
    uint32 _PMMA0TTX0 : 32;
} PMMA0TTX0Bits_t;

typedef struct
{
    uint32 _PMMA0TTX1 : 32;
} PMMA0TTX1Bits_t;

typedef struct
{
    uint32 _PMMA0TTX2 : 32;
} PMMA0TTX2Bits_t;

typedef struct
{
    uint32 _PMMA0TTX3 : 32;
} PMMA0TTX3Bits_t;

typedef struct
{
    uint32 _PMMA0TTX4 : 32;
} PMMA0TTX4Bits_t;

typedef struct
{
    uint32 _PMMA0TTX5 : 32;
} PMMA0TTX5Bits_t;

typedef struct
{
    uint32 _PMMA0TTX6 : 32;
} PMMA0TTX6Bits_t;

typedef struct
{
    uint32 _PMMA0TTX7 : 32;
} PMMA0TTX7Bits_t;

typedef struct
{
    const uint32 _PMMA0RX : 32;
} PMMA0RXBits_t;

typedef struct
{
    const uint32 _PMMA0TCNT0 : 8;
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
} PMMA0TCNT0Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT1 : 8;
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
} PMMA0TCNT1Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT2 : 8;
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
} PMMA0TCNT2Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT3 : 8;
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
} PMMA0TCNT3Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT4 : 8;
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
} PMMA0TCNT4Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT5 : 8;
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
} PMMA0TCNT5Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT6 : 8;
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
} PMMA0TCNT6Bits_t;

typedef struct
{
    const uint32 _PMMA0TCNT7 : 8;
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
} PMMA0TCNT7Bits_t;

typedef struct
{
    const uint32 _PMMA0PF0 : 1;
    const uint32 _PMMA0PF1 : 1;
    const uint32 _PMMA0PF2 : 1;
    const uint32 _PMMA0PF3 : 1;
    const uint32 _PMMA0PF4 : 1;
    const uint32 _PMMA0PF5 : 1;
    const uint32 _PMMA0PF6 : 1;
    const uint32 _PMMA0PF7 : 1;
    const uint32 _PMMA0AF0 : 1;
    const uint32 _PMMA0AF1 : 1;
    const uint32 _PMMA0AF2 : 1;
    const uint32 _PMMA0AF3 : 1;
    const uint32 _PMMA0AF4 : 1;
    const uint32 _PMMA0AF5 : 1;
    const uint32 _PMMA0AF6 : 1;
    const uint32 _PMMA0AF7 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PMMA0EN0 : 1;
    const uint32 _PMMA0EN1 : 1;
    const uint32 _PMMA0EN2 : 1;
    const uint32 _PMMA0EN3 : 1;
    const uint32 _PMMA0EN4 : 1;
    const uint32 _PMMA0EN5 : 1;
    const uint32 _PMMA0EN6 : 1;
    const uint32 _PMMA0EN7 : 1;
} PMMA0STR0Bits_t;

typedef struct
{
    const uint32 _PMMA0TF0 : 1;
    const uint32 _PMMA0TF1 : 1;
    const uint32 _PMMA0TF2 : 1;
    const uint32 _PMMA0TF3 : 1;
    const uint32 _PMMA0TF4 : 1;
    const uint32 _PMMA0TF5 : 1;
    const uint32 _PMMA0TF6 : 1;
    const uint32 _PMMA0TF7 : 1;
    const uint32 _PMMA0RF0 : 1;
    const uint32 _PMMA0RF1 : 1;
    const uint32 _PMMA0RF2 : 1;
    const uint32 _PMMA0RF3 : 1;
    const uint32 _PMMA0RF4 : 1;
    const uint32 _PMMA0RF5 : 1;
    const uint32 _PMMA0RF6 : 1;
    const uint32 _PMMA0RF7 : 1;
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
} PMMA0STR1Bits_t;

typedef struct
{
    uint32 _PMMA0CLTF0 : 1;
    uint32 _PMMA0CLTF1 : 1;
    uint32 _PMMA0CLTF2 : 1;
    uint32 _PMMA0CLTF3 : 1;
    uint32 _PMMA0CLTF4 : 1;
    uint32 _PMMA0CLTF5 : 1;
    uint32 _PMMA0CLTF6 : 1;
    uint32 _PMMA0CLTF7 : 1;
    uint32 _PMMA0CLRF0 : 1;
    uint32 _PMMA0CLRF1 : 1;
    uint32 _PMMA0CLRF2 : 1;
    uint32 _PMMA0CLRF3 : 1;
    uint32 _PMMA0CLRF4 : 1;
    uint32 _PMMA0CLRF5 : 1;
    uint32 _PMMA0CLRF6 : 1;
    uint32 _PMMA0CLRF7 : 1;
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
} PMMA0STCBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PMMA0CTLBits_t BIT;
} PMMA0CTL_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL0Bits_t BIT;
} PMMA0TCTL0_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL1Bits_t BIT;
} PMMA0TCTL1_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL2Bits_t BIT;
} PMMA0TCTL2_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL3Bits_t BIT;
} PMMA0TCTL3_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL4Bits_t BIT;
} PMMA0TCTL4_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL5Bits_t BIT;
} PMMA0TCTL5_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL6Bits_t BIT;
} PMMA0TCTL6_t;

typedef union
{
    uint32 UINT32;
    PMMA0TCTL7Bits_t BIT;
} PMMA0TCTL7_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX0Bits_t BIT;
} PMMA0TTX0_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX1Bits_t BIT;
} PMMA0TTX1_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX2Bits_t BIT;
} PMMA0TTX2_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX3Bits_t BIT;
} PMMA0TTX3_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX4Bits_t BIT;
} PMMA0TTX4_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX5Bits_t BIT;
} PMMA0TTX5_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX6Bits_t BIT;
} PMMA0TTX6_t;

typedef union
{
    uint32 UINT32;
    PMMA0TTX7Bits_t BIT;
} PMMA0TTX7_t;

typedef union
{
    uint32 UINT32;
    const PMMA0RXBits_t BIT;
} PMMA0RX_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT0Bits_t BIT;
} PMMA0TCNT0_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT1Bits_t BIT;
} PMMA0TCNT1_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT2Bits_t BIT;
} PMMA0TCNT2_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT3Bits_t BIT;
} PMMA0TCNT3_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT4Bits_t BIT;
} PMMA0TCNT4_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT5Bits_t BIT;
} PMMA0TCNT5_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT6Bits_t BIT;
} PMMA0TCNT6_t;

typedef union
{
    uint32 UINT32;
    const PMMA0TCNT7Bits_t BIT;
} PMMA0TCNT7_t;

typedef union
{
    uint32 UINT32;
    const PMMA0STR0Bits_t BIT;
} PMMA0STR0_t;

typedef union
{
    uint32 UINT32;
    const PMMA0STR1Bits_t BIT;
} PMMA0STR1_t;

typedef union
{
    uint32 UINT32;
    PMMA0STCBits_t BIT;
} PMMA0STC_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PMMA0CTL_BASE, 0xFFD82000, __READ_WRITE, PMMA0CTL_t);
__IOREG(PMMA0TCTL0_BASE, 0xFFD82004, __READ_WRITE, PMMA0TCTL0_t);
__IOREG(PMMA0TCTL1_BASE, 0xFFD82008, __READ_WRITE, PMMA0TCTL1_t);
__IOREG(PMMA0TCTL2_BASE, 0xFFD8200C, __READ_WRITE, PMMA0TCTL2_t);
__IOREG(PMMA0TCTL3_BASE, 0xFFD82010, __READ_WRITE, PMMA0TCTL3_t);
__IOREG(PMMA0TCTL4_BASE, 0xFFD82014, __READ_WRITE, PMMA0TCTL4_t);
__IOREG(PMMA0TCTL5_BASE, 0xFFD82018, __READ_WRITE, PMMA0TCTL5_t);
__IOREG(PMMA0TCTL6_BASE, 0xFFD8201C, __READ_WRITE, PMMA0TCTL6_t);
__IOREG(PMMA0TCTL7_BASE, 0xFFD82020, __READ_WRITE, PMMA0TCTL7_t);
__IOREG(PMMA0TTX0_BASE, 0xFFD82024, __READ_WRITE, PMMA0TTX0_t);
__IOREG(PMMA0TTX1_BASE, 0xFFD82028, __READ_WRITE, PMMA0TTX1_t);
__IOREG(PMMA0TTX2_BASE, 0xFFD8202C, __READ_WRITE, PMMA0TTX2_t);
__IOREG(PMMA0TTX3_BASE, 0xFFD82030, __READ_WRITE, PMMA0TTX3_t);
__IOREG(PMMA0TTX4_BASE, 0xFFD82034, __READ_WRITE, PMMA0TTX4_t);
__IOREG(PMMA0TTX5_BASE, 0xFFD82038, __READ_WRITE, PMMA0TTX5_t);
__IOREG(PMMA0TTX6_BASE, 0xFFD8203C, __READ_WRITE, PMMA0TTX6_t);
__IOREG(PMMA0TTX7_BASE, 0xFFD82040, __READ_WRITE, PMMA0TTX7_t);
__IOREG(PMMA0RX_BASE, 0xFFD82044, __READ, PMMA0RX_t);
__IOREG(PMMA0TCNT0_BASE, 0xFFD82048, __READ, PMMA0TCNT0_t);
__IOREG(PMMA0TCNT1_BASE, 0xFFD8204C, __READ, PMMA0TCNT1_t);
__IOREG(PMMA0TCNT2_BASE, 0xFFD82050, __READ, PMMA0TCNT2_t);
__IOREG(PMMA0TCNT3_BASE, 0xFFD82054, __READ, PMMA0TCNT3_t);
__IOREG(PMMA0TCNT4_BASE, 0xFFD82058, __READ, PMMA0TCNT4_t);
__IOREG(PMMA0TCNT5_BASE, 0xFFD8205C, __READ, PMMA0TCNT5_t);
__IOREG(PMMA0TCNT6_BASE, 0xFFD82060, __READ, PMMA0TCNT6_t);
__IOREG(PMMA0TCNT7_BASE, 0xFFD82064, __READ, PMMA0TCNT7_t);
__IOREG(PMMA0STR0_BASE, 0xFFD82068, __READ, PMMA0STR0_t);
__IOREG(PMMA0STR1_BASE, 0xFFD8206C, __READ, PMMA0STR1_t);
__IOREG(PMMA0STC_BASE, 0xFFD82070, __READ_WRITE, PMMA0STC_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PMMA0CTL PMMA0CTL_BASE.UINT32
#define PMMA0CTL_PMMA0PWR PMMA0CTL_BASE.BIT._PMMA0PWR
#define PMMA0TCTL0 PMMA0TCTL0_BASE.UINT32
#define PMMA0TCTL0_PMMA0HWT0 PMMA0TCTL0_BASE.BIT._PMMA0HWT0
#define PMMA0TCTL0_PMMA0SWT0 PMMA0TCTL0_BASE.BIT._PMMA0SWT0
#define PMMA0TCTL0_PMMA0TO0 PMMA0TCTL0_BASE.BIT._PMMA0TO0
#define PMMA0TCTL0_PMMA0MD PMMA0TCTL0_BASE.BIT._PMMA0MD
#define PMMA0TCTL0_PMMA0PRIO0 PMMA0TCTL0_BASE.BIT._PMMA0PRIO0
#define PMMA0TCTL0_CSIH0TGLG0 PMMA0TCTL0_BASE.BIT._CSIH0TGLG0
#define PMMA0TCTL0_PMMA0SP0 PMMA0TCTL0_BASE.BIT._PMMA0SP0
#define PMMA0TCTL0_PMMA0ST0 PMMA0TCTL0_BASE.BIT._PMMA0ST0
#define PMMA0TCTL1 PMMA0TCTL1_BASE.UINT32
#define PMMA0TCTL1_PMMA0HWT1 PMMA0TCTL1_BASE.BIT._PMMA0HWT1
#define PMMA0TCTL1_PMMA0SWT1 PMMA0TCTL1_BASE.BIT._PMMA0SWT1
#define PMMA0TCTL1_PMMA0TO1 PMMA0TCTL1_BASE.BIT._PMMA0TO1
#define PMMA0TCTL1_PMMA0MD PMMA0TCTL1_BASE.BIT._PMMA0MD
#define PMMA0TCTL1_PMMA0PRIO1 PMMA0TCTL1_BASE.BIT._PMMA0PRIO1
#define PMMA0TCTL1_CSIH0TGLG1 PMMA0TCTL1_BASE.BIT._CSIH0TGLG1
#define PMMA0TCTL1_PMMA0SP1 PMMA0TCTL1_BASE.BIT._PMMA0SP1
#define PMMA0TCTL1_PMMA0ST1 PMMA0TCTL1_BASE.BIT._PMMA0ST1
#define PMMA0TCTL2 PMMA0TCTL2_BASE.UINT32
#define PMMA0TCTL2_PMMA0HWT2 PMMA0TCTL2_BASE.BIT._PMMA0HWT2
#define PMMA0TCTL2_PMMA0SWT2 PMMA0TCTL2_BASE.BIT._PMMA0SWT2
#define PMMA0TCTL2_PMMA0TO2 PMMA0TCTL2_BASE.BIT._PMMA0TO2
#define PMMA0TCTL2_PMMA0MD PMMA0TCTL2_BASE.BIT._PMMA0MD
#define PMMA0TCTL2_PMMA0PRIO2 PMMA0TCTL2_BASE.BIT._PMMA0PRIO2
#define PMMA0TCTL2_CSIH0TGLG2 PMMA0TCTL2_BASE.BIT._CSIH0TGLG2
#define PMMA0TCTL2_PMMA0SP2 PMMA0TCTL2_BASE.BIT._PMMA0SP2
#define PMMA0TCTL2_PMMA0ST2 PMMA0TCTL2_BASE.BIT._PMMA0ST2
#define PMMA0TCTL3 PMMA0TCTL3_BASE.UINT32
#define PMMA0TCTL3_PMMA0HWT3 PMMA0TCTL3_BASE.BIT._PMMA0HWT3
#define PMMA0TCTL3_PMMA0SWT3 PMMA0TCTL3_BASE.BIT._PMMA0SWT3
#define PMMA0TCTL3_PMMA0TO3 PMMA0TCTL3_BASE.BIT._PMMA0TO3
#define PMMA0TCTL3_PMMA0MD PMMA0TCTL3_BASE.BIT._PMMA0MD
#define PMMA0TCTL3_PMMA0PRIO3 PMMA0TCTL3_BASE.BIT._PMMA0PRIO3
#define PMMA0TCTL3_CSIH0TGLG3 PMMA0TCTL3_BASE.BIT._CSIH0TGLG3
#define PMMA0TCTL3_PMMA0SP3 PMMA0TCTL3_BASE.BIT._PMMA0SP3
#define PMMA0TCTL3_PMMA0ST3 PMMA0TCTL3_BASE.BIT._PMMA0ST3
#define PMMA0TCTL4 PMMA0TCTL4_BASE.UINT32
#define PMMA0TCTL4_PMMA0HWT4 PMMA0TCTL4_BASE.BIT._PMMA0HWT4
#define PMMA0TCTL4_PMMA0SWT4 PMMA0TCTL4_BASE.BIT._PMMA0SWT4
#define PMMA0TCTL4_PMMA0TO4 PMMA0TCTL4_BASE.BIT._PMMA0TO4
#define PMMA0TCTL4_PMMA0MD PMMA0TCTL4_BASE.BIT._PMMA0MD
#define PMMA0TCTL4_PMMA0PRIO4 PMMA0TCTL4_BASE.BIT._PMMA0PRIO4
#define PMMA0TCTL4_CSIH0TGLG4 PMMA0TCTL4_BASE.BIT._CSIH0TGLG4
#define PMMA0TCTL4_PMMA0SP4 PMMA0TCTL4_BASE.BIT._PMMA0SP4
#define PMMA0TCTL4_PMMA0ST4 PMMA0TCTL4_BASE.BIT._PMMA0ST4
#define PMMA0TCTL5 PMMA0TCTL5_BASE.UINT32
#define PMMA0TCTL5_PMMA0HWT5 PMMA0TCTL5_BASE.BIT._PMMA0HWT5
#define PMMA0TCTL5_PMMA0SWT5 PMMA0TCTL5_BASE.BIT._PMMA0SWT5
#define PMMA0TCTL5_PMMA0TO5 PMMA0TCTL5_BASE.BIT._PMMA0TO5
#define PMMA0TCTL5_PMMA0MD PMMA0TCTL5_BASE.BIT._PMMA0MD
#define PMMA0TCTL5_PMMA0PRIO5 PMMA0TCTL5_BASE.BIT._PMMA0PRIO5
#define PMMA0TCTL5_CSIH0TGLG5 PMMA0TCTL5_BASE.BIT._CSIH0TGLG5
#define PMMA0TCTL5_PMMA0SP5 PMMA0TCTL5_BASE.BIT._PMMA0SP5
#define PMMA0TCTL5_PMMA0ST5 PMMA0TCTL5_BASE.BIT._PMMA0ST5
#define PMMA0TCTL6 PMMA0TCTL6_BASE.UINT32
#define PMMA0TCTL6_PMMA0HWT6 PMMA0TCTL6_BASE.BIT._PMMA0HWT6
#define PMMA0TCTL6_PMMA0SWT6 PMMA0TCTL6_BASE.BIT._PMMA0SWT6
#define PMMA0TCTL6_PMMA0TO6 PMMA0TCTL6_BASE.BIT._PMMA0TO6
#define PMMA0TCTL6_PMMA0MD PMMA0TCTL6_BASE.BIT._PMMA0MD
#define PMMA0TCTL6_PMMA0PRIO6 PMMA0TCTL6_BASE.BIT._PMMA0PRIO6
#define PMMA0TCTL6_CSIH0TGLG6 PMMA0TCTL6_BASE.BIT._CSIH0TGLG6
#define PMMA0TCTL6_PMMA0SP6 PMMA0TCTL6_BASE.BIT._PMMA0SP6
#define PMMA0TCTL6_PMMA0ST6 PMMA0TCTL6_BASE.BIT._PMMA0ST6
#define PMMA0TCTL7 PMMA0TCTL7_BASE.UINT32
#define PMMA0TCTL7_PMMA0HWT7 PMMA0TCTL7_BASE.BIT._PMMA0HWT7
#define PMMA0TCTL7_PMMA0SWT7 PMMA0TCTL7_BASE.BIT._PMMA0SWT7
#define PMMA0TCTL7_PMMA0TO7 PMMA0TCTL7_BASE.BIT._PMMA0TO7
#define PMMA0TCTL7_PMMA0MD PMMA0TCTL7_BASE.BIT._PMMA0MD
#define PMMA0TCTL7_PMMA0PRIO7 PMMA0TCTL7_BASE.BIT._PMMA0PRIO7
#define PMMA0TCTL7_CSIH0TGLG7 PMMA0TCTL7_BASE.BIT._CSIH0TGLG7
#define PMMA0TCTL7_PMMA0SP7 PMMA0TCTL7_BASE.BIT._PMMA0SP7
#define PMMA0TCTL7_PMMA0ST7 PMMA0TCTL7_BASE.BIT._PMMA0ST7
#define PMMA0TTX0 PMMA0TTX0_BASE.UINT32
#define PMMA0TTX0_PMMA0TTX0 PMMA0TTX0_BASE.BIT._PMMA0TTX0
#define PMMA0TTX1 PMMA0TTX1_BASE.UINT32
#define PMMA0TTX1_PMMA0TTX1 PMMA0TTX1_BASE.BIT._PMMA0TTX1
#define PMMA0TTX2 PMMA0TTX2_BASE.UINT32
#define PMMA0TTX2_PMMA0TTX2 PMMA0TTX2_BASE.BIT._PMMA0TTX2
#define PMMA0TTX3 PMMA0TTX3_BASE.UINT32
#define PMMA0TTX3_PMMA0TTX3 PMMA0TTX3_BASE.BIT._PMMA0TTX3
#define PMMA0TTX4 PMMA0TTX4_BASE.UINT32
#define PMMA0TTX4_PMMA0TTX4 PMMA0TTX4_BASE.BIT._PMMA0TTX4
#define PMMA0TTX5 PMMA0TTX5_BASE.UINT32
#define PMMA0TTX5_PMMA0TTX5 PMMA0TTX5_BASE.BIT._PMMA0TTX5
#define PMMA0TTX6 PMMA0TTX6_BASE.UINT32
#define PMMA0TTX6_PMMA0TTX6 PMMA0TTX6_BASE.BIT._PMMA0TTX6
#define PMMA0TTX7 PMMA0TTX7_BASE.UINT32
#define PMMA0TTX7_PMMA0TTX7 PMMA0TTX7_BASE.BIT._PMMA0TTX7
#define PMMA0RX PMMA0RX_BASE.UINT32
#define PMMA0RX_PMMA0RX PMMA0RX_BASE.BIT._PMMA0RX
#define PMMA0TCNT0 PMMA0TCNT0_BASE.UINT32
#define PMMA0TCNT0_PMMA0TCNT0 PMMA0TCNT0_BASE.BIT._PMMA0TCNT0
#define PMMA0TCNT1 PMMA0TCNT1_BASE.UINT32
#define PMMA0TCNT1_PMMA0TCNT1 PMMA0TCNT1_BASE.BIT._PMMA0TCNT1
#define PMMA0TCNT2 PMMA0TCNT2_BASE.UINT32
#define PMMA0TCNT2_PMMA0TCNT2 PMMA0TCNT2_BASE.BIT._PMMA0TCNT2
#define PMMA0TCNT3 PMMA0TCNT3_BASE.UINT32
#define PMMA0TCNT3_PMMA0TCNT3 PMMA0TCNT3_BASE.BIT._PMMA0TCNT3
#define PMMA0TCNT4 PMMA0TCNT4_BASE.UINT32
#define PMMA0TCNT4_PMMA0TCNT4 PMMA0TCNT4_BASE.BIT._PMMA0TCNT4
#define PMMA0TCNT5 PMMA0TCNT5_BASE.UINT32
#define PMMA0TCNT5_PMMA0TCNT5 PMMA0TCNT5_BASE.BIT._PMMA0TCNT5
#define PMMA0TCNT6 PMMA0TCNT6_BASE.UINT32
#define PMMA0TCNT6_PMMA0TCNT6 PMMA0TCNT6_BASE.BIT._PMMA0TCNT6
#define PMMA0TCNT7 PMMA0TCNT7_BASE.UINT32
#define PMMA0TCNT7_PMMA0TCNT7 PMMA0TCNT7_BASE.BIT._PMMA0TCNT7
#define PMMA0STR0 PMMA0STR0_BASE.UINT32
#define PMMA0STR0_PMMA0PF0 PMMA0STR0_BASE.BIT._PMMA0PF0
#define PMMA0STR0_PMMA0PF1 PMMA0STR0_BASE.BIT._PMMA0PF1
#define PMMA0STR0_PMMA0PF2 PMMA0STR0_BASE.BIT._PMMA0PF2
#define PMMA0STR0_PMMA0PF3 PMMA0STR0_BASE.BIT._PMMA0PF3
#define PMMA0STR0_PMMA0PF4 PMMA0STR0_BASE.BIT._PMMA0PF4
#define PMMA0STR0_PMMA0PF5 PMMA0STR0_BASE.BIT._PMMA0PF5
#define PMMA0STR0_PMMA0PF6 PMMA0STR0_BASE.BIT._PMMA0PF6
#define PMMA0STR0_PMMA0PF7 PMMA0STR0_BASE.BIT._PMMA0PF7
#define PMMA0STR0_PMMA0AF0 PMMA0STR0_BASE.BIT._PMMA0AF0
#define PMMA0STR0_PMMA0AF1 PMMA0STR0_BASE.BIT._PMMA0AF1
#define PMMA0STR0_PMMA0AF2 PMMA0STR0_BASE.BIT._PMMA0AF2
#define PMMA0STR0_PMMA0AF3 PMMA0STR0_BASE.BIT._PMMA0AF3
#define PMMA0STR0_PMMA0AF4 PMMA0STR0_BASE.BIT._PMMA0AF4
#define PMMA0STR0_PMMA0AF5 PMMA0STR0_BASE.BIT._PMMA0AF5
#define PMMA0STR0_PMMA0AF6 PMMA0STR0_BASE.BIT._PMMA0AF6
#define PMMA0STR0_PMMA0AF7 PMMA0STR0_BASE.BIT._PMMA0AF7
#define PMMA0STR0_PMMA0EN0 PMMA0STR0_BASE.BIT._PMMA0EN0
#define PMMA0STR0_PMMA0EN1 PMMA0STR0_BASE.BIT._PMMA0EN1
#define PMMA0STR0_PMMA0EN2 PMMA0STR0_BASE.BIT._PMMA0EN2
#define PMMA0STR0_PMMA0EN3 PMMA0STR0_BASE.BIT._PMMA0EN3
#define PMMA0STR0_PMMA0EN4 PMMA0STR0_BASE.BIT._PMMA0EN4
#define PMMA0STR0_PMMA0EN5 PMMA0STR0_BASE.BIT._PMMA0EN5
#define PMMA0STR0_PMMA0EN6 PMMA0STR0_BASE.BIT._PMMA0EN6
#define PMMA0STR0_PMMA0EN7 PMMA0STR0_BASE.BIT._PMMA0EN7
#define PMMA0STR1 PMMA0STR1_BASE.UINT32
#define PMMA0STR1_PMMA0TF0 PMMA0STR1_BASE.BIT._PMMA0TF0
#define PMMA0STR1_PMMA0TF1 PMMA0STR1_BASE.BIT._PMMA0TF1
#define PMMA0STR1_PMMA0TF2 PMMA0STR1_BASE.BIT._PMMA0TF2
#define PMMA0STR1_PMMA0TF3 PMMA0STR1_BASE.BIT._PMMA0TF3
#define PMMA0STR1_PMMA0TF4 PMMA0STR1_BASE.BIT._PMMA0TF4
#define PMMA0STR1_PMMA0TF5 PMMA0STR1_BASE.BIT._PMMA0TF5
#define PMMA0STR1_PMMA0TF6 PMMA0STR1_BASE.BIT._PMMA0TF6
#define PMMA0STR1_PMMA0TF7 PMMA0STR1_BASE.BIT._PMMA0TF7
#define PMMA0STR1_PMMA0RF0 PMMA0STR1_BASE.BIT._PMMA0RF0
#define PMMA0STR1_PMMA0RF1 PMMA0STR1_BASE.BIT._PMMA0RF1
#define PMMA0STR1_PMMA0RF2 PMMA0STR1_BASE.BIT._PMMA0RF2
#define PMMA0STR1_PMMA0RF3 PMMA0STR1_BASE.BIT._PMMA0RF3
#define PMMA0STR1_PMMA0RF4 PMMA0STR1_BASE.BIT._PMMA0RF4
#define PMMA0STR1_PMMA0RF5 PMMA0STR1_BASE.BIT._PMMA0RF5
#define PMMA0STR1_PMMA0RF6 PMMA0STR1_BASE.BIT._PMMA0RF6
#define PMMA0STR1_PMMA0RF7 PMMA0STR1_BASE.BIT._PMMA0RF7
#define PMMA0STC PMMA0STC_BASE.UINT32
#define PMMA0STC_PMMA0CLTF0 PMMA0STC_BASE.BIT._PMMA0CLTF0
#define PMMA0STC_PMMA0CLTF1 PMMA0STC_BASE.BIT._PMMA0CLTF1
#define PMMA0STC_PMMA0CLTF2 PMMA0STC_BASE.BIT._PMMA0CLTF2
#define PMMA0STC_PMMA0CLTF3 PMMA0STC_BASE.BIT._PMMA0CLTF3
#define PMMA0STC_PMMA0CLTF4 PMMA0STC_BASE.BIT._PMMA0CLTF4
#define PMMA0STC_PMMA0CLTF5 PMMA0STC_BASE.BIT._PMMA0CLTF5
#define PMMA0STC_PMMA0CLTF6 PMMA0STC_BASE.BIT._PMMA0CLTF6
#define PMMA0STC_PMMA0CLTF7 PMMA0STC_BASE.BIT._PMMA0CLTF7
#define PMMA0STC_PMMA0CLRF0 PMMA0STC_BASE.BIT._PMMA0CLRF0
#define PMMA0STC_PMMA0CLRF1 PMMA0STC_BASE.BIT._PMMA0CLRF1
#define PMMA0STC_PMMA0CLRF2 PMMA0STC_BASE.BIT._PMMA0CLRF2
#define PMMA0STC_PMMA0CLRF3 PMMA0STC_BASE.BIT._PMMA0CLRF3
#define PMMA0STC_PMMA0CLRF4 PMMA0STC_BASE.BIT._PMMA0CLRF4
#define PMMA0STC_PMMA0CLRF5 PMMA0STC_BASE.BIT._PMMA0CLRF5
#define PMMA0STC_PMMA0CLRF6 PMMA0STC_BASE.BIT._PMMA0CLRF6
#define PMMA0STC_PMMA0CLRF7 PMMA0STC_BASE.BIT._PMMA0CLRF7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif