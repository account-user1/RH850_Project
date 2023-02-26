#ifndef __DR7F701373_PMMA2_HEADER__
#define __DR7F701373_PMMA2_HEADER__



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
    uint32 _PMMA2PWR : 1;
} PMMA2CTLBits_t;

typedef struct
{
    uint32 _PMMA2HWT0 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT0 : 1;
    uint32 _PMMA2TO0 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO0 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG0 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP0 : 1;
    uint32 _PMMA2ST0 : 1;
} PMMA2TCTL0Bits_t;

typedef struct
{
    uint32 _PMMA2HWT1 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT1 : 1;
    uint32 _PMMA2TO1 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO1 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG1 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP1 : 1;
    uint32 _PMMA2ST1 : 1;
} PMMA2TCTL1Bits_t;

typedef struct
{
    uint32 _PMMA2HWT2 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT2 : 1;
    uint32 _PMMA2TO2 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO2 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG2 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP2 : 1;
    uint32 _PMMA2ST2 : 1;
} PMMA2TCTL2Bits_t;

typedef struct
{
    uint32 _PMMA2HWT3 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT3 : 1;
    uint32 _PMMA2TO3 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO3 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG3 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP3 : 1;
    uint32 _PMMA2ST3 : 1;
} PMMA2TCTL3Bits_t;

typedef struct
{
    uint32 _PMMA2HWT4 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT4 : 1;
    uint32 _PMMA2TO4 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO4 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG4 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP4 : 1;
    uint32 _PMMA2ST4 : 1;
} PMMA2TCTL4Bits_t;

typedef struct
{
    uint32 _PMMA2HWT5 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT5 : 1;
    uint32 _PMMA2TO5 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO5 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG5 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP5 : 1;
    uint32 _PMMA2ST5 : 1;
} PMMA2TCTL5Bits_t;

typedef struct
{
    uint32 _PMMA2HWT6 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT6 : 1;
    uint32 _PMMA2TO6 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO6 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG6 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP6 : 1;
    uint32 _PMMA2ST6 : 1;
} PMMA2TCTL6Bits_t;

typedef struct
{
    uint32 _PMMA2HWT7 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA2SWT7 : 1;
    uint32 _PMMA2TO7 : 2;
    uint32 _PMMA2MD : 1;
    uint32 _PMMA2PRIO7 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2TGLG7 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA2SP7 : 1;
    uint32 _PMMA2ST7 : 1;
} PMMA2TCTL7Bits_t;

typedef struct
{
    uint32 _PMMA2TTX0 : 32;
} PMMA2TTX0Bits_t;

typedef struct
{
    uint32 _PMMA2TTX1 : 32;
} PMMA2TTX1Bits_t;

typedef struct
{
    uint32 _PMMA2TTX2 : 32;
} PMMA2TTX2Bits_t;

typedef struct
{
    uint32 _PMMA2TTX3 : 32;
} PMMA2TTX3Bits_t;

typedef struct
{
    uint32 _PMMA2TTX4 : 32;
} PMMA2TTX4Bits_t;

typedef struct
{
    uint32 _PMMA2TTX5 : 32;
} PMMA2TTX5Bits_t;

typedef struct
{
    uint32 _PMMA2TTX6 : 32;
} PMMA2TTX6Bits_t;

typedef struct
{
    uint32 _PMMA2TTX7 : 32;
} PMMA2TTX7Bits_t;

typedef struct
{
    const uint32 _PMMA2RX : 32;
} PMMA2RXBits_t;

typedef struct
{
    const uint32 _PMMA2TCNT0 : 8;
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
} PMMA2TCNT0Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT1 : 8;
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
} PMMA2TCNT1Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT2 : 8;
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
} PMMA2TCNT2Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT3 : 8;
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
} PMMA2TCNT3Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT4 : 8;
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
} PMMA2TCNT4Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT5 : 8;
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
} PMMA2TCNT5Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT6 : 8;
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
} PMMA2TCNT6Bits_t;

typedef struct
{
    const uint32 _PMMA2TCNT7 : 8;
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
} PMMA2TCNT7Bits_t;

typedef struct
{
    const uint32 _PMMA2PF0 : 1;
    const uint32 _PMMA2PF1 : 1;
    const uint32 _PMMA2PF2 : 1;
    const uint32 _PMMA2PF3 : 1;
    const uint32 _PMMA2PF4 : 1;
    const uint32 _PMMA2PF5 : 1;
    const uint32 _PMMA2PF6 : 1;
    const uint32 _PMMA2PF7 : 1;
    const uint32 _PMMA2AF0 : 1;
    const uint32 _PMMA2AF1 : 1;
    const uint32 _PMMA2AF2 : 1;
    const uint32 _PMMA2AF3 : 1;
    const uint32 _PMMA2AF4 : 1;
    const uint32 _PMMA2AF5 : 1;
    const uint32 _PMMA2AF6 : 1;
    const uint32 _PMMA2AF7 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PMMA2EN0 : 1;
    const uint32 _PMMA2EN1 : 1;
    const uint32 _PMMA2EN2 : 1;
    const uint32 _PMMA2EN3 : 1;
    const uint32 _PMMA2EN4 : 1;
    const uint32 _PMMA2EN5 : 1;
    const uint32 _PMMA2EN6 : 1;
    const uint32 _PMMA2EN7 : 1;
} PMMA2STR0Bits_t;

typedef struct
{
    const uint32 _PMMA2TF0 : 1;
    const uint32 _PMMA2TF1 : 1;
    const uint32 _PMMA2TF2 : 1;
    const uint32 _PMMA2TF3 : 1;
    const uint32 _PMMA2TF4 : 1;
    const uint32 _PMMA2TF5 : 1;
    const uint32 _PMMA2TF6 : 1;
    const uint32 _PMMA2TF7 : 1;
    const uint32 _PMMA2RF0 : 1;
    const uint32 _PMMA2RF1 : 1;
    const uint32 _PMMA2RF2 : 1;
    const uint32 _PMMA2RF3 : 1;
    const uint32 _PMMA2RF4 : 1;
    const uint32 _PMMA2RF5 : 1;
    const uint32 _PMMA2RF6 : 1;
    const uint32 _PMMA2RF7 : 1;
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
} PMMA2STR1Bits_t;

typedef struct
{
    uint32 _PMMA2CLTF0 : 1;
    uint32 _PMMA2CLTF1 : 1;
    uint32 _PMMA2CLTF2 : 1;
    uint32 _PMMA2CLTF3 : 1;
    uint32 _PMMA2CLTF4 : 1;
    uint32 _PMMA2CLTF5 : 1;
    uint32 _PMMA2CLTF6 : 1;
    uint32 _PMMA2CLTF7 : 1;
    uint32 _PMMA2CLRF0 : 1;
    uint32 _PMMA2CLRF1 : 1;
    uint32 _PMMA2CLRF2 : 1;
    uint32 _PMMA2CLRF3 : 1;
    uint32 _PMMA2CLRF4 : 1;
    uint32 _PMMA2CLRF5 : 1;
    uint32 _PMMA2CLRF6 : 1;
    uint32 _PMMA2CLRF7 : 1;
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
} PMMA2STCBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PMMA2CTLBits_t BIT;
} PMMA2CTL_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL0Bits_t BIT;
} PMMA2TCTL0_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL1Bits_t BIT;
} PMMA2TCTL1_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL2Bits_t BIT;
} PMMA2TCTL2_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL3Bits_t BIT;
} PMMA2TCTL3_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL4Bits_t BIT;
} PMMA2TCTL4_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL5Bits_t BIT;
} PMMA2TCTL5_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL6Bits_t BIT;
} PMMA2TCTL6_t;

typedef union
{
    uint32 UINT32;
    PMMA2TCTL7Bits_t BIT;
} PMMA2TCTL7_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX0Bits_t BIT;
} PMMA2TTX0_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX1Bits_t BIT;
} PMMA2TTX1_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX2Bits_t BIT;
} PMMA2TTX2_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX3Bits_t BIT;
} PMMA2TTX3_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX4Bits_t BIT;
} PMMA2TTX4_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX5Bits_t BIT;
} PMMA2TTX5_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX6Bits_t BIT;
} PMMA2TTX6_t;

typedef union
{
    uint32 UINT32;
    PMMA2TTX7Bits_t BIT;
} PMMA2TTX7_t;

typedef union
{
    uint32 UINT32;
    const PMMA2RXBits_t BIT;
} PMMA2RX_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT0Bits_t BIT;
} PMMA2TCNT0_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT1Bits_t BIT;
} PMMA2TCNT1_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT2Bits_t BIT;
} PMMA2TCNT2_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT3Bits_t BIT;
} PMMA2TCNT3_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT4Bits_t BIT;
} PMMA2TCNT4_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT5Bits_t BIT;
} PMMA2TCNT5_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT6Bits_t BIT;
} PMMA2TCNT6_t;

typedef union
{
    uint32 UINT32;
    const PMMA2TCNT7Bits_t BIT;
} PMMA2TCNT7_t;

typedef union
{
    uint32 UINT32;
    const PMMA2STR0Bits_t BIT;
} PMMA2STR0_t;

typedef union
{
    uint32 UINT32;
    const PMMA2STR1Bits_t BIT;
} PMMA2STR1_t;

typedef union
{
    uint32 UINT32;
    PMMA2STCBits_t BIT;
} PMMA2STC_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PMMA2CTL_BASE, 0xFFD85000, __READ_WRITE, PMMA2CTL_t);
__IOREG(PMMA2TCTL0_BASE, 0xFFD85004, __READ_WRITE, PMMA2TCTL0_t);
__IOREG(PMMA2TCTL1_BASE, 0xFFD85008, __READ_WRITE, PMMA2TCTL1_t);
__IOREG(PMMA2TCTL2_BASE, 0xFFD8500C, __READ_WRITE, PMMA2TCTL2_t);
__IOREG(PMMA2TCTL3_BASE, 0xFFD85010, __READ_WRITE, PMMA2TCTL3_t);
__IOREG(PMMA2TCTL4_BASE, 0xFFD85014, __READ_WRITE, PMMA2TCTL4_t);
__IOREG(PMMA2TCTL5_BASE, 0xFFD85018, __READ_WRITE, PMMA2TCTL5_t);
__IOREG(PMMA2TCTL6_BASE, 0xFFD8501C, __READ_WRITE, PMMA2TCTL6_t);
__IOREG(PMMA2TCTL7_BASE, 0xFFD85020, __READ_WRITE, PMMA2TCTL7_t);
__IOREG(PMMA2TTX0_BASE, 0xFFD85024, __READ_WRITE, PMMA2TTX0_t);
__IOREG(PMMA2TTX1_BASE, 0xFFD85028, __READ_WRITE, PMMA2TTX1_t);
__IOREG(PMMA2TTX2_BASE, 0xFFD8502C, __READ_WRITE, PMMA2TTX2_t);
__IOREG(PMMA2TTX3_BASE, 0xFFD85030, __READ_WRITE, PMMA2TTX3_t);
__IOREG(PMMA2TTX4_BASE, 0xFFD85034, __READ_WRITE, PMMA2TTX4_t);
__IOREG(PMMA2TTX5_BASE, 0xFFD85038, __READ_WRITE, PMMA2TTX5_t);
__IOREG(PMMA2TTX6_BASE, 0xFFD8503C, __READ_WRITE, PMMA2TTX6_t);
__IOREG(PMMA2TTX7_BASE, 0xFFD85040, __READ_WRITE, PMMA2TTX7_t);
__IOREG(PMMA2RX_BASE, 0xFFD85044, __READ, PMMA2RX_t);
__IOREG(PMMA2TCNT0_BASE, 0xFFD85048, __READ, PMMA2TCNT0_t);
__IOREG(PMMA2TCNT1_BASE, 0xFFD8504C, __READ, PMMA2TCNT1_t);
__IOREG(PMMA2TCNT2_BASE, 0xFFD85050, __READ, PMMA2TCNT2_t);
__IOREG(PMMA2TCNT3_BASE, 0xFFD85054, __READ, PMMA2TCNT3_t);
__IOREG(PMMA2TCNT4_BASE, 0xFFD85058, __READ, PMMA2TCNT4_t);
__IOREG(PMMA2TCNT5_BASE, 0xFFD8505C, __READ, PMMA2TCNT5_t);
__IOREG(PMMA2TCNT6_BASE, 0xFFD85060, __READ, PMMA2TCNT6_t);
__IOREG(PMMA2TCNT7_BASE, 0xFFD85064, __READ, PMMA2TCNT7_t);
__IOREG(PMMA2STR0_BASE, 0xFFD85068, __READ, PMMA2STR0_t);
__IOREG(PMMA2STR1_BASE, 0xFFD8506C, __READ, PMMA2STR1_t);
__IOREG(PMMA2STC_BASE, 0xFFD85070, __READ_WRITE, PMMA2STC_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PMMA2CTL PMMA2CTL_BASE.UINT32
#define PMMA2CTL_PMMA2PWR PMMA2CTL_BASE.BIT._PMMA2PWR
#define PMMA2TCTL0 PMMA2TCTL0_BASE.UINT32
#define PMMA2TCTL0_PMMA2HWT0 PMMA2TCTL0_BASE.BIT._PMMA2HWT0
#define PMMA2TCTL0_PMMA2SWT0 PMMA2TCTL0_BASE.BIT._PMMA2SWT0
#define PMMA2TCTL0_PMMA2TO0 PMMA2TCTL0_BASE.BIT._PMMA2TO0
#define PMMA2TCTL0_PMMA2MD PMMA2TCTL0_BASE.BIT._PMMA2MD
#define PMMA2TCTL0_PMMA2PRIO0 PMMA2TCTL0_BASE.BIT._PMMA2PRIO0
#define PMMA2TCTL0_CSIH2TGLG0 PMMA2TCTL0_BASE.BIT._CSIH2TGLG0
#define PMMA2TCTL0_PMMA2SP0 PMMA2TCTL0_BASE.BIT._PMMA2SP0
#define PMMA2TCTL0_PMMA2ST0 PMMA2TCTL0_BASE.BIT._PMMA2ST0
#define PMMA2TCTL1 PMMA2TCTL1_BASE.UINT32
#define PMMA2TCTL1_PMMA2HWT1 PMMA2TCTL1_BASE.BIT._PMMA2HWT1
#define PMMA2TCTL1_PMMA2SWT1 PMMA2TCTL1_BASE.BIT._PMMA2SWT1
#define PMMA2TCTL1_PMMA2TO1 PMMA2TCTL1_BASE.BIT._PMMA2TO1
#define PMMA2TCTL1_PMMA2MD PMMA2TCTL1_BASE.BIT._PMMA2MD
#define PMMA2TCTL1_PMMA2PRIO1 PMMA2TCTL1_BASE.BIT._PMMA2PRIO1
#define PMMA2TCTL1_CSIH2TGLG1 PMMA2TCTL1_BASE.BIT._CSIH2TGLG1
#define PMMA2TCTL1_PMMA2SP1 PMMA2TCTL1_BASE.BIT._PMMA2SP1
#define PMMA2TCTL1_PMMA2ST1 PMMA2TCTL1_BASE.BIT._PMMA2ST1
#define PMMA2TCTL2 PMMA2TCTL2_BASE.UINT32
#define PMMA2TCTL2_PMMA2HWT2 PMMA2TCTL2_BASE.BIT._PMMA2HWT2
#define PMMA2TCTL2_PMMA2SWT2 PMMA2TCTL2_BASE.BIT._PMMA2SWT2
#define PMMA2TCTL2_PMMA2TO2 PMMA2TCTL2_BASE.BIT._PMMA2TO2
#define PMMA2TCTL2_PMMA2MD PMMA2TCTL2_BASE.BIT._PMMA2MD
#define PMMA2TCTL2_PMMA2PRIO2 PMMA2TCTL2_BASE.BIT._PMMA2PRIO2
#define PMMA2TCTL2_CSIH2TGLG2 PMMA2TCTL2_BASE.BIT._CSIH2TGLG2
#define PMMA2TCTL2_PMMA2SP2 PMMA2TCTL2_BASE.BIT._PMMA2SP2
#define PMMA2TCTL2_PMMA2ST2 PMMA2TCTL2_BASE.BIT._PMMA2ST2
#define PMMA2TCTL3 PMMA2TCTL3_BASE.UINT32
#define PMMA2TCTL3_PMMA2HWT3 PMMA2TCTL3_BASE.BIT._PMMA2HWT3
#define PMMA2TCTL3_PMMA2SWT3 PMMA2TCTL3_BASE.BIT._PMMA2SWT3
#define PMMA2TCTL3_PMMA2TO3 PMMA2TCTL3_BASE.BIT._PMMA2TO3
#define PMMA2TCTL3_PMMA2MD PMMA2TCTL3_BASE.BIT._PMMA2MD
#define PMMA2TCTL3_PMMA2PRIO3 PMMA2TCTL3_BASE.BIT._PMMA2PRIO3
#define PMMA2TCTL3_CSIH2TGLG3 PMMA2TCTL3_BASE.BIT._CSIH2TGLG3
#define PMMA2TCTL3_PMMA2SP3 PMMA2TCTL3_BASE.BIT._PMMA2SP3
#define PMMA2TCTL3_PMMA2ST3 PMMA2TCTL3_BASE.BIT._PMMA2ST3
#define PMMA2TCTL4 PMMA2TCTL4_BASE.UINT32
#define PMMA2TCTL4_PMMA2HWT4 PMMA2TCTL4_BASE.BIT._PMMA2HWT4
#define PMMA2TCTL4_PMMA2SWT4 PMMA2TCTL4_BASE.BIT._PMMA2SWT4
#define PMMA2TCTL4_PMMA2TO4 PMMA2TCTL4_BASE.BIT._PMMA2TO4
#define PMMA2TCTL4_PMMA2MD PMMA2TCTL4_BASE.BIT._PMMA2MD
#define PMMA2TCTL4_PMMA2PRIO4 PMMA2TCTL4_BASE.BIT._PMMA2PRIO4
#define PMMA2TCTL4_CSIH2TGLG4 PMMA2TCTL4_BASE.BIT._CSIH2TGLG4
#define PMMA2TCTL4_PMMA2SP4 PMMA2TCTL4_BASE.BIT._PMMA2SP4
#define PMMA2TCTL4_PMMA2ST4 PMMA2TCTL4_BASE.BIT._PMMA2ST4
#define PMMA2TCTL5 PMMA2TCTL5_BASE.UINT32
#define PMMA2TCTL5_PMMA2HWT5 PMMA2TCTL5_BASE.BIT._PMMA2HWT5
#define PMMA2TCTL5_PMMA2SWT5 PMMA2TCTL5_BASE.BIT._PMMA2SWT5
#define PMMA2TCTL5_PMMA2TO5 PMMA2TCTL5_BASE.BIT._PMMA2TO5
#define PMMA2TCTL5_PMMA2MD PMMA2TCTL5_BASE.BIT._PMMA2MD
#define PMMA2TCTL5_PMMA2PRIO5 PMMA2TCTL5_BASE.BIT._PMMA2PRIO5
#define PMMA2TCTL5_CSIH2TGLG5 PMMA2TCTL5_BASE.BIT._CSIH2TGLG5
#define PMMA2TCTL5_PMMA2SP5 PMMA2TCTL5_BASE.BIT._PMMA2SP5
#define PMMA2TCTL5_PMMA2ST5 PMMA2TCTL5_BASE.BIT._PMMA2ST5
#define PMMA2TCTL6 PMMA2TCTL6_BASE.UINT32
#define PMMA2TCTL6_PMMA2HWT6 PMMA2TCTL6_BASE.BIT._PMMA2HWT6
#define PMMA2TCTL6_PMMA2SWT6 PMMA2TCTL6_BASE.BIT._PMMA2SWT6
#define PMMA2TCTL6_PMMA2TO6 PMMA2TCTL6_BASE.BIT._PMMA2TO6
#define PMMA2TCTL6_PMMA2MD PMMA2TCTL6_BASE.BIT._PMMA2MD
#define PMMA2TCTL6_PMMA2PRIO6 PMMA2TCTL6_BASE.BIT._PMMA2PRIO6
#define PMMA2TCTL6_CSIH2TGLG6 PMMA2TCTL6_BASE.BIT._CSIH2TGLG6
#define PMMA2TCTL6_PMMA2SP6 PMMA2TCTL6_BASE.BIT._PMMA2SP6
#define PMMA2TCTL6_PMMA2ST6 PMMA2TCTL6_BASE.BIT._PMMA2ST6
#define PMMA2TCTL7 PMMA2TCTL7_BASE.UINT32
#define PMMA2TCTL7_PMMA2HWT7 PMMA2TCTL7_BASE.BIT._PMMA2HWT7
#define PMMA2TCTL7_PMMA2SWT7 PMMA2TCTL7_BASE.BIT._PMMA2SWT7
#define PMMA2TCTL7_PMMA2TO7 PMMA2TCTL7_BASE.BIT._PMMA2TO7
#define PMMA2TCTL7_PMMA2MD PMMA2TCTL7_BASE.BIT._PMMA2MD
#define PMMA2TCTL7_PMMA2PRIO7 PMMA2TCTL7_BASE.BIT._PMMA2PRIO7
#define PMMA2TCTL7_CSIH2TGLG7 PMMA2TCTL7_BASE.BIT._CSIH2TGLG7
#define PMMA2TCTL7_PMMA2SP7 PMMA2TCTL7_BASE.BIT._PMMA2SP7
#define PMMA2TCTL7_PMMA2ST7 PMMA2TCTL7_BASE.BIT._PMMA2ST7
#define PMMA2TTX0 PMMA2TTX0_BASE.UINT32
#define PMMA2TTX0_PMMA2TTX0 PMMA2TTX0_BASE.BIT._PMMA2TTX0
#define PMMA2TTX1 PMMA2TTX1_BASE.UINT32
#define PMMA2TTX1_PMMA2TTX1 PMMA2TTX1_BASE.BIT._PMMA2TTX1
#define PMMA2TTX2 PMMA2TTX2_BASE.UINT32
#define PMMA2TTX2_PMMA2TTX2 PMMA2TTX2_BASE.BIT._PMMA2TTX2
#define PMMA2TTX3 PMMA2TTX3_BASE.UINT32
#define PMMA2TTX3_PMMA2TTX3 PMMA2TTX3_BASE.BIT._PMMA2TTX3
#define PMMA2TTX4 PMMA2TTX4_BASE.UINT32
#define PMMA2TTX4_PMMA2TTX4 PMMA2TTX4_BASE.BIT._PMMA2TTX4
#define PMMA2TTX5 PMMA2TTX5_BASE.UINT32
#define PMMA2TTX5_PMMA2TTX5 PMMA2TTX5_BASE.BIT._PMMA2TTX5
#define PMMA2TTX6 PMMA2TTX6_BASE.UINT32
#define PMMA2TTX6_PMMA2TTX6 PMMA2TTX6_BASE.BIT._PMMA2TTX6
#define PMMA2TTX7 PMMA2TTX7_BASE.UINT32
#define PMMA2TTX7_PMMA2TTX7 PMMA2TTX7_BASE.BIT._PMMA2TTX7
#define PMMA2RX PMMA2RX_BASE.UINT32
#define PMMA2RX_PMMA2RX PMMA2RX_BASE.BIT._PMMA2RX
#define PMMA2TCNT0 PMMA2TCNT0_BASE.UINT32
#define PMMA2TCNT0_PMMA2TCNT0 PMMA2TCNT0_BASE.BIT._PMMA2TCNT0
#define PMMA2TCNT1 PMMA2TCNT1_BASE.UINT32
#define PMMA2TCNT1_PMMA2TCNT1 PMMA2TCNT1_BASE.BIT._PMMA2TCNT1
#define PMMA2TCNT2 PMMA2TCNT2_BASE.UINT32
#define PMMA2TCNT2_PMMA2TCNT2 PMMA2TCNT2_BASE.BIT._PMMA2TCNT2
#define PMMA2TCNT3 PMMA2TCNT3_BASE.UINT32
#define PMMA2TCNT3_PMMA2TCNT3 PMMA2TCNT3_BASE.BIT._PMMA2TCNT3
#define PMMA2TCNT4 PMMA2TCNT4_BASE.UINT32
#define PMMA2TCNT4_PMMA2TCNT4 PMMA2TCNT4_BASE.BIT._PMMA2TCNT4
#define PMMA2TCNT5 PMMA2TCNT5_BASE.UINT32
#define PMMA2TCNT5_PMMA2TCNT5 PMMA2TCNT5_BASE.BIT._PMMA2TCNT5
#define PMMA2TCNT6 PMMA2TCNT6_BASE.UINT32
#define PMMA2TCNT6_PMMA2TCNT6 PMMA2TCNT6_BASE.BIT._PMMA2TCNT6
#define PMMA2TCNT7 PMMA2TCNT7_BASE.UINT32
#define PMMA2TCNT7_PMMA2TCNT7 PMMA2TCNT7_BASE.BIT._PMMA2TCNT7
#define PMMA2STR0 PMMA2STR0_BASE.UINT32
#define PMMA2STR0_PMMA2PF0 PMMA2STR0_BASE.BIT._PMMA2PF0
#define PMMA2STR0_PMMA2PF1 PMMA2STR0_BASE.BIT._PMMA2PF1
#define PMMA2STR0_PMMA2PF2 PMMA2STR0_BASE.BIT._PMMA2PF2
#define PMMA2STR0_PMMA2PF3 PMMA2STR0_BASE.BIT._PMMA2PF3
#define PMMA2STR0_PMMA2PF4 PMMA2STR0_BASE.BIT._PMMA2PF4
#define PMMA2STR0_PMMA2PF5 PMMA2STR0_BASE.BIT._PMMA2PF5
#define PMMA2STR0_PMMA2PF6 PMMA2STR0_BASE.BIT._PMMA2PF6
#define PMMA2STR0_PMMA2PF7 PMMA2STR0_BASE.BIT._PMMA2PF7
#define PMMA2STR0_PMMA2AF0 PMMA2STR0_BASE.BIT._PMMA2AF0
#define PMMA2STR0_PMMA2AF1 PMMA2STR0_BASE.BIT._PMMA2AF1
#define PMMA2STR0_PMMA2AF2 PMMA2STR0_BASE.BIT._PMMA2AF2
#define PMMA2STR0_PMMA2AF3 PMMA2STR0_BASE.BIT._PMMA2AF3
#define PMMA2STR0_PMMA2AF4 PMMA2STR0_BASE.BIT._PMMA2AF4
#define PMMA2STR0_PMMA2AF5 PMMA2STR0_BASE.BIT._PMMA2AF5
#define PMMA2STR0_PMMA2AF6 PMMA2STR0_BASE.BIT._PMMA2AF6
#define PMMA2STR0_PMMA2AF7 PMMA2STR0_BASE.BIT._PMMA2AF7
#define PMMA2STR0_PMMA2EN0 PMMA2STR0_BASE.BIT._PMMA2EN0
#define PMMA2STR0_PMMA2EN1 PMMA2STR0_BASE.BIT._PMMA2EN1
#define PMMA2STR0_PMMA2EN2 PMMA2STR0_BASE.BIT._PMMA2EN2
#define PMMA2STR0_PMMA2EN3 PMMA2STR0_BASE.BIT._PMMA2EN3
#define PMMA2STR0_PMMA2EN4 PMMA2STR0_BASE.BIT._PMMA2EN4
#define PMMA2STR0_PMMA2EN5 PMMA2STR0_BASE.BIT._PMMA2EN5
#define PMMA2STR0_PMMA2EN6 PMMA2STR0_BASE.BIT._PMMA2EN6
#define PMMA2STR0_PMMA2EN7 PMMA2STR0_BASE.BIT._PMMA2EN7
#define PMMA2STR1 PMMA2STR1_BASE.UINT32
#define PMMA2STR1_PMMA2TF0 PMMA2STR1_BASE.BIT._PMMA2TF0
#define PMMA2STR1_PMMA2TF1 PMMA2STR1_BASE.BIT._PMMA2TF1
#define PMMA2STR1_PMMA2TF2 PMMA2STR1_BASE.BIT._PMMA2TF2
#define PMMA2STR1_PMMA2TF3 PMMA2STR1_BASE.BIT._PMMA2TF3
#define PMMA2STR1_PMMA2TF4 PMMA2STR1_BASE.BIT._PMMA2TF4
#define PMMA2STR1_PMMA2TF5 PMMA2STR1_BASE.BIT._PMMA2TF5
#define PMMA2STR1_PMMA2TF6 PMMA2STR1_BASE.BIT._PMMA2TF6
#define PMMA2STR1_PMMA2TF7 PMMA2STR1_BASE.BIT._PMMA2TF7
#define PMMA2STR1_PMMA2RF0 PMMA2STR1_BASE.BIT._PMMA2RF0
#define PMMA2STR1_PMMA2RF1 PMMA2STR1_BASE.BIT._PMMA2RF1
#define PMMA2STR1_PMMA2RF2 PMMA2STR1_BASE.BIT._PMMA2RF2
#define PMMA2STR1_PMMA2RF3 PMMA2STR1_BASE.BIT._PMMA2RF3
#define PMMA2STR1_PMMA2RF4 PMMA2STR1_BASE.BIT._PMMA2RF4
#define PMMA2STR1_PMMA2RF5 PMMA2STR1_BASE.BIT._PMMA2RF5
#define PMMA2STR1_PMMA2RF6 PMMA2STR1_BASE.BIT._PMMA2RF6
#define PMMA2STR1_PMMA2RF7 PMMA2STR1_BASE.BIT._PMMA2RF7
#define PMMA2STC PMMA2STC_BASE.UINT32
#define PMMA2STC_PMMA2CLTF0 PMMA2STC_BASE.BIT._PMMA2CLTF0
#define PMMA2STC_PMMA2CLTF1 PMMA2STC_BASE.BIT._PMMA2CLTF1
#define PMMA2STC_PMMA2CLTF2 PMMA2STC_BASE.BIT._PMMA2CLTF2
#define PMMA2STC_PMMA2CLTF3 PMMA2STC_BASE.BIT._PMMA2CLTF3
#define PMMA2STC_PMMA2CLTF4 PMMA2STC_BASE.BIT._PMMA2CLTF4
#define PMMA2STC_PMMA2CLTF5 PMMA2STC_BASE.BIT._PMMA2CLTF5
#define PMMA2STC_PMMA2CLTF6 PMMA2STC_BASE.BIT._PMMA2CLTF6
#define PMMA2STC_PMMA2CLTF7 PMMA2STC_BASE.BIT._PMMA2CLTF7
#define PMMA2STC_PMMA2CLRF0 PMMA2STC_BASE.BIT._PMMA2CLRF0
#define PMMA2STC_PMMA2CLRF1 PMMA2STC_BASE.BIT._PMMA2CLRF1
#define PMMA2STC_PMMA2CLRF2 PMMA2STC_BASE.BIT._PMMA2CLRF2
#define PMMA2STC_PMMA2CLRF3 PMMA2STC_BASE.BIT._PMMA2CLRF3
#define PMMA2STC_PMMA2CLRF4 PMMA2STC_BASE.BIT._PMMA2CLRF4
#define PMMA2STC_PMMA2CLRF5 PMMA2STC_BASE.BIT._PMMA2CLRF5
#define PMMA2STC_PMMA2CLRF6 PMMA2STC_BASE.BIT._PMMA2CLRF6
#define PMMA2STC_PMMA2CLRF7 PMMA2STC_BASE.BIT._PMMA2CLRF7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif