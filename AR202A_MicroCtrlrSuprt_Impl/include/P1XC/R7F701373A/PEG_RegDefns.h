#ifndef __DR7F701373_PEG_HEADER__
#define __DR7F701373_PEG_HEADER__



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
    uint32 _CLRE : 1;
    uint32 _CLRO : 1;
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
} PGERRSTATCTL_PE1Bits_t;

typedef struct
{
    const uint32 _ERR : 1;
    const uint32 _OVF : 1;
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
} PGERRSTAT_PE1Bits_t;

typedef struct
{
    const uint32 _SPID : 5;
    const uint32 _PEID : 3;
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
} PGERRINFO_PE1Bits_t;

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
    uint32 _G0MASK : 20;
} PEGG0MKBits_t;

typedef struct
{
    uint32 _G0EN : 1;
    uint32 _G0RD : 1;
    uint32 _G0WR : 1;
    uint32 padding3 : 1;
    uint32 _G0LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G0BASE : 20;
} PEGG0BABits_t;

typedef struct
{
    uint32 _G0SP0 : 1;
    uint32 _G0SP1 : 1;
    uint32 _G0SP2 : 1;
    uint32 _G0SP3 : 1;
    uint32 _G0SP4 : 1;
    uint32 _G0SP5 : 1;
    uint32 _G0SP6 : 1;
    uint32 _G0SP7 : 1;
    uint32 _G0SP8 : 1;
    uint32 _G0SP9 : 1;
    uint32 _G0SP10 : 1;
    uint32 _G0SP11 : 1;
    uint32 _G0SP12 : 1;
    uint32 _G0SP13 : 1;
    uint32 _G0SP14 : 1;
    uint32 _G0SP15 : 1;
    uint32 _G0SP16 : 1;
    uint32 _G0SP17 : 1;
    uint32 _G0SP18 : 1;
    uint32 _G0SP19 : 1;
    uint32 _G0SP20 : 1;
    uint32 _G0SP21 : 1;
    uint32 _G0SP22 : 1;
    uint32 _G0SP23 : 1;
    uint32 _G0SP24 : 1;
    uint32 _G0SP25 : 1;
    uint32 _G0SP26 : 1;
    uint32 _G0SP27 : 1;
    uint32 _G0SP28 : 1;
    uint32 _G0SP29 : 1;
    uint32 _G0SP30 : 1;
    uint32 _G0SP31 : 1;
} PEGG0SPBits_t;

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
    uint32 _G1MASK : 20;
} PEGG1MKBits_t;

typedef struct
{
    uint32 _G1EN : 1;
    uint32 _G1RD : 1;
    uint32 _G1WR : 1;
    uint32 padding3 : 1;
    uint32 _G1LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G1BASE : 20;
} PEGG1BABits_t;

typedef struct
{
    uint32 _G1SP0 : 1;
    uint32 _G1SP1 : 1;
    uint32 _G1SP2 : 1;
    uint32 _G1SP3 : 1;
    uint32 _G1SP4 : 1;
    uint32 _G1SP5 : 1;
    uint32 _G1SP6 : 1;
    uint32 _G1SP7 : 1;
    uint32 _G1SP8 : 1;
    uint32 _G1SP9 : 1;
    uint32 _G1SP10 : 1;
    uint32 _G1SP11 : 1;
    uint32 _G1SP12 : 1;
    uint32 _G1SP13 : 1;
    uint32 _G1SP14 : 1;
    uint32 _G1SP15 : 1;
    uint32 _G1SP16 : 1;
    uint32 _G1SP17 : 1;
    uint32 _G1SP18 : 1;
    uint32 _G1SP19 : 1;
    uint32 _G1SP20 : 1;
    uint32 _G1SP21 : 1;
    uint32 _G1SP22 : 1;
    uint32 _G1SP23 : 1;
    uint32 _G1SP24 : 1;
    uint32 _G1SP25 : 1;
    uint32 _G1SP26 : 1;
    uint32 _G1SP27 : 1;
    uint32 _G1SP28 : 1;
    uint32 _G1SP29 : 1;
    uint32 _G1SP30 : 1;
    uint32 _G1SP31 : 1;
} PEGG1SPBits_t;

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
    uint32 _G2MASK : 20;
} PEGG2MKBits_t;

typedef struct
{
    uint32 _G2EN : 1;
    uint32 _G2RD : 1;
    uint32 _G2WR : 1;
    uint32 padding3 : 1;
    uint32 _G2LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G2BASE : 20;
} PEGG2BABits_t;

typedef struct
{
    uint32 _G2SP0 : 1;
    uint32 _G2SP1 : 1;
    uint32 _G2SP2 : 1;
    uint32 _G2SP3 : 1;
    uint32 _G2SP4 : 1;
    uint32 _G2SP5 : 1;
    uint32 _G2SP6 : 1;
    uint32 _G2SP7 : 1;
    uint32 _G2SP8 : 1;
    uint32 _G2SP9 : 1;
    uint32 _G2SP10 : 1;
    uint32 _G2SP11 : 1;
    uint32 _G2SP12 : 1;
    uint32 _G2SP13 : 1;
    uint32 _G2SP14 : 1;
    uint32 _G2SP15 : 1;
    uint32 _G2SP16 : 1;
    uint32 _G2SP17 : 1;
    uint32 _G2SP18 : 1;
    uint32 _G2SP19 : 1;
    uint32 _G2SP20 : 1;
    uint32 _G2SP21 : 1;
    uint32 _G2SP22 : 1;
    uint32 _G2SP23 : 1;
    uint32 _G2SP24 : 1;
    uint32 _G2SP25 : 1;
    uint32 _G2SP26 : 1;
    uint32 _G2SP27 : 1;
    uint32 _G2SP28 : 1;
    uint32 _G2SP29 : 1;
    uint32 _G2SP30 : 1;
    uint32 _G2SP31 : 1;
} PEGG2SPBits_t;

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
    uint32 _G3MASK : 20;
} PEGG3MKBits_t;

typedef struct
{
    uint32 _G3EN : 1;
    uint32 _G3RD : 1;
    uint32 _G3WR : 1;
    uint32 padding3 : 1;
    uint32 _G3LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G3BASE : 20;
} PEGG3BABits_t;

typedef struct
{
    uint32 _G3SP0 : 1;
    uint32 _G3SP1 : 1;
    uint32 _G3SP2 : 1;
    uint32 _G3SP3 : 1;
    uint32 _G3SP4 : 1;
    uint32 _G3SP5 : 1;
    uint32 _G3SP6 : 1;
    uint32 _G3SP7 : 1;
    uint32 _G3SP8 : 1;
    uint32 _G3SP9 : 1;
    uint32 _G3SP10 : 1;
    uint32 _G3SP11 : 1;
    uint32 _G3SP12 : 1;
    uint32 _G3SP13 : 1;
    uint32 _G3SP14 : 1;
    uint32 _G3SP15 : 1;
    uint32 _G3SP16 : 1;
    uint32 _G3SP17 : 1;
    uint32 _G3SP18 : 1;
    uint32 _G3SP19 : 1;
    uint32 _G3SP20 : 1;
    uint32 _G3SP21 : 1;
    uint32 _G3SP22 : 1;
    uint32 _G3SP23 : 1;
    uint32 _G3SP24 : 1;
    uint32 _G3SP25 : 1;
    uint32 _G3SP26 : 1;
    uint32 _G3SP27 : 1;
    uint32 _G3SP28 : 1;
    uint32 _G3SP29 : 1;
    uint32 _G3SP30 : 1;
    uint32 _G3SP31 : 1;
} PEGG3SPBits_t;

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
    uint32 _G4MASK : 20;
} PEGG4MKBits_t;

typedef struct
{
    uint32 _G4EN : 1;
    uint32 _G4RD : 1;
    uint32 _G4WR : 1;
    uint32 padding3 : 1;
    uint32 _G4LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G4BASE : 20;
} PEGG4BABits_t;

typedef struct
{
    uint32 _G4SP0 : 1;
    uint32 _G4SP1 : 1;
    uint32 _G4SP2 : 1;
    uint32 _G4SP3 : 1;
    uint32 _G4SP4 : 1;
    uint32 _G4SP5 : 1;
    uint32 _G4SP6 : 1;
    uint32 _G4SP7 : 1;
    uint32 _G4SP8 : 1;
    uint32 _G4SP9 : 1;
    uint32 _G4SP10 : 1;
    uint32 _G4SP11 : 1;
    uint32 _G4SP12 : 1;
    uint32 _G4SP13 : 1;
    uint32 _G4SP14 : 1;
    uint32 _G4SP15 : 1;
    uint32 _G4SP16 : 1;
    uint32 _G4SP17 : 1;
    uint32 _G4SP18 : 1;
    uint32 _G4SP19 : 1;
    uint32 _G4SP20 : 1;
    uint32 _G4SP21 : 1;
    uint32 _G4SP22 : 1;
    uint32 _G4SP23 : 1;
    uint32 _G4SP24 : 1;
    uint32 _G4SP25 : 1;
    uint32 _G4SP26 : 1;
    uint32 _G4SP27 : 1;
    uint32 _G4SP28 : 1;
    uint32 _G4SP29 : 1;
    uint32 _G4SP30 : 1;
    uint32 _G4SP31 : 1;
} PEGG4SPBits_t;

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
    uint32 _G5MASK : 20;
} PEGG5MKBits_t;

typedef struct
{
    uint32 _G5EN : 1;
    uint32 _G5RD : 1;
    uint32 _G5WR : 1;
    uint32 padding3 : 1;
    uint32 _G5LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G5BASE : 20;
} PEGG5BABits_t;

typedef struct
{
    uint32 _G5SP0 : 1;
    uint32 _G5SP1 : 1;
    uint32 _G5SP2 : 1;
    uint32 _G5SP3 : 1;
    uint32 _G5SP4 : 1;
    uint32 _G5SP5 : 1;
    uint32 _G5SP6 : 1;
    uint32 _G5SP7 : 1;
    uint32 _G5SP8 : 1;
    uint32 _G5SP9 : 1;
    uint32 _G5SP10 : 1;
    uint32 _G5SP11 : 1;
    uint32 _G5SP12 : 1;
    uint32 _G5SP13 : 1;
    uint32 _G5SP14 : 1;
    uint32 _G5SP15 : 1;
    uint32 _G5SP16 : 1;
    uint32 _G5SP17 : 1;
    uint32 _G5SP18 : 1;
    uint32 _G5SP19 : 1;
    uint32 _G5SP20 : 1;
    uint32 _G5SP21 : 1;
    uint32 _G5SP22 : 1;
    uint32 _G5SP23 : 1;
    uint32 _G5SP24 : 1;
    uint32 _G5SP25 : 1;
    uint32 _G5SP26 : 1;
    uint32 _G5SP27 : 1;
    uint32 _G5SP28 : 1;
    uint32 _G5SP29 : 1;
    uint32 _G5SP30 : 1;
    uint32 _G5SP31 : 1;
} PEGG5SPBits_t;

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
    uint32 _G6MASK : 20;
} PEGG6MKBits_t;

typedef struct
{
    uint32 _G6EN : 1;
    uint32 _G6RD : 1;
    uint32 _G6WR : 1;
    uint32 padding3 : 1;
    uint32 _G6LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G6BASE : 20;
} PEGG6BABits_t;

typedef struct
{
    uint32 _G6SP0 : 1;
    uint32 _G6SP1 : 1;
    uint32 _G6SP2 : 1;
    uint32 _G6SP3 : 1;
    uint32 _G6SP4 : 1;
    uint32 _G6SP5 : 1;
    uint32 _G6SP6 : 1;
    uint32 _G6SP7 : 1;
    uint32 _G6SP8 : 1;
    uint32 _G6SP9 : 1;
    uint32 _G6SP10 : 1;
    uint32 _G6SP11 : 1;
    uint32 _G6SP12 : 1;
    uint32 _G6SP13 : 1;
    uint32 _G6SP14 : 1;
    uint32 _G6SP15 : 1;
    uint32 _G6SP16 : 1;
    uint32 _G6SP17 : 1;
    uint32 _G6SP18 : 1;
    uint32 _G6SP19 : 1;
    uint32 _G6SP20 : 1;
    uint32 _G6SP21 : 1;
    uint32 _G6SP22 : 1;
    uint32 _G6SP23 : 1;
    uint32 _G6SP24 : 1;
    uint32 _G6SP25 : 1;
    uint32 _G6SP26 : 1;
    uint32 _G6SP27 : 1;
    uint32 _G6SP28 : 1;
    uint32 _G6SP29 : 1;
    uint32 _G6SP30 : 1;
    uint32 _G6SP31 : 1;
} PEGG6SPBits_t;

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
    uint32 _G7MASK : 20;
} PEGG7MKBits_t;

typedef struct
{
    uint32 _G7EN : 1;
    uint32 _G7RD : 1;
    uint32 _G7WR : 1;
    uint32 padding3 : 1;
    uint32 _G7LOCK : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _G7BASE : 20;
} PEGG7BABits_t;

typedef struct
{
    uint32 _G7SP0 : 1;
    uint32 _G7SP1 : 1;
    uint32 _G7SP2 : 1;
    uint32 _G7SP3 : 1;
    uint32 _G7SP4 : 1;
    uint32 _G7SP5 : 1;
    uint32 _G7SP6 : 1;
    uint32 _G7SP7 : 1;
    uint32 _G7SP8 : 1;
    uint32 _G7SP9 : 1;
    uint32 _G7SP10 : 1;
    uint32 _G7SP11 : 1;
    uint32 _G7SP12 : 1;
    uint32 _G7SP13 : 1;
    uint32 _G7SP14 : 1;
    uint32 _G7SP15 : 1;
    uint32 _G7SP16 : 1;
    uint32 _G7SP17 : 1;
    uint32 _G7SP18 : 1;
    uint32 _G7SP19 : 1;
    uint32 _G7SP20 : 1;
    uint32 _G7SP21 : 1;
    uint32 _G7SP22 : 1;
    uint32 _G7SP23 : 1;
    uint32 _G7SP24 : 1;
    uint32 _G7SP25 : 1;
    uint32 _G7SP26 : 1;
    uint32 _G7SP27 : 1;
    uint32 _G7SP28 : 1;
    uint32 _G7SP29 : 1;
    uint32 _G7SP30 : 1;
    uint32 _G7SP31 : 1;
} PEGG7SPBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PGERRSTATCTL_PE1Bits_t BIT;
} PGERRSTATCTL_PE1_t;

typedef union
{
    uint32 UINT32;
    const PGERRSTAT_PE1Bits_t BIT;
} PGERRSTAT_PE1_t;

typedef union
{
    uint32 UINT32;
    const PGERRINFO_PE1Bits_t BIT;
} PGERRINFO_PE1_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG0MKBits_t BIT;
} PEGG0MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG0BABits_t BIT;
} PEGG0BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG0SPBits_t BIT;
} PEGG0SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG1MKBits_t BIT;
} PEGG1MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG1BABits_t BIT;
} PEGG1BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG1SPBits_t BIT;
} PEGG1SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG2MKBits_t BIT;
} PEGG2MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG2BABits_t BIT;
} PEGG2BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG2SPBits_t BIT;
} PEGG2SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG3MKBits_t BIT;
} PEGG3MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG3BABits_t BIT;
} PEGG3BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG3SPBits_t BIT;
} PEGG3SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG4MKBits_t BIT;
} PEGG4MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG4BABits_t BIT;
} PEGG4BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG4SPBits_t BIT;
} PEGG4SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG5MKBits_t BIT;
} PEGG5MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG5BABits_t BIT;
} PEGG5BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG5SPBits_t BIT;
} PEGG5SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG6MKBits_t BIT;
} PEGG6MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG6BABits_t BIT;
} PEGG6BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG6SPBits_t BIT;
} PEGG6SP_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG7MKBits_t BIT;
} PEGG7MK_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG7BABits_t BIT;
} PEGG7BA_t;

typedef union
{
    uint32 UINT32;
    uint16 UINT16[2];
    uint8 UINT8[4];
    PEGG7SPBits_t BIT;
} PEGG7SP_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PGERRSTATCTL_PE1_BASE, 0xFFC4A200, __READ_WRITE, PGERRSTATCTL_PE1_t);
__IOREG(PGERRSTAT_PE1_BASE, 0xFFC4A204, __READ, PGERRSTAT_PE1_t);
__IOREG(PGERRINFO_PE1_BASE, 0xFFC4A208, __READ, PGERRINFO_PE1_t);
__IOREG(PEGG0MK_BASE, 0xFFFEE680, __READ_WRITE, PEGG0MK_t);
__IOREG(PEGG0BA_BASE, 0xFFFEE684, __READ_WRITE, PEGG0BA_t);
__IOREG(PEGG0SP_BASE, 0xFFFEE688, __READ_WRITE, PEGG0SP_t);
__IOREG(PEGG1MK_BASE, 0xFFFEE690, __READ_WRITE, PEGG1MK_t);
__IOREG(PEGG1BA_BASE, 0xFFFEE694, __READ_WRITE, PEGG1BA_t);
__IOREG(PEGG1SP_BASE, 0xFFFEE698, __READ_WRITE, PEGG1SP_t);
__IOREG(PEGG2MK_BASE, 0xFFFEE6A0, __READ_WRITE, PEGG2MK_t);
__IOREG(PEGG2BA_BASE, 0xFFFEE6A4, __READ_WRITE, PEGG2BA_t);
__IOREG(PEGG2SP_BASE, 0xFFFEE6A8, __READ_WRITE, PEGG2SP_t);
__IOREG(PEGG3MK_BASE, 0xFFFEE6B0, __READ_WRITE, PEGG3MK_t);
__IOREG(PEGG3BA_BASE, 0xFFFEE6B4, __READ_WRITE, PEGG3BA_t);
__IOREG(PEGG3SP_BASE, 0xFFFEE6B8, __READ_WRITE, PEGG3SP_t);
__IOREG(PEGG4MK_BASE, 0xFFFEE6C0, __READ_WRITE, PEGG4MK_t);
__IOREG(PEGG4BA_BASE, 0xFFFEE6C4, __READ_WRITE, PEGG4BA_t);
__IOREG(PEGG4SP_BASE, 0xFFFEE6C8, __READ_WRITE, PEGG4SP_t);
__IOREG(PEGG5MK_BASE, 0xFFFEE6D0, __READ_WRITE, PEGG5MK_t);
__IOREG(PEGG5BA_BASE, 0xFFFEE6D4, __READ_WRITE, PEGG5BA_t);
__IOREG(PEGG5SP_BASE, 0xFFFEE6D8, __READ_WRITE, PEGG5SP_t);
__IOREG(PEGG6MK_BASE, 0xFFFEE6E0, __READ_WRITE, PEGG6MK_t);
__IOREG(PEGG6BA_BASE, 0xFFFEE6E4, __READ_WRITE, PEGG6BA_t);
__IOREG(PEGG6SP_BASE, 0xFFFEE6E8, __READ_WRITE, PEGG6SP_t);
__IOREG(PEGG7MK_BASE, 0xFFFEE6F0, __READ_WRITE, PEGG7MK_t);
__IOREG(PEGG7BA_BASE, 0xFFFEE6F4, __READ_WRITE, PEGG7BA_t);
__IOREG(PEGG7SP_BASE, 0xFFFEE6F8, __READ_WRITE, PEGG7SP_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PGERRSTATCTL_PE1 PGERRSTATCTL_PE1_BASE.UINT32
#define PGERRSTATCTL_PE1_CLRE PGERRSTATCTL_PE1_BASE.BIT._CLRE
#define PGERRSTATCTL_PE1_CLRO PGERRSTATCTL_PE1_BASE.BIT._CLRO
#define PGERRSTAT_PE1 PGERRSTAT_PE1_BASE.UINT32
#define PGERRSTAT_PE1_ERR PGERRSTAT_PE1_BASE.BIT._ERR
#define PGERRSTAT_PE1_OVF PGERRSTAT_PE1_BASE.BIT._OVF
#define PGERRINFO_PE1 PGERRINFO_PE1_BASE.UINT32
#define PGERRINFO_PE1_SPID PGERRINFO_PE1_BASE.BIT._SPID
#define PGERRINFO_PE1_PEID PGERRINFO_PE1_BASE.BIT._PEID
#define PEGG0MK PEGG0MK_BASE.UINT32
#define PEGG0MKL PEGG0MK_BASE.UINT16[L]
#define PEGG0MKH PEGG0MK_BASE.UINT16[H]
#define PEGG0MKLL PEGG0MK_BASE.UINT8[LL]
#define PEGG0MKLH PEGG0MK_BASE.UINT8[LH]
#define PEGG0MKHL PEGG0MK_BASE.UINT8[HL]
#define PEGG0MKHH PEGG0MK_BASE.UINT8[HH]
#define PEGG0MK_G0MASK PEGG0MK_BASE.BIT._G0MASK
#define PEGG0BA PEGG0BA_BASE.UINT32
#define PEGG0BAL PEGG0BA_BASE.UINT16[L]
#define PEGG0BAH PEGG0BA_BASE.UINT16[H]
#define PEGG0BALL PEGG0BA_BASE.UINT8[LL]
#define PEGG0BALH PEGG0BA_BASE.UINT8[LH]
#define PEGG0BAHL PEGG0BA_BASE.UINT8[HL]
#define PEGG0BAHH PEGG0BA_BASE.UINT8[HH]
#define PEGG0BA_G0EN PEGG0BA_BASE.BIT._G0EN
#define PEGG0BA_G0RD PEGG0BA_BASE.BIT._G0RD
#define PEGG0BA_G0WR PEGG0BA_BASE.BIT._G0WR
#define PEGG0BA_G0LOCK PEGG0BA_BASE.BIT._G0LOCK
#define PEGG0BA_G0BASE PEGG0BA_BASE.BIT._G0BASE
#define PEGG0SP PEGG0SP_BASE.UINT32
#define PEGG0SPL PEGG0SP_BASE.UINT16[L]
#define PEGG0SPH PEGG0SP_BASE.UINT16[H]
#define PEGG0SPLL PEGG0SP_BASE.UINT8[LL]
#define PEGG0SPLH PEGG0SP_BASE.UINT8[LH]
#define PEGG0SPHL PEGG0SP_BASE.UINT8[HL]
#define PEGG0SPHH PEGG0SP_BASE.UINT8[HH]
#define PEGG0SP_G0SP0 PEGG0SP_BASE.BIT._G0SP0
#define PEGG0SP_G0SP1 PEGG0SP_BASE.BIT._G0SP1
#define PEGG0SP_G0SP2 PEGG0SP_BASE.BIT._G0SP2
#define PEGG0SP_G0SP3 PEGG0SP_BASE.BIT._G0SP3
#define PEGG0SP_G0SP4 PEGG0SP_BASE.BIT._G0SP4
#define PEGG0SP_G0SP5 PEGG0SP_BASE.BIT._G0SP5
#define PEGG0SP_G0SP6 PEGG0SP_BASE.BIT._G0SP6
#define PEGG0SP_G0SP7 PEGG0SP_BASE.BIT._G0SP7
#define PEGG0SP_G0SP8 PEGG0SP_BASE.BIT._G0SP8
#define PEGG0SP_G0SP9 PEGG0SP_BASE.BIT._G0SP9
#define PEGG0SP_G0SP10 PEGG0SP_BASE.BIT._G0SP10
#define PEGG0SP_G0SP11 PEGG0SP_BASE.BIT._G0SP11
#define PEGG0SP_G0SP12 PEGG0SP_BASE.BIT._G0SP12
#define PEGG0SP_G0SP13 PEGG0SP_BASE.BIT._G0SP13
#define PEGG0SP_G0SP14 PEGG0SP_BASE.BIT._G0SP14
#define PEGG0SP_G0SP15 PEGG0SP_BASE.BIT._G0SP15
#define PEGG0SP_G0SP16 PEGG0SP_BASE.BIT._G0SP16
#define PEGG0SP_G0SP17 PEGG0SP_BASE.BIT._G0SP17
#define PEGG0SP_G0SP18 PEGG0SP_BASE.BIT._G0SP18
#define PEGG0SP_G0SP19 PEGG0SP_BASE.BIT._G0SP19
#define PEGG0SP_G0SP20 PEGG0SP_BASE.BIT._G0SP20
#define PEGG0SP_G0SP21 PEGG0SP_BASE.BIT._G0SP21
#define PEGG0SP_G0SP22 PEGG0SP_BASE.BIT._G0SP22
#define PEGG0SP_G0SP23 PEGG0SP_BASE.BIT._G0SP23
#define PEGG0SP_G0SP24 PEGG0SP_BASE.BIT._G0SP24
#define PEGG0SP_G0SP25 PEGG0SP_BASE.BIT._G0SP25
#define PEGG0SP_G0SP26 PEGG0SP_BASE.BIT._G0SP26
#define PEGG0SP_G0SP27 PEGG0SP_BASE.BIT._G0SP27
#define PEGG0SP_G0SP28 PEGG0SP_BASE.BIT._G0SP28
#define PEGG0SP_G0SP29 PEGG0SP_BASE.BIT._G0SP29
#define PEGG0SP_G0SP30 PEGG0SP_BASE.BIT._G0SP30
#define PEGG0SP_G0SP31 PEGG0SP_BASE.BIT._G0SP31
#define PEGG1MK PEGG1MK_BASE.UINT32
#define PEGG1MKL PEGG1MK_BASE.UINT16[L]
#define PEGG1MKH PEGG1MK_BASE.UINT16[H]
#define PEGG1MKLL PEGG1MK_BASE.UINT8[LL]
#define PEGG1MKLH PEGG1MK_BASE.UINT8[LH]
#define PEGG1MKHL PEGG1MK_BASE.UINT8[HL]
#define PEGG1MKHH PEGG1MK_BASE.UINT8[HH]
#define PEGG1MK_G1MASK PEGG1MK_BASE.BIT._G1MASK
#define PEGG1BA PEGG1BA_BASE.UINT32
#define PEGG1BAL PEGG1BA_BASE.UINT16[L]
#define PEGG1BAH PEGG1BA_BASE.UINT16[H]
#define PEGG1BALL PEGG1BA_BASE.UINT8[LL]
#define PEGG1BALH PEGG1BA_BASE.UINT8[LH]
#define PEGG1BAHL PEGG1BA_BASE.UINT8[HL]
#define PEGG1BAHH PEGG1BA_BASE.UINT8[HH]
#define PEGG1BA_G1EN PEGG1BA_BASE.BIT._G1EN
#define PEGG1BA_G1RD PEGG1BA_BASE.BIT._G1RD
#define PEGG1BA_G1WR PEGG1BA_BASE.BIT._G1WR
#define PEGG1BA_G1LOCK PEGG1BA_BASE.BIT._G1LOCK
#define PEGG1BA_G1BASE PEGG1BA_BASE.BIT._G1BASE
#define PEGG1SP PEGG1SP_BASE.UINT32
#define PEGG1SPL PEGG1SP_BASE.UINT16[L]
#define PEGG1SPH PEGG1SP_BASE.UINT16[H]
#define PEGG1SPLL PEGG1SP_BASE.UINT8[LL]
#define PEGG1SPLH PEGG1SP_BASE.UINT8[LH]
#define PEGG1SPHL PEGG1SP_BASE.UINT8[HL]
#define PEGG1SPHH PEGG1SP_BASE.UINT8[HH]
#define PEGG1SP_G1SP0 PEGG1SP_BASE.BIT._G1SP0
#define PEGG1SP_G1SP1 PEGG1SP_BASE.BIT._G1SP1
#define PEGG1SP_G1SP2 PEGG1SP_BASE.BIT._G1SP2
#define PEGG1SP_G1SP3 PEGG1SP_BASE.BIT._G1SP3
#define PEGG1SP_G1SP4 PEGG1SP_BASE.BIT._G1SP4
#define PEGG1SP_G1SP5 PEGG1SP_BASE.BIT._G1SP5
#define PEGG1SP_G1SP6 PEGG1SP_BASE.BIT._G1SP6
#define PEGG1SP_G1SP7 PEGG1SP_BASE.BIT._G1SP7
#define PEGG1SP_G1SP8 PEGG1SP_BASE.BIT._G1SP8
#define PEGG1SP_G1SP9 PEGG1SP_BASE.BIT._G1SP9
#define PEGG1SP_G1SP10 PEGG1SP_BASE.BIT._G1SP10
#define PEGG1SP_G1SP11 PEGG1SP_BASE.BIT._G1SP11
#define PEGG1SP_G1SP12 PEGG1SP_BASE.BIT._G1SP12
#define PEGG1SP_G1SP13 PEGG1SP_BASE.BIT._G1SP13
#define PEGG1SP_G1SP14 PEGG1SP_BASE.BIT._G1SP14
#define PEGG1SP_G1SP15 PEGG1SP_BASE.BIT._G1SP15
#define PEGG1SP_G1SP16 PEGG1SP_BASE.BIT._G1SP16
#define PEGG1SP_G1SP17 PEGG1SP_BASE.BIT._G1SP17
#define PEGG1SP_G1SP18 PEGG1SP_BASE.BIT._G1SP18
#define PEGG1SP_G1SP19 PEGG1SP_BASE.BIT._G1SP19
#define PEGG1SP_G1SP20 PEGG1SP_BASE.BIT._G1SP20
#define PEGG1SP_G1SP21 PEGG1SP_BASE.BIT._G1SP21
#define PEGG1SP_G1SP22 PEGG1SP_BASE.BIT._G1SP22
#define PEGG1SP_G1SP23 PEGG1SP_BASE.BIT._G1SP23
#define PEGG1SP_G1SP24 PEGG1SP_BASE.BIT._G1SP24
#define PEGG1SP_G1SP25 PEGG1SP_BASE.BIT._G1SP25
#define PEGG1SP_G1SP26 PEGG1SP_BASE.BIT._G1SP26
#define PEGG1SP_G1SP27 PEGG1SP_BASE.BIT._G1SP27
#define PEGG1SP_G1SP28 PEGG1SP_BASE.BIT._G1SP28
#define PEGG1SP_G1SP29 PEGG1SP_BASE.BIT._G1SP29
#define PEGG1SP_G1SP30 PEGG1SP_BASE.BIT._G1SP30
#define PEGG1SP_G1SP31 PEGG1SP_BASE.BIT._G1SP31
#define PEGG2MK PEGG2MK_BASE.UINT32
#define PEGG2MKL PEGG2MK_BASE.UINT16[L]
#define PEGG2MKH PEGG2MK_BASE.UINT16[H]
#define PEGG2MKLL PEGG2MK_BASE.UINT8[LL]
#define PEGG2MKLH PEGG2MK_BASE.UINT8[LH]
#define PEGG2MKHL PEGG2MK_BASE.UINT8[HL]
#define PEGG2MKHH PEGG2MK_BASE.UINT8[HH]
#define PEGG2MK_G2MASK PEGG2MK_BASE.BIT._G2MASK
#define PEGG2BA PEGG2BA_BASE.UINT32
#define PEGG2BAL PEGG2BA_BASE.UINT16[L]
#define PEGG2BAH PEGG2BA_BASE.UINT16[H]
#define PEGG2BALL PEGG2BA_BASE.UINT8[LL]
#define PEGG2BALH PEGG2BA_BASE.UINT8[LH]
#define PEGG2BAHL PEGG2BA_BASE.UINT8[HL]
#define PEGG2BAHH PEGG2BA_BASE.UINT8[HH]
#define PEGG2BA_G2EN PEGG2BA_BASE.BIT._G2EN
#define PEGG2BA_G2RD PEGG2BA_BASE.BIT._G2RD
#define PEGG2BA_G2WR PEGG2BA_BASE.BIT._G2WR
#define PEGG2BA_G2LOCK PEGG2BA_BASE.BIT._G2LOCK
#define PEGG2BA_G2BASE PEGG2BA_BASE.BIT._G2BASE
#define PEGG2SP PEGG2SP_BASE.UINT32
#define PEGG2SPL PEGG2SP_BASE.UINT16[L]
#define PEGG2SPH PEGG2SP_BASE.UINT16[H]
#define PEGG2SPLL PEGG2SP_BASE.UINT8[LL]
#define PEGG2SPLH PEGG2SP_BASE.UINT8[LH]
#define PEGG2SPHL PEGG2SP_BASE.UINT8[HL]
#define PEGG2SPHH PEGG2SP_BASE.UINT8[HH]
#define PEGG2SP_G2SP0 PEGG2SP_BASE.BIT._G2SP0
#define PEGG2SP_G2SP1 PEGG2SP_BASE.BIT._G2SP1
#define PEGG2SP_G2SP2 PEGG2SP_BASE.BIT._G2SP2
#define PEGG2SP_G2SP3 PEGG2SP_BASE.BIT._G2SP3
#define PEGG2SP_G2SP4 PEGG2SP_BASE.BIT._G2SP4
#define PEGG2SP_G2SP5 PEGG2SP_BASE.BIT._G2SP5
#define PEGG2SP_G2SP6 PEGG2SP_BASE.BIT._G2SP6
#define PEGG2SP_G2SP7 PEGG2SP_BASE.BIT._G2SP7
#define PEGG2SP_G2SP8 PEGG2SP_BASE.BIT._G2SP8
#define PEGG2SP_G2SP9 PEGG2SP_BASE.BIT._G2SP9
#define PEGG2SP_G2SP10 PEGG2SP_BASE.BIT._G2SP10
#define PEGG2SP_G2SP11 PEGG2SP_BASE.BIT._G2SP11
#define PEGG2SP_G2SP12 PEGG2SP_BASE.BIT._G2SP12
#define PEGG2SP_G2SP13 PEGG2SP_BASE.BIT._G2SP13
#define PEGG2SP_G2SP14 PEGG2SP_BASE.BIT._G2SP14
#define PEGG2SP_G2SP15 PEGG2SP_BASE.BIT._G2SP15
#define PEGG2SP_G2SP16 PEGG2SP_BASE.BIT._G2SP16
#define PEGG2SP_G2SP17 PEGG2SP_BASE.BIT._G2SP17
#define PEGG2SP_G2SP18 PEGG2SP_BASE.BIT._G2SP18
#define PEGG2SP_G2SP19 PEGG2SP_BASE.BIT._G2SP19
#define PEGG2SP_G2SP20 PEGG2SP_BASE.BIT._G2SP20
#define PEGG2SP_G2SP21 PEGG2SP_BASE.BIT._G2SP21
#define PEGG2SP_G2SP22 PEGG2SP_BASE.BIT._G2SP22
#define PEGG2SP_G2SP23 PEGG2SP_BASE.BIT._G2SP23
#define PEGG2SP_G2SP24 PEGG2SP_BASE.BIT._G2SP24
#define PEGG2SP_G2SP25 PEGG2SP_BASE.BIT._G2SP25
#define PEGG2SP_G2SP26 PEGG2SP_BASE.BIT._G2SP26
#define PEGG2SP_G2SP27 PEGG2SP_BASE.BIT._G2SP27
#define PEGG2SP_G2SP28 PEGG2SP_BASE.BIT._G2SP28
#define PEGG2SP_G2SP29 PEGG2SP_BASE.BIT._G2SP29
#define PEGG2SP_G2SP30 PEGG2SP_BASE.BIT._G2SP30
#define PEGG2SP_G2SP31 PEGG2SP_BASE.BIT._G2SP31
#define PEGG3MK PEGG3MK_BASE.UINT32
#define PEGG3MKL PEGG3MK_BASE.UINT16[L]
#define PEGG3MKH PEGG3MK_BASE.UINT16[H]
#define PEGG3MKLL PEGG3MK_BASE.UINT8[LL]
#define PEGG3MKLH PEGG3MK_BASE.UINT8[LH]
#define PEGG3MKHL PEGG3MK_BASE.UINT8[HL]
#define PEGG3MKHH PEGG3MK_BASE.UINT8[HH]
#define PEGG3MK_G3MASK PEGG3MK_BASE.BIT._G3MASK
#define PEGG3BA PEGG3BA_BASE.UINT32
#define PEGG3BAL PEGG3BA_BASE.UINT16[L]
#define PEGG3BAH PEGG3BA_BASE.UINT16[H]
#define PEGG3BALL PEGG3BA_BASE.UINT8[LL]
#define PEGG3BALH PEGG3BA_BASE.UINT8[LH]
#define PEGG3BAHL PEGG3BA_BASE.UINT8[HL]
#define PEGG3BAHH PEGG3BA_BASE.UINT8[HH]
#define PEGG3BA_G3EN PEGG3BA_BASE.BIT._G3EN
#define PEGG3BA_G3RD PEGG3BA_BASE.BIT._G3RD
#define PEGG3BA_G3WR PEGG3BA_BASE.BIT._G3WR
#define PEGG3BA_G3LOCK PEGG3BA_BASE.BIT._G3LOCK
#define PEGG3BA_G3BASE PEGG3BA_BASE.BIT._G3BASE
#define PEGG3SP PEGG3SP_BASE.UINT32
#define PEGG3SPL PEGG3SP_BASE.UINT16[L]
#define PEGG3SPH PEGG3SP_BASE.UINT16[H]
#define PEGG3SPLL PEGG3SP_BASE.UINT8[LL]
#define PEGG3SPLH PEGG3SP_BASE.UINT8[LH]
#define PEGG3SPHL PEGG3SP_BASE.UINT8[HL]
#define PEGG3SPHH PEGG3SP_BASE.UINT8[HH]
#define PEGG3SP_G3SP0 PEGG3SP_BASE.BIT._G3SP0
#define PEGG3SP_G3SP1 PEGG3SP_BASE.BIT._G3SP1
#define PEGG3SP_G3SP2 PEGG3SP_BASE.BIT._G3SP2
#define PEGG3SP_G3SP3 PEGG3SP_BASE.BIT._G3SP3
#define PEGG3SP_G3SP4 PEGG3SP_BASE.BIT._G3SP4
#define PEGG3SP_G3SP5 PEGG3SP_BASE.BIT._G3SP5
#define PEGG3SP_G3SP6 PEGG3SP_BASE.BIT._G3SP6
#define PEGG3SP_G3SP7 PEGG3SP_BASE.BIT._G3SP7
#define PEGG3SP_G3SP8 PEGG3SP_BASE.BIT._G3SP8
#define PEGG3SP_G3SP9 PEGG3SP_BASE.BIT._G3SP9
#define PEGG3SP_G3SP10 PEGG3SP_BASE.BIT._G3SP10
#define PEGG3SP_G3SP11 PEGG3SP_BASE.BIT._G3SP11
#define PEGG3SP_G3SP12 PEGG3SP_BASE.BIT._G3SP12
#define PEGG3SP_G3SP13 PEGG3SP_BASE.BIT._G3SP13
#define PEGG3SP_G3SP14 PEGG3SP_BASE.BIT._G3SP14
#define PEGG3SP_G3SP15 PEGG3SP_BASE.BIT._G3SP15
#define PEGG3SP_G3SP16 PEGG3SP_BASE.BIT._G3SP16
#define PEGG3SP_G3SP17 PEGG3SP_BASE.BIT._G3SP17
#define PEGG3SP_G3SP18 PEGG3SP_BASE.BIT._G3SP18
#define PEGG3SP_G3SP19 PEGG3SP_BASE.BIT._G3SP19
#define PEGG3SP_G3SP20 PEGG3SP_BASE.BIT._G3SP20
#define PEGG3SP_G3SP21 PEGG3SP_BASE.BIT._G3SP21
#define PEGG3SP_G3SP22 PEGG3SP_BASE.BIT._G3SP22
#define PEGG3SP_G3SP23 PEGG3SP_BASE.BIT._G3SP23
#define PEGG3SP_G3SP24 PEGG3SP_BASE.BIT._G3SP24
#define PEGG3SP_G3SP25 PEGG3SP_BASE.BIT._G3SP25
#define PEGG3SP_G3SP26 PEGG3SP_BASE.BIT._G3SP26
#define PEGG3SP_G3SP27 PEGG3SP_BASE.BIT._G3SP27
#define PEGG3SP_G3SP28 PEGG3SP_BASE.BIT._G3SP28
#define PEGG3SP_G3SP29 PEGG3SP_BASE.BIT._G3SP29
#define PEGG3SP_G3SP30 PEGG3SP_BASE.BIT._G3SP30
#define PEGG3SP_G3SP31 PEGG3SP_BASE.BIT._G3SP31
#define PEGG4MK PEGG4MK_BASE.UINT32
#define PEGG4MKL PEGG4MK_BASE.UINT16[L]
#define PEGG4MKH PEGG4MK_BASE.UINT16[H]
#define PEGG4MKLL PEGG4MK_BASE.UINT8[LL]
#define PEGG4MKLH PEGG4MK_BASE.UINT8[LH]
#define PEGG4MKHL PEGG4MK_BASE.UINT8[HL]
#define PEGG4MKHH PEGG4MK_BASE.UINT8[HH]
#define PEGG4MK_G4MASK PEGG4MK_BASE.BIT._G4MASK
#define PEGG4BA PEGG4BA_BASE.UINT32
#define PEGG4BAL PEGG4BA_BASE.UINT16[L]
#define PEGG4BAH PEGG4BA_BASE.UINT16[H]
#define PEGG4BALL PEGG4BA_BASE.UINT8[LL]
#define PEGG4BALH PEGG4BA_BASE.UINT8[LH]
#define PEGG4BAHL PEGG4BA_BASE.UINT8[HL]
#define PEGG4BAHH PEGG4BA_BASE.UINT8[HH]
#define PEGG4BA_G4EN PEGG4BA_BASE.BIT._G4EN
#define PEGG4BA_G4RD PEGG4BA_BASE.BIT._G4RD
#define PEGG4BA_G4WR PEGG4BA_BASE.BIT._G4WR
#define PEGG4BA_G4LOCK PEGG4BA_BASE.BIT._G4LOCK
#define PEGG4BA_G4BASE PEGG4BA_BASE.BIT._G4BASE
#define PEGG4SP PEGG4SP_BASE.UINT32
#define PEGG4SPL PEGG4SP_BASE.UINT16[L]
#define PEGG4SPH PEGG4SP_BASE.UINT16[H]
#define PEGG4SPLL PEGG4SP_BASE.UINT8[LL]
#define PEGG4SPLH PEGG4SP_BASE.UINT8[LH]
#define PEGG4SPHL PEGG4SP_BASE.UINT8[HL]
#define PEGG4SPHH PEGG4SP_BASE.UINT8[HH]
#define PEGG4SP_G4SP0 PEGG4SP_BASE.BIT._G4SP0
#define PEGG4SP_G4SP1 PEGG4SP_BASE.BIT._G4SP1
#define PEGG4SP_G4SP2 PEGG4SP_BASE.BIT._G4SP2
#define PEGG4SP_G4SP3 PEGG4SP_BASE.BIT._G4SP3
#define PEGG4SP_G4SP4 PEGG4SP_BASE.BIT._G4SP4
#define PEGG4SP_G4SP5 PEGG4SP_BASE.BIT._G4SP5
#define PEGG4SP_G4SP6 PEGG4SP_BASE.BIT._G4SP6
#define PEGG4SP_G4SP7 PEGG4SP_BASE.BIT._G4SP7
#define PEGG4SP_G4SP8 PEGG4SP_BASE.BIT._G4SP8
#define PEGG4SP_G4SP9 PEGG4SP_BASE.BIT._G4SP9
#define PEGG4SP_G4SP10 PEGG4SP_BASE.BIT._G4SP10
#define PEGG4SP_G4SP11 PEGG4SP_BASE.BIT._G4SP11
#define PEGG4SP_G4SP12 PEGG4SP_BASE.BIT._G4SP12
#define PEGG4SP_G4SP13 PEGG4SP_BASE.BIT._G4SP13
#define PEGG4SP_G4SP14 PEGG4SP_BASE.BIT._G4SP14
#define PEGG4SP_G4SP15 PEGG4SP_BASE.BIT._G4SP15
#define PEGG4SP_G4SP16 PEGG4SP_BASE.BIT._G4SP16
#define PEGG4SP_G4SP17 PEGG4SP_BASE.BIT._G4SP17
#define PEGG4SP_G4SP18 PEGG4SP_BASE.BIT._G4SP18
#define PEGG4SP_G4SP19 PEGG4SP_BASE.BIT._G4SP19
#define PEGG4SP_G4SP20 PEGG4SP_BASE.BIT._G4SP20
#define PEGG4SP_G4SP21 PEGG4SP_BASE.BIT._G4SP21
#define PEGG4SP_G4SP22 PEGG4SP_BASE.BIT._G4SP22
#define PEGG4SP_G4SP23 PEGG4SP_BASE.BIT._G4SP23
#define PEGG4SP_G4SP24 PEGG4SP_BASE.BIT._G4SP24
#define PEGG4SP_G4SP25 PEGG4SP_BASE.BIT._G4SP25
#define PEGG4SP_G4SP26 PEGG4SP_BASE.BIT._G4SP26
#define PEGG4SP_G4SP27 PEGG4SP_BASE.BIT._G4SP27
#define PEGG4SP_G4SP28 PEGG4SP_BASE.BIT._G4SP28
#define PEGG4SP_G4SP29 PEGG4SP_BASE.BIT._G4SP29
#define PEGG4SP_G4SP30 PEGG4SP_BASE.BIT._G4SP30
#define PEGG4SP_G4SP31 PEGG4SP_BASE.BIT._G4SP31
#define PEGG5MK PEGG5MK_BASE.UINT32
#define PEGG5MKL PEGG5MK_BASE.UINT16[L]
#define PEGG5MKH PEGG5MK_BASE.UINT16[H]
#define PEGG5MKLL PEGG5MK_BASE.UINT8[LL]
#define PEGG5MKLH PEGG5MK_BASE.UINT8[LH]
#define PEGG5MKHL PEGG5MK_BASE.UINT8[HL]
#define PEGG5MKHH PEGG5MK_BASE.UINT8[HH]
#define PEGG5MK_G5MASK PEGG5MK_BASE.BIT._G5MASK
#define PEGG5BA PEGG5BA_BASE.UINT32
#define PEGG5BAL PEGG5BA_BASE.UINT16[L]
#define PEGG5BAH PEGG5BA_BASE.UINT16[H]
#define PEGG5BALL PEGG5BA_BASE.UINT8[LL]
#define PEGG5BALH PEGG5BA_BASE.UINT8[LH]
#define PEGG5BAHL PEGG5BA_BASE.UINT8[HL]
#define PEGG5BAHH PEGG5BA_BASE.UINT8[HH]
#define PEGG5BA_G5EN PEGG5BA_BASE.BIT._G5EN
#define PEGG5BA_G5RD PEGG5BA_BASE.BIT._G5RD
#define PEGG5BA_G5WR PEGG5BA_BASE.BIT._G5WR
#define PEGG5BA_G5LOCK PEGG5BA_BASE.BIT._G5LOCK
#define PEGG5BA_G5BASE PEGG5BA_BASE.BIT._G5BASE
#define PEGG5SP PEGG5SP_BASE.UINT32
#define PEGG5SPL PEGG5SP_BASE.UINT16[L]
#define PEGG5SPH PEGG5SP_BASE.UINT16[H]
#define PEGG5SPLL PEGG5SP_BASE.UINT8[LL]
#define PEGG5SPLH PEGG5SP_BASE.UINT8[LH]
#define PEGG5SPHL PEGG5SP_BASE.UINT8[HL]
#define PEGG5SPHH PEGG5SP_BASE.UINT8[HH]
#define PEGG5SP_G5SP0 PEGG5SP_BASE.BIT._G5SP0
#define PEGG5SP_G5SP1 PEGG5SP_BASE.BIT._G5SP1
#define PEGG5SP_G5SP2 PEGG5SP_BASE.BIT._G5SP2
#define PEGG5SP_G5SP3 PEGG5SP_BASE.BIT._G5SP3
#define PEGG5SP_G5SP4 PEGG5SP_BASE.BIT._G5SP4
#define PEGG5SP_G5SP5 PEGG5SP_BASE.BIT._G5SP5
#define PEGG5SP_G5SP6 PEGG5SP_BASE.BIT._G5SP6
#define PEGG5SP_G5SP7 PEGG5SP_BASE.BIT._G5SP7
#define PEGG5SP_G5SP8 PEGG5SP_BASE.BIT._G5SP8
#define PEGG5SP_G5SP9 PEGG5SP_BASE.BIT._G5SP9
#define PEGG5SP_G5SP10 PEGG5SP_BASE.BIT._G5SP10
#define PEGG5SP_G5SP11 PEGG5SP_BASE.BIT._G5SP11
#define PEGG5SP_G5SP12 PEGG5SP_BASE.BIT._G5SP12
#define PEGG5SP_G5SP13 PEGG5SP_BASE.BIT._G5SP13
#define PEGG5SP_G5SP14 PEGG5SP_BASE.BIT._G5SP14
#define PEGG5SP_G5SP15 PEGG5SP_BASE.BIT._G5SP15
#define PEGG5SP_G5SP16 PEGG5SP_BASE.BIT._G5SP16
#define PEGG5SP_G5SP17 PEGG5SP_BASE.BIT._G5SP17
#define PEGG5SP_G5SP18 PEGG5SP_BASE.BIT._G5SP18
#define PEGG5SP_G5SP19 PEGG5SP_BASE.BIT._G5SP19
#define PEGG5SP_G5SP20 PEGG5SP_BASE.BIT._G5SP20
#define PEGG5SP_G5SP21 PEGG5SP_BASE.BIT._G5SP21
#define PEGG5SP_G5SP22 PEGG5SP_BASE.BIT._G5SP22
#define PEGG5SP_G5SP23 PEGG5SP_BASE.BIT._G5SP23
#define PEGG5SP_G5SP24 PEGG5SP_BASE.BIT._G5SP24
#define PEGG5SP_G5SP25 PEGG5SP_BASE.BIT._G5SP25
#define PEGG5SP_G5SP26 PEGG5SP_BASE.BIT._G5SP26
#define PEGG5SP_G5SP27 PEGG5SP_BASE.BIT._G5SP27
#define PEGG5SP_G5SP28 PEGG5SP_BASE.BIT._G5SP28
#define PEGG5SP_G5SP29 PEGG5SP_BASE.BIT._G5SP29
#define PEGG5SP_G5SP30 PEGG5SP_BASE.BIT._G5SP30
#define PEGG5SP_G5SP31 PEGG5SP_BASE.BIT._G5SP31
#define PEGG6MK PEGG6MK_BASE.UINT32
#define PEGG6MKL PEGG6MK_BASE.UINT16[L]
#define PEGG6MKH PEGG6MK_BASE.UINT16[H]
#define PEGG6MKLL PEGG6MK_BASE.UINT8[LL]
#define PEGG6MKLH PEGG6MK_BASE.UINT8[LH]
#define PEGG6MKHL PEGG6MK_BASE.UINT8[HL]
#define PEGG6MKHH PEGG6MK_BASE.UINT8[HH]
#define PEGG6MK_G6MASK PEGG6MK_BASE.BIT._G6MASK
#define PEGG6BA PEGG6BA_BASE.UINT32
#define PEGG6BAL PEGG6BA_BASE.UINT16[L]
#define PEGG6BAH PEGG6BA_BASE.UINT16[H]
#define PEGG6BALL PEGG6BA_BASE.UINT8[LL]
#define PEGG6BALH PEGG6BA_BASE.UINT8[LH]
#define PEGG6BAHL PEGG6BA_BASE.UINT8[HL]
#define PEGG6BAHH PEGG6BA_BASE.UINT8[HH]
#define PEGG6BA_G6EN PEGG6BA_BASE.BIT._G6EN
#define PEGG6BA_G6RD PEGG6BA_BASE.BIT._G6RD
#define PEGG6BA_G6WR PEGG6BA_BASE.BIT._G6WR
#define PEGG6BA_G6LOCK PEGG6BA_BASE.BIT._G6LOCK
#define PEGG6BA_G6BASE PEGG6BA_BASE.BIT._G6BASE
#define PEGG6SP PEGG6SP_BASE.UINT32
#define PEGG6SPL PEGG6SP_BASE.UINT16[L]
#define PEGG6SPH PEGG6SP_BASE.UINT16[H]
#define PEGG6SPLL PEGG6SP_BASE.UINT8[LL]
#define PEGG6SPLH PEGG6SP_BASE.UINT8[LH]
#define PEGG6SPHL PEGG6SP_BASE.UINT8[HL]
#define PEGG6SPHH PEGG6SP_BASE.UINT8[HH]
#define PEGG6SP_G6SP0 PEGG6SP_BASE.BIT._G6SP0
#define PEGG6SP_G6SP1 PEGG6SP_BASE.BIT._G6SP1
#define PEGG6SP_G6SP2 PEGG6SP_BASE.BIT._G6SP2
#define PEGG6SP_G6SP3 PEGG6SP_BASE.BIT._G6SP3
#define PEGG6SP_G6SP4 PEGG6SP_BASE.BIT._G6SP4
#define PEGG6SP_G6SP5 PEGG6SP_BASE.BIT._G6SP5
#define PEGG6SP_G6SP6 PEGG6SP_BASE.BIT._G6SP6
#define PEGG6SP_G6SP7 PEGG6SP_BASE.BIT._G6SP7
#define PEGG6SP_G6SP8 PEGG6SP_BASE.BIT._G6SP8
#define PEGG6SP_G6SP9 PEGG6SP_BASE.BIT._G6SP9
#define PEGG6SP_G6SP10 PEGG6SP_BASE.BIT._G6SP10
#define PEGG6SP_G6SP11 PEGG6SP_BASE.BIT._G6SP11
#define PEGG6SP_G6SP12 PEGG6SP_BASE.BIT._G6SP12
#define PEGG6SP_G6SP13 PEGG6SP_BASE.BIT._G6SP13
#define PEGG6SP_G6SP14 PEGG6SP_BASE.BIT._G6SP14
#define PEGG6SP_G6SP15 PEGG6SP_BASE.BIT._G6SP15
#define PEGG6SP_G6SP16 PEGG6SP_BASE.BIT._G6SP16
#define PEGG6SP_G6SP17 PEGG6SP_BASE.BIT._G6SP17
#define PEGG6SP_G6SP18 PEGG6SP_BASE.BIT._G6SP18
#define PEGG6SP_G6SP19 PEGG6SP_BASE.BIT._G6SP19
#define PEGG6SP_G6SP20 PEGG6SP_BASE.BIT._G6SP20
#define PEGG6SP_G6SP21 PEGG6SP_BASE.BIT._G6SP21
#define PEGG6SP_G6SP22 PEGG6SP_BASE.BIT._G6SP22
#define PEGG6SP_G6SP23 PEGG6SP_BASE.BIT._G6SP23
#define PEGG6SP_G6SP24 PEGG6SP_BASE.BIT._G6SP24
#define PEGG6SP_G6SP25 PEGG6SP_BASE.BIT._G6SP25
#define PEGG6SP_G6SP26 PEGG6SP_BASE.BIT._G6SP26
#define PEGG6SP_G6SP27 PEGG6SP_BASE.BIT._G6SP27
#define PEGG6SP_G6SP28 PEGG6SP_BASE.BIT._G6SP28
#define PEGG6SP_G6SP29 PEGG6SP_BASE.BIT._G6SP29
#define PEGG6SP_G6SP30 PEGG6SP_BASE.BIT._G6SP30
#define PEGG6SP_G6SP31 PEGG6SP_BASE.BIT._G6SP31
#define PEGG7MK PEGG7MK_BASE.UINT32
#define PEGG7MKL PEGG7MK_BASE.UINT16[L]
#define PEGG7MKH PEGG7MK_BASE.UINT16[H]
#define PEGG7MKLL PEGG7MK_BASE.UINT8[LL]
#define PEGG7MKLH PEGG7MK_BASE.UINT8[LH]
#define PEGG7MKHL PEGG7MK_BASE.UINT8[HL]
#define PEGG7MKHH PEGG7MK_BASE.UINT8[HH]
#define PEGG7MK_G7MASK PEGG7MK_BASE.BIT._G7MASK
#define PEGG7BA PEGG7BA_BASE.UINT32
#define PEGG7BAL PEGG7BA_BASE.UINT16[L]
#define PEGG7BAH PEGG7BA_BASE.UINT16[H]
#define PEGG7BALL PEGG7BA_BASE.UINT8[LL]
#define PEGG7BALH PEGG7BA_BASE.UINT8[LH]
#define PEGG7BAHL PEGG7BA_BASE.UINT8[HL]
#define PEGG7BAHH PEGG7BA_BASE.UINT8[HH]
#define PEGG7BA_G7EN PEGG7BA_BASE.BIT._G7EN
#define PEGG7BA_G7RD PEGG7BA_BASE.BIT._G7RD
#define PEGG7BA_G7WR PEGG7BA_BASE.BIT._G7WR
#define PEGG7BA_G7LOCK PEGG7BA_BASE.BIT._G7LOCK
#define PEGG7BA_G7BASE PEGG7BA_BASE.BIT._G7BASE
#define PEGG7SP PEGG7SP_BASE.UINT32
#define PEGG7SPL PEGG7SP_BASE.UINT16[L]
#define PEGG7SPH PEGG7SP_BASE.UINT16[H]
#define PEGG7SPLL PEGG7SP_BASE.UINT8[LL]
#define PEGG7SPLH PEGG7SP_BASE.UINT8[LH]
#define PEGG7SPHL PEGG7SP_BASE.UINT8[HL]
#define PEGG7SPHH PEGG7SP_BASE.UINT8[HH]
#define PEGG7SP_G7SP0 PEGG7SP_BASE.BIT._G7SP0
#define PEGG7SP_G7SP1 PEGG7SP_BASE.BIT._G7SP1
#define PEGG7SP_G7SP2 PEGG7SP_BASE.BIT._G7SP2
#define PEGG7SP_G7SP3 PEGG7SP_BASE.BIT._G7SP3
#define PEGG7SP_G7SP4 PEGG7SP_BASE.BIT._G7SP4
#define PEGG7SP_G7SP5 PEGG7SP_BASE.BIT._G7SP5
#define PEGG7SP_G7SP6 PEGG7SP_BASE.BIT._G7SP6
#define PEGG7SP_G7SP7 PEGG7SP_BASE.BIT._G7SP7
#define PEGG7SP_G7SP8 PEGG7SP_BASE.BIT._G7SP8
#define PEGG7SP_G7SP9 PEGG7SP_BASE.BIT._G7SP9
#define PEGG7SP_G7SP10 PEGG7SP_BASE.BIT._G7SP10
#define PEGG7SP_G7SP11 PEGG7SP_BASE.BIT._G7SP11
#define PEGG7SP_G7SP12 PEGG7SP_BASE.BIT._G7SP12
#define PEGG7SP_G7SP13 PEGG7SP_BASE.BIT._G7SP13
#define PEGG7SP_G7SP14 PEGG7SP_BASE.BIT._G7SP14
#define PEGG7SP_G7SP15 PEGG7SP_BASE.BIT._G7SP15
#define PEGG7SP_G7SP16 PEGG7SP_BASE.BIT._G7SP16
#define PEGG7SP_G7SP17 PEGG7SP_BASE.BIT._G7SP17
#define PEGG7SP_G7SP18 PEGG7SP_BASE.BIT._G7SP18
#define PEGG7SP_G7SP19 PEGG7SP_BASE.BIT._G7SP19
#define PEGG7SP_G7SP20 PEGG7SP_BASE.BIT._G7SP20
#define PEGG7SP_G7SP21 PEGG7SP_BASE.BIT._G7SP21
#define PEGG7SP_G7SP22 PEGG7SP_BASE.BIT._G7SP22
#define PEGG7SP_G7SP23 PEGG7SP_BASE.BIT._G7SP23
#define PEGG7SP_G7SP24 PEGG7SP_BASE.BIT._G7SP24
#define PEGG7SP_G7SP25 PEGG7SP_BASE.BIT._G7SP25
#define PEGG7SP_G7SP26 PEGG7SP_BASE.BIT._G7SP26
#define PEGG7SP_G7SP27 PEGG7SP_BASE.BIT._G7SP27
#define PEGG7SP_G7SP28 PEGG7SP_BASE.BIT._G7SP28
#define PEGG7SP_G7SP29 PEGG7SP_BASE.BIT._G7SP29
#define PEGG7SP_G7SP30 PEGG7SP_BASE.BIT._G7SP30
#define PEGG7SP_G7SP31 PEGG7SP_BASE.BIT._G7SP31

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif