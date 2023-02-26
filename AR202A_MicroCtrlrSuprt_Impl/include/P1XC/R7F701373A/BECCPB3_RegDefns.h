#ifndef __DR7F701373_BECCPB3_HEADER__
#define __DR7F701373_BECCPB3_HEADER__



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
} APEC3ECCCTLBits_t;

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
} APEC3ERRINTBits_t;

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
} APEC3STCLRBits_t;

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
} APEC3OVFSTRBits_t;

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
} APEC31STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC31STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC3ECCCTLBits_t BIT;
} APEC3ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC3ERRINTBits_t BIT;
} APEC3ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC3STCLRBits_t BIT;
} APEC3STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC3OVFSTRBits_t BIT;
} APEC3OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC31STERSTRBits_t BIT;
} APEC31STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC31STEADR0Bits_t BIT;
} APEC31STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC3ECCCTL_BASE, 0xFFF98000, __READ_WRITE, APEC3ECCCTL_t);
__IOREG(APEC3ERRINT_BASE, 0xFFF98004, __READ_WRITE, APEC3ERRINT_t);
__IOREG(APEC3STCLR_BASE, 0xFFF98008, __READ_WRITE, APEC3STCLR_t);
__IOREG(APEC3OVFSTR_BASE, 0xFFF9800C, __READ, APEC3OVFSTR_t);
__IOREG(APEC31STERSTR_BASE, 0xFFF98010, __READ, APEC31STERSTR_t);
__IOREG(APEC31STEADR0_BASE, 0xFFF98050, __READ, APEC31STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC3ECCCTL APEC3ECCCTL_BASE.UINT32
#define APEC3ECCCTL_ECCDIS APEC3ECCCTL_BASE.BIT._ECCDIS
#define APEC3ECCCTL_SECDIS APEC3ECCCTL_BASE.BIT._SECDIS
#define APEC3ECCCTL_AECCDIS APEC3ECCCTL_BASE.BIT._AECCDIS
#define APEC3ECCCTL_ASECDIS APEC3ECCCTL_BASE.BIT._ASECDIS
#define APEC3ECCCTL_PROT0 APEC3ECCCTL_BASE.BIT._PROT0
#define APEC3ECCCTL_PROT1 APEC3ECCCTL_BASE.BIT._PROT1
#define APEC3ERRINT APEC3ERRINT_BASE.UINT32
#define APEC3ERRINT_SEDIE APEC3ERRINT_BASE.BIT._SEDIE
#define APEC3ERRINT_DEDIE APEC3ERRINT_BASE.BIT._DEDIE
#define APEC3ERRINT_ASEDIE APEC3ERRINT_BASE.BIT._ASEDIE
#define APEC3ERRINT_ADEDIE APEC3ERRINT_BASE.BIT._ADEDIE
#define APEC3STCLR APEC3STCLR_BASE.UINT32
#define APEC3STCLR_SSTCLR APEC3STCLR_BASE.BIT._SSTCLR
#define APEC3OVFSTR APEC3OVFSTR_BASE.UINT32
#define APEC3OVFSTR_ERROVF APEC3OVFSTR_BASE.BIT._ERROVF
#define APEC31STERSTR APEC31STERSTR_BASE.UINT32
#define APEC31STERSTR_SEDF APEC31STERSTR_BASE.BIT._SEDF
#define APEC31STERSTR_DEDF APEC31STERSTR_BASE.BIT._DEDF
#define APEC31STERSTR_ASEDF APEC31STERSTR_BASE.BIT._ASEDF
#define APEC31STERSTR_ADEDF APEC31STERSTR_BASE.BIT._ADEDF
#define APEC31STEADR0 APEC31STEADR0_BASE.UINT32
#define APEC31STEADR0_EADR APEC31STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif