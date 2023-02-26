#ifndef __DR7F701373_BECCPB5_HEADER__
#define __DR7F701373_BECCPB5_HEADER__



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
} APEC5ECCCTLBits_t;

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
} APEC5ERRINTBits_t;

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
} APEC5STCLRBits_t;

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
} APEC5OVFSTRBits_t;

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
} APEC51STERSTRBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} APEC51STEADR0Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    APEC5ECCCTLBits_t BIT;
} APEC5ECCCTL_t;

typedef union
{
    uint32 UINT32;
    APEC5ERRINTBits_t BIT;
} APEC5ERRINT_t;

typedef union
{
    uint32 UINT32;
    APEC5STCLRBits_t BIT;
} APEC5STCLR_t;

typedef union
{
    uint32 UINT32;
    const APEC5OVFSTRBits_t BIT;
} APEC5OVFSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC51STERSTRBits_t BIT;
} APEC51STERSTR_t;

typedef union
{
    uint32 UINT32;
    const APEC51STEADR0Bits_t BIT;
} APEC51STEADR0_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(APEC5ECCCTL_BASE, 0xFFCD8200, __READ_WRITE, APEC5ECCCTL_t);
__IOREG(APEC5ERRINT_BASE, 0xFFCD8204, __READ_WRITE, APEC5ERRINT_t);
__IOREG(APEC5STCLR_BASE, 0xFFCD8208, __READ_WRITE, APEC5STCLR_t);
__IOREG(APEC5OVFSTR_BASE, 0xFFCD820C, __READ, APEC5OVFSTR_t);
__IOREG(APEC51STERSTR_BASE, 0xFFCD8210, __READ, APEC51STERSTR_t);
__IOREG(APEC51STEADR0_BASE, 0xFFCD8250, __READ, APEC51STEADR0_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define APEC5ECCCTL APEC5ECCCTL_BASE.UINT32
#define APEC5ECCCTL_ECCDIS APEC5ECCCTL_BASE.BIT._ECCDIS
#define APEC5ECCCTL_SECDIS APEC5ECCCTL_BASE.BIT._SECDIS
#define APEC5ECCCTL_AECCDIS APEC5ECCCTL_BASE.BIT._AECCDIS
#define APEC5ECCCTL_ASECDIS APEC5ECCCTL_BASE.BIT._ASECDIS
#define APEC5ECCCTL_PROT0 APEC5ECCCTL_BASE.BIT._PROT0
#define APEC5ECCCTL_PROT1 APEC5ECCCTL_BASE.BIT._PROT1
#define APEC5ERRINT APEC5ERRINT_BASE.UINT32
#define APEC5ERRINT_SEDIE APEC5ERRINT_BASE.BIT._SEDIE
#define APEC5ERRINT_DEDIE APEC5ERRINT_BASE.BIT._DEDIE
#define APEC5ERRINT_ASEDIE APEC5ERRINT_BASE.BIT._ASEDIE
#define APEC5ERRINT_ADEDIE APEC5ERRINT_BASE.BIT._ADEDIE
#define APEC5STCLR APEC5STCLR_BASE.UINT32
#define APEC5STCLR_SSTCLR APEC5STCLR_BASE.BIT._SSTCLR
#define APEC5OVFSTR APEC5OVFSTR_BASE.UINT32
#define APEC5OVFSTR_ERROVF APEC5OVFSTR_BASE.BIT._ERROVF
#define APEC51STERSTR APEC51STERSTR_BASE.UINT32
#define APEC51STERSTR_SEDF APEC51STERSTR_BASE.BIT._SEDF
#define APEC51STERSTR_DEDF APEC51STERSTR_BASE.BIT._DEDF
#define APEC51STERSTR_ASEDF APEC51STERSTR_BASE.BIT._ASEDF
#define APEC51STERSTR_ADEDF APEC51STERSTR_BASE.BIT._ADEDF
#define APEC51STEADR0 APEC51STEADR0_BASE.UINT32
#define APEC51STEADR0_EADR APEC51STEADR0_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif