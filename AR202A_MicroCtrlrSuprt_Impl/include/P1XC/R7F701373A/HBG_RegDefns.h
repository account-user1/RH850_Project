#ifndef __DR7F701373_HBG_HEADER__
#define __DR7F701373_HBG_HEADER__



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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDF0PROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDF0SPID00Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDF0PROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDF0SPID01Bits_t;

typedef struct
{
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLVF0CTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLVF0STATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLVF0TYPEBits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDF1PROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDF1SPID00Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDF1PROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDF1SPID01Bits_t;

typedef struct
{
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLVF1CTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLVF1STATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLVF1TYPEBits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDE0PROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDE0SPID00Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDE0PROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDE0SPID01Bits_t;

typedef struct
{
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLVE0CTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLVE0STATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLVE0TYPEBits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDE1PROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDE1SPID00Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDE1PROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDE1SPID01Bits_t;

typedef struct
{
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLVE1CTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLVE1STATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLVE1TYPEBits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT00Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID00Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT01Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID01Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT02Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID02Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT03Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID03Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT04Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID04Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT05Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID05Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT06Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID06Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT07Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID07Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT08Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID08Bits_t;

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
    uint32 _PEID : 6;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _LOCK : 1;
} FSGDM0PROT09Bits_t;

typedef struct
{
    uint32 _SPID : 32;
} FSGDM0SPID09Bits_t;

typedef struct
{
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLVM0CTLBits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} ERRSLVM0STATBits_t;

typedef struct
{
    const uint32 _WRITE : 1;
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
    const uint32 _PEID : 3;
    const uint32 _SPID : 5;
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
} ERRSLVM0TYPEBits_t;

typedef struct
{
    uint32 _SPID : 5;
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
} HSSPIDRG0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF0PROT00Bits_t BIT;
} FSGDF0PROT00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF0SPID00Bits_t BIT;
} FSGDF0SPID00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF0PROT01Bits_t BIT;
} FSGDF0PROT01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF0SPID01Bits_t BIT;
} FSGDF0SPID01_t;

typedef union
{
    uint8 UINT8;
    ERRSLVF0CTLBits_t BIT;
} ERRSLVF0CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVF0STATBits_t BIT;
} ERRSLVF0STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVF0TYPEBits_t BIT;
} ERRSLVF0TYPE_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF1PROT00Bits_t BIT;
} FSGDF1PROT00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF1SPID00Bits_t BIT;
} FSGDF1SPID00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF1PROT01Bits_t BIT;
} FSGDF1PROT01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDF1SPID01Bits_t BIT;
} FSGDF1SPID01_t;

typedef union
{
    uint8 UINT8;
    ERRSLVF1CTLBits_t BIT;
} ERRSLVF1CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVF1STATBits_t BIT;
} ERRSLVF1STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVF1TYPEBits_t BIT;
} ERRSLVF1TYPE_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE0PROT00Bits_t BIT;
} FSGDE0PROT00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE0SPID00Bits_t BIT;
} FSGDE0SPID00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE0PROT01Bits_t BIT;
} FSGDE0PROT01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE0SPID01Bits_t BIT;
} FSGDE0SPID01_t;

typedef union
{
    uint8 UINT8;
    ERRSLVE0CTLBits_t BIT;
} ERRSLVE0CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVE0STATBits_t BIT;
} ERRSLVE0STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVE0TYPEBits_t BIT;
} ERRSLVE0TYPE_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE1PROT00Bits_t BIT;
} FSGDE1PROT00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE1SPID00Bits_t BIT;
} FSGDE1SPID00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE1PROT01Bits_t BIT;
} FSGDE1PROT01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDE1SPID01Bits_t BIT;
} FSGDE1SPID01_t;

typedef union
{
    uint8 UINT8;
    ERRSLVE1CTLBits_t BIT;
} ERRSLVE1CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVE1STATBits_t BIT;
} ERRSLVE1STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVE1TYPEBits_t BIT;
} ERRSLVE1TYPE_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT00Bits_t BIT;
} FSGDM0PROT00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID00Bits_t BIT;
} FSGDM0SPID00_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT01Bits_t BIT;
} FSGDM0PROT01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID01Bits_t BIT;
} FSGDM0SPID01_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT02Bits_t BIT;
} FSGDM0PROT02_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID02Bits_t BIT;
} FSGDM0SPID02_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT03Bits_t BIT;
} FSGDM0PROT03_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID03Bits_t BIT;
} FSGDM0SPID03_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT04Bits_t BIT;
} FSGDM0PROT04_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID04Bits_t BIT;
} FSGDM0SPID04_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT05Bits_t BIT;
} FSGDM0PROT05_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID05Bits_t BIT;
} FSGDM0SPID05_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT06Bits_t BIT;
} FSGDM0PROT06_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID06Bits_t BIT;
} FSGDM0SPID06_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT07Bits_t BIT;
} FSGDM0PROT07_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID07Bits_t BIT;
} FSGDM0SPID07_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT08Bits_t BIT;
} FSGDM0PROT08_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID08Bits_t BIT;
} FSGDM0SPID08_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0PROT09Bits_t BIT;
} FSGDM0PROT09_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    FSGDM0SPID09Bits_t BIT;
} FSGDM0SPID09_t;

typedef union
{
    uint8 UINT8;
    ERRSLVM0CTLBits_t BIT;
} ERRSLVM0CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVM0STATBits_t BIT;
} ERRSLVM0STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVM0TYPEBits_t BIT;
} ERRSLVM0TYPE_t;

typedef union
{
    uint32 UINT32;
    HSSPIDRG0Bits_t BIT;
} HSSPIDRG0_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG1_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG2_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG3_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG4_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG5_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG6_t;

typedef union
{
    uint32 UINT32;
} HSSPIDRG7_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FSGDF0PROT00_BASE, 0xFFFA0000, __READ_WRITE, FSGDF0PROT00_t);
__IOREG(FSGDF0SPID00_BASE, 0xFFFA0004, __READ_WRITE, FSGDF0SPID00_t);
__IOREG(FSGDF0PROT01_BASE, 0xFFFA0008, __READ_WRITE, FSGDF0PROT01_t);
__IOREG(FSGDF0SPID01_BASE, 0xFFFA000C, __READ_WRITE, FSGDF0SPID01_t);
__IOREG(ERRSLVF0CTL_BASE, 0xFFFA0010, __READ_WRITE, ERRSLVF0CTL_t);
__IOREG(ERRSLVF0STAT_BASE, 0xFFFA0014, __READ, ERRSLVF0STAT_t);
__IOREG(ERRSLVF0TYPE_BASE, 0xFFFA001C, __READ, ERRSLVF0TYPE_t);
__IOREG(FSGDF1PROT00_BASE, 0xFFFA0020, __READ_WRITE, FSGDF1PROT00_t);
__IOREG(FSGDF1SPID00_BASE, 0xFFFA0024, __READ_WRITE, FSGDF1SPID00_t);
__IOREG(FSGDF1PROT01_BASE, 0xFFFA0028, __READ_WRITE, FSGDF1PROT01_t);
__IOREG(FSGDF1SPID01_BASE, 0xFFFA002C, __READ_WRITE, FSGDF1SPID01_t);
__IOREG(ERRSLVF1CTL_BASE, 0xFFFA0030, __READ_WRITE, ERRSLVF1CTL_t);
__IOREG(ERRSLVF1STAT_BASE, 0xFFFA0034, __READ, ERRSLVF1STAT_t);
__IOREG(ERRSLVF1TYPE_BASE, 0xFFFA003C, __READ, ERRSLVF1TYPE_t);
__IOREG(FSGDE0PROT00_BASE, 0xFFFA0040, __READ_WRITE, FSGDE0PROT00_t);
__IOREG(FSGDE0SPID00_BASE, 0xFFFA0044, __READ_WRITE, FSGDE0SPID00_t);
__IOREG(FSGDE0PROT01_BASE, 0xFFFA0048, __READ_WRITE, FSGDE0PROT01_t);
__IOREG(FSGDE0SPID01_BASE, 0xFFFA004C, __READ_WRITE, FSGDE0SPID01_t);
__IOREG(ERRSLVE0CTL_BASE, 0xFFFA0050, __READ_WRITE, ERRSLVE0CTL_t);
__IOREG(ERRSLVE0STAT_BASE, 0xFFFA0054, __READ, ERRSLVE0STAT_t);
__IOREG(ERRSLVE0TYPE_BASE, 0xFFFA005C, __READ, ERRSLVE0TYPE_t);
__IOREG(FSGDE1PROT00_BASE, 0xFFFA0060, __READ_WRITE, FSGDE1PROT00_t);
__IOREG(FSGDE1SPID00_BASE, 0xFFFA0064, __READ_WRITE, FSGDE1SPID00_t);
__IOREG(FSGDE1PROT01_BASE, 0xFFFA0068, __READ_WRITE, FSGDE1PROT01_t);
__IOREG(FSGDE1SPID01_BASE, 0xFFFA006C, __READ_WRITE, FSGDE1SPID01_t);
__IOREG(ERRSLVE1CTL_BASE, 0xFFFA0070, __READ_WRITE, ERRSLVE1CTL_t);
__IOREG(ERRSLVE1STAT_BASE, 0xFFFA0074, __READ, ERRSLVE1STAT_t);
__IOREG(ERRSLVE1TYPE_BASE, 0xFFFA007C, __READ, ERRSLVE1TYPE_t);
__IOREG(FSGDM0PROT00_BASE, 0xFFFA0080, __READ_WRITE, FSGDM0PROT00_t);
__IOREG(FSGDM0SPID00_BASE, 0xFFFA0084, __READ_WRITE, FSGDM0SPID00_t);
__IOREG(FSGDM0PROT01_BASE, 0xFFFA0088, __READ_WRITE, FSGDM0PROT01_t);
__IOREG(FSGDM0SPID01_BASE, 0xFFFA008C, __READ_WRITE, FSGDM0SPID01_t);
__IOREG(FSGDM0PROT02_BASE, 0xFFFA0090, __READ_WRITE, FSGDM0PROT02_t);
__IOREG(FSGDM0SPID02_BASE, 0xFFFA0094, __READ_WRITE, FSGDM0SPID02_t);
__IOREG(FSGDM0PROT03_BASE, 0xFFFA0098, __READ_WRITE, FSGDM0PROT03_t);
__IOREG(FSGDM0SPID03_BASE, 0xFFFA009C, __READ_WRITE, FSGDM0SPID03_t);
__IOREG(FSGDM0PROT04_BASE, 0xFFFA00A0, __READ_WRITE, FSGDM0PROT04_t);
__IOREG(FSGDM0SPID04_BASE, 0xFFFA00A4, __READ_WRITE, FSGDM0SPID04_t);
__IOREG(FSGDM0PROT05_BASE, 0xFFFA00A8, __READ_WRITE, FSGDM0PROT05_t);
__IOREG(FSGDM0SPID05_BASE, 0xFFFA00AC, __READ_WRITE, FSGDM0SPID05_t);
__IOREG(FSGDM0PROT06_BASE, 0xFFFA00B0, __READ_WRITE, FSGDM0PROT06_t);
__IOREG(FSGDM0SPID06_BASE, 0xFFFA00B4, __READ_WRITE, FSGDM0SPID06_t);
__IOREG(FSGDM0PROT07_BASE, 0xFFFA00B8, __READ_WRITE, FSGDM0PROT07_t);
__IOREG(FSGDM0SPID07_BASE, 0xFFFA00BC, __READ_WRITE, FSGDM0SPID07_t);
__IOREG(FSGDM0PROT08_BASE, 0xFFFA00C0, __READ_WRITE, FSGDM0PROT08_t);
__IOREG(FSGDM0SPID08_BASE, 0xFFFA00C4, __READ_WRITE, FSGDM0SPID08_t);
__IOREG(FSGDM0PROT09_BASE, 0xFFFA00C8, __READ_WRITE, FSGDM0PROT09_t);
__IOREG(FSGDM0SPID09_BASE, 0xFFFA00CC, __READ_WRITE, FSGDM0SPID09_t);
__IOREG(ERRSLVM0CTL_BASE, 0xFFFA00D0, __READ_WRITE, ERRSLVM0CTL_t);
__IOREG(ERRSLVM0STAT_BASE, 0xFFFA00D4, __READ, ERRSLVM0STAT_t);
__IOREG(ERRSLVM0TYPE_BASE, 0xFFFA00DC, __READ, ERRSLVM0TYPE_t);
__IOREG(HSSPIDRG0_BASE, 0xFFFA1000, __READ_WRITE, HSSPIDRG0_t);
__IOREG(HSSPIDRG1_BASE, 0xFFFA1004, __READ_WRITE, HSSPIDRG1_t);
__IOREG(HSSPIDRG2_BASE, 0xFFFA1008, __READ_WRITE, HSSPIDRG2_t);
__IOREG(HSSPIDRG3_BASE, 0xFFFA100C, __READ_WRITE, HSSPIDRG3_t);
__IOREG(HSSPIDRG4_BASE, 0xFFFA1010, __READ_WRITE, HSSPIDRG4_t);
__IOREG(HSSPIDRG5_BASE, 0xFFFA1014, __READ_WRITE, HSSPIDRG5_t);
__IOREG(HSSPIDRG6_BASE, 0xFFFA1018, __READ_WRITE, HSSPIDRG6_t);
__IOREG(HSSPIDRG7_BASE, 0xFFFA101C, __READ_WRITE, HSSPIDRG7_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FSGDF0PROT00 FSGDF0PROT00_BASE.UINT32
#define FSGDF0PROT00L FSGDF0PROT00_BASE.UINT16[L]
#define FSGDF0PROT00H FSGDF0PROT00_BASE.UINT16[H]
#define FSGDF0PROT00LL FSGDF0PROT00_BASE.UINT8[LL]
#define FSGDF0PROT00LH FSGDF0PROT00_BASE.UINT8[LH]
#define FSGDF0PROT00HL FSGDF0PROT00_BASE.UINT8[HL]
#define FSGDF0PROT00HH FSGDF0PROT00_BASE.UINT8[HH]
#define FSGDF0PROT00_PEID FSGDF0PROT00_BASE.BIT._PEID
#define FSGDF0PROT00_LOCK FSGDF0PROT00_BASE.BIT._LOCK
#define FSGDF0SPID00 FSGDF0SPID00_BASE.UINT32
#define FSGDF0SPID00L FSGDF0SPID00_BASE.UINT16[L]
#define FSGDF0SPID00H FSGDF0SPID00_BASE.UINT16[H]
#define FSGDF0SPID00LL FSGDF0SPID00_BASE.UINT8[LL]
#define FSGDF0SPID00LH FSGDF0SPID00_BASE.UINT8[LH]
#define FSGDF0SPID00HL FSGDF0SPID00_BASE.UINT8[HL]
#define FSGDF0SPID00HH FSGDF0SPID00_BASE.UINT8[HH]
#define FSGDF0SPID00_SPID FSGDF0SPID00_BASE.BIT._SPID
#define FSGDF0PROT01 FSGDF0PROT01_BASE.UINT32
#define FSGDF0PROT01L FSGDF0PROT01_BASE.UINT16[L]
#define FSGDF0PROT01H FSGDF0PROT01_BASE.UINT16[H]
#define FSGDF0PROT01LL FSGDF0PROT01_BASE.UINT8[LL]
#define FSGDF0PROT01LH FSGDF0PROT01_BASE.UINT8[LH]
#define FSGDF0PROT01HL FSGDF0PROT01_BASE.UINT8[HL]
#define FSGDF0PROT01HH FSGDF0PROT01_BASE.UINT8[HH]
#define FSGDF0PROT01_PEID FSGDF0PROT01_BASE.BIT._PEID
#define FSGDF0PROT01_LOCK FSGDF0PROT01_BASE.BIT._LOCK
#define FSGDF0SPID01 FSGDF0SPID01_BASE.UINT32
#define FSGDF0SPID01L FSGDF0SPID01_BASE.UINT16[L]
#define FSGDF0SPID01H FSGDF0SPID01_BASE.UINT16[H]
#define FSGDF0SPID01LL FSGDF0SPID01_BASE.UINT8[LL]
#define FSGDF0SPID01LH FSGDF0SPID01_BASE.UINT8[LH]
#define FSGDF0SPID01HL FSGDF0SPID01_BASE.UINT8[HL]
#define FSGDF0SPID01HH FSGDF0SPID01_BASE.UINT8[HH]
#define FSGDF0SPID01_SPID FSGDF0SPID01_BASE.BIT._SPID
#define ERRSLVF0CTL ERRSLVF0CTL_BASE.UINT8
#define ERRSLVF0CTL_CLRE ERRSLVF0CTL_BASE.BIT._CLRE
#define ERRSLVF0CTL_CLRO ERRSLVF0CTL_BASE.BIT._CLRO
#define ERRSLVF0STAT ERRSLVF0STAT_BASE.UINT32
#define ERRSLVF0STAT_ERR ERRSLVF0STAT_BASE.BIT._ERR
#define ERRSLVF0STAT_OVF ERRSLVF0STAT_BASE.BIT._OVF
#define ERRSLVF0TYPE ERRSLVF0TYPE_BASE.UINT32
#define ERRSLVF0TYPE_WRITE ERRSLVF0TYPE_BASE.BIT._WRITE
#define ERRSLVF0TYPE_PEID ERRSLVF0TYPE_BASE.BIT._PEID
#define ERRSLVF0TYPE_SPID ERRSLVF0TYPE_BASE.BIT._SPID
#define FSGDF1PROT00 FSGDF1PROT00_BASE.UINT32
#define FSGDF1PROT00L FSGDF1PROT00_BASE.UINT16[L]
#define FSGDF1PROT00H FSGDF1PROT00_BASE.UINT16[H]
#define FSGDF1PROT00LL FSGDF1PROT00_BASE.UINT8[LL]
#define FSGDF1PROT00LH FSGDF1PROT00_BASE.UINT8[LH]
#define FSGDF1PROT00HL FSGDF1PROT00_BASE.UINT8[HL]
#define FSGDF1PROT00HH FSGDF1PROT00_BASE.UINT8[HH]
#define FSGDF1PROT00_PEID FSGDF1PROT00_BASE.BIT._PEID
#define FSGDF1PROT00_LOCK FSGDF1PROT00_BASE.BIT._LOCK
#define FSGDF1SPID00 FSGDF1SPID00_BASE.UINT32
#define FSGDF1SPID00L FSGDF1SPID00_BASE.UINT16[L]
#define FSGDF1SPID00H FSGDF1SPID00_BASE.UINT16[H]
#define FSGDF1SPID00LL FSGDF1SPID00_BASE.UINT8[LL]
#define FSGDF1SPID00LH FSGDF1SPID00_BASE.UINT8[LH]
#define FSGDF1SPID00HL FSGDF1SPID00_BASE.UINT8[HL]
#define FSGDF1SPID00HH FSGDF1SPID00_BASE.UINT8[HH]
#define FSGDF1SPID00_SPID FSGDF1SPID00_BASE.BIT._SPID
#define FSGDF1PROT01 FSGDF1PROT01_BASE.UINT32
#define FSGDF1PROT01L FSGDF1PROT01_BASE.UINT16[L]
#define FSGDF1PROT01H FSGDF1PROT01_BASE.UINT16[H]
#define FSGDF1PROT01LL FSGDF1PROT01_BASE.UINT8[LL]
#define FSGDF1PROT01LH FSGDF1PROT01_BASE.UINT8[LH]
#define FSGDF1PROT01HL FSGDF1PROT01_BASE.UINT8[HL]
#define FSGDF1PROT01HH FSGDF1PROT01_BASE.UINT8[HH]
#define FSGDF1PROT01_PEID FSGDF1PROT01_BASE.BIT._PEID
#define FSGDF1PROT01_LOCK FSGDF1PROT01_BASE.BIT._LOCK
#define FSGDF1SPID01 FSGDF1SPID01_BASE.UINT32
#define FSGDF1SPID01L FSGDF1SPID01_BASE.UINT16[L]
#define FSGDF1SPID01H FSGDF1SPID01_BASE.UINT16[H]
#define FSGDF1SPID01LL FSGDF1SPID01_BASE.UINT8[LL]
#define FSGDF1SPID01LH FSGDF1SPID01_BASE.UINT8[LH]
#define FSGDF1SPID01HL FSGDF1SPID01_BASE.UINT8[HL]
#define FSGDF1SPID01HH FSGDF1SPID01_BASE.UINT8[HH]
#define FSGDF1SPID01_SPID FSGDF1SPID01_BASE.BIT._SPID
#define ERRSLVF1CTL ERRSLVF1CTL_BASE.UINT8
#define ERRSLVF1CTL_CLRE ERRSLVF1CTL_BASE.BIT._CLRE
#define ERRSLVF1CTL_CLRO ERRSLVF1CTL_BASE.BIT._CLRO
#define ERRSLVF1STAT ERRSLVF1STAT_BASE.UINT32
#define ERRSLVF1STAT_ERR ERRSLVF1STAT_BASE.BIT._ERR
#define ERRSLVF1STAT_OVF ERRSLVF1STAT_BASE.BIT._OVF
#define ERRSLVF1TYPE ERRSLVF1TYPE_BASE.UINT32
#define ERRSLVF1TYPE_WRITE ERRSLVF1TYPE_BASE.BIT._WRITE
#define ERRSLVF1TYPE_PEID ERRSLVF1TYPE_BASE.BIT._PEID
#define ERRSLVF1TYPE_SPID ERRSLVF1TYPE_BASE.BIT._SPID
#define FSGDE0PROT00 FSGDE0PROT00_BASE.UINT32
#define FSGDE0PROT00L FSGDE0PROT00_BASE.UINT16[L]
#define FSGDE0PROT00H FSGDE0PROT00_BASE.UINT16[H]
#define FSGDE0PROT00LL FSGDE0PROT00_BASE.UINT8[LL]
#define FSGDE0PROT00LH FSGDE0PROT00_BASE.UINT8[LH]
#define FSGDE0PROT00HL FSGDE0PROT00_BASE.UINT8[HL]
#define FSGDE0PROT00HH FSGDE0PROT00_BASE.UINT8[HH]
#define FSGDE0PROT00_PEID FSGDE0PROT00_BASE.BIT._PEID
#define FSGDE0PROT00_LOCK FSGDE0PROT00_BASE.BIT._LOCK
#define FSGDE0SPID00 FSGDE0SPID00_BASE.UINT32
#define FSGDE0SPID00L FSGDE0SPID00_BASE.UINT16[L]
#define FSGDE0SPID00H FSGDE0SPID00_BASE.UINT16[H]
#define FSGDE0SPID00LL FSGDE0SPID00_BASE.UINT8[LL]
#define FSGDE0SPID00LH FSGDE0SPID00_BASE.UINT8[LH]
#define FSGDE0SPID00HL FSGDE0SPID00_BASE.UINT8[HL]
#define FSGDE0SPID00HH FSGDE0SPID00_BASE.UINT8[HH]
#define FSGDE0SPID00_SPID FSGDE0SPID00_BASE.BIT._SPID
#define FSGDE0PROT01 FSGDE0PROT01_BASE.UINT32
#define FSGDE0PROT01L FSGDE0PROT01_BASE.UINT16[L]
#define FSGDE0PROT01H FSGDE0PROT01_BASE.UINT16[H]
#define FSGDE0PROT01LL FSGDE0PROT01_BASE.UINT8[LL]
#define FSGDE0PROT01LH FSGDE0PROT01_BASE.UINT8[LH]
#define FSGDE0PROT01HL FSGDE0PROT01_BASE.UINT8[HL]
#define FSGDE0PROT01HH FSGDE0PROT01_BASE.UINT8[HH]
#define FSGDE0PROT01_PEID FSGDE0PROT01_BASE.BIT._PEID
#define FSGDE0PROT01_LOCK FSGDE0PROT01_BASE.BIT._LOCK
#define FSGDE0SPID01 FSGDE0SPID01_BASE.UINT32
#define FSGDE0SPID01L FSGDE0SPID01_BASE.UINT16[L]
#define FSGDE0SPID01H FSGDE0SPID01_BASE.UINT16[H]
#define FSGDE0SPID01LL FSGDE0SPID01_BASE.UINT8[LL]
#define FSGDE0SPID01LH FSGDE0SPID01_BASE.UINT8[LH]
#define FSGDE0SPID01HL FSGDE0SPID01_BASE.UINT8[HL]
#define FSGDE0SPID01HH FSGDE0SPID01_BASE.UINT8[HH]
#define FSGDE0SPID01_SPID FSGDE0SPID01_BASE.BIT._SPID
#define ERRSLVE0CTL ERRSLVE0CTL_BASE.UINT8
#define ERRSLVE0CTL_CLRE ERRSLVE0CTL_BASE.BIT._CLRE
#define ERRSLVE0CTL_CLRO ERRSLVE0CTL_BASE.BIT._CLRO
#define ERRSLVE0STAT ERRSLVE0STAT_BASE.UINT32
#define ERRSLVE0STAT_ERR ERRSLVE0STAT_BASE.BIT._ERR
#define ERRSLVE0STAT_OVF ERRSLVE0STAT_BASE.BIT._OVF
#define ERRSLVE0TYPE ERRSLVE0TYPE_BASE.UINT32
#define ERRSLVE0TYPE_WRITE ERRSLVE0TYPE_BASE.BIT._WRITE
#define ERRSLVE0TYPE_PEID ERRSLVE0TYPE_BASE.BIT._PEID
#define ERRSLVE0TYPE_SPID ERRSLVE0TYPE_BASE.BIT._SPID
#define FSGDE1PROT00 FSGDE1PROT00_BASE.UINT32
#define FSGDE1PROT00L FSGDE1PROT00_BASE.UINT16[L]
#define FSGDE1PROT00H FSGDE1PROT00_BASE.UINT16[H]
#define FSGDE1PROT00LL FSGDE1PROT00_BASE.UINT8[LL]
#define FSGDE1PROT00LH FSGDE1PROT00_BASE.UINT8[LH]
#define FSGDE1PROT00HL FSGDE1PROT00_BASE.UINT8[HL]
#define FSGDE1PROT00HH FSGDE1PROT00_BASE.UINT8[HH]
#define FSGDE1PROT00_PEID FSGDE1PROT00_BASE.BIT._PEID
#define FSGDE1PROT00_LOCK FSGDE1PROT00_BASE.BIT._LOCK
#define FSGDE1SPID00 FSGDE1SPID00_BASE.UINT32
#define FSGDE1SPID00L FSGDE1SPID00_BASE.UINT16[L]
#define FSGDE1SPID00H FSGDE1SPID00_BASE.UINT16[H]
#define FSGDE1SPID00LL FSGDE1SPID00_BASE.UINT8[LL]
#define FSGDE1SPID00LH FSGDE1SPID00_BASE.UINT8[LH]
#define FSGDE1SPID00HL FSGDE1SPID00_BASE.UINT8[HL]
#define FSGDE1SPID00HH FSGDE1SPID00_BASE.UINT8[HH]
#define FSGDE1SPID00_SPID FSGDE1SPID00_BASE.BIT._SPID
#define FSGDE1PROT01 FSGDE1PROT01_BASE.UINT32
#define FSGDE1PROT01L FSGDE1PROT01_BASE.UINT16[L]
#define FSGDE1PROT01H FSGDE1PROT01_BASE.UINT16[H]
#define FSGDE1PROT01LL FSGDE1PROT01_BASE.UINT8[LL]
#define FSGDE1PROT01LH FSGDE1PROT01_BASE.UINT8[LH]
#define FSGDE1PROT01HL FSGDE1PROT01_BASE.UINT8[HL]
#define FSGDE1PROT01HH FSGDE1PROT01_BASE.UINT8[HH]
#define FSGDE1PROT01_PEID FSGDE1PROT01_BASE.BIT._PEID
#define FSGDE1PROT01_LOCK FSGDE1PROT01_BASE.BIT._LOCK
#define FSGDE1SPID01 FSGDE1SPID01_BASE.UINT32
#define FSGDE1SPID01L FSGDE1SPID01_BASE.UINT16[L]
#define FSGDE1SPID01H FSGDE1SPID01_BASE.UINT16[H]
#define FSGDE1SPID01LL FSGDE1SPID01_BASE.UINT8[LL]
#define FSGDE1SPID01LH FSGDE1SPID01_BASE.UINT8[LH]
#define FSGDE1SPID01HL FSGDE1SPID01_BASE.UINT8[HL]
#define FSGDE1SPID01HH FSGDE1SPID01_BASE.UINT8[HH]
#define FSGDE1SPID01_SPID FSGDE1SPID01_BASE.BIT._SPID
#define ERRSLVE1CTL ERRSLVE1CTL_BASE.UINT8
#define ERRSLVE1CTL_CLRE ERRSLVE1CTL_BASE.BIT._CLRE
#define ERRSLVE1CTL_CLRO ERRSLVE1CTL_BASE.BIT._CLRO
#define ERRSLVE1STAT ERRSLVE1STAT_BASE.UINT32
#define ERRSLVE1STAT_ERR ERRSLVE1STAT_BASE.BIT._ERR
#define ERRSLVE1STAT_OVF ERRSLVE1STAT_BASE.BIT._OVF
#define ERRSLVE1TYPE ERRSLVE1TYPE_BASE.UINT32
#define ERRSLVE1TYPE_WRITE ERRSLVE1TYPE_BASE.BIT._WRITE
#define ERRSLVE1TYPE_PEID ERRSLVE1TYPE_BASE.BIT._PEID
#define ERRSLVE1TYPE_SPID ERRSLVE1TYPE_BASE.BIT._SPID
#define FSGDM0PROT00 FSGDM0PROT00_BASE.UINT32
#define FSGDM0PROT00L FSGDM0PROT00_BASE.UINT16[L]
#define FSGDM0PROT00H FSGDM0PROT00_BASE.UINT16[H]
#define FSGDM0PROT00LL FSGDM0PROT00_BASE.UINT8[LL]
#define FSGDM0PROT00LH FSGDM0PROT00_BASE.UINT8[LH]
#define FSGDM0PROT00HL FSGDM0PROT00_BASE.UINT8[HL]
#define FSGDM0PROT00HH FSGDM0PROT00_BASE.UINT8[HH]
#define FSGDM0PROT00_PEID FSGDM0PROT00_BASE.BIT._PEID
#define FSGDM0PROT00_LOCK FSGDM0PROT00_BASE.BIT._LOCK
#define FSGDM0SPID00 FSGDM0SPID00_BASE.UINT32
#define FSGDM0SPID00L FSGDM0SPID00_BASE.UINT16[L]
#define FSGDM0SPID00H FSGDM0SPID00_BASE.UINT16[H]
#define FSGDM0SPID00LL FSGDM0SPID00_BASE.UINT8[LL]
#define FSGDM0SPID00LH FSGDM0SPID00_BASE.UINT8[LH]
#define FSGDM0SPID00HL FSGDM0SPID00_BASE.UINT8[HL]
#define FSGDM0SPID00HH FSGDM0SPID00_BASE.UINT8[HH]
#define FSGDM0SPID00_SPID FSGDM0SPID00_BASE.BIT._SPID
#define FSGDM0PROT01 FSGDM0PROT01_BASE.UINT32
#define FSGDM0PROT01L FSGDM0PROT01_BASE.UINT16[L]
#define FSGDM0PROT01H FSGDM0PROT01_BASE.UINT16[H]
#define FSGDM0PROT01LL FSGDM0PROT01_BASE.UINT8[LL]
#define FSGDM0PROT01LH FSGDM0PROT01_BASE.UINT8[LH]
#define FSGDM0PROT01HL FSGDM0PROT01_BASE.UINT8[HL]
#define FSGDM0PROT01HH FSGDM0PROT01_BASE.UINT8[HH]
#define FSGDM0PROT01_PEID FSGDM0PROT01_BASE.BIT._PEID
#define FSGDM0PROT01_LOCK FSGDM0PROT01_BASE.BIT._LOCK
#define FSGDM0SPID01 FSGDM0SPID01_BASE.UINT32
#define FSGDM0SPID01L FSGDM0SPID01_BASE.UINT16[L]
#define FSGDM0SPID01H FSGDM0SPID01_BASE.UINT16[H]
#define FSGDM0SPID01LL FSGDM0SPID01_BASE.UINT8[LL]
#define FSGDM0SPID01LH FSGDM0SPID01_BASE.UINT8[LH]
#define FSGDM0SPID01HL FSGDM0SPID01_BASE.UINT8[HL]
#define FSGDM0SPID01HH FSGDM0SPID01_BASE.UINT8[HH]
#define FSGDM0SPID01_SPID FSGDM0SPID01_BASE.BIT._SPID
#define FSGDM0PROT02 FSGDM0PROT02_BASE.UINT32
#define FSGDM0PROT02L FSGDM0PROT02_BASE.UINT16[L]
#define FSGDM0PROT02H FSGDM0PROT02_BASE.UINT16[H]
#define FSGDM0PROT02LL FSGDM0PROT02_BASE.UINT8[LL]
#define FSGDM0PROT02LH FSGDM0PROT02_BASE.UINT8[LH]
#define FSGDM0PROT02HL FSGDM0PROT02_BASE.UINT8[HL]
#define FSGDM0PROT02HH FSGDM0PROT02_BASE.UINT8[HH]
#define FSGDM0PROT02_PEID FSGDM0PROT02_BASE.BIT._PEID
#define FSGDM0PROT02_LOCK FSGDM0PROT02_BASE.BIT._LOCK
#define FSGDM0SPID02 FSGDM0SPID02_BASE.UINT32
#define FSGDM0SPID02L FSGDM0SPID02_BASE.UINT16[L]
#define FSGDM0SPID02H FSGDM0SPID02_BASE.UINT16[H]
#define FSGDM0SPID02LL FSGDM0SPID02_BASE.UINT8[LL]
#define FSGDM0SPID02LH FSGDM0SPID02_BASE.UINT8[LH]
#define FSGDM0SPID02HL FSGDM0SPID02_BASE.UINT8[HL]
#define FSGDM0SPID02HH FSGDM0SPID02_BASE.UINT8[HH]
#define FSGDM0SPID02_SPID FSGDM0SPID02_BASE.BIT._SPID
#define FSGDM0PROT03 FSGDM0PROT03_BASE.UINT32
#define FSGDM0PROT03L FSGDM0PROT03_BASE.UINT16[L]
#define FSGDM0PROT03H FSGDM0PROT03_BASE.UINT16[H]
#define FSGDM0PROT03LL FSGDM0PROT03_BASE.UINT8[LL]
#define FSGDM0PROT03LH FSGDM0PROT03_BASE.UINT8[LH]
#define FSGDM0PROT03HL FSGDM0PROT03_BASE.UINT8[HL]
#define FSGDM0PROT03HH FSGDM0PROT03_BASE.UINT8[HH]
#define FSGDM0PROT03_PEID FSGDM0PROT03_BASE.BIT._PEID
#define FSGDM0PROT03_LOCK FSGDM0PROT03_BASE.BIT._LOCK
#define FSGDM0SPID03 FSGDM0SPID03_BASE.UINT32
#define FSGDM0SPID03L FSGDM0SPID03_BASE.UINT16[L]
#define FSGDM0SPID03H FSGDM0SPID03_BASE.UINT16[H]
#define FSGDM0SPID03LL FSGDM0SPID03_BASE.UINT8[LL]
#define FSGDM0SPID03LH FSGDM0SPID03_BASE.UINT8[LH]
#define FSGDM0SPID03HL FSGDM0SPID03_BASE.UINT8[HL]
#define FSGDM0SPID03HH FSGDM0SPID03_BASE.UINT8[HH]
#define FSGDM0SPID03_SPID FSGDM0SPID03_BASE.BIT._SPID
#define FSGDM0PROT04 FSGDM0PROT04_BASE.UINT32
#define FSGDM0PROT04L FSGDM0PROT04_BASE.UINT16[L]
#define FSGDM0PROT04H FSGDM0PROT04_BASE.UINT16[H]
#define FSGDM0PROT04LL FSGDM0PROT04_BASE.UINT8[LL]
#define FSGDM0PROT04LH FSGDM0PROT04_BASE.UINT8[LH]
#define FSGDM0PROT04HL FSGDM0PROT04_BASE.UINT8[HL]
#define FSGDM0PROT04HH FSGDM0PROT04_BASE.UINT8[HH]
#define FSGDM0PROT04_PEID FSGDM0PROT04_BASE.BIT._PEID
#define FSGDM0PROT04_LOCK FSGDM0PROT04_BASE.BIT._LOCK
#define FSGDM0SPID04 FSGDM0SPID04_BASE.UINT32
#define FSGDM0SPID04L FSGDM0SPID04_BASE.UINT16[L]
#define FSGDM0SPID04H FSGDM0SPID04_BASE.UINT16[H]
#define FSGDM0SPID04LL FSGDM0SPID04_BASE.UINT8[LL]
#define FSGDM0SPID04LH FSGDM0SPID04_BASE.UINT8[LH]
#define FSGDM0SPID04HL FSGDM0SPID04_BASE.UINT8[HL]
#define FSGDM0SPID04HH FSGDM0SPID04_BASE.UINT8[HH]
#define FSGDM0SPID04_SPID FSGDM0SPID04_BASE.BIT._SPID
#define FSGDM0PROT05 FSGDM0PROT05_BASE.UINT32
#define FSGDM0PROT05L FSGDM0PROT05_BASE.UINT16[L]
#define FSGDM0PROT05H FSGDM0PROT05_BASE.UINT16[H]
#define FSGDM0PROT05LL FSGDM0PROT05_BASE.UINT8[LL]
#define FSGDM0PROT05LH FSGDM0PROT05_BASE.UINT8[LH]
#define FSGDM0PROT05HL FSGDM0PROT05_BASE.UINT8[HL]
#define FSGDM0PROT05HH FSGDM0PROT05_BASE.UINT8[HH]
#define FSGDM0PROT05_PEID FSGDM0PROT05_BASE.BIT._PEID
#define FSGDM0PROT05_LOCK FSGDM0PROT05_BASE.BIT._LOCK
#define FSGDM0SPID05 FSGDM0SPID05_BASE.UINT32
#define FSGDM0SPID05L FSGDM0SPID05_BASE.UINT16[L]
#define FSGDM0SPID05H FSGDM0SPID05_BASE.UINT16[H]
#define FSGDM0SPID05LL FSGDM0SPID05_BASE.UINT8[LL]
#define FSGDM0SPID05LH FSGDM0SPID05_BASE.UINT8[LH]
#define FSGDM0SPID05HL FSGDM0SPID05_BASE.UINT8[HL]
#define FSGDM0SPID05HH FSGDM0SPID05_BASE.UINT8[HH]
#define FSGDM0SPID05_SPID FSGDM0SPID05_BASE.BIT._SPID
#define FSGDM0PROT06 FSGDM0PROT06_BASE.UINT32
#define FSGDM0PROT06L FSGDM0PROT06_BASE.UINT16[L]
#define FSGDM0PROT06H FSGDM0PROT06_BASE.UINT16[H]
#define FSGDM0PROT06LL FSGDM0PROT06_BASE.UINT8[LL]
#define FSGDM0PROT06LH FSGDM0PROT06_BASE.UINT8[LH]
#define FSGDM0PROT06HL FSGDM0PROT06_BASE.UINT8[HL]
#define FSGDM0PROT06HH FSGDM0PROT06_BASE.UINT8[HH]
#define FSGDM0PROT06_PEID FSGDM0PROT06_BASE.BIT._PEID
#define FSGDM0PROT06_LOCK FSGDM0PROT06_BASE.BIT._LOCK
#define FSGDM0SPID06 FSGDM0SPID06_BASE.UINT32
#define FSGDM0SPID06L FSGDM0SPID06_BASE.UINT16[L]
#define FSGDM0SPID06H FSGDM0SPID06_BASE.UINT16[H]
#define FSGDM0SPID06LL FSGDM0SPID06_BASE.UINT8[LL]
#define FSGDM0SPID06LH FSGDM0SPID06_BASE.UINT8[LH]
#define FSGDM0SPID06HL FSGDM0SPID06_BASE.UINT8[HL]
#define FSGDM0SPID06HH FSGDM0SPID06_BASE.UINT8[HH]
#define FSGDM0SPID06_SPID FSGDM0SPID06_BASE.BIT._SPID
#define FSGDM0PROT07 FSGDM0PROT07_BASE.UINT32
#define FSGDM0PROT07L FSGDM0PROT07_BASE.UINT16[L]
#define FSGDM0PROT07H FSGDM0PROT07_BASE.UINT16[H]
#define FSGDM0PROT07LL FSGDM0PROT07_BASE.UINT8[LL]
#define FSGDM0PROT07LH FSGDM0PROT07_BASE.UINT8[LH]
#define FSGDM0PROT07HL FSGDM0PROT07_BASE.UINT8[HL]
#define FSGDM0PROT07HH FSGDM0PROT07_BASE.UINT8[HH]
#define FSGDM0PROT07_PEID FSGDM0PROT07_BASE.BIT._PEID
#define FSGDM0PROT07_LOCK FSGDM0PROT07_BASE.BIT._LOCK
#define FSGDM0SPID07 FSGDM0SPID07_BASE.UINT32
#define FSGDM0SPID07L FSGDM0SPID07_BASE.UINT16[L]
#define FSGDM0SPID07H FSGDM0SPID07_BASE.UINT16[H]
#define FSGDM0SPID07LL FSGDM0SPID07_BASE.UINT8[LL]
#define FSGDM0SPID07LH FSGDM0SPID07_BASE.UINT8[LH]
#define FSGDM0SPID07HL FSGDM0SPID07_BASE.UINT8[HL]
#define FSGDM0SPID07HH FSGDM0SPID07_BASE.UINT8[HH]
#define FSGDM0SPID07_SPID FSGDM0SPID07_BASE.BIT._SPID
#define FSGDM0PROT08 FSGDM0PROT08_BASE.UINT32
#define FSGDM0PROT08L FSGDM0PROT08_BASE.UINT16[L]
#define FSGDM0PROT08H FSGDM0PROT08_BASE.UINT16[H]
#define FSGDM0PROT08LL FSGDM0PROT08_BASE.UINT8[LL]
#define FSGDM0PROT08LH FSGDM0PROT08_BASE.UINT8[LH]
#define FSGDM0PROT08HL FSGDM0PROT08_BASE.UINT8[HL]
#define FSGDM0PROT08HH FSGDM0PROT08_BASE.UINT8[HH]
#define FSGDM0PROT08_PEID FSGDM0PROT08_BASE.BIT._PEID
#define FSGDM0PROT08_LOCK FSGDM0PROT08_BASE.BIT._LOCK
#define FSGDM0SPID08 FSGDM0SPID08_BASE.UINT32
#define FSGDM0SPID08L FSGDM0SPID08_BASE.UINT16[L]
#define FSGDM0SPID08H FSGDM0SPID08_BASE.UINT16[H]
#define FSGDM0SPID08LL FSGDM0SPID08_BASE.UINT8[LL]
#define FSGDM0SPID08LH FSGDM0SPID08_BASE.UINT8[LH]
#define FSGDM0SPID08HL FSGDM0SPID08_BASE.UINT8[HL]
#define FSGDM0SPID08HH FSGDM0SPID08_BASE.UINT8[HH]
#define FSGDM0SPID08_SPID FSGDM0SPID08_BASE.BIT._SPID
#define FSGDM0PROT09 FSGDM0PROT09_BASE.UINT32
#define FSGDM0PROT09L FSGDM0PROT09_BASE.UINT16[L]
#define FSGDM0PROT09H FSGDM0PROT09_BASE.UINT16[H]
#define FSGDM0PROT09LL FSGDM0PROT09_BASE.UINT8[LL]
#define FSGDM0PROT09LH FSGDM0PROT09_BASE.UINT8[LH]
#define FSGDM0PROT09HL FSGDM0PROT09_BASE.UINT8[HL]
#define FSGDM0PROT09HH FSGDM0PROT09_BASE.UINT8[HH]
#define FSGDM0PROT09_PEID FSGDM0PROT09_BASE.BIT._PEID
#define FSGDM0PROT09_LOCK FSGDM0PROT09_BASE.BIT._LOCK
#define FSGDM0SPID09 FSGDM0SPID09_BASE.UINT32
#define FSGDM0SPID09L FSGDM0SPID09_BASE.UINT16[L]
#define FSGDM0SPID09H FSGDM0SPID09_BASE.UINT16[H]
#define FSGDM0SPID09LL FSGDM0SPID09_BASE.UINT8[LL]
#define FSGDM0SPID09LH FSGDM0SPID09_BASE.UINT8[LH]
#define FSGDM0SPID09HL FSGDM0SPID09_BASE.UINT8[HL]
#define FSGDM0SPID09HH FSGDM0SPID09_BASE.UINT8[HH]
#define FSGDM0SPID09_SPID FSGDM0SPID09_BASE.BIT._SPID
#define ERRSLVM0CTL ERRSLVM0CTL_BASE.UINT8
#define ERRSLVM0CTL_CLRE ERRSLVM0CTL_BASE.BIT._CLRE
#define ERRSLVM0CTL_CLRO ERRSLVM0CTL_BASE.BIT._CLRO
#define ERRSLVM0STAT ERRSLVM0STAT_BASE.UINT32
#define ERRSLVM0STAT_ERR ERRSLVM0STAT_BASE.BIT._ERR
#define ERRSLVM0STAT_OVF ERRSLVM0STAT_BASE.BIT._OVF
#define ERRSLVM0TYPE ERRSLVM0TYPE_BASE.UINT32
#define ERRSLVM0TYPE_WRITE ERRSLVM0TYPE_BASE.BIT._WRITE
#define ERRSLVM0TYPE_PEID ERRSLVM0TYPE_BASE.BIT._PEID
#define ERRSLVM0TYPE_SPID ERRSLVM0TYPE_BASE.BIT._SPID
#define HSSPIDRG0 HSSPIDRG0_BASE.UINT32
#define HSSPIDRG0_SPID HSSPIDRG0_BASE.BIT._SPID
#define HSSPIDRG1 HSSPIDRG1_BASE.UINT32
#define HSSPIDRG2 HSSPIDRG2_BASE.UINT32
#define HSSPIDRG3 HSSPIDRG3_BASE.UINT32
#define HSSPIDRG4 HSSPIDRG4_BASE.UINT32
#define HSSPIDRG5 HSSPIDRG5_BASE.UINT32
#define HSSPIDRG6 HSSPIDRG6_BASE.UINT32
#define HSSPIDRG7 HSSPIDRG7_BASE.UINT32

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif