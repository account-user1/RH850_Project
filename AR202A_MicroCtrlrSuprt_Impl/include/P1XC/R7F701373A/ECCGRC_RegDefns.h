#ifndef __DR7F701373_ECCGRC_HEADER__
#define __DR7F701373_ECCGRC_HEADER__



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
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _ASEDIE : 1;
    uint32 _ADEDIE : 1;
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
} UGRERRINTBits_t;

typedef struct
{
    uint32 _SSTCLR : 32;
} UGRSERSTCLRBits_t;

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
} UGRDERSTCLRBits_t;

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
} UGROVFSTRBits_t;

typedef struct
{
    const uint32 _SEDF : 32;
} UGRSERSTRBits_t;

typedef struct
{
    const uint32 _DEDF : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    const uint32 _ASEDF : 1;
    const uint32 _ADEDF : 1;
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
} UGRDERSTRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR1SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR2SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR3SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR4SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR5SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR6SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR7SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR8SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR9SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR10SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR11SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR12SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR13SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR14SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR15SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR16SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR17SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR18SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR19SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR20SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR21SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR22SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR23SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR24SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR25SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR26SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR27SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR28SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR29SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR30SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR31SEDADRBits_t;

typedef struct
{
    const uint32 _SEADR : 21;
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
} UGR32SEDADRBits_t;

typedef struct
{
    const uint32 _DEADR : 21;
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
} UGR00DEDADRBits_t;

typedef struct
{
    uint32 _ECCDIS : 1;
    uint32 _SECDIS : 1;
    uint32 padding2 : 1;
    uint32 _AECCDIS : 1;
    uint32 _ASECDIS : 1;
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
} GRECCCTL_GRAMCBits_t;

typedef struct
{
    uint32 _DATSEL : 2;
    uint32 _DECINEN : 1;
    uint32 _ECCTST : 1;
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
} GRTSTCTLBits_t;

typedef struct
{
    const uint32 _GRTDATBF : 32;
} GRTDATBF0LBits_t;

typedef struct
{
    const uint32 _GRTDATBF : 32;
} GRTDATBF0HBits_t;

typedef struct
{
    const uint32 _GRTDATBF : 32;
} GRTDATBF1LBits_t;

typedef struct
{
    const uint32 _GRTDATBF : 32;
} GRTDATBF1HBits_t;

typedef struct
{
    uint32 _GRDECINBF0 : 32;
} GRDECINBF0Bits_t;

typedef struct
{
    uint32 _GRDECINBF1 : 7;
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
} GRDECINBF1Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    UGRERRINTBits_t BIT;
} UGRERRINT_t;

typedef union
{
    uint32 UINT32;
    UGRSERSTCLRBits_t BIT;
} UGRSERSTCLR_t;

typedef union
{
    uint32 UINT32;
    UGRDERSTCLRBits_t BIT;
} UGRDERSTCLR_t;

typedef union
{
    uint32 UINT32;
    const UGROVFSTRBits_t BIT;
} UGROVFSTR_t;

typedef union
{
    uint32 UINT32;
    const UGRSERSTRBits_t BIT;
} UGRSERSTR_t;

typedef union
{
    uint32 UINT32;
    const UGRDERSTRBits_t BIT;
} UGRDERSTR_t;

typedef union
{
    uint32 UINT32;
    const UGR1SEDADRBits_t BIT;
} UGR1SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR2SEDADRBits_t BIT;
} UGR2SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR3SEDADRBits_t BIT;
} UGR3SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR4SEDADRBits_t BIT;
} UGR4SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR5SEDADRBits_t BIT;
} UGR5SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR6SEDADRBits_t BIT;
} UGR6SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR7SEDADRBits_t BIT;
} UGR7SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR8SEDADRBits_t BIT;
} UGR8SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR9SEDADRBits_t BIT;
} UGR9SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR10SEDADRBits_t BIT;
} UGR10SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR11SEDADRBits_t BIT;
} UGR11SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR12SEDADRBits_t BIT;
} UGR12SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR13SEDADRBits_t BIT;
} UGR13SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR14SEDADRBits_t BIT;
} UGR14SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR15SEDADRBits_t BIT;
} UGR15SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR16SEDADRBits_t BIT;
} UGR16SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR17SEDADRBits_t BIT;
} UGR17SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR18SEDADRBits_t BIT;
} UGR18SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR19SEDADRBits_t BIT;
} UGR19SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR20SEDADRBits_t BIT;
} UGR20SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR21SEDADRBits_t BIT;
} UGR21SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR22SEDADRBits_t BIT;
} UGR22SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR23SEDADRBits_t BIT;
} UGR23SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR24SEDADRBits_t BIT;
} UGR24SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR25SEDADRBits_t BIT;
} UGR25SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR26SEDADRBits_t BIT;
} UGR26SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR27SEDADRBits_t BIT;
} UGR27SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR28SEDADRBits_t BIT;
} UGR28SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR29SEDADRBits_t BIT;
} UGR29SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR30SEDADRBits_t BIT;
} UGR30SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR31SEDADRBits_t BIT;
} UGR31SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR32SEDADRBits_t BIT;
} UGR32SEDADR_t;

typedef union
{
    uint32 UINT32;
    const UGR00DEDADRBits_t BIT;
} UGR00DEDADR_t;

typedef union
{
    uint32 UINT32;
    GRECCCTL_GRAMCBits_t BIT;
} GRECCCTL_GRAMC_t;

typedef union
{
    uint32 UINT32;
    GRTSTCTLBits_t BIT;
} GRTSTCTL_t;

typedef union
{
    uint32 UINT32;
    const GRTDATBF0LBits_t BIT;
} GRTDATBF0L_t;

typedef union
{
    uint32 UINT32;
    const GRTDATBF0HBits_t BIT;
} GRTDATBF0H_t;

typedef union
{
    uint32 UINT32;
    const GRTDATBF1LBits_t BIT;
} GRTDATBF1L_t;

typedef union
{
    uint32 UINT32;
    const GRTDATBF1HBits_t BIT;
} GRTDATBF1H_t;

typedef union
{
    uint32 UINT32;
    GRDECINBF0Bits_t BIT;
} GRDECINBF0_t;

typedef union
{
    uint32 UINT32;
    GRDECINBF1Bits_t BIT;
} GRDECINBF1_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(UGRERRINT_BASE, 0xFFC64000, __READ_WRITE, UGRERRINT_t);
__IOREG(UGRSERSTCLR_BASE, 0xFFC64004, __READ_WRITE, UGRSERSTCLR_t);
__IOREG(UGRDERSTCLR_BASE, 0xFFC64008, __READ_WRITE, UGRDERSTCLR_t);
__IOREG(UGROVFSTR_BASE, 0xFFC6400C, __READ, UGROVFSTR_t);
__IOREG(UGRSERSTR_BASE, 0xFFC64020, __READ, UGRSERSTR_t);
__IOREG(UGRDERSTR_BASE, 0xFFC64030, __READ, UGRDERSTR_t);
__IOREG(UGR1SEDADR_BASE, 0xFFC64040, __READ, UGR1SEDADR_t);
__IOREG(UGR2SEDADR_BASE, 0xFFC64044, __READ, UGR2SEDADR_t);
__IOREG(UGR3SEDADR_BASE, 0xFFC64048, __READ, UGR3SEDADR_t);
__IOREG(UGR4SEDADR_BASE, 0xFFC6404C, __READ, UGR4SEDADR_t);
__IOREG(UGR5SEDADR_BASE, 0xFFC64050, __READ, UGR5SEDADR_t);
__IOREG(UGR6SEDADR_BASE, 0xFFC64054, __READ, UGR6SEDADR_t);
__IOREG(UGR7SEDADR_BASE, 0xFFC64058, __READ, UGR7SEDADR_t);
__IOREG(UGR8SEDADR_BASE, 0xFFC6405C, __READ, UGR8SEDADR_t);
__IOREG(UGR9SEDADR_BASE, 0xFFC64060, __READ, UGR9SEDADR_t);
__IOREG(UGR10SEDADR_BASE, 0xFFC64064, __READ, UGR10SEDADR_t);
__IOREG(UGR11SEDADR_BASE, 0xFFC64068, __READ, UGR11SEDADR_t);
__IOREG(UGR12SEDADR_BASE, 0xFFC6406C, __READ, UGR12SEDADR_t);
__IOREG(UGR13SEDADR_BASE, 0xFFC64070, __READ, UGR13SEDADR_t);
__IOREG(UGR14SEDADR_BASE, 0xFFC64074, __READ, UGR14SEDADR_t);
__IOREG(UGR15SEDADR_BASE, 0xFFC64078, __READ, UGR15SEDADR_t);
__IOREG(UGR16SEDADR_BASE, 0xFFC6407C, __READ, UGR16SEDADR_t);
__IOREG(UGR17SEDADR_BASE, 0xFFC64080, __READ, UGR17SEDADR_t);
__IOREG(UGR18SEDADR_BASE, 0xFFC64084, __READ, UGR18SEDADR_t);
__IOREG(UGR19SEDADR_BASE, 0xFFC64088, __READ, UGR19SEDADR_t);
__IOREG(UGR20SEDADR_BASE, 0xFFC6408C, __READ, UGR20SEDADR_t);
__IOREG(UGR21SEDADR_BASE, 0xFFC64090, __READ, UGR21SEDADR_t);
__IOREG(UGR22SEDADR_BASE, 0xFFC64094, __READ, UGR22SEDADR_t);
__IOREG(UGR23SEDADR_BASE, 0xFFC64098, __READ, UGR23SEDADR_t);
__IOREG(UGR24SEDADR_BASE, 0xFFC6409C, __READ, UGR24SEDADR_t);
__IOREG(UGR25SEDADR_BASE, 0xFFC640A0, __READ, UGR25SEDADR_t);
__IOREG(UGR26SEDADR_BASE, 0xFFC640A4, __READ, UGR26SEDADR_t);
__IOREG(UGR27SEDADR_BASE, 0xFFC640A8, __READ, UGR27SEDADR_t);
__IOREG(UGR28SEDADR_BASE, 0xFFC640AC, __READ, UGR28SEDADR_t);
__IOREG(UGR29SEDADR_BASE, 0xFFC640B0, __READ, UGR29SEDADR_t);
__IOREG(UGR30SEDADR_BASE, 0xFFC640B4, __READ, UGR30SEDADR_t);
__IOREG(UGR31SEDADR_BASE, 0xFFC640B8, __READ, UGR31SEDADR_t);
__IOREG(UGR32SEDADR_BASE, 0xFFC640BC, __READ, UGR32SEDADR_t);
__IOREG(UGR00DEDADR_BASE, 0xFFC640C0, __READ, UGR00DEDADR_t);
__IOREG(GRECCCTL_GRAMC_BASE, 0xFFC64100, __READ_WRITE, GRECCCTL_GRAMC_t);
__IOREG(GRTSTCTL_BASE, 0xFFC64104, __READ_WRITE, GRTSTCTL_t);
__IOREG(GRTDATBF0L_BASE, 0xFFC64108, __READ, GRTDATBF0L_t);
__IOREG(GRTDATBF0H_BASE, 0xFFC6410C, __READ, GRTDATBF0H_t);
__IOREG(GRTDATBF1L_BASE, 0xFFC64110, __READ, GRTDATBF1L_t);
__IOREG(GRTDATBF1H_BASE, 0xFFC64114, __READ, GRTDATBF1H_t);
__IOREG(GRDECINBF0_BASE, 0xFFC64118, __READ_WRITE, GRDECINBF0_t);
__IOREG(GRDECINBF1_BASE, 0xFFC6411C, __READ_WRITE, GRDECINBF1_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define UGRERRINT UGRERRINT_BASE.UINT32
#define UGRERRINT_SEDIE UGRERRINT_BASE.BIT._SEDIE
#define UGRERRINT_DEDIE UGRERRINT_BASE.BIT._DEDIE
#define UGRERRINT_ASEDIE UGRERRINT_BASE.BIT._ASEDIE
#define UGRERRINT_ADEDIE UGRERRINT_BASE.BIT._ADEDIE
#define UGRERRINT_SEOVFIE UGRERRINT_BASE.BIT._SEOVFIE
#define UGRSERSTCLR UGRSERSTCLR_BASE.UINT32
#define UGRSERSTCLR_SSTCLR UGRSERSTCLR_BASE.BIT._SSTCLR
#define UGRDERSTCLR UGRDERSTCLR_BASE.UINT32
#define UGRDERSTCLR_DSTCLR UGRDERSTCLR_BASE.BIT._DSTCLR
#define UGROVFSTR UGROVFSTR_BASE.UINT32
#define UGROVFSTR_SERROVF UGROVFSTR_BASE.BIT._SERROVF
#define UGRSERSTR UGRSERSTR_BASE.UINT32
#define UGRSERSTR_SEDF UGRSERSTR_BASE.BIT._SEDF
#define UGRDERSTR UGRDERSTR_BASE.UINT32
#define UGRDERSTR_DEDF UGRDERSTR_BASE.BIT._DEDF
#define UGRDERSTR_ASEDF UGRDERSTR_BASE.BIT._ASEDF
#define UGRDERSTR_ADEDF UGRDERSTR_BASE.BIT._ADEDF
#define UGR1SEDADR UGR1SEDADR_BASE.UINT32
#define UGR1SEDADR_SEADR UGR1SEDADR_BASE.BIT._SEADR
#define UGR2SEDADR UGR2SEDADR_BASE.UINT32
#define UGR2SEDADR_SEADR UGR2SEDADR_BASE.BIT._SEADR
#define UGR3SEDADR UGR3SEDADR_BASE.UINT32
#define UGR3SEDADR_SEADR UGR3SEDADR_BASE.BIT._SEADR
#define UGR4SEDADR UGR4SEDADR_BASE.UINT32
#define UGR4SEDADR_SEADR UGR4SEDADR_BASE.BIT._SEADR
#define UGR5SEDADR UGR5SEDADR_BASE.UINT32
#define UGR5SEDADR_SEADR UGR5SEDADR_BASE.BIT._SEADR
#define UGR6SEDADR UGR6SEDADR_BASE.UINT32
#define UGR6SEDADR_SEADR UGR6SEDADR_BASE.BIT._SEADR
#define UGR7SEDADR UGR7SEDADR_BASE.UINT32
#define UGR7SEDADR_SEADR UGR7SEDADR_BASE.BIT._SEADR
#define UGR8SEDADR UGR8SEDADR_BASE.UINT32
#define UGR8SEDADR_SEADR UGR8SEDADR_BASE.BIT._SEADR
#define UGR9SEDADR UGR9SEDADR_BASE.UINT32
#define UGR9SEDADR_SEADR UGR9SEDADR_BASE.BIT._SEADR
#define UGR10SEDADR UGR10SEDADR_BASE.UINT32
#define UGR10SEDADR_SEADR UGR10SEDADR_BASE.BIT._SEADR
#define UGR11SEDADR UGR11SEDADR_BASE.UINT32
#define UGR11SEDADR_SEADR UGR11SEDADR_BASE.BIT._SEADR
#define UGR12SEDADR UGR12SEDADR_BASE.UINT32
#define UGR12SEDADR_SEADR UGR12SEDADR_BASE.BIT._SEADR
#define UGR13SEDADR UGR13SEDADR_BASE.UINT32
#define UGR13SEDADR_SEADR UGR13SEDADR_BASE.BIT._SEADR
#define UGR14SEDADR UGR14SEDADR_BASE.UINT32
#define UGR14SEDADR_SEADR UGR14SEDADR_BASE.BIT._SEADR
#define UGR15SEDADR UGR15SEDADR_BASE.UINT32
#define UGR15SEDADR_SEADR UGR15SEDADR_BASE.BIT._SEADR
#define UGR16SEDADR UGR16SEDADR_BASE.UINT32
#define UGR16SEDADR_SEADR UGR16SEDADR_BASE.BIT._SEADR
#define UGR17SEDADR UGR17SEDADR_BASE.UINT32
#define UGR17SEDADR_SEADR UGR17SEDADR_BASE.BIT._SEADR
#define UGR18SEDADR UGR18SEDADR_BASE.UINT32
#define UGR18SEDADR_SEADR UGR18SEDADR_BASE.BIT._SEADR
#define UGR19SEDADR UGR19SEDADR_BASE.UINT32
#define UGR19SEDADR_SEADR UGR19SEDADR_BASE.BIT._SEADR
#define UGR20SEDADR UGR20SEDADR_BASE.UINT32
#define UGR20SEDADR_SEADR UGR20SEDADR_BASE.BIT._SEADR
#define UGR21SEDADR UGR21SEDADR_BASE.UINT32
#define UGR21SEDADR_SEADR UGR21SEDADR_BASE.BIT._SEADR
#define UGR22SEDADR UGR22SEDADR_BASE.UINT32
#define UGR22SEDADR_SEADR UGR22SEDADR_BASE.BIT._SEADR
#define UGR23SEDADR UGR23SEDADR_BASE.UINT32
#define UGR23SEDADR_SEADR UGR23SEDADR_BASE.BIT._SEADR
#define UGR24SEDADR UGR24SEDADR_BASE.UINT32
#define UGR24SEDADR_SEADR UGR24SEDADR_BASE.BIT._SEADR
#define UGR25SEDADR UGR25SEDADR_BASE.UINT32
#define UGR25SEDADR_SEADR UGR25SEDADR_BASE.BIT._SEADR
#define UGR26SEDADR UGR26SEDADR_BASE.UINT32
#define UGR26SEDADR_SEADR UGR26SEDADR_BASE.BIT._SEADR
#define UGR27SEDADR UGR27SEDADR_BASE.UINT32
#define UGR27SEDADR_SEADR UGR27SEDADR_BASE.BIT._SEADR
#define UGR28SEDADR UGR28SEDADR_BASE.UINT32
#define UGR28SEDADR_SEADR UGR28SEDADR_BASE.BIT._SEADR
#define UGR29SEDADR UGR29SEDADR_BASE.UINT32
#define UGR29SEDADR_SEADR UGR29SEDADR_BASE.BIT._SEADR
#define UGR30SEDADR UGR30SEDADR_BASE.UINT32
#define UGR30SEDADR_SEADR UGR30SEDADR_BASE.BIT._SEADR
#define UGR31SEDADR UGR31SEDADR_BASE.UINT32
#define UGR31SEDADR_SEADR UGR31SEDADR_BASE.BIT._SEADR
#define UGR32SEDADR UGR32SEDADR_BASE.UINT32
#define UGR32SEDADR_SEADR UGR32SEDADR_BASE.BIT._SEADR
#define UGR00DEDADR UGR00DEDADR_BASE.UINT32
#define UGR00DEDADR_DEADR UGR00DEDADR_BASE.BIT._DEADR
#define GRECCCTL_GRAMC GRECCCTL_GRAMC_BASE.UINT32
#define GRECCCTL_GRAMC_ECCDIS GRECCCTL_GRAMC_BASE.BIT._ECCDIS
#define GRECCCTL_GRAMC_SECDIS GRECCCTL_GRAMC_BASE.BIT._SECDIS
#define GRECCCTL_GRAMC_AECCDIS GRECCCTL_GRAMC_BASE.BIT._AECCDIS
#define GRECCCTL_GRAMC_ASECDIS GRECCCTL_GRAMC_BASE.BIT._ASECDIS
#define GRECCCTL_GRAMC_PROT GRECCCTL_GRAMC_BASE.BIT._PROT
#define GRTSTCTL GRTSTCTL_BASE.UINT32
#define GRTSTCTL_DATSEL GRTSTCTL_BASE.BIT._DATSEL
#define GRTSTCTL_DECINEN GRTSTCTL_BASE.BIT._DECINEN
#define GRTSTCTL_ECCTST GRTSTCTL_BASE.BIT._ECCTST
#define GRTSTCTL_PROT GRTSTCTL_BASE.BIT._PROT
#define GRTDATBF0L GRTDATBF0L_BASE.UINT32
#define GRTDATBF0L_GRTDATBF GRTDATBF0L_BASE.BIT._GRTDATBF
#define GRTDATBF0H GRTDATBF0H_BASE.UINT32
#define GRTDATBF0H_GRTDATBF GRTDATBF0H_BASE.BIT._GRTDATBF
#define GRTDATBF1L GRTDATBF1L_BASE.UINT32
#define GRTDATBF1L_GRTDATBF GRTDATBF1L_BASE.BIT._GRTDATBF
#define GRTDATBF1H GRTDATBF1H_BASE.UINT32
#define GRTDATBF1H_GRTDATBF GRTDATBF1H_BASE.BIT._GRTDATBF
#define GRDECINBF0 GRDECINBF0_BASE.UINT32
#define GRDECINBF0_GRDECINBF0 GRDECINBF0_BASE.BIT._GRDECINBF0
#define GRDECINBF1 GRDECINBF1_BASE.UINT32
#define GRDECINBF1_GRDECINBF1 GRDECINBF1_BASE.BIT._GRDECINBF1

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif