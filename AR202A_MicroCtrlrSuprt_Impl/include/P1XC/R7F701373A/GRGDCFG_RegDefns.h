#ifndef __DR7F701373_GRGDCFG_HEADER__
#define __DR7F701373_GRGDCFG_HEADER__



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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT0Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID0Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD0Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV0Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT1Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID1Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD1Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV1Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT2Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID2Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD2Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV2Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT3Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID3Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD3Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV3Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT4Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID4Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD4Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV4Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT5Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID5Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD5Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV5Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT6Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID6Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD6Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV6Bits_t;

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
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 _EN : 1;
    uint32 _LOCK : 1;
} MGDGRPROT7Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} MGDGRSPID7Bits_t;

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
    uint32 _AD : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRBAD7Bits_t;

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
    uint32 _ADV : 12;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MGDGRADV7Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    MGDGRPROT0Bits_t BIT;
} MGDGRPROT0_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID0Bits_t BIT;
} MGDGRSPID0_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD0Bits_t BIT;
} MGDGRBAD0_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV0Bits_t BIT;
} MGDGRADV0_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT1Bits_t BIT;
} MGDGRPROT1_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID1Bits_t BIT;
} MGDGRSPID1_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD1Bits_t BIT;
} MGDGRBAD1_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV1Bits_t BIT;
} MGDGRADV1_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT2Bits_t BIT;
} MGDGRPROT2_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID2Bits_t BIT;
} MGDGRSPID2_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD2Bits_t BIT;
} MGDGRBAD2_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV2Bits_t BIT;
} MGDGRADV2_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT3Bits_t BIT;
} MGDGRPROT3_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID3Bits_t BIT;
} MGDGRSPID3_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD3Bits_t BIT;
} MGDGRBAD3_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV3Bits_t BIT;
} MGDGRADV3_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT4Bits_t BIT;
} MGDGRPROT4_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID4Bits_t BIT;
} MGDGRSPID4_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD4Bits_t BIT;
} MGDGRBAD4_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV4Bits_t BIT;
} MGDGRADV4_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT5Bits_t BIT;
} MGDGRPROT5_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID5Bits_t BIT;
} MGDGRSPID5_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD5Bits_t BIT;
} MGDGRBAD5_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV5Bits_t BIT;
} MGDGRADV5_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT6Bits_t BIT;
} MGDGRPROT6_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID6Bits_t BIT;
} MGDGRSPID6_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD6Bits_t BIT;
} MGDGRBAD6_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV6Bits_t BIT;
} MGDGRADV6_t;

typedef union
{
    uint32 UINT32;
    MGDGRPROT7Bits_t BIT;
} MGDGRPROT7_t;

typedef union
{
    uint32 UINT32;
    MGDGRSPID7Bits_t BIT;
} MGDGRSPID7_t;

typedef union
{
    uint32 UINT32;
    MGDGRBAD7Bits_t BIT;
} MGDGRBAD7_t;

typedef union
{
    uint32 UINT32;
    MGDGRADV7Bits_t BIT;
} MGDGRADV7_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(MGDGRPROT0_BASE, 0xFFC49000, __READ_WRITE, MGDGRPROT0_t);
__IOREG(MGDGRSPID0_BASE, 0xFFC49004, __READ_WRITE, MGDGRSPID0_t);
__IOREG(MGDGRBAD0_BASE, 0xFFC49008, __READ_WRITE, MGDGRBAD0_t);
__IOREG(MGDGRADV0_BASE, 0xFFC4900C, __READ_WRITE, MGDGRADV0_t);
__IOREG(MGDGRPROT1_BASE, 0xFFC49010, __READ_WRITE, MGDGRPROT1_t);
__IOREG(MGDGRSPID1_BASE, 0xFFC49014, __READ_WRITE, MGDGRSPID1_t);
__IOREG(MGDGRBAD1_BASE, 0xFFC49018, __READ_WRITE, MGDGRBAD1_t);
__IOREG(MGDGRADV1_BASE, 0xFFC4901C, __READ_WRITE, MGDGRADV1_t);
__IOREG(MGDGRPROT2_BASE, 0xFFC49020, __READ_WRITE, MGDGRPROT2_t);
__IOREG(MGDGRSPID2_BASE, 0xFFC49024, __READ_WRITE, MGDGRSPID2_t);
__IOREG(MGDGRBAD2_BASE, 0xFFC49028, __READ_WRITE, MGDGRBAD2_t);
__IOREG(MGDGRADV2_BASE, 0xFFC4902C, __READ_WRITE, MGDGRADV2_t);
__IOREG(MGDGRPROT3_BASE, 0xFFC49030, __READ_WRITE, MGDGRPROT3_t);
__IOREG(MGDGRSPID3_BASE, 0xFFC49034, __READ_WRITE, MGDGRSPID3_t);
__IOREG(MGDGRBAD3_BASE, 0xFFC49038, __READ_WRITE, MGDGRBAD3_t);
__IOREG(MGDGRADV3_BASE, 0xFFC4903C, __READ_WRITE, MGDGRADV3_t);
__IOREG(MGDGRPROT4_BASE, 0xFFC49040, __READ_WRITE, MGDGRPROT4_t);
__IOREG(MGDGRSPID4_BASE, 0xFFC49044, __READ_WRITE, MGDGRSPID4_t);
__IOREG(MGDGRBAD4_BASE, 0xFFC49048, __READ_WRITE, MGDGRBAD4_t);
__IOREG(MGDGRADV4_BASE, 0xFFC4904C, __READ_WRITE, MGDGRADV4_t);
__IOREG(MGDGRPROT5_BASE, 0xFFC49050, __READ_WRITE, MGDGRPROT5_t);
__IOREG(MGDGRSPID5_BASE, 0xFFC49054, __READ_WRITE, MGDGRSPID5_t);
__IOREG(MGDGRBAD5_BASE, 0xFFC49058, __READ_WRITE, MGDGRBAD5_t);
__IOREG(MGDGRADV5_BASE, 0xFFC4905C, __READ_WRITE, MGDGRADV5_t);
__IOREG(MGDGRPROT6_BASE, 0xFFC49060, __READ_WRITE, MGDGRPROT6_t);
__IOREG(MGDGRSPID6_BASE, 0xFFC49064, __READ_WRITE, MGDGRSPID6_t);
__IOREG(MGDGRBAD6_BASE, 0xFFC49068, __READ_WRITE, MGDGRBAD6_t);
__IOREG(MGDGRADV6_BASE, 0xFFC4906C, __READ_WRITE, MGDGRADV6_t);
__IOREG(MGDGRPROT7_BASE, 0xFFC49070, __READ_WRITE, MGDGRPROT7_t);
__IOREG(MGDGRSPID7_BASE, 0xFFC49074, __READ_WRITE, MGDGRSPID7_t);
__IOREG(MGDGRBAD7_BASE, 0xFFC49078, __READ_WRITE, MGDGRBAD7_t);
__IOREG(MGDGRADV7_BASE, 0xFFC4907C, __READ_WRITE, MGDGRADV7_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define MGDGRPROT0 MGDGRPROT0_BASE.UINT32
#define MGDGRPROT0_EN MGDGRPROT0_BASE.BIT._EN
#define MGDGRPROT0_LOCK MGDGRPROT0_BASE.BIT._LOCK
#define MGDGRSPID0 MGDGRSPID0_BASE.UINT32
#define MGDGRSPID0_SPID MGDGRSPID0_BASE.BIT._SPID
#define MGDGRBAD0 MGDGRBAD0_BASE.UINT32
#define MGDGRBAD0_AD MGDGRBAD0_BASE.BIT._AD
#define MGDGRADV0 MGDGRADV0_BASE.UINT32
#define MGDGRADV0_ADV MGDGRADV0_BASE.BIT._ADV
#define MGDGRPROT1 MGDGRPROT1_BASE.UINT32
#define MGDGRPROT1_EN MGDGRPROT1_BASE.BIT._EN
#define MGDGRPROT1_LOCK MGDGRPROT1_BASE.BIT._LOCK
#define MGDGRSPID1 MGDGRSPID1_BASE.UINT32
#define MGDGRSPID1_SPID MGDGRSPID1_BASE.BIT._SPID
#define MGDGRBAD1 MGDGRBAD1_BASE.UINT32
#define MGDGRBAD1_AD MGDGRBAD1_BASE.BIT._AD
#define MGDGRADV1 MGDGRADV1_BASE.UINT32
#define MGDGRADV1_ADV MGDGRADV1_BASE.BIT._ADV
#define MGDGRPROT2 MGDGRPROT2_BASE.UINT32
#define MGDGRPROT2_EN MGDGRPROT2_BASE.BIT._EN
#define MGDGRPROT2_LOCK MGDGRPROT2_BASE.BIT._LOCK
#define MGDGRSPID2 MGDGRSPID2_BASE.UINT32
#define MGDGRSPID2_SPID MGDGRSPID2_BASE.BIT._SPID
#define MGDGRBAD2 MGDGRBAD2_BASE.UINT32
#define MGDGRBAD2_AD MGDGRBAD2_BASE.BIT._AD
#define MGDGRADV2 MGDGRADV2_BASE.UINT32
#define MGDGRADV2_ADV MGDGRADV2_BASE.BIT._ADV
#define MGDGRPROT3 MGDGRPROT3_BASE.UINT32
#define MGDGRPROT3_EN MGDGRPROT3_BASE.BIT._EN
#define MGDGRPROT3_LOCK MGDGRPROT3_BASE.BIT._LOCK
#define MGDGRSPID3 MGDGRSPID3_BASE.UINT32
#define MGDGRSPID3_SPID MGDGRSPID3_BASE.BIT._SPID
#define MGDGRBAD3 MGDGRBAD3_BASE.UINT32
#define MGDGRBAD3_AD MGDGRBAD3_BASE.BIT._AD
#define MGDGRADV3 MGDGRADV3_BASE.UINT32
#define MGDGRADV3_ADV MGDGRADV3_BASE.BIT._ADV
#define MGDGRPROT4 MGDGRPROT4_BASE.UINT32
#define MGDGRPROT4_EN MGDGRPROT4_BASE.BIT._EN
#define MGDGRPROT4_LOCK MGDGRPROT4_BASE.BIT._LOCK
#define MGDGRSPID4 MGDGRSPID4_BASE.UINT32
#define MGDGRSPID4_SPID MGDGRSPID4_BASE.BIT._SPID
#define MGDGRBAD4 MGDGRBAD4_BASE.UINT32
#define MGDGRBAD4_AD MGDGRBAD4_BASE.BIT._AD
#define MGDGRADV4 MGDGRADV4_BASE.UINT32
#define MGDGRADV4_ADV MGDGRADV4_BASE.BIT._ADV
#define MGDGRPROT5 MGDGRPROT5_BASE.UINT32
#define MGDGRPROT5_EN MGDGRPROT5_BASE.BIT._EN
#define MGDGRPROT5_LOCK MGDGRPROT5_BASE.BIT._LOCK
#define MGDGRSPID5 MGDGRSPID5_BASE.UINT32
#define MGDGRSPID5_SPID MGDGRSPID5_BASE.BIT._SPID
#define MGDGRBAD5 MGDGRBAD5_BASE.UINT32
#define MGDGRBAD5_AD MGDGRBAD5_BASE.BIT._AD
#define MGDGRADV5 MGDGRADV5_BASE.UINT32
#define MGDGRADV5_ADV MGDGRADV5_BASE.BIT._ADV
#define MGDGRPROT6 MGDGRPROT6_BASE.UINT32
#define MGDGRPROT6_EN MGDGRPROT6_BASE.BIT._EN
#define MGDGRPROT6_LOCK MGDGRPROT6_BASE.BIT._LOCK
#define MGDGRSPID6 MGDGRSPID6_BASE.UINT32
#define MGDGRSPID6_SPID MGDGRSPID6_BASE.BIT._SPID
#define MGDGRBAD6 MGDGRBAD6_BASE.UINT32
#define MGDGRBAD6_AD MGDGRBAD6_BASE.BIT._AD
#define MGDGRADV6 MGDGRADV6_BASE.UINT32
#define MGDGRADV6_ADV MGDGRADV6_BASE.BIT._ADV
#define MGDGRPROT7 MGDGRPROT7_BASE.UINT32
#define MGDGRPROT7_EN MGDGRPROT7_BASE.BIT._EN
#define MGDGRPROT7_LOCK MGDGRPROT7_BASE.BIT._LOCK
#define MGDGRSPID7 MGDGRSPID7_BASE.UINT32
#define MGDGRSPID7_SPID MGDGRSPID7_BASE.BIT._SPID
#define MGDGRBAD7 MGDGRBAD7_BASE.UINT32
#define MGDGRBAD7_AD MGDGRBAD7_BASE.BIT._AD
#define MGDGRADV7 MGDGRADV7_BASE.UINT32
#define MGDGRADV7_ADV MGDGRADV7_BASE.BIT._ADV

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif