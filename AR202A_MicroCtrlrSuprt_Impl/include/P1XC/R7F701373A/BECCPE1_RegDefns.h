#ifndef __DR7F701373_BECCPE1_HEADER__
#define __DR7F701373_BECCPE1_HEADER__



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
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
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
    uint32 _PROT0 : 1;
    uint32 _PROT1 : 1;
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
} IFECCCTL_PE1Bits_t;

typedef struct
{
    uint32 _SEDIE : 1;
    uint32 _DEDIE : 1;
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
} IFERRINT_PE1Bits_t;

typedef struct
{
    uint32 _STCLR : 1;
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
} IFERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _ERROVF : 1;
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
} IFOVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF : 1;
    const uint32 _DEDF : 1;
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
} IFERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} IFERADR_PE1Bits_t;

typedef struct
{
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
    uint32 _AECCDIS : 1;
    uint32 _ASECDIS : 1;
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
    uint32 _PROT0 : 1;
    uint32 _PROT1 : 1;
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
} LSSECCCTL_PE1Bits_t;

typedef struct
{
    uint32 _SEDIE : 1;
    uint32 _DEDIE : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _ASEDIE : 1;
    uint32 _ADEDIE : 1;
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
} LSSERRINT_PE1Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} LSSERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _ERROVF : 1;
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
} LSSOVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF : 1;
    const uint32 _DEDF : 1;
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
    const uint32 _ASEDF : 1;
    const uint32 _ADEDF : 1;
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
} LSSERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} LSSEADR_PE1Bits_t;

typedef struct
{
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
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
    uint32 _PROT0 : 1;
    uint32 _PROT1 : 1;
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
} LSMECCCTL_PE1Bits_t;

typedef struct
{
    uint32 _SEDIE : 1;
    uint32 _DEDIE : 1;
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
} LSMERRINT_PE1Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} LSMERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _ERROVF : 1;
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
} LSMOVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF : 1;
    const uint32 _DEDF : 1;
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
} LSMERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} LSMEADR_PE1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    IFECCCTL_PE1Bits_t BIT;
} IFECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    IFERRINT_PE1Bits_t BIT;
} IFERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    IFERSTCLR_PE1Bits_t BIT;
} IFERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IFOVFSTR_PE1Bits_t BIT;
} IFOVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IFERSTR_PE1Bits_t BIT;
} IFERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IFERADR_PE1Bits_t BIT;
} IFERADR_PE1_t;

typedef union
{
    uint32 UINT32;
    LSSECCCTL_PE1Bits_t BIT;
} LSSECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    LSSERRINT_PE1Bits_t BIT;
} LSSERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    LSSERSTCLR_PE1Bits_t BIT;
} LSSERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSSOVFSTR_PE1Bits_t BIT;
} LSSOVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSSERSTR_PE1Bits_t BIT;
} LSSERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSSEADR_PE1Bits_t BIT;
} LSSEADR_PE1_t;

typedef union
{
    uint32 UINT32;
    LSMECCCTL_PE1Bits_t BIT;
} LSMECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    LSMERRINT_PE1Bits_t BIT;
} LSMERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    LSMERSTCLR_PE1Bits_t BIT;
} LSMERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSMOVFSTR_PE1Bits_t BIT;
} LSMOVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSMERSTR_PE1Bits_t BIT;
} LSMERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LSMEADR_PE1Bits_t BIT;
} LSMEADR_PE1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(IFECCCTL_PE1_BASE, 0xFFC63400, __READ_WRITE, IFECCCTL_PE1_t);
__IOREG(IFERRINT_PE1_BASE, 0xFFC63404, __READ_WRITE, IFERRINT_PE1_t);
__IOREG(IFERSTCLR_PE1_BASE, 0xFFC63408, __READ_WRITE, IFERSTCLR_PE1_t);
__IOREG(IFOVFSTR_PE1_BASE, 0xFFC6340C, __READ, IFOVFSTR_PE1_t);
__IOREG(IFERSTR_PE1_BASE, 0xFFC63410, __READ, IFERSTR_PE1_t);
__IOREG(IFERADR_PE1_BASE, 0xFFC63450, __READ, IFERADR_PE1_t);
__IOREG(LSSECCCTL_PE1_BASE, 0xFFC66000, __READ_WRITE, LSSECCCTL_PE1_t);
__IOREG(LSSERRINT_PE1_BASE, 0xFFC66004, __READ_WRITE, LSSERRINT_PE1_t);
__IOREG(LSSERSTCLR_PE1_BASE, 0xFFC66008, __READ_WRITE, LSSERSTCLR_PE1_t);
__IOREG(LSSOVFSTR_PE1_BASE, 0xFFC6600C, __READ, LSSOVFSTR_PE1_t);
__IOREG(LSSERSTR_PE1_BASE, 0xFFC66010, __READ, LSSERSTR_PE1_t);
__IOREG(LSSEADR_PE1_BASE, 0xFFC66050, __READ, LSSEADR_PE1_t);
__IOREG(LSMECCCTL_PE1_BASE, 0xFFC66400, __READ_WRITE, LSMECCCTL_PE1_t);
__IOREG(LSMERRINT_PE1_BASE, 0xFFC66404, __READ_WRITE, LSMERRINT_PE1_t);
__IOREG(LSMERSTCLR_PE1_BASE, 0xFFC66408, __READ_WRITE, LSMERSTCLR_PE1_t);
__IOREG(LSMOVFSTR_PE1_BASE, 0xFFC6640C, __READ, LSMOVFSTR_PE1_t);
__IOREG(LSMERSTR_PE1_BASE, 0xFFC66410, __READ, LSMERSTR_PE1_t);
__IOREG(LSMEADR_PE1_BASE, 0xFFC66450, __READ, LSMEADR_PE1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define IFECCCTL_PE1 IFECCCTL_PE1_BASE.UINT32
#define IFECCCTL_PE1_ECCDIS IFECCCTL_PE1_BASE.BIT._ECCDIS
#define IFECCCTL_PE1_SECDIS IFECCCTL_PE1_BASE.BIT._SECDIS
#define IFECCCTL_PE1_PROT0 IFECCCTL_PE1_BASE.BIT._PROT0
#define IFECCCTL_PE1_PROT1 IFECCCTL_PE1_BASE.BIT._PROT1
#define IFERRINT_PE1 IFERRINT_PE1_BASE.UINT32
#define IFERRINT_PE1_SEDIE IFERRINT_PE1_BASE.BIT._SEDIE
#define IFERRINT_PE1_DEDIE IFERRINT_PE1_BASE.BIT._DEDIE
#define IFERSTCLR_PE1 IFERSTCLR_PE1_BASE.UINT32
#define IFERSTCLR_PE1_STCLR IFERSTCLR_PE1_BASE.BIT._STCLR
#define IFOVFSTR_PE1 IFOVFSTR_PE1_BASE.UINT32
#define IFOVFSTR_PE1_ERROVF IFOVFSTR_PE1_BASE.BIT._ERROVF
#define IFERSTR_PE1 IFERSTR_PE1_BASE.UINT32
#define IFERSTR_PE1_SEDF IFERSTR_PE1_BASE.BIT._SEDF
#define IFERSTR_PE1_DEDF IFERSTR_PE1_BASE.BIT._DEDF
#define IFERADR_PE1 IFERADR_PE1_BASE.UINT32
#define IFERADR_PE1_EADR IFERADR_PE1_BASE.BIT._EADR
#define LSSECCCTL_PE1 LSSECCCTL_PE1_BASE.UINT32
#define LSSECCCTL_PE1_ECCDIS LSSECCCTL_PE1_BASE.BIT._ECCDIS
#define LSSECCCTL_PE1_SECDIS LSSECCCTL_PE1_BASE.BIT._SECDIS
#define LSSECCCTL_PE1_AECCDIS LSSECCCTL_PE1_BASE.BIT._AECCDIS
#define LSSECCCTL_PE1_ASECDIS LSSECCCTL_PE1_BASE.BIT._ASECDIS
#define LSSECCCTL_PE1_PROT0 LSSECCCTL_PE1_BASE.BIT._PROT0
#define LSSECCCTL_PE1_PROT1 LSSECCCTL_PE1_BASE.BIT._PROT1
#define LSSERRINT_PE1 LSSERRINT_PE1_BASE.UINT32
#define LSSERRINT_PE1_SEDIE LSSERRINT_PE1_BASE.BIT._SEDIE
#define LSSERRINT_PE1_DEDIE LSSERRINT_PE1_BASE.BIT._DEDIE
#define LSSERRINT_PE1_ASEDIE LSSERRINT_PE1_BASE.BIT._ASEDIE
#define LSSERRINT_PE1_ADEDIE LSSERRINT_PE1_BASE.BIT._ADEDIE
#define LSSERSTCLR_PE1 LSSERSTCLR_PE1_BASE.UINT32
#define LSSERSTCLR_PE1_SSTLCR LSSERSTCLR_PE1_BASE.BIT._SSTLCR
#define LSSOVFSTR_PE1 LSSOVFSTR_PE1_BASE.UINT32
#define LSSOVFSTR_PE1_ERROVF LSSOVFSTR_PE1_BASE.BIT._ERROVF
#define LSSERSTR_PE1 LSSERSTR_PE1_BASE.UINT32
#define LSSERSTR_PE1_SEDF LSSERSTR_PE1_BASE.BIT._SEDF
#define LSSERSTR_PE1_DEDF LSSERSTR_PE1_BASE.BIT._DEDF
#define LSSERSTR_PE1_ASEDF LSSERSTR_PE1_BASE.BIT._ASEDF
#define LSSERSTR_PE1_ADEDF LSSERSTR_PE1_BASE.BIT._ADEDF
#define LSSEADR_PE1 LSSEADR_PE1_BASE.UINT32
#define LSSEADR_PE1_EADR LSSEADR_PE1_BASE.BIT._EADR
#define LSMECCCTL_PE1 LSMECCCTL_PE1_BASE.UINT32
#define LSMECCCTL_PE1_ECCDIS LSMECCCTL_PE1_BASE.BIT._ECCDIS
#define LSMECCCTL_PE1_SECDIS LSMECCCTL_PE1_BASE.BIT._SECDIS
#define LSMECCCTL_PE1_PROT0 LSMECCCTL_PE1_BASE.BIT._PROT0
#define LSMECCCTL_PE1_PROT1 LSMECCCTL_PE1_BASE.BIT._PROT1
#define LSMERRINT_PE1 LSMERRINT_PE1_BASE.UINT32
#define LSMERRINT_PE1_SEDIE LSMERRINT_PE1_BASE.BIT._SEDIE
#define LSMERRINT_PE1_DEDIE LSMERRINT_PE1_BASE.BIT._DEDIE
#define LSMERSTCLR_PE1 LSMERSTCLR_PE1_BASE.UINT32
#define LSMERSTCLR_PE1_SSTLCR LSMERSTCLR_PE1_BASE.BIT._SSTLCR
#define LSMOVFSTR_PE1 LSMOVFSTR_PE1_BASE.UINT32
#define LSMOVFSTR_PE1_ERROVF LSMOVFSTR_PE1_BASE.BIT._ERROVF
#define LSMERSTR_PE1 LSMERSTR_PE1_BASE.UINT32
#define LSMERSTR_PE1_SEDF LSMERSTR_PE1_BASE.BIT._SEDF
#define LSMERSTR_PE1_DEDF LSMERSTR_PE1_BASE.BIT._DEDF
#define LSMEADR_PE1 LSMEADR_PE1_BASE.UINT32
#define LSMEADR_PE1_EADR LSMEADR_PE1_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif