#ifndef __DR7F701373_CSIH2_HEADER__
#define __DR7F701373_CSIH2_HEADER__



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
    uint8 _CSIH2MBS : 1;
    uint8 _CSIH2JOBE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _CSIH2RXE : 1;
    uint8 _CSIH2TXE : 1;
    uint8 _CSIH2PWR : 1;
} CSIH2CTL0Bits_t;

typedef struct
{
    uint32 _CSIH2SSE : 1;
    uint32 _CSIH2HSE : 1;
    uint32 _CSIH2SIT : 1;
    uint32 _CSIH2LBM : 1;
    uint32 _CSIH2CSRI : 1;
    uint32 _CSIH2DCS : 1;
    uint32 _CSIH2JE : 1;
    uint32 _CSIH2EDLE : 1;
    uint32 _CSIH2CSL0 : 1;
    uint32 _CSIH2CSL1 : 1;
    uint32 _CSIH2CSL2 : 1;
    uint32 _CSIH2CSL3 : 1;
    uint32 _CSIH2CSL4 : 1;
    uint32 _CSIH2CSL5 : 1;
    uint32 _CSIH2CSL6 : 1;
    uint32 _CSIH2CSL7 : 1;
    uint32 _CSIH2SLIT : 1;
    uint32 _CSIH2CKR : 1;
    uint32 padding18 : 1;
    uint32 _CSIH2SME : 1;
    uint32 _CSIH2ISCE : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2SLRS : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH2CTL1Bits_t;

typedef struct
{
    uint16 padding0 : 1;
    uint16 padding1 : 1;
    uint16 padding2 : 1;
    uint16 padding3 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 _CSIH2PRS : 3;
} CSIH2CTL2Bits_t;

typedef struct
{
    uint32 _CSIH2FFS : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2FES : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH2MCTL1Bits_t;

typedef struct
{
    uint32 _CSIH2SOP : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2ND : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CSIH2BTST : 1;
} CSIH2MCTL2Bits_t;

typedef struct
{
    uint32 _CSIH2TX : 16;
    uint32 _CSIH2CS0 : 1;
    uint32 _CSIH2CS1 : 1;
    uint32 _CSIH2CS2 : 1;
    uint32 _CSIH2CS3 : 1;
    uint32 _CSIH2CS4 : 1;
    uint32 _CSIH2CS5 : 1;
    uint32 _CSIH2CS6 : 1;
    uint32 _CSIH2CS7 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _CSIH2ISC : 1;
    uint32 _CSIH2SFN0 : 1;
    uint32 _CSIH2SFN1 : 1;
    uint32 _CSIH2EDL : 1;
    uint32 _CSIH2EOJ : 1;
    uint32 _CSIH2CIRE : 1;
} CSIH2TX0WBits_t;

typedef struct
{
    uint16 _CSIH2TX : 16;
} CSIH2TX0HBits_t;

typedef struct
{
    const uint32 _CSIH2RX : 16;
    const uint32 _CSIH2CS0 : 1;
    const uint32 _CSIH2CS1 : 1;
    const uint32 _CSIH2CS2 : 1;
    const uint32 _CSIH2CS3 : 1;
    const uint32 _CSIH2CS4 : 1;
    const uint32 _CSIH2CS5 : 1;
    const uint32 _CSIH2CS6 : 1;
    const uint32 _CSIH2CS7 : 1;
    const uint32 _CSIH2TDCE : 1;
    const uint32 _CSIH2RPE : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH2RX0WBits_t;

typedef struct
{
    const uint16 _CSIH2RX : 16;
} CSIH2RX0HBits_t;

typedef struct
{
    uint32 _CSIH2TRWA : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH2RRA : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH2MRWP0Bits_t;

typedef struct
{
    const uint32 _CSIH2OVE : 1;
    const uint32 _CSIH2PE : 1;
    uint32 padding2 : 1;
    const uint32 _CSIH2DCE : 1;
    const uint32 _CSIH2EMF : 1;
    const uint32 _CSIH2FLF : 1;
    uint32 padding6 : 1;
    const uint32 _CSIH2TSF : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _CSIH2OFE : 1;
    const uint32 _CSIH2TMOE : 1;
    const uint32 _CSIH2SPF : 8;
    const uint32 _CSIH2SRP : 8;
} CSIH2STR0Bits_t;

typedef struct
{
    uint16 _CSIH2OVEC : 1;
    uint16 _CSIH2PEC : 1;
    uint16 padding2 : 1;
    uint16 _CSIH2DCEC : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH2PCT : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 _CSIH2OFEC : 1;
    uint16 _CSIH2TMOEC : 1;
} CSIH2STCR0Bits_t;

typedef struct
{
    uint16 _CSIH2TO : 5;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH2MMS : 2;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH2MCTL0Bits_t;

typedef struct
{
    uint32 _CSIH2SP0 : 4;
    uint32 _CSIH2IN0 : 4;
    uint32 _CSIH2HD0 : 4;
    uint32 _CSIH2ID0 : 3;
    uint32 _CSIH2IDL0 : 1;
    uint32 _CSIH2DAP0 : 1;
    uint32 _CSIH2CKP0 : 1;
    uint32 _CSIH2DIR0 : 1;
    uint32 _CSIH2RCB0 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS0 : 4;
    uint32 _CSIH2PS0 : 2;
    uint32 _CSIH2BRSS0 : 2;
} CSIH2CFG0Bits_t;

typedef struct
{
    uint32 _CSIH2SP1 : 4;
    uint32 _CSIH2IN1 : 4;
    uint32 _CSIH2HD1 : 4;
    uint32 _CSIH2ID1 : 3;
    uint32 _CSIH2IDL1 : 1;
    uint32 _CSIH2DAP1 : 1;
    uint32 _CSIH2CKP1 : 1;
    uint32 _CSIH2DIR1 : 1;
    uint32 _CSIH2RCB1 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS1 : 4;
    uint32 _CSIH2PS1 : 2;
    uint32 _CSIH2BRSS1 : 2;
} CSIH2CFG1Bits_t;

typedef struct
{
    uint32 _CSIH2SP2 : 4;
    uint32 _CSIH2IN2 : 4;
    uint32 _CSIH2HD2 : 4;
    uint32 _CSIH2ID2 : 3;
    uint32 _CSIH2IDL2 : 1;
    uint32 _CSIH2DAP2 : 1;
    uint32 _CSIH2CKP2 : 1;
    uint32 _CSIH2DIR2 : 1;
    uint32 _CSIH2RCB2 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS2 : 4;
    uint32 _CSIH2PS2 : 2;
    uint32 _CSIH2BRSS2 : 2;
} CSIH2CFG2Bits_t;

typedef struct
{
    uint32 _CSIH2SP3 : 4;
    uint32 _CSIH2IN3 : 4;
    uint32 _CSIH2HD3 : 4;
    uint32 _CSIH2ID3 : 3;
    uint32 _CSIH2IDL3 : 1;
    uint32 _CSIH2DAP3 : 1;
    uint32 _CSIH2CKP3 : 1;
    uint32 _CSIH2DIR3 : 1;
    uint32 _CSIH2RCB3 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS3 : 4;
    uint32 _CSIH2PS3 : 2;
    uint32 _CSIH2BRSS3 : 2;
} CSIH2CFG3Bits_t;

typedef struct
{
    uint32 _CSIH2SP4 : 4;
    uint32 _CSIH2IN4 : 4;
    uint32 _CSIH2HD4 : 4;
    uint32 _CSIH2ID4 : 3;
    uint32 _CSIH2IDL4 : 1;
    uint32 _CSIH2DAP4 : 1;
    uint32 _CSIH2CKP4 : 1;
    uint32 _CSIH2DIR4 : 1;
    uint32 _CSIH2RCB4 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS4 : 4;
    uint32 _CSIH2PS4 : 2;
    uint32 _CSIH2BRSS4 : 2;
} CSIH2CFG4Bits_t;

typedef struct
{
    uint32 _CSIH2SP5 : 4;
    uint32 _CSIH2IN5 : 4;
    uint32 _CSIH2HD5 : 4;
    uint32 _CSIH2ID5 : 3;
    uint32 _CSIH2IDL5 : 1;
    uint32 _CSIH2DAP5 : 1;
    uint32 _CSIH2CKP5 : 1;
    uint32 _CSIH2DIR5 : 1;
    uint32 _CSIH2RCB5 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS5 : 4;
    uint32 _CSIH2PS5 : 2;
    uint32 _CSIH2BRSS5 : 2;
} CSIH2CFG5Bits_t;

typedef struct
{
    uint32 _CSIH2SP6 : 4;
    uint32 _CSIH2IN6 : 4;
    uint32 _CSIH2HD6 : 4;
    uint32 _CSIH2ID6 : 3;
    uint32 _CSIH2IDL6 : 1;
    uint32 _CSIH2DAP6 : 1;
    uint32 _CSIH2CKP6 : 1;
    uint32 _CSIH2DIR6 : 1;
    uint32 _CSIH2RCB6 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS6 : 4;
    uint32 _CSIH2PS6 : 2;
    uint32 _CSIH2BRSS6 : 2;
} CSIH2CFG6Bits_t;

typedef struct
{
    uint32 _CSIH2SP7 : 4;
    uint32 _CSIH2IN7 : 4;
    uint32 _CSIH2HD7 : 4;
    uint32 _CSIH2ID7 : 3;
    uint32 _CSIH2IDL7 : 1;
    uint32 _CSIH2DAP7 : 1;
    uint32 _CSIH2CKP7 : 1;
    uint32 _CSIH2DIR7 : 1;
    uint32 _CSIH2RCB7 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH2DLS7 : 4;
    uint32 _CSIH2PS7 : 2;
    uint32 _CSIH2BRSS7 : 2;
} CSIH2CFG7Bits_t;

typedef struct
{
    uint16 _CSIH2BRS0 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH2BRS0Bits_t;

typedef struct
{
    uint16 _CSIH2BRS1 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH2BRS1Bits_t;

typedef struct
{
    uint16 _CSIH2BRS2 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH2BRS2Bits_t;

typedef struct
{
    uint16 _CSIH2BRS3 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH2BRS3Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CSIH2CTL0Bits_t BIT;
} CSIH2CTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH2CTL1Bits_t BIT;
} CSIH2CTL1_t;

typedef union
{
    uint16 UINT16;
    CSIH2CTL2Bits_t BIT;
} CSIH2CTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH2MCTL1Bits_t BIT;
} CSIH2MCTL1_t;

typedef union
{
    uint32 UINT32;
    CSIH2MCTL2Bits_t BIT;
} CSIH2MCTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH2TX0WBits_t BIT;
} CSIH2TX0W_t;

typedef union
{
    uint16 UINT16;
    CSIH2TX0HBits_t BIT;
} CSIH2TX0H_t;

typedef union
{
    uint32 UINT32;
    const CSIH2RX0WBits_t BIT;
} CSIH2RX0W_t;

typedef union
{
    uint16 UINT16;
    const CSIH2RX0HBits_t BIT;
} CSIH2RX0H_t;

typedef union
{
    uint32 UINT32;
    CSIH2MRWP0Bits_t BIT;
} CSIH2MRWP0_t;

typedef union
{
    uint32 UINT32;
    const CSIH2STR0Bits_t BIT;
} CSIH2STR0_t;

typedef union
{
    uint16 UINT16;
    CSIH2STCR0Bits_t BIT;
} CSIH2STCR0_t;

typedef union
{
    uint16 UINT16;
    CSIH2MCTL0Bits_t BIT;
} CSIH2MCTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG0Bits_t BIT;
} CSIH2CFG0_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG1Bits_t BIT;
} CSIH2CFG1_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG2Bits_t BIT;
} CSIH2CFG2_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG3Bits_t BIT;
} CSIH2CFG3_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG4Bits_t BIT;
} CSIH2CFG4_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG5Bits_t BIT;
} CSIH2CFG5_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG6Bits_t BIT;
} CSIH2CFG6_t;

typedef union
{
    uint32 UINT32;
    CSIH2CFG7Bits_t BIT;
} CSIH2CFG7_t;

typedef union
{
    uint16 UINT16;
    CSIH2BRS0Bits_t BIT;
} CSIH2BRS0_t;

typedef union
{
    uint16 UINT16;
    CSIH2BRS1Bits_t BIT;
} CSIH2BRS1_t;

typedef union
{
    uint16 UINT16;
    CSIH2BRS2Bits_t BIT;
} CSIH2BRS2_t;

typedef union
{
    uint16 UINT16;
    CSIH2BRS3Bits_t BIT;
} CSIH2BRS3_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CSIH2CTL0_BASE, 0xFFD83000, __READ_WRITE, CSIH2CTL0_t);
__IOREG(CSIH2CTL1_BASE, 0xFFD83010, __READ_WRITE, CSIH2CTL1_t);
__IOREG(CSIH2CTL2_BASE, 0xFFD83014, __READ_WRITE, CSIH2CTL2_t);
__IOREG(CSIH2MCTL1_BASE, 0xFFD84000, __READ_WRITE, CSIH2MCTL1_t);
__IOREG(CSIH2MCTL2_BASE, 0xFFD84004, __READ_WRITE, CSIH2MCTL2_t);
__IOREG(CSIH2TX0W_BASE, 0xFFD84008, __READ_WRITE, CSIH2TX0W_t);
__IOREG(CSIH2TX0H_BASE, 0xFFD8400C, __READ_WRITE, CSIH2TX0H_t);
__IOREG(CSIH2RX0W_BASE, 0xFFD84010, __READ, CSIH2RX0W_t);
__IOREG(CSIH2RX0H_BASE, 0xFFD84014, __READ, CSIH2RX0H_t);
__IOREG(CSIH2MRWP0_BASE, 0xFFD84018, __READ_WRITE, CSIH2MRWP0_t);
__IOREG(CSIH2STR0_BASE, 0xFFD8401C, __READ, CSIH2STR0_t);
__IOREG(CSIH2STCR0_BASE, 0xFFD84020, __READ_WRITE, CSIH2STCR0_t);
__IOREG(CSIH2MCTL0_BASE, 0xFFD84040, __READ_WRITE, CSIH2MCTL0_t);
__IOREG(CSIH2CFG0_BASE, 0xFFD84044, __READ_WRITE, CSIH2CFG0_t);
__IOREG(CSIH2CFG1_BASE, 0xFFD84048, __READ_WRITE, CSIH2CFG1_t);
__IOREG(CSIH2CFG2_BASE, 0xFFD8404C, __READ_WRITE, CSIH2CFG2_t);
__IOREG(CSIH2CFG3_BASE, 0xFFD84050, __READ_WRITE, CSIH2CFG3_t);
__IOREG(CSIH2CFG4_BASE, 0xFFD84054, __READ_WRITE, CSIH2CFG4_t);
__IOREG(CSIH2CFG5_BASE, 0xFFD84058, __READ_WRITE, CSIH2CFG5_t);
__IOREG(CSIH2CFG6_BASE, 0xFFD8405C, __READ_WRITE, CSIH2CFG6_t);
__IOREG(CSIH2CFG7_BASE, 0xFFD84060, __READ_WRITE, CSIH2CFG7_t);
__IOREG(CSIH2BRS0_BASE, 0xFFD84068, __READ_WRITE, CSIH2BRS0_t);
__IOREG(CSIH2BRS1_BASE, 0xFFD8406C, __READ_WRITE, CSIH2BRS1_t);
__IOREG(CSIH2BRS2_BASE, 0xFFD84070, __READ_WRITE, CSIH2BRS2_t);
__IOREG(CSIH2BRS3_BASE, 0xFFD84074, __READ_WRITE, CSIH2BRS3_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CSIH2CTL0 CSIH2CTL0_BASE.UINT8
#define CSIH2CTL0_CSIH2MBS CSIH2CTL0_BASE.BIT._CSIH2MBS
#define CSIH2CTL0_CSIH2JOBE CSIH2CTL0_BASE.BIT._CSIH2JOBE
#define CSIH2CTL0_CSIH2RXE CSIH2CTL0_BASE.BIT._CSIH2RXE
#define CSIH2CTL0_CSIH2TXE CSIH2CTL0_BASE.BIT._CSIH2TXE
#define CSIH2CTL0_CSIH2PWR CSIH2CTL0_BASE.BIT._CSIH2PWR
#define CSIH2CTL1 CSIH2CTL1_BASE.UINT32
#define CSIH2CTL1_CSIH2SSE CSIH2CTL1_BASE.BIT._CSIH2SSE
#define CSIH2CTL1_CSIH2HSE CSIH2CTL1_BASE.BIT._CSIH2HSE
#define CSIH2CTL1_CSIH2SIT CSIH2CTL1_BASE.BIT._CSIH2SIT
#define CSIH2CTL1_CSIH2LBM CSIH2CTL1_BASE.BIT._CSIH2LBM
#define CSIH2CTL1_CSIH2CSRI CSIH2CTL1_BASE.BIT._CSIH2CSRI
#define CSIH2CTL1_CSIH2DCS CSIH2CTL1_BASE.BIT._CSIH2DCS
#define CSIH2CTL1_CSIH2JE CSIH2CTL1_BASE.BIT._CSIH2JE
#define CSIH2CTL1_CSIH2EDLE CSIH2CTL1_BASE.BIT._CSIH2EDLE
#define CSIH2CTL1_CSIH2CSL0 CSIH2CTL1_BASE.BIT._CSIH2CSL0
#define CSIH2CTL1_CSIH2CSL1 CSIH2CTL1_BASE.BIT._CSIH2CSL1
#define CSIH2CTL1_CSIH2CSL2 CSIH2CTL1_BASE.BIT._CSIH2CSL2
#define CSIH2CTL1_CSIH2CSL3 CSIH2CTL1_BASE.BIT._CSIH2CSL3
#define CSIH2CTL1_CSIH2CSL4 CSIH2CTL1_BASE.BIT._CSIH2CSL4
#define CSIH2CTL1_CSIH2CSL5 CSIH2CTL1_BASE.BIT._CSIH2CSL5
#define CSIH2CTL1_CSIH2CSL6 CSIH2CTL1_BASE.BIT._CSIH2CSL6
#define CSIH2CTL1_CSIH2CSL7 CSIH2CTL1_BASE.BIT._CSIH2CSL7
#define CSIH2CTL1_CSIH2SLIT CSIH2CTL1_BASE.BIT._CSIH2SLIT
#define CSIH2CTL1_CSIH2CKR CSIH2CTL1_BASE.BIT._CSIH2CKR
#define CSIH2CTL1_CSIH2SME CSIH2CTL1_BASE.BIT._CSIH2SME
#define CSIH2CTL1_CSIH2ISCE CSIH2CTL1_BASE.BIT._CSIH2ISCE
#define CSIH2CTL1_CSIH2SLRS CSIH2CTL1_BASE.BIT._CSIH2SLRS
#define CSIH2CTL2 CSIH2CTL2_BASE.UINT16
#define CSIH2CTL2_CSIH2PRS CSIH2CTL2_BASE.BIT._CSIH2PRS
#define CSIH2MCTL1 CSIH2MCTL1_BASE.UINT32
#define CSIH2MCTL1_CSIH2FFS CSIH2MCTL1_BASE.BIT._CSIH2FFS
#define CSIH2MCTL1_CSIH2FES CSIH2MCTL1_BASE.BIT._CSIH2FES
#define CSIH2MCTL2 CSIH2MCTL2_BASE.UINT32
#define CSIH2MCTL2_CSIH2SOP CSIH2MCTL2_BASE.BIT._CSIH2SOP
#define CSIH2MCTL2_CSIH2ND CSIH2MCTL2_BASE.BIT._CSIH2ND
#define CSIH2MCTL2_CSIH2BTST CSIH2MCTL2_BASE.BIT._CSIH2BTST
#define CSIH2TX0W CSIH2TX0W_BASE.UINT32
#define CSIH2TX0W_CSIH2TX CSIH2TX0W_BASE.BIT._CSIH2TX
#define CSIH2TX0W_CSIH2CS0 CSIH2TX0W_BASE.BIT._CSIH2CS0
#define CSIH2TX0W_CSIH2CS1 CSIH2TX0W_BASE.BIT._CSIH2CS1
#define CSIH2TX0W_CSIH2CS2 CSIH2TX0W_BASE.BIT._CSIH2CS2
#define CSIH2TX0W_CSIH2CS3 CSIH2TX0W_BASE.BIT._CSIH2CS3
#define CSIH2TX0W_CSIH2CS4 CSIH2TX0W_BASE.BIT._CSIH2CS4
#define CSIH2TX0W_CSIH2CS5 CSIH2TX0W_BASE.BIT._CSIH2CS5
#define CSIH2TX0W_CSIH2CS6 CSIH2TX0W_BASE.BIT._CSIH2CS6
#define CSIH2TX0W_CSIH2CS7 CSIH2TX0W_BASE.BIT._CSIH2CS7
#define CSIH2TX0W_CSIH2ISC CSIH2TX0W_BASE.BIT._CSIH2ISC
#define CSIH2TX0W_CSIH2SFN0 CSIH2TX0W_BASE.BIT._CSIH2SFN0
#define CSIH2TX0W_CSIH2SFN1 CSIH2TX0W_BASE.BIT._CSIH2SFN1
#define CSIH2TX0W_CSIH2EDL CSIH2TX0W_BASE.BIT._CSIH2EDL
#define CSIH2TX0W_CSIH2EOJ CSIH2TX0W_BASE.BIT._CSIH2EOJ
#define CSIH2TX0W_CSIH2CIRE CSIH2TX0W_BASE.BIT._CSIH2CIRE
#define CSIH2TX0H CSIH2TX0H_BASE.UINT16
#define CSIH2TX0H_CSIH2TX CSIH2TX0H_BASE.BIT._CSIH2TX
#define CSIH2RX0W CSIH2RX0W_BASE.UINT32
#define CSIH2RX0W_CSIH2RX CSIH2RX0W_BASE.BIT._CSIH2RX
#define CSIH2RX0W_CSIH2CS0 CSIH2RX0W_BASE.BIT._CSIH2CS0
#define CSIH2RX0W_CSIH2CS1 CSIH2RX0W_BASE.BIT._CSIH2CS1
#define CSIH2RX0W_CSIH2CS2 CSIH2RX0W_BASE.BIT._CSIH2CS2
#define CSIH2RX0W_CSIH2CS3 CSIH2RX0W_BASE.BIT._CSIH2CS3
#define CSIH2RX0W_CSIH2CS4 CSIH2RX0W_BASE.BIT._CSIH2CS4
#define CSIH2RX0W_CSIH2CS5 CSIH2RX0W_BASE.BIT._CSIH2CS5
#define CSIH2RX0W_CSIH2CS6 CSIH2RX0W_BASE.BIT._CSIH2CS6
#define CSIH2RX0W_CSIH2CS7 CSIH2RX0W_BASE.BIT._CSIH2CS7
#define CSIH2RX0W_CSIH2TDCE CSIH2RX0W_BASE.BIT._CSIH2TDCE
#define CSIH2RX0W_CSIH2RPE CSIH2RX0W_BASE.BIT._CSIH2RPE
#define CSIH2RX0H CSIH2RX0H_BASE.UINT16
#define CSIH2RX0H_CSIH2RX CSIH2RX0H_BASE.BIT._CSIH2RX
#define CSIH2MRWP0 CSIH2MRWP0_BASE.UINT32
#define CSIH2MRWP0_CSIH2TRWA CSIH2MRWP0_BASE.BIT._CSIH2TRWA
#define CSIH2MRWP0_CSIH2RRA CSIH2MRWP0_BASE.BIT._CSIH2RRA
#define CSIH2STR0 CSIH2STR0_BASE.UINT32
#define CSIH2STR0_CSIH2OVE CSIH2STR0_BASE.BIT._CSIH2OVE
#define CSIH2STR0_CSIH2PE CSIH2STR0_BASE.BIT._CSIH2PE
#define CSIH2STR0_CSIH2DCE CSIH2STR0_BASE.BIT._CSIH2DCE
#define CSIH2STR0_CSIH2EMF CSIH2STR0_BASE.BIT._CSIH2EMF
#define CSIH2STR0_CSIH2FLF CSIH2STR0_BASE.BIT._CSIH2FLF
#define CSIH2STR0_CSIH2TSF CSIH2STR0_BASE.BIT._CSIH2TSF
#define CSIH2STR0_CSIH2OFE CSIH2STR0_BASE.BIT._CSIH2OFE
#define CSIH2STR0_CSIH2TMOE CSIH2STR0_BASE.BIT._CSIH2TMOE
#define CSIH2STR0_CSIH2SPF CSIH2STR0_BASE.BIT._CSIH2SPF
#define CSIH2STR0_CSIH2SRP CSIH2STR0_BASE.BIT._CSIH2SRP
#define CSIH2STCR0 CSIH2STCR0_BASE.UINT16
#define CSIH2STCR0_CSIH2OVEC CSIH2STCR0_BASE.BIT._CSIH2OVEC
#define CSIH2STCR0_CSIH2PEC CSIH2STCR0_BASE.BIT._CSIH2PEC
#define CSIH2STCR0_CSIH2DCEC CSIH2STCR0_BASE.BIT._CSIH2DCEC
#define CSIH2STCR0_CSIH2PCT CSIH2STCR0_BASE.BIT._CSIH2PCT
#define CSIH2STCR0_CSIH2OFEC CSIH2STCR0_BASE.BIT._CSIH2OFEC
#define CSIH2STCR0_CSIH2TMOEC CSIH2STCR0_BASE.BIT._CSIH2TMOEC
#define CSIH2MCTL0 CSIH2MCTL0_BASE.UINT16
#define CSIH2MCTL0_CSIH2TO CSIH2MCTL0_BASE.BIT._CSIH2TO
#define CSIH2MCTL0_CSIH2MMS CSIH2MCTL0_BASE.BIT._CSIH2MMS
#define CSIH2CFG0 CSIH2CFG0_BASE.UINT32
#define CSIH2CFG0_CSIH2SP0 CSIH2CFG0_BASE.BIT._CSIH2SP0
#define CSIH2CFG0_CSIH2IN0 CSIH2CFG0_BASE.BIT._CSIH2IN0
#define CSIH2CFG0_CSIH2HD0 CSIH2CFG0_BASE.BIT._CSIH2HD0
#define CSIH2CFG0_CSIH2ID0 CSIH2CFG0_BASE.BIT._CSIH2ID0
#define CSIH2CFG0_CSIH2IDL0 CSIH2CFG0_BASE.BIT._CSIH2IDL0
#define CSIH2CFG0_CSIH2DAP0 CSIH2CFG0_BASE.BIT._CSIH2DAP0
#define CSIH2CFG0_CSIH2CKP0 CSIH2CFG0_BASE.BIT._CSIH2CKP0
#define CSIH2CFG0_CSIH2DIR0 CSIH2CFG0_BASE.BIT._CSIH2DIR0
#define CSIH2CFG0_CSIH2RCB0 CSIH2CFG0_BASE.BIT._CSIH2RCB0
#define CSIH2CFG0_CSIH2DLS0 CSIH2CFG0_BASE.BIT._CSIH2DLS0
#define CSIH2CFG0_CSIH2PS0 CSIH2CFG0_BASE.BIT._CSIH2PS0
#define CSIH2CFG0_CSIH2BRSS0 CSIH2CFG0_BASE.BIT._CSIH2BRSS0
#define CSIH2CFG1 CSIH2CFG1_BASE.UINT32
#define CSIH2CFG1_CSIH2SP1 CSIH2CFG1_BASE.BIT._CSIH2SP1
#define CSIH2CFG1_CSIH2IN1 CSIH2CFG1_BASE.BIT._CSIH2IN1
#define CSIH2CFG1_CSIH2HD1 CSIH2CFG1_BASE.BIT._CSIH2HD1
#define CSIH2CFG1_CSIH2ID1 CSIH2CFG1_BASE.BIT._CSIH2ID1
#define CSIH2CFG1_CSIH2IDL1 CSIH2CFG1_BASE.BIT._CSIH2IDL1
#define CSIH2CFG1_CSIH2DAP1 CSIH2CFG1_BASE.BIT._CSIH2DAP1
#define CSIH2CFG1_CSIH2CKP1 CSIH2CFG1_BASE.BIT._CSIH2CKP1
#define CSIH2CFG1_CSIH2DIR1 CSIH2CFG1_BASE.BIT._CSIH2DIR1
#define CSIH2CFG1_CSIH2RCB1 CSIH2CFG1_BASE.BIT._CSIH2RCB1
#define CSIH2CFG1_CSIH2DLS1 CSIH2CFG1_BASE.BIT._CSIH2DLS1
#define CSIH2CFG1_CSIH2PS1 CSIH2CFG1_BASE.BIT._CSIH2PS1
#define CSIH2CFG1_CSIH2BRSS1 CSIH2CFG1_BASE.BIT._CSIH2BRSS1
#define CSIH2CFG2 CSIH2CFG2_BASE.UINT32
#define CSIH2CFG2_CSIH2SP2 CSIH2CFG2_BASE.BIT._CSIH2SP2
#define CSIH2CFG2_CSIH2IN2 CSIH2CFG2_BASE.BIT._CSIH2IN2
#define CSIH2CFG2_CSIH2HD2 CSIH2CFG2_BASE.BIT._CSIH2HD2
#define CSIH2CFG2_CSIH2ID2 CSIH2CFG2_BASE.BIT._CSIH2ID2
#define CSIH2CFG2_CSIH2IDL2 CSIH2CFG2_BASE.BIT._CSIH2IDL2
#define CSIH2CFG2_CSIH2DAP2 CSIH2CFG2_BASE.BIT._CSIH2DAP2
#define CSIH2CFG2_CSIH2CKP2 CSIH2CFG2_BASE.BIT._CSIH2CKP2
#define CSIH2CFG2_CSIH2DIR2 CSIH2CFG2_BASE.BIT._CSIH2DIR2
#define CSIH2CFG2_CSIH2RCB2 CSIH2CFG2_BASE.BIT._CSIH2RCB2
#define CSIH2CFG2_CSIH2DLS2 CSIH2CFG2_BASE.BIT._CSIH2DLS2
#define CSIH2CFG2_CSIH2PS2 CSIH2CFG2_BASE.BIT._CSIH2PS2
#define CSIH2CFG2_CSIH2BRSS2 CSIH2CFG2_BASE.BIT._CSIH2BRSS2
#define CSIH2CFG3 CSIH2CFG3_BASE.UINT32
#define CSIH2CFG3_CSIH2SP3 CSIH2CFG3_BASE.BIT._CSIH2SP3
#define CSIH2CFG3_CSIH2IN3 CSIH2CFG3_BASE.BIT._CSIH2IN3
#define CSIH2CFG3_CSIH2HD3 CSIH2CFG3_BASE.BIT._CSIH2HD3
#define CSIH2CFG3_CSIH2ID3 CSIH2CFG3_BASE.BIT._CSIH2ID3
#define CSIH2CFG3_CSIH2IDL3 CSIH2CFG3_BASE.BIT._CSIH2IDL3
#define CSIH2CFG3_CSIH2DAP3 CSIH2CFG3_BASE.BIT._CSIH2DAP3
#define CSIH2CFG3_CSIH2CKP3 CSIH2CFG3_BASE.BIT._CSIH2CKP3
#define CSIH2CFG3_CSIH2DIR3 CSIH2CFG3_BASE.BIT._CSIH2DIR3
#define CSIH2CFG3_CSIH2RCB3 CSIH2CFG3_BASE.BIT._CSIH2RCB3
#define CSIH2CFG3_CSIH2DLS3 CSIH2CFG3_BASE.BIT._CSIH2DLS3
#define CSIH2CFG3_CSIH2PS3 CSIH2CFG3_BASE.BIT._CSIH2PS3
#define CSIH2CFG3_CSIH2BRSS3 CSIH2CFG3_BASE.BIT._CSIH2BRSS3
#define CSIH2CFG4 CSIH2CFG4_BASE.UINT32
#define CSIH2CFG4_CSIH2SP4 CSIH2CFG4_BASE.BIT._CSIH2SP4
#define CSIH2CFG4_CSIH2IN4 CSIH2CFG4_BASE.BIT._CSIH2IN4
#define CSIH2CFG4_CSIH2HD4 CSIH2CFG4_BASE.BIT._CSIH2HD4
#define CSIH2CFG4_CSIH2ID4 CSIH2CFG4_BASE.BIT._CSIH2ID4
#define CSIH2CFG4_CSIH2IDL4 CSIH2CFG4_BASE.BIT._CSIH2IDL4
#define CSIH2CFG4_CSIH2DAP4 CSIH2CFG4_BASE.BIT._CSIH2DAP4
#define CSIH2CFG4_CSIH2CKP4 CSIH2CFG4_BASE.BIT._CSIH2CKP4
#define CSIH2CFG4_CSIH2DIR4 CSIH2CFG4_BASE.BIT._CSIH2DIR4
#define CSIH2CFG4_CSIH2RCB4 CSIH2CFG4_BASE.BIT._CSIH2RCB4
#define CSIH2CFG4_CSIH2DLS4 CSIH2CFG4_BASE.BIT._CSIH2DLS4
#define CSIH2CFG4_CSIH2PS4 CSIH2CFG4_BASE.BIT._CSIH2PS4
#define CSIH2CFG4_CSIH2BRSS4 CSIH2CFG4_BASE.BIT._CSIH2BRSS4
#define CSIH2CFG5 CSIH2CFG5_BASE.UINT32
#define CSIH2CFG5_CSIH2SP5 CSIH2CFG5_BASE.BIT._CSIH2SP5
#define CSIH2CFG5_CSIH2IN5 CSIH2CFG5_BASE.BIT._CSIH2IN5
#define CSIH2CFG5_CSIH2HD5 CSIH2CFG5_BASE.BIT._CSIH2HD5
#define CSIH2CFG5_CSIH2ID5 CSIH2CFG5_BASE.BIT._CSIH2ID5
#define CSIH2CFG5_CSIH2IDL5 CSIH2CFG5_BASE.BIT._CSIH2IDL5
#define CSIH2CFG5_CSIH2DAP5 CSIH2CFG5_BASE.BIT._CSIH2DAP5
#define CSIH2CFG5_CSIH2CKP5 CSIH2CFG5_BASE.BIT._CSIH2CKP5
#define CSIH2CFG5_CSIH2DIR5 CSIH2CFG5_BASE.BIT._CSIH2DIR5
#define CSIH2CFG5_CSIH2RCB5 CSIH2CFG5_BASE.BIT._CSIH2RCB5
#define CSIH2CFG5_CSIH2DLS5 CSIH2CFG5_BASE.BIT._CSIH2DLS5
#define CSIH2CFG5_CSIH2PS5 CSIH2CFG5_BASE.BIT._CSIH2PS5
#define CSIH2CFG5_CSIH2BRSS5 CSIH2CFG5_BASE.BIT._CSIH2BRSS5
#define CSIH2CFG6 CSIH2CFG6_BASE.UINT32
#define CSIH2CFG6_CSIH2SP6 CSIH2CFG6_BASE.BIT._CSIH2SP6
#define CSIH2CFG6_CSIH2IN6 CSIH2CFG6_BASE.BIT._CSIH2IN6
#define CSIH2CFG6_CSIH2HD6 CSIH2CFG6_BASE.BIT._CSIH2HD6
#define CSIH2CFG6_CSIH2ID6 CSIH2CFG6_BASE.BIT._CSIH2ID6
#define CSIH2CFG6_CSIH2IDL6 CSIH2CFG6_BASE.BIT._CSIH2IDL6
#define CSIH2CFG6_CSIH2DAP6 CSIH2CFG6_BASE.BIT._CSIH2DAP6
#define CSIH2CFG6_CSIH2CKP6 CSIH2CFG6_BASE.BIT._CSIH2CKP6
#define CSIH2CFG6_CSIH2DIR6 CSIH2CFG6_BASE.BIT._CSIH2DIR6
#define CSIH2CFG6_CSIH2RCB6 CSIH2CFG6_BASE.BIT._CSIH2RCB6
#define CSIH2CFG6_CSIH2DLS6 CSIH2CFG6_BASE.BIT._CSIH2DLS6
#define CSIH2CFG6_CSIH2PS6 CSIH2CFG6_BASE.BIT._CSIH2PS6
#define CSIH2CFG6_CSIH2BRSS6 CSIH2CFG6_BASE.BIT._CSIH2BRSS6
#define CSIH2CFG7 CSIH2CFG7_BASE.UINT32
#define CSIH2CFG7_CSIH2SP7 CSIH2CFG7_BASE.BIT._CSIH2SP7
#define CSIH2CFG7_CSIH2IN7 CSIH2CFG7_BASE.BIT._CSIH2IN7
#define CSIH2CFG7_CSIH2HD7 CSIH2CFG7_BASE.BIT._CSIH2HD7
#define CSIH2CFG7_CSIH2ID7 CSIH2CFG7_BASE.BIT._CSIH2ID7
#define CSIH2CFG7_CSIH2IDL7 CSIH2CFG7_BASE.BIT._CSIH2IDL7
#define CSIH2CFG7_CSIH2DAP7 CSIH2CFG7_BASE.BIT._CSIH2DAP7
#define CSIH2CFG7_CSIH2CKP7 CSIH2CFG7_BASE.BIT._CSIH2CKP7
#define CSIH2CFG7_CSIH2DIR7 CSIH2CFG7_BASE.BIT._CSIH2DIR7
#define CSIH2CFG7_CSIH2RCB7 CSIH2CFG7_BASE.BIT._CSIH2RCB7
#define CSIH2CFG7_CSIH2DLS7 CSIH2CFG7_BASE.BIT._CSIH2DLS7
#define CSIH2CFG7_CSIH2PS7 CSIH2CFG7_BASE.BIT._CSIH2PS7
#define CSIH2CFG7_CSIH2BRSS7 CSIH2CFG7_BASE.BIT._CSIH2BRSS7
#define CSIH2BRS0 CSIH2BRS0_BASE.UINT16
#define CSIH2BRS0_CSIH2BRS0 CSIH2BRS0_BASE.BIT._CSIH2BRS0
#define CSIH2BRS1 CSIH2BRS1_BASE.UINT16
#define CSIH2BRS1_CSIH2BRS1 CSIH2BRS1_BASE.BIT._CSIH2BRS1
#define CSIH2BRS2 CSIH2BRS2_BASE.UINT16
#define CSIH2BRS2_CSIH2BRS2 CSIH2BRS2_BASE.BIT._CSIH2BRS2
#define CSIH2BRS3 CSIH2BRS3_BASE.UINT16
#define CSIH2BRS3_CSIH2BRS3 CSIH2BRS3_BASE.BIT._CSIH2BRS3

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif