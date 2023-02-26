#ifndef __DR7F701373_FSGD1A_HEADER__
#define __DR7F701373_FSGD1A_HEADER__



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
} FSGD1APROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID00Bits_t;

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
} FSGD1APROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID01Bits_t;

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
} FSGD1APROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID02Bits_t;

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
} FSGD1APROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID03Bits_t;

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
} FSGD1APROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID04Bits_t;

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
} FSGD1APROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD1ASPID05Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD1APROT00Bits_t BIT;
} FSGD1APROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID00Bits_t BIT;
} FSGD1ASPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD1APROT01Bits_t BIT;
} FSGD1APROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID01Bits_t BIT;
} FSGD1ASPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD1APROT02Bits_t BIT;
} FSGD1APROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID02Bits_t BIT;
} FSGD1ASPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD1APROT03Bits_t BIT;
} FSGD1APROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID03Bits_t BIT;
} FSGD1ASPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD1APROT04Bits_t BIT;
} FSGD1APROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID04Bits_t BIT;
} FSGD1ASPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD1APROT05Bits_t BIT;
} FSGD1APROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD1ASPID05Bits_t BIT;
} FSGD1ASPID05_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD1APROT00_BASE, 0xFFEE0000, __READ_WRITE, FSGD1APROT00_t);
__IOREG(FSGD1ASPID00_BASE, 0xFFEE0004, __READ_WRITE, FSGD1ASPID00_t);
__IOREG(FSGD1APROT01_BASE, 0xFFEE0008, __READ_WRITE, FSGD1APROT01_t);
__IOREG(FSGD1ASPID01_BASE, 0xFFEE000C, __READ_WRITE, FSGD1ASPID01_t);
__IOREG(FSGD1APROT02_BASE, 0xFFEE0010, __READ_WRITE, FSGD1APROT02_t);
__IOREG(FSGD1ASPID02_BASE, 0xFFEE0014, __READ_WRITE, FSGD1ASPID02_t);
__IOREG(FSGD1APROT03_BASE, 0xFFEE0018, __READ_WRITE, FSGD1APROT03_t);
__IOREG(FSGD1ASPID03_BASE, 0xFFEE001C, __READ_WRITE, FSGD1ASPID03_t);
__IOREG(FSGD1APROT04_BASE, 0xFFEE0020, __READ_WRITE, FSGD1APROT04_t);
__IOREG(FSGD1ASPID04_BASE, 0xFFEE0024, __READ_WRITE, FSGD1ASPID04_t);
__IOREG(FSGD1APROT05_BASE, 0xFFEE0028, __READ_WRITE, FSGD1APROT05_t);
__IOREG(FSGD1ASPID05_BASE, 0xFFEE002C, __READ_WRITE, FSGD1ASPID05_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD1APROT00 FSGD1APROT00_BASE.UINT32
#define FSGD1APROT00_PEID1 FSGD1APROT00_BASE.BIT._PEID1
#define FSGD1APROT00_PEID2 FSGD1APROT00_BASE.BIT._PEID2
#define FSGD1APROT00_PEID4 FSGD1APROT00_BASE.BIT._PEID4
#define FSGD1APROT00_PEID5 FSGD1APROT00_BASE.BIT._PEID5
#define FSGD1APROT00_LOCK FSGD1APROT00_BASE.BIT._LOCK
#define FSGD1ASPID00 FSGD1ASPID00_BASE.UINT32
#define FSGD1ASPID00_SPID FSGD1ASPID00_BASE.BIT._SPID
#define FSGD1APROT01 FSGD1APROT01_BASE.UINT32
#define FSGD1APROT01_PEID1 FSGD1APROT01_BASE.BIT._PEID1
#define FSGD1APROT01_PEID2 FSGD1APROT01_BASE.BIT._PEID2
#define FSGD1APROT01_PEID4 FSGD1APROT01_BASE.BIT._PEID4
#define FSGD1APROT01_PEID5 FSGD1APROT01_BASE.BIT._PEID5
#define FSGD1APROT01_LOCK FSGD1APROT01_BASE.BIT._LOCK
#define FSGD1ASPID01 FSGD1ASPID01_BASE.UINT32
#define FSGD1ASPID01_SPID FSGD1ASPID01_BASE.BIT._SPID
#define FSGD1APROT02 FSGD1APROT02_BASE.UINT32
#define FSGD1APROT02_PEID1 FSGD1APROT02_BASE.BIT._PEID1
#define FSGD1APROT02_PEID2 FSGD1APROT02_BASE.BIT._PEID2
#define FSGD1APROT02_PEID4 FSGD1APROT02_BASE.BIT._PEID4
#define FSGD1APROT02_PEID5 FSGD1APROT02_BASE.BIT._PEID5
#define FSGD1APROT02_LOCK FSGD1APROT02_BASE.BIT._LOCK
#define FSGD1ASPID02 FSGD1ASPID02_BASE.UINT32
#define FSGD1ASPID02_SPID FSGD1ASPID02_BASE.BIT._SPID
#define FSGD1APROT03 FSGD1APROT03_BASE.UINT32
#define FSGD1APROT03_PEID1 FSGD1APROT03_BASE.BIT._PEID1
#define FSGD1APROT03_PEID2 FSGD1APROT03_BASE.BIT._PEID2
#define FSGD1APROT03_PEID4 FSGD1APROT03_BASE.BIT._PEID4
#define FSGD1APROT03_PEID5 FSGD1APROT03_BASE.BIT._PEID5
#define FSGD1APROT03_LOCK FSGD1APROT03_BASE.BIT._LOCK
#define FSGD1ASPID03 FSGD1ASPID03_BASE.UINT32
#define FSGD1ASPID03_SPID FSGD1ASPID03_BASE.BIT._SPID
#define FSGD1APROT04 FSGD1APROT04_BASE.UINT32
#define FSGD1APROT04_PEID1 FSGD1APROT04_BASE.BIT._PEID1
#define FSGD1APROT04_PEID2 FSGD1APROT04_BASE.BIT._PEID2
#define FSGD1APROT04_PEID4 FSGD1APROT04_BASE.BIT._PEID4
#define FSGD1APROT04_PEID5 FSGD1APROT04_BASE.BIT._PEID5
#define FSGD1APROT04_LOCK FSGD1APROT04_BASE.BIT._LOCK
#define FSGD1ASPID04 FSGD1ASPID04_BASE.UINT32
#define FSGD1ASPID04_SPID FSGD1ASPID04_BASE.BIT._SPID
#define FSGD1APROT05 FSGD1APROT05_BASE.UINT32
#define FSGD1APROT05_PEID1 FSGD1APROT05_BASE.BIT._PEID1
#define FSGD1APROT05_PEID2 FSGD1APROT05_BASE.BIT._PEID2
#define FSGD1APROT05_PEID4 FSGD1APROT05_BASE.BIT._PEID4
#define FSGD1APROT05_PEID5 FSGD1APROT05_BASE.BIT._PEID5
#define FSGD1APROT05_LOCK FSGD1APROT05_BASE.BIT._LOCK
#define FSGD1ASPID05 FSGD1ASPID05_BASE.UINT32
#define FSGD1ASPID05_SPID FSGD1ASPID05_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif