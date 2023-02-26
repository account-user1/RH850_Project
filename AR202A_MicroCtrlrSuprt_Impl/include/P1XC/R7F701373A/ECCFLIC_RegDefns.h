#ifndef __DR7F701373_ECCFLIC_HEADER__
#define __DR7F701373_ECCFLIC_HEADER__



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
    uint32 _SEDIE : 1;
    uint32 _DEDIE : 1;
    uint32 _APEIE : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 _SEOVFIE : 1;
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
} UCFERRINTBits_t;

typedef struct
{
    uint32 _SSTCLR0 : 1;
    uint32 _SSTCLR1 : 1;
    uint32 _SSTCLR2 : 1;
    uint32 _SSTCLR3 : 1;
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
} UCFSERSTCLRBits_t;

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
} UCFDERSTCLRBits_t;

typedef struct
{
    const uint32 _SERROVF : 1;
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
} UCFOVFSTRBits_t;

typedef struct
{
    const uint32 _SEDF0 : 1;
    const uint32 _SEDF1 : 1;
    const uint32 _SEDF2 : 1;
    const uint32 _SEDF3 : 1;
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
} UCFSERSTRBits_t;

typedef struct
{
    const uint32 _DEDF : 1;
    uint32 padding1 : 1;
    const uint32 _APEF : 1;
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
} UCFDERSTRBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _SEADR : 21;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} UCF1SEDADRBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _SEADR : 21;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} UCF2SEDADRBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _SEADR : 21;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} UCF3SEDADRBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _SEADR : 21;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} UCF4SEDADRBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _DEADR : 21;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} UCFDEDADRBits_t;

typedef struct
{
    uint32 _APARIDIS : 1;
    uint32 _APTESTA : 1;
    uint32 _APTESTB : 1;
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
} CFAPCTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    UCFERRINTBits_t BIT;
} UCFERRINT_t;

typedef union
{
    uint32 UINT32;
    UCFSERSTCLRBits_t BIT;
} UCFSERSTCLR_t;

typedef union
{
    uint32 UINT32;
    UCFDERSTCLRBits_t BIT;
} UCFDERSTCLR_t;

typedef union
{
    uint32 UINT32;
    const UCFOVFSTRBits_t BIT;
} UCFOVFSTR_t;

typedef union
{
    uint32 UINT32;
    const UCFSERSTRBits_t BIT;
} UCFSERSTR_t;

typedef union
{
    uint32 UINT32;
    const UCFDERSTRBits_t BIT;
} UCFDERSTR_t;

typedef union
{
    uint32 UINT32;
    const UCF1SEDADRBits_t BIT;
} UCF1SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UCF2SEDADRBits_t BIT;
} UCF2SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UCF3SEDADRBits_t BIT;
} UCF3SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UCF4SEDADRBits_t BIT;
} UCF4SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UCFDEDADRBits_t BIT;
} UCFDEDADR_t;

typedef union
{
    uint32 UINT32;
    CFAPCTLBits_t BIT;
} CFAPCTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(UCFERRINT_BASE, 0xFFC62000, __READ_WRITE, UCFERRINT_t);
__IOREG(UCFSERSTCLR_BASE, 0xFFC62004, __READ_WRITE, UCFSERSTCLR_t);
__IOREG(UCFDERSTCLR_BASE, 0xFFC62008, __READ_WRITE, UCFDERSTCLR_t);
__IOREG(UCFOVFSTR_BASE, 0xFFC6200C, __READ, UCFOVFSTR_t);
__IOREG(UCFSERSTR_BASE, 0xFFC62020, __READ, UCFSERSTR_t);
__IOREG(UCFDERSTR_BASE, 0xFFC62030, __READ, UCFDERSTR_t);
__IOREG(UCF1SEDADR_BASE, 0xFFC62040, __READ, UCF1SEDADR_t);
__IOREG(UCF2SEDADR_BASE, 0xFFC62044, __READ, UCF2SEDADR_t);
__IOREG(UCF3SEDADR_BASE, 0xFFC62048, __READ, UCF3SEDADR_t);
__IOREG(UCF4SEDADR_BASE, 0xFFC6204C, __READ, UCF4SEDADR_t);
__IOREG(UCFDEDADR_BASE, 0xFFC620C0, __READ, UCFDEDADR_t);
__IOREG(CFAPCTL_BASE, 0xFFC62100, __READ_WRITE, CFAPCTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define UCFERRINT UCFERRINT_BASE.UINT32
#define UCFERRINT_SEDIE UCFERRINT_BASE.BIT._SEDIE
#define UCFERRINT_DEDIE UCFERRINT_BASE.BIT._DEDIE
#define UCFERRINT_APEIE UCFERRINT_BASE.BIT._APEIE
#define UCFERRINT_SEOVFIE UCFERRINT_BASE.BIT._SEOVFIE
#define UCFSERSTCLR UCFSERSTCLR_BASE.UINT32
#define UCFSERSTCLR_SSTCLR0 UCFSERSTCLR_BASE.BIT._SSTCLR0
#define UCFSERSTCLR_SSTCLR1 UCFSERSTCLR_BASE.BIT._SSTCLR1
#define UCFSERSTCLR_SSTCLR2 UCFSERSTCLR_BASE.BIT._SSTCLR2
#define UCFSERSTCLR_SSTCLR3 UCFSERSTCLR_BASE.BIT._SSTCLR3
#define UCFDERSTCLR UCFDERSTCLR_BASE.UINT32
#define UCFDERSTCLR_DSTCLR UCFDERSTCLR_BASE.BIT._DSTCLR
#define UCFOVFSTR UCFOVFSTR_BASE.UINT32
#define UCFOVFSTR_SERROVF UCFOVFSTR_BASE.BIT._SERROVF
#define UCFSERSTR UCFSERSTR_BASE.UINT32
#define UCFSERSTR_SEDF0 UCFSERSTR_BASE.BIT._SEDF0
#define UCFSERSTR_SEDF1 UCFSERSTR_BASE.BIT._SEDF1
#define UCFSERSTR_SEDF2 UCFSERSTR_BASE.BIT._SEDF2
#define UCFSERSTR_SEDF3 UCFSERSTR_BASE.BIT._SEDF3
#define UCFDERSTR UCFDERSTR_BASE.UINT32
#define UCFDERSTR_DEDF UCFDERSTR_BASE.BIT._DEDF
#define UCFDERSTR_APEF UCFDERSTR_BASE.BIT._APEF
#define UCF1SEDADR UCF1SEDADR_BASE.UINT32
#define UCF1SEDADR_SEADR UCF1SEDADR_BASE.BIT._SEADR
#define UCF2SEDADR UCF2SEDADR_BASE.UINT32
#define UCF2SEDADR_SEADR UCF2SEDADR_BASE.BIT._SEADR
#define UCF3SEDADR UCF3SEDADR_BASE.UINT32
#define UCF3SEDADR_SEADR UCF3SEDADR_BASE.BIT._SEADR
#define UCF4SEDADR UCF4SEDADR_BASE.UINT32
#define UCF4SEDADR_SEADR UCF4SEDADR_BASE.BIT._SEADR
#define UCFDEDADR UCFDEDADR_BASE.UINT32
#define UCFDEDADR_DEADR UCFDEDADR_BASE.BIT._DEADR
#define CFAPCTL CFAPCTL_BASE.UINT32
#define CFAPCTL_APARIDIS CFAPCTL_BASE.BIT._APARIDIS
#define CFAPCTL_APTESTA CFAPCTL_BASE.BIT._APTESTA
#define CFAPCTL_APTESTB CFAPCTL_BASE.BIT._APTESTB
#define CFAPCTL_PROT CFAPCTL_BASE.BIT._PROT

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif