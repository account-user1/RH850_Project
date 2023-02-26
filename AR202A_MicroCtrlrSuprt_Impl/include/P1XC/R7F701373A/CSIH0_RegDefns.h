#ifndef __DR7F701373_CSIH0_HEADER__
#define __DR7F701373_CSIH0_HEADER__



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
    uint8 _CSIH0MBS : 1;
    uint8 _CSIH0JOBE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _CSIH0RXE : 1;
    uint8 _CSIH0TXE : 1;
    uint8 _CSIH0PWR : 1;
} CSIH0CTL0Bits_t;

typedef struct
{
    uint32 _CSIH0SSE : 1;
    uint32 _CSIH0HSE : 1;
    uint32 _CSIH0SIT : 1;
    uint32 _CSIH0LBM : 1;
    uint32 _CSIH0CSRI : 1;
    uint32 _CSIH0DCS : 1;
    uint32 _CSIH0JE : 1;
    uint32 _CSIH0EDLE : 1;
    uint32 _CSIH0CSL0 : 1;
    uint32 _CSIH0CSL1 : 1;
    uint32 _CSIH0CSL2 : 1;
    uint32 _CSIH0CSL3 : 1;
    uint32 _CSIH0CSL4 : 1;
    uint32 _CSIH0CSL5 : 1;
    uint32 _CSIH0CSL6 : 1;
    uint32 _CSIH0CSL7 : 1;
    uint32 _CSIH0SLIT : 1;
    uint32 _CSIH0CKR : 1;
    uint32 padding18 : 1;
    uint32 _CSIH0SME : 1;
    uint32 _CSIH0ISCE : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0SLRS : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH0CTL1Bits_t;

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
    uint16 _CSIH0PRS : 3;
} CSIH0CTL2Bits_t;

typedef struct
{
    uint32 _CSIH0FFS : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0FES : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH0MCTL1Bits_t;

typedef struct
{
    uint32 _CSIH0SOP : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0ND : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CSIH0BTST : 1;
} CSIH0MCTL2Bits_t;

typedef struct
{
    uint32 _CSIH0TX : 16;
    uint32 _CSIH0CS0 : 1;
    uint32 _CSIH0CS1 : 1;
    uint32 _CSIH0CS2 : 1;
    uint32 _CSIH0CS3 : 1;
    uint32 _CSIH0CS4 : 1;
    uint32 _CSIH0CS5 : 1;
    uint32 _CSIH0CS6 : 1;
    uint32 _CSIH0CS7 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _CSIH0ISC : 1;
    uint32 _CSIH0SFN0 : 1;
    uint32 _CSIH0SFN1 : 1;
    uint32 _CSIH0EDL : 1;
    uint32 _CSIH0EOJ : 1;
    uint32 _CSIH0CIRE : 1;
} CSIH0TX0WBits_t;

typedef struct
{
    uint16 _CSIH0TX : 16;
} CSIH0TX0HBits_t;

typedef struct
{
    const uint32 _CSIH0RX : 16;
    const uint32 _CSIH0CS0 : 1;
    const uint32 _CSIH0CS1 : 1;
    const uint32 _CSIH0CS2 : 1;
    const uint32 _CSIH0CS3 : 1;
    const uint32 _CSIH0CS4 : 1;
    const uint32 _CSIH0CS5 : 1;
    const uint32 _CSIH0CS6 : 1;
    const uint32 _CSIH0CS7 : 1;
    const uint32 _CSIH0TDCE : 1;
    const uint32 _CSIH0RPE : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH0RX0WBits_t;

typedef struct
{
    const uint16 _CSIH0RX : 16;
} CSIH0RX0HBits_t;

typedef struct
{
    uint32 _CSIH0TRWA : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH0RRA : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH0MRWP0Bits_t;

typedef struct
{
    const uint32 _CSIH0OVE : 1;
    const uint32 _CSIH0PE : 1;
    uint32 padding2 : 1;
    const uint32 _CSIH0DCE : 1;
    const uint32 _CSIH0EMF : 1;
    const uint32 _CSIH0FLF : 1;
    uint32 padding6 : 1;
    const uint32 _CSIH0TSF : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _CSIH0OFE : 1;
    const uint32 _CSIH0TMOE : 1;
    const uint32 _CSIH0SPF : 8;
    const uint32 _CSIH0SRP : 8;
} CSIH0STR0Bits_t;

typedef struct
{
    uint16 _CSIH0OVEC : 1;
    uint16 _CSIH0PEC : 1;
    uint16 padding2 : 1;
    uint16 _CSIH0DCEC : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH0PCT : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 _CSIH0OFEC : 1;
    uint16 _CSIH0TMOEC : 1;
} CSIH0STCR0Bits_t;

typedef struct
{
    uint16 _CSIH0TO : 5;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH0MMS : 2;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH0MCTL0Bits_t;

typedef struct
{
    uint32 _CSIH0SP0 : 4;
    uint32 _CSIH0IN0 : 4;
    uint32 _CSIH0HD0 : 4;
    uint32 _CSIH0ID0 : 3;
    uint32 _CSIH0IDL0 : 1;
    uint32 _CSIH0DAP0 : 1;
    uint32 _CSIH0CKP0 : 1;
    uint32 _CSIH0DIR0 : 1;
    uint32 _CSIH0RCB0 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS0 : 4;
    uint32 _CSIH0PS0 : 2;
    uint32 _CSIH0BRSS0 : 2;
} CSIH0CFG0Bits_t;

typedef struct
{
    uint32 _CSIH0SP1 : 4;
    uint32 _CSIH0IN1 : 4;
    uint32 _CSIH0HD1 : 4;
    uint32 _CSIH0ID1 : 3;
    uint32 _CSIH0IDL1 : 1;
    uint32 _CSIH0DAP1 : 1;
    uint32 _CSIH0CKP1 : 1;
    uint32 _CSIH0DIR1 : 1;
    uint32 _CSIH0RCB1 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS1 : 4;
    uint32 _CSIH0PS1 : 2;
    uint32 _CSIH0BRSS1 : 2;
} CSIH0CFG1Bits_t;

typedef struct
{
    uint32 _CSIH0SP2 : 4;
    uint32 _CSIH0IN2 : 4;
    uint32 _CSIH0HD2 : 4;
    uint32 _CSIH0ID2 : 3;
    uint32 _CSIH0IDL2 : 1;
    uint32 _CSIH0DAP2 : 1;
    uint32 _CSIH0CKP2 : 1;
    uint32 _CSIH0DIR2 : 1;
    uint32 _CSIH0RCB2 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS2 : 4;
    uint32 _CSIH0PS2 : 2;
    uint32 _CSIH0BRSS2 : 2;
} CSIH0CFG2Bits_t;

typedef struct
{
    uint32 _CSIH0SP3 : 4;
    uint32 _CSIH0IN3 : 4;
    uint32 _CSIH0HD3 : 4;
    uint32 _CSIH0ID3 : 3;
    uint32 _CSIH0IDL3 : 1;
    uint32 _CSIH0DAP3 : 1;
    uint32 _CSIH0CKP3 : 1;
    uint32 _CSIH0DIR3 : 1;
    uint32 _CSIH0RCB3 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS3 : 4;
    uint32 _CSIH0PS3 : 2;
    uint32 _CSIH0BRSS3 : 2;
} CSIH0CFG3Bits_t;

typedef struct
{
    uint32 _CSIH0SP4 : 4;
    uint32 _CSIH0IN4 : 4;
    uint32 _CSIH0HD4 : 4;
    uint32 _CSIH0ID4 : 3;
    uint32 _CSIH0IDL4 : 1;
    uint32 _CSIH0DAP4 : 1;
    uint32 _CSIH0CKP4 : 1;
    uint32 _CSIH0DIR4 : 1;
    uint32 _CSIH0RCB4 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS4 : 4;
    uint32 _CSIH0PS4 : 2;
    uint32 _CSIH0BRSS4 : 2;
} CSIH0CFG4Bits_t;

typedef struct
{
    uint32 _CSIH0SP5 : 4;
    uint32 _CSIH0IN5 : 4;
    uint32 _CSIH0HD5 : 4;
    uint32 _CSIH0ID5 : 3;
    uint32 _CSIH0IDL5 : 1;
    uint32 _CSIH0DAP5 : 1;
    uint32 _CSIH0CKP5 : 1;
    uint32 _CSIH0DIR5 : 1;
    uint32 _CSIH0RCB5 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS5 : 4;
    uint32 _CSIH0PS5 : 2;
    uint32 _CSIH0BRSS5 : 2;
} CSIH0CFG5Bits_t;

typedef struct
{
    uint32 _CSIH0SP6 : 4;
    uint32 _CSIH0IN6 : 4;
    uint32 _CSIH0HD6 : 4;
    uint32 _CSIH0ID6 : 3;
    uint32 _CSIH0IDL6 : 1;
    uint32 _CSIH0DAP6 : 1;
    uint32 _CSIH0CKP6 : 1;
    uint32 _CSIH0DIR6 : 1;
    uint32 _CSIH0RCB6 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS6 : 4;
    uint32 _CSIH0PS6 : 2;
    uint32 _CSIH0BRSS6 : 2;
} CSIH0CFG6Bits_t;

typedef struct
{
    uint32 _CSIH0SP7 : 4;
    uint32 _CSIH0IN7 : 4;
    uint32 _CSIH0HD7 : 4;
    uint32 _CSIH0ID7 : 3;
    uint32 _CSIH0IDL7 : 1;
    uint32 _CSIH0DAP7 : 1;
    uint32 _CSIH0CKP7 : 1;
    uint32 _CSIH0DIR7 : 1;
    uint32 _CSIH0RCB7 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH0DLS7 : 4;
    uint32 _CSIH0PS7 : 2;
    uint32 _CSIH0BRSS7 : 2;
} CSIH0CFG7Bits_t;

typedef struct
{
    uint16 _CSIH0BRS0 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH0BRS0Bits_t;

typedef struct
{
    uint16 _CSIH0BRS1 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH0BRS1Bits_t;

typedef struct
{
    uint16 _CSIH0BRS2 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH0BRS2Bits_t;

typedef struct
{
    uint16 _CSIH0BRS3 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH0BRS3Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CSIH0CTL0Bits_t BIT;
} CSIH0CTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH0CTL1Bits_t BIT;
} CSIH0CTL1_t;

typedef union
{
    uint16 UINT16;
    CSIH0CTL2Bits_t BIT;
} CSIH0CTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH0MCTL1Bits_t BIT;
} CSIH0MCTL1_t;

typedef union
{
    uint32 UINT32;
    CSIH0MCTL2Bits_t BIT;
} CSIH0MCTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH0TX0WBits_t BIT;
} CSIH0TX0W_t;

typedef union
{
    uint16 UINT16;
    CSIH0TX0HBits_t BIT;
} CSIH0TX0H_t;

typedef union
{
    uint32 UINT32;
    const CSIH0RX0WBits_t BIT;
} CSIH0RX0W_t;

typedef union
{
    uint16 UINT16;
    const CSIH0RX0HBits_t BIT;
} CSIH0RX0H_t;

typedef union
{
    uint32 UINT32;
    CSIH0MRWP0Bits_t BIT;
} CSIH0MRWP0_t;

typedef union
{
    uint32 UINT32;
    const CSIH0STR0Bits_t BIT;
} CSIH0STR0_t;

typedef union
{
    uint16 UINT16;
    CSIH0STCR0Bits_t BIT;
} CSIH0STCR0_t;

typedef union
{
    uint16 UINT16;
    CSIH0MCTL0Bits_t BIT;
} CSIH0MCTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG0Bits_t BIT;
} CSIH0CFG0_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG1Bits_t BIT;
} CSIH0CFG1_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG2Bits_t BIT;
} CSIH0CFG2_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG3Bits_t BIT;
} CSIH0CFG3_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG4Bits_t BIT;
} CSIH0CFG4_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG5Bits_t BIT;
} CSIH0CFG5_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG6Bits_t BIT;
} CSIH0CFG6_t;

typedef union
{
    uint32 UINT32;
    CSIH0CFG7Bits_t BIT;
} CSIH0CFG7_t;

typedef union
{
    uint16 UINT16;
    CSIH0BRS0Bits_t BIT;
} CSIH0BRS0_t;

typedef union
{
    uint16 UINT16;
    CSIH0BRS1Bits_t BIT;
} CSIH0BRS1_t;

typedef union
{
    uint16 UINT16;
    CSIH0BRS2Bits_t BIT;
} CSIH0BRS2_t;

typedef union
{
    uint16 UINT16;
    CSIH0BRS3Bits_t BIT;
} CSIH0BRS3_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CSIH0CTL0_BASE, 0xFFD80000, __READ_WRITE, CSIH0CTL0_t);
__IOREG(CSIH0CTL1_BASE, 0xFFD80010, __READ_WRITE, CSIH0CTL1_t);
__IOREG(CSIH0CTL2_BASE, 0xFFD80014, __READ_WRITE, CSIH0CTL2_t);
__IOREG(CSIH0MCTL1_BASE, 0xFFD81000, __READ_WRITE, CSIH0MCTL1_t);
__IOREG(CSIH0MCTL2_BASE, 0xFFD81004, __READ_WRITE, CSIH0MCTL2_t);
__IOREG(CSIH0TX0W_BASE, 0xFFD81008, __READ_WRITE, CSIH0TX0W_t);
__IOREG(CSIH0TX0H_BASE, 0xFFD8100C, __READ_WRITE, CSIH0TX0H_t);
__IOREG(CSIH0RX0W_BASE, 0xFFD81010, __READ, CSIH0RX0W_t);
__IOREG(CSIH0RX0H_BASE, 0xFFD81014, __READ, CSIH0RX0H_t);
__IOREG(CSIH0MRWP0_BASE, 0xFFD81018, __READ_WRITE, CSIH0MRWP0_t);
__IOREG(CSIH0STR0_BASE, 0xFFD8101C, __READ, CSIH0STR0_t);
__IOREG(CSIH0STCR0_BASE, 0xFFD81020, __READ_WRITE, CSIH0STCR0_t);
__IOREG(CSIH0MCTL0_BASE, 0xFFD81040, __READ_WRITE, CSIH0MCTL0_t);
__IOREG(CSIH0CFG0_BASE, 0xFFD81044, __READ_WRITE, CSIH0CFG0_t);
__IOREG(CSIH0CFG1_BASE, 0xFFD81048, __READ_WRITE, CSIH0CFG1_t);
__IOREG(CSIH0CFG2_BASE, 0xFFD8104C, __READ_WRITE, CSIH0CFG2_t);
__IOREG(CSIH0CFG3_BASE, 0xFFD81050, __READ_WRITE, CSIH0CFG3_t);
__IOREG(CSIH0CFG4_BASE, 0xFFD81054, __READ_WRITE, CSIH0CFG4_t);
__IOREG(CSIH0CFG5_BASE, 0xFFD81058, __READ_WRITE, CSIH0CFG5_t);
__IOREG(CSIH0CFG6_BASE, 0xFFD8105C, __READ_WRITE, CSIH0CFG6_t);
__IOREG(CSIH0CFG7_BASE, 0xFFD81060, __READ_WRITE, CSIH0CFG7_t);
__IOREG(CSIH0BRS0_BASE, 0xFFD81068, __READ_WRITE, CSIH0BRS0_t);
__IOREG(CSIH0BRS1_BASE, 0xFFD8106C, __READ_WRITE, CSIH0BRS1_t);
__IOREG(CSIH0BRS2_BASE, 0xFFD81070, __READ_WRITE, CSIH0BRS2_t);
__IOREG(CSIH0BRS3_BASE, 0xFFD81074, __READ_WRITE, CSIH0BRS3_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CSIH0CTL0 CSIH0CTL0_BASE.UINT8
#define CSIH0CTL0_CSIH0MBS CSIH0CTL0_BASE.BIT._CSIH0MBS
#define CSIH0CTL0_CSIH0JOBE CSIH0CTL0_BASE.BIT._CSIH0JOBE
#define CSIH0CTL0_CSIH0RXE CSIH0CTL0_BASE.BIT._CSIH0RXE
#define CSIH0CTL0_CSIH0TXE CSIH0CTL0_BASE.BIT._CSIH0TXE
#define CSIH0CTL0_CSIH0PWR CSIH0CTL0_BASE.BIT._CSIH0PWR
#define CSIH0CTL1 CSIH0CTL1_BASE.UINT32
#define CSIH0CTL1_CSIH0SSE CSIH0CTL1_BASE.BIT._CSIH0SSE
#define CSIH0CTL1_CSIH0HSE CSIH0CTL1_BASE.BIT._CSIH0HSE
#define CSIH0CTL1_CSIH0SIT CSIH0CTL1_BASE.BIT._CSIH0SIT
#define CSIH0CTL1_CSIH0LBM CSIH0CTL1_BASE.BIT._CSIH0LBM
#define CSIH0CTL1_CSIH0CSRI CSIH0CTL1_BASE.BIT._CSIH0CSRI
#define CSIH0CTL1_CSIH0DCS CSIH0CTL1_BASE.BIT._CSIH0DCS
#define CSIH0CTL1_CSIH0JE CSIH0CTL1_BASE.BIT._CSIH0JE
#define CSIH0CTL1_CSIH0EDLE CSIH0CTL1_BASE.BIT._CSIH0EDLE
#define CSIH0CTL1_CSIH0CSL0 CSIH0CTL1_BASE.BIT._CSIH0CSL0
#define CSIH0CTL1_CSIH0CSL1 CSIH0CTL1_BASE.BIT._CSIH0CSL1
#define CSIH0CTL1_CSIH0CSL2 CSIH0CTL1_BASE.BIT._CSIH0CSL2
#define CSIH0CTL1_CSIH0CSL3 CSIH0CTL1_BASE.BIT._CSIH0CSL3
#define CSIH0CTL1_CSIH0CSL4 CSIH0CTL1_BASE.BIT._CSIH0CSL4
#define CSIH0CTL1_CSIH0CSL5 CSIH0CTL1_BASE.BIT._CSIH0CSL5
#define CSIH0CTL1_CSIH0CSL6 CSIH0CTL1_BASE.BIT._CSIH0CSL6
#define CSIH0CTL1_CSIH0CSL7 CSIH0CTL1_BASE.BIT._CSIH0CSL7
#define CSIH0CTL1_CSIH0SLIT CSIH0CTL1_BASE.BIT._CSIH0SLIT
#define CSIH0CTL1_CSIH0CKR CSIH0CTL1_BASE.BIT._CSIH0CKR
#define CSIH0CTL1_CSIH0SME CSIH0CTL1_BASE.BIT._CSIH0SME
#define CSIH0CTL1_CSIH0ISCE CSIH0CTL1_BASE.BIT._CSIH0ISCE
#define CSIH0CTL1_CSIH0SLRS CSIH0CTL1_BASE.BIT._CSIH0SLRS
#define CSIH0CTL2 CSIH0CTL2_BASE.UINT16
#define CSIH0CTL2_CSIH0PRS CSIH0CTL2_BASE.BIT._CSIH0PRS
#define CSIH0MCTL1 CSIH0MCTL1_BASE.UINT32
#define CSIH0MCTL1_CSIH0FFS CSIH0MCTL1_BASE.BIT._CSIH0FFS
#define CSIH0MCTL1_CSIH0FES CSIH0MCTL1_BASE.BIT._CSIH0FES
#define CSIH0MCTL2 CSIH0MCTL2_BASE.UINT32
#define CSIH0MCTL2_CSIH0SOP CSIH0MCTL2_BASE.BIT._CSIH0SOP
#define CSIH0MCTL2_CSIH0ND CSIH0MCTL2_BASE.BIT._CSIH0ND
#define CSIH0MCTL2_CSIH0BTST CSIH0MCTL2_BASE.BIT._CSIH0BTST
#define CSIH0TX0W CSIH0TX0W_BASE.UINT32
#define CSIH0TX0W_CSIH0TX CSIH0TX0W_BASE.BIT._CSIH0TX
#define CSIH0TX0W_CSIH0CS0 CSIH0TX0W_BASE.BIT._CSIH0CS0
#define CSIH0TX0W_CSIH0CS1 CSIH0TX0W_BASE.BIT._CSIH0CS1
#define CSIH0TX0W_CSIH0CS2 CSIH0TX0W_BASE.BIT._CSIH0CS2
#define CSIH0TX0W_CSIH0CS3 CSIH0TX0W_BASE.BIT._CSIH0CS3
#define CSIH0TX0W_CSIH0CS4 CSIH0TX0W_BASE.BIT._CSIH0CS4
#define CSIH0TX0W_CSIH0CS5 CSIH0TX0W_BASE.BIT._CSIH0CS5
#define CSIH0TX0W_CSIH0CS6 CSIH0TX0W_BASE.BIT._CSIH0CS6
#define CSIH0TX0W_CSIH0CS7 CSIH0TX0W_BASE.BIT._CSIH0CS7
#define CSIH0TX0W_CSIH0ISC CSIH0TX0W_BASE.BIT._CSIH0ISC
#define CSIH0TX0W_CSIH0SFN0 CSIH0TX0W_BASE.BIT._CSIH0SFN0
#define CSIH0TX0W_CSIH0SFN1 CSIH0TX0W_BASE.BIT._CSIH0SFN1
#define CSIH0TX0W_CSIH0EDL CSIH0TX0W_BASE.BIT._CSIH0EDL
#define CSIH0TX0W_CSIH0EOJ CSIH0TX0W_BASE.BIT._CSIH0EOJ
#define CSIH0TX0W_CSIH0CIRE CSIH0TX0W_BASE.BIT._CSIH0CIRE
#define CSIH0TX0H CSIH0TX0H_BASE.UINT16
#define CSIH0TX0H_CSIH0TX CSIH0TX0H_BASE.BIT._CSIH0TX
#define CSIH0RX0W CSIH0RX0W_BASE.UINT32
#define CSIH0RX0W_CSIH0RX CSIH0RX0W_BASE.BIT._CSIH0RX
#define CSIH0RX0W_CSIH0CS0 CSIH0RX0W_BASE.BIT._CSIH0CS0
#define CSIH0RX0W_CSIH0CS1 CSIH0RX0W_BASE.BIT._CSIH0CS1
#define CSIH0RX0W_CSIH0CS2 CSIH0RX0W_BASE.BIT._CSIH0CS2
#define CSIH0RX0W_CSIH0CS3 CSIH0RX0W_BASE.BIT._CSIH0CS3
#define CSIH0RX0W_CSIH0CS4 CSIH0RX0W_BASE.BIT._CSIH0CS4
#define CSIH0RX0W_CSIH0CS5 CSIH0RX0W_BASE.BIT._CSIH0CS5
#define CSIH0RX0W_CSIH0CS6 CSIH0RX0W_BASE.BIT._CSIH0CS6
#define CSIH0RX0W_CSIH0CS7 CSIH0RX0W_BASE.BIT._CSIH0CS7
#define CSIH0RX0W_CSIH0TDCE CSIH0RX0W_BASE.BIT._CSIH0TDCE
#define CSIH0RX0W_CSIH0RPE CSIH0RX0W_BASE.BIT._CSIH0RPE
#define CSIH0RX0H CSIH0RX0H_BASE.UINT16
#define CSIH0RX0H_CSIH0RX CSIH0RX0H_BASE.BIT._CSIH0RX
#define CSIH0MRWP0 CSIH0MRWP0_BASE.UINT32
#define CSIH0MRWP0_CSIH0TRWA CSIH0MRWP0_BASE.BIT._CSIH0TRWA
#define CSIH0MRWP0_CSIH0RRA CSIH0MRWP0_BASE.BIT._CSIH0RRA
#define CSIH0STR0 CSIH0STR0_BASE.UINT32
#define CSIH0STR0_CSIH0OVE CSIH0STR0_BASE.BIT._CSIH0OVE
#define CSIH0STR0_CSIH0PE CSIH0STR0_BASE.BIT._CSIH0PE
#define CSIH0STR0_CSIH0DCE CSIH0STR0_BASE.BIT._CSIH0DCE
#define CSIH0STR0_CSIH0EMF CSIH0STR0_BASE.BIT._CSIH0EMF
#define CSIH0STR0_CSIH0FLF CSIH0STR0_BASE.BIT._CSIH0FLF
#define CSIH0STR0_CSIH0TSF CSIH0STR0_BASE.BIT._CSIH0TSF
#define CSIH0STR0_CSIH0OFE CSIH0STR0_BASE.BIT._CSIH0OFE
#define CSIH0STR0_CSIH0TMOE CSIH0STR0_BASE.BIT._CSIH0TMOE
#define CSIH0STR0_CSIH0SPF CSIH0STR0_BASE.BIT._CSIH0SPF
#define CSIH0STR0_CSIH0SRP CSIH0STR0_BASE.BIT._CSIH0SRP
#define CSIH0STCR0 CSIH0STCR0_BASE.UINT16
#define CSIH0STCR0_CSIH0OVEC CSIH0STCR0_BASE.BIT._CSIH0OVEC
#define CSIH0STCR0_CSIH0PEC CSIH0STCR0_BASE.BIT._CSIH0PEC
#define CSIH0STCR0_CSIH0DCEC CSIH0STCR0_BASE.BIT._CSIH0DCEC
#define CSIH0STCR0_CSIH0PCT CSIH0STCR0_BASE.BIT._CSIH0PCT
#define CSIH0STCR0_CSIH0OFEC CSIH0STCR0_BASE.BIT._CSIH0OFEC
#define CSIH0STCR0_CSIH0TMOEC CSIH0STCR0_BASE.BIT._CSIH0TMOEC
#define CSIH0MCTL0 CSIH0MCTL0_BASE.UINT16
#define CSIH0MCTL0_CSIH0TO CSIH0MCTL0_BASE.BIT._CSIH0TO
#define CSIH0MCTL0_CSIH0MMS CSIH0MCTL0_BASE.BIT._CSIH0MMS
#define CSIH0CFG0 CSIH0CFG0_BASE.UINT32
#define CSIH0CFG0_CSIH0SP0 CSIH0CFG0_BASE.BIT._CSIH0SP0
#define CSIH0CFG0_CSIH0IN0 CSIH0CFG0_BASE.BIT._CSIH0IN0
#define CSIH0CFG0_CSIH0HD0 CSIH0CFG0_BASE.BIT._CSIH0HD0
#define CSIH0CFG0_CSIH0ID0 CSIH0CFG0_BASE.BIT._CSIH0ID0
#define CSIH0CFG0_CSIH0IDL0 CSIH0CFG0_BASE.BIT._CSIH0IDL0
#define CSIH0CFG0_CSIH0DAP0 CSIH0CFG0_BASE.BIT._CSIH0DAP0
#define CSIH0CFG0_CSIH0CKP0 CSIH0CFG0_BASE.BIT._CSIH0CKP0
#define CSIH0CFG0_CSIH0DIR0 CSIH0CFG0_BASE.BIT._CSIH0DIR0
#define CSIH0CFG0_CSIH0RCB0 CSIH0CFG0_BASE.BIT._CSIH0RCB0
#define CSIH0CFG0_CSIH0DLS0 CSIH0CFG0_BASE.BIT._CSIH0DLS0
#define CSIH0CFG0_CSIH0PS0 CSIH0CFG0_BASE.BIT._CSIH0PS0
#define CSIH0CFG0_CSIH0BRSS0 CSIH0CFG0_BASE.BIT._CSIH0BRSS0
#define CSIH0CFG1 CSIH0CFG1_BASE.UINT32
#define CSIH0CFG1_CSIH0SP1 CSIH0CFG1_BASE.BIT._CSIH0SP1
#define CSIH0CFG1_CSIH0IN1 CSIH0CFG1_BASE.BIT._CSIH0IN1
#define CSIH0CFG1_CSIH0HD1 CSIH0CFG1_BASE.BIT._CSIH0HD1
#define CSIH0CFG1_CSIH0ID1 CSIH0CFG1_BASE.BIT._CSIH0ID1
#define CSIH0CFG1_CSIH0IDL1 CSIH0CFG1_BASE.BIT._CSIH0IDL1
#define CSIH0CFG1_CSIH0DAP1 CSIH0CFG1_BASE.BIT._CSIH0DAP1
#define CSIH0CFG1_CSIH0CKP1 CSIH0CFG1_BASE.BIT._CSIH0CKP1
#define CSIH0CFG1_CSIH0DIR1 CSIH0CFG1_BASE.BIT._CSIH0DIR1
#define CSIH0CFG1_CSIH0RCB1 CSIH0CFG1_BASE.BIT._CSIH0RCB1
#define CSIH0CFG1_CSIH0DLS1 CSIH0CFG1_BASE.BIT._CSIH0DLS1
#define CSIH0CFG1_CSIH0PS1 CSIH0CFG1_BASE.BIT._CSIH0PS1
#define CSIH0CFG1_CSIH0BRSS1 CSIH0CFG1_BASE.BIT._CSIH0BRSS1
#define CSIH0CFG2 CSIH0CFG2_BASE.UINT32
#define CSIH0CFG2_CSIH0SP2 CSIH0CFG2_BASE.BIT._CSIH0SP2
#define CSIH0CFG2_CSIH0IN2 CSIH0CFG2_BASE.BIT._CSIH0IN2
#define CSIH0CFG2_CSIH0HD2 CSIH0CFG2_BASE.BIT._CSIH0HD2
#define CSIH0CFG2_CSIH0ID2 CSIH0CFG2_BASE.BIT._CSIH0ID2
#define CSIH0CFG2_CSIH0IDL2 CSIH0CFG2_BASE.BIT._CSIH0IDL2
#define CSIH0CFG2_CSIH0DAP2 CSIH0CFG2_BASE.BIT._CSIH0DAP2
#define CSIH0CFG2_CSIH0CKP2 CSIH0CFG2_BASE.BIT._CSIH0CKP2
#define CSIH0CFG2_CSIH0DIR2 CSIH0CFG2_BASE.BIT._CSIH0DIR2
#define CSIH0CFG2_CSIH0RCB2 CSIH0CFG2_BASE.BIT._CSIH0RCB2
#define CSIH0CFG2_CSIH0DLS2 CSIH0CFG2_BASE.BIT._CSIH0DLS2
#define CSIH0CFG2_CSIH0PS2 CSIH0CFG2_BASE.BIT._CSIH0PS2
#define CSIH0CFG2_CSIH0BRSS2 CSIH0CFG2_BASE.BIT._CSIH0BRSS2
#define CSIH0CFG3 CSIH0CFG3_BASE.UINT32
#define CSIH0CFG3_CSIH0SP3 CSIH0CFG3_BASE.BIT._CSIH0SP3
#define CSIH0CFG3_CSIH0IN3 CSIH0CFG3_BASE.BIT._CSIH0IN3
#define CSIH0CFG3_CSIH0HD3 CSIH0CFG3_BASE.BIT._CSIH0HD3
#define CSIH0CFG3_CSIH0ID3 CSIH0CFG3_BASE.BIT._CSIH0ID3
#define CSIH0CFG3_CSIH0IDL3 CSIH0CFG3_BASE.BIT._CSIH0IDL3
#define CSIH0CFG3_CSIH0DAP3 CSIH0CFG3_BASE.BIT._CSIH0DAP3
#define CSIH0CFG3_CSIH0CKP3 CSIH0CFG3_BASE.BIT._CSIH0CKP3
#define CSIH0CFG3_CSIH0DIR3 CSIH0CFG3_BASE.BIT._CSIH0DIR3
#define CSIH0CFG3_CSIH0RCB3 CSIH0CFG3_BASE.BIT._CSIH0RCB3
#define CSIH0CFG3_CSIH0DLS3 CSIH0CFG3_BASE.BIT._CSIH0DLS3
#define CSIH0CFG3_CSIH0PS3 CSIH0CFG3_BASE.BIT._CSIH0PS3
#define CSIH0CFG3_CSIH0BRSS3 CSIH0CFG3_BASE.BIT._CSIH0BRSS3
#define CSIH0CFG4 CSIH0CFG4_BASE.UINT32
#define CSIH0CFG4_CSIH0SP4 CSIH0CFG4_BASE.BIT._CSIH0SP4
#define CSIH0CFG4_CSIH0IN4 CSIH0CFG4_BASE.BIT._CSIH0IN4
#define CSIH0CFG4_CSIH0HD4 CSIH0CFG4_BASE.BIT._CSIH0HD4
#define CSIH0CFG4_CSIH0ID4 CSIH0CFG4_BASE.BIT._CSIH0ID4
#define CSIH0CFG4_CSIH0IDL4 CSIH0CFG4_BASE.BIT._CSIH0IDL4
#define CSIH0CFG4_CSIH0DAP4 CSIH0CFG4_BASE.BIT._CSIH0DAP4
#define CSIH0CFG4_CSIH0CKP4 CSIH0CFG4_BASE.BIT._CSIH0CKP4
#define CSIH0CFG4_CSIH0DIR4 CSIH0CFG4_BASE.BIT._CSIH0DIR4
#define CSIH0CFG4_CSIH0RCB4 CSIH0CFG4_BASE.BIT._CSIH0RCB4
#define CSIH0CFG4_CSIH0DLS4 CSIH0CFG4_BASE.BIT._CSIH0DLS4
#define CSIH0CFG4_CSIH0PS4 CSIH0CFG4_BASE.BIT._CSIH0PS4
#define CSIH0CFG4_CSIH0BRSS4 CSIH0CFG4_BASE.BIT._CSIH0BRSS4
#define CSIH0CFG5 CSIH0CFG5_BASE.UINT32
#define CSIH0CFG5_CSIH0SP5 CSIH0CFG5_BASE.BIT._CSIH0SP5
#define CSIH0CFG5_CSIH0IN5 CSIH0CFG5_BASE.BIT._CSIH0IN5
#define CSIH0CFG5_CSIH0HD5 CSIH0CFG5_BASE.BIT._CSIH0HD5
#define CSIH0CFG5_CSIH0ID5 CSIH0CFG5_BASE.BIT._CSIH0ID5
#define CSIH0CFG5_CSIH0IDL5 CSIH0CFG5_BASE.BIT._CSIH0IDL5
#define CSIH0CFG5_CSIH0DAP5 CSIH0CFG5_BASE.BIT._CSIH0DAP5
#define CSIH0CFG5_CSIH0CKP5 CSIH0CFG5_BASE.BIT._CSIH0CKP5
#define CSIH0CFG5_CSIH0DIR5 CSIH0CFG5_BASE.BIT._CSIH0DIR5
#define CSIH0CFG5_CSIH0RCB5 CSIH0CFG5_BASE.BIT._CSIH0RCB5
#define CSIH0CFG5_CSIH0DLS5 CSIH0CFG5_BASE.BIT._CSIH0DLS5
#define CSIH0CFG5_CSIH0PS5 CSIH0CFG5_BASE.BIT._CSIH0PS5
#define CSIH0CFG5_CSIH0BRSS5 CSIH0CFG5_BASE.BIT._CSIH0BRSS5
#define CSIH0CFG6 CSIH0CFG6_BASE.UINT32
#define CSIH0CFG6_CSIH0SP6 CSIH0CFG6_BASE.BIT._CSIH0SP6
#define CSIH0CFG6_CSIH0IN6 CSIH0CFG6_BASE.BIT._CSIH0IN6
#define CSIH0CFG6_CSIH0HD6 CSIH0CFG6_BASE.BIT._CSIH0HD6
#define CSIH0CFG6_CSIH0ID6 CSIH0CFG6_BASE.BIT._CSIH0ID6
#define CSIH0CFG6_CSIH0IDL6 CSIH0CFG6_BASE.BIT._CSIH0IDL6
#define CSIH0CFG6_CSIH0DAP6 CSIH0CFG6_BASE.BIT._CSIH0DAP6
#define CSIH0CFG6_CSIH0CKP6 CSIH0CFG6_BASE.BIT._CSIH0CKP6
#define CSIH0CFG6_CSIH0DIR6 CSIH0CFG6_BASE.BIT._CSIH0DIR6
#define CSIH0CFG6_CSIH0RCB6 CSIH0CFG6_BASE.BIT._CSIH0RCB6
#define CSIH0CFG6_CSIH0DLS6 CSIH0CFG6_BASE.BIT._CSIH0DLS6
#define CSIH0CFG6_CSIH0PS6 CSIH0CFG6_BASE.BIT._CSIH0PS6
#define CSIH0CFG6_CSIH0BRSS6 CSIH0CFG6_BASE.BIT._CSIH0BRSS6
#define CSIH0CFG7 CSIH0CFG7_BASE.UINT32
#define CSIH0CFG7_CSIH0SP7 CSIH0CFG7_BASE.BIT._CSIH0SP7
#define CSIH0CFG7_CSIH0IN7 CSIH0CFG7_BASE.BIT._CSIH0IN7
#define CSIH0CFG7_CSIH0HD7 CSIH0CFG7_BASE.BIT._CSIH0HD7
#define CSIH0CFG7_CSIH0ID7 CSIH0CFG7_BASE.BIT._CSIH0ID7
#define CSIH0CFG7_CSIH0IDL7 CSIH0CFG7_BASE.BIT._CSIH0IDL7
#define CSIH0CFG7_CSIH0DAP7 CSIH0CFG7_BASE.BIT._CSIH0DAP7
#define CSIH0CFG7_CSIH0CKP7 CSIH0CFG7_BASE.BIT._CSIH0CKP7
#define CSIH0CFG7_CSIH0DIR7 CSIH0CFG7_BASE.BIT._CSIH0DIR7
#define CSIH0CFG7_CSIH0RCB7 CSIH0CFG7_BASE.BIT._CSIH0RCB7
#define CSIH0CFG7_CSIH0DLS7 CSIH0CFG7_BASE.BIT._CSIH0DLS7
#define CSIH0CFG7_CSIH0PS7 CSIH0CFG7_BASE.BIT._CSIH0PS7
#define CSIH0CFG7_CSIH0BRSS7 CSIH0CFG7_BASE.BIT._CSIH0BRSS7
#define CSIH0BRS0 CSIH0BRS0_BASE.UINT16
#define CSIH0BRS0_CSIH0BRS0 CSIH0BRS0_BASE.BIT._CSIH0BRS0
#define CSIH0BRS1 CSIH0BRS1_BASE.UINT16
#define CSIH0BRS1_CSIH0BRS1 CSIH0BRS1_BASE.BIT._CSIH0BRS1
#define CSIH0BRS2 CSIH0BRS2_BASE.UINT16
#define CSIH0BRS2_CSIH0BRS2 CSIH0BRS2_BASE.BIT._CSIH0BRS2
#define CSIH0BRS3 CSIH0BRS3_BASE.UINT16
#define CSIH0BRS3_CSIH0BRS3 CSIH0BRS3_BASE.BIT._CSIH0BRS3

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif