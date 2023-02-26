#ifndef __DR7F701373_BECCPB0_HEADER__
#define __DR7F701373_BECCPB0_HEADER__



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
} APEC0ECCCTLBits_t;

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
} APEC0ERRINTBits_t;

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
} APEC0STCLRBits_t;

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
} APEC0OVFSTRBits_t;

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
} APEC01STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC01STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC0ECCCTLBits_t BIT;
} APEC0ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC0ERRINTBits_t BIT;
} APEC0ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC0STCLRBits_t BIT;
} APEC0STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC0OVFSTRBits_t BIT;
} APEC0OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC01STERSTRBits_t BIT;
} APEC01STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC01STEADR0Bits_t BIT;
} APEC01STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC0ECCCTL_BASE, 0xFFCB8000, __READ_WRITE, APEC0ECCCTL_t);
__IOREG(APEC0ERRINT_BASE, 0xFFCB8004, __READ_WRITE, APEC0ERRINT_t);
__IOREG(APEC0STCLR_BASE, 0xFFCB8008, __READ_WRITE, APEC0STCLR_t);
__IOREG(APEC0OVFSTR_BASE, 0xFFCB800C, __READ, APEC0OVFSTR_t);
__IOREG(APEC01STERSTR_BASE, 0xFFCB8010, __READ, APEC01STERSTR_t);
__IOREG(APEC01STEADR0_BASE, 0xFFCB8050, __READ, APEC01STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC0ECCCTL APEC0ECCCTL_BASE.UINT32
#define APEC0ECCCTL_ECCDIS APEC0ECCCTL_BASE.BIT._ECCDIS
#define APEC0ECCCTL_SECDIS APEC0ECCCTL_BASE.BIT._SECDIS
#define APEC0ECCCTL_AECCDIS APEC0ECCCTL_BASE.BIT._AECCDIS
#define APEC0ECCCTL_ASECDIS APEC0ECCCTL_BASE.BIT._ASECDIS
#define APEC0ECCCTL_PROT0 APEC0ECCCTL_BASE.BIT._PROT0
#define APEC0ECCCTL_PROT1 APEC0ECCCTL_BASE.BIT._PROT1
#define APEC0ERRINT APEC0ERRINT_BASE.UINT32
#define APEC0ERRINT_SEDIE APEC0ERRINT_BASE.BIT._SEDIE
#define APEC0ERRINT_DEDIE APEC0ERRINT_BASE.BIT._DEDIE
#define APEC0ERRINT_ASEDIE APEC0ERRINT_BASE.BIT._ASEDIE
#define APEC0ERRINT_ADEDIE APEC0ERRINT_BASE.BIT._ADEDIE
#define APEC0STCLR APEC0STCLR_BASE.UINT32
#define APEC0STCLR_SSTCLR APEC0STCLR_BASE.BIT._SSTCLR
#define APEC0OVFSTR APEC0OVFSTR_BASE.UINT32
#define APEC0OVFSTR_ERROVF APEC0OVFSTR_BASE.BIT._ERROVF
#define APEC01STERSTR APEC01STERSTR_BASE.UINT32
#define APEC01STERSTR_SEDF APEC01STERSTR_BASE.BIT._SEDF
#define APEC01STERSTR_DEDF APEC01STERSTR_BASE.BIT._DEDF
#define APEC01STERSTR_ASEDF APEC01STERSTR_BASE.BIT._ASEDF
#define APEC01STERSTR_ADEDF APEC01STERSTR_BASE.BIT._ADEDF
#define APEC01STEADR0 APEC01STEADR0_BASE.UINT32
#define APEC01STEADR0_EADR APEC01STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif