#ifndef __DR7F701373_BECCPB4_HEADER__
#define __DR7F701373_BECCPB4_HEADER__



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
} APEC4ECCCTLBits_t;

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
} APEC4ERRINTBits_t;

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
} APEC4STCLRBits_t;

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
} APEC4OVFSTRBits_t;

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
} APEC41STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC41STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC4ECCCTLBits_t BIT;
} APEC4ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC4ERRINTBits_t BIT;
} APEC4ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC4STCLRBits_t BIT;
} APEC4STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC4OVFSTRBits_t BIT;
} APEC4OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC41STERSTRBits_t BIT;
} APEC41STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC41STEADR0Bits_t BIT;
} APEC41STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC4ECCCTL_BASE, 0xFFCD8000, __READ_WRITE, APEC4ECCCTL_t);
__IOREG(APEC4ERRINT_BASE, 0xFFCD8004, __READ_WRITE, APEC4ERRINT_t);
__IOREG(APEC4STCLR_BASE, 0xFFCD8008, __READ_WRITE, APEC4STCLR_t);
__IOREG(APEC4OVFSTR_BASE, 0xFFCD800C, __READ, APEC4OVFSTR_t);
__IOREG(APEC41STERSTR_BASE, 0xFFCD8010, __READ, APEC41STERSTR_t);
__IOREG(APEC41STEADR0_BASE, 0xFFCD8050, __READ, APEC41STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC4ECCCTL APEC4ECCCTL_BASE.UINT32
#define APEC4ECCCTL_ECCDIS APEC4ECCCTL_BASE.BIT._ECCDIS
#define APEC4ECCCTL_SECDIS APEC4ECCCTL_BASE.BIT._SECDIS
#define APEC4ECCCTL_AECCDIS APEC4ECCCTL_BASE.BIT._AECCDIS
#define APEC4ECCCTL_ASECDIS APEC4ECCCTL_BASE.BIT._ASECDIS
#define APEC4ECCCTL_PROT0 APEC4ECCCTL_BASE.BIT._PROT0
#define APEC4ECCCTL_PROT1 APEC4ECCCTL_BASE.BIT._PROT1
#define APEC4ERRINT APEC4ERRINT_BASE.UINT32
#define APEC4ERRINT_SEDIE APEC4ERRINT_BASE.BIT._SEDIE
#define APEC4ERRINT_DEDIE APEC4ERRINT_BASE.BIT._DEDIE
#define APEC4ERRINT_ASEDIE APEC4ERRINT_BASE.BIT._ASEDIE
#define APEC4ERRINT_ADEDIE APEC4ERRINT_BASE.BIT._ADEDIE
#define APEC4STCLR APEC4STCLR_BASE.UINT32
#define APEC4STCLR_SSTCLR APEC4STCLR_BASE.BIT._SSTCLR
#define APEC4OVFSTR APEC4OVFSTR_BASE.UINT32
#define APEC4OVFSTR_ERROVF APEC4OVFSTR_BASE.BIT._ERROVF
#define APEC41STERSTR APEC41STERSTR_BASE.UINT32
#define APEC41STERSTR_SEDF APEC41STERSTR_BASE.BIT._SEDF
#define APEC41STERSTR_DEDF APEC41STERSTR_BASE.BIT._DEDF
#define APEC41STERSTR_ASEDF APEC41STERSTR_BASE.BIT._ASEDF
#define APEC41STERSTR_ADEDF APEC41STERSTR_BASE.BIT._ADEDF
#define APEC41STEADR0 APEC41STEADR0_BASE.UINT32
#define APEC41STEADR0_EADR APEC41STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif