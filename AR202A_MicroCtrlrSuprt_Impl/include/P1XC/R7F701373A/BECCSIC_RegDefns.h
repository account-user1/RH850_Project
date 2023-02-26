#ifndef __DR7F701373_BECCSIC_HEADER__
#define __DR7F701373_BECCSIC_HEADER__



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
} VPECCCTL_SG0Bits_t;

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
} VPERRINT_SG0Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_SG0Bits_t;

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
} VPOVFSTR_SG0Bits_t;

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
} VPERSTR_SG0Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_SG0Bits_t;

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
} VPECCCTL_SG1Bits_t;

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
} VPERRINT_SG1Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_SG1Bits_t;

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
} VPOVFSTR_SG1Bits_t;

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
} VPERSTR_SG1Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_SG1Bits_t;

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
} VPECCCTL_SG2Bits_t;

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
} VPERRINT_SG2Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_SG2Bits_t;

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
} VPOVFSTR_SG2Bits_t;

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
} VPERSTR_SG2Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_SG2Bits_t;

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
} VPECCCTL_SG3Bits_t;

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
} VPERRINT_SG3Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_SG3Bits_t;

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
} VPOVFSTR_SG3Bits_t;

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
} VPERSTR_SG3Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_SG3Bits_t;

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
} VPECCCTL_SG5Bits_t;

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
} VPERRINT_SG5Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_SG5Bits_t;

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
} VPOVFSTR_SG5Bits_t;

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
} VPERSTR_SG5Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_SG5Bits_t;

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
} VPECCCTL_TERM_SG7Bits_t;

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
} VPERRINT_TERM_SG7Bits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_TERM_SG7Bits_t;

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
} VPOVFSTR_TERM_SG7Bits_t;

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
} VPERSTR_TERM_SG7Bits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPEADR_TERM_SG7Bits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
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
} VPECCCTL_VCI2VPIBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 padding1 : 1;
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
} VPERRINT_VCI2VPIBits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VPERSTCLR_VCI2VPIBits_t;

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
} VPOVFSTR_VCI2VPIBits_t;

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
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 padding13 : 1;
    const uint32 _ASEDF : 1;
    const uint32 _ADEDF : 1;
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
} VPERSTR_VCI2VPIBits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VPERADR0_VCI2VPIBits_t;

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
} VCECCCTL_PDMABits_t;

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
} VCERRINT_PDMABits_t;

typedef struct
{
    uint32 _SSTLCR : 1;
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
} VCERSTCLR_PDMABits_t;

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
} VCOVFSTR_PDMABits_t;

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
} VCERSTR_PDMABits_t;

typedef struct
{
    const uint32 _EADR : 32;
} VCEADR_PDMABits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    VPECCCTL_SG0Bits_t BIT;
} VPECCCTL_SG0_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_SG0Bits_t BIT;
} VPERRINT_SG0_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_SG0Bits_t BIT;
} VPERSTCLR_SG0_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_SG0Bits_t BIT;
} VPOVFSTR_SG0_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_SG0Bits_t BIT;
} VPERSTR_SG0_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_SG0Bits_t BIT;
} VPEADR_SG0_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_SG1Bits_t BIT;
} VPECCCTL_SG1_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_SG1Bits_t BIT;
} VPERRINT_SG1_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_SG1Bits_t BIT;
} VPERSTCLR_SG1_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_SG1Bits_t BIT;
} VPOVFSTR_SG1_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_SG1Bits_t BIT;
} VPERSTR_SG1_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_SG1Bits_t BIT;
} VPEADR_SG1_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_SG2Bits_t BIT;
} VPECCCTL_SG2_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_SG2Bits_t BIT;
} VPERRINT_SG2_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_SG2Bits_t BIT;
} VPERSTCLR_SG2_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_SG2Bits_t BIT;
} VPOVFSTR_SG2_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_SG2Bits_t BIT;
} VPERSTR_SG2_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_SG2Bits_t BIT;
} VPEADR_SG2_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_SG3Bits_t BIT;
} VPECCCTL_SG3_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_SG3Bits_t BIT;
} VPERRINT_SG3_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_SG3Bits_t BIT;
} VPERSTCLR_SG3_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_SG3Bits_t BIT;
} VPOVFSTR_SG3_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_SG3Bits_t BIT;
} VPERSTR_SG3_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_SG3Bits_t BIT;
} VPEADR_SG3_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_SG5Bits_t BIT;
} VPECCCTL_SG5_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_SG5Bits_t BIT;
} VPERRINT_SG5_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_SG5Bits_t BIT;
} VPERSTCLR_SG5_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_SG5Bits_t BIT;
} VPOVFSTR_SG5_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_SG5Bits_t BIT;
} VPERSTR_SG5_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_SG5Bits_t BIT;
} VPEADR_SG5_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_TERM_SG7Bits_t BIT;
} VPECCCTL_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_TERM_SG7Bits_t BIT;
} VPERRINT_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_TERM_SG7Bits_t BIT;
} VPERSTCLR_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_TERM_SG7Bits_t BIT;
} VPOVFSTR_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_TERM_SG7Bits_t BIT;
} VPERSTR_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    const VPEADR_TERM_SG7Bits_t BIT;
} VPEADR_TERM_SG7_t;

typedef union
{
    uint32 UINT32;
    VPECCCTL_VCI2VPIBits_t BIT;
} VPECCCTL_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    VPERRINT_VCI2VPIBits_t BIT;
} VPERRINT_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    VPERSTCLR_VCI2VPIBits_t BIT;
} VPERSTCLR_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    const VPOVFSTR_VCI2VPIBits_t BIT;
} VPOVFSTR_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    const VPERSTR_VCI2VPIBits_t BIT;
} VPERSTR_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    const VPERADR0_VCI2VPIBits_t BIT;
} VPERADR0_VCI2VPI_t;

typedef union
{
    uint32 UINT32;
    VCECCCTL_PDMABits_t BIT;
} VCECCCTL_PDMA_t;

typedef union
{
    uint32 UINT32;
    VCERRINT_PDMABits_t BIT;
} VCERRINT_PDMA_t;

typedef union
{
    uint32 UINT32;
    VCERSTCLR_PDMABits_t BIT;
} VCERSTCLR_PDMA_t;

typedef union
{
    uint32 UINT32;
    const VCOVFSTR_PDMABits_t BIT;
} VCOVFSTR_PDMA_t;

typedef union
{
    uint32 UINT32;
    const VCERSTR_PDMABits_t BIT;
} VCERSTR_PDMA_t;

typedef union
{
    uint32 UINT32;
    const VCEADR_PDMABits_t BIT;
} VCEADR_PDMA_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(VPECCCTL_SG0_BASE, 0xFFC67000, __READ_WRITE, VPECCCTL_SG0_t);
__IOREG(VPERRINT_SG0_BASE, 0xFFC67004, __READ_WRITE, VPERRINT_SG0_t);
__IOREG(VPERSTCLR_SG0_BASE, 0xFFC67008, __READ_WRITE, VPERSTCLR_SG0_t);
__IOREG(VPOVFSTR_SG0_BASE, 0xFFC6700C, __READ, VPOVFSTR_SG0_t);
__IOREG(VPERSTR_SG0_BASE, 0xFFC67010, __READ, VPERSTR_SG0_t);
__IOREG(VPEADR_SG0_BASE, 0xFFC67050, __READ, VPEADR_SG0_t);
__IOREG(VPECCCTL_SG1_BASE, 0xFFC67400, __READ_WRITE, VPECCCTL_SG1_t);
__IOREG(VPERRINT_SG1_BASE, 0xFFC67404, __READ_WRITE, VPERRINT_SG1_t);
__IOREG(VPERSTCLR_SG1_BASE, 0xFFC67408, __READ_WRITE, VPERSTCLR_SG1_t);
__IOREG(VPOVFSTR_SG1_BASE, 0xFFC6740C, __READ, VPOVFSTR_SG1_t);
__IOREG(VPERSTR_SG1_BASE, 0xFFC67410, __READ, VPERSTR_SG1_t);
__IOREG(VPEADR_SG1_BASE, 0xFFC67450, __READ, VPEADR_SG1_t);
__IOREG(VPECCCTL_SG2_BASE, 0xFFC67800, __READ_WRITE, VPECCCTL_SG2_t);
__IOREG(VPERRINT_SG2_BASE, 0xFFC67804, __READ_WRITE, VPERRINT_SG2_t);
__IOREG(VPERSTCLR_SG2_BASE, 0xFFC67808, __READ_WRITE, VPERSTCLR_SG2_t);
__IOREG(VPOVFSTR_SG2_BASE, 0xFFC6780C, __READ, VPOVFSTR_SG2_t);
__IOREG(VPERSTR_SG2_BASE, 0xFFC67810, __READ, VPERSTR_SG2_t);
__IOREG(VPEADR_SG2_BASE, 0xFFC67850, __READ, VPEADR_SG2_t);
__IOREG(VPECCCTL_SG3_BASE, 0xFFC67C00, __READ_WRITE, VPECCCTL_SG3_t);
__IOREG(VPERRINT_SG3_BASE, 0xFFC67C04, __READ_WRITE, VPERRINT_SG3_t);
__IOREG(VPERSTCLR_SG3_BASE, 0xFFC67C08, __READ_WRITE, VPERSTCLR_SG3_t);
__IOREG(VPOVFSTR_SG3_BASE, 0xFFC67C0C, __READ, VPOVFSTR_SG3_t);
__IOREG(VPERSTR_SG3_BASE, 0xFFC67C10, __READ, VPERSTR_SG3_t);
__IOREG(VPEADR_SG3_BASE, 0xFFC67C50, __READ, VPEADR_SG3_t);
__IOREG(VPECCCTL_SG5_BASE, 0xFFC68400, __READ_WRITE, VPECCCTL_SG5_t);
__IOREG(VPERRINT_SG5_BASE, 0xFFC68404, __READ_WRITE, VPERRINT_SG5_t);
__IOREG(VPERSTCLR_SG5_BASE, 0xFFC68408, __READ_WRITE, VPERSTCLR_SG5_t);
__IOREG(VPOVFSTR_SG5_BASE, 0xFFC6840C, __READ, VPOVFSTR_SG5_t);
__IOREG(VPERSTR_SG5_BASE, 0xFFC68410, __READ, VPERSTR_SG5_t);
__IOREG(VPEADR_SG5_BASE, 0xFFC68450, __READ, VPEADR_SG5_t);
__IOREG(VPECCCTL_TERM_SG7_BASE, 0xFFC68E00, __READ_WRITE, VPECCCTL_TERM_SG7_t);
__IOREG(VPERRINT_TERM_SG7_BASE, 0xFFC68E04, __READ_WRITE, VPERRINT_TERM_SG7_t);
__IOREG(VPERSTCLR_TERM_SG7_BASE, 0xFFC68E08, __READ_WRITE, VPERSTCLR_TERM_SG7_t);
__IOREG(VPOVFSTR_TERM_SG7_BASE, 0xFFC68E0C, __READ, VPOVFSTR_TERM_SG7_t);
__IOREG(VPERSTR_TERM_SG7_BASE, 0xFFC68E10, __READ, VPERSTR_TERM_SG7_t);
__IOREG(VPEADR_TERM_SG7_BASE, 0xFFC68E50, __READ, VPEADR_TERM_SG7_t);
__IOREG(VPECCCTL_VCI2VPI_BASE, 0xFFC69000, __READ_WRITE, VPECCCTL_VCI2VPI_t);
__IOREG(VPERRINT_VCI2VPI_BASE, 0xFFC69004, __READ_WRITE, VPERRINT_VCI2VPI_t);
__IOREG(VPERSTCLR_VCI2VPI_BASE, 0xFFC69008, __READ_WRITE, VPERSTCLR_VCI2VPI_t);
__IOREG(VPOVFSTR_VCI2VPI_BASE, 0xFFC6900C, __READ, VPOVFSTR_VCI2VPI_t);
__IOREG(VPERSTR_VCI2VPI_BASE, 0xFFC69010, __READ, VPERSTR_VCI2VPI_t);
__IOREG(VPERADR0_VCI2VPI_BASE, 0xFFC69050, __READ, VPERADR0_VCI2VPI_t);
__IOREG(VCECCCTL_PDMA_BASE, 0xFFC6A000, __READ_WRITE, VCECCCTL_PDMA_t);
__IOREG(VCERRINT_PDMA_BASE, 0xFFC6A004, __READ_WRITE, VCERRINT_PDMA_t);
__IOREG(VCERSTCLR_PDMA_BASE, 0xFFC6A008, __READ_WRITE, VCERSTCLR_PDMA_t);
__IOREG(VCOVFSTR_PDMA_BASE, 0xFFC6A00C, __READ, VCOVFSTR_PDMA_t);
__IOREG(VCERSTR_PDMA_BASE, 0xFFC6A010, __READ, VCERSTR_PDMA_t);
__IOREG(VCEADR_PDMA_BASE, 0xFFC6A050, __READ, VCEADR_PDMA_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define VPECCCTL_SG0 VPECCCTL_SG0_BASE.UINT32
#define VPECCCTL_SG0_ECCDIS VPECCCTL_SG0_BASE.BIT._ECCDIS
#define VPECCCTL_SG0_SECDIS VPECCCTL_SG0_BASE.BIT._SECDIS
#define VPECCCTL_SG0_PROT0 VPECCCTL_SG0_BASE.BIT._PROT0
#define VPECCCTL_SG0_PROT1 VPECCCTL_SG0_BASE.BIT._PROT1
#define VPERRINT_SG0 VPERRINT_SG0_BASE.UINT32
#define VPERRINT_SG0_SEDIE VPERRINT_SG0_BASE.BIT._SEDIE
#define VPERRINT_SG0_DEDIE VPERRINT_SG0_BASE.BIT._DEDIE
#define VPERSTCLR_SG0 VPERSTCLR_SG0_BASE.UINT32
#define VPERSTCLR_SG0_SSTLCR VPERSTCLR_SG0_BASE.BIT._SSTLCR
#define VPOVFSTR_SG0 VPOVFSTR_SG0_BASE.UINT32
#define VPOVFSTR_SG0_ERROVF VPOVFSTR_SG0_BASE.BIT._ERROVF
#define VPERSTR_SG0 VPERSTR_SG0_BASE.UINT32
#define VPERSTR_SG0_SEDF VPERSTR_SG0_BASE.BIT._SEDF
#define VPERSTR_SG0_DEDF VPERSTR_SG0_BASE.BIT._DEDF
#define VPEADR_SG0 VPEADR_SG0_BASE.UINT32
#define VPEADR_SG0_EADR VPEADR_SG0_BASE.BIT._EADR
#define VPECCCTL_SG1 VPECCCTL_SG1_BASE.UINT32
#define VPECCCTL_SG1_ECCDIS VPECCCTL_SG1_BASE.BIT._ECCDIS
#define VPECCCTL_SG1_SECDIS VPECCCTL_SG1_BASE.BIT._SECDIS
#define VPECCCTL_SG1_PROT0 VPECCCTL_SG1_BASE.BIT._PROT0
#define VPECCCTL_SG1_PROT1 VPECCCTL_SG1_BASE.BIT._PROT1
#define VPERRINT_SG1 VPERRINT_SG1_BASE.UINT32
#define VPERRINT_SG1_SEDIE VPERRINT_SG1_BASE.BIT._SEDIE
#define VPERRINT_SG1_DEDIE VPERRINT_SG1_BASE.BIT._DEDIE
#define VPERSTCLR_SG1 VPERSTCLR_SG1_BASE.UINT32
#define VPERSTCLR_SG1_SSTLCR VPERSTCLR_SG1_BASE.BIT._SSTLCR
#define VPOVFSTR_SG1 VPOVFSTR_SG1_BASE.UINT32
#define VPOVFSTR_SG1_ERROVF VPOVFSTR_SG1_BASE.BIT._ERROVF
#define VPERSTR_SG1 VPERSTR_SG1_BASE.UINT32
#define VPERSTR_SG1_SEDF VPERSTR_SG1_BASE.BIT._SEDF
#define VPERSTR_SG1_DEDF VPERSTR_SG1_BASE.BIT._DEDF
#define VPEADR_SG1 VPEADR_SG1_BASE.UINT32
#define VPEADR_SG1_EADR VPEADR_SG1_BASE.BIT._EADR
#define VPECCCTL_SG2 VPECCCTL_SG2_BASE.UINT32
#define VPECCCTL_SG2_ECCDIS VPECCCTL_SG2_BASE.BIT._ECCDIS
#define VPECCCTL_SG2_SECDIS VPECCCTL_SG2_BASE.BIT._SECDIS
#define VPECCCTL_SG2_PROT0 VPECCCTL_SG2_BASE.BIT._PROT0
#define VPECCCTL_SG2_PROT1 VPECCCTL_SG2_BASE.BIT._PROT1
#define VPERRINT_SG2 VPERRINT_SG2_BASE.UINT32
#define VPERRINT_SG2_SEDIE VPERRINT_SG2_BASE.BIT._SEDIE
#define VPERRINT_SG2_DEDIE VPERRINT_SG2_BASE.BIT._DEDIE
#define VPERSTCLR_SG2 VPERSTCLR_SG2_BASE.UINT32
#define VPERSTCLR_SG2_SSTLCR VPERSTCLR_SG2_BASE.BIT._SSTLCR
#define VPOVFSTR_SG2 VPOVFSTR_SG2_BASE.UINT32
#define VPOVFSTR_SG2_ERROVF VPOVFSTR_SG2_BASE.BIT._ERROVF
#define VPERSTR_SG2 VPERSTR_SG2_BASE.UINT32
#define VPERSTR_SG2_SEDF VPERSTR_SG2_BASE.BIT._SEDF
#define VPERSTR_SG2_DEDF VPERSTR_SG2_BASE.BIT._DEDF
#define VPEADR_SG2 VPEADR_SG2_BASE.UINT32
#define VPEADR_SG2_EADR VPEADR_SG2_BASE.BIT._EADR
#define VPECCCTL_SG3 VPECCCTL_SG3_BASE.UINT32
#define VPECCCTL_SG3_ECCDIS VPECCCTL_SG3_BASE.BIT._ECCDIS
#define VPECCCTL_SG3_SECDIS VPECCCTL_SG3_BASE.BIT._SECDIS
#define VPECCCTL_SG3_PROT0 VPECCCTL_SG3_BASE.BIT._PROT0
#define VPECCCTL_SG3_PROT1 VPECCCTL_SG3_BASE.BIT._PROT1
#define VPERRINT_SG3 VPERRINT_SG3_BASE.UINT32
#define VPERRINT_SG3_SEDIE VPERRINT_SG3_BASE.BIT._SEDIE
#define VPERRINT_SG3_DEDIE VPERRINT_SG3_BASE.BIT._DEDIE
#define VPERSTCLR_SG3 VPERSTCLR_SG3_BASE.UINT32
#define VPERSTCLR_SG3_SSTLCR VPERSTCLR_SG3_BASE.BIT._SSTLCR
#define VPOVFSTR_SG3 VPOVFSTR_SG3_BASE.UINT32
#define VPOVFSTR_SG3_ERROVF VPOVFSTR_SG3_BASE.BIT._ERROVF
#define VPERSTR_SG3 VPERSTR_SG3_BASE.UINT32
#define VPERSTR_SG3_SEDF VPERSTR_SG3_BASE.BIT._SEDF
#define VPERSTR_SG3_DEDF VPERSTR_SG3_BASE.BIT._DEDF
#define VPEADR_SG3 VPEADR_SG3_BASE.UINT32
#define VPEADR_SG3_EADR VPEADR_SG3_BASE.BIT._EADR
#define VPECCCTL_SG5 VPECCCTL_SG5_BASE.UINT32
#define VPECCCTL_SG5_ECCDIS VPECCCTL_SG5_BASE.BIT._ECCDIS
#define VPECCCTL_SG5_SECDIS VPECCCTL_SG5_BASE.BIT._SECDIS
#define VPECCCTL_SG5_PROT0 VPECCCTL_SG5_BASE.BIT._PROT0
#define VPECCCTL_SG5_PROT1 VPECCCTL_SG5_BASE.BIT._PROT1
#define VPERRINT_SG5 VPERRINT_SG5_BASE.UINT32
#define VPERRINT_SG5_SEDIE VPERRINT_SG5_BASE.BIT._SEDIE
#define VPERRINT_SG5_DEDIE VPERRINT_SG5_BASE.BIT._DEDIE
#define VPERSTCLR_SG5 VPERSTCLR_SG5_BASE.UINT32
#define VPERSTCLR_SG5_SSTLCR VPERSTCLR_SG5_BASE.BIT._SSTLCR
#define VPOVFSTR_SG5 VPOVFSTR_SG5_BASE.UINT32
#define VPOVFSTR_SG5_ERROVF VPOVFSTR_SG5_BASE.BIT._ERROVF
#define VPERSTR_SG5 VPERSTR_SG5_BASE.UINT32
#define VPERSTR_SG5_SEDF VPERSTR_SG5_BASE.BIT._SEDF
#define VPERSTR_SG5_DEDF VPERSTR_SG5_BASE.BIT._DEDF
#define VPEADR_SG5 VPEADR_SG5_BASE.UINT32
#define VPEADR_SG5_EADR VPEADR_SG5_BASE.BIT._EADR
#define VPECCCTL_TERM_SG7 VPECCCTL_TERM_SG7_BASE.UINT32
#define VPECCCTL_TERM_SG7_ECCDIS VPECCCTL_TERM_SG7_BASE.BIT._ECCDIS
#define VPECCCTL_TERM_SG7_SECDIS VPECCCTL_TERM_SG7_BASE.BIT._SECDIS
#define VPECCCTL_TERM_SG7_AECCDIS VPECCCTL_TERM_SG7_BASE.BIT._AECCDIS
#define VPECCCTL_TERM_SG7_ASECDIS VPECCCTL_TERM_SG7_BASE.BIT._ASECDIS
#define VPECCCTL_TERM_SG7_PROT0 VPECCCTL_TERM_SG7_BASE.BIT._PROT0
#define VPECCCTL_TERM_SG7_PROT1 VPECCCTL_TERM_SG7_BASE.BIT._PROT1
#define VPERRINT_TERM_SG7 VPERRINT_TERM_SG7_BASE.UINT32
#define VPERRINT_TERM_SG7_SEDIE VPERRINT_TERM_SG7_BASE.BIT._SEDIE
#define VPERRINT_TERM_SG7_DEDIE VPERRINT_TERM_SG7_BASE.BIT._DEDIE
#define VPERRINT_TERM_SG7_ASEDIE VPERRINT_TERM_SG7_BASE.BIT._ASEDIE
#define VPERRINT_TERM_SG7_ADEDIE VPERRINT_TERM_SG7_BASE.BIT._ADEDIE
#define VPERSTCLR_TERM_SG7 VPERSTCLR_TERM_SG7_BASE.UINT32
#define VPERSTCLR_TERM_SG7_SSTLCR VPERSTCLR_TERM_SG7_BASE.BIT._SSTLCR
#define VPOVFSTR_TERM_SG7 VPOVFSTR_TERM_SG7_BASE.UINT32
#define VPOVFSTR_TERM_SG7_ERROVF VPOVFSTR_TERM_SG7_BASE.BIT._ERROVF
#define VPERSTR_TERM_SG7 VPERSTR_TERM_SG7_BASE.UINT32
#define VPERSTR_TERM_SG7_SEDF VPERSTR_TERM_SG7_BASE.BIT._SEDF
#define VPERSTR_TERM_SG7_DEDF VPERSTR_TERM_SG7_BASE.BIT._DEDF
#define VPERSTR_TERM_SG7_ASEDF VPERSTR_TERM_SG7_BASE.BIT._ASEDF
#define VPERSTR_TERM_SG7_ADEDF VPERSTR_TERM_SG7_BASE.BIT._ADEDF
#define VPEADR_TERM_SG7 VPEADR_TERM_SG7_BASE.UINT32
#define VPEADR_TERM_SG7_EADR VPEADR_TERM_SG7_BASE.BIT._EADR
#define VPECCCTL_VCI2VPI VPECCCTL_VCI2VPI_BASE.UINT32
#define VPECCCTL_VCI2VPI_AECCDIS VPECCCTL_VCI2VPI_BASE.BIT._AECCDIS
#define VPECCCTL_VCI2VPI_ASECDIS VPECCCTL_VCI2VPI_BASE.BIT._ASECDIS
#define VPECCCTL_VCI2VPI_PROT0 VPECCCTL_VCI2VPI_BASE.BIT._PROT0
#define VPECCCTL_VCI2VPI_PROT1 VPECCCTL_VCI2VPI_BASE.BIT._PROT1
#define VPERRINT_VCI2VPI VPERRINT_VCI2VPI_BASE.UINT32
#define VPERRINT_VCI2VPI_ASEDIE VPERRINT_VCI2VPI_BASE.BIT._ASEDIE
#define VPERRINT_VCI2VPI_ADEDIE VPERRINT_VCI2VPI_BASE.BIT._ADEDIE
#define VPERSTCLR_VCI2VPI VPERSTCLR_VCI2VPI_BASE.UINT32
#define VPERSTCLR_VCI2VPI_SSTLCR VPERSTCLR_VCI2VPI_BASE.BIT._SSTLCR
#define VPOVFSTR_VCI2VPI VPOVFSTR_VCI2VPI_BASE.UINT32
#define VPOVFSTR_VCI2VPI_ERROVF VPOVFSTR_VCI2VPI_BASE.BIT._ERROVF
#define VPERSTR_VCI2VPI VPERSTR_VCI2VPI_BASE.UINT32
#define VPERSTR_VCI2VPI_ASEDF VPERSTR_VCI2VPI_BASE.BIT._ASEDF
#define VPERSTR_VCI2VPI_ADEDF VPERSTR_VCI2VPI_BASE.BIT._ADEDF
#define VPERADR0_VCI2VPI VPERADR0_VCI2VPI_BASE.UINT32
#define VPERADR0_VCI2VPI_EADR VPERADR0_VCI2VPI_BASE.BIT._EADR
#define VCECCCTL_PDMA VCECCCTL_PDMA_BASE.UINT32
#define VCECCCTL_PDMA_ECCDIS VCECCCTL_PDMA_BASE.BIT._ECCDIS
#define VCECCCTL_PDMA_SECDIS VCECCCTL_PDMA_BASE.BIT._SECDIS
#define VCECCCTL_PDMA_PROT0 VCECCCTL_PDMA_BASE.BIT._PROT0
#define VCECCCTL_PDMA_PROT1 VCECCCTL_PDMA_BASE.BIT._PROT1
#define VCERRINT_PDMA VCERRINT_PDMA_BASE.UINT32
#define VCERRINT_PDMA_SEDIE VCERRINT_PDMA_BASE.BIT._SEDIE
#define VCERRINT_PDMA_DEDIE VCERRINT_PDMA_BASE.BIT._DEDIE
#define VCERSTCLR_PDMA VCERSTCLR_PDMA_BASE.UINT32
#define VCERSTCLR_PDMA_SSTLCR VCERSTCLR_PDMA_BASE.BIT._SSTLCR
#define VCOVFSTR_PDMA VCOVFSTR_PDMA_BASE.UINT32
#define VCOVFSTR_PDMA_ERROVF VCOVFSTR_PDMA_BASE.BIT._ERROVF
#define VCERSTR_PDMA VCERSTR_PDMA_BASE.UINT32
#define VCERSTR_PDMA_SEDF VCERSTR_PDMA_BASE.BIT._SEDF
#define VCERSTR_PDMA_DEDF VCERSTR_PDMA_BASE.BIT._DEDF
#define VCEADR_PDMA VCEADR_PDMA_BASE.UINT32
#define VCEADR_PDMA_EADR VCEADR_PDMA_BASE.BIT._EADR

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif