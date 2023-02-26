#ifndef __DR7F701373_CLMA1_HEADER__
#define __DR7F701373_CLMA1_HEADER__



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
    uint8 _CLMA1CLME : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA1CTL0Bits_t;

typedef struct
{
    uint16 _CLMA1CMPL : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA1CMPLBits_t;

typedef struct
{
    uint16 _CLMA1CMPH : 12;
    uint16 padding12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 padding15 : 1;
} CLMA1CMPHBits_t;

typedef struct
{
    uint8 _CLMA1REG : 8;
} CLMA1PCMDBits_t;

typedef struct
{
    const uint8 _CLMA1PRERR : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA1PSBits_t;

typedef struct
{
    uint8 _CLMA1SLSLW : 1;
    uint8 _CLMA1SLFST : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} CLMA1EMU0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    CLMA1CTL0Bits_t BIT;
} CLMA1CTL0_t;

typedef union
{
    uint16 UINT16;
    CLMA1CMPLBits_t BIT;
} CLMA1CMPL_t;

typedef union
{
    uint16 UINT16;
    CLMA1CMPHBits_t BIT;
} CLMA1CMPH_t;

typedef union
{
    uint8 UINT8;
    CLMA1PCMDBits_t BIT;
} CLMA1PCMD_t;

typedef union
{
    uint8 UINT8;
    const CLMA1PSBits_t BIT;
} CLMA1PS_t;

typedef union
{
    uint8 UINT8;
    CLMA1EMU0Bits_t BIT;
} CLMA1EMU0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(CLMA1CTL0_BASE, 0xFFF83200, __READ_WRITE, CLMA1CTL0_t);
__IOREG(CLMA1CMPL_BASE, 0xFFF83208, __READ_WRITE, CLMA1CMPL_t);
__IOREG(CLMA1CMPH_BASE, 0xFFF8320C, __READ_WRITE, CLMA1CMPH_t);
__IOREG(CLMA1PCMD_BASE, 0xFFF83210, __READ_WRITE, CLMA1PCMD_t);
__IOREG(CLMA1PS_BASE, 0xFFF83214, __READ, CLMA1PS_t);
__IOREG(CLMA1EMU0_BASE, 0xFFF83218, __READ_WRITE, CLMA1EMU0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define CLMA1CTL0 CLMA1CTL0_BASE.UINT8
#define CLMA1CTL0_CLMA1CLME CLMA1CTL0_BASE.BIT._CLMA1CLME
#define CLMA1CMPL CLMA1CMPL_BASE.UINT16
#define CLMA1CMPL_CLMA1CMPL CLMA1CMPL_BASE.BIT._CLMA1CMPL
#define CLMA1CMPH CLMA1CMPH_BASE.UINT16
#define CLMA1CMPH_CLMA1CMPH CLMA1CMPH_BASE.BIT._CLMA1CMPH
#define CLMA1PCMD CLMA1PCMD_BASE.UINT8
#define CLMA1PCMD_CLMA1REG CLMA1PCMD_BASE.BIT._CLMA1REG
#define CLMA1PS CLMA1PS_BASE.UINT8
#define CLMA1PS_CLMA1PRERR CLMA1PS_BASE.BIT._CLMA1PRERR
#define CLMA1EMU0 CLMA1EMU0_BASE.UINT8
#define CLMA1EMU0_CLMA1SLSLW CLMA1EMU0_BASE.BIT._CLMA1SLSLW
#define CLMA1EMU0_CLMA1SLFST CLMA1EMU0_BASE.BIT._CLMA1SLFST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif