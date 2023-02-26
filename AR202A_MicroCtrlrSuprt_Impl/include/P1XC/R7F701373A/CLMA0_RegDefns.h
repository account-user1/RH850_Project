#ifndef __DR7F701373_CLMA0_HEADER__
#define __DR7F701373_CLMA0_HEADER__



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
    uint8 _CLMA0CLME : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA0CTL0Bits_t;

typedef struct
{
    uint16 _CLMA0CMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA0CMPLBits_t;

typedef struct
{
    uint16 _CLMA0CMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA0CMPHBits_t;

typedef struct
{
    uint8 _CLMA0REG : 8;
} CLMA0PCMDBits_t;

typedef struct
{
    const uint8 _CLMA0PRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA0PSBits_t;

typedef struct
{
    uint8 _CLMA0SLSLW : 1;
    uint8 _CLMA0SLFST : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA0EMU0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CLMA0CTL0Bits_t BIT;
} CLMA0CTL0_t;

typedef union
{
    uint16 UINT16;
    CLMA0CMPLBits_t BIT;
} CLMA0CMPL_t;

typedef union
{
    uint16 UINT16;
    CLMA0CMPHBits_t BIT;
} CLMA0CMPH_t;

typedef union
{
    uint8 UINT8;
    CLMA0PCMDBits_t BIT;
} CLMA0PCMD_t;

typedef union
{
    uint8 UINT8;
    const CLMA0PSBits_t BIT;
} CLMA0PS_t;

typedef union
{
    uint8 UINT8;
    CLMA0EMU0Bits_t BIT;
} CLMA0EMU0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMA0CTL0_BASE, 0xFFF83100, __READ_WRITE, CLMA0CTL0_t);
__IOREG(CLMA0CMPL_BASE, 0xFFF83108, __READ_WRITE, CLMA0CMPL_t);
__IOREG(CLMA0CMPH_BASE, 0xFFF8310C, __READ_WRITE, CLMA0CMPH_t);
__IOREG(CLMA0PCMD_BASE, 0xFFF83110, __READ_WRITE, CLMA0PCMD_t);
__IOREG(CLMA0PS_BASE, 0xFFF83114, __READ, CLMA0PS_t);
__IOREG(CLMA0EMU0_BASE, 0xFFF83118, __READ_WRITE, CLMA0EMU0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMA0CTL0 CLMA0CTL0_BASE.UINT8
#define CLMA0CTL0_CLMA0CLME CLMA0CTL0_BASE.BIT._CLMA0CLME
#define CLMA0CMPL CLMA0CMPL_BASE.UINT16
#define CLMA0CMPL_CLMA0CMPL CLMA0CMPL_BASE.BIT._CLMA0CMPL
#define CLMA0CMPH CLMA0CMPH_BASE.UINT16
#define CLMA0CMPH_CLMA0CMPH CLMA0CMPH_BASE.BIT._CLMA0CMPH
#define CLMA0PCMD CLMA0PCMD_BASE.UINT8
#define CLMA0PCMD_CLMA0REG CLMA0PCMD_BASE.BIT._CLMA0REG
#define CLMA0PS CLMA0PS_BASE.UINT8
#define CLMA0PS_CLMA0PRERR CLMA0PS_BASE.BIT._CLMA0PRERR
#define CLMA0EMU0 CLMA0EMU0_BASE.UINT8
#define CLMA0EMU0_CLMA0SLSLW CLMA0EMU0_BASE.BIT._CLMA0SLSLW
#define CLMA0EMU0_CLMA0SLFST CLMA0EMU0_BASE.BIT._CLMA0SLFST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif