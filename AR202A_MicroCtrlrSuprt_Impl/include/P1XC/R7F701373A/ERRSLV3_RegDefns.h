#ifndef __DR7F701373_ERRSLV3_HEADER__
#define __DR7F701373_ERRSLV3_HEADER__



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
    uint8 _CLRE : 1;
    uint8 _CLRO : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ERRSLV3CTLBits_t;

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
} ERRSLV3STATBits_t;

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
} ERRSLV3TYPEBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    ERRSLV3CTLBits_t BIT;
} ERRSLV3CTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV3STATBits_t BIT;
} ERRSLV3STAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV3TYPEBits_t BIT;
} ERRSLV3TYPE_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ERRSLV3CTL_BASE, 0xFFF94100, __READ_WRITE, ERRSLV3CTL_t);
__IOREG(ERRSLV3STAT_BASE, 0xFFF94104, __READ, ERRSLV3STAT_t);
__IOREG(ERRSLV3TYPE_BASE, 0xFFF9410C, __READ, ERRSLV3TYPE_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ERRSLV3CTL ERRSLV3CTL_BASE.UINT8
#define ERRSLV3CTL_CLRE ERRSLV3CTL_BASE.BIT._CLRE
#define ERRSLV3CTL_CLRO ERRSLV3CTL_BASE.BIT._CLRO
#define ERRSLV3STAT ERRSLV3STAT_BASE.UINT32
#define ERRSLV3STAT_ERR ERRSLV3STAT_BASE.BIT._ERR
#define ERRSLV3STAT_OVF ERRSLV3STAT_BASE.BIT._OVF
#define ERRSLV3TYPE ERRSLV3TYPE_BASE.UINT32
#define ERRSLV3TYPE_WRITE ERRSLV3TYPE_BASE.BIT._WRITE
#define ERRSLV3TYPE_PEID ERRSLV3TYPE_BASE.BIT._PEID
#define ERRSLV3TYPE_SPID ERRSLV3TYPE_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif