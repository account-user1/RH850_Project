#ifndef __DR7F701373_FSGD0B_HEADER__
#define __DR7F701373_FSGD0B_HEADER__



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
} APBFSGDPROT_PBG_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PBG_ABits_t;

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
} APBFSGDPROT_PBG_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PBG_BBits_t;

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
} APBFSGDPROT_SP1_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_SP1_ABits_t;

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
} APBFSGDPROT_SP1_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_SP1_BBits_t;

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
} APBFSGDPROT_SP4_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_SP4_ABits_t;

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
} APBFSGDPROT_SP4_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_SP4_BBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PBG_ABits_t BIT;
} APBFSGDPROT_PBG_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PBG_ABits_t BIT;
} APBFSGDSPID_PBG_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PBG_BBits_t BIT;
} APBFSGDPROT_PBG_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PBG_BBits_t BIT;
} APBFSGDSPID_PBG_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_SP1_ABits_t BIT;
} APBFSGDPROT_SP1_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_SP1_ABits_t BIT;
} APBFSGDSPID_SP1_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_SP1_BBits_t BIT;
} APBFSGDPROT_SP1_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_SP1_BBits_t BIT;
} APBFSGDSPID_SP1_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_SP4_ABits_t BIT;
} APBFSGDPROT_SP4_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_SP4_ABits_t BIT;
} APBFSGDSPID_SP4_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_SP4_BBits_t BIT;
} APBFSGDPROT_SP4_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_SP4_BBits_t BIT;
} APBFSGDSPID_SP4_B_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APBFSGDPROT_PBG_A_BASE, 0xFFC4C040, __READ_WRITE, APBFSGDPROT_PBG_A_t);
__IOREG(APBFSGDSPID_PBG_A_BASE, 0xFFC4C044, __READ_WRITE, APBFSGDSPID_PBG_A_t);
__IOREG(APBFSGDPROT_PBG_B_BASE, 0xFFC4C048, __READ_WRITE, APBFSGDPROT_PBG_B_t);
__IOREG(APBFSGDSPID_PBG_B_BASE, 0xFFC4C04C, __READ_WRITE, APBFSGDSPID_PBG_B_t);
__IOREG(APBFSGDPROT_SP1_A_BASE, 0xFFC4C050, __READ_WRITE, APBFSGDPROT_SP1_A_t);
__IOREG(APBFSGDSPID_SP1_A_BASE, 0xFFC4C054, __READ_WRITE, APBFSGDSPID_SP1_A_t);
__IOREG(APBFSGDPROT_SP1_B_BASE, 0xFFC4C058, __READ_WRITE, APBFSGDPROT_SP1_B_t);
__IOREG(APBFSGDSPID_SP1_B_BASE, 0xFFC4C05C, __READ_WRITE, APBFSGDSPID_SP1_B_t);
__IOREG(APBFSGDPROT_SP4_A_BASE, 0xFFC4C070, __READ_WRITE, APBFSGDPROT_SP4_A_t);
__IOREG(APBFSGDSPID_SP4_A_BASE, 0xFFC4C074, __READ_WRITE, APBFSGDSPID_SP4_A_t);
__IOREG(APBFSGDPROT_SP4_B_BASE, 0xFFC4C078, __READ_WRITE, APBFSGDPROT_SP4_B_t);
__IOREG(APBFSGDSPID_SP4_B_BASE, 0xFFC4C07C, __READ_WRITE, APBFSGDSPID_SP4_B_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APBFSGDPROT_PBG_A APBFSGDPROT_PBG_A_BASE.UINT32
#define APBFSGDPROT_PBG_A_PEID1 APBFSGDPROT_PBG_A_BASE.BIT._PEID1
#define APBFSGDPROT_PBG_A_PEID2 APBFSGDPROT_PBG_A_BASE.BIT._PEID2
#define APBFSGDPROT_PBG_A_PEID4 APBFSGDPROT_PBG_A_BASE.BIT._PEID4
#define APBFSGDPROT_PBG_A_PEID5 APBFSGDPROT_PBG_A_BASE.BIT._PEID5
#define APBFSGDPROT_PBG_A_LOCK APBFSGDPROT_PBG_A_BASE.BIT._LOCK
#define APBFSGDSPID_PBG_A APBFSGDSPID_PBG_A_BASE.UINT32
#define APBFSGDSPID_PBG_A_SPID APBFSGDSPID_PBG_A_BASE.BIT._SPID
#define APBFSGDPROT_PBG_B APBFSGDPROT_PBG_B_BASE.UINT32
#define APBFSGDPROT_PBG_B_PEID1 APBFSGDPROT_PBG_B_BASE.BIT._PEID1
#define APBFSGDPROT_PBG_B_PEID2 APBFSGDPROT_PBG_B_BASE.BIT._PEID2
#define APBFSGDPROT_PBG_B_PEID4 APBFSGDPROT_PBG_B_BASE.BIT._PEID4
#define APBFSGDPROT_PBG_B_PEID5 APBFSGDPROT_PBG_B_BASE.BIT._PEID5
#define APBFSGDPROT_PBG_B_LOCK APBFSGDPROT_PBG_B_BASE.BIT._LOCK
#define APBFSGDSPID_PBG_B APBFSGDSPID_PBG_B_BASE.UINT32
#define APBFSGDSPID_PBG_B_SPID APBFSGDSPID_PBG_B_BASE.BIT._SPID
#define APBFSGDPROT_SP1_A APBFSGDPROT_SP1_A_BASE.UINT32
#define APBFSGDPROT_SP1_A_PEID1 APBFSGDPROT_SP1_A_BASE.BIT._PEID1
#define APBFSGDPROT_SP1_A_PEID2 APBFSGDPROT_SP1_A_BASE.BIT._PEID2
#define APBFSGDPROT_SP1_A_PEID4 APBFSGDPROT_SP1_A_BASE.BIT._PEID4
#define APBFSGDPROT_SP1_A_PEID5 APBFSGDPROT_SP1_A_BASE.BIT._PEID5
#define APBFSGDPROT_SP1_A_LOCK APBFSGDPROT_SP1_A_BASE.BIT._LOCK
#define APBFSGDSPID_SP1_A APBFSGDSPID_SP1_A_BASE.UINT32
#define APBFSGDSPID_SP1_A_SPID APBFSGDSPID_SP1_A_BASE.BIT._SPID
#define APBFSGDPROT_SP1_B APBFSGDPROT_SP1_B_BASE.UINT32
#define APBFSGDPROT_SP1_B_PEID1 APBFSGDPROT_SP1_B_BASE.BIT._PEID1
#define APBFSGDPROT_SP1_B_PEID2 APBFSGDPROT_SP1_B_BASE.BIT._PEID2
#define APBFSGDPROT_SP1_B_PEID4 APBFSGDPROT_SP1_B_BASE.BIT._PEID4
#define APBFSGDPROT_SP1_B_PEID5 APBFSGDPROT_SP1_B_BASE.BIT._PEID5
#define APBFSGDPROT_SP1_B_LOCK APBFSGDPROT_SP1_B_BASE.BIT._LOCK
#define APBFSGDSPID_SP1_B APBFSGDSPID_SP1_B_BASE.UINT32
#define APBFSGDSPID_SP1_B_SPID APBFSGDSPID_SP1_B_BASE.BIT._SPID
#define APBFSGDPROT_SP4_A APBFSGDPROT_SP4_A_BASE.UINT32
#define APBFSGDPROT_SP4_A_PEID1 APBFSGDPROT_SP4_A_BASE.BIT._PEID1
#define APBFSGDPROT_SP4_A_PEID2 APBFSGDPROT_SP4_A_BASE.BIT._PEID2
#define APBFSGDPROT_SP4_A_PEID4 APBFSGDPROT_SP4_A_BASE.BIT._PEID4
#define APBFSGDPROT_SP4_A_PEID5 APBFSGDPROT_SP4_A_BASE.BIT._PEID5
#define APBFSGDPROT_SP4_A_LOCK APBFSGDPROT_SP4_A_BASE.BIT._LOCK
#define APBFSGDSPID_SP4_A APBFSGDSPID_SP4_A_BASE.UINT32
#define APBFSGDSPID_SP4_A_SPID APBFSGDSPID_SP4_A_BASE.BIT._SPID
#define APBFSGDPROT_SP4_B APBFSGDPROT_SP4_B_BASE.UINT32
#define APBFSGDPROT_SP4_B_PEID1 APBFSGDPROT_SP4_B_BASE.BIT._PEID1
#define APBFSGDPROT_SP4_B_PEID2 APBFSGDPROT_SP4_B_BASE.BIT._PEID2
#define APBFSGDPROT_SP4_B_PEID4 APBFSGDPROT_SP4_B_BASE.BIT._PEID4
#define APBFSGDPROT_SP4_B_PEID5 APBFSGDPROT_SP4_B_BASE.BIT._PEID5
#define APBFSGDPROT_SP4_B_LOCK APBFSGDPROT_SP4_B_BASE.BIT._LOCK
#define APBFSGDSPID_SP4_B APBFSGDSPID_SP4_B_BASE.UINT32
#define APBFSGDSPID_SP4_B_SPID APBFSGDSPID_SP4_B_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif