#ifndef __DR7F701373_ECCEEP0_HEADER__
#define __DR7F701373_ECCEEP0_HEADER__



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
} DFECCCTL0Bits_t;

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
} DFERSTR0Bits_t;

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
} DFERSTC0Bits_t;

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
} DFOVFSTR0Bits_t;

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
} DFOVFSTC0Bits_t;

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
} DFERRINT0Bits_t;

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
} DFEADR0Bits_t;

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
} DFTSTCTL0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    DFECCCTL0Bits_t BIT;
} DFECCCTL0_t;

typedef union
{
    uint32 UINT32;
    const DFERSTR0Bits_t BIT;
} DFERSTR0_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFERSTC0Bits_t BIT;
} DFERSTC0_t;

typedef union
{
    uint32 UINT32;
    const DFOVFSTR0Bits_t BIT;
} DFOVFSTR0_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFOVFSTC0Bits_t BIT;
} DFOVFSTC0_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    DFERRINT0Bits_t BIT;
} DFERRINT0_t;

typedef union
{
    uint32 UINT32;
    const DFEADR0Bits_t BIT;
} DFEADR0_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    DFTSTCTL0Bits_t BIT;
} DFTSTCTL0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DFECCCTL0_BASE, 0xFFC5B000, __READ_WRITE, DFECCCTL0_t);
__IOREG(DFERSTR0_BASE, 0xFFC5B004, __READ, DFERSTR0_t);
__IOREG(DFERSTC0_BASE, 0xFFC5B008, __READ_WRITE, DFERSTC0_t);
__IOREG(DFOVFSTR0_BASE, 0xFFC5B00C, __READ, DFOVFSTR0_t);
__IOREG(DFOVFSTC0_BASE, 0xFFC5B010, __READ_WRITE, DFOVFSTC0_t);
__IOREG(DFERRINT0_BASE, 0xFFC5B014, __READ_WRITE, DFERRINT0_t);
__IOREG(DFEADR0_BASE, 0xFFC5B018, __READ, DFEADR0_t);
__IOREG(DFTSTCTL0_BASE, 0xFFC5B01C, __READ_WRITE, DFTSTCTL0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DFECCCTL0 DFECCCTL0_BASE.UINT32
#define DFECCCTL0L DFECCCTL0_BASE.UINT16[L]
#define DFECCCTL0H DFECCCTL0_BASE.UINT16[H]
#define DFECCCTL0_ECCDIS DFECCCTL0_BASE.BIT._ECCDIS
#define DFECCCTL0_SECDIS DFECCCTL0_BASE.BIT._SECDIS
#define DFECCCTL0_PROT0 DFECCCTL0_BASE.BIT._PROT0
#define DFECCCTL0_PROT1 DFECCCTL0_BASE.BIT._PROT1
#define DFERSTR0 DFERSTR0_BASE.UINT32
#define DFERSTR0_SEDF DFERSTR0_BASE.BIT._SEDF
#define DFERSTR0_DEDF DFERSTR0_BASE.BIT._DEDF
#define DFERSTC0 DFERSTC0_BASE.UINT32
#define DFERSTC0L DFERSTC0_BASE.UINT16[L]
#define DFERSTC0H DFERSTC0_BASE.UINT16[H]
#define DFERSTC0LL DFERSTC0_BASE.UINT8[LL]
#define DFERSTC0LH DFERSTC0_BASE.UINT8[LH]
#define DFERSTC0HL DFERSTC0_BASE.UINT8[HL]
#define DFERSTC0HH DFERSTC0_BASE.UINT8[HH]
#define DFERSTC0_ERRCLR DFERSTC0_BASE.BIT._ERRCLR
#define DFOVFSTR0 DFOVFSTR0_BASE.UINT32
#define DFOVFSTR0_ERROVF DFOVFSTR0_BASE.BIT._ERROVF
#define DFOVFSTC0 DFOVFSTC0_BASE.UINT32
#define DFOVFSTC0L DFOVFSTC0_BASE.UINT16[L]
#define DFOVFSTC0H DFOVFSTC0_BASE.UINT16[H]
#define DFOVFSTC0LL DFOVFSTC0_BASE.UINT8[LL]
#define DFOVFSTC0LH DFOVFSTC0_BASE.UINT8[LH]
#define DFOVFSTC0HL DFOVFSTC0_BASE.UINT8[HL]
#define DFOVFSTC0HH DFOVFSTC0_BASE.UINT8[HH]
#define DFOVFSTC0_ERROVFCLR DFOVFSTC0_BASE.BIT._ERROVFCLR
#define DFERRINT0 DFERRINT0_BASE.UINT32
#define DFERRINT0L DFERRINT0_BASE.UINT16[L]
#define DFERRINT0H DFERRINT0_BASE.UINT16[H]
#define DFERRINT0LL DFERRINT0_BASE.UINT8[LL]
#define DFERRINT0LH DFERRINT0_BASE.UINT8[LH]
#define DFERRINT0HL DFERRINT0_BASE.UINT8[HL]
#define DFERRINT0HH DFERRINT0_BASE.UINT8[HH]
#define DFERRINT0_SEDIE DFERRINT0_BASE.BIT._SEDIE
#define DFERRINT0_DEDIE DFERRINT0_BASE.BIT._DEDIE
#define DFERRINT0_EOVFIE DFERRINT0_BASE.BIT._EOVFIE
#define DFEADR0 DFEADR0_BASE.UINT32
#define DFEADR0_DFEADR DFEADR0_BASE.BIT._DFEADR
#define DFEADR0_DFEAREA DFEADR0_BASE.BIT._DFEAREA
#define DFTSTCTL0 DFTSTCTL0_BASE.UINT32
#define DFTSTCTL0L DFTSTCTL0_BASE.UINT16[L]
#define DFTSTCTL0H DFTSTCTL0_BASE.UINT16[H]
#define DFTSTCTL0_ECCTST DFTSTCTL0_BASE.BIT._ECCTST
#define DFTSTCTL0_PROT0 DFTSTCTL0_BASE.BIT._PROT0
#define DFTSTCTL0_PROT1 DFTSTCTL0_BASE.BIT._PROT1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif