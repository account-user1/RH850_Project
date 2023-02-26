#ifndef __DR7F701373_CSIH3_HEADER__
#define __DR7F701373_CSIH3_HEADER__



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
    uint8 _CSIH3MBS : 1;
    uint8 _CSIH3JOBE : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 _CSIH3RXE : 1;
    uint8 _CSIH3TXE : 1;
    uint8 _CSIH3PWR : 1;
} CSIH3CTL0Bits_t;

typedef struct
{
    uint32 _CSIH3SSE : 1;
    uint32 _CSIH3HSE : 1;
    uint32 _CSIH3SIT : 1;
    uint32 _CSIH3LBM : 1;
    uint32 _CSIH3CSRI : 1;
    uint32 _CSIH3DCS : 1;
    uint32 _CSIH3JE : 1;
    uint32 _CSIH3EDLE : 1;
    uint32 _CSIH3CSL0 : 1;
    uint32 _CSIH3CSL1 : 1;
    uint32 _CSIH3CSL2 : 1;
    uint32 _CSIH3CSL3 : 1;
    uint32 _CSIH3CSL4 : 1;
    uint32 _CSIH3CSL5 : 1;
    uint32 _CSIH3CSL6 : 1;
    uint32 _CSIH3CSL7 : 1;
    uint32 _CSIH3SLIT : 1;
    uint32 _CSIH3CKR : 1;
    uint32 padding18 : 1;
    uint32 _CSIH3SME : 1;
    uint32 _CSIH3ISCE : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3SLRS : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH3CTL1Bits_t;

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
    uint16 _CSIH3PRS : 3;
} CSIH3CTL2Bits_t;

typedef struct
{
    uint32 _CSIH3FFS : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3FES : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH3MCTL1Bits_t;

typedef struct
{
    uint32 _CSIH3SOP : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3ND : 8;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CSIH3BTST : 1;
} CSIH3MCTL2Bits_t;

typedef struct
{
    uint32 _CSIH3TX : 16;
    uint32 _CSIH3CS0 : 1;
    uint32 _CSIH3CS1 : 1;
    uint32 _CSIH3CS2 : 1;
    uint32 _CSIH3CS3 : 1;
    uint32 _CSIH3CS4 : 1;
    uint32 _CSIH3CS5 : 1;
    uint32 _CSIH3CS6 : 1;
    uint32 _CSIH3CS7 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 _CSIH3ISC : 1;
    uint32 _CSIH3SFN0 : 1;
    uint32 _CSIH3SFN1 : 1;
    uint32 _CSIH3EDL : 1;
    uint32 _CSIH3EOJ : 1;
    uint32 _CSIH3CIRE : 1;
} CSIH3TX0WBits_t;

typedef struct
{
    uint16 _CSIH3TX : 16;
} CSIH3TX0HBits_t;

typedef struct
{
    const uint32 _CSIH3RX : 16;
    const uint32 _CSIH3CS0 : 1;
    const uint32 _CSIH3CS1 : 1;
    const uint32 _CSIH3CS2 : 1;
    const uint32 _CSIH3CS3 : 1;
    const uint32 _CSIH3CS4 : 1;
    const uint32 _CSIH3CS5 : 1;
    const uint32 _CSIH3CS6 : 1;
    const uint32 _CSIH3CS7 : 1;
    const uint32 _CSIH3TDCE : 1;
    const uint32 _CSIH3RPE : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH3RX0WBits_t;

typedef struct
{
    const uint16 _CSIH3RX : 16;
} CSIH3RX0HBits_t;

typedef struct
{
    uint32 _CSIH3TRWA : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _CSIH3RRA : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CSIH3MRWP0Bits_t;

typedef struct
{
    const uint32 _CSIH3OVE : 1;
    const uint32 _CSIH3PE : 1;
    uint32 padding2 : 1;
    const uint32 _CSIH3DCE : 1;
    const uint32 _CSIH3EMF : 1;
    const uint32 _CSIH3FLF : 1;
    uint32 padding6 : 1;
    const uint32 _CSIH3TSF : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _CSIH3OFE : 1;
    const uint32 _CSIH3TMOE : 1;
    const uint32 _CSIH3SPF : 8;
    const uint32 _CSIH3SRP : 8;
} CSIH3STR0Bits_t;

typedef struct
{
    uint16 _CSIH3OVEC : 1;
    uint16 _CSIH3PEC : 1;
    uint16 padding2 : 1;
    uint16 _CSIH3DCEC : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH3PCT : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 _CSIH3OFEC : 1;
    uint16 _CSIH3TMOEC : 1;
} CSIH3STCR0Bits_t;

typedef struct
{
    uint16 _CSIH3TO : 5;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 _CSIH3MMS : 2;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH3MCTL0Bits_t;

typedef struct
{
    uint32 _CSIH3SP0 : 4;
    uint32 _CSIH3IN0 : 4;
    uint32 _CSIH3HD0 : 4;
    uint32 _CSIH3ID0 : 3;
    uint32 _CSIH3IDL0 : 1;
    uint32 _CSIH3DAP0 : 1;
    uint32 _CSIH3CKP0 : 1;
    uint32 _CSIH3DIR0 : 1;
    uint32 _CSIH3RCB0 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS0 : 4;
    uint32 _CSIH3PS0 : 2;
    uint32 _CSIH3BRSS0 : 2;
} CSIH3CFG0Bits_t;

typedef struct
{
    uint32 _CSIH3SP1 : 4;
    uint32 _CSIH3IN1 : 4;
    uint32 _CSIH3HD1 : 4;
    uint32 _CSIH3ID1 : 3;
    uint32 _CSIH3IDL1 : 1;
    uint32 _CSIH3DAP1 : 1;
    uint32 _CSIH3CKP1 : 1;
    uint32 _CSIH3DIR1 : 1;
    uint32 _CSIH3RCB1 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS1 : 4;
    uint32 _CSIH3PS1 : 2;
    uint32 _CSIH3BRSS1 : 2;
} CSIH3CFG1Bits_t;

typedef struct
{
    uint32 _CSIH3SP2 : 4;
    uint32 _CSIH3IN2 : 4;
    uint32 _CSIH3HD2 : 4;
    uint32 _CSIH3ID2 : 3;
    uint32 _CSIH3IDL2 : 1;
    uint32 _CSIH3DAP2 : 1;
    uint32 _CSIH3CKP2 : 1;
    uint32 _CSIH3DIR2 : 1;
    uint32 _CSIH3RCB2 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS2 : 4;
    uint32 _CSIH3PS2 : 2;
    uint32 _CSIH3BRSS2 : 2;
} CSIH3CFG2Bits_t;

typedef struct
{
    uint32 _CSIH3SP3 : 4;
    uint32 _CSIH3IN3 : 4;
    uint32 _CSIH3HD3 : 4;
    uint32 _CSIH3ID3 : 3;
    uint32 _CSIH3IDL3 : 1;
    uint32 _CSIH3DAP3 : 1;
    uint32 _CSIH3CKP3 : 1;
    uint32 _CSIH3DIR3 : 1;
    uint32 _CSIH3RCB3 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS3 : 4;
    uint32 _CSIH3PS3 : 2;
    uint32 _CSIH3BRSS3 : 2;
} CSIH3CFG3Bits_t;

typedef struct
{
    uint32 _CSIH3SP4 : 4;
    uint32 _CSIH3IN4 : 4;
    uint32 _CSIH3HD4 : 4;
    uint32 _CSIH3ID4 : 3;
    uint32 _CSIH3IDL4 : 1;
    uint32 _CSIH3DAP4 : 1;
    uint32 _CSIH3CKP4 : 1;
    uint32 _CSIH3DIR4 : 1;
    uint32 _CSIH3RCB4 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS4 : 4;
    uint32 _CSIH3PS4 : 2;
    uint32 _CSIH3BRSS4 : 2;
} CSIH3CFG4Bits_t;

typedef struct
{
    uint32 _CSIH3SP5 : 4;
    uint32 _CSIH3IN5 : 4;
    uint32 _CSIH3HD5 : 4;
    uint32 _CSIH3ID5 : 3;
    uint32 _CSIH3IDL5 : 1;
    uint32 _CSIH3DAP5 : 1;
    uint32 _CSIH3CKP5 : 1;
    uint32 _CSIH3DIR5 : 1;
    uint32 _CSIH3RCB5 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS5 : 4;
    uint32 _CSIH3PS5 : 2;
    uint32 _CSIH3BRSS5 : 2;
} CSIH3CFG5Bits_t;

typedef struct
{
    uint32 _CSIH3SP6 : 4;
    uint32 _CSIH3IN6 : 4;
    uint32 _CSIH3HD6 : 4;
    uint32 _CSIH3ID6 : 3;
    uint32 _CSIH3IDL6 : 1;
    uint32 _CSIH3DAP6 : 1;
    uint32 _CSIH3CKP6 : 1;
    uint32 _CSIH3DIR6 : 1;
    uint32 _CSIH3RCB6 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS6 : 4;
    uint32 _CSIH3PS6 : 2;
    uint32 _CSIH3BRSS6 : 2;
} CSIH3CFG6Bits_t;

typedef struct
{
    uint32 _CSIH3SP7 : 4;
    uint32 _CSIH3IN7 : 4;
    uint32 _CSIH3HD7 : 4;
    uint32 _CSIH3ID7 : 3;
    uint32 _CSIH3IDL7 : 1;
    uint32 _CSIH3DAP7 : 1;
    uint32 _CSIH3CKP7 : 1;
    uint32 _CSIH3DIR7 : 1;
    uint32 _CSIH3RCB7 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _CSIH3DLS7 : 4;
    uint32 _CSIH3PS7 : 2;
    uint32 _CSIH3BRSS7 : 2;
} CSIH3CFG7Bits_t;

typedef struct
{
    uint16 _CSIH3BRS0 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH3BRS0Bits_t;

typedef struct
{
    uint16 _CSIH3BRS1 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH3BRS1Bits_t;

typedef struct
{
    uint16 _CSIH3BRS2 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH3BRS2Bits_t;

typedef struct
{
    uint16 _CSIH3BRS3 : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CSIH3BRS3Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CSIH3CTL0Bits_t BIT;
} CSIH3CTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH3CTL1Bits_t BIT;
} CSIH3CTL1_t;

typedef union
{
    uint16 UINT16;
    CSIH3CTL2Bits_t BIT;
} CSIH3CTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH3MCTL1Bits_t BIT;
} CSIH3MCTL1_t;

typedef union
{
    uint32 UINT32;
    CSIH3MCTL2Bits_t BIT;
} CSIH3MCTL2_t;

typedef union
{
    uint32 UINT32;
    CSIH3TX0WBits_t BIT;
} CSIH3TX0W_t;

typedef union
{
    uint16 UINT16;
    CSIH3TX0HBits_t BIT;
} CSIH3TX0H_t;

typedef union
{
    uint32 UINT32;
    const CSIH3RX0WBits_t BIT;
} CSIH3RX0W_t;

typedef union
{
    uint16 UINT16;
    const CSIH3RX0HBits_t BIT;
} CSIH3RX0H_t;

typedef union
{
    uint32 UINT32;
    CSIH3MRWP0Bits_t BIT;
} CSIH3MRWP0_t;

typedef union
{
    uint32 UINT32;
    const CSIH3STR0Bits_t BIT;
} CSIH3STR0_t;

typedef union
{
    uint16 UINT16;
    CSIH3STCR0Bits_t BIT;
} CSIH3STCR0_t;

typedef union
{
    uint16 UINT16;
    CSIH3MCTL0Bits_t BIT;
} CSIH3MCTL0_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG0Bits_t BIT;
} CSIH3CFG0_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG1Bits_t BIT;
} CSIH3CFG1_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG2Bits_t BIT;
} CSIH3CFG2_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG3Bits_t BIT;
} CSIH3CFG3_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG4Bits_t BIT;
} CSIH3CFG4_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG5Bits_t BIT;
} CSIH3CFG5_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG6Bits_t BIT;
} CSIH3CFG6_t;

typedef union
{
    uint32 UINT32;
    CSIH3CFG7Bits_t BIT;
} CSIH3CFG7_t;

typedef union
{
    uint16 UINT16;
    CSIH3BRS0Bits_t BIT;
} CSIH3BRS0_t;

typedef union
{
    uint16 UINT16;
    CSIH3BRS1Bits_t BIT;
} CSIH3BRS1_t;

typedef union
{
    uint16 UINT16;
    CSIH3BRS2Bits_t BIT;
} CSIH3BRS2_t;

typedef union
{
    uint16 UINT16;
    CSIH3BRS3Bits_t BIT;
} CSIH3BRS3_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CSIH3CTL0_BASE, 0xFFCA3000, __READ_WRITE, CSIH3CTL0_t);
__IOREG(CSIH3CTL1_BASE, 0xFFCA3010, __READ_WRITE, CSIH3CTL1_t);
__IOREG(CSIH3CTL2_BASE, 0xFFCA3014, __READ_WRITE, CSIH3CTL2_t);
__IOREG(CSIH3MCTL1_BASE, 0xFFCA4000, __READ_WRITE, CSIH3MCTL1_t);
__IOREG(CSIH3MCTL2_BASE, 0xFFCA4004, __READ_WRITE, CSIH3MCTL2_t);
__IOREG(CSIH3TX0W_BASE, 0xFFCA4008, __READ_WRITE, CSIH3TX0W_t);
__IOREG(CSIH3TX0H_BASE, 0xFFCA400C, __READ_WRITE, CSIH3TX0H_t);
__IOREG(CSIH3RX0W_BASE, 0xFFCA4010, __READ, CSIH3RX0W_t);
__IOREG(CSIH3RX0H_BASE, 0xFFCA4014, __READ, CSIH3RX0H_t);
__IOREG(CSIH3MRWP0_BASE, 0xFFCA4018, __READ_WRITE, CSIH3MRWP0_t);
__IOREG(CSIH3STR0_BASE, 0xFFCA401C, __READ, CSIH3STR0_t);
__IOREG(CSIH3STCR0_BASE, 0xFFCA4020, __READ_WRITE, CSIH3STCR0_t);
__IOREG(CSIH3MCTL0_BASE, 0xFFCA4040, __READ_WRITE, CSIH3MCTL0_t);
__IOREG(CSIH3CFG0_BASE, 0xFFCA4044, __READ_WRITE, CSIH3CFG0_t);
__IOREG(CSIH3CFG1_BASE, 0xFFCA4048, __READ_WRITE, CSIH3CFG1_t);
__IOREG(CSIH3CFG2_BASE, 0xFFCA404C, __READ_WRITE, CSIH3CFG2_t);
__IOREG(CSIH3CFG3_BASE, 0xFFCA4050, __READ_WRITE, CSIH3CFG3_t);
__IOREG(CSIH3CFG4_BASE, 0xFFCA4054, __READ_WRITE, CSIH3CFG4_t);
__IOREG(CSIH3CFG5_BASE, 0xFFCA4058, __READ_WRITE, CSIH3CFG5_t);
__IOREG(CSIH3CFG6_BASE, 0xFFCA405C, __READ_WRITE, CSIH3CFG6_t);
__IOREG(CSIH3CFG7_BASE, 0xFFCA4060, __READ_WRITE, CSIH3CFG7_t);
__IOREG(CSIH3BRS0_BASE, 0xFFCA4068, __READ_WRITE, CSIH3BRS0_t);
__IOREG(CSIH3BRS1_BASE, 0xFFCA406C, __READ_WRITE, CSIH3BRS1_t);
__IOREG(CSIH3BRS2_BASE, 0xFFCA4070, __READ_WRITE, CSIH3BRS2_t);
__IOREG(CSIH3BRS3_BASE, 0xFFCA4074, __READ_WRITE, CSIH3BRS3_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CSIH3CTL0 CSIH3CTL0_BASE.UINT8
#define CSIH3CTL0_CSIH3MBS CSIH3CTL0_BASE.BIT._CSIH3MBS
#define CSIH3CTL0_CSIH3JOBE CSIH3CTL0_BASE.BIT._CSIH3JOBE
#define CSIH3CTL0_CSIH3RXE CSIH3CTL0_BASE.BIT._CSIH3RXE
#define CSIH3CTL0_CSIH3TXE CSIH3CTL0_BASE.BIT._CSIH3TXE
#define CSIH3CTL0_CSIH3PWR CSIH3CTL0_BASE.BIT._CSIH3PWR
#define CSIH3CTL1 CSIH3CTL1_BASE.UINT32
#define CSIH3CTL1_CSIH3SSE CSIH3CTL1_BASE.BIT._CSIH3SSE
#define CSIH3CTL1_CSIH3HSE CSIH3CTL1_BASE.BIT._CSIH3HSE
#define CSIH3CTL1_CSIH3SIT CSIH3CTL1_BASE.BIT._CSIH3SIT
#define CSIH3CTL1_CSIH3LBM CSIH3CTL1_BASE.BIT._CSIH3LBM
#define CSIH3CTL1_CSIH3CSRI CSIH3CTL1_BASE.BIT._CSIH3CSRI
#define CSIH3CTL1_CSIH3DCS CSIH3CTL1_BASE.BIT._CSIH3DCS
#define CSIH3CTL1_CSIH3JE CSIH3CTL1_BASE.BIT._CSIH3JE
#define CSIH3CTL1_CSIH3EDLE CSIH3CTL1_BASE.BIT._CSIH3EDLE
#define CSIH3CTL1_CSIH3CSL0 CSIH3CTL1_BASE.BIT._CSIH3CSL0
#define CSIH3CTL1_CSIH3CSL1 CSIH3CTL1_BASE.BIT._CSIH3CSL1
#define CSIH3CTL1_CSIH3CSL2 CSIH3CTL1_BASE.BIT._CSIH3CSL2
#define CSIH3CTL1_CSIH3CSL3 CSIH3CTL1_BASE.BIT._CSIH3CSL3
#define CSIH3CTL1_CSIH3CSL4 CSIH3CTL1_BASE.BIT._CSIH3CSL4
#define CSIH3CTL1_CSIH3CSL5 CSIH3CTL1_BASE.BIT._CSIH3CSL5
#define CSIH3CTL1_CSIH3CSL6 CSIH3CTL1_BASE.BIT._CSIH3CSL6
#define CSIH3CTL1_CSIH3CSL7 CSIH3CTL1_BASE.BIT._CSIH3CSL7
#define CSIH3CTL1_CSIH3SLIT CSIH3CTL1_BASE.BIT._CSIH3SLIT
#define CSIH3CTL1_CSIH3CKR CSIH3CTL1_BASE.BIT._CSIH3CKR
#define CSIH3CTL1_CSIH3SME CSIH3CTL1_BASE.BIT._CSIH3SME
#define CSIH3CTL1_CSIH3ISCE CSIH3CTL1_BASE.BIT._CSIH3ISCE
#define CSIH3CTL1_CSIH3SLRS CSIH3CTL1_BASE.BIT._CSIH3SLRS
#define CSIH3CTL2 CSIH3CTL2_BASE.UINT16
#define CSIH3CTL2_CSIH3PRS CSIH3CTL2_BASE.BIT._CSIH3PRS
#define CSIH3MCTL1 CSIH3MCTL1_BASE.UINT32
#define CSIH3MCTL1_CSIH3FFS CSIH3MCTL1_BASE.BIT._CSIH3FFS
#define CSIH3MCTL1_CSIH3FES CSIH3MCTL1_BASE.BIT._CSIH3FES
#define CSIH3MCTL2 CSIH3MCTL2_BASE.UINT32
#define CSIH3MCTL2_CSIH3SOP CSIH3MCTL2_BASE.BIT._CSIH3SOP
#define CSIH3MCTL2_CSIH3ND CSIH3MCTL2_BASE.BIT._CSIH3ND
#define CSIH3MCTL2_CSIH3BTST CSIH3MCTL2_BASE.BIT._CSIH3BTST
#define CSIH3TX0W CSIH3TX0W_BASE.UINT32
#define CSIH3TX0W_CSIH3TX CSIH3TX0W_BASE.BIT._CSIH3TX
#define CSIH3TX0W_CSIH3CS0 CSIH3TX0W_BASE.BIT._CSIH3CS0
#define CSIH3TX0W_CSIH3CS1 CSIH3TX0W_BASE.BIT._CSIH3CS1
#define CSIH3TX0W_CSIH3CS2 CSIH3TX0W_BASE.BIT._CSIH3CS2
#define CSIH3TX0W_CSIH3CS3 CSIH3TX0W_BASE.BIT._CSIH3CS3
#define CSIH3TX0W_CSIH3CS4 CSIH3TX0W_BASE.BIT._CSIH3CS4
#define CSIH3TX0W_CSIH3CS5 CSIH3TX0W_BASE.BIT._CSIH3CS5
#define CSIH3TX0W_CSIH3CS6 CSIH3TX0W_BASE.BIT._CSIH3CS6
#define CSIH3TX0W_CSIH3CS7 CSIH3TX0W_BASE.BIT._CSIH3CS7
#define CSIH3TX0W_CSIH3ISC CSIH3TX0W_BASE.BIT._CSIH3ISC
#define CSIH3TX0W_CSIH3SFN0 CSIH3TX0W_BASE.BIT._CSIH3SFN0
#define CSIH3TX0W_CSIH3SFN1 CSIH3TX0W_BASE.BIT._CSIH3SFN1
#define CSIH3TX0W_CSIH3EDL CSIH3TX0W_BASE.BIT._CSIH3EDL
#define CSIH3TX0W_CSIH3EOJ CSIH3TX0W_BASE.BIT._CSIH3EOJ
#define CSIH3TX0W_CSIH3CIRE CSIH3TX0W_BASE.BIT._CSIH3CIRE
#define CSIH3TX0H CSIH3TX0H_BASE.UINT16
#define CSIH3TX0H_CSIH3TX CSIH3TX0H_BASE.BIT._CSIH3TX
#define CSIH3RX0W CSIH3RX0W_BASE.UINT32
#define CSIH3RX0W_CSIH3RX CSIH3RX0W_BASE.BIT._CSIH3RX
#define CSIH3RX0W_CSIH3CS0 CSIH3RX0W_BASE.BIT._CSIH3CS0
#define CSIH3RX0W_CSIH3CS1 CSIH3RX0W_BASE.BIT._CSIH3CS1
#define CSIH3RX0W_CSIH3CS2 CSIH3RX0W_BASE.BIT._CSIH3CS2
#define CSIH3RX0W_CSIH3CS3 CSIH3RX0W_BASE.BIT._CSIH3CS3
#define CSIH3RX0W_CSIH3CS4 CSIH3RX0W_BASE.BIT._CSIH3CS4
#define CSIH3RX0W_CSIH3CS5 CSIH3RX0W_BASE.BIT._CSIH3CS5
#define CSIH3RX0W_CSIH3CS6 CSIH3RX0W_BASE.BIT._CSIH3CS6
#define CSIH3RX0W_CSIH3CS7 CSIH3RX0W_BASE.BIT._CSIH3CS7
#define CSIH3RX0W_CSIH3TDCE CSIH3RX0W_BASE.BIT._CSIH3TDCE
#define CSIH3RX0W_CSIH3RPE CSIH3RX0W_BASE.BIT._CSIH3RPE
#define CSIH3RX0H CSIH3RX0H_BASE.UINT16
#define CSIH3RX0H_CSIH3RX CSIH3RX0H_BASE.BIT._CSIH3RX
#define CSIH3MRWP0 CSIH3MRWP0_BASE.UINT32
#define CSIH3MRWP0_CSIH3TRWA CSIH3MRWP0_BASE.BIT._CSIH3TRWA
#define CSIH3MRWP0_CSIH3RRA CSIH3MRWP0_BASE.BIT._CSIH3RRA
#define CSIH3STR0 CSIH3STR0_BASE.UINT32
#define CSIH3STR0_CSIH3OVE CSIH3STR0_BASE.BIT._CSIH3OVE
#define CSIH3STR0_CSIH3PE CSIH3STR0_BASE.BIT._CSIH3PE
#define CSIH3STR0_CSIH3DCE CSIH3STR0_BASE.BIT._CSIH3DCE
#define CSIH3STR0_CSIH3EMF CSIH3STR0_BASE.BIT._CSIH3EMF
#define CSIH3STR0_CSIH3FLF CSIH3STR0_BASE.BIT._CSIH3FLF
#define CSIH3STR0_CSIH3TSF CSIH3STR0_BASE.BIT._CSIH3TSF
#define CSIH3STR0_CSIH3OFE CSIH3STR0_BASE.BIT._CSIH3OFE
#define CSIH3STR0_CSIH3TMOE CSIH3STR0_BASE.BIT._CSIH3TMOE
#define CSIH3STR0_CSIH3SPF CSIH3STR0_BASE.BIT._CSIH3SPF
#define CSIH3STR0_CSIH3SRP CSIH3STR0_BASE.BIT._CSIH3SRP
#define CSIH3STCR0 CSIH3STCR0_BASE.UINT16
#define CSIH3STCR0_CSIH3OVEC CSIH3STCR0_BASE.BIT._CSIH3OVEC
#define CSIH3STCR0_CSIH3PEC CSIH3STCR0_BASE.BIT._CSIH3PEC
#define CSIH3STCR0_CSIH3DCEC CSIH3STCR0_BASE.BIT._CSIH3DCEC
#define CSIH3STCR0_CSIH3PCT CSIH3STCR0_BASE.BIT._CSIH3PCT
#define CSIH3STCR0_CSIH3OFEC CSIH3STCR0_BASE.BIT._CSIH3OFEC
#define CSIH3STCR0_CSIH3TMOEC CSIH3STCR0_BASE.BIT._CSIH3TMOEC
#define CSIH3MCTL0 CSIH3MCTL0_BASE.UINT16
#define CSIH3MCTL0_CSIH3TO CSIH3MCTL0_BASE.BIT._CSIH3TO
#define CSIH3MCTL0_CSIH3MMS CSIH3MCTL0_BASE.BIT._CSIH3MMS
#define CSIH3CFG0 CSIH3CFG0_BASE.UINT32
#define CSIH3CFG0_CSIH3SP0 CSIH3CFG0_BASE.BIT._CSIH3SP0
#define CSIH3CFG0_CSIH3IN0 CSIH3CFG0_BASE.BIT._CSIH3IN0
#define CSIH3CFG0_CSIH3HD0 CSIH3CFG0_BASE.BIT._CSIH3HD0
#define CSIH3CFG0_CSIH3ID0 CSIH3CFG0_BASE.BIT._CSIH3ID0
#define CSIH3CFG0_CSIH3IDL0 CSIH3CFG0_BASE.BIT._CSIH3IDL0
#define CSIH3CFG0_CSIH3DAP0 CSIH3CFG0_BASE.BIT._CSIH3DAP0
#define CSIH3CFG0_CSIH3CKP0 CSIH3CFG0_BASE.BIT._CSIH3CKP0
#define CSIH3CFG0_CSIH3DIR0 CSIH3CFG0_BASE.BIT._CSIH3DIR0
#define CSIH3CFG0_CSIH3RCB0 CSIH3CFG0_BASE.BIT._CSIH3RCB0
#define CSIH3CFG0_CSIH3DLS0 CSIH3CFG0_BASE.BIT._CSIH3DLS0
#define CSIH3CFG0_CSIH3PS0 CSIH3CFG0_BASE.BIT._CSIH3PS0
#define CSIH3CFG0_CSIH3BRSS0 CSIH3CFG0_BASE.BIT._CSIH3BRSS0
#define CSIH3CFG1 CSIH3CFG1_BASE.UINT32
#define CSIH3CFG1_CSIH3SP1 CSIH3CFG1_BASE.BIT._CSIH3SP1
#define CSIH3CFG1_CSIH3IN1 CSIH3CFG1_BASE.BIT._CSIH3IN1
#define CSIH3CFG1_CSIH3HD1 CSIH3CFG1_BASE.BIT._CSIH3HD1
#define CSIH3CFG1_CSIH3ID1 CSIH3CFG1_BASE.BIT._CSIH3ID1
#define CSIH3CFG1_CSIH3IDL1 CSIH3CFG1_BASE.BIT._CSIH3IDL1
#define CSIH3CFG1_CSIH3DAP1 CSIH3CFG1_BASE.BIT._CSIH3DAP1
#define CSIH3CFG1_CSIH3CKP1 CSIH3CFG1_BASE.BIT._CSIH3CKP1
#define CSIH3CFG1_CSIH3DIR1 CSIH3CFG1_BASE.BIT._CSIH3DIR1
#define CSIH3CFG1_CSIH3RCB1 CSIH3CFG1_BASE.BIT._CSIH3RCB1
#define CSIH3CFG1_CSIH3DLS1 CSIH3CFG1_BASE.BIT._CSIH3DLS1
#define CSIH3CFG1_CSIH3PS1 CSIH3CFG1_BASE.BIT._CSIH3PS1
#define CSIH3CFG1_CSIH3BRSS1 CSIH3CFG1_BASE.BIT._CSIH3BRSS1
#define CSIH3CFG2 CSIH3CFG2_BASE.UINT32
#define CSIH3CFG2_CSIH3SP2 CSIH3CFG2_BASE.BIT._CSIH3SP2
#define CSIH3CFG2_CSIH3IN2 CSIH3CFG2_BASE.BIT._CSIH3IN2
#define CSIH3CFG2_CSIH3HD2 CSIH3CFG2_BASE.BIT._CSIH3HD2
#define CSIH3CFG2_CSIH3ID2 CSIH3CFG2_BASE.BIT._CSIH3ID2
#define CSIH3CFG2_CSIH3IDL2 CSIH3CFG2_BASE.BIT._CSIH3IDL2
#define CSIH3CFG2_CSIH3DAP2 CSIH3CFG2_BASE.BIT._CSIH3DAP2
#define CSIH3CFG2_CSIH3CKP2 CSIH3CFG2_BASE.BIT._CSIH3CKP2
#define CSIH3CFG2_CSIH3DIR2 CSIH3CFG2_BASE.BIT._CSIH3DIR2
#define CSIH3CFG2_CSIH3RCB2 CSIH3CFG2_BASE.BIT._CSIH3RCB2
#define CSIH3CFG2_CSIH3DLS2 CSIH3CFG2_BASE.BIT._CSIH3DLS2
#define CSIH3CFG2_CSIH3PS2 CSIH3CFG2_BASE.BIT._CSIH3PS2
#define CSIH3CFG2_CSIH3BRSS2 CSIH3CFG2_BASE.BIT._CSIH3BRSS2
#define CSIH3CFG3 CSIH3CFG3_BASE.UINT32
#define CSIH3CFG3_CSIH3SP3 CSIH3CFG3_BASE.BIT._CSIH3SP3
#define CSIH3CFG3_CSIH3IN3 CSIH3CFG3_BASE.BIT._CSIH3IN3
#define CSIH3CFG3_CSIH3HD3 CSIH3CFG3_BASE.BIT._CSIH3HD3
#define CSIH3CFG3_CSIH3ID3 CSIH3CFG3_BASE.BIT._CSIH3ID3
#define CSIH3CFG3_CSIH3IDL3 CSIH3CFG3_BASE.BIT._CSIH3IDL3
#define CSIH3CFG3_CSIH3DAP3 CSIH3CFG3_BASE.BIT._CSIH3DAP3
#define CSIH3CFG3_CSIH3CKP3 CSIH3CFG3_BASE.BIT._CSIH3CKP3
#define CSIH3CFG3_CSIH3DIR3 CSIH3CFG3_BASE.BIT._CSIH3DIR3
#define CSIH3CFG3_CSIH3RCB3 CSIH3CFG3_BASE.BIT._CSIH3RCB3
#define CSIH3CFG3_CSIH3DLS3 CSIH3CFG3_BASE.BIT._CSIH3DLS3
#define CSIH3CFG3_CSIH3PS3 CSIH3CFG3_BASE.BIT._CSIH3PS3
#define CSIH3CFG3_CSIH3BRSS3 CSIH3CFG3_BASE.BIT._CSIH3BRSS3
#define CSIH3CFG4 CSIH3CFG4_BASE.UINT32
#define CSIH3CFG4_CSIH3SP4 CSIH3CFG4_BASE.BIT._CSIH3SP4
#define CSIH3CFG4_CSIH3IN4 CSIH3CFG4_BASE.BIT._CSIH3IN4
#define CSIH3CFG4_CSIH3HD4 CSIH3CFG4_BASE.BIT._CSIH3HD4
#define CSIH3CFG4_CSIH3ID4 CSIH3CFG4_BASE.BIT._CSIH3ID4
#define CSIH3CFG4_CSIH3IDL4 CSIH3CFG4_BASE.BIT._CSIH3IDL4
#define CSIH3CFG4_CSIH3DAP4 CSIH3CFG4_BASE.BIT._CSIH3DAP4
#define CSIH3CFG4_CSIH3CKP4 CSIH3CFG4_BASE.BIT._CSIH3CKP4
#define CSIH3CFG4_CSIH3DIR4 CSIH3CFG4_BASE.BIT._CSIH3DIR4
#define CSIH3CFG4_CSIH3RCB4 CSIH3CFG4_BASE.BIT._CSIH3RCB4
#define CSIH3CFG4_CSIH3DLS4 CSIH3CFG4_BASE.BIT._CSIH3DLS4
#define CSIH3CFG4_CSIH3PS4 CSIH3CFG4_BASE.BIT._CSIH3PS4
#define CSIH3CFG4_CSIH3BRSS4 CSIH3CFG4_BASE.BIT._CSIH3BRSS4
#define CSIH3CFG5 CSIH3CFG5_BASE.UINT32
#define CSIH3CFG5_CSIH3SP5 CSIH3CFG5_BASE.BIT._CSIH3SP5
#define CSIH3CFG5_CSIH3IN5 CSIH3CFG5_BASE.BIT._CSIH3IN5
#define CSIH3CFG5_CSIH3HD5 CSIH3CFG5_BASE.BIT._CSIH3HD5
#define CSIH3CFG5_CSIH3ID5 CSIH3CFG5_BASE.BIT._CSIH3ID5
#define CSIH3CFG5_CSIH3IDL5 CSIH3CFG5_BASE.BIT._CSIH3IDL5
#define CSIH3CFG5_CSIH3DAP5 CSIH3CFG5_BASE.BIT._CSIH3DAP5
#define CSIH3CFG5_CSIH3CKP5 CSIH3CFG5_BASE.BIT._CSIH3CKP5
#define CSIH3CFG5_CSIH3DIR5 CSIH3CFG5_BASE.BIT._CSIH3DIR5
#define CSIH3CFG5_CSIH3RCB5 CSIH3CFG5_BASE.BIT._CSIH3RCB5
#define CSIH3CFG5_CSIH3DLS5 CSIH3CFG5_BASE.BIT._CSIH3DLS5
#define CSIH3CFG5_CSIH3PS5 CSIH3CFG5_BASE.BIT._CSIH3PS5
#define CSIH3CFG5_CSIH3BRSS5 CSIH3CFG5_BASE.BIT._CSIH3BRSS5
#define CSIH3CFG6 CSIH3CFG6_BASE.UINT32
#define CSIH3CFG6_CSIH3SP6 CSIH3CFG6_BASE.BIT._CSIH3SP6
#define CSIH3CFG6_CSIH3IN6 CSIH3CFG6_BASE.BIT._CSIH3IN6
#define CSIH3CFG6_CSIH3HD6 CSIH3CFG6_BASE.BIT._CSIH3HD6
#define CSIH3CFG6_CSIH3ID6 CSIH3CFG6_BASE.BIT._CSIH3ID6
#define CSIH3CFG6_CSIH3IDL6 CSIH3CFG6_BASE.BIT._CSIH3IDL6
#define CSIH3CFG6_CSIH3DAP6 CSIH3CFG6_BASE.BIT._CSIH3DAP6
#define CSIH3CFG6_CSIH3CKP6 CSIH3CFG6_BASE.BIT._CSIH3CKP6
#define CSIH3CFG6_CSIH3DIR6 CSIH3CFG6_BASE.BIT._CSIH3DIR6
#define CSIH3CFG6_CSIH3RCB6 CSIH3CFG6_BASE.BIT._CSIH3RCB6
#define CSIH3CFG6_CSIH3DLS6 CSIH3CFG6_BASE.BIT._CSIH3DLS6
#define CSIH3CFG6_CSIH3PS6 CSIH3CFG6_BASE.BIT._CSIH3PS6
#define CSIH3CFG6_CSIH3BRSS6 CSIH3CFG6_BASE.BIT._CSIH3BRSS6
#define CSIH3CFG7 CSIH3CFG7_BASE.UINT32
#define CSIH3CFG7_CSIH3SP7 CSIH3CFG7_BASE.BIT._CSIH3SP7
#define CSIH3CFG7_CSIH3IN7 CSIH3CFG7_BASE.BIT._CSIH3IN7
#define CSIH3CFG7_CSIH3HD7 CSIH3CFG7_BASE.BIT._CSIH3HD7
#define CSIH3CFG7_CSIH3ID7 CSIH3CFG7_BASE.BIT._CSIH3ID7
#define CSIH3CFG7_CSIH3IDL7 CSIH3CFG7_BASE.BIT._CSIH3IDL7
#define CSIH3CFG7_CSIH3DAP7 CSIH3CFG7_BASE.BIT._CSIH3DAP7
#define CSIH3CFG7_CSIH3CKP7 CSIH3CFG7_BASE.BIT._CSIH3CKP7
#define CSIH3CFG7_CSIH3DIR7 CSIH3CFG7_BASE.BIT._CSIH3DIR7
#define CSIH3CFG7_CSIH3RCB7 CSIH3CFG7_BASE.BIT._CSIH3RCB7
#define CSIH3CFG7_CSIH3DLS7 CSIH3CFG7_BASE.BIT._CSIH3DLS7
#define CSIH3CFG7_CSIH3PS7 CSIH3CFG7_BASE.BIT._CSIH3PS7
#define CSIH3CFG7_CSIH3BRSS7 CSIH3CFG7_BASE.BIT._CSIH3BRSS7
#define CSIH3BRS0 CSIH3BRS0_BASE.UINT16
#define CSIH3BRS0_CSIH3BRS0 CSIH3BRS0_BASE.BIT._CSIH3BRS0
#define CSIH3BRS1 CSIH3BRS1_BASE.UINT16
#define CSIH3BRS1_CSIH3BRS1 CSIH3BRS1_BASE.BIT._CSIH3BRS1
#define CSIH3BRS2 CSIH3BRS2_BASE.UINT16
#define CSIH3BRS2_CSIH3BRS2 CSIH3BRS2_BASE.BIT._CSIH3BRS2
#define CSIH3BRS3 CSIH3BRS3_BASE.UINT16
#define CSIH3BRS3_CSIH3BRS3 CSIH3BRS3_BASE.BIT._CSIH3BRS3

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif