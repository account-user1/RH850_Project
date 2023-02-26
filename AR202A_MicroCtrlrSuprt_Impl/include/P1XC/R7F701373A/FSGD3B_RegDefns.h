#ifndef __DR7F701373_FSGD3B_HEADER__
#define __DR7F701373_FSGD3B_HEADER__



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
} FSGD3BPROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID00Bits_t;

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
} FSGD3BPROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID01Bits_t;

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
} FSGD3BPROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID02Bits_t;

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
} FSGD3BPROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID03Bits_t;

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
} FSGD3BPROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID04Bits_t;

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
} FSGD3BPROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID05Bits_t;

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
} FSGD3BPROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID06Bits_t;

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
} FSGD3BPROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID07Bits_t;

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
} FSGD3BPROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID10Bits_t;

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
} FSGD3BPROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID11Bits_t;

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
} FSGD3BPROT12Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID12Bits_t;

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
} FSGD3BPROT13Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3BSPID13Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD3BPROT00Bits_t BIT;
} FSGD3BPROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID00Bits_t BIT;
} FSGD3BSPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT01Bits_t BIT;
} FSGD3BPROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID01Bits_t BIT;
} FSGD3BSPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT02Bits_t BIT;
} FSGD3BPROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID02Bits_t BIT;
} FSGD3BSPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT03Bits_t BIT;
} FSGD3BPROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID03Bits_t BIT;
} FSGD3BSPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT04Bits_t BIT;
} FSGD3BPROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID04Bits_t BIT;
} FSGD3BSPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT05Bits_t BIT;
} FSGD3BPROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID05Bits_t BIT;
} FSGD3BSPID05_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT06Bits_t BIT;
} FSGD3BPROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID06Bits_t BIT;
} FSGD3BSPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT07Bits_t BIT;
} FSGD3BPROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID07Bits_t BIT;
} FSGD3BSPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT10Bits_t BIT;
} FSGD3BPROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID10Bits_t BIT;
} FSGD3BSPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT11Bits_t BIT;
} FSGD3BPROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID11Bits_t BIT;
} FSGD3BSPID11_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT12Bits_t BIT;
} FSGD3BPROT12_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID12Bits_t BIT;
} FSGD3BSPID12_t;

typedef union
{
    uint32 UINT32;
    FSGD3BPROT13Bits_t BIT;
} FSGD3BPROT13_t;

typedef union
{
    uint32 UINT32;
    FSGD3BSPID13Bits_t BIT;
} FSGD3BSPID13_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD3BPROT00_BASE, 0xFFF94200, __READ_WRITE, FSGD3BPROT00_t);
__IOREG(FSGD3BSPID00_BASE, 0xFFF94204, __READ_WRITE, FSGD3BSPID00_t);
__IOREG(FSGD3BPROT01_BASE, 0xFFF94208, __READ_WRITE, FSGD3BPROT01_t);
__IOREG(FSGD3BSPID01_BASE, 0xFFF9420C, __READ_WRITE, FSGD3BSPID01_t);
__IOREG(FSGD3BPROT02_BASE, 0xFFF94210, __READ_WRITE, FSGD3BPROT02_t);
__IOREG(FSGD3BSPID02_BASE, 0xFFF94214, __READ_WRITE, FSGD3BSPID02_t);
__IOREG(FSGD3BPROT03_BASE, 0xFFF94218, __READ_WRITE, FSGD3BPROT03_t);
__IOREG(FSGD3BSPID03_BASE, 0xFFF9421C, __READ_WRITE, FSGD3BSPID03_t);
__IOREG(FSGD3BPROT04_BASE, 0xFFF94220, __READ_WRITE, FSGD3BPROT04_t);
__IOREG(FSGD3BSPID04_BASE, 0xFFF94224, __READ_WRITE, FSGD3BSPID04_t);
__IOREG(FSGD3BPROT05_BASE, 0xFFF94228, __READ_WRITE, FSGD3BPROT05_t);
__IOREG(FSGD3BSPID05_BASE, 0xFFF9422C, __READ_WRITE, FSGD3BSPID05_t);
__IOREG(FSGD3BPROT06_BASE, 0xFFF94230, __READ_WRITE, FSGD3BPROT06_t);
__IOREG(FSGD3BSPID06_BASE, 0xFFF94234, __READ_WRITE, FSGD3BSPID06_t);
__IOREG(FSGD3BPROT07_BASE, 0xFFF94238, __READ_WRITE, FSGD3BPROT07_t);
__IOREG(FSGD3BSPID07_BASE, 0xFFF9423C, __READ_WRITE, FSGD3BSPID07_t);
__IOREG(FSGD3BPROT10_BASE, 0xFFF94250, __READ_WRITE, FSGD3BPROT10_t);
__IOREG(FSGD3BSPID10_BASE, 0xFFF94254, __READ_WRITE, FSGD3BSPID10_t);
__IOREG(FSGD3BPROT11_BASE, 0xFFF94258, __READ_WRITE, FSGD3BPROT11_t);
__IOREG(FSGD3BSPID11_BASE, 0xFFF9425C, __READ_WRITE, FSGD3BSPID11_t);
__IOREG(FSGD3BPROT12_BASE, 0xFFF94260, __READ_WRITE, FSGD3BPROT12_t);
__IOREG(FSGD3BSPID12_BASE, 0xFFF94264, __READ_WRITE, FSGD3BSPID12_t);
__IOREG(FSGD3BPROT13_BASE, 0xFFF94268, __READ_WRITE, FSGD3BPROT13_t);
__IOREG(FSGD3BSPID13_BASE, 0xFFF9426C, __READ_WRITE, FSGD3BSPID13_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD3BPROT00 FSGD3BPROT00_BASE.UINT32
#define FSGD3BPROT00_PEID1 FSGD3BPROT00_BASE.BIT._PEID1
#define FSGD3BPROT00_PEID2 FSGD3BPROT00_BASE.BIT._PEID2
#define FSGD3BPROT00_PEID4 FSGD3BPROT00_BASE.BIT._PEID4
#define FSGD3BPROT00_PEID5 FSGD3BPROT00_BASE.BIT._PEID5
#define FSGD3BPROT00_LOCK FSGD3BPROT00_BASE.BIT._LOCK
#define FSGD3BSPID00 FSGD3BSPID00_BASE.UINT32
#define FSGD3BSPID00_SPID FSGD3BSPID00_BASE.BIT._SPID
#define FSGD3BPROT01 FSGD3BPROT01_BASE.UINT32
#define FSGD3BPROT01_PEID1 FSGD3BPROT01_BASE.BIT._PEID1
#define FSGD3BPROT01_PEID2 FSGD3BPROT01_BASE.BIT._PEID2
#define FSGD3BPROT01_PEID4 FSGD3BPROT01_BASE.BIT._PEID4
#define FSGD3BPROT01_PEID5 FSGD3BPROT01_BASE.BIT._PEID5
#define FSGD3BPROT01_LOCK FSGD3BPROT01_BASE.BIT._LOCK
#define FSGD3BSPID01 FSGD3BSPID01_BASE.UINT32
#define FSGD3BSPID01_SPID FSGD3BSPID01_BASE.BIT._SPID
#define FSGD3BPROT02 FSGD3BPROT02_BASE.UINT32
#define FSGD3BPROT02_PEID1 FSGD3BPROT02_BASE.BIT._PEID1
#define FSGD3BPROT02_PEID2 FSGD3BPROT02_BASE.BIT._PEID2
#define FSGD3BPROT02_PEID4 FSGD3BPROT02_BASE.BIT._PEID4
#define FSGD3BPROT02_PEID5 FSGD3BPROT02_BASE.BIT._PEID5
#define FSGD3BPROT02_LOCK FSGD3BPROT02_BASE.BIT._LOCK
#define FSGD3BSPID02 FSGD3BSPID02_BASE.UINT32
#define FSGD3BSPID02_SPID FSGD3BSPID02_BASE.BIT._SPID
#define FSGD3BPROT03 FSGD3BPROT03_BASE.UINT32
#define FSGD3BPROT03_PEID1 FSGD3BPROT03_BASE.BIT._PEID1
#define FSGD3BPROT03_PEID2 FSGD3BPROT03_BASE.BIT._PEID2
#define FSGD3BPROT03_PEID4 FSGD3BPROT03_BASE.BIT._PEID4
#define FSGD3BPROT03_PEID5 FSGD3BPROT03_BASE.BIT._PEID5
#define FSGD3BPROT03_LOCK FSGD3BPROT03_BASE.BIT._LOCK
#define FSGD3BSPID03 FSGD3BSPID03_BASE.UINT32
#define FSGD3BSPID03_SPID FSGD3BSPID03_BASE.BIT._SPID
#define FSGD3BPROT04 FSGD3BPROT04_BASE.UINT32
#define FSGD3BPROT04_PEID1 FSGD3BPROT04_BASE.BIT._PEID1
#define FSGD3BPROT04_PEID2 FSGD3BPROT04_BASE.BIT._PEID2
#define FSGD3BPROT04_PEID4 FSGD3BPROT04_BASE.BIT._PEID4
#define FSGD3BPROT04_PEID5 FSGD3BPROT04_BASE.BIT._PEID5
#define FSGD3BPROT04_LOCK FSGD3BPROT04_BASE.BIT._LOCK
#define FSGD3BSPID04 FSGD3BSPID04_BASE.UINT32
#define FSGD3BSPID04_SPID FSGD3BSPID04_BASE.BIT._SPID
#define FSGD3BPROT05 FSGD3BPROT05_BASE.UINT32
#define FSGD3BPROT05_PEID1 FSGD3BPROT05_BASE.BIT._PEID1
#define FSGD3BPROT05_PEID2 FSGD3BPROT05_BASE.BIT._PEID2
#define FSGD3BPROT05_PEID4 FSGD3BPROT05_BASE.BIT._PEID4
#define FSGD3BPROT05_PEID5 FSGD3BPROT05_BASE.BIT._PEID5
#define FSGD3BPROT05_LOCK FSGD3BPROT05_BASE.BIT._LOCK
#define FSGD3BSPID05 FSGD3BSPID05_BASE.UINT32
#define FSGD3BSPID05_SPID FSGD3BSPID05_BASE.BIT._SPID
#define FSGD3BPROT06 FSGD3BPROT06_BASE.UINT32
#define FSGD3BPROT06_PEID1 FSGD3BPROT06_BASE.BIT._PEID1
#define FSGD3BPROT06_PEID2 FSGD3BPROT06_BASE.BIT._PEID2
#define FSGD3BPROT06_PEID4 FSGD3BPROT06_BASE.BIT._PEID4
#define FSGD3BPROT06_PEID5 FSGD3BPROT06_BASE.BIT._PEID5
#define FSGD3BPROT06_LOCK FSGD3BPROT06_BASE.BIT._LOCK
#define FSGD3BSPID06 FSGD3BSPID06_BASE.UINT32
#define FSGD3BSPID06_SPID FSGD3BSPID06_BASE.BIT._SPID
#define FSGD3BPROT07 FSGD3BPROT07_BASE.UINT32
#define FSGD3BPROT07_PEID1 FSGD3BPROT07_BASE.BIT._PEID1
#define FSGD3BPROT07_PEID2 FSGD3BPROT07_BASE.BIT._PEID2
#define FSGD3BPROT07_PEID4 FSGD3BPROT07_BASE.BIT._PEID4
#define FSGD3BPROT07_PEID5 FSGD3BPROT07_BASE.BIT._PEID5
#define FSGD3BPROT07_LOCK FSGD3BPROT07_BASE.BIT._LOCK
#define FSGD3BSPID07 FSGD3BSPID07_BASE.UINT32
#define FSGD3BSPID07_SPID FSGD3BSPID07_BASE.BIT._SPID
#define FSGD3BPROT10 FSGD3BPROT10_BASE.UINT32
#define FSGD3BPROT10_PEID1 FSGD3BPROT10_BASE.BIT._PEID1
#define FSGD3BPROT10_PEID2 FSGD3BPROT10_BASE.BIT._PEID2
#define FSGD3BPROT10_PEID4 FSGD3BPROT10_BASE.BIT._PEID4
#define FSGD3BPROT10_PEID5 FSGD3BPROT10_BASE.BIT._PEID5
#define FSGD3BPROT10_LOCK FSGD3BPROT10_BASE.BIT._LOCK
#define FSGD3BSPID10 FSGD3BSPID10_BASE.UINT32
#define FSGD3BSPID10_SPID FSGD3BSPID10_BASE.BIT._SPID
#define FSGD3BPROT11 FSGD3BPROT11_BASE.UINT32
#define FSGD3BPROT11_PEID1 FSGD3BPROT11_BASE.BIT._PEID1
#define FSGD3BPROT11_PEID2 FSGD3BPROT11_BASE.BIT._PEID2
#define FSGD3BPROT11_PEID4 FSGD3BPROT11_BASE.BIT._PEID4
#define FSGD3BPROT11_PEID5 FSGD3BPROT11_BASE.BIT._PEID5
#define FSGD3BPROT11_LOCK FSGD3BPROT11_BASE.BIT._LOCK
#define FSGD3BSPID11 FSGD3BSPID11_BASE.UINT32
#define FSGD3BSPID11_SPID FSGD3BSPID11_BASE.BIT._SPID
#define FSGD3BPROT12 FSGD3BPROT12_BASE.UINT32
#define FSGD3BPROT12_PEID1 FSGD3BPROT12_BASE.BIT._PEID1
#define FSGD3BPROT12_PEID2 FSGD3BPROT12_BASE.BIT._PEID2
#define FSGD3BPROT12_PEID4 FSGD3BPROT12_BASE.BIT._PEID4
#define FSGD3BPROT12_PEID5 FSGD3BPROT12_BASE.BIT._PEID5
#define FSGD3BPROT12_LOCK FSGD3BPROT12_BASE.BIT._LOCK
#define FSGD3BSPID12 FSGD3BSPID12_BASE.UINT32
#define FSGD3BSPID12_SPID FSGD3BSPID12_BASE.BIT._SPID
#define FSGD3BPROT13 FSGD3BPROT13_BASE.UINT32
#define FSGD3BPROT13_PEID1 FSGD3BPROT13_BASE.BIT._PEID1
#define FSGD3BPROT13_PEID2 FSGD3BPROT13_BASE.BIT._PEID2
#define FSGD3BPROT13_PEID4 FSGD3BPROT13_BASE.BIT._PEID4
#define FSGD3BPROT13_PEID5 FSGD3BPROT13_BASE.BIT._PEID5
#define FSGD3BPROT13_LOCK FSGD3BPROT13_BASE.BIT._LOCK
#define FSGD3BSPID13 FSGD3BSPID13_BASE.UINT32
#define FSGD3BSPID13_SPID FSGD3BSPID13_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif