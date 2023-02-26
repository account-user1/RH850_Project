#ifndef __DR7F701373_FSGD1B_HEADER__
#define __DR7F701373_FSGD1B_HEADER__



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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID00Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID01Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID06Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID07Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID10Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID11Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT12Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID12Bits_t;

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
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
    uint32 padding20 : 1;
    uint32 _PEID4 : 1;
    uint32 _PEID5 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGD1BPROT13Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1BSPID13Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD1BPROT00Bits_t BIT;
} FSGD1BPROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID00Bits_t BIT;
} FSGD1BSPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT01Bits_t BIT;
} FSGD1BPROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID01Bits_t BIT;
} FSGD1BSPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT06Bits_t BIT;
} FSGD1BPROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID06Bits_t BIT;
} FSGD1BSPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT07Bits_t BIT;
} FSGD1BPROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID07Bits_t BIT;
} FSGD1BSPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT10Bits_t BIT;
} FSGD1BPROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID10Bits_t BIT;
} FSGD1BSPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT11Bits_t BIT;
} FSGD1BPROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID11Bits_t BIT;
} FSGD1BSPID11_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT12Bits_t BIT;
} FSGD1BPROT12_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID12Bits_t BIT;
} FSGD1BSPID12_t;

typedef union
{
    uint32 UINT32;
    FSGD1BPROT13Bits_t BIT;
} FSGD1BPROT13_t;

typedef union
{
    uint32 UINT32;
    FSGD1BSPID13Bits_t BIT;
} FSGD1BSPID13_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD1BPROT00_BASE, 0xFFEE0200, __READ_WRITE, FSGD1BPROT00_t);
__IOREG(FSGD1BSPID00_BASE, 0xFFEE0204, __READ_WRITE, FSGD1BSPID00_t);
__IOREG(FSGD1BPROT01_BASE, 0xFFEE0208, __READ_WRITE, FSGD1BPROT01_t);
__IOREG(FSGD1BSPID01_BASE, 0xFFEE020C, __READ_WRITE, FSGD1BSPID01_t);
__IOREG(FSGD1BPROT06_BASE, 0xFFEE0230, __READ_WRITE, FSGD1BPROT06_t);
__IOREG(FSGD1BSPID06_BASE, 0xFFEE0234, __READ_WRITE, FSGD1BSPID06_t);
__IOREG(FSGD1BPROT07_BASE, 0xFFEE0238, __READ_WRITE, FSGD1BPROT07_t);
__IOREG(FSGD1BSPID07_BASE, 0xFFEE023C, __READ_WRITE, FSGD1BSPID07_t);
__IOREG(FSGD1BPROT10_BASE, 0xFFEE0250, __READ_WRITE, FSGD1BPROT10_t);
__IOREG(FSGD1BSPID10_BASE, 0xFFEE0254, __READ_WRITE, FSGD1BSPID10_t);
__IOREG(FSGD1BPROT11_BASE, 0xFFEE0258, __READ_WRITE, FSGD1BPROT11_t);
__IOREG(FSGD1BSPID11_BASE, 0xFFEE025C, __READ_WRITE, FSGD1BSPID11_t);
__IOREG(FSGD1BPROT12_BASE, 0xFFEE0260, __READ_WRITE, FSGD1BPROT12_t);
__IOREG(FSGD1BSPID12_BASE, 0xFFEE0264, __READ_WRITE, FSGD1BSPID12_t);
__IOREG(FSGD1BPROT13_BASE, 0xFFEE0268, __READ_WRITE, FSGD1BPROT13_t);
__IOREG(FSGD1BSPID13_BASE, 0xFFEE026C, __READ_WRITE, FSGD1BSPID13_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD1BPROT00 FSGD1BPROT00_BASE.UINT32
#define FSGD1BPROT00_PEID1 FSGD1BPROT00_BASE.BIT._PEID1
#define FSGD1BPROT00_PEID2 FSGD1BPROT00_BASE.BIT._PEID2
#define FSGD1BPROT00_PEID4 FSGD1BPROT00_BASE.BIT._PEID4
#define FSGD1BPROT00_PEID5 FSGD1BPROT00_BASE.BIT._PEID5
#define FSGD1BPROT00_LOCK FSGD1BPROT00_BASE.BIT._LOCK
#define FSGD1BSPID00 FSGD1BSPID00_BASE.UINT32
#define FSGD1BSPID00_SPID FSGD1BSPID00_BASE.BIT._SPID
#define FSGD1BPROT01 FSGD1BPROT01_BASE.UINT32
#define FSGD1BPROT01_PEID1 FSGD1BPROT01_BASE.BIT._PEID1
#define FSGD1BPROT01_PEID2 FSGD1BPROT01_BASE.BIT._PEID2
#define FSGD1BPROT01_PEID4 FSGD1BPROT01_BASE.BIT._PEID4
#define FSGD1BPROT01_PEID5 FSGD1BPROT01_BASE.BIT._PEID5
#define FSGD1BPROT01_LOCK FSGD1BPROT01_BASE.BIT._LOCK
#define FSGD1BSPID01 FSGD1BSPID01_BASE.UINT32
#define FSGD1BSPID01_SPID FSGD1BSPID01_BASE.BIT._SPID
#define FSGD1BPROT06 FSGD1BPROT06_BASE.UINT32
#define FSGD1BPROT06_PEID1 FSGD1BPROT06_BASE.BIT._PEID1
#define FSGD1BPROT06_PEID2 FSGD1BPROT06_BASE.BIT._PEID2
#define FSGD1BPROT06_PEID4 FSGD1BPROT06_BASE.BIT._PEID4
#define FSGD1BPROT06_PEID5 FSGD1BPROT06_BASE.BIT._PEID5
#define FSGD1BPROT06_LOCK FSGD1BPROT06_BASE.BIT._LOCK
#define FSGD1BSPID06 FSGD1BSPID06_BASE.UINT32
#define FSGD1BSPID06_SPID FSGD1BSPID06_BASE.BIT._SPID
#define FSGD1BPROT07 FSGD1BPROT07_BASE.UINT32
#define FSGD1BPROT07_PEID1 FSGD1BPROT07_BASE.BIT._PEID1
#define FSGD1BPROT07_PEID2 FSGD1BPROT07_BASE.BIT._PEID2
#define FSGD1BPROT07_PEID4 FSGD1BPROT07_BASE.BIT._PEID4
#define FSGD1BPROT07_PEID5 FSGD1BPROT07_BASE.BIT._PEID5
#define FSGD1BPROT07_LOCK FSGD1BPROT07_BASE.BIT._LOCK
#define FSGD1BSPID07 FSGD1BSPID07_BASE.UINT32
#define FSGD1BSPID07_SPID FSGD1BSPID07_BASE.BIT._SPID
#define FSGD1BPROT10 FSGD1BPROT10_BASE.UINT32
#define FSGD1BPROT10_PEID1 FSGD1BPROT10_BASE.BIT._PEID1
#define FSGD1BPROT10_PEID2 FSGD1BPROT10_BASE.BIT._PEID2
#define FSGD1BPROT10_PEID4 FSGD1BPROT10_BASE.BIT._PEID4
#define FSGD1BPROT10_PEID5 FSGD1BPROT10_BASE.BIT._PEID5
#define FSGD1BPROT10_LOCK FSGD1BPROT10_BASE.BIT._LOCK
#define FSGD1BSPID10 FSGD1BSPID10_BASE.UINT32
#define FSGD1BSPID10_SPID FSGD1BSPID10_BASE.BIT._SPID
#define FSGD1BPROT11 FSGD1BPROT11_BASE.UINT32
#define FSGD1BPROT11_PEID1 FSGD1BPROT11_BASE.BIT._PEID1
#define FSGD1BPROT11_PEID2 FSGD1BPROT11_BASE.BIT._PEID2
#define FSGD1BPROT11_PEID4 FSGD1BPROT11_BASE.BIT._PEID4
#define FSGD1BPROT11_PEID5 FSGD1BPROT11_BASE.BIT._PEID5
#define FSGD1BPROT11_LOCK FSGD1BPROT11_BASE.BIT._LOCK
#define FSGD1BSPID11 FSGD1BSPID11_BASE.UINT32
#define FSGD1BSPID11_SPID FSGD1BSPID11_BASE.BIT._SPID
#define FSGD1BPROT12 FSGD1BPROT12_BASE.UINT32
#define FSGD1BPROT12_PEID1 FSGD1BPROT12_BASE.BIT._PEID1
#define FSGD1BPROT12_PEID2 FSGD1BPROT12_BASE.BIT._PEID2
#define FSGD1BPROT12_PEID4 FSGD1BPROT12_BASE.BIT._PEID4
#define FSGD1BPROT12_PEID5 FSGD1BPROT12_BASE.BIT._PEID5
#define FSGD1BPROT12_LOCK FSGD1BPROT12_BASE.BIT._LOCK
#define FSGD1BSPID12 FSGD1BSPID12_BASE.UINT32
#define FSGD1BSPID12_SPID FSGD1BSPID12_BASE.BIT._SPID
#define FSGD1BPROT13 FSGD1BPROT13_BASE.UINT32
#define FSGD1BPROT13_PEID1 FSGD1BPROT13_BASE.BIT._PEID1
#define FSGD1BPROT13_PEID2 FSGD1BPROT13_BASE.BIT._PEID2
#define FSGD1BPROT13_PEID4 FSGD1BPROT13_BASE.BIT._PEID4
#define FSGD1BPROT13_PEID5 FSGD1BPROT13_BASE.BIT._PEID5
#define FSGD1BPROT13_LOCK FSGD1BPROT13_BASE.BIT._LOCK
#define FSGD1BSPID13 FSGD1BSPID13_BASE.UINT32
#define FSGD1BSPID13_SPID FSGD1BSPID13_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif