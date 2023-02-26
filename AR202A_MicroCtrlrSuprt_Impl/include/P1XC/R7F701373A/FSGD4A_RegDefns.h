#ifndef __DR7F701373_FSGD4A_HEADER__
#define __DR7F701373_FSGD4A_HEADER__



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
} FSGD4APROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID00Bits_t;

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
} FSGD4APROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID01Bits_t;

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
} FSGD4APROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID02Bits_t;

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
} FSGD4APROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID03Bits_t;

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
} FSGD4APROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID04Bits_t;

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
} FSGD4APROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID05Bits_t;

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
} FSGD4APROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID06Bits_t;

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
} FSGD4APROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID07Bits_t;

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
} FSGD4APROT08Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID08Bits_t;

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
} FSGD4APROT09Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID09Bits_t;

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
} FSGD4APROT10Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID10Bits_t;

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
} FSGD4APROT11Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID11Bits_t;

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
} FSGD4APROT12Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID12Bits_t;

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
} FSGD4APROT13Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID13Bits_t;

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
} FSGD4APROT14Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID14Bits_t;

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
} FSGD4APROT15Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGD4ASPID15Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    FSGD4APROT00Bits_t BIT;
} FSGD4APROT00_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID00Bits_t BIT;
} FSGD4ASPID00_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT01Bits_t BIT;
} FSGD4APROT01_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID01Bits_t BIT;
} FSGD4ASPID01_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT02Bits_t BIT;
} FSGD4APROT02_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID02Bits_t BIT;
} FSGD4ASPID02_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT03Bits_t BIT;
} FSGD4APROT03_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID03Bits_t BIT;
} FSGD4ASPID03_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT04Bits_t BIT;
} FSGD4APROT04_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID04Bits_t BIT;
} FSGD4ASPID04_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT05Bits_t BIT;
} FSGD4APROT05_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID05Bits_t BIT;
} FSGD4ASPID05_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT06Bits_t BIT;
} FSGD4APROT06_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID06Bits_t BIT;
} FSGD4ASPID06_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT07Bits_t BIT;
} FSGD4APROT07_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID07Bits_t BIT;
} FSGD4ASPID07_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT08Bits_t BIT;
} FSGD4APROT08_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID08Bits_t BIT;
} FSGD4ASPID08_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT09Bits_t BIT;
} FSGD4APROT09_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID09Bits_t BIT;
} FSGD4ASPID09_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT10Bits_t BIT;
} FSGD4APROT10_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID10Bits_t BIT;
} FSGD4ASPID10_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT11Bits_t BIT;
} FSGD4APROT11_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID11Bits_t BIT;
} FSGD4ASPID11_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT12Bits_t BIT;
} FSGD4APROT12_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID12Bits_t BIT;
} FSGD4ASPID12_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT13Bits_t BIT;
} FSGD4APROT13_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID13Bits_t BIT;
} FSGD4ASPID13_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT14Bits_t BIT;
} FSGD4APROT14_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID14Bits_t BIT;
} FSGD4ASPID14_t;

typedef union
{
    uint32 UINT32;
    FSGD4APROT15Bits_t BIT;
} FSGD4APROT15_t;

typedef union
{
    uint32 UINT32;
    FSGD4ASPID15Bits_t BIT;
} FSGD4ASPID15_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGD4APROT00_BASE, 0xFFF90000, __READ_WRITE, FSGD4APROT00_t);
__IOREG(FSGD4ASPID00_BASE, 0xFFF90004, __READ_WRITE, FSGD4ASPID00_t);
__IOREG(FSGD4APROT01_BASE, 0xFFF90008, __READ_WRITE, FSGD4APROT01_t);
__IOREG(FSGD4ASPID01_BASE, 0xFFF9000C, __READ_WRITE, FSGD4ASPID01_t);
__IOREG(FSGD4APROT02_BASE, 0xFFF90010, __READ_WRITE, FSGD4APROT02_t);
__IOREG(FSGD4ASPID02_BASE, 0xFFF90014, __READ_WRITE, FSGD4ASPID02_t);
__IOREG(FSGD4APROT03_BASE, 0xFFF90018, __READ_WRITE, FSGD4APROT03_t);
__IOREG(FSGD4ASPID03_BASE, 0xFFF9001C, __READ_WRITE, FSGD4ASPID03_t);
__IOREG(FSGD4APROT04_BASE, 0xFFF90020, __READ_WRITE, FSGD4APROT04_t);
__IOREG(FSGD4ASPID04_BASE, 0xFFF90024, __READ_WRITE, FSGD4ASPID04_t);
__IOREG(FSGD4APROT05_BASE, 0xFFF90028, __READ_WRITE, FSGD4APROT05_t);
__IOREG(FSGD4ASPID05_BASE, 0xFFF9002C, __READ_WRITE, FSGD4ASPID05_t);
__IOREG(FSGD4APROT06_BASE, 0xFFF90030, __READ_WRITE, FSGD4APROT06_t);
__IOREG(FSGD4ASPID06_BASE, 0xFFF90034, __READ_WRITE, FSGD4ASPID06_t);
__IOREG(FSGD4APROT07_BASE, 0xFFF90038, __READ_WRITE, FSGD4APROT07_t);
__IOREG(FSGD4ASPID07_BASE, 0xFFF9003C, __READ_WRITE, FSGD4ASPID07_t);
__IOREG(FSGD4APROT08_BASE, 0xFFF90040, __READ_WRITE, FSGD4APROT08_t);
__IOREG(FSGD4ASPID08_BASE, 0xFFF90044, __READ_WRITE, FSGD4ASPID08_t);
__IOREG(FSGD4APROT09_BASE, 0xFFF90048, __READ_WRITE, FSGD4APROT09_t);
__IOREG(FSGD4ASPID09_BASE, 0xFFF9004C, __READ_WRITE, FSGD4ASPID09_t);
__IOREG(FSGD4APROT10_BASE, 0xFFF90050, __READ_WRITE, FSGD4APROT10_t);
__IOREG(FSGD4ASPID10_BASE, 0xFFF90054, __READ_WRITE, FSGD4ASPID10_t);
__IOREG(FSGD4APROT11_BASE, 0xFFF90058, __READ_WRITE, FSGD4APROT11_t);
__IOREG(FSGD4ASPID11_BASE, 0xFFF9005C, __READ_WRITE, FSGD4ASPID11_t);
__IOREG(FSGD4APROT12_BASE, 0xFFF90060, __READ_WRITE, FSGD4APROT12_t);
__IOREG(FSGD4ASPID12_BASE, 0xFFF90064, __READ_WRITE, FSGD4ASPID12_t);
__IOREG(FSGD4APROT13_BASE, 0xFFF90068, __READ_WRITE, FSGD4APROT13_t);
__IOREG(FSGD4ASPID13_BASE, 0xFFF9006C, __READ_WRITE, FSGD4ASPID13_t);
__IOREG(FSGD4APROT14_BASE, 0xFFF90070, __READ_WRITE, FSGD4APROT14_t);
__IOREG(FSGD4ASPID14_BASE, 0xFFF90074, __READ_WRITE, FSGD4ASPID14_t);
__IOREG(FSGD4APROT15_BASE, 0xFFF90078, __READ_WRITE, FSGD4APROT15_t);
__IOREG(FSGD4ASPID15_BASE, 0xFFF9007C, __READ_WRITE, FSGD4ASPID15_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGD4APROT00 FSGD4APROT00_BASE.UINT32
#define FSGD4APROT00_PEID1 FSGD4APROT00_BASE.BIT._PEID1
#define FSGD4APROT00_PEID2 FSGD4APROT00_BASE.BIT._PEID2
#define FSGD4APROT00_PEID4 FSGD4APROT00_BASE.BIT._PEID4
#define FSGD4APROT00_PEID5 FSGD4APROT00_BASE.BIT._PEID5
#define FSGD4APROT00_LOCK FSGD4APROT00_BASE.BIT._LOCK
#define FSGD4ASPID00 FSGD4ASPID00_BASE.UINT32
#define FSGD4ASPID00_SPID FSGD4ASPID00_BASE.BIT._SPID
#define FSGD4APROT01 FSGD4APROT01_BASE.UINT32
#define FSGD4APROT01_PEID1 FSGD4APROT01_BASE.BIT._PEID1
#define FSGD4APROT01_PEID2 FSGD4APROT01_BASE.BIT._PEID2
#define FSGD4APROT01_PEID4 FSGD4APROT01_BASE.BIT._PEID4
#define FSGD4APROT01_PEID5 FSGD4APROT01_BASE.BIT._PEID5
#define FSGD4APROT01_LOCK FSGD4APROT01_BASE.BIT._LOCK
#define FSGD4ASPID01 FSGD4ASPID01_BASE.UINT32
#define FSGD4ASPID01_SPID FSGD4ASPID01_BASE.BIT._SPID
#define FSGD4APROT02 FSGD4APROT02_BASE.UINT32
#define FSGD4APROT02_PEID1 FSGD4APROT02_BASE.BIT._PEID1
#define FSGD4APROT02_PEID2 FSGD4APROT02_BASE.BIT._PEID2
#define FSGD4APROT02_PEID4 FSGD4APROT02_BASE.BIT._PEID4
#define FSGD4APROT02_PEID5 FSGD4APROT02_BASE.BIT._PEID5
#define FSGD4APROT02_LOCK FSGD4APROT02_BASE.BIT._LOCK
#define FSGD4ASPID02 FSGD4ASPID02_BASE.UINT32
#define FSGD4ASPID02_SPID FSGD4ASPID02_BASE.BIT._SPID
#define FSGD4APROT03 FSGD4APROT03_BASE.UINT32
#define FSGD4APROT03_PEID1 FSGD4APROT03_BASE.BIT._PEID1
#define FSGD4APROT03_PEID2 FSGD4APROT03_BASE.BIT._PEID2
#define FSGD4APROT03_PEID4 FSGD4APROT03_BASE.BIT._PEID4
#define FSGD4APROT03_PEID5 FSGD4APROT03_BASE.BIT._PEID5
#define FSGD4APROT03_LOCK FSGD4APROT03_BASE.BIT._LOCK
#define FSGD4ASPID03 FSGD4ASPID03_BASE.UINT32
#define FSGD4ASPID03_SPID FSGD4ASPID03_BASE.BIT._SPID
#define FSGD4APROT04 FSGD4APROT04_BASE.UINT32
#define FSGD4APROT04_PEID1 FSGD4APROT04_BASE.BIT._PEID1
#define FSGD4APROT04_PEID2 FSGD4APROT04_BASE.BIT._PEID2
#define FSGD4APROT04_PEID4 FSGD4APROT04_BASE.BIT._PEID4
#define FSGD4APROT04_PEID5 FSGD4APROT04_BASE.BIT._PEID5
#define FSGD4APROT04_LOCK FSGD4APROT04_BASE.BIT._LOCK
#define FSGD4ASPID04 FSGD4ASPID04_BASE.UINT32
#define FSGD4ASPID04_SPID FSGD4ASPID04_BASE.BIT._SPID
#define FSGD4APROT05 FSGD4APROT05_BASE.UINT32
#define FSGD4APROT05_PEID1 FSGD4APROT05_BASE.BIT._PEID1
#define FSGD4APROT05_PEID2 FSGD4APROT05_BASE.BIT._PEID2
#define FSGD4APROT05_PEID4 FSGD4APROT05_BASE.BIT._PEID4
#define FSGD4APROT05_PEID5 FSGD4APROT05_BASE.BIT._PEID5
#define FSGD4APROT05_LOCK FSGD4APROT05_BASE.BIT._LOCK
#define FSGD4ASPID05 FSGD4ASPID05_BASE.UINT32
#define FSGD4ASPID05_SPID FSGD4ASPID05_BASE.BIT._SPID
#define FSGD4APROT06 FSGD4APROT06_BASE.UINT32
#define FSGD4APROT06_PEID1 FSGD4APROT06_BASE.BIT._PEID1
#define FSGD4APROT06_PEID2 FSGD4APROT06_BASE.BIT._PEID2
#define FSGD4APROT06_PEID4 FSGD4APROT06_BASE.BIT._PEID4
#define FSGD4APROT06_PEID5 FSGD4APROT06_BASE.BIT._PEID5
#define FSGD4APROT06_LOCK FSGD4APROT06_BASE.BIT._LOCK
#define FSGD4ASPID06 FSGD4ASPID06_BASE.UINT32
#define FSGD4ASPID06_SPID FSGD4ASPID06_BASE.BIT._SPID
#define FSGD4APROT07 FSGD4APROT07_BASE.UINT32
#define FSGD4APROT07_PEID1 FSGD4APROT07_BASE.BIT._PEID1
#define FSGD4APROT07_PEID2 FSGD4APROT07_BASE.BIT._PEID2
#define FSGD4APROT07_PEID4 FSGD4APROT07_BASE.BIT._PEID4
#define FSGD4APROT07_PEID5 FSGD4APROT07_BASE.BIT._PEID5
#define FSGD4APROT07_LOCK FSGD4APROT07_BASE.BIT._LOCK
#define FSGD4ASPID07 FSGD4ASPID07_BASE.UINT32
#define FSGD4ASPID07_SPID FSGD4ASPID07_BASE.BIT._SPID
#define FSGD4APROT08 FSGD4APROT08_BASE.UINT32
#define FSGD4APROT08_PEID1 FSGD4APROT08_BASE.BIT._PEID1
#define FSGD4APROT08_PEID2 FSGD4APROT08_BASE.BIT._PEID2
#define FSGD4APROT08_PEID4 FSGD4APROT08_BASE.BIT._PEID4
#define FSGD4APROT08_PEID5 FSGD4APROT08_BASE.BIT._PEID5
#define FSGD4APROT08_LOCK FSGD4APROT08_BASE.BIT._LOCK
#define FSGD4ASPID08 FSGD4ASPID08_BASE.UINT32
#define FSGD4ASPID08_SPID FSGD4ASPID08_BASE.BIT._SPID
#define FSGD4APROT09 FSGD4APROT09_BASE.UINT32
#define FSGD4APROT09_PEID1 FSGD4APROT09_BASE.BIT._PEID1
#define FSGD4APROT09_PEID2 FSGD4APROT09_BASE.BIT._PEID2
#define FSGD4APROT09_PEID4 FSGD4APROT09_BASE.BIT._PEID4
#define FSGD4APROT09_PEID5 FSGD4APROT09_BASE.BIT._PEID5
#define FSGD4APROT09_LOCK FSGD4APROT09_BASE.BIT._LOCK
#define FSGD4ASPID09 FSGD4ASPID09_BASE.UINT32
#define FSGD4ASPID09_SPID FSGD4ASPID09_BASE.BIT._SPID
#define FSGD4APROT10 FSGD4APROT10_BASE.UINT32
#define FSGD4APROT10_PEID1 FSGD4APROT10_BASE.BIT._PEID1
#define FSGD4APROT10_PEID2 FSGD4APROT10_BASE.BIT._PEID2
#define FSGD4APROT10_PEID4 FSGD4APROT10_BASE.BIT._PEID4
#define FSGD4APROT10_PEID5 FSGD4APROT10_BASE.BIT._PEID5
#define FSGD4APROT10_LOCK FSGD4APROT10_BASE.BIT._LOCK
#define FSGD4ASPID10 FSGD4ASPID10_BASE.UINT32
#define FSGD4ASPID10_SPID FSGD4ASPID10_BASE.BIT._SPID
#define FSGD4APROT11 FSGD4APROT11_BASE.UINT32
#define FSGD4APROT11_PEID1 FSGD4APROT11_BASE.BIT._PEID1
#define FSGD4APROT11_PEID2 FSGD4APROT11_BASE.BIT._PEID2
#define FSGD4APROT11_PEID4 FSGD4APROT11_BASE.BIT._PEID4
#define FSGD4APROT11_PEID5 FSGD4APROT11_BASE.BIT._PEID5
#define FSGD4APROT11_LOCK FSGD4APROT11_BASE.BIT._LOCK
#define FSGD4ASPID11 FSGD4ASPID11_BASE.UINT32
#define FSGD4ASPID11_SPID FSGD4ASPID11_BASE.BIT._SPID
#define FSGD4APROT12 FSGD4APROT12_BASE.UINT32
#define FSGD4APROT12_PEID1 FSGD4APROT12_BASE.BIT._PEID1
#define FSGD4APROT12_PEID2 FSGD4APROT12_BASE.BIT._PEID2
#define FSGD4APROT12_PEID4 FSGD4APROT12_BASE.BIT._PEID4
#define FSGD4APROT12_PEID5 FSGD4APROT12_BASE.BIT._PEID5
#define FSGD4APROT12_LOCK FSGD4APROT12_BASE.BIT._LOCK
#define FSGD4ASPID12 FSGD4ASPID12_BASE.UINT32
#define FSGD4ASPID12_SPID FSGD4ASPID12_BASE.BIT._SPID
#define FSGD4APROT13 FSGD4APROT13_BASE.UINT32
#define FSGD4APROT13_PEID1 FSGD4APROT13_BASE.BIT._PEID1
#define FSGD4APROT13_PEID2 FSGD4APROT13_BASE.BIT._PEID2
#define FSGD4APROT13_PEID4 FSGD4APROT13_BASE.BIT._PEID4
#define FSGD4APROT13_PEID5 FSGD4APROT13_BASE.BIT._PEID5
#define FSGD4APROT13_LOCK FSGD4APROT13_BASE.BIT._LOCK
#define FSGD4ASPID13 FSGD4ASPID13_BASE.UINT32
#define FSGD4ASPID13_SPID FSGD4ASPID13_BASE.BIT._SPID
#define FSGD4APROT14 FSGD4APROT14_BASE.UINT32
#define FSGD4APROT14_PEID1 FSGD4APROT14_BASE.BIT._PEID1
#define FSGD4APROT14_PEID2 FSGD4APROT14_BASE.BIT._PEID2
#define FSGD4APROT14_PEID4 FSGD4APROT14_BASE.BIT._PEID4
#define FSGD4APROT14_PEID5 FSGD4APROT14_BASE.BIT._PEID5
#define FSGD4APROT14_LOCK FSGD4APROT14_BASE.BIT._LOCK
#define FSGD4ASPID14 FSGD4ASPID14_BASE.UINT32
#define FSGD4ASPID14_SPID FSGD4ASPID14_BASE.BIT._SPID
#define FSGD4APROT15 FSGD4APROT15_BASE.UINT32
#define FSGD4APROT15_PEID1 FSGD4APROT15_BASE.BIT._PEID1
#define FSGD4APROT15_PEID2 FSGD4APROT15_BASE.BIT._PEID2
#define FSGD4APROT15_PEID4 FSGD4APROT15_BASE.BIT._PEID4
#define FSGD4APROT15_PEID5 FSGD4APROT15_BASE.BIT._PEID5
#define FSGD4APROT15_LOCK FSGD4APROT15_BASE.BIT._LOCK
#define FSGD4ASPID15 FSGD4ASPID15_BASE.UINT32
#define FSGD4ASPID15_SPID FSGD4ASPID15_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif