#ifndef __DR7F701373_BECCPB1_HEADER__
#define __DR7F701373_BECCPB1_HEADER__



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
} APEC1ECCCTLBits_t;

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
} APEC1ERRINTBits_t;

typedef struct
{
    uint32 _SSTCLR : 1;
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
} APEC1STCLRBits_t;

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
} APEC1OVFSTRBits_t;

typedef struct
{
    const uint32 _SEDF : 1;
    const uint32 _DEDF : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    const uint32 _ASEDF : 1;
    const uint32 _ADEDF : 1;
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
} APEC11STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC11STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC1ECCCTLBits_t BIT;
} APEC1ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC1ERRINTBits_t BIT;
} APEC1ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC1STCLRBits_t BIT;
} APEC1STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC1OVFSTRBits_t BIT;
} APEC1OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC11STERSTRBits_t BIT;
} APEC11STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC11STEADR0Bits_t BIT;
} APEC11STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC1ECCCTL_BASE, 0xFFE88000, __READ_WRITE, APEC1ECCCTL_t);
__IOREG(APEC1ERRINT_BASE, 0xFFE88004, __READ_WRITE, APEC1ERRINT_t);
__IOREG(APEC1STCLR_BASE, 0xFFE88008, __READ_WRITE, APEC1STCLR_t);
__IOREG(APEC1OVFSTR_BASE, 0xFFE8800C, __READ, APEC1OVFSTR_t);
__IOREG(APEC11STERSTR_BASE, 0xFFE88010, __READ, APEC11STERSTR_t);
__IOREG(APEC11STEADR0_BASE, 0xFFE88050, __READ, APEC11STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC1ECCCTL APEC1ECCCTL_BASE.UINT32
#define APEC1ECCCTL_ECCDIS APEC1ECCCTL_BASE.BIT._ECCDIS
#define APEC1ECCCTL_SECDIS APEC1ECCCTL_BASE.BIT._SECDIS
#define APEC1ECCCTL_AECCDIS APEC1ECCCTL_BASE.BIT._AECCDIS
#define APEC1ECCCTL_ASECDIS APEC1ECCCTL_BASE.BIT._ASECDIS
#define APEC1ECCCTL_PROT0 APEC1ECCCTL_BASE.BIT._PROT0
#define APEC1ECCCTL_PROT1 APEC1ECCCTL_BASE.BIT._PROT1
#define APEC1ERRINT APEC1ERRINT_BASE.UINT32
#define APEC1ERRINT_SEDIE APEC1ERRINT_BASE.BIT._SEDIE
#define APEC1ERRINT_DEDIE APEC1ERRINT_BASE.BIT._DEDIE
#define APEC1ERRINT_ASEDIE APEC1ERRINT_BASE.BIT._ASEDIE
#define APEC1ERRINT_ADEDIE APEC1ERRINT_BASE.BIT._ADEDIE
#define APEC1STCLR APEC1STCLR_BASE.UINT32
#define APEC1STCLR_SSTCLR APEC1STCLR_BASE.BIT._SSTCLR
#define APEC1OVFSTR APEC1OVFSTR_BASE.UINT32
#define APEC1OVFSTR_ERROVF APEC1OVFSTR_BASE.BIT._ERROVF
#define APEC11STERSTR APEC11STERSTR_BASE.UINT32
#define APEC11STERSTR_SEDF APEC11STERSTR_BASE.BIT._SEDF
#define APEC11STERSTR_DEDF APEC11STERSTR_BASE.BIT._DEDF
#define APEC11STERSTR_ASEDF APEC11STERSTR_BASE.BIT._ASEDF
#define APEC11STERSTR_ADEDF APEC11STERSTR_BASE.BIT._ADEDF
#define APEC11STEADR0 APEC11STEADR0_BASE.UINT32
#define APEC11STEADR0_EADR APEC11STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif