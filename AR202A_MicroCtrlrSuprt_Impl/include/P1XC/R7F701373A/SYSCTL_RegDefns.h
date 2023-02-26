#ifndef __DR7F701373_SYSCTL_HEADER__
#define __DR7F701373_SYSCTL_HEADER__



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
    uint32 _BC1 : 1;
    uint32 _BC2 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} BOOTCTRLBits_t;

typedef struct
{
    const uint32 _FLMD0 : 1;
    const uint32 _FLMD1 : 1;
    const uint32 _MODE0 : 1;
    const uint32 _MODE1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MODEBits_t;

typedef struct
{
    const uint32 _PRESF : 1;
    const uint32 _SRESF0 : 1;
    const uint32 _SRESF1 : 1;
    const uint32 _SRESF2 : 1;
    const uint32 _SRESF3 : 1;
    const uint32 _SRESF4 : 1;
    uint32 padding6 : 1;
    const uint32 _ARESF0 : 1;
    const uint32 _ARESF1 : 1;
    const uint32 _ARESF2 : 1;
    const uint32 _ARESF3 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} RESFBits_t;

typedef struct
{
    uint32 _PRESFC0 : 1;
    uint32 _SRESFC0 : 1;
    uint32 _SRESFC1 : 1;
    uint32 _SRESFC2 : 1;
    uint32 _SRESFC3 : 1;
    uint32 _SRESFC4 : 1;
    uint32 padding6 : 1;
    uint32 _ARESFC0 : 1;
    uint32 _ARESFC1 : 1;
    uint32 _ARESFC2 : 1;
    uint32 _ARESFC3 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} RESFCBits_t;

typedef struct
{
    uint32 _SWSRESA0_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWSRESA0Bits_t;

typedef struct
{
    uint32 _SWARESA0_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWARESA0Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_DTSRAMBits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_GRAMBits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM0Bits_t;

typedef struct
{
    uint32 _SWLRESA3_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA3Bits_t;

typedef struct
{
    const uint32 _SWLRESS3_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS3Bits_t;

typedef struct
{
    uint32 _MS_LM3 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM3Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM3Bits_t;

typedef struct
{
    uint32 _SWLRESA4_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA4Bits_t;

typedef struct
{
    const uint32 _SWLRESS4_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS4Bits_t;

typedef struct
{
    uint32 _MS_LM4 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM4Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM4Bits_t;

typedef struct
{
    uint32 _SWLRESA5_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA5Bits_t;

typedef struct
{
    const uint32 _SWLRESS5_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS5Bits_t;

typedef struct
{
    uint32 _MS_LM5 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM5Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM5Bits_t;

typedef struct
{
    uint32 _SWLRESA6_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA6Bits_t;

typedef struct
{
    const uint32 _SWLRESS6_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS6Bits_t;

typedef struct
{
    uint32 _MS_LM6 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM6Bits_t;

typedef struct
{
    uint32 _SWLRESA7_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA7Bits_t;

typedef struct
{
    const uint32 _SWLRESS7_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS7Bits_t;

typedef struct
{
    uint32 _MS_LM7 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM7Bits_t;

typedef struct
{
    uint32 _SWLRESA8_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA8Bits_t;

typedef struct
{
    const uint32 _SWLRESS8_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS8Bits_t;

typedef struct
{
    uint32 _MS_LM8 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM8Bits_t;

typedef struct
{
    uint32 _SWLRESA10_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA10Bits_t;

typedef struct
{
    const uint32 _SWLRESS10_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS10Bits_t;

typedef struct
{
    uint32 _MS_LM10 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM10Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM10Bits_t;

typedef struct
{
    uint32 _SWLRESA11_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA11Bits_t;

typedef struct
{
    const uint32 _SWLRESS11_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS11Bits_t;

typedef struct
{
    uint32 _MS_LM11 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM11Bits_t;

typedef struct
{
    uint32 _SWLRESA12_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA12Bits_t;

typedef struct
{
    const uint32 _SWLRESS12_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS12Bits_t;

typedef struct
{
    uint32 _MS_LM12 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM12Bits_t;

typedef struct
{
    uint32 _FHVE3CNT : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FHVE3Bits_t;

typedef struct
{
    uint32 _RESC0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} RESCBits_t;

typedef struct
{
    uint32 _CKSC4 : 4;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC4CBits_t;

typedef struct
{
    const uint32 _CLKACT4 : 4;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC4SBits_t;

typedef struct
{
    uint32 _SWSRESA1_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWSRESA1Bits_t;

typedef struct
{
    uint32 _SWARESA1_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWARESA1Bits_t;

typedef struct
{
    uint32 _SWLRESA2_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESA2Bits_t;

typedef struct
{
    const uint32 _SWLRESS2_0 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} SWLRESS2Bits_t;

typedef struct
{
    uint32 _MS_LM2 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} MSR_LM2Bits_t;

typedef struct
{
    uint32 _RZEROMD0 : 1;
    uint32 _RZEROMD1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} STAC_LM2Bits_t;

typedef struct
{
    const uint32 _ICUMLRESF0 : 1;
    const uint32 _ICUMLRESF1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ICUMRESFBits_t;

typedef struct
{
    uint32 _ICUMLRESFC0 : 1;
    uint32 _ICUMLRESFC1 : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ICUMRESFCBits_t;

typedef struct
{
    uint32 _CLKD0DIV : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD0DIVBits_t;

typedef struct
{
    const uint32 _CLKD0CLKACT : 1;
    const uint32 _CLKD0SYNC : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD0STATBits_t;

typedef struct
{
    uint32 _CLKD1DIV : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD1DIVBits_t;

typedef struct
{
    const uint32 _CLKD1CLKACT : 1;
    const uint32 _CLKD1SYNC : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD1STATBits_t;

typedef struct
{
    uint32 _CLKD2DIV : 10;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD2DIVBits_t;

typedef struct
{
    const uint32 _CLKD2CLKACT : 1;
    const uint32 _CLKD2SYNC : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD2STATBits_t;

typedef struct
{
    uint32 _CLKD3DIV : 10;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD3DIVBits_t;

typedef struct
{
    const uint32 _CLKD3CLKACT : 1;
    const uint32 _CLKD3SYNC : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CLKD3STATBits_t;

typedef struct
{
    uint32 _CKSC0 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC0CBits_t;

typedef struct
{
    const uint32 _CLKACT0 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC0SBits_t;

typedef struct
{
    uint32 _CKSC2 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC2CBits_t;

typedef struct
{
    const uint32 _CLKACT2 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC2SBits_t;

typedef struct
{
    uint32 _CKSC3 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC3CBits_t;

typedef struct
{
    const uint32 _CLKACT3 : 3;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} CKSC3SBits_t;

typedef struct
{
    uint32 _FHVE15CNT : 1;
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
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} FHVE15Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    BOOTCTRLBits_t BIT;
} BOOTCTRL_t;

typedef union
{
    uint32 UINT32;
    const MODEBits_t BIT;
} MODE_t;

typedef union
{
    uint32 UINT32;
    const RESFBits_t BIT;
} RESF_t;

typedef union
{
    uint32 UINT32;
    RESFCBits_t BIT;
} RESFC_t;

typedef union
{
    uint32 UINT32;
    SWSRESA0Bits_t BIT;
} SWSRESA0_t;

typedef union
{
    uint32 UINT32;
    SWARESA0Bits_t BIT;
} SWARESA0_t;

typedef union
{
    uint32 UINT32;
    STAC_DTSRAMBits_t BIT;
} STAC_DTSRAM_t;

typedef union
{
    uint32 UINT32;
    STAC_GRAMBits_t BIT;
} STAC_GRAM_t;

typedef union
{
    uint32 UINT32;
    STAC_LM0Bits_t BIT;
} STAC_LM0_t;

typedef union
{
    uint32 UINT32;
    SWLRESA3Bits_t BIT;
} SWLRESA3_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS3Bits_t BIT;
} SWLRESS3_t;

typedef union
{
    uint32 UINT32;
    MSR_LM3Bits_t BIT;
} MSR_LM3_t;

typedef union
{
    uint32 UINT32;
    STAC_LM3Bits_t BIT;
} STAC_LM3_t;

typedef union
{
    uint32 UINT32;
    SWLRESA4Bits_t BIT;
} SWLRESA4_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS4Bits_t BIT;
} SWLRESS4_t;

typedef union
{
    uint32 UINT32;
    MSR_LM4Bits_t BIT;
} MSR_LM4_t;

typedef union
{
    uint32 UINT32;
    STAC_LM4Bits_t BIT;
} STAC_LM4_t;

typedef union
{
    uint32 UINT32;
    SWLRESA5Bits_t BIT;
} SWLRESA5_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS5Bits_t BIT;
} SWLRESS5_t;

typedef union
{
    uint32 UINT32;
    MSR_LM5Bits_t BIT;
} MSR_LM5_t;

typedef union
{
    uint32 UINT32;
    STAC_LM5Bits_t BIT;
} STAC_LM5_t;

typedef union
{
    uint32 UINT32;
    SWLRESA6Bits_t BIT;
} SWLRESA6_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS6Bits_t BIT;
} SWLRESS6_t;

typedef union
{
    uint32 UINT32;
    MSR_LM6Bits_t BIT;
} MSR_LM6_t;

typedef union
{
    uint32 UINT32;
    SWLRESA7Bits_t BIT;
} SWLRESA7_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS7Bits_t BIT;
} SWLRESS7_t;

typedef union
{
    uint32 UINT32;
    MSR_LM7Bits_t BIT;
} MSR_LM7_t;

typedef union
{
    uint32 UINT32;
    SWLRESA8Bits_t BIT;
} SWLRESA8_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS8Bits_t BIT;
} SWLRESS8_t;

typedef union
{
    uint32 UINT32;
    MSR_LM8Bits_t BIT;
} MSR_LM8_t;

typedef union
{
    uint32 UINT32;
    SWLRESA10Bits_t BIT;
} SWLRESA10_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS10Bits_t BIT;
} SWLRESS10_t;

typedef union
{
    uint32 UINT32;
    MSR_LM10Bits_t BIT;
} MSR_LM10_t;

typedef union
{
    uint32 UINT32;
    STAC_LM10Bits_t BIT;
} STAC_LM10_t;

typedef union
{
    uint32 UINT32;
    SWLRESA11Bits_t BIT;
} SWLRESA11_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS11Bits_t BIT;
} SWLRESS11_t;

typedef union
{
    uint32 UINT32;
    MSR_LM11Bits_t BIT;
} MSR_LM11_t;

typedef union
{
    uint32 UINT32;
    SWLRESA12Bits_t BIT;
} SWLRESA12_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS12Bits_t BIT;
} SWLRESS12_t;

typedef union
{
    uint32 UINT32;
    MSR_LM12Bits_t BIT;
} MSR_LM12_t;

typedef union
{
    uint32 UINT32;
    FHVE3Bits_t BIT;
} FHVE3_t;

typedef union
{
    uint32 UINT32;
    RESCBits_t BIT;
} RESC_t;

typedef union
{
    uint32 UINT32;
    CKSC4CBits_t BIT;
} CKSC4C_t;

typedef union
{
    uint32 UINT32;
    const CKSC4SBits_t BIT;
} CKSC4S_t;

typedef union
{
    uint32 UINT32;
    SWSRESA1Bits_t BIT;
} SWSRESA1_t;

typedef union
{
    uint32 UINT32;
    SWARESA1Bits_t BIT;
} SWARESA1_t;

typedef union
{
    uint32 UINT32;
    SWLRESA2Bits_t BIT;
} SWLRESA2_t;

typedef union
{
    uint32 UINT32;
    const SWLRESS2Bits_t BIT;
} SWLRESS2_t;

typedef union
{
    uint32 UINT32;
    MSR_LM2Bits_t BIT;
} MSR_LM2_t;

typedef union
{
    uint32 UINT32;
    STAC_LM2Bits_t BIT;
} STAC_LM2_t;

typedef union
{
    uint32 UINT32;
    const ICUMRESFBits_t BIT;
} ICUMRESF_t;

typedef union
{
    uint32 UINT32;
    ICUMRESFCBits_t BIT;
} ICUMRESFC_t;

typedef union
{
    uint32 UINT32;
    CLKD0DIVBits_t BIT;
} CLKD0DIV_t;

typedef union
{
    uint32 UINT32;
    const CLKD0STATBits_t BIT;
} CLKD0STAT_t;

typedef union
{
    uint32 UINT32;
    CLKD1DIVBits_t BIT;
} CLKD1DIV_t;

typedef union
{
    uint32 UINT32;
    const CLKD1STATBits_t BIT;
} CLKD1STAT_t;

typedef union
{
    uint32 UINT32;
    CLKD2DIVBits_t BIT;
} CLKD2DIV_t;

typedef union
{
    uint32 UINT32;
    const CLKD2STATBits_t BIT;
} CLKD2STAT_t;

typedef union
{
    uint32 UINT32;
    CLKD3DIVBits_t BIT;
} CLKD3DIV_t;

typedef union
{
    uint32 UINT32;
    const CLKD3STATBits_t BIT;
} CLKD3STAT_t;

typedef union
{
    uint32 UINT32;
    CKSC0CBits_t BIT;
} CKSC0C_t;

typedef union
{
    uint32 UINT32;
    const CKSC0SBits_t BIT;
} CKSC0S_t;

typedef union
{
    uint32 UINT32;
    CKSC2CBits_t BIT;
} CKSC2C_t;

typedef union
{
    uint32 UINT32;
    const CKSC2SBits_t BIT;
} CKSC2S_t;

typedef union
{
    uint32 UINT32;
    CKSC3CBits_t BIT;
} CKSC3C_t;

typedef union
{
    uint32 UINT32;
    const CKSC3SBits_t BIT;
} CKSC3S_t;

typedef union
{
    uint32 UINT32;
    FHVE15Bits_t BIT;
} FHVE15_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(BOOTCTRL_BASE, 0xFFC58000, __READ_WRITE, BOOTCTRL_t);
__IOREG(MODE_BASE, 0xFFF80104, __READ, MODE_t);
__IOREG(RESF_BASE, 0xFFF81000, __READ, RESF_t);
__IOREG(RESFC_BASE, 0xFFF81008, __READ_WRITE, RESFC_t);
__IOREG(SWSRESA0_BASE, 0xFFF81100, __READ_WRITE, SWSRESA0_t);
__IOREG(SWARESA0_BASE, 0xFFF81200, __READ_WRITE, SWARESA0_t);
__IOREG(STAC_DTSRAM_BASE, 0xFFF81320, __READ_WRITE, STAC_DTSRAM_t);
__IOREG(STAC_GRAM_BASE, 0xFFF81420, __READ_WRITE, STAC_GRAM_t);
__IOREG(STAC_LM0_BASE, 0xFFF81520, __READ_WRITE, STAC_LM0_t);
__IOREG(SWLRESA3_BASE, 0xFFF81708, __READ_WRITE, SWLRESA3_t);
__IOREG(SWLRESS3_BASE, 0xFFF8170C, __READ, SWLRESS3_t);
__IOREG(MSR_LM3_BASE, 0xFFF81710, __READ_WRITE, MSR_LM3_t);
__IOREG(STAC_LM3_BASE, 0xFFF81720, __READ_WRITE, STAC_LM3_t);
__IOREG(SWLRESA4_BASE, 0xFFF81808, __READ_WRITE, SWLRESA4_t);
__IOREG(SWLRESS4_BASE, 0xFFF8180C, __READ, SWLRESS4_t);
__IOREG(MSR_LM4_BASE, 0xFFF81810, __READ_WRITE, MSR_LM4_t);
__IOREG(STAC_LM4_BASE, 0xFFF81820, __READ_WRITE, STAC_LM4_t);
__IOREG(SWLRESA5_BASE, 0xFFF81908, __READ_WRITE, SWLRESA5_t);
__IOREG(SWLRESS5_BASE, 0xFFF8190C, __READ, SWLRESS5_t);
__IOREG(MSR_LM5_BASE, 0xFFF81910, __READ_WRITE, MSR_LM5_t);
__IOREG(STAC_LM5_BASE, 0xFFF81920, __READ_WRITE, STAC_LM5_t);
__IOREG(SWLRESA6_BASE, 0xFFF81A08, __READ_WRITE, SWLRESA6_t);
__IOREG(SWLRESS6_BASE, 0xFFF81A0C, __READ, SWLRESS6_t);
__IOREG(MSR_LM6_BASE, 0xFFF81A10, __READ_WRITE, MSR_LM6_t);
__IOREG(SWLRESA7_BASE, 0xFFF81B08, __READ_WRITE, SWLRESA7_t);
__IOREG(SWLRESS7_BASE, 0xFFF81B0C, __READ, SWLRESS7_t);
__IOREG(MSR_LM7_BASE, 0xFFF81B10, __READ_WRITE, MSR_LM7_t);
__IOREG(SWLRESA8_BASE, 0xFFF81C08, __READ_WRITE, SWLRESA8_t);
__IOREG(SWLRESS8_BASE, 0xFFF81C0C, __READ, SWLRESS8_t);
__IOREG(MSR_LM8_BASE, 0xFFF81C10, __READ_WRITE, MSR_LM8_t);
__IOREG(SWLRESA10_BASE, 0xFFF81E08, __READ_WRITE, SWLRESA10_t);
__IOREG(SWLRESS10_BASE, 0xFFF81E0C, __READ, SWLRESS10_t);
__IOREG(MSR_LM10_BASE, 0xFFF81E10, __READ_WRITE, MSR_LM10_t);
__IOREG(STAC_LM10_BASE, 0xFFF81E20, __READ_WRITE, STAC_LM10_t);
__IOREG(SWLRESA11_BASE, 0xFFF81F08, __READ_WRITE, SWLRESA11_t);
__IOREG(SWLRESS11_BASE, 0xFFF81F0C, __READ, SWLRESS11_t);
__IOREG(MSR_LM11_BASE, 0xFFF81F10, __READ_WRITE, MSR_LM11_t);
__IOREG(SWLRESA12_BASE, 0xFFF82008, __READ_WRITE, SWLRESA12_t);
__IOREG(SWLRESS12_BASE, 0xFFF8200C, __READ, SWLRESS12_t);
__IOREG(MSR_LM12_BASE, 0xFFF82010, __READ_WRITE, MSR_LM12_t);
__IOREG(FHVE3_BASE, 0xFFF82410, __READ_WRITE, FHVE3_t);
__IOREG(RESC_BASE, 0xFFF82800, __READ_WRITE, RESC_t);
__IOREG(CKSC4C_BASE, 0xFFF84000, __READ_WRITE, CKSC4C_t);
__IOREG(CKSC4S_BASE, 0xFFF84008, __READ, CKSC4S_t);
__IOREG(SWSRESA1_BASE, 0xFFF86000, __READ_WRITE, SWSRESA1_t);
__IOREG(SWARESA1_BASE, 0xFFF86100, __READ_WRITE, SWARESA1_t);
__IOREG(SWLRESA2_BASE, 0xFFF86208, __READ_WRITE, SWLRESA2_t);
__IOREG(SWLRESS2_BASE, 0xFFF8620C, __READ, SWLRESS2_t);
__IOREG(MSR_LM2_BASE, 0xFFF86210, __READ_WRITE, MSR_LM2_t);
__IOREG(STAC_LM2_BASE, 0xFFF86220, __READ_WRITE, STAC_LM2_t);
__IOREG(ICUMRESF_BASE, 0xFFF86300, __READ, ICUMRESF_t);
__IOREG(ICUMRESFC_BASE, 0xFFF86308, __READ_WRITE, ICUMRESFC_t);
__IOREG(CLKD0DIV_BASE, 0xFFF88800, __READ_WRITE, CLKD0DIV_t);
__IOREG(CLKD0STAT_BASE, 0xFFF88804, __READ, CLKD0STAT_t);
__IOREG(CLKD1DIV_BASE, 0xFFF88808, __READ_WRITE, CLKD1DIV_t);
__IOREG(CLKD1STAT_BASE, 0xFFF8880C, __READ, CLKD1STAT_t);
__IOREG(CLKD2DIV_BASE, 0xFFF88810, __READ_WRITE, CLKD2DIV_t);
__IOREG(CLKD2STAT_BASE, 0xFFF88814, __READ, CLKD2STAT_t);
__IOREG(CLKD3DIV_BASE, 0xFFF88818, __READ_WRITE, CLKD3DIV_t);
__IOREG(CLKD3STAT_BASE, 0xFFF8881C, __READ, CLKD3STAT_t);
__IOREG(CKSC0C_BASE, 0xFFF89000, __READ_WRITE, CKSC0C_t);
__IOREG(CKSC0S_BASE, 0xFFF89008, __READ, CKSC0S_t);
__IOREG(CKSC2C_BASE, 0xFFF89080, __READ_WRITE, CKSC2C_t);
__IOREG(CKSC2S_BASE, 0xFFF89088, __READ, CKSC2S_t);
__IOREG(CKSC3C_BASE, 0xFFF890C0, __READ_WRITE, CKSC3C_t);
__IOREG(CKSC3S_BASE, 0xFFF890C8, __READ, CKSC3S_t);
__IOREG(FHVE15_BASE, 0xFFF8A430, __READ_WRITE, FHVE15_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define BOOTCTRL BOOTCTRL_BASE.UINT32
#define BOOTCTRL_BC1 BOOTCTRL_BASE.BIT._BC1
#define BOOTCTRL_BC2 BOOTCTRL_BASE.BIT._BC2
#define MODE MODE_BASE.UINT32
#define MODE_FLMD0 MODE_BASE.BIT._FLMD0
#define MODE_FLMD1 MODE_BASE.BIT._FLMD1
#define MODE_MODE0 MODE_BASE.BIT._MODE0
#define MODE_MODE1 MODE_BASE.BIT._MODE1
#define RESF RESF_BASE.UINT32
#define RESF_PRESF RESF_BASE.BIT._PRESF
#define RESF_SRESF0 RESF_BASE.BIT._SRESF0
#define RESF_SRESF1 RESF_BASE.BIT._SRESF1
#define RESF_SRESF2 RESF_BASE.BIT._SRESF2
#define RESF_SRESF3 RESF_BASE.BIT._SRESF3
#define RESF_SRESF4 RESF_BASE.BIT._SRESF4
#define RESF_ARESF0 RESF_BASE.BIT._ARESF0
#define RESF_ARESF1 RESF_BASE.BIT._ARESF1
#define RESF_ARESF2 RESF_BASE.BIT._ARESF2
#define RESF_ARESF3 RESF_BASE.BIT._ARESF3
#define RESFC RESFC_BASE.UINT32
#define RESFC_PRESFC0 RESFC_BASE.BIT._PRESFC0
#define RESFC_SRESFC0 RESFC_BASE.BIT._SRESFC0
#define RESFC_SRESFC1 RESFC_BASE.BIT._SRESFC1
#define RESFC_SRESFC2 RESFC_BASE.BIT._SRESFC2
#define RESFC_SRESFC3 RESFC_BASE.BIT._SRESFC3
#define RESFC_SRESFC4 RESFC_BASE.BIT._SRESFC4
#define RESFC_ARESFC0 RESFC_BASE.BIT._ARESFC0
#define RESFC_ARESFC1 RESFC_BASE.BIT._ARESFC1
#define RESFC_ARESFC2 RESFC_BASE.BIT._ARESFC2
#define RESFC_ARESFC3 RESFC_BASE.BIT._ARESFC3
#define SWSRESA0 SWSRESA0_BASE.UINT32
#define SWSRESA0_SWSRESA0_0 SWSRESA0_BASE.BIT._SWSRESA0_0
#define SWARESA0 SWARESA0_BASE.UINT32
#define SWARESA0_SWARESA0_0 SWARESA0_BASE.BIT._SWARESA0_0
#define STAC_DTSRAM STAC_DTSRAM_BASE.UINT32
#define STAC_DTSRAM_RZEROMD0 STAC_DTSRAM_BASE.BIT._RZEROMD0
#define STAC_DTSRAM_RZEROMD1 STAC_DTSRAM_BASE.BIT._RZEROMD1
#define STAC_GRAM STAC_GRAM_BASE.UINT32
#define STAC_GRAM_RZEROMD0 STAC_GRAM_BASE.BIT._RZEROMD0
#define STAC_GRAM_RZEROMD1 STAC_GRAM_BASE.BIT._RZEROMD1
#define STAC_LM0 STAC_LM0_BASE.UINT32
#define STAC_LM0_RZEROMD0 STAC_LM0_BASE.BIT._RZEROMD0
#define STAC_LM0_RZEROMD1 STAC_LM0_BASE.BIT._RZEROMD1
#define SWLRESA3 SWLRESA3_BASE.UINT32
#define SWLRESA3_SWLRESA3_0 SWLRESA3_BASE.BIT._SWLRESA3_0
#define SWLRESS3 SWLRESS3_BASE.UINT32
#define SWLRESS3_SWLRESS3_0 SWLRESS3_BASE.BIT._SWLRESS3_0
#define MSR_LM3 MSR_LM3_BASE.UINT32
#define MSR_LM3_MS_LM3 MSR_LM3_BASE.BIT._MS_LM3
#define STAC_LM3 STAC_LM3_BASE.UINT32
#define STAC_LM3_RZEROMD0 STAC_LM3_BASE.BIT._RZEROMD0
#define STAC_LM3_RZEROMD1 STAC_LM3_BASE.BIT._RZEROMD1
#define SWLRESA4 SWLRESA4_BASE.UINT32
#define SWLRESA4_SWLRESA4_0 SWLRESA4_BASE.BIT._SWLRESA4_0
#define SWLRESS4 SWLRESS4_BASE.UINT32
#define SWLRESS4_SWLRESS4_0 SWLRESS4_BASE.BIT._SWLRESS4_0
#define MSR_LM4 MSR_LM4_BASE.UINT32
#define MSR_LM4_MS_LM4 MSR_LM4_BASE.BIT._MS_LM4
#define STAC_LM4 STAC_LM4_BASE.UINT32
#define STAC_LM4_RZEROMD0 STAC_LM4_BASE.BIT._RZEROMD0
#define STAC_LM4_RZEROMD1 STAC_LM4_BASE.BIT._RZEROMD1
#define SWLRESA5 SWLRESA5_BASE.UINT32
#define SWLRESA5_SWLRESA5_0 SWLRESA5_BASE.BIT._SWLRESA5_0
#define SWLRESS5 SWLRESS5_BASE.UINT32
#define SWLRESS5_SWLRESS5_0 SWLRESS5_BASE.BIT._SWLRESS5_0
#define MSR_LM5 MSR_LM5_BASE.UINT32
#define MSR_LM5_MS_LM5 MSR_LM5_BASE.BIT._MS_LM5
#define STAC_LM5 STAC_LM5_BASE.UINT32
#define STAC_LM5_RZEROMD0 STAC_LM5_BASE.BIT._RZEROMD0
#define STAC_LM5_RZEROMD1 STAC_LM5_BASE.BIT._RZEROMD1
#define SWLRESA6 SWLRESA6_BASE.UINT32
#define SWLRESA6_SWLRESA6_0 SWLRESA6_BASE.BIT._SWLRESA6_0
#define SWLRESS6 SWLRESS6_BASE.UINT32
#define SWLRESS6_SWLRESS6_0 SWLRESS6_BASE.BIT._SWLRESS6_0
#define MSR_LM6 MSR_LM6_BASE.UINT32
#define MSR_LM6_MS_LM6 MSR_LM6_BASE.BIT._MS_LM6
#define SWLRESA7 SWLRESA7_BASE.UINT32
#define SWLRESA7_SWLRESA7_0 SWLRESA7_BASE.BIT._SWLRESA7_0
#define SWLRESS7 SWLRESS7_BASE.UINT32
#define SWLRESS7_SWLRESS7_0 SWLRESS7_BASE.BIT._SWLRESS7_0
#define MSR_LM7 MSR_LM7_BASE.UINT32
#define MSR_LM7_MS_LM7 MSR_LM7_BASE.BIT._MS_LM7
#define SWLRESA8 SWLRESA8_BASE.UINT32
#define SWLRESA8_SWLRESA8_0 SWLRESA8_BASE.BIT._SWLRESA8_0
#define SWLRESS8 SWLRESS8_BASE.UINT32
#define SWLRESS8_SWLRESS8_0 SWLRESS8_BASE.BIT._SWLRESS8_0
#define MSR_LM8 MSR_LM8_BASE.UINT32
#define MSR_LM8_MS_LM8 MSR_LM8_BASE.BIT._MS_LM8
#define SWLRESA10 SWLRESA10_BASE.UINT32
#define SWLRESA10_SWLRESA10_0 SWLRESA10_BASE.BIT._SWLRESA10_0
#define SWLRESS10 SWLRESS10_BASE.UINT32
#define SWLRESS10_SWLRESS10_0 SWLRESS10_BASE.BIT._SWLRESS10_0
#define MSR_LM10 MSR_LM10_BASE.UINT32
#define MSR_LM10_MS_LM10 MSR_LM10_BASE.BIT._MS_LM10
#define STAC_LM10 STAC_LM10_BASE.UINT32
#define STAC_LM10_RZEROMD0 STAC_LM10_BASE.BIT._RZEROMD0
#define STAC_LM10_RZEROMD1 STAC_LM10_BASE.BIT._RZEROMD1
#define SWLRESA11 SWLRESA11_BASE.UINT32
#define SWLRESA11_SWLRESA11_0 SWLRESA11_BASE.BIT._SWLRESA11_0
#define SWLRESS11 SWLRESS11_BASE.UINT32
#define SWLRESS11_SWLRESS11_0 SWLRESS11_BASE.BIT._SWLRESS11_0
#define MSR_LM11 MSR_LM11_BASE.UINT32
#define MSR_LM11_MS_LM11 MSR_LM11_BASE.BIT._MS_LM11
#define SWLRESA12 SWLRESA12_BASE.UINT32
#define SWLRESA12_SWLRESA12_0 SWLRESA12_BASE.BIT._SWLRESA12_0
#define SWLRESS12 SWLRESS12_BASE.UINT32
#define SWLRESS12_SWLRESS12_0 SWLRESS12_BASE.BIT._SWLRESS12_0
#define MSR_LM12 MSR_LM12_BASE.UINT32
#define MSR_LM12_MS_LM12 MSR_LM12_BASE.BIT._MS_LM12
#define FHVE3 FHVE3_BASE.UINT32
#define FHVE3_FHVE3CNT FHVE3_BASE.BIT._FHVE3CNT
#define RESC RESC_BASE.UINT32
#define RESC_RESC0 RESC_BASE.BIT._RESC0
#define CKSC4C CKSC4C_BASE.UINT32
#define CKSC4C_CKSC4 CKSC4C_BASE.BIT._CKSC4
#define CKSC4S CKSC4S_BASE.UINT32
#define CKSC4S_CLKACT4 CKSC4S_BASE.BIT._CLKACT4
#define SWSRESA1 SWSRESA1_BASE.UINT32
#define SWSRESA1_SWSRESA1_0 SWSRESA1_BASE.BIT._SWSRESA1_0
#define SWARESA1 SWARESA1_BASE.UINT32
#define SWARESA1_SWARESA1_0 SWARESA1_BASE.BIT._SWARESA1_0
#define SWLRESA2 SWLRESA2_BASE.UINT32
#define SWLRESA2_SWLRESA2_0 SWLRESA2_BASE.BIT._SWLRESA2_0
#define SWLRESS2 SWLRESS2_BASE.UINT32
#define SWLRESS2_SWLRESS2_0 SWLRESS2_BASE.BIT._SWLRESS2_0
#define MSR_LM2 MSR_LM2_BASE.UINT32
#define MSR_LM2_MS_LM2 MSR_LM2_BASE.BIT._MS_LM2
#define STAC_LM2 STAC_LM2_BASE.UINT32
#define STAC_LM2_RZEROMD0 STAC_LM2_BASE.BIT._RZEROMD0
#define STAC_LM2_RZEROMD1 STAC_LM2_BASE.BIT._RZEROMD1
#define ICUMRESF ICUMRESF_BASE.UINT32
#define ICUMRESF_ICUMLRESF0 ICUMRESF_BASE.BIT._ICUMLRESF0
#define ICUMRESF_ICUMLRESF1 ICUMRESF_BASE.BIT._ICUMLRESF1
#define ICUMRESFC ICUMRESFC_BASE.UINT32
#define ICUMRESFC_ICUMLRESFC0 ICUMRESFC_BASE.BIT._ICUMLRESFC0
#define ICUMRESFC_ICUMLRESFC1 ICUMRESFC_BASE.BIT._ICUMLRESFC1
#define CLKD0DIV CLKD0DIV_BASE.UINT32
#define CLKD0DIV_CLKD0DIV CLKD0DIV_BASE.BIT._CLKD0DIV
#define CLKD0STAT CLKD0STAT_BASE.UINT32
#define CLKD0STAT_CLKD0CLKACT CLKD0STAT_BASE.BIT._CLKD0CLKACT
#define CLKD0STAT_CLKD0SYNC CLKD0STAT_BASE.BIT._CLKD0SYNC
#define CLKD1DIV CLKD1DIV_BASE.UINT32
#define CLKD1DIV_CLKD1DIV CLKD1DIV_BASE.BIT._CLKD1DIV
#define CLKD1STAT CLKD1STAT_BASE.UINT32
#define CLKD1STAT_CLKD1CLKACT CLKD1STAT_BASE.BIT._CLKD1CLKACT
#define CLKD1STAT_CLKD1SYNC CLKD1STAT_BASE.BIT._CLKD1SYNC
#define CLKD2DIV CLKD2DIV_BASE.UINT32
#define CLKD2DIV_CLKD2DIV CLKD2DIV_BASE.BIT._CLKD2DIV
#define CLKD2STAT CLKD2STAT_BASE.UINT32
#define CLKD2STAT_CLKD2CLKACT CLKD2STAT_BASE.BIT._CLKD2CLKACT
#define CLKD2STAT_CLKD2SYNC CLKD2STAT_BASE.BIT._CLKD2SYNC
#define CLKD3DIV CLKD3DIV_BASE.UINT32
#define CLKD3DIV_CLKD3DIV CLKD3DIV_BASE.BIT._CLKD3DIV
#define CLKD3STAT CLKD3STAT_BASE.UINT32
#define CLKD3STAT_CLKD3CLKACT CLKD3STAT_BASE.BIT._CLKD3CLKACT
#define CLKD3STAT_CLKD3SYNC CLKD3STAT_BASE.BIT._CLKD3SYNC
#define CKSC0C CKSC0C_BASE.UINT32
#define CKSC0C_CKSC0 CKSC0C_BASE.BIT._CKSC0
#define CKSC0S CKSC0S_BASE.UINT32
#define CKSC0S_CLKACT0 CKSC0S_BASE.BIT._CLKACT0
#define CKSC2C CKSC2C_BASE.UINT32
#define CKSC2C_CKSC2 CKSC2C_BASE.BIT._CKSC2
#define CKSC2S CKSC2S_BASE.UINT32
#define CKSC2S_CLKACT2 CKSC2S_BASE.BIT._CLKACT2
#define CKSC3C CKSC3C_BASE.UINT32
#define CKSC3C_CKSC3 CKSC3C_BASE.BIT._CKSC3
#define CKSC3S CKSC3S_BASE.UINT32
#define CKSC3S_CLKACT3 CKSC3S_BASE.BIT._CLKACT3
#define FHVE15 FHVE15_BASE.UINT32
#define FHVE15_FHVE15CNT FHVE15_BASE.BIT._FHVE15CNT

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif