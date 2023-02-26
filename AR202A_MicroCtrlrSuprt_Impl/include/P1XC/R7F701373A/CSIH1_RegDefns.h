#ifndef __DR7F701373_CSIH1_HEADER__
#define __DR7F701373_CSIH1_HEADER__



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
    uint8 _CSIH1MBS : 1;
    uint8 _CSIH1JOBE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _CSIH1RXE : 1;
    uint8 _CSIH1TXE : 1;
    uint8 _CSIH1PWR : 1;
} CSIH1CTL0Bits_t;

typedef struct
{
    uint32 _CSIH1SSE : 1;
    uint32 _CSIH1HSE : 1;
    uint32 _CSIH1SIT : 1;
    uint32 _CSIH1LBM : 1;
    uint32 _CSIH1CSRI : 1;
    uint32 _CSIH1DCS : 1;
    uint32 _CSIH1JE : 1;
    uint32 _CSIH1EDLE : 1;
    uint32 _CSIH1CSL0 : 1;
    uint32 _CSIH1CSL1 : 1;
    uint32 _CSIH1CSL2 : 1;
    uint32 _CSIH1CSL3 : 1;
    uint32 _CSIH1CSL4 : 1;
    uint32 _CSIH1CSL5 : 1;
    uint32 _CSIH1CSL6 : 1;
    uint32 _CSIH1CSL7 : 1;
    uint32 _CSIH1SLIT : 1;
    uint32 _CSIH1CKR : 1;
    uint32 padding18 : 1;
    uint32 _CSIH1SME : 1;
    uint32 _CSIH1ISCE : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1SLRS : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH1CTL1Bits_t;

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
    uint16 _CSIH1PRS : 3;
} CSIH1CTL2Bits_t;

typedef struct
{
    uint32 _CSIH1FFS : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1FES : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH1MCTL1Bits_t;

typedef struct
{
    uint32 _CSIH1SOP : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1ND : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CSIH1BTST : 1;
} CSIH1MCTL2Bits_t;

typedef struct
{
    uint32 _CSIH1TX : 16;
    uint32 _CSIH1CS0 : 1;
    uint32 _CSIH1CS1 : 1;
    uint32 _CSIH1CS2 : 1;
    uint32 _CSIH1CS3 : 1;
    uint32 _CSIH1CS4 : 1;
    uint32 _CSIH1CS5 : 1;
    uint32 _CSIH1CS6 : 1;
    uint32 _CSIH1CS7 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _CSIH1ISC : 1;
    uint32 _CSIH1SFN0 : 1;
    uint32 _CSIH1SFN1 : 1;
    uint32 _CSIH1EDL : 1;
    uint32 _CSIH1EOJ : 1;
    uint32 _CSIH1CIRE : 1;
} CSIH1TX0WBits_t;

typedef struct
{
    uint16 _CSIH1TX : 16;
} CSIH1TX0HBits_t;

typedef struct
{
    const uint32 _CSIH1RX : 16;
    const uint32 _CSIH1CS0 : 1;
    const uint32 _CSIH1CS1 : 1;
    const uint32 _CSIH1CS2 : 1;
    const uint32 _CSIH1CS3 : 1;
    const uint32 _CSIH1CS4 : 1;
    const uint32 _CSIH1CS5 : 1;
    const uint32 _CSIH1CS6 : 1;
    const uint32 _CSIH1CS7 : 1;
    const uint32 _CSIH1TDCE : 1;
    const uint32 _CSIH1RPE : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH1RX0WBits_t;

typedef struct
{
    const uint16 _CSIH1RX : 16;
} CSIH1RX0HBits_t;

typedef struct
{
    uint32 _CSIH1TRWA : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH1RRA : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH1MRWP0Bits_t;

typedef struct
{
    const uint32 _CSIH1OVE : 1;
    const uint32 _CSIH1PE : 1;
    uint32 padding2 : 1;
    const uint32 _CSIH1DCE : 1;
    const uint32 _CSIH1EMF : 1;
    const uint32 _CSIH1FLF : 1;
    uint32 padding6 : 1;
    const uint32 _CSIH1TSF : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _CSIH1OFE : 1;
    const uint32 _CSIH1TMOE : 1;
    const uint32 _CSIH1SPF : 8;
    const uint32 _CSIH1SRP : 8;
} CSIH1STR0Bits_t;

typedef struct
{
    uint16 _CSIH1OVEC : 1;
    uint16 _CSIH1PEC : 1;
    uint16 padding2 : 1;
    uint16 _CSIH1DCEC : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH1PCT : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 _CSIH1OFEC : 1;
    uint16 _CSIH1TMOEC : 1;
} CSIH1STCR0Bits_t;

typedef struct
{
    uint16 _CSIH1TO : 5;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH1MMS : 2;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH1MCTL0Bits_t;

typedef struct
{
    uint32 _CSIH1SP0 : 4;
    uint32 _CSIH1IN0 : 4;
    uint32 _CSIH1HD0 : 4;
    uint32 _CSIH1ID0 : 3;
    uint32 _CSIH1IDL0 : 1;
    uint32 _CSIH1DAP0 : 1;
    uint32 _CSIH1CKP0 : 1;
    uint32 _CSIH1DIR0 : 1;
    uint32 _CSIH1RCB0 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS0 : 4;
    uint32 _CSIH1PS0 : 2;
    uint32 _CSIH1BRSS0 : 2;
} CSIH1CFG0Bits_t;

typedef struct
{
    uint32 _CSIH1SP1 : 4;
    uint32 _CSIH1IN1 : 4;
    uint32 _CSIH1HD1 : 4;
    uint32 _CSIH1ID1 : 3;
    uint32 _CSIH1IDL1 : 1;
    uint32 _CSIH1DAP1 : 1;
    uint32 _CSIH1CKP1 : 1;
    uint32 _CSIH1DIR1 : 1;
    uint32 _CSIH1RCB1 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS1 : 4;
    uint32 _CSIH1PS1 : 2;
    uint32 _CSIH1BRSS1 : 2;
} CSIH1CFG1Bits_t;

typedef struct
{
    uint32 _CSIH1SP2 : 4;
    uint32 _CSIH1IN2 : 4;
    uint32 _CSIH1HD2 : 4;
    uint32 _CSIH1ID2 : 3;
    uint32 _CSIH1IDL2 : 1;
    uint32 _CSIH1DAP2 : 1;
    uint32 _CSIH1CKP2 : 1;
    uint32 _CSIH1DIR2 : 1;
    uint32 _CSIH1RCB2 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS2 : 4;
    uint32 _CSIH1PS2 : 2;
    uint32 _CSIH1BRSS2 : 2;
} CSIH1CFG2Bits_t;

typedef struct
{
    uint32 _CSIH1SP3 : 4;
    uint32 _CSIH1IN3 : 4;
    uint32 _CSIH1HD3 : 4;
    uint32 _CSIH1ID3 : 3;
    uint32 _CSIH1IDL3 : 1;
    uint32 _CSIH1DAP3 : 1;
    uint32 _CSIH1CKP3 : 1;
    uint32 _CSIH1DIR3 : 1;
    uint32 _CSIH1RCB3 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS3 : 4;
    uint32 _CSIH1PS3 : 2;
    uint32 _CSIH1BRSS3 : 2;
} CSIH1CFG3Bits_t;

typedef struct
{
    uint32 _CSIH1SP4 : 4;
    uint32 _CSIH1IN4 : 4;
    uint32 _CSIH1HD4 : 4;
    uint32 _CSIH1ID4 : 3;
    uint32 _CSIH1IDL4 : 1;
    uint32 _CSIH1DAP4 : 1;
    uint32 _CSIH1CKP4 : 1;
    uint32 _CSIH1DIR4 : 1;
    uint32 _CSIH1RCB4 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS4 : 4;
    uint32 _CSIH1PS4 : 2;
    uint32 _CSIH1BRSS4 : 2;
} CSIH1CFG4Bits_t;

typedef struct
{
    uint32 _CSIH1SP5 : 4;
    uint32 _CSIH1IN5 : 4;
    uint32 _CSIH1HD5 : 4;
    uint32 _CSIH1ID5 : 3;
    uint32 _CSIH1IDL5 : 1;
    uint32 _CSIH1DAP5 : 1;
    uint32 _CSIH1CKP5 : 1;
    uint32 _CSIH1DIR5 : 1;
    uint32 _CSIH1RCB5 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS5 : 4;
    uint32 _CSIH1PS5 : 2;
    uint32 _CSIH1BRSS5 : 2;
} CSIH1CFG5Bits_t;

typedef struct
{
    uint32 _CSIH1SP6 : 4;
    uint32 _CSIH1IN6 : 4;
    uint32 _CSIH1HD6 : 4;
    uint32 _CSIH1ID6 : 3;
    uint32 _CSIH1IDL6 : 1;
    uint32 _CSIH1DAP6 : 1;
    uint32 _CSIH1CKP6 : 1;
    uint32 _CSIH1DIR6 : 1;
    uint32 _CSIH1RCB6 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS6 : 4;
    uint32 _CSIH1PS6 : 2;
    uint32 _CSIH1BRSS6 : 2;
} CSIH1CFG6Bits_t;

typedef struct
{
    uint32 _CSIH1SP7 : 4;
    uint32 _CSIH1IN7 : 4;
    uint32 _CSIH1HD7 : 4;
    uint32 _CSIH1ID7 : 3;
    uint32 _CSIH1IDL7 : 1;
    uint32 _CSIH1DAP7 : 1;
    uint32 _CSIH1CKP7 : 1;
    uint32 _CSIH1DIR7 : 1;
    uint32 _CSIH1RCB7 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH1DLS7 : 4;
    uint32 _CSIH1PS7 : 2;
    uint32 _CSIH1BRSS7 : 2;
} CSIH1CFG7Bits_t;

typedef struct
{
    uint16 _CSIH1BRS0 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH1BRS0Bits_t;

typedef struct
{
    uint16 _CSIH1BRS1 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH1BRS1Bits_t;

typedef struct
{
    uint16 _CSIH1BRS2 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH1BRS2Bits_t;

typedef struct
{
    uint16 _CSIH1BRS3 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH1BRS3Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CSIH1CTL0Bits_t BIT;
} CSIH1CTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH1CTL1Bits_t BIT;
} CSIH1CTL1_t;

typedef union
{
    uint16 UINT16;
    CSIH1CTL2Bits_t BIT;
} CSIH1CTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH1MCTL1Bits_t BIT;
} CSIH1MCTL1_t;

typedef union
{
    uint32 UINT32;
    CSIH1MCTL2Bits_t BIT;
} CSIH1MCTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH1TX0WBits_t BIT;
} CSIH1TX0W_t;

typedef union
{
    uint16 UINT16;
    CSIH1TX0HBits_t BIT;
} CSIH1TX0H_t;

typedef union
{
    uint32 UINT32;
    const CSIH1RX0WBits_t BIT;
} CSIH1RX0W_t;

typedef union
{
    uint16 UINT16;
    const CSIH1RX0HBits_t BIT;
} CSIH1RX0H_t;

typedef union
{
    uint32 UINT32;
    CSIH1MRWP0Bits_t BIT;
} CSIH1MRWP0_t;

typedef union
{
    uint32 UINT32;
    const CSIH1STR0Bits_t BIT;
} CSIH1STR0_t;

typedef union
{
    uint16 UINT16;
    CSIH1STCR0Bits_t BIT;
} CSIH1STCR0_t;

typedef union
{
    uint16 UINT16;
    CSIH1MCTL0Bits_t BIT;
} CSIH1MCTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG0Bits_t BIT;
} CSIH1CFG0_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG1Bits_t BIT;
} CSIH1CFG1_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG2Bits_t BIT;
} CSIH1CFG2_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG3Bits_t BIT;
} CSIH1CFG3_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG4Bits_t BIT;
} CSIH1CFG4_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG5Bits_t BIT;
} CSIH1CFG5_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG6Bits_t BIT;
} CSIH1CFG6_t;

typedef union
{
    uint32 UINT32;
    CSIH1CFG7Bits_t BIT;
} CSIH1CFG7_t;

typedef union
{
    uint16 UINT16;
    CSIH1BRS0Bits_t BIT;
} CSIH1BRS0_t;

typedef union
{
    uint16 UINT16;
    CSIH1BRS1Bits_t BIT;
} CSIH1BRS1_t;

typedef union
{
    uint16 UINT16;
    CSIH1BRS2Bits_t BIT;
} CSIH1BRS2_t;

typedef union
{
    uint16 UINT16;
    CSIH1BRS3Bits_t BIT;
} CSIH1BRS3_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CSIH1CTL0_BASE, 0xFFCA0000, __READ_WRITE, CSIH1CTL0_t);
__IOREG(CSIH1CTL1_BASE, 0xFFCA0010, __READ_WRITE, CSIH1CTL1_t);
__IOREG(CSIH1CTL2_BASE, 0xFFCA0014, __READ_WRITE, CSIH1CTL2_t);
__IOREG(CSIH1MCTL1_BASE, 0xFFCA1000, __READ_WRITE, CSIH1MCTL1_t);
__IOREG(CSIH1MCTL2_BASE, 0xFFCA1004, __READ_WRITE, CSIH1MCTL2_t);
__IOREG(CSIH1TX0W_BASE, 0xFFCA1008, __READ_WRITE, CSIH1TX0W_t);
__IOREG(CSIH1TX0H_BASE, 0xFFCA100C, __READ_WRITE, CSIH1TX0H_t);
__IOREG(CSIH1RX0W_BASE, 0xFFCA1010, __READ, CSIH1RX0W_t);
__IOREG(CSIH1RX0H_BASE, 0xFFCA1014, __READ, CSIH1RX0H_t);
__IOREG(CSIH1MRWP0_BASE, 0xFFCA1018, __READ_WRITE, CSIH1MRWP0_t);
__IOREG(CSIH1STR0_BASE, 0xFFCA101C, __READ, CSIH1STR0_t);
__IOREG(CSIH1STCR0_BASE, 0xFFCA1020, __READ_WRITE, CSIH1STCR0_t);
__IOREG(CSIH1MCTL0_BASE, 0xFFCA1040, __READ_WRITE, CSIH1MCTL0_t);
__IOREG(CSIH1CFG0_BASE, 0xFFCA1044, __READ_WRITE, CSIH1CFG0_t);
__IOREG(CSIH1CFG1_BASE, 0xFFCA1048, __READ_WRITE, CSIH1CFG1_t);
__IOREG(CSIH1CFG2_BASE, 0xFFCA104C, __READ_WRITE, CSIH1CFG2_t);
__IOREG(CSIH1CFG3_BASE, 0xFFCA1050, __READ_WRITE, CSIH1CFG3_t);
__IOREG(CSIH1CFG4_BASE, 0xFFCA1054, __READ_WRITE, CSIH1CFG4_t);
__IOREG(CSIH1CFG5_BASE, 0xFFCA1058, __READ_WRITE, CSIH1CFG5_t);
__IOREG(CSIH1CFG6_BASE, 0xFFCA105C, __READ_WRITE, CSIH1CFG6_t);
__IOREG(CSIH1CFG7_BASE, 0xFFCA1060, __READ_WRITE, CSIH1CFG7_t);
__IOREG(CSIH1BRS0_BASE, 0xFFCA1068, __READ_WRITE, CSIH1BRS0_t);
__IOREG(CSIH1BRS1_BASE, 0xFFCA106C, __READ_WRITE, CSIH1BRS1_t);
__IOREG(CSIH1BRS2_BASE, 0xFFCA1070, __READ_WRITE, CSIH1BRS2_t);
__IOREG(CSIH1BRS3_BASE, 0xFFCA1074, __READ_WRITE, CSIH1BRS3_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CSIH1CTL0 CSIH1CTL0_BASE.UINT8
#define CSIH1CTL0_CSIH1MBS CSIH1CTL0_BASE.BIT._CSIH1MBS
#define CSIH1CTL0_CSIH1JOBE CSIH1CTL0_BASE.BIT._CSIH1JOBE
#define CSIH1CTL0_CSIH1RXE CSIH1CTL0_BASE.BIT._CSIH1RXE
#define CSIH1CTL0_CSIH1TXE CSIH1CTL0_BASE.BIT._CSIH1TXE
#define CSIH1CTL0_CSIH1PWR CSIH1CTL0_BASE.BIT._CSIH1PWR
#define CSIH1CTL1 CSIH1CTL1_BASE.UINT32
#define CSIH1CTL1_CSIH1SSE CSIH1CTL1_BASE.BIT._CSIH1SSE
#define CSIH1CTL1_CSIH1HSE CSIH1CTL1_BASE.BIT._CSIH1HSE
#define CSIH1CTL1_CSIH1SIT CSIH1CTL1_BASE.BIT._CSIH1SIT
#define CSIH1CTL1_CSIH1LBM CSIH1CTL1_BASE.BIT._CSIH1LBM
#define CSIH1CTL1_CSIH1CSRI CSIH1CTL1_BASE.BIT._CSIH1CSRI
#define CSIH1CTL1_CSIH1DCS CSIH1CTL1_BASE.BIT._CSIH1DCS
#define CSIH1CTL1_CSIH1JE CSIH1CTL1_BASE.BIT._CSIH1JE
#define CSIH1CTL1_CSIH1EDLE CSIH1CTL1_BASE.BIT._CSIH1EDLE
#define CSIH1CTL1_CSIH1CSL0 CSIH1CTL1_BASE.BIT._CSIH1CSL0
#define CSIH1CTL1_CSIH1CSL1 CSIH1CTL1_BASE.BIT._CSIH1CSL1
#define CSIH1CTL1_CSIH1CSL2 CSIH1CTL1_BASE.BIT._CSIH1CSL2
#define CSIH1CTL1_CSIH1CSL3 CSIH1CTL1_BASE.BIT._CSIH1CSL3
#define CSIH1CTL1_CSIH1CSL4 CSIH1CTL1_BASE.BIT._CSIH1CSL4
#define CSIH1CTL1_CSIH1CSL5 CSIH1CTL1_BASE.BIT._CSIH1CSL5
#define CSIH1CTL1_CSIH1CSL6 CSIH1CTL1_BASE.BIT._CSIH1CSL6
#define CSIH1CTL1_CSIH1CSL7 CSIH1CTL1_BASE.BIT._CSIH1CSL7
#define CSIH1CTL1_CSIH1SLIT CSIH1CTL1_BASE.BIT._CSIH1SLIT
#define CSIH1CTL1_CSIH1CKR CSIH1CTL1_BASE.BIT._CSIH1CKR
#define CSIH1CTL1_CSIH1SME CSIH1CTL1_BASE.BIT._CSIH1SME
#define CSIH1CTL1_CSIH1ISCE CSIH1CTL1_BASE.BIT._CSIH1ISCE
#define CSIH1CTL1_CSIH1SLRS CSIH1CTL1_BASE.BIT._CSIH1SLRS
#define CSIH1CTL2 CSIH1CTL2_BASE.UINT16
#define CSIH1CTL2_CSIH1PRS CSIH1CTL2_BASE.BIT._CSIH1PRS
#define CSIH1MCTL1 CSIH1MCTL1_BASE.UINT32
#define CSIH1MCTL1_CSIH1FFS CSIH1MCTL1_BASE.BIT._CSIH1FFS
#define CSIH1MCTL1_CSIH1FES CSIH1MCTL1_BASE.BIT._CSIH1FES
#define CSIH1MCTL2 CSIH1MCTL2_BASE.UINT32
#define CSIH1MCTL2_CSIH1SOP CSIH1MCTL2_BASE.BIT._CSIH1SOP
#define CSIH1MCTL2_CSIH1ND CSIH1MCTL2_BASE.BIT._CSIH1ND
#define CSIH1MCTL2_CSIH1BTST CSIH1MCTL2_BASE.BIT._CSIH1BTST
#define CSIH1TX0W CSIH1TX0W_BASE.UINT32
#define CSIH1TX0W_CSIH1TX CSIH1TX0W_BASE.BIT._CSIH1TX
#define CSIH1TX0W_CSIH1CS0 CSIH1TX0W_BASE.BIT._CSIH1CS0
#define CSIH1TX0W_CSIH1CS1 CSIH1TX0W_BASE.BIT._CSIH1CS1
#define CSIH1TX0W_CSIH1CS2 CSIH1TX0W_BASE.BIT._CSIH1CS2
#define CSIH1TX0W_CSIH1CS3 CSIH1TX0W_BASE.BIT._CSIH1CS3
#define CSIH1TX0W_CSIH1CS4 CSIH1TX0W_BASE.BIT._CSIH1CS4
#define CSIH1TX0W_CSIH1CS5 CSIH1TX0W_BASE.BIT._CSIH1CS5
#define CSIH1TX0W_CSIH1CS6 CSIH1TX0W_BASE.BIT._CSIH1CS6
#define CSIH1TX0W_CSIH1CS7 CSIH1TX0W_BASE.BIT._CSIH1CS7
#define CSIH1TX0W_CSIH1ISC CSIH1TX0W_BASE.BIT._CSIH1ISC
#define CSIH1TX0W_CSIH1SFN0 CSIH1TX0W_BASE.BIT._CSIH1SFN0
#define CSIH1TX0W_CSIH1SFN1 CSIH1TX0W_BASE.BIT._CSIH1SFN1
#define CSIH1TX0W_CSIH1EDL CSIH1TX0W_BASE.BIT._CSIH1EDL
#define CSIH1TX0W_CSIH1EOJ CSIH1TX0W_BASE.BIT._CSIH1EOJ
#define CSIH1TX0W_CSIH1CIRE CSIH1TX0W_BASE.BIT._CSIH1CIRE
#define CSIH1TX0H CSIH1TX0H_BASE.UINT16
#define CSIH1TX0H_CSIH1TX CSIH1TX0H_BASE.BIT._CSIH1TX
#define CSIH1RX0W CSIH1RX0W_BASE.UINT32
#define CSIH1RX0W_CSIH1RX CSIH1RX0W_BASE.BIT._CSIH1RX
#define CSIH1RX0W_CSIH1CS0 CSIH1RX0W_BASE.BIT._CSIH1CS0
#define CSIH1RX0W_CSIH1CS1 CSIH1RX0W_BASE.BIT._CSIH1CS1
#define CSIH1RX0W_CSIH1CS2 CSIH1RX0W_BASE.BIT._CSIH1CS2
#define CSIH1RX0W_CSIH1CS3 CSIH1RX0W_BASE.BIT._CSIH1CS3
#define CSIH1RX0W_CSIH1CS4 CSIH1RX0W_BASE.BIT._CSIH1CS4
#define CSIH1RX0W_CSIH1CS5 CSIH1RX0W_BASE.BIT._CSIH1CS5
#define CSIH1RX0W_CSIH1CS6 CSIH1RX0W_BASE.BIT._CSIH1CS6
#define CSIH1RX0W_CSIH1CS7 CSIH1RX0W_BASE.BIT._CSIH1CS7
#define CSIH1RX0W_CSIH1TDCE CSIH1RX0W_BASE.BIT._CSIH1TDCE
#define CSIH1RX0W_CSIH1RPE CSIH1RX0W_BASE.BIT._CSIH1RPE
#define CSIH1RX0H CSIH1RX0H_BASE.UINT16
#define CSIH1RX0H_CSIH1RX CSIH1RX0H_BASE.BIT._CSIH1RX
#define CSIH1MRWP0 CSIH1MRWP0_BASE.UINT32
#define CSIH1MRWP0_CSIH1TRWA CSIH1MRWP0_BASE.BIT._CSIH1TRWA
#define CSIH1MRWP0_CSIH1RRA CSIH1MRWP0_BASE.BIT._CSIH1RRA
#define CSIH1STR0 CSIH1STR0_BASE.UINT32
#define CSIH1STR0_CSIH1OVE CSIH1STR0_BASE.BIT._CSIH1OVE
#define CSIH1STR0_CSIH1PE CSIH1STR0_BASE.BIT._CSIH1PE
#define CSIH1STR0_CSIH1DCE CSIH1STR0_BASE.BIT._CSIH1DCE
#define CSIH1STR0_CSIH1EMF CSIH1STR0_BASE.BIT._CSIH1EMF
#define CSIH1STR0_CSIH1FLF CSIH1STR0_BASE.BIT._CSIH1FLF
#define CSIH1STR0_CSIH1TSF CSIH1STR0_BASE.BIT._CSIH1TSF
#define CSIH1STR0_CSIH1OFE CSIH1STR0_BASE.BIT._CSIH1OFE
#define CSIH1STR0_CSIH1TMOE CSIH1STR0_BASE.BIT._CSIH1TMOE
#define CSIH1STR0_CSIH1SPF CSIH1STR0_BASE.BIT._CSIH1SPF
#define CSIH1STR0_CSIH1SRP CSIH1STR0_BASE.BIT._CSIH1SRP
#define CSIH1STCR0 CSIH1STCR0_BASE.UINT16
#define CSIH1STCR0_CSIH1OVEC CSIH1STCR0_BASE.BIT._CSIH1OVEC
#define CSIH1STCR0_CSIH1PEC CSIH1STCR0_BASE.BIT._CSIH1PEC
#define CSIH1STCR0_CSIH1DCEC CSIH1STCR0_BASE.BIT._CSIH1DCEC
#define CSIH1STCR0_CSIH1PCT CSIH1STCR0_BASE.BIT._CSIH1PCT
#define CSIH1STCR0_CSIH1OFEC CSIH1STCR0_BASE.BIT._CSIH1OFEC
#define CSIH1STCR0_CSIH1TMOEC CSIH1STCR0_BASE.BIT._CSIH1TMOEC
#define CSIH1MCTL0 CSIH1MCTL0_BASE.UINT16
#define CSIH1MCTL0_CSIH1TO CSIH1MCTL0_BASE.BIT._CSIH1TO
#define CSIH1MCTL0_CSIH1MMS CSIH1MCTL0_BASE.BIT._CSIH1MMS
#define CSIH1CFG0 CSIH1CFG0_BASE.UINT32
#define CSIH1CFG0_CSIH1SP0 CSIH1CFG0_BASE.BIT._CSIH1SP0
#define CSIH1CFG0_CSIH1IN0 CSIH1CFG0_BASE.BIT._CSIH1IN0
#define CSIH1CFG0_CSIH1HD0 CSIH1CFG0_BASE.BIT._CSIH1HD0
#define CSIH1CFG0_CSIH1ID0 CSIH1CFG0_BASE.BIT._CSIH1ID0
#define CSIH1CFG0_CSIH1IDL0 CSIH1CFG0_BASE.BIT._CSIH1IDL0
#define CSIH1CFG0_CSIH1DAP0 CSIH1CFG0_BASE.BIT._CSIH1DAP0
#define CSIH1CFG0_CSIH1CKP0 CSIH1CFG0_BASE.BIT._CSIH1CKP0
#define CSIH1CFG0_CSIH1DIR0 CSIH1CFG0_BASE.BIT._CSIH1DIR0
#define CSIH1CFG0_CSIH1RCB0 CSIH1CFG0_BASE.BIT._CSIH1RCB0
#define CSIH1CFG0_CSIH1DLS0 CSIH1CFG0_BASE.BIT._CSIH1DLS0
#define CSIH1CFG0_CSIH1PS0 CSIH1CFG0_BASE.BIT._CSIH1PS0
#define CSIH1CFG0_CSIH1BRSS0 CSIH1CFG0_BASE.BIT._CSIH1BRSS0
#define CSIH1CFG1 CSIH1CFG1_BASE.UINT32
#define CSIH1CFG1_CSIH1SP1 CSIH1CFG1_BASE.BIT._CSIH1SP1
#define CSIH1CFG1_CSIH1IN1 CSIH1CFG1_BASE.BIT._CSIH1IN1
#define CSIH1CFG1_CSIH1HD1 CSIH1CFG1_BASE.BIT._CSIH1HD1
#define CSIH1CFG1_CSIH1ID1 CSIH1CFG1_BASE.BIT._CSIH1ID1
#define CSIH1CFG1_CSIH1IDL1 CSIH1CFG1_BASE.BIT._CSIH1IDL1
#define CSIH1CFG1_CSIH1DAP1 CSIH1CFG1_BASE.BIT._CSIH1DAP1
#define CSIH1CFG1_CSIH1CKP1 CSIH1CFG1_BASE.BIT._CSIH1CKP1
#define CSIH1CFG1_CSIH1DIR1 CSIH1CFG1_BASE.BIT._CSIH1DIR1
#define CSIH1CFG1_CSIH1RCB1 CSIH1CFG1_BASE.BIT._CSIH1RCB1
#define CSIH1CFG1_CSIH1DLS1 CSIH1CFG1_BASE.BIT._CSIH1DLS1
#define CSIH1CFG1_CSIH1PS1 CSIH1CFG1_BASE.BIT._CSIH1PS1
#define CSIH1CFG1_CSIH1BRSS1 CSIH1CFG1_BASE.BIT._CSIH1BRSS1
#define CSIH1CFG2 CSIH1CFG2_BASE.UINT32
#define CSIH1CFG2_CSIH1SP2 CSIH1CFG2_BASE.BIT._CSIH1SP2
#define CSIH1CFG2_CSIH1IN2 CSIH1CFG2_BASE.BIT._CSIH1IN2
#define CSIH1CFG2_CSIH1HD2 CSIH1CFG2_BASE.BIT._CSIH1HD2
#define CSIH1CFG2_CSIH1ID2 CSIH1CFG2_BASE.BIT._CSIH1ID2
#define CSIH1CFG2_CSIH1IDL2 CSIH1CFG2_BASE.BIT._CSIH1IDL2
#define CSIH1CFG2_CSIH1DAP2 CSIH1CFG2_BASE.BIT._CSIH1DAP2
#define CSIH1CFG2_CSIH1CKP2 CSIH1CFG2_BASE.BIT._CSIH1CKP2
#define CSIH1CFG2_CSIH1DIR2 CSIH1CFG2_BASE.BIT._CSIH1DIR2
#define CSIH1CFG2_CSIH1RCB2 CSIH1CFG2_BASE.BIT._CSIH1RCB2
#define CSIH1CFG2_CSIH1DLS2 CSIH1CFG2_BASE.BIT._CSIH1DLS2
#define CSIH1CFG2_CSIH1PS2 CSIH1CFG2_BASE.BIT._CSIH1PS2
#define CSIH1CFG2_CSIH1BRSS2 CSIH1CFG2_BASE.BIT._CSIH1BRSS2
#define CSIH1CFG3 CSIH1CFG3_BASE.UINT32
#define CSIH1CFG3_CSIH1SP3 CSIH1CFG3_BASE.BIT._CSIH1SP3
#define CSIH1CFG3_CSIH1IN3 CSIH1CFG3_BASE.BIT._CSIH1IN3
#define CSIH1CFG3_CSIH1HD3 CSIH1CFG3_BASE.BIT._CSIH1HD3
#define CSIH1CFG3_CSIH1ID3 CSIH1CFG3_BASE.BIT._CSIH1ID3
#define CSIH1CFG3_CSIH1IDL3 CSIH1CFG3_BASE.BIT._CSIH1IDL3
#define CSIH1CFG3_CSIH1DAP3 CSIH1CFG3_BASE.BIT._CSIH1DAP3
#define CSIH1CFG3_CSIH1CKP3 CSIH1CFG3_BASE.BIT._CSIH1CKP3
#define CSIH1CFG3_CSIH1DIR3 CSIH1CFG3_BASE.BIT._CSIH1DIR3
#define CSIH1CFG3_CSIH1RCB3 CSIH1CFG3_BASE.BIT._CSIH1RCB3
#define CSIH1CFG3_CSIH1DLS3 CSIH1CFG3_BASE.BIT._CSIH1DLS3
#define CSIH1CFG3_CSIH1PS3 CSIH1CFG3_BASE.BIT._CSIH1PS3
#define CSIH1CFG3_CSIH1BRSS3 CSIH1CFG3_BASE.BIT._CSIH1BRSS3
#define CSIH1CFG4 CSIH1CFG4_BASE.UINT32
#define CSIH1CFG4_CSIH1SP4 CSIH1CFG4_BASE.BIT._CSIH1SP4
#define CSIH1CFG4_CSIH1IN4 CSIH1CFG4_BASE.BIT._CSIH1IN4
#define CSIH1CFG4_CSIH1HD4 CSIH1CFG4_BASE.BIT._CSIH1HD4
#define CSIH1CFG4_CSIH1ID4 CSIH1CFG4_BASE.BIT._CSIH1ID4
#define CSIH1CFG4_CSIH1IDL4 CSIH1CFG4_BASE.BIT._CSIH1IDL4
#define CSIH1CFG4_CSIH1DAP4 CSIH1CFG4_BASE.BIT._CSIH1DAP4
#define CSIH1CFG4_CSIH1CKP4 CSIH1CFG4_BASE.BIT._CSIH1CKP4
#define CSIH1CFG4_CSIH1DIR4 CSIH1CFG4_BASE.BIT._CSIH1DIR4
#define CSIH1CFG4_CSIH1RCB4 CSIH1CFG4_BASE.BIT._CSIH1RCB4
#define CSIH1CFG4_CSIH1DLS4 CSIH1CFG4_BASE.BIT._CSIH1DLS4
#define CSIH1CFG4_CSIH1PS4 CSIH1CFG4_BASE.BIT._CSIH1PS4
#define CSIH1CFG4_CSIH1BRSS4 CSIH1CFG4_BASE.BIT._CSIH1BRSS4
#define CSIH1CFG5 CSIH1CFG5_BASE.UINT32
#define CSIH1CFG5_CSIH1SP5 CSIH1CFG5_BASE.BIT._CSIH1SP5
#define CSIH1CFG5_CSIH1IN5 CSIH1CFG5_BASE.BIT._CSIH1IN5
#define CSIH1CFG5_CSIH1HD5 CSIH1CFG5_BASE.BIT._CSIH1HD5
#define CSIH1CFG5_CSIH1ID5 CSIH1CFG5_BASE.BIT._CSIH1ID5
#define CSIH1CFG5_CSIH1IDL5 CSIH1CFG5_BASE.BIT._CSIH1IDL5
#define CSIH1CFG5_CSIH1DAP5 CSIH1CFG5_BASE.BIT._CSIH1DAP5
#define CSIH1CFG5_CSIH1CKP5 CSIH1CFG5_BASE.BIT._CSIH1CKP5
#define CSIH1CFG5_CSIH1DIR5 CSIH1CFG5_BASE.BIT._CSIH1DIR5
#define CSIH1CFG5_CSIH1RCB5 CSIH1CFG5_BASE.BIT._CSIH1RCB5
#define CSIH1CFG5_CSIH1DLS5 CSIH1CFG5_BASE.BIT._CSIH1DLS5
#define CSIH1CFG5_CSIH1PS5 CSIH1CFG5_BASE.BIT._CSIH1PS5
#define CSIH1CFG5_CSIH1BRSS5 CSIH1CFG5_BASE.BIT._CSIH1BRSS5
#define CSIH1CFG6 CSIH1CFG6_BASE.UINT32
#define CSIH1CFG6_CSIH1SP6 CSIH1CFG6_BASE.BIT._CSIH1SP6
#define CSIH1CFG6_CSIH1IN6 CSIH1CFG6_BASE.BIT._CSIH1IN6
#define CSIH1CFG6_CSIH1HD6 CSIH1CFG6_BASE.BIT._CSIH1HD6
#define CSIH1CFG6_CSIH1ID6 CSIH1CFG6_BASE.BIT._CSIH1ID6
#define CSIH1CFG6_CSIH1IDL6 CSIH1CFG6_BASE.BIT._CSIH1IDL6
#define CSIH1CFG6_CSIH1DAP6 CSIH1CFG6_BASE.BIT._CSIH1DAP6
#define CSIH1CFG6_CSIH1CKP6 CSIH1CFG6_BASE.BIT._CSIH1CKP6
#define CSIH1CFG6_CSIH1DIR6 CSIH1CFG6_BASE.BIT._CSIH1DIR6
#define CSIH1CFG6_CSIH1RCB6 CSIH1CFG6_BASE.BIT._CSIH1RCB6
#define CSIH1CFG6_CSIH1DLS6 CSIH1CFG6_BASE.BIT._CSIH1DLS6
#define CSIH1CFG6_CSIH1PS6 CSIH1CFG6_BASE.BIT._CSIH1PS6
#define CSIH1CFG6_CSIH1BRSS6 CSIH1CFG6_BASE.BIT._CSIH1BRSS6
#define CSIH1CFG7 CSIH1CFG7_BASE.UINT32
#define CSIH1CFG7_CSIH1SP7 CSIH1CFG7_BASE.BIT._CSIH1SP7
#define CSIH1CFG7_CSIH1IN7 CSIH1CFG7_BASE.BIT._CSIH1IN7
#define CSIH1CFG7_CSIH1HD7 CSIH1CFG7_BASE.BIT._CSIH1HD7
#define CSIH1CFG7_CSIH1ID7 CSIH1CFG7_BASE.BIT._CSIH1ID7
#define CSIH1CFG7_CSIH1IDL7 CSIH1CFG7_BASE.BIT._CSIH1IDL7
#define CSIH1CFG7_CSIH1DAP7 CSIH1CFG7_BASE.BIT._CSIH1DAP7
#define CSIH1CFG7_CSIH1CKP7 CSIH1CFG7_BASE.BIT._CSIH1CKP7
#define CSIH1CFG7_CSIH1DIR7 CSIH1CFG7_BASE.BIT._CSIH1DIR7
#define CSIH1CFG7_CSIH1RCB7 CSIH1CFG7_BASE.BIT._CSIH1RCB7
#define CSIH1CFG7_CSIH1DLS7 CSIH1CFG7_BASE.BIT._CSIH1DLS7
#define CSIH1CFG7_CSIH1PS7 CSIH1CFG7_BASE.BIT._CSIH1PS7
#define CSIH1CFG7_CSIH1BRSS7 CSIH1CFG7_BASE.BIT._CSIH1BRSS7
#define CSIH1BRS0 CSIH1BRS0_BASE.UINT16
#define CSIH1BRS0_CSIH1BRS0 CSIH1BRS0_BASE.BIT._CSIH1BRS0
#define CSIH1BRS1 CSIH1BRS1_BASE.UINT16
#define CSIH1BRS1_CSIH1BRS1 CSIH1BRS1_BASE.BIT._CSIH1BRS1
#define CSIH1BRS2 CSIH1BRS2_BASE.UINT16
#define CSIH1BRS2_CSIH1BRS2 CSIH1BRS2_BASE.BIT._CSIH1BRS2
#define CSIH1BRS3 CSIH1BRS3_BASE.UINT16
#define CSIH1BRS3_CSIH1BRS3 CSIH1BRS3_BASE.BIT._CSIH1BRS3

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif