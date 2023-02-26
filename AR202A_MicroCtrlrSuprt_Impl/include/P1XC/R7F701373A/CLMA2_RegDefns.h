#ifndef __DR7F701373_CLMA2_HEADER__
#define __DR7F701373_CLMA2_HEADER__



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
    uint8 _CLMA2CLME : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA2CTL0Bits_t;

typedef struct
{
    uint16 _CLMA2CMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA2CMPLBits_t;

typedef struct
{
    uint16 _CLMA2CMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA2CMPHBits_t;

typedef struct
{
    uint8 _CLMA2REG : 8;
} CLMA2PCMDBits_t;

typedef struct
{
    const uint8 _CLMA2PRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA2PSBits_t;

typedef struct
{
    uint8 _CLMA2SLSLW : 1;
    uint8 _CLMA2SLFST : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA2EMU0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CLMA2CTL0Bits_t BIT;
} CLMA2CTL0_t;

typedef union
{
    uint16 UINT16;
    CLMA2CMPLBits_t BIT;
} CLMA2CMPL_t;

typedef union
{
    uint16 UINT16;
    CLMA2CMPHBits_t BIT;
} CLMA2CMPH_t;

typedef union
{
    uint8 UINT8;
    CLMA2PCMDBits_t BIT;
} CLMA2PCMD_t;

typedef union
{
    uint8 UINT8;
    const CLMA2PSBits_t BIT;
} CLMA2PS_t;

typedef union
{
    uint8 UINT8;
    CLMA2EMU0Bits_t BIT;
} CLMA2EMU0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMA2CTL0_BASE, 0xFFF83300, __READ_WRITE, CLMA2CTL0_t);
__IOREG(CLMA2CMPL_BASE, 0xFFF83308, __READ_WRITE, CLMA2CMPL_t);
__IOREG(CLMA2CMPH_BASE, 0xFFF8330C, __READ_WRITE, CLMA2CMPH_t);
__IOREG(CLMA2PCMD_BASE, 0xFFF83310, __READ_WRITE, CLMA2PCMD_t);
__IOREG(CLMA2PS_BASE, 0xFFF83314, __READ, CLMA2PS_t);
__IOREG(CLMA2EMU0_BASE, 0xFFF83318, __READ_WRITE, CLMA2EMU0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMA2CTL0 CLMA2CTL0_BASE.UINT8
#define CLMA2CTL0_CLMA2CLME CLMA2CTL0_BASE.BIT._CLMA2CLME
#define CLMA2CMPL CLMA2CMPL_BASE.UINT16
#define CLMA2CMPL_CLMA2CMPL CLMA2CMPL_BASE.BIT._CLMA2CMPL
#define CLMA2CMPH CLMA2CMPH_BASE.UINT16
#define CLMA2CMPH_CLMA2CMPH CLMA2CMPH_BASE.BIT._CLMA2CMPH
#define CLMA2PCMD CLMA2PCMD_BASE.UINT8
#define CLMA2PCMD_CLMA2REG CLMA2PCMD_BASE.BIT._CLMA2REG
#define CLMA2PS CLMA2PS_BASE.UINT8
#define CLMA2PS_CLMA2PRERR CLMA2PS_BASE.BIT._CLMA2PRERR
#define CLMA2EMU0 CLMA2EMU0_BASE.UINT8
#define CLMA2EMU0_CLMA2SLSLW CLMA2EMU0_BASE.BIT._CLMA2SLSLW
#define CLMA2EMU0_CLMA2SLFST CLMA2EMU0_BASE.BIT._CLMA2SLFST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif