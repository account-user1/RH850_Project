#ifndef __DR7F701373_FSGD0A_HEADER__
#define __DR7F701373_FSGD0A_HEADER__



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
} APBFSGDPROT_PDMACM_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PDMACM_ABits_t;

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
} APBFSGDPROT_PDMACM_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PDMACM_BBits_t;

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
} APBFSGDPROT_PDMACH_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PDMACH_ABits_t;

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
} APBFSGDPROT_PDMACH_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_PDMACH_BBits_t;

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
} APBFSGDPROT_INTC2_ABits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_INTC2_ABits_t;

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
} APBFSGDPROT_INTC2_BBits_t;

typedef struct
{
    uint32 _SPID : 32;
} APBFSGDSPID_INTC2_BBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PDMACM_ABits_t BIT;
} APBFSGDPROT_PDMACM_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PDMACM_ABits_t BIT;
} APBFSGDSPID_PDMACM_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PDMACM_BBits_t BIT;
} APBFSGDPROT_PDMACM_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PDMACM_BBits_t BIT;
} APBFSGDSPID_PDMACM_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PDMACH_ABits_t BIT;
} APBFSGDPROT_PDMACH_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PDMACH_ABits_t BIT;
} APBFSGDSPID_PDMACH_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_PDMACH_BBits_t BIT;
} APBFSGDPROT_PDMACH_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_PDMACH_BBits_t BIT;
} APBFSGDSPID_PDMACH_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_INTC2_ABits_t BIT;
} APBFSGDPROT_INTC2_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_INTC2_ABits_t BIT;
} APBFSGDSPID_INTC2_A_t;

typedef union
{
    uint32 UINT32;
    APBFSGDPROT_INTC2_BBits_t BIT;
} APBFSGDPROT_INTC2_B_t;

typedef union
{
    uint32 UINT32;
    APBFSGDSPID_INTC2_BBits_t BIT;
} APBFSGDSPID_INTC2_B_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APBFSGDPROT_PDMACM_A_BASE, 0xFFC4C000, __READ_WRITE, APBFSGDPROT_PDMACM_A_t);
__IOREG(APBFSGDSPID_PDMACM_A_BASE, 0xFFC4C004, __READ_WRITE, APBFSGDSPID_PDMACM_A_t);
__IOREG(APBFSGDPROT_PDMACM_B_BASE, 0xFFC4C008, __READ_WRITE, APBFSGDPROT_PDMACM_B_t);
__IOREG(APBFSGDSPID_PDMACM_B_BASE, 0xFFC4C00C, __READ_WRITE, APBFSGDSPID_PDMACM_B_t);
__IOREG(APBFSGDPROT_PDMACH_A_BASE, 0xFFC4C010, __READ_WRITE, APBFSGDPROT_PDMACH_A_t);
__IOREG(APBFSGDSPID_PDMACH_A_BASE, 0xFFC4C014, __READ_WRITE, APBFSGDSPID_PDMACH_A_t);
__IOREG(APBFSGDPROT_PDMACH_B_BASE, 0xFFC4C018, __READ_WRITE, APBFSGDPROT_PDMACH_B_t);
__IOREG(APBFSGDSPID_PDMACH_B_BASE, 0xFFC4C01C, __READ_WRITE, APBFSGDSPID_PDMACH_B_t);
__IOREG(APBFSGDPROT_INTC2_A_BASE, 0xFFC4C020, __READ_WRITE, APBFSGDPROT_INTC2_A_t);
__IOREG(APBFSGDSPID_INTC2_A_BASE, 0xFFC4C024, __READ_WRITE, APBFSGDSPID_INTC2_A_t);
__IOREG(APBFSGDPROT_INTC2_B_BASE, 0xFFC4C028, __READ_WRITE, APBFSGDPROT_INTC2_B_t);
__IOREG(APBFSGDSPID_INTC2_B_BASE, 0xFFC4C02C, __READ_WRITE, APBFSGDSPID_INTC2_B_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APBFSGDPROT_PDMACM_A APBFSGDPROT_PDMACM_A_BASE.UINT32
#define APBFSGDPROT_PDMACM_A_PEID1 APBFSGDPROT_PDMACM_A_BASE.BIT._PEID1
#define APBFSGDPROT_PDMACM_A_PEID2 APBFSGDPROT_PDMACM_A_BASE.BIT._PEID2
#define APBFSGDPROT_PDMACM_A_PEID4 APBFSGDPROT_PDMACM_A_BASE.BIT._PEID4
#define APBFSGDPROT_PDMACM_A_PEID5 APBFSGDPROT_PDMACM_A_BASE.BIT._PEID5
#define APBFSGDPROT_PDMACM_A_LOCK APBFSGDPROT_PDMACM_A_BASE.BIT._LOCK
#define APBFSGDSPID_PDMACM_A APBFSGDSPID_PDMACM_A_BASE.UINT32
#define APBFSGDSPID_PDMACM_A_SPID APBFSGDSPID_PDMACM_A_BASE.BIT._SPID
#define APBFSGDPROT_PDMACM_B APBFSGDPROT_PDMACM_B_BASE.UINT32
#define APBFSGDPROT_PDMACM_B_PEID1 APBFSGDPROT_PDMACM_B_BASE.BIT._PEID1
#define APBFSGDPROT_PDMACM_B_PEID2 APBFSGDPROT_PDMACM_B_BASE.BIT._PEID2
#define APBFSGDPROT_PDMACM_B_PEID4 APBFSGDPROT_PDMACM_B_BASE.BIT._PEID4
#define APBFSGDPROT_PDMACM_B_PEID5 APBFSGDPROT_PDMACM_B_BASE.BIT._PEID5
#define APBFSGDPROT_PDMACM_B_LOCK APBFSGDPROT_PDMACM_B_BASE.BIT._LOCK
#define APBFSGDSPID_PDMACM_B APBFSGDSPID_PDMACM_B_BASE.UINT32
#define APBFSGDSPID_PDMACM_B_SPID APBFSGDSPID_PDMACM_B_BASE.BIT._SPID
#define APBFSGDPROT_PDMACH_A APBFSGDPROT_PDMACH_A_BASE.UINT32
#define APBFSGDPROT_PDMACH_A_PEID1 APBFSGDPROT_PDMACH_A_BASE.BIT._PEID1
#define APBFSGDPROT_PDMACH_A_PEID2 APBFSGDPROT_PDMACH_A_BASE.BIT._PEID2
#define APBFSGDPROT_PDMACH_A_PEID4 APBFSGDPROT_PDMACH_A_BASE.BIT._PEID4
#define APBFSGDPROT_PDMACH_A_PEID5 APBFSGDPROT_PDMACH_A_BASE.BIT._PEID5
#define APBFSGDPROT_PDMACH_A_LOCK APBFSGDPROT_PDMACH_A_BASE.BIT._LOCK
#define APBFSGDSPID_PDMACH_A APBFSGDSPID_PDMACH_A_BASE.UINT32
#define APBFSGDSPID_PDMACH_A_SPID APBFSGDSPID_PDMACH_A_BASE.BIT._SPID
#define APBFSGDPROT_PDMACH_B APBFSGDPROT_PDMACH_B_BASE.UINT32
#define APBFSGDPROT_PDMACH_B_PEID1 APBFSGDPROT_PDMACH_B_BASE.BIT._PEID1
#define APBFSGDPROT_PDMACH_B_PEID2 APBFSGDPROT_PDMACH_B_BASE.BIT._PEID2
#define APBFSGDPROT_PDMACH_B_PEID4 APBFSGDPROT_PDMACH_B_BASE.BIT._PEID4
#define APBFSGDPROT_PDMACH_B_PEID5 APBFSGDPROT_PDMACH_B_BASE.BIT._PEID5
#define APBFSGDPROT_PDMACH_B_LOCK APBFSGDPROT_PDMACH_B_BASE.BIT._LOCK
#define APBFSGDSPID_PDMACH_B APBFSGDSPID_PDMACH_B_BASE.UINT32
#define APBFSGDSPID_PDMACH_B_SPID APBFSGDSPID_PDMACH_B_BASE.BIT._SPID
#define APBFSGDPROT_INTC2_A APBFSGDPROT_INTC2_A_BASE.UINT32
#define APBFSGDPROT_INTC2_A_PEID1 APBFSGDPROT_INTC2_A_BASE.BIT._PEID1
#define APBFSGDPROT_INTC2_A_PEID2 APBFSGDPROT_INTC2_A_BASE.BIT._PEID2
#define APBFSGDPROT_INTC2_A_PEID4 APBFSGDPROT_INTC2_A_BASE.BIT._PEID4
#define APBFSGDPROT_INTC2_A_PEID5 APBFSGDPROT_INTC2_A_BASE.BIT._PEID5
#define APBFSGDPROT_INTC2_A_LOCK APBFSGDPROT_INTC2_A_BASE.BIT._LOCK
#define APBFSGDSPID_INTC2_A APBFSGDSPID_INTC2_A_BASE.UINT32
#define APBFSGDSPID_INTC2_A_SPID APBFSGDSPID_INTC2_A_BASE.BIT._SPID
#define APBFSGDPROT_INTC2_B APBFSGDPROT_INTC2_B_BASE.UINT32
#define APBFSGDPROT_INTC2_B_PEID1 APBFSGDPROT_INTC2_B_BASE.BIT._PEID1
#define APBFSGDPROT_INTC2_B_PEID2 APBFSGDPROT_INTC2_B_BASE.BIT._PEID2
#define APBFSGDPROT_INTC2_B_PEID4 APBFSGDPROT_INTC2_B_BASE.BIT._PEID4
#define APBFSGDPROT_INTC2_B_PEID5 APBFSGDPROT_INTC2_B_BASE.BIT._PEID5
#define APBFSGDPROT_INTC2_B_LOCK APBFSGDPROT_INTC2_B_BASE.BIT._LOCK
#define APBFSGDSPID_INTC2_B APBFSGDSPID_INTC2_B_BASE.UINT32
#define APBFSGDSPID_INTC2_B_SPID APBFSGDSPID_INTC2_B_BASE.BIT._SPID

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif