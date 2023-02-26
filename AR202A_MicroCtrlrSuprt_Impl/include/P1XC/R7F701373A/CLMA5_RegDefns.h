#ifndef __DR7F701373_CLMA5_HEADER__
#define __DR7F701373_CLMA5_HEADER__



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
    uint8 _CLMA5CLME : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA5CTL0Bits_t;

typedef struct
{
    uint8 _TESENWPRT : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA5CTL1Bits_t;

typedef struct
{
    uint16 _CLMA5CMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA5CMPLBits_t;

typedef struct
{
    uint16 _CLMA5CMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA5CMPHBits_t;

typedef struct
{
    uint8 _CLMA5REG : 8;
} CLMA5PCMDBits_t;

typedef struct
{
    const uint8 _CLMA5PRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA5PSBits_t;

typedef struct
{
    uint8 _CLMA5SLSLW : 1;
    uint8 _CLMA5SLFST : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA5EMU0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CLMA5CTL0Bits_t BIT;
} CLMA5CTL0_t;

typedef union
{
    uint8 UINT8;
    CLMA5CTL1Bits_t BIT;
} CLMA5CTL1_t;

typedef union
{
    uint16 UINT16;
    CLMA5CMPLBits_t BIT;
} CLMA5CMPL_t;

typedef union
{
    uint16 UINT16;
    CLMA5CMPHBits_t BIT;
} CLMA5CMPH_t;

typedef union
{
    uint8 UINT8;
    CLMA5PCMDBits_t BIT;
} CLMA5PCMD_t;

typedef union
{
    uint8 UINT8;
    const CLMA5PSBits_t BIT;
} CLMA5PS_t;

typedef union
{
    uint8 UINT8;
    CLMA5EMU0Bits_t BIT;
} CLMA5EMU0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMA5CTL0_BASE, 0xFFF86800, __READ_WRITE, CLMA5CTL0_t);
__IOREG(CLMA5CTL1_BASE, 0xFFF86804, __READ_WRITE, CLMA5CTL1_t);
__IOREG(CLMA5CMPL_BASE, 0xFFF86808, __READ_WRITE, CLMA5CMPL_t);
__IOREG(CLMA5CMPH_BASE, 0xFFF8680C, __READ_WRITE, CLMA5CMPH_t);
__IOREG(CLMA5PCMD_BASE, 0xFFF86810, __READ_WRITE, CLMA5PCMD_t);
__IOREG(CLMA5PS_BASE, 0xFFF86814, __READ, CLMA5PS_t);
__IOREG(CLMA5EMU0_BASE, 0xFFF86818, __READ_WRITE, CLMA5EMU0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMA5CTL0 CLMA5CTL0_BASE.UINT8
#define CLMA5CTL0_CLMA5CLME CLMA5CTL0_BASE.BIT._CLMA5CLME
#define CLMA5CTL1 CLMA5CTL1_BASE.UINT8
#define CLMA5CTL1_TESENWPRT CLMA5CTL1_BASE.BIT._TESENWPRT
#define CLMA5CMPL CLMA5CMPL_BASE.UINT16
#define CLMA5CMPL_CLMA5CMPL CLMA5CMPL_BASE.BIT._CLMA5CMPL
#define CLMA5CMPH CLMA5CMPH_BASE.UINT16
#define CLMA5CMPH_CLMA5CMPH CLMA5CMPH_BASE.BIT._CLMA5CMPH
#define CLMA5PCMD CLMA5PCMD_BASE.UINT8
#define CLMA5PCMD_CLMA5REG CLMA5PCMD_BASE.BIT._CLMA5REG
#define CLMA5PS CLMA5PS_BASE.UINT8
#define CLMA5PS_CLMA5PRERR CLMA5PS_BASE.BIT._CLMA5PRERR
#define CLMA5EMU0 CLMA5EMU0_BASE.UINT8
#define CLMA5EMU0_CLMA5SLSLW CLMA5EMU0_BASE.BIT._CLMA5SLSLW
#define CLMA5EMU0_CLMA5SLFST CLMA5EMU0_BASE.BIT._CLMA5SLFST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif