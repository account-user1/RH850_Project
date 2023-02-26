#ifndef __DR7F701373_CLMA3_HEADER__
#define __DR7F701373_CLMA3_HEADER__



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
    uint8 _CLMA3CLME : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA3CTL0Bits_t;

typedef struct
{
    uint16 _CLMA3CMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA3CMPLBits_t;

typedef struct
{
    uint16 _CLMA3CMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA3CMPHBits_t;

typedef struct
{
    uint8 _CLMA3REG : 8;
} CLMA3PCMDBits_t;

typedef struct
{
    const uint8 _CLMA3PRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA3PSBits_t;

typedef struct
{
    uint8 _CLMA3SLSLW : 1;
    uint8 _CLMA3SLFST : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA3EMU0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CLMA3CTL0Bits_t BIT;
} CLMA3CTL0_t;

typedef union
{
    uint16 UINT16;
    CLMA3CMPLBits_t BIT;
} CLMA3CMPL_t;

typedef union
{
    uint16 UINT16;
    CLMA3CMPHBits_t BIT;
} CLMA3CMPH_t;

typedef union
{
    uint8 UINT8;
    CLMA3PCMDBits_t BIT;
} CLMA3PCMD_t;

typedef union
{
    uint8 UINT8;
    const CLMA3PSBits_t BIT;
} CLMA3PS_t;

typedef union
{
    uint8 UINT8;
    CLMA3EMU0Bits_t BIT;
} CLMA3EMU0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMA3CTL0_BASE, 0xFFF83400, __READ_WRITE, CLMA3CTL0_t);
__IOREG(CLMA3CMPL_BASE, 0xFFF83408, __READ_WRITE, CLMA3CMPL_t);
__IOREG(CLMA3CMPH_BASE, 0xFFF8340C, __READ_WRITE, CLMA3CMPH_t);
__IOREG(CLMA3PCMD_BASE, 0xFFF83410, __READ_WRITE, CLMA3PCMD_t);
__IOREG(CLMA3PS_BASE, 0xFFF83414, __READ, CLMA3PS_t);
__IOREG(CLMA3EMU0_BASE, 0xFFF83418, __READ_WRITE, CLMA3EMU0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMA3CTL0 CLMA3CTL0_BASE.UINT8
#define CLMA3CTL0_CLMA3CLME CLMA3CTL0_BASE.BIT._CLMA3CLME
#define CLMA3CMPL CLMA3CMPL_BASE.UINT16
#define CLMA3CMPL_CLMA3CMPL CLMA3CMPL_BASE.BIT._CLMA3CMPL
#define CLMA3CMPH CLMA3CMPH_BASE.UINT16
#define CLMA3CMPH_CLMA3CMPH CLMA3CMPH_BASE.BIT._CLMA3CMPH
#define CLMA3PCMD CLMA3PCMD_BASE.UINT8
#define CLMA3PCMD_CLMA3REG CLMA3PCMD_BASE.BIT._CLMA3REG
#define CLMA3PS CLMA3PS_BASE.UINT8
#define CLMA3PS_CLMA3PRERR CLMA3PS_BASE.BIT._CLMA3PRERR
#define CLMA3EMU0 CLMA3EMU0_BASE.UINT8
#define CLMA3EMU0_CLMA3SLSLW CLMA3EMU0_BASE.BIT._CLMA3SLSLW
#define CLMA3EMU0_CLMA3SLFST CLMA3EMU0_BASE.BIT._CLMA3SLFST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif