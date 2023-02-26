#ifndef __DR7F701373_BECCPB2_HEADER__
#define __DR7F701373_BECCPB2_HEADER__



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
} APEC2ECCCTLBits_t;

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
} APEC2ERRINTBits_t;

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
} APEC2STCLRBits_t;

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
} APEC2OVFSTRBits_t;

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
} APEC21STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC21STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC2ECCCTLBits_t BIT;
} APEC2ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC2ERRINTBits_t BIT;
} APEC2ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC2STCLRBits_t BIT;
} APEC2STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC2OVFSTRBits_t BIT;
} APEC2OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC21STERSTRBits_t BIT;
} APEC21STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC21STEADR0Bits_t BIT;
} APEC21STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC2ECCCTL_BASE, 0xFFE88200, __READ_WRITE, APEC2ECCCTL_t);
__IOREG(APEC2ERRINT_BASE, 0xFFE88204, __READ_WRITE, APEC2ERRINT_t);
__IOREG(APEC2STCLR_BASE, 0xFFE88208, __READ_WRITE, APEC2STCLR_t);
__IOREG(APEC2OVFSTR_BASE, 0xFFE8820C, __READ, APEC2OVFSTR_t);
__IOREG(APEC21STERSTR_BASE, 0xFFE88210, __READ, APEC21STERSTR_t);
__IOREG(APEC21STEADR0_BASE, 0xFFE88250, __READ, APEC21STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC2ECCCTL APEC2ECCCTL_BASE.UINT32
#define APEC2ECCCTL_ECCDIS APEC2ECCCTL_BASE.BIT._ECCDIS
#define APEC2ECCCTL_SECDIS APEC2ECCCTL_BASE.BIT._SECDIS
#define APEC2ECCCTL_AECCDIS APEC2ECCCTL_BASE.BIT._AECCDIS
#define APEC2ECCCTL_ASECDIS APEC2ECCCTL_BASE.BIT._ASECDIS
#define APEC2ECCCTL_PROT0 APEC2ECCCTL_BASE.BIT._PROT0
#define APEC2ECCCTL_PROT1 APEC2ECCCTL_BASE.BIT._PROT1
#define APEC2ERRINT APEC2ERRINT_BASE.UINT32
#define APEC2ERRINT_SEDIE APEC2ERRINT_BASE.BIT._SEDIE
#define APEC2ERRINT_DEDIE APEC2ERRINT_BASE.BIT._DEDIE
#define APEC2ERRINT_ASEDIE APEC2ERRINT_BASE.BIT._ASEDIE
#define APEC2ERRINT_ADEDIE APEC2ERRINT_BASE.BIT._ADEDIE
#define APEC2STCLR APEC2STCLR_BASE.UINT32
#define APEC2STCLR_SSTCLR APEC2STCLR_BASE.BIT._SSTCLR
#define APEC2OVFSTR APEC2OVFSTR_BASE.UINT32
#define APEC2OVFSTR_ERROVF APEC2OVFSTR_BASE.BIT._ERROVF
#define APEC21STERSTR APEC21STERSTR_BASE.UINT32
#define APEC21STERSTR_SEDF APEC21STERSTR_BASE.BIT._SEDF
#define APEC21STERSTR_DEDF APEC21STERSTR_BASE.BIT._DEDF
#define APEC21STERSTR_ASEDF APEC21STERSTR_BASE.BIT._ASEDF
#define APEC21STERSTR_ADEDF APEC21STERSTR_BASE.BIT._ADEDF
#define APEC21STEADR0 APEC21STEADR0_BASE.UINT32
#define APEC21STEADR0_EADR APEC21STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif