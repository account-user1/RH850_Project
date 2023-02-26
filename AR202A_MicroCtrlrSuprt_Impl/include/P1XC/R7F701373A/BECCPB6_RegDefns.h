#ifndef __DR7F701373_BECCPB6_HEADER__
#define __DR7F701373_BECCPB6_HEADER__



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
} APEC6ECCCTLBits_t;

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
} APEC6ERRINTBits_t;

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
} APEC6STCLRBits_t;

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
} APEC6OVFSTRBits_t;

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
} APEC61STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC61STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC6ECCCTLBits_t BIT;
} APEC6ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC6ERRINTBits_t BIT;
} APEC6ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC6STCLRBits_t BIT;
} APEC6STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC6OVFSTRBits_t BIT;
} APEC6OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC61STERSTRBits_t BIT;
} APEC61STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC61STEADR0Bits_t BIT;
} APEC61STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC6ECCCTL_BASE, 0xFFCD8400, __READ_WRITE, APEC6ECCCTL_t);
__IOREG(APEC6ERRINT_BASE, 0xFFCD8404, __READ_WRITE, APEC6ERRINT_t);
__IOREG(APEC6STCLR_BASE, 0xFFCD8408, __READ_WRITE, APEC6STCLR_t);
__IOREG(APEC6OVFSTR_BASE, 0xFFCD840C, __READ, APEC6OVFSTR_t);
__IOREG(APEC61STERSTR_BASE, 0xFFCD8410, __READ, APEC61STERSTR_t);
__IOREG(APEC61STEADR0_BASE, 0xFFCD8450, __READ, APEC61STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC6ECCCTL APEC6ECCCTL_BASE.UINT32
#define APEC6ECCCTL_ECCDIS APEC6ECCCTL_BASE.BIT._ECCDIS
#define APEC6ECCCTL_SECDIS APEC6ECCCTL_BASE.BIT._SECDIS
#define APEC6ECCCTL_AECCDIS APEC6ECCCTL_BASE.BIT._AECCDIS
#define APEC6ECCCTL_ASECDIS APEC6ECCCTL_BASE.BIT._ASECDIS
#define APEC6ECCCTL_PROT0 APEC6ECCCTL_BASE.BIT._PROT0
#define APEC6ECCCTL_PROT1 APEC6ECCCTL_BASE.BIT._PROT1
#define APEC6ERRINT APEC6ERRINT_BASE.UINT32
#define APEC6ERRINT_SEDIE APEC6ERRINT_BASE.BIT._SEDIE
#define APEC6ERRINT_DEDIE APEC6ERRINT_BASE.BIT._DEDIE
#define APEC6ERRINT_ASEDIE APEC6ERRINT_BASE.BIT._ASEDIE
#define APEC6ERRINT_ADEDIE APEC6ERRINT_BASE.BIT._ADEDIE
#define APEC6STCLR APEC6STCLR_BASE.UINT32
#define APEC6STCLR_SSTCLR APEC6STCLR_BASE.BIT._SSTCLR
#define APEC6OVFSTR APEC6OVFSTR_BASE.UINT32
#define APEC6OVFSTR_ERROVF APEC6OVFSTR_BASE.BIT._ERROVF
#define APEC61STERSTR APEC61STERSTR_BASE.UINT32
#define APEC61STERSTR_SEDF APEC61STERSTR_BASE.BIT._SEDF
#define APEC61STERSTR_DEDF APEC61STERSTR_BASE.BIT._DEDF
#define APEC61STERSTR_ASEDF APEC61STERSTR_BASE.BIT._ASEDF
#define APEC61STERSTR_ADEDF APEC61STERSTR_BASE.BIT._ADEDF
#define APEC61STEADR0 APEC61STEADR0_BASE.UINT32
#define APEC61STEADR0_EADR APEC61STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif