#ifndef __DR7F701373_ECCEEP1_HEADER__
#define __DR7F701373_ECCEEP1_HEADER__



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
} DFECCCTL1Bits_t;

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
} DFERSTR1Bits_t;

typedef struct
{
    uint32 _ERRCLR : 1;
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
} DFERSTC1Bits_t;

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
} DFOVFSTR1Bits_t;

typedef struct
{
    uint32 _ERROVFCLR : 1;
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
} DFOVFSTC1Bits_t;

typedef struct
{
    uint32 _SEDIE : 1;
    uint32 _DEDIE : 1;
    uint32 _EOVFIE : 1;
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
} DFERRINT1Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    const uint32 _DFEADR : 17;
    const uint32 _DFEAREA : 2;
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
} DFEADR1Bits_t;

typedef struct
{
    uint32 _ECCTST : 1;
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
} DFTSTCTL1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    DFECCCTL1Bits_t BIT;
} DFECCCTL1_t;

typedef union
{
    uint32 UINT32;
    const DFERSTR1Bits_t BIT;
} DFERSTR1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFERSTC1Bits_t BIT;
} DFERSTC1_t;

typedef union
{
    uint32 UINT32;
    const DFOVFSTR1Bits_t BIT;
} DFOVFSTR1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFOVFSTC1Bits_t BIT;
} DFOVFSTC1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFERRINT1Bits_t BIT;
} DFERRINT1_t;

typedef union
{
    uint32 UINT32;
    const DFEADR1Bits_t BIT;
} DFEADR1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    DFTSTCTL1Bits_t BIT;
} DFTSTCTL1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DFECCCTL1_BASE, 0xFFC5C000, __READ_WRITE, DFECCCTL1_t);
__IOREG(DFERSTR1_BASE, 0xFFC5C004, __READ, DFERSTR1_t);
__IOREG(DFERSTC1_BASE, 0xFFC5C008, __READ_WRITE, DFERSTC1_t);
__IOREG(DFOVFSTR1_BASE, 0xFFC5C00C, __READ, DFOVFSTR1_t);
__IOREG(DFOVFSTC1_BASE, 0xFFC5C010, __READ_WRITE, DFOVFSTC1_t);
__IOREG(DFERRINT1_BASE, 0xFFC5C014, __READ_WRITE, DFERRINT1_t);
__IOREG(DFEADR1_BASE, 0xFFC5C018, __READ, DFEADR1_t);
__IOREG(DFTSTCTL1_BASE, 0xFFC5C01C, __READ_WRITE, DFTSTCTL1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DFECCCTL1 DFECCCTL1_BASE.UINT32
#define DFECCCTL1L DFECCCTL1_BASE.UINT16[L]
#define DFECCCTL1H DFECCCTL1_BASE.UINT16[H]
#define DFECCCTL1_ECCDIS DFECCCTL1_BASE.BIT._ECCDIS
#define DFECCCTL1_SECDIS DFECCCTL1_BASE.BIT._SECDIS
#define DFECCCTL1_PROT0 DFECCCTL1_BASE.BIT._PROT0
#define DFECCCTL1_PROT1 DFECCCTL1_BASE.BIT._PROT1
#define DFERSTR1 DFERSTR1_BASE.UINT32
#define DFERSTR1_SEDF DFERSTR1_BASE.BIT._SEDF
#define DFERSTR1_DEDF DFERSTR1_BASE.BIT._DEDF
#define DFERSTC1 DFERSTC1_BASE.UINT32
#define DFERSTC1L DFERSTC1_BASE.UINT16[L]
#define DFERSTC1H DFERSTC1_BASE.UINT16[H]
#define DFERSTC1LL DFERSTC1_BASE.UINT8[LL]
#define DFERSTC1LH DFERSTC1_BASE.UINT8[LH]
#define DFERSTC1HL DFERSTC1_BASE.UINT8[HL]
#define DFERSTC1HH DFERSTC1_BASE.UINT8[HH]
#define DFERSTC1_ERRCLR DFERSTC1_BASE.BIT._ERRCLR
#define DFOVFSTR1 DFOVFSTR1_BASE.UINT32
#define DFOVFSTR1_ERROVF DFOVFSTR1_BASE.BIT._ERROVF
#define DFOVFSTC1 DFOVFSTC1_BASE.UINT32
#define DFOVFSTC1L DFOVFSTC1_BASE.UINT16[L]
#define DFOVFSTC1H DFOVFSTC1_BASE.UINT16[H]
#define DFOVFSTC1LL DFOVFSTC1_BASE.UINT8[LL]
#define DFOVFSTC1LH DFOVFSTC1_BASE.UINT8[LH]
#define DFOVFSTC1HL DFOVFSTC1_BASE.UINT8[HL]
#define DFOVFSTC1HH DFOVFSTC1_BASE.UINT8[HH]
#define DFOVFSTC1_ERROVFCLR DFOVFSTC1_BASE.BIT._ERROVFCLR
#define DFERRINT1 DFERRINT1_BASE.UINT32
#define DFERRINT1L DFERRINT1_BASE.UINT16[L]
#define DFERRINT1H DFERRINT1_BASE.UINT16[H]
#define DFERRINT1LL DFERRINT1_BASE.UINT8[LL]
#define DFERRINT1LH DFERRINT1_BASE.UINT8[LH]
#define DFERRINT1HL DFERRINT1_BASE.UINT8[HL]
#define DFERRINT1HH DFERRINT1_BASE.UINT8[HH]
#define DFERRINT1_SEDIE DFERRINT1_BASE.BIT._SEDIE
#define DFERRINT1_DEDIE DFERRINT1_BASE.BIT._DEDIE
#define DFERRINT1_EOVFIE DFERRINT1_BASE.BIT._EOVFIE
#define DFEADR1 DFEADR1_BASE.UINT32
#define DFEADR1_DFEADR DFEADR1_BASE.BIT._DFEADR
#define DFEADR1_DFEAREA DFEADR1_BASE.BIT._DFEAREA
#define DFTSTCTL1 DFTSTCTL1_BASE.UINT32
#define DFTSTCTL1L DFTSTCTL1_BASE.UINT16[L]
#define DFTSTCTL1H DFTSTCTL1_BASE.UINT16[H]
#define DFTSTCTL1_ECCTST DFTSTCTL1_BASE.BIT._ECCTST
#define DFTSTCTL1_PROT0 DFTSTCTL1_BASE.BIT._PROT0
#define DFTSTCTL1_PROT1 DFTSTCTL1_BASE.BIT._PROT1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif