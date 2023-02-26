#ifndef __DR7F701373_PMMA3_HEADER__
#define __DR7F701373_PMMA3_HEADER__



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
    uint32 _PMMA3PWR : 1;
} PMMA3CTLBits_t;

typedef struct
{
    uint32 _PMMA3HWT0 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT0 : 1;
    uint32 _PMMA3TO0 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO0 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG0 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP0 : 1;
    uint32 _PMMA3ST0 : 1;
} PMMA3TCTL0Bits_t;

typedef struct
{
    uint32 _PMMA3HWT1 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT1 : 1;
    uint32 _PMMA3TO1 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO1 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG1 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP1 : 1;
    uint32 _PMMA3ST1 : 1;
} PMMA3TCTL1Bits_t;

typedef struct
{
    uint32 _PMMA3HWT2 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT2 : 1;
    uint32 _PMMA3TO2 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO2 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG2 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP2 : 1;
    uint32 _PMMA3ST2 : 1;
} PMMA3TCTL2Bits_t;

typedef struct
{
    uint32 _PMMA3HWT3 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT3 : 1;
    uint32 _PMMA3TO3 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO3 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG3 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP3 : 1;
    uint32 _PMMA3ST3 : 1;
} PMMA3TCTL3Bits_t;

typedef struct
{
    uint32 _PMMA3HWT4 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT4 : 1;
    uint32 _PMMA3TO4 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO4 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG4 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP4 : 1;
    uint32 _PMMA3ST4 : 1;
} PMMA3TCTL4Bits_t;

typedef struct
{
    uint32 _PMMA3HWT5 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT5 : 1;
    uint32 _PMMA3TO5 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO5 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG5 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP5 : 1;
    uint32 _PMMA3ST5 : 1;
} PMMA3TCTL5Bits_t;

typedef struct
{
    uint32 _PMMA3HWT6 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT6 : 1;
    uint32 _PMMA3TO6 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO6 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG6 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP6 : 1;
    uint32 _PMMA3ST6 : 1;
} PMMA3TCTL6Bits_t;

typedef struct
{
    uint32 _PMMA3HWT7 : 6;
    uint32 padding6 : 1;
    uint32 _PMMA3SWT7 : 1;
    uint32 _PMMA3TO7 : 2;
    uint32 _PMMA3MD : 1;
    uint32 _PMMA3PRIO7 : 3;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3TGLG7 : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _PMMA3SP7 : 1;
    uint32 _PMMA3ST7 : 1;
} PMMA3TCTL7Bits_t;

typedef struct
{
    uint32 _PMMA3TTX0 : 32;
} PMMA3TTX0Bits_t;

typedef struct
{
    uint32 _PMMA3TTX1 : 32;
} PMMA3TTX1Bits_t;

typedef struct
{
    uint32 _PMMA3TTX2 : 32;
} PMMA3TTX2Bits_t;

typedef struct
{
    uint32 _PMMA3TTX3 : 32;
} PMMA3TTX3Bits_t;

typedef struct
{
    uint32 _PMMA3TTX4 : 32;
} PMMA3TTX4Bits_t;

typedef struct
{
    uint32 _PMMA3TTX5 : 32;
} PMMA3TTX5Bits_t;

typedef struct
{
    uint32 _PMMA3TTX6 : 32;
} PMMA3TTX6Bits_t;

typedef struct
{
    uint32 _PMMA3TTX7 : 32;
} PMMA3TTX7Bits_t;

typedef struct
{
    const uint32 _PMMA3RX : 32;
} PMMA3RXBits_t;

typedef struct
{
    const uint32 _PMMA3TCNT0 : 8;
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
} PMMA3TCNT0Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT1 : 8;
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
} PMMA3TCNT1Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT2 : 8;
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
} PMMA3TCNT2Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT3 : 8;
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
} PMMA3TCNT3Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT4 : 8;
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
} PMMA3TCNT4Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT5 : 8;
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
} PMMA3TCNT5Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT6 : 8;
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
} PMMA3TCNT6Bits_t;

typedef struct
{
    const uint32 _PMMA3TCNT7 : 8;
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
} PMMA3TCNT7Bits_t;

typedef struct
{
    const uint32 _PMMA3PF0 : 1;
    const uint32 _PMMA3PF1 : 1;
    const uint32 _PMMA3PF2 : 1;
    const uint32 _PMMA3PF3 : 1;
    const uint32 _PMMA3PF4 : 1;
    const uint32 _PMMA3PF5 : 1;
    const uint32 _PMMA3PF6 : 1;
    const uint32 _PMMA3PF7 : 1;
    const uint32 _PMMA3AF0 : 1;
    const uint32 _PMMA3AF1 : 1;
    const uint32 _PMMA3AF2 : 1;
    const uint32 _PMMA3AF3 : 1;
    const uint32 _PMMA3AF4 : 1;
    const uint32 _PMMA3AF5 : 1;
    const uint32 _PMMA3AF6 : 1;
    const uint32 _PMMA3AF7 : 1;
    uint32 padding16 : 1;
    uint32 padding17 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PMMA3EN0 : 1;
    const uint32 _PMMA3EN1 : 1;
    const uint32 _PMMA3EN2 : 1;
    const uint32 _PMMA3EN3 : 1;
    const uint32 _PMMA3EN4 : 1;
    const uint32 _PMMA3EN5 : 1;
    const uint32 _PMMA3EN6 : 1;
    const uint32 _PMMA3EN7 : 1;
} PMMA3STR0Bits_t;

typedef struct
{
    const uint32 _PMMA3TF0 : 1;
    const uint32 _PMMA3TF1 : 1;
    const uint32 _PMMA3TF2 : 1;
    const uint32 _PMMA3TF3 : 1;
    const uint32 _PMMA3TF4 : 1;
    const uint32 _PMMA3TF5 : 1;
    const uint32 _PMMA3TF6 : 1;
    const uint32 _PMMA3TF7 : 1;
    const uint32 _PMMA3RF0 : 1;
    const uint32 _PMMA3RF1 : 1;
    const uint32 _PMMA3RF2 : 1;
    const uint32 _PMMA3RF3 : 1;
    const uint32 _PMMA3RF4 : 1;
    const uint32 _PMMA3RF5 : 1;
    const uint32 _PMMA3RF6 : 1;
    const uint32 _PMMA3RF7 : 1;
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
} PMMA3STR1Bits_t;

typedef struct
{
    uint32 _PMMA3CLTF0 : 1;
    uint32 _PMMA3CLTF1 : 1;
    uint32 _PMMA3CLTF2 : 1;
    uint32 _PMMA3CLTF3 : 1;
    uint32 _PMMA3CLTF4 : 1;
    uint32 _PMMA3CLTF5 : 1;
    uint32 _PMMA3CLTF6 : 1;
    uint32 _PMMA3CLTF7 : 1;
    uint32 _PMMA3CLRF0 : 1;
    uint32 _PMMA3CLRF1 : 1;
    uint32 _PMMA3CLRF2 : 1;
    uint32 _PMMA3CLRF3 : 1;
    uint32 _PMMA3CLRF4 : 1;
    uint32 _PMMA3CLRF5 : 1;
    uint32 _PMMA3CLRF6 : 1;
    uint32 _PMMA3CLRF7 : 1;
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
} PMMA3STCBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PMMA3CTLBits_t BIT;
} PMMA3CTL_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL0Bits_t BIT;
} PMMA3TCTL0_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL1Bits_t BIT;
} PMMA3TCTL1_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL2Bits_t BIT;
} PMMA3TCTL2_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL3Bits_t BIT;
} PMMA3TCTL3_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL4Bits_t BIT;
} PMMA3TCTL4_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL5Bits_t BIT;
} PMMA3TCTL5_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL6Bits_t BIT;
} PMMA3TCTL6_t;

typedef union
{
    uint32 UINT32;
    PMMA3TCTL7Bits_t BIT;
} PMMA3TCTL7_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX0Bits_t BIT;
} PMMA3TTX0_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX1Bits_t BIT;
} PMMA3TTX1_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX2Bits_t BIT;
} PMMA3TTX2_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX3Bits_t BIT;
} PMMA3TTX3_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX4Bits_t BIT;
} PMMA3TTX4_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX5Bits_t BIT;
} PMMA3TTX5_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX6Bits_t BIT;
} PMMA3TTX6_t;

typedef union
{
    uint32 UINT32;
    PMMA3TTX7Bits_t BIT;
} PMMA3TTX7_t;

typedef union
{
    uint32 UINT32;
    const PMMA3RXBits_t BIT;
} PMMA3RX_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT0Bits_t BIT;
} PMMA3TCNT0_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT1Bits_t BIT;
} PMMA3TCNT1_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT2Bits_t BIT;
} PMMA3TCNT2_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT3Bits_t BIT;
} PMMA3TCNT3_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT4Bits_t BIT;
} PMMA3TCNT4_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT5Bits_t BIT;
} PMMA3TCNT5_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT6Bits_t BIT;
} PMMA3TCNT6_t;

typedef union
{
    uint32 UINT32;
    const PMMA3TCNT7Bits_t BIT;
} PMMA3TCNT7_t;

typedef union
{
    uint32 UINT32;
    const PMMA3STR0Bits_t BIT;
} PMMA3STR0_t;

typedef union
{
    uint32 UINT32;
    const PMMA3STR1Bits_t BIT;
} PMMA3STR1_t;

typedef union
{
    uint32 UINT32;
    PMMA3STCBits_t BIT;
} PMMA3STC_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PMMA3CTL_BASE, 0xFFCA5000, __READ_WRITE, PMMA3CTL_t);
__IOREG(PMMA3TCTL0_BASE, 0xFFCA5004, __READ_WRITE, PMMA3TCTL0_t);
__IOREG(PMMA3TCTL1_BASE, 0xFFCA5008, __READ_WRITE, PMMA3TCTL1_t);
__IOREG(PMMA3TCTL2_BASE, 0xFFCA500C, __READ_WRITE, PMMA3TCTL2_t);
__IOREG(PMMA3TCTL3_BASE, 0xFFCA5010, __READ_WRITE, PMMA3TCTL3_t);
__IOREG(PMMA3TCTL4_BASE, 0xFFCA5014, __READ_WRITE, PMMA3TCTL4_t);
__IOREG(PMMA3TCTL5_BASE, 0xFFCA5018, __READ_WRITE, PMMA3TCTL5_t);
__IOREG(PMMA3TCTL6_BASE, 0xFFCA501C, __READ_WRITE, PMMA3TCTL6_t);
__IOREG(PMMA3TCTL7_BASE, 0xFFCA5020, __READ_WRITE, PMMA3TCTL7_t);
__IOREG(PMMA3TTX0_BASE, 0xFFCA5024, __READ_WRITE, PMMA3TTX0_t);
__IOREG(PMMA3TTX1_BASE, 0xFFCA5028, __READ_WRITE, PMMA3TTX1_t);
__IOREG(PMMA3TTX2_BASE, 0xFFCA502C, __READ_WRITE, PMMA3TTX2_t);
__IOREG(PMMA3TTX3_BASE, 0xFFCA5030, __READ_WRITE, PMMA3TTX3_t);
__IOREG(PMMA3TTX4_BASE, 0xFFCA5034, __READ_WRITE, PMMA3TTX4_t);
__IOREG(PMMA3TTX5_BASE, 0xFFCA5038, __READ_WRITE, PMMA3TTX5_t);
__IOREG(PMMA3TTX6_BASE, 0xFFCA503C, __READ_WRITE, PMMA3TTX6_t);
__IOREG(PMMA3TTX7_BASE, 0xFFCA5040, __READ_WRITE, PMMA3TTX7_t);
__IOREG(PMMA3RX_BASE, 0xFFCA5044, __READ, PMMA3RX_t);
__IOREG(PMMA3TCNT0_BASE, 0xFFCA5048, __READ, PMMA3TCNT0_t);
__IOREG(PMMA3TCNT1_BASE, 0xFFCA504C, __READ, PMMA3TCNT1_t);
__IOREG(PMMA3TCNT2_BASE, 0xFFCA5050, __READ, PMMA3TCNT2_t);
__IOREG(PMMA3TCNT3_BASE, 0xFFCA5054, __READ, PMMA3TCNT3_t);
__IOREG(PMMA3TCNT4_BASE, 0xFFCA5058, __READ, PMMA3TCNT4_t);
__IOREG(PMMA3TCNT5_BASE, 0xFFCA505C, __READ, PMMA3TCNT5_t);
__IOREG(PMMA3TCNT6_BASE, 0xFFCA5060, __READ, PMMA3TCNT6_t);
__IOREG(PMMA3TCNT7_BASE, 0xFFCA5064, __READ, PMMA3TCNT7_t);
__IOREG(PMMA3STR0_BASE, 0xFFCA5068, __READ, PMMA3STR0_t);
__IOREG(PMMA3STR1_BASE, 0xFFCA506C, __READ, PMMA3STR1_t);
__IOREG(PMMA3STC_BASE, 0xFFCA5070, __READ_WRITE, PMMA3STC_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PMMA3CTL PMMA3CTL_BASE.UINT32
#define PMMA3CTL_PMMA3PWR PMMA3CTL_BASE.BIT._PMMA3PWR
#define PMMA3TCTL0 PMMA3TCTL0_BASE.UINT32
#define PMMA3TCTL0_PMMA3HWT0 PMMA3TCTL0_BASE.BIT._PMMA3HWT0
#define PMMA3TCTL0_PMMA3SWT0 PMMA3TCTL0_BASE.BIT._PMMA3SWT0
#define PMMA3TCTL0_PMMA3TO0 PMMA3TCTL0_BASE.BIT._PMMA3TO0
#define PMMA3TCTL0_PMMA3MD PMMA3TCTL0_BASE.BIT._PMMA3MD
#define PMMA3TCTL0_PMMA3PRIO0 PMMA3TCTL0_BASE.BIT._PMMA3PRIO0
#define PMMA3TCTL0_CSIH3TGLG0 PMMA3TCTL0_BASE.BIT._CSIH3TGLG0
#define PMMA3TCTL0_PMMA3SP0 PMMA3TCTL0_BASE.BIT._PMMA3SP0
#define PMMA3TCTL0_PMMA3ST0 PMMA3TCTL0_BASE.BIT._PMMA3ST0
#define PMMA3TCTL1 PMMA3TCTL1_BASE.UINT32
#define PMMA3TCTL1_PMMA3HWT1 PMMA3TCTL1_BASE.BIT._PMMA3HWT1
#define PMMA3TCTL1_PMMA3SWT1 PMMA3TCTL1_BASE.BIT._PMMA3SWT1
#define PMMA3TCTL1_PMMA3TO1 PMMA3TCTL1_BASE.BIT._PMMA3TO1
#define PMMA3TCTL1_PMMA3MD PMMA3TCTL1_BASE.BIT._PMMA3MD
#define PMMA3TCTL1_PMMA3PRIO1 PMMA3TCTL1_BASE.BIT._PMMA3PRIO1
#define PMMA3TCTL1_CSIH3TGLG1 PMMA3TCTL1_BASE.BIT._CSIH3TGLG1
#define PMMA3TCTL1_PMMA3SP1 PMMA3TCTL1_BASE.BIT._PMMA3SP1
#define PMMA3TCTL1_PMMA3ST1 PMMA3TCTL1_BASE.BIT._PMMA3ST1
#define PMMA3TCTL2 PMMA3TCTL2_BASE.UINT32
#define PMMA3TCTL2_PMMA3HWT2 PMMA3TCTL2_BASE.BIT._PMMA3HWT2
#define PMMA3TCTL2_PMMA3SWT2 PMMA3TCTL2_BASE.BIT._PMMA3SWT2
#define PMMA3TCTL2_PMMA3TO2 PMMA3TCTL2_BASE.BIT._PMMA3TO2
#define PMMA3TCTL2_PMMA3MD PMMA3TCTL2_BASE.BIT._PMMA3MD
#define PMMA3TCTL2_PMMA3PRIO2 PMMA3TCTL2_BASE.BIT._PMMA3PRIO2
#define PMMA3TCTL2_CSIH3TGLG2 PMMA3TCTL2_BASE.BIT._CSIH3TGLG2
#define PMMA3TCTL2_PMMA3SP2 PMMA3TCTL2_BASE.BIT._PMMA3SP2
#define PMMA3TCTL2_PMMA3ST2 PMMA3TCTL2_BASE.BIT._PMMA3ST2
#define PMMA3TCTL3 PMMA3TCTL3_BASE.UINT32
#define PMMA3TCTL3_PMMA3HWT3 PMMA3TCTL3_BASE.BIT._PMMA3HWT3
#define PMMA3TCTL3_PMMA3SWT3 PMMA3TCTL3_BASE.BIT._PMMA3SWT3
#define PMMA3TCTL3_PMMA3TO3 PMMA3TCTL3_BASE.BIT._PMMA3TO3
#define PMMA3TCTL3_PMMA3MD PMMA3TCTL3_BASE.BIT._PMMA3MD
#define PMMA3TCTL3_PMMA3PRIO3 PMMA3TCTL3_BASE.BIT._PMMA3PRIO3
#define PMMA3TCTL3_CSIH3TGLG3 PMMA3TCTL3_BASE.BIT._CSIH3TGLG3
#define PMMA3TCTL3_PMMA3SP3 PMMA3TCTL3_BASE.BIT._PMMA3SP3
#define PMMA3TCTL3_PMMA3ST3 PMMA3TCTL3_BASE.BIT._PMMA3ST3
#define PMMA3TCTL4 PMMA3TCTL4_BASE.UINT32
#define PMMA3TCTL4_PMMA3HWT4 PMMA3TCTL4_BASE.BIT._PMMA3HWT4
#define PMMA3TCTL4_PMMA3SWT4 PMMA3TCTL4_BASE.BIT._PMMA3SWT4
#define PMMA3TCTL4_PMMA3TO4 PMMA3TCTL4_BASE.BIT._PMMA3TO4
#define PMMA3TCTL4_PMMA3MD PMMA3TCTL4_BASE.BIT._PMMA3MD
#define PMMA3TCTL4_PMMA3PRIO4 PMMA3TCTL4_BASE.BIT._PMMA3PRIO4
#define PMMA3TCTL4_CSIH3TGLG4 PMMA3TCTL4_BASE.BIT._CSIH3TGLG4
#define PMMA3TCTL4_PMMA3SP4 PMMA3TCTL4_BASE.BIT._PMMA3SP4
#define PMMA3TCTL4_PMMA3ST4 PMMA3TCTL4_BASE.BIT._PMMA3ST4
#define PMMA3TCTL5 PMMA3TCTL5_BASE.UINT32
#define PMMA3TCTL5_PMMA3HWT5 PMMA3TCTL5_BASE.BIT._PMMA3HWT5
#define PMMA3TCTL5_PMMA3SWT5 PMMA3TCTL5_BASE.BIT._PMMA3SWT5
#define PMMA3TCTL5_PMMA3TO5 PMMA3TCTL5_BASE.BIT._PMMA3TO5
#define PMMA3TCTL5_PMMA3MD PMMA3TCTL5_BASE.BIT._PMMA3MD
#define PMMA3TCTL5_PMMA3PRIO5 PMMA3TCTL5_BASE.BIT._PMMA3PRIO5
#define PMMA3TCTL5_CSIH3TGLG5 PMMA3TCTL5_BASE.BIT._CSIH3TGLG5
#define PMMA3TCTL5_PMMA3SP5 PMMA3TCTL5_BASE.BIT._PMMA3SP5
#define PMMA3TCTL5_PMMA3ST5 PMMA3TCTL5_BASE.BIT._PMMA3ST5
#define PMMA3TCTL6 PMMA3TCTL6_BASE.UINT32
#define PMMA3TCTL6_PMMA3HWT6 PMMA3TCTL6_BASE.BIT._PMMA3HWT6
#define PMMA3TCTL6_PMMA3SWT6 PMMA3TCTL6_BASE.BIT._PMMA3SWT6
#define PMMA3TCTL6_PMMA3TO6 PMMA3TCTL6_BASE.BIT._PMMA3TO6
#define PMMA3TCTL6_PMMA3MD PMMA3TCTL6_BASE.BIT._PMMA3MD
#define PMMA3TCTL6_PMMA3PRIO6 PMMA3TCTL6_BASE.BIT._PMMA3PRIO6
#define PMMA3TCTL6_CSIH3TGLG6 PMMA3TCTL6_BASE.BIT._CSIH3TGLG6
#define PMMA3TCTL6_PMMA3SP6 PMMA3TCTL6_BASE.BIT._PMMA3SP6
#define PMMA3TCTL6_PMMA3ST6 PMMA3TCTL6_BASE.BIT._PMMA3ST6
#define PMMA3TCTL7 PMMA3TCTL7_BASE.UINT32
#define PMMA3TCTL7_PMMA3HWT7 PMMA3TCTL7_BASE.BIT._PMMA3HWT7
#define PMMA3TCTL7_PMMA3SWT7 PMMA3TCTL7_BASE.BIT._PMMA3SWT7
#define PMMA3TCTL7_PMMA3TO7 PMMA3TCTL7_BASE.BIT._PMMA3TO7
#define PMMA3TCTL7_PMMA3MD PMMA3TCTL7_BASE.BIT._PMMA3MD
#define PMMA3TCTL7_PMMA3PRIO7 PMMA3TCTL7_BASE.BIT._PMMA3PRIO7
#define PMMA3TCTL7_CSIH3TGLG7 PMMA3TCTL7_BASE.BIT._CSIH3TGLG7
#define PMMA3TCTL7_PMMA3SP7 PMMA3TCTL7_BASE.BIT._PMMA3SP7
#define PMMA3TCTL7_PMMA3ST7 PMMA3TCTL7_BASE.BIT._PMMA3ST7
#define PMMA3TTX0 PMMA3TTX0_BASE.UINT32
#define PMMA3TTX0_PMMA3TTX0 PMMA3TTX0_BASE.BIT._PMMA3TTX0
#define PMMA3TTX1 PMMA3TTX1_BASE.UINT32
#define PMMA3TTX1_PMMA3TTX1 PMMA3TTX1_BASE.BIT._PMMA3TTX1
#define PMMA3TTX2 PMMA3TTX2_BASE.UINT32
#define PMMA3TTX2_PMMA3TTX2 PMMA3TTX2_BASE.BIT._PMMA3TTX2
#define PMMA3TTX3 PMMA3TTX3_BASE.UINT32
#define PMMA3TTX3_PMMA3TTX3 PMMA3TTX3_BASE.BIT._PMMA3TTX3
#define PMMA3TTX4 PMMA3TTX4_BASE.UINT32
#define PMMA3TTX4_PMMA3TTX4 PMMA3TTX4_BASE.BIT._PMMA3TTX4
#define PMMA3TTX5 PMMA3TTX5_BASE.UINT32
#define PMMA3TTX5_PMMA3TTX5 PMMA3TTX5_BASE.BIT._PMMA3TTX5
#define PMMA3TTX6 PMMA3TTX6_BASE.UINT32
#define PMMA3TTX6_PMMA3TTX6 PMMA3TTX6_BASE.BIT._PMMA3TTX6
#define PMMA3TTX7 PMMA3TTX7_BASE.UINT32
#define PMMA3TTX7_PMMA3TTX7 PMMA3TTX7_BASE.BIT._PMMA3TTX7
#define PMMA3RX PMMA3RX_BASE.UINT32
#define PMMA3RX_PMMA3RX PMMA3RX_BASE.BIT._PMMA3RX
#define PMMA3TCNT0 PMMA3TCNT0_BASE.UINT32
#define PMMA3TCNT0_PMMA3TCNT0 PMMA3TCNT0_BASE.BIT._PMMA3TCNT0
#define PMMA3TCNT1 PMMA3TCNT1_BASE.UINT32
#define PMMA3TCNT1_PMMA3TCNT1 PMMA3TCNT1_BASE.BIT._PMMA3TCNT1
#define PMMA3TCNT2 PMMA3TCNT2_BASE.UINT32
#define PMMA3TCNT2_PMMA3TCNT2 PMMA3TCNT2_BASE.BIT._PMMA3TCNT2
#define PMMA3TCNT3 PMMA3TCNT3_BASE.UINT32
#define PMMA3TCNT3_PMMA3TCNT3 PMMA3TCNT3_BASE.BIT._PMMA3TCNT3
#define PMMA3TCNT4 PMMA3TCNT4_BASE.UINT32
#define PMMA3TCNT4_PMMA3TCNT4 PMMA3TCNT4_BASE.BIT._PMMA3TCNT4
#define PMMA3TCNT5 PMMA3TCNT5_BASE.UINT32
#define PMMA3TCNT5_PMMA3TCNT5 PMMA3TCNT5_BASE.BIT._PMMA3TCNT5
#define PMMA3TCNT6 PMMA3TCNT6_BASE.UINT32
#define PMMA3TCNT6_PMMA3TCNT6 PMMA3TCNT6_BASE.BIT._PMMA3TCNT6
#define PMMA3TCNT7 PMMA3TCNT7_BASE.UINT32
#define PMMA3TCNT7_PMMA3TCNT7 PMMA3TCNT7_BASE.BIT._PMMA3TCNT7
#define PMMA3STR0 PMMA3STR0_BASE.UINT32
#define PMMA3STR0_PMMA3PF0 PMMA3STR0_BASE.BIT._PMMA3PF0
#define PMMA3STR0_PMMA3PF1 PMMA3STR0_BASE.BIT._PMMA3PF1
#define PMMA3STR0_PMMA3PF2 PMMA3STR0_BASE.BIT._PMMA3PF2
#define PMMA3STR0_PMMA3PF3 PMMA3STR0_BASE.BIT._PMMA3PF3
#define PMMA3STR0_PMMA3PF4 PMMA3STR0_BASE.BIT._PMMA3PF4
#define PMMA3STR0_PMMA3PF5 PMMA3STR0_BASE.BIT._PMMA3PF5
#define PMMA3STR0_PMMA3PF6 PMMA3STR0_BASE.BIT._PMMA3PF6
#define PMMA3STR0_PMMA3PF7 PMMA3STR0_BASE.BIT._PMMA3PF7
#define PMMA3STR0_PMMA3AF0 PMMA3STR0_BASE.BIT._PMMA3AF0
#define PMMA3STR0_PMMA3AF1 PMMA3STR0_BASE.BIT._PMMA3AF1
#define PMMA3STR0_PMMA3AF2 PMMA3STR0_BASE.BIT._PMMA3AF2
#define PMMA3STR0_PMMA3AF3 PMMA3STR0_BASE.BIT._PMMA3AF3
#define PMMA3STR0_PMMA3AF4 PMMA3STR0_BASE.BIT._PMMA3AF4
#define PMMA3STR0_PMMA3AF5 PMMA3STR0_BASE.BIT._PMMA3AF5
#define PMMA3STR0_PMMA3AF6 PMMA3STR0_BASE.BIT._PMMA3AF6
#define PMMA3STR0_PMMA3AF7 PMMA3STR0_BASE.BIT._PMMA3AF7
#define PMMA3STR0_PMMA3EN0 PMMA3STR0_BASE.BIT._PMMA3EN0
#define PMMA3STR0_PMMA3EN1 PMMA3STR0_BASE.BIT._PMMA3EN1
#define PMMA3STR0_PMMA3EN2 PMMA3STR0_BASE.BIT._PMMA3EN2
#define PMMA3STR0_PMMA3EN3 PMMA3STR0_BASE.BIT._PMMA3EN3
#define PMMA3STR0_PMMA3EN4 PMMA3STR0_BASE.BIT._PMMA3EN4
#define PMMA3STR0_PMMA3EN5 PMMA3STR0_BASE.BIT._PMMA3EN5
#define PMMA3STR0_PMMA3EN6 PMMA3STR0_BASE.BIT._PMMA3EN6
#define PMMA3STR0_PMMA3EN7 PMMA3STR0_BASE.BIT._PMMA3EN7
#define PMMA3STR1 PMMA3STR1_BASE.UINT32
#define PMMA3STR1_PMMA3TF0 PMMA3STR1_BASE.BIT._PMMA3TF0
#define PMMA3STR1_PMMA3TF1 PMMA3STR1_BASE.BIT._PMMA3TF1
#define PMMA3STR1_PMMA3TF2 PMMA3STR1_BASE.BIT._PMMA3TF2
#define PMMA3STR1_PMMA3TF3 PMMA3STR1_BASE.BIT._PMMA3TF3
#define PMMA3STR1_PMMA3TF4 PMMA3STR1_BASE.BIT._PMMA3TF4
#define PMMA3STR1_PMMA3TF5 PMMA3STR1_BASE.BIT._PMMA3TF5
#define PMMA3STR1_PMMA3TF6 PMMA3STR1_BASE.BIT._PMMA3TF6
#define PMMA3STR1_PMMA3TF7 PMMA3STR1_BASE.BIT._PMMA3TF7
#define PMMA3STR1_PMMA3RF0 PMMA3STR1_BASE.BIT._PMMA3RF0
#define PMMA3STR1_PMMA3RF1 PMMA3STR1_BASE.BIT._PMMA3RF1
#define PMMA3STR1_PMMA3RF2 PMMA3STR1_BASE.BIT._PMMA3RF2
#define PMMA3STR1_PMMA3RF3 PMMA3STR1_BASE.BIT._PMMA3RF3
#define PMMA3STR1_PMMA3RF4 PMMA3STR1_BASE.BIT._PMMA3RF4
#define PMMA3STR1_PMMA3RF5 PMMA3STR1_BASE.BIT._PMMA3RF5
#define PMMA3STR1_PMMA3RF6 PMMA3STR1_BASE.BIT._PMMA3RF6
#define PMMA3STR1_PMMA3RF7 PMMA3STR1_BASE.BIT._PMMA3RF7
#define PMMA3STC PMMA3STC_BASE.UINT32
#define PMMA3STC_PMMA3CLTF0 PMMA3STC_BASE.BIT._PMMA3CLTF0
#define PMMA3STC_PMMA3CLTF1 PMMA3STC_BASE.BIT._PMMA3CLTF1
#define PMMA3STC_PMMA3CLTF2 PMMA3STC_BASE.BIT._PMMA3CLTF2
#define PMMA3STC_PMMA3CLTF3 PMMA3STC_BASE.BIT._PMMA3CLTF3
#define PMMA3STC_PMMA3CLTF4 PMMA3STC_BASE.BIT._PMMA3CLTF4
#define PMMA3STC_PMMA3CLTF5 PMMA3STC_BASE.BIT._PMMA3CLTF5
#define PMMA3STC_PMMA3CLTF6 PMMA3STC_BASE.BIT._PMMA3CLTF6
#define PMMA3STC_PMMA3CLTF7 PMMA3STC_BASE.BIT._PMMA3CLTF7
#define PMMA3STC_PMMA3CLRF0 PMMA3STC_BASE.BIT._PMMA3CLRF0
#define PMMA3STC_PMMA3CLRF1 PMMA3STC_BASE.BIT._PMMA3CLRF1
#define PMMA3STC_PMMA3CLRF2 PMMA3STC_BASE.BIT._PMMA3CLRF2
#define PMMA3STC_PMMA3CLRF3 PMMA3STC_BASE.BIT._PMMA3CLRF3
#define PMMA3STC_PMMA3CLRF4 PMMA3STC_BASE.BIT._PMMA3CLRF4
#define PMMA3STC_PMMA3CLRF5 PMMA3STC_BASE.BIT._PMMA3CLRF5
#define PMMA3STC_PMMA3CLRF6 PMMA3STC_BASE.BIT._PMMA3CLRF6
#define PMMA3STC_PMMA3CLRF7 PMMA3STC_BASE.BIT._PMMA3CLRF7

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif