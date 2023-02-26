#ifndef __DR7F701373_FSGD3A_HEADER__
#define __DR7F701373_FSGD3A_HEADER__



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
} FSGD3APROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID00Bits_t;

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
} FSGD3APROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID01Bits_t;

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
} FSGD3APROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID02Bits_t;

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
} FSGD3APROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID03Bits_t;

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
} FSGD3APROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID04Bits_t;

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
} FSGD3APROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID05Bits_t;

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
} FSGD3APROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID06Bits_t;

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
} FSGD3APROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID07Bits_t;

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
} FSGD3APROT08Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID08Bits_t;

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
} FSGD3APROT09Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID09Bits_t;

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
} FSGD3APROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID10Bits_t;

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
} FSGD3APROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID11Bits_t;

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
} FSGD3APROT12Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID12Bits_t;

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
} FSGD3APROT13Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID13Bits_t;

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
} FSGD3APROT14Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID14Bits_t;

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
} FSGD3APROT15Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD3ASPID15Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD3APROT00Bits_t BIT;
} FSGD3APROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID00Bits_t BIT;
} FSGD3ASPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT01Bits_t BIT;
} FSGD3APROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID01Bits_t BIT;
} FSGD3ASPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT02Bits_t BIT;
} FSGD3APROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID02Bits_t BIT;
} FSGD3ASPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT03Bits_t BIT;
} FSGD3APROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID03Bits_t BIT;
} FSGD3ASPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT04Bits_t BIT;
} FSGD3APROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID04Bits_t BIT;
} FSGD3ASPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT05Bits_t BIT;
} FSGD3APROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID05Bits_t BIT;
} FSGD3ASPID05_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT06Bits_t BIT;
} FSGD3APROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID06Bits_t BIT;
} FSGD3ASPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT07Bits_t BIT;
} FSGD3APROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID07Bits_t BIT;
} FSGD3ASPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT08Bits_t BIT;
} FSGD3APROT08_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID08Bits_t BIT;
} FSGD3ASPID08_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT09Bits_t BIT;
} FSGD3APROT09_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID09Bits_t BIT;
} FSGD3ASPID09_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT10Bits_t BIT;
} FSGD3APROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID10Bits_t BIT;
} FSGD3ASPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT11Bits_t BIT;
} FSGD3APROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID11Bits_t BIT;
} FSGD3ASPID11_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT12Bits_t BIT;
} FSGD3APROT12_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID12Bits_t BIT;
} FSGD3ASPID12_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT13Bits_t BIT;
} FSGD3APROT13_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID13Bits_t BIT;
} FSGD3ASPID13_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT14Bits_t BIT;
} FSGD3APROT14_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID14Bits_t BIT;
} FSGD3ASPID14_t;

typedef union
{
    uint32 UINT32;
    FSGD3APROT15Bits_t BIT;
} FSGD3APROT15_t;

typedef union
{
    uint32 UINT32;
    FSGD3ASPID15Bits_t BIT;
} FSGD3ASPID15_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD3APROT00_BASE, 0xFFF94000, __READ_WRITE, FSGD3APROT00_t);
__IOREG(FSGD3ASPID00_BASE, 0xFFF94004, __READ_WRITE, FSGD3ASPID00_t);
__IOREG(FSGD3APROT01_BASE, 0xFFF94008, __READ_WRITE, FSGD3APROT01_t);
__IOREG(FSGD3ASPID01_BASE, 0xFFF9400C, __READ_WRITE, FSGD3ASPID01_t);
__IOREG(FSGD3APROT02_BASE, 0xFFF94010, __READ_WRITE, FSGD3APROT02_t);
__IOREG(FSGD3ASPID02_BASE, 0xFFF94014, __READ_WRITE, FSGD3ASPID02_t);
__IOREG(FSGD3APROT03_BASE, 0xFFF94018, __READ_WRITE, FSGD3APROT03_t);
__IOREG(FSGD3ASPID03_BASE, 0xFFF9401C, __READ_WRITE, FSGD3ASPID03_t);
__IOREG(FSGD3APROT04_BASE, 0xFFF94020, __READ_WRITE, FSGD3APROT04_t);
__IOREG(FSGD3ASPID04_BASE, 0xFFF94024, __READ_WRITE, FSGD3ASPID04_t);
__IOREG(FSGD3APROT05_BASE, 0xFFF94028, __READ_WRITE, FSGD3APROT05_t);
__IOREG(FSGD3ASPID05_BASE, 0xFFF9402C, __READ_WRITE, FSGD3ASPID05_t);
__IOREG(FSGD3APROT06_BASE, 0xFFF94030, __READ_WRITE, FSGD3APROT06_t);
__IOREG(FSGD3ASPID06_BASE, 0xFFF94034, __READ_WRITE, FSGD3ASPID06_t);
__IOREG(FSGD3APROT07_BASE, 0xFFF94038, __READ_WRITE, FSGD3APROT07_t);
__IOREG(FSGD3ASPID07_BASE, 0xFFF9403C, __READ_WRITE, FSGD3ASPID07_t);
__IOREG(FSGD3APROT08_BASE, 0xFFF94040, __READ_WRITE, FSGD3APROT08_t);
__IOREG(FSGD3ASPID08_BASE, 0xFFF94044, __READ_WRITE, FSGD3ASPID08_t);
__IOREG(FSGD3APROT09_BASE, 0xFFF94048, __READ_WRITE, FSGD3APROT09_t);
__IOREG(FSGD3ASPID09_BASE, 0xFFF9404C, __READ_WRITE, FSGD3ASPID09_t);
__IOREG(FSGD3APROT10_BASE, 0xFFF94050, __READ_WRITE, FSGD3APROT10_t);
__IOREG(FSGD3ASPID10_BASE, 0xFFF94054, __READ_WRITE, FSGD3ASPID10_t);
__IOREG(FSGD3APROT11_BASE, 0xFFF94058, __READ_WRITE, FSGD3APROT11_t);
__IOREG(FSGD3ASPID11_BASE, 0xFFF9405C, __READ_WRITE, FSGD3ASPID11_t);
__IOREG(FSGD3APROT12_BASE, 0xFFF94060, __READ_WRITE, FSGD3APROT12_t);
__IOREG(FSGD3ASPID12_BASE, 0xFFF94064, __READ_WRITE, FSGD3ASPID12_t);
__IOREG(FSGD3APROT13_BASE, 0xFFF94068, __READ_WRITE, FSGD3APROT13_t);
__IOREG(FSGD3ASPID13_BASE, 0xFFF9406C, __READ_WRITE, FSGD3ASPID13_t);
__IOREG(FSGD3APROT14_BASE, 0xFFF94070, __READ_WRITE, FSGD3APROT14_t);
__IOREG(FSGD3ASPID14_BASE, 0xFFF94074, __READ_WRITE, FSGD3ASPID14_t);
__IOREG(FSGD3APROT15_BASE, 0xFFF94078, __READ_WRITE, FSGD3APROT15_t);
__IOREG(FSGD3ASPID15_BASE, 0xFFF9407C, __READ_WRITE, FSGD3ASPID15_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD3APROT00 FSGD3APROT00_BASE.UINT32
#define FSGD3APROT00_PEID1 FSGD3APROT00_BASE.BIT._PEID1
#define FSGD3APROT00_PEID2 FSGD3APROT00_BASE.BIT._PEID2
#define FSGD3APROT00_PEID4 FSGD3APROT00_BASE.BIT._PEID4
#define FSGD3APROT00_PEID5 FSGD3APROT00_BASE.BIT._PEID5
#define FSGD3APROT00_LOCK FSGD3APROT00_BASE.BIT._LOCK
#define FSGD3ASPID00 FSGD3ASPID00_BASE.UINT32
#define FSGD3ASPID00_SPID FSGD3ASPID00_BASE.BIT._SPID
#define FSGD3APROT01 FSGD3APROT01_BASE.UINT32
#define FSGD3APROT01_PEID1 FSGD3APROT01_BASE.BIT._PEID1
#define FSGD3APROT01_PEID2 FSGD3APROT01_BASE.BIT._PEID2
#define FSGD3APROT01_PEID4 FSGD3APROT01_BASE.BIT._PEID4
#define FSGD3APROT01_PEID5 FSGD3APROT01_BASE.BIT._PEID5
#define FSGD3APROT01_LOCK FSGD3APROT01_BASE.BIT._LOCK
#define FSGD3ASPID01 FSGD3ASPID01_BASE.UINT32
#define FSGD3ASPID01_SPID FSGD3ASPID01_BASE.BIT._SPID
#define FSGD3APROT02 FSGD3APROT02_BASE.UINT32
#define FSGD3APROT02_PEID1 FSGD3APROT02_BASE.BIT._PEID1
#define FSGD3APROT02_PEID2 FSGD3APROT02_BASE.BIT._PEID2
#define FSGD3APROT02_PEID4 FSGD3APROT02_BASE.BIT._PEID4
#define FSGD3APROT02_PEID5 FSGD3APROT02_BASE.BIT._PEID5
#define FSGD3APROT02_LOCK FSGD3APROT02_BASE.BIT._LOCK
#define FSGD3ASPID02 FSGD3ASPID02_BASE.UINT32
#define FSGD3ASPID02_SPID FSGD3ASPID02_BASE.BIT._SPID
#define FSGD3APROT03 FSGD3APROT03_BASE.UINT32
#define FSGD3APROT03_PEID1 FSGD3APROT03_BASE.BIT._PEID1
#define FSGD3APROT03_PEID2 FSGD3APROT03_BASE.BIT._PEID2
#define FSGD3APROT03_PEID4 FSGD3APROT03_BASE.BIT._PEID4
#define FSGD3APROT03_PEID5 FSGD3APROT03_BASE.BIT._PEID5
#define FSGD3APROT03_LOCK FSGD3APROT03_BASE.BIT._LOCK
#define FSGD3ASPID03 FSGD3ASPID03_BASE.UINT32
#define FSGD3ASPID03_SPID FSGD3ASPID03_BASE.BIT._SPID
#define FSGD3APROT04 FSGD3APROT04_BASE.UINT32
#define FSGD3APROT04_PEID1 FSGD3APROT04_BASE.BIT._PEID1
#define FSGD3APROT04_PEID2 FSGD3APROT04_BASE.BIT._PEID2
#define FSGD3APROT04_PEID4 FSGD3APROT04_BASE.BIT._PEID4
#define FSGD3APROT04_PEID5 FSGD3APROT04_BASE.BIT._PEID5
#define FSGD3APROT04_LOCK FSGD3APROT04_BASE.BIT._LOCK
#define FSGD3ASPID04 FSGD3ASPID04_BASE.UINT32
#define FSGD3ASPID04_SPID FSGD3ASPID04_BASE.BIT._SPID
#define FSGD3APROT05 FSGD3APROT05_BASE.UINT32
#define FSGD3APROT05_PEID1 FSGD3APROT05_BASE.BIT._PEID1
#define FSGD3APROT05_PEID2 FSGD3APROT05_BASE.BIT._PEID2
#define FSGD3APROT05_PEID4 FSGD3APROT05_BASE.BIT._PEID4
#define FSGD3APROT05_PEID5 FSGD3APROT05_BASE.BIT._PEID5
#define FSGD3APROT05_LOCK FSGD3APROT05_BASE.BIT._LOCK
#define FSGD3ASPID05 FSGD3ASPID05_BASE.UINT32
#define FSGD3ASPID05_SPID FSGD3ASPID05_BASE.BIT._SPID
#define FSGD3APROT06 FSGD3APROT06_BASE.UINT32
#define FSGD3APROT06_PEID1 FSGD3APROT06_BASE.BIT._PEID1
#define FSGD3APROT06_PEID2 FSGD3APROT06_BASE.BIT._PEID2
#define FSGD3APROT06_PEID4 FSGD3APROT06_BASE.BIT._PEID4
#define FSGD3APROT06_PEID5 FSGD3APROT06_BASE.BIT._PEID5
#define FSGD3APROT06_LOCK FSGD3APROT06_BASE.BIT._LOCK
#define FSGD3ASPID06 FSGD3ASPID06_BASE.UINT32
#define FSGD3ASPID06_SPID FSGD3ASPID06_BASE.BIT._SPID
#define FSGD3APROT07 FSGD3APROT07_BASE.UINT32
#define FSGD3APROT07_PEID1 FSGD3APROT07_BASE.BIT._PEID1
#define FSGD3APROT07_PEID2 FSGD3APROT07_BASE.BIT._PEID2
#define FSGD3APROT07_PEID4 FSGD3APROT07_BASE.BIT._PEID4
#define FSGD3APROT07_PEID5 FSGD3APROT07_BASE.BIT._PEID5
#define FSGD3APROT07_LOCK FSGD3APROT07_BASE.BIT._LOCK
#define FSGD3ASPID07 FSGD3ASPID07_BASE.UINT32
#define FSGD3ASPID07_SPID FSGD3ASPID07_BASE.BIT._SPID
#define FSGD3APROT08 FSGD3APROT08_BASE.UINT32
#define FSGD3APROT08_PEID1 FSGD3APROT08_BASE.BIT._PEID1
#define FSGD3APROT08_PEID2 FSGD3APROT08_BASE.BIT._PEID2
#define FSGD3APROT08_PEID4 FSGD3APROT08_BASE.BIT._PEID4
#define FSGD3APROT08_PEID5 FSGD3APROT08_BASE.BIT._PEID5
#define FSGD3APROT08_LOCK FSGD3APROT08_BASE.BIT._LOCK
#define FSGD3ASPID08 FSGD3ASPID08_BASE.UINT32
#define FSGD3ASPID08_SPID FSGD3ASPID08_BASE.BIT._SPID
#define FSGD3APROT09 FSGD3APROT09_BASE.UINT32
#define FSGD3APROT09_PEID1 FSGD3APROT09_BASE.BIT._PEID1
#define FSGD3APROT09_PEID2 FSGD3APROT09_BASE.BIT._PEID2
#define FSGD3APROT09_PEID4 FSGD3APROT09_BASE.BIT._PEID4
#define FSGD3APROT09_PEID5 FSGD3APROT09_BASE.BIT._PEID5
#define FSGD3APROT09_LOCK FSGD3APROT09_BASE.BIT._LOCK
#define FSGD3ASPID09 FSGD3ASPID09_BASE.UINT32
#define FSGD3ASPID09_SPID FSGD3ASPID09_BASE.BIT._SPID
#define FSGD3APROT10 FSGD3APROT10_BASE.UINT32
#define FSGD3APROT10_PEID1 FSGD3APROT10_BASE.BIT._PEID1
#define FSGD3APROT10_PEID2 FSGD3APROT10_BASE.BIT._PEID2
#define FSGD3APROT10_PEID4 FSGD3APROT10_BASE.BIT._PEID4
#define FSGD3APROT10_PEID5 FSGD3APROT10_BASE.BIT._PEID5
#define FSGD3APROT10_LOCK FSGD3APROT10_BASE.BIT._LOCK
#define FSGD3ASPID10 FSGD3ASPID10_BASE.UINT32
#define FSGD3ASPID10_SPID FSGD3ASPID10_BASE.BIT._SPID
#define FSGD3APROT11 FSGD3APROT11_BASE.UINT32
#define FSGD3APROT11_PEID1 FSGD3APROT11_BASE.BIT._PEID1
#define FSGD3APROT11_PEID2 FSGD3APROT11_BASE.BIT._PEID2
#define FSGD3APROT11_PEID4 FSGD3APROT11_BASE.BIT._PEID4
#define FSGD3APROT11_PEID5 FSGD3APROT11_BASE.BIT._PEID5
#define FSGD3APROT11_LOCK FSGD3APROT11_BASE.BIT._LOCK
#define FSGD3ASPID11 FSGD3ASPID11_BASE.UINT32
#define FSGD3ASPID11_SPID FSGD3ASPID11_BASE.BIT._SPID
#define FSGD3APROT12 FSGD3APROT12_BASE.UINT32
#define FSGD3APROT12_PEID1 FSGD3APROT12_BASE.BIT._PEID1
#define FSGD3APROT12_PEID2 FSGD3APROT12_BASE.BIT._PEID2
#define FSGD3APROT12_PEID4 FSGD3APROT12_BASE.BIT._PEID4
#define FSGD3APROT12_PEID5 FSGD3APROT12_BASE.BIT._PEID5
#define FSGD3APROT12_LOCK FSGD3APROT12_BASE.BIT._LOCK
#define FSGD3ASPID12 FSGD3ASPID12_BASE.UINT32
#define FSGD3ASPID12_SPID FSGD3ASPID12_BASE.BIT._SPID
#define FSGD3APROT13 FSGD3APROT13_BASE.UINT32
#define FSGD3APROT13_PEID1 FSGD3APROT13_BASE.BIT._PEID1
#define FSGD3APROT13_PEID2 FSGD3APROT13_BASE.BIT._PEID2
#define FSGD3APROT13_PEID4 FSGD3APROT13_BASE.BIT._PEID4
#define FSGD3APROT13_PEID5 FSGD3APROT13_BASE.BIT._PEID5
#define FSGD3APROT13_LOCK FSGD3APROT13_BASE.BIT._LOCK
#define FSGD3ASPID13 FSGD3ASPID13_BASE.UINT32
#define FSGD3ASPID13_SPID FSGD3ASPID13_BASE.BIT._SPID
#define FSGD3APROT14 FSGD3APROT14_BASE.UINT32
#define FSGD3APROT14_PEID1 FSGD3APROT14_BASE.BIT._PEID1
#define FSGD3APROT14_PEID2 FSGD3APROT14_BASE.BIT._PEID2
#define FSGD3APROT14_PEID4 FSGD3APROT14_BASE.BIT._PEID4
#define FSGD3APROT14_PEID5 FSGD3APROT14_BASE.BIT._PEID5
#define FSGD3APROT14_LOCK FSGD3APROT14_BASE.BIT._LOCK
#define FSGD3ASPID14 FSGD3ASPID14_BASE.UINT32
#define FSGD3ASPID14_SPID FSGD3ASPID14_BASE.BIT._SPID
#define FSGD3APROT15 FSGD3APROT15_BASE.UINT32
#define FSGD3APROT15_PEID1 FSGD3APROT15_BASE.BIT._PEID1
#define FSGD3APROT15_PEID2 FSGD3APROT15_BASE.BIT._PEID2
#define FSGD3APROT15_PEID4 FSGD3APROT15_BASE.BIT._PEID4
#define FSGD3APROT15_PEID5 FSGD3APROT15_BASE.BIT._PEID5
#define FSGD3APROT15_LOCK FSGD3APROT15_BASE.BIT._LOCK
#define FSGD3ASPID15 FSGD3ASPID15_BASE.UINT32
#define FSGD3ASPID15_SPID FSGD3ASPID15_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif