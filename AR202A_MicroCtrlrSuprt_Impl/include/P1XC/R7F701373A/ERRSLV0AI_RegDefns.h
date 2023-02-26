#ifndef __DR7F701373_ERRSLV0AI_HEADER__
#define __DR7F701373_ERRSLV0AI_HEADER__



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
} ERRSLVCTL_PBAREABits_t;

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
} ERRSLVSTAT_PBAREABits_t;

typedef struct
{
    const uint32 _WRITE : 1;
    const uint32 _STRB : 4;
    uint32 padding5 : 1;
    const uint32 _UM : 1;
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
} ERRSLVTYPE_PBAREABits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ERRSLVCTL_PBAREABits_t BIT;
} ERRSLVCTL_PBAREA_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVSTAT_PBAREABits_t BIT;
} ERRSLVSTAT_PBAREA_t;

typedef union
{
    uint32 UINT32;
    const ERRSLVTYPE_PBAREABits_t BIT;
} ERRSLVTYPE_PBAREA_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ERRSLVCTL_PBAREA_BASE, 0xFFC4C880, __READ_WRITE, ERRSLVCTL_PBAREA_t);
__IOREG(ERRSLVSTAT_PBAREA_BASE, 0xFFC4C884, __READ, ERRSLVSTAT_PBAREA_t);
__IOREG(ERRSLVTYPE_PBAREA_BASE, 0xFFC4C88C, __READ, ERRSLVTYPE_PBAREA_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ERRSLVCTL_PBAREA ERRSLVCTL_PBAREA_BASE.UINT32
#define ERRSLVCTL_PBAREA_CLRE ERRSLVCTL_PBAREA_BASE.BIT._CLRE
#define ERRSLVCTL_PBAREA_CLRO ERRSLVCTL_PBAREA_BASE.BIT._CLRO
#define ERRSLVSTAT_PBAREA ERRSLVSTAT_PBAREA_BASE.UINT32
#define ERRSLVSTAT_PBAREA_ERR ERRSLVSTAT_PBAREA_BASE.BIT._ERR
#define ERRSLVSTAT_PBAREA_OVF ERRSLVSTAT_PBAREA_BASE.BIT._OVF
#define ERRSLVTYPE_PBAREA ERRSLVTYPE_PBAREA_BASE.UINT32
#define ERRSLVTYPE_PBAREA_WRITE ERRSLVTYPE_PBAREA_BASE.BIT._WRITE
#define ERRSLVTYPE_PBAREA_STRB ERRSLVTYPE_PBAREA_BASE.BIT._STRB
#define ERRSLVTYPE_PBAREA_UM ERRSLVTYPE_PBAREA_BASE.BIT._UM
#define ERRSLVTYPE_PBAREA_PEID ERRSLVTYPE_PBAREA_BASE.BIT._PEID
#define ERRSLVTYPE_PBAREA_SPID ERRSLVTYPE_PBAREA_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif