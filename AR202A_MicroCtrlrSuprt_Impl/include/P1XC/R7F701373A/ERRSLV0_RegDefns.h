#ifndef __DR7F701373_ERRSLV0_HEADER__
#define __DR7F701373_ERRSLV0_HEADER__



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
    uint32 _CLRE : 1;
    uint32 _CLRO : 1;
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
} ERRSLVCTL_PFSS0Bits_t;

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
} ERRSLVSTAT_PFSS0Bits_t;

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
} ERRSLVTYPE_PFSS0Bits_t;

typedef struct
{
    uint32 _CLRE : 1;
    uint32 _CLRO : 1;
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
} ERRSLVCTL_PFSS1Bits_t;

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
} ERRSLVSTAT_PFSS1Bits_t;

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
} ERRSLVTYPE_PFSS1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ERRSLVCTL_PFSS0Bits_t BIT;
} ERRSLVCTL_PFSS0_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVSTAT_PFSS0Bits_t BIT;
} ERRSLVSTAT_PFSS0_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVTYPE_PFSS0Bits_t BIT;
} ERRSLVTYPE_PFSS0_t;

typedef union
{
    uint32 UINT32;
    ERRSLVCTL_PFSS1Bits_t BIT;
} ERRSLVCTL_PFSS1_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVSTAT_PFSS1Bits_t BIT;
} ERRSLVSTAT_PFSS1_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVTYPE_PFSS1Bits_t BIT;
} ERRSLVTYPE_PFSS1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ERRSLVCTL_PFSS0_BASE, 0xFFC4C800, __READ_WRITE, ERRSLVCTL_PFSS0_t);
__IOREG(ERRSLVSTAT_PFSS0_BASE, 0xFFC4C804, __READ, ERRSLVSTAT_PFSS0_t);
__IOREG(ERRSLVTYPE_PFSS0_BASE, 0xFFC4C80C, __READ, ERRSLVTYPE_PFSS0_t);
__IOREG(ERRSLVCTL_PFSS1_BASE, 0xFFC4C810, __READ_WRITE, ERRSLVCTL_PFSS1_t);
__IOREG(ERRSLVSTAT_PFSS1_BASE, 0xFFC4C814, __READ, ERRSLVSTAT_PFSS1_t);
__IOREG(ERRSLVTYPE_PFSS1_BASE, 0xFFC4C81C, __READ, ERRSLVTYPE_PFSS1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ERRSLVCTL_PFSS0 ERRSLVCTL_PFSS0_BASE.UINT32
#define ERRSLVCTL_PFSS0_CLRE ERRSLVCTL_PFSS0_BASE.BIT._CLRE
#define ERRSLVCTL_PFSS0_CLRO ERRSLVCTL_PFSS0_BASE.BIT._CLRO
#define ERRSLVSTAT_PFSS0 ERRSLVSTAT_PFSS0_BASE.UINT32
#define ERRSLVSTAT_PFSS0_ERR ERRSLVSTAT_PFSS0_BASE.BIT._ERR
#define ERRSLVSTAT_PFSS0_OVF ERRSLVSTAT_PFSS0_BASE.BIT._OVF
#define ERRSLVTYPE_PFSS0 ERRSLVTYPE_PFSS0_BASE.UINT32
#define ERRSLVTYPE_PFSS0_WRITE ERRSLVTYPE_PFSS0_BASE.BIT._WRITE
#define ERRSLVTYPE_PFSS0_PEID ERRSLVTYPE_PFSS0_BASE.BIT._PEID
#define ERRSLVTYPE_PFSS0_SPID ERRSLVTYPE_PFSS0_BASE.BIT._SPID
#define ERRSLVCTL_PFSS1 ERRSLVCTL_PFSS1_BASE.UINT32
#define ERRSLVCTL_PFSS1_CLRE ERRSLVCTL_PFSS1_BASE.BIT._CLRE
#define ERRSLVCTL_PFSS1_CLRO ERRSLVCTL_PFSS1_BASE.BIT._CLRO
#define ERRSLVSTAT_PFSS1 ERRSLVSTAT_PFSS1_BASE.UINT32
#define ERRSLVSTAT_PFSS1_ERR ERRSLVSTAT_PFSS1_BASE.BIT._ERR
#define ERRSLVSTAT_PFSS1_OVF ERRSLVSTAT_PFSS1_BASE.BIT._OVF
#define ERRSLVTYPE_PFSS1 ERRSLVTYPE_PFSS1_BASE.UINT32
#define ERRSLVTYPE_PFSS1_WRITE ERRSLVTYPE_PFSS1_BASE.BIT._WRITE
#define ERRSLVTYPE_PFSS1_PEID ERRSLVTYPE_PFSS1_BASE.BIT._PEID
#define ERRSLVTYPE_PFSS1_SPID ERRSLVTYPE_PFSS1_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif