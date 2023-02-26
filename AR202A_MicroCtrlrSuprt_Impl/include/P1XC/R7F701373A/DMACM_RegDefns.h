#ifndef __DR7F701373_DMACM_HEADER__
#define __DR7F701373_DMACM_HEADER__



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
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM00CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM01CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM02CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM03CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM04CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM05CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM06CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM07CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM10CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM11CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM12CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM13CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM14CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM15CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM16CMBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding7 : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
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
} DM17CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS000CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS001CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS002CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS003CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS004CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS005CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS006CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS007CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS008CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS009CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS010CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS011CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS012CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS013CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS014CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS015CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS016CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS017CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS018CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS019CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS020CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS021CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS022CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS023CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS024CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS025CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS026CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS027CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS028CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS029CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS030CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS031CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS032CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS033CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS034CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS035CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS036CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS037CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS038CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS039CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS040CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS041CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS042CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS043CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS044CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS045CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS046CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS047CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS048CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS049CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS050CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS051CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS052CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS053CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS054CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS055CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS056CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS057CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS058CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS059CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS060CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS061CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS062CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS063CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS064CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS065CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS066CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS067CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS068CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS069CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS070CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS071CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS072CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS073CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS074CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS075CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS076CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS077CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS078CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS079CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS080CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS081CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS082CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS083CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS084CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS085CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS086CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS087CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS088CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS089CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS090CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS091CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS092CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS093CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS094CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS095CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS096CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS097CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS098CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS099CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS100CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS101CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS102CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS103CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS104CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS105CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS106CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS107CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS108CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS109CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS110CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS111CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS112CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS113CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS114CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS115CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS116CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS117CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS118CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS119CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS120CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS121CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS122CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS123CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS124CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS125CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS126CMBits_t;

typedef struct
{
    uint32 _CMC0 : 1;
    uint32 _CMC1 : 1;
    uint32 _CMC2 : 1;
    uint32 _CMC3 : 1;
    uint32 _CMC4 : 1;
    uint32 _CMC5 : 1;
    uint32 _CMC6 : 1;
    uint32 _CMC7 : 1;
    uint32 _CMC8 : 1;
    uint32 _CMC9 : 1;
    uint32 _CMC10 : 1;
    uint32 _CMC11 : 1;
    uint32 _CMC12 : 1;
    uint32 _CMC13 : 1;
    uint32 _CMC14 : 1;
    uint32 _CMC15 : 1;
    uint32 padding16 : 1;
    uint32 _UM : 1;
    uint32 _SPID0 : 1;
    uint32 _SPID1 : 1;
    uint32 _SPID2 : 1;
    uint32 _SPID3 : 1;
    uint32 _SPID4 : 1;
    uint32 padding23 : 1;
    uint32 padding24 : 1;
    uint32 padding25 : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 _PEID0 : 1;
    uint32 _PEID1 : 1;
    uint32 _PEID2 : 1;
} DTS127CMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    DM00CMBits_t BIT;
} DM00CM_t;

typedef union
{
    uint32 UINT32;
    DM01CMBits_t BIT;
} DM01CM_t;

typedef union
{
    uint32 UINT32;
    DM02CMBits_t BIT;
} DM02CM_t;

typedef union
{
    uint32 UINT32;
    DM03CMBits_t BIT;
} DM03CM_t;

typedef union
{
    uint32 UINT32;
    DM04CMBits_t BIT;
} DM04CM_t;

typedef union
{
    uint32 UINT32;
    DM05CMBits_t BIT;
} DM05CM_t;

typedef union
{
    uint32 UINT32;
    DM06CMBits_t BIT;
} DM06CM_t;

typedef union
{
    uint32 UINT32;
    DM07CMBits_t BIT;
} DM07CM_t;

typedef union
{
    uint32 UINT32;
    DM10CMBits_t BIT;
} DM10CM_t;

typedef union
{
    uint32 UINT32;
    DM11CMBits_t BIT;
} DM11CM_t;

typedef union
{
    uint32 UINT32;
    DM12CMBits_t BIT;
} DM12CM_t;

typedef union
{
    uint32 UINT32;
    DM13CMBits_t BIT;
} DM13CM_t;

typedef union
{
    uint32 UINT32;
    DM14CMBits_t BIT;
} DM14CM_t;

typedef union
{
    uint32 UINT32;
    DM15CMBits_t BIT;
} DM15CM_t;

typedef union
{
    uint32 UINT32;
    DM16CMBits_t BIT;
} DM16CM_t;

typedef union
{
    uint32 UINT32;
    DM17CMBits_t BIT;
} DM17CM_t;

typedef union
{
    uint32 UINT32;
    DTS000CMBits_t BIT;
} DTS000CM_t;

typedef union
{
    uint32 UINT32;
    DTS001CMBits_t BIT;
} DTS001CM_t;

typedef union
{
    uint32 UINT32;
    DTS002CMBits_t BIT;
} DTS002CM_t;

typedef union
{
    uint32 UINT32;
    DTS003CMBits_t BIT;
} DTS003CM_t;

typedef union
{
    uint32 UINT32;
    DTS004CMBits_t BIT;
} DTS004CM_t;

typedef union
{
    uint32 UINT32;
    DTS005CMBits_t BIT;
} DTS005CM_t;

typedef union
{
    uint32 UINT32;
    DTS006CMBits_t BIT;
} DTS006CM_t;

typedef union
{
    uint32 UINT32;
    DTS007CMBits_t BIT;
} DTS007CM_t;

typedef union
{
    uint32 UINT32;
    DTS008CMBits_t BIT;
} DTS008CM_t;

typedef union
{
    uint32 UINT32;
    DTS009CMBits_t BIT;
} DTS009CM_t;

typedef union
{
    uint32 UINT32;
    DTS010CMBits_t BIT;
} DTS010CM_t;

typedef union
{
    uint32 UINT32;
    DTS011CMBits_t BIT;
} DTS011CM_t;

typedef union
{
    uint32 UINT32;
    DTS012CMBits_t BIT;
} DTS012CM_t;

typedef union
{
    uint32 UINT32;
    DTS013CMBits_t BIT;
} DTS013CM_t;

typedef union
{
    uint32 UINT32;
    DTS014CMBits_t BIT;
} DTS014CM_t;

typedef union
{
    uint32 UINT32;
    DTS015CMBits_t BIT;
} DTS015CM_t;

typedef union
{
    uint32 UINT32;
    DTS016CMBits_t BIT;
} DTS016CM_t;

typedef union
{
    uint32 UINT32;
    DTS017CMBits_t BIT;
} DTS017CM_t;

typedef union
{
    uint32 UINT32;
    DTS018CMBits_t BIT;
} DTS018CM_t;

typedef union
{
    uint32 UINT32;
    DTS019CMBits_t BIT;
} DTS019CM_t;

typedef union
{
    uint32 UINT32;
    DTS020CMBits_t BIT;
} DTS020CM_t;

typedef union
{
    uint32 UINT32;
    DTS021CMBits_t BIT;
} DTS021CM_t;

typedef union
{
    uint32 UINT32;
    DTS022CMBits_t BIT;
} DTS022CM_t;

typedef union
{
    uint32 UINT32;
    DTS023CMBits_t BIT;
} DTS023CM_t;

typedef union
{
    uint32 UINT32;
    DTS024CMBits_t BIT;
} DTS024CM_t;

typedef union
{
    uint32 UINT32;
    DTS025CMBits_t BIT;
} DTS025CM_t;

typedef union
{
    uint32 UINT32;
    DTS026CMBits_t BIT;
} DTS026CM_t;

typedef union
{
    uint32 UINT32;
    DTS027CMBits_t BIT;
} DTS027CM_t;

typedef union
{
    uint32 UINT32;
    DTS028CMBits_t BIT;
} DTS028CM_t;

typedef union
{
    uint32 UINT32;
    DTS029CMBits_t BIT;
} DTS029CM_t;

typedef union
{
    uint32 UINT32;
    DTS030CMBits_t BIT;
} DTS030CM_t;

typedef union
{
    uint32 UINT32;
    DTS031CMBits_t BIT;
} DTS031CM_t;

typedef union
{
    uint32 UINT32;
    DTS032CMBits_t BIT;
} DTS032CM_t;

typedef union
{
    uint32 UINT32;
    DTS033CMBits_t BIT;
} DTS033CM_t;

typedef union
{
    uint32 UINT32;
    DTS034CMBits_t BIT;
} DTS034CM_t;

typedef union
{
    uint32 UINT32;
    DTS035CMBits_t BIT;
} DTS035CM_t;

typedef union
{
    uint32 UINT32;
    DTS036CMBits_t BIT;
} DTS036CM_t;

typedef union
{
    uint32 UINT32;
    DTS037CMBits_t BIT;
} DTS037CM_t;

typedef union
{
    uint32 UINT32;
    DTS038CMBits_t BIT;
} DTS038CM_t;

typedef union
{
    uint32 UINT32;
    DTS039CMBits_t BIT;
} DTS039CM_t;

typedef union
{
    uint32 UINT32;
    DTS040CMBits_t BIT;
} DTS040CM_t;

typedef union
{
    uint32 UINT32;
    DTS041CMBits_t BIT;
} DTS041CM_t;

typedef union
{
    uint32 UINT32;
    DTS042CMBits_t BIT;
} DTS042CM_t;

typedef union
{
    uint32 UINT32;
    DTS043CMBits_t BIT;
} DTS043CM_t;

typedef union
{
    uint32 UINT32;
    DTS044CMBits_t BIT;
} DTS044CM_t;

typedef union
{
    uint32 UINT32;
    DTS045CMBits_t BIT;
} DTS045CM_t;

typedef union
{
    uint32 UINT32;
    DTS046CMBits_t BIT;
} DTS046CM_t;

typedef union
{
    uint32 UINT32;
    DTS047CMBits_t BIT;
} DTS047CM_t;

typedef union
{
    uint32 UINT32;
    DTS048CMBits_t BIT;
} DTS048CM_t;

typedef union
{
    uint32 UINT32;
    DTS049CMBits_t BIT;
} DTS049CM_t;

typedef union
{
    uint32 UINT32;
    DTS050CMBits_t BIT;
} DTS050CM_t;

typedef union
{
    uint32 UINT32;
    DTS051CMBits_t BIT;
} DTS051CM_t;

typedef union
{
    uint32 UINT32;
    DTS052CMBits_t BIT;
} DTS052CM_t;

typedef union
{
    uint32 UINT32;
    DTS053CMBits_t BIT;
} DTS053CM_t;

typedef union
{
    uint32 UINT32;
    DTS054CMBits_t BIT;
} DTS054CM_t;

typedef union
{
    uint32 UINT32;
    DTS055CMBits_t BIT;
} DTS055CM_t;

typedef union
{
    uint32 UINT32;
    DTS056CMBits_t BIT;
} DTS056CM_t;

typedef union
{
    uint32 UINT32;
    DTS057CMBits_t BIT;
} DTS057CM_t;

typedef union
{
    uint32 UINT32;
    DTS058CMBits_t BIT;
} DTS058CM_t;

typedef union
{
    uint32 UINT32;
    DTS059CMBits_t BIT;
} DTS059CM_t;

typedef union
{
    uint32 UINT32;
    DTS060CMBits_t BIT;
} DTS060CM_t;

typedef union
{
    uint32 UINT32;
    DTS061CMBits_t BIT;
} DTS061CM_t;

typedef union
{
    uint32 UINT32;
    DTS062CMBits_t BIT;
} DTS062CM_t;

typedef union
{
    uint32 UINT32;
    DTS063CMBits_t BIT;
} DTS063CM_t;

typedef union
{
    uint32 UINT32;
    DTS064CMBits_t BIT;
} DTS064CM_t;

typedef union
{
    uint32 UINT32;
    DTS065CMBits_t BIT;
} DTS065CM_t;

typedef union
{
    uint32 UINT32;
    DTS066CMBits_t BIT;
} DTS066CM_t;

typedef union
{
    uint32 UINT32;
    DTS067CMBits_t BIT;
} DTS067CM_t;

typedef union
{
    uint32 UINT32;
    DTS068CMBits_t BIT;
} DTS068CM_t;

typedef union
{
    uint32 UINT32;
    DTS069CMBits_t BIT;
} DTS069CM_t;

typedef union
{
    uint32 UINT32;
    DTS070CMBits_t BIT;
} DTS070CM_t;

typedef union
{
    uint32 UINT32;
    DTS071CMBits_t BIT;
} DTS071CM_t;

typedef union
{
    uint32 UINT32;
    DTS072CMBits_t BIT;
} DTS072CM_t;

typedef union
{
    uint32 UINT32;
    DTS073CMBits_t BIT;
} DTS073CM_t;

typedef union
{
    uint32 UINT32;
    DTS074CMBits_t BIT;
} DTS074CM_t;

typedef union
{
    uint32 UINT32;
    DTS075CMBits_t BIT;
} DTS075CM_t;

typedef union
{
    uint32 UINT32;
    DTS076CMBits_t BIT;
} DTS076CM_t;

typedef union
{
    uint32 UINT32;
    DTS077CMBits_t BIT;
} DTS077CM_t;

typedef union
{
    uint32 UINT32;
    DTS078CMBits_t BIT;
} DTS078CM_t;

typedef union
{
    uint32 UINT32;
    DTS079CMBits_t BIT;
} DTS079CM_t;

typedef union
{
    uint32 UINT32;
    DTS080CMBits_t BIT;
} DTS080CM_t;

typedef union
{
    uint32 UINT32;
    DTS081CMBits_t BIT;
} DTS081CM_t;

typedef union
{
    uint32 UINT32;
    DTS082CMBits_t BIT;
} DTS082CM_t;

typedef union
{
    uint32 UINT32;
    DTS083CMBits_t BIT;
} DTS083CM_t;

typedef union
{
    uint32 UINT32;
    DTS084CMBits_t BIT;
} DTS084CM_t;

typedef union
{
    uint32 UINT32;
    DTS085CMBits_t BIT;
} DTS085CM_t;

typedef union
{
    uint32 UINT32;
    DTS086CMBits_t BIT;
} DTS086CM_t;

typedef union
{
    uint32 UINT32;
    DTS087CMBits_t BIT;
} DTS087CM_t;

typedef union
{
    uint32 UINT32;
    DTS088CMBits_t BIT;
} DTS088CM_t;

typedef union
{
    uint32 UINT32;
    DTS089CMBits_t BIT;
} DTS089CM_t;

typedef union
{
    uint32 UINT32;
    DTS090CMBits_t BIT;
} DTS090CM_t;

typedef union
{
    uint32 UINT32;
    DTS091CMBits_t BIT;
} DTS091CM_t;

typedef union
{
    uint32 UINT32;
    DTS092CMBits_t BIT;
} DTS092CM_t;

typedef union
{
    uint32 UINT32;
    DTS093CMBits_t BIT;
} DTS093CM_t;

typedef union
{
    uint32 UINT32;
    DTS094CMBits_t BIT;
} DTS094CM_t;

typedef union
{
    uint32 UINT32;
    DTS095CMBits_t BIT;
} DTS095CM_t;

typedef union
{
    uint32 UINT32;
    DTS096CMBits_t BIT;
} DTS096CM_t;

typedef union
{
    uint32 UINT32;
    DTS097CMBits_t BIT;
} DTS097CM_t;

typedef union
{
    uint32 UINT32;
    DTS098CMBits_t BIT;
} DTS098CM_t;

typedef union
{
    uint32 UINT32;
    DTS099CMBits_t BIT;
} DTS099CM_t;

typedef union
{
    uint32 UINT32;
    DTS100CMBits_t BIT;
} DTS100CM_t;

typedef union
{
    uint32 UINT32;
    DTS101CMBits_t BIT;
} DTS101CM_t;

typedef union
{
    uint32 UINT32;
    DTS102CMBits_t BIT;
} DTS102CM_t;

typedef union
{
    uint32 UINT32;
    DTS103CMBits_t BIT;
} DTS103CM_t;

typedef union
{
    uint32 UINT32;
    DTS104CMBits_t BIT;
} DTS104CM_t;

typedef union
{
    uint32 UINT32;
    DTS105CMBits_t BIT;
} DTS105CM_t;

typedef union
{
    uint32 UINT32;
    DTS106CMBits_t BIT;
} DTS106CM_t;

typedef union
{
    uint32 UINT32;
    DTS107CMBits_t BIT;
} DTS107CM_t;

typedef union
{
    uint32 UINT32;
    DTS108CMBits_t BIT;
} DTS108CM_t;

typedef union
{
    uint32 UINT32;
    DTS109CMBits_t BIT;
} DTS109CM_t;

typedef union
{
    uint32 UINT32;
    DTS110CMBits_t BIT;
} DTS110CM_t;

typedef union
{
    uint32 UINT32;
    DTS111CMBits_t BIT;
} DTS111CM_t;

typedef union
{
    uint32 UINT32;
    DTS112CMBits_t BIT;
} DTS112CM_t;

typedef union
{
    uint32 UINT32;
    DTS113CMBits_t BIT;
} DTS113CM_t;

typedef union
{
    uint32 UINT32;
    DTS114CMBits_t BIT;
} DTS114CM_t;

typedef union
{
    uint32 UINT32;
    DTS115CMBits_t BIT;
} DTS115CM_t;

typedef union
{
    uint32 UINT32;
    DTS116CMBits_t BIT;
} DTS116CM_t;

typedef union
{
    uint32 UINT32;
    DTS117CMBits_t BIT;
} DTS117CM_t;

typedef union
{
    uint32 UINT32;
    DTS118CMBits_t BIT;
} DTS118CM_t;

typedef union
{
    uint32 UINT32;
    DTS119CMBits_t BIT;
} DTS119CM_t;

typedef union
{
    uint32 UINT32;
    DTS120CMBits_t BIT;
} DTS120CM_t;

typedef union
{
    uint32 UINT32;
    DTS121CMBits_t BIT;
} DTS121CM_t;

typedef union
{
    uint32 UINT32;
    DTS122CMBits_t BIT;
} DTS122CM_t;

typedef union
{
    uint32 UINT32;
    DTS123CMBits_t BIT;
} DTS123CM_t;

typedef union
{
    uint32 UINT32;
    DTS124CMBits_t BIT;
} DTS124CM_t;

typedef union
{
    uint32 UINT32;
    DTS125CMBits_t BIT;
} DTS125CM_t;

typedef union
{
    uint32 UINT32;
    DTS126CMBits_t BIT;
} DTS126CM_t;

typedef union
{
    uint32 UINT32;
    DTS127CMBits_t BIT;
} DTS127CM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(DM00CM_BASE, 0xFFFF8100, __READ_WRITE, DM00CM_t);
__IOREG(DM01CM_BASE, 0xFFFF8104, __READ_WRITE, DM01CM_t);
__IOREG(DM02CM_BASE, 0xFFFF8108, __READ_WRITE, DM02CM_t);
__IOREG(DM03CM_BASE, 0xFFFF810C, __READ_WRITE, DM03CM_t);
__IOREG(DM04CM_BASE, 0xFFFF8110, __READ_WRITE, DM04CM_t);
__IOREG(DM05CM_BASE, 0xFFFF8114, __READ_WRITE, DM05CM_t);
__IOREG(DM06CM_BASE, 0xFFFF8118, __READ_WRITE, DM06CM_t);
__IOREG(DM07CM_BASE, 0xFFFF811C, __READ_WRITE, DM07CM_t);
__IOREG(DM10CM_BASE, 0xFFFF8120, __READ_WRITE, DM10CM_t);
__IOREG(DM11CM_BASE, 0xFFFF8124, __READ_WRITE, DM11CM_t);
__IOREG(DM12CM_BASE, 0xFFFF8128, __READ_WRITE, DM12CM_t);
__IOREG(DM13CM_BASE, 0xFFFF812C, __READ_WRITE, DM13CM_t);
__IOREG(DM14CM_BASE, 0xFFFF8130, __READ_WRITE, DM14CM_t);
__IOREG(DM15CM_BASE, 0xFFFF8134, __READ_WRITE, DM15CM_t);
__IOREG(DM16CM_BASE, 0xFFFF8138, __READ_WRITE, DM16CM_t);
__IOREG(DM17CM_BASE, 0xFFFF813C, __READ_WRITE, DM17CM_t);
__IOREG(DTS000CM_BASE, 0xFFFF8200, __READ_WRITE, DTS000CM_t);
__IOREG(DTS001CM_BASE, 0xFFFF8204, __READ_WRITE, DTS001CM_t);
__IOREG(DTS002CM_BASE, 0xFFFF8208, __READ_WRITE, DTS002CM_t);
__IOREG(DTS003CM_BASE, 0xFFFF820C, __READ_WRITE, DTS003CM_t);
__IOREG(DTS004CM_BASE, 0xFFFF8210, __READ_WRITE, DTS004CM_t);
__IOREG(DTS005CM_BASE, 0xFFFF8214, __READ_WRITE, DTS005CM_t);
__IOREG(DTS006CM_BASE, 0xFFFF8218, __READ_WRITE, DTS006CM_t);
__IOREG(DTS007CM_BASE, 0xFFFF821C, __READ_WRITE, DTS007CM_t);
__IOREG(DTS008CM_BASE, 0xFFFF8220, __READ_WRITE, DTS008CM_t);
__IOREG(DTS009CM_BASE, 0xFFFF8224, __READ_WRITE, DTS009CM_t);
__IOREG(DTS010CM_BASE, 0xFFFF8228, __READ_WRITE, DTS010CM_t);
__IOREG(DTS011CM_BASE, 0xFFFF822C, __READ_WRITE, DTS011CM_t);
__IOREG(DTS012CM_BASE, 0xFFFF8230, __READ_WRITE, DTS012CM_t);
__IOREG(DTS013CM_BASE, 0xFFFF8234, __READ_WRITE, DTS013CM_t);
__IOREG(DTS014CM_BASE, 0xFFFF8238, __READ_WRITE, DTS014CM_t);
__IOREG(DTS015CM_BASE, 0xFFFF823C, __READ_WRITE, DTS015CM_t);
__IOREG(DTS016CM_BASE, 0xFFFF8240, __READ_WRITE, DTS016CM_t);
__IOREG(DTS017CM_BASE, 0xFFFF8244, __READ_WRITE, DTS017CM_t);
__IOREG(DTS018CM_BASE, 0xFFFF8248, __READ_WRITE, DTS018CM_t);
__IOREG(DTS019CM_BASE, 0xFFFF824C, __READ_WRITE, DTS019CM_t);
__IOREG(DTS020CM_BASE, 0xFFFF8250, __READ_WRITE, DTS020CM_t);
__IOREG(DTS021CM_BASE, 0xFFFF8254, __READ_WRITE, DTS021CM_t);
__IOREG(DTS022CM_BASE, 0xFFFF8258, __READ_WRITE, DTS022CM_t);
__IOREG(DTS023CM_BASE, 0xFFFF825C, __READ_WRITE, DTS023CM_t);
__IOREG(DTS024CM_BASE, 0xFFFF8260, __READ_WRITE, DTS024CM_t);
__IOREG(DTS025CM_BASE, 0xFFFF8264, __READ_WRITE, DTS025CM_t);
__IOREG(DTS026CM_BASE, 0xFFFF8268, __READ_WRITE, DTS026CM_t);
__IOREG(DTS027CM_BASE, 0xFFFF826C, __READ_WRITE, DTS027CM_t);
__IOREG(DTS028CM_BASE, 0xFFFF8270, __READ_WRITE, DTS028CM_t);
__IOREG(DTS029CM_BASE, 0xFFFF8274, __READ_WRITE, DTS029CM_t);
__IOREG(DTS030CM_BASE, 0xFFFF8278, __READ_WRITE, DTS030CM_t);
__IOREG(DTS031CM_BASE, 0xFFFF827C, __READ_WRITE, DTS031CM_t);
__IOREG(DTS032CM_BASE, 0xFFFF8280, __READ_WRITE, DTS032CM_t);
__IOREG(DTS033CM_BASE, 0xFFFF8284, __READ_WRITE, DTS033CM_t);
__IOREG(DTS034CM_BASE, 0xFFFF8288, __READ_WRITE, DTS034CM_t);
__IOREG(DTS035CM_BASE, 0xFFFF828C, __READ_WRITE, DTS035CM_t);
__IOREG(DTS036CM_BASE, 0xFFFF8290, __READ_WRITE, DTS036CM_t);
__IOREG(DTS037CM_BASE, 0xFFFF8294, __READ_WRITE, DTS037CM_t);
__IOREG(DTS038CM_BASE, 0xFFFF8298, __READ_WRITE, DTS038CM_t);
__IOREG(DTS039CM_BASE, 0xFFFF829C, __READ_WRITE, DTS039CM_t);
__IOREG(DTS040CM_BASE, 0xFFFF82A0, __READ_WRITE, DTS040CM_t);
__IOREG(DTS041CM_BASE, 0xFFFF82A4, __READ_WRITE, DTS041CM_t);
__IOREG(DTS042CM_BASE, 0xFFFF82A8, __READ_WRITE, DTS042CM_t);
__IOREG(DTS043CM_BASE, 0xFFFF82AC, __READ_WRITE, DTS043CM_t);
__IOREG(DTS044CM_BASE, 0xFFFF82B0, __READ_WRITE, DTS044CM_t);
__IOREG(DTS045CM_BASE, 0xFFFF82B4, __READ_WRITE, DTS045CM_t);
__IOREG(DTS046CM_BASE, 0xFFFF82B8, __READ_WRITE, DTS046CM_t);
__IOREG(DTS047CM_BASE, 0xFFFF82BC, __READ_WRITE, DTS047CM_t);
__IOREG(DTS048CM_BASE, 0xFFFF82C0, __READ_WRITE, DTS048CM_t);
__IOREG(DTS049CM_BASE, 0xFFFF82C4, __READ_WRITE, DTS049CM_t);
__IOREG(DTS050CM_BASE, 0xFFFF82C8, __READ_WRITE, DTS050CM_t);
__IOREG(DTS051CM_BASE, 0xFFFF82CC, __READ_WRITE, DTS051CM_t);
__IOREG(DTS052CM_BASE, 0xFFFF82D0, __READ_WRITE, DTS052CM_t);
__IOREG(DTS053CM_BASE, 0xFFFF82D4, __READ_WRITE, DTS053CM_t);
__IOREG(DTS054CM_BASE, 0xFFFF82D8, __READ_WRITE, DTS054CM_t);
__IOREG(DTS055CM_BASE, 0xFFFF82DC, __READ_WRITE, DTS055CM_t);
__IOREG(DTS056CM_BASE, 0xFFFF82E0, __READ_WRITE, DTS056CM_t);
__IOREG(DTS057CM_BASE, 0xFFFF82E4, __READ_WRITE, DTS057CM_t);
__IOREG(DTS058CM_BASE, 0xFFFF82E8, __READ_WRITE, DTS058CM_t);
__IOREG(DTS059CM_BASE, 0xFFFF82EC, __READ_WRITE, DTS059CM_t);
__IOREG(DTS060CM_BASE, 0xFFFF82F0, __READ_WRITE, DTS060CM_t);
__IOREG(DTS061CM_BASE, 0xFFFF82F4, __READ_WRITE, DTS061CM_t);
__IOREG(DTS062CM_BASE, 0xFFFF82F8, __READ_WRITE, DTS062CM_t);
__IOREG(DTS063CM_BASE, 0xFFFF82FC, __READ_WRITE, DTS063CM_t);
__IOREG(DTS064CM_BASE, 0xFFFF8300, __READ_WRITE, DTS064CM_t);
__IOREG(DTS065CM_BASE, 0xFFFF8304, __READ_WRITE, DTS065CM_t);
__IOREG(DTS066CM_BASE, 0xFFFF8308, __READ_WRITE, DTS066CM_t);
__IOREG(DTS067CM_BASE, 0xFFFF830C, __READ_WRITE, DTS067CM_t);
__IOREG(DTS068CM_BASE, 0xFFFF8310, __READ_WRITE, DTS068CM_t);
__IOREG(DTS069CM_BASE, 0xFFFF8314, __READ_WRITE, DTS069CM_t);
__IOREG(DTS070CM_BASE, 0xFFFF8318, __READ_WRITE, DTS070CM_t);
__IOREG(DTS071CM_BASE, 0xFFFF831C, __READ_WRITE, DTS071CM_t);
__IOREG(DTS072CM_BASE, 0xFFFF8320, __READ_WRITE, DTS072CM_t);
__IOREG(DTS073CM_BASE, 0xFFFF8324, __READ_WRITE, DTS073CM_t);
__IOREG(DTS074CM_BASE, 0xFFFF8328, __READ_WRITE, DTS074CM_t);
__IOREG(DTS075CM_BASE, 0xFFFF832C, __READ_WRITE, DTS075CM_t);
__IOREG(DTS076CM_BASE, 0xFFFF8330, __READ_WRITE, DTS076CM_t);
__IOREG(DTS077CM_BASE, 0xFFFF8334, __READ_WRITE, DTS077CM_t);
__IOREG(DTS078CM_BASE, 0xFFFF8338, __READ_WRITE, DTS078CM_t);
__IOREG(DTS079CM_BASE, 0xFFFF833C, __READ_WRITE, DTS079CM_t);
__IOREG(DTS080CM_BASE, 0xFFFF8340, __READ_WRITE, DTS080CM_t);
__IOREG(DTS081CM_BASE, 0xFFFF8344, __READ_WRITE, DTS081CM_t);
__IOREG(DTS082CM_BASE, 0xFFFF8348, __READ_WRITE, DTS082CM_t);
__IOREG(DTS083CM_BASE, 0xFFFF834C, __READ_WRITE, DTS083CM_t);
__IOREG(DTS084CM_BASE, 0xFFFF8350, __READ_WRITE, DTS084CM_t);
__IOREG(DTS085CM_BASE, 0xFFFF8354, __READ_WRITE, DTS085CM_t);
__IOREG(DTS086CM_BASE, 0xFFFF8358, __READ_WRITE, DTS086CM_t);
__IOREG(DTS087CM_BASE, 0xFFFF835C, __READ_WRITE, DTS087CM_t);
__IOREG(DTS088CM_BASE, 0xFFFF8360, __READ_WRITE, DTS088CM_t);
__IOREG(DTS089CM_BASE, 0xFFFF8364, __READ_WRITE, DTS089CM_t);
__IOREG(DTS090CM_BASE, 0xFFFF8368, __READ_WRITE, DTS090CM_t);
__IOREG(DTS091CM_BASE, 0xFFFF836C, __READ_WRITE, DTS091CM_t);
__IOREG(DTS092CM_BASE, 0xFFFF8370, __READ_WRITE, DTS092CM_t);
__IOREG(DTS093CM_BASE, 0xFFFF8374, __READ_WRITE, DTS093CM_t);
__IOREG(DTS094CM_BASE, 0xFFFF8378, __READ_WRITE, DTS094CM_t);
__IOREG(DTS095CM_BASE, 0xFFFF837C, __READ_WRITE, DTS095CM_t);
__IOREG(DTS096CM_BASE, 0xFFFF8380, __READ_WRITE, DTS096CM_t);
__IOREG(DTS097CM_BASE, 0xFFFF8384, __READ_WRITE, DTS097CM_t);
__IOREG(DTS098CM_BASE, 0xFFFF8388, __READ_WRITE, DTS098CM_t);
__IOREG(DTS099CM_BASE, 0xFFFF838C, __READ_WRITE, DTS099CM_t);
__IOREG(DTS100CM_BASE, 0xFFFF8390, __READ_WRITE, DTS100CM_t);
__IOREG(DTS101CM_BASE, 0xFFFF8394, __READ_WRITE, DTS101CM_t);
__IOREG(DTS102CM_BASE, 0xFFFF8398, __READ_WRITE, DTS102CM_t);
__IOREG(DTS103CM_BASE, 0xFFFF839C, __READ_WRITE, DTS103CM_t);
__IOREG(DTS104CM_BASE, 0xFFFF83A0, __READ_WRITE, DTS104CM_t);
__IOREG(DTS105CM_BASE, 0xFFFF83A4, __READ_WRITE, DTS105CM_t);
__IOREG(DTS106CM_BASE, 0xFFFF83A8, __READ_WRITE, DTS106CM_t);
__IOREG(DTS107CM_BASE, 0xFFFF83AC, __READ_WRITE, DTS107CM_t);
__IOREG(DTS108CM_BASE, 0xFFFF83B0, __READ_WRITE, DTS108CM_t);
__IOREG(DTS109CM_BASE, 0xFFFF83B4, __READ_WRITE, DTS109CM_t);
__IOREG(DTS110CM_BASE, 0xFFFF83B8, __READ_WRITE, DTS110CM_t);
__IOREG(DTS111CM_BASE, 0xFFFF83BC, __READ_WRITE, DTS111CM_t);
__IOREG(DTS112CM_BASE, 0xFFFF83C0, __READ_WRITE, DTS112CM_t);
__IOREG(DTS113CM_BASE, 0xFFFF83C4, __READ_WRITE, DTS113CM_t);
__IOREG(DTS114CM_BASE, 0xFFFF83C8, __READ_WRITE, DTS114CM_t);
__IOREG(DTS115CM_BASE, 0xFFFF83CC, __READ_WRITE, DTS115CM_t);
__IOREG(DTS116CM_BASE, 0xFFFF83D0, __READ_WRITE, DTS116CM_t);
__IOREG(DTS117CM_BASE, 0xFFFF83D4, __READ_WRITE, DTS117CM_t);
__IOREG(DTS118CM_BASE, 0xFFFF83D8, __READ_WRITE, DTS118CM_t);
__IOREG(DTS119CM_BASE, 0xFFFF83DC, __READ_WRITE, DTS119CM_t);
__IOREG(DTS120CM_BASE, 0xFFFF83E0, __READ_WRITE, DTS120CM_t);
__IOREG(DTS121CM_BASE, 0xFFFF83E4, __READ_WRITE, DTS121CM_t);
__IOREG(DTS122CM_BASE, 0xFFFF83E8, __READ_WRITE, DTS122CM_t);
__IOREG(DTS123CM_BASE, 0xFFFF83EC, __READ_WRITE, DTS123CM_t);
__IOREG(DTS124CM_BASE, 0xFFFF83F0, __READ_WRITE, DTS124CM_t);
__IOREG(DTS125CM_BASE, 0xFFFF83F4, __READ_WRITE, DTS125CM_t);
__IOREG(DTS126CM_BASE, 0xFFFF83F8, __READ_WRITE, DTS126CM_t);
__IOREG(DTS127CM_BASE, 0xFFFF83FC, __READ_WRITE, DTS127CM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define DM00CM DM00CM_BASE.UINT32
#define DM00CM_UM DM00CM_BASE.BIT._UM
#define DM00CM_SPID0 DM00CM_BASE.BIT._SPID0
#define DM00CM_SPID1 DM00CM_BASE.BIT._SPID1
#define DM00CM_SPID2 DM00CM_BASE.BIT._SPID2
#define DM00CM_SPID3 DM00CM_BASE.BIT._SPID3
#define DM00CM_SPID4 DM00CM_BASE.BIT._SPID4
#define DM00CM_PEID0 DM00CM_BASE.BIT._PEID0
#define DM00CM_PEID1 DM00CM_BASE.BIT._PEID1
#define DM00CM_PEID2 DM00CM_BASE.BIT._PEID2
#define DM01CM DM01CM_BASE.UINT32
#define DM01CM_UM DM01CM_BASE.BIT._UM
#define DM01CM_SPID0 DM01CM_BASE.BIT._SPID0
#define DM01CM_SPID1 DM01CM_BASE.BIT._SPID1
#define DM01CM_SPID2 DM01CM_BASE.BIT._SPID2
#define DM01CM_SPID3 DM01CM_BASE.BIT._SPID3
#define DM01CM_SPID4 DM01CM_BASE.BIT._SPID4
#define DM01CM_PEID0 DM01CM_BASE.BIT._PEID0
#define DM01CM_PEID1 DM01CM_BASE.BIT._PEID1
#define DM01CM_PEID2 DM01CM_BASE.BIT._PEID2
#define DM02CM DM02CM_BASE.UINT32
#define DM02CM_UM DM02CM_BASE.BIT._UM
#define DM02CM_SPID0 DM02CM_BASE.BIT._SPID0
#define DM02CM_SPID1 DM02CM_BASE.BIT._SPID1
#define DM02CM_SPID2 DM02CM_BASE.BIT._SPID2
#define DM02CM_SPID3 DM02CM_BASE.BIT._SPID3
#define DM02CM_SPID4 DM02CM_BASE.BIT._SPID4
#define DM02CM_PEID0 DM02CM_BASE.BIT._PEID0
#define DM02CM_PEID1 DM02CM_BASE.BIT._PEID1
#define DM02CM_PEID2 DM02CM_BASE.BIT._PEID2
#define DM03CM DM03CM_BASE.UINT32
#define DM03CM_UM DM03CM_BASE.BIT._UM
#define DM03CM_SPID0 DM03CM_BASE.BIT._SPID0
#define DM03CM_SPID1 DM03CM_BASE.BIT._SPID1
#define DM03CM_SPID2 DM03CM_BASE.BIT._SPID2
#define DM03CM_SPID3 DM03CM_BASE.BIT._SPID3
#define DM03CM_SPID4 DM03CM_BASE.BIT._SPID4
#define DM03CM_PEID0 DM03CM_BASE.BIT._PEID0
#define DM03CM_PEID1 DM03CM_BASE.BIT._PEID1
#define DM03CM_PEID2 DM03CM_BASE.BIT._PEID2
#define DM04CM DM04CM_BASE.UINT32
#define DM04CM_UM DM04CM_BASE.BIT._UM
#define DM04CM_SPID0 DM04CM_BASE.BIT._SPID0
#define DM04CM_SPID1 DM04CM_BASE.BIT._SPID1
#define DM04CM_SPID2 DM04CM_BASE.BIT._SPID2
#define DM04CM_SPID3 DM04CM_BASE.BIT._SPID3
#define DM04CM_SPID4 DM04CM_BASE.BIT._SPID4
#define DM04CM_PEID0 DM04CM_BASE.BIT._PEID0
#define DM04CM_PEID1 DM04CM_BASE.BIT._PEID1
#define DM04CM_PEID2 DM04CM_BASE.BIT._PEID2
#define DM05CM DM05CM_BASE.UINT32
#define DM05CM_UM DM05CM_BASE.BIT._UM
#define DM05CM_SPID0 DM05CM_BASE.BIT._SPID0
#define DM05CM_SPID1 DM05CM_BASE.BIT._SPID1
#define DM05CM_SPID2 DM05CM_BASE.BIT._SPID2
#define DM05CM_SPID3 DM05CM_BASE.BIT._SPID3
#define DM05CM_SPID4 DM05CM_BASE.BIT._SPID4
#define DM05CM_PEID0 DM05CM_BASE.BIT._PEID0
#define DM05CM_PEID1 DM05CM_BASE.BIT._PEID1
#define DM05CM_PEID2 DM05CM_BASE.BIT._PEID2
#define DM06CM DM06CM_BASE.UINT32
#define DM06CM_UM DM06CM_BASE.BIT._UM
#define DM06CM_SPID0 DM06CM_BASE.BIT._SPID0
#define DM06CM_SPID1 DM06CM_BASE.BIT._SPID1
#define DM06CM_SPID2 DM06CM_BASE.BIT._SPID2
#define DM06CM_SPID3 DM06CM_BASE.BIT._SPID3
#define DM06CM_SPID4 DM06CM_BASE.BIT._SPID4
#define DM06CM_PEID0 DM06CM_BASE.BIT._PEID0
#define DM06CM_PEID1 DM06CM_BASE.BIT._PEID1
#define DM06CM_PEID2 DM06CM_BASE.BIT._PEID2
#define DM07CM DM07CM_BASE.UINT32
#define DM07CM_UM DM07CM_BASE.BIT._UM
#define DM07CM_SPID0 DM07CM_BASE.BIT._SPID0
#define DM07CM_SPID1 DM07CM_BASE.BIT._SPID1
#define DM07CM_SPID2 DM07CM_BASE.BIT._SPID2
#define DM07CM_SPID3 DM07CM_BASE.BIT._SPID3
#define DM07CM_SPID4 DM07CM_BASE.BIT._SPID4
#define DM07CM_PEID0 DM07CM_BASE.BIT._PEID0
#define DM07CM_PEID1 DM07CM_BASE.BIT._PEID1
#define DM07CM_PEID2 DM07CM_BASE.BIT._PEID2
#define DM10CM DM10CM_BASE.UINT32
#define DM10CM_UM DM10CM_BASE.BIT._UM
#define DM10CM_SPID0 DM10CM_BASE.BIT._SPID0
#define DM10CM_SPID1 DM10CM_BASE.BIT._SPID1
#define DM10CM_SPID2 DM10CM_BASE.BIT._SPID2
#define DM10CM_SPID3 DM10CM_BASE.BIT._SPID3
#define DM10CM_SPID4 DM10CM_BASE.BIT._SPID4
#define DM10CM_PEID0 DM10CM_BASE.BIT._PEID0
#define DM10CM_PEID1 DM10CM_BASE.BIT._PEID1
#define DM10CM_PEID2 DM10CM_BASE.BIT._PEID2
#define DM11CM DM11CM_BASE.UINT32
#define DM11CM_UM DM11CM_BASE.BIT._UM
#define DM11CM_SPID0 DM11CM_BASE.BIT._SPID0
#define DM11CM_SPID1 DM11CM_BASE.BIT._SPID1
#define DM11CM_SPID2 DM11CM_BASE.BIT._SPID2
#define DM11CM_SPID3 DM11CM_BASE.BIT._SPID3
#define DM11CM_SPID4 DM11CM_BASE.BIT._SPID4
#define DM11CM_PEID0 DM11CM_BASE.BIT._PEID0
#define DM11CM_PEID1 DM11CM_BASE.BIT._PEID1
#define DM11CM_PEID2 DM11CM_BASE.BIT._PEID2
#define DM12CM DM12CM_BASE.UINT32
#define DM12CM_UM DM12CM_BASE.BIT._UM
#define DM12CM_SPID0 DM12CM_BASE.BIT._SPID0
#define DM12CM_SPID1 DM12CM_BASE.BIT._SPID1
#define DM12CM_SPID2 DM12CM_BASE.BIT._SPID2
#define DM12CM_SPID3 DM12CM_BASE.BIT._SPID3
#define DM12CM_SPID4 DM12CM_BASE.BIT._SPID4
#define DM12CM_PEID0 DM12CM_BASE.BIT._PEID0
#define DM12CM_PEID1 DM12CM_BASE.BIT._PEID1
#define DM12CM_PEID2 DM12CM_BASE.BIT._PEID2
#define DM13CM DM13CM_BASE.UINT32
#define DM13CM_UM DM13CM_BASE.BIT._UM
#define DM13CM_SPID0 DM13CM_BASE.BIT._SPID0
#define DM13CM_SPID1 DM13CM_BASE.BIT._SPID1
#define DM13CM_SPID2 DM13CM_BASE.BIT._SPID2
#define DM13CM_SPID3 DM13CM_BASE.BIT._SPID3
#define DM13CM_SPID4 DM13CM_BASE.BIT._SPID4
#define DM13CM_PEID0 DM13CM_BASE.BIT._PEID0
#define DM13CM_PEID1 DM13CM_BASE.BIT._PEID1
#define DM13CM_PEID2 DM13CM_BASE.BIT._PEID2
#define DM14CM DM14CM_BASE.UINT32
#define DM14CM_UM DM14CM_BASE.BIT._UM
#define DM14CM_SPID0 DM14CM_BASE.BIT._SPID0
#define DM14CM_SPID1 DM14CM_BASE.BIT._SPID1
#define DM14CM_SPID2 DM14CM_BASE.BIT._SPID2
#define DM14CM_SPID3 DM14CM_BASE.BIT._SPID3
#define DM14CM_SPID4 DM14CM_BASE.BIT._SPID4
#define DM14CM_PEID0 DM14CM_BASE.BIT._PEID0
#define DM14CM_PEID1 DM14CM_BASE.BIT._PEID1
#define DM14CM_PEID2 DM14CM_BASE.BIT._PEID2
#define DM15CM DM15CM_BASE.UINT32
#define DM15CM_UM DM15CM_BASE.BIT._UM
#define DM15CM_SPID0 DM15CM_BASE.BIT._SPID0
#define DM15CM_SPID1 DM15CM_BASE.BIT._SPID1
#define DM15CM_SPID2 DM15CM_BASE.BIT._SPID2
#define DM15CM_SPID3 DM15CM_BASE.BIT._SPID3
#define DM15CM_SPID4 DM15CM_BASE.BIT._SPID4
#define DM15CM_PEID0 DM15CM_BASE.BIT._PEID0
#define DM15CM_PEID1 DM15CM_BASE.BIT._PEID1
#define DM15CM_PEID2 DM15CM_BASE.BIT._PEID2
#define DM16CM DM16CM_BASE.UINT32
#define DM16CM_UM DM16CM_BASE.BIT._UM
#define DM16CM_SPID0 DM16CM_BASE.BIT._SPID0
#define DM16CM_SPID1 DM16CM_BASE.BIT._SPID1
#define DM16CM_SPID2 DM16CM_BASE.BIT._SPID2
#define DM16CM_SPID3 DM16CM_BASE.BIT._SPID3
#define DM16CM_SPID4 DM16CM_BASE.BIT._SPID4
#define DM16CM_PEID0 DM16CM_BASE.BIT._PEID0
#define DM16CM_PEID1 DM16CM_BASE.BIT._PEID1
#define DM16CM_PEID2 DM16CM_BASE.BIT._PEID2
#define DM17CM DM17CM_BASE.UINT32
#define DM17CM_UM DM17CM_BASE.BIT._UM
#define DM17CM_SPID0 DM17CM_BASE.BIT._SPID0
#define DM17CM_SPID1 DM17CM_BASE.BIT._SPID1
#define DM17CM_SPID2 DM17CM_BASE.BIT._SPID2
#define DM17CM_SPID3 DM17CM_BASE.BIT._SPID3
#define DM17CM_SPID4 DM17CM_BASE.BIT._SPID4
#define DM17CM_PEID0 DM17CM_BASE.BIT._PEID0
#define DM17CM_PEID1 DM17CM_BASE.BIT._PEID1
#define DM17CM_PEID2 DM17CM_BASE.BIT._PEID2
#define DTS000CM DTS000CM_BASE.UINT32
#define DTS000CM_CMC0 DTS000CM_BASE.BIT._CMC0
#define DTS000CM_CMC1 DTS000CM_BASE.BIT._CMC1
#define DTS000CM_CMC2 DTS000CM_BASE.BIT._CMC2
#define DTS000CM_CMC3 DTS000CM_BASE.BIT._CMC3
#define DTS000CM_CMC4 DTS000CM_BASE.BIT._CMC4
#define DTS000CM_CMC5 DTS000CM_BASE.BIT._CMC5
#define DTS000CM_CMC6 DTS000CM_BASE.BIT._CMC6
#define DTS000CM_CMC7 DTS000CM_BASE.BIT._CMC7
#define DTS000CM_CMC8 DTS000CM_BASE.BIT._CMC8
#define DTS000CM_CMC9 DTS000CM_BASE.BIT._CMC9
#define DTS000CM_CMC10 DTS000CM_BASE.BIT._CMC10
#define DTS000CM_CMC11 DTS000CM_BASE.BIT._CMC11
#define DTS000CM_CMC12 DTS000CM_BASE.BIT._CMC12
#define DTS000CM_CMC13 DTS000CM_BASE.BIT._CMC13
#define DTS000CM_CMC14 DTS000CM_BASE.BIT._CMC14
#define DTS000CM_CMC15 DTS000CM_BASE.BIT._CMC15
#define DTS000CM_UM DTS000CM_BASE.BIT._UM
#define DTS000CM_SPID0 DTS000CM_BASE.BIT._SPID0
#define DTS000CM_SPID1 DTS000CM_BASE.BIT._SPID1
#define DTS000CM_SPID2 DTS000CM_BASE.BIT._SPID2
#define DTS000CM_SPID3 DTS000CM_BASE.BIT._SPID3
#define DTS000CM_SPID4 DTS000CM_BASE.BIT._SPID4
#define DTS000CM_PEID0 DTS000CM_BASE.BIT._PEID0
#define DTS000CM_PEID1 DTS000CM_BASE.BIT._PEID1
#define DTS000CM_PEID2 DTS000CM_BASE.BIT._PEID2
#define DTS001CM DTS001CM_BASE.UINT32
#define DTS001CM_CMC0 DTS001CM_BASE.BIT._CMC0
#define DTS001CM_CMC1 DTS001CM_BASE.BIT._CMC1
#define DTS001CM_CMC2 DTS001CM_BASE.BIT._CMC2
#define DTS001CM_CMC3 DTS001CM_BASE.BIT._CMC3
#define DTS001CM_CMC4 DTS001CM_BASE.BIT._CMC4
#define DTS001CM_CMC5 DTS001CM_BASE.BIT._CMC5
#define DTS001CM_CMC6 DTS001CM_BASE.BIT._CMC6
#define DTS001CM_CMC7 DTS001CM_BASE.BIT._CMC7
#define DTS001CM_CMC8 DTS001CM_BASE.BIT._CMC8
#define DTS001CM_CMC9 DTS001CM_BASE.BIT._CMC9
#define DTS001CM_CMC10 DTS001CM_BASE.BIT._CMC10
#define DTS001CM_CMC11 DTS001CM_BASE.BIT._CMC11
#define DTS001CM_CMC12 DTS001CM_BASE.BIT._CMC12
#define DTS001CM_CMC13 DTS001CM_BASE.BIT._CMC13
#define DTS001CM_CMC14 DTS001CM_BASE.BIT._CMC14
#define DTS001CM_CMC15 DTS001CM_BASE.BIT._CMC15
#define DTS001CM_UM DTS001CM_BASE.BIT._UM
#define DTS001CM_SPID0 DTS001CM_BASE.BIT._SPID0
#define DTS001CM_SPID1 DTS001CM_BASE.BIT._SPID1
#define DTS001CM_SPID2 DTS001CM_BASE.BIT._SPID2
#define DTS001CM_SPID3 DTS001CM_BASE.BIT._SPID3
#define DTS001CM_SPID4 DTS001CM_BASE.BIT._SPID4
#define DTS001CM_PEID0 DTS001CM_BASE.BIT._PEID0
#define DTS001CM_PEID1 DTS001CM_BASE.BIT._PEID1
#define DTS001CM_PEID2 DTS001CM_BASE.BIT._PEID2
#define DTS002CM DTS002CM_BASE.UINT32
#define DTS002CM_CMC0 DTS002CM_BASE.BIT._CMC0
#define DTS002CM_CMC1 DTS002CM_BASE.BIT._CMC1
#define DTS002CM_CMC2 DTS002CM_BASE.BIT._CMC2
#define DTS002CM_CMC3 DTS002CM_BASE.BIT._CMC3
#define DTS002CM_CMC4 DTS002CM_BASE.BIT._CMC4
#define DTS002CM_CMC5 DTS002CM_BASE.BIT._CMC5
#define DTS002CM_CMC6 DTS002CM_BASE.BIT._CMC6
#define DTS002CM_CMC7 DTS002CM_BASE.BIT._CMC7
#define DTS002CM_CMC8 DTS002CM_BASE.BIT._CMC8
#define DTS002CM_CMC9 DTS002CM_BASE.BIT._CMC9
#define DTS002CM_CMC10 DTS002CM_BASE.BIT._CMC10
#define DTS002CM_CMC11 DTS002CM_BASE.BIT._CMC11
#define DTS002CM_CMC12 DTS002CM_BASE.BIT._CMC12
#define DTS002CM_CMC13 DTS002CM_BASE.BIT._CMC13
#define DTS002CM_CMC14 DTS002CM_BASE.BIT._CMC14
#define DTS002CM_CMC15 DTS002CM_BASE.BIT._CMC15
#define DTS002CM_UM DTS002CM_BASE.BIT._UM
#define DTS002CM_SPID0 DTS002CM_BASE.BIT._SPID0
#define DTS002CM_SPID1 DTS002CM_BASE.BIT._SPID1
#define DTS002CM_SPID2 DTS002CM_BASE.BIT._SPID2
#define DTS002CM_SPID3 DTS002CM_BASE.BIT._SPID3
#define DTS002CM_SPID4 DTS002CM_BASE.BIT._SPID4
#define DTS002CM_PEID0 DTS002CM_BASE.BIT._PEID0
#define DTS002CM_PEID1 DTS002CM_BASE.BIT._PEID1
#define DTS002CM_PEID2 DTS002CM_BASE.BIT._PEID2
#define DTS003CM DTS003CM_BASE.UINT32
#define DTS003CM_CMC0 DTS003CM_BASE.BIT._CMC0
#define DTS003CM_CMC1 DTS003CM_BASE.BIT._CMC1
#define DTS003CM_CMC2 DTS003CM_BASE.BIT._CMC2
#define DTS003CM_CMC3 DTS003CM_BASE.BIT._CMC3
#define DTS003CM_CMC4 DTS003CM_BASE.BIT._CMC4
#define DTS003CM_CMC5 DTS003CM_BASE.BIT._CMC5
#define DTS003CM_CMC6 DTS003CM_BASE.BIT._CMC6
#define DTS003CM_CMC7 DTS003CM_BASE.BIT._CMC7
#define DTS003CM_CMC8 DTS003CM_BASE.BIT._CMC8
#define DTS003CM_CMC9 DTS003CM_BASE.BIT._CMC9
#define DTS003CM_CMC10 DTS003CM_BASE.BIT._CMC10
#define DTS003CM_CMC11 DTS003CM_BASE.BIT._CMC11
#define DTS003CM_CMC12 DTS003CM_BASE.BIT._CMC12
#define DTS003CM_CMC13 DTS003CM_BASE.BIT._CMC13
#define DTS003CM_CMC14 DTS003CM_BASE.BIT._CMC14
#define DTS003CM_CMC15 DTS003CM_BASE.BIT._CMC15
#define DTS003CM_UM DTS003CM_BASE.BIT._UM
#define DTS003CM_SPID0 DTS003CM_BASE.BIT._SPID0
#define DTS003CM_SPID1 DTS003CM_BASE.BIT._SPID1
#define DTS003CM_SPID2 DTS003CM_BASE.BIT._SPID2
#define DTS003CM_SPID3 DTS003CM_BASE.BIT._SPID3
#define DTS003CM_SPID4 DTS003CM_BASE.BIT._SPID4
#define DTS003CM_PEID0 DTS003CM_BASE.BIT._PEID0
#define DTS003CM_PEID1 DTS003CM_BASE.BIT._PEID1
#define DTS003CM_PEID2 DTS003CM_BASE.BIT._PEID2
#define DTS004CM DTS004CM_BASE.UINT32
#define DTS004CM_CMC0 DTS004CM_BASE.BIT._CMC0
#define DTS004CM_CMC1 DTS004CM_BASE.BIT._CMC1
#define DTS004CM_CMC2 DTS004CM_BASE.BIT._CMC2
#define DTS004CM_CMC3 DTS004CM_BASE.BIT._CMC3
#define DTS004CM_CMC4 DTS004CM_BASE.BIT._CMC4
#define DTS004CM_CMC5 DTS004CM_BASE.BIT._CMC5
#define DTS004CM_CMC6 DTS004CM_BASE.BIT._CMC6
#define DTS004CM_CMC7 DTS004CM_BASE.BIT._CMC7
#define DTS004CM_CMC8 DTS004CM_BASE.BIT._CMC8
#define DTS004CM_CMC9 DTS004CM_BASE.BIT._CMC9
#define DTS004CM_CMC10 DTS004CM_BASE.BIT._CMC10
#define DTS004CM_CMC11 DTS004CM_BASE.BIT._CMC11
#define DTS004CM_CMC12 DTS004CM_BASE.BIT._CMC12
#define DTS004CM_CMC13 DTS004CM_BASE.BIT._CMC13
#define DTS004CM_CMC14 DTS004CM_BASE.BIT._CMC14
#define DTS004CM_CMC15 DTS004CM_BASE.BIT._CMC15
#define DTS004CM_UM DTS004CM_BASE.BIT._UM
#define DTS004CM_SPID0 DTS004CM_BASE.BIT._SPID0
#define DTS004CM_SPID1 DTS004CM_BASE.BIT._SPID1
#define DTS004CM_SPID2 DTS004CM_BASE.BIT._SPID2
#define DTS004CM_SPID3 DTS004CM_BASE.BIT._SPID3
#define DTS004CM_SPID4 DTS004CM_BASE.BIT._SPID4
#define DTS004CM_PEID0 DTS004CM_BASE.BIT._PEID0
#define DTS004CM_PEID1 DTS004CM_BASE.BIT._PEID1
#define DTS004CM_PEID2 DTS004CM_BASE.BIT._PEID2
#define DTS005CM DTS005CM_BASE.UINT32
#define DTS005CM_CMC0 DTS005CM_BASE.BIT._CMC0
#define DTS005CM_CMC1 DTS005CM_BASE.BIT._CMC1
#define DTS005CM_CMC2 DTS005CM_BASE.BIT._CMC2
#define DTS005CM_CMC3 DTS005CM_BASE.BIT._CMC3
#define DTS005CM_CMC4 DTS005CM_BASE.BIT._CMC4
#define DTS005CM_CMC5 DTS005CM_BASE.BIT._CMC5
#define DTS005CM_CMC6 DTS005CM_BASE.BIT._CMC6
#define DTS005CM_CMC7 DTS005CM_BASE.BIT._CMC7
#define DTS005CM_CMC8 DTS005CM_BASE.BIT._CMC8
#define DTS005CM_CMC9 DTS005CM_BASE.BIT._CMC9
#define DTS005CM_CMC10 DTS005CM_BASE.BIT._CMC10
#define DTS005CM_CMC11 DTS005CM_BASE.BIT._CMC11
#define DTS005CM_CMC12 DTS005CM_BASE.BIT._CMC12
#define DTS005CM_CMC13 DTS005CM_BASE.BIT._CMC13
#define DTS005CM_CMC14 DTS005CM_BASE.BIT._CMC14
#define DTS005CM_CMC15 DTS005CM_BASE.BIT._CMC15
#define DTS005CM_UM DTS005CM_BASE.BIT._UM
#define DTS005CM_SPID0 DTS005CM_BASE.BIT._SPID0
#define DTS005CM_SPID1 DTS005CM_BASE.BIT._SPID1
#define DTS005CM_SPID2 DTS005CM_BASE.BIT._SPID2
#define DTS005CM_SPID3 DTS005CM_BASE.BIT._SPID3
#define DTS005CM_SPID4 DTS005CM_BASE.BIT._SPID4
#define DTS005CM_PEID0 DTS005CM_BASE.BIT._PEID0
#define DTS005CM_PEID1 DTS005CM_BASE.BIT._PEID1
#define DTS005CM_PEID2 DTS005CM_BASE.BIT._PEID2
#define DTS006CM DTS006CM_BASE.UINT32
#define DTS006CM_CMC0 DTS006CM_BASE.BIT._CMC0
#define DTS006CM_CMC1 DTS006CM_BASE.BIT._CMC1
#define DTS006CM_CMC2 DTS006CM_BASE.BIT._CMC2
#define DTS006CM_CMC3 DTS006CM_BASE.BIT._CMC3
#define DTS006CM_CMC4 DTS006CM_BASE.BIT._CMC4
#define DTS006CM_CMC5 DTS006CM_BASE.BIT._CMC5
#define DTS006CM_CMC6 DTS006CM_BASE.BIT._CMC6
#define DTS006CM_CMC7 DTS006CM_BASE.BIT._CMC7
#define DTS006CM_CMC8 DTS006CM_BASE.BIT._CMC8
#define DTS006CM_CMC9 DTS006CM_BASE.BIT._CMC9
#define DTS006CM_CMC10 DTS006CM_BASE.BIT._CMC10
#define DTS006CM_CMC11 DTS006CM_BASE.BIT._CMC11
#define DTS006CM_CMC12 DTS006CM_BASE.BIT._CMC12
#define DTS006CM_CMC13 DTS006CM_BASE.BIT._CMC13
#define DTS006CM_CMC14 DTS006CM_BASE.BIT._CMC14
#define DTS006CM_CMC15 DTS006CM_BASE.BIT._CMC15
#define DTS006CM_UM DTS006CM_BASE.BIT._UM
#define DTS006CM_SPID0 DTS006CM_BASE.BIT._SPID0
#define DTS006CM_SPID1 DTS006CM_BASE.BIT._SPID1
#define DTS006CM_SPID2 DTS006CM_BASE.BIT._SPID2
#define DTS006CM_SPID3 DTS006CM_BASE.BIT._SPID3
#define DTS006CM_SPID4 DTS006CM_BASE.BIT._SPID4
#define DTS006CM_PEID0 DTS006CM_BASE.BIT._PEID0
#define DTS006CM_PEID1 DTS006CM_BASE.BIT._PEID1
#define DTS006CM_PEID2 DTS006CM_BASE.BIT._PEID2
#define DTS007CM DTS007CM_BASE.UINT32
#define DTS007CM_CMC0 DTS007CM_BASE.BIT._CMC0
#define DTS007CM_CMC1 DTS007CM_BASE.BIT._CMC1
#define DTS007CM_CMC2 DTS007CM_BASE.BIT._CMC2
#define DTS007CM_CMC3 DTS007CM_BASE.BIT._CMC3
#define DTS007CM_CMC4 DTS007CM_BASE.BIT._CMC4
#define DTS007CM_CMC5 DTS007CM_BASE.BIT._CMC5
#define DTS007CM_CMC6 DTS007CM_BASE.BIT._CMC6
#define DTS007CM_CMC7 DTS007CM_BASE.BIT._CMC7
#define DTS007CM_CMC8 DTS007CM_BASE.BIT._CMC8
#define DTS007CM_CMC9 DTS007CM_BASE.BIT._CMC9
#define DTS007CM_CMC10 DTS007CM_BASE.BIT._CMC10
#define DTS007CM_CMC11 DTS007CM_BASE.BIT._CMC11
#define DTS007CM_CMC12 DTS007CM_BASE.BIT._CMC12
#define DTS007CM_CMC13 DTS007CM_BASE.BIT._CMC13
#define DTS007CM_CMC14 DTS007CM_BASE.BIT._CMC14
#define DTS007CM_CMC15 DTS007CM_BASE.BIT._CMC15
#define DTS007CM_UM DTS007CM_BASE.BIT._UM
#define DTS007CM_SPID0 DTS007CM_BASE.BIT._SPID0
#define DTS007CM_SPID1 DTS007CM_BASE.BIT._SPID1
#define DTS007CM_SPID2 DTS007CM_BASE.BIT._SPID2
#define DTS007CM_SPID3 DTS007CM_BASE.BIT._SPID3
#define DTS007CM_SPID4 DTS007CM_BASE.BIT._SPID4
#define DTS007CM_PEID0 DTS007CM_BASE.BIT._PEID0
#define DTS007CM_PEID1 DTS007CM_BASE.BIT._PEID1
#define DTS007CM_PEID2 DTS007CM_BASE.BIT._PEID2
#define DTS008CM DTS008CM_BASE.UINT32
#define DTS008CM_CMC0 DTS008CM_BASE.BIT._CMC0
#define DTS008CM_CMC1 DTS008CM_BASE.BIT._CMC1
#define DTS008CM_CMC2 DTS008CM_BASE.BIT._CMC2
#define DTS008CM_CMC3 DTS008CM_BASE.BIT._CMC3
#define DTS008CM_CMC4 DTS008CM_BASE.BIT._CMC4
#define DTS008CM_CMC5 DTS008CM_BASE.BIT._CMC5
#define DTS008CM_CMC6 DTS008CM_BASE.BIT._CMC6
#define DTS008CM_CMC7 DTS008CM_BASE.BIT._CMC7
#define DTS008CM_CMC8 DTS008CM_BASE.BIT._CMC8
#define DTS008CM_CMC9 DTS008CM_BASE.BIT._CMC9
#define DTS008CM_CMC10 DTS008CM_BASE.BIT._CMC10
#define DTS008CM_CMC11 DTS008CM_BASE.BIT._CMC11
#define DTS008CM_CMC12 DTS008CM_BASE.BIT._CMC12
#define DTS008CM_CMC13 DTS008CM_BASE.BIT._CMC13
#define DTS008CM_CMC14 DTS008CM_BASE.BIT._CMC14
#define DTS008CM_CMC15 DTS008CM_BASE.BIT._CMC15
#define DTS008CM_UM DTS008CM_BASE.BIT._UM
#define DTS008CM_SPID0 DTS008CM_BASE.BIT._SPID0
#define DTS008CM_SPID1 DTS008CM_BASE.BIT._SPID1
#define DTS008CM_SPID2 DTS008CM_BASE.BIT._SPID2
#define DTS008CM_SPID3 DTS008CM_BASE.BIT._SPID3
#define DTS008CM_SPID4 DTS008CM_BASE.BIT._SPID4
#define DTS008CM_PEID0 DTS008CM_BASE.BIT._PEID0
#define DTS008CM_PEID1 DTS008CM_BASE.BIT._PEID1
#define DTS008CM_PEID2 DTS008CM_BASE.BIT._PEID2
#define DTS009CM DTS009CM_BASE.UINT32
#define DTS009CM_CMC0 DTS009CM_BASE.BIT._CMC0
#define DTS009CM_CMC1 DTS009CM_BASE.BIT._CMC1
#define DTS009CM_CMC2 DTS009CM_BASE.BIT._CMC2
#define DTS009CM_CMC3 DTS009CM_BASE.BIT._CMC3
#define DTS009CM_CMC4 DTS009CM_BASE.BIT._CMC4
#define DTS009CM_CMC5 DTS009CM_BASE.BIT._CMC5
#define DTS009CM_CMC6 DTS009CM_BASE.BIT._CMC6
#define DTS009CM_CMC7 DTS009CM_BASE.BIT._CMC7
#define DTS009CM_CMC8 DTS009CM_BASE.BIT._CMC8
#define DTS009CM_CMC9 DTS009CM_BASE.BIT._CMC9
#define DTS009CM_CMC10 DTS009CM_BASE.BIT._CMC10
#define DTS009CM_CMC11 DTS009CM_BASE.BIT._CMC11
#define DTS009CM_CMC12 DTS009CM_BASE.BIT._CMC12
#define DTS009CM_CMC13 DTS009CM_BASE.BIT._CMC13
#define DTS009CM_CMC14 DTS009CM_BASE.BIT._CMC14
#define DTS009CM_CMC15 DTS009CM_BASE.BIT._CMC15
#define DTS009CM_UM DTS009CM_BASE.BIT._UM
#define DTS009CM_SPID0 DTS009CM_BASE.BIT._SPID0
#define DTS009CM_SPID1 DTS009CM_BASE.BIT._SPID1
#define DTS009CM_SPID2 DTS009CM_BASE.BIT._SPID2
#define DTS009CM_SPID3 DTS009CM_BASE.BIT._SPID3
#define DTS009CM_SPID4 DTS009CM_BASE.BIT._SPID4
#define DTS009CM_PEID0 DTS009CM_BASE.BIT._PEID0
#define DTS009CM_PEID1 DTS009CM_BASE.BIT._PEID1
#define DTS009CM_PEID2 DTS009CM_BASE.BIT._PEID2
#define DTS010CM DTS010CM_BASE.UINT32
#define DTS010CM_CMC0 DTS010CM_BASE.BIT._CMC0
#define DTS010CM_CMC1 DTS010CM_BASE.BIT._CMC1
#define DTS010CM_CMC2 DTS010CM_BASE.BIT._CMC2
#define DTS010CM_CMC3 DTS010CM_BASE.BIT._CMC3
#define DTS010CM_CMC4 DTS010CM_BASE.BIT._CMC4
#define DTS010CM_CMC5 DTS010CM_BASE.BIT._CMC5
#define DTS010CM_CMC6 DTS010CM_BASE.BIT._CMC6
#define DTS010CM_CMC7 DTS010CM_BASE.BIT._CMC7
#define DTS010CM_CMC8 DTS010CM_BASE.BIT._CMC8
#define DTS010CM_CMC9 DTS010CM_BASE.BIT._CMC9
#define DTS010CM_CMC10 DTS010CM_BASE.BIT._CMC10
#define DTS010CM_CMC11 DTS010CM_BASE.BIT._CMC11
#define DTS010CM_CMC12 DTS010CM_BASE.BIT._CMC12
#define DTS010CM_CMC13 DTS010CM_BASE.BIT._CMC13
#define DTS010CM_CMC14 DTS010CM_BASE.BIT._CMC14
#define DTS010CM_CMC15 DTS010CM_BASE.BIT._CMC15
#define DTS010CM_UM DTS010CM_BASE.BIT._UM
#define DTS010CM_SPID0 DTS010CM_BASE.BIT._SPID0
#define DTS010CM_SPID1 DTS010CM_BASE.BIT._SPID1
#define DTS010CM_SPID2 DTS010CM_BASE.BIT._SPID2
#define DTS010CM_SPID3 DTS010CM_BASE.BIT._SPID3
#define DTS010CM_SPID4 DTS010CM_BASE.BIT._SPID4
#define DTS010CM_PEID0 DTS010CM_BASE.BIT._PEID0
#define DTS010CM_PEID1 DTS010CM_BASE.BIT._PEID1
#define DTS010CM_PEID2 DTS010CM_BASE.BIT._PEID2
#define DTS011CM DTS011CM_BASE.UINT32
#define DTS011CM_CMC0 DTS011CM_BASE.BIT._CMC0
#define DTS011CM_CMC1 DTS011CM_BASE.BIT._CMC1
#define DTS011CM_CMC2 DTS011CM_BASE.BIT._CMC2
#define DTS011CM_CMC3 DTS011CM_BASE.BIT._CMC3
#define DTS011CM_CMC4 DTS011CM_BASE.BIT._CMC4
#define DTS011CM_CMC5 DTS011CM_BASE.BIT._CMC5
#define DTS011CM_CMC6 DTS011CM_BASE.BIT._CMC6
#define DTS011CM_CMC7 DTS011CM_BASE.BIT._CMC7
#define DTS011CM_CMC8 DTS011CM_BASE.BIT._CMC8
#define DTS011CM_CMC9 DTS011CM_BASE.BIT._CMC9
#define DTS011CM_CMC10 DTS011CM_BASE.BIT._CMC10
#define DTS011CM_CMC11 DTS011CM_BASE.BIT._CMC11
#define DTS011CM_CMC12 DTS011CM_BASE.BIT._CMC12
#define DTS011CM_CMC13 DTS011CM_BASE.BIT._CMC13
#define DTS011CM_CMC14 DTS011CM_BASE.BIT._CMC14
#define DTS011CM_CMC15 DTS011CM_BASE.BIT._CMC15
#define DTS011CM_UM DTS011CM_BASE.BIT._UM
#define DTS011CM_SPID0 DTS011CM_BASE.BIT._SPID0
#define DTS011CM_SPID1 DTS011CM_BASE.BIT._SPID1
#define DTS011CM_SPID2 DTS011CM_BASE.BIT._SPID2
#define DTS011CM_SPID3 DTS011CM_BASE.BIT._SPID3
#define DTS011CM_SPID4 DTS011CM_BASE.BIT._SPID4
#define DTS011CM_PEID0 DTS011CM_BASE.BIT._PEID0
#define DTS011CM_PEID1 DTS011CM_BASE.BIT._PEID1
#define DTS011CM_PEID2 DTS011CM_BASE.BIT._PEID2
#define DTS012CM DTS012CM_BASE.UINT32
#define DTS012CM_CMC0 DTS012CM_BASE.BIT._CMC0
#define DTS012CM_CMC1 DTS012CM_BASE.BIT._CMC1
#define DTS012CM_CMC2 DTS012CM_BASE.BIT._CMC2
#define DTS012CM_CMC3 DTS012CM_BASE.BIT._CMC3
#define DTS012CM_CMC4 DTS012CM_BASE.BIT._CMC4
#define DTS012CM_CMC5 DTS012CM_BASE.BIT._CMC5
#define DTS012CM_CMC6 DTS012CM_BASE.BIT._CMC6
#define DTS012CM_CMC7 DTS012CM_BASE.BIT._CMC7
#define DTS012CM_CMC8 DTS012CM_BASE.BIT._CMC8
#define DTS012CM_CMC9 DTS012CM_BASE.BIT._CMC9
#define DTS012CM_CMC10 DTS012CM_BASE.BIT._CMC10
#define DTS012CM_CMC11 DTS012CM_BASE.BIT._CMC11
#define DTS012CM_CMC12 DTS012CM_BASE.BIT._CMC12
#define DTS012CM_CMC13 DTS012CM_BASE.BIT._CMC13
#define DTS012CM_CMC14 DTS012CM_BASE.BIT._CMC14
#define DTS012CM_CMC15 DTS012CM_BASE.BIT._CMC15
#define DTS012CM_UM DTS012CM_BASE.BIT._UM
#define DTS012CM_SPID0 DTS012CM_BASE.BIT._SPID0
#define DTS012CM_SPID1 DTS012CM_BASE.BIT._SPID1
#define DTS012CM_SPID2 DTS012CM_BASE.BIT._SPID2
#define DTS012CM_SPID3 DTS012CM_BASE.BIT._SPID3
#define DTS012CM_SPID4 DTS012CM_BASE.BIT._SPID4
#define DTS012CM_PEID0 DTS012CM_BASE.BIT._PEID0
#define DTS012CM_PEID1 DTS012CM_BASE.BIT._PEID1
#define DTS012CM_PEID2 DTS012CM_BASE.BIT._PEID2
#define DTS013CM DTS013CM_BASE.UINT32
#define DTS013CM_CMC0 DTS013CM_BASE.BIT._CMC0
#define DTS013CM_CMC1 DTS013CM_BASE.BIT._CMC1
#define DTS013CM_CMC2 DTS013CM_BASE.BIT._CMC2
#define DTS013CM_CMC3 DTS013CM_BASE.BIT._CMC3
#define DTS013CM_CMC4 DTS013CM_BASE.BIT._CMC4
#define DTS013CM_CMC5 DTS013CM_BASE.BIT._CMC5
#define DTS013CM_CMC6 DTS013CM_BASE.BIT._CMC6
#define DTS013CM_CMC7 DTS013CM_BASE.BIT._CMC7
#define DTS013CM_CMC8 DTS013CM_BASE.BIT._CMC8
#define DTS013CM_CMC9 DTS013CM_BASE.BIT._CMC9
#define DTS013CM_CMC10 DTS013CM_BASE.BIT._CMC10
#define DTS013CM_CMC11 DTS013CM_BASE.BIT._CMC11
#define DTS013CM_CMC12 DTS013CM_BASE.BIT._CMC12
#define DTS013CM_CMC13 DTS013CM_BASE.BIT._CMC13
#define DTS013CM_CMC14 DTS013CM_BASE.BIT._CMC14
#define DTS013CM_CMC15 DTS013CM_BASE.BIT._CMC15
#define DTS013CM_UM DTS013CM_BASE.BIT._UM
#define DTS013CM_SPID0 DTS013CM_BASE.BIT._SPID0
#define DTS013CM_SPID1 DTS013CM_BASE.BIT._SPID1
#define DTS013CM_SPID2 DTS013CM_BASE.BIT._SPID2
#define DTS013CM_SPID3 DTS013CM_BASE.BIT._SPID3
#define DTS013CM_SPID4 DTS013CM_BASE.BIT._SPID4
#define DTS013CM_PEID0 DTS013CM_BASE.BIT._PEID0
#define DTS013CM_PEID1 DTS013CM_BASE.BIT._PEID1
#define DTS013CM_PEID2 DTS013CM_BASE.BIT._PEID2
#define DTS014CM DTS014CM_BASE.UINT32
#define DTS014CM_CMC0 DTS014CM_BASE.BIT._CMC0
#define DTS014CM_CMC1 DTS014CM_BASE.BIT._CMC1
#define DTS014CM_CMC2 DTS014CM_BASE.BIT._CMC2
#define DTS014CM_CMC3 DTS014CM_BASE.BIT._CMC3
#define DTS014CM_CMC4 DTS014CM_BASE.BIT._CMC4
#define DTS014CM_CMC5 DTS014CM_BASE.BIT._CMC5
#define DTS014CM_CMC6 DTS014CM_BASE.BIT._CMC6
#define DTS014CM_CMC7 DTS014CM_BASE.BIT._CMC7
#define DTS014CM_CMC8 DTS014CM_BASE.BIT._CMC8
#define DTS014CM_CMC9 DTS014CM_BASE.BIT._CMC9
#define DTS014CM_CMC10 DTS014CM_BASE.BIT._CMC10
#define DTS014CM_CMC11 DTS014CM_BASE.BIT._CMC11
#define DTS014CM_CMC12 DTS014CM_BASE.BIT._CMC12
#define DTS014CM_CMC13 DTS014CM_BASE.BIT._CMC13
#define DTS014CM_CMC14 DTS014CM_BASE.BIT._CMC14
#define DTS014CM_CMC15 DTS014CM_BASE.BIT._CMC15
#define DTS014CM_UM DTS014CM_BASE.BIT._UM
#define DTS014CM_SPID0 DTS014CM_BASE.BIT._SPID0
#define DTS014CM_SPID1 DTS014CM_BASE.BIT._SPID1
#define DTS014CM_SPID2 DTS014CM_BASE.BIT._SPID2
#define DTS014CM_SPID3 DTS014CM_BASE.BIT._SPID3
#define DTS014CM_SPID4 DTS014CM_BASE.BIT._SPID4
#define DTS014CM_PEID0 DTS014CM_BASE.BIT._PEID0
#define DTS014CM_PEID1 DTS014CM_BASE.BIT._PEID1
#define DTS014CM_PEID2 DTS014CM_BASE.BIT._PEID2
#define DTS015CM DTS015CM_BASE.UINT32
#define DTS015CM_CMC0 DTS015CM_BASE.BIT._CMC0
#define DTS015CM_CMC1 DTS015CM_BASE.BIT._CMC1
#define DTS015CM_CMC2 DTS015CM_BASE.BIT._CMC2
#define DTS015CM_CMC3 DTS015CM_BASE.BIT._CMC3
#define DTS015CM_CMC4 DTS015CM_BASE.BIT._CMC4
#define DTS015CM_CMC5 DTS015CM_BASE.BIT._CMC5
#define DTS015CM_CMC6 DTS015CM_BASE.BIT._CMC6
#define DTS015CM_CMC7 DTS015CM_BASE.BIT._CMC7
#define DTS015CM_CMC8 DTS015CM_BASE.BIT._CMC8
#define DTS015CM_CMC9 DTS015CM_BASE.BIT._CMC9
#define DTS015CM_CMC10 DTS015CM_BASE.BIT._CMC10
#define DTS015CM_CMC11 DTS015CM_BASE.BIT._CMC11
#define DTS015CM_CMC12 DTS015CM_BASE.BIT._CMC12
#define DTS015CM_CMC13 DTS015CM_BASE.BIT._CMC13
#define DTS015CM_CMC14 DTS015CM_BASE.BIT._CMC14
#define DTS015CM_CMC15 DTS015CM_BASE.BIT._CMC15
#define DTS015CM_UM DTS015CM_BASE.BIT._UM
#define DTS015CM_SPID0 DTS015CM_BASE.BIT._SPID0
#define DTS015CM_SPID1 DTS015CM_BASE.BIT._SPID1
#define DTS015CM_SPID2 DTS015CM_BASE.BIT._SPID2
#define DTS015CM_SPID3 DTS015CM_BASE.BIT._SPID3
#define DTS015CM_SPID4 DTS015CM_BASE.BIT._SPID4
#define DTS015CM_PEID0 DTS015CM_BASE.BIT._PEID0
#define DTS015CM_PEID1 DTS015CM_BASE.BIT._PEID1
#define DTS015CM_PEID2 DTS015CM_BASE.BIT._PEID2
#define DTS016CM DTS016CM_BASE.UINT32
#define DTS016CM_CMC0 DTS016CM_BASE.BIT._CMC0
#define DTS016CM_CMC1 DTS016CM_BASE.BIT._CMC1
#define DTS016CM_CMC2 DTS016CM_BASE.BIT._CMC2
#define DTS016CM_CMC3 DTS016CM_BASE.BIT._CMC3
#define DTS016CM_CMC4 DTS016CM_BASE.BIT._CMC4
#define DTS016CM_CMC5 DTS016CM_BASE.BIT._CMC5
#define DTS016CM_CMC6 DTS016CM_BASE.BIT._CMC6
#define DTS016CM_CMC7 DTS016CM_BASE.BIT._CMC7
#define DTS016CM_CMC8 DTS016CM_BASE.BIT._CMC8
#define DTS016CM_CMC9 DTS016CM_BASE.BIT._CMC9
#define DTS016CM_CMC10 DTS016CM_BASE.BIT._CMC10
#define DTS016CM_CMC11 DTS016CM_BASE.BIT._CMC11
#define DTS016CM_CMC12 DTS016CM_BASE.BIT._CMC12
#define DTS016CM_CMC13 DTS016CM_BASE.BIT._CMC13
#define DTS016CM_CMC14 DTS016CM_BASE.BIT._CMC14
#define DTS016CM_CMC15 DTS016CM_BASE.BIT._CMC15
#define DTS016CM_UM DTS016CM_BASE.BIT._UM
#define DTS016CM_SPID0 DTS016CM_BASE.BIT._SPID0
#define DTS016CM_SPID1 DTS016CM_BASE.BIT._SPID1
#define DTS016CM_SPID2 DTS016CM_BASE.BIT._SPID2
#define DTS016CM_SPID3 DTS016CM_BASE.BIT._SPID3
#define DTS016CM_SPID4 DTS016CM_BASE.BIT._SPID4
#define DTS016CM_PEID0 DTS016CM_BASE.BIT._PEID0
#define DTS016CM_PEID1 DTS016CM_BASE.BIT._PEID1
#define DTS016CM_PEID2 DTS016CM_BASE.BIT._PEID2
#define DTS017CM DTS017CM_BASE.UINT32
#define DTS017CM_CMC0 DTS017CM_BASE.BIT._CMC0
#define DTS017CM_CMC1 DTS017CM_BASE.BIT._CMC1
#define DTS017CM_CMC2 DTS017CM_BASE.BIT._CMC2
#define DTS017CM_CMC3 DTS017CM_BASE.BIT._CMC3
#define DTS017CM_CMC4 DTS017CM_BASE.BIT._CMC4
#define DTS017CM_CMC5 DTS017CM_BASE.BIT._CMC5
#define DTS017CM_CMC6 DTS017CM_BASE.BIT._CMC6
#define DTS017CM_CMC7 DTS017CM_BASE.BIT._CMC7
#define DTS017CM_CMC8 DTS017CM_BASE.BIT._CMC8
#define DTS017CM_CMC9 DTS017CM_BASE.BIT._CMC9
#define DTS017CM_CMC10 DTS017CM_BASE.BIT._CMC10
#define DTS017CM_CMC11 DTS017CM_BASE.BIT._CMC11
#define DTS017CM_CMC12 DTS017CM_BASE.BIT._CMC12
#define DTS017CM_CMC13 DTS017CM_BASE.BIT._CMC13
#define DTS017CM_CMC14 DTS017CM_BASE.BIT._CMC14
#define DTS017CM_CMC15 DTS017CM_BASE.BIT._CMC15
#define DTS017CM_UM DTS017CM_BASE.BIT._UM
#define DTS017CM_SPID0 DTS017CM_BASE.BIT._SPID0
#define DTS017CM_SPID1 DTS017CM_BASE.BIT._SPID1
#define DTS017CM_SPID2 DTS017CM_BASE.BIT._SPID2
#define DTS017CM_SPID3 DTS017CM_BASE.BIT._SPID3
#define DTS017CM_SPID4 DTS017CM_BASE.BIT._SPID4
#define DTS017CM_PEID0 DTS017CM_BASE.BIT._PEID0
#define DTS017CM_PEID1 DTS017CM_BASE.BIT._PEID1
#define DTS017CM_PEID2 DTS017CM_BASE.BIT._PEID2
#define DTS018CM DTS018CM_BASE.UINT32
#define DTS018CM_CMC0 DTS018CM_BASE.BIT._CMC0
#define DTS018CM_CMC1 DTS018CM_BASE.BIT._CMC1
#define DTS018CM_CMC2 DTS018CM_BASE.BIT._CMC2
#define DTS018CM_CMC3 DTS018CM_BASE.BIT._CMC3
#define DTS018CM_CMC4 DTS018CM_BASE.BIT._CMC4
#define DTS018CM_CMC5 DTS018CM_BASE.BIT._CMC5
#define DTS018CM_CMC6 DTS018CM_BASE.BIT._CMC6
#define DTS018CM_CMC7 DTS018CM_BASE.BIT._CMC7
#define DTS018CM_CMC8 DTS018CM_BASE.BIT._CMC8
#define DTS018CM_CMC9 DTS018CM_BASE.BIT._CMC9
#define DTS018CM_CMC10 DTS018CM_BASE.BIT._CMC10
#define DTS018CM_CMC11 DTS018CM_BASE.BIT._CMC11
#define DTS018CM_CMC12 DTS018CM_BASE.BIT._CMC12
#define DTS018CM_CMC13 DTS018CM_BASE.BIT._CMC13
#define DTS018CM_CMC14 DTS018CM_BASE.BIT._CMC14
#define DTS018CM_CMC15 DTS018CM_BASE.BIT._CMC15
#define DTS018CM_UM DTS018CM_BASE.BIT._UM
#define DTS018CM_SPID0 DTS018CM_BASE.BIT._SPID0
#define DTS018CM_SPID1 DTS018CM_BASE.BIT._SPID1
#define DTS018CM_SPID2 DTS018CM_BASE.BIT._SPID2
#define DTS018CM_SPID3 DTS018CM_BASE.BIT._SPID3
#define DTS018CM_SPID4 DTS018CM_BASE.BIT._SPID4
#define DTS018CM_PEID0 DTS018CM_BASE.BIT._PEID0
#define DTS018CM_PEID1 DTS018CM_BASE.BIT._PEID1
#define DTS018CM_PEID2 DTS018CM_BASE.BIT._PEID2
#define DTS019CM DTS019CM_BASE.UINT32
#define DTS019CM_CMC0 DTS019CM_BASE.BIT._CMC0
#define DTS019CM_CMC1 DTS019CM_BASE.BIT._CMC1
#define DTS019CM_CMC2 DTS019CM_BASE.BIT._CMC2
#define DTS019CM_CMC3 DTS019CM_BASE.BIT._CMC3
#define DTS019CM_CMC4 DTS019CM_BASE.BIT._CMC4
#define DTS019CM_CMC5 DTS019CM_BASE.BIT._CMC5
#define DTS019CM_CMC6 DTS019CM_BASE.BIT._CMC6
#define DTS019CM_CMC7 DTS019CM_BASE.BIT._CMC7
#define DTS019CM_CMC8 DTS019CM_BASE.BIT._CMC8
#define DTS019CM_CMC9 DTS019CM_BASE.BIT._CMC9
#define DTS019CM_CMC10 DTS019CM_BASE.BIT._CMC10
#define DTS019CM_CMC11 DTS019CM_BASE.BIT._CMC11
#define DTS019CM_CMC12 DTS019CM_BASE.BIT._CMC12
#define DTS019CM_CMC13 DTS019CM_BASE.BIT._CMC13
#define DTS019CM_CMC14 DTS019CM_BASE.BIT._CMC14
#define DTS019CM_CMC15 DTS019CM_BASE.BIT._CMC15
#define DTS019CM_UM DTS019CM_BASE.BIT._UM
#define DTS019CM_SPID0 DTS019CM_BASE.BIT._SPID0
#define DTS019CM_SPID1 DTS019CM_BASE.BIT._SPID1
#define DTS019CM_SPID2 DTS019CM_BASE.BIT._SPID2
#define DTS019CM_SPID3 DTS019CM_BASE.BIT._SPID3
#define DTS019CM_SPID4 DTS019CM_BASE.BIT._SPID4
#define DTS019CM_PEID0 DTS019CM_BASE.BIT._PEID0
#define DTS019CM_PEID1 DTS019CM_BASE.BIT._PEID1
#define DTS019CM_PEID2 DTS019CM_BASE.BIT._PEID2
#define DTS020CM DTS020CM_BASE.UINT32
#define DTS020CM_CMC0 DTS020CM_BASE.BIT._CMC0
#define DTS020CM_CMC1 DTS020CM_BASE.BIT._CMC1
#define DTS020CM_CMC2 DTS020CM_BASE.BIT._CMC2
#define DTS020CM_CMC3 DTS020CM_BASE.BIT._CMC3
#define DTS020CM_CMC4 DTS020CM_BASE.BIT._CMC4
#define DTS020CM_CMC5 DTS020CM_BASE.BIT._CMC5
#define DTS020CM_CMC6 DTS020CM_BASE.BIT._CMC6
#define DTS020CM_CMC7 DTS020CM_BASE.BIT._CMC7
#define DTS020CM_CMC8 DTS020CM_BASE.BIT._CMC8
#define DTS020CM_CMC9 DTS020CM_BASE.BIT._CMC9
#define DTS020CM_CMC10 DTS020CM_BASE.BIT._CMC10
#define DTS020CM_CMC11 DTS020CM_BASE.BIT._CMC11
#define DTS020CM_CMC12 DTS020CM_BASE.BIT._CMC12
#define DTS020CM_CMC13 DTS020CM_BASE.BIT._CMC13
#define DTS020CM_CMC14 DTS020CM_BASE.BIT._CMC14
#define DTS020CM_CMC15 DTS020CM_BASE.BIT._CMC15
#define DTS020CM_UM DTS020CM_BASE.BIT._UM
#define DTS020CM_SPID0 DTS020CM_BASE.BIT._SPID0
#define DTS020CM_SPID1 DTS020CM_BASE.BIT._SPID1
#define DTS020CM_SPID2 DTS020CM_BASE.BIT._SPID2
#define DTS020CM_SPID3 DTS020CM_BASE.BIT._SPID3
#define DTS020CM_SPID4 DTS020CM_BASE.BIT._SPID4
#define DTS020CM_PEID0 DTS020CM_BASE.BIT._PEID0
#define DTS020CM_PEID1 DTS020CM_BASE.BIT._PEID1
#define DTS020CM_PEID2 DTS020CM_BASE.BIT._PEID2
#define DTS021CM DTS021CM_BASE.UINT32
#define DTS021CM_CMC0 DTS021CM_BASE.BIT._CMC0
#define DTS021CM_CMC1 DTS021CM_BASE.BIT._CMC1
#define DTS021CM_CMC2 DTS021CM_BASE.BIT._CMC2
#define DTS021CM_CMC3 DTS021CM_BASE.BIT._CMC3
#define DTS021CM_CMC4 DTS021CM_BASE.BIT._CMC4
#define DTS021CM_CMC5 DTS021CM_BASE.BIT._CMC5
#define DTS021CM_CMC6 DTS021CM_BASE.BIT._CMC6
#define DTS021CM_CMC7 DTS021CM_BASE.BIT._CMC7
#define DTS021CM_CMC8 DTS021CM_BASE.BIT._CMC8
#define DTS021CM_CMC9 DTS021CM_BASE.BIT._CMC9
#define DTS021CM_CMC10 DTS021CM_BASE.BIT._CMC10
#define DTS021CM_CMC11 DTS021CM_BASE.BIT._CMC11
#define DTS021CM_CMC12 DTS021CM_BASE.BIT._CMC12
#define DTS021CM_CMC13 DTS021CM_BASE.BIT._CMC13
#define DTS021CM_CMC14 DTS021CM_BASE.BIT._CMC14
#define DTS021CM_CMC15 DTS021CM_BASE.BIT._CMC15
#define DTS021CM_UM DTS021CM_BASE.BIT._UM
#define DTS021CM_SPID0 DTS021CM_BASE.BIT._SPID0
#define DTS021CM_SPID1 DTS021CM_BASE.BIT._SPID1
#define DTS021CM_SPID2 DTS021CM_BASE.BIT._SPID2
#define DTS021CM_SPID3 DTS021CM_BASE.BIT._SPID3
#define DTS021CM_SPID4 DTS021CM_BASE.BIT._SPID4
#define DTS021CM_PEID0 DTS021CM_BASE.BIT._PEID0
#define DTS021CM_PEID1 DTS021CM_BASE.BIT._PEID1
#define DTS021CM_PEID2 DTS021CM_BASE.BIT._PEID2
#define DTS022CM DTS022CM_BASE.UINT32
#define DTS022CM_CMC0 DTS022CM_BASE.BIT._CMC0
#define DTS022CM_CMC1 DTS022CM_BASE.BIT._CMC1
#define DTS022CM_CMC2 DTS022CM_BASE.BIT._CMC2
#define DTS022CM_CMC3 DTS022CM_BASE.BIT._CMC3
#define DTS022CM_CMC4 DTS022CM_BASE.BIT._CMC4
#define DTS022CM_CMC5 DTS022CM_BASE.BIT._CMC5
#define DTS022CM_CMC6 DTS022CM_BASE.BIT._CMC6
#define DTS022CM_CMC7 DTS022CM_BASE.BIT._CMC7
#define DTS022CM_CMC8 DTS022CM_BASE.BIT._CMC8
#define DTS022CM_CMC9 DTS022CM_BASE.BIT._CMC9
#define DTS022CM_CMC10 DTS022CM_BASE.BIT._CMC10
#define DTS022CM_CMC11 DTS022CM_BASE.BIT._CMC11
#define DTS022CM_CMC12 DTS022CM_BASE.BIT._CMC12
#define DTS022CM_CMC13 DTS022CM_BASE.BIT._CMC13
#define DTS022CM_CMC14 DTS022CM_BASE.BIT._CMC14
#define DTS022CM_CMC15 DTS022CM_BASE.BIT._CMC15
#define DTS022CM_UM DTS022CM_BASE.BIT._UM
#define DTS022CM_SPID0 DTS022CM_BASE.BIT._SPID0
#define DTS022CM_SPID1 DTS022CM_BASE.BIT._SPID1
#define DTS022CM_SPID2 DTS022CM_BASE.BIT._SPID2
#define DTS022CM_SPID3 DTS022CM_BASE.BIT._SPID3
#define DTS022CM_SPID4 DTS022CM_BASE.BIT._SPID4
#define DTS022CM_PEID0 DTS022CM_BASE.BIT._PEID0
#define DTS022CM_PEID1 DTS022CM_BASE.BIT._PEID1
#define DTS022CM_PEID2 DTS022CM_BASE.BIT._PEID2
#define DTS023CM DTS023CM_BASE.UINT32
#define DTS023CM_CMC0 DTS023CM_BASE.BIT._CMC0
#define DTS023CM_CMC1 DTS023CM_BASE.BIT._CMC1
#define DTS023CM_CMC2 DTS023CM_BASE.BIT._CMC2
#define DTS023CM_CMC3 DTS023CM_BASE.BIT._CMC3
#define DTS023CM_CMC4 DTS023CM_BASE.BIT._CMC4
#define DTS023CM_CMC5 DTS023CM_BASE.BIT._CMC5
#define DTS023CM_CMC6 DTS023CM_BASE.BIT._CMC6
#define DTS023CM_CMC7 DTS023CM_BASE.BIT._CMC7
#define DTS023CM_CMC8 DTS023CM_BASE.BIT._CMC8
#define DTS023CM_CMC9 DTS023CM_BASE.BIT._CMC9
#define DTS023CM_CMC10 DTS023CM_BASE.BIT._CMC10
#define DTS023CM_CMC11 DTS023CM_BASE.BIT._CMC11
#define DTS023CM_CMC12 DTS023CM_BASE.BIT._CMC12
#define DTS023CM_CMC13 DTS023CM_BASE.BIT._CMC13
#define DTS023CM_CMC14 DTS023CM_BASE.BIT._CMC14
#define DTS023CM_CMC15 DTS023CM_BASE.BIT._CMC15
#define DTS023CM_UM DTS023CM_BASE.BIT._UM
#define DTS023CM_SPID0 DTS023CM_BASE.BIT._SPID0
#define DTS023CM_SPID1 DTS023CM_BASE.BIT._SPID1
#define DTS023CM_SPID2 DTS023CM_BASE.BIT._SPID2
#define DTS023CM_SPID3 DTS023CM_BASE.BIT._SPID3
#define DTS023CM_SPID4 DTS023CM_BASE.BIT._SPID4
#define DTS023CM_PEID0 DTS023CM_BASE.BIT._PEID0
#define DTS023CM_PEID1 DTS023CM_BASE.BIT._PEID1
#define DTS023CM_PEID2 DTS023CM_BASE.BIT._PEID2
#define DTS024CM DTS024CM_BASE.UINT32
#define DTS024CM_CMC0 DTS024CM_BASE.BIT._CMC0
#define DTS024CM_CMC1 DTS024CM_BASE.BIT._CMC1
#define DTS024CM_CMC2 DTS024CM_BASE.BIT._CMC2
#define DTS024CM_CMC3 DTS024CM_BASE.BIT._CMC3
#define DTS024CM_CMC4 DTS024CM_BASE.BIT._CMC4
#define DTS024CM_CMC5 DTS024CM_BASE.BIT._CMC5
#define DTS024CM_CMC6 DTS024CM_BASE.BIT._CMC6
#define DTS024CM_CMC7 DTS024CM_BASE.BIT._CMC7
#define DTS024CM_CMC8 DTS024CM_BASE.BIT._CMC8
#define DTS024CM_CMC9 DTS024CM_BASE.BIT._CMC9
#define DTS024CM_CMC10 DTS024CM_BASE.BIT._CMC10
#define DTS024CM_CMC11 DTS024CM_BASE.BIT._CMC11
#define DTS024CM_CMC12 DTS024CM_BASE.BIT._CMC12
#define DTS024CM_CMC13 DTS024CM_BASE.BIT._CMC13
#define DTS024CM_CMC14 DTS024CM_BASE.BIT._CMC14
#define DTS024CM_CMC15 DTS024CM_BASE.BIT._CMC15
#define DTS024CM_UM DTS024CM_BASE.BIT._UM
#define DTS024CM_SPID0 DTS024CM_BASE.BIT._SPID0
#define DTS024CM_SPID1 DTS024CM_BASE.BIT._SPID1
#define DTS024CM_SPID2 DTS024CM_BASE.BIT._SPID2
#define DTS024CM_SPID3 DTS024CM_BASE.BIT._SPID3
#define DTS024CM_SPID4 DTS024CM_BASE.BIT._SPID4
#define DTS024CM_PEID0 DTS024CM_BASE.BIT._PEID0
#define DTS024CM_PEID1 DTS024CM_BASE.BIT._PEID1
#define DTS024CM_PEID2 DTS024CM_BASE.BIT._PEID2
#define DTS025CM DTS025CM_BASE.UINT32
#define DTS025CM_CMC0 DTS025CM_BASE.BIT._CMC0
#define DTS025CM_CMC1 DTS025CM_BASE.BIT._CMC1
#define DTS025CM_CMC2 DTS025CM_BASE.BIT._CMC2
#define DTS025CM_CMC3 DTS025CM_BASE.BIT._CMC3
#define DTS025CM_CMC4 DTS025CM_BASE.BIT._CMC4
#define DTS025CM_CMC5 DTS025CM_BASE.BIT._CMC5
#define DTS025CM_CMC6 DTS025CM_BASE.BIT._CMC6
#define DTS025CM_CMC7 DTS025CM_BASE.BIT._CMC7
#define DTS025CM_CMC8 DTS025CM_BASE.BIT._CMC8
#define DTS025CM_CMC9 DTS025CM_BASE.BIT._CMC9
#define DTS025CM_CMC10 DTS025CM_BASE.BIT._CMC10
#define DTS025CM_CMC11 DTS025CM_BASE.BIT._CMC11
#define DTS025CM_CMC12 DTS025CM_BASE.BIT._CMC12
#define DTS025CM_CMC13 DTS025CM_BASE.BIT._CMC13
#define DTS025CM_CMC14 DTS025CM_BASE.BIT._CMC14
#define DTS025CM_CMC15 DTS025CM_BASE.BIT._CMC15
#define DTS025CM_UM DTS025CM_BASE.BIT._UM
#define DTS025CM_SPID0 DTS025CM_BASE.BIT._SPID0
#define DTS025CM_SPID1 DTS025CM_BASE.BIT._SPID1
#define DTS025CM_SPID2 DTS025CM_BASE.BIT._SPID2
#define DTS025CM_SPID3 DTS025CM_BASE.BIT._SPID3
#define DTS025CM_SPID4 DTS025CM_BASE.BIT._SPID4
#define DTS025CM_PEID0 DTS025CM_BASE.BIT._PEID0
#define DTS025CM_PEID1 DTS025CM_BASE.BIT._PEID1
#define DTS025CM_PEID2 DTS025CM_BASE.BIT._PEID2
#define DTS026CM DTS026CM_BASE.UINT32
#define DTS026CM_CMC0 DTS026CM_BASE.BIT._CMC0
#define DTS026CM_CMC1 DTS026CM_BASE.BIT._CMC1
#define DTS026CM_CMC2 DTS026CM_BASE.BIT._CMC2
#define DTS026CM_CMC3 DTS026CM_BASE.BIT._CMC3
#define DTS026CM_CMC4 DTS026CM_BASE.BIT._CMC4
#define DTS026CM_CMC5 DTS026CM_BASE.BIT._CMC5
#define DTS026CM_CMC6 DTS026CM_BASE.BIT._CMC6
#define DTS026CM_CMC7 DTS026CM_BASE.BIT._CMC7
#define DTS026CM_CMC8 DTS026CM_BASE.BIT._CMC8
#define DTS026CM_CMC9 DTS026CM_BASE.BIT._CMC9
#define DTS026CM_CMC10 DTS026CM_BASE.BIT._CMC10
#define DTS026CM_CMC11 DTS026CM_BASE.BIT._CMC11
#define DTS026CM_CMC12 DTS026CM_BASE.BIT._CMC12
#define DTS026CM_CMC13 DTS026CM_BASE.BIT._CMC13
#define DTS026CM_CMC14 DTS026CM_BASE.BIT._CMC14
#define DTS026CM_CMC15 DTS026CM_BASE.BIT._CMC15
#define DTS026CM_UM DTS026CM_BASE.BIT._UM
#define DTS026CM_SPID0 DTS026CM_BASE.BIT._SPID0
#define DTS026CM_SPID1 DTS026CM_BASE.BIT._SPID1
#define DTS026CM_SPID2 DTS026CM_BASE.BIT._SPID2
#define DTS026CM_SPID3 DTS026CM_BASE.BIT._SPID3
#define DTS026CM_SPID4 DTS026CM_BASE.BIT._SPID4
#define DTS026CM_PEID0 DTS026CM_BASE.BIT._PEID0
#define DTS026CM_PEID1 DTS026CM_BASE.BIT._PEID1
#define DTS026CM_PEID2 DTS026CM_BASE.BIT._PEID2
#define DTS027CM DTS027CM_BASE.UINT32
#define DTS027CM_CMC0 DTS027CM_BASE.BIT._CMC0
#define DTS027CM_CMC1 DTS027CM_BASE.BIT._CMC1
#define DTS027CM_CMC2 DTS027CM_BASE.BIT._CMC2
#define DTS027CM_CMC3 DTS027CM_BASE.BIT._CMC3
#define DTS027CM_CMC4 DTS027CM_BASE.BIT._CMC4
#define DTS027CM_CMC5 DTS027CM_BASE.BIT._CMC5
#define DTS027CM_CMC6 DTS027CM_BASE.BIT._CMC6
#define DTS027CM_CMC7 DTS027CM_BASE.BIT._CMC7
#define DTS027CM_CMC8 DTS027CM_BASE.BIT._CMC8
#define DTS027CM_CMC9 DTS027CM_BASE.BIT._CMC9
#define DTS027CM_CMC10 DTS027CM_BASE.BIT._CMC10
#define DTS027CM_CMC11 DTS027CM_BASE.BIT._CMC11
#define DTS027CM_CMC12 DTS027CM_BASE.BIT._CMC12
#define DTS027CM_CMC13 DTS027CM_BASE.BIT._CMC13
#define DTS027CM_CMC14 DTS027CM_BASE.BIT._CMC14
#define DTS027CM_CMC15 DTS027CM_BASE.BIT._CMC15
#define DTS027CM_UM DTS027CM_BASE.BIT._UM
#define DTS027CM_SPID0 DTS027CM_BASE.BIT._SPID0
#define DTS027CM_SPID1 DTS027CM_BASE.BIT._SPID1
#define DTS027CM_SPID2 DTS027CM_BASE.BIT._SPID2
#define DTS027CM_SPID3 DTS027CM_BASE.BIT._SPID3
#define DTS027CM_SPID4 DTS027CM_BASE.BIT._SPID4
#define DTS027CM_PEID0 DTS027CM_BASE.BIT._PEID0
#define DTS027CM_PEID1 DTS027CM_BASE.BIT._PEID1
#define DTS027CM_PEID2 DTS027CM_BASE.BIT._PEID2
#define DTS028CM DTS028CM_BASE.UINT32
#define DTS028CM_CMC0 DTS028CM_BASE.BIT._CMC0
#define DTS028CM_CMC1 DTS028CM_BASE.BIT._CMC1
#define DTS028CM_CMC2 DTS028CM_BASE.BIT._CMC2
#define DTS028CM_CMC3 DTS028CM_BASE.BIT._CMC3
#define DTS028CM_CMC4 DTS028CM_BASE.BIT._CMC4
#define DTS028CM_CMC5 DTS028CM_BASE.BIT._CMC5
#define DTS028CM_CMC6 DTS028CM_BASE.BIT._CMC6
#define DTS028CM_CMC7 DTS028CM_BASE.BIT._CMC7
#define DTS028CM_CMC8 DTS028CM_BASE.BIT._CMC8
#define DTS028CM_CMC9 DTS028CM_BASE.BIT._CMC9
#define DTS028CM_CMC10 DTS028CM_BASE.BIT._CMC10
#define DTS028CM_CMC11 DTS028CM_BASE.BIT._CMC11
#define DTS028CM_CMC12 DTS028CM_BASE.BIT._CMC12
#define DTS028CM_CMC13 DTS028CM_BASE.BIT._CMC13
#define DTS028CM_CMC14 DTS028CM_BASE.BIT._CMC14
#define DTS028CM_CMC15 DTS028CM_BASE.BIT._CMC15
#define DTS028CM_UM DTS028CM_BASE.BIT._UM
#define DTS028CM_SPID0 DTS028CM_BASE.BIT._SPID0
#define DTS028CM_SPID1 DTS028CM_BASE.BIT._SPID1
#define DTS028CM_SPID2 DTS028CM_BASE.BIT._SPID2
#define DTS028CM_SPID3 DTS028CM_BASE.BIT._SPID3
#define DTS028CM_SPID4 DTS028CM_BASE.BIT._SPID4
#define DTS028CM_PEID0 DTS028CM_BASE.BIT._PEID0
#define DTS028CM_PEID1 DTS028CM_BASE.BIT._PEID1
#define DTS028CM_PEID2 DTS028CM_BASE.BIT._PEID2
#define DTS029CM DTS029CM_BASE.UINT32
#define DTS029CM_CMC0 DTS029CM_BASE.BIT._CMC0
#define DTS029CM_CMC1 DTS029CM_BASE.BIT._CMC1
#define DTS029CM_CMC2 DTS029CM_BASE.BIT._CMC2
#define DTS029CM_CMC3 DTS029CM_BASE.BIT._CMC3
#define DTS029CM_CMC4 DTS029CM_BASE.BIT._CMC4
#define DTS029CM_CMC5 DTS029CM_BASE.BIT._CMC5
#define DTS029CM_CMC6 DTS029CM_BASE.BIT._CMC6
#define DTS029CM_CMC7 DTS029CM_BASE.BIT._CMC7
#define DTS029CM_CMC8 DTS029CM_BASE.BIT._CMC8
#define DTS029CM_CMC9 DTS029CM_BASE.BIT._CMC9
#define DTS029CM_CMC10 DTS029CM_BASE.BIT._CMC10
#define DTS029CM_CMC11 DTS029CM_BASE.BIT._CMC11
#define DTS029CM_CMC12 DTS029CM_BASE.BIT._CMC12
#define DTS029CM_CMC13 DTS029CM_BASE.BIT._CMC13
#define DTS029CM_CMC14 DTS029CM_BASE.BIT._CMC14
#define DTS029CM_CMC15 DTS029CM_BASE.BIT._CMC15
#define DTS029CM_UM DTS029CM_BASE.BIT._UM
#define DTS029CM_SPID0 DTS029CM_BASE.BIT._SPID0
#define DTS029CM_SPID1 DTS029CM_BASE.BIT._SPID1
#define DTS029CM_SPID2 DTS029CM_BASE.BIT._SPID2
#define DTS029CM_SPID3 DTS029CM_BASE.BIT._SPID3
#define DTS029CM_SPID4 DTS029CM_BASE.BIT._SPID4
#define DTS029CM_PEID0 DTS029CM_BASE.BIT._PEID0
#define DTS029CM_PEID1 DTS029CM_BASE.BIT._PEID1
#define DTS029CM_PEID2 DTS029CM_BASE.BIT._PEID2
#define DTS030CM DTS030CM_BASE.UINT32
#define DTS030CM_CMC0 DTS030CM_BASE.BIT._CMC0
#define DTS030CM_CMC1 DTS030CM_BASE.BIT._CMC1
#define DTS030CM_CMC2 DTS030CM_BASE.BIT._CMC2
#define DTS030CM_CMC3 DTS030CM_BASE.BIT._CMC3
#define DTS030CM_CMC4 DTS030CM_BASE.BIT._CMC4
#define DTS030CM_CMC5 DTS030CM_BASE.BIT._CMC5
#define DTS030CM_CMC6 DTS030CM_BASE.BIT._CMC6
#define DTS030CM_CMC7 DTS030CM_BASE.BIT._CMC7
#define DTS030CM_CMC8 DTS030CM_BASE.BIT._CMC8
#define DTS030CM_CMC9 DTS030CM_BASE.BIT._CMC9
#define DTS030CM_CMC10 DTS030CM_BASE.BIT._CMC10
#define DTS030CM_CMC11 DTS030CM_BASE.BIT._CMC11
#define DTS030CM_CMC12 DTS030CM_BASE.BIT._CMC12
#define DTS030CM_CMC13 DTS030CM_BASE.BIT._CMC13
#define DTS030CM_CMC14 DTS030CM_BASE.BIT._CMC14
#define DTS030CM_CMC15 DTS030CM_BASE.BIT._CMC15
#define DTS030CM_UM DTS030CM_BASE.BIT._UM
#define DTS030CM_SPID0 DTS030CM_BASE.BIT._SPID0
#define DTS030CM_SPID1 DTS030CM_BASE.BIT._SPID1
#define DTS030CM_SPID2 DTS030CM_BASE.BIT._SPID2
#define DTS030CM_SPID3 DTS030CM_BASE.BIT._SPID3
#define DTS030CM_SPID4 DTS030CM_BASE.BIT._SPID4
#define DTS030CM_PEID0 DTS030CM_BASE.BIT._PEID0
#define DTS030CM_PEID1 DTS030CM_BASE.BIT._PEID1
#define DTS030CM_PEID2 DTS030CM_BASE.BIT._PEID2
#define DTS031CM DTS031CM_BASE.UINT32
#define DTS031CM_CMC0 DTS031CM_BASE.BIT._CMC0
#define DTS031CM_CMC1 DTS031CM_BASE.BIT._CMC1
#define DTS031CM_CMC2 DTS031CM_BASE.BIT._CMC2
#define DTS031CM_CMC3 DTS031CM_BASE.BIT._CMC3
#define DTS031CM_CMC4 DTS031CM_BASE.BIT._CMC4
#define DTS031CM_CMC5 DTS031CM_BASE.BIT._CMC5
#define DTS031CM_CMC6 DTS031CM_BASE.BIT._CMC6
#define DTS031CM_CMC7 DTS031CM_BASE.BIT._CMC7
#define DTS031CM_CMC8 DTS031CM_BASE.BIT._CMC8
#define DTS031CM_CMC9 DTS031CM_BASE.BIT._CMC9
#define DTS031CM_CMC10 DTS031CM_BASE.BIT._CMC10
#define DTS031CM_CMC11 DTS031CM_BASE.BIT._CMC11
#define DTS031CM_CMC12 DTS031CM_BASE.BIT._CMC12
#define DTS031CM_CMC13 DTS031CM_BASE.BIT._CMC13
#define DTS031CM_CMC14 DTS031CM_BASE.BIT._CMC14
#define DTS031CM_CMC15 DTS031CM_BASE.BIT._CMC15
#define DTS031CM_UM DTS031CM_BASE.BIT._UM
#define DTS031CM_SPID0 DTS031CM_BASE.BIT._SPID0
#define DTS031CM_SPID1 DTS031CM_BASE.BIT._SPID1
#define DTS031CM_SPID2 DTS031CM_BASE.BIT._SPID2
#define DTS031CM_SPID3 DTS031CM_BASE.BIT._SPID3
#define DTS031CM_SPID4 DTS031CM_BASE.BIT._SPID4
#define DTS031CM_PEID0 DTS031CM_BASE.BIT._PEID0
#define DTS031CM_PEID1 DTS031CM_BASE.BIT._PEID1
#define DTS031CM_PEID2 DTS031CM_BASE.BIT._PEID2
#define DTS032CM DTS032CM_BASE.UINT32
#define DTS032CM_CMC0 DTS032CM_BASE.BIT._CMC0
#define DTS032CM_CMC1 DTS032CM_BASE.BIT._CMC1
#define DTS032CM_CMC2 DTS032CM_BASE.BIT._CMC2
#define DTS032CM_CMC3 DTS032CM_BASE.BIT._CMC3
#define DTS032CM_CMC4 DTS032CM_BASE.BIT._CMC4
#define DTS032CM_CMC5 DTS032CM_BASE.BIT._CMC5
#define DTS032CM_CMC6 DTS032CM_BASE.BIT._CMC6
#define DTS032CM_CMC7 DTS032CM_BASE.BIT._CMC7
#define DTS032CM_CMC8 DTS032CM_BASE.BIT._CMC8
#define DTS032CM_CMC9 DTS032CM_BASE.BIT._CMC9
#define DTS032CM_CMC10 DTS032CM_BASE.BIT._CMC10
#define DTS032CM_CMC11 DTS032CM_BASE.BIT._CMC11
#define DTS032CM_CMC12 DTS032CM_BASE.BIT._CMC12
#define DTS032CM_CMC13 DTS032CM_BASE.BIT._CMC13
#define DTS032CM_CMC14 DTS032CM_BASE.BIT._CMC14
#define DTS032CM_CMC15 DTS032CM_BASE.BIT._CMC15
#define DTS032CM_UM DTS032CM_BASE.BIT._UM
#define DTS032CM_SPID0 DTS032CM_BASE.BIT._SPID0
#define DTS032CM_SPID1 DTS032CM_BASE.BIT._SPID1
#define DTS032CM_SPID2 DTS032CM_BASE.BIT._SPID2
#define DTS032CM_SPID3 DTS032CM_BASE.BIT._SPID3
#define DTS032CM_SPID4 DTS032CM_BASE.BIT._SPID4
#define DTS032CM_PEID0 DTS032CM_BASE.BIT._PEID0
#define DTS032CM_PEID1 DTS032CM_BASE.BIT._PEID1
#define DTS032CM_PEID2 DTS032CM_BASE.BIT._PEID2
#define DTS033CM DTS033CM_BASE.UINT32
#define DTS033CM_CMC0 DTS033CM_BASE.BIT._CMC0
#define DTS033CM_CMC1 DTS033CM_BASE.BIT._CMC1
#define DTS033CM_CMC2 DTS033CM_BASE.BIT._CMC2
#define DTS033CM_CMC3 DTS033CM_BASE.BIT._CMC3
#define DTS033CM_CMC4 DTS033CM_BASE.BIT._CMC4
#define DTS033CM_CMC5 DTS033CM_BASE.BIT._CMC5
#define DTS033CM_CMC6 DTS033CM_BASE.BIT._CMC6
#define DTS033CM_CMC7 DTS033CM_BASE.BIT._CMC7
#define DTS033CM_CMC8 DTS033CM_BASE.BIT._CMC8
#define DTS033CM_CMC9 DTS033CM_BASE.BIT._CMC9
#define DTS033CM_CMC10 DTS033CM_BASE.BIT._CMC10
#define DTS033CM_CMC11 DTS033CM_BASE.BIT._CMC11
#define DTS033CM_CMC12 DTS033CM_BASE.BIT._CMC12
#define DTS033CM_CMC13 DTS033CM_BASE.BIT._CMC13
#define DTS033CM_CMC14 DTS033CM_BASE.BIT._CMC14
#define DTS033CM_CMC15 DTS033CM_BASE.BIT._CMC15
#define DTS033CM_UM DTS033CM_BASE.BIT._UM
#define DTS033CM_SPID0 DTS033CM_BASE.BIT._SPID0
#define DTS033CM_SPID1 DTS033CM_BASE.BIT._SPID1
#define DTS033CM_SPID2 DTS033CM_BASE.BIT._SPID2
#define DTS033CM_SPID3 DTS033CM_BASE.BIT._SPID3
#define DTS033CM_SPID4 DTS033CM_BASE.BIT._SPID4
#define DTS033CM_PEID0 DTS033CM_BASE.BIT._PEID0
#define DTS033CM_PEID1 DTS033CM_BASE.BIT._PEID1
#define DTS033CM_PEID2 DTS033CM_BASE.BIT._PEID2
#define DTS034CM DTS034CM_BASE.UINT32
#define DTS034CM_CMC0 DTS034CM_BASE.BIT._CMC0
#define DTS034CM_CMC1 DTS034CM_BASE.BIT._CMC1
#define DTS034CM_CMC2 DTS034CM_BASE.BIT._CMC2
#define DTS034CM_CMC3 DTS034CM_BASE.BIT._CMC3
#define DTS034CM_CMC4 DTS034CM_BASE.BIT._CMC4
#define DTS034CM_CMC5 DTS034CM_BASE.BIT._CMC5
#define DTS034CM_CMC6 DTS034CM_BASE.BIT._CMC6
#define DTS034CM_CMC7 DTS034CM_BASE.BIT._CMC7
#define DTS034CM_CMC8 DTS034CM_BASE.BIT._CMC8
#define DTS034CM_CMC9 DTS034CM_BASE.BIT._CMC9
#define DTS034CM_CMC10 DTS034CM_BASE.BIT._CMC10
#define DTS034CM_CMC11 DTS034CM_BASE.BIT._CMC11
#define DTS034CM_CMC12 DTS034CM_BASE.BIT._CMC12
#define DTS034CM_CMC13 DTS034CM_BASE.BIT._CMC13
#define DTS034CM_CMC14 DTS034CM_BASE.BIT._CMC14
#define DTS034CM_CMC15 DTS034CM_BASE.BIT._CMC15
#define DTS034CM_UM DTS034CM_BASE.BIT._UM
#define DTS034CM_SPID0 DTS034CM_BASE.BIT._SPID0
#define DTS034CM_SPID1 DTS034CM_BASE.BIT._SPID1
#define DTS034CM_SPID2 DTS034CM_BASE.BIT._SPID2
#define DTS034CM_SPID3 DTS034CM_BASE.BIT._SPID3
#define DTS034CM_SPID4 DTS034CM_BASE.BIT._SPID4
#define DTS034CM_PEID0 DTS034CM_BASE.BIT._PEID0
#define DTS034CM_PEID1 DTS034CM_BASE.BIT._PEID1
#define DTS034CM_PEID2 DTS034CM_BASE.BIT._PEID2
#define DTS035CM DTS035CM_BASE.UINT32
#define DTS035CM_CMC0 DTS035CM_BASE.BIT._CMC0
#define DTS035CM_CMC1 DTS035CM_BASE.BIT._CMC1
#define DTS035CM_CMC2 DTS035CM_BASE.BIT._CMC2
#define DTS035CM_CMC3 DTS035CM_BASE.BIT._CMC3
#define DTS035CM_CMC4 DTS035CM_BASE.BIT._CMC4
#define DTS035CM_CMC5 DTS035CM_BASE.BIT._CMC5
#define DTS035CM_CMC6 DTS035CM_BASE.BIT._CMC6
#define DTS035CM_CMC7 DTS035CM_BASE.BIT._CMC7
#define DTS035CM_CMC8 DTS035CM_BASE.BIT._CMC8
#define DTS035CM_CMC9 DTS035CM_BASE.BIT._CMC9
#define DTS035CM_CMC10 DTS035CM_BASE.BIT._CMC10
#define DTS035CM_CMC11 DTS035CM_BASE.BIT._CMC11
#define DTS035CM_CMC12 DTS035CM_BASE.BIT._CMC12
#define DTS035CM_CMC13 DTS035CM_BASE.BIT._CMC13
#define DTS035CM_CMC14 DTS035CM_BASE.BIT._CMC14
#define DTS035CM_CMC15 DTS035CM_BASE.BIT._CMC15
#define DTS035CM_UM DTS035CM_BASE.BIT._UM
#define DTS035CM_SPID0 DTS035CM_BASE.BIT._SPID0
#define DTS035CM_SPID1 DTS035CM_BASE.BIT._SPID1
#define DTS035CM_SPID2 DTS035CM_BASE.BIT._SPID2
#define DTS035CM_SPID3 DTS035CM_BASE.BIT._SPID3
#define DTS035CM_SPID4 DTS035CM_BASE.BIT._SPID4
#define DTS035CM_PEID0 DTS035CM_BASE.BIT._PEID0
#define DTS035CM_PEID1 DTS035CM_BASE.BIT._PEID1
#define DTS035CM_PEID2 DTS035CM_BASE.BIT._PEID2
#define DTS036CM DTS036CM_BASE.UINT32
#define DTS036CM_CMC0 DTS036CM_BASE.BIT._CMC0
#define DTS036CM_CMC1 DTS036CM_BASE.BIT._CMC1
#define DTS036CM_CMC2 DTS036CM_BASE.BIT._CMC2
#define DTS036CM_CMC3 DTS036CM_BASE.BIT._CMC3
#define DTS036CM_CMC4 DTS036CM_BASE.BIT._CMC4
#define DTS036CM_CMC5 DTS036CM_BASE.BIT._CMC5
#define DTS036CM_CMC6 DTS036CM_BASE.BIT._CMC6
#define DTS036CM_CMC7 DTS036CM_BASE.BIT._CMC7
#define DTS036CM_CMC8 DTS036CM_BASE.BIT._CMC8
#define DTS036CM_CMC9 DTS036CM_BASE.BIT._CMC9
#define DTS036CM_CMC10 DTS036CM_BASE.BIT._CMC10
#define DTS036CM_CMC11 DTS036CM_BASE.BIT._CMC11
#define DTS036CM_CMC12 DTS036CM_BASE.BIT._CMC12
#define DTS036CM_CMC13 DTS036CM_BASE.BIT._CMC13
#define DTS036CM_CMC14 DTS036CM_BASE.BIT._CMC14
#define DTS036CM_CMC15 DTS036CM_BASE.BIT._CMC15
#define DTS036CM_UM DTS036CM_BASE.BIT._UM
#define DTS036CM_SPID0 DTS036CM_BASE.BIT._SPID0
#define DTS036CM_SPID1 DTS036CM_BASE.BIT._SPID1
#define DTS036CM_SPID2 DTS036CM_BASE.BIT._SPID2
#define DTS036CM_SPID3 DTS036CM_BASE.BIT._SPID3
#define DTS036CM_SPID4 DTS036CM_BASE.BIT._SPID4
#define DTS036CM_PEID0 DTS036CM_BASE.BIT._PEID0
#define DTS036CM_PEID1 DTS036CM_BASE.BIT._PEID1
#define DTS036CM_PEID2 DTS036CM_BASE.BIT._PEID2
#define DTS037CM DTS037CM_BASE.UINT32
#define DTS037CM_CMC0 DTS037CM_BASE.BIT._CMC0
#define DTS037CM_CMC1 DTS037CM_BASE.BIT._CMC1
#define DTS037CM_CMC2 DTS037CM_BASE.BIT._CMC2
#define DTS037CM_CMC3 DTS037CM_BASE.BIT._CMC3
#define DTS037CM_CMC4 DTS037CM_BASE.BIT._CMC4
#define DTS037CM_CMC5 DTS037CM_BASE.BIT._CMC5
#define DTS037CM_CMC6 DTS037CM_BASE.BIT._CMC6
#define DTS037CM_CMC7 DTS037CM_BASE.BIT._CMC7
#define DTS037CM_CMC8 DTS037CM_BASE.BIT._CMC8
#define DTS037CM_CMC9 DTS037CM_BASE.BIT._CMC9
#define DTS037CM_CMC10 DTS037CM_BASE.BIT._CMC10
#define DTS037CM_CMC11 DTS037CM_BASE.BIT._CMC11
#define DTS037CM_CMC12 DTS037CM_BASE.BIT._CMC12
#define DTS037CM_CMC13 DTS037CM_BASE.BIT._CMC13
#define DTS037CM_CMC14 DTS037CM_BASE.BIT._CMC14
#define DTS037CM_CMC15 DTS037CM_BASE.BIT._CMC15
#define DTS037CM_UM DTS037CM_BASE.BIT._UM
#define DTS037CM_SPID0 DTS037CM_BASE.BIT._SPID0
#define DTS037CM_SPID1 DTS037CM_BASE.BIT._SPID1
#define DTS037CM_SPID2 DTS037CM_BASE.BIT._SPID2
#define DTS037CM_SPID3 DTS037CM_BASE.BIT._SPID3
#define DTS037CM_SPID4 DTS037CM_BASE.BIT._SPID4
#define DTS037CM_PEID0 DTS037CM_BASE.BIT._PEID0
#define DTS037CM_PEID1 DTS037CM_BASE.BIT._PEID1
#define DTS037CM_PEID2 DTS037CM_BASE.BIT._PEID2
#define DTS038CM DTS038CM_BASE.UINT32
#define DTS038CM_CMC0 DTS038CM_BASE.BIT._CMC0
#define DTS038CM_CMC1 DTS038CM_BASE.BIT._CMC1
#define DTS038CM_CMC2 DTS038CM_BASE.BIT._CMC2
#define DTS038CM_CMC3 DTS038CM_BASE.BIT._CMC3
#define DTS038CM_CMC4 DTS038CM_BASE.BIT._CMC4
#define DTS038CM_CMC5 DTS038CM_BASE.BIT._CMC5
#define DTS038CM_CMC6 DTS038CM_BASE.BIT._CMC6
#define DTS038CM_CMC7 DTS038CM_BASE.BIT._CMC7
#define DTS038CM_CMC8 DTS038CM_BASE.BIT._CMC8
#define DTS038CM_CMC9 DTS038CM_BASE.BIT._CMC9
#define DTS038CM_CMC10 DTS038CM_BASE.BIT._CMC10
#define DTS038CM_CMC11 DTS038CM_BASE.BIT._CMC11
#define DTS038CM_CMC12 DTS038CM_BASE.BIT._CMC12
#define DTS038CM_CMC13 DTS038CM_BASE.BIT._CMC13
#define DTS038CM_CMC14 DTS038CM_BASE.BIT._CMC14
#define DTS038CM_CMC15 DTS038CM_BASE.BIT._CMC15
#define DTS038CM_UM DTS038CM_BASE.BIT._UM
#define DTS038CM_SPID0 DTS038CM_BASE.BIT._SPID0
#define DTS038CM_SPID1 DTS038CM_BASE.BIT._SPID1
#define DTS038CM_SPID2 DTS038CM_BASE.BIT._SPID2
#define DTS038CM_SPID3 DTS038CM_BASE.BIT._SPID3
#define DTS038CM_SPID4 DTS038CM_BASE.BIT._SPID4
#define DTS038CM_PEID0 DTS038CM_BASE.BIT._PEID0
#define DTS038CM_PEID1 DTS038CM_BASE.BIT._PEID1
#define DTS038CM_PEID2 DTS038CM_BASE.BIT._PEID2
#define DTS039CM DTS039CM_BASE.UINT32
#define DTS039CM_CMC0 DTS039CM_BASE.BIT._CMC0
#define DTS039CM_CMC1 DTS039CM_BASE.BIT._CMC1
#define DTS039CM_CMC2 DTS039CM_BASE.BIT._CMC2
#define DTS039CM_CMC3 DTS039CM_BASE.BIT._CMC3
#define DTS039CM_CMC4 DTS039CM_BASE.BIT._CMC4
#define DTS039CM_CMC5 DTS039CM_BASE.BIT._CMC5
#define DTS039CM_CMC6 DTS039CM_BASE.BIT._CMC6
#define DTS039CM_CMC7 DTS039CM_BASE.BIT._CMC7
#define DTS039CM_CMC8 DTS039CM_BASE.BIT._CMC8
#define DTS039CM_CMC9 DTS039CM_BASE.BIT._CMC9
#define DTS039CM_CMC10 DTS039CM_BASE.BIT._CMC10
#define DTS039CM_CMC11 DTS039CM_BASE.BIT._CMC11
#define DTS039CM_CMC12 DTS039CM_BASE.BIT._CMC12
#define DTS039CM_CMC13 DTS039CM_BASE.BIT._CMC13
#define DTS039CM_CMC14 DTS039CM_BASE.BIT._CMC14
#define DTS039CM_CMC15 DTS039CM_BASE.BIT._CMC15
#define DTS039CM_UM DTS039CM_BASE.BIT._UM
#define DTS039CM_SPID0 DTS039CM_BASE.BIT._SPID0
#define DTS039CM_SPID1 DTS039CM_BASE.BIT._SPID1
#define DTS039CM_SPID2 DTS039CM_BASE.BIT._SPID2
#define DTS039CM_SPID3 DTS039CM_BASE.BIT._SPID3
#define DTS039CM_SPID4 DTS039CM_BASE.BIT._SPID4
#define DTS039CM_PEID0 DTS039CM_BASE.BIT._PEID0
#define DTS039CM_PEID1 DTS039CM_BASE.BIT._PEID1
#define DTS039CM_PEID2 DTS039CM_BASE.BIT._PEID2
#define DTS040CM DTS040CM_BASE.UINT32
#define DTS040CM_CMC0 DTS040CM_BASE.BIT._CMC0
#define DTS040CM_CMC1 DTS040CM_BASE.BIT._CMC1
#define DTS040CM_CMC2 DTS040CM_BASE.BIT._CMC2
#define DTS040CM_CMC3 DTS040CM_BASE.BIT._CMC3
#define DTS040CM_CMC4 DTS040CM_BASE.BIT._CMC4
#define DTS040CM_CMC5 DTS040CM_BASE.BIT._CMC5
#define DTS040CM_CMC6 DTS040CM_BASE.BIT._CMC6
#define DTS040CM_CMC7 DTS040CM_BASE.BIT._CMC7
#define DTS040CM_CMC8 DTS040CM_BASE.BIT._CMC8
#define DTS040CM_CMC9 DTS040CM_BASE.BIT._CMC9
#define DTS040CM_CMC10 DTS040CM_BASE.BIT._CMC10
#define DTS040CM_CMC11 DTS040CM_BASE.BIT._CMC11
#define DTS040CM_CMC12 DTS040CM_BASE.BIT._CMC12
#define DTS040CM_CMC13 DTS040CM_BASE.BIT._CMC13
#define DTS040CM_CMC14 DTS040CM_BASE.BIT._CMC14
#define DTS040CM_CMC15 DTS040CM_BASE.BIT._CMC15
#define DTS040CM_UM DTS040CM_BASE.BIT._UM
#define DTS040CM_SPID0 DTS040CM_BASE.BIT._SPID0
#define DTS040CM_SPID1 DTS040CM_BASE.BIT._SPID1
#define DTS040CM_SPID2 DTS040CM_BASE.BIT._SPID2
#define DTS040CM_SPID3 DTS040CM_BASE.BIT._SPID3
#define DTS040CM_SPID4 DTS040CM_BASE.BIT._SPID4
#define DTS040CM_PEID0 DTS040CM_BASE.BIT._PEID0
#define DTS040CM_PEID1 DTS040CM_BASE.BIT._PEID1
#define DTS040CM_PEID2 DTS040CM_BASE.BIT._PEID2
#define DTS041CM DTS041CM_BASE.UINT32
#define DTS041CM_CMC0 DTS041CM_BASE.BIT._CMC0
#define DTS041CM_CMC1 DTS041CM_BASE.BIT._CMC1
#define DTS041CM_CMC2 DTS041CM_BASE.BIT._CMC2
#define DTS041CM_CMC3 DTS041CM_BASE.BIT._CMC3
#define DTS041CM_CMC4 DTS041CM_BASE.BIT._CMC4
#define DTS041CM_CMC5 DTS041CM_BASE.BIT._CMC5
#define DTS041CM_CMC6 DTS041CM_BASE.BIT._CMC6
#define DTS041CM_CMC7 DTS041CM_BASE.BIT._CMC7
#define DTS041CM_CMC8 DTS041CM_BASE.BIT._CMC8
#define DTS041CM_CMC9 DTS041CM_BASE.BIT._CMC9
#define DTS041CM_CMC10 DTS041CM_BASE.BIT._CMC10
#define DTS041CM_CMC11 DTS041CM_BASE.BIT._CMC11
#define DTS041CM_CMC12 DTS041CM_BASE.BIT._CMC12
#define DTS041CM_CMC13 DTS041CM_BASE.BIT._CMC13
#define DTS041CM_CMC14 DTS041CM_BASE.BIT._CMC14
#define DTS041CM_CMC15 DTS041CM_BASE.BIT._CMC15
#define DTS041CM_UM DTS041CM_BASE.BIT._UM
#define DTS041CM_SPID0 DTS041CM_BASE.BIT._SPID0
#define DTS041CM_SPID1 DTS041CM_BASE.BIT._SPID1
#define DTS041CM_SPID2 DTS041CM_BASE.BIT._SPID2
#define DTS041CM_SPID3 DTS041CM_BASE.BIT._SPID3
#define DTS041CM_SPID4 DTS041CM_BASE.BIT._SPID4
#define DTS041CM_PEID0 DTS041CM_BASE.BIT._PEID0
#define DTS041CM_PEID1 DTS041CM_BASE.BIT._PEID1
#define DTS041CM_PEID2 DTS041CM_BASE.BIT._PEID2
#define DTS042CM DTS042CM_BASE.UINT32
#define DTS042CM_CMC0 DTS042CM_BASE.BIT._CMC0
#define DTS042CM_CMC1 DTS042CM_BASE.BIT._CMC1
#define DTS042CM_CMC2 DTS042CM_BASE.BIT._CMC2
#define DTS042CM_CMC3 DTS042CM_BASE.BIT._CMC3
#define DTS042CM_CMC4 DTS042CM_BASE.BIT._CMC4
#define DTS042CM_CMC5 DTS042CM_BASE.BIT._CMC5
#define DTS042CM_CMC6 DTS042CM_BASE.BIT._CMC6
#define DTS042CM_CMC7 DTS042CM_BASE.BIT._CMC7
#define DTS042CM_CMC8 DTS042CM_BASE.BIT._CMC8
#define DTS042CM_CMC9 DTS042CM_BASE.BIT._CMC9
#define DTS042CM_CMC10 DTS042CM_BASE.BIT._CMC10
#define DTS042CM_CMC11 DTS042CM_BASE.BIT._CMC11
#define DTS042CM_CMC12 DTS042CM_BASE.BIT._CMC12
#define DTS042CM_CMC13 DTS042CM_BASE.BIT._CMC13
#define DTS042CM_CMC14 DTS042CM_BASE.BIT._CMC14
#define DTS042CM_CMC15 DTS042CM_BASE.BIT._CMC15
#define DTS042CM_UM DTS042CM_BASE.BIT._UM
#define DTS042CM_SPID0 DTS042CM_BASE.BIT._SPID0
#define DTS042CM_SPID1 DTS042CM_BASE.BIT._SPID1
#define DTS042CM_SPID2 DTS042CM_BASE.BIT._SPID2
#define DTS042CM_SPID3 DTS042CM_BASE.BIT._SPID3
#define DTS042CM_SPID4 DTS042CM_BASE.BIT._SPID4
#define DTS042CM_PEID0 DTS042CM_BASE.BIT._PEID0
#define DTS042CM_PEID1 DTS042CM_BASE.BIT._PEID1
#define DTS042CM_PEID2 DTS042CM_BASE.BIT._PEID2
#define DTS043CM DTS043CM_BASE.UINT32
#define DTS043CM_CMC0 DTS043CM_BASE.BIT._CMC0
#define DTS043CM_CMC1 DTS043CM_BASE.BIT._CMC1
#define DTS043CM_CMC2 DTS043CM_BASE.BIT._CMC2
#define DTS043CM_CMC3 DTS043CM_BASE.BIT._CMC3
#define DTS043CM_CMC4 DTS043CM_BASE.BIT._CMC4
#define DTS043CM_CMC5 DTS043CM_BASE.BIT._CMC5
#define DTS043CM_CMC6 DTS043CM_BASE.BIT._CMC6
#define DTS043CM_CMC7 DTS043CM_BASE.BIT._CMC7
#define DTS043CM_CMC8 DTS043CM_BASE.BIT._CMC8
#define DTS043CM_CMC9 DTS043CM_BASE.BIT._CMC9
#define DTS043CM_CMC10 DTS043CM_BASE.BIT._CMC10
#define DTS043CM_CMC11 DTS043CM_BASE.BIT._CMC11
#define DTS043CM_CMC12 DTS043CM_BASE.BIT._CMC12
#define DTS043CM_CMC13 DTS043CM_BASE.BIT._CMC13
#define DTS043CM_CMC14 DTS043CM_BASE.BIT._CMC14
#define DTS043CM_CMC15 DTS043CM_BASE.BIT._CMC15
#define DTS043CM_UM DTS043CM_BASE.BIT._UM
#define DTS043CM_SPID0 DTS043CM_BASE.BIT._SPID0
#define DTS043CM_SPID1 DTS043CM_BASE.BIT._SPID1
#define DTS043CM_SPID2 DTS043CM_BASE.BIT._SPID2
#define DTS043CM_SPID3 DTS043CM_BASE.BIT._SPID3
#define DTS043CM_SPID4 DTS043CM_BASE.BIT._SPID4
#define DTS043CM_PEID0 DTS043CM_BASE.BIT._PEID0
#define DTS043CM_PEID1 DTS043CM_BASE.BIT._PEID1
#define DTS043CM_PEID2 DTS043CM_BASE.BIT._PEID2
#define DTS044CM DTS044CM_BASE.UINT32
#define DTS044CM_CMC0 DTS044CM_BASE.BIT._CMC0
#define DTS044CM_CMC1 DTS044CM_BASE.BIT._CMC1
#define DTS044CM_CMC2 DTS044CM_BASE.BIT._CMC2
#define DTS044CM_CMC3 DTS044CM_BASE.BIT._CMC3
#define DTS044CM_CMC4 DTS044CM_BASE.BIT._CMC4
#define DTS044CM_CMC5 DTS044CM_BASE.BIT._CMC5
#define DTS044CM_CMC6 DTS044CM_BASE.BIT._CMC6
#define DTS044CM_CMC7 DTS044CM_BASE.BIT._CMC7
#define DTS044CM_CMC8 DTS044CM_BASE.BIT._CMC8
#define DTS044CM_CMC9 DTS044CM_BASE.BIT._CMC9
#define DTS044CM_CMC10 DTS044CM_BASE.BIT._CMC10
#define DTS044CM_CMC11 DTS044CM_BASE.BIT._CMC11
#define DTS044CM_CMC12 DTS044CM_BASE.BIT._CMC12
#define DTS044CM_CMC13 DTS044CM_BASE.BIT._CMC13
#define DTS044CM_CMC14 DTS044CM_BASE.BIT._CMC14
#define DTS044CM_CMC15 DTS044CM_BASE.BIT._CMC15
#define DTS044CM_UM DTS044CM_BASE.BIT._UM
#define DTS044CM_SPID0 DTS044CM_BASE.BIT._SPID0
#define DTS044CM_SPID1 DTS044CM_BASE.BIT._SPID1
#define DTS044CM_SPID2 DTS044CM_BASE.BIT._SPID2
#define DTS044CM_SPID3 DTS044CM_BASE.BIT._SPID3
#define DTS044CM_SPID4 DTS044CM_BASE.BIT._SPID4
#define DTS044CM_PEID0 DTS044CM_BASE.BIT._PEID0
#define DTS044CM_PEID1 DTS044CM_BASE.BIT._PEID1
#define DTS044CM_PEID2 DTS044CM_BASE.BIT._PEID2
#define DTS045CM DTS045CM_BASE.UINT32
#define DTS045CM_CMC0 DTS045CM_BASE.BIT._CMC0
#define DTS045CM_CMC1 DTS045CM_BASE.BIT._CMC1
#define DTS045CM_CMC2 DTS045CM_BASE.BIT._CMC2
#define DTS045CM_CMC3 DTS045CM_BASE.BIT._CMC3
#define DTS045CM_CMC4 DTS045CM_BASE.BIT._CMC4
#define DTS045CM_CMC5 DTS045CM_BASE.BIT._CMC5
#define DTS045CM_CMC6 DTS045CM_BASE.BIT._CMC6
#define DTS045CM_CMC7 DTS045CM_BASE.BIT._CMC7
#define DTS045CM_CMC8 DTS045CM_BASE.BIT._CMC8
#define DTS045CM_CMC9 DTS045CM_BASE.BIT._CMC9
#define DTS045CM_CMC10 DTS045CM_BASE.BIT._CMC10
#define DTS045CM_CMC11 DTS045CM_BASE.BIT._CMC11
#define DTS045CM_CMC12 DTS045CM_BASE.BIT._CMC12
#define DTS045CM_CMC13 DTS045CM_BASE.BIT._CMC13
#define DTS045CM_CMC14 DTS045CM_BASE.BIT._CMC14
#define DTS045CM_CMC15 DTS045CM_BASE.BIT._CMC15
#define DTS045CM_UM DTS045CM_BASE.BIT._UM
#define DTS045CM_SPID0 DTS045CM_BASE.BIT._SPID0
#define DTS045CM_SPID1 DTS045CM_BASE.BIT._SPID1
#define DTS045CM_SPID2 DTS045CM_BASE.BIT._SPID2
#define DTS045CM_SPID3 DTS045CM_BASE.BIT._SPID3
#define DTS045CM_SPID4 DTS045CM_BASE.BIT._SPID4
#define DTS045CM_PEID0 DTS045CM_BASE.BIT._PEID0
#define DTS045CM_PEID1 DTS045CM_BASE.BIT._PEID1
#define DTS045CM_PEID2 DTS045CM_BASE.BIT._PEID2
#define DTS046CM DTS046CM_BASE.UINT32
#define DTS046CM_CMC0 DTS046CM_BASE.BIT._CMC0
#define DTS046CM_CMC1 DTS046CM_BASE.BIT._CMC1
#define DTS046CM_CMC2 DTS046CM_BASE.BIT._CMC2
#define DTS046CM_CMC3 DTS046CM_BASE.BIT._CMC3
#define DTS046CM_CMC4 DTS046CM_BASE.BIT._CMC4
#define DTS046CM_CMC5 DTS046CM_BASE.BIT._CMC5
#define DTS046CM_CMC6 DTS046CM_BASE.BIT._CMC6
#define DTS046CM_CMC7 DTS046CM_BASE.BIT._CMC7
#define DTS046CM_CMC8 DTS046CM_BASE.BIT._CMC8
#define DTS046CM_CMC9 DTS046CM_BASE.BIT._CMC9
#define DTS046CM_CMC10 DTS046CM_BASE.BIT._CMC10
#define DTS046CM_CMC11 DTS046CM_BASE.BIT._CMC11
#define DTS046CM_CMC12 DTS046CM_BASE.BIT._CMC12
#define DTS046CM_CMC13 DTS046CM_BASE.BIT._CMC13
#define DTS046CM_CMC14 DTS046CM_BASE.BIT._CMC14
#define DTS046CM_CMC15 DTS046CM_BASE.BIT._CMC15
#define DTS046CM_UM DTS046CM_BASE.BIT._UM
#define DTS046CM_SPID0 DTS046CM_BASE.BIT._SPID0
#define DTS046CM_SPID1 DTS046CM_BASE.BIT._SPID1
#define DTS046CM_SPID2 DTS046CM_BASE.BIT._SPID2
#define DTS046CM_SPID3 DTS046CM_BASE.BIT._SPID3
#define DTS046CM_SPID4 DTS046CM_BASE.BIT._SPID4
#define DTS046CM_PEID0 DTS046CM_BASE.BIT._PEID0
#define DTS046CM_PEID1 DTS046CM_BASE.BIT._PEID1
#define DTS046CM_PEID2 DTS046CM_BASE.BIT._PEID2
#define DTS047CM DTS047CM_BASE.UINT32
#define DTS047CM_CMC0 DTS047CM_BASE.BIT._CMC0
#define DTS047CM_CMC1 DTS047CM_BASE.BIT._CMC1
#define DTS047CM_CMC2 DTS047CM_BASE.BIT._CMC2
#define DTS047CM_CMC3 DTS047CM_BASE.BIT._CMC3
#define DTS047CM_CMC4 DTS047CM_BASE.BIT._CMC4
#define DTS047CM_CMC5 DTS047CM_BASE.BIT._CMC5
#define DTS047CM_CMC6 DTS047CM_BASE.BIT._CMC6
#define DTS047CM_CMC7 DTS047CM_BASE.BIT._CMC7
#define DTS047CM_CMC8 DTS047CM_BASE.BIT._CMC8
#define DTS047CM_CMC9 DTS047CM_BASE.BIT._CMC9
#define DTS047CM_CMC10 DTS047CM_BASE.BIT._CMC10
#define DTS047CM_CMC11 DTS047CM_BASE.BIT._CMC11
#define DTS047CM_CMC12 DTS047CM_BASE.BIT._CMC12
#define DTS047CM_CMC13 DTS047CM_BASE.BIT._CMC13
#define DTS047CM_CMC14 DTS047CM_BASE.BIT._CMC14
#define DTS047CM_CMC15 DTS047CM_BASE.BIT._CMC15
#define DTS047CM_UM DTS047CM_BASE.BIT._UM
#define DTS047CM_SPID0 DTS047CM_BASE.BIT._SPID0
#define DTS047CM_SPID1 DTS047CM_BASE.BIT._SPID1
#define DTS047CM_SPID2 DTS047CM_BASE.BIT._SPID2
#define DTS047CM_SPID3 DTS047CM_BASE.BIT._SPID3
#define DTS047CM_SPID4 DTS047CM_BASE.BIT._SPID4
#define DTS047CM_PEID0 DTS047CM_BASE.BIT._PEID0
#define DTS047CM_PEID1 DTS047CM_BASE.BIT._PEID1
#define DTS047CM_PEID2 DTS047CM_BASE.BIT._PEID2
#define DTS048CM DTS048CM_BASE.UINT32
#define DTS048CM_CMC0 DTS048CM_BASE.BIT._CMC0
#define DTS048CM_CMC1 DTS048CM_BASE.BIT._CMC1
#define DTS048CM_CMC2 DTS048CM_BASE.BIT._CMC2
#define DTS048CM_CMC3 DTS048CM_BASE.BIT._CMC3
#define DTS048CM_CMC4 DTS048CM_BASE.BIT._CMC4
#define DTS048CM_CMC5 DTS048CM_BASE.BIT._CMC5
#define DTS048CM_CMC6 DTS048CM_BASE.BIT._CMC6
#define DTS048CM_CMC7 DTS048CM_BASE.BIT._CMC7
#define DTS048CM_CMC8 DTS048CM_BASE.BIT._CMC8
#define DTS048CM_CMC9 DTS048CM_BASE.BIT._CMC9
#define DTS048CM_CMC10 DTS048CM_BASE.BIT._CMC10
#define DTS048CM_CMC11 DTS048CM_BASE.BIT._CMC11
#define DTS048CM_CMC12 DTS048CM_BASE.BIT._CMC12
#define DTS048CM_CMC13 DTS048CM_BASE.BIT._CMC13
#define DTS048CM_CMC14 DTS048CM_BASE.BIT._CMC14
#define DTS048CM_CMC15 DTS048CM_BASE.BIT._CMC15
#define DTS048CM_UM DTS048CM_BASE.BIT._UM
#define DTS048CM_SPID0 DTS048CM_BASE.BIT._SPID0
#define DTS048CM_SPID1 DTS048CM_BASE.BIT._SPID1
#define DTS048CM_SPID2 DTS048CM_BASE.BIT._SPID2
#define DTS048CM_SPID3 DTS048CM_BASE.BIT._SPID3
#define DTS048CM_SPID4 DTS048CM_BASE.BIT._SPID4
#define DTS048CM_PEID0 DTS048CM_BASE.BIT._PEID0
#define DTS048CM_PEID1 DTS048CM_BASE.BIT._PEID1
#define DTS048CM_PEID2 DTS048CM_BASE.BIT._PEID2
#define DTS049CM DTS049CM_BASE.UINT32
#define DTS049CM_CMC0 DTS049CM_BASE.BIT._CMC0
#define DTS049CM_CMC1 DTS049CM_BASE.BIT._CMC1
#define DTS049CM_CMC2 DTS049CM_BASE.BIT._CMC2
#define DTS049CM_CMC3 DTS049CM_BASE.BIT._CMC3
#define DTS049CM_CMC4 DTS049CM_BASE.BIT._CMC4
#define DTS049CM_CMC5 DTS049CM_BASE.BIT._CMC5
#define DTS049CM_CMC6 DTS049CM_BASE.BIT._CMC6
#define DTS049CM_CMC7 DTS049CM_BASE.BIT._CMC7
#define DTS049CM_CMC8 DTS049CM_BASE.BIT._CMC8
#define DTS049CM_CMC9 DTS049CM_BASE.BIT._CMC9
#define DTS049CM_CMC10 DTS049CM_BASE.BIT._CMC10
#define DTS049CM_CMC11 DTS049CM_BASE.BIT._CMC11
#define DTS049CM_CMC12 DTS049CM_BASE.BIT._CMC12
#define DTS049CM_CMC13 DTS049CM_BASE.BIT._CMC13
#define DTS049CM_CMC14 DTS049CM_BASE.BIT._CMC14
#define DTS049CM_CMC15 DTS049CM_BASE.BIT._CMC15
#define DTS049CM_UM DTS049CM_BASE.BIT._UM
#define DTS049CM_SPID0 DTS049CM_BASE.BIT._SPID0
#define DTS049CM_SPID1 DTS049CM_BASE.BIT._SPID1
#define DTS049CM_SPID2 DTS049CM_BASE.BIT._SPID2
#define DTS049CM_SPID3 DTS049CM_BASE.BIT._SPID3
#define DTS049CM_SPID4 DTS049CM_BASE.BIT._SPID4
#define DTS049CM_PEID0 DTS049CM_BASE.BIT._PEID0
#define DTS049CM_PEID1 DTS049CM_BASE.BIT._PEID1
#define DTS049CM_PEID2 DTS049CM_BASE.BIT._PEID2
#define DTS050CM DTS050CM_BASE.UINT32
#define DTS050CM_CMC0 DTS050CM_BASE.BIT._CMC0
#define DTS050CM_CMC1 DTS050CM_BASE.BIT._CMC1
#define DTS050CM_CMC2 DTS050CM_BASE.BIT._CMC2
#define DTS050CM_CMC3 DTS050CM_BASE.BIT._CMC3
#define DTS050CM_CMC4 DTS050CM_BASE.BIT._CMC4
#define DTS050CM_CMC5 DTS050CM_BASE.BIT._CMC5
#define DTS050CM_CMC6 DTS050CM_BASE.BIT._CMC6
#define DTS050CM_CMC7 DTS050CM_BASE.BIT._CMC7
#define DTS050CM_CMC8 DTS050CM_BASE.BIT._CMC8
#define DTS050CM_CMC9 DTS050CM_BASE.BIT._CMC9
#define DTS050CM_CMC10 DTS050CM_BASE.BIT._CMC10
#define DTS050CM_CMC11 DTS050CM_BASE.BIT._CMC11
#define DTS050CM_CMC12 DTS050CM_BASE.BIT._CMC12
#define DTS050CM_CMC13 DTS050CM_BASE.BIT._CMC13
#define DTS050CM_CMC14 DTS050CM_BASE.BIT._CMC14
#define DTS050CM_CMC15 DTS050CM_BASE.BIT._CMC15
#define DTS050CM_UM DTS050CM_BASE.BIT._UM
#define DTS050CM_SPID0 DTS050CM_BASE.BIT._SPID0
#define DTS050CM_SPID1 DTS050CM_BASE.BIT._SPID1
#define DTS050CM_SPID2 DTS050CM_BASE.BIT._SPID2
#define DTS050CM_SPID3 DTS050CM_BASE.BIT._SPID3
#define DTS050CM_SPID4 DTS050CM_BASE.BIT._SPID4
#define DTS050CM_PEID0 DTS050CM_BASE.BIT._PEID0
#define DTS050CM_PEID1 DTS050CM_BASE.BIT._PEID1
#define DTS050CM_PEID2 DTS050CM_BASE.BIT._PEID2
#define DTS051CM DTS051CM_BASE.UINT32
#define DTS051CM_CMC0 DTS051CM_BASE.BIT._CMC0
#define DTS051CM_CMC1 DTS051CM_BASE.BIT._CMC1
#define DTS051CM_CMC2 DTS051CM_BASE.BIT._CMC2
#define DTS051CM_CMC3 DTS051CM_BASE.BIT._CMC3
#define DTS051CM_CMC4 DTS051CM_BASE.BIT._CMC4
#define DTS051CM_CMC5 DTS051CM_BASE.BIT._CMC5
#define DTS051CM_CMC6 DTS051CM_BASE.BIT._CMC6
#define DTS051CM_CMC7 DTS051CM_BASE.BIT._CMC7
#define DTS051CM_CMC8 DTS051CM_BASE.BIT._CMC8
#define DTS051CM_CMC9 DTS051CM_BASE.BIT._CMC9
#define DTS051CM_CMC10 DTS051CM_BASE.BIT._CMC10
#define DTS051CM_CMC11 DTS051CM_BASE.BIT._CMC11
#define DTS051CM_CMC12 DTS051CM_BASE.BIT._CMC12
#define DTS051CM_CMC13 DTS051CM_BASE.BIT._CMC13
#define DTS051CM_CMC14 DTS051CM_BASE.BIT._CMC14
#define DTS051CM_CMC15 DTS051CM_BASE.BIT._CMC15
#define DTS051CM_UM DTS051CM_BASE.BIT._UM
#define DTS051CM_SPID0 DTS051CM_BASE.BIT._SPID0
#define DTS051CM_SPID1 DTS051CM_BASE.BIT._SPID1
#define DTS051CM_SPID2 DTS051CM_BASE.BIT._SPID2
#define DTS051CM_SPID3 DTS051CM_BASE.BIT._SPID3
#define DTS051CM_SPID4 DTS051CM_BASE.BIT._SPID4
#define DTS051CM_PEID0 DTS051CM_BASE.BIT._PEID0
#define DTS051CM_PEID1 DTS051CM_BASE.BIT._PEID1
#define DTS051CM_PEID2 DTS051CM_BASE.BIT._PEID2
#define DTS052CM DTS052CM_BASE.UINT32
#define DTS052CM_CMC0 DTS052CM_BASE.BIT._CMC0
#define DTS052CM_CMC1 DTS052CM_BASE.BIT._CMC1
#define DTS052CM_CMC2 DTS052CM_BASE.BIT._CMC2
#define DTS052CM_CMC3 DTS052CM_BASE.BIT._CMC3
#define DTS052CM_CMC4 DTS052CM_BASE.BIT._CMC4
#define DTS052CM_CMC5 DTS052CM_BASE.BIT._CMC5
#define DTS052CM_CMC6 DTS052CM_BASE.BIT._CMC6
#define DTS052CM_CMC7 DTS052CM_BASE.BIT._CMC7
#define DTS052CM_CMC8 DTS052CM_BASE.BIT._CMC8
#define DTS052CM_CMC9 DTS052CM_BASE.BIT._CMC9
#define DTS052CM_CMC10 DTS052CM_BASE.BIT._CMC10
#define DTS052CM_CMC11 DTS052CM_BASE.BIT._CMC11
#define DTS052CM_CMC12 DTS052CM_BASE.BIT._CMC12
#define DTS052CM_CMC13 DTS052CM_BASE.BIT._CMC13
#define DTS052CM_CMC14 DTS052CM_BASE.BIT._CMC14
#define DTS052CM_CMC15 DTS052CM_BASE.BIT._CMC15
#define DTS052CM_UM DTS052CM_BASE.BIT._UM
#define DTS052CM_SPID0 DTS052CM_BASE.BIT._SPID0
#define DTS052CM_SPID1 DTS052CM_BASE.BIT._SPID1
#define DTS052CM_SPID2 DTS052CM_BASE.BIT._SPID2
#define DTS052CM_SPID3 DTS052CM_BASE.BIT._SPID3
#define DTS052CM_SPID4 DTS052CM_BASE.BIT._SPID4
#define DTS052CM_PEID0 DTS052CM_BASE.BIT._PEID0
#define DTS052CM_PEID1 DTS052CM_BASE.BIT._PEID1
#define DTS052CM_PEID2 DTS052CM_BASE.BIT._PEID2
#define DTS053CM DTS053CM_BASE.UINT32
#define DTS053CM_CMC0 DTS053CM_BASE.BIT._CMC0
#define DTS053CM_CMC1 DTS053CM_BASE.BIT._CMC1
#define DTS053CM_CMC2 DTS053CM_BASE.BIT._CMC2
#define DTS053CM_CMC3 DTS053CM_BASE.BIT._CMC3
#define DTS053CM_CMC4 DTS053CM_BASE.BIT._CMC4
#define DTS053CM_CMC5 DTS053CM_BASE.BIT._CMC5
#define DTS053CM_CMC6 DTS053CM_BASE.BIT._CMC6
#define DTS053CM_CMC7 DTS053CM_BASE.BIT._CMC7
#define DTS053CM_CMC8 DTS053CM_BASE.BIT._CMC8
#define DTS053CM_CMC9 DTS053CM_BASE.BIT._CMC9
#define DTS053CM_CMC10 DTS053CM_BASE.BIT._CMC10
#define DTS053CM_CMC11 DTS053CM_BASE.BIT._CMC11
#define DTS053CM_CMC12 DTS053CM_BASE.BIT._CMC12
#define DTS053CM_CMC13 DTS053CM_BASE.BIT._CMC13
#define DTS053CM_CMC14 DTS053CM_BASE.BIT._CMC14
#define DTS053CM_CMC15 DTS053CM_BASE.BIT._CMC15
#define DTS053CM_UM DTS053CM_BASE.BIT._UM
#define DTS053CM_SPID0 DTS053CM_BASE.BIT._SPID0
#define DTS053CM_SPID1 DTS053CM_BASE.BIT._SPID1
#define DTS053CM_SPID2 DTS053CM_BASE.BIT._SPID2
#define DTS053CM_SPID3 DTS053CM_BASE.BIT._SPID3
#define DTS053CM_SPID4 DTS053CM_BASE.BIT._SPID4
#define DTS053CM_PEID0 DTS053CM_BASE.BIT._PEID0
#define DTS053CM_PEID1 DTS053CM_BASE.BIT._PEID1
#define DTS053CM_PEID2 DTS053CM_BASE.BIT._PEID2
#define DTS054CM DTS054CM_BASE.UINT32
#define DTS054CM_CMC0 DTS054CM_BASE.BIT._CMC0
#define DTS054CM_CMC1 DTS054CM_BASE.BIT._CMC1
#define DTS054CM_CMC2 DTS054CM_BASE.BIT._CMC2
#define DTS054CM_CMC3 DTS054CM_BASE.BIT._CMC3
#define DTS054CM_CMC4 DTS054CM_BASE.BIT._CMC4
#define DTS054CM_CMC5 DTS054CM_BASE.BIT._CMC5
#define DTS054CM_CMC6 DTS054CM_BASE.BIT._CMC6
#define DTS054CM_CMC7 DTS054CM_BASE.BIT._CMC7
#define DTS054CM_CMC8 DTS054CM_BASE.BIT._CMC8
#define DTS054CM_CMC9 DTS054CM_BASE.BIT._CMC9
#define DTS054CM_CMC10 DTS054CM_BASE.BIT._CMC10
#define DTS054CM_CMC11 DTS054CM_BASE.BIT._CMC11
#define DTS054CM_CMC12 DTS054CM_BASE.BIT._CMC12
#define DTS054CM_CMC13 DTS054CM_BASE.BIT._CMC13
#define DTS054CM_CMC14 DTS054CM_BASE.BIT._CMC14
#define DTS054CM_CMC15 DTS054CM_BASE.BIT._CMC15
#define DTS054CM_UM DTS054CM_BASE.BIT._UM
#define DTS054CM_SPID0 DTS054CM_BASE.BIT._SPID0
#define DTS054CM_SPID1 DTS054CM_BASE.BIT._SPID1
#define DTS054CM_SPID2 DTS054CM_BASE.BIT._SPID2
#define DTS054CM_SPID3 DTS054CM_BASE.BIT._SPID3
#define DTS054CM_SPID4 DTS054CM_BASE.BIT._SPID4
#define DTS054CM_PEID0 DTS054CM_BASE.BIT._PEID0
#define DTS054CM_PEID1 DTS054CM_BASE.BIT._PEID1
#define DTS054CM_PEID2 DTS054CM_BASE.BIT._PEID2
#define DTS055CM DTS055CM_BASE.UINT32
#define DTS055CM_CMC0 DTS055CM_BASE.BIT._CMC0
#define DTS055CM_CMC1 DTS055CM_BASE.BIT._CMC1
#define DTS055CM_CMC2 DTS055CM_BASE.BIT._CMC2
#define DTS055CM_CMC3 DTS055CM_BASE.BIT._CMC3
#define DTS055CM_CMC4 DTS055CM_BASE.BIT._CMC4
#define DTS055CM_CMC5 DTS055CM_BASE.BIT._CMC5
#define DTS055CM_CMC6 DTS055CM_BASE.BIT._CMC6
#define DTS055CM_CMC7 DTS055CM_BASE.BIT._CMC7
#define DTS055CM_CMC8 DTS055CM_BASE.BIT._CMC8
#define DTS055CM_CMC9 DTS055CM_BASE.BIT._CMC9
#define DTS055CM_CMC10 DTS055CM_BASE.BIT._CMC10
#define DTS055CM_CMC11 DTS055CM_BASE.BIT._CMC11
#define DTS055CM_CMC12 DTS055CM_BASE.BIT._CMC12
#define DTS055CM_CMC13 DTS055CM_BASE.BIT._CMC13
#define DTS055CM_CMC14 DTS055CM_BASE.BIT._CMC14
#define DTS055CM_CMC15 DTS055CM_BASE.BIT._CMC15
#define DTS055CM_UM DTS055CM_BASE.BIT._UM
#define DTS055CM_SPID0 DTS055CM_BASE.BIT._SPID0
#define DTS055CM_SPID1 DTS055CM_BASE.BIT._SPID1
#define DTS055CM_SPID2 DTS055CM_BASE.BIT._SPID2
#define DTS055CM_SPID3 DTS055CM_BASE.BIT._SPID3
#define DTS055CM_SPID4 DTS055CM_BASE.BIT._SPID4
#define DTS055CM_PEID0 DTS055CM_BASE.BIT._PEID0
#define DTS055CM_PEID1 DTS055CM_BASE.BIT._PEID1
#define DTS055CM_PEID2 DTS055CM_BASE.BIT._PEID2
#define DTS056CM DTS056CM_BASE.UINT32
#define DTS056CM_CMC0 DTS056CM_BASE.BIT._CMC0
#define DTS056CM_CMC1 DTS056CM_BASE.BIT._CMC1
#define DTS056CM_CMC2 DTS056CM_BASE.BIT._CMC2
#define DTS056CM_CMC3 DTS056CM_BASE.BIT._CMC3
#define DTS056CM_CMC4 DTS056CM_BASE.BIT._CMC4
#define DTS056CM_CMC5 DTS056CM_BASE.BIT._CMC5
#define DTS056CM_CMC6 DTS056CM_BASE.BIT._CMC6
#define DTS056CM_CMC7 DTS056CM_BASE.BIT._CMC7
#define DTS056CM_CMC8 DTS056CM_BASE.BIT._CMC8
#define DTS056CM_CMC9 DTS056CM_BASE.BIT._CMC9
#define DTS056CM_CMC10 DTS056CM_BASE.BIT._CMC10
#define DTS056CM_CMC11 DTS056CM_BASE.BIT._CMC11
#define DTS056CM_CMC12 DTS056CM_BASE.BIT._CMC12
#define DTS056CM_CMC13 DTS056CM_BASE.BIT._CMC13
#define DTS056CM_CMC14 DTS056CM_BASE.BIT._CMC14
#define DTS056CM_CMC15 DTS056CM_BASE.BIT._CMC15
#define DTS056CM_UM DTS056CM_BASE.BIT._UM
#define DTS056CM_SPID0 DTS056CM_BASE.BIT._SPID0
#define DTS056CM_SPID1 DTS056CM_BASE.BIT._SPID1
#define DTS056CM_SPID2 DTS056CM_BASE.BIT._SPID2
#define DTS056CM_SPID3 DTS056CM_BASE.BIT._SPID3
#define DTS056CM_SPID4 DTS056CM_BASE.BIT._SPID4
#define DTS056CM_PEID0 DTS056CM_BASE.BIT._PEID0
#define DTS056CM_PEID1 DTS056CM_BASE.BIT._PEID1
#define DTS056CM_PEID2 DTS056CM_BASE.BIT._PEID2
#define DTS057CM DTS057CM_BASE.UINT32
#define DTS057CM_CMC0 DTS057CM_BASE.BIT._CMC0
#define DTS057CM_CMC1 DTS057CM_BASE.BIT._CMC1
#define DTS057CM_CMC2 DTS057CM_BASE.BIT._CMC2
#define DTS057CM_CMC3 DTS057CM_BASE.BIT._CMC3
#define DTS057CM_CMC4 DTS057CM_BASE.BIT._CMC4
#define DTS057CM_CMC5 DTS057CM_BASE.BIT._CMC5
#define DTS057CM_CMC6 DTS057CM_BASE.BIT._CMC6
#define DTS057CM_CMC7 DTS057CM_BASE.BIT._CMC7
#define DTS057CM_CMC8 DTS057CM_BASE.BIT._CMC8
#define DTS057CM_CMC9 DTS057CM_BASE.BIT._CMC9
#define DTS057CM_CMC10 DTS057CM_BASE.BIT._CMC10
#define DTS057CM_CMC11 DTS057CM_BASE.BIT._CMC11
#define DTS057CM_CMC12 DTS057CM_BASE.BIT._CMC12
#define DTS057CM_CMC13 DTS057CM_BASE.BIT._CMC13
#define DTS057CM_CMC14 DTS057CM_BASE.BIT._CMC14
#define DTS057CM_CMC15 DTS057CM_BASE.BIT._CMC15
#define DTS057CM_UM DTS057CM_BASE.BIT._UM
#define DTS057CM_SPID0 DTS057CM_BASE.BIT._SPID0
#define DTS057CM_SPID1 DTS057CM_BASE.BIT._SPID1
#define DTS057CM_SPID2 DTS057CM_BASE.BIT._SPID2
#define DTS057CM_SPID3 DTS057CM_BASE.BIT._SPID3
#define DTS057CM_SPID4 DTS057CM_BASE.BIT._SPID4
#define DTS057CM_PEID0 DTS057CM_BASE.BIT._PEID0
#define DTS057CM_PEID1 DTS057CM_BASE.BIT._PEID1
#define DTS057CM_PEID2 DTS057CM_BASE.BIT._PEID2
#define DTS058CM DTS058CM_BASE.UINT32
#define DTS058CM_CMC0 DTS058CM_BASE.BIT._CMC0
#define DTS058CM_CMC1 DTS058CM_BASE.BIT._CMC1
#define DTS058CM_CMC2 DTS058CM_BASE.BIT._CMC2
#define DTS058CM_CMC3 DTS058CM_BASE.BIT._CMC3
#define DTS058CM_CMC4 DTS058CM_BASE.BIT._CMC4
#define DTS058CM_CMC5 DTS058CM_BASE.BIT._CMC5
#define DTS058CM_CMC6 DTS058CM_BASE.BIT._CMC6
#define DTS058CM_CMC7 DTS058CM_BASE.BIT._CMC7
#define DTS058CM_CMC8 DTS058CM_BASE.BIT._CMC8
#define DTS058CM_CMC9 DTS058CM_BASE.BIT._CMC9
#define DTS058CM_CMC10 DTS058CM_BASE.BIT._CMC10
#define DTS058CM_CMC11 DTS058CM_BASE.BIT._CMC11
#define DTS058CM_CMC12 DTS058CM_BASE.BIT._CMC12
#define DTS058CM_CMC13 DTS058CM_BASE.BIT._CMC13
#define DTS058CM_CMC14 DTS058CM_BASE.BIT._CMC14
#define DTS058CM_CMC15 DTS058CM_BASE.BIT._CMC15
#define DTS058CM_UM DTS058CM_BASE.BIT._UM
#define DTS058CM_SPID0 DTS058CM_BASE.BIT._SPID0
#define DTS058CM_SPID1 DTS058CM_BASE.BIT._SPID1
#define DTS058CM_SPID2 DTS058CM_BASE.BIT._SPID2
#define DTS058CM_SPID3 DTS058CM_BASE.BIT._SPID3
#define DTS058CM_SPID4 DTS058CM_BASE.BIT._SPID4
#define DTS058CM_PEID0 DTS058CM_BASE.BIT._PEID0
#define DTS058CM_PEID1 DTS058CM_BASE.BIT._PEID1
#define DTS058CM_PEID2 DTS058CM_BASE.BIT._PEID2
#define DTS059CM DTS059CM_BASE.UINT32
#define DTS059CM_CMC0 DTS059CM_BASE.BIT._CMC0
#define DTS059CM_CMC1 DTS059CM_BASE.BIT._CMC1
#define DTS059CM_CMC2 DTS059CM_BASE.BIT._CMC2
#define DTS059CM_CMC3 DTS059CM_BASE.BIT._CMC3
#define DTS059CM_CMC4 DTS059CM_BASE.BIT._CMC4
#define DTS059CM_CMC5 DTS059CM_BASE.BIT._CMC5
#define DTS059CM_CMC6 DTS059CM_BASE.BIT._CMC6
#define DTS059CM_CMC7 DTS059CM_BASE.BIT._CMC7
#define DTS059CM_CMC8 DTS059CM_BASE.BIT._CMC8
#define DTS059CM_CMC9 DTS059CM_BASE.BIT._CMC9
#define DTS059CM_CMC10 DTS059CM_BASE.BIT._CMC10
#define DTS059CM_CMC11 DTS059CM_BASE.BIT._CMC11
#define DTS059CM_CMC12 DTS059CM_BASE.BIT._CMC12
#define DTS059CM_CMC13 DTS059CM_BASE.BIT._CMC13
#define DTS059CM_CMC14 DTS059CM_BASE.BIT._CMC14
#define DTS059CM_CMC15 DTS059CM_BASE.BIT._CMC15
#define DTS059CM_UM DTS059CM_BASE.BIT._UM
#define DTS059CM_SPID0 DTS059CM_BASE.BIT._SPID0
#define DTS059CM_SPID1 DTS059CM_BASE.BIT._SPID1
#define DTS059CM_SPID2 DTS059CM_BASE.BIT._SPID2
#define DTS059CM_SPID3 DTS059CM_BASE.BIT._SPID3
#define DTS059CM_SPID4 DTS059CM_BASE.BIT._SPID4
#define DTS059CM_PEID0 DTS059CM_BASE.BIT._PEID0
#define DTS059CM_PEID1 DTS059CM_BASE.BIT._PEID1
#define DTS059CM_PEID2 DTS059CM_BASE.BIT._PEID2
#define DTS060CM DTS060CM_BASE.UINT32
#define DTS060CM_CMC0 DTS060CM_BASE.BIT._CMC0
#define DTS060CM_CMC1 DTS060CM_BASE.BIT._CMC1
#define DTS060CM_CMC2 DTS060CM_BASE.BIT._CMC2
#define DTS060CM_CMC3 DTS060CM_BASE.BIT._CMC3
#define DTS060CM_CMC4 DTS060CM_BASE.BIT._CMC4
#define DTS060CM_CMC5 DTS060CM_BASE.BIT._CMC5
#define DTS060CM_CMC6 DTS060CM_BASE.BIT._CMC6
#define DTS060CM_CMC7 DTS060CM_BASE.BIT._CMC7
#define DTS060CM_CMC8 DTS060CM_BASE.BIT._CMC8
#define DTS060CM_CMC9 DTS060CM_BASE.BIT._CMC9
#define DTS060CM_CMC10 DTS060CM_BASE.BIT._CMC10
#define DTS060CM_CMC11 DTS060CM_BASE.BIT._CMC11
#define DTS060CM_CMC12 DTS060CM_BASE.BIT._CMC12
#define DTS060CM_CMC13 DTS060CM_BASE.BIT._CMC13
#define DTS060CM_CMC14 DTS060CM_BASE.BIT._CMC14
#define DTS060CM_CMC15 DTS060CM_BASE.BIT._CMC15
#define DTS060CM_UM DTS060CM_BASE.BIT._UM
#define DTS060CM_SPID0 DTS060CM_BASE.BIT._SPID0
#define DTS060CM_SPID1 DTS060CM_BASE.BIT._SPID1
#define DTS060CM_SPID2 DTS060CM_BASE.BIT._SPID2
#define DTS060CM_SPID3 DTS060CM_BASE.BIT._SPID3
#define DTS060CM_SPID4 DTS060CM_BASE.BIT._SPID4
#define DTS060CM_PEID0 DTS060CM_BASE.BIT._PEID0
#define DTS060CM_PEID1 DTS060CM_BASE.BIT._PEID1
#define DTS060CM_PEID2 DTS060CM_BASE.BIT._PEID2
#define DTS061CM DTS061CM_BASE.UINT32
#define DTS061CM_CMC0 DTS061CM_BASE.BIT._CMC0
#define DTS061CM_CMC1 DTS061CM_BASE.BIT._CMC1
#define DTS061CM_CMC2 DTS061CM_BASE.BIT._CMC2
#define DTS061CM_CMC3 DTS061CM_BASE.BIT._CMC3
#define DTS061CM_CMC4 DTS061CM_BASE.BIT._CMC4
#define DTS061CM_CMC5 DTS061CM_BASE.BIT._CMC5
#define DTS061CM_CMC6 DTS061CM_BASE.BIT._CMC6
#define DTS061CM_CMC7 DTS061CM_BASE.BIT._CMC7
#define DTS061CM_CMC8 DTS061CM_BASE.BIT._CMC8
#define DTS061CM_CMC9 DTS061CM_BASE.BIT._CMC9
#define DTS061CM_CMC10 DTS061CM_BASE.BIT._CMC10
#define DTS061CM_CMC11 DTS061CM_BASE.BIT._CMC11
#define DTS061CM_CMC12 DTS061CM_BASE.BIT._CMC12
#define DTS061CM_CMC13 DTS061CM_BASE.BIT._CMC13
#define DTS061CM_CMC14 DTS061CM_BASE.BIT._CMC14
#define DTS061CM_CMC15 DTS061CM_BASE.BIT._CMC15
#define DTS061CM_UM DTS061CM_BASE.BIT._UM
#define DTS061CM_SPID0 DTS061CM_BASE.BIT._SPID0
#define DTS061CM_SPID1 DTS061CM_BASE.BIT._SPID1
#define DTS061CM_SPID2 DTS061CM_BASE.BIT._SPID2
#define DTS061CM_SPID3 DTS061CM_BASE.BIT._SPID3
#define DTS061CM_SPID4 DTS061CM_BASE.BIT._SPID4
#define DTS061CM_PEID0 DTS061CM_BASE.BIT._PEID0
#define DTS061CM_PEID1 DTS061CM_BASE.BIT._PEID1
#define DTS061CM_PEID2 DTS061CM_BASE.BIT._PEID2
#define DTS062CM DTS062CM_BASE.UINT32
#define DTS062CM_CMC0 DTS062CM_BASE.BIT._CMC0
#define DTS062CM_CMC1 DTS062CM_BASE.BIT._CMC1
#define DTS062CM_CMC2 DTS062CM_BASE.BIT._CMC2
#define DTS062CM_CMC3 DTS062CM_BASE.BIT._CMC3
#define DTS062CM_CMC4 DTS062CM_BASE.BIT._CMC4
#define DTS062CM_CMC5 DTS062CM_BASE.BIT._CMC5
#define DTS062CM_CMC6 DTS062CM_BASE.BIT._CMC6
#define DTS062CM_CMC7 DTS062CM_BASE.BIT._CMC7
#define DTS062CM_CMC8 DTS062CM_BASE.BIT._CMC8
#define DTS062CM_CMC9 DTS062CM_BASE.BIT._CMC9
#define DTS062CM_CMC10 DTS062CM_BASE.BIT._CMC10
#define DTS062CM_CMC11 DTS062CM_BASE.BIT._CMC11
#define DTS062CM_CMC12 DTS062CM_BASE.BIT._CMC12
#define DTS062CM_CMC13 DTS062CM_BASE.BIT._CMC13
#define DTS062CM_CMC14 DTS062CM_BASE.BIT._CMC14
#define DTS062CM_CMC15 DTS062CM_BASE.BIT._CMC15
#define DTS062CM_UM DTS062CM_BASE.BIT._UM
#define DTS062CM_SPID0 DTS062CM_BASE.BIT._SPID0
#define DTS062CM_SPID1 DTS062CM_BASE.BIT._SPID1
#define DTS062CM_SPID2 DTS062CM_BASE.BIT._SPID2
#define DTS062CM_SPID3 DTS062CM_BASE.BIT._SPID3
#define DTS062CM_SPID4 DTS062CM_BASE.BIT._SPID4
#define DTS062CM_PEID0 DTS062CM_BASE.BIT._PEID0
#define DTS062CM_PEID1 DTS062CM_BASE.BIT._PEID1
#define DTS062CM_PEID2 DTS062CM_BASE.BIT._PEID2
#define DTS063CM DTS063CM_BASE.UINT32
#define DTS063CM_CMC0 DTS063CM_BASE.BIT._CMC0
#define DTS063CM_CMC1 DTS063CM_BASE.BIT._CMC1
#define DTS063CM_CMC2 DTS063CM_BASE.BIT._CMC2
#define DTS063CM_CMC3 DTS063CM_BASE.BIT._CMC3
#define DTS063CM_CMC4 DTS063CM_BASE.BIT._CMC4
#define DTS063CM_CMC5 DTS063CM_BASE.BIT._CMC5
#define DTS063CM_CMC6 DTS063CM_BASE.BIT._CMC6
#define DTS063CM_CMC7 DTS063CM_BASE.BIT._CMC7
#define DTS063CM_CMC8 DTS063CM_BASE.BIT._CMC8
#define DTS063CM_CMC9 DTS063CM_BASE.BIT._CMC9
#define DTS063CM_CMC10 DTS063CM_BASE.BIT._CMC10
#define DTS063CM_CMC11 DTS063CM_BASE.BIT._CMC11
#define DTS063CM_CMC12 DTS063CM_BASE.BIT._CMC12
#define DTS063CM_CMC13 DTS063CM_BASE.BIT._CMC13
#define DTS063CM_CMC14 DTS063CM_BASE.BIT._CMC14
#define DTS063CM_CMC15 DTS063CM_BASE.BIT._CMC15
#define DTS063CM_UM DTS063CM_BASE.BIT._UM
#define DTS063CM_SPID0 DTS063CM_BASE.BIT._SPID0
#define DTS063CM_SPID1 DTS063CM_BASE.BIT._SPID1
#define DTS063CM_SPID2 DTS063CM_BASE.BIT._SPID2
#define DTS063CM_SPID3 DTS063CM_BASE.BIT._SPID3
#define DTS063CM_SPID4 DTS063CM_BASE.BIT._SPID4
#define DTS063CM_PEID0 DTS063CM_BASE.BIT._PEID0
#define DTS063CM_PEID1 DTS063CM_BASE.BIT._PEID1
#define DTS063CM_PEID2 DTS063CM_BASE.BIT._PEID2
#define DTS064CM DTS064CM_BASE.UINT32
#define DTS064CM_CMC0 DTS064CM_BASE.BIT._CMC0
#define DTS064CM_CMC1 DTS064CM_BASE.BIT._CMC1
#define DTS064CM_CMC2 DTS064CM_BASE.BIT._CMC2
#define DTS064CM_CMC3 DTS064CM_BASE.BIT._CMC3
#define DTS064CM_CMC4 DTS064CM_BASE.BIT._CMC4
#define DTS064CM_CMC5 DTS064CM_BASE.BIT._CMC5
#define DTS064CM_CMC6 DTS064CM_BASE.BIT._CMC6
#define DTS064CM_CMC7 DTS064CM_BASE.BIT._CMC7
#define DTS064CM_CMC8 DTS064CM_BASE.BIT._CMC8
#define DTS064CM_CMC9 DTS064CM_BASE.BIT._CMC9
#define DTS064CM_CMC10 DTS064CM_BASE.BIT._CMC10
#define DTS064CM_CMC11 DTS064CM_BASE.BIT._CMC11
#define DTS064CM_CMC12 DTS064CM_BASE.BIT._CMC12
#define DTS064CM_CMC13 DTS064CM_BASE.BIT._CMC13
#define DTS064CM_CMC14 DTS064CM_BASE.BIT._CMC14
#define DTS064CM_CMC15 DTS064CM_BASE.BIT._CMC15
#define DTS064CM_UM DTS064CM_BASE.BIT._UM
#define DTS064CM_SPID0 DTS064CM_BASE.BIT._SPID0
#define DTS064CM_SPID1 DTS064CM_BASE.BIT._SPID1
#define DTS064CM_SPID2 DTS064CM_BASE.BIT._SPID2
#define DTS064CM_SPID3 DTS064CM_BASE.BIT._SPID3
#define DTS064CM_SPID4 DTS064CM_BASE.BIT._SPID4
#define DTS064CM_PEID0 DTS064CM_BASE.BIT._PEID0
#define DTS064CM_PEID1 DTS064CM_BASE.BIT._PEID1
#define DTS064CM_PEID2 DTS064CM_BASE.BIT._PEID2
#define DTS065CM DTS065CM_BASE.UINT32
#define DTS065CM_CMC0 DTS065CM_BASE.BIT._CMC0
#define DTS065CM_CMC1 DTS065CM_BASE.BIT._CMC1
#define DTS065CM_CMC2 DTS065CM_BASE.BIT._CMC2
#define DTS065CM_CMC3 DTS065CM_BASE.BIT._CMC3
#define DTS065CM_CMC4 DTS065CM_BASE.BIT._CMC4
#define DTS065CM_CMC5 DTS065CM_BASE.BIT._CMC5
#define DTS065CM_CMC6 DTS065CM_BASE.BIT._CMC6
#define DTS065CM_CMC7 DTS065CM_BASE.BIT._CMC7
#define DTS065CM_CMC8 DTS065CM_BASE.BIT._CMC8
#define DTS065CM_CMC9 DTS065CM_BASE.BIT._CMC9
#define DTS065CM_CMC10 DTS065CM_BASE.BIT._CMC10
#define DTS065CM_CMC11 DTS065CM_BASE.BIT._CMC11
#define DTS065CM_CMC12 DTS065CM_BASE.BIT._CMC12
#define DTS065CM_CMC13 DTS065CM_BASE.BIT._CMC13
#define DTS065CM_CMC14 DTS065CM_BASE.BIT._CMC14
#define DTS065CM_CMC15 DTS065CM_BASE.BIT._CMC15
#define DTS065CM_UM DTS065CM_BASE.BIT._UM
#define DTS065CM_SPID0 DTS065CM_BASE.BIT._SPID0
#define DTS065CM_SPID1 DTS065CM_BASE.BIT._SPID1
#define DTS065CM_SPID2 DTS065CM_BASE.BIT._SPID2
#define DTS065CM_SPID3 DTS065CM_BASE.BIT._SPID3
#define DTS065CM_SPID4 DTS065CM_BASE.BIT._SPID4
#define DTS065CM_PEID0 DTS065CM_BASE.BIT._PEID0
#define DTS065CM_PEID1 DTS065CM_BASE.BIT._PEID1
#define DTS065CM_PEID2 DTS065CM_BASE.BIT._PEID2
#define DTS066CM DTS066CM_BASE.UINT32
#define DTS066CM_CMC0 DTS066CM_BASE.BIT._CMC0
#define DTS066CM_CMC1 DTS066CM_BASE.BIT._CMC1
#define DTS066CM_CMC2 DTS066CM_BASE.BIT._CMC2
#define DTS066CM_CMC3 DTS066CM_BASE.BIT._CMC3
#define DTS066CM_CMC4 DTS066CM_BASE.BIT._CMC4
#define DTS066CM_CMC5 DTS066CM_BASE.BIT._CMC5
#define DTS066CM_CMC6 DTS066CM_BASE.BIT._CMC6
#define DTS066CM_CMC7 DTS066CM_BASE.BIT._CMC7
#define DTS066CM_CMC8 DTS066CM_BASE.BIT._CMC8
#define DTS066CM_CMC9 DTS066CM_BASE.BIT._CMC9
#define DTS066CM_CMC10 DTS066CM_BASE.BIT._CMC10
#define DTS066CM_CMC11 DTS066CM_BASE.BIT._CMC11
#define DTS066CM_CMC12 DTS066CM_BASE.BIT._CMC12
#define DTS066CM_CMC13 DTS066CM_BASE.BIT._CMC13
#define DTS066CM_CMC14 DTS066CM_BASE.BIT._CMC14
#define DTS066CM_CMC15 DTS066CM_BASE.BIT._CMC15
#define DTS066CM_UM DTS066CM_BASE.BIT._UM
#define DTS066CM_SPID0 DTS066CM_BASE.BIT._SPID0
#define DTS066CM_SPID1 DTS066CM_BASE.BIT._SPID1
#define DTS066CM_SPID2 DTS066CM_BASE.BIT._SPID2
#define DTS066CM_SPID3 DTS066CM_BASE.BIT._SPID3
#define DTS066CM_SPID4 DTS066CM_BASE.BIT._SPID4
#define DTS066CM_PEID0 DTS066CM_BASE.BIT._PEID0
#define DTS066CM_PEID1 DTS066CM_BASE.BIT._PEID1
#define DTS066CM_PEID2 DTS066CM_BASE.BIT._PEID2
#define DTS067CM DTS067CM_BASE.UINT32
#define DTS067CM_CMC0 DTS067CM_BASE.BIT._CMC0
#define DTS067CM_CMC1 DTS067CM_BASE.BIT._CMC1
#define DTS067CM_CMC2 DTS067CM_BASE.BIT._CMC2
#define DTS067CM_CMC3 DTS067CM_BASE.BIT._CMC3
#define DTS067CM_CMC4 DTS067CM_BASE.BIT._CMC4
#define DTS067CM_CMC5 DTS067CM_BASE.BIT._CMC5
#define DTS067CM_CMC6 DTS067CM_BASE.BIT._CMC6
#define DTS067CM_CMC7 DTS067CM_BASE.BIT._CMC7
#define DTS067CM_CMC8 DTS067CM_BASE.BIT._CMC8
#define DTS067CM_CMC9 DTS067CM_BASE.BIT._CMC9
#define DTS067CM_CMC10 DTS067CM_BASE.BIT._CMC10
#define DTS067CM_CMC11 DTS067CM_BASE.BIT._CMC11
#define DTS067CM_CMC12 DTS067CM_BASE.BIT._CMC12
#define DTS067CM_CMC13 DTS067CM_BASE.BIT._CMC13
#define DTS067CM_CMC14 DTS067CM_BASE.BIT._CMC14
#define DTS067CM_CMC15 DTS067CM_BASE.BIT._CMC15
#define DTS067CM_UM DTS067CM_BASE.BIT._UM
#define DTS067CM_SPID0 DTS067CM_BASE.BIT._SPID0
#define DTS067CM_SPID1 DTS067CM_BASE.BIT._SPID1
#define DTS067CM_SPID2 DTS067CM_BASE.BIT._SPID2
#define DTS067CM_SPID3 DTS067CM_BASE.BIT._SPID3
#define DTS067CM_SPID4 DTS067CM_BASE.BIT._SPID4
#define DTS067CM_PEID0 DTS067CM_BASE.BIT._PEID0
#define DTS067CM_PEID1 DTS067CM_BASE.BIT._PEID1
#define DTS067CM_PEID2 DTS067CM_BASE.BIT._PEID2
#define DTS068CM DTS068CM_BASE.UINT32
#define DTS068CM_CMC0 DTS068CM_BASE.BIT._CMC0
#define DTS068CM_CMC1 DTS068CM_BASE.BIT._CMC1
#define DTS068CM_CMC2 DTS068CM_BASE.BIT._CMC2
#define DTS068CM_CMC3 DTS068CM_BASE.BIT._CMC3
#define DTS068CM_CMC4 DTS068CM_BASE.BIT._CMC4
#define DTS068CM_CMC5 DTS068CM_BASE.BIT._CMC5
#define DTS068CM_CMC6 DTS068CM_BASE.BIT._CMC6
#define DTS068CM_CMC7 DTS068CM_BASE.BIT._CMC7
#define DTS068CM_CMC8 DTS068CM_BASE.BIT._CMC8
#define DTS068CM_CMC9 DTS068CM_BASE.BIT._CMC9
#define DTS068CM_CMC10 DTS068CM_BASE.BIT._CMC10
#define DTS068CM_CMC11 DTS068CM_BASE.BIT._CMC11
#define DTS068CM_CMC12 DTS068CM_BASE.BIT._CMC12
#define DTS068CM_CMC13 DTS068CM_BASE.BIT._CMC13
#define DTS068CM_CMC14 DTS068CM_BASE.BIT._CMC14
#define DTS068CM_CMC15 DTS068CM_BASE.BIT._CMC15
#define DTS068CM_UM DTS068CM_BASE.BIT._UM
#define DTS068CM_SPID0 DTS068CM_BASE.BIT._SPID0
#define DTS068CM_SPID1 DTS068CM_BASE.BIT._SPID1
#define DTS068CM_SPID2 DTS068CM_BASE.BIT._SPID2
#define DTS068CM_SPID3 DTS068CM_BASE.BIT._SPID3
#define DTS068CM_SPID4 DTS068CM_BASE.BIT._SPID4
#define DTS068CM_PEID0 DTS068CM_BASE.BIT._PEID0
#define DTS068CM_PEID1 DTS068CM_BASE.BIT._PEID1
#define DTS068CM_PEID2 DTS068CM_BASE.BIT._PEID2
#define DTS069CM DTS069CM_BASE.UINT32
#define DTS069CM_CMC0 DTS069CM_BASE.BIT._CMC0
#define DTS069CM_CMC1 DTS069CM_BASE.BIT._CMC1
#define DTS069CM_CMC2 DTS069CM_BASE.BIT._CMC2
#define DTS069CM_CMC3 DTS069CM_BASE.BIT._CMC3
#define DTS069CM_CMC4 DTS069CM_BASE.BIT._CMC4
#define DTS069CM_CMC5 DTS069CM_BASE.BIT._CMC5
#define DTS069CM_CMC6 DTS069CM_BASE.BIT._CMC6
#define DTS069CM_CMC7 DTS069CM_BASE.BIT._CMC7
#define DTS069CM_CMC8 DTS069CM_BASE.BIT._CMC8
#define DTS069CM_CMC9 DTS069CM_BASE.BIT._CMC9
#define DTS069CM_CMC10 DTS069CM_BASE.BIT._CMC10
#define DTS069CM_CMC11 DTS069CM_BASE.BIT._CMC11
#define DTS069CM_CMC12 DTS069CM_BASE.BIT._CMC12
#define DTS069CM_CMC13 DTS069CM_BASE.BIT._CMC13
#define DTS069CM_CMC14 DTS069CM_BASE.BIT._CMC14
#define DTS069CM_CMC15 DTS069CM_BASE.BIT._CMC15
#define DTS069CM_UM DTS069CM_BASE.BIT._UM
#define DTS069CM_SPID0 DTS069CM_BASE.BIT._SPID0
#define DTS069CM_SPID1 DTS069CM_BASE.BIT._SPID1
#define DTS069CM_SPID2 DTS069CM_BASE.BIT._SPID2
#define DTS069CM_SPID3 DTS069CM_BASE.BIT._SPID3
#define DTS069CM_SPID4 DTS069CM_BASE.BIT._SPID4
#define DTS069CM_PEID0 DTS069CM_BASE.BIT._PEID0
#define DTS069CM_PEID1 DTS069CM_BASE.BIT._PEID1
#define DTS069CM_PEID2 DTS069CM_BASE.BIT._PEID2
#define DTS070CM DTS070CM_BASE.UINT32
#define DTS070CM_CMC0 DTS070CM_BASE.BIT._CMC0
#define DTS070CM_CMC1 DTS070CM_BASE.BIT._CMC1
#define DTS070CM_CMC2 DTS070CM_BASE.BIT._CMC2
#define DTS070CM_CMC3 DTS070CM_BASE.BIT._CMC3
#define DTS070CM_CMC4 DTS070CM_BASE.BIT._CMC4
#define DTS070CM_CMC5 DTS070CM_BASE.BIT._CMC5
#define DTS070CM_CMC6 DTS070CM_BASE.BIT._CMC6
#define DTS070CM_CMC7 DTS070CM_BASE.BIT._CMC7
#define DTS070CM_CMC8 DTS070CM_BASE.BIT._CMC8
#define DTS070CM_CMC9 DTS070CM_BASE.BIT._CMC9
#define DTS070CM_CMC10 DTS070CM_BASE.BIT._CMC10
#define DTS070CM_CMC11 DTS070CM_BASE.BIT._CMC11
#define DTS070CM_CMC12 DTS070CM_BASE.BIT._CMC12
#define DTS070CM_CMC13 DTS070CM_BASE.BIT._CMC13
#define DTS070CM_CMC14 DTS070CM_BASE.BIT._CMC14
#define DTS070CM_CMC15 DTS070CM_BASE.BIT._CMC15
#define DTS070CM_UM DTS070CM_BASE.BIT._UM
#define DTS070CM_SPID0 DTS070CM_BASE.BIT._SPID0
#define DTS070CM_SPID1 DTS070CM_BASE.BIT._SPID1
#define DTS070CM_SPID2 DTS070CM_BASE.BIT._SPID2
#define DTS070CM_SPID3 DTS070CM_BASE.BIT._SPID3
#define DTS070CM_SPID4 DTS070CM_BASE.BIT._SPID4
#define DTS070CM_PEID0 DTS070CM_BASE.BIT._PEID0
#define DTS070CM_PEID1 DTS070CM_BASE.BIT._PEID1
#define DTS070CM_PEID2 DTS070CM_BASE.BIT._PEID2
#define DTS071CM DTS071CM_BASE.UINT32
#define DTS071CM_CMC0 DTS071CM_BASE.BIT._CMC0
#define DTS071CM_CMC1 DTS071CM_BASE.BIT._CMC1
#define DTS071CM_CMC2 DTS071CM_BASE.BIT._CMC2
#define DTS071CM_CMC3 DTS071CM_BASE.BIT._CMC3
#define DTS071CM_CMC4 DTS071CM_BASE.BIT._CMC4
#define DTS071CM_CMC5 DTS071CM_BASE.BIT._CMC5
#define DTS071CM_CMC6 DTS071CM_BASE.BIT._CMC6
#define DTS071CM_CMC7 DTS071CM_BASE.BIT._CMC7
#define DTS071CM_CMC8 DTS071CM_BASE.BIT._CMC8
#define DTS071CM_CMC9 DTS071CM_BASE.BIT._CMC9
#define DTS071CM_CMC10 DTS071CM_BASE.BIT._CMC10
#define DTS071CM_CMC11 DTS071CM_BASE.BIT._CMC11
#define DTS071CM_CMC12 DTS071CM_BASE.BIT._CMC12
#define DTS071CM_CMC13 DTS071CM_BASE.BIT._CMC13
#define DTS071CM_CMC14 DTS071CM_BASE.BIT._CMC14
#define DTS071CM_CMC15 DTS071CM_BASE.BIT._CMC15
#define DTS071CM_UM DTS071CM_BASE.BIT._UM
#define DTS071CM_SPID0 DTS071CM_BASE.BIT._SPID0
#define DTS071CM_SPID1 DTS071CM_BASE.BIT._SPID1
#define DTS071CM_SPID2 DTS071CM_BASE.BIT._SPID2
#define DTS071CM_SPID3 DTS071CM_BASE.BIT._SPID3
#define DTS071CM_SPID4 DTS071CM_BASE.BIT._SPID4
#define DTS071CM_PEID0 DTS071CM_BASE.BIT._PEID0
#define DTS071CM_PEID1 DTS071CM_BASE.BIT._PEID1
#define DTS071CM_PEID2 DTS071CM_BASE.BIT._PEID2
#define DTS072CM DTS072CM_BASE.UINT32
#define DTS072CM_CMC0 DTS072CM_BASE.BIT._CMC0
#define DTS072CM_CMC1 DTS072CM_BASE.BIT._CMC1
#define DTS072CM_CMC2 DTS072CM_BASE.BIT._CMC2
#define DTS072CM_CMC3 DTS072CM_BASE.BIT._CMC3
#define DTS072CM_CMC4 DTS072CM_BASE.BIT._CMC4
#define DTS072CM_CMC5 DTS072CM_BASE.BIT._CMC5
#define DTS072CM_CMC6 DTS072CM_BASE.BIT._CMC6
#define DTS072CM_CMC7 DTS072CM_BASE.BIT._CMC7
#define DTS072CM_CMC8 DTS072CM_BASE.BIT._CMC8
#define DTS072CM_CMC9 DTS072CM_BASE.BIT._CMC9
#define DTS072CM_CMC10 DTS072CM_BASE.BIT._CMC10
#define DTS072CM_CMC11 DTS072CM_BASE.BIT._CMC11
#define DTS072CM_CMC12 DTS072CM_BASE.BIT._CMC12
#define DTS072CM_CMC13 DTS072CM_BASE.BIT._CMC13
#define DTS072CM_CMC14 DTS072CM_BASE.BIT._CMC14
#define DTS072CM_CMC15 DTS072CM_BASE.BIT._CMC15
#define DTS072CM_UM DTS072CM_BASE.BIT._UM
#define DTS072CM_SPID0 DTS072CM_BASE.BIT._SPID0
#define DTS072CM_SPID1 DTS072CM_BASE.BIT._SPID1
#define DTS072CM_SPID2 DTS072CM_BASE.BIT._SPID2
#define DTS072CM_SPID3 DTS072CM_BASE.BIT._SPID3
#define DTS072CM_SPID4 DTS072CM_BASE.BIT._SPID4
#define DTS072CM_PEID0 DTS072CM_BASE.BIT._PEID0
#define DTS072CM_PEID1 DTS072CM_BASE.BIT._PEID1
#define DTS072CM_PEID2 DTS072CM_BASE.BIT._PEID2
#define DTS073CM DTS073CM_BASE.UINT32
#define DTS073CM_CMC0 DTS073CM_BASE.BIT._CMC0
#define DTS073CM_CMC1 DTS073CM_BASE.BIT._CMC1
#define DTS073CM_CMC2 DTS073CM_BASE.BIT._CMC2
#define DTS073CM_CMC3 DTS073CM_BASE.BIT._CMC3
#define DTS073CM_CMC4 DTS073CM_BASE.BIT._CMC4
#define DTS073CM_CMC5 DTS073CM_BASE.BIT._CMC5
#define DTS073CM_CMC6 DTS073CM_BASE.BIT._CMC6
#define DTS073CM_CMC7 DTS073CM_BASE.BIT._CMC7
#define DTS073CM_CMC8 DTS073CM_BASE.BIT._CMC8
#define DTS073CM_CMC9 DTS073CM_BASE.BIT._CMC9
#define DTS073CM_CMC10 DTS073CM_BASE.BIT._CMC10
#define DTS073CM_CMC11 DTS073CM_BASE.BIT._CMC11
#define DTS073CM_CMC12 DTS073CM_BASE.BIT._CMC12
#define DTS073CM_CMC13 DTS073CM_BASE.BIT._CMC13
#define DTS073CM_CMC14 DTS073CM_BASE.BIT._CMC14
#define DTS073CM_CMC15 DTS073CM_BASE.BIT._CMC15
#define DTS073CM_UM DTS073CM_BASE.BIT._UM
#define DTS073CM_SPID0 DTS073CM_BASE.BIT._SPID0
#define DTS073CM_SPID1 DTS073CM_BASE.BIT._SPID1
#define DTS073CM_SPID2 DTS073CM_BASE.BIT._SPID2
#define DTS073CM_SPID3 DTS073CM_BASE.BIT._SPID3
#define DTS073CM_SPID4 DTS073CM_BASE.BIT._SPID4
#define DTS073CM_PEID0 DTS073CM_BASE.BIT._PEID0
#define DTS073CM_PEID1 DTS073CM_BASE.BIT._PEID1
#define DTS073CM_PEID2 DTS073CM_BASE.BIT._PEID2
#define DTS074CM DTS074CM_BASE.UINT32
#define DTS074CM_CMC0 DTS074CM_BASE.BIT._CMC0
#define DTS074CM_CMC1 DTS074CM_BASE.BIT._CMC1
#define DTS074CM_CMC2 DTS074CM_BASE.BIT._CMC2
#define DTS074CM_CMC3 DTS074CM_BASE.BIT._CMC3
#define DTS074CM_CMC4 DTS074CM_BASE.BIT._CMC4
#define DTS074CM_CMC5 DTS074CM_BASE.BIT._CMC5
#define DTS074CM_CMC6 DTS074CM_BASE.BIT._CMC6
#define DTS074CM_CMC7 DTS074CM_BASE.BIT._CMC7
#define DTS074CM_CMC8 DTS074CM_BASE.BIT._CMC8
#define DTS074CM_CMC9 DTS074CM_BASE.BIT._CMC9
#define DTS074CM_CMC10 DTS074CM_BASE.BIT._CMC10
#define DTS074CM_CMC11 DTS074CM_BASE.BIT._CMC11
#define DTS074CM_CMC12 DTS074CM_BASE.BIT._CMC12
#define DTS074CM_CMC13 DTS074CM_BASE.BIT._CMC13
#define DTS074CM_CMC14 DTS074CM_BASE.BIT._CMC14
#define DTS074CM_CMC15 DTS074CM_BASE.BIT._CMC15
#define DTS074CM_UM DTS074CM_BASE.BIT._UM
#define DTS074CM_SPID0 DTS074CM_BASE.BIT._SPID0
#define DTS074CM_SPID1 DTS074CM_BASE.BIT._SPID1
#define DTS074CM_SPID2 DTS074CM_BASE.BIT._SPID2
#define DTS074CM_SPID3 DTS074CM_BASE.BIT._SPID3
#define DTS074CM_SPID4 DTS074CM_BASE.BIT._SPID4
#define DTS074CM_PEID0 DTS074CM_BASE.BIT._PEID0
#define DTS074CM_PEID1 DTS074CM_BASE.BIT._PEID1
#define DTS074CM_PEID2 DTS074CM_BASE.BIT._PEID2
#define DTS075CM DTS075CM_BASE.UINT32
#define DTS075CM_CMC0 DTS075CM_BASE.BIT._CMC0
#define DTS075CM_CMC1 DTS075CM_BASE.BIT._CMC1
#define DTS075CM_CMC2 DTS075CM_BASE.BIT._CMC2
#define DTS075CM_CMC3 DTS075CM_BASE.BIT._CMC3
#define DTS075CM_CMC4 DTS075CM_BASE.BIT._CMC4
#define DTS075CM_CMC5 DTS075CM_BASE.BIT._CMC5
#define DTS075CM_CMC6 DTS075CM_BASE.BIT._CMC6
#define DTS075CM_CMC7 DTS075CM_BASE.BIT._CMC7
#define DTS075CM_CMC8 DTS075CM_BASE.BIT._CMC8
#define DTS075CM_CMC9 DTS075CM_BASE.BIT._CMC9
#define DTS075CM_CMC10 DTS075CM_BASE.BIT._CMC10
#define DTS075CM_CMC11 DTS075CM_BASE.BIT._CMC11
#define DTS075CM_CMC12 DTS075CM_BASE.BIT._CMC12
#define DTS075CM_CMC13 DTS075CM_BASE.BIT._CMC13
#define DTS075CM_CMC14 DTS075CM_BASE.BIT._CMC14
#define DTS075CM_CMC15 DTS075CM_BASE.BIT._CMC15
#define DTS075CM_UM DTS075CM_BASE.BIT._UM
#define DTS075CM_SPID0 DTS075CM_BASE.BIT._SPID0
#define DTS075CM_SPID1 DTS075CM_BASE.BIT._SPID1
#define DTS075CM_SPID2 DTS075CM_BASE.BIT._SPID2
#define DTS075CM_SPID3 DTS075CM_BASE.BIT._SPID3
#define DTS075CM_SPID4 DTS075CM_BASE.BIT._SPID4
#define DTS075CM_PEID0 DTS075CM_BASE.BIT._PEID0
#define DTS075CM_PEID1 DTS075CM_BASE.BIT._PEID1
#define DTS075CM_PEID2 DTS075CM_BASE.BIT._PEID2
#define DTS076CM DTS076CM_BASE.UINT32
#define DTS076CM_CMC0 DTS076CM_BASE.BIT._CMC0
#define DTS076CM_CMC1 DTS076CM_BASE.BIT._CMC1
#define DTS076CM_CMC2 DTS076CM_BASE.BIT._CMC2
#define DTS076CM_CMC3 DTS076CM_BASE.BIT._CMC3
#define DTS076CM_CMC4 DTS076CM_BASE.BIT._CMC4
#define DTS076CM_CMC5 DTS076CM_BASE.BIT._CMC5
#define DTS076CM_CMC6 DTS076CM_BASE.BIT._CMC6
#define DTS076CM_CMC7 DTS076CM_BASE.BIT._CMC7
#define DTS076CM_CMC8 DTS076CM_BASE.BIT._CMC8
#define DTS076CM_CMC9 DTS076CM_BASE.BIT._CMC9
#define DTS076CM_CMC10 DTS076CM_BASE.BIT._CMC10
#define DTS076CM_CMC11 DTS076CM_BASE.BIT._CMC11
#define DTS076CM_CMC12 DTS076CM_BASE.BIT._CMC12
#define DTS076CM_CMC13 DTS076CM_BASE.BIT._CMC13
#define DTS076CM_CMC14 DTS076CM_BASE.BIT._CMC14
#define DTS076CM_CMC15 DTS076CM_BASE.BIT._CMC15
#define DTS076CM_UM DTS076CM_BASE.BIT._UM
#define DTS076CM_SPID0 DTS076CM_BASE.BIT._SPID0
#define DTS076CM_SPID1 DTS076CM_BASE.BIT._SPID1
#define DTS076CM_SPID2 DTS076CM_BASE.BIT._SPID2
#define DTS076CM_SPID3 DTS076CM_BASE.BIT._SPID3
#define DTS076CM_SPID4 DTS076CM_BASE.BIT._SPID4
#define DTS076CM_PEID0 DTS076CM_BASE.BIT._PEID0
#define DTS076CM_PEID1 DTS076CM_BASE.BIT._PEID1
#define DTS076CM_PEID2 DTS076CM_BASE.BIT._PEID2
#define DTS077CM DTS077CM_BASE.UINT32
#define DTS077CM_CMC0 DTS077CM_BASE.BIT._CMC0
#define DTS077CM_CMC1 DTS077CM_BASE.BIT._CMC1
#define DTS077CM_CMC2 DTS077CM_BASE.BIT._CMC2
#define DTS077CM_CMC3 DTS077CM_BASE.BIT._CMC3
#define DTS077CM_CMC4 DTS077CM_BASE.BIT._CMC4
#define DTS077CM_CMC5 DTS077CM_BASE.BIT._CMC5
#define DTS077CM_CMC6 DTS077CM_BASE.BIT._CMC6
#define DTS077CM_CMC7 DTS077CM_BASE.BIT._CMC7
#define DTS077CM_CMC8 DTS077CM_BASE.BIT._CMC8
#define DTS077CM_CMC9 DTS077CM_BASE.BIT._CMC9
#define DTS077CM_CMC10 DTS077CM_BASE.BIT._CMC10
#define DTS077CM_CMC11 DTS077CM_BASE.BIT._CMC11
#define DTS077CM_CMC12 DTS077CM_BASE.BIT._CMC12
#define DTS077CM_CMC13 DTS077CM_BASE.BIT._CMC13
#define DTS077CM_CMC14 DTS077CM_BASE.BIT._CMC14
#define DTS077CM_CMC15 DTS077CM_BASE.BIT._CMC15
#define DTS077CM_UM DTS077CM_BASE.BIT._UM
#define DTS077CM_SPID0 DTS077CM_BASE.BIT._SPID0
#define DTS077CM_SPID1 DTS077CM_BASE.BIT._SPID1
#define DTS077CM_SPID2 DTS077CM_BASE.BIT._SPID2
#define DTS077CM_SPID3 DTS077CM_BASE.BIT._SPID3
#define DTS077CM_SPID4 DTS077CM_BASE.BIT._SPID4
#define DTS077CM_PEID0 DTS077CM_BASE.BIT._PEID0
#define DTS077CM_PEID1 DTS077CM_BASE.BIT._PEID1
#define DTS077CM_PEID2 DTS077CM_BASE.BIT._PEID2
#define DTS078CM DTS078CM_BASE.UINT32
#define DTS078CM_CMC0 DTS078CM_BASE.BIT._CMC0
#define DTS078CM_CMC1 DTS078CM_BASE.BIT._CMC1
#define DTS078CM_CMC2 DTS078CM_BASE.BIT._CMC2
#define DTS078CM_CMC3 DTS078CM_BASE.BIT._CMC3
#define DTS078CM_CMC4 DTS078CM_BASE.BIT._CMC4
#define DTS078CM_CMC5 DTS078CM_BASE.BIT._CMC5
#define DTS078CM_CMC6 DTS078CM_BASE.BIT._CMC6
#define DTS078CM_CMC7 DTS078CM_BASE.BIT._CMC7
#define DTS078CM_CMC8 DTS078CM_BASE.BIT._CMC8
#define DTS078CM_CMC9 DTS078CM_BASE.BIT._CMC9
#define DTS078CM_CMC10 DTS078CM_BASE.BIT._CMC10
#define DTS078CM_CMC11 DTS078CM_BASE.BIT._CMC11
#define DTS078CM_CMC12 DTS078CM_BASE.BIT._CMC12
#define DTS078CM_CMC13 DTS078CM_BASE.BIT._CMC13
#define DTS078CM_CMC14 DTS078CM_BASE.BIT._CMC14
#define DTS078CM_CMC15 DTS078CM_BASE.BIT._CMC15
#define DTS078CM_UM DTS078CM_BASE.BIT._UM
#define DTS078CM_SPID0 DTS078CM_BASE.BIT._SPID0
#define DTS078CM_SPID1 DTS078CM_BASE.BIT._SPID1
#define DTS078CM_SPID2 DTS078CM_BASE.BIT._SPID2
#define DTS078CM_SPID3 DTS078CM_BASE.BIT._SPID3
#define DTS078CM_SPID4 DTS078CM_BASE.BIT._SPID4
#define DTS078CM_PEID0 DTS078CM_BASE.BIT._PEID0
#define DTS078CM_PEID1 DTS078CM_BASE.BIT._PEID1
#define DTS078CM_PEID2 DTS078CM_BASE.BIT._PEID2
#define DTS079CM DTS079CM_BASE.UINT32
#define DTS079CM_CMC0 DTS079CM_BASE.BIT._CMC0
#define DTS079CM_CMC1 DTS079CM_BASE.BIT._CMC1
#define DTS079CM_CMC2 DTS079CM_BASE.BIT._CMC2
#define DTS079CM_CMC3 DTS079CM_BASE.BIT._CMC3
#define DTS079CM_CMC4 DTS079CM_BASE.BIT._CMC4
#define DTS079CM_CMC5 DTS079CM_BASE.BIT._CMC5
#define DTS079CM_CMC6 DTS079CM_BASE.BIT._CMC6
#define DTS079CM_CMC7 DTS079CM_BASE.BIT._CMC7
#define DTS079CM_CMC8 DTS079CM_BASE.BIT._CMC8
#define DTS079CM_CMC9 DTS079CM_BASE.BIT._CMC9
#define DTS079CM_CMC10 DTS079CM_BASE.BIT._CMC10
#define DTS079CM_CMC11 DTS079CM_BASE.BIT._CMC11
#define DTS079CM_CMC12 DTS079CM_BASE.BIT._CMC12
#define DTS079CM_CMC13 DTS079CM_BASE.BIT._CMC13
#define DTS079CM_CMC14 DTS079CM_BASE.BIT._CMC14
#define DTS079CM_CMC15 DTS079CM_BASE.BIT._CMC15
#define DTS079CM_UM DTS079CM_BASE.BIT._UM
#define DTS079CM_SPID0 DTS079CM_BASE.BIT._SPID0
#define DTS079CM_SPID1 DTS079CM_BASE.BIT._SPID1
#define DTS079CM_SPID2 DTS079CM_BASE.BIT._SPID2
#define DTS079CM_SPID3 DTS079CM_BASE.BIT._SPID3
#define DTS079CM_SPID4 DTS079CM_BASE.BIT._SPID4
#define DTS079CM_PEID0 DTS079CM_BASE.BIT._PEID0
#define DTS079CM_PEID1 DTS079CM_BASE.BIT._PEID1
#define DTS079CM_PEID2 DTS079CM_BASE.BIT._PEID2
#define DTS080CM DTS080CM_BASE.UINT32
#define DTS080CM_CMC0 DTS080CM_BASE.BIT._CMC0
#define DTS080CM_CMC1 DTS080CM_BASE.BIT._CMC1
#define DTS080CM_CMC2 DTS080CM_BASE.BIT._CMC2
#define DTS080CM_CMC3 DTS080CM_BASE.BIT._CMC3
#define DTS080CM_CMC4 DTS080CM_BASE.BIT._CMC4
#define DTS080CM_CMC5 DTS080CM_BASE.BIT._CMC5
#define DTS080CM_CMC6 DTS080CM_BASE.BIT._CMC6
#define DTS080CM_CMC7 DTS080CM_BASE.BIT._CMC7
#define DTS080CM_CMC8 DTS080CM_BASE.BIT._CMC8
#define DTS080CM_CMC9 DTS080CM_BASE.BIT._CMC9
#define DTS080CM_CMC10 DTS080CM_BASE.BIT._CMC10
#define DTS080CM_CMC11 DTS080CM_BASE.BIT._CMC11
#define DTS080CM_CMC12 DTS080CM_BASE.BIT._CMC12
#define DTS080CM_CMC13 DTS080CM_BASE.BIT._CMC13
#define DTS080CM_CMC14 DTS080CM_BASE.BIT._CMC14
#define DTS080CM_CMC15 DTS080CM_BASE.BIT._CMC15
#define DTS080CM_UM DTS080CM_BASE.BIT._UM
#define DTS080CM_SPID0 DTS080CM_BASE.BIT._SPID0
#define DTS080CM_SPID1 DTS080CM_BASE.BIT._SPID1
#define DTS080CM_SPID2 DTS080CM_BASE.BIT._SPID2
#define DTS080CM_SPID3 DTS080CM_BASE.BIT._SPID3
#define DTS080CM_SPID4 DTS080CM_BASE.BIT._SPID4
#define DTS080CM_PEID0 DTS080CM_BASE.BIT._PEID0
#define DTS080CM_PEID1 DTS080CM_BASE.BIT._PEID1
#define DTS080CM_PEID2 DTS080CM_BASE.BIT._PEID2
#define DTS081CM DTS081CM_BASE.UINT32
#define DTS081CM_CMC0 DTS081CM_BASE.BIT._CMC0
#define DTS081CM_CMC1 DTS081CM_BASE.BIT._CMC1
#define DTS081CM_CMC2 DTS081CM_BASE.BIT._CMC2
#define DTS081CM_CMC3 DTS081CM_BASE.BIT._CMC3
#define DTS081CM_CMC4 DTS081CM_BASE.BIT._CMC4
#define DTS081CM_CMC5 DTS081CM_BASE.BIT._CMC5
#define DTS081CM_CMC6 DTS081CM_BASE.BIT._CMC6
#define DTS081CM_CMC7 DTS081CM_BASE.BIT._CMC7
#define DTS081CM_CMC8 DTS081CM_BASE.BIT._CMC8
#define DTS081CM_CMC9 DTS081CM_BASE.BIT._CMC9
#define DTS081CM_CMC10 DTS081CM_BASE.BIT._CMC10
#define DTS081CM_CMC11 DTS081CM_BASE.BIT._CMC11
#define DTS081CM_CMC12 DTS081CM_BASE.BIT._CMC12
#define DTS081CM_CMC13 DTS081CM_BASE.BIT._CMC13
#define DTS081CM_CMC14 DTS081CM_BASE.BIT._CMC14
#define DTS081CM_CMC15 DTS081CM_BASE.BIT._CMC15
#define DTS081CM_UM DTS081CM_BASE.BIT._UM
#define DTS081CM_SPID0 DTS081CM_BASE.BIT._SPID0
#define DTS081CM_SPID1 DTS081CM_BASE.BIT._SPID1
#define DTS081CM_SPID2 DTS081CM_BASE.BIT._SPID2
#define DTS081CM_SPID3 DTS081CM_BASE.BIT._SPID3
#define DTS081CM_SPID4 DTS081CM_BASE.BIT._SPID4
#define DTS081CM_PEID0 DTS081CM_BASE.BIT._PEID0
#define DTS081CM_PEID1 DTS081CM_BASE.BIT._PEID1
#define DTS081CM_PEID2 DTS081CM_BASE.BIT._PEID2
#define DTS082CM DTS082CM_BASE.UINT32
#define DTS082CM_CMC0 DTS082CM_BASE.BIT._CMC0
#define DTS082CM_CMC1 DTS082CM_BASE.BIT._CMC1
#define DTS082CM_CMC2 DTS082CM_BASE.BIT._CMC2
#define DTS082CM_CMC3 DTS082CM_BASE.BIT._CMC3
#define DTS082CM_CMC4 DTS082CM_BASE.BIT._CMC4
#define DTS082CM_CMC5 DTS082CM_BASE.BIT._CMC5
#define DTS082CM_CMC6 DTS082CM_BASE.BIT._CMC6
#define DTS082CM_CMC7 DTS082CM_BASE.BIT._CMC7
#define DTS082CM_CMC8 DTS082CM_BASE.BIT._CMC8
#define DTS082CM_CMC9 DTS082CM_BASE.BIT._CMC9
#define DTS082CM_CMC10 DTS082CM_BASE.BIT._CMC10
#define DTS082CM_CMC11 DTS082CM_BASE.BIT._CMC11
#define DTS082CM_CMC12 DTS082CM_BASE.BIT._CMC12
#define DTS082CM_CMC13 DTS082CM_BASE.BIT._CMC13
#define DTS082CM_CMC14 DTS082CM_BASE.BIT._CMC14
#define DTS082CM_CMC15 DTS082CM_BASE.BIT._CMC15
#define DTS082CM_UM DTS082CM_BASE.BIT._UM
#define DTS082CM_SPID0 DTS082CM_BASE.BIT._SPID0
#define DTS082CM_SPID1 DTS082CM_BASE.BIT._SPID1
#define DTS082CM_SPID2 DTS082CM_BASE.BIT._SPID2
#define DTS082CM_SPID3 DTS082CM_BASE.BIT._SPID3
#define DTS082CM_SPID4 DTS082CM_BASE.BIT._SPID4
#define DTS082CM_PEID0 DTS082CM_BASE.BIT._PEID0
#define DTS082CM_PEID1 DTS082CM_BASE.BIT._PEID1
#define DTS082CM_PEID2 DTS082CM_BASE.BIT._PEID2
#define DTS083CM DTS083CM_BASE.UINT32
#define DTS083CM_CMC0 DTS083CM_BASE.BIT._CMC0
#define DTS083CM_CMC1 DTS083CM_BASE.BIT._CMC1
#define DTS083CM_CMC2 DTS083CM_BASE.BIT._CMC2
#define DTS083CM_CMC3 DTS083CM_BASE.BIT._CMC3
#define DTS083CM_CMC4 DTS083CM_BASE.BIT._CMC4
#define DTS083CM_CMC5 DTS083CM_BASE.BIT._CMC5
#define DTS083CM_CMC6 DTS083CM_BASE.BIT._CMC6
#define DTS083CM_CMC7 DTS083CM_BASE.BIT._CMC7
#define DTS083CM_CMC8 DTS083CM_BASE.BIT._CMC8
#define DTS083CM_CMC9 DTS083CM_BASE.BIT._CMC9
#define DTS083CM_CMC10 DTS083CM_BASE.BIT._CMC10
#define DTS083CM_CMC11 DTS083CM_BASE.BIT._CMC11
#define DTS083CM_CMC12 DTS083CM_BASE.BIT._CMC12
#define DTS083CM_CMC13 DTS083CM_BASE.BIT._CMC13
#define DTS083CM_CMC14 DTS083CM_BASE.BIT._CMC14
#define DTS083CM_CMC15 DTS083CM_BASE.BIT._CMC15
#define DTS083CM_UM DTS083CM_BASE.BIT._UM
#define DTS083CM_SPID0 DTS083CM_BASE.BIT._SPID0
#define DTS083CM_SPID1 DTS083CM_BASE.BIT._SPID1
#define DTS083CM_SPID2 DTS083CM_BASE.BIT._SPID2
#define DTS083CM_SPID3 DTS083CM_BASE.BIT._SPID3
#define DTS083CM_SPID4 DTS083CM_BASE.BIT._SPID4
#define DTS083CM_PEID0 DTS083CM_BASE.BIT._PEID0
#define DTS083CM_PEID1 DTS083CM_BASE.BIT._PEID1
#define DTS083CM_PEID2 DTS083CM_BASE.BIT._PEID2
#define DTS084CM DTS084CM_BASE.UINT32
#define DTS084CM_CMC0 DTS084CM_BASE.BIT._CMC0
#define DTS084CM_CMC1 DTS084CM_BASE.BIT._CMC1
#define DTS084CM_CMC2 DTS084CM_BASE.BIT._CMC2
#define DTS084CM_CMC3 DTS084CM_BASE.BIT._CMC3
#define DTS084CM_CMC4 DTS084CM_BASE.BIT._CMC4
#define DTS084CM_CMC5 DTS084CM_BASE.BIT._CMC5
#define DTS084CM_CMC6 DTS084CM_BASE.BIT._CMC6
#define DTS084CM_CMC7 DTS084CM_BASE.BIT._CMC7
#define DTS084CM_CMC8 DTS084CM_BASE.BIT._CMC8
#define DTS084CM_CMC9 DTS084CM_BASE.BIT._CMC9
#define DTS084CM_CMC10 DTS084CM_BASE.BIT._CMC10
#define DTS084CM_CMC11 DTS084CM_BASE.BIT._CMC11
#define DTS084CM_CMC12 DTS084CM_BASE.BIT._CMC12
#define DTS084CM_CMC13 DTS084CM_BASE.BIT._CMC13
#define DTS084CM_CMC14 DTS084CM_BASE.BIT._CMC14
#define DTS084CM_CMC15 DTS084CM_BASE.BIT._CMC15
#define DTS084CM_UM DTS084CM_BASE.BIT._UM
#define DTS084CM_SPID0 DTS084CM_BASE.BIT._SPID0
#define DTS084CM_SPID1 DTS084CM_BASE.BIT._SPID1
#define DTS084CM_SPID2 DTS084CM_BASE.BIT._SPID2
#define DTS084CM_SPID3 DTS084CM_BASE.BIT._SPID3
#define DTS084CM_SPID4 DTS084CM_BASE.BIT._SPID4
#define DTS084CM_PEID0 DTS084CM_BASE.BIT._PEID0
#define DTS084CM_PEID1 DTS084CM_BASE.BIT._PEID1
#define DTS084CM_PEID2 DTS084CM_BASE.BIT._PEID2
#define DTS085CM DTS085CM_BASE.UINT32
#define DTS085CM_CMC0 DTS085CM_BASE.BIT._CMC0
#define DTS085CM_CMC1 DTS085CM_BASE.BIT._CMC1
#define DTS085CM_CMC2 DTS085CM_BASE.BIT._CMC2
#define DTS085CM_CMC3 DTS085CM_BASE.BIT._CMC3
#define DTS085CM_CMC4 DTS085CM_BASE.BIT._CMC4
#define DTS085CM_CMC5 DTS085CM_BASE.BIT._CMC5
#define DTS085CM_CMC6 DTS085CM_BASE.BIT._CMC6
#define DTS085CM_CMC7 DTS085CM_BASE.BIT._CMC7
#define DTS085CM_CMC8 DTS085CM_BASE.BIT._CMC8
#define DTS085CM_CMC9 DTS085CM_BASE.BIT._CMC9
#define DTS085CM_CMC10 DTS085CM_BASE.BIT._CMC10
#define DTS085CM_CMC11 DTS085CM_BASE.BIT._CMC11
#define DTS085CM_CMC12 DTS085CM_BASE.BIT._CMC12
#define DTS085CM_CMC13 DTS085CM_BASE.BIT._CMC13
#define DTS085CM_CMC14 DTS085CM_BASE.BIT._CMC14
#define DTS085CM_CMC15 DTS085CM_BASE.BIT._CMC15
#define DTS085CM_UM DTS085CM_BASE.BIT._UM
#define DTS085CM_SPID0 DTS085CM_BASE.BIT._SPID0
#define DTS085CM_SPID1 DTS085CM_BASE.BIT._SPID1
#define DTS085CM_SPID2 DTS085CM_BASE.BIT._SPID2
#define DTS085CM_SPID3 DTS085CM_BASE.BIT._SPID3
#define DTS085CM_SPID4 DTS085CM_BASE.BIT._SPID4
#define DTS085CM_PEID0 DTS085CM_BASE.BIT._PEID0
#define DTS085CM_PEID1 DTS085CM_BASE.BIT._PEID1
#define DTS085CM_PEID2 DTS085CM_BASE.BIT._PEID2
#define DTS086CM DTS086CM_BASE.UINT32
#define DTS086CM_CMC0 DTS086CM_BASE.BIT._CMC0
#define DTS086CM_CMC1 DTS086CM_BASE.BIT._CMC1
#define DTS086CM_CMC2 DTS086CM_BASE.BIT._CMC2
#define DTS086CM_CMC3 DTS086CM_BASE.BIT._CMC3
#define DTS086CM_CMC4 DTS086CM_BASE.BIT._CMC4
#define DTS086CM_CMC5 DTS086CM_BASE.BIT._CMC5
#define DTS086CM_CMC6 DTS086CM_BASE.BIT._CMC6
#define DTS086CM_CMC7 DTS086CM_BASE.BIT._CMC7
#define DTS086CM_CMC8 DTS086CM_BASE.BIT._CMC8
#define DTS086CM_CMC9 DTS086CM_BASE.BIT._CMC9
#define DTS086CM_CMC10 DTS086CM_BASE.BIT._CMC10
#define DTS086CM_CMC11 DTS086CM_BASE.BIT._CMC11
#define DTS086CM_CMC12 DTS086CM_BASE.BIT._CMC12
#define DTS086CM_CMC13 DTS086CM_BASE.BIT._CMC13
#define DTS086CM_CMC14 DTS086CM_BASE.BIT._CMC14
#define DTS086CM_CMC15 DTS086CM_BASE.BIT._CMC15
#define DTS086CM_UM DTS086CM_BASE.BIT._UM
#define DTS086CM_SPID0 DTS086CM_BASE.BIT._SPID0
#define DTS086CM_SPID1 DTS086CM_BASE.BIT._SPID1
#define DTS086CM_SPID2 DTS086CM_BASE.BIT._SPID2
#define DTS086CM_SPID3 DTS086CM_BASE.BIT._SPID3
#define DTS086CM_SPID4 DTS086CM_BASE.BIT._SPID4
#define DTS086CM_PEID0 DTS086CM_BASE.BIT._PEID0
#define DTS086CM_PEID1 DTS086CM_BASE.BIT._PEID1
#define DTS086CM_PEID2 DTS086CM_BASE.BIT._PEID2
#define DTS087CM DTS087CM_BASE.UINT32
#define DTS087CM_CMC0 DTS087CM_BASE.BIT._CMC0
#define DTS087CM_CMC1 DTS087CM_BASE.BIT._CMC1
#define DTS087CM_CMC2 DTS087CM_BASE.BIT._CMC2
#define DTS087CM_CMC3 DTS087CM_BASE.BIT._CMC3
#define DTS087CM_CMC4 DTS087CM_BASE.BIT._CMC4
#define DTS087CM_CMC5 DTS087CM_BASE.BIT._CMC5
#define DTS087CM_CMC6 DTS087CM_BASE.BIT._CMC6
#define DTS087CM_CMC7 DTS087CM_BASE.BIT._CMC7
#define DTS087CM_CMC8 DTS087CM_BASE.BIT._CMC8
#define DTS087CM_CMC9 DTS087CM_BASE.BIT._CMC9
#define DTS087CM_CMC10 DTS087CM_BASE.BIT._CMC10
#define DTS087CM_CMC11 DTS087CM_BASE.BIT._CMC11
#define DTS087CM_CMC12 DTS087CM_BASE.BIT._CMC12
#define DTS087CM_CMC13 DTS087CM_BASE.BIT._CMC13
#define DTS087CM_CMC14 DTS087CM_BASE.BIT._CMC14
#define DTS087CM_CMC15 DTS087CM_BASE.BIT._CMC15
#define DTS087CM_UM DTS087CM_BASE.BIT._UM
#define DTS087CM_SPID0 DTS087CM_BASE.BIT._SPID0
#define DTS087CM_SPID1 DTS087CM_BASE.BIT._SPID1
#define DTS087CM_SPID2 DTS087CM_BASE.BIT._SPID2
#define DTS087CM_SPID3 DTS087CM_BASE.BIT._SPID3
#define DTS087CM_SPID4 DTS087CM_BASE.BIT._SPID4
#define DTS087CM_PEID0 DTS087CM_BASE.BIT._PEID0
#define DTS087CM_PEID1 DTS087CM_BASE.BIT._PEID1
#define DTS087CM_PEID2 DTS087CM_BASE.BIT._PEID2
#define DTS088CM DTS088CM_BASE.UINT32
#define DTS088CM_CMC0 DTS088CM_BASE.BIT._CMC0
#define DTS088CM_CMC1 DTS088CM_BASE.BIT._CMC1
#define DTS088CM_CMC2 DTS088CM_BASE.BIT._CMC2
#define DTS088CM_CMC3 DTS088CM_BASE.BIT._CMC3
#define DTS088CM_CMC4 DTS088CM_BASE.BIT._CMC4
#define DTS088CM_CMC5 DTS088CM_BASE.BIT._CMC5
#define DTS088CM_CMC6 DTS088CM_BASE.BIT._CMC6
#define DTS088CM_CMC7 DTS088CM_BASE.BIT._CMC7
#define DTS088CM_CMC8 DTS088CM_BASE.BIT._CMC8
#define DTS088CM_CMC9 DTS088CM_BASE.BIT._CMC9
#define DTS088CM_CMC10 DTS088CM_BASE.BIT._CMC10
#define DTS088CM_CMC11 DTS088CM_BASE.BIT._CMC11
#define DTS088CM_CMC12 DTS088CM_BASE.BIT._CMC12
#define DTS088CM_CMC13 DTS088CM_BASE.BIT._CMC13
#define DTS088CM_CMC14 DTS088CM_BASE.BIT._CMC14
#define DTS088CM_CMC15 DTS088CM_BASE.BIT._CMC15
#define DTS088CM_UM DTS088CM_BASE.BIT._UM
#define DTS088CM_SPID0 DTS088CM_BASE.BIT._SPID0
#define DTS088CM_SPID1 DTS088CM_BASE.BIT._SPID1
#define DTS088CM_SPID2 DTS088CM_BASE.BIT._SPID2
#define DTS088CM_SPID3 DTS088CM_BASE.BIT._SPID3
#define DTS088CM_SPID4 DTS088CM_BASE.BIT._SPID4
#define DTS088CM_PEID0 DTS088CM_BASE.BIT._PEID0
#define DTS088CM_PEID1 DTS088CM_BASE.BIT._PEID1
#define DTS088CM_PEID2 DTS088CM_BASE.BIT._PEID2
#define DTS089CM DTS089CM_BASE.UINT32
#define DTS089CM_CMC0 DTS089CM_BASE.BIT._CMC0
#define DTS089CM_CMC1 DTS089CM_BASE.BIT._CMC1
#define DTS089CM_CMC2 DTS089CM_BASE.BIT._CMC2
#define DTS089CM_CMC3 DTS089CM_BASE.BIT._CMC3
#define DTS089CM_CMC4 DTS089CM_BASE.BIT._CMC4
#define DTS089CM_CMC5 DTS089CM_BASE.BIT._CMC5
#define DTS089CM_CMC6 DTS089CM_BASE.BIT._CMC6
#define DTS089CM_CMC7 DTS089CM_BASE.BIT._CMC7
#define DTS089CM_CMC8 DTS089CM_BASE.BIT._CMC8
#define DTS089CM_CMC9 DTS089CM_BASE.BIT._CMC9
#define DTS089CM_CMC10 DTS089CM_BASE.BIT._CMC10
#define DTS089CM_CMC11 DTS089CM_BASE.BIT._CMC11
#define DTS089CM_CMC12 DTS089CM_BASE.BIT._CMC12
#define DTS089CM_CMC13 DTS089CM_BASE.BIT._CMC13
#define DTS089CM_CMC14 DTS089CM_BASE.BIT._CMC14
#define DTS089CM_CMC15 DTS089CM_BASE.BIT._CMC15
#define DTS089CM_UM DTS089CM_BASE.BIT._UM
#define DTS089CM_SPID0 DTS089CM_BASE.BIT._SPID0
#define DTS089CM_SPID1 DTS089CM_BASE.BIT._SPID1
#define DTS089CM_SPID2 DTS089CM_BASE.BIT._SPID2
#define DTS089CM_SPID3 DTS089CM_BASE.BIT._SPID3
#define DTS089CM_SPID4 DTS089CM_BASE.BIT._SPID4
#define DTS089CM_PEID0 DTS089CM_BASE.BIT._PEID0
#define DTS089CM_PEID1 DTS089CM_BASE.BIT._PEID1
#define DTS089CM_PEID2 DTS089CM_BASE.BIT._PEID2
#define DTS090CM DTS090CM_BASE.UINT32
#define DTS090CM_CMC0 DTS090CM_BASE.BIT._CMC0
#define DTS090CM_CMC1 DTS090CM_BASE.BIT._CMC1
#define DTS090CM_CMC2 DTS090CM_BASE.BIT._CMC2
#define DTS090CM_CMC3 DTS090CM_BASE.BIT._CMC3
#define DTS090CM_CMC4 DTS090CM_BASE.BIT._CMC4
#define DTS090CM_CMC5 DTS090CM_BASE.BIT._CMC5
#define DTS090CM_CMC6 DTS090CM_BASE.BIT._CMC6
#define DTS090CM_CMC7 DTS090CM_BASE.BIT._CMC7
#define DTS090CM_CMC8 DTS090CM_BASE.BIT._CMC8
#define DTS090CM_CMC9 DTS090CM_BASE.BIT._CMC9
#define DTS090CM_CMC10 DTS090CM_BASE.BIT._CMC10
#define DTS090CM_CMC11 DTS090CM_BASE.BIT._CMC11
#define DTS090CM_CMC12 DTS090CM_BASE.BIT._CMC12
#define DTS090CM_CMC13 DTS090CM_BASE.BIT._CMC13
#define DTS090CM_CMC14 DTS090CM_BASE.BIT._CMC14
#define DTS090CM_CMC15 DTS090CM_BASE.BIT._CMC15
#define DTS090CM_UM DTS090CM_BASE.BIT._UM
#define DTS090CM_SPID0 DTS090CM_BASE.BIT._SPID0
#define DTS090CM_SPID1 DTS090CM_BASE.BIT._SPID1
#define DTS090CM_SPID2 DTS090CM_BASE.BIT._SPID2
#define DTS090CM_SPID3 DTS090CM_BASE.BIT._SPID3
#define DTS090CM_SPID4 DTS090CM_BASE.BIT._SPID4
#define DTS090CM_PEID0 DTS090CM_BASE.BIT._PEID0
#define DTS090CM_PEID1 DTS090CM_BASE.BIT._PEID1
#define DTS090CM_PEID2 DTS090CM_BASE.BIT._PEID2
#define DTS091CM DTS091CM_BASE.UINT32
#define DTS091CM_CMC0 DTS091CM_BASE.BIT._CMC0
#define DTS091CM_CMC1 DTS091CM_BASE.BIT._CMC1
#define DTS091CM_CMC2 DTS091CM_BASE.BIT._CMC2
#define DTS091CM_CMC3 DTS091CM_BASE.BIT._CMC3
#define DTS091CM_CMC4 DTS091CM_BASE.BIT._CMC4
#define DTS091CM_CMC5 DTS091CM_BASE.BIT._CMC5
#define DTS091CM_CMC6 DTS091CM_BASE.BIT._CMC6
#define DTS091CM_CMC7 DTS091CM_BASE.BIT._CMC7
#define DTS091CM_CMC8 DTS091CM_BASE.BIT._CMC8
#define DTS091CM_CMC9 DTS091CM_BASE.BIT._CMC9
#define DTS091CM_CMC10 DTS091CM_BASE.BIT._CMC10
#define DTS091CM_CMC11 DTS091CM_BASE.BIT._CMC11
#define DTS091CM_CMC12 DTS091CM_BASE.BIT._CMC12
#define DTS091CM_CMC13 DTS091CM_BASE.BIT._CMC13
#define DTS091CM_CMC14 DTS091CM_BASE.BIT._CMC14
#define DTS091CM_CMC15 DTS091CM_BASE.BIT._CMC15
#define DTS091CM_UM DTS091CM_BASE.BIT._UM
#define DTS091CM_SPID0 DTS091CM_BASE.BIT._SPID0
#define DTS091CM_SPID1 DTS091CM_BASE.BIT._SPID1
#define DTS091CM_SPID2 DTS091CM_BASE.BIT._SPID2
#define DTS091CM_SPID3 DTS091CM_BASE.BIT._SPID3
#define DTS091CM_SPID4 DTS091CM_BASE.BIT._SPID4
#define DTS091CM_PEID0 DTS091CM_BASE.BIT._PEID0
#define DTS091CM_PEID1 DTS091CM_BASE.BIT._PEID1
#define DTS091CM_PEID2 DTS091CM_BASE.BIT._PEID2
#define DTS092CM DTS092CM_BASE.UINT32
#define DTS092CM_CMC0 DTS092CM_BASE.BIT._CMC0
#define DTS092CM_CMC1 DTS092CM_BASE.BIT._CMC1
#define DTS092CM_CMC2 DTS092CM_BASE.BIT._CMC2
#define DTS092CM_CMC3 DTS092CM_BASE.BIT._CMC3
#define DTS092CM_CMC4 DTS092CM_BASE.BIT._CMC4
#define DTS092CM_CMC5 DTS092CM_BASE.BIT._CMC5
#define DTS092CM_CMC6 DTS092CM_BASE.BIT._CMC6
#define DTS092CM_CMC7 DTS092CM_BASE.BIT._CMC7
#define DTS092CM_CMC8 DTS092CM_BASE.BIT._CMC8
#define DTS092CM_CMC9 DTS092CM_BASE.BIT._CMC9
#define DTS092CM_CMC10 DTS092CM_BASE.BIT._CMC10
#define DTS092CM_CMC11 DTS092CM_BASE.BIT._CMC11
#define DTS092CM_CMC12 DTS092CM_BASE.BIT._CMC12
#define DTS092CM_CMC13 DTS092CM_BASE.BIT._CMC13
#define DTS092CM_CMC14 DTS092CM_BASE.BIT._CMC14
#define DTS092CM_CMC15 DTS092CM_BASE.BIT._CMC15
#define DTS092CM_UM DTS092CM_BASE.BIT._UM
#define DTS092CM_SPID0 DTS092CM_BASE.BIT._SPID0
#define DTS092CM_SPID1 DTS092CM_BASE.BIT._SPID1
#define DTS092CM_SPID2 DTS092CM_BASE.BIT._SPID2
#define DTS092CM_SPID3 DTS092CM_BASE.BIT._SPID3
#define DTS092CM_SPID4 DTS092CM_BASE.BIT._SPID4
#define DTS092CM_PEID0 DTS092CM_BASE.BIT._PEID0
#define DTS092CM_PEID1 DTS092CM_BASE.BIT._PEID1
#define DTS092CM_PEID2 DTS092CM_BASE.BIT._PEID2
#define DTS093CM DTS093CM_BASE.UINT32
#define DTS093CM_CMC0 DTS093CM_BASE.BIT._CMC0
#define DTS093CM_CMC1 DTS093CM_BASE.BIT._CMC1
#define DTS093CM_CMC2 DTS093CM_BASE.BIT._CMC2
#define DTS093CM_CMC3 DTS093CM_BASE.BIT._CMC3
#define DTS093CM_CMC4 DTS093CM_BASE.BIT._CMC4
#define DTS093CM_CMC5 DTS093CM_BASE.BIT._CMC5
#define DTS093CM_CMC6 DTS093CM_BASE.BIT._CMC6
#define DTS093CM_CMC7 DTS093CM_BASE.BIT._CMC7
#define DTS093CM_CMC8 DTS093CM_BASE.BIT._CMC8
#define DTS093CM_CMC9 DTS093CM_BASE.BIT._CMC9
#define DTS093CM_CMC10 DTS093CM_BASE.BIT._CMC10
#define DTS093CM_CMC11 DTS093CM_BASE.BIT._CMC11
#define DTS093CM_CMC12 DTS093CM_BASE.BIT._CMC12
#define DTS093CM_CMC13 DTS093CM_BASE.BIT._CMC13
#define DTS093CM_CMC14 DTS093CM_BASE.BIT._CMC14
#define DTS093CM_CMC15 DTS093CM_BASE.BIT._CMC15
#define DTS093CM_UM DTS093CM_BASE.BIT._UM
#define DTS093CM_SPID0 DTS093CM_BASE.BIT._SPID0
#define DTS093CM_SPID1 DTS093CM_BASE.BIT._SPID1
#define DTS093CM_SPID2 DTS093CM_BASE.BIT._SPID2
#define DTS093CM_SPID3 DTS093CM_BASE.BIT._SPID3
#define DTS093CM_SPID4 DTS093CM_BASE.BIT._SPID4
#define DTS093CM_PEID0 DTS093CM_BASE.BIT._PEID0
#define DTS093CM_PEID1 DTS093CM_BASE.BIT._PEID1
#define DTS093CM_PEID2 DTS093CM_BASE.BIT._PEID2
#define DTS094CM DTS094CM_BASE.UINT32
#define DTS094CM_CMC0 DTS094CM_BASE.BIT._CMC0
#define DTS094CM_CMC1 DTS094CM_BASE.BIT._CMC1
#define DTS094CM_CMC2 DTS094CM_BASE.BIT._CMC2
#define DTS094CM_CMC3 DTS094CM_BASE.BIT._CMC3
#define DTS094CM_CMC4 DTS094CM_BASE.BIT._CMC4
#define DTS094CM_CMC5 DTS094CM_BASE.BIT._CMC5
#define DTS094CM_CMC6 DTS094CM_BASE.BIT._CMC6
#define DTS094CM_CMC7 DTS094CM_BASE.BIT._CMC7
#define DTS094CM_CMC8 DTS094CM_BASE.BIT._CMC8
#define DTS094CM_CMC9 DTS094CM_BASE.BIT._CMC9
#define DTS094CM_CMC10 DTS094CM_BASE.BIT._CMC10
#define DTS094CM_CMC11 DTS094CM_BASE.BIT._CMC11
#define DTS094CM_CMC12 DTS094CM_BASE.BIT._CMC12
#define DTS094CM_CMC13 DTS094CM_BASE.BIT._CMC13
#define DTS094CM_CMC14 DTS094CM_BASE.BIT._CMC14
#define DTS094CM_CMC15 DTS094CM_BASE.BIT._CMC15
#define DTS094CM_UM DTS094CM_BASE.BIT._UM
#define DTS094CM_SPID0 DTS094CM_BASE.BIT._SPID0
#define DTS094CM_SPID1 DTS094CM_BASE.BIT._SPID1
#define DTS094CM_SPID2 DTS094CM_BASE.BIT._SPID2
#define DTS094CM_SPID3 DTS094CM_BASE.BIT._SPID3
#define DTS094CM_SPID4 DTS094CM_BASE.BIT._SPID4
#define DTS094CM_PEID0 DTS094CM_BASE.BIT._PEID0
#define DTS094CM_PEID1 DTS094CM_BASE.BIT._PEID1
#define DTS094CM_PEID2 DTS094CM_BASE.BIT._PEID2
#define DTS095CM DTS095CM_BASE.UINT32
#define DTS095CM_CMC0 DTS095CM_BASE.BIT._CMC0
#define DTS095CM_CMC1 DTS095CM_BASE.BIT._CMC1
#define DTS095CM_CMC2 DTS095CM_BASE.BIT._CMC2
#define DTS095CM_CMC3 DTS095CM_BASE.BIT._CMC3
#define DTS095CM_CMC4 DTS095CM_BASE.BIT._CMC4
#define DTS095CM_CMC5 DTS095CM_BASE.BIT._CMC5
#define DTS095CM_CMC6 DTS095CM_BASE.BIT._CMC6
#define DTS095CM_CMC7 DTS095CM_BASE.BIT._CMC7
#define DTS095CM_CMC8 DTS095CM_BASE.BIT._CMC8
#define DTS095CM_CMC9 DTS095CM_BASE.BIT._CMC9
#define DTS095CM_CMC10 DTS095CM_BASE.BIT._CMC10
#define DTS095CM_CMC11 DTS095CM_BASE.BIT._CMC11
#define DTS095CM_CMC12 DTS095CM_BASE.BIT._CMC12
#define DTS095CM_CMC13 DTS095CM_BASE.BIT._CMC13
#define DTS095CM_CMC14 DTS095CM_BASE.BIT._CMC14
#define DTS095CM_CMC15 DTS095CM_BASE.BIT._CMC15
#define DTS095CM_UM DTS095CM_BASE.BIT._UM
#define DTS095CM_SPID0 DTS095CM_BASE.BIT._SPID0
#define DTS095CM_SPID1 DTS095CM_BASE.BIT._SPID1
#define DTS095CM_SPID2 DTS095CM_BASE.BIT._SPID2
#define DTS095CM_SPID3 DTS095CM_BASE.BIT._SPID3
#define DTS095CM_SPID4 DTS095CM_BASE.BIT._SPID4
#define DTS095CM_PEID0 DTS095CM_BASE.BIT._PEID0
#define DTS095CM_PEID1 DTS095CM_BASE.BIT._PEID1
#define DTS095CM_PEID2 DTS095CM_BASE.BIT._PEID2
#define DTS096CM DTS096CM_BASE.UINT32
#define DTS096CM_CMC0 DTS096CM_BASE.BIT._CMC0
#define DTS096CM_CMC1 DTS096CM_BASE.BIT._CMC1
#define DTS096CM_CMC2 DTS096CM_BASE.BIT._CMC2
#define DTS096CM_CMC3 DTS096CM_BASE.BIT._CMC3
#define DTS096CM_CMC4 DTS096CM_BASE.BIT._CMC4
#define DTS096CM_CMC5 DTS096CM_BASE.BIT._CMC5
#define DTS096CM_CMC6 DTS096CM_BASE.BIT._CMC6
#define DTS096CM_CMC7 DTS096CM_BASE.BIT._CMC7
#define DTS096CM_CMC8 DTS096CM_BASE.BIT._CMC8
#define DTS096CM_CMC9 DTS096CM_BASE.BIT._CMC9
#define DTS096CM_CMC10 DTS096CM_BASE.BIT._CMC10
#define DTS096CM_CMC11 DTS096CM_BASE.BIT._CMC11
#define DTS096CM_CMC12 DTS096CM_BASE.BIT._CMC12
#define DTS096CM_CMC13 DTS096CM_BASE.BIT._CMC13
#define DTS096CM_CMC14 DTS096CM_BASE.BIT._CMC14
#define DTS096CM_CMC15 DTS096CM_BASE.BIT._CMC15
#define DTS096CM_UM DTS096CM_BASE.BIT._UM
#define DTS096CM_SPID0 DTS096CM_BASE.BIT._SPID0
#define DTS096CM_SPID1 DTS096CM_BASE.BIT._SPID1
#define DTS096CM_SPID2 DTS096CM_BASE.BIT._SPID2
#define DTS096CM_SPID3 DTS096CM_BASE.BIT._SPID3
#define DTS096CM_SPID4 DTS096CM_BASE.BIT._SPID4
#define DTS096CM_PEID0 DTS096CM_BASE.BIT._PEID0
#define DTS096CM_PEID1 DTS096CM_BASE.BIT._PEID1
#define DTS096CM_PEID2 DTS096CM_BASE.BIT._PEID2
#define DTS097CM DTS097CM_BASE.UINT32
#define DTS097CM_CMC0 DTS097CM_BASE.BIT._CMC0
#define DTS097CM_CMC1 DTS097CM_BASE.BIT._CMC1
#define DTS097CM_CMC2 DTS097CM_BASE.BIT._CMC2
#define DTS097CM_CMC3 DTS097CM_BASE.BIT._CMC3
#define DTS097CM_CMC4 DTS097CM_BASE.BIT._CMC4
#define DTS097CM_CMC5 DTS097CM_BASE.BIT._CMC5
#define DTS097CM_CMC6 DTS097CM_BASE.BIT._CMC6
#define DTS097CM_CMC7 DTS097CM_BASE.BIT._CMC7
#define DTS097CM_CMC8 DTS097CM_BASE.BIT._CMC8
#define DTS097CM_CMC9 DTS097CM_BASE.BIT._CMC9
#define DTS097CM_CMC10 DTS097CM_BASE.BIT._CMC10
#define DTS097CM_CMC11 DTS097CM_BASE.BIT._CMC11
#define DTS097CM_CMC12 DTS097CM_BASE.BIT._CMC12
#define DTS097CM_CMC13 DTS097CM_BASE.BIT._CMC13
#define DTS097CM_CMC14 DTS097CM_BASE.BIT._CMC14
#define DTS097CM_CMC15 DTS097CM_BASE.BIT._CMC15
#define DTS097CM_UM DTS097CM_BASE.BIT._UM
#define DTS097CM_SPID0 DTS097CM_BASE.BIT._SPID0
#define DTS097CM_SPID1 DTS097CM_BASE.BIT._SPID1
#define DTS097CM_SPID2 DTS097CM_BASE.BIT._SPID2
#define DTS097CM_SPID3 DTS097CM_BASE.BIT._SPID3
#define DTS097CM_SPID4 DTS097CM_BASE.BIT._SPID4
#define DTS097CM_PEID0 DTS097CM_BASE.BIT._PEID0
#define DTS097CM_PEID1 DTS097CM_BASE.BIT._PEID1
#define DTS097CM_PEID2 DTS097CM_BASE.BIT._PEID2
#define DTS098CM DTS098CM_BASE.UINT32
#define DTS098CM_CMC0 DTS098CM_BASE.BIT._CMC0
#define DTS098CM_CMC1 DTS098CM_BASE.BIT._CMC1
#define DTS098CM_CMC2 DTS098CM_BASE.BIT._CMC2
#define DTS098CM_CMC3 DTS098CM_BASE.BIT._CMC3
#define DTS098CM_CMC4 DTS098CM_BASE.BIT._CMC4
#define DTS098CM_CMC5 DTS098CM_BASE.BIT._CMC5
#define DTS098CM_CMC6 DTS098CM_BASE.BIT._CMC6
#define DTS098CM_CMC7 DTS098CM_BASE.BIT._CMC7
#define DTS098CM_CMC8 DTS098CM_BASE.BIT._CMC8
#define DTS098CM_CMC9 DTS098CM_BASE.BIT._CMC9
#define DTS098CM_CMC10 DTS098CM_BASE.BIT._CMC10
#define DTS098CM_CMC11 DTS098CM_BASE.BIT._CMC11
#define DTS098CM_CMC12 DTS098CM_BASE.BIT._CMC12
#define DTS098CM_CMC13 DTS098CM_BASE.BIT._CMC13
#define DTS098CM_CMC14 DTS098CM_BASE.BIT._CMC14
#define DTS098CM_CMC15 DTS098CM_BASE.BIT._CMC15
#define DTS098CM_UM DTS098CM_BASE.BIT._UM
#define DTS098CM_SPID0 DTS098CM_BASE.BIT._SPID0
#define DTS098CM_SPID1 DTS098CM_BASE.BIT._SPID1
#define DTS098CM_SPID2 DTS098CM_BASE.BIT._SPID2
#define DTS098CM_SPID3 DTS098CM_BASE.BIT._SPID3
#define DTS098CM_SPID4 DTS098CM_BASE.BIT._SPID4
#define DTS098CM_PEID0 DTS098CM_BASE.BIT._PEID0
#define DTS098CM_PEID1 DTS098CM_BASE.BIT._PEID1
#define DTS098CM_PEID2 DTS098CM_BASE.BIT._PEID2
#define DTS099CM DTS099CM_BASE.UINT32
#define DTS099CM_CMC0 DTS099CM_BASE.BIT._CMC0
#define DTS099CM_CMC1 DTS099CM_BASE.BIT._CMC1
#define DTS099CM_CMC2 DTS099CM_BASE.BIT._CMC2
#define DTS099CM_CMC3 DTS099CM_BASE.BIT._CMC3
#define DTS099CM_CMC4 DTS099CM_BASE.BIT._CMC4
#define DTS099CM_CMC5 DTS099CM_BASE.BIT._CMC5
#define DTS099CM_CMC6 DTS099CM_BASE.BIT._CMC6
#define DTS099CM_CMC7 DTS099CM_BASE.BIT._CMC7
#define DTS099CM_CMC8 DTS099CM_BASE.BIT._CMC8
#define DTS099CM_CMC9 DTS099CM_BASE.BIT._CMC9
#define DTS099CM_CMC10 DTS099CM_BASE.BIT._CMC10
#define DTS099CM_CMC11 DTS099CM_BASE.BIT._CMC11
#define DTS099CM_CMC12 DTS099CM_BASE.BIT._CMC12
#define DTS099CM_CMC13 DTS099CM_BASE.BIT._CMC13
#define DTS099CM_CMC14 DTS099CM_BASE.BIT._CMC14
#define DTS099CM_CMC15 DTS099CM_BASE.BIT._CMC15
#define DTS099CM_UM DTS099CM_BASE.BIT._UM
#define DTS099CM_SPID0 DTS099CM_BASE.BIT._SPID0
#define DTS099CM_SPID1 DTS099CM_BASE.BIT._SPID1
#define DTS099CM_SPID2 DTS099CM_BASE.BIT._SPID2
#define DTS099CM_SPID3 DTS099CM_BASE.BIT._SPID3
#define DTS099CM_SPID4 DTS099CM_BASE.BIT._SPID4
#define DTS099CM_PEID0 DTS099CM_BASE.BIT._PEID0
#define DTS099CM_PEID1 DTS099CM_BASE.BIT._PEID1
#define DTS099CM_PEID2 DTS099CM_BASE.BIT._PEID2
#define DTS100CM DTS100CM_BASE.UINT32
#define DTS100CM_CMC0 DTS100CM_BASE.BIT._CMC0
#define DTS100CM_CMC1 DTS100CM_BASE.BIT._CMC1
#define DTS100CM_CMC2 DTS100CM_BASE.BIT._CMC2
#define DTS100CM_CMC3 DTS100CM_BASE.BIT._CMC3
#define DTS100CM_CMC4 DTS100CM_BASE.BIT._CMC4
#define DTS100CM_CMC5 DTS100CM_BASE.BIT._CMC5
#define DTS100CM_CMC6 DTS100CM_BASE.BIT._CMC6
#define DTS100CM_CMC7 DTS100CM_BASE.BIT._CMC7
#define DTS100CM_CMC8 DTS100CM_BASE.BIT._CMC8
#define DTS100CM_CMC9 DTS100CM_BASE.BIT._CMC9
#define DTS100CM_CMC10 DTS100CM_BASE.BIT._CMC10
#define DTS100CM_CMC11 DTS100CM_BASE.BIT._CMC11
#define DTS100CM_CMC12 DTS100CM_BASE.BIT._CMC12
#define DTS100CM_CMC13 DTS100CM_BASE.BIT._CMC13
#define DTS100CM_CMC14 DTS100CM_BASE.BIT._CMC14
#define DTS100CM_CMC15 DTS100CM_BASE.BIT._CMC15
#define DTS100CM_UM DTS100CM_BASE.BIT._UM
#define DTS100CM_SPID0 DTS100CM_BASE.BIT._SPID0
#define DTS100CM_SPID1 DTS100CM_BASE.BIT._SPID1
#define DTS100CM_SPID2 DTS100CM_BASE.BIT._SPID2
#define DTS100CM_SPID3 DTS100CM_BASE.BIT._SPID3
#define DTS100CM_SPID4 DTS100CM_BASE.BIT._SPID4
#define DTS100CM_PEID0 DTS100CM_BASE.BIT._PEID0
#define DTS100CM_PEID1 DTS100CM_BASE.BIT._PEID1
#define DTS100CM_PEID2 DTS100CM_BASE.BIT._PEID2
#define DTS101CM DTS101CM_BASE.UINT32
#define DTS101CM_CMC0 DTS101CM_BASE.BIT._CMC0
#define DTS101CM_CMC1 DTS101CM_BASE.BIT._CMC1
#define DTS101CM_CMC2 DTS101CM_BASE.BIT._CMC2
#define DTS101CM_CMC3 DTS101CM_BASE.BIT._CMC3
#define DTS101CM_CMC4 DTS101CM_BASE.BIT._CMC4
#define DTS101CM_CMC5 DTS101CM_BASE.BIT._CMC5
#define DTS101CM_CMC6 DTS101CM_BASE.BIT._CMC6
#define DTS101CM_CMC7 DTS101CM_BASE.BIT._CMC7
#define DTS101CM_CMC8 DTS101CM_BASE.BIT._CMC8
#define DTS101CM_CMC9 DTS101CM_BASE.BIT._CMC9
#define DTS101CM_CMC10 DTS101CM_BASE.BIT._CMC10
#define DTS101CM_CMC11 DTS101CM_BASE.BIT._CMC11
#define DTS101CM_CMC12 DTS101CM_BASE.BIT._CMC12
#define DTS101CM_CMC13 DTS101CM_BASE.BIT._CMC13
#define DTS101CM_CMC14 DTS101CM_BASE.BIT._CMC14
#define DTS101CM_CMC15 DTS101CM_BASE.BIT._CMC15
#define DTS101CM_UM DTS101CM_BASE.BIT._UM
#define DTS101CM_SPID0 DTS101CM_BASE.BIT._SPID0
#define DTS101CM_SPID1 DTS101CM_BASE.BIT._SPID1
#define DTS101CM_SPID2 DTS101CM_BASE.BIT._SPID2
#define DTS101CM_SPID3 DTS101CM_BASE.BIT._SPID3
#define DTS101CM_SPID4 DTS101CM_BASE.BIT._SPID4
#define DTS101CM_PEID0 DTS101CM_BASE.BIT._PEID0
#define DTS101CM_PEID1 DTS101CM_BASE.BIT._PEID1
#define DTS101CM_PEID2 DTS101CM_BASE.BIT._PEID2
#define DTS102CM DTS102CM_BASE.UINT32
#define DTS102CM_CMC0 DTS102CM_BASE.BIT._CMC0
#define DTS102CM_CMC1 DTS102CM_BASE.BIT._CMC1
#define DTS102CM_CMC2 DTS102CM_BASE.BIT._CMC2
#define DTS102CM_CMC3 DTS102CM_BASE.BIT._CMC3
#define DTS102CM_CMC4 DTS102CM_BASE.BIT._CMC4
#define DTS102CM_CMC5 DTS102CM_BASE.BIT._CMC5
#define DTS102CM_CMC6 DTS102CM_BASE.BIT._CMC6
#define DTS102CM_CMC7 DTS102CM_BASE.BIT._CMC7
#define DTS102CM_CMC8 DTS102CM_BASE.BIT._CMC8
#define DTS102CM_CMC9 DTS102CM_BASE.BIT._CMC9
#define DTS102CM_CMC10 DTS102CM_BASE.BIT._CMC10
#define DTS102CM_CMC11 DTS102CM_BASE.BIT._CMC11
#define DTS102CM_CMC12 DTS102CM_BASE.BIT._CMC12
#define DTS102CM_CMC13 DTS102CM_BASE.BIT._CMC13
#define DTS102CM_CMC14 DTS102CM_BASE.BIT._CMC14
#define DTS102CM_CMC15 DTS102CM_BASE.BIT._CMC15
#define DTS102CM_UM DTS102CM_BASE.BIT._UM
#define DTS102CM_SPID0 DTS102CM_BASE.BIT._SPID0
#define DTS102CM_SPID1 DTS102CM_BASE.BIT._SPID1
#define DTS102CM_SPID2 DTS102CM_BASE.BIT._SPID2
#define DTS102CM_SPID3 DTS102CM_BASE.BIT._SPID3
#define DTS102CM_SPID4 DTS102CM_BASE.BIT._SPID4
#define DTS102CM_PEID0 DTS102CM_BASE.BIT._PEID0
#define DTS102CM_PEID1 DTS102CM_BASE.BIT._PEID1
#define DTS102CM_PEID2 DTS102CM_BASE.BIT._PEID2
#define DTS103CM DTS103CM_BASE.UINT32
#define DTS103CM_CMC0 DTS103CM_BASE.BIT._CMC0
#define DTS103CM_CMC1 DTS103CM_BASE.BIT._CMC1
#define DTS103CM_CMC2 DTS103CM_BASE.BIT._CMC2
#define DTS103CM_CMC3 DTS103CM_BASE.BIT._CMC3
#define DTS103CM_CMC4 DTS103CM_BASE.BIT._CMC4
#define DTS103CM_CMC5 DTS103CM_BASE.BIT._CMC5
#define DTS103CM_CMC6 DTS103CM_BASE.BIT._CMC6
#define DTS103CM_CMC7 DTS103CM_BASE.BIT._CMC7
#define DTS103CM_CMC8 DTS103CM_BASE.BIT._CMC8
#define DTS103CM_CMC9 DTS103CM_BASE.BIT._CMC9
#define DTS103CM_CMC10 DTS103CM_BASE.BIT._CMC10
#define DTS103CM_CMC11 DTS103CM_BASE.BIT._CMC11
#define DTS103CM_CMC12 DTS103CM_BASE.BIT._CMC12
#define DTS103CM_CMC13 DTS103CM_BASE.BIT._CMC13
#define DTS103CM_CMC14 DTS103CM_BASE.BIT._CMC14
#define DTS103CM_CMC15 DTS103CM_BASE.BIT._CMC15
#define DTS103CM_UM DTS103CM_BASE.BIT._UM
#define DTS103CM_SPID0 DTS103CM_BASE.BIT._SPID0
#define DTS103CM_SPID1 DTS103CM_BASE.BIT._SPID1
#define DTS103CM_SPID2 DTS103CM_BASE.BIT._SPID2
#define DTS103CM_SPID3 DTS103CM_BASE.BIT._SPID3
#define DTS103CM_SPID4 DTS103CM_BASE.BIT._SPID4
#define DTS103CM_PEID0 DTS103CM_BASE.BIT._PEID0
#define DTS103CM_PEID1 DTS103CM_BASE.BIT._PEID1
#define DTS103CM_PEID2 DTS103CM_BASE.BIT._PEID2
#define DTS104CM DTS104CM_BASE.UINT32
#define DTS104CM_CMC0 DTS104CM_BASE.BIT._CMC0
#define DTS104CM_CMC1 DTS104CM_BASE.BIT._CMC1
#define DTS104CM_CMC2 DTS104CM_BASE.BIT._CMC2
#define DTS104CM_CMC3 DTS104CM_BASE.BIT._CMC3
#define DTS104CM_CMC4 DTS104CM_BASE.BIT._CMC4
#define DTS104CM_CMC5 DTS104CM_BASE.BIT._CMC5
#define DTS104CM_CMC6 DTS104CM_BASE.BIT._CMC6
#define DTS104CM_CMC7 DTS104CM_BASE.BIT._CMC7
#define DTS104CM_CMC8 DTS104CM_BASE.BIT._CMC8
#define DTS104CM_CMC9 DTS104CM_BASE.BIT._CMC9
#define DTS104CM_CMC10 DTS104CM_BASE.BIT._CMC10
#define DTS104CM_CMC11 DTS104CM_BASE.BIT._CMC11
#define DTS104CM_CMC12 DTS104CM_BASE.BIT._CMC12
#define DTS104CM_CMC13 DTS104CM_BASE.BIT._CMC13
#define DTS104CM_CMC14 DTS104CM_BASE.BIT._CMC14
#define DTS104CM_CMC15 DTS104CM_BASE.BIT._CMC15
#define DTS104CM_UM DTS104CM_BASE.BIT._UM
#define DTS104CM_SPID0 DTS104CM_BASE.BIT._SPID0
#define DTS104CM_SPID1 DTS104CM_BASE.BIT._SPID1
#define DTS104CM_SPID2 DTS104CM_BASE.BIT._SPID2
#define DTS104CM_SPID3 DTS104CM_BASE.BIT._SPID3
#define DTS104CM_SPID4 DTS104CM_BASE.BIT._SPID4
#define DTS104CM_PEID0 DTS104CM_BASE.BIT._PEID0
#define DTS104CM_PEID1 DTS104CM_BASE.BIT._PEID1
#define DTS104CM_PEID2 DTS104CM_BASE.BIT._PEID2
#define DTS105CM DTS105CM_BASE.UINT32
#define DTS105CM_CMC0 DTS105CM_BASE.BIT._CMC0
#define DTS105CM_CMC1 DTS105CM_BASE.BIT._CMC1
#define DTS105CM_CMC2 DTS105CM_BASE.BIT._CMC2
#define DTS105CM_CMC3 DTS105CM_BASE.BIT._CMC3
#define DTS105CM_CMC4 DTS105CM_BASE.BIT._CMC4
#define DTS105CM_CMC5 DTS105CM_BASE.BIT._CMC5
#define DTS105CM_CMC6 DTS105CM_BASE.BIT._CMC6
#define DTS105CM_CMC7 DTS105CM_BASE.BIT._CMC7
#define DTS105CM_CMC8 DTS105CM_BASE.BIT._CMC8
#define DTS105CM_CMC9 DTS105CM_BASE.BIT._CMC9
#define DTS105CM_CMC10 DTS105CM_BASE.BIT._CMC10
#define DTS105CM_CMC11 DTS105CM_BASE.BIT._CMC11
#define DTS105CM_CMC12 DTS105CM_BASE.BIT._CMC12
#define DTS105CM_CMC13 DTS105CM_BASE.BIT._CMC13
#define DTS105CM_CMC14 DTS105CM_BASE.BIT._CMC14
#define DTS105CM_CMC15 DTS105CM_BASE.BIT._CMC15
#define DTS105CM_UM DTS105CM_BASE.BIT._UM
#define DTS105CM_SPID0 DTS105CM_BASE.BIT._SPID0
#define DTS105CM_SPID1 DTS105CM_BASE.BIT._SPID1
#define DTS105CM_SPID2 DTS105CM_BASE.BIT._SPID2
#define DTS105CM_SPID3 DTS105CM_BASE.BIT._SPID3
#define DTS105CM_SPID4 DTS105CM_BASE.BIT._SPID4
#define DTS105CM_PEID0 DTS105CM_BASE.BIT._PEID0
#define DTS105CM_PEID1 DTS105CM_BASE.BIT._PEID1
#define DTS105CM_PEID2 DTS105CM_BASE.BIT._PEID2
#define DTS106CM DTS106CM_BASE.UINT32
#define DTS106CM_CMC0 DTS106CM_BASE.BIT._CMC0
#define DTS106CM_CMC1 DTS106CM_BASE.BIT._CMC1
#define DTS106CM_CMC2 DTS106CM_BASE.BIT._CMC2
#define DTS106CM_CMC3 DTS106CM_BASE.BIT._CMC3
#define DTS106CM_CMC4 DTS106CM_BASE.BIT._CMC4
#define DTS106CM_CMC5 DTS106CM_BASE.BIT._CMC5
#define DTS106CM_CMC6 DTS106CM_BASE.BIT._CMC6
#define DTS106CM_CMC7 DTS106CM_BASE.BIT._CMC7
#define DTS106CM_CMC8 DTS106CM_BASE.BIT._CMC8
#define DTS106CM_CMC9 DTS106CM_BASE.BIT._CMC9
#define DTS106CM_CMC10 DTS106CM_BASE.BIT._CMC10
#define DTS106CM_CMC11 DTS106CM_BASE.BIT._CMC11
#define DTS106CM_CMC12 DTS106CM_BASE.BIT._CMC12
#define DTS106CM_CMC13 DTS106CM_BASE.BIT._CMC13
#define DTS106CM_CMC14 DTS106CM_BASE.BIT._CMC14
#define DTS106CM_CMC15 DTS106CM_BASE.BIT._CMC15
#define DTS106CM_UM DTS106CM_BASE.BIT._UM
#define DTS106CM_SPID0 DTS106CM_BASE.BIT._SPID0
#define DTS106CM_SPID1 DTS106CM_BASE.BIT._SPID1
#define DTS106CM_SPID2 DTS106CM_BASE.BIT._SPID2
#define DTS106CM_SPID3 DTS106CM_BASE.BIT._SPID3
#define DTS106CM_SPID4 DTS106CM_BASE.BIT._SPID4
#define DTS106CM_PEID0 DTS106CM_BASE.BIT._PEID0
#define DTS106CM_PEID1 DTS106CM_BASE.BIT._PEID1
#define DTS106CM_PEID2 DTS106CM_BASE.BIT._PEID2
#define DTS107CM DTS107CM_BASE.UINT32
#define DTS107CM_CMC0 DTS107CM_BASE.BIT._CMC0
#define DTS107CM_CMC1 DTS107CM_BASE.BIT._CMC1
#define DTS107CM_CMC2 DTS107CM_BASE.BIT._CMC2
#define DTS107CM_CMC3 DTS107CM_BASE.BIT._CMC3
#define DTS107CM_CMC4 DTS107CM_BASE.BIT._CMC4
#define DTS107CM_CMC5 DTS107CM_BASE.BIT._CMC5
#define DTS107CM_CMC6 DTS107CM_BASE.BIT._CMC6
#define DTS107CM_CMC7 DTS107CM_BASE.BIT._CMC7
#define DTS107CM_CMC8 DTS107CM_BASE.BIT._CMC8
#define DTS107CM_CMC9 DTS107CM_BASE.BIT._CMC9
#define DTS107CM_CMC10 DTS107CM_BASE.BIT._CMC10
#define DTS107CM_CMC11 DTS107CM_BASE.BIT._CMC11
#define DTS107CM_CMC12 DTS107CM_BASE.BIT._CMC12
#define DTS107CM_CMC13 DTS107CM_BASE.BIT._CMC13
#define DTS107CM_CMC14 DTS107CM_BASE.BIT._CMC14
#define DTS107CM_CMC15 DTS107CM_BASE.BIT._CMC15
#define DTS107CM_UM DTS107CM_BASE.BIT._UM
#define DTS107CM_SPID0 DTS107CM_BASE.BIT._SPID0
#define DTS107CM_SPID1 DTS107CM_BASE.BIT._SPID1
#define DTS107CM_SPID2 DTS107CM_BASE.BIT._SPID2
#define DTS107CM_SPID3 DTS107CM_BASE.BIT._SPID3
#define DTS107CM_SPID4 DTS107CM_BASE.BIT._SPID4
#define DTS107CM_PEID0 DTS107CM_BASE.BIT._PEID0
#define DTS107CM_PEID1 DTS107CM_BASE.BIT._PEID1
#define DTS107CM_PEID2 DTS107CM_BASE.BIT._PEID2
#define DTS108CM DTS108CM_BASE.UINT32
#define DTS108CM_CMC0 DTS108CM_BASE.BIT._CMC0
#define DTS108CM_CMC1 DTS108CM_BASE.BIT._CMC1
#define DTS108CM_CMC2 DTS108CM_BASE.BIT._CMC2
#define DTS108CM_CMC3 DTS108CM_BASE.BIT._CMC3
#define DTS108CM_CMC4 DTS108CM_BASE.BIT._CMC4
#define DTS108CM_CMC5 DTS108CM_BASE.BIT._CMC5
#define DTS108CM_CMC6 DTS108CM_BASE.BIT._CMC6
#define DTS108CM_CMC7 DTS108CM_BASE.BIT._CMC7
#define DTS108CM_CMC8 DTS108CM_BASE.BIT._CMC8
#define DTS108CM_CMC9 DTS108CM_BASE.BIT._CMC9
#define DTS108CM_CMC10 DTS108CM_BASE.BIT._CMC10
#define DTS108CM_CMC11 DTS108CM_BASE.BIT._CMC11
#define DTS108CM_CMC12 DTS108CM_BASE.BIT._CMC12
#define DTS108CM_CMC13 DTS108CM_BASE.BIT._CMC13
#define DTS108CM_CMC14 DTS108CM_BASE.BIT._CMC14
#define DTS108CM_CMC15 DTS108CM_BASE.BIT._CMC15
#define DTS108CM_UM DTS108CM_BASE.BIT._UM
#define DTS108CM_SPID0 DTS108CM_BASE.BIT._SPID0
#define DTS108CM_SPID1 DTS108CM_BASE.BIT._SPID1
#define DTS108CM_SPID2 DTS108CM_BASE.BIT._SPID2
#define DTS108CM_SPID3 DTS108CM_BASE.BIT._SPID3
#define DTS108CM_SPID4 DTS108CM_BASE.BIT._SPID4
#define DTS108CM_PEID0 DTS108CM_BASE.BIT._PEID0
#define DTS108CM_PEID1 DTS108CM_BASE.BIT._PEID1
#define DTS108CM_PEID2 DTS108CM_BASE.BIT._PEID2
#define DTS109CM DTS109CM_BASE.UINT32
#define DTS109CM_CMC0 DTS109CM_BASE.BIT._CMC0
#define DTS109CM_CMC1 DTS109CM_BASE.BIT._CMC1
#define DTS109CM_CMC2 DTS109CM_BASE.BIT._CMC2
#define DTS109CM_CMC3 DTS109CM_BASE.BIT._CMC3
#define DTS109CM_CMC4 DTS109CM_BASE.BIT._CMC4
#define DTS109CM_CMC5 DTS109CM_BASE.BIT._CMC5
#define DTS109CM_CMC6 DTS109CM_BASE.BIT._CMC6
#define DTS109CM_CMC7 DTS109CM_BASE.BIT._CMC7
#define DTS109CM_CMC8 DTS109CM_BASE.BIT._CMC8
#define DTS109CM_CMC9 DTS109CM_BASE.BIT._CMC9
#define DTS109CM_CMC10 DTS109CM_BASE.BIT._CMC10
#define DTS109CM_CMC11 DTS109CM_BASE.BIT._CMC11
#define DTS109CM_CMC12 DTS109CM_BASE.BIT._CMC12
#define DTS109CM_CMC13 DTS109CM_BASE.BIT._CMC13
#define DTS109CM_CMC14 DTS109CM_BASE.BIT._CMC14
#define DTS109CM_CMC15 DTS109CM_BASE.BIT._CMC15
#define DTS109CM_UM DTS109CM_BASE.BIT._UM
#define DTS109CM_SPID0 DTS109CM_BASE.BIT._SPID0
#define DTS109CM_SPID1 DTS109CM_BASE.BIT._SPID1
#define DTS109CM_SPID2 DTS109CM_BASE.BIT._SPID2
#define DTS109CM_SPID3 DTS109CM_BASE.BIT._SPID3
#define DTS109CM_SPID4 DTS109CM_BASE.BIT._SPID4
#define DTS109CM_PEID0 DTS109CM_BASE.BIT._PEID0
#define DTS109CM_PEID1 DTS109CM_BASE.BIT._PEID1
#define DTS109CM_PEID2 DTS109CM_BASE.BIT._PEID2
#define DTS110CM DTS110CM_BASE.UINT32
#define DTS110CM_CMC0 DTS110CM_BASE.BIT._CMC0
#define DTS110CM_CMC1 DTS110CM_BASE.BIT._CMC1
#define DTS110CM_CMC2 DTS110CM_BASE.BIT._CMC2
#define DTS110CM_CMC3 DTS110CM_BASE.BIT._CMC3
#define DTS110CM_CMC4 DTS110CM_BASE.BIT._CMC4
#define DTS110CM_CMC5 DTS110CM_BASE.BIT._CMC5
#define DTS110CM_CMC6 DTS110CM_BASE.BIT._CMC6
#define DTS110CM_CMC7 DTS110CM_BASE.BIT._CMC7
#define DTS110CM_CMC8 DTS110CM_BASE.BIT._CMC8
#define DTS110CM_CMC9 DTS110CM_BASE.BIT._CMC9
#define DTS110CM_CMC10 DTS110CM_BASE.BIT._CMC10
#define DTS110CM_CMC11 DTS110CM_BASE.BIT._CMC11
#define DTS110CM_CMC12 DTS110CM_BASE.BIT._CMC12
#define DTS110CM_CMC13 DTS110CM_BASE.BIT._CMC13
#define DTS110CM_CMC14 DTS110CM_BASE.BIT._CMC14
#define DTS110CM_CMC15 DTS110CM_BASE.BIT._CMC15
#define DTS110CM_UM DTS110CM_BASE.BIT._UM
#define DTS110CM_SPID0 DTS110CM_BASE.BIT._SPID0
#define DTS110CM_SPID1 DTS110CM_BASE.BIT._SPID1
#define DTS110CM_SPID2 DTS110CM_BASE.BIT._SPID2
#define DTS110CM_SPID3 DTS110CM_BASE.BIT._SPID3
#define DTS110CM_SPID4 DTS110CM_BASE.BIT._SPID4
#define DTS110CM_PEID0 DTS110CM_BASE.BIT._PEID0
#define DTS110CM_PEID1 DTS110CM_BASE.BIT._PEID1
#define DTS110CM_PEID2 DTS110CM_BASE.BIT._PEID2
#define DTS111CM DTS111CM_BASE.UINT32
#define DTS111CM_CMC0 DTS111CM_BASE.BIT._CMC0
#define DTS111CM_CMC1 DTS111CM_BASE.BIT._CMC1
#define DTS111CM_CMC2 DTS111CM_BASE.BIT._CMC2
#define DTS111CM_CMC3 DTS111CM_BASE.BIT._CMC3
#define DTS111CM_CMC4 DTS111CM_BASE.BIT._CMC4
#define DTS111CM_CMC5 DTS111CM_BASE.BIT._CMC5
#define DTS111CM_CMC6 DTS111CM_BASE.BIT._CMC6
#define DTS111CM_CMC7 DTS111CM_BASE.BIT._CMC7
#define DTS111CM_CMC8 DTS111CM_BASE.BIT._CMC8
#define DTS111CM_CMC9 DTS111CM_BASE.BIT._CMC9
#define DTS111CM_CMC10 DTS111CM_BASE.BIT._CMC10
#define DTS111CM_CMC11 DTS111CM_BASE.BIT._CMC11
#define DTS111CM_CMC12 DTS111CM_BASE.BIT._CMC12
#define DTS111CM_CMC13 DTS111CM_BASE.BIT._CMC13
#define DTS111CM_CMC14 DTS111CM_BASE.BIT._CMC14
#define DTS111CM_CMC15 DTS111CM_BASE.BIT._CMC15
#define DTS111CM_UM DTS111CM_BASE.BIT._UM
#define DTS111CM_SPID0 DTS111CM_BASE.BIT._SPID0
#define DTS111CM_SPID1 DTS111CM_BASE.BIT._SPID1
#define DTS111CM_SPID2 DTS111CM_BASE.BIT._SPID2
#define DTS111CM_SPID3 DTS111CM_BASE.BIT._SPID3
#define DTS111CM_SPID4 DTS111CM_BASE.BIT._SPID4
#define DTS111CM_PEID0 DTS111CM_BASE.BIT._PEID0
#define DTS111CM_PEID1 DTS111CM_BASE.BIT._PEID1
#define DTS111CM_PEID2 DTS111CM_BASE.BIT._PEID2
#define DTS112CM DTS112CM_BASE.UINT32
#define DTS112CM_CMC0 DTS112CM_BASE.BIT._CMC0
#define DTS112CM_CMC1 DTS112CM_BASE.BIT._CMC1
#define DTS112CM_CMC2 DTS112CM_BASE.BIT._CMC2
#define DTS112CM_CMC3 DTS112CM_BASE.BIT._CMC3
#define DTS112CM_CMC4 DTS112CM_BASE.BIT._CMC4
#define DTS112CM_CMC5 DTS112CM_BASE.BIT._CMC5
#define DTS112CM_CMC6 DTS112CM_BASE.BIT._CMC6
#define DTS112CM_CMC7 DTS112CM_BASE.BIT._CMC7
#define DTS112CM_CMC8 DTS112CM_BASE.BIT._CMC8
#define DTS112CM_CMC9 DTS112CM_BASE.BIT._CMC9
#define DTS112CM_CMC10 DTS112CM_BASE.BIT._CMC10
#define DTS112CM_CMC11 DTS112CM_BASE.BIT._CMC11
#define DTS112CM_CMC12 DTS112CM_BASE.BIT._CMC12
#define DTS112CM_CMC13 DTS112CM_BASE.BIT._CMC13
#define DTS112CM_CMC14 DTS112CM_BASE.BIT._CMC14
#define DTS112CM_CMC15 DTS112CM_BASE.BIT._CMC15
#define DTS112CM_UM DTS112CM_BASE.BIT._UM
#define DTS112CM_SPID0 DTS112CM_BASE.BIT._SPID0
#define DTS112CM_SPID1 DTS112CM_BASE.BIT._SPID1
#define DTS112CM_SPID2 DTS112CM_BASE.BIT._SPID2
#define DTS112CM_SPID3 DTS112CM_BASE.BIT._SPID3
#define DTS112CM_SPID4 DTS112CM_BASE.BIT._SPID4
#define DTS112CM_PEID0 DTS112CM_BASE.BIT._PEID0
#define DTS112CM_PEID1 DTS112CM_BASE.BIT._PEID1
#define DTS112CM_PEID2 DTS112CM_BASE.BIT._PEID2
#define DTS113CM DTS113CM_BASE.UINT32
#define DTS113CM_CMC0 DTS113CM_BASE.BIT._CMC0
#define DTS113CM_CMC1 DTS113CM_BASE.BIT._CMC1
#define DTS113CM_CMC2 DTS113CM_BASE.BIT._CMC2
#define DTS113CM_CMC3 DTS113CM_BASE.BIT._CMC3
#define DTS113CM_CMC4 DTS113CM_BASE.BIT._CMC4
#define DTS113CM_CMC5 DTS113CM_BASE.BIT._CMC5
#define DTS113CM_CMC6 DTS113CM_BASE.BIT._CMC6
#define DTS113CM_CMC7 DTS113CM_BASE.BIT._CMC7
#define DTS113CM_CMC8 DTS113CM_BASE.BIT._CMC8
#define DTS113CM_CMC9 DTS113CM_BASE.BIT._CMC9
#define DTS113CM_CMC10 DTS113CM_BASE.BIT._CMC10
#define DTS113CM_CMC11 DTS113CM_BASE.BIT._CMC11
#define DTS113CM_CMC12 DTS113CM_BASE.BIT._CMC12
#define DTS113CM_CMC13 DTS113CM_BASE.BIT._CMC13
#define DTS113CM_CMC14 DTS113CM_BASE.BIT._CMC14
#define DTS113CM_CMC15 DTS113CM_BASE.BIT._CMC15
#define DTS113CM_UM DTS113CM_BASE.BIT._UM
#define DTS113CM_SPID0 DTS113CM_BASE.BIT._SPID0
#define DTS113CM_SPID1 DTS113CM_BASE.BIT._SPID1
#define DTS113CM_SPID2 DTS113CM_BASE.BIT._SPID2
#define DTS113CM_SPID3 DTS113CM_BASE.BIT._SPID3
#define DTS113CM_SPID4 DTS113CM_BASE.BIT._SPID4
#define DTS113CM_PEID0 DTS113CM_BASE.BIT._PEID0
#define DTS113CM_PEID1 DTS113CM_BASE.BIT._PEID1
#define DTS113CM_PEID2 DTS113CM_BASE.BIT._PEID2
#define DTS114CM DTS114CM_BASE.UINT32
#define DTS114CM_CMC0 DTS114CM_BASE.BIT._CMC0
#define DTS114CM_CMC1 DTS114CM_BASE.BIT._CMC1
#define DTS114CM_CMC2 DTS114CM_BASE.BIT._CMC2
#define DTS114CM_CMC3 DTS114CM_BASE.BIT._CMC3
#define DTS114CM_CMC4 DTS114CM_BASE.BIT._CMC4
#define DTS114CM_CMC5 DTS114CM_BASE.BIT._CMC5
#define DTS114CM_CMC6 DTS114CM_BASE.BIT._CMC6
#define DTS114CM_CMC7 DTS114CM_BASE.BIT._CMC7
#define DTS114CM_CMC8 DTS114CM_BASE.BIT._CMC8
#define DTS114CM_CMC9 DTS114CM_BASE.BIT._CMC9
#define DTS114CM_CMC10 DTS114CM_BASE.BIT._CMC10
#define DTS114CM_CMC11 DTS114CM_BASE.BIT._CMC11
#define DTS114CM_CMC12 DTS114CM_BASE.BIT._CMC12
#define DTS114CM_CMC13 DTS114CM_BASE.BIT._CMC13
#define DTS114CM_CMC14 DTS114CM_BASE.BIT._CMC14
#define DTS114CM_CMC15 DTS114CM_BASE.BIT._CMC15
#define DTS114CM_UM DTS114CM_BASE.BIT._UM
#define DTS114CM_SPID0 DTS114CM_BASE.BIT._SPID0
#define DTS114CM_SPID1 DTS114CM_BASE.BIT._SPID1
#define DTS114CM_SPID2 DTS114CM_BASE.BIT._SPID2
#define DTS114CM_SPID3 DTS114CM_BASE.BIT._SPID3
#define DTS114CM_SPID4 DTS114CM_BASE.BIT._SPID4
#define DTS114CM_PEID0 DTS114CM_BASE.BIT._PEID0
#define DTS114CM_PEID1 DTS114CM_BASE.BIT._PEID1
#define DTS114CM_PEID2 DTS114CM_BASE.BIT._PEID2
#define DTS115CM DTS115CM_BASE.UINT32
#define DTS115CM_CMC0 DTS115CM_BASE.BIT._CMC0
#define DTS115CM_CMC1 DTS115CM_BASE.BIT._CMC1
#define DTS115CM_CMC2 DTS115CM_BASE.BIT._CMC2
#define DTS115CM_CMC3 DTS115CM_BASE.BIT._CMC3
#define DTS115CM_CMC4 DTS115CM_BASE.BIT._CMC4
#define DTS115CM_CMC5 DTS115CM_BASE.BIT._CMC5
#define DTS115CM_CMC6 DTS115CM_BASE.BIT._CMC6
#define DTS115CM_CMC7 DTS115CM_BASE.BIT._CMC7
#define DTS115CM_CMC8 DTS115CM_BASE.BIT._CMC8
#define DTS115CM_CMC9 DTS115CM_BASE.BIT._CMC9
#define DTS115CM_CMC10 DTS115CM_BASE.BIT._CMC10
#define DTS115CM_CMC11 DTS115CM_BASE.BIT._CMC11
#define DTS115CM_CMC12 DTS115CM_BASE.BIT._CMC12
#define DTS115CM_CMC13 DTS115CM_BASE.BIT._CMC13
#define DTS115CM_CMC14 DTS115CM_BASE.BIT._CMC14
#define DTS115CM_CMC15 DTS115CM_BASE.BIT._CMC15
#define DTS115CM_UM DTS115CM_BASE.BIT._UM
#define DTS115CM_SPID0 DTS115CM_BASE.BIT._SPID0
#define DTS115CM_SPID1 DTS115CM_BASE.BIT._SPID1
#define DTS115CM_SPID2 DTS115CM_BASE.BIT._SPID2
#define DTS115CM_SPID3 DTS115CM_BASE.BIT._SPID3
#define DTS115CM_SPID4 DTS115CM_BASE.BIT._SPID4
#define DTS115CM_PEID0 DTS115CM_BASE.BIT._PEID0
#define DTS115CM_PEID1 DTS115CM_BASE.BIT._PEID1
#define DTS115CM_PEID2 DTS115CM_BASE.BIT._PEID2
#define DTS116CM DTS116CM_BASE.UINT32
#define DTS116CM_CMC0 DTS116CM_BASE.BIT._CMC0
#define DTS116CM_CMC1 DTS116CM_BASE.BIT._CMC1
#define DTS116CM_CMC2 DTS116CM_BASE.BIT._CMC2
#define DTS116CM_CMC3 DTS116CM_BASE.BIT._CMC3
#define DTS116CM_CMC4 DTS116CM_BASE.BIT._CMC4
#define DTS116CM_CMC5 DTS116CM_BASE.BIT._CMC5
#define DTS116CM_CMC6 DTS116CM_BASE.BIT._CMC6
#define DTS116CM_CMC7 DTS116CM_BASE.BIT._CMC7
#define DTS116CM_CMC8 DTS116CM_BASE.BIT._CMC8
#define DTS116CM_CMC9 DTS116CM_BASE.BIT._CMC9
#define DTS116CM_CMC10 DTS116CM_BASE.BIT._CMC10
#define DTS116CM_CMC11 DTS116CM_BASE.BIT._CMC11
#define DTS116CM_CMC12 DTS116CM_BASE.BIT._CMC12
#define DTS116CM_CMC13 DTS116CM_BASE.BIT._CMC13
#define DTS116CM_CMC14 DTS116CM_BASE.BIT._CMC14
#define DTS116CM_CMC15 DTS116CM_BASE.BIT._CMC15
#define DTS116CM_UM DTS116CM_BASE.BIT._UM
#define DTS116CM_SPID0 DTS116CM_BASE.BIT._SPID0
#define DTS116CM_SPID1 DTS116CM_BASE.BIT._SPID1
#define DTS116CM_SPID2 DTS116CM_BASE.BIT._SPID2
#define DTS116CM_SPID3 DTS116CM_BASE.BIT._SPID3
#define DTS116CM_SPID4 DTS116CM_BASE.BIT._SPID4
#define DTS116CM_PEID0 DTS116CM_BASE.BIT._PEID0
#define DTS116CM_PEID1 DTS116CM_BASE.BIT._PEID1
#define DTS116CM_PEID2 DTS116CM_BASE.BIT._PEID2
#define DTS117CM DTS117CM_BASE.UINT32
#define DTS117CM_CMC0 DTS117CM_BASE.BIT._CMC0
#define DTS117CM_CMC1 DTS117CM_BASE.BIT._CMC1
#define DTS117CM_CMC2 DTS117CM_BASE.BIT._CMC2
#define DTS117CM_CMC3 DTS117CM_BASE.BIT._CMC3
#define DTS117CM_CMC4 DTS117CM_BASE.BIT._CMC4
#define DTS117CM_CMC5 DTS117CM_BASE.BIT._CMC5
#define DTS117CM_CMC6 DTS117CM_BASE.BIT._CMC6
#define DTS117CM_CMC7 DTS117CM_BASE.BIT._CMC7
#define DTS117CM_CMC8 DTS117CM_BASE.BIT._CMC8
#define DTS117CM_CMC9 DTS117CM_BASE.BIT._CMC9
#define DTS117CM_CMC10 DTS117CM_BASE.BIT._CMC10
#define DTS117CM_CMC11 DTS117CM_BASE.BIT._CMC11
#define DTS117CM_CMC12 DTS117CM_BASE.BIT._CMC12
#define DTS117CM_CMC13 DTS117CM_BASE.BIT._CMC13
#define DTS117CM_CMC14 DTS117CM_BASE.BIT._CMC14
#define DTS117CM_CMC15 DTS117CM_BASE.BIT._CMC15
#define DTS117CM_UM DTS117CM_BASE.BIT._UM
#define DTS117CM_SPID0 DTS117CM_BASE.BIT._SPID0
#define DTS117CM_SPID1 DTS117CM_BASE.BIT._SPID1
#define DTS117CM_SPID2 DTS117CM_BASE.BIT._SPID2
#define DTS117CM_SPID3 DTS117CM_BASE.BIT._SPID3
#define DTS117CM_SPID4 DTS117CM_BASE.BIT._SPID4
#define DTS117CM_PEID0 DTS117CM_BASE.BIT._PEID0
#define DTS117CM_PEID1 DTS117CM_BASE.BIT._PEID1
#define DTS117CM_PEID2 DTS117CM_BASE.BIT._PEID2
#define DTS118CM DTS118CM_BASE.UINT32
#define DTS118CM_CMC0 DTS118CM_BASE.BIT._CMC0
#define DTS118CM_CMC1 DTS118CM_BASE.BIT._CMC1
#define DTS118CM_CMC2 DTS118CM_BASE.BIT._CMC2
#define DTS118CM_CMC3 DTS118CM_BASE.BIT._CMC3
#define DTS118CM_CMC4 DTS118CM_BASE.BIT._CMC4
#define DTS118CM_CMC5 DTS118CM_BASE.BIT._CMC5
#define DTS118CM_CMC6 DTS118CM_BASE.BIT._CMC6
#define DTS118CM_CMC7 DTS118CM_BASE.BIT._CMC7
#define DTS118CM_CMC8 DTS118CM_BASE.BIT._CMC8
#define DTS118CM_CMC9 DTS118CM_BASE.BIT._CMC9
#define DTS118CM_CMC10 DTS118CM_BASE.BIT._CMC10
#define DTS118CM_CMC11 DTS118CM_BASE.BIT._CMC11
#define DTS118CM_CMC12 DTS118CM_BASE.BIT._CMC12
#define DTS118CM_CMC13 DTS118CM_BASE.BIT._CMC13
#define DTS118CM_CMC14 DTS118CM_BASE.BIT._CMC14
#define DTS118CM_CMC15 DTS118CM_BASE.BIT._CMC15
#define DTS118CM_UM DTS118CM_BASE.BIT._UM
#define DTS118CM_SPID0 DTS118CM_BASE.BIT._SPID0
#define DTS118CM_SPID1 DTS118CM_BASE.BIT._SPID1
#define DTS118CM_SPID2 DTS118CM_BASE.BIT._SPID2
#define DTS118CM_SPID3 DTS118CM_BASE.BIT._SPID3
#define DTS118CM_SPID4 DTS118CM_BASE.BIT._SPID4
#define DTS118CM_PEID0 DTS118CM_BASE.BIT._PEID0
#define DTS118CM_PEID1 DTS118CM_BASE.BIT._PEID1
#define DTS118CM_PEID2 DTS118CM_BASE.BIT._PEID2
#define DTS119CM DTS119CM_BASE.UINT32
#define DTS119CM_CMC0 DTS119CM_BASE.BIT._CMC0
#define DTS119CM_CMC1 DTS119CM_BASE.BIT._CMC1
#define DTS119CM_CMC2 DTS119CM_BASE.BIT._CMC2
#define DTS119CM_CMC3 DTS119CM_BASE.BIT._CMC3
#define DTS119CM_CMC4 DTS119CM_BASE.BIT._CMC4
#define DTS119CM_CMC5 DTS119CM_BASE.BIT._CMC5
#define DTS119CM_CMC6 DTS119CM_BASE.BIT._CMC6
#define DTS119CM_CMC7 DTS119CM_BASE.BIT._CMC7
#define DTS119CM_CMC8 DTS119CM_BASE.BIT._CMC8
#define DTS119CM_CMC9 DTS119CM_BASE.BIT._CMC9
#define DTS119CM_CMC10 DTS119CM_BASE.BIT._CMC10
#define DTS119CM_CMC11 DTS119CM_BASE.BIT._CMC11
#define DTS119CM_CMC12 DTS119CM_BASE.BIT._CMC12
#define DTS119CM_CMC13 DTS119CM_BASE.BIT._CMC13
#define DTS119CM_CMC14 DTS119CM_BASE.BIT._CMC14
#define DTS119CM_CMC15 DTS119CM_BASE.BIT._CMC15
#define DTS119CM_UM DTS119CM_BASE.BIT._UM
#define DTS119CM_SPID0 DTS119CM_BASE.BIT._SPID0
#define DTS119CM_SPID1 DTS119CM_BASE.BIT._SPID1
#define DTS119CM_SPID2 DTS119CM_BASE.BIT._SPID2
#define DTS119CM_SPID3 DTS119CM_BASE.BIT._SPID3
#define DTS119CM_SPID4 DTS119CM_BASE.BIT._SPID4
#define DTS119CM_PEID0 DTS119CM_BASE.BIT._PEID0
#define DTS119CM_PEID1 DTS119CM_BASE.BIT._PEID1
#define DTS119CM_PEID2 DTS119CM_BASE.BIT._PEID2
#define DTS120CM DTS120CM_BASE.UINT32
#define DTS120CM_CMC0 DTS120CM_BASE.BIT._CMC0
#define DTS120CM_CMC1 DTS120CM_BASE.BIT._CMC1
#define DTS120CM_CMC2 DTS120CM_BASE.BIT._CMC2
#define DTS120CM_CMC3 DTS120CM_BASE.BIT._CMC3
#define DTS120CM_CMC4 DTS120CM_BASE.BIT._CMC4
#define DTS120CM_CMC5 DTS120CM_BASE.BIT._CMC5
#define DTS120CM_CMC6 DTS120CM_BASE.BIT._CMC6
#define DTS120CM_CMC7 DTS120CM_BASE.BIT._CMC7
#define DTS120CM_CMC8 DTS120CM_BASE.BIT._CMC8
#define DTS120CM_CMC9 DTS120CM_BASE.BIT._CMC9
#define DTS120CM_CMC10 DTS120CM_BASE.BIT._CMC10
#define DTS120CM_CMC11 DTS120CM_BASE.BIT._CMC11
#define DTS120CM_CMC12 DTS120CM_BASE.BIT._CMC12
#define DTS120CM_CMC13 DTS120CM_BASE.BIT._CMC13
#define DTS120CM_CMC14 DTS120CM_BASE.BIT._CMC14
#define DTS120CM_CMC15 DTS120CM_BASE.BIT._CMC15
#define DTS120CM_UM DTS120CM_BASE.BIT._UM
#define DTS120CM_SPID0 DTS120CM_BASE.BIT._SPID0
#define DTS120CM_SPID1 DTS120CM_BASE.BIT._SPID1
#define DTS120CM_SPID2 DTS120CM_BASE.BIT._SPID2
#define DTS120CM_SPID3 DTS120CM_BASE.BIT._SPID3
#define DTS120CM_SPID4 DTS120CM_BASE.BIT._SPID4
#define DTS120CM_PEID0 DTS120CM_BASE.BIT._PEID0
#define DTS120CM_PEID1 DTS120CM_BASE.BIT._PEID1
#define DTS120CM_PEID2 DTS120CM_BASE.BIT._PEID2
#define DTS121CM DTS121CM_BASE.UINT32
#define DTS121CM_CMC0 DTS121CM_BASE.BIT._CMC0
#define DTS121CM_CMC1 DTS121CM_BASE.BIT._CMC1
#define DTS121CM_CMC2 DTS121CM_BASE.BIT._CMC2
#define DTS121CM_CMC3 DTS121CM_BASE.BIT._CMC3
#define DTS121CM_CMC4 DTS121CM_BASE.BIT._CMC4
#define DTS121CM_CMC5 DTS121CM_BASE.BIT._CMC5
#define DTS121CM_CMC6 DTS121CM_BASE.BIT._CMC6
#define DTS121CM_CMC7 DTS121CM_BASE.BIT._CMC7
#define DTS121CM_CMC8 DTS121CM_BASE.BIT._CMC8
#define DTS121CM_CMC9 DTS121CM_BASE.BIT._CMC9
#define DTS121CM_CMC10 DTS121CM_BASE.BIT._CMC10
#define DTS121CM_CMC11 DTS121CM_BASE.BIT._CMC11
#define DTS121CM_CMC12 DTS121CM_BASE.BIT._CMC12
#define DTS121CM_CMC13 DTS121CM_BASE.BIT._CMC13
#define DTS121CM_CMC14 DTS121CM_BASE.BIT._CMC14
#define DTS121CM_CMC15 DTS121CM_BASE.BIT._CMC15
#define DTS121CM_UM DTS121CM_BASE.BIT._UM
#define DTS121CM_SPID0 DTS121CM_BASE.BIT._SPID0
#define DTS121CM_SPID1 DTS121CM_BASE.BIT._SPID1
#define DTS121CM_SPID2 DTS121CM_BASE.BIT._SPID2
#define DTS121CM_SPID3 DTS121CM_BASE.BIT._SPID3
#define DTS121CM_SPID4 DTS121CM_BASE.BIT._SPID4
#define DTS121CM_PEID0 DTS121CM_BASE.BIT._PEID0
#define DTS121CM_PEID1 DTS121CM_BASE.BIT._PEID1
#define DTS121CM_PEID2 DTS121CM_BASE.BIT._PEID2
#define DTS122CM DTS122CM_BASE.UINT32
#define DTS122CM_CMC0 DTS122CM_BASE.BIT._CMC0
#define DTS122CM_CMC1 DTS122CM_BASE.BIT._CMC1
#define DTS122CM_CMC2 DTS122CM_BASE.BIT._CMC2
#define DTS122CM_CMC3 DTS122CM_BASE.BIT._CMC3
#define DTS122CM_CMC4 DTS122CM_BASE.BIT._CMC4
#define DTS122CM_CMC5 DTS122CM_BASE.BIT._CMC5
#define DTS122CM_CMC6 DTS122CM_BASE.BIT._CMC6
#define DTS122CM_CMC7 DTS122CM_BASE.BIT._CMC7
#define DTS122CM_CMC8 DTS122CM_BASE.BIT._CMC8
#define DTS122CM_CMC9 DTS122CM_BASE.BIT._CMC9
#define DTS122CM_CMC10 DTS122CM_BASE.BIT._CMC10
#define DTS122CM_CMC11 DTS122CM_BASE.BIT._CMC11
#define DTS122CM_CMC12 DTS122CM_BASE.BIT._CMC12
#define DTS122CM_CMC13 DTS122CM_BASE.BIT._CMC13
#define DTS122CM_CMC14 DTS122CM_BASE.BIT._CMC14
#define DTS122CM_CMC15 DTS122CM_BASE.BIT._CMC15
#define DTS122CM_UM DTS122CM_BASE.BIT._UM
#define DTS122CM_SPID0 DTS122CM_BASE.BIT._SPID0
#define DTS122CM_SPID1 DTS122CM_BASE.BIT._SPID1
#define DTS122CM_SPID2 DTS122CM_BASE.BIT._SPID2
#define DTS122CM_SPID3 DTS122CM_BASE.BIT._SPID3
#define DTS122CM_SPID4 DTS122CM_BASE.BIT._SPID4
#define DTS122CM_PEID0 DTS122CM_BASE.BIT._PEID0
#define DTS122CM_PEID1 DTS122CM_BASE.BIT._PEID1
#define DTS122CM_PEID2 DTS122CM_BASE.BIT._PEID2
#define DTS123CM DTS123CM_BASE.UINT32
#define DTS123CM_CMC0 DTS123CM_BASE.BIT._CMC0
#define DTS123CM_CMC1 DTS123CM_BASE.BIT._CMC1
#define DTS123CM_CMC2 DTS123CM_BASE.BIT._CMC2
#define DTS123CM_CMC3 DTS123CM_BASE.BIT._CMC3
#define DTS123CM_CMC4 DTS123CM_BASE.BIT._CMC4
#define DTS123CM_CMC5 DTS123CM_BASE.BIT._CMC5
#define DTS123CM_CMC6 DTS123CM_BASE.BIT._CMC6
#define DTS123CM_CMC7 DTS123CM_BASE.BIT._CMC7
#define DTS123CM_CMC8 DTS123CM_BASE.BIT._CMC8
#define DTS123CM_CMC9 DTS123CM_BASE.BIT._CMC9
#define DTS123CM_CMC10 DTS123CM_BASE.BIT._CMC10
#define DTS123CM_CMC11 DTS123CM_BASE.BIT._CMC11
#define DTS123CM_CMC12 DTS123CM_BASE.BIT._CMC12
#define DTS123CM_CMC13 DTS123CM_BASE.BIT._CMC13
#define DTS123CM_CMC14 DTS123CM_BASE.BIT._CMC14
#define DTS123CM_CMC15 DTS123CM_BASE.BIT._CMC15
#define DTS123CM_UM DTS123CM_BASE.BIT._UM
#define DTS123CM_SPID0 DTS123CM_BASE.BIT._SPID0
#define DTS123CM_SPID1 DTS123CM_BASE.BIT._SPID1
#define DTS123CM_SPID2 DTS123CM_BASE.BIT._SPID2
#define DTS123CM_SPID3 DTS123CM_BASE.BIT._SPID3
#define DTS123CM_SPID4 DTS123CM_BASE.BIT._SPID4
#define DTS123CM_PEID0 DTS123CM_BASE.BIT._PEID0
#define DTS123CM_PEID1 DTS123CM_BASE.BIT._PEID1
#define DTS123CM_PEID2 DTS123CM_BASE.BIT._PEID2
#define DTS124CM DTS124CM_BASE.UINT32
#define DTS124CM_CMC0 DTS124CM_BASE.BIT._CMC0
#define DTS124CM_CMC1 DTS124CM_BASE.BIT._CMC1
#define DTS124CM_CMC2 DTS124CM_BASE.BIT._CMC2
#define DTS124CM_CMC3 DTS124CM_BASE.BIT._CMC3
#define DTS124CM_CMC4 DTS124CM_BASE.BIT._CMC4
#define DTS124CM_CMC5 DTS124CM_BASE.BIT._CMC5
#define DTS124CM_CMC6 DTS124CM_BASE.BIT._CMC6
#define DTS124CM_CMC7 DTS124CM_BASE.BIT._CMC7
#define DTS124CM_CMC8 DTS124CM_BASE.BIT._CMC8
#define DTS124CM_CMC9 DTS124CM_BASE.BIT._CMC9
#define DTS124CM_CMC10 DTS124CM_BASE.BIT._CMC10
#define DTS124CM_CMC11 DTS124CM_BASE.BIT._CMC11
#define DTS124CM_CMC12 DTS124CM_BASE.BIT._CMC12
#define DTS124CM_CMC13 DTS124CM_BASE.BIT._CMC13
#define DTS124CM_CMC14 DTS124CM_BASE.BIT._CMC14
#define DTS124CM_CMC15 DTS124CM_BASE.BIT._CMC15
#define DTS124CM_UM DTS124CM_BASE.BIT._UM
#define DTS124CM_SPID0 DTS124CM_BASE.BIT._SPID0
#define DTS124CM_SPID1 DTS124CM_BASE.BIT._SPID1
#define DTS124CM_SPID2 DTS124CM_BASE.BIT._SPID2
#define DTS124CM_SPID3 DTS124CM_BASE.BIT._SPID3
#define DTS124CM_SPID4 DTS124CM_BASE.BIT._SPID4
#define DTS124CM_PEID0 DTS124CM_BASE.BIT._PEID0
#define DTS124CM_PEID1 DTS124CM_BASE.BIT._PEID1
#define DTS124CM_PEID2 DTS124CM_BASE.BIT._PEID2
#define DTS125CM DTS125CM_BASE.UINT32
#define DTS125CM_CMC0 DTS125CM_BASE.BIT._CMC0
#define DTS125CM_CMC1 DTS125CM_BASE.BIT._CMC1
#define DTS125CM_CMC2 DTS125CM_BASE.BIT._CMC2
#define DTS125CM_CMC3 DTS125CM_BASE.BIT._CMC3
#define DTS125CM_CMC4 DTS125CM_BASE.BIT._CMC4
#define DTS125CM_CMC5 DTS125CM_BASE.BIT._CMC5
#define DTS125CM_CMC6 DTS125CM_BASE.BIT._CMC6
#define DTS125CM_CMC7 DTS125CM_BASE.BIT._CMC7
#define DTS125CM_CMC8 DTS125CM_BASE.BIT._CMC8
#define DTS125CM_CMC9 DTS125CM_BASE.BIT._CMC9
#define DTS125CM_CMC10 DTS125CM_BASE.BIT._CMC10
#define DTS125CM_CMC11 DTS125CM_BASE.BIT._CMC11
#define DTS125CM_CMC12 DTS125CM_BASE.BIT._CMC12
#define DTS125CM_CMC13 DTS125CM_BASE.BIT._CMC13
#define DTS125CM_CMC14 DTS125CM_BASE.BIT._CMC14
#define DTS125CM_CMC15 DTS125CM_BASE.BIT._CMC15
#define DTS125CM_UM DTS125CM_BASE.BIT._UM
#define DTS125CM_SPID0 DTS125CM_BASE.BIT._SPID0
#define DTS125CM_SPID1 DTS125CM_BASE.BIT._SPID1
#define DTS125CM_SPID2 DTS125CM_BASE.BIT._SPID2
#define DTS125CM_SPID3 DTS125CM_BASE.BIT._SPID3
#define DTS125CM_SPID4 DTS125CM_BASE.BIT._SPID4
#define DTS125CM_PEID0 DTS125CM_BASE.BIT._PEID0
#define DTS125CM_PEID1 DTS125CM_BASE.BIT._PEID1
#define DTS125CM_PEID2 DTS125CM_BASE.BIT._PEID2
#define DTS126CM DTS126CM_BASE.UINT32
#define DTS126CM_CMC0 DTS126CM_BASE.BIT._CMC0
#define DTS126CM_CMC1 DTS126CM_BASE.BIT._CMC1
#define DTS126CM_CMC2 DTS126CM_BASE.BIT._CMC2
#define DTS126CM_CMC3 DTS126CM_BASE.BIT._CMC3
#define DTS126CM_CMC4 DTS126CM_BASE.BIT._CMC4
#define DTS126CM_CMC5 DTS126CM_BASE.BIT._CMC5
#define DTS126CM_CMC6 DTS126CM_BASE.BIT._CMC6
#define DTS126CM_CMC7 DTS126CM_BASE.BIT._CMC7
#define DTS126CM_CMC8 DTS126CM_BASE.BIT._CMC8
#define DTS126CM_CMC9 DTS126CM_BASE.BIT._CMC9
#define DTS126CM_CMC10 DTS126CM_BASE.BIT._CMC10
#define DTS126CM_CMC11 DTS126CM_BASE.BIT._CMC11
#define DTS126CM_CMC12 DTS126CM_BASE.BIT._CMC12
#define DTS126CM_CMC13 DTS126CM_BASE.BIT._CMC13
#define DTS126CM_CMC14 DTS126CM_BASE.BIT._CMC14
#define DTS126CM_CMC15 DTS126CM_BASE.BIT._CMC15
#define DTS126CM_UM DTS126CM_BASE.BIT._UM
#define DTS126CM_SPID0 DTS126CM_BASE.BIT._SPID0
#define DTS126CM_SPID1 DTS126CM_BASE.BIT._SPID1
#define DTS126CM_SPID2 DTS126CM_BASE.BIT._SPID2
#define DTS126CM_SPID3 DTS126CM_BASE.BIT._SPID3
#define DTS126CM_SPID4 DTS126CM_BASE.BIT._SPID4
#define DTS126CM_PEID0 DTS126CM_BASE.BIT._PEID0
#define DTS126CM_PEID1 DTS126CM_BASE.BIT._PEID1
#define DTS126CM_PEID2 DTS126CM_BASE.BIT._PEID2
#define DTS127CM DTS127CM_BASE.UINT32
#define DTS127CM_CMC0 DTS127CM_BASE.BIT._CMC0
#define DTS127CM_CMC1 DTS127CM_BASE.BIT._CMC1
#define DTS127CM_CMC2 DTS127CM_BASE.BIT._CMC2
#define DTS127CM_CMC3 DTS127CM_BASE.BIT._CMC3
#define DTS127CM_CMC4 DTS127CM_BASE.BIT._CMC4
#define DTS127CM_CMC5 DTS127CM_BASE.BIT._CMC5
#define DTS127CM_CMC6 DTS127CM_BASE.BIT._CMC6
#define DTS127CM_CMC7 DTS127CM_BASE.BIT._CMC7
#define DTS127CM_CMC8 DTS127CM_BASE.BIT._CMC8
#define DTS127CM_CMC9 DTS127CM_BASE.BIT._CMC9
#define DTS127CM_CMC10 DTS127CM_BASE.BIT._CMC10
#define DTS127CM_CMC11 DTS127CM_BASE.BIT._CMC11
#define DTS127CM_CMC12 DTS127CM_BASE.BIT._CMC12
#define DTS127CM_CMC13 DTS127CM_BASE.BIT._CMC13
#define DTS127CM_CMC14 DTS127CM_BASE.BIT._CMC14
#define DTS127CM_CMC15 DTS127CM_BASE.BIT._CMC15
#define DTS127CM_UM DTS127CM_BASE.BIT._UM
#define DTS127CM_SPID0 DTS127CM_BASE.BIT._SPID0
#define DTS127CM_SPID1 DTS127CM_BASE.BIT._SPID1
#define DTS127CM_SPID2 DTS127CM_BASE.BIT._SPID2
#define DTS127CM_SPID3 DTS127CM_BASE.BIT._SPID3
#define DTS127CM_SPID4 DTS127CM_BASE.BIT._SPID4
#define DTS127CM_PEID0 DTS127CM_BASE.BIT._PEID0
#define DTS127CM_PEID1 DTS127CM_BASE.BIT._PEID1
#define DTS127CM_PEID2 DTS127CM_BASE.BIT._PEID2

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif