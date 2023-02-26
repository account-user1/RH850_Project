#ifndef __DR7F701373_FSGD2A_HEADER__
#define __DR7F701373_FSGD2A_HEADER__



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
} FSGD2APROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID00Bits_t;

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
} FSGD2APROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID01Bits_t;

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
} FSGD2APROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID02Bits_t;

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
} FSGD2APROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID03Bits_t;

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
} FSGD2APROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID04Bits_t;

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
} FSGD2APROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID05Bits_t;

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
} FSGD2APROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID06Bits_t;

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
} FSGD2APROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID07Bits_t;

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
} FSGD2APROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID10Bits_t;

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
} FSGD2APROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD2ASPID11Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD2APROT00Bits_t BIT;
} FSGD2APROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID00Bits_t BIT;
} FSGD2ASPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT01Bits_t BIT;
} FSGD2APROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID01Bits_t BIT;
} FSGD2ASPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT02Bits_t BIT;
} FSGD2APROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID02Bits_t BIT;
} FSGD2ASPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT03Bits_t BIT;
} FSGD2APROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID03Bits_t BIT;
} FSGD2ASPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT04Bits_t BIT;
} FSGD2APROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID04Bits_t BIT;
} FSGD2ASPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT05Bits_t BIT;
} FSGD2APROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID05Bits_t BIT;
} FSGD2ASPID05_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT06Bits_t BIT;
} FSGD2APROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID06Bits_t BIT;
} FSGD2ASPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT07Bits_t BIT;
} FSGD2APROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID07Bits_t BIT;
} FSGD2ASPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT10Bits_t BIT;
} FSGD2APROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID10Bits_t BIT;
} FSGD2ASPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD2APROT11Bits_t BIT;
} FSGD2APROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD2ASPID11Bits_t BIT;
} FSGD2ASPID11_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD2APROT00_BASE, 0xFFDDD000, __READ_WRITE, FSGD2APROT00_t);
__IOREG(FSGD2ASPID00_BASE, 0xFFDDD004, __READ_WRITE, FSGD2ASPID00_t);
__IOREG(FSGD2APROT01_BASE, 0xFFDDD008, __READ_WRITE, FSGD2APROT01_t);
__IOREG(FSGD2ASPID01_BASE, 0xFFDDD00C, __READ_WRITE, FSGD2ASPID01_t);
__IOREG(FSGD2APROT02_BASE, 0xFFDDD010, __READ_WRITE, FSGD2APROT02_t);
__IOREG(FSGD2ASPID02_BASE, 0xFFDDD014, __READ_WRITE, FSGD2ASPID02_t);
__IOREG(FSGD2APROT03_BASE, 0xFFDDD018, __READ_WRITE, FSGD2APROT03_t);
__IOREG(FSGD2ASPID03_BASE, 0xFFDDD01C, __READ_WRITE, FSGD2ASPID03_t);
__IOREG(FSGD2APROT04_BASE, 0xFFDDD020, __READ_WRITE, FSGD2APROT04_t);
__IOREG(FSGD2ASPID04_BASE, 0xFFDDD024, __READ_WRITE, FSGD2ASPID04_t);
__IOREG(FSGD2APROT05_BASE, 0xFFDDD028, __READ_WRITE, FSGD2APROT05_t);
__IOREG(FSGD2ASPID05_BASE, 0xFFDDD02C, __READ_WRITE, FSGD2ASPID05_t);
__IOREG(FSGD2APROT06_BASE, 0xFFDDD030, __READ_WRITE, FSGD2APROT06_t);
__IOREG(FSGD2ASPID06_BASE, 0xFFDDD034, __READ_WRITE, FSGD2ASPID06_t);
__IOREG(FSGD2APROT07_BASE, 0xFFDDD038, __READ_WRITE, FSGD2APROT07_t);
__IOREG(FSGD2ASPID07_BASE, 0xFFDDD03C, __READ_WRITE, FSGD2ASPID07_t);
__IOREG(FSGD2APROT10_BASE, 0xFFDDD050, __READ_WRITE, FSGD2APROT10_t);
__IOREG(FSGD2ASPID10_BASE, 0xFFDDD054, __READ_WRITE, FSGD2ASPID10_t);
__IOREG(FSGD2APROT11_BASE, 0xFFDDD058, __READ_WRITE, FSGD2APROT11_t);
__IOREG(FSGD2ASPID11_BASE, 0xFFDDD05C, __READ_WRITE, FSGD2ASPID11_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD2APROT00 FSGD2APROT00_BASE.UINT32
#define FSGD2APROT00_PEID1 FSGD2APROT00_BASE.BIT._PEID1
#define FSGD2APROT00_PEID2 FSGD2APROT00_BASE.BIT._PEID2
#define FSGD2APROT00_PEID4 FSGD2APROT00_BASE.BIT._PEID4
#define FSGD2APROT00_PEID5 FSGD2APROT00_BASE.BIT._PEID5
#define FSGD2APROT00_LOCK FSGD2APROT00_BASE.BIT._LOCK
#define FSGD2ASPID00 FSGD2ASPID00_BASE.UINT32
#define FSGD2ASPID00_SPID FSGD2ASPID00_BASE.BIT._SPID
#define FSGD2APROT01 FSGD2APROT01_BASE.UINT32
#define FSGD2APROT01_PEID1 FSGD2APROT01_BASE.BIT._PEID1
#define FSGD2APROT01_PEID2 FSGD2APROT01_BASE.BIT._PEID2
#define FSGD2APROT01_PEID4 FSGD2APROT01_BASE.BIT._PEID4
#define FSGD2APROT01_PEID5 FSGD2APROT01_BASE.BIT._PEID5
#define FSGD2APROT01_LOCK FSGD2APROT01_BASE.BIT._LOCK
#define FSGD2ASPID01 FSGD2ASPID01_BASE.UINT32
#define FSGD2ASPID01_SPID FSGD2ASPID01_BASE.BIT._SPID
#define FSGD2APROT02 FSGD2APROT02_BASE.UINT32
#define FSGD2APROT02_PEID1 FSGD2APROT02_BASE.BIT._PEID1
#define FSGD2APROT02_PEID2 FSGD2APROT02_BASE.BIT._PEID2
#define FSGD2APROT02_PEID4 FSGD2APROT02_BASE.BIT._PEID4
#define FSGD2APROT02_PEID5 FSGD2APROT02_BASE.BIT._PEID5
#define FSGD2APROT02_LOCK FSGD2APROT02_BASE.BIT._LOCK
#define FSGD2ASPID02 FSGD2ASPID02_BASE.UINT32
#define FSGD2ASPID02_SPID FSGD2ASPID02_BASE.BIT._SPID
#define FSGD2APROT03 FSGD2APROT03_BASE.UINT32
#define FSGD2APROT03_PEID1 FSGD2APROT03_BASE.BIT._PEID1
#define FSGD2APROT03_PEID2 FSGD2APROT03_BASE.BIT._PEID2
#define FSGD2APROT03_PEID4 FSGD2APROT03_BASE.BIT._PEID4
#define FSGD2APROT03_PEID5 FSGD2APROT03_BASE.BIT._PEID5
#define FSGD2APROT03_LOCK FSGD2APROT03_BASE.BIT._LOCK
#define FSGD2ASPID03 FSGD2ASPID03_BASE.UINT32
#define FSGD2ASPID03_SPID FSGD2ASPID03_BASE.BIT._SPID
#define FSGD2APROT04 FSGD2APROT04_BASE.UINT32
#define FSGD2APROT04_PEID1 FSGD2APROT04_BASE.BIT._PEID1
#define FSGD2APROT04_PEID2 FSGD2APROT04_BASE.BIT._PEID2
#define FSGD2APROT04_PEID4 FSGD2APROT04_BASE.BIT._PEID4
#define FSGD2APROT04_PEID5 FSGD2APROT04_BASE.BIT._PEID5
#define FSGD2APROT04_LOCK FSGD2APROT04_BASE.BIT._LOCK
#define FSGD2ASPID04 FSGD2ASPID04_BASE.UINT32
#define FSGD2ASPID04_SPID FSGD2ASPID04_BASE.BIT._SPID
#define FSGD2APROT05 FSGD2APROT05_BASE.UINT32
#define FSGD2APROT05_PEID1 FSGD2APROT05_BASE.BIT._PEID1
#define FSGD2APROT05_PEID2 FSGD2APROT05_BASE.BIT._PEID2
#define FSGD2APROT05_PEID4 FSGD2APROT05_BASE.BIT._PEID4
#define FSGD2APROT05_PEID5 FSGD2APROT05_BASE.BIT._PEID5
#define FSGD2APROT05_LOCK FSGD2APROT05_BASE.BIT._LOCK
#define FSGD2ASPID05 FSGD2ASPID05_BASE.UINT32
#define FSGD2ASPID05_SPID FSGD2ASPID05_BASE.BIT._SPID
#define FSGD2APROT06 FSGD2APROT06_BASE.UINT32
#define FSGD2APROT06_PEID1 FSGD2APROT06_BASE.BIT._PEID1
#define FSGD2APROT06_PEID2 FSGD2APROT06_BASE.BIT._PEID2
#define FSGD2APROT06_PEID4 FSGD2APROT06_BASE.BIT._PEID4
#define FSGD2APROT06_PEID5 FSGD2APROT06_BASE.BIT._PEID5
#define FSGD2APROT06_LOCK FSGD2APROT06_BASE.BIT._LOCK
#define FSGD2ASPID06 FSGD2ASPID06_BASE.UINT32
#define FSGD2ASPID06_SPID FSGD2ASPID06_BASE.BIT._SPID
#define FSGD2APROT07 FSGD2APROT07_BASE.UINT32
#define FSGD2APROT07_PEID1 FSGD2APROT07_BASE.BIT._PEID1
#define FSGD2APROT07_PEID2 FSGD2APROT07_BASE.BIT._PEID2
#define FSGD2APROT07_PEID4 FSGD2APROT07_BASE.BIT._PEID4
#define FSGD2APROT07_PEID5 FSGD2APROT07_BASE.BIT._PEID5
#define FSGD2APROT07_LOCK FSGD2APROT07_BASE.BIT._LOCK
#define FSGD2ASPID07 FSGD2ASPID07_BASE.UINT32
#define FSGD2ASPID07_SPID FSGD2ASPID07_BASE.BIT._SPID
#define FSGD2APROT10 FSGD2APROT10_BASE.UINT32
#define FSGD2APROT10_PEID1 FSGD2APROT10_BASE.BIT._PEID1
#define FSGD2APROT10_PEID2 FSGD2APROT10_BASE.BIT._PEID2
#define FSGD2APROT10_PEID4 FSGD2APROT10_BASE.BIT._PEID4
#define FSGD2APROT10_PEID5 FSGD2APROT10_BASE.BIT._PEID5
#define FSGD2APROT10_LOCK FSGD2APROT10_BASE.BIT._LOCK
#define FSGD2ASPID10 FSGD2ASPID10_BASE.UINT32
#define FSGD2ASPID10_SPID FSGD2ASPID10_BASE.BIT._SPID
#define FSGD2APROT11 FSGD2APROT11_BASE.UINT32
#define FSGD2APROT11_PEID1 FSGD2APROT11_BASE.BIT._PEID1
#define FSGD2APROT11_PEID2 FSGD2APROT11_BASE.BIT._PEID2
#define FSGD2APROT11_PEID4 FSGD2APROT11_BASE.BIT._PEID4
#define FSGD2APROT11_PEID5 FSGD2APROT11_BASE.BIT._PEID5
#define FSGD2APROT11_LOCK FSGD2APROT11_BASE.BIT._LOCK
#define FSGD2ASPID11 FSGD2ASPID11_BASE.UINT32
#define FSGD2ASPID11_SPID FSGD2ASPID11_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif