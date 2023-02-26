#ifndef __DR7F701373_ECCPE1_HEADER__
#define __DR7F701373_ECCPE1_HEADER__



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
    uint32 _ECCDI : 1;
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
    uint32 _PROT : 2;
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
} IDECCCTL_PE1Bits_t;

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
} IDERRINT_PE1Bits_t;

typedef struct
{
    uint32 _SSTCL0 : 1;
    uint32 _SSTCL1 : 1;
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
} IDSERSTCLR_PE1Bits_t;

typedef struct
{
    uint32 _DSTCLR0 : 1;
    uint32 _DSTCLR1 : 1;
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
} IDDERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _SERROVF0 : 1;
    const uint32 _SERROVF1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _DERROVF0 : 1;
    const uint32 _DERROVF1 : 1;
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
} IDOVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _SEDF1 : 1;
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
} IDSERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _DEDF0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    const uint32 _DEDF1 : 1;
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
} IDDERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR : 9;
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
} IDSEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _DEADR : 9;
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
} IDDEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _DEADR : 9;
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
} IDDEDADR1_PE1Bits_t;

typedef struct
{
    uint32 _ECCDI : 1;
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
    uint32 _PROT : 2;
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
} ITECCCTL_PE1Bits_t;

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
} ITERRINT_PE1Bits_t;

typedef struct
{
    uint32 _SSTCL : 1;
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
} ITSERSTCLR_PE1Bits_t;

typedef struct
{
    uint32 _DSTCLR : 1;
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
} ITDERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _SERROVF : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _DERROVF : 1;
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
} ITOVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF : 1;
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
} ITSERSTR_PE1Bits_t;

typedef struct
{
    uint32 padding0 : 1;
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
} ITDERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR : 9;
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
} ITSEDADR_PE1Bits_t;

typedef struct
{
    const uint32 _DEADR : 9;
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
} ITDEDADR_PE1Bits_t;

typedef struct
{
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 _PROT : 2;
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
} CFECCCTL_PE1Bits_t;

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
    uint32 _PROT : 2;
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
} CFSTSTCTL_PE1Bits_t;

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
    uint32 _PROT : 2;
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
} GRECCCTL_PE1Bits_t;

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
    uint32 _PROT : 2;
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
} LRECCCTL_PE1Bits_t;

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
    uint32 _EOVFIE : 1;
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
} LRERRINT_PE1Bits_t;

typedef struct
{
    uint32 _SSTCLR10 : 1;
    uint32 _SSTCLR11 : 1;
    uint32 _SSTCLR12 : 1;
    uint32 _SSTCLR13 : 1;
    uint32 _SSTCLR20 : 1;
    uint32 _SSTCLR21 : 1;
    uint32 _SSTCLR22 : 1;
    uint32 _SSTCLR23 : 1;
    uint32 _SSTCLR30 : 1;
    uint32 _SSTCLR31 : 1;
    uint32 _SSTCLR32 : 1;
    uint32 _SSTCLR33 : 1;
    uint32 _SSTCLR40 : 1;
    uint32 _SSTCLR41 : 1;
    uint32 _SSTCLR42 : 1;
    uint32 _SSTCLR43 : 1;
    uint32 _SSTCLR50 : 1;
    uint32 _SSTCLR51 : 1;
    uint32 _SSTCLR52 : 1;
    uint32 _SSTCLR53 : 1;
    uint32 _SSTCLR60 : 1;
    uint32 _SSTCLR61 : 1;
    uint32 _SSTCLR62 : 1;
    uint32 _SSTCLR63 : 1;
    uint32 _SSTCLR70 : 1;
    uint32 _SSTCLR71 : 1;
    uint32 _SSTCLR72 : 1;
    uint32 _SSTCLR73 : 1;
    uint32 _SSTCLR80 : 1;
    uint32 _SSTCLR81 : 1;
    uint32 _SSTCLR82 : 1;
    uint32 _SSTCLR83 : 1;
} LRSERSTCLR_PE1Bits_t;

typedef struct
{
    uint32 _DSTCLR0 : 1;
    uint32 _DSTCLR1 : 1;
    uint32 _DSTCLR2 : 1;
    uint32 _DSTCLR3 : 1;
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
} LRDERSTCLR_PE1Bits_t;

typedef struct
{
    const uint32 _SERROVF0 : 1;
    const uint32 _SERROVF1 : 1;
    const uint32 _SERROVF2 : 1;
    const uint32 _SERROVF3 : 1;
    const uint32 _DERROVF0 : 1;
    const uint32 _DERROVF1 : 1;
    const uint32 _DERROVF2 : 1;
    const uint32 _DERROVF3 : 1;
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
} LROVFSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEDF10 : 1;
    const uint32 _SEDF11 : 1;
    const uint32 _SEDF12 : 1;
    const uint32 _SEDF13 : 1;
    const uint32 _SEDF20 : 1;
    const uint32 _SEDF21 : 1;
    const uint32 _SEDF22 : 1;
    const uint32 _SEDF23 : 1;
    const uint32 _SEDF30 : 1;
    const uint32 _SEDF31 : 1;
    const uint32 _SEDF32 : 1;
    const uint32 _SEDF33 : 1;
    const uint32 _SEDF40 : 1;
    const uint32 _SEDF41 : 1;
    const uint32 _SEDF42 : 1;
    const uint32 _SEDF43 : 1;
    const uint32 _SEDF50 : 1;
    const uint32 _SEDF51 : 1;
    const uint32 _SEDF52 : 1;
    const uint32 _SEDF53 : 1;
    const uint32 _SEDF60 : 1;
    const uint32 _SEDF61 : 1;
    const uint32 _SEDF62 : 1;
    const uint32 _SEDF63 : 1;
    const uint32 _SEDF70 : 1;
    const uint32 _SEDF71 : 1;
    const uint32 _SEDF72 : 1;
    const uint32 _SEDF73 : 1;
    const uint32 _SEDF80 : 1;
    const uint32 _SEDF81 : 1;
    const uint32 _SEDF82 : 1;
    const uint32 _SEDF83 : 1;
} LRSERSTR_PE1Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    const uint32 _DEDF0 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    const uint32 _DEDF1 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 padding16 : 1;
    const uint32 _DEDF2 : 1;
    uint32 padding18 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    const uint32 _DEDF3 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} LRDERSTR_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR10 : 18;
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
} LR1SEDADR0_PE1Bits_t;

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
    const uint32 _SEADR11 : 18;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} LR1SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR12 : 18;
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
} LR1SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR13 : 18;
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
} LR1SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR20 : 18;
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
} LR2SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR21 : 18;
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
} LR2SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR22 : 18;
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
} LR2SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR23 : 18;
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
} LR2SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR30 : 18;
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
} LR3SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR31 : 18;
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
} LR3SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR32 : 18;
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
} LR3SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR33 : 18;
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
} LR3SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR40 : 18;
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
} LR4SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR41 : 18;
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
} LR4SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR42 : 18;
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
} LR4SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR43 : 18;
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
} LR4SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR50 : 18;
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
} LR5SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR51 : 18;
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
} LR5SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR52 : 18;
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
} LR5SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR53 : 18;
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
} LR5SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR60 : 18;
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
} LR6SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR61 : 18;
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
} LR6SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR62 : 18;
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
} LR6SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR63 : 18;
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
} LR6SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR70 : 18;
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
} LR7SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR71 : 18;
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
} LR7SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR72 : 18;
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
} LR7SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR73 : 18;
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
} LR7SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR80 : 18;
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
} LR8SEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR81 : 18;
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
} LR8SEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR82 : 18;
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
} LR8SEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _SEADR83 : 18;
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
} LR8SEDADR3_PE1Bits_t;

typedef struct
{
    const uint32 _DEADER0 : 18;
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
} LRDEDADR0_PE1Bits_t;

typedef struct
{
    const uint32 _DEADER1 : 18;
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
} LRDEDADR1_PE1Bits_t;

typedef struct
{
    const uint32 _DEADER2 : 18;
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
} LRDEDADR2_PE1Bits_t;

typedef struct
{
    const uint32 _DEADER3 : 18;
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
} LRDEDADR3_PE1Bits_t;

typedef struct
{
    uint32 _DATSEL : 1;
    uint32 _ECCTST : 1;
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
    uint32 _PROT : 2;
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
} LRTSTCTL_PE1Bits_t;

typedef struct
{
    const uint32 _LRDATABF_0_6 : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _LRDATABF_16_22 : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} LRTDATBF0_PE1Bits_t;

typedef struct
{
    const uint32 _LRDATABF_0_6 : 7;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    const uint32 _LRDATABF_16_22 : 7;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} LRTDATBF1_PE1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    IDECCCTL_PE1Bits_t BIT;
} IDECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    IDERRINT_PE1Bits_t BIT;
} IDERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    IDSERSTCLR_PE1Bits_t BIT;
} IDSERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    IDDERSTCLR_PE1Bits_t BIT;
} IDDERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDOVFSTR_PE1Bits_t BIT;
} IDOVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDSERSTR_PE1Bits_t BIT;
} IDSERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDDERSTR_PE1Bits_t BIT;
} IDDERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDSEDADR1_PE1Bits_t BIT;
} IDSEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDDEDADR0_PE1Bits_t BIT;
} IDDEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const IDDEDADR1_PE1Bits_t BIT;
} IDDEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    ITECCCTL_PE1Bits_t BIT;
} ITECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    ITERRINT_PE1Bits_t BIT;
} ITERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    ITSERSTCLR_PE1Bits_t BIT;
} ITSERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    ITDERSTCLR_PE1Bits_t BIT;
} ITDERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const ITOVFSTR_PE1Bits_t BIT;
} ITOVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const ITSERSTR_PE1Bits_t BIT;
} ITSERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const ITDERSTR_PE1Bits_t BIT;
} ITDERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const ITSEDADR_PE1Bits_t BIT;
} ITSEDADR_PE1_t;

typedef union
{
    uint32 UINT32;
    const ITDEDADR_PE1Bits_t BIT;
} ITDEDADR_PE1_t;

typedef union
{
    uint32 UINT32;
    CFECCCTL_PE1Bits_t BIT;
} CFECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    CFSTSTCTL_PE1Bits_t BIT;
} CFSTSTCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    GRECCCTL_PE1Bits_t BIT;
} GRECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    LRECCCTL_PE1Bits_t BIT;
} LRECCCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    LRERRINT_PE1Bits_t BIT;
} LRERRINT_PE1_t;

typedef union
{
    uint32 UINT32;
    LRSERSTCLR_PE1Bits_t BIT;
} LRSERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    LRDERSTCLR_PE1Bits_t BIT;
} LRDERSTCLR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LROVFSTR_PE1Bits_t BIT;
} LROVFSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRSERSTR_PE1Bits_t BIT;
} LRSERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRDERSTR_PE1Bits_t BIT;
} LRDERSTR_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR1SEDADR0_PE1Bits_t BIT;
} LR1SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR1SEDADR1_PE1Bits_t BIT;
} LR1SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR1SEDADR2_PE1Bits_t BIT;
} LR1SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR1SEDADR3_PE1Bits_t BIT;
} LR1SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR2SEDADR0_PE1Bits_t BIT;
} LR2SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR2SEDADR1_PE1Bits_t BIT;
} LR2SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR2SEDADR2_PE1Bits_t BIT;
} LR2SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR2SEDADR3_PE1Bits_t BIT;
} LR2SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR3SEDADR0_PE1Bits_t BIT;
} LR3SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR3SEDADR1_PE1Bits_t BIT;
} LR3SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR3SEDADR2_PE1Bits_t BIT;
} LR3SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR3SEDADR3_PE1Bits_t BIT;
} LR3SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR4SEDADR0_PE1Bits_t BIT;
} LR4SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR4SEDADR1_PE1Bits_t BIT;
} LR4SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR4SEDADR2_PE1Bits_t BIT;
} LR4SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR4SEDADR3_PE1Bits_t BIT;
} LR4SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR5SEDADR0_PE1Bits_t BIT;
} LR5SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR5SEDADR1_PE1Bits_t BIT;
} LR5SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR5SEDADR2_PE1Bits_t BIT;
} LR5SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR5SEDADR3_PE1Bits_t BIT;
} LR5SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR6SEDADR0_PE1Bits_t BIT;
} LR6SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR6SEDADR1_PE1Bits_t BIT;
} LR6SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR6SEDADR2_PE1Bits_t BIT;
} LR6SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR6SEDADR3_PE1Bits_t BIT;
} LR6SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR7SEDADR0_PE1Bits_t BIT;
} LR7SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR7SEDADR1_PE1Bits_t BIT;
} LR7SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR7SEDADR2_PE1Bits_t BIT;
} LR7SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR7SEDADR3_PE1Bits_t BIT;
} LR7SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR8SEDADR0_PE1Bits_t BIT;
} LR8SEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR8SEDADR1_PE1Bits_t BIT;
} LR8SEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR8SEDADR2_PE1Bits_t BIT;
} LR8SEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LR8SEDADR3_PE1Bits_t BIT;
} LR8SEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRDEDADR0_PE1Bits_t BIT;
} LRDEDADR0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRDEDADR1_PE1Bits_t BIT;
} LRDEDADR1_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRDEDADR2_PE1Bits_t BIT;
} LRDEDADR2_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRDEDADR3_PE1Bits_t BIT;
} LRDEDADR3_PE1_t;

typedef union
{
    uint32 UINT32;
    LRTSTCTL_PE1Bits_t BIT;
} LRTSTCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRTDATBF0_PE1Bits_t BIT;
} LRTDATBF0_PE1_t;

typedef union
{
    uint32 UINT32;
    const LRTDATBF1_PE1Bits_t BIT;
} LRTDATBF1_PE1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(IDECCCTL_PE1_BASE, 0xFFC60400, __READ_WRITE, IDECCCTL_PE1_t);
__IOREG(IDERRINT_PE1_BASE, 0xFFC60404, __READ_WRITE, IDERRINT_PE1_t);
__IOREG(IDSERSTCLR_PE1_BASE, 0xFFC60408, __READ_WRITE, IDSERSTCLR_PE1_t);
__IOREG(IDDERSTCLR_PE1_BASE, 0xFFC6040C, __READ_WRITE, IDDERSTCLR_PE1_t);
__IOREG(IDOVFSTR_PE1_BASE, 0xFFC60410, __READ, IDOVFSTR_PE1_t);
__IOREG(IDSERSTR_PE1_BASE, 0xFFC60420, __READ, IDSERSTR_PE1_t);
__IOREG(IDDERSTR_PE1_BASE, 0xFFC60450, __READ, IDDERSTR_PE1_t);
__IOREG(IDSEDADR1_PE1_BASE, 0xFFC60464, __READ, IDSEDADR1_PE1_t);
__IOREG(IDDEDADR0_PE1_BASE, 0xFFC604E0, __READ, IDDEDADR0_PE1_t);
__IOREG(IDDEDADR1_PE1_BASE, 0xFFC604E4, __READ, IDDEDADR1_PE1_t);
__IOREG(ITECCCTL_PE1_BASE, 0xFFC61400, __READ_WRITE, ITECCCTL_PE1_t);
__IOREG(ITERRINT_PE1_BASE, 0xFFC61404, __READ_WRITE, ITERRINT_PE1_t);
__IOREG(ITSERSTCLR_PE1_BASE, 0xFFC61408, __READ_WRITE, ITSERSTCLR_PE1_t);
__IOREG(ITDERSTCLR_PE1_BASE, 0xFFC6140C, __READ_WRITE, ITDERSTCLR_PE1_t);
__IOREG(ITOVFSTR_PE1_BASE, 0xFFC61410, __READ, ITOVFSTR_PE1_t);
__IOREG(ITSERSTR_PE1_BASE, 0xFFC61420, __READ, ITSERSTR_PE1_t);
__IOREG(ITDERSTR_PE1_BASE, 0xFFC61450, __READ, ITDERSTR_PE1_t);
__IOREG(ITSEDADR_PE1_BASE, 0xFFC61460, __READ, ITSEDADR_PE1_t);
__IOREG(ITDEDADR_PE1_BASE, 0xFFC614E0, __READ, ITDEDADR_PE1_t);
__IOREG(CFECCCTL_PE1_BASE, 0xFFC62400, __READ_WRITE, CFECCCTL_PE1_t);
__IOREG(CFSTSTCTL_PE1_BASE, 0xFFC624F0, __READ_WRITE, CFSTSTCTL_PE1_t);
__IOREG(GRECCCTL_PE1_BASE, 0xFFC64400, __READ_WRITE, GRECCCTL_PE1_t);
__IOREG(LRECCCTL_PE1_BASE, 0xFFC65400, __READ_WRITE, LRECCCTL_PE1_t);
__IOREG(LRERRINT_PE1_BASE, 0xFFC65404, __READ_WRITE, LRERRINT_PE1_t);
__IOREG(LRSERSTCLR_PE1_BASE, 0xFFC65408, __READ_WRITE, LRSERSTCLR_PE1_t);
__IOREG(LRDERSTCLR_PE1_BASE, 0xFFC6540C, __READ_WRITE, LRDERSTCLR_PE1_t);
__IOREG(LROVFSTR_PE1_BASE, 0xFFC65410, __READ, LROVFSTR_PE1_t);
__IOREG(LRSERSTR_PE1_BASE, 0xFFC65440, __READ, LRSERSTR_PE1_t);
__IOREG(LRDERSTR_PE1_BASE, 0xFFC65450, __READ, LRDERSTR_PE1_t);
__IOREG(LR1SEDADR0_PE1_BASE, 0xFFC65460, __READ, LR1SEDADR0_PE1_t);
__IOREG(LR1SEDADR1_PE1_BASE, 0xFFC65464, __READ, LR1SEDADR1_PE1_t);
__IOREG(LR1SEDADR2_PE1_BASE, 0xFFC65468, __READ, LR1SEDADR2_PE1_t);
__IOREG(LR1SEDADR3_PE1_BASE, 0xFFC6546C, __READ, LR1SEDADR3_PE1_t);
__IOREG(LR2SEDADR0_PE1_BASE, 0xFFC65470, __READ, LR2SEDADR0_PE1_t);
__IOREG(LR2SEDADR1_PE1_BASE, 0xFFC65474, __READ, LR2SEDADR1_PE1_t);
__IOREG(LR2SEDADR2_PE1_BASE, 0xFFC65478, __READ, LR2SEDADR2_PE1_t);
__IOREG(LR2SEDADR3_PE1_BASE, 0xFFC6547C, __READ, LR2SEDADR3_PE1_t);
__IOREG(LR3SEDADR0_PE1_BASE, 0xFFC65480, __READ, LR3SEDADR0_PE1_t);
__IOREG(LR3SEDADR1_PE1_BASE, 0xFFC65484, __READ, LR3SEDADR1_PE1_t);
__IOREG(LR3SEDADR2_PE1_BASE, 0xFFC65488, __READ, LR3SEDADR2_PE1_t);
__IOREG(LR3SEDADR3_PE1_BASE, 0xFFC6548C, __READ, LR3SEDADR3_PE1_t);
__IOREG(LR4SEDADR0_PE1_BASE, 0xFFC65490, __READ, LR4SEDADR0_PE1_t);
__IOREG(LR4SEDADR1_PE1_BASE, 0xFFC65494, __READ, LR4SEDADR1_PE1_t);
__IOREG(LR4SEDADR2_PE1_BASE, 0xFFC65498, __READ, LR4SEDADR2_PE1_t);
__IOREG(LR4SEDADR3_PE1_BASE, 0xFFC6549C, __READ, LR4SEDADR3_PE1_t);
__IOREG(LR5SEDADR0_PE1_BASE, 0xFFC654A0, __READ, LR5SEDADR0_PE1_t);
__IOREG(LR5SEDADR1_PE1_BASE, 0xFFC654A4, __READ, LR5SEDADR1_PE1_t);
__IOREG(LR5SEDADR2_PE1_BASE, 0xFFC654A8, __READ, LR5SEDADR2_PE1_t);
__IOREG(LR5SEDADR3_PE1_BASE, 0xFFC654AC, __READ, LR5SEDADR3_PE1_t);
__IOREG(LR6SEDADR0_PE1_BASE, 0xFFC654B0, __READ, LR6SEDADR0_PE1_t);
__IOREG(LR6SEDADR1_PE1_BASE, 0xFFC654B4, __READ, LR6SEDADR1_PE1_t);
__IOREG(LR6SEDADR2_PE1_BASE, 0xFFC654B8, __READ, LR6SEDADR2_PE1_t);
__IOREG(LR6SEDADR3_PE1_BASE, 0xFFC654BC, __READ, LR6SEDADR3_PE1_t);
__IOREG(LR7SEDADR0_PE1_BASE, 0xFFC654C0, __READ, LR7SEDADR0_PE1_t);
__IOREG(LR7SEDADR1_PE1_BASE, 0xFFC654C4, __READ, LR7SEDADR1_PE1_t);
__IOREG(LR7SEDADR2_PE1_BASE, 0xFFC654C8, __READ, LR7SEDADR2_PE1_t);
__IOREG(LR7SEDADR3_PE1_BASE, 0xFFC654CC, __READ, LR7SEDADR3_PE1_t);
__IOREG(LR8SEDADR0_PE1_BASE, 0xFFC654D0, __READ, LR8SEDADR0_PE1_t);
__IOREG(LR8SEDADR1_PE1_BASE, 0xFFC654D4, __READ, LR8SEDADR1_PE1_t);
__IOREG(LR8SEDADR2_PE1_BASE, 0xFFC654D8, __READ, LR8SEDADR2_PE1_t);
__IOREG(LR8SEDADR3_PE1_BASE, 0xFFC654DC, __READ, LR8SEDADR3_PE1_t);
__IOREG(LRDEDADR0_PE1_BASE, 0xFFC654E0, __READ, LRDEDADR0_PE1_t);
__IOREG(LRDEDADR1_PE1_BASE, 0xFFC654E4, __READ, LRDEDADR1_PE1_t);
__IOREG(LRDEDADR2_PE1_BASE, 0xFFC654E8, __READ, LRDEDADR2_PE1_t);
__IOREG(LRDEDADR3_PE1_BASE, 0xFFC654EC, __READ, LRDEDADR3_PE1_t);
__IOREG(LRTSTCTL_PE1_BASE, 0xFFC65604, __READ_WRITE, LRTSTCTL_PE1_t);
__IOREG(LRTDATBF0_PE1_BASE, 0xFFC65608, __READ, LRTDATBF0_PE1_t);
__IOREG(LRTDATBF1_PE1_BASE, 0xFFC6560C, __READ, LRTDATBF1_PE1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define IDECCCTL_PE1 IDECCCTL_PE1_BASE.UINT32
#define IDECCCTL_PE1_ECCDI IDECCCTL_PE1_BASE.BIT._ECCDI
#define IDECCCTL_PE1_PROT IDECCCTL_PE1_BASE.BIT._PROT
#define IDERRINT_PE1 IDERRINT_PE1_BASE.UINT32
#define IDERRINT_PE1_SEDIE IDERRINT_PE1_BASE.BIT._SEDIE
#define IDERRINT_PE1_DEDIE IDERRINT_PE1_BASE.BIT._DEDIE
#define IDSERSTCLR_PE1 IDSERSTCLR_PE1_BASE.UINT32
#define IDSERSTCLR_PE1_SSTCL0 IDSERSTCLR_PE1_BASE.BIT._SSTCL0
#define IDSERSTCLR_PE1_SSTCL1 IDSERSTCLR_PE1_BASE.BIT._SSTCL1
#define IDDERSTCLR_PE1 IDDERSTCLR_PE1_BASE.UINT32
#define IDDERSTCLR_PE1_DSTCLR0 IDDERSTCLR_PE1_BASE.BIT._DSTCLR0
#define IDDERSTCLR_PE1_DSTCLR1 IDDERSTCLR_PE1_BASE.BIT._DSTCLR1
#define IDOVFSTR_PE1 IDOVFSTR_PE1_BASE.UINT32
#define IDOVFSTR_PE1_SERROVF0 IDOVFSTR_PE1_BASE.BIT._SERROVF0
#define IDOVFSTR_PE1_SERROVF1 IDOVFSTR_PE1_BASE.BIT._SERROVF1
#define IDOVFSTR_PE1_DERROVF0 IDOVFSTR_PE1_BASE.BIT._DERROVF0
#define IDOVFSTR_PE1_DERROVF1 IDOVFSTR_PE1_BASE.BIT._DERROVF1
#define IDSERSTR_PE1 IDSERSTR_PE1_BASE.UINT32
#define IDSERSTR_PE1_SEDF0 IDSERSTR_PE1_BASE.BIT._SEDF0
#define IDSERSTR_PE1_SEDF1 IDSERSTR_PE1_BASE.BIT._SEDF1
#define IDDERSTR_PE1 IDDERSTR_PE1_BASE.UINT32
#define IDDERSTR_PE1_DEDF0 IDDERSTR_PE1_BASE.BIT._DEDF0
#define IDDERSTR_PE1_DEDF1 IDDERSTR_PE1_BASE.BIT._DEDF1
#define IDSEDADR1_PE1 IDSEDADR1_PE1_BASE.UINT32
#define IDSEDADR1_PE1_SEADR IDSEDADR1_PE1_BASE.BIT._SEADR
#define IDDEDADR0_PE1 IDDEDADR0_PE1_BASE.UINT32
#define IDDEDADR0_PE1_DEADR IDDEDADR0_PE1_BASE.BIT._DEADR
#define IDDEDADR1_PE1 IDDEDADR1_PE1_BASE.UINT32
#define IDDEDADR1_PE1_DEADR IDDEDADR1_PE1_BASE.BIT._DEADR
#define ITECCCTL_PE1 ITECCCTL_PE1_BASE.UINT32
#define ITECCCTL_PE1_ECCDI ITECCCTL_PE1_BASE.BIT._ECCDI
#define ITECCCTL_PE1_PROT ITECCCTL_PE1_BASE.BIT._PROT
#define ITERRINT_PE1 ITERRINT_PE1_BASE.UINT32
#define ITERRINT_PE1_SEDIE ITERRINT_PE1_BASE.BIT._SEDIE
#define ITERRINT_PE1_DEDIE ITERRINT_PE1_BASE.BIT._DEDIE
#define ITSERSTCLR_PE1 ITSERSTCLR_PE1_BASE.UINT32
#define ITSERSTCLR_PE1_SSTCL ITSERSTCLR_PE1_BASE.BIT._SSTCL
#define ITDERSTCLR_PE1 ITDERSTCLR_PE1_BASE.UINT32
#define ITDERSTCLR_PE1_DSTCLR ITDERSTCLR_PE1_BASE.BIT._DSTCLR
#define ITOVFSTR_PE1 ITOVFSTR_PE1_BASE.UINT32
#define ITOVFSTR_PE1_SERROVF ITOVFSTR_PE1_BASE.BIT._SERROVF
#define ITOVFSTR_PE1_DERROVF ITOVFSTR_PE1_BASE.BIT._DERROVF
#define ITSERSTR_PE1 ITSERSTR_PE1_BASE.UINT32
#define ITSERSTR_PE1_SEDF ITSERSTR_PE1_BASE.BIT._SEDF
#define ITDERSTR_PE1 ITDERSTR_PE1_BASE.UINT32
#define ITDERSTR_PE1_DEDF ITDERSTR_PE1_BASE.BIT._DEDF
#define ITSEDADR_PE1 ITSEDADR_PE1_BASE.UINT32
#define ITSEDADR_PE1_SEADR ITSEDADR_PE1_BASE.BIT._SEADR
#define ITDEDADR_PE1 ITDEDADR_PE1_BASE.UINT32
#define ITDEDADR_PE1_DEADR ITDEDADR_PE1_BASE.BIT._DEADR
#define CFECCCTL_PE1 CFECCCTL_PE1_BASE.UINT32
#define CFECCCTL_PE1_ECCDIS CFECCCTL_PE1_BASE.BIT._ECCDIS
#define CFECCCTL_PE1_SECDIS CFECCCTL_PE1_BASE.BIT._SECDIS
#define CFECCCTL_PE1_PROT CFECCCTL_PE1_BASE.BIT._PROT
#define CFSTSTCTL_PE1 CFSTSTCTL_PE1_BASE.UINT32
#define CFSTSTCTL_PE1_ECCTST CFSTSTCTL_PE1_BASE.BIT._ECCTST
#define CFSTSTCTL_PE1_PROT CFSTSTCTL_PE1_BASE.BIT._PROT
#define GRECCCTL_PE1 GRECCCTL_PE1_BASE.UINT32
#define GRECCCTL_PE1_ECCDIS GRECCCTL_PE1_BASE.BIT._ECCDIS
#define GRECCCTL_PE1_SECDIS GRECCCTL_PE1_BASE.BIT._SECDIS
#define GRECCCTL_PE1_PROT GRECCCTL_PE1_BASE.BIT._PROT
#define LRECCCTL_PE1 LRECCCTL_PE1_BASE.UINT32
#define LRECCCTL_PE1_ECCDIS LRECCCTL_PE1_BASE.BIT._ECCDIS
#define LRECCCTL_PE1_SECDIS LRECCCTL_PE1_BASE.BIT._SECDIS
#define LRECCCTL_PE1_PROT LRECCCTL_PE1_BASE.BIT._PROT
#define LRERRINT_PE1 LRERRINT_PE1_BASE.UINT32
#define LRERRINT_PE1_SEDIE LRERRINT_PE1_BASE.BIT._SEDIE
#define LRERRINT_PE1_DEDIE LRERRINT_PE1_BASE.BIT._DEDIE
#define LRERRINT_PE1_EOVFIE LRERRINT_PE1_BASE.BIT._EOVFIE
#define LRSERSTCLR_PE1 LRSERSTCLR_PE1_BASE.UINT32
#define LRSERSTCLR_PE1_SSTCLR10 LRSERSTCLR_PE1_BASE.BIT._SSTCLR10
#define LRSERSTCLR_PE1_SSTCLR11 LRSERSTCLR_PE1_BASE.BIT._SSTCLR11
#define LRSERSTCLR_PE1_SSTCLR12 LRSERSTCLR_PE1_BASE.BIT._SSTCLR12
#define LRSERSTCLR_PE1_SSTCLR13 LRSERSTCLR_PE1_BASE.BIT._SSTCLR13
#define LRSERSTCLR_PE1_SSTCLR20 LRSERSTCLR_PE1_BASE.BIT._SSTCLR20
#define LRSERSTCLR_PE1_SSTCLR21 LRSERSTCLR_PE1_BASE.BIT._SSTCLR21
#define LRSERSTCLR_PE1_SSTCLR22 LRSERSTCLR_PE1_BASE.BIT._SSTCLR22
#define LRSERSTCLR_PE1_SSTCLR23 LRSERSTCLR_PE1_BASE.BIT._SSTCLR23
#define LRSERSTCLR_PE1_SSTCLR30 LRSERSTCLR_PE1_BASE.BIT._SSTCLR30
#define LRSERSTCLR_PE1_SSTCLR31 LRSERSTCLR_PE1_BASE.BIT._SSTCLR31
#define LRSERSTCLR_PE1_SSTCLR32 LRSERSTCLR_PE1_BASE.BIT._SSTCLR32
#define LRSERSTCLR_PE1_SSTCLR33 LRSERSTCLR_PE1_BASE.BIT._SSTCLR33
#define LRSERSTCLR_PE1_SSTCLR40 LRSERSTCLR_PE1_BASE.BIT._SSTCLR40
#define LRSERSTCLR_PE1_SSTCLR41 LRSERSTCLR_PE1_BASE.BIT._SSTCLR41
#define LRSERSTCLR_PE1_SSTCLR42 LRSERSTCLR_PE1_BASE.BIT._SSTCLR42
#define LRSERSTCLR_PE1_SSTCLR43 LRSERSTCLR_PE1_BASE.BIT._SSTCLR43
#define LRSERSTCLR_PE1_SSTCLR50 LRSERSTCLR_PE1_BASE.BIT._SSTCLR50
#define LRSERSTCLR_PE1_SSTCLR51 LRSERSTCLR_PE1_BASE.BIT._SSTCLR51
#define LRSERSTCLR_PE1_SSTCLR52 LRSERSTCLR_PE1_BASE.BIT._SSTCLR52
#define LRSERSTCLR_PE1_SSTCLR53 LRSERSTCLR_PE1_BASE.BIT._SSTCLR53
#define LRSERSTCLR_PE1_SSTCLR60 LRSERSTCLR_PE1_BASE.BIT._SSTCLR60
#define LRSERSTCLR_PE1_SSTCLR61 LRSERSTCLR_PE1_BASE.BIT._SSTCLR61
#define LRSERSTCLR_PE1_SSTCLR62 LRSERSTCLR_PE1_BASE.BIT._SSTCLR62
#define LRSERSTCLR_PE1_SSTCLR63 LRSERSTCLR_PE1_BASE.BIT._SSTCLR63
#define LRSERSTCLR_PE1_SSTCLR70 LRSERSTCLR_PE1_BASE.BIT._SSTCLR70
#define LRSERSTCLR_PE1_SSTCLR71 LRSERSTCLR_PE1_BASE.BIT._SSTCLR71
#define LRSERSTCLR_PE1_SSTCLR72 LRSERSTCLR_PE1_BASE.BIT._SSTCLR72
#define LRSERSTCLR_PE1_SSTCLR73 LRSERSTCLR_PE1_BASE.BIT._SSTCLR73
#define LRSERSTCLR_PE1_SSTCLR80 LRSERSTCLR_PE1_BASE.BIT._SSTCLR80
#define LRSERSTCLR_PE1_SSTCLR81 LRSERSTCLR_PE1_BASE.BIT._SSTCLR81
#define LRSERSTCLR_PE1_SSTCLR82 LRSERSTCLR_PE1_BASE.BIT._SSTCLR82
#define LRSERSTCLR_PE1_SSTCLR83 LRSERSTCLR_PE1_BASE.BIT._SSTCLR83
#define LRDERSTCLR_PE1 LRDERSTCLR_PE1_BASE.UINT32
#define LRDERSTCLR_PE1_DSTCLR0 LRDERSTCLR_PE1_BASE.BIT._DSTCLR0
#define LRDERSTCLR_PE1_DSTCLR1 LRDERSTCLR_PE1_BASE.BIT._DSTCLR1
#define LRDERSTCLR_PE1_DSTCLR2 LRDERSTCLR_PE1_BASE.BIT._DSTCLR2
#define LRDERSTCLR_PE1_DSTCLR3 LRDERSTCLR_PE1_BASE.BIT._DSTCLR3
#define LROVFSTR_PE1 LROVFSTR_PE1_BASE.UINT32
#define LROVFSTR_PE1_SERROVF0 LROVFSTR_PE1_BASE.BIT._SERROVF0
#define LROVFSTR_PE1_SERROVF1 LROVFSTR_PE1_BASE.BIT._SERROVF1
#define LROVFSTR_PE1_SERROVF2 LROVFSTR_PE1_BASE.BIT._SERROVF2
#define LROVFSTR_PE1_SERROVF3 LROVFSTR_PE1_BASE.BIT._SERROVF3
#define LROVFSTR_PE1_DERROVF0 LROVFSTR_PE1_BASE.BIT._DERROVF0
#define LROVFSTR_PE1_DERROVF1 LROVFSTR_PE1_BASE.BIT._DERROVF1
#define LROVFSTR_PE1_DERROVF2 LROVFSTR_PE1_BASE.BIT._DERROVF2
#define LROVFSTR_PE1_DERROVF3 LROVFSTR_PE1_BASE.BIT._DERROVF3
#define LRSERSTR_PE1 LRSERSTR_PE1_BASE.UINT32
#define LRSERSTR_PE1_SEDF10 LRSERSTR_PE1_BASE.BIT._SEDF10
#define LRSERSTR_PE1_SEDF11 LRSERSTR_PE1_BASE.BIT._SEDF11
#define LRSERSTR_PE1_SEDF12 LRSERSTR_PE1_BASE.BIT._SEDF12
#define LRSERSTR_PE1_SEDF13 LRSERSTR_PE1_BASE.BIT._SEDF13
#define LRSERSTR_PE1_SEDF20 LRSERSTR_PE1_BASE.BIT._SEDF20
#define LRSERSTR_PE1_SEDF21 LRSERSTR_PE1_BASE.BIT._SEDF21
#define LRSERSTR_PE1_SEDF22 LRSERSTR_PE1_BASE.BIT._SEDF22
#define LRSERSTR_PE1_SEDF23 LRSERSTR_PE1_BASE.BIT._SEDF23
#define LRSERSTR_PE1_SEDF30 LRSERSTR_PE1_BASE.BIT._SEDF30
#define LRSERSTR_PE1_SEDF31 LRSERSTR_PE1_BASE.BIT._SEDF31
#define LRSERSTR_PE1_SEDF32 LRSERSTR_PE1_BASE.BIT._SEDF32
#define LRSERSTR_PE1_SEDF33 LRSERSTR_PE1_BASE.BIT._SEDF33
#define LRSERSTR_PE1_SEDF40 LRSERSTR_PE1_BASE.BIT._SEDF40
#define LRSERSTR_PE1_SEDF41 LRSERSTR_PE1_BASE.BIT._SEDF41
#define LRSERSTR_PE1_SEDF42 LRSERSTR_PE1_BASE.BIT._SEDF42
#define LRSERSTR_PE1_SEDF43 LRSERSTR_PE1_BASE.BIT._SEDF43
#define LRSERSTR_PE1_SEDF50 LRSERSTR_PE1_BASE.BIT._SEDF50
#define LRSERSTR_PE1_SEDF51 LRSERSTR_PE1_BASE.BIT._SEDF51
#define LRSERSTR_PE1_SEDF52 LRSERSTR_PE1_BASE.BIT._SEDF52
#define LRSERSTR_PE1_SEDF53 LRSERSTR_PE1_BASE.BIT._SEDF53
#define LRSERSTR_PE1_SEDF60 LRSERSTR_PE1_BASE.BIT._SEDF60
#define LRSERSTR_PE1_SEDF61 LRSERSTR_PE1_BASE.BIT._SEDF61
#define LRSERSTR_PE1_SEDF62 LRSERSTR_PE1_BASE.BIT._SEDF62
#define LRSERSTR_PE1_SEDF63 LRSERSTR_PE1_BASE.BIT._SEDF63
#define LRSERSTR_PE1_SEDF70 LRSERSTR_PE1_BASE.BIT._SEDF70
#define LRSERSTR_PE1_SEDF71 LRSERSTR_PE1_BASE.BIT._SEDF71
#define LRSERSTR_PE1_SEDF72 LRSERSTR_PE1_BASE.BIT._SEDF72
#define LRSERSTR_PE1_SEDF73 LRSERSTR_PE1_BASE.BIT._SEDF73
#define LRSERSTR_PE1_SEDF80 LRSERSTR_PE1_BASE.BIT._SEDF80
#define LRSERSTR_PE1_SEDF81 LRSERSTR_PE1_BASE.BIT._SEDF81
#define LRSERSTR_PE1_SEDF82 LRSERSTR_PE1_BASE.BIT._SEDF82
#define LRSERSTR_PE1_SEDF83 LRSERSTR_PE1_BASE.BIT._SEDF83
#define LRDERSTR_PE1 LRDERSTR_PE1_BASE.UINT32
#define LRDERSTR_PE1_DEDF0 LRDERSTR_PE1_BASE.BIT._DEDF0
#define LRDERSTR_PE1_DEDF1 LRDERSTR_PE1_BASE.BIT._DEDF1
#define LRDERSTR_PE1_DEDF2 LRDERSTR_PE1_BASE.BIT._DEDF2
#define LRDERSTR_PE1_DEDF3 LRDERSTR_PE1_BASE.BIT._DEDF3
#define LR1SEDADR0_PE1 LR1SEDADR0_PE1_BASE.UINT32
#define LR1SEDADR0_PE1_SEADR10 LR1SEDADR0_PE1_BASE.BIT._SEADR10
#define LR1SEDADR1_PE1 LR1SEDADR1_PE1_BASE.UINT32
#define LR1SEDADR1_PE1_SEADR11 LR1SEDADR1_PE1_BASE.BIT._SEADR11
#define LR1SEDADR2_PE1 LR1SEDADR2_PE1_BASE.UINT32
#define LR1SEDADR2_PE1_SEADR12 LR1SEDADR2_PE1_BASE.BIT._SEADR12
#define LR1SEDADR3_PE1 LR1SEDADR3_PE1_BASE.UINT32
#define LR1SEDADR3_PE1_SEADR13 LR1SEDADR3_PE1_BASE.BIT._SEADR13
#define LR2SEDADR0_PE1 LR2SEDADR0_PE1_BASE.UINT32
#define LR2SEDADR0_PE1_SEADR20 LR2SEDADR0_PE1_BASE.BIT._SEADR20
#define LR2SEDADR1_PE1 LR2SEDADR1_PE1_BASE.UINT32
#define LR2SEDADR1_PE1_SEADR21 LR2SEDADR1_PE1_BASE.BIT._SEADR21
#define LR2SEDADR2_PE1 LR2SEDADR2_PE1_BASE.UINT32
#define LR2SEDADR2_PE1_SEADR22 LR2SEDADR2_PE1_BASE.BIT._SEADR22
#define LR2SEDADR3_PE1 LR2SEDADR3_PE1_BASE.UINT32
#define LR2SEDADR3_PE1_SEADR23 LR2SEDADR3_PE1_BASE.BIT._SEADR23
#define LR3SEDADR0_PE1 LR3SEDADR0_PE1_BASE.UINT32
#define LR3SEDADR0_PE1_SEADR30 LR3SEDADR0_PE1_BASE.BIT._SEADR30
#define LR3SEDADR1_PE1 LR3SEDADR1_PE1_BASE.UINT32
#define LR3SEDADR1_PE1_SEADR31 LR3SEDADR1_PE1_BASE.BIT._SEADR31
#define LR3SEDADR2_PE1 LR3SEDADR2_PE1_BASE.UINT32
#define LR3SEDADR2_PE1_SEADR32 LR3SEDADR2_PE1_BASE.BIT._SEADR32
#define LR3SEDADR3_PE1 LR3SEDADR3_PE1_BASE.UINT32
#define LR3SEDADR3_PE1_SEADR33 LR3SEDADR3_PE1_BASE.BIT._SEADR33
#define LR4SEDADR0_PE1 LR4SEDADR0_PE1_BASE.UINT32
#define LR4SEDADR0_PE1_SEADR40 LR4SEDADR0_PE1_BASE.BIT._SEADR40
#define LR4SEDADR1_PE1 LR4SEDADR1_PE1_BASE.UINT32
#define LR4SEDADR1_PE1_SEADR41 LR4SEDADR1_PE1_BASE.BIT._SEADR41
#define LR4SEDADR2_PE1 LR4SEDADR2_PE1_BASE.UINT32
#define LR4SEDADR2_PE1_SEADR42 LR4SEDADR2_PE1_BASE.BIT._SEADR42
#define LR4SEDADR3_PE1 LR4SEDADR3_PE1_BASE.UINT32
#define LR4SEDADR3_PE1_SEADR43 LR4SEDADR3_PE1_BASE.BIT._SEADR43
#define LR5SEDADR0_PE1 LR5SEDADR0_PE1_BASE.UINT32
#define LR5SEDADR0_PE1_SEADR50 LR5SEDADR0_PE1_BASE.BIT._SEADR50
#define LR5SEDADR1_PE1 LR5SEDADR1_PE1_BASE.UINT32
#define LR5SEDADR1_PE1_SEADR51 LR5SEDADR1_PE1_BASE.BIT._SEADR51
#define LR5SEDADR2_PE1 LR5SEDADR2_PE1_BASE.UINT32
#define LR5SEDADR2_PE1_SEADR52 LR5SEDADR2_PE1_BASE.BIT._SEADR52
#define LR5SEDADR3_PE1 LR5SEDADR3_PE1_BASE.UINT32
#define LR5SEDADR3_PE1_SEADR53 LR5SEDADR3_PE1_BASE.BIT._SEADR53
#define LR6SEDADR0_PE1 LR6SEDADR0_PE1_BASE.UINT32
#define LR6SEDADR0_PE1_SEADR60 LR6SEDADR0_PE1_BASE.BIT._SEADR60
#define LR6SEDADR1_PE1 LR6SEDADR1_PE1_BASE.UINT32
#define LR6SEDADR1_PE1_SEADR61 LR6SEDADR1_PE1_BASE.BIT._SEADR61
#define LR6SEDADR2_PE1 LR6SEDADR2_PE1_BASE.UINT32
#define LR6SEDADR2_PE1_SEADR62 LR6SEDADR2_PE1_BASE.BIT._SEADR62
#define LR6SEDADR3_PE1 LR6SEDADR3_PE1_BASE.UINT32
#define LR6SEDADR3_PE1_SEADR63 LR6SEDADR3_PE1_BASE.BIT._SEADR63
#define LR7SEDADR0_PE1 LR7SEDADR0_PE1_BASE.UINT32
#define LR7SEDADR0_PE1_SEADR70 LR7SEDADR0_PE1_BASE.BIT._SEADR70
#define LR7SEDADR1_PE1 LR7SEDADR1_PE1_BASE.UINT32
#define LR7SEDADR1_PE1_SEADR71 LR7SEDADR1_PE1_BASE.BIT._SEADR71
#define LR7SEDADR2_PE1 LR7SEDADR2_PE1_BASE.UINT32
#define LR7SEDADR2_PE1_SEADR72 LR7SEDADR2_PE1_BASE.BIT._SEADR72
#define LR7SEDADR3_PE1 LR7SEDADR3_PE1_BASE.UINT32
#define LR7SEDADR3_PE1_SEADR73 LR7SEDADR3_PE1_BASE.BIT._SEADR73
#define LR8SEDADR0_PE1 LR8SEDADR0_PE1_BASE.UINT32
#define LR8SEDADR0_PE1_SEADR80 LR8SEDADR0_PE1_BASE.BIT._SEADR80
#define LR8SEDADR1_PE1 LR8SEDADR1_PE1_BASE.UINT32
#define LR8SEDADR1_PE1_SEADR81 LR8SEDADR1_PE1_BASE.BIT._SEADR81
#define LR8SEDADR2_PE1 LR8SEDADR2_PE1_BASE.UINT32
#define LR8SEDADR2_PE1_SEADR82 LR8SEDADR2_PE1_BASE.BIT._SEADR82
#define LR8SEDADR3_PE1 LR8SEDADR3_PE1_BASE.UINT32
#define LR8SEDADR3_PE1_SEADR83 LR8SEDADR3_PE1_BASE.BIT._SEADR83
#define LRDEDADR0_PE1 LRDEDADR0_PE1_BASE.UINT32
#define LRDEDADR0_PE1_DEADER0 LRDEDADR0_PE1_BASE.BIT._DEADER0
#define LRDEDADR1_PE1 LRDEDADR1_PE1_BASE.UINT32
#define LRDEDADR1_PE1_DEADER1 LRDEDADR1_PE1_BASE.BIT._DEADER1
#define LRDEDADR2_PE1 LRDEDADR2_PE1_BASE.UINT32
#define LRDEDADR2_PE1_DEADER2 LRDEDADR2_PE1_BASE.BIT._DEADER2
#define LRDEDADR3_PE1 LRDEDADR3_PE1_BASE.UINT32
#define LRDEDADR3_PE1_DEADER3 LRDEDADR3_PE1_BASE.BIT._DEADER3
#define LRTSTCTL_PE1 LRTSTCTL_PE1_BASE.UINT32
#define LRTSTCTL_PE1_DATSEL LRTSTCTL_PE1_BASE.BIT._DATSEL
#define LRTSTCTL_PE1_ECCTST LRTSTCTL_PE1_BASE.BIT._ECCTST
#define LRTSTCTL_PE1_PROT LRTSTCTL_PE1_BASE.BIT._PROT
#define LRTDATBF0_PE1 LRTDATBF0_PE1_BASE.UINT32
#define LRTDATBF0_PE1_LRDATABF_0_6 LRTDATBF0_PE1_BASE.BIT._LRDATABF_0_6
#define LRTDATBF0_PE1_LRDATABF_16_22 LRTDATBF0_PE1_BASE.BIT._LRDATABF_16_22
#define LRTDATBF1_PE1 LRTDATBF1_PE1_BASE.UINT32
#define LRTDATBF1_PE1_LRDATABF_0_6 LRTDATBF1_PE1_BASE.BIT._LRDATABF_0_6
#define LRTDATBF1_PE1_LRDATABF_16_22 LRTDATBF1_PE1_BASE.BIT._LRDATABF_16_22

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif