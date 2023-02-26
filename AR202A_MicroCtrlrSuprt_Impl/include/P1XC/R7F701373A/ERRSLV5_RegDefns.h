#ifndef __DR7F701373_ERRSLV5_HEADER__
#define __DR7F701373_ERRSLV5_HEADER__



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
} ERRSLV5ACTLBits_t;

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
} ERRSLV5ASTATBits_t;

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
} ERRSLV5ATYPEBits_t;

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
} ERRSLV5BCTLBits_t;

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
} ERRSLV5BSTATBits_t;

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
} ERRSLV5BTYPEBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint8 UINT8;
    ERRSLV5ACTLBits_t BIT;
} ERRSLV5ACTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV5ASTATBits_t BIT;
} ERRSLV5ASTAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV5ATYPEBits_t BIT;
} ERRSLV5ATYPE_t;

typedef union
{
    uint8 UINT8;
    ERRSLV5BCTLBits_t BIT;
} ERRSLV5BCTL_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV5BSTATBits_t BIT;
} ERRSLV5BSTAT_t;

typedef union
{
    uint32 UINT32;
    const ERRSLV5BTYPEBits_t BIT;
} ERRSLV5BTYPE_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ERRSLV5ACTL_BASE, 0xFFC5A100, __READ_WRITE, ERRSLV5ACTL_t);
__IOREG(ERRSLV5ASTAT_BASE, 0xFFC5A104, __READ, ERRSLV5ASTAT_t);
__IOREG(ERRSLV5ATYPE_BASE, 0xFFC5A10C, __READ, ERRSLV5ATYPE_t);
__IOREG(ERRSLV5BCTL_BASE, 0xFFC5A300, __READ_WRITE, ERRSLV5BCTL_t);
__IOREG(ERRSLV5BSTAT_BASE, 0xFFC5A304, __READ, ERRSLV5BSTAT_t);
__IOREG(ERRSLV5BTYPE_BASE, 0xFFC5A30C, __READ, ERRSLV5BTYPE_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ERRSLV5ACTL ERRSLV5ACTL_BASE.UINT8
#define ERRSLV5ACTL_CLRE ERRSLV5ACTL_BASE.BIT._CLRE
#define ERRSLV5ACTL_CLRO ERRSLV5ACTL_BASE.BIT._CLRO
#define ERRSLV5ASTAT ERRSLV5ASTAT_BASE.UINT32
#define ERRSLV5ASTAT_ERR ERRSLV5ASTAT_BASE.BIT._ERR
#define ERRSLV5ASTAT_OVF ERRSLV5ASTAT_BASE.BIT._OVF
#define ERRSLV5ATYPE ERRSLV5ATYPE_BASE.UINT32
#define ERRSLV5ATYPE_WRITE ERRSLV5ATYPE_BASE.BIT._WRITE
#define ERRSLV5ATYPE_PEID ERRSLV5ATYPE_BASE.BIT._PEID
#define ERRSLV5ATYPE_SPID ERRSLV5ATYPE_BASE.BIT._SPID
#define ERRSLV5BCTL ERRSLV5BCTL_BASE.UINT8
#define ERRSLV5BCTL_CLRE ERRSLV5BCTL_BASE.BIT._CLRE
#define ERRSLV5BCTL_CLRO ERRSLV5BCTL_BASE.BIT._CLRO
#define ERRSLV5BSTAT ERRSLV5BSTAT_BASE.UINT32
#define ERRSLV5BSTAT_ERR ERRSLV5BSTAT_BASE.BIT._ERR
#define ERRSLV5BSTAT_OVF ERRSLV5BSTAT_BASE.BIT._OVF
#define ERRSLV5BTYPE ERRSLV5BTYPE_BASE.UINT32
#define ERRSLV5BTYPE_WRITE ERRSLV5BTYPE_BASE.BIT._WRITE
#define ERRSLV5BTYPE_PEID ERRSLV5BTYPE_BASE.BIT._PEID
#define ERRSLV5BTYPE_SPID ERRSLV5BTYPE_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif