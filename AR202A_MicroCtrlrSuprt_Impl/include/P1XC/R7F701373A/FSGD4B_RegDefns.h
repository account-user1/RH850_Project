#ifndef __DR7F701373_FSGD4B_HEADER__
#define __DR7F701373_FSGD4B_HEADER__



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
} FSGD4BPROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID00Bits_t;

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
} FSGD4BPROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID01Bits_t;

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
} FSGD4BPROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID02Bits_t;

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
} FSGD4BPROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID03Bits_t;

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
} FSGD4BPROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID04Bits_t;

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
} FSGD4BPROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID05Bits_t;

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
} FSGD4BPROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID06Bits_t;

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
} FSGD4BPROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID07Bits_t;

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
} FSGD4BPROT08Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID08Bits_t;

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
} FSGD4BPROT09Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID09Bits_t;

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
} FSGD4BPROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID10Bits_t;

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
} FSGD4BPROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID11Bits_t;

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
} FSGD4BPROT12Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID12Bits_t;

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
} FSGD4BPROT13Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4BSPID13Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD4BPROT00Bits_t BIT;
} FSGD4BPROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID00Bits_t BIT;
} FSGD4BSPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT01Bits_t BIT;
} FSGD4BPROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID01Bits_t BIT;
} FSGD4BSPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT02Bits_t BIT;
} FSGD4BPROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID02Bits_t BIT;
} FSGD4BSPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT03Bits_t BIT;
} FSGD4BPROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID03Bits_t BIT;
} FSGD4BSPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT04Bits_t BIT;
} FSGD4BPROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID04Bits_t BIT;
} FSGD4BSPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT05Bits_t BIT;
} FSGD4BPROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID05Bits_t BIT;
} FSGD4BSPID05_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT06Bits_t BIT;
} FSGD4BPROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID06Bits_t BIT;
} FSGD4BSPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT07Bits_t BIT;
} FSGD4BPROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID07Bits_t BIT;
} FSGD4BSPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT08Bits_t BIT;
} FSGD4BPROT08_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID08Bits_t BIT;
} FSGD4BSPID08_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT09Bits_t BIT;
} FSGD4BPROT09_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID09Bits_t BIT;
} FSGD4BSPID09_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT10Bits_t BIT;
} FSGD4BPROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID10Bits_t BIT;
} FSGD4BSPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT11Bits_t BIT;
} FSGD4BPROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID11Bits_t BIT;
} FSGD4BSPID11_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT12Bits_t BIT;
} FSGD4BPROT12_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID12Bits_t BIT;
} FSGD4BSPID12_t;

typedef union
{
    uint32 UINT32;
    FSGD4BPROT13Bits_t BIT;
} FSGD4BPROT13_t;

typedef union
{
    uint32 UINT32;
    FSGD4BSPID13Bits_t BIT;
} FSGD4BSPID13_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD4BPROT00_BASE, 0xFFF90200, __READ_WRITE, FSGD4BPROT00_t);
__IOREG(FSGD4BSPID00_BASE, 0xFFF90204, __READ_WRITE, FSGD4BSPID00_t);
__IOREG(FSGD4BPROT01_BASE, 0xFFF90208, __READ_WRITE, FSGD4BPROT01_t);
__IOREG(FSGD4BSPID01_BASE, 0xFFF9020C, __READ_WRITE, FSGD4BSPID01_t);
__IOREG(FSGD4BPROT02_BASE, 0xFFF90210, __READ_WRITE, FSGD4BPROT02_t);
__IOREG(FSGD4BSPID02_BASE, 0xFFF90214, __READ_WRITE, FSGD4BSPID02_t);
__IOREG(FSGD4BPROT03_BASE, 0xFFF90218, __READ_WRITE, FSGD4BPROT03_t);
__IOREG(FSGD4BSPID03_BASE, 0xFFF9021C, __READ_WRITE, FSGD4BSPID03_t);
__IOREG(FSGD4BPROT04_BASE, 0xFFF90220, __READ_WRITE, FSGD4BPROT04_t);
__IOREG(FSGD4BSPID04_BASE, 0xFFF90224, __READ_WRITE, FSGD4BSPID04_t);
__IOREG(FSGD4BPROT05_BASE, 0xFFF90228, __READ_WRITE, FSGD4BPROT05_t);
__IOREG(FSGD4BSPID05_BASE, 0xFFF9022C, __READ_WRITE, FSGD4BSPID05_t);
__IOREG(FSGD4BPROT06_BASE, 0xFFF90230, __READ_WRITE, FSGD4BPROT06_t);
__IOREG(FSGD4BSPID06_BASE, 0xFFF90234, __READ_WRITE, FSGD4BSPID06_t);
__IOREG(FSGD4BPROT07_BASE, 0xFFF90238, __READ_WRITE, FSGD4BPROT07_t);
__IOREG(FSGD4BSPID07_BASE, 0xFFF9023C, __READ_WRITE, FSGD4BSPID07_t);
__IOREG(FSGD4BPROT08_BASE, 0xFFF90240, __READ_WRITE, FSGD4BPROT08_t);
__IOREG(FSGD4BSPID08_BASE, 0xFFF90244, __READ_WRITE, FSGD4BSPID08_t);
__IOREG(FSGD4BPROT09_BASE, 0xFFF90248, __READ_WRITE, FSGD4BPROT09_t);
__IOREG(FSGD4BSPID09_BASE, 0xFFF9024C, __READ_WRITE, FSGD4BSPID09_t);
__IOREG(FSGD4BPROT10_BASE, 0xFFF90250, __READ_WRITE, FSGD4BPROT10_t);
__IOREG(FSGD4BSPID10_BASE, 0xFFF90254, __READ_WRITE, FSGD4BSPID10_t);
__IOREG(FSGD4BPROT11_BASE, 0xFFF90258, __READ_WRITE, FSGD4BPROT11_t);
__IOREG(FSGD4BSPID11_BASE, 0xFFF9025C, __READ_WRITE, FSGD4BSPID11_t);
__IOREG(FSGD4BPROT12_BASE, 0xFFF90260, __READ_WRITE, FSGD4BPROT12_t);
__IOREG(FSGD4BSPID12_BASE, 0xFFF90264, __READ_WRITE, FSGD4BSPID12_t);
__IOREG(FSGD4BPROT13_BASE, 0xFFF90268, __READ_WRITE, FSGD4BPROT13_t);
__IOREG(FSGD4BSPID13_BASE, 0xFFF9026C, __READ_WRITE, FSGD4BSPID13_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD4BPROT00 FSGD4BPROT00_BASE.UINT32
#define FSGD4BPROT00_PEID1 FSGD4BPROT00_BASE.BIT._PEID1
#define FSGD4BPROT00_PEID2 FSGD4BPROT00_BASE.BIT._PEID2
#define FSGD4BPROT00_PEID4 FSGD4BPROT00_BASE.BIT._PEID4
#define FSGD4BPROT00_PEID5 FSGD4BPROT00_BASE.BIT._PEID5
#define FSGD4BPROT00_LOCK FSGD4BPROT00_BASE.BIT._LOCK
#define FSGD4BSPID00 FSGD4BSPID00_BASE.UINT32
#define FSGD4BSPID00_SPID FSGD4BSPID00_BASE.BIT._SPID
#define FSGD4BPROT01 FSGD4BPROT01_BASE.UINT32
#define FSGD4BPROT01_PEID1 FSGD4BPROT01_BASE.BIT._PEID1
#define FSGD4BPROT01_PEID2 FSGD4BPROT01_BASE.BIT._PEID2
#define FSGD4BPROT01_PEID4 FSGD4BPROT01_BASE.BIT._PEID4
#define FSGD4BPROT01_PEID5 FSGD4BPROT01_BASE.BIT._PEID5
#define FSGD4BPROT01_LOCK FSGD4BPROT01_BASE.BIT._LOCK
#define FSGD4BSPID01 FSGD4BSPID01_BASE.UINT32
#define FSGD4BSPID01_SPID FSGD4BSPID01_BASE.BIT._SPID
#define FSGD4BPROT02 FSGD4BPROT02_BASE.UINT32
#define FSGD4BPROT02_PEID1 FSGD4BPROT02_BASE.BIT._PEID1
#define FSGD4BPROT02_PEID2 FSGD4BPROT02_BASE.BIT._PEID2
#define FSGD4BPROT02_PEID4 FSGD4BPROT02_BASE.BIT._PEID4
#define FSGD4BPROT02_PEID5 FSGD4BPROT02_BASE.BIT._PEID5
#define FSGD4BPROT02_LOCK FSGD4BPROT02_BASE.BIT._LOCK
#define FSGD4BSPID02 FSGD4BSPID02_BASE.UINT32
#define FSGD4BSPID02_SPID FSGD4BSPID02_BASE.BIT._SPID
#define FSGD4BPROT03 FSGD4BPROT03_BASE.UINT32
#define FSGD4BPROT03_PEID1 FSGD4BPROT03_BASE.BIT._PEID1
#define FSGD4BPROT03_PEID2 FSGD4BPROT03_BASE.BIT._PEID2
#define FSGD4BPROT03_PEID4 FSGD4BPROT03_BASE.BIT._PEID4
#define FSGD4BPROT03_PEID5 FSGD4BPROT03_BASE.BIT._PEID5
#define FSGD4BPROT03_LOCK FSGD4BPROT03_BASE.BIT._LOCK
#define FSGD4BSPID03 FSGD4BSPID03_BASE.UINT32
#define FSGD4BSPID03_SPID FSGD4BSPID03_BASE.BIT._SPID
#define FSGD4BPROT04 FSGD4BPROT04_BASE.UINT32
#define FSGD4BPROT04_PEID1 FSGD4BPROT04_BASE.BIT._PEID1
#define FSGD4BPROT04_PEID2 FSGD4BPROT04_BASE.BIT._PEID2
#define FSGD4BPROT04_PEID4 FSGD4BPROT04_BASE.BIT._PEID4
#define FSGD4BPROT04_PEID5 FSGD4BPROT04_BASE.BIT._PEID5
#define FSGD4BPROT04_LOCK FSGD4BPROT04_BASE.BIT._LOCK
#define FSGD4BSPID04 FSGD4BSPID04_BASE.UINT32
#define FSGD4BSPID04_SPID FSGD4BSPID04_BASE.BIT._SPID
#define FSGD4BPROT05 FSGD4BPROT05_BASE.UINT32
#define FSGD4BPROT05_PEID1 FSGD4BPROT05_BASE.BIT._PEID1
#define FSGD4BPROT05_PEID2 FSGD4BPROT05_BASE.BIT._PEID2
#define FSGD4BPROT05_PEID4 FSGD4BPROT05_BASE.BIT._PEID4
#define FSGD4BPROT05_PEID5 FSGD4BPROT05_BASE.BIT._PEID5
#define FSGD4BPROT05_LOCK FSGD4BPROT05_BASE.BIT._LOCK
#define FSGD4BSPID05 FSGD4BSPID05_BASE.UINT32
#define FSGD4BSPID05_SPID FSGD4BSPID05_BASE.BIT._SPID
#define FSGD4BPROT06 FSGD4BPROT06_BASE.UINT32
#define FSGD4BPROT06_PEID1 FSGD4BPROT06_BASE.BIT._PEID1
#define FSGD4BPROT06_PEID2 FSGD4BPROT06_BASE.BIT._PEID2
#define FSGD4BPROT06_PEID4 FSGD4BPROT06_BASE.BIT._PEID4
#define FSGD4BPROT06_PEID5 FSGD4BPROT06_BASE.BIT._PEID5
#define FSGD4BPROT06_LOCK FSGD4BPROT06_BASE.BIT._LOCK
#define FSGD4BSPID06 FSGD4BSPID06_BASE.UINT32
#define FSGD4BSPID06_SPID FSGD4BSPID06_BASE.BIT._SPID
#define FSGD4BPROT07 FSGD4BPROT07_BASE.UINT32
#define FSGD4BPROT07_PEID1 FSGD4BPROT07_BASE.BIT._PEID1
#define FSGD4BPROT07_PEID2 FSGD4BPROT07_BASE.BIT._PEID2
#define FSGD4BPROT07_PEID4 FSGD4BPROT07_BASE.BIT._PEID4
#define FSGD4BPROT07_PEID5 FSGD4BPROT07_BASE.BIT._PEID5
#define FSGD4BPROT07_LOCK FSGD4BPROT07_BASE.BIT._LOCK
#define FSGD4BSPID07 FSGD4BSPID07_BASE.UINT32
#define FSGD4BSPID07_SPID FSGD4BSPID07_BASE.BIT._SPID
#define FSGD4BPROT08 FSGD4BPROT08_BASE.UINT32
#define FSGD4BPROT08_PEID1 FSGD4BPROT08_BASE.BIT._PEID1
#define FSGD4BPROT08_PEID2 FSGD4BPROT08_BASE.BIT._PEID2
#define FSGD4BPROT08_PEID4 FSGD4BPROT08_BASE.BIT._PEID4
#define FSGD4BPROT08_PEID5 FSGD4BPROT08_BASE.BIT._PEID5
#define FSGD4BPROT08_LOCK FSGD4BPROT08_BASE.BIT._LOCK
#define FSGD4BSPID08 FSGD4BSPID08_BASE.UINT32
#define FSGD4BSPID08_SPID FSGD4BSPID08_BASE.BIT._SPID
#define FSGD4BPROT09 FSGD4BPROT09_BASE.UINT32
#define FSGD4BPROT09_PEID1 FSGD4BPROT09_BASE.BIT._PEID1
#define FSGD4BPROT09_PEID2 FSGD4BPROT09_BASE.BIT._PEID2
#define FSGD4BPROT09_PEID4 FSGD4BPROT09_BASE.BIT._PEID4
#define FSGD4BPROT09_PEID5 FSGD4BPROT09_BASE.BIT._PEID5
#define FSGD4BPROT09_LOCK FSGD4BPROT09_BASE.BIT._LOCK
#define FSGD4BSPID09 FSGD4BSPID09_BASE.UINT32
#define FSGD4BSPID09_SPID FSGD4BSPID09_BASE.BIT._SPID
#define FSGD4BPROT10 FSGD4BPROT10_BASE.UINT32
#define FSGD4BPROT10_PEID1 FSGD4BPROT10_BASE.BIT._PEID1
#define FSGD4BPROT10_PEID2 FSGD4BPROT10_BASE.BIT._PEID2
#define FSGD4BPROT10_PEID4 FSGD4BPROT10_BASE.BIT._PEID4
#define FSGD4BPROT10_PEID5 FSGD4BPROT10_BASE.BIT._PEID5
#define FSGD4BPROT10_LOCK FSGD4BPROT10_BASE.BIT._LOCK
#define FSGD4BSPID10 FSGD4BSPID10_BASE.UINT32
#define FSGD4BSPID10_SPID FSGD4BSPID10_BASE.BIT._SPID
#define FSGD4BPROT11 FSGD4BPROT11_BASE.UINT32
#define FSGD4BPROT11_PEID1 FSGD4BPROT11_BASE.BIT._PEID1
#define FSGD4BPROT11_PEID2 FSGD4BPROT11_BASE.BIT._PEID2
#define FSGD4BPROT11_PEID4 FSGD4BPROT11_BASE.BIT._PEID4
#define FSGD4BPROT11_PEID5 FSGD4BPROT11_BASE.BIT._PEID5
#define FSGD4BPROT11_LOCK FSGD4BPROT11_BASE.BIT._LOCK
#define FSGD4BSPID11 FSGD4BSPID11_BASE.UINT32
#define FSGD4BSPID11_SPID FSGD4BSPID11_BASE.BIT._SPID
#define FSGD4BPROT12 FSGD4BPROT12_BASE.UINT32
#define FSGD4BPROT12_PEID1 FSGD4BPROT12_BASE.BIT._PEID1
#define FSGD4BPROT12_PEID2 FSGD4BPROT12_BASE.BIT._PEID2
#define FSGD4BPROT12_PEID4 FSGD4BPROT12_BASE.BIT._PEID4
#define FSGD4BPROT12_PEID5 FSGD4BPROT12_BASE.BIT._PEID5
#define FSGD4BPROT12_LOCK FSGD4BPROT12_BASE.BIT._LOCK
#define FSGD4BSPID12 FSGD4BSPID12_BASE.UINT32
#define FSGD4BSPID12_SPID FSGD4BSPID12_BASE.BIT._SPID
#define FSGD4BPROT13 FSGD4BPROT13_BASE.UINT32
#define FSGD4BPROT13_PEID1 FSGD4BPROT13_BASE.BIT._PEID1
#define FSGD4BPROT13_PEID2 FSGD4BPROT13_BASE.BIT._PEID2
#define FSGD4BPROT13_PEID4 FSGD4BPROT13_BASE.BIT._PEID4
#define FSGD4BPROT13_PEID5 FSGD4BPROT13_BASE.BIT._PEID5
#define FSGD4BPROT13_LOCK FSGD4BPROT13_BASE.BIT._LOCK
#define FSGD4BSPID13 FSGD4BSPID13_BASE.UINT32
#define FSGD4BSPID13_SPID FSGD4BSPID13_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif