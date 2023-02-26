#ifndef __DR7F701373_INTCTL_HEADER__
#define __DR7F701373_INTCTL_HEADER__



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
    const uint32 _FEINTESTAT0 : 1;
    const uint32 _FEINTESTAT1 : 1;
    const uint32 _FEINTESTAT2 : 1;
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
} FEINTF0Bits_t;

typedef struct
{
    uint32 _FEINTEMSK0 : 1;
    uint32 _FEINTEMSK1 : 1;
    uint32 _FEINTEMSK2 : 1;
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
} FEINTFMSK0Bits_t;

typedef struct
{
    uint32 _FEINTECLR0 : 1;
    uint32 _FEINTECLR1 : 1;
    uint32 _FEINTECLR2 : 1;
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
} FEINTFC0Bits_t;

typedef struct
{
    uint16 _P00 : 1;
    uint16 _P10 : 1;
    uint16 _P20 : 1;
    uint16 _P30 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB0 : 1;
    uint16 _MK0 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF0 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT0 : 1;
} EIC0Bits_t;

typedef struct
{
    uint16 _P03 : 1;
    uint16 _P13 : 1;
    uint16 _P23 : 1;
    uint16 _P33 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB3 : 1;
    uint16 _MK3 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF3 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT3 : 1;
} EIC3Bits_t;

typedef struct
{
    uint16 _P04 : 1;
    uint16 _P14 : 1;
    uint16 _P24 : 1;
    uint16 _P34 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB4 : 1;
    uint16 _MK4 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF4 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT4 : 1;
} EIC4Bits_t;

typedef struct
{
    uint16 _P05 : 1;
    uint16 _P15 : 1;
    uint16 _P25 : 1;
    uint16 _P35 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB5 : 1;
    uint16 _MK5 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF5 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT5 : 1;
} EIC5Bits_t;

typedef struct
{
    uint16 _P06 : 1;
    uint16 _P16 : 1;
    uint16 _P26 : 1;
    uint16 _P36 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB6 : 1;
    uint16 _MK6 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF6 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT6 : 1;
} EIC6Bits_t;

typedef struct
{
    uint16 _P07 : 1;
    uint16 _P17 : 1;
    uint16 _P27 : 1;
    uint16 _P37 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB7 : 1;
    uint16 _MK7 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF7 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT7 : 1;
} EIC7Bits_t;

typedef struct
{
    uint16 _P08 : 1;
    uint16 _P18 : 1;
    uint16 _P28 : 1;
    uint16 _P38 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB8 : 1;
    uint16 _MK8 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF8 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT8 : 1;
} EIC8Bits_t;

typedef struct
{
    uint16 _P09 : 1;
    uint16 _P19 : 1;
    uint16 _P29 : 1;
    uint16 _P39 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB9 : 1;
    uint16 _MK9 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF9 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT9 : 1;
} EIC9Bits_t;

typedef struct
{
    uint16 _P010 : 1;
    uint16 _P110 : 1;
    uint16 _P210 : 1;
    uint16 _P310 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB10 : 1;
    uint16 _MK10 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF10 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT10 : 1;
} EIC10Bits_t;

typedef struct
{
    uint16 _P011 : 1;
    uint16 _P111 : 1;
    uint16 _P211 : 1;
    uint16 _P311 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB11 : 1;
    uint16 _MK11 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF11 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT11 : 1;
} EIC11Bits_t;

typedef struct
{
    uint16 _P012 : 1;
    uint16 _P112 : 1;
    uint16 _P212 : 1;
    uint16 _P312 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB12 : 1;
    uint16 _MK12 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF12 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT12 : 1;
} EIC12Bits_t;

typedef struct
{
    uint16 _P013 : 1;
    uint16 _P113 : 1;
    uint16 _P213 : 1;
    uint16 _P313 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB13 : 1;
    uint16 _MK13 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF13 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT13 : 1;
} EIC13Bits_t;

typedef struct
{
    uint16 _P014 : 1;
    uint16 _P114 : 1;
    uint16 _P214 : 1;
    uint16 _P314 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB14 : 1;
    uint16 _MK14 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF14 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT14 : 1;
} EIC14Bits_t;

typedef struct
{
    uint16 _P015 : 1;
    uint16 _P115 : 1;
    uint16 _P215 : 1;
    uint16 _P315 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB15 : 1;
    uint16 _MK15 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF15 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT15 : 1;
} EIC15Bits_t;

typedef struct
{
    uint16 _P016 : 1;
    uint16 _P116 : 1;
    uint16 _P216 : 1;
    uint16 _P316 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB16 : 1;
    uint16 _MK16 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF16 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT16 : 1;
} EIC16Bits_t;

typedef struct
{
    uint16 _P017 : 1;
    uint16 _P117 : 1;
    uint16 _P217 : 1;
    uint16 _P317 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB17 : 1;
    uint16 _MK17 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF17 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT17 : 1;
} EIC17Bits_t;

typedef struct
{
    uint16 _P018 : 1;
    uint16 _P118 : 1;
    uint16 _P218 : 1;
    uint16 _P318 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB18 : 1;
    uint16 _MK18 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF18 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT18 : 1;
} EIC18Bits_t;

typedef struct
{
    uint16 _P019 : 1;
    uint16 _P119 : 1;
    uint16 _P219 : 1;
    uint16 _P319 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB19 : 1;
    uint16 _MK19 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF19 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT19 : 1;
} EIC19Bits_t;

typedef struct
{
    uint16 _P020 : 1;
    uint16 _P120 : 1;
    uint16 _P220 : 1;
    uint16 _P320 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB20 : 1;
    uint16 _MK20 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF20 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT20 : 1;
} EIC20Bits_t;

typedef struct
{
    uint16 _P021 : 1;
    uint16 _P121 : 1;
    uint16 _P221 : 1;
    uint16 _P321 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB21 : 1;
    uint16 _MK21 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF21 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT21 : 1;
} EIC21Bits_t;

typedef struct
{
    uint16 _P022 : 1;
    uint16 _P122 : 1;
    uint16 _P222 : 1;
    uint16 _P322 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB22 : 1;
    uint16 _MK22 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF22 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT22 : 1;
} EIC22Bits_t;

typedef struct
{
    uint16 _P023 : 1;
    uint16 _P123 : 1;
    uint16 _P223 : 1;
    uint16 _P323 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB23 : 1;
    uint16 _MK23 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF23 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT23 : 1;
} EIC23Bits_t;

typedef struct
{
    uint16 _P024 : 1;
    uint16 _P124 : 1;
    uint16 _P224 : 1;
    uint16 _P324 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB24 : 1;
    uint16 _MK24 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF24 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT24 : 1;
} EIC24Bits_t;

typedef struct
{
    uint16 _P025 : 1;
    uint16 _P125 : 1;
    uint16 _P225 : 1;
    uint16 _P325 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB25 : 1;
    uint16 _MK25 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF25 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT25 : 1;
} EIC25Bits_t;

typedef struct
{
    uint16 _P026 : 1;
    uint16 _P126 : 1;
    uint16 _P226 : 1;
    uint16 _P326 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB26 : 1;
    uint16 _MK26 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF26 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT26 : 1;
} EIC26Bits_t;

typedef struct
{
    uint16 _P027 : 1;
    uint16 _P127 : 1;
    uint16 _P227 : 1;
    uint16 _P327 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB27 : 1;
    uint16 _MK27 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF27 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT27 : 1;
} EIC27Bits_t;

typedef struct
{
    uint16 _P028 : 1;
    uint16 _P128 : 1;
    uint16 _P228 : 1;
    uint16 _P328 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB28 : 1;
    uint16 _MK28 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF28 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT28 : 1;
} EIC28Bits_t;

typedef struct
{
    uint16 _P029 : 1;
    uint16 _P129 : 1;
    uint16 _P229 : 1;
    uint16 _P329 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB29 : 1;
    uint16 _MK29 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF29 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT29 : 1;
} EIC29Bits_t;

typedef struct
{
    uint16 _P030 : 1;
    uint16 _P130 : 1;
    uint16 _P230 : 1;
    uint16 _P330 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB30 : 1;
    uint16 _MK30 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF30 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT30 : 1;
} EIC30Bits_t;

typedef struct
{
    uint16 _P031 : 1;
    uint16 _P131 : 1;
    uint16 _P231 : 1;
    uint16 _P331 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB31 : 1;
    uint16 _MK31 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF31 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT31 : 1;
} EIC31Bits_t;

typedef struct
{
    uint16 padding0 : 1;
    uint16 padding1 : 1;
    uint16 padding2 : 1;
    uint16 padding3 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    const uint16 _FNRF : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    const uint16 _FNCT : 1;
} INTCFNCBits_t;

typedef struct
{
    uint16 padding0 : 1;
    uint16 padding1 : 1;
    uint16 padding2 : 1;
    uint16 padding3 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 padding6 : 1;
    uint16 padding7 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    const uint16 _FIRF : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    const uint16 _FICT : 1;
} FICBits_t;

typedef struct
{
    uint32 _IMR0EIKM0 : 1;
    uint32 _IMR0EIKM1 : 1;
    uint32 _IMR0EIKM2 : 1;
    uint32 _IMR0EIKM3 : 1;
    uint32 _IMR0EIKM4 : 1;
    uint32 _IMR0EIKM5 : 1;
    uint32 _IMR0EIKM6 : 1;
    uint32 _IMR0EIKM7 : 1;
    uint32 _IMR0EIKM8 : 1;
    uint32 _IMR0EIKM9 : 1;
    uint32 _IMR0EIKM10 : 1;
    uint32 _IMR0EIKM11 : 1;
    uint32 _IMR0EIKM12 : 1;
    uint32 _IMR0EIKM13 : 1;
    uint32 _IMR0EIKM14 : 1;
    uint32 _IMR0EIKM15 : 1;
    uint32 _IMR0EIKM16 : 1;
    uint32 _IMR0EIKM17 : 1;
    uint32 _IMR0EIKM18 : 1;
    uint32 _IMR0EIKM19 : 1;
    uint32 _IMR0EIKM20 : 1;
    uint32 _IMR0EIKM21 : 1;
    uint32 _IMR0EIKM22 : 1;
    uint32 _IMR0EIKM23 : 1;
    uint32 _IMR0EIKM24 : 1;
    uint32 _IMR0EIKM25 : 1;
    uint32 _IMR0EIKM26 : 1;
    uint32 _IMR0EIKM27 : 1;
    uint32 _IMR0EIKM28 : 1;
    uint32 _IMR0EIKM29 : 1;
    uint32 _IMR0EIKM30 : 1;
    uint32 _IMR0EIKM31 : 1;
} IMR0Bits_t;

typedef struct
{
    uint32 _PEID00 : 1;
    uint32 _PEID10 : 1;
    uint32 _PEID20 : 1;
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
    uint32 _GPID00 : 1;
    uint32 _GPID10 : 1;
    uint32 _GPID20 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP00 : 1;
    uint32 _BCP10 : 1;
    uint32 _BCP20 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD0Bits_t;

typedef struct
{
    uint32 _PEID03 : 1;
    uint32 _PEID13 : 1;
    uint32 _PEID23 : 1;
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
    uint32 _GPID03 : 1;
    uint32 _GPID13 : 1;
    uint32 _GPID23 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP03 : 1;
    uint32 _BCP13 : 1;
    uint32 _BCP23 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD3Bits_t;

typedef struct
{
    uint32 _PEID04 : 1;
    uint32 _PEID14 : 1;
    uint32 _PEID24 : 1;
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
    uint32 _GPID04 : 1;
    uint32 _GPID14 : 1;
    uint32 _GPID24 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP04 : 1;
    uint32 _BCP14 : 1;
    uint32 _BCP24 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD4Bits_t;

typedef struct
{
    uint32 _PEID05 : 1;
    uint32 _PEID15 : 1;
    uint32 _PEID25 : 1;
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
    uint32 _GPID05 : 1;
    uint32 _GPID15 : 1;
    uint32 _GPID25 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP05 : 1;
    uint32 _BCP15 : 1;
    uint32 _BCP25 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD5Bits_t;

typedef struct
{
    uint32 _PEID06 : 1;
    uint32 _PEID16 : 1;
    uint32 _PEID26 : 1;
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
    uint32 _GPID06 : 1;
    uint32 _GPID16 : 1;
    uint32 _GPID26 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP06 : 1;
    uint32 _BCP16 : 1;
    uint32 _BCP26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD6Bits_t;

typedef struct
{
    uint32 _PEID07 : 1;
    uint32 _PEID17 : 1;
    uint32 _PEID27 : 1;
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
    uint32 _GPID07 : 1;
    uint32 _GPID17 : 1;
    uint32 _GPID27 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP07 : 1;
    uint32 _BCP17 : 1;
    uint32 _BCP27 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD7Bits_t;

typedef struct
{
    uint32 _PEID08 : 1;
    uint32 _PEID18 : 1;
    uint32 _PEID28 : 1;
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
    uint32 _GPID08 : 1;
    uint32 _GPID18 : 1;
    uint32 _GPID28 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP08 : 1;
    uint32 _BCP18 : 1;
    uint32 _BCP28 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD8Bits_t;

typedef struct
{
    uint32 _PEID09 : 1;
    uint32 _PEID19 : 1;
    uint32 _PEID29 : 1;
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
    uint32 _GPID09 : 1;
    uint32 _GPID19 : 1;
    uint32 _GPID29 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP09 : 1;
    uint32 _BCP19 : 1;
    uint32 _BCP29 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD9Bits_t;

typedef struct
{
    uint32 _PEID010 : 1;
    uint32 _PEID110 : 1;
    uint32 _PEID210 : 1;
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
    uint32 _GPID010 : 1;
    uint32 _GPID110 : 1;
    uint32 _GPID210 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP010 : 1;
    uint32 _BCP110 : 1;
    uint32 _BCP210 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD10Bits_t;

typedef struct
{
    uint32 _PEID011 : 1;
    uint32 _PEID111 : 1;
    uint32 _PEID211 : 1;
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
    uint32 _GPID011 : 1;
    uint32 _GPID111 : 1;
    uint32 _GPID211 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP011 : 1;
    uint32 _BCP111 : 1;
    uint32 _BCP211 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD11Bits_t;

typedef struct
{
    uint32 _PEID012 : 1;
    uint32 _PEID112 : 1;
    uint32 _PEID212 : 1;
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
    uint32 _GPID012 : 1;
    uint32 _GPID112 : 1;
    uint32 _GPID212 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP012 : 1;
    uint32 _BCP112 : 1;
    uint32 _BCP212 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD12Bits_t;

typedef struct
{
    uint32 _PEID013 : 1;
    uint32 _PEID113 : 1;
    uint32 _PEID213 : 1;
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
    uint32 _GPID013 : 1;
    uint32 _GPID113 : 1;
    uint32 _GPID213 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP013 : 1;
    uint32 _BCP113 : 1;
    uint32 _BCP213 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD13Bits_t;

typedef struct
{
    uint32 _PEID014 : 1;
    uint32 _PEID114 : 1;
    uint32 _PEID214 : 1;
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
    uint32 _GPID014 : 1;
    uint32 _GPID114 : 1;
    uint32 _GPID214 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP014 : 1;
    uint32 _BCP114 : 1;
    uint32 _BCP214 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD14Bits_t;

typedef struct
{
    uint32 _PEID015 : 1;
    uint32 _PEID115 : 1;
    uint32 _PEID215 : 1;
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
    uint32 _GPID015 : 1;
    uint32 _GPID115 : 1;
    uint32 _GPID215 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP015 : 1;
    uint32 _BCP115 : 1;
    uint32 _BCP215 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD15Bits_t;

typedef struct
{
    uint32 _PEID016 : 1;
    uint32 _PEID116 : 1;
    uint32 _PEID216 : 1;
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
    uint32 _GPID016 : 1;
    uint32 _GPID116 : 1;
    uint32 _GPID216 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP016 : 1;
    uint32 _BCP116 : 1;
    uint32 _BCP216 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD16Bits_t;

typedef struct
{
    uint32 _PEID017 : 1;
    uint32 _PEID117 : 1;
    uint32 _PEID217 : 1;
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
    uint32 _GPID017 : 1;
    uint32 _GPID117 : 1;
    uint32 _GPID217 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP017 : 1;
    uint32 _BCP117 : 1;
    uint32 _BCP217 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD17Bits_t;

typedef struct
{
    uint32 _PEID018 : 1;
    uint32 _PEID118 : 1;
    uint32 _PEID218 : 1;
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
    uint32 _GPID018 : 1;
    uint32 _GPID118 : 1;
    uint32 _GPID218 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP018 : 1;
    uint32 _BCP118 : 1;
    uint32 _BCP218 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD18Bits_t;

typedef struct
{
    uint32 _PEID019 : 1;
    uint32 _PEID119 : 1;
    uint32 _PEID219 : 1;
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
    uint32 _GPID019 : 1;
    uint32 _GPID119 : 1;
    uint32 _GPID219 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP019 : 1;
    uint32 _BCP119 : 1;
    uint32 _BCP219 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD19Bits_t;

typedef struct
{
    uint32 _PEID020 : 1;
    uint32 _PEID120 : 1;
    uint32 _PEID220 : 1;
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
    uint32 _GPID020 : 1;
    uint32 _GPID120 : 1;
    uint32 _GPID220 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP020 : 1;
    uint32 _BCP120 : 1;
    uint32 _BCP220 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD20Bits_t;

typedef struct
{
    uint32 _PEID021 : 1;
    uint32 _PEID121 : 1;
    uint32 _PEID221 : 1;
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
    uint32 _GPID021 : 1;
    uint32 _GPID121 : 1;
    uint32 _GPID221 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP021 : 1;
    uint32 _BCP121 : 1;
    uint32 _BCP221 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD21Bits_t;

typedef struct
{
    uint32 _PEID022 : 1;
    uint32 _PEID122 : 1;
    uint32 _PEID222 : 1;
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
    uint32 _GPID022 : 1;
    uint32 _GPID122 : 1;
    uint32 _GPID222 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP022 : 1;
    uint32 _BCP122 : 1;
    uint32 _BCP222 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD22Bits_t;

typedef struct
{
    uint32 _PEID023 : 1;
    uint32 _PEID123 : 1;
    uint32 _PEID223 : 1;
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
    uint32 _GPID023 : 1;
    uint32 _GPID123 : 1;
    uint32 _GPID223 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP023 : 1;
    uint32 _BCP123 : 1;
    uint32 _BCP223 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD23Bits_t;

typedef struct
{
    uint32 _PEID024 : 1;
    uint32 _PEID124 : 1;
    uint32 _PEID224 : 1;
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
    uint32 _GPID024 : 1;
    uint32 _GPID124 : 1;
    uint32 _GPID224 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP024 : 1;
    uint32 _BCP124 : 1;
    uint32 _BCP224 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD24Bits_t;

typedef struct
{
    uint32 _PEID025 : 1;
    uint32 _PEID125 : 1;
    uint32 _PEID225 : 1;
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
    uint32 _GPID025 : 1;
    uint32 _GPID125 : 1;
    uint32 _GPID225 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP025 : 1;
    uint32 _BCP125 : 1;
    uint32 _BCP225 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD25Bits_t;

typedef struct
{
    uint32 _PEID026 : 1;
    uint32 _PEID126 : 1;
    uint32 _PEID226 : 1;
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
    uint32 _GPID026 : 1;
    uint32 _GPID126 : 1;
    uint32 _GPID226 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP026 : 1;
    uint32 _BCP126 : 1;
    uint32 _BCP226 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD26Bits_t;

typedef struct
{
    uint32 _PEID027 : 1;
    uint32 _PEID127 : 1;
    uint32 _PEID227 : 1;
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
    uint32 _GPID027 : 1;
    uint32 _GPID127 : 1;
    uint32 _GPID227 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP027 : 1;
    uint32 _BCP127 : 1;
    uint32 _BCP227 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD27Bits_t;

typedef struct
{
    uint32 _PEID028 : 1;
    uint32 _PEID128 : 1;
    uint32 _PEID228 : 1;
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
    uint32 _GPID028 : 1;
    uint32 _GPID128 : 1;
    uint32 _GPID228 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP028 : 1;
    uint32 _BCP128 : 1;
    uint32 _BCP228 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD28Bits_t;

typedef struct
{
    uint32 _PEID029 : 1;
    uint32 _PEID129 : 1;
    uint32 _PEID229 : 1;
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
    uint32 _GPID029 : 1;
    uint32 _GPID129 : 1;
    uint32 _GPID229 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP029 : 1;
    uint32 _BCP129 : 1;
    uint32 _BCP229 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD29Bits_t;

typedef struct
{
    uint32 _PEID030 : 1;
    uint32 _PEID130 : 1;
    uint32 _PEID230 : 1;
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
    uint32 _GPID030 : 1;
    uint32 _GPID130 : 1;
    uint32 _GPID230 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP030 : 1;
    uint32 _BCP130 : 1;
    uint32 _BCP230 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD30Bits_t;

typedef struct
{
    uint32 _PEID031 : 1;
    uint32 _PEID131 : 1;
    uint32 _PEID231 : 1;
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
    uint32 _GPID031 : 1;
    uint32 _GPID131 : 1;
    uint32 _GPID231 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP031 : 1;
    uint32 _BCP131 : 1;
    uint32 _BCP231 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD31Bits_t;

typedef struct
{
    uint16 _P032 : 1;
    uint16 _P132 : 1;
    uint16 _P232 : 1;
    uint16 _P332 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB32 : 1;
    uint16 _MK32 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF32 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT32 : 1;
} EIC32Bits_t;

typedef struct
{
    uint16 _P033 : 1;
    uint16 _P133 : 1;
    uint16 _P233 : 1;
    uint16 _P333 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB33 : 1;
    uint16 _MK33 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF33 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT33 : 1;
} EIC33Bits_t;

typedef struct
{
    uint16 _P034 : 1;
    uint16 _P134 : 1;
    uint16 _P234 : 1;
    uint16 _P334 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB34 : 1;
    uint16 _MK34 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF34 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT34 : 1;
} EIC34Bits_t;

typedef struct
{
    uint16 _P035 : 1;
    uint16 _P135 : 1;
    uint16 _P235 : 1;
    uint16 _P335 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB35 : 1;
    uint16 _MK35 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF35 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT35 : 1;
} EIC35Bits_t;

typedef struct
{
    uint16 _P037 : 1;
    uint16 _P137 : 1;
    uint16 _P237 : 1;
    uint16 _P337 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB37 : 1;
    uint16 _MK37 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF37 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT37 : 1;
} EIC37Bits_t;

typedef struct
{
    uint16 _P038 : 1;
    uint16 _P138 : 1;
    uint16 _P238 : 1;
    uint16 _P338 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB38 : 1;
    uint16 _MK38 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF38 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT38 : 1;
} EIC38Bits_t;

typedef struct
{
    uint16 _P039 : 1;
    uint16 _P139 : 1;
    uint16 _P239 : 1;
    uint16 _P339 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB39 : 1;
    uint16 _MK39 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF39 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT39 : 1;
} EIC39Bits_t;

typedef struct
{
    uint16 _P040 : 1;
    uint16 _P140 : 1;
    uint16 _P240 : 1;
    uint16 _P340 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB40 : 1;
    uint16 _MK40 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF40 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT40 : 1;
} EIC40Bits_t;

typedef struct
{
    uint16 _P041 : 1;
    uint16 _P141 : 1;
    uint16 _P241 : 1;
    uint16 _P341 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB41 : 1;
    uint16 _MK41 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF41 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT41 : 1;
} EIC41Bits_t;

typedef struct
{
    uint16 _P042 : 1;
    uint16 _P142 : 1;
    uint16 _P242 : 1;
    uint16 _P342 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB42 : 1;
    uint16 _MK42 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF42 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT42 : 1;
} EIC42Bits_t;

typedef struct
{
    uint16 _P047 : 1;
    uint16 _P147 : 1;
    uint16 _P247 : 1;
    uint16 _P347 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB47 : 1;
    uint16 _MK47 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF47 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT47 : 1;
} EIC47Bits_t;

typedef struct
{
    uint16 _P048 : 1;
    uint16 _P148 : 1;
    uint16 _P248 : 1;
    uint16 _P348 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB48 : 1;
    uint16 _MK48 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF48 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT48 : 1;
} EIC48Bits_t;

typedef struct
{
    uint16 _P049 : 1;
    uint16 _P149 : 1;
    uint16 _P249 : 1;
    uint16 _P349 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB49 : 1;
    uint16 _MK49 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF49 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT49 : 1;
} EIC49Bits_t;

typedef struct
{
    uint16 _P050 : 1;
    uint16 _P150 : 1;
    uint16 _P250 : 1;
    uint16 _P350 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB50 : 1;
    uint16 _MK50 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF50 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT50 : 1;
} EIC50Bits_t;

typedef struct
{
    uint16 _P051 : 1;
    uint16 _P151 : 1;
    uint16 _P251 : 1;
    uint16 _P351 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB51 : 1;
    uint16 _MK51 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF51 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT51 : 1;
} EIC51Bits_t;

typedef struct
{
    uint16 _P052 : 1;
    uint16 _P152 : 1;
    uint16 _P252 : 1;
    uint16 _P352 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB52 : 1;
    uint16 _MK52 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF52 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT52 : 1;
} EIC52Bits_t;

typedef struct
{
    uint16 _P053 : 1;
    uint16 _P153 : 1;
    uint16 _P253 : 1;
    uint16 _P353 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB53 : 1;
    uint16 _MK53 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF53 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT53 : 1;
} EIC53Bits_t;

typedef struct
{
    uint16 _P054 : 1;
    uint16 _P154 : 1;
    uint16 _P254 : 1;
    uint16 _P354 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB54 : 1;
    uint16 _MK54 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF54 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT54 : 1;
} EIC54Bits_t;

typedef struct
{
    uint16 _P055 : 1;
    uint16 _P155 : 1;
    uint16 _P255 : 1;
    uint16 _P355 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB55 : 1;
    uint16 _MK55 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF55 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT55 : 1;
} EIC55Bits_t;

typedef struct
{
    uint16 _P056 : 1;
    uint16 _P156 : 1;
    uint16 _P256 : 1;
    uint16 _P356 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB56 : 1;
    uint16 _MK56 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF56 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT56 : 1;
} EIC56Bits_t;

typedef struct
{
    uint16 _P057 : 1;
    uint16 _P157 : 1;
    uint16 _P257 : 1;
    uint16 _P357 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB57 : 1;
    uint16 _MK57 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF57 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT57 : 1;
} EIC57Bits_t;

typedef struct
{
    uint16 _P058 : 1;
    uint16 _P158 : 1;
    uint16 _P258 : 1;
    uint16 _P358 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB58 : 1;
    uint16 _MK58 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF58 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT58 : 1;
} EIC58Bits_t;

typedef struct
{
    uint16 _P059 : 1;
    uint16 _P159 : 1;
    uint16 _P259 : 1;
    uint16 _P359 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB59 : 1;
    uint16 _MK59 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF59 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT59 : 1;
} EIC59Bits_t;

typedef struct
{
    uint16 _P060 : 1;
    uint16 _P160 : 1;
    uint16 _P260 : 1;
    uint16 _P360 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB60 : 1;
    uint16 _MK60 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF60 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT60 : 1;
} EIC60Bits_t;

typedef struct
{
    uint16 _P061 : 1;
    uint16 _P161 : 1;
    uint16 _P261 : 1;
    uint16 _P361 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB61 : 1;
    uint16 _MK61 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF61 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT61 : 1;
} EIC61Bits_t;

typedef struct
{
    uint16 _P062 : 1;
    uint16 _P162 : 1;
    uint16 _P262 : 1;
    uint16 _P362 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB62 : 1;
    uint16 _MK62 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF62 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT62 : 1;
} EIC62Bits_t;

typedef struct
{
    uint16 _P063 : 1;
    uint16 _P163 : 1;
    uint16 _P263 : 1;
    uint16 _P363 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB63 : 1;
    uint16 _MK63 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF63 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT63 : 1;
} EIC63Bits_t;

typedef struct
{
    uint16 _P064 : 1;
    uint16 _P164 : 1;
    uint16 _P264 : 1;
    uint16 _P364 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB64 : 1;
    uint16 _MK64 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF64 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT64 : 1;
} EIC64Bits_t;

typedef struct
{
    uint16 _P065 : 1;
    uint16 _P165 : 1;
    uint16 _P265 : 1;
    uint16 _P365 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB65 : 1;
    uint16 _MK65 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF65 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT65 : 1;
} EIC65Bits_t;

typedef struct
{
    uint16 _P069 : 1;
    uint16 _P169 : 1;
    uint16 _P269 : 1;
    uint16 _P369 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB69 : 1;
    uint16 _MK69 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF69 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT69 : 1;
} EIC69Bits_t;

typedef struct
{
    uint16 _P070 : 1;
    uint16 _P170 : 1;
    uint16 _P270 : 1;
    uint16 _P370 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB70 : 1;
    uint16 _MK70 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF70 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT70 : 1;
} EIC70Bits_t;

typedef struct
{
    uint16 _P071 : 1;
    uint16 _P171 : 1;
    uint16 _P271 : 1;
    uint16 _P371 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB71 : 1;
    uint16 _MK71 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF71 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT71 : 1;
} EIC71Bits_t;

typedef struct
{
    uint16 _P072 : 1;
    uint16 _P172 : 1;
    uint16 _P272 : 1;
    uint16 _P372 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB72 : 1;
    uint16 _MK72 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF72 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT72 : 1;
} EIC72Bits_t;

typedef struct
{
    uint16 _P073 : 1;
    uint16 _P173 : 1;
    uint16 _P273 : 1;
    uint16 _P373 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB73 : 1;
    uint16 _MK73 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF73 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT73 : 1;
} EIC73Bits_t;

typedef struct
{
    uint16 _P074 : 1;
    uint16 _P174 : 1;
    uint16 _P274 : 1;
    uint16 _P374 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB74 : 1;
    uint16 _MK74 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF74 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT74 : 1;
} EIC74Bits_t;

typedef struct
{
    uint16 _P080 : 1;
    uint16 _P180 : 1;
    uint16 _P280 : 1;
    uint16 _P380 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB80 : 1;
    uint16 _MK80 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF80 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT80 : 1;
} EIC80Bits_t;

typedef struct
{
    uint16 _P081 : 1;
    uint16 _P181 : 1;
    uint16 _P281 : 1;
    uint16 _P381 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB81 : 1;
    uint16 _MK81 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF81 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT81 : 1;
} EIC81Bits_t;

typedef struct
{
    uint16 _P082 : 1;
    uint16 _P182 : 1;
    uint16 _P282 : 1;
    uint16 _P382 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB82 : 1;
    uint16 _MK82 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF82 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT82 : 1;
} EIC82Bits_t;

typedef struct
{
    uint16 _P083 : 1;
    uint16 _P183 : 1;
    uint16 _P283 : 1;
    uint16 _P383 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB83 : 1;
    uint16 _MK83 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF83 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT83 : 1;
} EIC83Bits_t;

typedef struct
{
    uint16 _P084 : 1;
    uint16 _P184 : 1;
    uint16 _P284 : 1;
    uint16 _P384 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB84 : 1;
    uint16 _MK84 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF84 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT84 : 1;
} EIC84Bits_t;

typedef struct
{
    uint16 _P085 : 1;
    uint16 _P185 : 1;
    uint16 _P285 : 1;
    uint16 _P385 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB85 : 1;
    uint16 _MK85 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF85 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT85 : 1;
} EIC85Bits_t;

typedef struct
{
    uint16 _P086 : 1;
    uint16 _P186 : 1;
    uint16 _P286 : 1;
    uint16 _P386 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB86 : 1;
    uint16 _MK86 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF86 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT86 : 1;
} EIC86Bits_t;

typedef struct
{
    uint16 _P087 : 1;
    uint16 _P187 : 1;
    uint16 _P287 : 1;
    uint16 _P387 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB87 : 1;
    uint16 _MK87 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF87 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT87 : 1;
} EIC87Bits_t;

typedef struct
{
    uint16 _P088 : 1;
    uint16 _P188 : 1;
    uint16 _P288 : 1;
    uint16 _P388 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB88 : 1;
    uint16 _MK88 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF88 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT88 : 1;
} EIC88Bits_t;

typedef struct
{
    uint16 _P089 : 1;
    uint16 _P189 : 1;
    uint16 _P289 : 1;
    uint16 _P389 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB89 : 1;
    uint16 _MK89 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF89 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT89 : 1;
} EIC89Bits_t;

typedef struct
{
    uint16 _P090 : 1;
    uint16 _P190 : 1;
    uint16 _P290 : 1;
    uint16 _P390 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB90 : 1;
    uint16 _MK90 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF90 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT90 : 1;
} EIC90Bits_t;

typedef struct
{
    uint16 _P091 : 1;
    uint16 _P191 : 1;
    uint16 _P291 : 1;
    uint16 _P391 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB91 : 1;
    uint16 _MK91 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF91 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT91 : 1;
} EIC91Bits_t;

typedef struct
{
    uint16 _P092 : 1;
    uint16 _P192 : 1;
    uint16 _P292 : 1;
    uint16 _P392 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB92 : 1;
    uint16 _MK92 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF92 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT92 : 1;
} EIC92Bits_t;

typedef struct
{
    uint16 _P093 : 1;
    uint16 _P193 : 1;
    uint16 _P293 : 1;
    uint16 _P393 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB93 : 1;
    uint16 _MK93 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF93 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT93 : 1;
} EIC93Bits_t;

typedef struct
{
    uint16 _P094 : 1;
    uint16 _P194 : 1;
    uint16 _P294 : 1;
    uint16 _P394 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB94 : 1;
    uint16 _MK94 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF94 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT94 : 1;
} EIC94Bits_t;

typedef struct
{
    uint16 _P095 : 1;
    uint16 _P195 : 1;
    uint16 _P295 : 1;
    uint16 _P395 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB95 : 1;
    uint16 _MK95 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF95 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT95 : 1;
} EIC95Bits_t;

typedef struct
{
    uint16 _P096 : 1;
    uint16 _P196 : 1;
    uint16 _P296 : 1;
    uint16 _P396 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB96 : 1;
    uint16 _MK96 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF96 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT96 : 1;
} EIC96Bits_t;

typedef struct
{
    uint16 _P097 : 1;
    uint16 _P197 : 1;
    uint16 _P297 : 1;
    uint16 _P397 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB97 : 1;
    uint16 _MK97 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF97 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT97 : 1;
} EIC97Bits_t;

typedef struct
{
    uint16 _P098 : 1;
    uint16 _P198 : 1;
    uint16 _P298 : 1;
    uint16 _P398 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB98 : 1;
    uint16 _MK98 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF98 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT98 : 1;
} EIC98Bits_t;

typedef struct
{
    uint16 _P099 : 1;
    uint16 _P199 : 1;
    uint16 _P299 : 1;
    uint16 _P399 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB99 : 1;
    uint16 _MK99 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF99 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT99 : 1;
} EIC99Bits_t;

typedef struct
{
    uint16 _P0100 : 1;
    uint16 _P1100 : 1;
    uint16 _P2100 : 1;
    uint16 _P3100 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB100 : 1;
    uint16 _MK100 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF100 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT100 : 1;
} EIC100Bits_t;

typedef struct
{
    uint16 _P0102 : 1;
    uint16 _P1102 : 1;
    uint16 _P2102 : 1;
    uint16 _P3102 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB102 : 1;
    uint16 _MK102 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF102 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT102 : 1;
} EIC102Bits_t;

typedef struct
{
    uint16 _P0103 : 1;
    uint16 _P1103 : 1;
    uint16 _P2103 : 1;
    uint16 _P3103 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB103 : 1;
    uint16 _MK103 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF103 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT103 : 1;
} EIC103Bits_t;

typedef struct
{
    uint16 _P0104 : 1;
    uint16 _P1104 : 1;
    uint16 _P2104 : 1;
    uint16 _P3104 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB104 : 1;
    uint16 _MK104 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF104 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT104 : 1;
} EIC104Bits_t;

typedef struct
{
    uint16 _P0105 : 1;
    uint16 _P1105 : 1;
    uint16 _P2105 : 1;
    uint16 _P3105 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB105 : 1;
    uint16 _MK105 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF105 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT105 : 1;
} EIC105Bits_t;

typedef struct
{
    uint16 _P0106 : 1;
    uint16 _P1106 : 1;
    uint16 _P2106 : 1;
    uint16 _P3106 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB106 : 1;
    uint16 _MK106 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF106 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT106 : 1;
} EIC106Bits_t;

typedef struct
{
    uint16 _P0107 : 1;
    uint16 _P1107 : 1;
    uint16 _P2107 : 1;
    uint16 _P3107 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB107 : 1;
    uint16 _MK107 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF107 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT107 : 1;
} EIC107Bits_t;

typedef struct
{
    uint16 _P0116 : 1;
    uint16 _P1116 : 1;
    uint16 _P2116 : 1;
    uint16 _P3116 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB116 : 1;
    uint16 _MK116 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF116 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT116 : 1;
} EIC116Bits_t;

typedef struct
{
    uint16 _P0117 : 1;
    uint16 _P1117 : 1;
    uint16 _P2117 : 1;
    uint16 _P3117 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB117 : 1;
    uint16 _MK117 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF117 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT117 : 1;
} EIC117Bits_t;

typedef struct
{
    uint16 _P0118 : 1;
    uint16 _P1118 : 1;
    uint16 _P2118 : 1;
    uint16 _P3118 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB118 : 1;
    uint16 _MK118 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF118 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT118 : 1;
} EIC118Bits_t;

typedef struct
{
    uint16 _P0119 : 1;
    uint16 _P1119 : 1;
    uint16 _P2119 : 1;
    uint16 _P3119 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB119 : 1;
    uint16 _MK119 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF119 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT119 : 1;
} EIC119Bits_t;

typedef struct
{
    uint16 _P0120 : 1;
    uint16 _P1120 : 1;
    uint16 _P2120 : 1;
    uint16 _P3120 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB120 : 1;
    uint16 _MK120 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF120 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT120 : 1;
} EIC120Bits_t;

typedef struct
{
    uint16 _P0121 : 1;
    uint16 _P1121 : 1;
    uint16 _P2121 : 1;
    uint16 _P3121 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB121 : 1;
    uint16 _MK121 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF121 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT121 : 1;
} EIC121Bits_t;

typedef struct
{
    uint16 _P0128 : 1;
    uint16 _P1128 : 1;
    uint16 _P2128 : 1;
    uint16 _P3128 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB128 : 1;
    uint16 _MK128 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF128 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT128 : 1;
} EIC128Bits_t;

typedef struct
{
    uint16 _P0129 : 1;
    uint16 _P1129 : 1;
    uint16 _P2129 : 1;
    uint16 _P3129 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB129 : 1;
    uint16 _MK129 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF129 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT129 : 1;
} EIC129Bits_t;

typedef struct
{
    uint16 _P0130 : 1;
    uint16 _P1130 : 1;
    uint16 _P2130 : 1;
    uint16 _P3130 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB130 : 1;
    uint16 _MK130 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF130 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT130 : 1;
} EIC130Bits_t;

typedef struct
{
    uint16 _P0132 : 1;
    uint16 _P1132 : 1;
    uint16 _P2132 : 1;
    uint16 _P3132 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB132 : 1;
    uint16 _MK132 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF132 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT132 : 1;
} EIC132Bits_t;

typedef struct
{
    uint16 _P0133 : 1;
    uint16 _P1133 : 1;
    uint16 _P2133 : 1;
    uint16 _P3133 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB133 : 1;
    uint16 _MK133 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF133 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT133 : 1;
} EIC133Bits_t;

typedef struct
{
    uint16 _P0135 : 1;
    uint16 _P1135 : 1;
    uint16 _P2135 : 1;
    uint16 _P3135 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB135 : 1;
    uint16 _MK135 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF135 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT135 : 1;
} EIC135Bits_t;

typedef struct
{
    uint16 _P0136 : 1;
    uint16 _P1136 : 1;
    uint16 _P2136 : 1;
    uint16 _P3136 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB136 : 1;
    uint16 _MK136 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF136 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT136 : 1;
} EIC136Bits_t;

typedef struct
{
    uint16 _P0141 : 1;
    uint16 _P1141 : 1;
    uint16 _P2141 : 1;
    uint16 _P3141 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB141 : 1;
    uint16 _MK141 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF141 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT141 : 1;
} EIC141Bits_t;

typedef struct
{
    uint16 _P0142 : 1;
    uint16 _P1142 : 1;
    uint16 _P2142 : 1;
    uint16 _P3142 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB142 : 1;
    uint16 _MK142 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF142 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT142 : 1;
} EIC142Bits_t;

typedef struct
{
    uint16 _P0143 : 1;
    uint16 _P1143 : 1;
    uint16 _P2143 : 1;
    uint16 _P3143 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB143 : 1;
    uint16 _MK143 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF143 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT143 : 1;
} EIC143Bits_t;

typedef struct
{
    uint16 _P0144 : 1;
    uint16 _P1144 : 1;
    uint16 _P2144 : 1;
    uint16 _P3144 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB144 : 1;
    uint16 _MK144 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF144 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT144 : 1;
} EIC144Bits_t;

typedef struct
{
    uint16 _P0145 : 1;
    uint16 _P1145 : 1;
    uint16 _P2145 : 1;
    uint16 _P3145 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB145 : 1;
    uint16 _MK145 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF145 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT145 : 1;
} EIC145Bits_t;

typedef struct
{
    uint16 _P0146 : 1;
    uint16 _P1146 : 1;
    uint16 _P2146 : 1;
    uint16 _P3146 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB146 : 1;
    uint16 _MK146 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF146 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT146 : 1;
} EIC146Bits_t;

typedef struct
{
    uint16 _P0147 : 1;
    uint16 _P1147 : 1;
    uint16 _P2147 : 1;
    uint16 _P3147 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB147 : 1;
    uint16 _MK147 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF147 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT147 : 1;
} EIC147Bits_t;

typedef struct
{
    uint16 _P0148 : 1;
    uint16 _P1148 : 1;
    uint16 _P2148 : 1;
    uint16 _P3148 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB148 : 1;
    uint16 _MK148 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF148 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT148 : 1;
} EIC148Bits_t;

typedef struct
{
    uint16 _P0149 : 1;
    uint16 _P1149 : 1;
    uint16 _P2149 : 1;
    uint16 _P3149 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB149 : 1;
    uint16 _MK149 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF149 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT149 : 1;
} EIC149Bits_t;

typedef struct
{
    uint16 _P0150 : 1;
    uint16 _P1150 : 1;
    uint16 _P2150 : 1;
    uint16 _P3150 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB150 : 1;
    uint16 _MK150 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF150 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT150 : 1;
} EIC150Bits_t;

typedef struct
{
    uint16 _P0151 : 1;
    uint16 _P1151 : 1;
    uint16 _P2151 : 1;
    uint16 _P3151 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB151 : 1;
    uint16 _MK151 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF151 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT151 : 1;
} EIC151Bits_t;

typedef struct
{
    uint16 _P0152 : 1;
    uint16 _P1152 : 1;
    uint16 _P2152 : 1;
    uint16 _P3152 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB152 : 1;
    uint16 _MK152 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF152 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT152 : 1;
} EIC152Bits_t;

typedef struct
{
    uint16 _P0156 : 1;
    uint16 _P1156 : 1;
    uint16 _P2156 : 1;
    uint16 _P3156 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB156 : 1;
    uint16 _MK156 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF156 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT156 : 1;
} EIC156Bits_t;

typedef struct
{
    uint16 _P0157 : 1;
    uint16 _P1157 : 1;
    uint16 _P2157 : 1;
    uint16 _P3157 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB157 : 1;
    uint16 _MK157 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF157 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT157 : 1;
} EIC157Bits_t;

typedef struct
{
    uint16 _P0158 : 1;
    uint16 _P1158 : 1;
    uint16 _P2158 : 1;
    uint16 _P3158 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB158 : 1;
    uint16 _MK158 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF158 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT158 : 1;
} EIC158Bits_t;

typedef struct
{
    uint16 _P0159 : 1;
    uint16 _P1159 : 1;
    uint16 _P2159 : 1;
    uint16 _P3159 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB159 : 1;
    uint16 _MK159 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF159 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT159 : 1;
} EIC159Bits_t;

typedef struct
{
    uint16 _P0160 : 1;
    uint16 _P1160 : 1;
    uint16 _P2160 : 1;
    uint16 _P3160 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB160 : 1;
    uint16 _MK160 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF160 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT160 : 1;
} EIC160Bits_t;

typedef struct
{
    uint16 _P0161 : 1;
    uint16 _P1161 : 1;
    uint16 _P2161 : 1;
    uint16 _P3161 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB161 : 1;
    uint16 _MK161 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF161 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT161 : 1;
} EIC161Bits_t;

typedef struct
{
    uint16 _P0166 : 1;
    uint16 _P1166 : 1;
    uint16 _P2166 : 1;
    uint16 _P3166 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB166 : 1;
    uint16 _MK166 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF166 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT166 : 1;
} EIC166Bits_t;

typedef struct
{
    uint16 _P0167 : 1;
    uint16 _P1167 : 1;
    uint16 _P2167 : 1;
    uint16 _P3167 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB167 : 1;
    uint16 _MK167 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF167 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT167 : 1;
} EIC167Bits_t;

typedef struct
{
    uint16 _P0168 : 1;
    uint16 _P1168 : 1;
    uint16 _P2168 : 1;
    uint16 _P3168 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB168 : 1;
    uint16 _MK168 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF168 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT168 : 1;
} EIC168Bits_t;

typedef struct
{
    uint16 _P0169 : 1;
    uint16 _P1169 : 1;
    uint16 _P2169 : 1;
    uint16 _P3169 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB169 : 1;
    uint16 _MK169 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF169 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT169 : 1;
} EIC169Bits_t;

typedef struct
{
    uint16 _P0170 : 1;
    uint16 _P1170 : 1;
    uint16 _P2170 : 1;
    uint16 _P3170 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB170 : 1;
    uint16 _MK170 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF170 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT170 : 1;
} EIC170Bits_t;

typedef struct
{
    uint16 _P0171 : 1;
    uint16 _P1171 : 1;
    uint16 _P2171 : 1;
    uint16 _P3171 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB171 : 1;
    uint16 _MK171 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF171 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT171 : 1;
} EIC171Bits_t;

typedef struct
{
    uint16 _P0172 : 1;
    uint16 _P1172 : 1;
    uint16 _P2172 : 1;
    uint16 _P3172 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB172 : 1;
    uint16 _MK172 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF172 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT172 : 1;
} EIC172Bits_t;

typedef struct
{
    uint16 _P0173 : 1;
    uint16 _P1173 : 1;
    uint16 _P2173 : 1;
    uint16 _P3173 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB173 : 1;
    uint16 _MK173 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF173 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT173 : 1;
} EIC173Bits_t;

typedef struct
{
    uint16 _P0174 : 1;
    uint16 _P1174 : 1;
    uint16 _P2174 : 1;
    uint16 _P3174 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB174 : 1;
    uint16 _MK174 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF174 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT174 : 1;
} EIC174Bits_t;

typedef struct
{
    uint16 _P0175 : 1;
    uint16 _P1175 : 1;
    uint16 _P2175 : 1;
    uint16 _P3175 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB175 : 1;
    uint16 _MK175 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF175 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT175 : 1;
} EIC175Bits_t;

typedef struct
{
    uint16 _P0176 : 1;
    uint16 _P1176 : 1;
    uint16 _P2176 : 1;
    uint16 _P3176 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB176 : 1;
    uint16 _MK176 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF176 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT176 : 1;
} EIC176Bits_t;

typedef struct
{
    uint16 _P0177 : 1;
    uint16 _P1177 : 1;
    uint16 _P2177 : 1;
    uint16 _P3177 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB177 : 1;
    uint16 _MK177 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF177 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT177 : 1;
} EIC177Bits_t;

typedef struct
{
    uint16 _P0178 : 1;
    uint16 _P1178 : 1;
    uint16 _P2178 : 1;
    uint16 _P3178 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB178 : 1;
    uint16 _MK178 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF178 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT178 : 1;
} EIC178Bits_t;

typedef struct
{
    uint16 _P0179 : 1;
    uint16 _P1179 : 1;
    uint16 _P2179 : 1;
    uint16 _P3179 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB179 : 1;
    uint16 _MK179 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF179 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT179 : 1;
} EIC179Bits_t;

typedef struct
{
    uint16 _P0180 : 1;
    uint16 _P1180 : 1;
    uint16 _P2180 : 1;
    uint16 _P3180 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB180 : 1;
    uint16 _MK180 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF180 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT180 : 1;
} EIC180Bits_t;

typedef struct
{
    uint16 _P0184 : 1;
    uint16 _P1184 : 1;
    uint16 _P2184 : 1;
    uint16 _P3184 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB184 : 1;
    uint16 _MK184 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF184 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT184 : 1;
} EIC184Bits_t;

typedef struct
{
    uint16 _P0186 : 1;
    uint16 _P1186 : 1;
    uint16 _P2186 : 1;
    uint16 _P3186 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB186 : 1;
    uint16 _MK186 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF186 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT186 : 1;
} EIC186Bits_t;

typedef struct
{
    uint16 _P0187 : 1;
    uint16 _P1187 : 1;
    uint16 _P2187 : 1;
    uint16 _P3187 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB187 : 1;
    uint16 _MK187 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF187 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT187 : 1;
} EIC187Bits_t;

typedef struct
{
    uint16 _P0188 : 1;
    uint16 _P1188 : 1;
    uint16 _P2188 : 1;
    uint16 _P3188 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB188 : 1;
    uint16 _MK188 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF188 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT188 : 1;
} EIC188Bits_t;

typedef struct
{
    uint16 _P0189 : 1;
    uint16 _P1189 : 1;
    uint16 _P2189 : 1;
    uint16 _P3189 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB189 : 1;
    uint16 _MK189 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF189 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT189 : 1;
} EIC189Bits_t;

typedef struct
{
    uint16 _P0190 : 1;
    uint16 _P1190 : 1;
    uint16 _P2190 : 1;
    uint16 _P3190 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB190 : 1;
    uint16 _MK190 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF190 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT190 : 1;
} EIC190Bits_t;

typedef struct
{
    uint16 _P0191 : 1;
    uint16 _P1191 : 1;
    uint16 _P2191 : 1;
    uint16 _P3191 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB191 : 1;
    uint16 _MK191 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF191 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT191 : 1;
} EIC191Bits_t;

typedef struct
{
    uint16 _P0192 : 1;
    uint16 _P1192 : 1;
    uint16 _P2192 : 1;
    uint16 _P3192 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB192 : 1;
    uint16 _MK192 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF192 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT192 : 1;
} EIC192Bits_t;

typedef struct
{
    uint16 _P0193 : 1;
    uint16 _P1193 : 1;
    uint16 _P2193 : 1;
    uint16 _P3193 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB193 : 1;
    uint16 _MK193 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF193 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT193 : 1;
} EIC193Bits_t;

typedef struct
{
    uint16 _P0194 : 1;
    uint16 _P1194 : 1;
    uint16 _P2194 : 1;
    uint16 _P3194 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB194 : 1;
    uint16 _MK194 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF194 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT194 : 1;
} EIC194Bits_t;

typedef struct
{
    uint16 _P0195 : 1;
    uint16 _P1195 : 1;
    uint16 _P2195 : 1;
    uint16 _P3195 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB195 : 1;
    uint16 _MK195 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF195 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT195 : 1;
} EIC195Bits_t;

typedef struct
{
    uint16 _P0196 : 1;
    uint16 _P1196 : 1;
    uint16 _P2196 : 1;
    uint16 _P3196 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB196 : 1;
    uint16 _MK196 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF196 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT196 : 1;
} EIC196Bits_t;

typedef struct
{
    uint16 _P0208 : 1;
    uint16 _P1208 : 1;
    uint16 _P2208 : 1;
    uint16 _P3208 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB208 : 1;
    uint16 _MK208 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF208 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT208 : 1;
} EIC208Bits_t;

typedef struct
{
    uint16 _P0209 : 1;
    uint16 _P1209 : 1;
    uint16 _P2209 : 1;
    uint16 _P3209 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB209 : 1;
    uint16 _MK209 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF209 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT209 : 1;
} EIC209Bits_t;

typedef struct
{
    uint16 _P0210 : 1;
    uint16 _P1210 : 1;
    uint16 _P2210 : 1;
    uint16 _P3210 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB210 : 1;
    uint16 _MK210 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF210 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT210 : 1;
} EIC210Bits_t;

typedef struct
{
    uint16 _P0211 : 1;
    uint16 _P1211 : 1;
    uint16 _P2211 : 1;
    uint16 _P3211 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB211 : 1;
    uint16 _MK211 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF211 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT211 : 1;
} EIC211Bits_t;

typedef struct
{
    uint16 _P0212 : 1;
    uint16 _P1212 : 1;
    uint16 _P2212 : 1;
    uint16 _P3212 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB212 : 1;
    uint16 _MK212 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF212 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT212 : 1;
} EIC212Bits_t;

typedef struct
{
    uint16 _P0213 : 1;
    uint16 _P1213 : 1;
    uint16 _P2213 : 1;
    uint16 _P3213 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB213 : 1;
    uint16 _MK213 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF213 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT213 : 1;
} EIC213Bits_t;

typedef struct
{
    uint16 _P0214 : 1;
    uint16 _P1214 : 1;
    uint16 _P2214 : 1;
    uint16 _P3214 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB214 : 1;
    uint16 _MK214 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF214 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT214 : 1;
} EIC214Bits_t;

typedef struct
{
    uint16 _P0215 : 1;
    uint16 _P1215 : 1;
    uint16 _P2215 : 1;
    uint16 _P3215 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB215 : 1;
    uint16 _MK215 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF215 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT215 : 1;
} EIC215Bits_t;

typedef struct
{
    uint16 _P0216 : 1;
    uint16 _P1216 : 1;
    uint16 _P2216 : 1;
    uint16 _P3216 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB216 : 1;
    uint16 _MK216 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF216 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT216 : 1;
} EIC216Bits_t;

typedef struct
{
    uint16 _P0217 : 1;
    uint16 _P1217 : 1;
    uint16 _P2217 : 1;
    uint16 _P3217 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB217 : 1;
    uint16 _MK217 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF217 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT217 : 1;
} EIC217Bits_t;

typedef struct
{
    uint16 _P0218 : 1;
    uint16 _P1218 : 1;
    uint16 _P2218 : 1;
    uint16 _P3218 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB218 : 1;
    uint16 _MK218 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF218 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT218 : 1;
} EIC218Bits_t;

typedef struct
{
    uint16 _P0219 : 1;
    uint16 _P1219 : 1;
    uint16 _P2219 : 1;
    uint16 _P3219 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB219 : 1;
    uint16 _MK219 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF219 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT219 : 1;
} EIC219Bits_t;

typedef struct
{
    uint16 _P0229 : 1;
    uint16 _P1229 : 1;
    uint16 _P2229 : 1;
    uint16 _P3229 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB229 : 1;
    uint16 _MK229 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF229 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT229 : 1;
} EIC228Bits_t;

typedef struct
{
    uint16 _P0230 : 1;
    uint16 _P1230 : 1;
    uint16 _P2230 : 1;
    uint16 _P3230 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB230 : 1;
    uint16 _MK230 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF230 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT230 : 1;
} EIC230Bits_t;

typedef struct
{
    uint16 _P0231 : 1;
    uint16 _P1231 : 1;
    uint16 _P2231 : 1;
    uint16 _P3231 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB231 : 1;
    uint16 _MK231 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF231 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT231 : 1;
} EIC231Bits_t;

typedef struct
{
    uint16 _P0232 : 1;
    uint16 _P1232 : 1;
    uint16 _P2232 : 1;
    uint16 _P3232 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB232 : 1;
    uint16 _MK232 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF232 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT232 : 1;
} EIC232Bits_t;

typedef struct
{
    uint16 _P0233 : 1;
    uint16 _P1233 : 1;
    uint16 _P2233 : 1;
    uint16 _P3233 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB233 : 1;
    uint16 _MK233 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF233 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT233 : 1;
} EIC233Bits_t;

typedef struct
{
    uint16 _P0234 : 1;
    uint16 _P1234 : 1;
    uint16 _P2234 : 1;
    uint16 _P3234 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB234 : 1;
    uint16 _MK234 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF234 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT234 : 1;
} EIC234Bits_t;

typedef struct
{
    uint16 _P0235 : 1;
    uint16 _P1235 : 1;
    uint16 _P2235 : 1;
    uint16 _P3235 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB235 : 1;
    uint16 _MK235 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF235 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT235 : 1;
} EIC235Bits_t;

typedef struct
{
    uint16 _P0236 : 1;
    uint16 _P1236 : 1;
    uint16 _P2236 : 1;
    uint16 _P3236 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB236 : 1;
    uint16 _MK236 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF236 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT236 : 1;
} EIC236Bits_t;

typedef struct
{
    uint16 _P0237 : 1;
    uint16 _P1237 : 1;
    uint16 _P2237 : 1;
    uint16 _P3237 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB237 : 1;
    uint16 _MK237 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF237 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT237 : 1;
} EIC237Bits_t;

typedef struct
{
    uint16 _P0238 : 1;
    uint16 _P1238 : 1;
    uint16 _P2238 : 1;
    uint16 _P3238 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB238 : 1;
    uint16 _MK238 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF238 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT238 : 1;
} EIC238Bits_t;

typedef struct
{
    uint16 _P0239 : 1;
    uint16 _P1239 : 1;
    uint16 _P2239 : 1;
    uint16 _P3239 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB239 : 1;
    uint16 _MK239 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF239 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT239 : 1;
} EIC239Bits_t;

typedef struct
{
    uint16 _P0240 : 1;
    uint16 _P1240 : 1;
    uint16 _P2240 : 1;
    uint16 _P3240 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB240 : 1;
    uint16 _MK240 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF240 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT240 : 1;
} EIC240Bits_t;

typedef struct
{
    uint16 _P0241 : 1;
    uint16 _P1241 : 1;
    uint16 _P2241 : 1;
    uint16 _P3241 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB241 : 1;
    uint16 _MK241 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF241 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT241 : 1;
} EIC241Bits_t;

typedef struct
{
    uint16 _P0242 : 1;
    uint16 _P1242 : 1;
    uint16 _P2242 : 1;
    uint16 _P3242 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB242 : 1;
    uint16 _MK242 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF242 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT242 : 1;
} EIC242Bits_t;

typedef struct
{
    uint16 _P0243 : 1;
    uint16 _P1243 : 1;
    uint16 _P2243 : 1;
    uint16 _P3243 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB243 : 1;
    uint16 _MK243 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF243 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT243 : 1;
} EIC243Bits_t;

typedef struct
{
    uint16 _P0244 : 1;
    uint16 _P1244 : 1;
    uint16 _P2244 : 1;
    uint16 _P3244 : 1;
    uint16 padding4 : 1;
    uint16 padding5 : 1;
    uint16 _TB244 : 1;
    uint16 _MK244 : 1;
    uint16 padding8 : 1;
    uint16 padding9 : 1;
    uint16 padding10 : 1;
    uint16 padding11 : 1;
    uint16 _RF244 : 1;
    uint16 padding13 : 1;
    uint16 padding14 : 1;
    uint16 _CT244 : 1;
} EIC244Bits_t;

typedef struct
{
    uint32 _IMR1EIKM32 : 1;
    uint32 _IMR1EIKM33 : 1;
    uint32 _IMR1EIKM34 : 1;
    uint32 _IMR1EIKM35 : 1;
    uint32 _IMR1EIKM36 : 1;
    uint32 _IMR1EIKM37 : 1;
    uint32 _IMR1EIKM38 : 1;
    uint32 _IMR1EIKM39 : 1;
    uint32 _IMR1EIKM40 : 1;
    uint32 _IMR1EIKM41 : 1;
    uint32 _IMR1EIKM42 : 1;
    uint32 _IMR1EIKM43 : 1;
    uint32 _IMR1EIKM44 : 1;
    uint32 _IMR1EIKM45 : 1;
    uint32 _IMR1EIKM46 : 1;
    uint32 _IMR1EIKM47 : 1;
    uint32 _IMR1EIKM48 : 1;
    uint32 _IMR1EIKM49 : 1;
    uint32 _IMR1EIKM50 : 1;
    uint32 _IMR1EIKM51 : 1;
    uint32 _IMR1EIKM52 : 1;
    uint32 _IMR1EIKM53 : 1;
    uint32 _IMR1EIKM54 : 1;
    uint32 _IMR1EIKM55 : 1;
    uint32 _IMR1EIKM56 : 1;
    uint32 _IMR1EIKM57 : 1;
    uint32 _IMR1EIKM58 : 1;
    uint32 _IMR1EIKM59 : 1;
    uint32 _IMR1EIKM60 : 1;
    uint32 _IMR1EIKM61 : 1;
    uint32 _IMR1EIKM62 : 1;
    uint32 _IMR1EIKM63 : 1;
} IMR1Bits_t;

typedef struct
{
    uint32 _IMR2EIKM64 : 1;
    uint32 _IMR2EIKM65 : 1;
    uint32 _IMR2EIKM66 : 1;
    uint32 _IMR2EIKM67 : 1;
    uint32 _IMR2EIKM68 : 1;
    uint32 _IMR2EIKM69 : 1;
    uint32 _IMR2EIKM70 : 1;
    uint32 _IMR2EIKM71 : 1;
    uint32 _IMR2EIKM72 : 1;
    uint32 _IMR2EIKM73 : 1;
    uint32 _IMR2EIKM74 : 1;
    uint32 _IMR2EIKM75 : 1;
    uint32 _IMR2EIKM76 : 1;
    uint32 _IMR2EIKM77 : 1;
    uint32 _IMR2EIKM78 : 1;
    uint32 _IMR2EIKM79 : 1;
    uint32 _IMR2EIKM80 : 1;
    uint32 _IMR2EIKM81 : 1;
    uint32 _IMR2EIKM82 : 1;
    uint32 _IMR2EIKM83 : 1;
    uint32 _IMR2EIKM84 : 1;
    uint32 _IMR2EIKM85 : 1;
    uint32 _IMR2EIKM86 : 1;
    uint32 _IMR2EIKM87 : 1;
    uint32 _IMR2EIKM88 : 1;
    uint32 _IMR2EIKM89 : 1;
    uint32 _IMR2EIKM90 : 1;
    uint32 _IMR2EIKM91 : 1;
    uint32 _IMR2EIKM92 : 1;
    uint32 _IMR2EIKM93 : 1;
    uint32 _IMR2EIKM94 : 1;
    uint32 _IMR2EIKM95 : 1;
} IMR2Bits_t;

typedef struct
{
    uint32 _IMR3EIKM96 : 1;
    uint32 _IMR3EIKM97 : 1;
    uint32 _IMR3EIKM98 : 1;
    uint32 _IMR3EIKM99 : 1;
    uint32 _IMR3EIKM100 : 1;
    uint32 _IMR3EIKM101 : 1;
    uint32 _IMR3EIKM102 : 1;
    uint32 _IMR3EIKM103 : 1;
    uint32 _IMR3EIKM104 : 1;
    uint32 _IMR3EIKM105 : 1;
    uint32 _IMR3EIKM106 : 1;
    uint32 _IMR3EIKM107 : 1;
    uint32 _IMR3EIKM108 : 1;
    uint32 _IMR3EIKM109 : 1;
    uint32 _IMR3EIKM110 : 1;
    uint32 _IMR3EIKM111 : 1;
    uint32 _IMR3EIKM112 : 1;
    uint32 _IMR3EIKM113 : 1;
    uint32 _IMR3EIKM114 : 1;
    uint32 _IMR3EIKM115 : 1;
    uint32 _IMR3EIKM116 : 1;
    uint32 _IMR3EIKM117 : 1;
    uint32 _IMR3EIKM118 : 1;
    uint32 _IMR3EIKM119 : 1;
    uint32 _IMR3EIKM120 : 1;
    uint32 _IMR3EIKM121 : 1;
    uint32 _IMR3EIKM122 : 1;
    uint32 _IMR3EIKM123 : 1;
    uint32 _IMR3EIKM124 : 1;
    uint32 _IMR3EIKM125 : 1;
    uint32 _IMR3EIKM126 : 1;
    uint32 _IMR3EIKM127 : 1;
} IMR3Bits_t;

typedef struct
{
    uint32 _IMR4EIKM128 : 1;
    uint32 _IMR4EIKM129 : 1;
    uint32 _IMR4EIKM130 : 1;
    uint32 _IMR4EIKM131 : 1;
    uint32 _IMR4EIKM132 : 1;
    uint32 _IMR4EIKM133 : 1;
    uint32 _IMR4EIKM134 : 1;
    uint32 _IMR4EIKM135 : 1;
    uint32 _IMR4EIKM136 : 1;
    uint32 _IMR4EIKM137 : 1;
    uint32 _IMR4EIKM138 : 1;
    uint32 _IMR4EIKM139 : 1;
    uint32 _IMR4EIKM140 : 1;
    uint32 _IMR4EIKM141 : 1;
    uint32 _IMR4EIKM142 : 1;
    uint32 _IMR4EIKM143 : 1;
    uint32 _IMR4EIKM144 : 1;
    uint32 _IMR4EIKM145 : 1;
    uint32 _IMR4EIKM146 : 1;
    uint32 _IMR4EIKM147 : 1;
    uint32 _IMR4EIKM148 : 1;
    uint32 _IMR4EIKM149 : 1;
    uint32 _IMR4EIKM150 : 1;
    uint32 _IMR4EIKM151 : 1;
    uint32 _IMR4EIKM152 : 1;
    uint32 _IMR4EIKM153 : 1;
    uint32 _IMR4EIKM154 : 1;
    uint32 _IMR4EIKM155 : 1;
    uint32 _IMR4EIKM156 : 1;
    uint32 _IMR4EIKM157 : 1;
    uint32 _IMR4EIKM158 : 1;
    uint32 _IMR4EIKM159 : 1;
} IMR4Bits_t;

typedef struct
{
    uint32 _IMR5EIKM160 : 1;
    uint32 _IMR5EIKM161 : 1;
    uint32 _IMR5EIKM162 : 1;
    uint32 _IMR5EIKM163 : 1;
    uint32 _IMR5EIKM164 : 1;
    uint32 _IMR5EIKM165 : 1;
    uint32 _IMR5EIKM166 : 1;
    uint32 _IMR5EIKM167 : 1;
    uint32 _IMR5EIKM168 : 1;
    uint32 _IMR5EIKM169 : 1;
    uint32 _IMR5EIKM170 : 1;
    uint32 _IMR5EIKM171 : 1;
    uint32 _IMR5EIKM172 : 1;
    uint32 _IMR5EIKM173 : 1;
    uint32 _IMR5EIKM174 : 1;
    uint32 _IMR5EIKM175 : 1;
    uint32 _IMR5EIKM176 : 1;
    uint32 _IMR5EIKM177 : 1;
    uint32 _IMR5EIKM178 : 1;
    uint32 _IMR5EIKM179 : 1;
    uint32 _IMR5EIKM180 : 1;
    uint32 _IMR5EIKM181 : 1;
    uint32 _IMR5EIKM182 : 1;
    uint32 _IMR5EIKM183 : 1;
    uint32 _IMR5EIKM184 : 1;
    uint32 _IMR5EIKM185 : 1;
    uint32 _IMR5EIKM186 : 1;
    uint32 _IMR5EIKM187 : 1;
    uint32 _IMR5EIKM188 : 1;
    uint32 _IMR5EIKM189 : 1;
    uint32 _IMR5EIKM190 : 1;
    uint32 _IMR5EIKM191 : 1;
} IMR5Bits_t;

typedef struct
{
    uint32 _IMR6EIKM192 : 1;
    uint32 _IMR6EIKM193 : 1;
    uint32 _IMR6EIKM194 : 1;
    uint32 _IMR6EIKM195 : 1;
    uint32 _IMR6EIKM196 : 1;
    uint32 _IMR6EIKM197 : 1;
    uint32 _IMR6EIKM198 : 1;
    uint32 _IMR6EIKM199 : 1;
    uint32 _IMR6EIKM200 : 1;
    uint32 _IMR6EIKM201 : 1;
    uint32 _IMR6EIKM202 : 1;
    uint32 _IMR6EIKM203 : 1;
    uint32 _IMR6EIKM204 : 1;
    uint32 _IMR6EIKM205 : 1;
    uint32 _IMR6EIKM206 : 1;
    uint32 _IMR6EIKM207 : 1;
    uint32 _IMR6EIKM208 : 1;
    uint32 _IMR6EIKM209 : 1;
    uint32 _IMR6EIKM210 : 1;
    uint32 _IMR6EIKM211 : 1;
    uint32 _IMR6EIKM212 : 1;
    uint32 _IMR6EIKM213 : 1;
    uint32 _IMR6EIKM214 : 1;
    uint32 _IMR6EIKM215 : 1;
    uint32 _IMR6EIKM216 : 1;
    uint32 _IMR6EIKM217 : 1;
    uint32 _IMR6EIKM218 : 1;
    uint32 _IMR6EIKM219 : 1;
    uint32 _IMR6EIKM220 : 1;
    uint32 _IMR6EIKM221 : 1;
    uint32 _IMR6EIKM222 : 1;
    uint32 _IMR6EIKM223 : 1;
} IMR6Bits_t;

typedef struct
{
    uint32 _IMR7EIKM224 : 1;
    uint32 _IMR7EIKM225 : 1;
    uint32 _IMR7EIKM226 : 1;
    uint32 _IMR7EIKM227 : 1;
    uint32 _IMR7EIKM228 : 1;
    uint32 _IMR7EIKM229 : 1;
    uint32 _IMR7EIKM230 : 1;
    uint32 _IMR7EIKM231 : 1;
    uint32 _IMR7EIKM232 : 1;
    uint32 _IMR7EIKM233 : 1;
    uint32 _IMR7EIKM234 : 1;
    uint32 _IMR7EIKM235 : 1;
    uint32 _IMR7EIKM236 : 1;
    uint32 _IMR7EIKM237 : 1;
    uint32 _IMR7EIKM238 : 1;
    uint32 _IMR7EIKM239 : 1;
    uint32 _IMR7EIKM240 : 1;
    uint32 _IMR7EIKM241 : 1;
    uint32 _IMR7EIKM242 : 1;
    uint32 _IMR7EIKM243 : 1;
    uint32 _IMR7EIKM244 : 1;
    uint32 _IMR7EIKM245 : 1;
    uint32 _IMR7EIKM246 : 1;
    uint32 _IMR7EIKM247 : 1;
    uint32 _IMR7EIKM248 : 1;
    uint32 _IMR7EIKM249 : 1;
    uint32 _IMR7EIKM250 : 1;
    uint32 _IMR7EIKM251 : 1;
    uint32 _IMR7EIKM252 : 1;
    uint32 _IMR7EIKM253 : 1;
    uint32 _IMR7EIKM254 : 1;
    uint32 _IMR7EIKM255 : 1;
} IMR7Bits_t;

typedef struct
{
    uint32 _PEID032 : 1;
    uint32 _PEID132 : 1;
    uint32 _PEID232 : 1;
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
    uint32 _GPID032 : 1;
    uint32 _GPID132 : 1;
    uint32 _GPID232 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP032 : 1;
    uint32 _BCP132 : 1;
    uint32 _BCP232 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD32Bits_t;

typedef struct
{
    uint32 _PEID033 : 1;
    uint32 _PEID133 : 1;
    uint32 _PEID233 : 1;
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
    uint32 _GPID033 : 1;
    uint32 _GPID133 : 1;
    uint32 _GPID233 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP033 : 1;
    uint32 _BCP133 : 1;
    uint32 _BCP233 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD33Bits_t;

typedef struct
{
    uint32 _PEID034 : 1;
    uint32 _PEID134 : 1;
    uint32 _PEID234 : 1;
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
    uint32 _GPID034 : 1;
    uint32 _GPID134 : 1;
    uint32 _GPID234 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP034 : 1;
    uint32 _BCP134 : 1;
    uint32 _BCP234 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD34Bits_t;

typedef struct
{
    uint32 _PEID035 : 1;
    uint32 _PEID135 : 1;
    uint32 _PEID235 : 1;
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
    uint32 _GPID035 : 1;
    uint32 _GPID135 : 1;
    uint32 _GPID235 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP035 : 1;
    uint32 _BCP135 : 1;
    uint32 _BCP235 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD35Bits_t;

typedef struct
{
    uint32 _PEID036 : 1;
    uint32 _PEID136 : 1;
    uint32 _PEID236 : 1;
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
    uint32 _GPID036 : 1;
    uint32 _GPID136 : 1;
    uint32 _GPID236 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP036 : 1;
    uint32 _BCP136 : 1;
    uint32 _BCP236 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD36Bits_t;

typedef struct
{
    uint32 _PEID037 : 1;
    uint32 _PEID137 : 1;
    uint32 _PEID237 : 1;
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
    uint32 _GPID037 : 1;
    uint32 _GPID137 : 1;
    uint32 _GPID237 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP037 : 1;
    uint32 _BCP137 : 1;
    uint32 _BCP237 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD37Bits_t;

typedef struct
{
    uint32 _PEID038 : 1;
    uint32 _PEID138 : 1;
    uint32 _PEID238 : 1;
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
    uint32 _GPID038 : 1;
    uint32 _GPID138 : 1;
    uint32 _GPID238 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP038 : 1;
    uint32 _BCP138 : 1;
    uint32 _BCP238 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD38Bits_t;

typedef struct
{
    uint32 _PEID039 : 1;
    uint32 _PEID139 : 1;
    uint32 _PEID239 : 1;
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
    uint32 _GPID039 : 1;
    uint32 _GPID139 : 1;
    uint32 _GPID239 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP039 : 1;
    uint32 _BCP139 : 1;
    uint32 _BCP239 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD39Bits_t;

typedef struct
{
    uint32 _PEID040 : 1;
    uint32 _PEID140 : 1;
    uint32 _PEID240 : 1;
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
    uint32 _GPID040 : 1;
    uint32 _GPID140 : 1;
    uint32 _GPID240 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP040 : 1;
    uint32 _BCP140 : 1;
    uint32 _BCP240 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD40Bits_t;

typedef struct
{
    uint32 _PEID041 : 1;
    uint32 _PEID141 : 1;
    uint32 _PEID241 : 1;
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
    uint32 _GPID041 : 1;
    uint32 _GPID141 : 1;
    uint32 _GPID241 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP041 : 1;
    uint32 _BCP141 : 1;
    uint32 _BCP241 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD41Bits_t;

typedef struct
{
    uint32 _PEID042 : 1;
    uint32 _PEID142 : 1;
    uint32 _PEID242 : 1;
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
    uint32 _GPID042 : 1;
    uint32 _GPID142 : 1;
    uint32 _GPID242 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP042 : 1;
    uint32 _BCP142 : 1;
    uint32 _BCP242 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD42Bits_t;

typedef struct
{
    uint32 _PEID047 : 1;
    uint32 _PEID147 : 1;
    uint32 _PEID247 : 1;
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
    uint32 _GPID047 : 1;
    uint32 _GPID147 : 1;
    uint32 _GPID247 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP047 : 1;
    uint32 _BCP147 : 1;
    uint32 _BCP247 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD47Bits_t;

typedef struct
{
    uint32 _PEID048 : 1;
    uint32 _PEID148 : 1;
    uint32 _PEID248 : 1;
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
    uint32 _GPID048 : 1;
    uint32 _GPID148 : 1;
    uint32 _GPID248 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP048 : 1;
    uint32 _BCP148 : 1;
    uint32 _BCP248 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD48Bits_t;

typedef struct
{
    uint32 _PEID049 : 1;
    uint32 _PEID149 : 1;
    uint32 _PEID249 : 1;
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
    uint32 _GPID049 : 1;
    uint32 _GPID149 : 1;
    uint32 _GPID249 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP049 : 1;
    uint32 _BCP149 : 1;
    uint32 _BCP249 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD49Bits_t;

typedef struct
{
    uint32 _PEID050 : 1;
    uint32 _PEID150 : 1;
    uint32 _PEID250 : 1;
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
    uint32 _GPID050 : 1;
    uint32 _GPID150 : 1;
    uint32 _GPID250 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP050 : 1;
    uint32 _BCP150 : 1;
    uint32 _BCP250 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD50Bits_t;

typedef struct
{
    uint32 _PEID051 : 1;
    uint32 _PEID151 : 1;
    uint32 _PEID251 : 1;
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
    uint32 _GPID051 : 1;
    uint32 _GPID151 : 1;
    uint32 _GPID251 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP051 : 1;
    uint32 _BCP151 : 1;
    uint32 _BCP251 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD51Bits_t;

typedef struct
{
    uint32 _PEID052 : 1;
    uint32 _PEID152 : 1;
    uint32 _PEID252 : 1;
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
    uint32 _GPID052 : 1;
    uint32 _GPID152 : 1;
    uint32 _GPID252 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP052 : 1;
    uint32 _BCP152 : 1;
    uint32 _BCP252 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD52Bits_t;

typedef struct
{
    uint32 _PEID053 : 1;
    uint32 _PEID153 : 1;
    uint32 _PEID253 : 1;
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
    uint32 _GPID053 : 1;
    uint32 _GPID153 : 1;
    uint32 _GPID253 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP053 : 1;
    uint32 _BCP153 : 1;
    uint32 _BCP253 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD53Bits_t;

typedef struct
{
    uint32 _PEID054 : 1;
    uint32 _PEID154 : 1;
    uint32 _PEID254 : 1;
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
    uint32 _GPID054 : 1;
    uint32 _GPID154 : 1;
    uint32 _GPID254 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP054 : 1;
    uint32 _BCP154 : 1;
    uint32 _BCP254 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD54Bits_t;

typedef struct
{
    uint32 _PEID055 : 1;
    uint32 _PEID155 : 1;
    uint32 _PEID255 : 1;
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
    uint32 _GPID055 : 1;
    uint32 _GPID155 : 1;
    uint32 _GPID255 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP055 : 1;
    uint32 _BCP155 : 1;
    uint32 _BCP255 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD55Bits_t;

typedef struct
{
    uint32 _PEID056 : 1;
    uint32 _PEID156 : 1;
    uint32 _PEID256 : 1;
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
    uint32 _GPID056 : 1;
    uint32 _GPID156 : 1;
    uint32 _GPID256 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP056 : 1;
    uint32 _BCP156 : 1;
    uint32 _BCP256 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD56Bits_t;

typedef struct
{
    uint32 _PEID057 : 1;
    uint32 _PEID157 : 1;
    uint32 _PEID257 : 1;
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
    uint32 _GPID057 : 1;
    uint32 _GPID157 : 1;
    uint32 _GPID257 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP057 : 1;
    uint32 _BCP157 : 1;
    uint32 _BCP257 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD57Bits_t;

typedef struct
{
    uint32 _PEID058 : 1;
    uint32 _PEID158 : 1;
    uint32 _PEID258 : 1;
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
    uint32 _GPID058 : 1;
    uint32 _GPID158 : 1;
    uint32 _GPID258 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP058 : 1;
    uint32 _BCP158 : 1;
    uint32 _BCP258 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD58Bits_t;

typedef struct
{
    uint32 _PEID059 : 1;
    uint32 _PEID159 : 1;
    uint32 _PEID259 : 1;
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
    uint32 _GPID059 : 1;
    uint32 _GPID159 : 1;
    uint32 _GPID259 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP059 : 1;
    uint32 _BCP159 : 1;
    uint32 _BCP259 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD59Bits_t;

typedef struct
{
    uint32 _PEID060 : 1;
    uint32 _PEID160 : 1;
    uint32 _PEID260 : 1;
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
    uint32 _GPID060 : 1;
    uint32 _GPID160 : 1;
    uint32 _GPID260 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP060 : 1;
    uint32 _BCP160 : 1;
    uint32 _BCP260 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD60Bits_t;

typedef struct
{
    uint32 _PEID061 : 1;
    uint32 _PEID161 : 1;
    uint32 _PEID261 : 1;
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
    uint32 _GPID061 : 1;
    uint32 _GPID161 : 1;
    uint32 _GPID261 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP061 : 1;
    uint32 _BCP161 : 1;
    uint32 _BCP261 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD61Bits_t;

typedef struct
{
    uint32 _PEID062 : 1;
    uint32 _PEID162 : 1;
    uint32 _PEID262 : 1;
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
    uint32 _GPID062 : 1;
    uint32 _GPID162 : 1;
    uint32 _GPID262 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP062 : 1;
    uint32 _BCP162 : 1;
    uint32 _BCP262 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD62Bits_t;

typedef struct
{
    uint32 _PEID063 : 1;
    uint32 _PEID163 : 1;
    uint32 _PEID263 : 1;
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
    uint32 _GPID063 : 1;
    uint32 _GPID163 : 1;
    uint32 _GPID263 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP063 : 1;
    uint32 _BCP163 : 1;
    uint32 _BCP263 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD63Bits_t;

typedef struct
{
    uint32 _PEID064 : 1;
    uint32 _PEID164 : 1;
    uint32 _PEID264 : 1;
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
    uint32 _GPID064 : 1;
    uint32 _GPID164 : 1;
    uint32 _GPID264 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP064 : 1;
    uint32 _BCP164 : 1;
    uint32 _BCP264 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD64Bits_t;

typedef struct
{
    uint32 _PEID065 : 1;
    uint32 _PEID165 : 1;
    uint32 _PEID265 : 1;
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
    uint32 _GPID065 : 1;
    uint32 _GPID165 : 1;
    uint32 _GPID265 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP065 : 1;
    uint32 _BCP165 : 1;
    uint32 _BCP265 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD65Bits_t;

typedef struct
{
    uint32 _PEID069 : 1;
    uint32 _PEID169 : 1;
    uint32 _PEID269 : 1;
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
    uint32 _GPID069 : 1;
    uint32 _GPID169 : 1;
    uint32 _GPID269 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP069 : 1;
    uint32 _BCP169 : 1;
    uint32 _BCP269 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD69Bits_t;

typedef struct
{
    uint32 _PEID070 : 1;
    uint32 _PEID170 : 1;
    uint32 _PEID270 : 1;
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
    uint32 _GPID070 : 1;
    uint32 _GPID170 : 1;
    uint32 _GPID270 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP070 : 1;
    uint32 _BCP170 : 1;
    uint32 _BCP270 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD70Bits_t;

typedef struct
{
    uint32 _PEID071 : 1;
    uint32 _PEID171 : 1;
    uint32 _PEID271 : 1;
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
    uint32 _GPID071 : 1;
    uint32 _GPID171 : 1;
    uint32 _GPID271 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP071 : 1;
    uint32 _BCP171 : 1;
    uint32 _BCP271 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD71Bits_t;

typedef struct
{
    uint32 _PEID072 : 1;
    uint32 _PEID172 : 1;
    uint32 _PEID272 : 1;
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
    uint32 _GPID072 : 1;
    uint32 _GPID172 : 1;
    uint32 _GPID272 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP072 : 1;
    uint32 _BCP172 : 1;
    uint32 _BCP272 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD72Bits_t;

typedef struct
{
    uint32 _PEID073 : 1;
    uint32 _PEID173 : 1;
    uint32 _PEID273 : 1;
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
    uint32 _GPID073 : 1;
    uint32 _GPID173 : 1;
    uint32 _GPID273 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP073 : 1;
    uint32 _BCP173 : 1;
    uint32 _BCP273 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD73Bits_t;

typedef struct
{
    uint32 _PEID074 : 1;
    uint32 _PEID174 : 1;
    uint32 _PEID274 : 1;
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
    uint32 _GPID074 : 1;
    uint32 _GPID174 : 1;
    uint32 _GPID274 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP074 : 1;
    uint32 _BCP174 : 1;
    uint32 _BCP274 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD74Bits_t;

typedef struct
{
    uint32 _PEID080 : 1;
    uint32 _PEID180 : 1;
    uint32 _PEID280 : 1;
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
    uint32 _GPID080 : 1;
    uint32 _GPID180 : 1;
    uint32 _GPID280 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP080 : 1;
    uint32 _BCP180 : 1;
    uint32 _BCP280 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD80Bits_t;

typedef struct
{
    uint32 _PEID081 : 1;
    uint32 _PEID181 : 1;
    uint32 _PEID281 : 1;
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
    uint32 _GPID081 : 1;
    uint32 _GPID181 : 1;
    uint32 _GPID281 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP081 : 1;
    uint32 _BCP181 : 1;
    uint32 _BCP281 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD81Bits_t;

typedef struct
{
    uint32 _PEID082 : 1;
    uint32 _PEID182 : 1;
    uint32 _PEID282 : 1;
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
    uint32 _GPID082 : 1;
    uint32 _GPID182 : 1;
    uint32 _GPID282 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP082 : 1;
    uint32 _BCP182 : 1;
    uint32 _BCP282 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD82Bits_t;

typedef struct
{
    uint32 _PEID083 : 1;
    uint32 _PEID183 : 1;
    uint32 _PEID283 : 1;
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
    uint32 _GPID083 : 1;
    uint32 _GPID183 : 1;
    uint32 _GPID283 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP083 : 1;
    uint32 _BCP183 : 1;
    uint32 _BCP283 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD83Bits_t;

typedef struct
{
    uint32 _PEID084 : 1;
    uint32 _PEID184 : 1;
    uint32 _PEID284 : 1;
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
    uint32 _GPID084 : 1;
    uint32 _GPID184 : 1;
    uint32 _GPID284 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP084 : 1;
    uint32 _BCP184 : 1;
    uint32 _BCP284 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD84Bits_t;

typedef struct
{
    uint32 _PEID085 : 1;
    uint32 _PEID185 : 1;
    uint32 _PEID285 : 1;
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
    uint32 _GPID085 : 1;
    uint32 _GPID185 : 1;
    uint32 _GPID285 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP085 : 1;
    uint32 _BCP185 : 1;
    uint32 _BCP285 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD85Bits_t;

typedef struct
{
    uint32 _PEID086 : 1;
    uint32 _PEID186 : 1;
    uint32 _PEID286 : 1;
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
    uint32 _GPID086 : 1;
    uint32 _GPID186 : 1;
    uint32 _GPID286 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP086 : 1;
    uint32 _BCP186 : 1;
    uint32 _BCP286 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD86Bits_t;

typedef struct
{
    uint32 _PEID087 : 1;
    uint32 _PEID187 : 1;
    uint32 _PEID287 : 1;
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
    uint32 _GPID087 : 1;
    uint32 _GPID187 : 1;
    uint32 _GPID287 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP087 : 1;
    uint32 _BCP187 : 1;
    uint32 _BCP287 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD87Bits_t;

typedef struct
{
    uint32 _PEID088 : 1;
    uint32 _PEID188 : 1;
    uint32 _PEID288 : 1;
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
    uint32 _GPID088 : 1;
    uint32 _GPID188 : 1;
    uint32 _GPID288 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP088 : 1;
    uint32 _BCP188 : 1;
    uint32 _BCP288 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD88Bits_t;

typedef struct
{
    uint32 _PEID089 : 1;
    uint32 _PEID189 : 1;
    uint32 _PEID289 : 1;
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
    uint32 _GPID089 : 1;
    uint32 _GPID189 : 1;
    uint32 _GPID289 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP089 : 1;
    uint32 _BCP189 : 1;
    uint32 _BCP289 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD89Bits_t;

typedef struct
{
    uint32 _PEID090 : 1;
    uint32 _PEID190 : 1;
    uint32 _PEID290 : 1;
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
    uint32 _GPID090 : 1;
    uint32 _GPID190 : 1;
    uint32 _GPID290 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP090 : 1;
    uint32 _BCP190 : 1;
    uint32 _BCP290 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD90Bits_t;

typedef struct
{
    uint32 _PEID091 : 1;
    uint32 _PEID191 : 1;
    uint32 _PEID291 : 1;
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
    uint32 _GPID091 : 1;
    uint32 _GPID191 : 1;
    uint32 _GPID291 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP091 : 1;
    uint32 _BCP191 : 1;
    uint32 _BCP291 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD91Bits_t;

typedef struct
{
    uint32 _PEID092 : 1;
    uint32 _PEID192 : 1;
    uint32 _PEID292 : 1;
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
    uint32 _GPID092 : 1;
    uint32 _GPID192 : 1;
    uint32 _GPID292 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP092 : 1;
    uint32 _BCP192 : 1;
    uint32 _BCP292 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD92Bits_t;

typedef struct
{
    uint32 _PEID093 : 1;
    uint32 _PEID193 : 1;
    uint32 _PEID293 : 1;
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
    uint32 _GPID093 : 1;
    uint32 _GPID193 : 1;
    uint32 _GPID293 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP093 : 1;
    uint32 _BCP193 : 1;
    uint32 _BCP293 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD93Bits_t;

typedef struct
{
    uint32 _PEID094 : 1;
    uint32 _PEID194 : 1;
    uint32 _PEID294 : 1;
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
    uint32 _GPID094 : 1;
    uint32 _GPID194 : 1;
    uint32 _GPID294 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP094 : 1;
    uint32 _BCP194 : 1;
    uint32 _BCP294 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD94Bits_t;

typedef struct
{
    uint32 _PEID095 : 1;
    uint32 _PEID195 : 1;
    uint32 _PEID295 : 1;
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
    uint32 _GPID095 : 1;
    uint32 _GPID195 : 1;
    uint32 _GPID295 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP095 : 1;
    uint32 _BCP195 : 1;
    uint32 _BCP295 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD95Bits_t;

typedef struct
{
    uint32 _PEID096 : 1;
    uint32 _PEID196 : 1;
    uint32 _PEID296 : 1;
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
    uint32 _GPID096 : 1;
    uint32 _GPID196 : 1;
    uint32 _GPID296 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP096 : 1;
    uint32 _BCP196 : 1;
    uint32 _BCP296 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD96Bits_t;

typedef struct
{
    uint32 _EIBD97 : 1;
    uint32 _PEID197 : 1;
    uint32 _PEID297 : 1;
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
    uint32 _GPID097 : 1;
    uint32 _GPID197 : 1;
    uint32 _GPID297 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP097 : 1;
    uint32 _BCP197 : 1;
    uint32 _BCP297 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD97Bits_t;

typedef struct
{
    uint32 _PEID098 : 1;
    uint32 _PEID198 : 1;
    uint32 _PEID298 : 1;
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
    uint32 _GPID098 : 1;
    uint32 _GPID198 : 1;
    uint32 _GPID298 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP098 : 1;
    uint32 _BCP198 : 1;
    uint32 _BCP298 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD98Bits_t;

typedef struct
{
    uint32 _PEID099 : 1;
    uint32 _PEID199 : 1;
    uint32 _PEID299 : 1;
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
    uint32 _GPID099 : 1;
    uint32 _GPID199 : 1;
    uint32 _GPID299 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP099 : 1;
    uint32 _BCP199 : 1;
    uint32 _BCP299 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD99Bits_t;

typedef struct
{
    uint32 _PEID0100 : 1;
    uint32 _PEID1100 : 1;
    uint32 _PEID2100 : 1;
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
    uint32 _GPID0100 : 1;
    uint32 _GPID1100 : 1;
    uint32 _GPID2100 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0100 : 1;
    uint32 _BCP1100 : 1;
    uint32 _BCP2100 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD100Bits_t;

typedef struct
{
    uint32 _PEID0101 : 1;
    uint32 _PEID1101 : 1;
    uint32 _PEID2101 : 1;
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
    uint32 _GPID0101 : 1;
    uint32 _GPID1101 : 1;
    uint32 _GPID2101 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0101 : 1;
    uint32 _BCP1101 : 1;
    uint32 _BCP2101 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD101Bits_t;

typedef struct
{
    uint32 _PEID0102 : 1;
    uint32 _PEID1102 : 1;
    uint32 _PEID2102 : 1;
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
    uint32 _GPID0102 : 1;
    uint32 _GPID1102 : 1;
    uint32 _GPID2102 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0102 : 1;
    uint32 _BCP1102 : 1;
    uint32 _BCP2102 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD102Bits_t;

typedef struct
{
    uint32 _PEID0103 : 1;
    uint32 _PEID1103 : 1;
    uint32 _PEID2103 : 1;
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
    uint32 _GPID0103 : 1;
    uint32 _GPID1103 : 1;
    uint32 _GPID2103 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0103 : 1;
    uint32 _BCP1103 : 1;
    uint32 _BCP2103 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD103Bits_t;

typedef struct
{
    uint32 _PEID0104 : 1;
    uint32 _PEID1104 : 1;
    uint32 _PEID2104 : 1;
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
    uint32 _GPID0104 : 1;
    uint32 _GPID1104 : 1;
    uint32 _GPID2104 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0104 : 1;
    uint32 _BCP1104 : 1;
    uint32 _BCP2104 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD104Bits_t;

typedef struct
{
    uint32 _PEID0105 : 1;
    uint32 _PEID1105 : 1;
    uint32 _PEID2105 : 1;
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
    uint32 _GPID0105 : 1;
    uint32 _GPID1105 : 1;
    uint32 _GPID2105 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0105 : 1;
    uint32 _BCP1105 : 1;
    uint32 _BCP2105 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD105Bits_t;

typedef struct
{
    uint32 _PEID0106 : 1;
    uint32 _PEID1106 : 1;
    uint32 _PEID2106 : 1;
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
    uint32 _GPID0106 : 1;
    uint32 _GPID1106 : 1;
    uint32 _GPID2106 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0106 : 1;
    uint32 _BCP1106 : 1;
    uint32 _BCP2106 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD106Bits_t;

typedef struct
{
    uint32 _PEID0107 : 1;
    uint32 _PEID1107 : 1;
    uint32 _PEID2107 : 1;
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
    uint32 _GPID0107 : 1;
    uint32 _GPID1107 : 1;
    uint32 _GPID2107 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0107 : 1;
    uint32 _BCP1107 : 1;
    uint32 _BCP2107 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD107Bits_t;

typedef struct
{
    uint32 _PEID0114 : 1;
    uint32 _PEID1114 : 1;
    uint32 _PEID2114 : 1;
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
    uint32 _GPID0114 : 1;
    uint32 _GPID1114 : 1;
    uint32 _GPID2114 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0114 : 1;
    uint32 _BCP1114 : 1;
    uint32 _BCP2114 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD114Bits_t;

typedef struct
{
    uint32 _PEID0115 : 1;
    uint32 _PEID1115 : 1;
    uint32 _PEID2115 : 1;
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
    uint32 _GPID0115 : 1;
    uint32 _GPID1115 : 1;
    uint32 _GPID2115 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0115 : 1;
    uint32 _BCP1115 : 1;
    uint32 _BCP2115 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD115Bits_t;

typedef struct
{
    uint32 _PEID0116 : 1;
    uint32 _PEID1116 : 1;
    uint32 _PEID2116 : 1;
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
    uint32 _GPID0116 : 1;
    uint32 _GPID1116 : 1;
    uint32 _GPID2116 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0116 : 1;
    uint32 _BCP1116 : 1;
    uint32 _BCP2116 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD116Bits_t;

typedef struct
{
    uint32 _PEID0117 : 1;
    uint32 _PEID1117 : 1;
    uint32 _PEID2117 : 1;
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
    uint32 _GPID0117 : 1;
    uint32 _GPID1117 : 1;
    uint32 _GPID2117 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0117 : 1;
    uint32 _BCP1117 : 1;
    uint32 _BCP2117 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD117Bits_t;

typedef struct
{
    uint32 _PEID0118 : 1;
    uint32 _PEID1118 : 1;
    uint32 _PEID2118 : 1;
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
    uint32 _GPID0118 : 1;
    uint32 _GPID1118 : 1;
    uint32 _GPID2118 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0118 : 1;
    uint32 _BCP1118 : 1;
    uint32 _BCP2118 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD118Bits_t;

typedef struct
{
    uint32 _PEID0119 : 1;
    uint32 _PEID1119 : 1;
    uint32 _PEID2119 : 1;
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
    uint32 _GPID0119 : 1;
    uint32 _GPID1119 : 1;
    uint32 _GPID2119 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0119 : 1;
    uint32 _BCP1119 : 1;
    uint32 _BCP2119 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD119Bits_t;

typedef struct
{
    uint32 _PEID0120 : 1;
    uint32 _PEID1120 : 1;
    uint32 _PEID2120 : 1;
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
    uint32 _GPID0120 : 1;
    uint32 _GPID1120 : 1;
    uint32 _GPID2120 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0120 : 1;
    uint32 _BCP1120 : 1;
    uint32 _BCP2120 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD120Bits_t;

typedef struct
{
    uint32 _PEID0121 : 1;
    uint32 _PEID1121 : 1;
    uint32 _PEID2121 : 1;
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
    uint32 _GPID0121 : 1;
    uint32 _GPID1121 : 1;
    uint32 _GPID2121 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0121 : 1;
    uint32 _BCP1121 : 1;
    uint32 _BCP2121 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD121Bits_t;

typedef struct
{
    uint32 _PEID0128 : 1;
    uint32 _PEID1128 : 1;
    uint32 _PEID2128 : 1;
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
    uint32 _GPID0128 : 1;
    uint32 _GPID1128 : 1;
    uint32 _GPID2128 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0128 : 1;
    uint32 _BCP1128 : 1;
    uint32 _BCP2128 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD128Bits_t;

typedef struct
{
    uint32 _PEID0129 : 1;
    uint32 _PEID1129 : 1;
    uint32 _PEID2129 : 1;
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
    uint32 _GPID0129 : 1;
    uint32 _GPID1129 : 1;
    uint32 _GPID2129 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0129 : 1;
    uint32 _BCP1129 : 1;
    uint32 _BCP2129 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD129Bits_t;

typedef struct
{
    uint32 _PEID0130 : 1;
    uint32 _PEID1130 : 1;
    uint32 _PEID2130 : 1;
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
    uint32 _GPID0130 : 1;
    uint32 _GPID1130 : 1;
    uint32 _GPID2130 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0130 : 1;
    uint32 _BCP1130 : 1;
    uint32 _BCP2130 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD130Bits_t;

typedef struct
{
    uint32 _PEID0132 : 1;
    uint32 _PEID1132 : 1;
    uint32 _PEID2132 : 1;
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
    uint32 _GPID0132 : 1;
    uint32 _GPID1132 : 1;
    uint32 _GPID2132 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0132 : 1;
    uint32 _BCP1132 : 1;
    uint32 _BCP2132 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD132Bits_t;

typedef struct
{
    uint32 _PEID0133 : 1;
    uint32 _PEID1133 : 1;
    uint32 _PEID2133 : 1;
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
    uint32 _GPID0133 : 1;
    uint32 _GPID1133 : 1;
    uint32 _GPID2133 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0133 : 1;
    uint32 _BCP1133 : 1;
    uint32 _BCP2133 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD133Bits_t;

typedef struct
{
    uint32 _PEID0135 : 1;
    uint32 _PEID1135 : 1;
    uint32 _PEID2135 : 1;
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
    uint32 _GPID0135 : 1;
    uint32 _GPID1135 : 1;
    uint32 _GPID2135 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0135 : 1;
    uint32 _BCP1135 : 1;
    uint32 _BCP2135 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD135Bits_t;

typedef struct
{
    uint32 _PEID0136 : 1;
    uint32 _PEID1136 : 1;
    uint32 _PEID2136 : 1;
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
    uint32 _GPID0136 : 1;
    uint32 _GPID1136 : 1;
    uint32 _GPID2136 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0136 : 1;
    uint32 _BCP1136 : 1;
    uint32 _BCP2136 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD136Bits_t;

typedef struct
{
    uint32 _PEID0141 : 1;
    uint32 _PEID1141 : 1;
    uint32 _PEID2141 : 1;
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
    uint32 _GPID0141 : 1;
    uint32 _GPID1141 : 1;
    uint32 _GPID2141 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0141 : 1;
    uint32 _BCP1141 : 1;
    uint32 _BCP2141 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD141Bits_t;

typedef struct
{
    uint32 _PEID0142 : 1;
    uint32 _PEID1142 : 1;
    uint32 _PEID2142 : 1;
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
    uint32 _GPID0142 : 1;
    uint32 _GPID1142 : 1;
    uint32 _GPID2142 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0142 : 1;
    uint32 _BCP1142 : 1;
    uint32 _BCP2142 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD142Bits_t;

typedef struct
{
    uint32 _PEID0143 : 1;
    uint32 _PEID1143 : 1;
    uint32 _PEID2143 : 1;
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
    uint32 _GPID0143 : 1;
    uint32 _GPID1143 : 1;
    uint32 _GPID2143 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0143 : 1;
    uint32 _BCP1143 : 1;
    uint32 _BCP2143 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD143Bits_t;

typedef struct
{
    uint32 _PEID0144 : 1;
    uint32 _PEID1144 : 1;
    uint32 _PEID2144 : 1;
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
    uint32 _GPID0144 : 1;
    uint32 _GPID1144 : 1;
    uint32 _GPID2144 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0144 : 1;
    uint32 _BCP1144 : 1;
    uint32 _BCP2144 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD144Bits_t;

typedef struct
{
    uint32 _PEID0145 : 1;
    uint32 _PEID1145 : 1;
    uint32 _PEID2145 : 1;
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
    uint32 _GPID0145 : 1;
    uint32 _GPID1145 : 1;
    uint32 _GPID2145 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0145 : 1;
    uint32 _BCP1145 : 1;
    uint32 _BCP2145 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD145Bits_t;

typedef struct
{
    uint32 _PEID0146 : 1;
    uint32 _PEID1146 : 1;
    uint32 _PEID2146 : 1;
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
    uint32 _GPID0146 : 1;
    uint32 _GPID1146 : 1;
    uint32 _GPID2146 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0146 : 1;
    uint32 _BCP1146 : 1;
    uint32 _BCP2146 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD146Bits_t;

typedef struct
{
    uint32 _PEID0147 : 1;
    uint32 _PEID1147 : 1;
    uint32 _PEID2147 : 1;
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
    uint32 _GPID0147 : 1;
    uint32 _GPID1147 : 1;
    uint32 _GPID2147 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0147 : 1;
    uint32 _BCP1147 : 1;
    uint32 _BCP2147 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD147Bits_t;

typedef struct
{
    uint32 _PEID0148 : 1;
    uint32 _PEID1148 : 1;
    uint32 _PEID2148 : 1;
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
    uint32 _GPID0148 : 1;
    uint32 _GPID1148 : 1;
    uint32 _GPID2148 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0148 : 1;
    uint32 _BCP1148 : 1;
    uint32 _BCP2148 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD148Bits_t;

typedef struct
{
    uint32 _PEID0149 : 1;
    uint32 _PEID1149 : 1;
    uint32 _PEID2149 : 1;
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
    uint32 _GPID0149 : 1;
    uint32 _GPID1149 : 1;
    uint32 _GPID2149 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0149 : 1;
    uint32 _BCP1149 : 1;
    uint32 _BCP2149 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD149Bits_t;

typedef struct
{
    uint32 _PEID0150 : 1;
    uint32 _PEID1150 : 1;
    uint32 _PEID2150 : 1;
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
    uint32 _GPID0150 : 1;
    uint32 _GPID1150 : 1;
    uint32 _GPID2150 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0150 : 1;
    uint32 _BCP1150 : 1;
    uint32 _BCP2150 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD150Bits_t;

typedef struct
{
    uint32 _PEID0151 : 1;
    uint32 _PEID1151 : 1;
    uint32 _PEID2151 : 1;
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
    uint32 _GPID0151 : 1;
    uint32 _GPID1151 : 1;
    uint32 _GPID2151 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0151 : 1;
    uint32 _BCP1151 : 1;
    uint32 _BCP2151 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD151Bits_t;

typedef struct
{
    uint32 _PEID0152 : 1;
    uint32 _PEID1152 : 1;
    uint32 _PEID2152 : 1;
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
    uint32 _GPID0152 : 1;
    uint32 _GPID1152 : 1;
    uint32 _GPID2152 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0152 : 1;
    uint32 _BCP1152 : 1;
    uint32 _BCP2152 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD152Bits_t;

typedef struct
{
    uint32 _PEID0156 : 1;
    uint32 _PEID1156 : 1;
    uint32 _PEID2156 : 1;
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
    uint32 _GPID0156 : 1;
    uint32 _GPID1156 : 1;
    uint32 _GPID2156 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0156 : 1;
    uint32 _BCP1156 : 1;
    uint32 _BCP2156 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD156Bits_t;

typedef struct
{
    uint32 _PEID0157 : 1;
    uint32 _PEID1157 : 1;
    uint32 _PEID2157 : 1;
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
    uint32 _GPID0157 : 1;
    uint32 _GPID1157 : 1;
    uint32 _GPID2157 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0157 : 1;
    uint32 _BCP1157 : 1;
    uint32 _BCP2157 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD157Bits_t;

typedef struct
{
    uint32 _PEID0158 : 1;
    uint32 _PEID1158 : 1;
    uint32 _PEID2158 : 1;
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
    uint32 _GPID0158 : 1;
    uint32 _GPID1158 : 1;
    uint32 _GPID2158 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0158 : 1;
    uint32 _BCP1158 : 1;
    uint32 _BCP2158 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD158Bits_t;

typedef struct
{
    uint32 _PEID0159 : 1;
    uint32 _PEID1159 : 1;
    uint32 _PEID2159 : 1;
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
    uint32 _GPID0159 : 1;
    uint32 _GPID1159 : 1;
    uint32 _GPID2159 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0159 : 1;
    uint32 _BCP1159 : 1;
    uint32 _BCP2159 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD159Bits_t;

typedef struct
{
    uint32 _PEID0160 : 1;
    uint32 _PEID1160 : 1;
    uint32 _PEID2160 : 1;
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
    uint32 _GPID0160 : 1;
    uint32 _GPID1160 : 1;
    uint32 _GPID2160 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0160 : 1;
    uint32 _BCP1160 : 1;
    uint32 _BCP2160 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD160Bits_t;

typedef struct
{
    uint32 _PEID0161 : 1;
    uint32 _PEID1161 : 1;
    uint32 _PEID2161 : 1;
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
    uint32 _GPID0161 : 1;
    uint32 _GPID1161 : 1;
    uint32 _GPID2161 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0161 : 1;
    uint32 _BCP1161 : 1;
    uint32 _BCP2161 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD161Bits_t;

typedef struct
{
    uint32 _PEID0166 : 1;
    uint32 _PEID1166 : 1;
    uint32 _PEID2166 : 1;
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
    uint32 _GPID0166 : 1;
    uint32 _GPID1166 : 1;
    uint32 _GPID2166 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0166 : 1;
    uint32 _BCP1166 : 1;
    uint32 _BCP2166 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD166Bits_t;

typedef struct
{
    uint32 _PEID0167 : 1;
    uint32 _PEID1167 : 1;
    uint32 _PEID2167 : 1;
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
    uint32 _GPID0167 : 1;
    uint32 _GPID1167 : 1;
    uint32 _GPID2167 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0167 : 1;
    uint32 _BCP1167 : 1;
    uint32 _BCP2167 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD167Bits_t;

typedef struct
{
    uint32 _PEID0168 : 1;
    uint32 _PEID1168 : 1;
    uint32 _PEID2168 : 1;
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
    uint32 _GPID0168 : 1;
    uint32 _GPID1168 : 1;
    uint32 _GPID2168 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0168 : 1;
    uint32 _BCP1168 : 1;
    uint32 _BCP2168 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD168Bits_t;

typedef struct
{
    uint32 _PEID0169 : 1;
    uint32 _PEID1169 : 1;
    uint32 _PEID2169 : 1;
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
    uint32 _GPID0169 : 1;
    uint32 _GPID1169 : 1;
    uint32 _GPID2169 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0169 : 1;
    uint32 _BCP1169 : 1;
    uint32 _BCP2169 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD169Bits_t;

typedef struct
{
    uint32 _PEID0170 : 1;
    uint32 _PEID1170 : 1;
    uint32 _PEID2170 : 1;
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
    uint32 _GPID0170 : 1;
    uint32 _GPID1170 : 1;
    uint32 _GPID2170 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0170 : 1;
    uint32 _BCP1170 : 1;
    uint32 _BCP2170 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD170Bits_t;

typedef struct
{
    uint32 _PEID0171 : 1;
    uint32 _PEID1171 : 1;
    uint32 _PEID2171 : 1;
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
    uint32 _GPID0171 : 1;
    uint32 _GPID1171 : 1;
    uint32 _GPID2171 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0171 : 1;
    uint32 _BCP1171 : 1;
    uint32 _BCP2171 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD171Bits_t;

typedef struct
{
    uint32 _PEID0172 : 1;
    uint32 _PEID1172 : 1;
    uint32 _PEID2172 : 1;
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
    uint32 _GPID0172 : 1;
    uint32 _GPID1172 : 1;
    uint32 _GPID2172 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0172 : 1;
    uint32 _BCP1172 : 1;
    uint32 _BCP2172 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD172Bits_t;

typedef struct
{
    uint32 _PEID0173 : 1;
    uint32 _PEID1173 : 1;
    uint32 _PEID2173 : 1;
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
    uint32 _GPID0173 : 1;
    uint32 _GPID1173 : 1;
    uint32 _GPID2173 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0173 : 1;
    uint32 _BCP1173 : 1;
    uint32 _BCP2173 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD173Bits_t;

typedef struct
{
    uint32 _PEID0174 : 1;
    uint32 _PEID1174 : 1;
    uint32 _PEID2174 : 1;
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
    uint32 _GPID0174 : 1;
    uint32 _GPID1174 : 1;
    uint32 _GPID2174 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0174 : 1;
    uint32 _BCP1174 : 1;
    uint32 _BCP2174 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD174Bits_t;

typedef struct
{
    uint32 _PEID0175 : 1;
    uint32 _PEID1175 : 1;
    uint32 _PEID2175 : 1;
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
    uint32 _GPID0175 : 1;
    uint32 _GPID1175 : 1;
    uint32 _GPID2175 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0175 : 1;
    uint32 _BCP1175 : 1;
    uint32 _BCP2175 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD175Bits_t;

typedef struct
{
    uint32 _PEID0176 : 1;
    uint32 _PEID1176 : 1;
    uint32 _PEID2176 : 1;
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
    uint32 _GPID0176 : 1;
    uint32 _GPID1176 : 1;
    uint32 _GPID2176 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0176 : 1;
    uint32 _BCP1176 : 1;
    uint32 _BCP2176 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD176Bits_t;

typedef struct
{
    uint32 _PEID0177 : 1;
    uint32 _PEID1177 : 1;
    uint32 _PEID2177 : 1;
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
    uint32 _GPID0177 : 1;
    uint32 _GPID1177 : 1;
    uint32 _GPID2177 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0177 : 1;
    uint32 _BCP1177 : 1;
    uint32 _BCP2177 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD177Bits_t;

typedef struct
{
    uint32 _PEID0178 : 1;
    uint32 _PEID1178 : 1;
    uint32 _PEID2178 : 1;
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
    uint32 _GPID0178 : 1;
    uint32 _GPID1178 : 1;
    uint32 _GPID2178 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0178 : 1;
    uint32 _BCP1178 : 1;
    uint32 _BCP2178 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD178Bits_t;

typedef struct
{
    uint32 _PEID0179 : 1;
    uint32 _PEID1179 : 1;
    uint32 _PEID2179 : 1;
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
    uint32 _GPID0179 : 1;
    uint32 _GPID1179 : 1;
    uint32 _GPID2179 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0179 : 1;
    uint32 _BCP1179 : 1;
    uint32 _BCP2179 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD179Bits_t;

typedef struct
{
    uint32 _PEID0180 : 1;
    uint32 _PEID1180 : 1;
    uint32 _PEID2180 : 1;
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
    uint32 _GPID0180 : 1;
    uint32 _GPID1180 : 1;
    uint32 _GPID2180 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0180 : 1;
    uint32 _BCP1180 : 1;
    uint32 _BCP2180 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD180Bits_t;

typedef struct
{
    uint32 _PEID0184 : 1;
    uint32 _PEID1184 : 1;
    uint32 _PEID2184 : 1;
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
    uint32 _GPID0184 : 1;
    uint32 _GPID1184 : 1;
    uint32 _GPID2184 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0184 : 1;
    uint32 _BCP1184 : 1;
    uint32 _BCP2184 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD184Bits_t;

typedef struct
{
    uint32 _PEID0186 : 1;
    uint32 _PEID1186 : 1;
    uint32 _PEID2186 : 1;
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
    uint32 _GPID0186 : 1;
    uint32 _GPID1186 : 1;
    uint32 _GPID2186 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0186 : 1;
    uint32 _BCP1186 : 1;
    uint32 _BCP2186 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD186Bits_t;

typedef struct
{
    uint32 _PEID0187 : 1;
    uint32 _PEID1187 : 1;
    uint32 _PEID2187 : 1;
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
    uint32 _GPID0187 : 1;
    uint32 _GPID1187 : 1;
    uint32 _GPID2187 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0187 : 1;
    uint32 _BCP1187 : 1;
    uint32 _BCP2187 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD187Bits_t;

typedef struct
{
    uint32 _PEID0188 : 1;
    uint32 _PEID1188 : 1;
    uint32 _PEID2188 : 1;
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
    uint32 _GPID0188 : 1;
    uint32 _GPID1188 : 1;
    uint32 _GPID2188 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0188 : 1;
    uint32 _BCP1188 : 1;
    uint32 _BCP2188 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD188Bits_t;

typedef struct
{
    uint32 _PEID0189 : 1;
    uint32 _PEID1189 : 1;
    uint32 _PEID2189 : 1;
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
    uint32 _GPID0189 : 1;
    uint32 _GPID1189 : 1;
    uint32 _GPID2189 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0189 : 1;
    uint32 _BCP1189 : 1;
    uint32 _BCP2189 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD189Bits_t;

typedef struct
{
    uint32 _PEID0190 : 1;
    uint32 _PEID1190 : 1;
    uint32 _PEID2190 : 1;
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
    uint32 _GPID0190 : 1;
    uint32 _GPID1190 : 1;
    uint32 _GPID2190 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0190 : 1;
    uint32 _BCP1190 : 1;
    uint32 _BCP2190 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD190Bits_t;

typedef struct
{
    uint32 _PEID0191 : 1;
    uint32 _PEID1191 : 1;
    uint32 _PEID2191 : 1;
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
    uint32 _GPID0191 : 1;
    uint32 _GPID1191 : 1;
    uint32 _GPID2191 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0191 : 1;
    uint32 _BCP1191 : 1;
    uint32 _BCP2191 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD191Bits_t;

typedef struct
{
    uint32 _PEID0192 : 1;
    uint32 _PEID1192 : 1;
    uint32 _PEID2192 : 1;
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
    uint32 _GPID0192 : 1;
    uint32 _GPID1192 : 1;
    uint32 _GPID2192 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0192 : 1;
    uint32 _BCP1192 : 1;
    uint32 _BCP2192 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD192Bits_t;

typedef struct
{
    uint32 _PEID0193 : 1;
    uint32 _PEID1193 : 1;
    uint32 _PEID2193 : 1;
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
    uint32 _GPID0193 : 1;
    uint32 _GPID1193 : 1;
    uint32 _GPID2193 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0193 : 1;
    uint32 _BCP1193 : 1;
    uint32 _BCP2193 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD193Bits_t;

typedef struct
{
    uint32 _PEID0194 : 1;
    uint32 _PEID1194 : 1;
    uint32 _PEID2194 : 1;
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
    uint32 _GPID0194 : 1;
    uint32 _GPID1194 : 1;
    uint32 _GPID2194 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0194 : 1;
    uint32 _BCP1194 : 1;
    uint32 _BCP2194 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD194Bits_t;

typedef struct
{
    uint32 _PEID0195 : 1;
    uint32 _PEID1195 : 1;
    uint32 _PEID2195 : 1;
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
    uint32 _GPID0195 : 1;
    uint32 _GPID1195 : 1;
    uint32 _GPID2195 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0195 : 1;
    uint32 _BCP1195 : 1;
    uint32 _BCP2195 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD195Bits_t;

typedef struct
{
    uint32 _PEID0196 : 1;
    uint32 _PEID1196 : 1;
    uint32 _PEID2196 : 1;
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
    uint32 _GPID0196 : 1;
    uint32 _GPID1196 : 1;
    uint32 _GPID2196 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0196 : 1;
    uint32 _BCP1196 : 1;
    uint32 _BCP2196 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD196Bits_t;

typedef struct
{
    uint32 _PEID0208 : 1;
    uint32 _PEID1208 : 1;
    uint32 _PEID2208 : 1;
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
    uint32 _GPID0208 : 1;
    uint32 _GPID1208 : 1;
    uint32 _GPID2208 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0208 : 1;
    uint32 _BCP1208 : 1;
    uint32 _BCP2208 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD208Bits_t;

typedef struct
{
    uint32 _PEID0209 : 1;
    uint32 _PEID1209 : 1;
    uint32 _PEID2209 : 1;
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
    uint32 _GPID0209 : 1;
    uint32 _GPID1209 : 1;
    uint32 _GPID2209 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0209 : 1;
    uint32 _BCP1209 : 1;
    uint32 _BCP2209 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD209Bits_t;

typedef struct
{
    uint32 _PEID0210 : 1;
    uint32 _PEID1210 : 1;
    uint32 _PEID2210 : 1;
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
    uint32 _GPID0210 : 1;
    uint32 _GPID1210 : 1;
    uint32 _GPID2210 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0210 : 1;
    uint32 _BCP1210 : 1;
    uint32 _BCP2210 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD210Bits_t;

typedef struct
{
    uint32 _PEID0211 : 1;
    uint32 _PEID1211 : 1;
    uint32 _PEID2211 : 1;
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
    uint32 _GPID0211 : 1;
    uint32 _GPID1211 : 1;
    uint32 _GPID2211 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0211 : 1;
    uint32 _BCP1211 : 1;
    uint32 _BCP2211 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD211Bits_t;

typedef struct
{
    uint32 _PEID0212 : 1;
    uint32 _PEID1212 : 1;
    uint32 _PEID2212 : 1;
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
    uint32 _GPID0212 : 1;
    uint32 _GPID1212 : 1;
    uint32 _GPID2212 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0212 : 1;
    uint32 _BCP1212 : 1;
    uint32 _BCP2212 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD212Bits_t;

typedef struct
{
    uint32 _PEID0213 : 1;
    uint32 _PEID1213 : 1;
    uint32 _PEID2213 : 1;
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
    uint32 _GPID0213 : 1;
    uint32 _GPID1213 : 1;
    uint32 _GPID2213 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0213 : 1;
    uint32 _BCP1213 : 1;
    uint32 _BCP2213 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD213Bits_t;

typedef struct
{
    uint32 _PEID0214 : 1;
    uint32 _PEID1214 : 1;
    uint32 _PEID2214 : 1;
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
    uint32 _GPID0214 : 1;
    uint32 _GPID1214 : 1;
    uint32 _GPID2214 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0214 : 1;
    uint32 _BCP1214 : 1;
    uint32 _BCP2214 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD214Bits_t;

typedef struct
{
    uint32 _PEID0215 : 1;
    uint32 _PEID1215 : 1;
    uint32 _PEID2215 : 1;
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
    uint32 _GPID0215 : 1;
    uint32 _GPID1215 : 1;
    uint32 _GPID2215 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0215 : 1;
    uint32 _BCP1215 : 1;
    uint32 _BCP2215 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD215Bits_t;

typedef struct
{
    uint32 _PEID0216 : 1;
    uint32 _PEID1216 : 1;
    uint32 _PEID2216 : 1;
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
    uint32 _GPID0216 : 1;
    uint32 _GPID1216 : 1;
    uint32 _GPID2216 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0216 : 1;
    uint32 _BCP1216 : 1;
    uint32 _BCP2216 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD216Bits_t;

typedef struct
{
    uint32 _PEID0217 : 1;
    uint32 _PEID1217 : 1;
    uint32 _PEID2217 : 1;
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
    uint32 _GPID0217 : 1;
    uint32 _GPID1217 : 1;
    uint32 _GPID2217 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0217 : 1;
    uint32 _BCP1217 : 1;
    uint32 _BCP2217 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD217Bits_t;

typedef struct
{
    uint32 _PEID0218 : 1;
    uint32 _PEID1218 : 1;
    uint32 _PEID2218 : 1;
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
    uint32 _GPID0218 : 1;
    uint32 _GPID1218 : 1;
    uint32 _GPID2218 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0218 : 1;
    uint32 _BCP1218 : 1;
    uint32 _BCP2218 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD218Bits_t;

typedef struct
{
    uint32 _PEID0219 : 1;
    uint32 _PEID1219 : 1;
    uint32 _PEID2219 : 1;
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
    uint32 _GPID0219 : 1;
    uint32 _GPID1219 : 1;
    uint32 _GPID2219 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0219 : 1;
    uint32 _BCP1219 : 1;
    uint32 _BCP2219 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD219Bits_t;

typedef struct
{
    uint32 _PEID0228 : 1;
    uint32 _PEID1228 : 1;
    uint32 _PEID2228 : 1;
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
    uint32 _GPID0228 : 1;
    uint32 _GPID1228 : 1;
    uint32 _GPID2228 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0228 : 1;
    uint32 _BCP1228 : 1;
    uint32 _BCP2228 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD228Bits_t;

typedef struct
{
    uint32 _PEID0229 : 1;
    uint32 _PEID1229 : 1;
    uint32 _PEID2229 : 1;
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
    uint32 _GPID0229 : 1;
    uint32 _GPID1229 : 1;
    uint32 _GPID2229 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0229 : 1;
    uint32 _BCP1229 : 1;
    uint32 _BCP2229 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD229Bits_t;

typedef struct
{
    uint32 _PEID0230 : 1;
    uint32 _PEID1230 : 1;
    uint32 _PEID2230 : 1;
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
    uint32 _GPID0230 : 1;
    uint32 _GPID1230 : 1;
    uint32 _GPID2230 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0230 : 1;
    uint32 _BCP1230 : 1;
    uint32 _BCP2230 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD230Bits_t;

typedef struct
{
    uint32 _PEID0231 : 1;
    uint32 _PEID1231 : 1;
    uint32 _PEID2231 : 1;
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
    uint32 _GPID0231 : 1;
    uint32 _GPID1231 : 1;
    uint32 _GPID2231 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0231 : 1;
    uint32 _BCP1231 : 1;
    uint32 _BCP2231 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD231Bits_t;

typedef struct
{
    uint32 _PEID0232 : 1;
    uint32 _PEID1232 : 1;
    uint32 _PEID2232 : 1;
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
    uint32 _GPID0232 : 1;
    uint32 _GPID1232 : 1;
    uint32 _GPID2232 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0232 : 1;
    uint32 _BCP1232 : 1;
    uint32 _BCP2232 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD232Bits_t;

typedef struct
{
    uint32 _PEID0233 : 1;
    uint32 _PEID1233 : 1;
    uint32 _PEID2233 : 1;
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
    uint32 _GPID0233 : 1;
    uint32 _GPID1233 : 1;
    uint32 _GPID2233 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0233 : 1;
    uint32 _BCP1233 : 1;
    uint32 _BCP2233 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD233Bits_t;

typedef struct
{
    uint32 _PEID0234 : 1;
    uint32 _PEID1234 : 1;
    uint32 _PEID2234 : 1;
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
    uint32 _GPID0234 : 1;
    uint32 _GPID1234 : 1;
    uint32 _GPID2234 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0234 : 1;
    uint32 _BCP1234 : 1;
    uint32 _BCP2234 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD234Bits_t;

typedef struct
{
    uint32 _PEID0235 : 1;
    uint32 _PEID1235 : 1;
    uint32 _PEID2235 : 1;
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
    uint32 _GPID0235 : 1;
    uint32 _GPID1235 : 1;
    uint32 _GPID2235 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0235 : 1;
    uint32 _BCP1235 : 1;
    uint32 _BCP2235 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD235Bits_t;

typedef struct
{
    uint32 _PEID0236 : 1;
    uint32 _PEID1236 : 1;
    uint32 _PEID2236 : 1;
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
    uint32 _GPID0236 : 1;
    uint32 _GPID1236 : 1;
    uint32 _GPID2236 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0236 : 1;
    uint32 _BCP1236 : 1;
    uint32 _BCP2236 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD236Bits_t;

typedef struct
{
    uint32 _PEID0237 : 1;
    uint32 _PEID1237 : 1;
    uint32 _PEID2237 : 1;
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
    uint32 _GPID0237 : 1;
    uint32 _GPID1237 : 1;
    uint32 _GPID2237 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0237 : 1;
    uint32 _BCP1237 : 1;
    uint32 _BCP2237 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD237Bits_t;

typedef struct
{
    uint32 _PEID0238 : 1;
    uint32 _PEID1238 : 1;
    uint32 _PEID2238 : 1;
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
    uint32 _GPID0238 : 1;
    uint32 _GPID1238 : 1;
    uint32 _GPID2238 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0238 : 1;
    uint32 _BCP1238 : 1;
    uint32 _BCP2238 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD238Bits_t;

typedef struct
{
    uint32 _PEID0239 : 1;
    uint32 _PEID1239 : 1;
    uint32 _PEID2239 : 1;
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
    uint32 _GPID0239 : 1;
    uint32 _GPID1239 : 1;
    uint32 _GPID2239 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0239 : 1;
    uint32 _BCP1239 : 1;
    uint32 _BCP2239 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD239Bits_t;

typedef struct
{
    uint32 _PEID0240 : 1;
    uint32 _PEID1240 : 1;
    uint32 _PEID2240 : 1;
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
    uint32 _GPID0240 : 1;
    uint32 _GPID1240 : 1;
    uint32 _GPID2240 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0240 : 1;
    uint32 _BCP1240 : 1;
    uint32 _BCP2240 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD240Bits_t;

typedef struct
{
    uint32 _PEID0241 : 1;
    uint32 _PEID1241 : 1;
    uint32 _PEID2241 : 1;
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
    uint32 _GPID0241 : 1;
    uint32 _GPID1241 : 1;
    uint32 _GPID2241 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0241 : 1;
    uint32 _BCP1241 : 1;
    uint32 _BCP2241 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD241Bits_t;

typedef struct
{
    uint32 _PEID0242 : 1;
    uint32 _PEID1242 : 1;
    uint32 _PEID2242 : 1;
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
    uint32 _GPID0242 : 1;
    uint32 _GPID1242 : 1;
    uint32 _GPID2242 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0242 : 1;
    uint32 _BCP1242 : 1;
    uint32 _BCP2242 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD242Bits_t;

typedef struct
{
    uint32 _PEID0243 : 1;
    uint32 _PEID1243 : 1;
    uint32 _PEID2243 : 1;
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
    uint32 _GPID0243 : 1;
    uint32 _GPID1243 : 1;
    uint32 _GPID2243 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0243 : 1;
    uint32 _BCP1243 : 1;
    uint32 _BCP2243 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD243Bits_t;

typedef struct
{
    uint32 _PEID0244 : 1;
    uint32 _PEID1244 : 1;
    uint32 _PEID2244 : 1;
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
    uint32 _GPID0244 : 1;
    uint32 _GPID1244 : 1;
    uint32 _GPID2244 : 1;
    uint32 padding19 : 1;
    uint32 padding20 : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    uint32 _BCP0244 : 1;
    uint32 _BCP1244 : 1;
    uint32 _BCP2244 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 _CST : 1;
} EIBD244Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const FEINTF0Bits_t BIT;
} FEINTF0_t;

typedef union
{
    uint32 UINT32;
    FEINTFMSK0Bits_t BIT;
} FEINTFMSK0_t;

typedef union
{
    uint32 UINT32;
    FEINTFC0Bits_t BIT;
} FEINTFC0_t;

typedef union
{
    uint16 UINT16;
    EIC0Bits_t BIT;
} EIC0_t;

typedef union
{
    uint16 UINT16;
    EIC3Bits_t BIT;
} EIC3_t;

typedef union
{
    uint16 UINT16;
    EIC4Bits_t BIT;
} EIC4_t;

typedef union
{
    uint16 UINT16;
    EIC5Bits_t BIT;
} EIC5_t;

typedef union
{
    uint16 UINT16;
    EIC6Bits_t BIT;
} EIC6_t;

typedef union
{
    uint16 UINT16;
    EIC7Bits_t BIT;
} EIC7_t;

typedef union
{
    uint16 UINT16;
    EIC8Bits_t BIT;
} EIC8_t;

typedef union
{
    uint16 UINT16;
    EIC9Bits_t BIT;
} EIC9_t;

typedef union
{
    uint16 UINT16;
    EIC10Bits_t BIT;
} EIC10_t;

typedef union
{
    uint16 UINT16;
    EIC11Bits_t BIT;
} EIC11_t;

typedef union
{
    uint16 UINT16;
    EIC12Bits_t BIT;
} EIC12_t;

typedef union
{
    uint16 UINT16;
    EIC13Bits_t BIT;
} EIC13_t;

typedef union
{
    uint16 UINT16;
    EIC14Bits_t BIT;
} EIC14_t;

typedef union
{
    uint16 UINT16;
    EIC15Bits_t BIT;
} EIC15_t;

typedef union
{
    uint16 UINT16;
    EIC16Bits_t BIT;
} EIC16_t;

typedef union
{
    uint16 UINT16;
    EIC17Bits_t BIT;
} EIC17_t;

typedef union
{
    uint16 UINT16;
    EIC18Bits_t BIT;
} EIC18_t;

typedef union
{
    uint16 UINT16;
    EIC19Bits_t BIT;
} EIC19_t;

typedef union
{
    uint16 UINT16;
    EIC20Bits_t BIT;
} EIC20_t;

typedef union
{
    uint16 UINT16;
    EIC21Bits_t BIT;
} EIC21_t;

typedef union
{
    uint16 UINT16;
    EIC22Bits_t BIT;
} EIC22_t;

typedef union
{
    uint16 UINT16;
    EIC23Bits_t BIT;
} EIC23_t;

typedef union
{
    uint16 UINT16;
    EIC24Bits_t BIT;
} EIC24_t;

typedef union
{
    uint16 UINT16;
    EIC25Bits_t BIT;
} EIC25_t;

typedef union
{
    uint16 UINT16;
    EIC26Bits_t BIT;
} EIC26_t;

typedef union
{
    uint16 UINT16;
    EIC27Bits_t BIT;
} EIC27_t;

typedef union
{
    uint16 UINT16;
    EIC28Bits_t BIT;
} EIC28_t;

typedef union
{
    uint16 UINT16;
    EIC29Bits_t BIT;
} EIC29_t;

typedef union
{
    uint16 UINT16;
    EIC30Bits_t BIT;
} EIC30_t;

typedef union
{
    uint16 UINT16;
    EIC31Bits_t BIT;
} EIC31_t;

typedef union
{
    uint16 UINT16;
    const INTCFNCBits_t BIT;
} INTCFNC_t;

typedef union
{
    uint16 UINT16;
    const FICBits_t BIT;
} FIC_t;

typedef union
{
    uint32 UINT32;
    IMR0Bits_t BIT;
} IMR0_t;

typedef union
{
    uint32 UINT32;
    EIBD0Bits_t BIT;
} EIBD0_t;

typedef union
{
    uint32 UINT32;
    EIBD3Bits_t BIT;
} EIBD3_t;

typedef union
{
    uint32 UINT32;
    EIBD4Bits_t BIT;
} EIBD4_t;

typedef union
{
    uint32 UINT32;
    EIBD5Bits_t BIT;
} EIBD5_t;

typedef union
{
    uint32 UINT32;
    EIBD6Bits_t BIT;
} EIBD6_t;

typedef union
{
    uint32 UINT32;
    EIBD7Bits_t BIT;
} EIBD7_t;

typedef union
{
    uint32 UINT32;
    EIBD8Bits_t BIT;
} EIBD8_t;

typedef union
{
    uint32 UINT32;
    EIBD9Bits_t BIT;
} EIBD9_t;

typedef union
{
    uint32 UINT32;
    EIBD10Bits_t BIT;
} EIBD10_t;

typedef union
{
    uint32 UINT32;
    EIBD11Bits_t BIT;
} EIBD11_t;

typedef union
{
    uint32 UINT32;
    EIBD12Bits_t BIT;
} EIBD12_t;

typedef union
{
    uint32 UINT32;
    EIBD13Bits_t BIT;
} EIBD13_t;

typedef union
{
    uint32 UINT32;
    EIBD14Bits_t BIT;
} EIBD14_t;

typedef union
{
    uint32 UINT32;
    EIBD15Bits_t BIT;
} EIBD15_t;

typedef union
{
    uint32 UINT32;
    EIBD16Bits_t BIT;
} EIBD16_t;

typedef union
{
    uint32 UINT32;
    EIBD17Bits_t BIT;
} EIBD17_t;

typedef union
{
    uint32 UINT32;
    EIBD18Bits_t BIT;
} EIBD18_t;

typedef union
{
    uint32 UINT32;
    EIBD19Bits_t BIT;
} EIBD19_t;

typedef union
{
    uint32 UINT32;
    EIBD20Bits_t BIT;
} EIBD20_t;

typedef union
{
    uint32 UINT32;
    EIBD21Bits_t BIT;
} EIBD21_t;

typedef union
{
    uint32 UINT32;
    EIBD22Bits_t BIT;
} EIBD22_t;

typedef union
{
    uint32 UINT32;
    EIBD23Bits_t BIT;
} EIBD23_t;

typedef union
{
    uint32 UINT32;
    EIBD24Bits_t BIT;
} EIBD24_t;

typedef union
{
    uint32 UINT32;
    EIBD25Bits_t BIT;
} EIBD25_t;

typedef union
{
    uint32 UINT32;
    EIBD26Bits_t BIT;
} EIBD26_t;

typedef union
{
    uint32 UINT32;
    EIBD27Bits_t BIT;
} EIBD27_t;

typedef union
{
    uint32 UINT32;
    EIBD28Bits_t BIT;
} EIBD28_t;

typedef union
{
    uint32 UINT32;
    EIBD29Bits_t BIT;
} EIBD29_t;

typedef union
{
    uint32 UINT32;
    EIBD30Bits_t BIT;
} EIBD30_t;

typedef union
{
    uint32 UINT32;
    EIBD31Bits_t BIT;
} EIBD31_t;

typedef union
{
    uint16 UINT16;
    EIC32Bits_t BIT;
} EIC32_t;

typedef union
{
    uint16 UINT16;
    EIC33Bits_t BIT;
} EIC33_t;

typedef union
{
    uint16 UINT16;
    EIC34Bits_t BIT;
} EIC34_t;

typedef union
{
    uint16 UINT16;
    EIC35Bits_t BIT;
} EIC35_t;

typedef union
{
    uint16 UINT16;
} EIC36_t;

typedef union
{
    uint16 UINT16;
    EIC37Bits_t BIT;
} EIC37_t;

typedef union
{
    uint16 UINT16;
    EIC38Bits_t BIT;
} EIC38_t;

typedef union
{
    uint16 UINT16;
    EIC39Bits_t BIT;
} EIC39_t;

typedef union
{
    uint16 UINT16;
    EIC40Bits_t BIT;
} EIC40_t;

typedef union
{
    uint16 UINT16;
    EIC41Bits_t BIT;
} EIC41_t;

typedef union
{
    uint16 UINT16;
    EIC42Bits_t BIT;
} EIC42_t;

typedef union
{
    uint16 UINT16;
    EIC47Bits_t BIT;
} EIC47_t;

typedef union
{
    uint16 UINT16;
    EIC48Bits_t BIT;
} EIC48_t;

typedef union
{
    uint16 UINT16;
    EIC49Bits_t BIT;
} EIC49_t;

typedef union
{
    uint16 UINT16;
    EIC50Bits_t BIT;
} EIC50_t;

typedef union
{
    uint16 UINT16;
    EIC51Bits_t BIT;
} EIC51_t;

typedef union
{
    uint16 UINT16;
    EIC52Bits_t BIT;
} EIC52_t;

typedef union
{
    uint16 UINT16;
    EIC53Bits_t BIT;
} EIC53_t;

typedef union
{
    uint16 UINT16;
    EIC54Bits_t BIT;
} EIC54_t;

typedef union
{
    uint16 UINT16;
    EIC55Bits_t BIT;
} EIC55_t;

typedef union
{
    uint16 UINT16;
    EIC56Bits_t BIT;
} EIC56_t;

typedef union
{
    uint16 UINT16;
    EIC57Bits_t BIT;
} EIC57_t;

typedef union
{
    uint16 UINT16;
    EIC58Bits_t BIT;
} EIC58_t;

typedef union
{
    uint16 UINT16;
    EIC59Bits_t BIT;
} EIC59_t;

typedef union
{
    uint16 UINT16;
    EIC60Bits_t BIT;
} EIC60_t;

typedef union
{
    uint16 UINT16;
    EIC61Bits_t BIT;
} EIC61_t;

typedef union
{
    uint16 UINT16;
    EIC62Bits_t BIT;
} EIC62_t;

typedef union
{
    uint16 UINT16;
    EIC63Bits_t BIT;
} EIC63_t;

typedef union
{
    uint16 UINT16;
    EIC64Bits_t BIT;
} EIC64_t;

typedef union
{
    uint16 UINT16;
    EIC65Bits_t BIT;
} EIC65_t;

typedef union
{
    uint16 UINT16;
    EIC69Bits_t BIT;
} EIC69_t;

typedef union
{
    uint16 UINT16;
    EIC70Bits_t BIT;
} EIC70_t;

typedef union
{
    uint16 UINT16;
    EIC71Bits_t BIT;
} EIC71_t;

typedef union
{
    uint16 UINT16;
    EIC72Bits_t BIT;
} EIC72_t;

typedef union
{
    uint16 UINT16;
    EIC73Bits_t BIT;
} EIC73_t;

typedef union
{
    uint16 UINT16;
    EIC74Bits_t BIT;
} EIC74_t;

typedef union
{
    uint16 UINT16;
    EIC80Bits_t BIT;
} EIC80_t;

typedef union
{
    uint16 UINT16;
    EIC81Bits_t BIT;
} EIC81_t;

typedef union
{
    uint16 UINT16;
    EIC82Bits_t BIT;
} EIC82_t;

typedef union
{
    uint16 UINT16;
    EIC83Bits_t BIT;
} EIC83_t;

typedef union
{
    uint16 UINT16;
    EIC84Bits_t BIT;
} EIC84_t;

typedef union
{
    uint16 UINT16;
    EIC85Bits_t BIT;
} EIC85_t;

typedef union
{
    uint16 UINT16;
    EIC86Bits_t BIT;
} EIC86_t;

typedef union
{
    uint16 UINT16;
    EIC87Bits_t BIT;
} EIC87_t;

typedef union
{
    uint16 UINT16;
    EIC88Bits_t BIT;
} EIC88_t;

typedef union
{
    uint16 UINT16;
    EIC89Bits_t BIT;
} EIC89_t;

typedef union
{
    uint16 UINT16;
    EIC90Bits_t BIT;
} EIC90_t;

typedef union
{
    uint16 UINT16;
    EIC91Bits_t BIT;
} EIC91_t;

typedef union
{
    uint16 UINT16;
    EIC92Bits_t BIT;
} EIC92_t;

typedef union
{
    uint16 UINT16;
    EIC93Bits_t BIT;
} EIC93_t;

typedef union
{
    uint16 UINT16;
    EIC94Bits_t BIT;
} EIC94_t;

typedef union
{
    uint16 UINT16;
    EIC95Bits_t BIT;
} EIC95_t;

typedef union
{
    uint16 UINT16;
    EIC96Bits_t BIT;
} EIC96_t;

typedef union
{
    uint16 UINT16;
    EIC97Bits_t BIT;
} EIC97_t;

typedef union
{
    uint16 UINT16;
    EIC98Bits_t BIT;
} EIC98_t;

typedef union
{
    uint16 UINT16;
    EIC99Bits_t BIT;
} EIC99_t;

typedef union
{
    uint16 UINT16;
    EIC100Bits_t BIT;
} EIC100_t;

typedef union
{
    uint16 UINT16;
} EIC101_t;

typedef union
{
    uint16 UINT16;
    EIC102Bits_t BIT;
} EIC102_t;

typedef union
{
    uint16 UINT16;
    EIC103Bits_t BIT;
} EIC103_t;

typedef union
{
    uint16 UINT16;
    EIC104Bits_t BIT;
} EIC104_t;

typedef union
{
    uint16 UINT16;
    EIC105Bits_t BIT;
} EIC105_t;

typedef union
{
    uint16 UINT16;
    EIC106Bits_t BIT;
} EIC106_t;

typedef union
{
    uint16 UINT16;
    EIC107Bits_t BIT;
} EIC107_t;

typedef union
{
    uint16 UINT16;
    EIC116Bits_t BIT;
} EIC116_t;

typedef union
{
    uint16 UINT16;
    EIC117Bits_t BIT;
} EIC117_t;

typedef union
{
    uint16 UINT16;
    EIC118Bits_t BIT;
} EIC118_t;

typedef union
{
    uint16 UINT16;
    EIC119Bits_t BIT;
} EIC119_t;

typedef union
{
    uint16 UINT16;
    EIC120Bits_t BIT;
} EIC120_t;

typedef union
{
    uint16 UINT16;
    EIC121Bits_t BIT;
} EIC121_t;

typedef union
{
    uint16 UINT16;
    EIC128Bits_t BIT;
} EIC128_t;

typedef union
{
    uint16 UINT16;
    EIC129Bits_t BIT;
} EIC129_t;

typedef union
{
    uint16 UINT16;
    EIC130Bits_t BIT;
} EIC130_t;

typedef union
{
    uint16 UINT16;
    EIC132Bits_t BIT;
} EIC132_t;

typedef union
{
    uint16 UINT16;
    EIC133Bits_t BIT;
} EIC133_t;

typedef union
{
    uint16 UINT16;
    EIC135Bits_t BIT;
} EIC135_t;

typedef union
{
    uint16 UINT16;
    EIC136Bits_t BIT;
} EIC136_t;

typedef union
{
    uint16 UINT16;
    EIC141Bits_t BIT;
} EIC141_t;

typedef union
{
    uint16 UINT16;
    EIC142Bits_t BIT;
} EIC142_t;

typedef union
{
    uint16 UINT16;
    EIC143Bits_t BIT;
} EIC143_t;

typedef union
{
    uint16 UINT16;
    EIC144Bits_t BIT;
} EIC144_t;

typedef union
{
    uint16 UINT16;
    EIC145Bits_t BIT;
} EIC145_t;

typedef union
{
    uint16 UINT16;
    EIC146Bits_t BIT;
} EIC146_t;

typedef union
{
    uint16 UINT16;
    EIC147Bits_t BIT;
} EIC147_t;

typedef union
{
    uint16 UINT16;
    EIC148Bits_t BIT;
} EIC148_t;

typedef union
{
    uint16 UINT16;
    EIC149Bits_t BIT;
} EIC149_t;

typedef union
{
    uint16 UINT16;
    EIC150Bits_t BIT;
} EIC150_t;

typedef union
{
    uint16 UINT16;
    EIC151Bits_t BIT;
} EIC151_t;

typedef union
{
    uint16 UINT16;
    EIC152Bits_t BIT;
} EIC152_t;

typedef union
{
    uint16 UINT16;
    EIC156Bits_t BIT;
} EIC156_t;

typedef union
{
    uint16 UINT16;
    EIC157Bits_t BIT;
} EIC157_t;

typedef union
{
    uint16 UINT16;
    EIC158Bits_t BIT;
} EIC158_t;

typedef union
{
    uint16 UINT16;
    EIC159Bits_t BIT;
} EIC159_t;

typedef union
{
    uint16 UINT16;
    EIC160Bits_t BIT;
} EIC160_t;

typedef union
{
    uint16 UINT16;
    EIC161Bits_t BIT;
} EIC161_t;

typedef union
{
    uint16 UINT16;
    EIC166Bits_t BIT;
} EIC166_t;

typedef union
{
    uint16 UINT16;
    EIC167Bits_t BIT;
} EIC167_t;

typedef union
{
    uint16 UINT16;
    EIC168Bits_t BIT;
} EIC168_t;

typedef union
{
    uint16 UINT16;
    EIC169Bits_t BIT;
} EIC169_t;

typedef union
{
    uint16 UINT16;
    EIC170Bits_t BIT;
} EIC170_t;

typedef union
{
    uint16 UINT16;
    EIC171Bits_t BIT;
} EIC171_t;

typedef union
{
    uint16 UINT16;
    EIC172Bits_t BIT;
} EIC172_t;

typedef union
{
    uint16 UINT16;
    EIC173Bits_t BIT;
} EIC173_t;

typedef union
{
    uint16 UINT16;
    EIC174Bits_t BIT;
} EIC174_t;

typedef union
{
    uint16 UINT16;
    EIC175Bits_t BIT;
} EIC175_t;

typedef union
{
    uint16 UINT16;
    EIC176Bits_t BIT;
} EIC176_t;

typedef union
{
    uint16 UINT16;
    EIC177Bits_t BIT;
} EIC177_t;

typedef union
{
    uint16 UINT16;
    EIC178Bits_t BIT;
} EIC178_t;

typedef union
{
    uint16 UINT16;
    EIC179Bits_t BIT;
} EIC179_t;

typedef union
{
    uint16 UINT16;
    EIC180Bits_t BIT;
} EIC180_t;

typedef union
{
    uint16 UINT16;
    EIC184Bits_t BIT;
} EIC184_t;

typedef union
{
    uint16 UINT16;
    EIC186Bits_t BIT;
} EIC186_t;

typedef union
{
    uint16 UINT16;
    EIC187Bits_t BIT;
} EIC187_t;

typedef union
{
    uint16 UINT16;
    EIC188Bits_t BIT;
} EIC188_t;

typedef union
{
    uint16 UINT16;
    EIC189Bits_t BIT;
} EIC189_t;

typedef union
{
    uint16 UINT16;
    EIC190Bits_t BIT;
} EIC190_t;

typedef union
{
    uint16 UINT16;
    EIC191Bits_t BIT;
} EIC191_t;

typedef union
{
    uint16 UINT16;
    EIC192Bits_t BIT;
} EIC192_t;

typedef union
{
    uint16 UINT16;
    EIC193Bits_t BIT;
} EIC193_t;

typedef union
{
    uint16 UINT16;
    EIC194Bits_t BIT;
} EIC194_t;

typedef union
{
    uint16 UINT16;
    EIC195Bits_t BIT;
} EIC195_t;

typedef union
{
    uint16 UINT16;
    EIC196Bits_t BIT;
} EIC196_t;

typedef union
{
    uint16 UINT16;
    EIC208Bits_t BIT;
} EIC208_t;

typedef union
{
    uint16 UINT16;
    EIC209Bits_t BIT;
} EIC209_t;

typedef union
{
    uint16 UINT16;
    EIC210Bits_t BIT;
} EIC210_t;

typedef union
{
    uint16 UINT16;
    EIC211Bits_t BIT;
} EIC211_t;

typedef union
{
    uint16 UINT16;
    EIC212Bits_t BIT;
} EIC212_t;

typedef union
{
    uint16 UINT16;
    EIC213Bits_t BIT;
} EIC213_t;

typedef union
{
    uint16 UINT16;
    EIC214Bits_t BIT;
} EIC214_t;

typedef union
{
    uint16 UINT16;
    EIC215Bits_t BIT;
} EIC215_t;

typedef union
{
    uint16 UINT16;
    EIC216Bits_t BIT;
} EIC216_t;

typedef union
{
    uint16 UINT16;
    EIC217Bits_t BIT;
} EIC217_t;

typedef union
{
    uint16 UINT16;
    EIC218Bits_t BIT;
} EIC218_t;

typedef union
{
    uint16 UINT16;
    EIC219Bits_t BIT;
} EIC219_t;

typedef union
{
    uint16 UINT16;
    EIC228Bits_t BIT;
} EIC228_t;

typedef union
{
    uint16 UINT16;
} EIC229_t;

typedef union
{
    uint16 UINT16;
    EIC230Bits_t BIT;
} EIC230_t;

typedef union
{
    uint16 UINT16;
    EIC231Bits_t BIT;
} EIC231_t;

typedef union
{
    uint16 UINT16;
    EIC232Bits_t BIT;
} EIC232_t;

typedef union
{
    uint16 UINT16;
    EIC233Bits_t BIT;
} EIC233_t;

typedef union
{
    uint16 UINT16;
    EIC234Bits_t BIT;
} EIC234_t;

typedef union
{
    uint16 UINT16;
    EIC235Bits_t BIT;
} EIC235_t;

typedef union
{
    uint16 UINT16;
    EIC236Bits_t BIT;
} EIC236_t;

typedef union
{
    uint16 UINT16;
    EIC237Bits_t BIT;
} EIC237_t;

typedef union
{
    uint16 UINT16;
    EIC238Bits_t BIT;
} EIC238_t;

typedef union
{
    uint16 UINT16;
    EIC239Bits_t BIT;
} EIC239_t;

typedef union
{
    uint16 UINT16;
    EIC240Bits_t BIT;
} EIC240_t;

typedef union
{
    uint16 UINT16;
    EIC241Bits_t BIT;
} EIC241_t;

typedef union
{
    uint16 UINT16;
    EIC242Bits_t BIT;
} EIC242_t;

typedef union
{
    uint16 UINT16;
    EIC243Bits_t BIT;
} EIC243_t;

typedef union
{
    uint16 UINT16;
    EIC244Bits_t BIT;
} EIC244_t;

typedef union
{
    uint32 UINT32;
    IMR1Bits_t BIT;
} IMR1_t;

typedef union
{
    uint32 UINT32;
    IMR2Bits_t BIT;
} IMR2_t;

typedef union
{
    uint32 UINT32;
    IMR3Bits_t BIT;
} IMR3_t;

typedef union
{
    uint32 UINT32;
    IMR4Bits_t BIT;
} IMR4_t;

typedef union
{
    uint32 UINT32;
    IMR5Bits_t BIT;
} IMR5_t;

typedef union
{
    uint32 UINT32;
    IMR6Bits_t BIT;
} IMR6_t;

typedef union
{
    uint32 UINT32;
    IMR7Bits_t BIT;
} IMR7_t;

typedef union
{
    uint32 UINT32;
    EIBD32Bits_t BIT;
} EIBD32_t;

typedef union
{
    uint32 UINT32;
    EIBD33Bits_t BIT;
} EIBD33_t;

typedef union
{
    uint32 UINT32;
    EIBD34Bits_t BIT;
} EIBD34_t;

typedef union
{
    uint32 UINT32;
    EIBD35Bits_t BIT;
} EIBD35_t;

typedef union
{
    uint32 UINT32;
    EIBD36Bits_t BIT;
} EIBD36_t;

typedef union
{
    uint32 UINT32;
    EIBD37Bits_t BIT;
} EIBD37_t;

typedef union
{
    uint32 UINT32;
    EIBD38Bits_t BIT;
} EIBD38_t;

typedef union
{
    uint32 UINT32;
    EIBD39Bits_t BIT;
} EIBD39_t;

typedef union
{
    uint32 UINT32;
    EIBD40Bits_t BIT;
} EIBD40_t;

typedef union
{
    uint32 UINT32;
    EIBD41Bits_t BIT;
} EIBD41_t;

typedef union
{
    uint32 UINT32;
    EIBD42Bits_t BIT;
} EIBD42_t;

typedef union
{
    uint32 UINT32;
    EIBD47Bits_t BIT;
} EIBD47_t;

typedef union
{
    uint32 UINT32;
    EIBD48Bits_t BIT;
} EIBD48_t;

typedef union
{
    uint32 UINT32;
    EIBD49Bits_t BIT;
} EIBD49_t;

typedef union
{
    uint32 UINT32;
    EIBD50Bits_t BIT;
} EIBD50_t;

typedef union
{
    uint32 UINT32;
    EIBD51Bits_t BIT;
} EIBD51_t;

typedef union
{
    uint32 UINT32;
    EIBD52Bits_t BIT;
} EIBD52_t;

typedef union
{
    uint32 UINT32;
    EIBD53Bits_t BIT;
} EIBD53_t;

typedef union
{
    uint32 UINT32;
    EIBD54Bits_t BIT;
} EIBD54_t;

typedef union
{
    uint32 UINT32;
    EIBD55Bits_t BIT;
} EIBD55_t;

typedef union
{
    uint32 UINT32;
    EIBD56Bits_t BIT;
} EIBD56_t;

typedef union
{
    uint32 UINT32;
    EIBD57Bits_t BIT;
} EIBD57_t;

typedef union
{
    uint32 UINT32;
    EIBD58Bits_t BIT;
} EIBD58_t;

typedef union
{
    uint32 UINT32;
    EIBD59Bits_t BIT;
} EIBD59_t;

typedef union
{
    uint32 UINT32;
    EIBD60Bits_t BIT;
} EIBD60_t;

typedef union
{
    uint32 UINT32;
    EIBD61Bits_t BIT;
} EIBD61_t;

typedef union
{
    uint32 UINT32;
    EIBD62Bits_t BIT;
} EIBD62_t;

typedef union
{
    uint32 UINT32;
    EIBD63Bits_t BIT;
} EIBD63_t;

typedef union
{
    uint32 UINT32;
    EIBD64Bits_t BIT;
} EIBD64_t;

typedef union
{
    uint32 UINT32;
    EIBD65Bits_t BIT;
} EIBD65_t;

typedef union
{
    uint32 UINT32;
    EIBD69Bits_t BIT;
} EIBD69_t;

typedef union
{
    uint32 UINT32;
    EIBD70Bits_t BIT;
} EIBD70_t;

typedef union
{
    uint32 UINT32;
    EIBD71Bits_t BIT;
} EIBD71_t;

typedef union
{
    uint32 UINT32;
    EIBD72Bits_t BIT;
} EIBD72_t;

typedef union
{
    uint32 UINT32;
    EIBD73Bits_t BIT;
} EIBD73_t;

typedef union
{
    uint32 UINT32;
    EIBD74Bits_t BIT;
} EIBD74_t;

typedef union
{
    uint32 UINT32;
    EIBD80Bits_t BIT;
} EIBD80_t;

typedef union
{
    uint32 UINT32;
    EIBD81Bits_t BIT;
} EIBD81_t;

typedef union
{
    uint32 UINT32;
    EIBD82Bits_t BIT;
} EIBD82_t;

typedef union
{
    uint32 UINT32;
    EIBD83Bits_t BIT;
} EIBD83_t;

typedef union
{
    uint32 UINT32;
    EIBD84Bits_t BIT;
} EIBD84_t;

typedef union
{
    uint32 UINT32;
    EIBD85Bits_t BIT;
} EIBD85_t;

typedef union
{
    uint32 UINT32;
    EIBD86Bits_t BIT;
} EIBD86_t;

typedef union
{
    uint32 UINT32;
    EIBD87Bits_t BIT;
} EIBD87_t;

typedef union
{
    uint32 UINT32;
    EIBD88Bits_t BIT;
} EIBD88_t;

typedef union
{
    uint32 UINT32;
    EIBD89Bits_t BIT;
} EIBD89_t;

typedef union
{
    uint32 UINT32;
    EIBD90Bits_t BIT;
} EIBD90_t;

typedef union
{
    uint32 UINT32;
    EIBD91Bits_t BIT;
} EIBD91_t;

typedef union
{
    uint32 UINT32;
    EIBD92Bits_t BIT;
} EIBD92_t;

typedef union
{
    uint32 UINT32;
    EIBD93Bits_t BIT;
} EIBD93_t;

typedef union
{
    uint32 UINT32;
    EIBD94Bits_t BIT;
} EIBD94_t;

typedef union
{
    uint32 UINT32;
    EIBD95Bits_t BIT;
} EIBD95_t;

typedef union
{
    uint32 UINT32;
    EIBD96Bits_t BIT;
} EIBD96_t;

typedef union
{
    uint32 UINT32;
    EIBD97Bits_t BIT;
} EIBD97_t;

typedef union
{
    uint32 UINT32;
    EIBD98Bits_t BIT;
} EIBD98_t;

typedef union
{
    uint32 UINT32;
    EIBD99Bits_t BIT;
} EIBD99_t;

typedef union
{
    uint32 UINT32;
    EIBD100Bits_t BIT;
} EIBD100_t;

typedef union
{
    uint32 UINT32;
    EIBD101Bits_t BIT;
} EIBD101_t;

typedef union
{
    uint32 UINT32;
    EIBD102Bits_t BIT;
} EIBD102_t;

typedef union
{
    uint32 UINT32;
    EIBD103Bits_t BIT;
} EIBD103_t;

typedef union
{
    uint32 UINT32;
    EIBD104Bits_t BIT;
} EIBD104_t;

typedef union
{
    uint32 UINT32;
    EIBD105Bits_t BIT;
} EIBD105_t;

typedef union
{
    uint32 UINT32;
    EIBD106Bits_t BIT;
} EIBD106_t;

typedef union
{
    uint32 UINT32;
    EIBD107Bits_t BIT;
} EIBD107_t;

typedef union
{
    uint32 UINT32;
    EIBD114Bits_t BIT;
} EIBD114_t;

typedef union
{
    uint32 UINT32;
    EIBD115Bits_t BIT;
} EIBD115_t;

typedef union
{
    uint32 UINT32;
    EIBD116Bits_t BIT;
} EIBD116_t;

typedef union
{
    uint32 UINT32;
    EIBD117Bits_t BIT;
} EIBD117_t;

typedef union
{
    uint32 UINT32;
    EIBD118Bits_t BIT;
} EIBD118_t;

typedef union
{
    uint32 UINT32;
    EIBD119Bits_t BIT;
} EIBD119_t;

typedef union
{
    uint32 UINT32;
    EIBD120Bits_t BIT;
} EIBD120_t;

typedef union
{
    uint32 UINT32;
    EIBD121Bits_t BIT;
} EIBD121_t;

typedef union
{
    uint32 UINT32;
    EIBD128Bits_t BIT;
} EIBD128_t;

typedef union
{
    uint32 UINT32;
    EIBD129Bits_t BIT;
} EIBD129_t;

typedef union
{
    uint32 UINT32;
    EIBD130Bits_t BIT;
} EIBD130_t;

typedef union
{
    uint32 UINT32;
    EIBD132Bits_t BIT;
} EIBD132_t;

typedef union
{
    uint32 UINT32;
    EIBD133Bits_t BIT;
} EIBD133_t;

typedef union
{
    uint32 UINT32;
    EIBD135Bits_t BIT;
} EIBD135_t;

typedef union
{
    uint32 UINT32;
    EIBD136Bits_t BIT;
} EIBD136_t;

typedef union
{
    uint32 UINT32;
    EIBD141Bits_t BIT;
} EIBD141_t;

typedef union
{
    uint32 UINT32;
    EIBD142Bits_t BIT;
} EIBD142_t;

typedef union
{
    uint32 UINT32;
    EIBD143Bits_t BIT;
} EIBD143_t;

typedef union
{
    uint32 UINT32;
    EIBD144Bits_t BIT;
} EIBD144_t;

typedef union
{
    uint32 UINT32;
    EIBD145Bits_t BIT;
} EIBD145_t;

typedef union
{
    uint32 UINT32;
    EIBD146Bits_t BIT;
} EIBD146_t;

typedef union
{
    uint32 UINT32;
    EIBD147Bits_t BIT;
} EIBD147_t;

typedef union
{
    uint32 UINT32;
    EIBD148Bits_t BIT;
} EIBD148_t;

typedef union
{
    uint32 UINT32;
    EIBD149Bits_t BIT;
} EIBD149_t;

typedef union
{
    uint32 UINT32;
    EIBD150Bits_t BIT;
} EIBD150_t;

typedef union
{
    uint32 UINT32;
    EIBD151Bits_t BIT;
} EIBD151_t;

typedef union
{
    uint32 UINT32;
    EIBD152Bits_t BIT;
} EIBD152_t;

typedef union
{
    uint32 UINT32;
    EIBD156Bits_t BIT;
} EIBD156_t;

typedef union
{
    uint32 UINT32;
    EIBD157Bits_t BIT;
} EIBD157_t;

typedef union
{
    uint32 UINT32;
    EIBD158Bits_t BIT;
} EIBD158_t;

typedef union
{
    uint32 UINT32;
    EIBD159Bits_t BIT;
} EIBD159_t;

typedef union
{
    uint32 UINT32;
    EIBD160Bits_t BIT;
} EIBD160_t;

typedef union
{
    uint32 UINT32;
    EIBD161Bits_t BIT;
} EIBD161_t;

typedef union
{
    uint32 UINT32;
    EIBD166Bits_t BIT;
} EIBD166_t;

typedef union
{
    uint32 UINT32;
    EIBD167Bits_t BIT;
} EIBD167_t;

typedef union
{
    uint32 UINT32;
    EIBD168Bits_t BIT;
} EIBD168_t;

typedef union
{
    uint32 UINT32;
    EIBD169Bits_t BIT;
} EIBD169_t;

typedef union
{
    uint32 UINT32;
    EIBD170Bits_t BIT;
} EIBD170_t;

typedef union
{
    uint32 UINT32;
    EIBD171Bits_t BIT;
} EIBD171_t;

typedef union
{
    uint32 UINT32;
    EIBD172Bits_t BIT;
} EIBD172_t;

typedef union
{
    uint32 UINT32;
    EIBD173Bits_t BIT;
} EIBD173_t;

typedef union
{
    uint32 UINT32;
    EIBD174Bits_t BIT;
} EIBD174_t;

typedef union
{
    uint32 UINT32;
    EIBD175Bits_t BIT;
} EIBD175_t;

typedef union
{
    uint32 UINT32;
    EIBD176Bits_t BIT;
} EIBD176_t;

typedef union
{
    uint32 UINT32;
    EIBD177Bits_t BIT;
} EIBD177_t;

typedef union
{
    uint32 UINT32;
    EIBD178Bits_t BIT;
} EIBD178_t;

typedef union
{
    uint32 UINT32;
    EIBD179Bits_t BIT;
} EIBD179_t;

typedef union
{
    uint32 UINT32;
    EIBD180Bits_t BIT;
} EIBD180_t;

typedef union
{
    uint32 UINT32;
    EIBD184Bits_t BIT;
} EIBD184_t;

typedef union
{
    uint32 UINT32;
    EIBD186Bits_t BIT;
} EIBD186_t;

typedef union
{
    uint32 UINT32;
    EIBD187Bits_t BIT;
} EIBD187_t;

typedef union
{
    uint32 UINT32;
    EIBD188Bits_t BIT;
} EIBD188_t;

typedef union
{
    uint32 UINT32;
    EIBD189Bits_t BIT;
} EIBD189_t;

typedef union
{
    uint32 UINT32;
    EIBD190Bits_t BIT;
} EIBD190_t;

typedef union
{
    uint32 UINT32;
    EIBD191Bits_t BIT;
} EIBD191_t;

typedef union
{
    uint32 UINT32;
    EIBD192Bits_t BIT;
} EIBD192_t;

typedef union
{
    uint32 UINT32;
    EIBD193Bits_t BIT;
} EIBD193_t;

typedef union
{
    uint32 UINT32;
    EIBD194Bits_t BIT;
} EIBD194_t;

typedef union
{
    uint32 UINT32;
    EIBD195Bits_t BIT;
} EIBD195_t;

typedef union
{
    uint32 UINT32;
    EIBD196Bits_t BIT;
} EIBD196_t;

typedef union
{
    uint32 UINT32;
    EIBD208Bits_t BIT;
} EIBD208_t;

typedef union
{
    uint32 UINT32;
    EIBD209Bits_t BIT;
} EIBD209_t;

typedef union
{
    uint32 UINT32;
    EIBD210Bits_t BIT;
} EIBD210_t;

typedef union
{
    uint32 UINT32;
    EIBD211Bits_t BIT;
} EIBD211_t;

typedef union
{
    uint32 UINT32;
    EIBD212Bits_t BIT;
} EIBD212_t;

typedef union
{
    uint32 UINT32;
    EIBD213Bits_t BIT;
} EIBD213_t;

typedef union
{
    uint32 UINT32;
    EIBD214Bits_t BIT;
} EIBD214_t;

typedef union
{
    uint32 UINT32;
    EIBD215Bits_t BIT;
} EIBD215_t;

typedef union
{
    uint32 UINT32;
    EIBD216Bits_t BIT;
} EIBD216_t;

typedef union
{
    uint32 UINT32;
    EIBD217Bits_t BIT;
} EIBD217_t;

typedef union
{
    uint32 UINT32;
    EIBD218Bits_t BIT;
} EIBD218_t;

typedef union
{
    uint32 UINT32;
    EIBD219Bits_t BIT;
} EIBD219_t;

typedef union
{
    uint32 UINT32;
    EIBD228Bits_t BIT;
} EIBD228_t;

typedef union
{
    uint32 UINT32;
    EIBD229Bits_t BIT;
} EIBD229_t;

typedef union
{
    uint32 UINT32;
    EIBD230Bits_t BIT;
} EIBD230_t;

typedef union
{
    uint32 UINT32;
    EIBD231Bits_t BIT;
} EIBD231_t;

typedef union
{
    uint32 UINT32;
    EIBD232Bits_t BIT;
} EIBD232_t;

typedef union
{
    uint32 UINT32;
    EIBD233Bits_t BIT;
} EIBD233_t;

typedef union
{
    uint32 UINT32;
    EIBD234Bits_t BIT;
} EIBD234_t;

typedef union
{
    uint32 UINT32;
    EIBD235Bits_t BIT;
} EIBD235_t;

typedef union
{
    uint32 UINT32;
    EIBD236Bits_t BIT;
} EIBD236_t;

typedef union
{
    uint32 UINT32;
    EIBD237Bits_t BIT;
} EIBD237_t;

typedef union
{
    uint32 UINT32;
    EIBD238Bits_t BIT;
} EIBD238_t;

typedef union
{
    uint32 UINT32;
    EIBD239Bits_t BIT;
} EIBD239_t;

typedef union
{
    uint32 UINT32;
    EIBD240Bits_t BIT;
} EIBD240_t;

typedef union
{
    uint32 UINT32;
    EIBD241Bits_t BIT;
} EIBD241_t;

typedef union
{
    uint32 UINT32;
    EIBD242Bits_t BIT;
} EIBD242_t;

typedef union
{
    uint32 UINT32;
    EIBD243Bits_t BIT;
} EIBD243_t;

typedef union
{
    uint32 UINT32;
    EIBD244Bits_t BIT;
} EIBD244_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(FEINTF0_BASE, 0xFFD42000, __READ, FEINTF0_t);
__IOREG(FEINTFMSK0_BASE, 0xFFD42004, __READ_WRITE, FEINTFMSK0_t);
__IOREG(FEINTFC0_BASE, 0xFFD42008, __READ_WRITE, FEINTFC0_t);
__IOREG(EIC0_BASE, 0xFFFEEA00, __READ_WRITE, EIC0_t);
__IOREG(EIC3_BASE, 0xFFFEEA06, __READ_WRITE, EIC3_t);
__IOREG(EIC4_BASE, 0xFFFEEA08, __READ_WRITE, EIC4_t);
__IOREG(EIC5_BASE, 0xFFFEEA0A, __READ_WRITE, EIC5_t);
__IOREG(EIC6_BASE, 0xFFFEEA0C, __READ_WRITE, EIC6_t);
__IOREG(EIC7_BASE, 0xFFFEEA0E, __READ_WRITE, EIC7_t);
__IOREG(EIC8_BASE, 0xFFFEEA10, __READ_WRITE, EIC8_t);
__IOREG(EIC9_BASE, 0xFFFEEA12, __READ_WRITE, EIC9_t);
__IOREG(EIC10_BASE, 0xFFFEEA14, __READ_WRITE, EIC10_t);
__IOREG(EIC11_BASE, 0xFFFEEA16, __READ_WRITE, EIC11_t);
__IOREG(EIC12_BASE, 0xFFFEEA18, __READ_WRITE, EIC12_t);
__IOREG(EIC13_BASE, 0xFFFEEA1A, __READ_WRITE, EIC13_t);
__IOREG(EIC14_BASE, 0xFFFEEA1C, __READ_WRITE, EIC14_t);
__IOREG(EIC15_BASE, 0xFFFEEA1E, __READ_WRITE, EIC15_t);
__IOREG(EIC16_BASE, 0xFFFEEA20, __READ_WRITE, EIC16_t);
__IOREG(EIC17_BASE, 0xFFFEEA22, __READ_WRITE, EIC17_t);
__IOREG(EIC18_BASE, 0xFFFEEA24, __READ_WRITE, EIC18_t);
__IOREG(EIC19_BASE, 0xFFFEEA26, __READ_WRITE, EIC19_t);
__IOREG(EIC20_BASE, 0xFFFEEA28, __READ_WRITE, EIC20_t);
__IOREG(EIC21_BASE, 0xFFFEEA2A, __READ_WRITE, EIC21_t);
__IOREG(EIC22_BASE, 0xFFFEEA2C, __READ_WRITE, EIC22_t);
__IOREG(EIC23_BASE, 0xFFFEEA2E, __READ_WRITE, EIC23_t);
__IOREG(EIC24_BASE, 0xFFFEEA30, __READ_WRITE, EIC24_t);
__IOREG(EIC25_BASE, 0xFFFEEA32, __READ_WRITE, EIC25_t);
__IOREG(EIC26_BASE, 0xFFFEEA34, __READ_WRITE, EIC26_t);
__IOREG(EIC27_BASE, 0xFFFEEA36, __READ_WRITE, EIC27_t);
__IOREG(EIC28_BASE, 0xFFFEEA38, __READ_WRITE, EIC28_t);
__IOREG(EIC29_BASE, 0xFFFEEA3A, __READ_WRITE, EIC29_t);
__IOREG(EIC30_BASE, 0xFFFEEA3C, __READ_WRITE, EIC30_t);
__IOREG(EIC31_BASE, 0xFFFEEA3E, __READ_WRITE, EIC31_t);
__IOREG(INTCFNC_BASE, 0xFFFEEA78, __READ, INTCFNC_t);
__IOREG(FIC_BASE, 0xFFFEEA7A, __READ, FIC_t);
__IOREG(IMR0_BASE, 0xFFFEEAF0, __READ_WRITE, IMR0_t);
__IOREG(EIBD0_BASE, 0xFFFEEB00, __READ_WRITE, EIBD0_t);
__IOREG(EIBD3_BASE, 0xFFFEEB0C, __READ_WRITE, EIBD3_t);
__IOREG(EIBD4_BASE, 0xFFFEEB10, __READ_WRITE, EIBD4_t);
__IOREG(EIBD5_BASE, 0xFFFEEB14, __READ_WRITE, EIBD5_t);
__IOREG(EIBD6_BASE, 0xFFFEEB18, __READ_WRITE, EIBD6_t);
__IOREG(EIBD7_BASE, 0xFFFEEB1C, __READ_WRITE, EIBD7_t);
__IOREG(EIBD8_BASE, 0xFFFEEB20, __READ_WRITE, EIBD8_t);
__IOREG(EIBD9_BASE, 0xFFFEEB24, __READ_WRITE, EIBD9_t);
__IOREG(EIBD10_BASE, 0xFFFEEB28, __READ_WRITE, EIBD10_t);
__IOREG(EIBD11_BASE, 0xFFFEEB2C, __READ_WRITE, EIBD11_t);
__IOREG(EIBD12_BASE, 0xFFFEEB30, __READ_WRITE, EIBD12_t);
__IOREG(EIBD13_BASE, 0xFFFEEB34, __READ_WRITE, EIBD13_t);
__IOREG(EIBD14_BASE, 0xFFFEEB38, __READ_WRITE, EIBD14_t);
__IOREG(EIBD15_BASE, 0xFFFEEB3C, __READ_WRITE, EIBD15_t);
__IOREG(EIBD16_BASE, 0xFFFEEB40, __READ_WRITE, EIBD16_t);
__IOREG(EIBD17_BASE, 0xFFFEEB44, __READ_WRITE, EIBD17_t);
__IOREG(EIBD18_BASE, 0xFFFEEB48, __READ_WRITE, EIBD18_t);
__IOREG(EIBD19_BASE, 0xFFFEEB4C, __READ_WRITE, EIBD19_t);
__IOREG(EIBD20_BASE, 0xFFFEEB50, __READ_WRITE, EIBD20_t);
__IOREG(EIBD21_BASE, 0xFFFEEB54, __READ_WRITE, EIBD21_t);
__IOREG(EIBD22_BASE, 0xFFFEEB58, __READ_WRITE, EIBD22_t);
__IOREG(EIBD23_BASE, 0xFFFEEB5C, __READ_WRITE, EIBD23_t);
__IOREG(EIBD24_BASE, 0xFFFEEB60, __READ_WRITE, EIBD24_t);
__IOREG(EIBD25_BASE, 0xFFFEEB64, __READ_WRITE, EIBD25_t);
__IOREG(EIBD26_BASE, 0xFFFEEB68, __READ_WRITE, EIBD26_t);
__IOREG(EIBD27_BASE, 0xFFFEEB6C, __READ_WRITE, EIBD27_t);
__IOREG(EIBD28_BASE, 0xFFFEEB70, __READ_WRITE, EIBD28_t);
__IOREG(EIBD29_BASE, 0xFFFEEB74, __READ_WRITE, EIBD29_t);
__IOREG(EIBD30_BASE, 0xFFFEEB78, __READ_WRITE, EIBD30_t);
__IOREG(EIBD31_BASE, 0xFFFEEB7C, __READ_WRITE, EIBD31_t);
__IOREG(EIC32_BASE, 0xFFFFB040, __READ_WRITE, EIC32_t);
__IOREG(EIC33_BASE, 0xFFFFB042, __READ_WRITE, EIC33_t);
__IOREG(EIC34_BASE, 0xFFFFB044, __READ_WRITE, EIC34_t);
__IOREG(EIC35_BASE, 0xFFFFB046, __READ_WRITE, EIC35_t);
__IOREG(EIC36_BASE, 0xFFFFB048, __READ_WRITE, EIC36_t);
__IOREG(EIC37_BASE, 0xFFFFB04A, __READ_WRITE, EIC37_t);
__IOREG(EIC38_BASE, 0xFFFFB04C, __READ_WRITE, EIC38_t);
__IOREG(EIC39_BASE, 0xFFFFB04E, __READ_WRITE, EIC39_t);
__IOREG(EIC40_BASE, 0xFFFFB050, __READ_WRITE, EIC40_t);
__IOREG(EIC41_BASE, 0xFFFFB052, __READ_WRITE, EIC41_t);
__IOREG(EIC42_BASE, 0xFFFFB054, __READ_WRITE, EIC42_t);
__IOREG(EIC47_BASE, 0xFFFFB05E, __READ_WRITE, EIC47_t);
__IOREG(EIC48_BASE, 0xFFFFB060, __READ_WRITE, EIC48_t);
__IOREG(EIC49_BASE, 0xFFFFB062, __READ_WRITE, EIC49_t);
__IOREG(EIC50_BASE, 0xFFFFB064, __READ_WRITE, EIC50_t);
__IOREG(EIC51_BASE, 0xFFFFB066, __READ_WRITE, EIC51_t);
__IOREG(EIC52_BASE, 0xFFFFB068, __READ_WRITE, EIC52_t);
__IOREG(EIC53_BASE, 0xFFFFB06A, __READ_WRITE, EIC53_t);
__IOREG(EIC54_BASE, 0xFFFFB06C, __READ_WRITE, EIC54_t);
__IOREG(EIC55_BASE, 0xFFFFB06E, __READ_WRITE, EIC55_t);
__IOREG(EIC56_BASE, 0xFFFFB070, __READ_WRITE, EIC56_t);
__IOREG(EIC57_BASE, 0xFFFFB072, __READ_WRITE, EIC57_t);
__IOREG(EIC58_BASE, 0xFFFFB074, __READ_WRITE, EIC58_t);
__IOREG(EIC59_BASE, 0xFFFFB076, __READ_WRITE, EIC59_t);
__IOREG(EIC60_BASE, 0xFFFFB078, __READ_WRITE, EIC60_t);
__IOREG(EIC61_BASE, 0xFFFFB07A, __READ_WRITE, EIC61_t);
__IOREG(EIC62_BASE, 0xFFFFB07C, __READ_WRITE, EIC62_t);
__IOREG(EIC63_BASE, 0xFFFFB07E, __READ_WRITE, EIC63_t);
__IOREG(EIC64_BASE, 0xFFFFB080, __READ_WRITE, EIC64_t);
__IOREG(EIC65_BASE, 0xFFFFB082, __READ_WRITE, EIC65_t);
__IOREG(EIC69_BASE, 0xFFFFB08A, __READ_WRITE, EIC69_t);
__IOREG(EIC70_BASE, 0xFFFFB08C, __READ_WRITE, EIC70_t);
__IOREG(EIC71_BASE, 0xFFFFB08E, __READ_WRITE, EIC71_t);
__IOREG(EIC72_BASE, 0xFFFFB090, __READ_WRITE, EIC72_t);
__IOREG(EIC73_BASE, 0xFFFFB092, __READ_WRITE, EIC73_t);
__IOREG(EIC74_BASE, 0xFFFFB094, __READ_WRITE, EIC74_t);
__IOREG(EIC80_BASE, 0xFFFFB0A0, __READ_WRITE, EIC80_t);
__IOREG(EIC81_BASE, 0xFFFFB0A2, __READ_WRITE, EIC81_t);
__IOREG(EIC82_BASE, 0xFFFFB0A4, __READ_WRITE, EIC82_t);
__IOREG(EIC83_BASE, 0xFFFFB0A6, __READ_WRITE, EIC83_t);
__IOREG(EIC84_BASE, 0xFFFFB0A8, __READ_WRITE, EIC84_t);
__IOREG(EIC85_BASE, 0xFFFFB0AA, __READ_WRITE, EIC85_t);
__IOREG(EIC86_BASE, 0xFFFFB0AC, __READ_WRITE, EIC86_t);
__IOREG(EIC87_BASE, 0xFFFFB0AE, __READ_WRITE, EIC87_t);
__IOREG(EIC88_BASE, 0xFFFFB0B0, __READ_WRITE, EIC88_t);
__IOREG(EIC89_BASE, 0xFFFFB0B2, __READ_WRITE, EIC89_t);
__IOREG(EIC90_BASE, 0xFFFFB0B4, __READ_WRITE, EIC90_t);
__IOREG(EIC91_BASE, 0xFFFFB0B6, __READ_WRITE, EIC91_t);
__IOREG(EIC92_BASE, 0xFFFFB0B8, __READ_WRITE, EIC92_t);
__IOREG(EIC93_BASE, 0xFFFFB0BA, __READ_WRITE, EIC93_t);
__IOREG(EIC94_BASE, 0xFFFFB0BC, __READ_WRITE, EIC94_t);
__IOREG(EIC95_BASE, 0xFFFFB0BE, __READ_WRITE, EIC95_t);
__IOREG(EIC96_BASE, 0xFFFFB0C0, __READ_WRITE, EIC96_t);
__IOREG(EIC97_BASE, 0xFFFFB0C2, __READ_WRITE, EIC97_t);
__IOREG(EIC98_BASE, 0xFFFFB0C4, __READ_WRITE, EIC98_t);
__IOREG(EIC99_BASE, 0xFFFFB0C6, __READ_WRITE, EIC99_t);
__IOREG(EIC100_BASE, 0xFFFFB0C8, __READ_WRITE, EIC100_t);
__IOREG(EIC101_BASE, 0xFFFFB0CA, __READ_WRITE, EIC101_t);
__IOREG(EIC102_BASE, 0xFFFFB0CC, __READ_WRITE, EIC102_t);
__IOREG(EIC103_BASE, 0xFFFFB0CE, __READ_WRITE, EIC103_t);
__IOREG(EIC104_BASE, 0xFFFFB0D0, __READ_WRITE, EIC104_t);
__IOREG(EIC105_BASE, 0xFFFFB0D2, __READ_WRITE, EIC105_t);
__IOREG(EIC106_BASE, 0xFFFFB0D4, __READ_WRITE, EIC106_t);
__IOREG(EIC107_BASE, 0xFFFFB0D6, __READ_WRITE, EIC107_t);
__IOREG(EIC116_BASE, 0xFFFFB0E8, __READ_WRITE, EIC116_t);
__IOREG(EIC117_BASE, 0xFFFFB0EA, __READ_WRITE, EIC117_t);
__IOREG(EIC118_BASE, 0xFFFFB0EC, __READ_WRITE, EIC118_t);
__IOREG(EIC119_BASE, 0xFFFFB0EE, __READ_WRITE, EIC119_t);
__IOREG(EIC120_BASE, 0xFFFFB0F0, __READ_WRITE, EIC120_t);
__IOREG(EIC121_BASE, 0xFFFFB0F2, __READ_WRITE, EIC121_t);
__IOREG(EIC128_BASE, 0xFFFFB100, __READ_WRITE, EIC128_t);
__IOREG(EIC129_BASE, 0xFFFFB102, __READ_WRITE, EIC129_t);
__IOREG(EIC130_BASE, 0xFFFFB104, __READ_WRITE, EIC130_t);
__IOREG(EIC132_BASE, 0xFFFFB108, __READ_WRITE, EIC132_t);
__IOREG(EIC133_BASE, 0xFFFFB10A, __READ_WRITE, EIC133_t);
__IOREG(EIC135_BASE, 0xFFFFB10E, __READ_WRITE, EIC135_t);
__IOREG(EIC136_BASE, 0xFFFFB110, __READ_WRITE, EIC136_t);
__IOREG(EIC141_BASE, 0xFFFFB11A, __READ_WRITE, EIC141_t);
__IOREG(EIC142_BASE, 0xFFFFB11C, __READ_WRITE, EIC142_t);
__IOREG(EIC143_BASE, 0xFFFFB11E, __READ_WRITE, EIC143_t);
__IOREG(EIC144_BASE, 0xFFFFB120, __READ_WRITE, EIC144_t);
__IOREG(EIC145_BASE, 0xFFFFB122, __READ_WRITE, EIC145_t);
__IOREG(EIC146_BASE, 0xFFFFB124, __READ_WRITE, EIC146_t);
__IOREG(EIC147_BASE, 0xFFFFB126, __READ_WRITE, EIC147_t);
__IOREG(EIC148_BASE, 0xFFFFB128, __READ_WRITE, EIC148_t);
__IOREG(EIC149_BASE, 0xFFFFB12A, __READ_WRITE, EIC149_t);
__IOREG(EIC150_BASE, 0xFFFFB12C, __READ_WRITE, EIC150_t);
__IOREG(EIC151_BASE, 0xFFFFB12E, __READ_WRITE, EIC151_t);
__IOREG(EIC152_BASE, 0xFFFFB130, __READ_WRITE, EIC152_t);
__IOREG(EIC156_BASE, 0xFFFFB138, __READ_WRITE, EIC156_t);
__IOREG(EIC157_BASE, 0xFFFFB13A, __READ_WRITE, EIC157_t);
__IOREG(EIC158_BASE, 0xFFFFB13C, __READ_WRITE, EIC158_t);
__IOREG(EIC159_BASE, 0xFFFFB13E, __READ_WRITE, EIC159_t);
__IOREG(EIC160_BASE, 0xFFFFB140, __READ_WRITE, EIC160_t);
__IOREG(EIC161_BASE, 0xFFFFB142, __READ_WRITE, EIC161_t);
__IOREG(EIC166_BASE, 0xFFFFB14C, __READ_WRITE, EIC166_t);
__IOREG(EIC167_BASE, 0xFFFFB14E, __READ_WRITE, EIC167_t);
__IOREG(EIC168_BASE, 0xFFFFB150, __READ_WRITE, EIC168_t);
__IOREG(EIC169_BASE, 0xFFFFB152, __READ_WRITE, EIC169_t);
__IOREG(EIC170_BASE, 0xFFFFB154, __READ_WRITE, EIC170_t);
__IOREG(EIC171_BASE, 0xFFFFB156, __READ_WRITE, EIC171_t);
__IOREG(EIC172_BASE, 0xFFFFB158, __READ_WRITE, EIC172_t);
__IOREG(EIC173_BASE, 0xFFFFB15A, __READ_WRITE, EIC173_t);
__IOREG(EIC174_BASE, 0xFFFFB15C, __READ_WRITE, EIC174_t);
__IOREG(EIC175_BASE, 0xFFFFB15E, __READ_WRITE, EIC175_t);
__IOREG(EIC176_BASE, 0xFFFFB160, __READ_WRITE, EIC176_t);
__IOREG(EIC177_BASE, 0xFFFFB162, __READ_WRITE, EIC177_t);
__IOREG(EIC178_BASE, 0xFFFFB164, __READ_WRITE, EIC178_t);
__IOREG(EIC179_BASE, 0xFFFFB166, __READ_WRITE, EIC179_t);
__IOREG(EIC180_BASE, 0xFFFFB168, __READ_WRITE, EIC180_t);
__IOREG(EIC184_BASE, 0xFFFFB170, __READ_WRITE, EIC184_t);
__IOREG(EIC186_BASE, 0xFFFFB174, __READ_WRITE, EIC186_t);
__IOREG(EIC187_BASE, 0xFFFFB176, __READ_WRITE, EIC187_t);
__IOREG(EIC188_BASE, 0xFFFFB178, __READ_WRITE, EIC188_t);
__IOREG(EIC189_BASE, 0xFFFFB17A, __READ_WRITE, EIC189_t);
__IOREG(EIC190_BASE, 0xFFFFB17C, __READ_WRITE, EIC190_t);
__IOREG(EIC191_BASE, 0xFFFFB17E, __READ_WRITE, EIC191_t);
__IOREG(EIC192_BASE, 0xFFFFB180, __READ_WRITE, EIC192_t);
__IOREG(EIC193_BASE, 0xFFFFB182, __READ_WRITE, EIC193_t);
__IOREG(EIC194_BASE, 0xFFFFB184, __READ_WRITE, EIC194_t);
__IOREG(EIC195_BASE, 0xFFFFB186, __READ_WRITE, EIC195_t);
__IOREG(EIC196_BASE, 0xFFFFB188, __READ_WRITE, EIC196_t);
__IOREG(EIC208_BASE, 0xFFFFB1A0, __READ_WRITE, EIC208_t);
__IOREG(EIC209_BASE, 0xFFFFB1A2, __READ_WRITE, EIC209_t);
__IOREG(EIC210_BASE, 0xFFFFB1A4, __READ_WRITE, EIC210_t);
__IOREG(EIC211_BASE, 0xFFFFB1A6, __READ_WRITE, EIC211_t);
__IOREG(EIC212_BASE, 0xFFFFB1A8, __READ_WRITE, EIC212_t);
__IOREG(EIC213_BASE, 0xFFFFB1AA, __READ_WRITE, EIC213_t);
__IOREG(EIC214_BASE, 0xFFFFB1AC, __READ_WRITE, EIC214_t);
__IOREG(EIC215_BASE, 0xFFFFB1AE, __READ_WRITE, EIC215_t);
__IOREG(EIC216_BASE, 0xFFFFB1B0, __READ_WRITE, EIC216_t);
__IOREG(EIC217_BASE, 0xFFFFB1B2, __READ_WRITE, EIC217_t);
__IOREG(EIC218_BASE, 0xFFFFB1B4, __READ_WRITE, EIC218_t);
__IOREG(EIC219_BASE, 0xFFFFB1B6, __READ_WRITE, EIC219_t);
__IOREG(EIC228_BASE, 0xFFFFB1C8, __READ_WRITE, EIC228_t);
__IOREG(EIC229_BASE, 0xFFFFB1CA, __READ_WRITE, EIC229_t);
__IOREG(EIC230_BASE, 0xFFFFB1CC, __READ_WRITE, EIC230_t);
__IOREG(EIC231_BASE, 0xFFFFB1CE, __READ_WRITE, EIC231_t);
__IOREG(EIC232_BASE, 0xFFFFB1D0, __READ_WRITE, EIC232_t);
__IOREG(EIC233_BASE, 0xFFFFB1D2, __READ_WRITE, EIC233_t);
__IOREG(EIC234_BASE, 0xFFFFB1D4, __READ_WRITE, EIC234_t);
__IOREG(EIC235_BASE, 0xFFFFB1D6, __READ_WRITE, EIC235_t);
__IOREG(EIC236_BASE, 0xFFFFB1D8, __READ_WRITE, EIC236_t);
__IOREG(EIC237_BASE, 0xFFFFB1DA, __READ_WRITE, EIC237_t);
__IOREG(EIC238_BASE, 0xFFFFB1DC, __READ_WRITE, EIC238_t);
__IOREG(EIC239_BASE, 0xFFFFB1DE, __READ_WRITE, EIC239_t);
__IOREG(EIC240_BASE, 0xFFFFB1E0, __READ_WRITE, EIC240_t);
__IOREG(EIC241_BASE, 0xFFFFB1E2, __READ_WRITE, EIC241_t);
__IOREG(EIC242_BASE, 0xFFFFB1E4, __READ_WRITE, EIC242_t);
__IOREG(EIC243_BASE, 0xFFFFB1E6, __READ_WRITE, EIC243_t);
__IOREG(EIC244_BASE, 0xFFFFB1E8, __READ_WRITE, EIC244_t);
__IOREG(IMR1_BASE, 0xFFFFB404, __READ_WRITE, IMR1_t);
__IOREG(IMR2_BASE, 0xFFFFB408, __READ_WRITE, IMR2_t);
__IOREG(IMR3_BASE, 0xFFFFB40C, __READ_WRITE, IMR3_t);
__IOREG(IMR4_BASE, 0xFFFFB410, __READ_WRITE, IMR4_t);
__IOREG(IMR5_BASE, 0xFFFFB414, __READ_WRITE, IMR5_t);
__IOREG(IMR6_BASE, 0xFFFFB418, __READ_WRITE, IMR6_t);
__IOREG(IMR7_BASE, 0xFFFFB41C, __READ_WRITE, IMR7_t);
__IOREG(EIBD32_BASE, 0xFFFFB880, __READ_WRITE, EIBD32_t);
__IOREG(EIBD33_BASE, 0xFFFFB884, __READ_WRITE, EIBD33_t);
__IOREG(EIBD34_BASE, 0xFFFFB888, __READ_WRITE, EIBD34_t);
__IOREG(EIBD35_BASE, 0xFFFFB88C, __READ_WRITE, EIBD35_t);
__IOREG(EIBD36_BASE, 0xFFFFB890, __READ_WRITE, EIBD36_t);
__IOREG(EIBD37_BASE, 0xFFFFB894, __READ_WRITE, EIBD37_t);
__IOREG(EIBD38_BASE, 0xFFFFB898, __READ_WRITE, EIBD38_t);
__IOREG(EIBD39_BASE, 0xFFFFB89C, __READ_WRITE, EIBD39_t);
__IOREG(EIBD40_BASE, 0xFFFFB8A0, __READ_WRITE, EIBD40_t);
__IOREG(EIBD41_BASE, 0xFFFFB8A4, __READ_WRITE, EIBD41_t);
__IOREG(EIBD42_BASE, 0xFFFFB8A8, __READ_WRITE, EIBD42_t);
__IOREG(EIBD47_BASE, 0xFFFFB8BC, __READ_WRITE, EIBD47_t);
__IOREG(EIBD48_BASE, 0xFFFFB8C0, __READ_WRITE, EIBD48_t);
__IOREG(EIBD49_BASE, 0xFFFFB8C4, __READ_WRITE, EIBD49_t);
__IOREG(EIBD50_BASE, 0xFFFFB8C8, __READ_WRITE, EIBD50_t);
__IOREG(EIBD51_BASE, 0xFFFFB8CC, __READ_WRITE, EIBD51_t);
__IOREG(EIBD52_BASE, 0xFFFFB8D0, __READ_WRITE, EIBD52_t);
__IOREG(EIBD53_BASE, 0xFFFFB8D4, __READ_WRITE, EIBD53_t);
__IOREG(EIBD54_BASE, 0xFFFFB8D8, __READ_WRITE, EIBD54_t);
__IOREG(EIBD55_BASE, 0xFFFFB8DC, __READ_WRITE, EIBD55_t);
__IOREG(EIBD56_BASE, 0xFFFFB8E0, __READ_WRITE, EIBD56_t);
__IOREG(EIBD57_BASE, 0xFFFFB8E4, __READ_WRITE, EIBD57_t);
__IOREG(EIBD58_BASE, 0xFFFFB8E8, __READ_WRITE, EIBD58_t);
__IOREG(EIBD59_BASE, 0xFFFFB8EC, __READ_WRITE, EIBD59_t);
__IOREG(EIBD60_BASE, 0xFFFFB8F0, __READ_WRITE, EIBD60_t);
__IOREG(EIBD61_BASE, 0xFFFFB8F4, __READ_WRITE, EIBD61_t);
__IOREG(EIBD62_BASE, 0xFFFFB8F8, __READ_WRITE, EIBD62_t);
__IOREG(EIBD63_BASE, 0xFFFFB8FC, __READ_WRITE, EIBD63_t);
__IOREG(EIBD64_BASE, 0xFFFFB900, __READ_WRITE, EIBD64_t);
__IOREG(EIBD65_BASE, 0xFFFFB904, __READ_WRITE, EIBD65_t);
__IOREG(EIBD69_BASE, 0xFFFFB914, __READ_WRITE, EIBD69_t);
__IOREG(EIBD70_BASE, 0xFFFFB918, __READ_WRITE, EIBD70_t);
__IOREG(EIBD71_BASE, 0xFFFFB91C, __READ_WRITE, EIBD71_t);
__IOREG(EIBD72_BASE, 0xFFFFB920, __READ_WRITE, EIBD72_t);
__IOREG(EIBD73_BASE, 0xFFFFB924, __READ_WRITE, EIBD73_t);
__IOREG(EIBD74_BASE, 0xFFFFB928, __READ_WRITE, EIBD74_t);
__IOREG(EIBD80_BASE, 0xFFFFB940, __READ_WRITE, EIBD80_t);
__IOREG(EIBD81_BASE, 0xFFFFB944, __READ_WRITE, EIBD81_t);
__IOREG(EIBD82_BASE, 0xFFFFB948, __READ_WRITE, EIBD82_t);
__IOREG(EIBD83_BASE, 0xFFFFB94C, __READ_WRITE, EIBD83_t);
__IOREG(EIBD84_BASE, 0xFFFFB950, __READ_WRITE, EIBD84_t);
__IOREG(EIBD85_BASE, 0xFFFFB954, __READ_WRITE, EIBD85_t);
__IOREG(EIBD86_BASE, 0xFFFFB958, __READ_WRITE, EIBD86_t);
__IOREG(EIBD87_BASE, 0xFFFFB95C, __READ_WRITE, EIBD87_t);
__IOREG(EIBD88_BASE, 0xFFFFB960, __READ_WRITE, EIBD88_t);
__IOREG(EIBD89_BASE, 0xFFFFB964, __READ_WRITE, EIBD89_t);
__IOREG(EIBD90_BASE, 0xFFFFB968, __READ_WRITE, EIBD90_t);
__IOREG(EIBD91_BASE, 0xFFFFB96C, __READ_WRITE, EIBD91_t);
__IOREG(EIBD92_BASE, 0xFFFFB970, __READ_WRITE, EIBD92_t);
__IOREG(EIBD93_BASE, 0xFFFFB974, __READ_WRITE, EIBD93_t);
__IOREG(EIBD94_BASE, 0xFFFFB978, __READ_WRITE, EIBD94_t);
__IOREG(EIBD95_BASE, 0xFFFFB97C, __READ_WRITE, EIBD95_t);
__IOREG(EIBD96_BASE, 0xFFFFB980, __READ_WRITE, EIBD96_t);
__IOREG(EIBD97_BASE, 0xFFFFB984, __READ_WRITE, EIBD97_t);
__IOREG(EIBD98_BASE, 0xFFFFB988, __READ_WRITE, EIBD98_t);
__IOREG(EIBD99_BASE, 0xFFFFB98C, __READ_WRITE, EIBD99_t);
__IOREG(EIBD100_BASE, 0xFFFFB990, __READ_WRITE, EIBD100_t);
__IOREG(EIBD101_BASE, 0xFFFFB994, __READ_WRITE, EIBD101_t);
__IOREG(EIBD102_BASE, 0xFFFFB998, __READ_WRITE, EIBD102_t);
__IOREG(EIBD103_BASE, 0xFFFFB99C, __READ_WRITE, EIBD103_t);
__IOREG(EIBD104_BASE, 0xFFFFB9A0, __READ_WRITE, EIBD104_t);
__IOREG(EIBD105_BASE, 0xFFFFB9A4, __READ_WRITE, EIBD105_t);
__IOREG(EIBD106_BASE, 0xFFFFB9A8, __READ_WRITE, EIBD106_t);
__IOREG(EIBD107_BASE, 0xFFFFB9AC, __READ_WRITE, EIBD107_t);
__IOREG(EIBD114_BASE, 0xFFFFB9C8, __READ_WRITE, EIBD114_t);
__IOREG(EIBD115_BASE, 0xFFFFB9CC, __READ_WRITE, EIBD115_t);
__IOREG(EIBD116_BASE, 0xFFFFB9D0, __READ_WRITE, EIBD116_t);
__IOREG(EIBD117_BASE, 0xFFFFB9D4, __READ_WRITE, EIBD117_t);
__IOREG(EIBD118_BASE, 0xFFFFB9D8, __READ_WRITE, EIBD118_t);
__IOREG(EIBD119_BASE, 0xFFFFB9DC, __READ_WRITE, EIBD119_t);
__IOREG(EIBD120_BASE, 0xFFFFB9E0, __READ_WRITE, EIBD120_t);
__IOREG(EIBD121_BASE, 0xFFFFB9E4, __READ_WRITE, EIBD121_t);
__IOREG(EIBD128_BASE, 0xFFFFBA00, __READ_WRITE, EIBD128_t);
__IOREG(EIBD129_BASE, 0xFFFFBA04, __READ_WRITE, EIBD129_t);
__IOREG(EIBD130_BASE, 0xFFFFBA08, __READ_WRITE, EIBD130_t);
__IOREG(EIBD132_BASE, 0xFFFFBA10, __READ_WRITE, EIBD132_t);
__IOREG(EIBD133_BASE, 0xFFFFBA14, __READ_WRITE, EIBD133_t);
__IOREG(EIBD135_BASE, 0xFFFFBA1C, __READ_WRITE, EIBD135_t);
__IOREG(EIBD136_BASE, 0xFFFFBA20, __READ_WRITE, EIBD136_t);
__IOREG(EIBD141_BASE, 0xFFFFBA34, __READ_WRITE, EIBD141_t);
__IOREG(EIBD142_BASE, 0xFFFFBA38, __READ_WRITE, EIBD142_t);
__IOREG(EIBD143_BASE, 0xFFFFBA3C, __READ_WRITE, EIBD143_t);
__IOREG(EIBD144_BASE, 0xFFFFBA40, __READ_WRITE, EIBD144_t);
__IOREG(EIBD145_BASE, 0xFFFFBA44, __READ_WRITE, EIBD145_t);
__IOREG(EIBD146_BASE, 0xFFFFBA48, __READ_WRITE, EIBD146_t);
__IOREG(EIBD147_BASE, 0xFFFFBA4C, __READ_WRITE, EIBD147_t);
__IOREG(EIBD148_BASE, 0xFFFFBA50, __READ_WRITE, EIBD148_t);
__IOREG(EIBD149_BASE, 0xFFFFBA54, __READ_WRITE, EIBD149_t);
__IOREG(EIBD150_BASE, 0xFFFFBA58, __READ_WRITE, EIBD150_t);
__IOREG(EIBD151_BASE, 0xFFFFBA5C, __READ_WRITE, EIBD151_t);
__IOREG(EIBD152_BASE, 0xFFFFBA60, __READ_WRITE, EIBD152_t);
__IOREG(EIBD156_BASE, 0xFFFFBA70, __READ_WRITE, EIBD156_t);
__IOREG(EIBD157_BASE, 0xFFFFBA74, __READ_WRITE, EIBD157_t);
__IOREG(EIBD158_BASE, 0xFFFFBA78, __READ_WRITE, EIBD158_t);
__IOREG(EIBD159_BASE, 0xFFFFBA7C, __READ_WRITE, EIBD159_t);
__IOREG(EIBD160_BASE, 0xFFFFBA80, __READ_WRITE, EIBD160_t);
__IOREG(EIBD161_BASE, 0xFFFFBA84, __READ_WRITE, EIBD161_t);
__IOREG(EIBD166_BASE, 0xFFFFBA98, __READ_WRITE, EIBD166_t);
__IOREG(EIBD167_BASE, 0xFFFFBA9C, __READ_WRITE, EIBD167_t);
__IOREG(EIBD168_BASE, 0xFFFFBAA0, __READ_WRITE, EIBD168_t);
__IOREG(EIBD169_BASE, 0xFFFFBAA4, __READ_WRITE, EIBD169_t);
__IOREG(EIBD170_BASE, 0xFFFFBAA8, __READ_WRITE, EIBD170_t);
__IOREG(EIBD171_BASE, 0xFFFFBAAC, __READ_WRITE, EIBD171_t);
__IOREG(EIBD172_BASE, 0xFFFFBAB0, __READ_WRITE, EIBD172_t);
__IOREG(EIBD173_BASE, 0xFFFFBAB4, __READ_WRITE, EIBD173_t);
__IOREG(EIBD174_BASE, 0xFFFFBAB8, __READ_WRITE, EIBD174_t);
__IOREG(EIBD175_BASE, 0xFFFFBABC, __READ_WRITE, EIBD175_t);
__IOREG(EIBD176_BASE, 0xFFFFBAC0, __READ_WRITE, EIBD176_t);
__IOREG(EIBD177_BASE, 0xFFFFBAC4, __READ_WRITE, EIBD177_t);
__IOREG(EIBD178_BASE, 0xFFFFBAC8, __READ_WRITE, EIBD178_t);
__IOREG(EIBD179_BASE, 0xFFFFBACC, __READ_WRITE, EIBD179_t);
__IOREG(EIBD180_BASE, 0xFFFFBAD0, __READ_WRITE, EIBD180_t);
__IOREG(EIBD184_BASE, 0xFFFFBAE0, __READ_WRITE, EIBD184_t);
__IOREG(EIBD186_BASE, 0xFFFFBAE8, __READ_WRITE, EIBD186_t);
__IOREG(EIBD187_BASE, 0xFFFFBAEC, __READ_WRITE, EIBD187_t);
__IOREG(EIBD188_BASE, 0xFFFFBAF0, __READ_WRITE, EIBD188_t);
__IOREG(EIBD189_BASE, 0xFFFFBAF4, __READ_WRITE, EIBD189_t);
__IOREG(EIBD190_BASE, 0xFFFFBAF8, __READ_WRITE, EIBD190_t);
__IOREG(EIBD191_BASE, 0xFFFFBAFC, __READ_WRITE, EIBD191_t);
__IOREG(EIBD192_BASE, 0xFFFFBB00, __READ_WRITE, EIBD192_t);
__IOREG(EIBD193_BASE, 0xFFFFBB04, __READ_WRITE, EIBD193_t);
__IOREG(EIBD194_BASE, 0xFFFFBB08, __READ_WRITE, EIBD194_t);
__IOREG(EIBD195_BASE, 0xFFFFBB0C, __READ_WRITE, EIBD195_t);
__IOREG(EIBD196_BASE, 0xFFFFBB10, __READ_WRITE, EIBD196_t);
__IOREG(EIBD208_BASE, 0xFFFFBB40, __READ_WRITE, EIBD208_t);
__IOREG(EIBD209_BASE, 0xFFFFBB44, __READ_WRITE, EIBD209_t);
__IOREG(EIBD210_BASE, 0xFFFFBB48, __READ_WRITE, EIBD210_t);
__IOREG(EIBD211_BASE, 0xFFFFBB4C, __READ_WRITE, EIBD211_t);
__IOREG(EIBD212_BASE, 0xFFFFBB50, __READ_WRITE, EIBD212_t);
__IOREG(EIBD213_BASE, 0xFFFFBB54, __READ_WRITE, EIBD213_t);
__IOREG(EIBD214_BASE, 0xFFFFBB58, __READ_WRITE, EIBD214_t);
__IOREG(EIBD215_BASE, 0xFFFFBB5C, __READ_WRITE, EIBD215_t);
__IOREG(EIBD216_BASE, 0xFFFFBB60, __READ_WRITE, EIBD216_t);
__IOREG(EIBD217_BASE, 0xFFFFBB64, __READ_WRITE, EIBD217_t);
__IOREG(EIBD218_BASE, 0xFFFFBB68, __READ_WRITE, EIBD218_t);
__IOREG(EIBD219_BASE, 0xFFFFBB6C, __READ_WRITE, EIBD219_t);
__IOREG(EIBD228_BASE, 0xFFFFBB90, __READ_WRITE, EIBD228_t);
__IOREG(EIBD229_BASE, 0xFFFFBB94, __READ_WRITE, EIBD229_t);
__IOREG(EIBD230_BASE, 0xFFFFBB98, __READ_WRITE, EIBD230_t);
__IOREG(EIBD231_BASE, 0xFFFFBB9C, __READ_WRITE, EIBD231_t);
__IOREG(EIBD232_BASE, 0xFFFFBBA0, __READ_WRITE, EIBD232_t);
__IOREG(EIBD233_BASE, 0xFFFFBBA4, __READ_WRITE, EIBD233_t);
__IOREG(EIBD234_BASE, 0xFFFFBBA8, __READ_WRITE, EIBD234_t);
__IOREG(EIBD235_BASE, 0xFFFFBBAC, __READ_WRITE, EIBD235_t);
__IOREG(EIBD236_BASE, 0xFFFFBBB0, __READ_WRITE, EIBD236_t);
__IOREG(EIBD237_BASE, 0xFFFFBBB4, __READ_WRITE, EIBD237_t);
__IOREG(EIBD238_BASE, 0xFFFFBBB8, __READ_WRITE, EIBD238_t);
__IOREG(EIBD239_BASE, 0xFFFFBBBC, __READ_WRITE, EIBD239_t);
__IOREG(EIBD240_BASE, 0xFFFFBBC0, __READ_WRITE, EIBD240_t);
__IOREG(EIBD241_BASE, 0xFFFFBBC4, __READ_WRITE, EIBD241_t);
__IOREG(EIBD242_BASE, 0xFFFFBBC8, __READ_WRITE, EIBD242_t);
__IOREG(EIBD243_BASE, 0xFFFFBBCC, __READ_WRITE, EIBD243_t);
__IOREG(EIBD244_BASE, 0xFFFFBBD0, __READ_WRITE, EIBD244_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define FEINTF0 FEINTF0_BASE.UINT32
#define FEINTF0_FEINTESTAT0 FEINTF0_BASE.BIT._FEINTESTAT0
#define FEINTF0_FEINTESTAT1 FEINTF0_BASE.BIT._FEINTESTAT1
#define FEINTF0_FEINTESTAT2 FEINTF0_BASE.BIT._FEINTESTAT2
#define FEINTFMSK0 FEINTFMSK0_BASE.UINT32
#define FEINTFMSK0_FEINTEMSK0 FEINTFMSK0_BASE.BIT._FEINTEMSK0
#define FEINTFMSK0_FEINTEMSK1 FEINTFMSK0_BASE.BIT._FEINTEMSK1
#define FEINTFMSK0_FEINTEMSK2 FEINTFMSK0_BASE.BIT._FEINTEMSK2
#define FEINTFC0 FEINTFC0_BASE.UINT32
#define FEINTFC0_FEINTECLR0 FEINTFC0_BASE.BIT._FEINTECLR0
#define FEINTFC0_FEINTECLR1 FEINTFC0_BASE.BIT._FEINTECLR1
#define FEINTFC0_FEINTECLR2 FEINTFC0_BASE.BIT._FEINTECLR2
#define EIC0 EIC0_BASE.UINT16
#define EIC0_P00 EIC0_BASE.BIT._P00
#define EIC0_P10 EIC0_BASE.BIT._P10
#define EIC0_P20 EIC0_BASE.BIT._P20
#define EIC0_P30 EIC0_BASE.BIT._P30
#define EIC0_TB0 EIC0_BASE.BIT._TB0
#define EIC0_MK0 EIC0_BASE.BIT._MK0
#define EIC0_RF0 EIC0_BASE.BIT._RF0
#define EIC0_CT0 EIC0_BASE.BIT._CT0
#define EIC3 EIC3_BASE.UINT16
#define EIC3_P03 EIC3_BASE.BIT._P03
#define EIC3_P13 EIC3_BASE.BIT._P13
#define EIC3_P23 EIC3_BASE.BIT._P23
#define EIC3_P33 EIC3_BASE.BIT._P33
#define EIC3_TB3 EIC3_BASE.BIT._TB3
#define EIC3_MK3 EIC3_BASE.BIT._MK3
#define EIC3_RF3 EIC3_BASE.BIT._RF3
#define EIC3_CT3 EIC3_BASE.BIT._CT3
#define EIC4 EIC4_BASE.UINT16
#define EIC4_P04 EIC4_BASE.BIT._P04
#define EIC4_P14 EIC4_BASE.BIT._P14
#define EIC4_P24 EIC4_BASE.BIT._P24
#define EIC4_P34 EIC4_BASE.BIT._P34
#define EIC4_TB4 EIC4_BASE.BIT._TB4
#define EIC4_MK4 EIC4_BASE.BIT._MK4
#define EIC4_RF4 EIC4_BASE.BIT._RF4
#define EIC4_CT4 EIC4_BASE.BIT._CT4
#define EIC5 EIC5_BASE.UINT16
#define EIC5_P05 EIC5_BASE.BIT._P05
#define EIC5_P15 EIC5_BASE.BIT._P15
#define EIC5_P25 EIC5_BASE.BIT._P25
#define EIC5_P35 EIC5_BASE.BIT._P35
#define EIC5_TB5 EIC5_BASE.BIT._TB5
#define EIC5_MK5 EIC5_BASE.BIT._MK5
#define EIC5_RF5 EIC5_BASE.BIT._RF5
#define EIC5_CT5 EIC5_BASE.BIT._CT5
#define EIC6 EIC6_BASE.UINT16
#define EIC6_P06 EIC6_BASE.BIT._P06
#define EIC6_P16 EIC6_BASE.BIT._P16
#define EIC6_P26 EIC6_BASE.BIT._P26
#define EIC6_P36 EIC6_BASE.BIT._P36
#define EIC6_TB6 EIC6_BASE.BIT._TB6
#define EIC6_MK6 EIC6_BASE.BIT._MK6
#define EIC6_RF6 EIC6_BASE.BIT._RF6
#define EIC6_CT6 EIC6_BASE.BIT._CT6
#define EIC7 EIC7_BASE.UINT16
#define EIC7_P07 EIC7_BASE.BIT._P07
#define EIC7_P17 EIC7_BASE.BIT._P17
#define EIC7_P27 EIC7_BASE.BIT._P27
#define EIC7_P37 EIC7_BASE.BIT._P37
#define EIC7_TB7 EIC7_BASE.BIT._TB7
#define EIC7_MK7 EIC7_BASE.BIT._MK7
#define EIC7_RF7 EIC7_BASE.BIT._RF7
#define EIC7_CT7 EIC7_BASE.BIT._CT7
#define EIC8 EIC8_BASE.UINT16
#define EIC8_P08 EIC8_BASE.BIT._P08
#define EIC8_P18 EIC8_BASE.BIT._P18
#define EIC8_P28 EIC8_BASE.BIT._P28
#define EIC8_P38 EIC8_BASE.BIT._P38
#define EIC8_TB8 EIC8_BASE.BIT._TB8
#define EIC8_MK8 EIC8_BASE.BIT._MK8
#define EIC8_RF8 EIC8_BASE.BIT._RF8
#define EIC8_CT8 EIC8_BASE.BIT._CT8
#define EIC9 EIC9_BASE.UINT16
#define EIC9_P09 EIC9_BASE.BIT._P09
#define EIC9_P19 EIC9_BASE.BIT._P19
#define EIC9_P29 EIC9_BASE.BIT._P29
#define EIC9_P39 EIC9_BASE.BIT._P39
#define EIC9_TB9 EIC9_BASE.BIT._TB9
#define EIC9_MK9 EIC9_BASE.BIT._MK9
#define EIC9_RF9 EIC9_BASE.BIT._RF9
#define EIC9_CT9 EIC9_BASE.BIT._CT9
#define EIC10 EIC10_BASE.UINT16
#define EIC10_P010 EIC10_BASE.BIT._P010
#define EIC10_P110 EIC10_BASE.BIT._P110
#define EIC10_P210 EIC10_BASE.BIT._P210
#define EIC10_P310 EIC10_BASE.BIT._P310
#define EIC10_TB10 EIC10_BASE.BIT._TB10
#define EIC10_MK10 EIC10_BASE.BIT._MK10
#define EIC10_RF10 EIC10_BASE.BIT._RF10
#define EIC10_CT10 EIC10_BASE.BIT._CT10
#define EIC11 EIC11_BASE.UINT16
#define EIC11_P011 EIC11_BASE.BIT._P011
#define EIC11_P111 EIC11_BASE.BIT._P111
#define EIC11_P211 EIC11_BASE.BIT._P211
#define EIC11_P311 EIC11_BASE.BIT._P311
#define EIC11_TB11 EIC11_BASE.BIT._TB11
#define EIC11_MK11 EIC11_BASE.BIT._MK11
#define EIC11_RF11 EIC11_BASE.BIT._RF11
#define EIC11_CT11 EIC11_BASE.BIT._CT11
#define EIC12 EIC12_BASE.UINT16
#define EIC12_P012 EIC12_BASE.BIT._P012
#define EIC12_P112 EIC12_BASE.BIT._P112
#define EIC12_P212 EIC12_BASE.BIT._P212
#define EIC12_P312 EIC12_BASE.BIT._P312
#define EIC12_TB12 EIC12_BASE.BIT._TB12
#define EIC12_MK12 EIC12_BASE.BIT._MK12
#define EIC12_RF12 EIC12_BASE.BIT._RF12
#define EIC12_CT12 EIC12_BASE.BIT._CT12
#define EIC13 EIC13_BASE.UINT16
#define EIC13_P013 EIC13_BASE.BIT._P013
#define EIC13_P113 EIC13_BASE.BIT._P113
#define EIC13_P213 EIC13_BASE.BIT._P213
#define EIC13_P313 EIC13_BASE.BIT._P313
#define EIC13_TB13 EIC13_BASE.BIT._TB13
#define EIC13_MK13 EIC13_BASE.BIT._MK13
#define EIC13_RF13 EIC13_BASE.BIT._RF13
#define EIC13_CT13 EIC13_BASE.BIT._CT13
#define EIC14 EIC14_BASE.UINT16
#define EIC14_P014 EIC14_BASE.BIT._P014
#define EIC14_P114 EIC14_BASE.BIT._P114
#define EIC14_P214 EIC14_BASE.BIT._P214
#define EIC14_P314 EIC14_BASE.BIT._P314
#define EIC14_TB14 EIC14_BASE.BIT._TB14
#define EIC14_MK14 EIC14_BASE.BIT._MK14
#define EIC14_RF14 EIC14_BASE.BIT._RF14
#define EIC14_CT14 EIC14_BASE.BIT._CT14
#define EIC15 EIC15_BASE.UINT16
#define EIC15_P015 EIC15_BASE.BIT._P015
#define EIC15_P115 EIC15_BASE.BIT._P115
#define EIC15_P215 EIC15_BASE.BIT._P215
#define EIC15_P315 EIC15_BASE.BIT._P315
#define EIC15_TB15 EIC15_BASE.BIT._TB15
#define EIC15_MK15 EIC15_BASE.BIT._MK15
#define EIC15_RF15 EIC15_BASE.BIT._RF15
#define EIC15_CT15 EIC15_BASE.BIT._CT15
#define EIC16 EIC16_BASE.UINT16
#define EIC16_P016 EIC16_BASE.BIT._P016
#define EIC16_P116 EIC16_BASE.BIT._P116
#define EIC16_P216 EIC16_BASE.BIT._P216
#define EIC16_P316 EIC16_BASE.BIT._P316
#define EIC16_TB16 EIC16_BASE.BIT._TB16
#define EIC16_MK16 EIC16_BASE.BIT._MK16
#define EIC16_RF16 EIC16_BASE.BIT._RF16
#define EIC16_CT16 EIC16_BASE.BIT._CT16
#define EIC17 EIC17_BASE.UINT16
#define EIC17_P017 EIC17_BASE.BIT._P017
#define EIC17_P117 EIC17_BASE.BIT._P117
#define EIC17_P217 EIC17_BASE.BIT._P217
#define EIC17_P317 EIC17_BASE.BIT._P317
#define EIC17_TB17 EIC17_BASE.BIT._TB17
#define EIC17_MK17 EIC17_BASE.BIT._MK17
#define EIC17_RF17 EIC17_BASE.BIT._RF17
#define EIC17_CT17 EIC17_BASE.BIT._CT17
#define EIC18 EIC18_BASE.UINT16
#define EIC18_P018 EIC18_BASE.BIT._P018
#define EIC18_P118 EIC18_BASE.BIT._P118
#define EIC18_P218 EIC18_BASE.BIT._P218
#define EIC18_P318 EIC18_BASE.BIT._P318
#define EIC18_TB18 EIC18_BASE.BIT._TB18
#define EIC18_MK18 EIC18_BASE.BIT._MK18
#define EIC18_RF18 EIC18_BASE.BIT._RF18
#define EIC18_CT18 EIC18_BASE.BIT._CT18
#define EIC19 EIC19_BASE.UINT16
#define EIC19_P019 EIC19_BASE.BIT._P019
#define EIC19_P119 EIC19_BASE.BIT._P119
#define EIC19_P219 EIC19_BASE.BIT._P219
#define EIC19_P319 EIC19_BASE.BIT._P319
#define EIC19_TB19 EIC19_BASE.BIT._TB19
#define EIC19_MK19 EIC19_BASE.BIT._MK19
#define EIC19_RF19 EIC19_BASE.BIT._RF19
#define EIC19_CT19 EIC19_BASE.BIT._CT19
#define EIC20 EIC20_BASE.UINT16
#define EIC20_P020 EIC20_BASE.BIT._P020
#define EIC20_P120 EIC20_BASE.BIT._P120
#define EIC20_P220 EIC20_BASE.BIT._P220
#define EIC20_P320 EIC20_BASE.BIT._P320
#define EIC20_TB20 EIC20_BASE.BIT._TB20
#define EIC20_MK20 EIC20_BASE.BIT._MK20
#define EIC20_RF20 EIC20_BASE.BIT._RF20
#define EIC20_CT20 EIC20_BASE.BIT._CT20
#define EIC21 EIC21_BASE.UINT16
#define EIC21_P021 EIC21_BASE.BIT._P021
#define EIC21_P121 EIC21_BASE.BIT._P121
#define EIC21_P221 EIC21_BASE.BIT._P221
#define EIC21_P321 EIC21_BASE.BIT._P321
#define EIC21_TB21 EIC21_BASE.BIT._TB21
#define EIC21_MK21 EIC21_BASE.BIT._MK21
#define EIC21_RF21 EIC21_BASE.BIT._RF21
#define EIC21_CT21 EIC21_BASE.BIT._CT21
#define EIC22 EIC22_BASE.UINT16
#define EIC22_P022 EIC22_BASE.BIT._P022
#define EIC22_P122 EIC22_BASE.BIT._P122
#define EIC22_P222 EIC22_BASE.BIT._P222
#define EIC22_P322 EIC22_BASE.BIT._P322
#define EIC22_TB22 EIC22_BASE.BIT._TB22
#define EIC22_MK22 EIC22_BASE.BIT._MK22
#define EIC22_RF22 EIC22_BASE.BIT._RF22
#define EIC22_CT22 EIC22_BASE.BIT._CT22
#define EIC23 EIC23_BASE.UINT16
#define EIC23_P023 EIC23_BASE.BIT._P023
#define EIC23_P123 EIC23_BASE.BIT._P123
#define EIC23_P223 EIC23_BASE.BIT._P223
#define EIC23_P323 EIC23_BASE.BIT._P323
#define EIC23_TB23 EIC23_BASE.BIT._TB23
#define EIC23_MK23 EIC23_BASE.BIT._MK23
#define EIC23_RF23 EIC23_BASE.BIT._RF23
#define EIC23_CT23 EIC23_BASE.BIT._CT23
#define EIC24 EIC24_BASE.UINT16
#define EIC24_P024 EIC24_BASE.BIT._P024
#define EIC24_P124 EIC24_BASE.BIT._P124
#define EIC24_P224 EIC24_BASE.BIT._P224
#define EIC24_P324 EIC24_BASE.BIT._P324
#define EIC24_TB24 EIC24_BASE.BIT._TB24
#define EIC24_MK24 EIC24_BASE.BIT._MK24
#define EIC24_RF24 EIC24_BASE.BIT._RF24
#define EIC24_CT24 EIC24_BASE.BIT._CT24
#define EIC25 EIC25_BASE.UINT16
#define EIC25_P025 EIC25_BASE.BIT._P025
#define EIC25_P125 EIC25_BASE.BIT._P125
#define EIC25_P225 EIC25_BASE.BIT._P225
#define EIC25_P325 EIC25_BASE.BIT._P325
#define EIC25_TB25 EIC25_BASE.BIT._TB25
#define EIC25_MK25 EIC25_BASE.BIT._MK25
#define EIC25_RF25 EIC25_BASE.BIT._RF25
#define EIC25_CT25 EIC25_BASE.BIT._CT25
#define EIC26 EIC26_BASE.UINT16
#define EIC26_P026 EIC26_BASE.BIT._P026
#define EIC26_P126 EIC26_BASE.BIT._P126
#define EIC26_P226 EIC26_BASE.BIT._P226
#define EIC26_P326 EIC26_BASE.BIT._P326
#define EIC26_TB26 EIC26_BASE.BIT._TB26
#define EIC26_MK26 EIC26_BASE.BIT._MK26
#define EIC26_RF26 EIC26_BASE.BIT._RF26
#define EIC26_CT26 EIC26_BASE.BIT._CT26
#define EIC27 EIC27_BASE.UINT16
#define EIC27_P027 EIC27_BASE.BIT._P027
#define EIC27_P127 EIC27_BASE.BIT._P127
#define EIC27_P227 EIC27_BASE.BIT._P227
#define EIC27_P327 EIC27_BASE.BIT._P327
#define EIC27_TB27 EIC27_BASE.BIT._TB27
#define EIC27_MK27 EIC27_BASE.BIT._MK27
#define EIC27_RF27 EIC27_BASE.BIT._RF27
#define EIC27_CT27 EIC27_BASE.BIT._CT27
#define EIC28 EIC28_BASE.UINT16
#define EIC28_P028 EIC28_BASE.BIT._P028
#define EIC28_P128 EIC28_BASE.BIT._P128
#define EIC28_P228 EIC28_BASE.BIT._P228
#define EIC28_P328 EIC28_BASE.BIT._P328
#define EIC28_TB28 EIC28_BASE.BIT._TB28
#define EIC28_MK28 EIC28_BASE.BIT._MK28
#define EIC28_RF28 EIC28_BASE.BIT._RF28
#define EIC28_CT28 EIC28_BASE.BIT._CT28
#define EIC29 EIC29_BASE.UINT16
#define EIC29_P029 EIC29_BASE.BIT._P029
#define EIC29_P129 EIC29_BASE.BIT._P129
#define EIC29_P229 EIC29_BASE.BIT._P229
#define EIC29_P329 EIC29_BASE.BIT._P329
#define EIC29_TB29 EIC29_BASE.BIT._TB29
#define EIC29_MK29 EIC29_BASE.BIT._MK29
#define EIC29_RF29 EIC29_BASE.BIT._RF29
#define EIC29_CT29 EIC29_BASE.BIT._CT29
#define EIC30 EIC30_BASE.UINT16
#define EIC30_P030 EIC30_BASE.BIT._P030
#define EIC30_P130 EIC30_BASE.BIT._P130
#define EIC30_P230 EIC30_BASE.BIT._P230
#define EIC30_P330 EIC30_BASE.BIT._P330
#define EIC30_TB30 EIC30_BASE.BIT._TB30
#define EIC30_MK30 EIC30_BASE.BIT._MK30
#define EIC30_RF30 EIC30_BASE.BIT._RF30
#define EIC30_CT30 EIC30_BASE.BIT._CT30
#define EIC31 EIC31_BASE.UINT16
#define EIC31_P031 EIC31_BASE.BIT._P031
#define EIC31_P131 EIC31_BASE.BIT._P131
#define EIC31_P231 EIC31_BASE.BIT._P231
#define EIC31_P331 EIC31_BASE.BIT._P331
#define EIC31_TB31 EIC31_BASE.BIT._TB31
#define EIC31_MK31 EIC31_BASE.BIT._MK31
#define EIC31_RF31 EIC31_BASE.BIT._RF31
#define EIC31_CT31 EIC31_BASE.BIT._CT31
#define INTCFNC INTCFNC_BASE.UINT16
#define INTCFNC_FNRF INTCFNC_BASE.BIT._FNRF
#define INTCFNC_FNCT INTCFNC_BASE.BIT._FNCT
#define FIC FIC_BASE.UINT16
#define FIC_FIRF FIC_BASE.BIT._FIRF
#define FIC_FICT FIC_BASE.BIT._FICT
#define IMR0 IMR0_BASE.UINT32
#define IMR0_IMR0EIKM0 IMR0_BASE.BIT._IMR0EIKM0
#define IMR0_IMR0EIKM1 IMR0_BASE.BIT._IMR0EIKM1
#define IMR0_IMR0EIKM2 IMR0_BASE.BIT._IMR0EIKM2
#define IMR0_IMR0EIKM3 IMR0_BASE.BIT._IMR0EIKM3
#define IMR0_IMR0EIKM4 IMR0_BASE.BIT._IMR0EIKM4
#define IMR0_IMR0EIKM5 IMR0_BASE.BIT._IMR0EIKM5
#define IMR0_IMR0EIKM6 IMR0_BASE.BIT._IMR0EIKM6
#define IMR0_IMR0EIKM7 IMR0_BASE.BIT._IMR0EIKM7
#define IMR0_IMR0EIKM8 IMR0_BASE.BIT._IMR0EIKM8
#define IMR0_IMR0EIKM9 IMR0_BASE.BIT._IMR0EIKM9
#define IMR0_IMR0EIKM10 IMR0_BASE.BIT._IMR0EIKM10
#define IMR0_IMR0EIKM11 IMR0_BASE.BIT._IMR0EIKM11
#define IMR0_IMR0EIKM12 IMR0_BASE.BIT._IMR0EIKM12
#define IMR0_IMR0EIKM13 IMR0_BASE.BIT._IMR0EIKM13
#define IMR0_IMR0EIKM14 IMR0_BASE.BIT._IMR0EIKM14
#define IMR0_IMR0EIKM15 IMR0_BASE.BIT._IMR0EIKM15
#define IMR0_IMR0EIKM16 IMR0_BASE.BIT._IMR0EIKM16
#define IMR0_IMR0EIKM17 IMR0_BASE.BIT._IMR0EIKM17
#define IMR0_IMR0EIKM18 IMR0_BASE.BIT._IMR0EIKM18
#define IMR0_IMR0EIKM19 IMR0_BASE.BIT._IMR0EIKM19
#define IMR0_IMR0EIKM20 IMR0_BASE.BIT._IMR0EIKM20
#define IMR0_IMR0EIKM21 IMR0_BASE.BIT._IMR0EIKM21
#define IMR0_IMR0EIKM22 IMR0_BASE.BIT._IMR0EIKM22
#define IMR0_IMR0EIKM23 IMR0_BASE.BIT._IMR0EIKM23
#define IMR0_IMR0EIKM24 IMR0_BASE.BIT._IMR0EIKM24
#define IMR0_IMR0EIKM25 IMR0_BASE.BIT._IMR0EIKM25
#define IMR0_IMR0EIKM26 IMR0_BASE.BIT._IMR0EIKM26
#define IMR0_IMR0EIKM27 IMR0_BASE.BIT._IMR0EIKM27
#define IMR0_IMR0EIKM28 IMR0_BASE.BIT._IMR0EIKM28
#define IMR0_IMR0EIKM29 IMR0_BASE.BIT._IMR0EIKM29
#define IMR0_IMR0EIKM30 IMR0_BASE.BIT._IMR0EIKM30
#define IMR0_IMR0EIKM31 IMR0_BASE.BIT._IMR0EIKM31
#define EIBD0 EIBD0_BASE.UINT32
#define EIBD0_PEID00 EIBD0_BASE.BIT._PEID00
#define EIBD0_PEID10 EIBD0_BASE.BIT._PEID10
#define EIBD0_PEID20 EIBD0_BASE.BIT._PEID20
#define EIBD0_GPID00 EIBD0_BASE.BIT._GPID00
#define EIBD0_GPID10 EIBD0_BASE.BIT._GPID10
#define EIBD0_GPID20 EIBD0_BASE.BIT._GPID20
#define EIBD0_BCP00 EIBD0_BASE.BIT._BCP00
#define EIBD0_BCP10 EIBD0_BASE.BIT._BCP10
#define EIBD0_BCP20 EIBD0_BASE.BIT._BCP20
#define EIBD0_CST EIBD0_BASE.BIT._CST
#define EIBD3 EIBD3_BASE.UINT32
#define EIBD3_PEID03 EIBD3_BASE.BIT._PEID03
#define EIBD3_PEID13 EIBD3_BASE.BIT._PEID13
#define EIBD3_PEID23 EIBD3_BASE.BIT._PEID23
#define EIBD3_GPID03 EIBD3_BASE.BIT._GPID03
#define EIBD3_GPID13 EIBD3_BASE.BIT._GPID13
#define EIBD3_GPID23 EIBD3_BASE.BIT._GPID23
#define EIBD3_BCP03 EIBD3_BASE.BIT._BCP03
#define EIBD3_BCP13 EIBD3_BASE.BIT._BCP13
#define EIBD3_BCP23 EIBD3_BASE.BIT._BCP23
#define EIBD3_CST EIBD3_BASE.BIT._CST
#define EIBD4 EIBD4_BASE.UINT32
#define EIBD4_PEID04 EIBD4_BASE.BIT._PEID04
#define EIBD4_PEID14 EIBD4_BASE.BIT._PEID14
#define EIBD4_PEID24 EIBD4_BASE.BIT._PEID24
#define EIBD4_GPID04 EIBD4_BASE.BIT._GPID04
#define EIBD4_GPID14 EIBD4_BASE.BIT._GPID14
#define EIBD4_GPID24 EIBD4_BASE.BIT._GPID24
#define EIBD4_BCP04 EIBD4_BASE.BIT._BCP04
#define EIBD4_BCP14 EIBD4_BASE.BIT._BCP14
#define EIBD4_BCP24 EIBD4_BASE.BIT._BCP24
#define EIBD4_CST EIBD4_BASE.BIT._CST
#define EIBD5 EIBD5_BASE.UINT32
#define EIBD5_PEID05 EIBD5_BASE.BIT._PEID05
#define EIBD5_PEID15 EIBD5_BASE.BIT._PEID15
#define EIBD5_PEID25 EIBD5_BASE.BIT._PEID25
#define EIBD5_GPID05 EIBD5_BASE.BIT._GPID05
#define EIBD5_GPID15 EIBD5_BASE.BIT._GPID15
#define EIBD5_GPID25 EIBD5_BASE.BIT._GPID25
#define EIBD5_BCP05 EIBD5_BASE.BIT._BCP05
#define EIBD5_BCP15 EIBD5_BASE.BIT._BCP15
#define EIBD5_BCP25 EIBD5_BASE.BIT._BCP25
#define EIBD5_CST EIBD5_BASE.BIT._CST
#define EIBD6 EIBD6_BASE.UINT32
#define EIBD6_PEID06 EIBD6_BASE.BIT._PEID06
#define EIBD6_PEID16 EIBD6_BASE.BIT._PEID16
#define EIBD6_PEID26 EIBD6_BASE.BIT._PEID26
#define EIBD6_GPID06 EIBD6_BASE.BIT._GPID06
#define EIBD6_GPID16 EIBD6_BASE.BIT._GPID16
#define EIBD6_GPID26 EIBD6_BASE.BIT._GPID26
#define EIBD6_BCP06 EIBD6_BASE.BIT._BCP06
#define EIBD6_BCP16 EIBD6_BASE.BIT._BCP16
#define EIBD6_BCP26 EIBD6_BASE.BIT._BCP26
#define EIBD6_CST EIBD6_BASE.BIT._CST
#define EIBD7 EIBD7_BASE.UINT32
#define EIBD7_PEID07 EIBD7_BASE.BIT._PEID07
#define EIBD7_PEID17 EIBD7_BASE.BIT._PEID17
#define EIBD7_PEID27 EIBD7_BASE.BIT._PEID27
#define EIBD7_GPID07 EIBD7_BASE.BIT._GPID07
#define EIBD7_GPID17 EIBD7_BASE.BIT._GPID17
#define EIBD7_GPID27 EIBD7_BASE.BIT._GPID27
#define EIBD7_BCP07 EIBD7_BASE.BIT._BCP07
#define EIBD7_BCP17 EIBD7_BASE.BIT._BCP17
#define EIBD7_BCP27 EIBD7_BASE.BIT._BCP27
#define EIBD7_CST EIBD7_BASE.BIT._CST
#define EIBD8 EIBD8_BASE.UINT32
#define EIBD8_PEID08 EIBD8_BASE.BIT._PEID08
#define EIBD8_PEID18 EIBD8_BASE.BIT._PEID18
#define EIBD8_PEID28 EIBD8_BASE.BIT._PEID28
#define EIBD8_GPID08 EIBD8_BASE.BIT._GPID08
#define EIBD8_GPID18 EIBD8_BASE.BIT._GPID18
#define EIBD8_GPID28 EIBD8_BASE.BIT._GPID28
#define EIBD8_BCP08 EIBD8_BASE.BIT._BCP08
#define EIBD8_BCP18 EIBD8_BASE.BIT._BCP18
#define EIBD8_BCP28 EIBD8_BASE.BIT._BCP28
#define EIBD8_CST EIBD8_BASE.BIT._CST
#define EIBD9 EIBD9_BASE.UINT32
#define EIBD9_PEID09 EIBD9_BASE.BIT._PEID09
#define EIBD9_PEID19 EIBD9_BASE.BIT._PEID19
#define EIBD9_PEID29 EIBD9_BASE.BIT._PEID29
#define EIBD9_GPID09 EIBD9_BASE.BIT._GPID09
#define EIBD9_GPID19 EIBD9_BASE.BIT._GPID19
#define EIBD9_GPID29 EIBD9_BASE.BIT._GPID29
#define EIBD9_BCP09 EIBD9_BASE.BIT._BCP09
#define EIBD9_BCP19 EIBD9_BASE.BIT._BCP19
#define EIBD9_BCP29 EIBD9_BASE.BIT._BCP29
#define EIBD9_CST EIBD9_BASE.BIT._CST
#define EIBD10 EIBD10_BASE.UINT32
#define EIBD10_PEID010 EIBD10_BASE.BIT._PEID010
#define EIBD10_PEID110 EIBD10_BASE.BIT._PEID110
#define EIBD10_PEID210 EIBD10_BASE.BIT._PEID210
#define EIBD10_GPID010 EIBD10_BASE.BIT._GPID010
#define EIBD10_GPID110 EIBD10_BASE.BIT._GPID110
#define EIBD10_GPID210 EIBD10_BASE.BIT._GPID210
#define EIBD10_BCP010 EIBD10_BASE.BIT._BCP010
#define EIBD10_BCP110 EIBD10_BASE.BIT._BCP110
#define EIBD10_BCP210 EIBD10_BASE.BIT._BCP210
#define EIBD10_CST EIBD10_BASE.BIT._CST
#define EIBD11 EIBD11_BASE.UINT32
#define EIBD11_PEID011 EIBD11_BASE.BIT._PEID011
#define EIBD11_PEID111 EIBD11_BASE.BIT._PEID111
#define EIBD11_PEID211 EIBD11_BASE.BIT._PEID211
#define EIBD11_GPID011 EIBD11_BASE.BIT._GPID011
#define EIBD11_GPID111 EIBD11_BASE.BIT._GPID111
#define EIBD11_GPID211 EIBD11_BASE.BIT._GPID211
#define EIBD11_BCP011 EIBD11_BASE.BIT._BCP011
#define EIBD11_BCP111 EIBD11_BASE.BIT._BCP111
#define EIBD11_BCP211 EIBD11_BASE.BIT._BCP211
#define EIBD11_CST EIBD11_BASE.BIT._CST
#define EIBD12 EIBD12_BASE.UINT32
#define EIBD12_PEID012 EIBD12_BASE.BIT._PEID012
#define EIBD12_PEID112 EIBD12_BASE.BIT._PEID112
#define EIBD12_PEID212 EIBD12_BASE.BIT._PEID212
#define EIBD12_GPID012 EIBD12_BASE.BIT._GPID012
#define EIBD12_GPID112 EIBD12_BASE.BIT._GPID112
#define EIBD12_GPID212 EIBD12_BASE.BIT._GPID212
#define EIBD12_BCP012 EIBD12_BASE.BIT._BCP012
#define EIBD12_BCP112 EIBD12_BASE.BIT._BCP112
#define EIBD12_BCP212 EIBD12_BASE.BIT._BCP212
#define EIBD12_CST EIBD12_BASE.BIT._CST
#define EIBD13 EIBD13_BASE.UINT32
#define EIBD13_PEID013 EIBD13_BASE.BIT._PEID013
#define EIBD13_PEID113 EIBD13_BASE.BIT._PEID113
#define EIBD13_PEID213 EIBD13_BASE.BIT._PEID213
#define EIBD13_GPID013 EIBD13_BASE.BIT._GPID013
#define EIBD13_GPID113 EIBD13_BASE.BIT._GPID113
#define EIBD13_GPID213 EIBD13_BASE.BIT._GPID213
#define EIBD13_BCP013 EIBD13_BASE.BIT._BCP013
#define EIBD13_BCP113 EIBD13_BASE.BIT._BCP113
#define EIBD13_BCP213 EIBD13_BASE.BIT._BCP213
#define EIBD13_CST EIBD13_BASE.BIT._CST
#define EIBD14 EIBD14_BASE.UINT32
#define EIBD14_PEID014 EIBD14_BASE.BIT._PEID014
#define EIBD14_PEID114 EIBD14_BASE.BIT._PEID114
#define EIBD14_PEID214 EIBD14_BASE.BIT._PEID214
#define EIBD14_GPID014 EIBD14_BASE.BIT._GPID014
#define EIBD14_GPID114 EIBD14_BASE.BIT._GPID114
#define EIBD14_GPID214 EIBD14_BASE.BIT._GPID214
#define EIBD14_BCP014 EIBD14_BASE.BIT._BCP014
#define EIBD14_BCP114 EIBD14_BASE.BIT._BCP114
#define EIBD14_BCP214 EIBD14_BASE.BIT._BCP214
#define EIBD14_CST EIBD14_BASE.BIT._CST
#define EIBD15 EIBD15_BASE.UINT32
#define EIBD15_PEID015 EIBD15_BASE.BIT._PEID015
#define EIBD15_PEID115 EIBD15_BASE.BIT._PEID115
#define EIBD15_PEID215 EIBD15_BASE.BIT._PEID215
#define EIBD15_GPID015 EIBD15_BASE.BIT._GPID015
#define EIBD15_GPID115 EIBD15_BASE.BIT._GPID115
#define EIBD15_GPID215 EIBD15_BASE.BIT._GPID215
#define EIBD15_BCP015 EIBD15_BASE.BIT._BCP015
#define EIBD15_BCP115 EIBD15_BASE.BIT._BCP115
#define EIBD15_BCP215 EIBD15_BASE.BIT._BCP215
#define EIBD15_CST EIBD15_BASE.BIT._CST
#define EIBD16 EIBD16_BASE.UINT32
#define EIBD16_PEID016 EIBD16_BASE.BIT._PEID016
#define EIBD16_PEID116 EIBD16_BASE.BIT._PEID116
#define EIBD16_PEID216 EIBD16_BASE.BIT._PEID216
#define EIBD16_GPID016 EIBD16_BASE.BIT._GPID016
#define EIBD16_GPID116 EIBD16_BASE.BIT._GPID116
#define EIBD16_GPID216 EIBD16_BASE.BIT._GPID216
#define EIBD16_BCP016 EIBD16_BASE.BIT._BCP016
#define EIBD16_BCP116 EIBD16_BASE.BIT._BCP116
#define EIBD16_BCP216 EIBD16_BASE.BIT._BCP216
#define EIBD16_CST EIBD16_BASE.BIT._CST
#define EIBD17 EIBD17_BASE.UINT32
#define EIBD17_PEID017 EIBD17_BASE.BIT._PEID017
#define EIBD17_PEID117 EIBD17_BASE.BIT._PEID117
#define EIBD17_PEID217 EIBD17_BASE.BIT._PEID217
#define EIBD17_GPID017 EIBD17_BASE.BIT._GPID017
#define EIBD17_GPID117 EIBD17_BASE.BIT._GPID117
#define EIBD17_GPID217 EIBD17_BASE.BIT._GPID217
#define EIBD17_BCP017 EIBD17_BASE.BIT._BCP017
#define EIBD17_BCP117 EIBD17_BASE.BIT._BCP117
#define EIBD17_BCP217 EIBD17_BASE.BIT._BCP217
#define EIBD17_CST EIBD17_BASE.BIT._CST
#define EIBD18 EIBD18_BASE.UINT32
#define EIBD18_PEID018 EIBD18_BASE.BIT._PEID018
#define EIBD18_PEID118 EIBD18_BASE.BIT._PEID118
#define EIBD18_PEID218 EIBD18_BASE.BIT._PEID218
#define EIBD18_GPID018 EIBD18_BASE.BIT._GPID018
#define EIBD18_GPID118 EIBD18_BASE.BIT._GPID118
#define EIBD18_GPID218 EIBD18_BASE.BIT._GPID218
#define EIBD18_BCP018 EIBD18_BASE.BIT._BCP018
#define EIBD18_BCP118 EIBD18_BASE.BIT._BCP118
#define EIBD18_BCP218 EIBD18_BASE.BIT._BCP218
#define EIBD18_CST EIBD18_BASE.BIT._CST
#define EIBD19 EIBD19_BASE.UINT32
#define EIBD19_PEID019 EIBD19_BASE.BIT._PEID019
#define EIBD19_PEID119 EIBD19_BASE.BIT._PEID119
#define EIBD19_PEID219 EIBD19_BASE.BIT._PEID219
#define EIBD19_GPID019 EIBD19_BASE.BIT._GPID019
#define EIBD19_GPID119 EIBD19_BASE.BIT._GPID119
#define EIBD19_GPID219 EIBD19_BASE.BIT._GPID219
#define EIBD19_BCP019 EIBD19_BASE.BIT._BCP019
#define EIBD19_BCP119 EIBD19_BASE.BIT._BCP119
#define EIBD19_BCP219 EIBD19_BASE.BIT._BCP219
#define EIBD19_CST EIBD19_BASE.BIT._CST
#define EIBD20 EIBD20_BASE.UINT32
#define EIBD20_PEID020 EIBD20_BASE.BIT._PEID020
#define EIBD20_PEID120 EIBD20_BASE.BIT._PEID120
#define EIBD20_PEID220 EIBD20_BASE.BIT._PEID220
#define EIBD20_GPID020 EIBD20_BASE.BIT._GPID020
#define EIBD20_GPID120 EIBD20_BASE.BIT._GPID120
#define EIBD20_GPID220 EIBD20_BASE.BIT._GPID220
#define EIBD20_BCP020 EIBD20_BASE.BIT._BCP020
#define EIBD20_BCP120 EIBD20_BASE.BIT._BCP120
#define EIBD20_BCP220 EIBD20_BASE.BIT._BCP220
#define EIBD20_CST EIBD20_BASE.BIT._CST
#define EIBD21 EIBD21_BASE.UINT32
#define EIBD21_PEID021 EIBD21_BASE.BIT._PEID021
#define EIBD21_PEID121 EIBD21_BASE.BIT._PEID121
#define EIBD21_PEID221 EIBD21_BASE.BIT._PEID221
#define EIBD21_GPID021 EIBD21_BASE.BIT._GPID021
#define EIBD21_GPID121 EIBD21_BASE.BIT._GPID121
#define EIBD21_GPID221 EIBD21_BASE.BIT._GPID221
#define EIBD21_BCP021 EIBD21_BASE.BIT._BCP021
#define EIBD21_BCP121 EIBD21_BASE.BIT._BCP121
#define EIBD21_BCP221 EIBD21_BASE.BIT._BCP221
#define EIBD21_CST EIBD21_BASE.BIT._CST
#define EIBD22 EIBD22_BASE.UINT32
#define EIBD22_PEID022 EIBD22_BASE.BIT._PEID022
#define EIBD22_PEID122 EIBD22_BASE.BIT._PEID122
#define EIBD22_PEID222 EIBD22_BASE.BIT._PEID222
#define EIBD22_GPID022 EIBD22_BASE.BIT._GPID022
#define EIBD22_GPID122 EIBD22_BASE.BIT._GPID122
#define EIBD22_GPID222 EIBD22_BASE.BIT._GPID222
#define EIBD22_BCP022 EIBD22_BASE.BIT._BCP022
#define EIBD22_BCP122 EIBD22_BASE.BIT._BCP122
#define EIBD22_BCP222 EIBD22_BASE.BIT._BCP222
#define EIBD22_CST EIBD22_BASE.BIT._CST
#define EIBD23 EIBD23_BASE.UINT32
#define EIBD23_PEID023 EIBD23_BASE.BIT._PEID023
#define EIBD23_PEID123 EIBD23_BASE.BIT._PEID123
#define EIBD23_PEID223 EIBD23_BASE.BIT._PEID223
#define EIBD23_GPID023 EIBD23_BASE.BIT._GPID023
#define EIBD23_GPID123 EIBD23_BASE.BIT._GPID123
#define EIBD23_GPID223 EIBD23_BASE.BIT._GPID223
#define EIBD23_BCP023 EIBD23_BASE.BIT._BCP023
#define EIBD23_BCP123 EIBD23_BASE.BIT._BCP123
#define EIBD23_BCP223 EIBD23_BASE.BIT._BCP223
#define EIBD23_CST EIBD23_BASE.BIT._CST
#define EIBD24 EIBD24_BASE.UINT32
#define EIBD24_PEID024 EIBD24_BASE.BIT._PEID024
#define EIBD24_PEID124 EIBD24_BASE.BIT._PEID124
#define EIBD24_PEID224 EIBD24_BASE.BIT._PEID224
#define EIBD24_GPID024 EIBD24_BASE.BIT._GPID024
#define EIBD24_GPID124 EIBD24_BASE.BIT._GPID124
#define EIBD24_GPID224 EIBD24_BASE.BIT._GPID224
#define EIBD24_BCP024 EIBD24_BASE.BIT._BCP024
#define EIBD24_BCP124 EIBD24_BASE.BIT._BCP124
#define EIBD24_BCP224 EIBD24_BASE.BIT._BCP224
#define EIBD24_CST EIBD24_BASE.BIT._CST
#define EIBD25 EIBD25_BASE.UINT32
#define EIBD25_PEID025 EIBD25_BASE.BIT._PEID025
#define EIBD25_PEID125 EIBD25_BASE.BIT._PEID125
#define EIBD25_PEID225 EIBD25_BASE.BIT._PEID225
#define EIBD25_GPID025 EIBD25_BASE.BIT._GPID025
#define EIBD25_GPID125 EIBD25_BASE.BIT._GPID125
#define EIBD25_GPID225 EIBD25_BASE.BIT._GPID225
#define EIBD25_BCP025 EIBD25_BASE.BIT._BCP025
#define EIBD25_BCP125 EIBD25_BASE.BIT._BCP125
#define EIBD25_BCP225 EIBD25_BASE.BIT._BCP225
#define EIBD25_CST EIBD25_BASE.BIT._CST
#define EIBD26 EIBD26_BASE.UINT32
#define EIBD26_PEID026 EIBD26_BASE.BIT._PEID026
#define EIBD26_PEID126 EIBD26_BASE.BIT._PEID126
#define EIBD26_PEID226 EIBD26_BASE.BIT._PEID226
#define EIBD26_GPID026 EIBD26_BASE.BIT._GPID026
#define EIBD26_GPID126 EIBD26_BASE.BIT._GPID126
#define EIBD26_GPID226 EIBD26_BASE.BIT._GPID226
#define EIBD26_BCP026 EIBD26_BASE.BIT._BCP026
#define EIBD26_BCP126 EIBD26_BASE.BIT._BCP126
#define EIBD26_BCP226 EIBD26_BASE.BIT._BCP226
#define EIBD26_CST EIBD26_BASE.BIT._CST
#define EIBD27 EIBD27_BASE.UINT32
#define EIBD27_PEID027 EIBD27_BASE.BIT._PEID027
#define EIBD27_PEID127 EIBD27_BASE.BIT._PEID127
#define EIBD27_PEID227 EIBD27_BASE.BIT._PEID227
#define EIBD27_GPID027 EIBD27_BASE.BIT._GPID027
#define EIBD27_GPID127 EIBD27_BASE.BIT._GPID127
#define EIBD27_GPID227 EIBD27_BASE.BIT._GPID227
#define EIBD27_BCP027 EIBD27_BASE.BIT._BCP027
#define EIBD27_BCP127 EIBD27_BASE.BIT._BCP127
#define EIBD27_BCP227 EIBD27_BASE.BIT._BCP227
#define EIBD27_CST EIBD27_BASE.BIT._CST
#define EIBD28 EIBD28_BASE.UINT32
#define EIBD28_PEID028 EIBD28_BASE.BIT._PEID028
#define EIBD28_PEID128 EIBD28_BASE.BIT._PEID128
#define EIBD28_PEID228 EIBD28_BASE.BIT._PEID228
#define EIBD28_GPID028 EIBD28_BASE.BIT._GPID028
#define EIBD28_GPID128 EIBD28_BASE.BIT._GPID128
#define EIBD28_GPID228 EIBD28_BASE.BIT._GPID228
#define EIBD28_BCP028 EIBD28_BASE.BIT._BCP028
#define EIBD28_BCP128 EIBD28_BASE.BIT._BCP128
#define EIBD28_BCP228 EIBD28_BASE.BIT._BCP228
#define EIBD28_CST EIBD28_BASE.BIT._CST
#define EIBD29 EIBD29_BASE.UINT32
#define EIBD29_PEID029 EIBD29_BASE.BIT._PEID029
#define EIBD29_PEID129 EIBD29_BASE.BIT._PEID129
#define EIBD29_PEID229 EIBD29_BASE.BIT._PEID229
#define EIBD29_GPID029 EIBD29_BASE.BIT._GPID029
#define EIBD29_GPID129 EIBD29_BASE.BIT._GPID129
#define EIBD29_GPID229 EIBD29_BASE.BIT._GPID229
#define EIBD29_BCP029 EIBD29_BASE.BIT._BCP029
#define EIBD29_BCP129 EIBD29_BASE.BIT._BCP129
#define EIBD29_BCP229 EIBD29_BASE.BIT._BCP229
#define EIBD29_CST EIBD29_BASE.BIT._CST
#define EIBD30 EIBD30_BASE.UINT32
#define EIBD30_PEID030 EIBD30_BASE.BIT._PEID030
#define EIBD30_PEID130 EIBD30_BASE.BIT._PEID130
#define EIBD30_PEID230 EIBD30_BASE.BIT._PEID230
#define EIBD30_GPID030 EIBD30_BASE.BIT._GPID030
#define EIBD30_GPID130 EIBD30_BASE.BIT._GPID130
#define EIBD30_GPID230 EIBD30_BASE.BIT._GPID230
#define EIBD30_BCP030 EIBD30_BASE.BIT._BCP030
#define EIBD30_BCP130 EIBD30_BASE.BIT._BCP130
#define EIBD30_BCP230 EIBD30_BASE.BIT._BCP230
#define EIBD30_CST EIBD30_BASE.BIT._CST
#define EIBD31 EIBD31_BASE.UINT32
#define EIBD31_PEID031 EIBD31_BASE.BIT._PEID031
#define EIBD31_PEID131 EIBD31_BASE.BIT._PEID131
#define EIBD31_PEID231 EIBD31_BASE.BIT._PEID231
#define EIBD31_GPID031 EIBD31_BASE.BIT._GPID031
#define EIBD31_GPID131 EIBD31_BASE.BIT._GPID131
#define EIBD31_GPID231 EIBD31_BASE.BIT._GPID231
#define EIBD31_BCP031 EIBD31_BASE.BIT._BCP031
#define EIBD31_BCP131 EIBD31_BASE.BIT._BCP131
#define EIBD31_BCP231 EIBD31_BASE.BIT._BCP231
#define EIBD31_CST EIBD31_BASE.BIT._CST
#define EIC32 EIC32_BASE.UINT16
#define EIC32_P032 EIC32_BASE.BIT._P032
#define EIC32_P132 EIC32_BASE.BIT._P132
#define EIC32_P232 EIC32_BASE.BIT._P232
#define EIC32_P332 EIC32_BASE.BIT._P332
#define EIC32_TB32 EIC32_BASE.BIT._TB32
#define EIC32_MK32 EIC32_BASE.BIT._MK32
#define EIC32_RF32 EIC32_BASE.BIT._RF32
#define EIC32_CT32 EIC32_BASE.BIT._CT32
#define EIC33 EIC33_BASE.UINT16
#define EIC33_P033 EIC33_BASE.BIT._P033
#define EIC33_P133 EIC33_BASE.BIT._P133
#define EIC33_P233 EIC33_BASE.BIT._P233
#define EIC33_P333 EIC33_BASE.BIT._P333
#define EIC33_TB33 EIC33_BASE.BIT._TB33
#define EIC33_MK33 EIC33_BASE.BIT._MK33
#define EIC33_RF33 EIC33_BASE.BIT._RF33
#define EIC33_CT33 EIC33_BASE.BIT._CT33
#define EIC34 EIC34_BASE.UINT16
#define EIC34_P034 EIC34_BASE.BIT._P034
#define EIC34_P134 EIC34_BASE.BIT._P134
#define EIC34_P234 EIC34_BASE.BIT._P234
#define EIC34_P334 EIC34_BASE.BIT._P334
#define EIC34_TB34 EIC34_BASE.BIT._TB34
#define EIC34_MK34 EIC34_BASE.BIT._MK34
#define EIC34_RF34 EIC34_BASE.BIT._RF34
#define EIC34_CT34 EIC34_BASE.BIT._CT34
#define EIC35 EIC35_BASE.UINT16
#define EIC35_P035 EIC35_BASE.BIT._P035
#define EIC35_P135 EIC35_BASE.BIT._P135
#define EIC35_P235 EIC35_BASE.BIT._P235
#define EIC35_P335 EIC35_BASE.BIT._P335
#define EIC35_TB35 EIC35_BASE.BIT._TB35
#define EIC35_MK35 EIC35_BASE.BIT._MK35
#define EIC35_RF35 EIC35_BASE.BIT._RF35
#define EIC35_CT35 EIC35_BASE.BIT._CT35
#define EIC36 EIC36_BASE.UINT16
#define EIC37 EIC37_BASE.UINT16
#define EIC37_P037 EIC37_BASE.BIT._P037
#define EIC37_P137 EIC37_BASE.BIT._P137
#define EIC37_P237 EIC37_BASE.BIT._P237
#define EIC37_P337 EIC37_BASE.BIT._P337
#define EIC37_TB37 EIC37_BASE.BIT._TB37
#define EIC37_MK37 EIC37_BASE.BIT._MK37
#define EIC37_RF37 EIC37_BASE.BIT._RF37
#define EIC37_CT37 EIC37_BASE.BIT._CT37
#define EIC38 EIC38_BASE.UINT16
#define EIC38_P038 EIC38_BASE.BIT._P038
#define EIC38_P138 EIC38_BASE.BIT._P138
#define EIC38_P238 EIC38_BASE.BIT._P238
#define EIC38_P338 EIC38_BASE.BIT._P338
#define EIC38_TB38 EIC38_BASE.BIT._TB38
#define EIC38_MK38 EIC38_BASE.BIT._MK38
#define EIC38_RF38 EIC38_BASE.BIT._RF38
#define EIC38_CT38 EIC38_BASE.BIT._CT38
#define EIC39 EIC39_BASE.UINT16
#define EIC39_P039 EIC39_BASE.BIT._P039
#define EIC39_P139 EIC39_BASE.BIT._P139
#define EIC39_P239 EIC39_BASE.BIT._P239
#define EIC39_P339 EIC39_BASE.BIT._P339
#define EIC39_TB39 EIC39_BASE.BIT._TB39
#define EIC39_MK39 EIC39_BASE.BIT._MK39
#define EIC39_RF39 EIC39_BASE.BIT._RF39
#define EIC39_CT39 EIC39_BASE.BIT._CT39
#define EIC40 EIC40_BASE.UINT16
#define EIC40_P040 EIC40_BASE.BIT._P040
#define EIC40_P140 EIC40_BASE.BIT._P140
#define EIC40_P240 EIC40_BASE.BIT._P240
#define EIC40_P340 EIC40_BASE.BIT._P340
#define EIC40_TB40 EIC40_BASE.BIT._TB40
#define EIC40_MK40 EIC40_BASE.BIT._MK40
#define EIC40_RF40 EIC40_BASE.BIT._RF40
#define EIC40_CT40 EIC40_BASE.BIT._CT40
#define EIC41 EIC41_BASE.UINT16
#define EIC41_P041 EIC41_BASE.BIT._P041
#define EIC41_P141 EIC41_BASE.BIT._P141
#define EIC41_P241 EIC41_BASE.BIT._P241
#define EIC41_P341 EIC41_BASE.BIT._P341
#define EIC41_TB41 EIC41_BASE.BIT._TB41
#define EIC41_MK41 EIC41_BASE.BIT._MK41
#define EIC41_RF41 EIC41_BASE.BIT._RF41
#define EIC41_CT41 EIC41_BASE.BIT._CT41
#define EIC42 EIC42_BASE.UINT16
#define EIC42_P042 EIC42_BASE.BIT._P042
#define EIC42_P142 EIC42_BASE.BIT._P142
#define EIC42_P242 EIC42_BASE.BIT._P242
#define EIC42_P342 EIC42_BASE.BIT._P342
#define EIC42_TB42 EIC42_BASE.BIT._TB42
#define EIC42_MK42 EIC42_BASE.BIT._MK42
#define EIC42_RF42 EIC42_BASE.BIT._RF42
#define EIC42_CT42 EIC42_BASE.BIT._CT42
#define EIC47 EIC47_BASE.UINT16
#define EIC47_P047 EIC47_BASE.BIT._P047
#define EIC47_P147 EIC47_BASE.BIT._P147
#define EIC47_P247 EIC47_BASE.BIT._P247
#define EIC47_P347 EIC47_BASE.BIT._P347
#define EIC47_TB47 EIC47_BASE.BIT._TB47
#define EIC47_MK47 EIC47_BASE.BIT._MK47
#define EIC47_RF47 EIC47_BASE.BIT._RF47
#define EIC47_CT47 EIC47_BASE.BIT._CT47
#define EIC48 EIC48_BASE.UINT16
#define EIC48_P048 EIC48_BASE.BIT._P048
#define EIC48_P148 EIC48_BASE.BIT._P148
#define EIC48_P248 EIC48_BASE.BIT._P248
#define EIC48_P348 EIC48_BASE.BIT._P348
#define EIC48_TB48 EIC48_BASE.BIT._TB48
#define EIC48_MK48 EIC48_BASE.BIT._MK48
#define EIC48_RF48 EIC48_BASE.BIT._RF48
#define EIC48_CT48 EIC48_BASE.BIT._CT48
#define EIC49 EIC49_BASE.UINT16
#define EIC49_P049 EIC49_BASE.BIT._P049
#define EIC49_P149 EIC49_BASE.BIT._P149
#define EIC49_P249 EIC49_BASE.BIT._P249
#define EIC49_P349 EIC49_BASE.BIT._P349
#define EIC49_TB49 EIC49_BASE.BIT._TB49
#define EIC49_MK49 EIC49_BASE.BIT._MK49
#define EIC49_RF49 EIC49_BASE.BIT._RF49
#define EIC49_CT49 EIC49_BASE.BIT._CT49
#define EIC50 EIC50_BASE.UINT16
#define EIC50_P050 EIC50_BASE.BIT._P050
#define EIC50_P150 EIC50_BASE.BIT._P150
#define EIC50_P250 EIC50_BASE.BIT._P250
#define EIC50_P350 EIC50_BASE.BIT._P350
#define EIC50_TB50 EIC50_BASE.BIT._TB50
#define EIC50_MK50 EIC50_BASE.BIT._MK50
#define EIC50_RF50 EIC50_BASE.BIT._RF50
#define EIC50_CT50 EIC50_BASE.BIT._CT50
#define EIC51 EIC51_BASE.UINT16
#define EIC51_P051 EIC51_BASE.BIT._P051
#define EIC51_P151 EIC51_BASE.BIT._P151
#define EIC51_P251 EIC51_BASE.BIT._P251
#define EIC51_P351 EIC51_BASE.BIT._P351
#define EIC51_TB51 EIC51_BASE.BIT._TB51
#define EIC51_MK51 EIC51_BASE.BIT._MK51
#define EIC51_RF51 EIC51_BASE.BIT._RF51
#define EIC51_CT51 EIC51_BASE.BIT._CT51
#define EIC52 EIC52_BASE.UINT16
#define EIC52_P052 EIC52_BASE.BIT._P052
#define EIC52_P152 EIC52_BASE.BIT._P152
#define EIC52_P252 EIC52_BASE.BIT._P252
#define EIC52_P352 EIC52_BASE.BIT._P352
#define EIC52_TB52 EIC52_BASE.BIT._TB52
#define EIC52_MK52 EIC52_BASE.BIT._MK52
#define EIC52_RF52 EIC52_BASE.BIT._RF52
#define EIC52_CT52 EIC52_BASE.BIT._CT52
#define EIC53 EIC53_BASE.UINT16
#define EIC53_P053 EIC53_BASE.BIT._P053
#define EIC53_P153 EIC53_BASE.BIT._P153
#define EIC53_P253 EIC53_BASE.BIT._P253
#define EIC53_P353 EIC53_BASE.BIT._P353
#define EIC53_TB53 EIC53_BASE.BIT._TB53
#define EIC53_MK53 EIC53_BASE.BIT._MK53
#define EIC53_RF53 EIC53_BASE.BIT._RF53
#define EIC53_CT53 EIC53_BASE.BIT._CT53
#define EIC54 EIC54_BASE.UINT16
#define EIC54_P054 EIC54_BASE.BIT._P054
#define EIC54_P154 EIC54_BASE.BIT._P154
#define EIC54_P254 EIC54_BASE.BIT._P254
#define EIC54_P354 EIC54_BASE.BIT._P354
#define EIC54_TB54 EIC54_BASE.BIT._TB54
#define EIC54_MK54 EIC54_BASE.BIT._MK54
#define EIC54_RF54 EIC54_BASE.BIT._RF54
#define EIC54_CT54 EIC54_BASE.BIT._CT54
#define EIC55 EIC55_BASE.UINT16
#define EIC55_P055 EIC55_BASE.BIT._P055
#define EIC55_P155 EIC55_BASE.BIT._P155
#define EIC55_P255 EIC55_BASE.BIT._P255
#define EIC55_P355 EIC55_BASE.BIT._P355
#define EIC55_TB55 EIC55_BASE.BIT._TB55
#define EIC55_MK55 EIC55_BASE.BIT._MK55
#define EIC55_RF55 EIC55_BASE.BIT._RF55
#define EIC55_CT55 EIC55_BASE.BIT._CT55
#define EIC56 EIC56_BASE.UINT16
#define EIC56_P056 EIC56_BASE.BIT._P056
#define EIC56_P156 EIC56_BASE.BIT._P156
#define EIC56_P256 EIC56_BASE.BIT._P256
#define EIC56_P356 EIC56_BASE.BIT._P356
#define EIC56_TB56 EIC56_BASE.BIT._TB56
#define EIC56_MK56 EIC56_BASE.BIT._MK56
#define EIC56_RF56 EIC56_BASE.BIT._RF56
#define EIC56_CT56 EIC56_BASE.BIT._CT56
#define EIC57 EIC57_BASE.UINT16
#define EIC57_P057 EIC57_BASE.BIT._P057
#define EIC57_P157 EIC57_BASE.BIT._P157
#define EIC57_P257 EIC57_BASE.BIT._P257
#define EIC57_P357 EIC57_BASE.BIT._P357
#define EIC57_TB57 EIC57_BASE.BIT._TB57
#define EIC57_MK57 EIC57_BASE.BIT._MK57
#define EIC57_RF57 EIC57_BASE.BIT._RF57
#define EIC57_CT57 EIC57_BASE.BIT._CT57
#define EIC58 EIC58_BASE.UINT16
#define EIC58_P058 EIC58_BASE.BIT._P058
#define EIC58_P158 EIC58_BASE.BIT._P158
#define EIC58_P258 EIC58_BASE.BIT._P258
#define EIC58_P358 EIC58_BASE.BIT._P358
#define EIC58_TB58 EIC58_BASE.BIT._TB58
#define EIC58_MK58 EIC58_BASE.BIT._MK58
#define EIC58_RF58 EIC58_BASE.BIT._RF58
#define EIC58_CT58 EIC58_BASE.BIT._CT58
#define EIC59 EIC59_BASE.UINT16
#define EIC59_P059 EIC59_BASE.BIT._P059
#define EIC59_P159 EIC59_BASE.BIT._P159
#define EIC59_P259 EIC59_BASE.BIT._P259
#define EIC59_P359 EIC59_BASE.BIT._P359
#define EIC59_TB59 EIC59_BASE.BIT._TB59
#define EIC59_MK59 EIC59_BASE.BIT._MK59
#define EIC59_RF59 EIC59_BASE.BIT._RF59
#define EIC59_CT59 EIC59_BASE.BIT._CT59
#define EIC60 EIC60_BASE.UINT16
#define EIC60_P060 EIC60_BASE.BIT._P060
#define EIC60_P160 EIC60_BASE.BIT._P160
#define EIC60_P260 EIC60_BASE.BIT._P260
#define EIC60_P360 EIC60_BASE.BIT._P360
#define EIC60_TB60 EIC60_BASE.BIT._TB60
#define EIC60_MK60 EIC60_BASE.BIT._MK60
#define EIC60_RF60 EIC60_BASE.BIT._RF60
#define EIC60_CT60 EIC60_BASE.BIT._CT60
#define EIC61 EIC61_BASE.UINT16
#define EIC61_P061 EIC61_BASE.BIT._P061
#define EIC61_P161 EIC61_BASE.BIT._P161
#define EIC61_P261 EIC61_BASE.BIT._P261
#define EIC61_P361 EIC61_BASE.BIT._P361
#define EIC61_TB61 EIC61_BASE.BIT._TB61
#define EIC61_MK61 EIC61_BASE.BIT._MK61
#define EIC61_RF61 EIC61_BASE.BIT._RF61
#define EIC61_CT61 EIC61_BASE.BIT._CT61
#define EIC62 EIC62_BASE.UINT16
#define EIC62_P062 EIC62_BASE.BIT._P062
#define EIC62_P162 EIC62_BASE.BIT._P162
#define EIC62_P262 EIC62_BASE.BIT._P262
#define EIC62_P362 EIC62_BASE.BIT._P362
#define EIC62_TB62 EIC62_BASE.BIT._TB62
#define EIC62_MK62 EIC62_BASE.BIT._MK62
#define EIC62_RF62 EIC62_BASE.BIT._RF62
#define EIC62_CT62 EIC62_BASE.BIT._CT62
#define EIC63 EIC63_BASE.UINT16
#define EIC63_P063 EIC63_BASE.BIT._P063
#define EIC63_P163 EIC63_BASE.BIT._P163
#define EIC63_P263 EIC63_BASE.BIT._P263
#define EIC63_P363 EIC63_BASE.BIT._P363
#define EIC63_TB63 EIC63_BASE.BIT._TB63
#define EIC63_MK63 EIC63_BASE.BIT._MK63
#define EIC63_RF63 EIC63_BASE.BIT._RF63
#define EIC63_CT63 EIC63_BASE.BIT._CT63
#define EIC64 EIC64_BASE.UINT16
#define EIC64_P064 EIC64_BASE.BIT._P064
#define EIC64_P164 EIC64_BASE.BIT._P164
#define EIC64_P264 EIC64_BASE.BIT._P264
#define EIC64_P364 EIC64_BASE.BIT._P364
#define EIC64_TB64 EIC64_BASE.BIT._TB64
#define EIC64_MK64 EIC64_BASE.BIT._MK64
#define EIC64_RF64 EIC64_BASE.BIT._RF64
#define EIC64_CT64 EIC64_BASE.BIT._CT64
#define EIC65 EIC65_BASE.UINT16
#define EIC65_P065 EIC65_BASE.BIT._P065
#define EIC65_P165 EIC65_BASE.BIT._P165
#define EIC65_P265 EIC65_BASE.BIT._P265
#define EIC65_P365 EIC65_BASE.BIT._P365
#define EIC65_TB65 EIC65_BASE.BIT._TB65
#define EIC65_MK65 EIC65_BASE.BIT._MK65
#define EIC65_RF65 EIC65_BASE.BIT._RF65
#define EIC65_CT65 EIC65_BASE.BIT._CT65
#define EIC69 EIC69_BASE.UINT16
#define EIC69_P069 EIC69_BASE.BIT._P069
#define EIC69_P169 EIC69_BASE.BIT._P169
#define EIC69_P269 EIC69_BASE.BIT._P269
#define EIC69_P369 EIC69_BASE.BIT._P369
#define EIC69_TB69 EIC69_BASE.BIT._TB69
#define EIC69_MK69 EIC69_BASE.BIT._MK69
#define EIC69_RF69 EIC69_BASE.BIT._RF69
#define EIC69_CT69 EIC69_BASE.BIT._CT69
#define EIC70 EIC70_BASE.UINT16
#define EIC70_P070 EIC70_BASE.BIT._P070
#define EIC70_P170 EIC70_BASE.BIT._P170
#define EIC70_P270 EIC70_BASE.BIT._P270
#define EIC70_P370 EIC70_BASE.BIT._P370
#define EIC70_TB70 EIC70_BASE.BIT._TB70
#define EIC70_MK70 EIC70_BASE.BIT._MK70
#define EIC70_RF70 EIC70_BASE.BIT._RF70
#define EIC70_CT70 EIC70_BASE.BIT._CT70
#define EIC71 EIC71_BASE.UINT16
#define EIC71_P071 EIC71_BASE.BIT._P071
#define EIC71_P171 EIC71_BASE.BIT._P171
#define EIC71_P271 EIC71_BASE.BIT._P271
#define EIC71_P371 EIC71_BASE.BIT._P371
#define EIC71_TB71 EIC71_BASE.BIT._TB71
#define EIC71_MK71 EIC71_BASE.BIT._MK71
#define EIC71_RF71 EIC71_BASE.BIT._RF71
#define EIC71_CT71 EIC71_BASE.BIT._CT71
#define EIC72 EIC72_BASE.UINT16
#define EIC72_P072 EIC72_BASE.BIT._P072
#define EIC72_P172 EIC72_BASE.BIT._P172
#define EIC72_P272 EIC72_BASE.BIT._P272
#define EIC72_P372 EIC72_BASE.BIT._P372
#define EIC72_TB72 EIC72_BASE.BIT._TB72
#define EIC72_MK72 EIC72_BASE.BIT._MK72
#define EIC72_RF72 EIC72_BASE.BIT._RF72
#define EIC72_CT72 EIC72_BASE.BIT._CT72
#define EIC73 EIC73_BASE.UINT16
#define EIC73_P073 EIC73_BASE.BIT._P073
#define EIC73_P173 EIC73_BASE.BIT._P173
#define EIC73_P273 EIC73_BASE.BIT._P273
#define EIC73_P373 EIC73_BASE.BIT._P373
#define EIC73_TB73 EIC73_BASE.BIT._TB73
#define EIC73_MK73 EIC73_BASE.BIT._MK73
#define EIC73_RF73 EIC73_BASE.BIT._RF73
#define EIC73_CT73 EIC73_BASE.BIT._CT73
#define EIC74 EIC74_BASE.UINT16
#define EIC74_P074 EIC74_BASE.BIT._P074
#define EIC74_P174 EIC74_BASE.BIT._P174
#define EIC74_P274 EIC74_BASE.BIT._P274
#define EIC74_P374 EIC74_BASE.BIT._P374
#define EIC74_TB74 EIC74_BASE.BIT._TB74
#define EIC74_MK74 EIC74_BASE.BIT._MK74
#define EIC74_RF74 EIC74_BASE.BIT._RF74
#define EIC74_CT74 EIC74_BASE.BIT._CT74
#define EIC80 EIC80_BASE.UINT16
#define EIC80_P080 EIC80_BASE.BIT._P080
#define EIC80_P180 EIC80_BASE.BIT._P180
#define EIC80_P280 EIC80_BASE.BIT._P280
#define EIC80_P380 EIC80_BASE.BIT._P380
#define EIC80_TB80 EIC80_BASE.BIT._TB80
#define EIC80_MK80 EIC80_BASE.BIT._MK80
#define EIC80_RF80 EIC80_BASE.BIT._RF80
#define EIC80_CT80 EIC80_BASE.BIT._CT80
#define EIC81 EIC81_BASE.UINT16
#define EIC81_P081 EIC81_BASE.BIT._P081
#define EIC81_P181 EIC81_BASE.BIT._P181
#define EIC81_P281 EIC81_BASE.BIT._P281
#define EIC81_P381 EIC81_BASE.BIT._P381
#define EIC81_TB81 EIC81_BASE.BIT._TB81
#define EIC81_MK81 EIC81_BASE.BIT._MK81
#define EIC81_RF81 EIC81_BASE.BIT._RF81
#define EIC81_CT81 EIC81_BASE.BIT._CT81
#define EIC82 EIC82_BASE.UINT16
#define EIC82_P082 EIC82_BASE.BIT._P082
#define EIC82_P182 EIC82_BASE.BIT._P182
#define EIC82_P282 EIC82_BASE.BIT._P282
#define EIC82_P382 EIC82_BASE.BIT._P382
#define EIC82_TB82 EIC82_BASE.BIT._TB82
#define EIC82_MK82 EIC82_BASE.BIT._MK82
#define EIC82_RF82 EIC82_BASE.BIT._RF82
#define EIC82_CT82 EIC82_BASE.BIT._CT82
#define EIC83 EIC83_BASE.UINT16
#define EIC83_P083 EIC83_BASE.BIT._P083
#define EIC83_P183 EIC83_BASE.BIT._P183
#define EIC83_P283 EIC83_BASE.BIT._P283
#define EIC83_P383 EIC83_BASE.BIT._P383
#define EIC83_TB83 EIC83_BASE.BIT._TB83
#define EIC83_MK83 EIC83_BASE.BIT._MK83
#define EIC83_RF83 EIC83_BASE.BIT._RF83
#define EIC83_CT83 EIC83_BASE.BIT._CT83
#define EIC84 EIC84_BASE.UINT16
#define EIC84_P084 EIC84_BASE.BIT._P084
#define EIC84_P184 EIC84_BASE.BIT._P184
#define EIC84_P284 EIC84_BASE.BIT._P284
#define EIC84_P384 EIC84_BASE.BIT._P384
#define EIC84_TB84 EIC84_BASE.BIT._TB84
#define EIC84_MK84 EIC84_BASE.BIT._MK84
#define EIC84_RF84 EIC84_BASE.BIT._RF84
#define EIC84_CT84 EIC84_BASE.BIT._CT84
#define EIC85 EIC85_BASE.UINT16
#define EIC85_P085 EIC85_BASE.BIT._P085
#define EIC85_P185 EIC85_BASE.BIT._P185
#define EIC85_P285 EIC85_BASE.BIT._P285
#define EIC85_P385 EIC85_BASE.BIT._P385
#define EIC85_TB85 EIC85_BASE.BIT._TB85
#define EIC85_MK85 EIC85_BASE.BIT._MK85
#define EIC85_RF85 EIC85_BASE.BIT._RF85
#define EIC85_CT85 EIC85_BASE.BIT._CT85
#define EIC86 EIC86_BASE.UINT16
#define EIC86_P086 EIC86_BASE.BIT._P086
#define EIC86_P186 EIC86_BASE.BIT._P186
#define EIC86_P286 EIC86_BASE.BIT._P286
#define EIC86_P386 EIC86_BASE.BIT._P386
#define EIC86_TB86 EIC86_BASE.BIT._TB86
#define EIC86_MK86 EIC86_BASE.BIT._MK86
#define EIC86_RF86 EIC86_BASE.BIT._RF86
#define EIC86_CT86 EIC86_BASE.BIT._CT86
#define EIC87 EIC87_BASE.UINT16
#define EIC87_P087 EIC87_BASE.BIT._P087
#define EIC87_P187 EIC87_BASE.BIT._P187
#define EIC87_P287 EIC87_BASE.BIT._P287
#define EIC87_P387 EIC87_BASE.BIT._P387
#define EIC87_TB87 EIC87_BASE.BIT._TB87
#define EIC87_MK87 EIC87_BASE.BIT._MK87
#define EIC87_RF87 EIC87_BASE.BIT._RF87
#define EIC87_CT87 EIC87_BASE.BIT._CT87
#define EIC88 EIC88_BASE.UINT16
#define EIC88_P088 EIC88_BASE.BIT._P088
#define EIC88_P188 EIC88_BASE.BIT._P188
#define EIC88_P288 EIC88_BASE.BIT._P288
#define EIC88_P388 EIC88_BASE.BIT._P388
#define EIC88_TB88 EIC88_BASE.BIT._TB88
#define EIC88_MK88 EIC88_BASE.BIT._MK88
#define EIC88_RF88 EIC88_BASE.BIT._RF88
#define EIC88_CT88 EIC88_BASE.BIT._CT88
#define EIC89 EIC89_BASE.UINT16
#define EIC89_P089 EIC89_BASE.BIT._P089
#define EIC89_P189 EIC89_BASE.BIT._P189
#define EIC89_P289 EIC89_BASE.BIT._P289
#define EIC89_P389 EIC89_BASE.BIT._P389
#define EIC89_TB89 EIC89_BASE.BIT._TB89
#define EIC89_MK89 EIC89_BASE.BIT._MK89
#define EIC89_RF89 EIC89_BASE.BIT._RF89
#define EIC89_CT89 EIC89_BASE.BIT._CT89
#define EIC90 EIC90_BASE.UINT16
#define EIC90_P090 EIC90_BASE.BIT._P090
#define EIC90_P190 EIC90_BASE.BIT._P190
#define EIC90_P290 EIC90_BASE.BIT._P290
#define EIC90_P390 EIC90_BASE.BIT._P390
#define EIC90_TB90 EIC90_BASE.BIT._TB90
#define EIC90_MK90 EIC90_BASE.BIT._MK90
#define EIC90_RF90 EIC90_BASE.BIT._RF90
#define EIC90_CT90 EIC90_BASE.BIT._CT90
#define EIC91 EIC91_BASE.UINT16
#define EIC91_P091 EIC91_BASE.BIT._P091
#define EIC91_P191 EIC91_BASE.BIT._P191
#define EIC91_P291 EIC91_BASE.BIT._P291
#define EIC91_P391 EIC91_BASE.BIT._P391
#define EIC91_TB91 EIC91_BASE.BIT._TB91
#define EIC91_MK91 EIC91_BASE.BIT._MK91
#define EIC91_RF91 EIC91_BASE.BIT._RF91
#define EIC91_CT91 EIC91_BASE.BIT._CT91
#define EIC92 EIC92_BASE.UINT16
#define EIC92_P092 EIC92_BASE.BIT._P092
#define EIC92_P192 EIC92_BASE.BIT._P192
#define EIC92_P292 EIC92_BASE.BIT._P292
#define EIC92_P392 EIC92_BASE.BIT._P392
#define EIC92_TB92 EIC92_BASE.BIT._TB92
#define EIC92_MK92 EIC92_BASE.BIT._MK92
#define EIC92_RF92 EIC92_BASE.BIT._RF92
#define EIC92_CT92 EIC92_BASE.BIT._CT92
#define EIC93 EIC93_BASE.UINT16
#define EIC93_P093 EIC93_BASE.BIT._P093
#define EIC93_P193 EIC93_BASE.BIT._P193
#define EIC93_P293 EIC93_BASE.BIT._P293
#define EIC93_P393 EIC93_BASE.BIT._P393
#define EIC93_TB93 EIC93_BASE.BIT._TB93
#define EIC93_MK93 EIC93_BASE.BIT._MK93
#define EIC93_RF93 EIC93_BASE.BIT._RF93
#define EIC93_CT93 EIC93_BASE.BIT._CT93
#define EIC94 EIC94_BASE.UINT16
#define EIC94_P094 EIC94_BASE.BIT._P094
#define EIC94_P194 EIC94_BASE.BIT._P194
#define EIC94_P294 EIC94_BASE.BIT._P294
#define EIC94_P394 EIC94_BASE.BIT._P394
#define EIC94_TB94 EIC94_BASE.BIT._TB94
#define EIC94_MK94 EIC94_BASE.BIT._MK94
#define EIC94_RF94 EIC94_BASE.BIT._RF94
#define EIC94_CT94 EIC94_BASE.BIT._CT94
#define EIC95 EIC95_BASE.UINT16
#define EIC95_P095 EIC95_BASE.BIT._P095
#define EIC95_P195 EIC95_BASE.BIT._P195
#define EIC95_P295 EIC95_BASE.BIT._P295
#define EIC95_P395 EIC95_BASE.BIT._P395
#define EIC95_TB95 EIC95_BASE.BIT._TB95
#define EIC95_MK95 EIC95_BASE.BIT._MK95
#define EIC95_RF95 EIC95_BASE.BIT._RF95
#define EIC95_CT95 EIC95_BASE.BIT._CT95
#define EIC96 EIC96_BASE.UINT16
#define EIC96_P096 EIC96_BASE.BIT._P096
#define EIC96_P196 EIC96_BASE.BIT._P196
#define EIC96_P296 EIC96_BASE.BIT._P296
#define EIC96_P396 EIC96_BASE.BIT._P396
#define EIC96_TB96 EIC96_BASE.BIT._TB96
#define EIC96_MK96 EIC96_BASE.BIT._MK96
#define EIC96_RF96 EIC96_BASE.BIT._RF96
#define EIC96_CT96 EIC96_BASE.BIT._CT96
#define EIC97 EIC97_BASE.UINT16
#define EIC97_P097 EIC97_BASE.BIT._P097
#define EIC97_P197 EIC97_BASE.BIT._P197
#define EIC97_P297 EIC97_BASE.BIT._P297
#define EIC97_P397 EIC97_BASE.BIT._P397
#define EIC97_TB97 EIC97_BASE.BIT._TB97
#define EIC97_MK97 EIC97_BASE.BIT._MK97
#define EIC97_RF97 EIC97_BASE.BIT._RF97
#define EIC97_CT97 EIC97_BASE.BIT._CT97
#define EIC98 EIC98_BASE.UINT16
#define EIC98_P098 EIC98_BASE.BIT._P098
#define EIC98_P198 EIC98_BASE.BIT._P198
#define EIC98_P298 EIC98_BASE.BIT._P298
#define EIC98_P398 EIC98_BASE.BIT._P398
#define EIC98_TB98 EIC98_BASE.BIT._TB98
#define EIC98_MK98 EIC98_BASE.BIT._MK98
#define EIC98_RF98 EIC98_BASE.BIT._RF98
#define EIC98_CT98 EIC98_BASE.BIT._CT98
#define EIC99 EIC99_BASE.UINT16
#define EIC99_P099 EIC99_BASE.BIT._P099
#define EIC99_P199 EIC99_BASE.BIT._P199
#define EIC99_P299 EIC99_BASE.BIT._P299
#define EIC99_P399 EIC99_BASE.BIT._P399
#define EIC99_TB99 EIC99_BASE.BIT._TB99
#define EIC99_MK99 EIC99_BASE.BIT._MK99
#define EIC99_RF99 EIC99_BASE.BIT._RF99
#define EIC99_CT99 EIC99_BASE.BIT._CT99
#define EIC100 EIC100_BASE.UINT16
#define EIC100_P0100 EIC100_BASE.BIT._P0100
#define EIC100_P1100 EIC100_BASE.BIT._P1100
#define EIC100_P2100 EIC100_BASE.BIT._P2100
#define EIC100_P3100 EIC100_BASE.BIT._P3100
#define EIC100_TB100 EIC100_BASE.BIT._TB100
#define EIC100_MK100 EIC100_BASE.BIT._MK100
#define EIC100_RF100 EIC100_BASE.BIT._RF100
#define EIC100_CT100 EIC100_BASE.BIT._CT100
#define EIC101 EIC101_BASE.UINT16
#define EIC102 EIC102_BASE.UINT16
#define EIC102_P0102 EIC102_BASE.BIT._P0102
#define EIC102_P1102 EIC102_BASE.BIT._P1102
#define EIC102_P2102 EIC102_BASE.BIT._P2102
#define EIC102_P3102 EIC102_BASE.BIT._P3102
#define EIC102_TB102 EIC102_BASE.BIT._TB102
#define EIC102_MK102 EIC102_BASE.BIT._MK102
#define EIC102_RF102 EIC102_BASE.BIT._RF102
#define EIC102_CT102 EIC102_BASE.BIT._CT102
#define EIC103 EIC103_BASE.UINT16
#define EIC103_P0103 EIC103_BASE.BIT._P0103
#define EIC103_P1103 EIC103_BASE.BIT._P1103
#define EIC103_P2103 EIC103_BASE.BIT._P2103
#define EIC103_P3103 EIC103_BASE.BIT._P3103
#define EIC103_TB103 EIC103_BASE.BIT._TB103
#define EIC103_MK103 EIC103_BASE.BIT._MK103
#define EIC103_RF103 EIC103_BASE.BIT._RF103
#define EIC103_CT103 EIC103_BASE.BIT._CT103
#define EIC104 EIC104_BASE.UINT16
#define EIC104_P0104 EIC104_BASE.BIT._P0104
#define EIC104_P1104 EIC104_BASE.BIT._P1104
#define EIC104_P2104 EIC104_BASE.BIT._P2104
#define EIC104_P3104 EIC104_BASE.BIT._P3104
#define EIC104_TB104 EIC104_BASE.BIT._TB104
#define EIC104_MK104 EIC104_BASE.BIT._MK104
#define EIC104_RF104 EIC104_BASE.BIT._RF104
#define EIC104_CT104 EIC104_BASE.BIT._CT104
#define EIC105 EIC105_BASE.UINT16
#define EIC105_P0105 EIC105_BASE.BIT._P0105
#define EIC105_P1105 EIC105_BASE.BIT._P1105
#define EIC105_P2105 EIC105_BASE.BIT._P2105
#define EIC105_P3105 EIC105_BASE.BIT._P3105
#define EIC105_TB105 EIC105_BASE.BIT._TB105
#define EIC105_MK105 EIC105_BASE.BIT._MK105
#define EIC105_RF105 EIC105_BASE.BIT._RF105
#define EIC105_CT105 EIC105_BASE.BIT._CT105
#define EIC106 EIC106_BASE.UINT16
#define EIC106_P0106 EIC106_BASE.BIT._P0106
#define EIC106_P1106 EIC106_BASE.BIT._P1106
#define EIC106_P2106 EIC106_BASE.BIT._P2106
#define EIC106_P3106 EIC106_BASE.BIT._P3106
#define EIC106_TB106 EIC106_BASE.BIT._TB106
#define EIC106_MK106 EIC106_BASE.BIT._MK106
#define EIC106_RF106 EIC106_BASE.BIT._RF106
#define EIC106_CT106 EIC106_BASE.BIT._CT106
#define EIC107 EIC107_BASE.UINT16
#define EIC107_P0107 EIC107_BASE.BIT._P0107
#define EIC107_P1107 EIC107_BASE.BIT._P1107
#define EIC107_P2107 EIC107_BASE.BIT._P2107
#define EIC107_P3107 EIC107_BASE.BIT._P3107
#define EIC107_TB107 EIC107_BASE.BIT._TB107
#define EIC107_MK107 EIC107_BASE.BIT._MK107
#define EIC107_RF107 EIC107_BASE.BIT._RF107
#define EIC107_CT107 EIC107_BASE.BIT._CT107
#define EIC116 EIC116_BASE.UINT16
#define EIC116_P0116 EIC116_BASE.BIT._P0116
#define EIC116_P1116 EIC116_BASE.BIT._P1116
#define EIC116_P2116 EIC116_BASE.BIT._P2116
#define EIC116_P3116 EIC116_BASE.BIT._P3116
#define EIC116_TB116 EIC116_BASE.BIT._TB116
#define EIC116_MK116 EIC116_BASE.BIT._MK116
#define EIC116_RF116 EIC116_BASE.BIT._RF116
#define EIC116_CT116 EIC116_BASE.BIT._CT116
#define EIC117 EIC117_BASE.UINT16
#define EIC117_P0117 EIC117_BASE.BIT._P0117
#define EIC117_P1117 EIC117_BASE.BIT._P1117
#define EIC117_P2117 EIC117_BASE.BIT._P2117
#define EIC117_P3117 EIC117_BASE.BIT._P3117
#define EIC117_TB117 EIC117_BASE.BIT._TB117
#define EIC117_MK117 EIC117_BASE.BIT._MK117
#define EIC117_RF117 EIC117_BASE.BIT._RF117
#define EIC117_CT117 EIC117_BASE.BIT._CT117
#define EIC118 EIC118_BASE.UINT16
#define EIC118_P0118 EIC118_BASE.BIT._P0118
#define EIC118_P1118 EIC118_BASE.BIT._P1118
#define EIC118_P2118 EIC118_BASE.BIT._P2118
#define EIC118_P3118 EIC118_BASE.BIT._P3118
#define EIC118_TB118 EIC118_BASE.BIT._TB118
#define EIC118_MK118 EIC118_BASE.BIT._MK118
#define EIC118_RF118 EIC118_BASE.BIT._RF118
#define EIC118_CT118 EIC118_BASE.BIT._CT118
#define EIC119 EIC119_BASE.UINT16
#define EIC119_P0119 EIC119_BASE.BIT._P0119
#define EIC119_P1119 EIC119_BASE.BIT._P1119
#define EIC119_P2119 EIC119_BASE.BIT._P2119
#define EIC119_P3119 EIC119_BASE.BIT._P3119
#define EIC119_TB119 EIC119_BASE.BIT._TB119
#define EIC119_MK119 EIC119_BASE.BIT._MK119
#define EIC119_RF119 EIC119_BASE.BIT._RF119
#define EIC119_CT119 EIC119_BASE.BIT._CT119
#define EIC120 EIC120_BASE.UINT16
#define EIC120_P0120 EIC120_BASE.BIT._P0120
#define EIC120_P1120 EIC120_BASE.BIT._P1120
#define EIC120_P2120 EIC120_BASE.BIT._P2120
#define EIC120_P3120 EIC120_BASE.BIT._P3120
#define EIC120_TB120 EIC120_BASE.BIT._TB120
#define EIC120_MK120 EIC120_BASE.BIT._MK120
#define EIC120_RF120 EIC120_BASE.BIT._RF120
#define EIC120_CT120 EIC120_BASE.BIT._CT120
#define EIC121 EIC121_BASE.UINT16
#define EIC121_P0121 EIC121_BASE.BIT._P0121
#define EIC121_P1121 EIC121_BASE.BIT._P1121
#define EIC121_P2121 EIC121_BASE.BIT._P2121
#define EIC121_P3121 EIC121_BASE.BIT._P3121
#define EIC121_TB121 EIC121_BASE.BIT._TB121
#define EIC121_MK121 EIC121_BASE.BIT._MK121
#define EIC121_RF121 EIC121_BASE.BIT._RF121
#define EIC121_CT121 EIC121_BASE.BIT._CT121
#define EIC128 EIC128_BASE.UINT16
#define EIC128_P0128 EIC128_BASE.BIT._P0128
#define EIC128_P1128 EIC128_BASE.BIT._P1128
#define EIC128_P2128 EIC128_BASE.BIT._P2128
#define EIC128_P3128 EIC128_BASE.BIT._P3128
#define EIC128_TB128 EIC128_BASE.BIT._TB128
#define EIC128_MK128 EIC128_BASE.BIT._MK128
#define EIC128_RF128 EIC128_BASE.BIT._RF128
#define EIC128_CT128 EIC128_BASE.BIT._CT128
#define EIC129 EIC129_BASE.UINT16
#define EIC129_P0129 EIC129_BASE.BIT._P0129
#define EIC129_P1129 EIC129_BASE.BIT._P1129
#define EIC129_P2129 EIC129_BASE.BIT._P2129
#define EIC129_P3129 EIC129_BASE.BIT._P3129
#define EIC129_TB129 EIC129_BASE.BIT._TB129
#define EIC129_MK129 EIC129_BASE.BIT._MK129
#define EIC129_RF129 EIC129_BASE.BIT._RF129
#define EIC129_CT129 EIC129_BASE.BIT._CT129
#define EIC130 EIC130_BASE.UINT16
#define EIC130_P0130 EIC130_BASE.BIT._P0130
#define EIC130_P1130 EIC130_BASE.BIT._P1130
#define EIC130_P2130 EIC130_BASE.BIT._P2130
#define EIC130_P3130 EIC130_BASE.BIT._P3130
#define EIC130_TB130 EIC130_BASE.BIT._TB130
#define EIC130_MK130 EIC130_BASE.BIT._MK130
#define EIC130_RF130 EIC130_BASE.BIT._RF130
#define EIC130_CT130 EIC130_BASE.BIT._CT130
#define EIC132 EIC132_BASE.UINT16
#define EIC132_P0132 EIC132_BASE.BIT._P0132
#define EIC132_P1132 EIC132_BASE.BIT._P1132
#define EIC132_P2132 EIC132_BASE.BIT._P2132
#define EIC132_P3132 EIC132_BASE.BIT._P3132
#define EIC132_TB132 EIC132_BASE.BIT._TB132
#define EIC132_MK132 EIC132_BASE.BIT._MK132
#define EIC132_RF132 EIC132_BASE.BIT._RF132
#define EIC132_CT132 EIC132_BASE.BIT._CT132
#define EIC133 EIC133_BASE.UINT16
#define EIC133_P0133 EIC133_BASE.BIT._P0133
#define EIC133_P1133 EIC133_BASE.BIT._P1133
#define EIC133_P2133 EIC133_BASE.BIT._P2133
#define EIC133_P3133 EIC133_BASE.BIT._P3133
#define EIC133_TB133 EIC133_BASE.BIT._TB133
#define EIC133_MK133 EIC133_BASE.BIT._MK133
#define EIC133_RF133 EIC133_BASE.BIT._RF133
#define EIC133_CT133 EIC133_BASE.BIT._CT133
#define EIC135 EIC135_BASE.UINT16
#define EIC135_P0135 EIC135_BASE.BIT._P0135
#define EIC135_P1135 EIC135_BASE.BIT._P1135
#define EIC135_P2135 EIC135_BASE.BIT._P2135
#define EIC135_P3135 EIC135_BASE.BIT._P3135
#define EIC135_TB135 EIC135_BASE.BIT._TB135
#define EIC135_MK135 EIC135_BASE.BIT._MK135
#define EIC135_RF135 EIC135_BASE.BIT._RF135
#define EIC135_CT135 EIC135_BASE.BIT._CT135
#define EIC136 EIC136_BASE.UINT16
#define EIC136_P0136 EIC136_BASE.BIT._P0136
#define EIC136_P1136 EIC136_BASE.BIT._P1136
#define EIC136_P2136 EIC136_BASE.BIT._P2136
#define EIC136_P3136 EIC136_BASE.BIT._P3136
#define EIC136_TB136 EIC136_BASE.BIT._TB136
#define EIC136_MK136 EIC136_BASE.BIT._MK136
#define EIC136_RF136 EIC136_BASE.BIT._RF136
#define EIC136_CT136 EIC136_BASE.BIT._CT136
#define EIC141 EIC141_BASE.UINT16
#define EIC141_P0141 EIC141_BASE.BIT._P0141
#define EIC141_P1141 EIC141_BASE.BIT._P1141
#define EIC141_P2141 EIC141_BASE.BIT._P2141
#define EIC141_P3141 EIC141_BASE.BIT._P3141
#define EIC141_TB141 EIC141_BASE.BIT._TB141
#define EIC141_MK141 EIC141_BASE.BIT._MK141
#define EIC141_RF141 EIC141_BASE.BIT._RF141
#define EIC141_CT141 EIC141_BASE.BIT._CT141
#define EIC142 EIC142_BASE.UINT16
#define EIC142_P0142 EIC142_BASE.BIT._P0142
#define EIC142_P1142 EIC142_BASE.BIT._P1142
#define EIC142_P2142 EIC142_BASE.BIT._P2142
#define EIC142_P3142 EIC142_BASE.BIT._P3142
#define EIC142_TB142 EIC142_BASE.BIT._TB142
#define EIC142_MK142 EIC142_BASE.BIT._MK142
#define EIC142_RF142 EIC142_BASE.BIT._RF142
#define EIC142_CT142 EIC142_BASE.BIT._CT142
#define EIC143 EIC143_BASE.UINT16
#define EIC143_P0143 EIC143_BASE.BIT._P0143
#define EIC143_P1143 EIC143_BASE.BIT._P1143
#define EIC143_P2143 EIC143_BASE.BIT._P2143
#define EIC143_P3143 EIC143_BASE.BIT._P3143
#define EIC143_TB143 EIC143_BASE.BIT._TB143
#define EIC143_MK143 EIC143_BASE.BIT._MK143
#define EIC143_RF143 EIC143_BASE.BIT._RF143
#define EIC143_CT143 EIC143_BASE.BIT._CT143
#define EIC144 EIC144_BASE.UINT16
#define EIC144_P0144 EIC144_BASE.BIT._P0144
#define EIC144_P1144 EIC144_BASE.BIT._P1144
#define EIC144_P2144 EIC144_BASE.BIT._P2144
#define EIC144_P3144 EIC144_BASE.BIT._P3144
#define EIC144_TB144 EIC144_BASE.BIT._TB144
#define EIC144_MK144 EIC144_BASE.BIT._MK144
#define EIC144_RF144 EIC144_BASE.BIT._RF144
#define EIC144_CT144 EIC144_BASE.BIT._CT144
#define EIC145 EIC145_BASE.UINT16
#define EIC145_P0145 EIC145_BASE.BIT._P0145
#define EIC145_P1145 EIC145_BASE.BIT._P1145
#define EIC145_P2145 EIC145_BASE.BIT._P2145
#define EIC145_P3145 EIC145_BASE.BIT._P3145
#define EIC145_TB145 EIC145_BASE.BIT._TB145
#define EIC145_MK145 EIC145_BASE.BIT._MK145
#define EIC145_RF145 EIC145_BASE.BIT._RF145
#define EIC145_CT145 EIC145_BASE.BIT._CT145
#define EIC146 EIC146_BASE.UINT16
#define EIC146_P0146 EIC146_BASE.BIT._P0146
#define EIC146_P1146 EIC146_BASE.BIT._P1146
#define EIC146_P2146 EIC146_BASE.BIT._P2146
#define EIC146_P3146 EIC146_BASE.BIT._P3146
#define EIC146_TB146 EIC146_BASE.BIT._TB146
#define EIC146_MK146 EIC146_BASE.BIT._MK146
#define EIC146_RF146 EIC146_BASE.BIT._RF146
#define EIC146_CT146 EIC146_BASE.BIT._CT146
#define EIC147 EIC147_BASE.UINT16
#define EIC147_P0147 EIC147_BASE.BIT._P0147
#define EIC147_P1147 EIC147_BASE.BIT._P1147
#define EIC147_P2147 EIC147_BASE.BIT._P2147
#define EIC147_P3147 EIC147_BASE.BIT._P3147
#define EIC147_TB147 EIC147_BASE.BIT._TB147
#define EIC147_MK147 EIC147_BASE.BIT._MK147
#define EIC147_RF147 EIC147_BASE.BIT._RF147
#define EIC147_CT147 EIC147_BASE.BIT._CT147
#define EIC148 EIC148_BASE.UINT16
#define EIC148_P0148 EIC148_BASE.BIT._P0148
#define EIC148_P1148 EIC148_BASE.BIT._P1148
#define EIC148_P2148 EIC148_BASE.BIT._P2148
#define EIC148_P3148 EIC148_BASE.BIT._P3148
#define EIC148_TB148 EIC148_BASE.BIT._TB148
#define EIC148_MK148 EIC148_BASE.BIT._MK148
#define EIC148_RF148 EIC148_BASE.BIT._RF148
#define EIC148_CT148 EIC148_BASE.BIT._CT148
#define EIC149 EIC149_BASE.UINT16
#define EIC149_P0149 EIC149_BASE.BIT._P0149
#define EIC149_P1149 EIC149_BASE.BIT._P1149
#define EIC149_P2149 EIC149_BASE.BIT._P2149
#define EIC149_P3149 EIC149_BASE.BIT._P3149
#define EIC149_TB149 EIC149_BASE.BIT._TB149
#define EIC149_MK149 EIC149_BASE.BIT._MK149
#define EIC149_RF149 EIC149_BASE.BIT._RF149
#define EIC149_CT149 EIC149_BASE.BIT._CT149
#define EIC150 EIC150_BASE.UINT16
#define EIC150_P0150 EIC150_BASE.BIT._P0150
#define EIC150_P1150 EIC150_BASE.BIT._P1150
#define EIC150_P2150 EIC150_BASE.BIT._P2150
#define EIC150_P3150 EIC150_BASE.BIT._P3150
#define EIC150_TB150 EIC150_BASE.BIT._TB150
#define EIC150_MK150 EIC150_BASE.BIT._MK150
#define EIC150_RF150 EIC150_BASE.BIT._RF150
#define EIC150_CT150 EIC150_BASE.BIT._CT150
#define EIC151 EIC151_BASE.UINT16
#define EIC151_P0151 EIC151_BASE.BIT._P0151
#define EIC151_P1151 EIC151_BASE.BIT._P1151
#define EIC151_P2151 EIC151_BASE.BIT._P2151
#define EIC151_P3151 EIC151_BASE.BIT._P3151
#define EIC151_TB151 EIC151_BASE.BIT._TB151
#define EIC151_MK151 EIC151_BASE.BIT._MK151
#define EIC151_RF151 EIC151_BASE.BIT._RF151
#define EIC151_CT151 EIC151_BASE.BIT._CT151
#define EIC152 EIC152_BASE.UINT16
#define EIC152_P0152 EIC152_BASE.BIT._P0152
#define EIC152_P1152 EIC152_BASE.BIT._P1152
#define EIC152_P2152 EIC152_BASE.BIT._P2152
#define EIC152_P3152 EIC152_BASE.BIT._P3152
#define EIC152_TB152 EIC152_BASE.BIT._TB152
#define EIC152_MK152 EIC152_BASE.BIT._MK152
#define EIC152_RF152 EIC152_BASE.BIT._RF152
#define EIC152_CT152 EIC152_BASE.BIT._CT152
#define EIC156 EIC156_BASE.UINT16
#define EIC156_P0156 EIC156_BASE.BIT._P0156
#define EIC156_P1156 EIC156_BASE.BIT._P1156
#define EIC156_P2156 EIC156_BASE.BIT._P2156
#define EIC156_P3156 EIC156_BASE.BIT._P3156
#define EIC156_TB156 EIC156_BASE.BIT._TB156
#define EIC156_MK156 EIC156_BASE.BIT._MK156
#define EIC156_RF156 EIC156_BASE.BIT._RF156
#define EIC156_CT156 EIC156_BASE.BIT._CT156
#define EIC157 EIC157_BASE.UINT16
#define EIC157_P0157 EIC157_BASE.BIT._P0157
#define EIC157_P1157 EIC157_BASE.BIT._P1157
#define EIC157_P2157 EIC157_BASE.BIT._P2157
#define EIC157_P3157 EIC157_BASE.BIT._P3157
#define EIC157_TB157 EIC157_BASE.BIT._TB157
#define EIC157_MK157 EIC157_BASE.BIT._MK157
#define EIC157_RF157 EIC157_BASE.BIT._RF157
#define EIC157_CT157 EIC157_BASE.BIT._CT157
#define EIC158 EIC158_BASE.UINT16
#define EIC158_P0158 EIC158_BASE.BIT._P0158
#define EIC158_P1158 EIC158_BASE.BIT._P1158
#define EIC158_P2158 EIC158_BASE.BIT._P2158
#define EIC158_P3158 EIC158_BASE.BIT._P3158
#define EIC158_TB158 EIC158_BASE.BIT._TB158
#define EIC158_MK158 EIC158_BASE.BIT._MK158
#define EIC158_RF158 EIC158_BASE.BIT._RF158
#define EIC158_CT158 EIC158_BASE.BIT._CT158
#define EIC159 EIC159_BASE.UINT16
#define EIC159_P0159 EIC159_BASE.BIT._P0159
#define EIC159_P1159 EIC159_BASE.BIT._P1159
#define EIC159_P2159 EIC159_BASE.BIT._P2159
#define EIC159_P3159 EIC159_BASE.BIT._P3159
#define EIC159_TB159 EIC159_BASE.BIT._TB159
#define EIC159_MK159 EIC159_BASE.BIT._MK159
#define EIC159_RF159 EIC159_BASE.BIT._RF159
#define EIC159_CT159 EIC159_BASE.BIT._CT159
#define EIC160 EIC160_BASE.UINT16
#define EIC160_P0160 EIC160_BASE.BIT._P0160
#define EIC160_P1160 EIC160_BASE.BIT._P1160
#define EIC160_P2160 EIC160_BASE.BIT._P2160
#define EIC160_P3160 EIC160_BASE.BIT._P3160
#define EIC160_TB160 EIC160_BASE.BIT._TB160
#define EIC160_MK160 EIC160_BASE.BIT._MK160
#define EIC160_RF160 EIC160_BASE.BIT._RF160
#define EIC160_CT160 EIC160_BASE.BIT._CT160
#define EIC161 EIC161_BASE.UINT16
#define EIC161_P0161 EIC161_BASE.BIT._P0161
#define EIC161_P1161 EIC161_BASE.BIT._P1161
#define EIC161_P2161 EIC161_BASE.BIT._P2161
#define EIC161_P3161 EIC161_BASE.BIT._P3161
#define EIC161_TB161 EIC161_BASE.BIT._TB161
#define EIC161_MK161 EIC161_BASE.BIT._MK161
#define EIC161_RF161 EIC161_BASE.BIT._RF161
#define EIC161_CT161 EIC161_BASE.BIT._CT161
#define EIC166 EIC166_BASE.UINT16
#define EIC166_P0166 EIC166_BASE.BIT._P0166
#define EIC166_P1166 EIC166_BASE.BIT._P1166
#define EIC166_P2166 EIC166_BASE.BIT._P2166
#define EIC166_P3166 EIC166_BASE.BIT._P3166
#define EIC166_TB166 EIC166_BASE.BIT._TB166
#define EIC166_MK166 EIC166_BASE.BIT._MK166
#define EIC166_RF166 EIC166_BASE.BIT._RF166
#define EIC166_CT166 EIC166_BASE.BIT._CT166
#define EIC167 EIC167_BASE.UINT16
#define EIC167_P0167 EIC167_BASE.BIT._P0167
#define EIC167_P1167 EIC167_BASE.BIT._P1167
#define EIC167_P2167 EIC167_BASE.BIT._P2167
#define EIC167_P3167 EIC167_BASE.BIT._P3167
#define EIC167_TB167 EIC167_BASE.BIT._TB167
#define EIC167_MK167 EIC167_BASE.BIT._MK167
#define EIC167_RF167 EIC167_BASE.BIT._RF167
#define EIC167_CT167 EIC167_BASE.BIT._CT167
#define EIC168 EIC168_BASE.UINT16
#define EIC168_P0168 EIC168_BASE.BIT._P0168
#define EIC168_P1168 EIC168_BASE.BIT._P1168
#define EIC168_P2168 EIC168_BASE.BIT._P2168
#define EIC168_P3168 EIC168_BASE.BIT._P3168
#define EIC168_TB168 EIC168_BASE.BIT._TB168
#define EIC168_MK168 EIC168_BASE.BIT._MK168
#define EIC168_RF168 EIC168_BASE.BIT._RF168
#define EIC168_CT168 EIC168_BASE.BIT._CT168
#define EIC169 EIC169_BASE.UINT16
#define EIC169_P0169 EIC169_BASE.BIT._P0169
#define EIC169_P1169 EIC169_BASE.BIT._P1169
#define EIC169_P2169 EIC169_BASE.BIT._P2169
#define EIC169_P3169 EIC169_BASE.BIT._P3169
#define EIC169_TB169 EIC169_BASE.BIT._TB169
#define EIC169_MK169 EIC169_BASE.BIT._MK169
#define EIC169_RF169 EIC169_BASE.BIT._RF169
#define EIC169_CT169 EIC169_BASE.BIT._CT169
#define EIC170 EIC170_BASE.UINT16
#define EIC170_P0170 EIC170_BASE.BIT._P0170
#define EIC170_P1170 EIC170_BASE.BIT._P1170
#define EIC170_P2170 EIC170_BASE.BIT._P2170
#define EIC170_P3170 EIC170_BASE.BIT._P3170
#define EIC170_TB170 EIC170_BASE.BIT._TB170
#define EIC170_MK170 EIC170_BASE.BIT._MK170
#define EIC170_RF170 EIC170_BASE.BIT._RF170
#define EIC170_CT170 EIC170_BASE.BIT._CT170
#define EIC171 EIC171_BASE.UINT16
#define EIC171_P0171 EIC171_BASE.BIT._P0171
#define EIC171_P1171 EIC171_BASE.BIT._P1171
#define EIC171_P2171 EIC171_BASE.BIT._P2171
#define EIC171_P3171 EIC171_BASE.BIT._P3171
#define EIC171_TB171 EIC171_BASE.BIT._TB171
#define EIC171_MK171 EIC171_BASE.BIT._MK171
#define EIC171_RF171 EIC171_BASE.BIT._RF171
#define EIC171_CT171 EIC171_BASE.BIT._CT171
#define EIC172 EIC172_BASE.UINT16
#define EIC172_P0172 EIC172_BASE.BIT._P0172
#define EIC172_P1172 EIC172_BASE.BIT._P1172
#define EIC172_P2172 EIC172_BASE.BIT._P2172
#define EIC172_P3172 EIC172_BASE.BIT._P3172
#define EIC172_TB172 EIC172_BASE.BIT._TB172
#define EIC172_MK172 EIC172_BASE.BIT._MK172
#define EIC172_RF172 EIC172_BASE.BIT._RF172
#define EIC172_CT172 EIC172_BASE.BIT._CT172
#define EIC173 EIC173_BASE.UINT16
#define EIC173_P0173 EIC173_BASE.BIT._P0173
#define EIC173_P1173 EIC173_BASE.BIT._P1173
#define EIC173_P2173 EIC173_BASE.BIT._P2173
#define EIC173_P3173 EIC173_BASE.BIT._P3173
#define EIC173_TB173 EIC173_BASE.BIT._TB173
#define EIC173_MK173 EIC173_BASE.BIT._MK173
#define EIC173_RF173 EIC173_BASE.BIT._RF173
#define EIC173_CT173 EIC173_BASE.BIT._CT173
#define EIC174 EIC174_BASE.UINT16
#define EIC174_P0174 EIC174_BASE.BIT._P0174
#define EIC174_P1174 EIC174_BASE.BIT._P1174
#define EIC174_P2174 EIC174_BASE.BIT._P2174
#define EIC174_P3174 EIC174_BASE.BIT._P3174
#define EIC174_TB174 EIC174_BASE.BIT._TB174
#define EIC174_MK174 EIC174_BASE.BIT._MK174
#define EIC174_RF174 EIC174_BASE.BIT._RF174
#define EIC174_CT174 EIC174_BASE.BIT._CT174
#define EIC175 EIC175_BASE.UINT16
#define EIC175_P0175 EIC175_BASE.BIT._P0175
#define EIC175_P1175 EIC175_BASE.BIT._P1175
#define EIC175_P2175 EIC175_BASE.BIT._P2175
#define EIC175_P3175 EIC175_BASE.BIT._P3175
#define EIC175_TB175 EIC175_BASE.BIT._TB175
#define EIC175_MK175 EIC175_BASE.BIT._MK175
#define EIC175_RF175 EIC175_BASE.BIT._RF175
#define EIC175_CT175 EIC175_BASE.BIT._CT175
#define EIC176 EIC176_BASE.UINT16
#define EIC176_P0176 EIC176_BASE.BIT._P0176
#define EIC176_P1176 EIC176_BASE.BIT._P1176
#define EIC176_P2176 EIC176_BASE.BIT._P2176
#define EIC176_P3176 EIC176_BASE.BIT._P3176
#define EIC176_TB176 EIC176_BASE.BIT._TB176
#define EIC176_MK176 EIC176_BASE.BIT._MK176
#define EIC176_RF176 EIC176_BASE.BIT._RF176
#define EIC176_CT176 EIC176_BASE.BIT._CT176
#define EIC177 EIC177_BASE.UINT16
#define EIC177_P0177 EIC177_BASE.BIT._P0177
#define EIC177_P1177 EIC177_BASE.BIT._P1177
#define EIC177_P2177 EIC177_BASE.BIT._P2177
#define EIC177_P3177 EIC177_BASE.BIT._P3177
#define EIC177_TB177 EIC177_BASE.BIT._TB177
#define EIC177_MK177 EIC177_BASE.BIT._MK177
#define EIC177_RF177 EIC177_BASE.BIT._RF177
#define EIC177_CT177 EIC177_BASE.BIT._CT177
#define EIC178 EIC178_BASE.UINT16
#define EIC178_P0178 EIC178_BASE.BIT._P0178
#define EIC178_P1178 EIC178_BASE.BIT._P1178
#define EIC178_P2178 EIC178_BASE.BIT._P2178
#define EIC178_P3178 EIC178_BASE.BIT._P3178
#define EIC178_TB178 EIC178_BASE.BIT._TB178
#define EIC178_MK178 EIC178_BASE.BIT._MK178
#define EIC178_RF178 EIC178_BASE.BIT._RF178
#define EIC178_CT178 EIC178_BASE.BIT._CT178
#define EIC179 EIC179_BASE.UINT16
#define EIC179_P0179 EIC179_BASE.BIT._P0179
#define EIC179_P1179 EIC179_BASE.BIT._P1179
#define EIC179_P2179 EIC179_BASE.BIT._P2179
#define EIC179_P3179 EIC179_BASE.BIT._P3179
#define EIC179_TB179 EIC179_BASE.BIT._TB179
#define EIC179_MK179 EIC179_BASE.BIT._MK179
#define EIC179_RF179 EIC179_BASE.BIT._RF179
#define EIC179_CT179 EIC179_BASE.BIT._CT179
#define EIC180 EIC180_BASE.UINT16
#define EIC180_P0180 EIC180_BASE.BIT._P0180
#define EIC180_P1180 EIC180_BASE.BIT._P1180
#define EIC180_P2180 EIC180_BASE.BIT._P2180
#define EIC180_P3180 EIC180_BASE.BIT._P3180
#define EIC180_TB180 EIC180_BASE.BIT._TB180
#define EIC180_MK180 EIC180_BASE.BIT._MK180
#define EIC180_RF180 EIC180_BASE.BIT._RF180
#define EIC180_CT180 EIC180_BASE.BIT._CT180
#define EIC184 EIC184_BASE.UINT16
#define EIC184_P0184 EIC184_BASE.BIT._P0184
#define EIC184_P1184 EIC184_BASE.BIT._P1184
#define EIC184_P2184 EIC184_BASE.BIT._P2184
#define EIC184_P3184 EIC184_BASE.BIT._P3184
#define EIC184_TB184 EIC184_BASE.BIT._TB184
#define EIC184_MK184 EIC184_BASE.BIT._MK184
#define EIC184_RF184 EIC184_BASE.BIT._RF184
#define EIC184_CT184 EIC184_BASE.BIT._CT184
#define EIC186 EIC186_BASE.UINT16
#define EIC186_P0186 EIC186_BASE.BIT._P0186
#define EIC186_P1186 EIC186_BASE.BIT._P1186
#define EIC186_P2186 EIC186_BASE.BIT._P2186
#define EIC186_P3186 EIC186_BASE.BIT._P3186
#define EIC186_TB186 EIC186_BASE.BIT._TB186
#define EIC186_MK186 EIC186_BASE.BIT._MK186
#define EIC186_RF186 EIC186_BASE.BIT._RF186
#define EIC186_CT186 EIC186_BASE.BIT._CT186
#define EIC187 EIC187_BASE.UINT16
#define EIC187_P0187 EIC187_BASE.BIT._P0187
#define EIC187_P1187 EIC187_BASE.BIT._P1187
#define EIC187_P2187 EIC187_BASE.BIT._P2187
#define EIC187_P3187 EIC187_BASE.BIT._P3187
#define EIC187_TB187 EIC187_BASE.BIT._TB187
#define EIC187_MK187 EIC187_BASE.BIT._MK187
#define EIC187_RF187 EIC187_BASE.BIT._RF187
#define EIC187_CT187 EIC187_BASE.BIT._CT187
#define EIC188 EIC188_BASE.UINT16
#define EIC188_P0188 EIC188_BASE.BIT._P0188
#define EIC188_P1188 EIC188_BASE.BIT._P1188
#define EIC188_P2188 EIC188_BASE.BIT._P2188
#define EIC188_P3188 EIC188_BASE.BIT._P3188
#define EIC188_TB188 EIC188_BASE.BIT._TB188
#define EIC188_MK188 EIC188_BASE.BIT._MK188
#define EIC188_RF188 EIC188_BASE.BIT._RF188
#define EIC188_CT188 EIC188_BASE.BIT._CT188
#define EIC189 EIC189_BASE.UINT16
#define EIC189_P0189 EIC189_BASE.BIT._P0189
#define EIC189_P1189 EIC189_BASE.BIT._P1189
#define EIC189_P2189 EIC189_BASE.BIT._P2189
#define EIC189_P3189 EIC189_BASE.BIT._P3189
#define EIC189_TB189 EIC189_BASE.BIT._TB189
#define EIC189_MK189 EIC189_BASE.BIT._MK189
#define EIC189_RF189 EIC189_BASE.BIT._RF189
#define EIC189_CT189 EIC189_BASE.BIT._CT189
#define EIC190 EIC190_BASE.UINT16
#define EIC190_P0190 EIC190_BASE.BIT._P0190
#define EIC190_P1190 EIC190_BASE.BIT._P1190
#define EIC190_P2190 EIC190_BASE.BIT._P2190
#define EIC190_P3190 EIC190_BASE.BIT._P3190
#define EIC190_TB190 EIC190_BASE.BIT._TB190
#define EIC190_MK190 EIC190_BASE.BIT._MK190
#define EIC190_RF190 EIC190_BASE.BIT._RF190
#define EIC190_CT190 EIC190_BASE.BIT._CT190
#define EIC191 EIC191_BASE.UINT16
#define EIC191_P0191 EIC191_BASE.BIT._P0191
#define EIC191_P1191 EIC191_BASE.BIT._P1191
#define EIC191_P2191 EIC191_BASE.BIT._P2191
#define EIC191_P3191 EIC191_BASE.BIT._P3191
#define EIC191_TB191 EIC191_BASE.BIT._TB191
#define EIC191_MK191 EIC191_BASE.BIT._MK191
#define EIC191_RF191 EIC191_BASE.BIT._RF191
#define EIC191_CT191 EIC191_BASE.BIT._CT191
#define EIC192 EIC192_BASE.UINT16
#define EIC192_P0192 EIC192_BASE.BIT._P0192
#define EIC192_P1192 EIC192_BASE.BIT._P1192
#define EIC192_P2192 EIC192_BASE.BIT._P2192
#define EIC192_P3192 EIC192_BASE.BIT._P3192
#define EIC192_TB192 EIC192_BASE.BIT._TB192
#define EIC192_MK192 EIC192_BASE.BIT._MK192
#define EIC192_RF192 EIC192_BASE.BIT._RF192
#define EIC192_CT192 EIC192_BASE.BIT._CT192
#define EIC193 EIC193_BASE.UINT16
#define EIC193_P0193 EIC193_BASE.BIT._P0193
#define EIC193_P1193 EIC193_BASE.BIT._P1193
#define EIC193_P2193 EIC193_BASE.BIT._P2193
#define EIC193_P3193 EIC193_BASE.BIT._P3193
#define EIC193_TB193 EIC193_BASE.BIT._TB193
#define EIC193_MK193 EIC193_BASE.BIT._MK193
#define EIC193_RF193 EIC193_BASE.BIT._RF193
#define EIC193_CT193 EIC193_BASE.BIT._CT193
#define EIC194 EIC194_BASE.UINT16
#define EIC194_P0194 EIC194_BASE.BIT._P0194
#define EIC194_P1194 EIC194_BASE.BIT._P1194
#define EIC194_P2194 EIC194_BASE.BIT._P2194
#define EIC194_P3194 EIC194_BASE.BIT._P3194
#define EIC194_TB194 EIC194_BASE.BIT._TB194
#define EIC194_MK194 EIC194_BASE.BIT._MK194
#define EIC194_RF194 EIC194_BASE.BIT._RF194
#define EIC194_CT194 EIC194_BASE.BIT._CT194
#define EIC195 EIC195_BASE.UINT16
#define EIC195_P0195 EIC195_BASE.BIT._P0195
#define EIC195_P1195 EIC195_BASE.BIT._P1195
#define EIC195_P2195 EIC195_BASE.BIT._P2195
#define EIC195_P3195 EIC195_BASE.BIT._P3195
#define EIC195_TB195 EIC195_BASE.BIT._TB195
#define EIC195_MK195 EIC195_BASE.BIT._MK195
#define EIC195_RF195 EIC195_BASE.BIT._RF195
#define EIC195_CT195 EIC195_BASE.BIT._CT195
#define EIC196 EIC196_BASE.UINT16
#define EIC196_P0196 EIC196_BASE.BIT._P0196
#define EIC196_P1196 EIC196_BASE.BIT._P1196
#define EIC196_P2196 EIC196_BASE.BIT._P2196
#define EIC196_P3196 EIC196_BASE.BIT._P3196
#define EIC196_TB196 EIC196_BASE.BIT._TB196
#define EIC196_MK196 EIC196_BASE.BIT._MK196
#define EIC196_RF196 EIC196_BASE.BIT._RF196
#define EIC196_CT196 EIC196_BASE.BIT._CT196
#define EIC208 EIC208_BASE.UINT16
#define EIC208_P0208 EIC208_BASE.BIT._P0208
#define EIC208_P1208 EIC208_BASE.BIT._P1208
#define EIC208_P2208 EIC208_BASE.BIT._P2208
#define EIC208_P3208 EIC208_BASE.BIT._P3208
#define EIC208_TB208 EIC208_BASE.BIT._TB208
#define EIC208_MK208 EIC208_BASE.BIT._MK208
#define EIC208_RF208 EIC208_BASE.BIT._RF208
#define EIC208_CT208 EIC208_BASE.BIT._CT208
#define EIC209 EIC209_BASE.UINT16
#define EIC209_P0209 EIC209_BASE.BIT._P0209
#define EIC209_P1209 EIC209_BASE.BIT._P1209
#define EIC209_P2209 EIC209_BASE.BIT._P2209
#define EIC209_P3209 EIC209_BASE.BIT._P3209
#define EIC209_TB209 EIC209_BASE.BIT._TB209
#define EIC209_MK209 EIC209_BASE.BIT._MK209
#define EIC209_RF209 EIC209_BASE.BIT._RF209
#define EIC209_CT209 EIC209_BASE.BIT._CT209
#define EIC210 EIC210_BASE.UINT16
#define EIC210_P0210 EIC210_BASE.BIT._P0210
#define EIC210_P1210 EIC210_BASE.BIT._P1210
#define EIC210_P2210 EIC210_BASE.BIT._P2210
#define EIC210_P3210 EIC210_BASE.BIT._P3210
#define EIC210_TB210 EIC210_BASE.BIT._TB210
#define EIC210_MK210 EIC210_BASE.BIT._MK210
#define EIC210_RF210 EIC210_BASE.BIT._RF210
#define EIC210_CT210 EIC210_BASE.BIT._CT210
#define EIC211 EIC211_BASE.UINT16
#define EIC211_P0211 EIC211_BASE.BIT._P0211
#define EIC211_P1211 EIC211_BASE.BIT._P1211
#define EIC211_P2211 EIC211_BASE.BIT._P2211
#define EIC211_P3211 EIC211_BASE.BIT._P3211
#define EIC211_TB211 EIC211_BASE.BIT._TB211
#define EIC211_MK211 EIC211_BASE.BIT._MK211
#define EIC211_RF211 EIC211_BASE.BIT._RF211
#define EIC211_CT211 EIC211_BASE.BIT._CT211
#define EIC212 EIC212_BASE.UINT16
#define EIC212_P0212 EIC212_BASE.BIT._P0212
#define EIC212_P1212 EIC212_BASE.BIT._P1212
#define EIC212_P2212 EIC212_BASE.BIT._P2212
#define EIC212_P3212 EIC212_BASE.BIT._P3212
#define EIC212_TB212 EIC212_BASE.BIT._TB212
#define EIC212_MK212 EIC212_BASE.BIT._MK212
#define EIC212_RF212 EIC212_BASE.BIT._RF212
#define EIC212_CT212 EIC212_BASE.BIT._CT212
#define EIC213 EIC213_BASE.UINT16
#define EIC213_P0213 EIC213_BASE.BIT._P0213
#define EIC213_P1213 EIC213_BASE.BIT._P1213
#define EIC213_P2213 EIC213_BASE.BIT._P2213
#define EIC213_P3213 EIC213_BASE.BIT._P3213
#define EIC213_TB213 EIC213_BASE.BIT._TB213
#define EIC213_MK213 EIC213_BASE.BIT._MK213
#define EIC213_RF213 EIC213_BASE.BIT._RF213
#define EIC213_CT213 EIC213_BASE.BIT._CT213
#define EIC214 EIC214_BASE.UINT16
#define EIC214_P0214 EIC214_BASE.BIT._P0214
#define EIC214_P1214 EIC214_BASE.BIT._P1214
#define EIC214_P2214 EIC214_BASE.BIT._P2214
#define EIC214_P3214 EIC214_BASE.BIT._P3214
#define EIC214_TB214 EIC214_BASE.BIT._TB214
#define EIC214_MK214 EIC214_BASE.BIT._MK214
#define EIC214_RF214 EIC214_BASE.BIT._RF214
#define EIC214_CT214 EIC214_BASE.BIT._CT214
#define EIC215 EIC215_BASE.UINT16
#define EIC215_P0215 EIC215_BASE.BIT._P0215
#define EIC215_P1215 EIC215_BASE.BIT._P1215
#define EIC215_P2215 EIC215_BASE.BIT._P2215
#define EIC215_P3215 EIC215_BASE.BIT._P3215
#define EIC215_TB215 EIC215_BASE.BIT._TB215
#define EIC215_MK215 EIC215_BASE.BIT._MK215
#define EIC215_RF215 EIC215_BASE.BIT._RF215
#define EIC215_CT215 EIC215_BASE.BIT._CT215
#define EIC216 EIC216_BASE.UINT16
#define EIC216_P0216 EIC216_BASE.BIT._P0216
#define EIC216_P1216 EIC216_BASE.BIT._P1216
#define EIC216_P2216 EIC216_BASE.BIT._P2216
#define EIC216_P3216 EIC216_BASE.BIT._P3216
#define EIC216_TB216 EIC216_BASE.BIT._TB216
#define EIC216_MK216 EIC216_BASE.BIT._MK216
#define EIC216_RF216 EIC216_BASE.BIT._RF216
#define EIC216_CT216 EIC216_BASE.BIT._CT216
#define EIC217 EIC217_BASE.UINT16
#define EIC217_P0217 EIC217_BASE.BIT._P0217
#define EIC217_P1217 EIC217_BASE.BIT._P1217
#define EIC217_P2217 EIC217_BASE.BIT._P2217
#define EIC217_P3217 EIC217_BASE.BIT._P3217
#define EIC217_TB217 EIC217_BASE.BIT._TB217
#define EIC217_MK217 EIC217_BASE.BIT._MK217
#define EIC217_RF217 EIC217_BASE.BIT._RF217
#define EIC217_CT217 EIC217_BASE.BIT._CT217
#define EIC218 EIC218_BASE.UINT16
#define EIC218_P0218 EIC218_BASE.BIT._P0218
#define EIC218_P1218 EIC218_BASE.BIT._P1218
#define EIC218_P2218 EIC218_BASE.BIT._P2218
#define EIC218_P3218 EIC218_BASE.BIT._P3218
#define EIC218_TB218 EIC218_BASE.BIT._TB218
#define EIC218_MK218 EIC218_BASE.BIT._MK218
#define EIC218_RF218 EIC218_BASE.BIT._RF218
#define EIC218_CT218 EIC218_BASE.BIT._CT218
#define EIC219 EIC219_BASE.UINT16
#define EIC219_P0219 EIC219_BASE.BIT._P0219
#define EIC219_P1219 EIC219_BASE.BIT._P1219
#define EIC219_P2219 EIC219_BASE.BIT._P2219
#define EIC219_P3219 EIC219_BASE.BIT._P3219
#define EIC219_TB219 EIC219_BASE.BIT._TB219
#define EIC219_MK219 EIC219_BASE.BIT._MK219
#define EIC219_RF219 EIC219_BASE.BIT._RF219
#define EIC219_CT219 EIC219_BASE.BIT._CT219
#define EIC228 EIC228_BASE.UINT16
#define EIC228_P0229 EIC228_BASE.BIT._P0229
#define EIC228_P1229 EIC228_BASE.BIT._P1229
#define EIC228_P2229 EIC228_BASE.BIT._P2229
#define EIC228_P3229 EIC228_BASE.BIT._P3229
#define EIC228_TB229 EIC228_BASE.BIT._TB229
#define EIC228_MK229 EIC228_BASE.BIT._MK229
#define EIC228_RF229 EIC228_BASE.BIT._RF229
#define EIC228_CT229 EIC228_BASE.BIT._CT229
#define EIC229 EIC229_BASE.UINT16
#define EIC230 EIC230_BASE.UINT16
#define EIC230_P0230 EIC230_BASE.BIT._P0230
#define EIC230_P1230 EIC230_BASE.BIT._P1230
#define EIC230_P2230 EIC230_BASE.BIT._P2230
#define EIC230_P3230 EIC230_BASE.BIT._P3230
#define EIC230_TB230 EIC230_BASE.BIT._TB230
#define EIC230_MK230 EIC230_BASE.BIT._MK230
#define EIC230_RF230 EIC230_BASE.BIT._RF230
#define EIC230_CT230 EIC230_BASE.BIT._CT230
#define EIC231 EIC231_BASE.UINT16
#define EIC231_P0231 EIC231_BASE.BIT._P0231
#define EIC231_P1231 EIC231_BASE.BIT._P1231
#define EIC231_P2231 EIC231_BASE.BIT._P2231
#define EIC231_P3231 EIC231_BASE.BIT._P3231
#define EIC231_TB231 EIC231_BASE.BIT._TB231
#define EIC231_MK231 EIC231_BASE.BIT._MK231
#define EIC231_RF231 EIC231_BASE.BIT._RF231
#define EIC231_CT231 EIC231_BASE.BIT._CT231
#define EIC232 EIC232_BASE.UINT16
#define EIC232_P0232 EIC232_BASE.BIT._P0232
#define EIC232_P1232 EIC232_BASE.BIT._P1232
#define EIC232_P2232 EIC232_BASE.BIT._P2232
#define EIC232_P3232 EIC232_BASE.BIT._P3232
#define EIC232_TB232 EIC232_BASE.BIT._TB232
#define EIC232_MK232 EIC232_BASE.BIT._MK232
#define EIC232_RF232 EIC232_BASE.BIT._RF232
#define EIC232_CT232 EIC232_BASE.BIT._CT232
#define EIC233 EIC233_BASE.UINT16
#define EIC233_P0233 EIC233_BASE.BIT._P0233
#define EIC233_P1233 EIC233_BASE.BIT._P1233
#define EIC233_P2233 EIC233_BASE.BIT._P2233
#define EIC233_P3233 EIC233_BASE.BIT._P3233
#define EIC233_TB233 EIC233_BASE.BIT._TB233
#define EIC233_MK233 EIC233_BASE.BIT._MK233
#define EIC233_RF233 EIC233_BASE.BIT._RF233
#define EIC233_CT233 EIC233_BASE.BIT._CT233
#define EIC234 EIC234_BASE.UINT16
#define EIC234_P0234 EIC234_BASE.BIT._P0234
#define EIC234_P1234 EIC234_BASE.BIT._P1234
#define EIC234_P2234 EIC234_BASE.BIT._P2234
#define EIC234_P3234 EIC234_BASE.BIT._P3234
#define EIC234_TB234 EIC234_BASE.BIT._TB234
#define EIC234_MK234 EIC234_BASE.BIT._MK234
#define EIC234_RF234 EIC234_BASE.BIT._RF234
#define EIC234_CT234 EIC234_BASE.BIT._CT234
#define EIC235 EIC235_BASE.UINT16
#define EIC235_P0235 EIC235_BASE.BIT._P0235
#define EIC235_P1235 EIC235_BASE.BIT._P1235
#define EIC235_P2235 EIC235_BASE.BIT._P2235
#define EIC235_P3235 EIC235_BASE.BIT._P3235
#define EIC235_TB235 EIC235_BASE.BIT._TB235
#define EIC235_MK235 EIC235_BASE.BIT._MK235
#define EIC235_RF235 EIC235_BASE.BIT._RF235
#define EIC235_CT235 EIC235_BASE.BIT._CT235
#define EIC236 EIC236_BASE.UINT16
#define EIC236_P0236 EIC236_BASE.BIT._P0236
#define EIC236_P1236 EIC236_BASE.BIT._P1236
#define EIC236_P2236 EIC236_BASE.BIT._P2236
#define EIC236_P3236 EIC236_BASE.BIT._P3236
#define EIC236_TB236 EIC236_BASE.BIT._TB236
#define EIC236_MK236 EIC236_BASE.BIT._MK236
#define EIC236_RF236 EIC236_BASE.BIT._RF236
#define EIC236_CT236 EIC236_BASE.BIT._CT236
#define EIC237 EIC237_BASE.UINT16
#define EIC237_P0237 EIC237_BASE.BIT._P0237
#define EIC237_P1237 EIC237_BASE.BIT._P1237
#define EIC237_P2237 EIC237_BASE.BIT._P2237
#define EIC237_P3237 EIC237_BASE.BIT._P3237
#define EIC237_TB237 EIC237_BASE.BIT._TB237
#define EIC237_MK237 EIC237_BASE.BIT._MK237
#define EIC237_RF237 EIC237_BASE.BIT._RF237
#define EIC237_CT237 EIC237_BASE.BIT._CT237
#define EIC238 EIC238_BASE.UINT16
#define EIC238_P0238 EIC238_BASE.BIT._P0238
#define EIC238_P1238 EIC238_BASE.BIT._P1238
#define EIC238_P2238 EIC238_BASE.BIT._P2238
#define EIC238_P3238 EIC238_BASE.BIT._P3238
#define EIC238_TB238 EIC238_BASE.BIT._TB238
#define EIC238_MK238 EIC238_BASE.BIT._MK238
#define EIC238_RF238 EIC238_BASE.BIT._RF238
#define EIC238_CT238 EIC238_BASE.BIT._CT238
#define EIC239 EIC239_BASE.UINT16
#define EIC239_P0239 EIC239_BASE.BIT._P0239
#define EIC239_P1239 EIC239_BASE.BIT._P1239
#define EIC239_P2239 EIC239_BASE.BIT._P2239
#define EIC239_P3239 EIC239_BASE.BIT._P3239
#define EIC239_TB239 EIC239_BASE.BIT._TB239
#define EIC239_MK239 EIC239_BASE.BIT._MK239
#define EIC239_RF239 EIC239_BASE.BIT._RF239
#define EIC239_CT239 EIC239_BASE.BIT._CT239
#define EIC240 EIC240_BASE.UINT16
#define EIC240_P0240 EIC240_BASE.BIT._P0240
#define EIC240_P1240 EIC240_BASE.BIT._P1240
#define EIC240_P2240 EIC240_BASE.BIT._P2240
#define EIC240_P3240 EIC240_BASE.BIT._P3240
#define EIC240_TB240 EIC240_BASE.BIT._TB240
#define EIC240_MK240 EIC240_BASE.BIT._MK240
#define EIC240_RF240 EIC240_BASE.BIT._RF240
#define EIC240_CT240 EIC240_BASE.BIT._CT240
#define EIC241 EIC241_BASE.UINT16
#define EIC241_P0241 EIC241_BASE.BIT._P0241
#define EIC241_P1241 EIC241_BASE.BIT._P1241
#define EIC241_P2241 EIC241_BASE.BIT._P2241
#define EIC241_P3241 EIC241_BASE.BIT._P3241
#define EIC241_TB241 EIC241_BASE.BIT._TB241
#define EIC241_MK241 EIC241_BASE.BIT._MK241
#define EIC241_RF241 EIC241_BASE.BIT._RF241
#define EIC241_CT241 EIC241_BASE.BIT._CT241
#define EIC242 EIC242_BASE.UINT16
#define EIC242_P0242 EIC242_BASE.BIT._P0242
#define EIC242_P1242 EIC242_BASE.BIT._P1242
#define EIC242_P2242 EIC242_BASE.BIT._P2242
#define EIC242_P3242 EIC242_BASE.BIT._P3242
#define EIC242_TB242 EIC242_BASE.BIT._TB242
#define EIC242_MK242 EIC242_BASE.BIT._MK242
#define EIC242_RF242 EIC242_BASE.BIT._RF242
#define EIC242_CT242 EIC242_BASE.BIT._CT242
#define EIC243 EIC243_BASE.UINT16
#define EIC243_P0243 EIC243_BASE.BIT._P0243
#define EIC243_P1243 EIC243_BASE.BIT._P1243
#define EIC243_P2243 EIC243_BASE.BIT._P2243
#define EIC243_P3243 EIC243_BASE.BIT._P3243
#define EIC243_TB243 EIC243_BASE.BIT._TB243
#define EIC243_MK243 EIC243_BASE.BIT._MK243
#define EIC243_RF243 EIC243_BASE.BIT._RF243
#define EIC243_CT243 EIC243_BASE.BIT._CT243
#define EIC244 EIC244_BASE.UINT16
#define EIC244_P0244 EIC244_BASE.BIT._P0244
#define EIC244_P1244 EIC244_BASE.BIT._P1244
#define EIC244_P2244 EIC244_BASE.BIT._P2244
#define EIC244_P3244 EIC244_BASE.BIT._P3244
#define EIC244_TB244 EIC244_BASE.BIT._TB244
#define EIC244_MK244 EIC244_BASE.BIT._MK244
#define EIC244_RF244 EIC244_BASE.BIT._RF244
#define EIC244_CT244 EIC244_BASE.BIT._CT244
#define IMR1 IMR1_BASE.UINT32
#define IMR1_IMR1EIKM32 IMR1_BASE.BIT._IMR1EIKM32
#define IMR1_IMR1EIKM33 IMR1_BASE.BIT._IMR1EIKM33
#define IMR1_IMR1EIKM34 IMR1_BASE.BIT._IMR1EIKM34
#define IMR1_IMR1EIKM35 IMR1_BASE.BIT._IMR1EIKM35
#define IMR1_IMR1EIKM36 IMR1_BASE.BIT._IMR1EIKM36
#define IMR1_IMR1EIKM37 IMR1_BASE.BIT._IMR1EIKM37
#define IMR1_IMR1EIKM38 IMR1_BASE.BIT._IMR1EIKM38
#define IMR1_IMR1EIKM39 IMR1_BASE.BIT._IMR1EIKM39
#define IMR1_IMR1EIKM40 IMR1_BASE.BIT._IMR1EIKM40
#define IMR1_IMR1EIKM41 IMR1_BASE.BIT._IMR1EIKM41
#define IMR1_IMR1EIKM42 IMR1_BASE.BIT._IMR1EIKM42
#define IMR1_IMR1EIKM43 IMR1_BASE.BIT._IMR1EIKM43
#define IMR1_IMR1EIKM44 IMR1_BASE.BIT._IMR1EIKM44
#define IMR1_IMR1EIKM45 IMR1_BASE.BIT._IMR1EIKM45
#define IMR1_IMR1EIKM46 IMR1_BASE.BIT._IMR1EIKM46
#define IMR1_IMR1EIKM47 IMR1_BASE.BIT._IMR1EIKM47
#define IMR1_IMR1EIKM48 IMR1_BASE.BIT._IMR1EIKM48
#define IMR1_IMR1EIKM49 IMR1_BASE.BIT._IMR1EIKM49
#define IMR1_IMR1EIKM50 IMR1_BASE.BIT._IMR1EIKM50
#define IMR1_IMR1EIKM51 IMR1_BASE.BIT._IMR1EIKM51
#define IMR1_IMR1EIKM52 IMR1_BASE.BIT._IMR1EIKM52
#define IMR1_IMR1EIKM53 IMR1_BASE.BIT._IMR1EIKM53
#define IMR1_IMR1EIKM54 IMR1_BASE.BIT._IMR1EIKM54
#define IMR1_IMR1EIKM55 IMR1_BASE.BIT._IMR1EIKM55
#define IMR1_IMR1EIKM56 IMR1_BASE.BIT._IMR1EIKM56
#define IMR1_IMR1EIKM57 IMR1_BASE.BIT._IMR1EIKM57
#define IMR1_IMR1EIKM58 IMR1_BASE.BIT._IMR1EIKM58
#define IMR1_IMR1EIKM59 IMR1_BASE.BIT._IMR1EIKM59
#define IMR1_IMR1EIKM60 IMR1_BASE.BIT._IMR1EIKM60
#define IMR1_IMR1EIKM61 IMR1_BASE.BIT._IMR1EIKM61
#define IMR1_IMR1EIKM62 IMR1_BASE.BIT._IMR1EIKM62
#define IMR1_IMR1EIKM63 IMR1_BASE.BIT._IMR1EIKM63
#define IMR2 IMR2_BASE.UINT32
#define IMR2_IMR2EIKM64 IMR2_BASE.BIT._IMR2EIKM64
#define IMR2_IMR2EIKM65 IMR2_BASE.BIT._IMR2EIKM65
#define IMR2_IMR2EIKM66 IMR2_BASE.BIT._IMR2EIKM66
#define IMR2_IMR2EIKM67 IMR2_BASE.BIT._IMR2EIKM67
#define IMR2_IMR2EIKM68 IMR2_BASE.BIT._IMR2EIKM68
#define IMR2_IMR2EIKM69 IMR2_BASE.BIT._IMR2EIKM69
#define IMR2_IMR2EIKM70 IMR2_BASE.BIT._IMR2EIKM70
#define IMR2_IMR2EIKM71 IMR2_BASE.BIT._IMR2EIKM71
#define IMR2_IMR2EIKM72 IMR2_BASE.BIT._IMR2EIKM72
#define IMR2_IMR2EIKM73 IMR2_BASE.BIT._IMR2EIKM73
#define IMR2_IMR2EIKM74 IMR2_BASE.BIT._IMR2EIKM74
#define IMR2_IMR2EIKM75 IMR2_BASE.BIT._IMR2EIKM75
#define IMR2_IMR2EIKM76 IMR2_BASE.BIT._IMR2EIKM76
#define IMR2_IMR2EIKM77 IMR2_BASE.BIT._IMR2EIKM77
#define IMR2_IMR2EIKM78 IMR2_BASE.BIT._IMR2EIKM78
#define IMR2_IMR2EIKM79 IMR2_BASE.BIT._IMR2EIKM79
#define IMR2_IMR2EIKM80 IMR2_BASE.BIT._IMR2EIKM80
#define IMR2_IMR2EIKM81 IMR2_BASE.BIT._IMR2EIKM81
#define IMR2_IMR2EIKM82 IMR2_BASE.BIT._IMR2EIKM82
#define IMR2_IMR2EIKM83 IMR2_BASE.BIT._IMR2EIKM83
#define IMR2_IMR2EIKM84 IMR2_BASE.BIT._IMR2EIKM84
#define IMR2_IMR2EIKM85 IMR2_BASE.BIT._IMR2EIKM85
#define IMR2_IMR2EIKM86 IMR2_BASE.BIT._IMR2EIKM86
#define IMR2_IMR2EIKM87 IMR2_BASE.BIT._IMR2EIKM87
#define IMR2_IMR2EIKM88 IMR2_BASE.BIT._IMR2EIKM88
#define IMR2_IMR2EIKM89 IMR2_BASE.BIT._IMR2EIKM89
#define IMR2_IMR2EIKM90 IMR2_BASE.BIT._IMR2EIKM90
#define IMR2_IMR2EIKM91 IMR2_BASE.BIT._IMR2EIKM91
#define IMR2_IMR2EIKM92 IMR2_BASE.BIT._IMR2EIKM92
#define IMR2_IMR2EIKM93 IMR2_BASE.BIT._IMR2EIKM93
#define IMR2_IMR2EIKM94 IMR2_BASE.BIT._IMR2EIKM94
#define IMR2_IMR2EIKM95 IMR2_BASE.BIT._IMR2EIKM95
#define IMR3 IMR3_BASE.UINT32
#define IMR3_IMR3EIKM96 IMR3_BASE.BIT._IMR3EIKM96
#define IMR3_IMR3EIKM97 IMR3_BASE.BIT._IMR3EIKM97
#define IMR3_IMR3EIKM98 IMR3_BASE.BIT._IMR3EIKM98
#define IMR3_IMR3EIKM99 IMR3_BASE.BIT._IMR3EIKM99
#define IMR3_IMR3EIKM100 IMR3_BASE.BIT._IMR3EIKM100
#define IMR3_IMR3EIKM101 IMR3_BASE.BIT._IMR3EIKM101
#define IMR3_IMR3EIKM102 IMR3_BASE.BIT._IMR3EIKM102
#define IMR3_IMR3EIKM103 IMR3_BASE.BIT._IMR3EIKM103
#define IMR3_IMR3EIKM104 IMR3_BASE.BIT._IMR3EIKM104
#define IMR3_IMR3EIKM105 IMR3_BASE.BIT._IMR3EIKM105
#define IMR3_IMR3EIKM106 IMR3_BASE.BIT._IMR3EIKM106
#define IMR3_IMR3EIKM107 IMR3_BASE.BIT._IMR3EIKM107
#define IMR3_IMR3EIKM108 IMR3_BASE.BIT._IMR3EIKM108
#define IMR3_IMR3EIKM109 IMR3_BASE.BIT._IMR3EIKM109
#define IMR3_IMR3EIKM110 IMR3_BASE.BIT._IMR3EIKM110
#define IMR3_IMR3EIKM111 IMR3_BASE.BIT._IMR3EIKM111
#define IMR3_IMR3EIKM112 IMR3_BASE.BIT._IMR3EIKM112
#define IMR3_IMR3EIKM113 IMR3_BASE.BIT._IMR3EIKM113
#define IMR3_IMR3EIKM114 IMR3_BASE.BIT._IMR3EIKM114
#define IMR3_IMR3EIKM115 IMR3_BASE.BIT._IMR3EIKM115
#define IMR3_IMR3EIKM116 IMR3_BASE.BIT._IMR3EIKM116
#define IMR3_IMR3EIKM117 IMR3_BASE.BIT._IMR3EIKM117
#define IMR3_IMR3EIKM118 IMR3_BASE.BIT._IMR3EIKM118
#define IMR3_IMR3EIKM119 IMR3_BASE.BIT._IMR3EIKM119
#define IMR3_IMR3EIKM120 IMR3_BASE.BIT._IMR3EIKM120
#define IMR3_IMR3EIKM121 IMR3_BASE.BIT._IMR3EIKM121
#define IMR3_IMR3EIKM122 IMR3_BASE.BIT._IMR3EIKM122
#define IMR3_IMR3EIKM123 IMR3_BASE.BIT._IMR3EIKM123
#define IMR3_IMR3EIKM124 IMR3_BASE.BIT._IMR3EIKM124
#define IMR3_IMR3EIKM125 IMR3_BASE.BIT._IMR3EIKM125
#define IMR3_IMR3EIKM126 IMR3_BASE.BIT._IMR3EIKM126
#define IMR3_IMR3EIKM127 IMR3_BASE.BIT._IMR3EIKM127
#define IMR4 IMR4_BASE.UINT32
#define IMR4_IMR4EIKM128 IMR4_BASE.BIT._IMR4EIKM128
#define IMR4_IMR4EIKM129 IMR4_BASE.BIT._IMR4EIKM129
#define IMR4_IMR4EIKM130 IMR4_BASE.BIT._IMR4EIKM130
#define IMR4_IMR4EIKM131 IMR4_BASE.BIT._IMR4EIKM131
#define IMR4_IMR4EIKM132 IMR4_BASE.BIT._IMR4EIKM132
#define IMR4_IMR4EIKM133 IMR4_BASE.BIT._IMR4EIKM133
#define IMR4_IMR4EIKM134 IMR4_BASE.BIT._IMR4EIKM134
#define IMR4_IMR4EIKM135 IMR4_BASE.BIT._IMR4EIKM135
#define IMR4_IMR4EIKM136 IMR4_BASE.BIT._IMR4EIKM136
#define IMR4_IMR4EIKM137 IMR4_BASE.BIT._IMR4EIKM137
#define IMR4_IMR4EIKM138 IMR4_BASE.BIT._IMR4EIKM138
#define IMR4_IMR4EIKM139 IMR4_BASE.BIT._IMR4EIKM139
#define IMR4_IMR4EIKM140 IMR4_BASE.BIT._IMR4EIKM140
#define IMR4_IMR4EIKM141 IMR4_BASE.BIT._IMR4EIKM141
#define IMR4_IMR4EIKM142 IMR4_BASE.BIT._IMR4EIKM142
#define IMR4_IMR4EIKM143 IMR4_BASE.BIT._IMR4EIKM143
#define IMR4_IMR4EIKM144 IMR4_BASE.BIT._IMR4EIKM144
#define IMR4_IMR4EIKM145 IMR4_BASE.BIT._IMR4EIKM145
#define IMR4_IMR4EIKM146 IMR4_BASE.BIT._IMR4EIKM146
#define IMR4_IMR4EIKM147 IMR4_BASE.BIT._IMR4EIKM147
#define IMR4_IMR4EIKM148 IMR4_BASE.BIT._IMR4EIKM148
#define IMR4_IMR4EIKM149 IMR4_BASE.BIT._IMR4EIKM149
#define IMR4_IMR4EIKM150 IMR4_BASE.BIT._IMR4EIKM150
#define IMR4_IMR4EIKM151 IMR4_BASE.BIT._IMR4EIKM151
#define IMR4_IMR4EIKM152 IMR4_BASE.BIT._IMR4EIKM152
#define IMR4_IMR4EIKM153 IMR4_BASE.BIT._IMR4EIKM153
#define IMR4_IMR4EIKM154 IMR4_BASE.BIT._IMR4EIKM154
#define IMR4_IMR4EIKM155 IMR4_BASE.BIT._IMR4EIKM155
#define IMR4_IMR4EIKM156 IMR4_BASE.BIT._IMR4EIKM156
#define IMR4_IMR4EIKM157 IMR4_BASE.BIT._IMR4EIKM157
#define IMR4_IMR4EIKM158 IMR4_BASE.BIT._IMR4EIKM158
#define IMR4_IMR4EIKM159 IMR4_BASE.BIT._IMR4EIKM159
#define IMR5 IMR5_BASE.UINT32
#define IMR5_IMR5EIKM160 IMR5_BASE.BIT._IMR5EIKM160
#define IMR5_IMR5EIKM161 IMR5_BASE.BIT._IMR5EIKM161
#define IMR5_IMR5EIKM162 IMR5_BASE.BIT._IMR5EIKM162
#define IMR5_IMR5EIKM163 IMR5_BASE.BIT._IMR5EIKM163
#define IMR5_IMR5EIKM164 IMR5_BASE.BIT._IMR5EIKM164
#define IMR5_IMR5EIKM165 IMR5_BASE.BIT._IMR5EIKM165
#define IMR5_IMR5EIKM166 IMR5_BASE.BIT._IMR5EIKM166
#define IMR5_IMR5EIKM167 IMR5_BASE.BIT._IMR5EIKM167
#define IMR5_IMR5EIKM168 IMR5_BASE.BIT._IMR5EIKM168
#define IMR5_IMR5EIKM169 IMR5_BASE.BIT._IMR5EIKM169
#define IMR5_IMR5EIKM170 IMR5_BASE.BIT._IMR5EIKM170
#define IMR5_IMR5EIKM171 IMR5_BASE.BIT._IMR5EIKM171
#define IMR5_IMR5EIKM172 IMR5_BASE.BIT._IMR5EIKM172
#define IMR5_IMR5EIKM173 IMR5_BASE.BIT._IMR5EIKM173
#define IMR5_IMR5EIKM174 IMR5_BASE.BIT._IMR5EIKM174
#define IMR5_IMR5EIKM175 IMR5_BASE.BIT._IMR5EIKM175
#define IMR5_IMR5EIKM176 IMR5_BASE.BIT._IMR5EIKM176
#define IMR5_IMR5EIKM177 IMR5_BASE.BIT._IMR5EIKM177
#define IMR5_IMR5EIKM178 IMR5_BASE.BIT._IMR5EIKM178
#define IMR5_IMR5EIKM179 IMR5_BASE.BIT._IMR5EIKM179
#define IMR5_IMR5EIKM180 IMR5_BASE.BIT._IMR5EIKM180
#define IMR5_IMR5EIKM181 IMR5_BASE.BIT._IMR5EIKM181
#define IMR5_IMR5EIKM182 IMR5_BASE.BIT._IMR5EIKM182
#define IMR5_IMR5EIKM183 IMR5_BASE.BIT._IMR5EIKM183
#define IMR5_IMR5EIKM184 IMR5_BASE.BIT._IMR5EIKM184
#define IMR5_IMR5EIKM185 IMR5_BASE.BIT._IMR5EIKM185
#define IMR5_IMR5EIKM186 IMR5_BASE.BIT._IMR5EIKM186
#define IMR5_IMR5EIKM187 IMR5_BASE.BIT._IMR5EIKM187
#define IMR5_IMR5EIKM188 IMR5_BASE.BIT._IMR5EIKM188
#define IMR5_IMR5EIKM189 IMR5_BASE.BIT._IMR5EIKM189
#define IMR5_IMR5EIKM190 IMR5_BASE.BIT._IMR5EIKM190
#define IMR5_IMR5EIKM191 IMR5_BASE.BIT._IMR5EIKM191
#define IMR6 IMR6_BASE.UINT32
#define IMR6_IMR6EIKM192 IMR6_BASE.BIT._IMR6EIKM192
#define IMR6_IMR6EIKM193 IMR6_BASE.BIT._IMR6EIKM193
#define IMR6_IMR6EIKM194 IMR6_BASE.BIT._IMR6EIKM194
#define IMR6_IMR6EIKM195 IMR6_BASE.BIT._IMR6EIKM195
#define IMR6_IMR6EIKM196 IMR6_BASE.BIT._IMR6EIKM196
#define IMR6_IMR6EIKM197 IMR6_BASE.BIT._IMR6EIKM197
#define IMR6_IMR6EIKM198 IMR6_BASE.BIT._IMR6EIKM198
#define IMR6_IMR6EIKM199 IMR6_BASE.BIT._IMR6EIKM199
#define IMR6_IMR6EIKM200 IMR6_BASE.BIT._IMR6EIKM200
#define IMR6_IMR6EIKM201 IMR6_BASE.BIT._IMR6EIKM201
#define IMR6_IMR6EIKM202 IMR6_BASE.BIT._IMR6EIKM202
#define IMR6_IMR6EIKM203 IMR6_BASE.BIT._IMR6EIKM203
#define IMR6_IMR6EIKM204 IMR6_BASE.BIT._IMR6EIKM204
#define IMR6_IMR6EIKM205 IMR6_BASE.BIT._IMR6EIKM205
#define IMR6_IMR6EIKM206 IMR6_BASE.BIT._IMR6EIKM206
#define IMR6_IMR6EIKM207 IMR6_BASE.BIT._IMR6EIKM207
#define IMR6_IMR6EIKM208 IMR6_BASE.BIT._IMR6EIKM208
#define IMR6_IMR6EIKM209 IMR6_BASE.BIT._IMR6EIKM209
#define IMR6_IMR6EIKM210 IMR6_BASE.BIT._IMR6EIKM210
#define IMR6_IMR6EIKM211 IMR6_BASE.BIT._IMR6EIKM211
#define IMR6_IMR6EIKM212 IMR6_BASE.BIT._IMR6EIKM212
#define IMR6_IMR6EIKM213 IMR6_BASE.BIT._IMR6EIKM213
#define IMR6_IMR6EIKM214 IMR6_BASE.BIT._IMR6EIKM214
#define IMR6_IMR6EIKM215 IMR6_BASE.BIT._IMR6EIKM215
#define IMR6_IMR6EIKM216 IMR6_BASE.BIT._IMR6EIKM216
#define IMR6_IMR6EIKM217 IMR6_BASE.BIT._IMR6EIKM217
#define IMR6_IMR6EIKM218 IMR6_BASE.BIT._IMR6EIKM218
#define IMR6_IMR6EIKM219 IMR6_BASE.BIT._IMR6EIKM219
#define IMR6_IMR6EIKM220 IMR6_BASE.BIT._IMR6EIKM220
#define IMR6_IMR6EIKM221 IMR6_BASE.BIT._IMR6EIKM221
#define IMR6_IMR6EIKM222 IMR6_BASE.BIT._IMR6EIKM222
#define IMR6_IMR6EIKM223 IMR6_BASE.BIT._IMR6EIKM223
#define IMR7 IMR7_BASE.UINT32
#define IMR7_IMR7EIKM224 IMR7_BASE.BIT._IMR7EIKM224
#define IMR7_IMR7EIKM225 IMR7_BASE.BIT._IMR7EIKM225
#define IMR7_IMR7EIKM226 IMR7_BASE.BIT._IMR7EIKM226
#define IMR7_IMR7EIKM227 IMR7_BASE.BIT._IMR7EIKM227
#define IMR7_IMR7EIKM228 IMR7_BASE.BIT._IMR7EIKM228
#define IMR7_IMR7EIKM229 IMR7_BASE.BIT._IMR7EIKM229
#define IMR7_IMR7EIKM230 IMR7_BASE.BIT._IMR7EIKM230
#define IMR7_IMR7EIKM231 IMR7_BASE.BIT._IMR7EIKM231
#define IMR7_IMR7EIKM232 IMR7_BASE.BIT._IMR7EIKM232
#define IMR7_IMR7EIKM233 IMR7_BASE.BIT._IMR7EIKM233
#define IMR7_IMR7EIKM234 IMR7_BASE.BIT._IMR7EIKM234
#define IMR7_IMR7EIKM235 IMR7_BASE.BIT._IMR7EIKM235
#define IMR7_IMR7EIKM236 IMR7_BASE.BIT._IMR7EIKM236
#define IMR7_IMR7EIKM237 IMR7_BASE.BIT._IMR7EIKM237
#define IMR7_IMR7EIKM238 IMR7_BASE.BIT._IMR7EIKM238
#define IMR7_IMR7EIKM239 IMR7_BASE.BIT._IMR7EIKM239
#define IMR7_IMR7EIKM240 IMR7_BASE.BIT._IMR7EIKM240
#define IMR7_IMR7EIKM241 IMR7_BASE.BIT._IMR7EIKM241
#define IMR7_IMR7EIKM242 IMR7_BASE.BIT._IMR7EIKM242
#define IMR7_IMR7EIKM243 IMR7_BASE.BIT._IMR7EIKM243
#define IMR7_IMR7EIKM244 IMR7_BASE.BIT._IMR7EIKM244
#define IMR7_IMR7EIKM245 IMR7_BASE.BIT._IMR7EIKM245
#define IMR7_IMR7EIKM246 IMR7_BASE.BIT._IMR7EIKM246
#define IMR7_IMR7EIKM247 IMR7_BASE.BIT._IMR7EIKM247
#define IMR7_IMR7EIKM248 IMR7_BASE.BIT._IMR7EIKM248
#define IMR7_IMR7EIKM249 IMR7_BASE.BIT._IMR7EIKM249
#define IMR7_IMR7EIKM250 IMR7_BASE.BIT._IMR7EIKM250
#define IMR7_IMR7EIKM251 IMR7_BASE.BIT._IMR7EIKM251
#define IMR7_IMR7EIKM252 IMR7_BASE.BIT._IMR7EIKM252
#define IMR7_IMR7EIKM253 IMR7_BASE.BIT._IMR7EIKM253
#define IMR7_IMR7EIKM254 IMR7_BASE.BIT._IMR7EIKM254
#define IMR7_IMR7EIKM255 IMR7_BASE.BIT._IMR7EIKM255
#define EIBD32 EIBD32_BASE.UINT32
#define EIBD32_PEID032 EIBD32_BASE.BIT._PEID032
#define EIBD32_PEID132 EIBD32_BASE.BIT._PEID132
#define EIBD32_PEID232 EIBD32_BASE.BIT._PEID232
#define EIBD32_GPID032 EIBD32_BASE.BIT._GPID032
#define EIBD32_GPID132 EIBD32_BASE.BIT._GPID132
#define EIBD32_GPID232 EIBD32_BASE.BIT._GPID232
#define EIBD32_BCP032 EIBD32_BASE.BIT._BCP032
#define EIBD32_BCP132 EIBD32_BASE.BIT._BCP132
#define EIBD32_BCP232 EIBD32_BASE.BIT._BCP232
#define EIBD32_CST EIBD32_BASE.BIT._CST
#define EIBD33 EIBD33_BASE.UINT32
#define EIBD33_PEID033 EIBD33_BASE.BIT._PEID033
#define EIBD33_PEID133 EIBD33_BASE.BIT._PEID133
#define EIBD33_PEID233 EIBD33_BASE.BIT._PEID233
#define EIBD33_GPID033 EIBD33_BASE.BIT._GPID033
#define EIBD33_GPID133 EIBD33_BASE.BIT._GPID133
#define EIBD33_GPID233 EIBD33_BASE.BIT._GPID233
#define EIBD33_BCP033 EIBD33_BASE.BIT._BCP033
#define EIBD33_BCP133 EIBD33_BASE.BIT._BCP133
#define EIBD33_BCP233 EIBD33_BASE.BIT._BCP233
#define EIBD33_CST EIBD33_BASE.BIT._CST
#define EIBD34 EIBD34_BASE.UINT32
#define EIBD34_PEID034 EIBD34_BASE.BIT._PEID034
#define EIBD34_PEID134 EIBD34_BASE.BIT._PEID134
#define EIBD34_PEID234 EIBD34_BASE.BIT._PEID234
#define EIBD34_GPID034 EIBD34_BASE.BIT._GPID034
#define EIBD34_GPID134 EIBD34_BASE.BIT._GPID134
#define EIBD34_GPID234 EIBD34_BASE.BIT._GPID234
#define EIBD34_BCP034 EIBD34_BASE.BIT._BCP034
#define EIBD34_BCP134 EIBD34_BASE.BIT._BCP134
#define EIBD34_BCP234 EIBD34_BASE.BIT._BCP234
#define EIBD34_CST EIBD34_BASE.BIT._CST
#define EIBD35 EIBD35_BASE.UINT32
#define EIBD35_PEID035 EIBD35_BASE.BIT._PEID035
#define EIBD35_PEID135 EIBD35_BASE.BIT._PEID135
#define EIBD35_PEID235 EIBD35_BASE.BIT._PEID235
#define EIBD35_GPID035 EIBD35_BASE.BIT._GPID035
#define EIBD35_GPID135 EIBD35_BASE.BIT._GPID135
#define EIBD35_GPID235 EIBD35_BASE.BIT._GPID235
#define EIBD35_BCP035 EIBD35_BASE.BIT._BCP035
#define EIBD35_BCP135 EIBD35_BASE.BIT._BCP135
#define EIBD35_BCP235 EIBD35_BASE.BIT._BCP235
#define EIBD35_CST EIBD35_BASE.BIT._CST
#define EIBD36 EIBD36_BASE.UINT32
#define EIBD36_PEID036 EIBD36_BASE.BIT._PEID036
#define EIBD36_PEID136 EIBD36_BASE.BIT._PEID136
#define EIBD36_PEID236 EIBD36_BASE.BIT._PEID236
#define EIBD36_GPID036 EIBD36_BASE.BIT._GPID036
#define EIBD36_GPID136 EIBD36_BASE.BIT._GPID136
#define EIBD36_GPID236 EIBD36_BASE.BIT._GPID236
#define EIBD36_BCP036 EIBD36_BASE.BIT._BCP036
#define EIBD36_BCP136 EIBD36_BASE.BIT._BCP136
#define EIBD36_BCP236 EIBD36_BASE.BIT._BCP236
#define EIBD36_CST EIBD36_BASE.BIT._CST
#define EIBD37 EIBD37_BASE.UINT32
#define EIBD37_PEID037 EIBD37_BASE.BIT._PEID037
#define EIBD37_PEID137 EIBD37_BASE.BIT._PEID137
#define EIBD37_PEID237 EIBD37_BASE.BIT._PEID237
#define EIBD37_GPID037 EIBD37_BASE.BIT._GPID037
#define EIBD37_GPID137 EIBD37_BASE.BIT._GPID137
#define EIBD37_GPID237 EIBD37_BASE.BIT._GPID237
#define EIBD37_BCP037 EIBD37_BASE.BIT._BCP037
#define EIBD37_BCP137 EIBD37_BASE.BIT._BCP137
#define EIBD37_BCP237 EIBD37_BASE.BIT._BCP237
#define EIBD37_CST EIBD37_BASE.BIT._CST
#define EIBD38 EIBD38_BASE.UINT32
#define EIBD38_PEID038 EIBD38_BASE.BIT._PEID038
#define EIBD38_PEID138 EIBD38_BASE.BIT._PEID138
#define EIBD38_PEID238 EIBD38_BASE.BIT._PEID238
#define EIBD38_GPID038 EIBD38_BASE.BIT._GPID038
#define EIBD38_GPID138 EIBD38_BASE.BIT._GPID138
#define EIBD38_GPID238 EIBD38_BASE.BIT._GPID238
#define EIBD38_BCP038 EIBD38_BASE.BIT._BCP038
#define EIBD38_BCP138 EIBD38_BASE.BIT._BCP138
#define EIBD38_BCP238 EIBD38_BASE.BIT._BCP238
#define EIBD38_CST EIBD38_BASE.BIT._CST
#define EIBD39 EIBD39_BASE.UINT32
#define EIBD39_PEID039 EIBD39_BASE.BIT._PEID039
#define EIBD39_PEID139 EIBD39_BASE.BIT._PEID139
#define EIBD39_PEID239 EIBD39_BASE.BIT._PEID239
#define EIBD39_GPID039 EIBD39_BASE.BIT._GPID039
#define EIBD39_GPID139 EIBD39_BASE.BIT._GPID139
#define EIBD39_GPID239 EIBD39_BASE.BIT._GPID239
#define EIBD39_BCP039 EIBD39_BASE.BIT._BCP039
#define EIBD39_BCP139 EIBD39_BASE.BIT._BCP139
#define EIBD39_BCP239 EIBD39_BASE.BIT._BCP239
#define EIBD39_CST EIBD39_BASE.BIT._CST
#define EIBD40 EIBD40_BASE.UINT32
#define EIBD40_PEID040 EIBD40_BASE.BIT._PEID040
#define EIBD40_PEID140 EIBD40_BASE.BIT._PEID140
#define EIBD40_PEID240 EIBD40_BASE.BIT._PEID240
#define EIBD40_GPID040 EIBD40_BASE.BIT._GPID040
#define EIBD40_GPID140 EIBD40_BASE.BIT._GPID140
#define EIBD40_GPID240 EIBD40_BASE.BIT._GPID240
#define EIBD40_BCP040 EIBD40_BASE.BIT._BCP040
#define EIBD40_BCP140 EIBD40_BASE.BIT._BCP140
#define EIBD40_BCP240 EIBD40_BASE.BIT._BCP240
#define EIBD40_CST EIBD40_BASE.BIT._CST
#define EIBD41 EIBD41_BASE.UINT32
#define EIBD41_PEID041 EIBD41_BASE.BIT._PEID041
#define EIBD41_PEID141 EIBD41_BASE.BIT._PEID141
#define EIBD41_PEID241 EIBD41_BASE.BIT._PEID241
#define EIBD41_GPID041 EIBD41_BASE.BIT._GPID041
#define EIBD41_GPID141 EIBD41_BASE.BIT._GPID141
#define EIBD41_GPID241 EIBD41_BASE.BIT._GPID241
#define EIBD41_BCP041 EIBD41_BASE.BIT._BCP041
#define EIBD41_BCP141 EIBD41_BASE.BIT._BCP141
#define EIBD41_BCP241 EIBD41_BASE.BIT._BCP241
#define EIBD41_CST EIBD41_BASE.BIT._CST
#define EIBD42 EIBD42_BASE.UINT32
#define EIBD42_PEID042 EIBD42_BASE.BIT._PEID042
#define EIBD42_PEID142 EIBD42_BASE.BIT._PEID142
#define EIBD42_PEID242 EIBD42_BASE.BIT._PEID242
#define EIBD42_GPID042 EIBD42_BASE.BIT._GPID042
#define EIBD42_GPID142 EIBD42_BASE.BIT._GPID142
#define EIBD42_GPID242 EIBD42_BASE.BIT._GPID242
#define EIBD42_BCP042 EIBD42_BASE.BIT._BCP042
#define EIBD42_BCP142 EIBD42_BASE.BIT._BCP142
#define EIBD42_BCP242 EIBD42_BASE.BIT._BCP242
#define EIBD42_CST EIBD42_BASE.BIT._CST
#define EIBD47 EIBD47_BASE.UINT32
#define EIBD47_PEID047 EIBD47_BASE.BIT._PEID047
#define EIBD47_PEID147 EIBD47_BASE.BIT._PEID147
#define EIBD47_PEID247 EIBD47_BASE.BIT._PEID247
#define EIBD47_GPID047 EIBD47_BASE.BIT._GPID047
#define EIBD47_GPID147 EIBD47_BASE.BIT._GPID147
#define EIBD47_GPID247 EIBD47_BASE.BIT._GPID247
#define EIBD47_BCP047 EIBD47_BASE.BIT._BCP047
#define EIBD47_BCP147 EIBD47_BASE.BIT._BCP147
#define EIBD47_BCP247 EIBD47_BASE.BIT._BCP247
#define EIBD47_CST EIBD47_BASE.BIT._CST
#define EIBD48 EIBD48_BASE.UINT32
#define EIBD48_PEID048 EIBD48_BASE.BIT._PEID048
#define EIBD48_PEID148 EIBD48_BASE.BIT._PEID148
#define EIBD48_PEID248 EIBD48_BASE.BIT._PEID248
#define EIBD48_GPID048 EIBD48_BASE.BIT._GPID048
#define EIBD48_GPID148 EIBD48_BASE.BIT._GPID148
#define EIBD48_GPID248 EIBD48_BASE.BIT._GPID248
#define EIBD48_BCP048 EIBD48_BASE.BIT._BCP048
#define EIBD48_BCP148 EIBD48_BASE.BIT._BCP148
#define EIBD48_BCP248 EIBD48_BASE.BIT._BCP248
#define EIBD48_CST EIBD48_BASE.BIT._CST
#define EIBD49 EIBD49_BASE.UINT32
#define EIBD49_PEID049 EIBD49_BASE.BIT._PEID049
#define EIBD49_PEID149 EIBD49_BASE.BIT._PEID149
#define EIBD49_PEID249 EIBD49_BASE.BIT._PEID249
#define EIBD49_GPID049 EIBD49_BASE.BIT._GPID049
#define EIBD49_GPID149 EIBD49_BASE.BIT._GPID149
#define EIBD49_GPID249 EIBD49_BASE.BIT._GPID249
#define EIBD49_BCP049 EIBD49_BASE.BIT._BCP049
#define EIBD49_BCP149 EIBD49_BASE.BIT._BCP149
#define EIBD49_BCP249 EIBD49_BASE.BIT._BCP249
#define EIBD49_CST EIBD49_BASE.BIT._CST
#define EIBD50 EIBD50_BASE.UINT32
#define EIBD50_PEID050 EIBD50_BASE.BIT._PEID050
#define EIBD50_PEID150 EIBD50_BASE.BIT._PEID150
#define EIBD50_PEID250 EIBD50_BASE.BIT._PEID250
#define EIBD50_GPID050 EIBD50_BASE.BIT._GPID050
#define EIBD50_GPID150 EIBD50_BASE.BIT._GPID150
#define EIBD50_GPID250 EIBD50_BASE.BIT._GPID250
#define EIBD50_BCP050 EIBD50_BASE.BIT._BCP050
#define EIBD50_BCP150 EIBD50_BASE.BIT._BCP150
#define EIBD50_BCP250 EIBD50_BASE.BIT._BCP250
#define EIBD50_CST EIBD50_BASE.BIT._CST
#define EIBD51 EIBD51_BASE.UINT32
#define EIBD51_PEID051 EIBD51_BASE.BIT._PEID051
#define EIBD51_PEID151 EIBD51_BASE.BIT._PEID151
#define EIBD51_PEID251 EIBD51_BASE.BIT._PEID251
#define EIBD51_GPID051 EIBD51_BASE.BIT._GPID051
#define EIBD51_GPID151 EIBD51_BASE.BIT._GPID151
#define EIBD51_GPID251 EIBD51_BASE.BIT._GPID251
#define EIBD51_BCP051 EIBD51_BASE.BIT._BCP051
#define EIBD51_BCP151 EIBD51_BASE.BIT._BCP151
#define EIBD51_BCP251 EIBD51_BASE.BIT._BCP251
#define EIBD51_CST EIBD51_BASE.BIT._CST
#define EIBD52 EIBD52_BASE.UINT32
#define EIBD52_PEID052 EIBD52_BASE.BIT._PEID052
#define EIBD52_PEID152 EIBD52_BASE.BIT._PEID152
#define EIBD52_PEID252 EIBD52_BASE.BIT._PEID252
#define EIBD52_GPID052 EIBD52_BASE.BIT._GPID052
#define EIBD52_GPID152 EIBD52_BASE.BIT._GPID152
#define EIBD52_GPID252 EIBD52_BASE.BIT._GPID252
#define EIBD52_BCP052 EIBD52_BASE.BIT._BCP052
#define EIBD52_BCP152 EIBD52_BASE.BIT._BCP152
#define EIBD52_BCP252 EIBD52_BASE.BIT._BCP252
#define EIBD52_CST EIBD52_BASE.BIT._CST
#define EIBD53 EIBD53_BASE.UINT32
#define EIBD53_PEID053 EIBD53_BASE.BIT._PEID053
#define EIBD53_PEID153 EIBD53_BASE.BIT._PEID153
#define EIBD53_PEID253 EIBD53_BASE.BIT._PEID253
#define EIBD53_GPID053 EIBD53_BASE.BIT._GPID053
#define EIBD53_GPID153 EIBD53_BASE.BIT._GPID153
#define EIBD53_GPID253 EIBD53_BASE.BIT._GPID253
#define EIBD53_BCP053 EIBD53_BASE.BIT._BCP053
#define EIBD53_BCP153 EIBD53_BASE.BIT._BCP153
#define EIBD53_BCP253 EIBD53_BASE.BIT._BCP253
#define EIBD53_CST EIBD53_BASE.BIT._CST
#define EIBD54 EIBD54_BASE.UINT32
#define EIBD54_PEID054 EIBD54_BASE.BIT._PEID054
#define EIBD54_PEID154 EIBD54_BASE.BIT._PEID154
#define EIBD54_PEID254 EIBD54_BASE.BIT._PEID254
#define EIBD54_GPID054 EIBD54_BASE.BIT._GPID054
#define EIBD54_GPID154 EIBD54_BASE.BIT._GPID154
#define EIBD54_GPID254 EIBD54_BASE.BIT._GPID254
#define EIBD54_BCP054 EIBD54_BASE.BIT._BCP054
#define EIBD54_BCP154 EIBD54_BASE.BIT._BCP154
#define EIBD54_BCP254 EIBD54_BASE.BIT._BCP254
#define EIBD54_CST EIBD54_BASE.BIT._CST
#define EIBD55 EIBD55_BASE.UINT32
#define EIBD55_PEID055 EIBD55_BASE.BIT._PEID055
#define EIBD55_PEID155 EIBD55_BASE.BIT._PEID155
#define EIBD55_PEID255 EIBD55_BASE.BIT._PEID255
#define EIBD55_GPID055 EIBD55_BASE.BIT._GPID055
#define EIBD55_GPID155 EIBD55_BASE.BIT._GPID155
#define EIBD55_GPID255 EIBD55_BASE.BIT._GPID255
#define EIBD55_BCP055 EIBD55_BASE.BIT._BCP055
#define EIBD55_BCP155 EIBD55_BASE.BIT._BCP155
#define EIBD55_BCP255 EIBD55_BASE.BIT._BCP255
#define EIBD55_CST EIBD55_BASE.BIT._CST
#define EIBD56 EIBD56_BASE.UINT32
#define EIBD56_PEID056 EIBD56_BASE.BIT._PEID056
#define EIBD56_PEID156 EIBD56_BASE.BIT._PEID156
#define EIBD56_PEID256 EIBD56_BASE.BIT._PEID256
#define EIBD56_GPID056 EIBD56_BASE.BIT._GPID056
#define EIBD56_GPID156 EIBD56_BASE.BIT._GPID156
#define EIBD56_GPID256 EIBD56_BASE.BIT._GPID256
#define EIBD56_BCP056 EIBD56_BASE.BIT._BCP056
#define EIBD56_BCP156 EIBD56_BASE.BIT._BCP156
#define EIBD56_BCP256 EIBD56_BASE.BIT._BCP256
#define EIBD56_CST EIBD56_BASE.BIT._CST
#define EIBD57 EIBD57_BASE.UINT32
#define EIBD57_PEID057 EIBD57_BASE.BIT._PEID057
#define EIBD57_PEID157 EIBD57_BASE.BIT._PEID157
#define EIBD57_PEID257 EIBD57_BASE.BIT._PEID257
#define EIBD57_GPID057 EIBD57_BASE.BIT._GPID057
#define EIBD57_GPID157 EIBD57_BASE.BIT._GPID157
#define EIBD57_GPID257 EIBD57_BASE.BIT._GPID257
#define EIBD57_BCP057 EIBD57_BASE.BIT._BCP057
#define EIBD57_BCP157 EIBD57_BASE.BIT._BCP157
#define EIBD57_BCP257 EIBD57_BASE.BIT._BCP257
#define EIBD57_CST EIBD57_BASE.BIT._CST
#define EIBD58 EIBD58_BASE.UINT32
#define EIBD58_PEID058 EIBD58_BASE.BIT._PEID058
#define EIBD58_PEID158 EIBD58_BASE.BIT._PEID158
#define EIBD58_PEID258 EIBD58_BASE.BIT._PEID258
#define EIBD58_GPID058 EIBD58_BASE.BIT._GPID058
#define EIBD58_GPID158 EIBD58_BASE.BIT._GPID158
#define EIBD58_GPID258 EIBD58_BASE.BIT._GPID258
#define EIBD58_BCP058 EIBD58_BASE.BIT._BCP058
#define EIBD58_BCP158 EIBD58_BASE.BIT._BCP158
#define EIBD58_BCP258 EIBD58_BASE.BIT._BCP258
#define EIBD58_CST EIBD58_BASE.BIT._CST
#define EIBD59 EIBD59_BASE.UINT32
#define EIBD59_PEID059 EIBD59_BASE.BIT._PEID059
#define EIBD59_PEID159 EIBD59_BASE.BIT._PEID159
#define EIBD59_PEID259 EIBD59_BASE.BIT._PEID259
#define EIBD59_GPID059 EIBD59_BASE.BIT._GPID059
#define EIBD59_GPID159 EIBD59_BASE.BIT._GPID159
#define EIBD59_GPID259 EIBD59_BASE.BIT._GPID259
#define EIBD59_BCP059 EIBD59_BASE.BIT._BCP059
#define EIBD59_BCP159 EIBD59_BASE.BIT._BCP159
#define EIBD59_BCP259 EIBD59_BASE.BIT._BCP259
#define EIBD59_CST EIBD59_BASE.BIT._CST
#define EIBD60 EIBD60_BASE.UINT32
#define EIBD60_PEID060 EIBD60_BASE.BIT._PEID060
#define EIBD60_PEID160 EIBD60_BASE.BIT._PEID160
#define EIBD60_PEID260 EIBD60_BASE.BIT._PEID260
#define EIBD60_GPID060 EIBD60_BASE.BIT._GPID060
#define EIBD60_GPID160 EIBD60_BASE.BIT._GPID160
#define EIBD60_GPID260 EIBD60_BASE.BIT._GPID260
#define EIBD60_BCP060 EIBD60_BASE.BIT._BCP060
#define EIBD60_BCP160 EIBD60_BASE.BIT._BCP160
#define EIBD60_BCP260 EIBD60_BASE.BIT._BCP260
#define EIBD60_CST EIBD60_BASE.BIT._CST
#define EIBD61 EIBD61_BASE.UINT32
#define EIBD61_PEID061 EIBD61_BASE.BIT._PEID061
#define EIBD61_PEID161 EIBD61_BASE.BIT._PEID161
#define EIBD61_PEID261 EIBD61_BASE.BIT._PEID261
#define EIBD61_GPID061 EIBD61_BASE.BIT._GPID061
#define EIBD61_GPID161 EIBD61_BASE.BIT._GPID161
#define EIBD61_GPID261 EIBD61_BASE.BIT._GPID261
#define EIBD61_BCP061 EIBD61_BASE.BIT._BCP061
#define EIBD61_BCP161 EIBD61_BASE.BIT._BCP161
#define EIBD61_BCP261 EIBD61_BASE.BIT._BCP261
#define EIBD61_CST EIBD61_BASE.BIT._CST
#define EIBD62 EIBD62_BASE.UINT32
#define EIBD62_PEID062 EIBD62_BASE.BIT._PEID062
#define EIBD62_PEID162 EIBD62_BASE.BIT._PEID162
#define EIBD62_PEID262 EIBD62_BASE.BIT._PEID262
#define EIBD62_GPID062 EIBD62_BASE.BIT._GPID062
#define EIBD62_GPID162 EIBD62_BASE.BIT._GPID162
#define EIBD62_GPID262 EIBD62_BASE.BIT._GPID262
#define EIBD62_BCP062 EIBD62_BASE.BIT._BCP062
#define EIBD62_BCP162 EIBD62_BASE.BIT._BCP162
#define EIBD62_BCP262 EIBD62_BASE.BIT._BCP262
#define EIBD62_CST EIBD62_BASE.BIT._CST
#define EIBD63 EIBD63_BASE.UINT32
#define EIBD63_PEID063 EIBD63_BASE.BIT._PEID063
#define EIBD63_PEID163 EIBD63_BASE.BIT._PEID163
#define EIBD63_PEID263 EIBD63_BASE.BIT._PEID263
#define EIBD63_GPID063 EIBD63_BASE.BIT._GPID063
#define EIBD63_GPID163 EIBD63_BASE.BIT._GPID163
#define EIBD63_GPID263 EIBD63_BASE.BIT._GPID263
#define EIBD63_BCP063 EIBD63_BASE.BIT._BCP063
#define EIBD63_BCP163 EIBD63_BASE.BIT._BCP163
#define EIBD63_BCP263 EIBD63_BASE.BIT._BCP263
#define EIBD63_CST EIBD63_BASE.BIT._CST
#define EIBD64 EIBD64_BASE.UINT32
#define EIBD64_PEID064 EIBD64_BASE.BIT._PEID064
#define EIBD64_PEID164 EIBD64_BASE.BIT._PEID164
#define EIBD64_PEID264 EIBD64_BASE.BIT._PEID264
#define EIBD64_GPID064 EIBD64_BASE.BIT._GPID064
#define EIBD64_GPID164 EIBD64_BASE.BIT._GPID164
#define EIBD64_GPID264 EIBD64_BASE.BIT._GPID264
#define EIBD64_BCP064 EIBD64_BASE.BIT._BCP064
#define EIBD64_BCP164 EIBD64_BASE.BIT._BCP164
#define EIBD64_BCP264 EIBD64_BASE.BIT._BCP264
#define EIBD64_CST EIBD64_BASE.BIT._CST
#define EIBD65 EIBD65_BASE.UINT32
#define EIBD65_PEID065 EIBD65_BASE.BIT._PEID065
#define EIBD65_PEID165 EIBD65_BASE.BIT._PEID165
#define EIBD65_PEID265 EIBD65_BASE.BIT._PEID265
#define EIBD65_GPID065 EIBD65_BASE.BIT._GPID065
#define EIBD65_GPID165 EIBD65_BASE.BIT._GPID165
#define EIBD65_GPID265 EIBD65_BASE.BIT._GPID265
#define EIBD65_BCP065 EIBD65_BASE.BIT._BCP065
#define EIBD65_BCP165 EIBD65_BASE.BIT._BCP165
#define EIBD65_BCP265 EIBD65_BASE.BIT._BCP265
#define EIBD65_CST EIBD65_BASE.BIT._CST
#define EIBD69 EIBD69_BASE.UINT32
#define EIBD69_PEID069 EIBD69_BASE.BIT._PEID069
#define EIBD69_PEID169 EIBD69_BASE.BIT._PEID169
#define EIBD69_PEID269 EIBD69_BASE.BIT._PEID269
#define EIBD69_GPID069 EIBD69_BASE.BIT._GPID069
#define EIBD69_GPID169 EIBD69_BASE.BIT._GPID169
#define EIBD69_GPID269 EIBD69_BASE.BIT._GPID269
#define EIBD69_BCP069 EIBD69_BASE.BIT._BCP069
#define EIBD69_BCP169 EIBD69_BASE.BIT._BCP169
#define EIBD69_BCP269 EIBD69_BASE.BIT._BCP269
#define EIBD69_CST EIBD69_BASE.BIT._CST
#define EIBD70 EIBD70_BASE.UINT32
#define EIBD70_PEID070 EIBD70_BASE.BIT._PEID070
#define EIBD70_PEID170 EIBD70_BASE.BIT._PEID170
#define EIBD70_PEID270 EIBD70_BASE.BIT._PEID270
#define EIBD70_GPID070 EIBD70_BASE.BIT._GPID070
#define EIBD70_GPID170 EIBD70_BASE.BIT._GPID170
#define EIBD70_GPID270 EIBD70_BASE.BIT._GPID270
#define EIBD70_BCP070 EIBD70_BASE.BIT._BCP070
#define EIBD70_BCP170 EIBD70_BASE.BIT._BCP170
#define EIBD70_BCP270 EIBD70_BASE.BIT._BCP270
#define EIBD70_CST EIBD70_BASE.BIT._CST
#define EIBD71 EIBD71_BASE.UINT32
#define EIBD71_PEID071 EIBD71_BASE.BIT._PEID071
#define EIBD71_PEID171 EIBD71_BASE.BIT._PEID171
#define EIBD71_PEID271 EIBD71_BASE.BIT._PEID271
#define EIBD71_GPID071 EIBD71_BASE.BIT._GPID071
#define EIBD71_GPID171 EIBD71_BASE.BIT._GPID171
#define EIBD71_GPID271 EIBD71_BASE.BIT._GPID271
#define EIBD71_BCP071 EIBD71_BASE.BIT._BCP071
#define EIBD71_BCP171 EIBD71_BASE.BIT._BCP171
#define EIBD71_BCP271 EIBD71_BASE.BIT._BCP271
#define EIBD71_CST EIBD71_BASE.BIT._CST
#define EIBD72 EIBD72_BASE.UINT32
#define EIBD72_PEID072 EIBD72_BASE.BIT._PEID072
#define EIBD72_PEID172 EIBD72_BASE.BIT._PEID172
#define EIBD72_PEID272 EIBD72_BASE.BIT._PEID272
#define EIBD72_GPID072 EIBD72_BASE.BIT._GPID072
#define EIBD72_GPID172 EIBD72_BASE.BIT._GPID172
#define EIBD72_GPID272 EIBD72_BASE.BIT._GPID272
#define EIBD72_BCP072 EIBD72_BASE.BIT._BCP072
#define EIBD72_BCP172 EIBD72_BASE.BIT._BCP172
#define EIBD72_BCP272 EIBD72_BASE.BIT._BCP272
#define EIBD72_CST EIBD72_BASE.BIT._CST
#define EIBD73 EIBD73_BASE.UINT32
#define EIBD73_PEID073 EIBD73_BASE.BIT._PEID073
#define EIBD73_PEID173 EIBD73_BASE.BIT._PEID173
#define EIBD73_PEID273 EIBD73_BASE.BIT._PEID273
#define EIBD73_GPID073 EIBD73_BASE.BIT._GPID073
#define EIBD73_GPID173 EIBD73_BASE.BIT._GPID173
#define EIBD73_GPID273 EIBD73_BASE.BIT._GPID273
#define EIBD73_BCP073 EIBD73_BASE.BIT._BCP073
#define EIBD73_BCP173 EIBD73_BASE.BIT._BCP173
#define EIBD73_BCP273 EIBD73_BASE.BIT._BCP273
#define EIBD73_CST EIBD73_BASE.BIT._CST
#define EIBD74 EIBD74_BASE.UINT32
#define EIBD74_PEID074 EIBD74_BASE.BIT._PEID074
#define EIBD74_PEID174 EIBD74_BASE.BIT._PEID174
#define EIBD74_PEID274 EIBD74_BASE.BIT._PEID274
#define EIBD74_GPID074 EIBD74_BASE.BIT._GPID074
#define EIBD74_GPID174 EIBD74_BASE.BIT._GPID174
#define EIBD74_GPID274 EIBD74_BASE.BIT._GPID274
#define EIBD74_BCP074 EIBD74_BASE.BIT._BCP074
#define EIBD74_BCP174 EIBD74_BASE.BIT._BCP174
#define EIBD74_BCP274 EIBD74_BASE.BIT._BCP274
#define EIBD74_CST EIBD74_BASE.BIT._CST
#define EIBD80 EIBD80_BASE.UINT32
#define EIBD80_PEID080 EIBD80_BASE.BIT._PEID080
#define EIBD80_PEID180 EIBD80_BASE.BIT._PEID180
#define EIBD80_PEID280 EIBD80_BASE.BIT._PEID280
#define EIBD80_GPID080 EIBD80_BASE.BIT._GPID080
#define EIBD80_GPID180 EIBD80_BASE.BIT._GPID180
#define EIBD80_GPID280 EIBD80_BASE.BIT._GPID280
#define EIBD80_BCP080 EIBD80_BASE.BIT._BCP080
#define EIBD80_BCP180 EIBD80_BASE.BIT._BCP180
#define EIBD80_BCP280 EIBD80_BASE.BIT._BCP280
#define EIBD80_CST EIBD80_BASE.BIT._CST
#define EIBD81 EIBD81_BASE.UINT32
#define EIBD81_PEID081 EIBD81_BASE.BIT._PEID081
#define EIBD81_PEID181 EIBD81_BASE.BIT._PEID181
#define EIBD81_PEID281 EIBD81_BASE.BIT._PEID281
#define EIBD81_GPID081 EIBD81_BASE.BIT._GPID081
#define EIBD81_GPID181 EIBD81_BASE.BIT._GPID181
#define EIBD81_GPID281 EIBD81_BASE.BIT._GPID281
#define EIBD81_BCP081 EIBD81_BASE.BIT._BCP081
#define EIBD81_BCP181 EIBD81_BASE.BIT._BCP181
#define EIBD81_BCP281 EIBD81_BASE.BIT._BCP281
#define EIBD81_CST EIBD81_BASE.BIT._CST
#define EIBD82 EIBD82_BASE.UINT32
#define EIBD82_PEID082 EIBD82_BASE.BIT._PEID082
#define EIBD82_PEID182 EIBD82_BASE.BIT._PEID182
#define EIBD82_PEID282 EIBD82_BASE.BIT._PEID282
#define EIBD82_GPID082 EIBD82_BASE.BIT._GPID082
#define EIBD82_GPID182 EIBD82_BASE.BIT._GPID182
#define EIBD82_GPID282 EIBD82_BASE.BIT._GPID282
#define EIBD82_BCP082 EIBD82_BASE.BIT._BCP082
#define EIBD82_BCP182 EIBD82_BASE.BIT._BCP182
#define EIBD82_BCP282 EIBD82_BASE.BIT._BCP282
#define EIBD82_CST EIBD82_BASE.BIT._CST
#define EIBD83 EIBD83_BASE.UINT32
#define EIBD83_PEID083 EIBD83_BASE.BIT._PEID083
#define EIBD83_PEID183 EIBD83_BASE.BIT._PEID183
#define EIBD83_PEID283 EIBD83_BASE.BIT._PEID283
#define EIBD83_GPID083 EIBD83_BASE.BIT._GPID083
#define EIBD83_GPID183 EIBD83_BASE.BIT._GPID183
#define EIBD83_GPID283 EIBD83_BASE.BIT._GPID283
#define EIBD83_BCP083 EIBD83_BASE.BIT._BCP083
#define EIBD83_BCP183 EIBD83_BASE.BIT._BCP183
#define EIBD83_BCP283 EIBD83_BASE.BIT._BCP283
#define EIBD83_CST EIBD83_BASE.BIT._CST
#define EIBD84 EIBD84_BASE.UINT32
#define EIBD84_PEID084 EIBD84_BASE.BIT._PEID084
#define EIBD84_PEID184 EIBD84_BASE.BIT._PEID184
#define EIBD84_PEID284 EIBD84_BASE.BIT._PEID284
#define EIBD84_GPID084 EIBD84_BASE.BIT._GPID084
#define EIBD84_GPID184 EIBD84_BASE.BIT._GPID184
#define EIBD84_GPID284 EIBD84_BASE.BIT._GPID284
#define EIBD84_BCP084 EIBD84_BASE.BIT._BCP084
#define EIBD84_BCP184 EIBD84_BASE.BIT._BCP184
#define EIBD84_BCP284 EIBD84_BASE.BIT._BCP284
#define EIBD84_CST EIBD84_BASE.BIT._CST
#define EIBD85 EIBD85_BASE.UINT32
#define EIBD85_PEID085 EIBD85_BASE.BIT._PEID085
#define EIBD85_PEID185 EIBD85_BASE.BIT._PEID185
#define EIBD85_PEID285 EIBD85_BASE.BIT._PEID285
#define EIBD85_GPID085 EIBD85_BASE.BIT._GPID085
#define EIBD85_GPID185 EIBD85_BASE.BIT._GPID185
#define EIBD85_GPID285 EIBD85_BASE.BIT._GPID285
#define EIBD85_BCP085 EIBD85_BASE.BIT._BCP085
#define EIBD85_BCP185 EIBD85_BASE.BIT._BCP185
#define EIBD85_BCP285 EIBD85_BASE.BIT._BCP285
#define EIBD85_CST EIBD85_BASE.BIT._CST
#define EIBD86 EIBD86_BASE.UINT32
#define EIBD86_PEID086 EIBD86_BASE.BIT._PEID086
#define EIBD86_PEID186 EIBD86_BASE.BIT._PEID186
#define EIBD86_PEID286 EIBD86_BASE.BIT._PEID286
#define EIBD86_GPID086 EIBD86_BASE.BIT._GPID086
#define EIBD86_GPID186 EIBD86_BASE.BIT._GPID186
#define EIBD86_GPID286 EIBD86_BASE.BIT._GPID286
#define EIBD86_BCP086 EIBD86_BASE.BIT._BCP086
#define EIBD86_BCP186 EIBD86_BASE.BIT._BCP186
#define EIBD86_BCP286 EIBD86_BASE.BIT._BCP286
#define EIBD86_CST EIBD86_BASE.BIT._CST
#define EIBD87 EIBD87_BASE.UINT32
#define EIBD87_PEID087 EIBD87_BASE.BIT._PEID087
#define EIBD87_PEID187 EIBD87_BASE.BIT._PEID187
#define EIBD87_PEID287 EIBD87_BASE.BIT._PEID287
#define EIBD87_GPID087 EIBD87_BASE.BIT._GPID087
#define EIBD87_GPID187 EIBD87_BASE.BIT._GPID187
#define EIBD87_GPID287 EIBD87_BASE.BIT._GPID287
#define EIBD87_BCP087 EIBD87_BASE.BIT._BCP087
#define EIBD87_BCP187 EIBD87_BASE.BIT._BCP187
#define EIBD87_BCP287 EIBD87_BASE.BIT._BCP287
#define EIBD87_CST EIBD87_BASE.BIT._CST
#define EIBD88 EIBD88_BASE.UINT32
#define EIBD88_PEID088 EIBD88_BASE.BIT._PEID088
#define EIBD88_PEID188 EIBD88_BASE.BIT._PEID188
#define EIBD88_PEID288 EIBD88_BASE.BIT._PEID288
#define EIBD88_GPID088 EIBD88_BASE.BIT._GPID088
#define EIBD88_GPID188 EIBD88_BASE.BIT._GPID188
#define EIBD88_GPID288 EIBD88_BASE.BIT._GPID288
#define EIBD88_BCP088 EIBD88_BASE.BIT._BCP088
#define EIBD88_BCP188 EIBD88_BASE.BIT._BCP188
#define EIBD88_BCP288 EIBD88_BASE.BIT._BCP288
#define EIBD88_CST EIBD88_BASE.BIT._CST
#define EIBD89 EIBD89_BASE.UINT32
#define EIBD89_PEID089 EIBD89_BASE.BIT._PEID089
#define EIBD89_PEID189 EIBD89_BASE.BIT._PEID189
#define EIBD89_PEID289 EIBD89_BASE.BIT._PEID289
#define EIBD89_GPID089 EIBD89_BASE.BIT._GPID089
#define EIBD89_GPID189 EIBD89_BASE.BIT._GPID189
#define EIBD89_GPID289 EIBD89_BASE.BIT._GPID289
#define EIBD89_BCP089 EIBD89_BASE.BIT._BCP089
#define EIBD89_BCP189 EIBD89_BASE.BIT._BCP189
#define EIBD89_BCP289 EIBD89_BASE.BIT._BCP289
#define EIBD89_CST EIBD89_BASE.BIT._CST
#define EIBD90 EIBD90_BASE.UINT32
#define EIBD90_PEID090 EIBD90_BASE.BIT._PEID090
#define EIBD90_PEID190 EIBD90_BASE.BIT._PEID190
#define EIBD90_PEID290 EIBD90_BASE.BIT._PEID290
#define EIBD90_GPID090 EIBD90_BASE.BIT._GPID090
#define EIBD90_GPID190 EIBD90_BASE.BIT._GPID190
#define EIBD90_GPID290 EIBD90_BASE.BIT._GPID290
#define EIBD90_BCP090 EIBD90_BASE.BIT._BCP090
#define EIBD90_BCP190 EIBD90_BASE.BIT._BCP190
#define EIBD90_BCP290 EIBD90_BASE.BIT._BCP290
#define EIBD90_CST EIBD90_BASE.BIT._CST
#define EIBD91 EIBD91_BASE.UINT32
#define EIBD91_PEID091 EIBD91_BASE.BIT._PEID091
#define EIBD91_PEID191 EIBD91_BASE.BIT._PEID191
#define EIBD91_PEID291 EIBD91_BASE.BIT._PEID291
#define EIBD91_GPID091 EIBD91_BASE.BIT._GPID091
#define EIBD91_GPID191 EIBD91_BASE.BIT._GPID191
#define EIBD91_GPID291 EIBD91_BASE.BIT._GPID291
#define EIBD91_BCP091 EIBD91_BASE.BIT._BCP091
#define EIBD91_BCP191 EIBD91_BASE.BIT._BCP191
#define EIBD91_BCP291 EIBD91_BASE.BIT._BCP291
#define EIBD91_CST EIBD91_BASE.BIT._CST
#define EIBD92 EIBD92_BASE.UINT32
#define EIBD92_PEID092 EIBD92_BASE.BIT._PEID092
#define EIBD92_PEID192 EIBD92_BASE.BIT._PEID192
#define EIBD92_PEID292 EIBD92_BASE.BIT._PEID292
#define EIBD92_GPID092 EIBD92_BASE.BIT._GPID092
#define EIBD92_GPID192 EIBD92_BASE.BIT._GPID192
#define EIBD92_GPID292 EIBD92_BASE.BIT._GPID292
#define EIBD92_BCP092 EIBD92_BASE.BIT._BCP092
#define EIBD92_BCP192 EIBD92_BASE.BIT._BCP192
#define EIBD92_BCP292 EIBD92_BASE.BIT._BCP292
#define EIBD92_CST EIBD92_BASE.BIT._CST
#define EIBD93 EIBD93_BASE.UINT32
#define EIBD93_PEID093 EIBD93_BASE.BIT._PEID093
#define EIBD93_PEID193 EIBD93_BASE.BIT._PEID193
#define EIBD93_PEID293 EIBD93_BASE.BIT._PEID293
#define EIBD93_GPID093 EIBD93_BASE.BIT._GPID093
#define EIBD93_GPID193 EIBD93_BASE.BIT._GPID193
#define EIBD93_GPID293 EIBD93_BASE.BIT._GPID293
#define EIBD93_BCP093 EIBD93_BASE.BIT._BCP093
#define EIBD93_BCP193 EIBD93_BASE.BIT._BCP193
#define EIBD93_BCP293 EIBD93_BASE.BIT._BCP293
#define EIBD93_CST EIBD93_BASE.BIT._CST
#define EIBD94 EIBD94_BASE.UINT32
#define EIBD94_PEID094 EIBD94_BASE.BIT._PEID094
#define EIBD94_PEID194 EIBD94_BASE.BIT._PEID194
#define EIBD94_PEID294 EIBD94_BASE.BIT._PEID294
#define EIBD94_GPID094 EIBD94_BASE.BIT._GPID094
#define EIBD94_GPID194 EIBD94_BASE.BIT._GPID194
#define EIBD94_GPID294 EIBD94_BASE.BIT._GPID294
#define EIBD94_BCP094 EIBD94_BASE.BIT._BCP094
#define EIBD94_BCP194 EIBD94_BASE.BIT._BCP194
#define EIBD94_BCP294 EIBD94_BASE.BIT._BCP294
#define EIBD94_CST EIBD94_BASE.BIT._CST
#define EIBD95 EIBD95_BASE.UINT32
#define EIBD95_PEID095 EIBD95_BASE.BIT._PEID095
#define EIBD95_PEID195 EIBD95_BASE.BIT._PEID195
#define EIBD95_PEID295 EIBD95_BASE.BIT._PEID295
#define EIBD95_GPID095 EIBD95_BASE.BIT._GPID095
#define EIBD95_GPID195 EIBD95_BASE.BIT._GPID195
#define EIBD95_GPID295 EIBD95_BASE.BIT._GPID295
#define EIBD95_BCP095 EIBD95_BASE.BIT._BCP095
#define EIBD95_BCP195 EIBD95_BASE.BIT._BCP195
#define EIBD95_BCP295 EIBD95_BASE.BIT._BCP295
#define EIBD95_CST EIBD95_BASE.BIT._CST
#define EIBD96 EIBD96_BASE.UINT32
#define EIBD96_PEID096 EIBD96_BASE.BIT._PEID096
#define EIBD96_PEID196 EIBD96_BASE.BIT._PEID196
#define EIBD96_PEID296 EIBD96_BASE.BIT._PEID296
#define EIBD96_GPID096 EIBD96_BASE.BIT._GPID096
#define EIBD96_GPID196 EIBD96_BASE.BIT._GPID196
#define EIBD96_GPID296 EIBD96_BASE.BIT._GPID296
#define EIBD96_BCP096 EIBD96_BASE.BIT._BCP096
#define EIBD96_BCP196 EIBD96_BASE.BIT._BCP196
#define EIBD96_BCP296 EIBD96_BASE.BIT._BCP296
#define EIBD96_CST EIBD96_BASE.BIT._CST
#define EIBD97 EIBD97_BASE.UINT32
#define EIBD97_EIBD97 EIBD97_BASE.BIT._EIBD97
#define EIBD97_PEID197 EIBD97_BASE.BIT._PEID197
#define EIBD97_PEID297 EIBD97_BASE.BIT._PEID297
#define EIBD97_GPID097 EIBD97_BASE.BIT._GPID097
#define EIBD97_GPID197 EIBD97_BASE.BIT._GPID197
#define EIBD97_GPID297 EIBD97_BASE.BIT._GPID297
#define EIBD97_BCP097 EIBD97_BASE.BIT._BCP097
#define EIBD97_BCP197 EIBD97_BASE.BIT._BCP197
#define EIBD97_BCP297 EIBD97_BASE.BIT._BCP297
#define EIBD97_CST EIBD97_BASE.BIT._CST
#define EIBD98 EIBD98_BASE.UINT32
#define EIBD98_PEID098 EIBD98_BASE.BIT._PEID098
#define EIBD98_PEID198 EIBD98_BASE.BIT._PEID198
#define EIBD98_PEID298 EIBD98_BASE.BIT._PEID298
#define EIBD98_GPID098 EIBD98_BASE.BIT._GPID098
#define EIBD98_GPID198 EIBD98_BASE.BIT._GPID198
#define EIBD98_GPID298 EIBD98_BASE.BIT._GPID298
#define EIBD98_BCP098 EIBD98_BASE.BIT._BCP098
#define EIBD98_BCP198 EIBD98_BASE.BIT._BCP198
#define EIBD98_BCP298 EIBD98_BASE.BIT._BCP298
#define EIBD98_CST EIBD98_BASE.BIT._CST
#define EIBD99 EIBD99_BASE.UINT32
#define EIBD99_PEID099 EIBD99_BASE.BIT._PEID099
#define EIBD99_PEID199 EIBD99_BASE.BIT._PEID199
#define EIBD99_PEID299 EIBD99_BASE.BIT._PEID299
#define EIBD99_GPID099 EIBD99_BASE.BIT._GPID099
#define EIBD99_GPID199 EIBD99_BASE.BIT._GPID199
#define EIBD99_GPID299 EIBD99_BASE.BIT._GPID299
#define EIBD99_BCP099 EIBD99_BASE.BIT._BCP099
#define EIBD99_BCP199 EIBD99_BASE.BIT._BCP199
#define EIBD99_BCP299 EIBD99_BASE.BIT._BCP299
#define EIBD99_CST EIBD99_BASE.BIT._CST
#define EIBD100 EIBD100_BASE.UINT32
#define EIBD100_PEID0100 EIBD100_BASE.BIT._PEID0100
#define EIBD100_PEID1100 EIBD100_BASE.BIT._PEID1100
#define EIBD100_PEID2100 EIBD100_BASE.BIT._PEID2100
#define EIBD100_GPID0100 EIBD100_BASE.BIT._GPID0100
#define EIBD100_GPID1100 EIBD100_BASE.BIT._GPID1100
#define EIBD100_GPID2100 EIBD100_BASE.BIT._GPID2100
#define EIBD100_BCP0100 EIBD100_BASE.BIT._BCP0100
#define EIBD100_BCP1100 EIBD100_BASE.BIT._BCP1100
#define EIBD100_BCP2100 EIBD100_BASE.BIT._BCP2100
#define EIBD100_CST EIBD100_BASE.BIT._CST
#define EIBD101 EIBD101_BASE.UINT32
#define EIBD101_PEID0101 EIBD101_BASE.BIT._PEID0101
#define EIBD101_PEID1101 EIBD101_BASE.BIT._PEID1101
#define EIBD101_PEID2101 EIBD101_BASE.BIT._PEID2101
#define EIBD101_GPID0101 EIBD101_BASE.BIT._GPID0101
#define EIBD101_GPID1101 EIBD101_BASE.BIT._GPID1101
#define EIBD101_GPID2101 EIBD101_BASE.BIT._GPID2101
#define EIBD101_BCP0101 EIBD101_BASE.BIT._BCP0101
#define EIBD101_BCP1101 EIBD101_BASE.BIT._BCP1101
#define EIBD101_BCP2101 EIBD101_BASE.BIT._BCP2101
#define EIBD101_CST EIBD101_BASE.BIT._CST
#define EIBD102 EIBD102_BASE.UINT32
#define EIBD102_PEID0102 EIBD102_BASE.BIT._PEID0102
#define EIBD102_PEID1102 EIBD102_BASE.BIT._PEID1102
#define EIBD102_PEID2102 EIBD102_BASE.BIT._PEID2102
#define EIBD102_GPID0102 EIBD102_BASE.BIT._GPID0102
#define EIBD102_GPID1102 EIBD102_BASE.BIT._GPID1102
#define EIBD102_GPID2102 EIBD102_BASE.BIT._GPID2102
#define EIBD102_BCP0102 EIBD102_BASE.BIT._BCP0102
#define EIBD102_BCP1102 EIBD102_BASE.BIT._BCP1102
#define EIBD102_BCP2102 EIBD102_BASE.BIT._BCP2102
#define EIBD102_CST EIBD102_BASE.BIT._CST
#define EIBD103 EIBD103_BASE.UINT32
#define EIBD103_PEID0103 EIBD103_BASE.BIT._PEID0103
#define EIBD103_PEID1103 EIBD103_BASE.BIT._PEID1103
#define EIBD103_PEID2103 EIBD103_BASE.BIT._PEID2103
#define EIBD103_GPID0103 EIBD103_BASE.BIT._GPID0103
#define EIBD103_GPID1103 EIBD103_BASE.BIT._GPID1103
#define EIBD103_GPID2103 EIBD103_BASE.BIT._GPID2103
#define EIBD103_BCP0103 EIBD103_BASE.BIT._BCP0103
#define EIBD103_BCP1103 EIBD103_BASE.BIT._BCP1103
#define EIBD103_BCP2103 EIBD103_BASE.BIT._BCP2103
#define EIBD103_CST EIBD103_BASE.BIT._CST
#define EIBD104 EIBD104_BASE.UINT32
#define EIBD104_PEID0104 EIBD104_BASE.BIT._PEID0104
#define EIBD104_PEID1104 EIBD104_BASE.BIT._PEID1104
#define EIBD104_PEID2104 EIBD104_BASE.BIT._PEID2104
#define EIBD104_GPID0104 EIBD104_BASE.BIT._GPID0104
#define EIBD104_GPID1104 EIBD104_BASE.BIT._GPID1104
#define EIBD104_GPID2104 EIBD104_BASE.BIT._GPID2104
#define EIBD104_BCP0104 EIBD104_BASE.BIT._BCP0104
#define EIBD104_BCP1104 EIBD104_BASE.BIT._BCP1104
#define EIBD104_BCP2104 EIBD104_BASE.BIT._BCP2104
#define EIBD104_CST EIBD104_BASE.BIT._CST
#define EIBD105 EIBD105_BASE.UINT32
#define EIBD105_PEID0105 EIBD105_BASE.BIT._PEID0105
#define EIBD105_PEID1105 EIBD105_BASE.BIT._PEID1105
#define EIBD105_PEID2105 EIBD105_BASE.BIT._PEID2105
#define EIBD105_GPID0105 EIBD105_BASE.BIT._GPID0105
#define EIBD105_GPID1105 EIBD105_BASE.BIT._GPID1105
#define EIBD105_GPID2105 EIBD105_BASE.BIT._GPID2105
#define EIBD105_BCP0105 EIBD105_BASE.BIT._BCP0105
#define EIBD105_BCP1105 EIBD105_BASE.BIT._BCP1105
#define EIBD105_BCP2105 EIBD105_BASE.BIT._BCP2105
#define EIBD105_CST EIBD105_BASE.BIT._CST
#define EIBD106 EIBD106_BASE.UINT32
#define EIBD106_PEID0106 EIBD106_BASE.BIT._PEID0106
#define EIBD106_PEID1106 EIBD106_BASE.BIT._PEID1106
#define EIBD106_PEID2106 EIBD106_BASE.BIT._PEID2106
#define EIBD106_GPID0106 EIBD106_BASE.BIT._GPID0106
#define EIBD106_GPID1106 EIBD106_BASE.BIT._GPID1106
#define EIBD106_GPID2106 EIBD106_BASE.BIT._GPID2106
#define EIBD106_BCP0106 EIBD106_BASE.BIT._BCP0106
#define EIBD106_BCP1106 EIBD106_BASE.BIT._BCP1106
#define EIBD106_BCP2106 EIBD106_BASE.BIT._BCP2106
#define EIBD106_CST EIBD106_BASE.BIT._CST
#define EIBD107 EIBD107_BASE.UINT32
#define EIBD107_PEID0107 EIBD107_BASE.BIT._PEID0107
#define EIBD107_PEID1107 EIBD107_BASE.BIT._PEID1107
#define EIBD107_PEID2107 EIBD107_BASE.BIT._PEID2107
#define EIBD107_GPID0107 EIBD107_BASE.BIT._GPID0107
#define EIBD107_GPID1107 EIBD107_BASE.BIT._GPID1107
#define EIBD107_GPID2107 EIBD107_BASE.BIT._GPID2107
#define EIBD107_BCP0107 EIBD107_BASE.BIT._BCP0107
#define EIBD107_BCP1107 EIBD107_BASE.BIT._BCP1107
#define EIBD107_BCP2107 EIBD107_BASE.BIT._BCP2107
#define EIBD107_CST EIBD107_BASE.BIT._CST
#define EIBD114 EIBD114_BASE.UINT32
#define EIBD114_PEID0114 EIBD114_BASE.BIT._PEID0114
#define EIBD114_PEID1114 EIBD114_BASE.BIT._PEID1114
#define EIBD114_PEID2114 EIBD114_BASE.BIT._PEID2114
#define EIBD114_GPID0114 EIBD114_BASE.BIT._GPID0114
#define EIBD114_GPID1114 EIBD114_BASE.BIT._GPID1114
#define EIBD114_GPID2114 EIBD114_BASE.BIT._GPID2114
#define EIBD114_BCP0114 EIBD114_BASE.BIT._BCP0114
#define EIBD114_BCP1114 EIBD114_BASE.BIT._BCP1114
#define EIBD114_BCP2114 EIBD114_BASE.BIT._BCP2114
#define EIBD114_CST EIBD114_BASE.BIT._CST
#define EIBD115 EIBD115_BASE.UINT32
#define EIBD115_PEID0115 EIBD115_BASE.BIT._PEID0115
#define EIBD115_PEID1115 EIBD115_BASE.BIT._PEID1115
#define EIBD115_PEID2115 EIBD115_BASE.BIT._PEID2115
#define EIBD115_GPID0115 EIBD115_BASE.BIT._GPID0115
#define EIBD115_GPID1115 EIBD115_BASE.BIT._GPID1115
#define EIBD115_GPID2115 EIBD115_BASE.BIT._GPID2115
#define EIBD115_BCP0115 EIBD115_BASE.BIT._BCP0115
#define EIBD115_BCP1115 EIBD115_BASE.BIT._BCP1115
#define EIBD115_BCP2115 EIBD115_BASE.BIT._BCP2115
#define EIBD115_CST EIBD115_BASE.BIT._CST
#define EIBD116 EIBD116_BASE.UINT32
#define EIBD116_PEID0116 EIBD116_BASE.BIT._PEID0116
#define EIBD116_PEID1116 EIBD116_BASE.BIT._PEID1116
#define EIBD116_PEID2116 EIBD116_BASE.BIT._PEID2116
#define EIBD116_GPID0116 EIBD116_BASE.BIT._GPID0116
#define EIBD116_GPID1116 EIBD116_BASE.BIT._GPID1116
#define EIBD116_GPID2116 EIBD116_BASE.BIT._GPID2116
#define EIBD116_BCP0116 EIBD116_BASE.BIT._BCP0116
#define EIBD116_BCP1116 EIBD116_BASE.BIT._BCP1116
#define EIBD116_BCP2116 EIBD116_BASE.BIT._BCP2116
#define EIBD116_CST EIBD116_BASE.BIT._CST
#define EIBD117 EIBD117_BASE.UINT32
#define EIBD117_PEID0117 EIBD117_BASE.BIT._PEID0117
#define EIBD117_PEID1117 EIBD117_BASE.BIT._PEID1117
#define EIBD117_PEID2117 EIBD117_BASE.BIT._PEID2117
#define EIBD117_GPID0117 EIBD117_BASE.BIT._GPID0117
#define EIBD117_GPID1117 EIBD117_BASE.BIT._GPID1117
#define EIBD117_GPID2117 EIBD117_BASE.BIT._GPID2117
#define EIBD117_BCP0117 EIBD117_BASE.BIT._BCP0117
#define EIBD117_BCP1117 EIBD117_BASE.BIT._BCP1117
#define EIBD117_BCP2117 EIBD117_BASE.BIT._BCP2117
#define EIBD117_CST EIBD117_BASE.BIT._CST
#define EIBD118 EIBD118_BASE.UINT32
#define EIBD118_PEID0118 EIBD118_BASE.BIT._PEID0118
#define EIBD118_PEID1118 EIBD118_BASE.BIT._PEID1118
#define EIBD118_PEID2118 EIBD118_BASE.BIT._PEID2118
#define EIBD118_GPID0118 EIBD118_BASE.BIT._GPID0118
#define EIBD118_GPID1118 EIBD118_BASE.BIT._GPID1118
#define EIBD118_GPID2118 EIBD118_BASE.BIT._GPID2118
#define EIBD118_BCP0118 EIBD118_BASE.BIT._BCP0118
#define EIBD118_BCP1118 EIBD118_BASE.BIT._BCP1118
#define EIBD118_BCP2118 EIBD118_BASE.BIT._BCP2118
#define EIBD118_CST EIBD118_BASE.BIT._CST
#define EIBD119 EIBD119_BASE.UINT32
#define EIBD119_PEID0119 EIBD119_BASE.BIT._PEID0119
#define EIBD119_PEID1119 EIBD119_BASE.BIT._PEID1119
#define EIBD119_PEID2119 EIBD119_BASE.BIT._PEID2119
#define EIBD119_GPID0119 EIBD119_BASE.BIT._GPID0119
#define EIBD119_GPID1119 EIBD119_BASE.BIT._GPID1119
#define EIBD119_GPID2119 EIBD119_BASE.BIT._GPID2119
#define EIBD119_BCP0119 EIBD119_BASE.BIT._BCP0119
#define EIBD119_BCP1119 EIBD119_BASE.BIT._BCP1119
#define EIBD119_BCP2119 EIBD119_BASE.BIT._BCP2119
#define EIBD119_CST EIBD119_BASE.BIT._CST
#define EIBD120 EIBD120_BASE.UINT32
#define EIBD120_PEID0120 EIBD120_BASE.BIT._PEID0120
#define EIBD120_PEID1120 EIBD120_BASE.BIT._PEID1120
#define EIBD120_PEID2120 EIBD120_BASE.BIT._PEID2120
#define EIBD120_GPID0120 EIBD120_BASE.BIT._GPID0120
#define EIBD120_GPID1120 EIBD120_BASE.BIT._GPID1120
#define EIBD120_GPID2120 EIBD120_BASE.BIT._GPID2120
#define EIBD120_BCP0120 EIBD120_BASE.BIT._BCP0120
#define EIBD120_BCP1120 EIBD120_BASE.BIT._BCP1120
#define EIBD120_BCP2120 EIBD120_BASE.BIT._BCP2120
#define EIBD120_CST EIBD120_BASE.BIT._CST
#define EIBD121 EIBD121_BASE.UINT32
#define EIBD121_PEID0121 EIBD121_BASE.BIT._PEID0121
#define EIBD121_PEID1121 EIBD121_BASE.BIT._PEID1121
#define EIBD121_PEID2121 EIBD121_BASE.BIT._PEID2121
#define EIBD121_GPID0121 EIBD121_BASE.BIT._GPID0121
#define EIBD121_GPID1121 EIBD121_BASE.BIT._GPID1121
#define EIBD121_GPID2121 EIBD121_BASE.BIT._GPID2121
#define EIBD121_BCP0121 EIBD121_BASE.BIT._BCP0121
#define EIBD121_BCP1121 EIBD121_BASE.BIT._BCP1121
#define EIBD121_BCP2121 EIBD121_BASE.BIT._BCP2121
#define EIBD121_CST EIBD121_BASE.BIT._CST
#define EIBD128 EIBD128_BASE.UINT32
#define EIBD128_PEID0128 EIBD128_BASE.BIT._PEID0128
#define EIBD128_PEID1128 EIBD128_BASE.BIT._PEID1128
#define EIBD128_PEID2128 EIBD128_BASE.BIT._PEID2128
#define EIBD128_GPID0128 EIBD128_BASE.BIT._GPID0128
#define EIBD128_GPID1128 EIBD128_BASE.BIT._GPID1128
#define EIBD128_GPID2128 EIBD128_BASE.BIT._GPID2128
#define EIBD128_BCP0128 EIBD128_BASE.BIT._BCP0128
#define EIBD128_BCP1128 EIBD128_BASE.BIT._BCP1128
#define EIBD128_BCP2128 EIBD128_BASE.BIT._BCP2128
#define EIBD128_CST EIBD128_BASE.BIT._CST
#define EIBD129 EIBD129_BASE.UINT32
#define EIBD129_PEID0129 EIBD129_BASE.BIT._PEID0129
#define EIBD129_PEID1129 EIBD129_BASE.BIT._PEID1129
#define EIBD129_PEID2129 EIBD129_BASE.BIT._PEID2129
#define EIBD129_GPID0129 EIBD129_BASE.BIT._GPID0129
#define EIBD129_GPID1129 EIBD129_BASE.BIT._GPID1129
#define EIBD129_GPID2129 EIBD129_BASE.BIT._GPID2129
#define EIBD129_BCP0129 EIBD129_BASE.BIT._BCP0129
#define EIBD129_BCP1129 EIBD129_BASE.BIT._BCP1129
#define EIBD129_BCP2129 EIBD129_BASE.BIT._BCP2129
#define EIBD129_CST EIBD129_BASE.BIT._CST
#define EIBD130 EIBD130_BASE.UINT32
#define EIBD130_PEID0130 EIBD130_BASE.BIT._PEID0130
#define EIBD130_PEID1130 EIBD130_BASE.BIT._PEID1130
#define EIBD130_PEID2130 EIBD130_BASE.BIT._PEID2130
#define EIBD130_GPID0130 EIBD130_BASE.BIT._GPID0130
#define EIBD130_GPID1130 EIBD130_BASE.BIT._GPID1130
#define EIBD130_GPID2130 EIBD130_BASE.BIT._GPID2130
#define EIBD130_BCP0130 EIBD130_BASE.BIT._BCP0130
#define EIBD130_BCP1130 EIBD130_BASE.BIT._BCP1130
#define EIBD130_BCP2130 EIBD130_BASE.BIT._BCP2130
#define EIBD130_CST EIBD130_BASE.BIT._CST
#define EIBD132 EIBD132_BASE.UINT32
#define EIBD132_PEID0132 EIBD132_BASE.BIT._PEID0132
#define EIBD132_PEID1132 EIBD132_BASE.BIT._PEID1132
#define EIBD132_PEID2132 EIBD132_BASE.BIT._PEID2132
#define EIBD132_GPID0132 EIBD132_BASE.BIT._GPID0132
#define EIBD132_GPID1132 EIBD132_BASE.BIT._GPID1132
#define EIBD132_GPID2132 EIBD132_BASE.BIT._GPID2132
#define EIBD132_BCP0132 EIBD132_BASE.BIT._BCP0132
#define EIBD132_BCP1132 EIBD132_BASE.BIT._BCP1132
#define EIBD132_BCP2132 EIBD132_BASE.BIT._BCP2132
#define EIBD132_CST EIBD132_BASE.BIT._CST
#define EIBD133 EIBD133_BASE.UINT32
#define EIBD133_PEID0133 EIBD133_BASE.BIT._PEID0133
#define EIBD133_PEID1133 EIBD133_BASE.BIT._PEID1133
#define EIBD133_PEID2133 EIBD133_BASE.BIT._PEID2133
#define EIBD133_GPID0133 EIBD133_BASE.BIT._GPID0133
#define EIBD133_GPID1133 EIBD133_BASE.BIT._GPID1133
#define EIBD133_GPID2133 EIBD133_BASE.BIT._GPID2133
#define EIBD133_BCP0133 EIBD133_BASE.BIT._BCP0133
#define EIBD133_BCP1133 EIBD133_BASE.BIT._BCP1133
#define EIBD133_BCP2133 EIBD133_BASE.BIT._BCP2133
#define EIBD133_CST EIBD133_BASE.BIT._CST
#define EIBD135 EIBD135_BASE.UINT32
#define EIBD135_PEID0135 EIBD135_BASE.BIT._PEID0135
#define EIBD135_PEID1135 EIBD135_BASE.BIT._PEID1135
#define EIBD135_PEID2135 EIBD135_BASE.BIT._PEID2135
#define EIBD135_GPID0135 EIBD135_BASE.BIT._GPID0135
#define EIBD135_GPID1135 EIBD135_BASE.BIT._GPID1135
#define EIBD135_GPID2135 EIBD135_BASE.BIT._GPID2135
#define EIBD135_BCP0135 EIBD135_BASE.BIT._BCP0135
#define EIBD135_BCP1135 EIBD135_BASE.BIT._BCP1135
#define EIBD135_BCP2135 EIBD135_BASE.BIT._BCP2135
#define EIBD135_CST EIBD135_BASE.BIT._CST
#define EIBD136 EIBD136_BASE.UINT32
#define EIBD136_PEID0136 EIBD136_BASE.BIT._PEID0136
#define EIBD136_PEID1136 EIBD136_BASE.BIT._PEID1136
#define EIBD136_PEID2136 EIBD136_BASE.BIT._PEID2136
#define EIBD136_GPID0136 EIBD136_BASE.BIT._GPID0136
#define EIBD136_GPID1136 EIBD136_BASE.BIT._GPID1136
#define EIBD136_GPID2136 EIBD136_BASE.BIT._GPID2136
#define EIBD136_BCP0136 EIBD136_BASE.BIT._BCP0136
#define EIBD136_BCP1136 EIBD136_BASE.BIT._BCP1136
#define EIBD136_BCP2136 EIBD136_BASE.BIT._BCP2136
#define EIBD136_CST EIBD136_BASE.BIT._CST
#define EIBD141 EIBD141_BASE.UINT32
#define EIBD141_PEID0141 EIBD141_BASE.BIT._PEID0141
#define EIBD141_PEID1141 EIBD141_BASE.BIT._PEID1141
#define EIBD141_PEID2141 EIBD141_BASE.BIT._PEID2141
#define EIBD141_GPID0141 EIBD141_BASE.BIT._GPID0141
#define EIBD141_GPID1141 EIBD141_BASE.BIT._GPID1141
#define EIBD141_GPID2141 EIBD141_BASE.BIT._GPID2141
#define EIBD141_BCP0141 EIBD141_BASE.BIT._BCP0141
#define EIBD141_BCP1141 EIBD141_BASE.BIT._BCP1141
#define EIBD141_BCP2141 EIBD141_BASE.BIT._BCP2141
#define EIBD141_CST EIBD141_BASE.BIT._CST
#define EIBD142 EIBD142_BASE.UINT32
#define EIBD142_PEID0142 EIBD142_BASE.BIT._PEID0142
#define EIBD142_PEID1142 EIBD142_BASE.BIT._PEID1142
#define EIBD142_PEID2142 EIBD142_BASE.BIT._PEID2142
#define EIBD142_GPID0142 EIBD142_BASE.BIT._GPID0142
#define EIBD142_GPID1142 EIBD142_BASE.BIT._GPID1142
#define EIBD142_GPID2142 EIBD142_BASE.BIT._GPID2142
#define EIBD142_BCP0142 EIBD142_BASE.BIT._BCP0142
#define EIBD142_BCP1142 EIBD142_BASE.BIT._BCP1142
#define EIBD142_BCP2142 EIBD142_BASE.BIT._BCP2142
#define EIBD142_CST EIBD142_BASE.BIT._CST
#define EIBD143 EIBD143_BASE.UINT32
#define EIBD143_PEID0143 EIBD143_BASE.BIT._PEID0143
#define EIBD143_PEID1143 EIBD143_BASE.BIT._PEID1143
#define EIBD143_PEID2143 EIBD143_BASE.BIT._PEID2143
#define EIBD143_GPID0143 EIBD143_BASE.BIT._GPID0143
#define EIBD143_GPID1143 EIBD143_BASE.BIT._GPID1143
#define EIBD143_GPID2143 EIBD143_BASE.BIT._GPID2143
#define EIBD143_BCP0143 EIBD143_BASE.BIT._BCP0143
#define EIBD143_BCP1143 EIBD143_BASE.BIT._BCP1143
#define EIBD143_BCP2143 EIBD143_BASE.BIT._BCP2143
#define EIBD143_CST EIBD143_BASE.BIT._CST
#define EIBD144 EIBD144_BASE.UINT32
#define EIBD144_PEID0144 EIBD144_BASE.BIT._PEID0144
#define EIBD144_PEID1144 EIBD144_BASE.BIT._PEID1144
#define EIBD144_PEID2144 EIBD144_BASE.BIT._PEID2144
#define EIBD144_GPID0144 EIBD144_BASE.BIT._GPID0144
#define EIBD144_GPID1144 EIBD144_BASE.BIT._GPID1144
#define EIBD144_GPID2144 EIBD144_BASE.BIT._GPID2144
#define EIBD144_BCP0144 EIBD144_BASE.BIT._BCP0144
#define EIBD144_BCP1144 EIBD144_BASE.BIT._BCP1144
#define EIBD144_BCP2144 EIBD144_BASE.BIT._BCP2144
#define EIBD144_CST EIBD144_BASE.BIT._CST
#define EIBD145 EIBD145_BASE.UINT32
#define EIBD145_PEID0145 EIBD145_BASE.BIT._PEID0145
#define EIBD145_PEID1145 EIBD145_BASE.BIT._PEID1145
#define EIBD145_PEID2145 EIBD145_BASE.BIT._PEID2145
#define EIBD145_GPID0145 EIBD145_BASE.BIT._GPID0145
#define EIBD145_GPID1145 EIBD145_BASE.BIT._GPID1145
#define EIBD145_GPID2145 EIBD145_BASE.BIT._GPID2145
#define EIBD145_BCP0145 EIBD145_BASE.BIT._BCP0145
#define EIBD145_BCP1145 EIBD145_BASE.BIT._BCP1145
#define EIBD145_BCP2145 EIBD145_BASE.BIT._BCP2145
#define EIBD145_CST EIBD145_BASE.BIT._CST
#define EIBD146 EIBD146_BASE.UINT32
#define EIBD146_PEID0146 EIBD146_BASE.BIT._PEID0146
#define EIBD146_PEID1146 EIBD146_BASE.BIT._PEID1146
#define EIBD146_PEID2146 EIBD146_BASE.BIT._PEID2146
#define EIBD146_GPID0146 EIBD146_BASE.BIT._GPID0146
#define EIBD146_GPID1146 EIBD146_BASE.BIT._GPID1146
#define EIBD146_GPID2146 EIBD146_BASE.BIT._GPID2146
#define EIBD146_BCP0146 EIBD146_BASE.BIT._BCP0146
#define EIBD146_BCP1146 EIBD146_BASE.BIT._BCP1146
#define EIBD146_BCP2146 EIBD146_BASE.BIT._BCP2146
#define EIBD146_CST EIBD146_BASE.BIT._CST
#define EIBD147 EIBD147_BASE.UINT32
#define EIBD147_PEID0147 EIBD147_BASE.BIT._PEID0147
#define EIBD147_PEID1147 EIBD147_BASE.BIT._PEID1147
#define EIBD147_PEID2147 EIBD147_BASE.BIT._PEID2147
#define EIBD147_GPID0147 EIBD147_BASE.BIT._GPID0147
#define EIBD147_GPID1147 EIBD147_BASE.BIT._GPID1147
#define EIBD147_GPID2147 EIBD147_BASE.BIT._GPID2147
#define EIBD147_BCP0147 EIBD147_BASE.BIT._BCP0147
#define EIBD147_BCP1147 EIBD147_BASE.BIT._BCP1147
#define EIBD147_BCP2147 EIBD147_BASE.BIT._BCP2147
#define EIBD147_CST EIBD147_BASE.BIT._CST
#define EIBD148 EIBD148_BASE.UINT32
#define EIBD148_PEID0148 EIBD148_BASE.BIT._PEID0148
#define EIBD148_PEID1148 EIBD148_BASE.BIT._PEID1148
#define EIBD148_PEID2148 EIBD148_BASE.BIT._PEID2148
#define EIBD148_GPID0148 EIBD148_BASE.BIT._GPID0148
#define EIBD148_GPID1148 EIBD148_BASE.BIT._GPID1148
#define EIBD148_GPID2148 EIBD148_BASE.BIT._GPID2148
#define EIBD148_BCP0148 EIBD148_BASE.BIT._BCP0148
#define EIBD148_BCP1148 EIBD148_BASE.BIT._BCP1148
#define EIBD148_BCP2148 EIBD148_BASE.BIT._BCP2148
#define EIBD148_CST EIBD148_BASE.BIT._CST
#define EIBD149 EIBD149_BASE.UINT32
#define EIBD149_PEID0149 EIBD149_BASE.BIT._PEID0149
#define EIBD149_PEID1149 EIBD149_BASE.BIT._PEID1149
#define EIBD149_PEID2149 EIBD149_BASE.BIT._PEID2149
#define EIBD149_GPID0149 EIBD149_BASE.BIT._GPID0149
#define EIBD149_GPID1149 EIBD149_BASE.BIT._GPID1149
#define EIBD149_GPID2149 EIBD149_BASE.BIT._GPID2149
#define EIBD149_BCP0149 EIBD149_BASE.BIT._BCP0149
#define EIBD149_BCP1149 EIBD149_BASE.BIT._BCP1149
#define EIBD149_BCP2149 EIBD149_BASE.BIT._BCP2149
#define EIBD149_CST EIBD149_BASE.BIT._CST
#define EIBD150 EIBD150_BASE.UINT32
#define EIBD150_PEID0150 EIBD150_BASE.BIT._PEID0150
#define EIBD150_PEID1150 EIBD150_BASE.BIT._PEID1150
#define EIBD150_PEID2150 EIBD150_BASE.BIT._PEID2150
#define EIBD150_GPID0150 EIBD150_BASE.BIT._GPID0150
#define EIBD150_GPID1150 EIBD150_BASE.BIT._GPID1150
#define EIBD150_GPID2150 EIBD150_BASE.BIT._GPID2150
#define EIBD150_BCP0150 EIBD150_BASE.BIT._BCP0150
#define EIBD150_BCP1150 EIBD150_BASE.BIT._BCP1150
#define EIBD150_BCP2150 EIBD150_BASE.BIT._BCP2150
#define EIBD150_CST EIBD150_BASE.BIT._CST
#define EIBD151 EIBD151_BASE.UINT32
#define EIBD151_PEID0151 EIBD151_BASE.BIT._PEID0151
#define EIBD151_PEID1151 EIBD151_BASE.BIT._PEID1151
#define EIBD151_PEID2151 EIBD151_BASE.BIT._PEID2151
#define EIBD151_GPID0151 EIBD151_BASE.BIT._GPID0151
#define EIBD151_GPID1151 EIBD151_BASE.BIT._GPID1151
#define EIBD151_GPID2151 EIBD151_BASE.BIT._GPID2151
#define EIBD151_BCP0151 EIBD151_BASE.BIT._BCP0151
#define EIBD151_BCP1151 EIBD151_BASE.BIT._BCP1151
#define EIBD151_BCP2151 EIBD151_BASE.BIT._BCP2151
#define EIBD151_CST EIBD151_BASE.BIT._CST
#define EIBD152 EIBD152_BASE.UINT32
#define EIBD152_PEID0152 EIBD152_BASE.BIT._PEID0152
#define EIBD152_PEID1152 EIBD152_BASE.BIT._PEID1152
#define EIBD152_PEID2152 EIBD152_BASE.BIT._PEID2152
#define EIBD152_GPID0152 EIBD152_BASE.BIT._GPID0152
#define EIBD152_GPID1152 EIBD152_BASE.BIT._GPID1152
#define EIBD152_GPID2152 EIBD152_BASE.BIT._GPID2152
#define EIBD152_BCP0152 EIBD152_BASE.BIT._BCP0152
#define EIBD152_BCP1152 EIBD152_BASE.BIT._BCP1152
#define EIBD152_BCP2152 EIBD152_BASE.BIT._BCP2152
#define EIBD152_CST EIBD152_BASE.BIT._CST
#define EIBD156 EIBD156_BASE.UINT32
#define EIBD156_PEID0156 EIBD156_BASE.BIT._PEID0156
#define EIBD156_PEID1156 EIBD156_BASE.BIT._PEID1156
#define EIBD156_PEID2156 EIBD156_BASE.BIT._PEID2156
#define EIBD156_GPID0156 EIBD156_BASE.BIT._GPID0156
#define EIBD156_GPID1156 EIBD156_BASE.BIT._GPID1156
#define EIBD156_GPID2156 EIBD156_BASE.BIT._GPID2156
#define EIBD156_BCP0156 EIBD156_BASE.BIT._BCP0156
#define EIBD156_BCP1156 EIBD156_BASE.BIT._BCP1156
#define EIBD156_BCP2156 EIBD156_BASE.BIT._BCP2156
#define EIBD156_CST EIBD156_BASE.BIT._CST
#define EIBD157 EIBD157_BASE.UINT32
#define EIBD157_PEID0157 EIBD157_BASE.BIT._PEID0157
#define EIBD157_PEID1157 EIBD157_BASE.BIT._PEID1157
#define EIBD157_PEID2157 EIBD157_BASE.BIT._PEID2157
#define EIBD157_GPID0157 EIBD157_BASE.BIT._GPID0157
#define EIBD157_GPID1157 EIBD157_BASE.BIT._GPID1157
#define EIBD157_GPID2157 EIBD157_BASE.BIT._GPID2157
#define EIBD157_BCP0157 EIBD157_BASE.BIT._BCP0157
#define EIBD157_BCP1157 EIBD157_BASE.BIT._BCP1157
#define EIBD157_BCP2157 EIBD157_BASE.BIT._BCP2157
#define EIBD157_CST EIBD157_BASE.BIT._CST
#define EIBD158 EIBD158_BASE.UINT32
#define EIBD158_PEID0158 EIBD158_BASE.BIT._PEID0158
#define EIBD158_PEID1158 EIBD158_BASE.BIT._PEID1158
#define EIBD158_PEID2158 EIBD158_BASE.BIT._PEID2158
#define EIBD158_GPID0158 EIBD158_BASE.BIT._GPID0158
#define EIBD158_GPID1158 EIBD158_BASE.BIT._GPID1158
#define EIBD158_GPID2158 EIBD158_BASE.BIT._GPID2158
#define EIBD158_BCP0158 EIBD158_BASE.BIT._BCP0158
#define EIBD158_BCP1158 EIBD158_BASE.BIT._BCP1158
#define EIBD158_BCP2158 EIBD158_BASE.BIT._BCP2158
#define EIBD158_CST EIBD158_BASE.BIT._CST
#define EIBD159 EIBD159_BASE.UINT32
#define EIBD159_PEID0159 EIBD159_BASE.BIT._PEID0159
#define EIBD159_PEID1159 EIBD159_BASE.BIT._PEID1159
#define EIBD159_PEID2159 EIBD159_BASE.BIT._PEID2159
#define EIBD159_GPID0159 EIBD159_BASE.BIT._GPID0159
#define EIBD159_GPID1159 EIBD159_BASE.BIT._GPID1159
#define EIBD159_GPID2159 EIBD159_BASE.BIT._GPID2159
#define EIBD159_BCP0159 EIBD159_BASE.BIT._BCP0159
#define EIBD159_BCP1159 EIBD159_BASE.BIT._BCP1159
#define EIBD159_BCP2159 EIBD159_BASE.BIT._BCP2159
#define EIBD159_CST EIBD159_BASE.BIT._CST
#define EIBD160 EIBD160_BASE.UINT32
#define EIBD160_PEID0160 EIBD160_BASE.BIT._PEID0160
#define EIBD160_PEID1160 EIBD160_BASE.BIT._PEID1160
#define EIBD160_PEID2160 EIBD160_BASE.BIT._PEID2160
#define EIBD160_GPID0160 EIBD160_BASE.BIT._GPID0160
#define EIBD160_GPID1160 EIBD160_BASE.BIT._GPID1160
#define EIBD160_GPID2160 EIBD160_BASE.BIT._GPID2160
#define EIBD160_BCP0160 EIBD160_BASE.BIT._BCP0160
#define EIBD160_BCP1160 EIBD160_BASE.BIT._BCP1160
#define EIBD160_BCP2160 EIBD160_BASE.BIT._BCP2160
#define EIBD160_CST EIBD160_BASE.BIT._CST
#define EIBD161 EIBD161_BASE.UINT32
#define EIBD161_PEID0161 EIBD161_BASE.BIT._PEID0161
#define EIBD161_PEID1161 EIBD161_BASE.BIT._PEID1161
#define EIBD161_PEID2161 EIBD161_BASE.BIT._PEID2161
#define EIBD161_GPID0161 EIBD161_BASE.BIT._GPID0161
#define EIBD161_GPID1161 EIBD161_BASE.BIT._GPID1161
#define EIBD161_GPID2161 EIBD161_BASE.BIT._GPID2161
#define EIBD161_BCP0161 EIBD161_BASE.BIT._BCP0161
#define EIBD161_BCP1161 EIBD161_BASE.BIT._BCP1161
#define EIBD161_BCP2161 EIBD161_BASE.BIT._BCP2161
#define EIBD161_CST EIBD161_BASE.BIT._CST
#define EIBD166 EIBD166_BASE.UINT32
#define EIBD166_PEID0166 EIBD166_BASE.BIT._PEID0166
#define EIBD166_PEID1166 EIBD166_BASE.BIT._PEID1166
#define EIBD166_PEID2166 EIBD166_BASE.BIT._PEID2166
#define EIBD166_GPID0166 EIBD166_BASE.BIT._GPID0166
#define EIBD166_GPID1166 EIBD166_BASE.BIT._GPID1166
#define EIBD166_GPID2166 EIBD166_BASE.BIT._GPID2166
#define EIBD166_BCP0166 EIBD166_BASE.BIT._BCP0166
#define EIBD166_BCP1166 EIBD166_BASE.BIT._BCP1166
#define EIBD166_BCP2166 EIBD166_BASE.BIT._BCP2166
#define EIBD166_CST EIBD166_BASE.BIT._CST
#define EIBD167 EIBD167_BASE.UINT32
#define EIBD167_PEID0167 EIBD167_BASE.BIT._PEID0167
#define EIBD167_PEID1167 EIBD167_BASE.BIT._PEID1167
#define EIBD167_PEID2167 EIBD167_BASE.BIT._PEID2167
#define EIBD167_GPID0167 EIBD167_BASE.BIT._GPID0167
#define EIBD167_GPID1167 EIBD167_BASE.BIT._GPID1167
#define EIBD167_GPID2167 EIBD167_BASE.BIT._GPID2167
#define EIBD167_BCP0167 EIBD167_BASE.BIT._BCP0167
#define EIBD167_BCP1167 EIBD167_BASE.BIT._BCP1167
#define EIBD167_BCP2167 EIBD167_BASE.BIT._BCP2167
#define EIBD167_CST EIBD167_BASE.BIT._CST
#define EIBD168 EIBD168_BASE.UINT32
#define EIBD168_PEID0168 EIBD168_BASE.BIT._PEID0168
#define EIBD168_PEID1168 EIBD168_BASE.BIT._PEID1168
#define EIBD168_PEID2168 EIBD168_BASE.BIT._PEID2168
#define EIBD168_GPID0168 EIBD168_BASE.BIT._GPID0168
#define EIBD168_GPID1168 EIBD168_BASE.BIT._GPID1168
#define EIBD168_GPID2168 EIBD168_BASE.BIT._GPID2168
#define EIBD168_BCP0168 EIBD168_BASE.BIT._BCP0168
#define EIBD168_BCP1168 EIBD168_BASE.BIT._BCP1168
#define EIBD168_BCP2168 EIBD168_BASE.BIT._BCP2168
#define EIBD168_CST EIBD168_BASE.BIT._CST
#define EIBD169 EIBD169_BASE.UINT32
#define EIBD169_PEID0169 EIBD169_BASE.BIT._PEID0169
#define EIBD169_PEID1169 EIBD169_BASE.BIT._PEID1169
#define EIBD169_PEID2169 EIBD169_BASE.BIT._PEID2169
#define EIBD169_GPID0169 EIBD169_BASE.BIT._GPID0169
#define EIBD169_GPID1169 EIBD169_BASE.BIT._GPID1169
#define EIBD169_GPID2169 EIBD169_BASE.BIT._GPID2169
#define EIBD169_BCP0169 EIBD169_BASE.BIT._BCP0169
#define EIBD169_BCP1169 EIBD169_BASE.BIT._BCP1169
#define EIBD169_BCP2169 EIBD169_BASE.BIT._BCP2169
#define EIBD169_CST EIBD169_BASE.BIT._CST
#define EIBD170 EIBD170_BASE.UINT32
#define EIBD170_PEID0170 EIBD170_BASE.BIT._PEID0170
#define EIBD170_PEID1170 EIBD170_BASE.BIT._PEID1170
#define EIBD170_PEID2170 EIBD170_BASE.BIT._PEID2170
#define EIBD170_GPID0170 EIBD170_BASE.BIT._GPID0170
#define EIBD170_GPID1170 EIBD170_BASE.BIT._GPID1170
#define EIBD170_GPID2170 EIBD170_BASE.BIT._GPID2170
#define EIBD170_BCP0170 EIBD170_BASE.BIT._BCP0170
#define EIBD170_BCP1170 EIBD170_BASE.BIT._BCP1170
#define EIBD170_BCP2170 EIBD170_BASE.BIT._BCP2170
#define EIBD170_CST EIBD170_BASE.BIT._CST
#define EIBD171 EIBD171_BASE.UINT32
#define EIBD171_PEID0171 EIBD171_BASE.BIT._PEID0171
#define EIBD171_PEID1171 EIBD171_BASE.BIT._PEID1171
#define EIBD171_PEID2171 EIBD171_BASE.BIT._PEID2171
#define EIBD171_GPID0171 EIBD171_BASE.BIT._GPID0171
#define EIBD171_GPID1171 EIBD171_BASE.BIT._GPID1171
#define EIBD171_GPID2171 EIBD171_BASE.BIT._GPID2171
#define EIBD171_BCP0171 EIBD171_BASE.BIT._BCP0171
#define EIBD171_BCP1171 EIBD171_BASE.BIT._BCP1171
#define EIBD171_BCP2171 EIBD171_BASE.BIT._BCP2171
#define EIBD171_CST EIBD171_BASE.BIT._CST
#define EIBD172 EIBD172_BASE.UINT32
#define EIBD172_PEID0172 EIBD172_BASE.BIT._PEID0172
#define EIBD172_PEID1172 EIBD172_BASE.BIT._PEID1172
#define EIBD172_PEID2172 EIBD172_BASE.BIT._PEID2172
#define EIBD172_GPID0172 EIBD172_BASE.BIT._GPID0172
#define EIBD172_GPID1172 EIBD172_BASE.BIT._GPID1172
#define EIBD172_GPID2172 EIBD172_BASE.BIT._GPID2172
#define EIBD172_BCP0172 EIBD172_BASE.BIT._BCP0172
#define EIBD172_BCP1172 EIBD172_BASE.BIT._BCP1172
#define EIBD172_BCP2172 EIBD172_BASE.BIT._BCP2172
#define EIBD172_CST EIBD172_BASE.BIT._CST
#define EIBD173 EIBD173_BASE.UINT32
#define EIBD173_PEID0173 EIBD173_BASE.BIT._PEID0173
#define EIBD173_PEID1173 EIBD173_BASE.BIT._PEID1173
#define EIBD173_PEID2173 EIBD173_BASE.BIT._PEID2173
#define EIBD173_GPID0173 EIBD173_BASE.BIT._GPID0173
#define EIBD173_GPID1173 EIBD173_BASE.BIT._GPID1173
#define EIBD173_GPID2173 EIBD173_BASE.BIT._GPID2173
#define EIBD173_BCP0173 EIBD173_BASE.BIT._BCP0173
#define EIBD173_BCP1173 EIBD173_BASE.BIT._BCP1173
#define EIBD173_BCP2173 EIBD173_BASE.BIT._BCP2173
#define EIBD173_CST EIBD173_BASE.BIT._CST
#define EIBD174 EIBD174_BASE.UINT32
#define EIBD174_PEID0174 EIBD174_BASE.BIT._PEID0174
#define EIBD174_PEID1174 EIBD174_BASE.BIT._PEID1174
#define EIBD174_PEID2174 EIBD174_BASE.BIT._PEID2174
#define EIBD174_GPID0174 EIBD174_BASE.BIT._GPID0174
#define EIBD174_GPID1174 EIBD174_BASE.BIT._GPID1174
#define EIBD174_GPID2174 EIBD174_BASE.BIT._GPID2174
#define EIBD174_BCP0174 EIBD174_BASE.BIT._BCP0174
#define EIBD174_BCP1174 EIBD174_BASE.BIT._BCP1174
#define EIBD174_BCP2174 EIBD174_BASE.BIT._BCP2174
#define EIBD174_CST EIBD174_BASE.BIT._CST
#define EIBD175 EIBD175_BASE.UINT32
#define EIBD175_PEID0175 EIBD175_BASE.BIT._PEID0175
#define EIBD175_PEID1175 EIBD175_BASE.BIT._PEID1175
#define EIBD175_PEID2175 EIBD175_BASE.BIT._PEID2175
#define EIBD175_GPID0175 EIBD175_BASE.BIT._GPID0175
#define EIBD175_GPID1175 EIBD175_BASE.BIT._GPID1175
#define EIBD175_GPID2175 EIBD175_BASE.BIT._GPID2175
#define EIBD175_BCP0175 EIBD175_BASE.BIT._BCP0175
#define EIBD175_BCP1175 EIBD175_BASE.BIT._BCP1175
#define EIBD175_BCP2175 EIBD175_BASE.BIT._BCP2175
#define EIBD175_CST EIBD175_BASE.BIT._CST
#define EIBD176 EIBD176_BASE.UINT32
#define EIBD176_PEID0176 EIBD176_BASE.BIT._PEID0176
#define EIBD176_PEID1176 EIBD176_BASE.BIT._PEID1176
#define EIBD176_PEID2176 EIBD176_BASE.BIT._PEID2176
#define EIBD176_GPID0176 EIBD176_BASE.BIT._GPID0176
#define EIBD176_GPID1176 EIBD176_BASE.BIT._GPID1176
#define EIBD176_GPID2176 EIBD176_BASE.BIT._GPID2176
#define EIBD176_BCP0176 EIBD176_BASE.BIT._BCP0176
#define EIBD176_BCP1176 EIBD176_BASE.BIT._BCP1176
#define EIBD176_BCP2176 EIBD176_BASE.BIT._BCP2176
#define EIBD176_CST EIBD176_BASE.BIT._CST
#define EIBD177 EIBD177_BASE.UINT32
#define EIBD177_PEID0177 EIBD177_BASE.BIT._PEID0177
#define EIBD177_PEID1177 EIBD177_BASE.BIT._PEID1177
#define EIBD177_PEID2177 EIBD177_BASE.BIT._PEID2177
#define EIBD177_GPID0177 EIBD177_BASE.BIT._GPID0177
#define EIBD177_GPID1177 EIBD177_BASE.BIT._GPID1177
#define EIBD177_GPID2177 EIBD177_BASE.BIT._GPID2177
#define EIBD177_BCP0177 EIBD177_BASE.BIT._BCP0177
#define EIBD177_BCP1177 EIBD177_BASE.BIT._BCP1177
#define EIBD177_BCP2177 EIBD177_BASE.BIT._BCP2177
#define EIBD177_CST EIBD177_BASE.BIT._CST
#define EIBD178 EIBD178_BASE.UINT32
#define EIBD178_PEID0178 EIBD178_BASE.BIT._PEID0178
#define EIBD178_PEID1178 EIBD178_BASE.BIT._PEID1178
#define EIBD178_PEID2178 EIBD178_BASE.BIT._PEID2178
#define EIBD178_GPID0178 EIBD178_BASE.BIT._GPID0178
#define EIBD178_GPID1178 EIBD178_BASE.BIT._GPID1178
#define EIBD178_GPID2178 EIBD178_BASE.BIT._GPID2178
#define EIBD178_BCP0178 EIBD178_BASE.BIT._BCP0178
#define EIBD178_BCP1178 EIBD178_BASE.BIT._BCP1178
#define EIBD178_BCP2178 EIBD178_BASE.BIT._BCP2178
#define EIBD178_CST EIBD178_BASE.BIT._CST
#define EIBD179 EIBD179_BASE.UINT32
#define EIBD179_PEID0179 EIBD179_BASE.BIT._PEID0179
#define EIBD179_PEID1179 EIBD179_BASE.BIT._PEID1179
#define EIBD179_PEID2179 EIBD179_BASE.BIT._PEID2179
#define EIBD179_GPID0179 EIBD179_BASE.BIT._GPID0179
#define EIBD179_GPID1179 EIBD179_BASE.BIT._GPID1179
#define EIBD179_GPID2179 EIBD179_BASE.BIT._GPID2179
#define EIBD179_BCP0179 EIBD179_BASE.BIT._BCP0179
#define EIBD179_BCP1179 EIBD179_BASE.BIT._BCP1179
#define EIBD179_BCP2179 EIBD179_BASE.BIT._BCP2179
#define EIBD179_CST EIBD179_BASE.BIT._CST
#define EIBD180 EIBD180_BASE.UINT32
#define EIBD180_PEID0180 EIBD180_BASE.BIT._PEID0180
#define EIBD180_PEID1180 EIBD180_BASE.BIT._PEID1180
#define EIBD180_PEID2180 EIBD180_BASE.BIT._PEID2180
#define EIBD180_GPID0180 EIBD180_BASE.BIT._GPID0180
#define EIBD180_GPID1180 EIBD180_BASE.BIT._GPID1180
#define EIBD180_GPID2180 EIBD180_BASE.BIT._GPID2180
#define EIBD180_BCP0180 EIBD180_BASE.BIT._BCP0180
#define EIBD180_BCP1180 EIBD180_BASE.BIT._BCP1180
#define EIBD180_BCP2180 EIBD180_BASE.BIT._BCP2180
#define EIBD180_CST EIBD180_BASE.BIT._CST
#define EIBD184 EIBD184_BASE.UINT32
#define EIBD184_PEID0184 EIBD184_BASE.BIT._PEID0184
#define EIBD184_PEID1184 EIBD184_BASE.BIT._PEID1184
#define EIBD184_PEID2184 EIBD184_BASE.BIT._PEID2184
#define EIBD184_GPID0184 EIBD184_BASE.BIT._GPID0184
#define EIBD184_GPID1184 EIBD184_BASE.BIT._GPID1184
#define EIBD184_GPID2184 EIBD184_BASE.BIT._GPID2184
#define EIBD184_BCP0184 EIBD184_BASE.BIT._BCP0184
#define EIBD184_BCP1184 EIBD184_BASE.BIT._BCP1184
#define EIBD184_BCP2184 EIBD184_BASE.BIT._BCP2184
#define EIBD184_CST EIBD184_BASE.BIT._CST
#define EIBD186 EIBD186_BASE.UINT32
#define EIBD186_PEID0186 EIBD186_BASE.BIT._PEID0186
#define EIBD186_PEID1186 EIBD186_BASE.BIT._PEID1186
#define EIBD186_PEID2186 EIBD186_BASE.BIT._PEID2186
#define EIBD186_GPID0186 EIBD186_BASE.BIT._GPID0186
#define EIBD186_GPID1186 EIBD186_BASE.BIT._GPID1186
#define EIBD186_GPID2186 EIBD186_BASE.BIT._GPID2186
#define EIBD186_BCP0186 EIBD186_BASE.BIT._BCP0186
#define EIBD186_BCP1186 EIBD186_BASE.BIT._BCP1186
#define EIBD186_BCP2186 EIBD186_BASE.BIT._BCP2186
#define EIBD186_CST EIBD186_BASE.BIT._CST
#define EIBD187 EIBD187_BASE.UINT32
#define EIBD187_PEID0187 EIBD187_BASE.BIT._PEID0187
#define EIBD187_PEID1187 EIBD187_BASE.BIT._PEID1187
#define EIBD187_PEID2187 EIBD187_BASE.BIT._PEID2187
#define EIBD187_GPID0187 EIBD187_BASE.BIT._GPID0187
#define EIBD187_GPID1187 EIBD187_BASE.BIT._GPID1187
#define EIBD187_GPID2187 EIBD187_BASE.BIT._GPID2187
#define EIBD187_BCP0187 EIBD187_BASE.BIT._BCP0187
#define EIBD187_BCP1187 EIBD187_BASE.BIT._BCP1187
#define EIBD187_BCP2187 EIBD187_BASE.BIT._BCP2187
#define EIBD187_CST EIBD187_BASE.BIT._CST
#define EIBD188 EIBD188_BASE.UINT32
#define EIBD188_PEID0188 EIBD188_BASE.BIT._PEID0188
#define EIBD188_PEID1188 EIBD188_BASE.BIT._PEID1188
#define EIBD188_PEID2188 EIBD188_BASE.BIT._PEID2188
#define EIBD188_GPID0188 EIBD188_BASE.BIT._GPID0188
#define EIBD188_GPID1188 EIBD188_BASE.BIT._GPID1188
#define EIBD188_GPID2188 EIBD188_BASE.BIT._GPID2188
#define EIBD188_BCP0188 EIBD188_BASE.BIT._BCP0188
#define EIBD188_BCP1188 EIBD188_BASE.BIT._BCP1188
#define EIBD188_BCP2188 EIBD188_BASE.BIT._BCP2188
#define EIBD188_CST EIBD188_BASE.BIT._CST
#define EIBD189 EIBD189_BASE.UINT32
#define EIBD189_PEID0189 EIBD189_BASE.BIT._PEID0189
#define EIBD189_PEID1189 EIBD189_BASE.BIT._PEID1189
#define EIBD189_PEID2189 EIBD189_BASE.BIT._PEID2189
#define EIBD189_GPID0189 EIBD189_BASE.BIT._GPID0189
#define EIBD189_GPID1189 EIBD189_BASE.BIT._GPID1189
#define EIBD189_GPID2189 EIBD189_BASE.BIT._GPID2189
#define EIBD189_BCP0189 EIBD189_BASE.BIT._BCP0189
#define EIBD189_BCP1189 EIBD189_BASE.BIT._BCP1189
#define EIBD189_BCP2189 EIBD189_BASE.BIT._BCP2189
#define EIBD189_CST EIBD189_BASE.BIT._CST
#define EIBD190 EIBD190_BASE.UINT32
#define EIBD190_PEID0190 EIBD190_BASE.BIT._PEID0190
#define EIBD190_PEID1190 EIBD190_BASE.BIT._PEID1190
#define EIBD190_PEID2190 EIBD190_BASE.BIT._PEID2190
#define EIBD190_GPID0190 EIBD190_BASE.BIT._GPID0190
#define EIBD190_GPID1190 EIBD190_BASE.BIT._GPID1190
#define EIBD190_GPID2190 EIBD190_BASE.BIT._GPID2190
#define EIBD190_BCP0190 EIBD190_BASE.BIT._BCP0190
#define EIBD190_BCP1190 EIBD190_BASE.BIT._BCP1190
#define EIBD190_BCP2190 EIBD190_BASE.BIT._BCP2190
#define EIBD190_CST EIBD190_BASE.BIT._CST
#define EIBD191 EIBD191_BASE.UINT32
#define EIBD191_PEID0191 EIBD191_BASE.BIT._PEID0191
#define EIBD191_PEID1191 EIBD191_BASE.BIT._PEID1191
#define EIBD191_PEID2191 EIBD191_BASE.BIT._PEID2191
#define EIBD191_GPID0191 EIBD191_BASE.BIT._GPID0191
#define EIBD191_GPID1191 EIBD191_BASE.BIT._GPID1191
#define EIBD191_GPID2191 EIBD191_BASE.BIT._GPID2191
#define EIBD191_BCP0191 EIBD191_BASE.BIT._BCP0191
#define EIBD191_BCP1191 EIBD191_BASE.BIT._BCP1191
#define EIBD191_BCP2191 EIBD191_BASE.BIT._BCP2191
#define EIBD191_CST EIBD191_BASE.BIT._CST
#define EIBD192 EIBD192_BASE.UINT32
#define EIBD192_PEID0192 EIBD192_BASE.BIT._PEID0192
#define EIBD192_PEID1192 EIBD192_BASE.BIT._PEID1192
#define EIBD192_PEID2192 EIBD192_BASE.BIT._PEID2192
#define EIBD192_GPID0192 EIBD192_BASE.BIT._GPID0192
#define EIBD192_GPID1192 EIBD192_BASE.BIT._GPID1192
#define EIBD192_GPID2192 EIBD192_BASE.BIT._GPID2192
#define EIBD192_BCP0192 EIBD192_BASE.BIT._BCP0192
#define EIBD192_BCP1192 EIBD192_BASE.BIT._BCP1192
#define EIBD192_BCP2192 EIBD192_BASE.BIT._BCP2192
#define EIBD192_CST EIBD192_BASE.BIT._CST
#define EIBD193 EIBD193_BASE.UINT32
#define EIBD193_PEID0193 EIBD193_BASE.BIT._PEID0193
#define EIBD193_PEID1193 EIBD193_BASE.BIT._PEID1193
#define EIBD193_PEID2193 EIBD193_BASE.BIT._PEID2193
#define EIBD193_GPID0193 EIBD193_BASE.BIT._GPID0193
#define EIBD193_GPID1193 EIBD193_BASE.BIT._GPID1193
#define EIBD193_GPID2193 EIBD193_BASE.BIT._GPID2193
#define EIBD193_BCP0193 EIBD193_BASE.BIT._BCP0193
#define EIBD193_BCP1193 EIBD193_BASE.BIT._BCP1193
#define EIBD193_BCP2193 EIBD193_BASE.BIT._BCP2193
#define EIBD193_CST EIBD193_BASE.BIT._CST
#define EIBD194 EIBD194_BASE.UINT32
#define EIBD194_PEID0194 EIBD194_BASE.BIT._PEID0194
#define EIBD194_PEID1194 EIBD194_BASE.BIT._PEID1194
#define EIBD194_PEID2194 EIBD194_BASE.BIT._PEID2194
#define EIBD194_GPID0194 EIBD194_BASE.BIT._GPID0194
#define EIBD194_GPID1194 EIBD194_BASE.BIT._GPID1194
#define EIBD194_GPID2194 EIBD194_BASE.BIT._GPID2194
#define EIBD194_BCP0194 EIBD194_BASE.BIT._BCP0194
#define EIBD194_BCP1194 EIBD194_BASE.BIT._BCP1194
#define EIBD194_BCP2194 EIBD194_BASE.BIT._BCP2194
#define EIBD194_CST EIBD194_BASE.BIT._CST
#define EIBD195 EIBD195_BASE.UINT32
#define EIBD195_PEID0195 EIBD195_BASE.BIT._PEID0195
#define EIBD195_PEID1195 EIBD195_BASE.BIT._PEID1195
#define EIBD195_PEID2195 EIBD195_BASE.BIT._PEID2195
#define EIBD195_GPID0195 EIBD195_BASE.BIT._GPID0195
#define EIBD195_GPID1195 EIBD195_BASE.BIT._GPID1195
#define EIBD195_GPID2195 EIBD195_BASE.BIT._GPID2195
#define EIBD195_BCP0195 EIBD195_BASE.BIT._BCP0195
#define EIBD195_BCP1195 EIBD195_BASE.BIT._BCP1195
#define EIBD195_BCP2195 EIBD195_BASE.BIT._BCP2195
#define EIBD195_CST EIBD195_BASE.BIT._CST
#define EIBD196 EIBD196_BASE.UINT32
#define EIBD196_PEID0196 EIBD196_BASE.BIT._PEID0196
#define EIBD196_PEID1196 EIBD196_BASE.BIT._PEID1196
#define EIBD196_PEID2196 EIBD196_BASE.BIT._PEID2196
#define EIBD196_GPID0196 EIBD196_BASE.BIT._GPID0196
#define EIBD196_GPID1196 EIBD196_BASE.BIT._GPID1196
#define EIBD196_GPID2196 EIBD196_BASE.BIT._GPID2196
#define EIBD196_BCP0196 EIBD196_BASE.BIT._BCP0196
#define EIBD196_BCP1196 EIBD196_BASE.BIT._BCP1196
#define EIBD196_BCP2196 EIBD196_BASE.BIT._BCP2196
#define EIBD196_CST EIBD196_BASE.BIT._CST
#define EIBD208 EIBD208_BASE.UINT32
#define EIBD208_PEID0208 EIBD208_BASE.BIT._PEID0208
#define EIBD208_PEID1208 EIBD208_BASE.BIT._PEID1208
#define EIBD208_PEID2208 EIBD208_BASE.BIT._PEID2208
#define EIBD208_GPID0208 EIBD208_BASE.BIT._GPID0208
#define EIBD208_GPID1208 EIBD208_BASE.BIT._GPID1208
#define EIBD208_GPID2208 EIBD208_BASE.BIT._GPID2208
#define EIBD208_BCP0208 EIBD208_BASE.BIT._BCP0208
#define EIBD208_BCP1208 EIBD208_BASE.BIT._BCP1208
#define EIBD208_BCP2208 EIBD208_BASE.BIT._BCP2208
#define EIBD208_CST EIBD208_BASE.BIT._CST
#define EIBD209 EIBD209_BASE.UINT32
#define EIBD209_PEID0209 EIBD209_BASE.BIT._PEID0209
#define EIBD209_PEID1209 EIBD209_BASE.BIT._PEID1209
#define EIBD209_PEID2209 EIBD209_BASE.BIT._PEID2209
#define EIBD209_GPID0209 EIBD209_BASE.BIT._GPID0209
#define EIBD209_GPID1209 EIBD209_BASE.BIT._GPID1209
#define EIBD209_GPID2209 EIBD209_BASE.BIT._GPID2209
#define EIBD209_BCP0209 EIBD209_BASE.BIT._BCP0209
#define EIBD209_BCP1209 EIBD209_BASE.BIT._BCP1209
#define EIBD209_BCP2209 EIBD209_BASE.BIT._BCP2209
#define EIBD209_CST EIBD209_BASE.BIT._CST
#define EIBD210 EIBD210_BASE.UINT32
#define EIBD210_PEID0210 EIBD210_BASE.BIT._PEID0210
#define EIBD210_PEID1210 EIBD210_BASE.BIT._PEID1210
#define EIBD210_PEID2210 EIBD210_BASE.BIT._PEID2210
#define EIBD210_GPID0210 EIBD210_BASE.BIT._GPID0210
#define EIBD210_GPID1210 EIBD210_BASE.BIT._GPID1210
#define EIBD210_GPID2210 EIBD210_BASE.BIT._GPID2210
#define EIBD210_BCP0210 EIBD210_BASE.BIT._BCP0210
#define EIBD210_BCP1210 EIBD210_BASE.BIT._BCP1210
#define EIBD210_BCP2210 EIBD210_BASE.BIT._BCP2210
#define EIBD210_CST EIBD210_BASE.BIT._CST
#define EIBD211 EIBD211_BASE.UINT32
#define EIBD211_PEID0211 EIBD211_BASE.BIT._PEID0211
#define EIBD211_PEID1211 EIBD211_BASE.BIT._PEID1211
#define EIBD211_PEID2211 EIBD211_BASE.BIT._PEID2211
#define EIBD211_GPID0211 EIBD211_BASE.BIT._GPID0211
#define EIBD211_GPID1211 EIBD211_BASE.BIT._GPID1211
#define EIBD211_GPID2211 EIBD211_BASE.BIT._GPID2211
#define EIBD211_BCP0211 EIBD211_BASE.BIT._BCP0211
#define EIBD211_BCP1211 EIBD211_BASE.BIT._BCP1211
#define EIBD211_BCP2211 EIBD211_BASE.BIT._BCP2211
#define EIBD211_CST EIBD211_BASE.BIT._CST
#define EIBD212 EIBD212_BASE.UINT32
#define EIBD212_PEID0212 EIBD212_BASE.BIT._PEID0212
#define EIBD212_PEID1212 EIBD212_BASE.BIT._PEID1212
#define EIBD212_PEID2212 EIBD212_BASE.BIT._PEID2212
#define EIBD212_GPID0212 EIBD212_BASE.BIT._GPID0212
#define EIBD212_GPID1212 EIBD212_BASE.BIT._GPID1212
#define EIBD212_GPID2212 EIBD212_BASE.BIT._GPID2212
#define EIBD212_BCP0212 EIBD212_BASE.BIT._BCP0212
#define EIBD212_BCP1212 EIBD212_BASE.BIT._BCP1212
#define EIBD212_BCP2212 EIBD212_BASE.BIT._BCP2212
#define EIBD212_CST EIBD212_BASE.BIT._CST
#define EIBD213 EIBD213_BASE.UINT32
#define EIBD213_PEID0213 EIBD213_BASE.BIT._PEID0213
#define EIBD213_PEID1213 EIBD213_BASE.BIT._PEID1213
#define EIBD213_PEID2213 EIBD213_BASE.BIT._PEID2213
#define EIBD213_GPID0213 EIBD213_BASE.BIT._GPID0213
#define EIBD213_GPID1213 EIBD213_BASE.BIT._GPID1213
#define EIBD213_GPID2213 EIBD213_BASE.BIT._GPID2213
#define EIBD213_BCP0213 EIBD213_BASE.BIT._BCP0213
#define EIBD213_BCP1213 EIBD213_BASE.BIT._BCP1213
#define EIBD213_BCP2213 EIBD213_BASE.BIT._BCP2213
#define EIBD213_CST EIBD213_BASE.BIT._CST
#define EIBD214 EIBD214_BASE.UINT32
#define EIBD214_PEID0214 EIBD214_BASE.BIT._PEID0214
#define EIBD214_PEID1214 EIBD214_BASE.BIT._PEID1214
#define EIBD214_PEID2214 EIBD214_BASE.BIT._PEID2214
#define EIBD214_GPID0214 EIBD214_BASE.BIT._GPID0214
#define EIBD214_GPID1214 EIBD214_BASE.BIT._GPID1214
#define EIBD214_GPID2214 EIBD214_BASE.BIT._GPID2214
#define EIBD214_BCP0214 EIBD214_BASE.BIT._BCP0214
#define EIBD214_BCP1214 EIBD214_BASE.BIT._BCP1214
#define EIBD214_BCP2214 EIBD214_BASE.BIT._BCP2214
#define EIBD214_CST EIBD214_BASE.BIT._CST
#define EIBD215 EIBD215_BASE.UINT32
#define EIBD215_PEID0215 EIBD215_BASE.BIT._PEID0215
#define EIBD215_PEID1215 EIBD215_BASE.BIT._PEID1215
#define EIBD215_PEID2215 EIBD215_BASE.BIT._PEID2215
#define EIBD215_GPID0215 EIBD215_BASE.BIT._GPID0215
#define EIBD215_GPID1215 EIBD215_BASE.BIT._GPID1215
#define EIBD215_GPID2215 EIBD215_BASE.BIT._GPID2215
#define EIBD215_BCP0215 EIBD215_BASE.BIT._BCP0215
#define EIBD215_BCP1215 EIBD215_BASE.BIT._BCP1215
#define EIBD215_BCP2215 EIBD215_BASE.BIT._BCP2215
#define EIBD215_CST EIBD215_BASE.BIT._CST
#define EIBD216 EIBD216_BASE.UINT32
#define EIBD216_PEID0216 EIBD216_BASE.BIT._PEID0216
#define EIBD216_PEID1216 EIBD216_BASE.BIT._PEID1216
#define EIBD216_PEID2216 EIBD216_BASE.BIT._PEID2216
#define EIBD216_GPID0216 EIBD216_BASE.BIT._GPID0216
#define EIBD216_GPID1216 EIBD216_BASE.BIT._GPID1216
#define EIBD216_GPID2216 EIBD216_BASE.BIT._GPID2216
#define EIBD216_BCP0216 EIBD216_BASE.BIT._BCP0216
#define EIBD216_BCP1216 EIBD216_BASE.BIT._BCP1216
#define EIBD216_BCP2216 EIBD216_BASE.BIT._BCP2216
#define EIBD216_CST EIBD216_BASE.BIT._CST
#define EIBD217 EIBD217_BASE.UINT32
#define EIBD217_PEID0217 EIBD217_BASE.BIT._PEID0217
#define EIBD217_PEID1217 EIBD217_BASE.BIT._PEID1217
#define EIBD217_PEID2217 EIBD217_BASE.BIT._PEID2217
#define EIBD217_GPID0217 EIBD217_BASE.BIT._GPID0217
#define EIBD217_GPID1217 EIBD217_BASE.BIT._GPID1217
#define EIBD217_GPID2217 EIBD217_BASE.BIT._GPID2217
#define EIBD217_BCP0217 EIBD217_BASE.BIT._BCP0217
#define EIBD217_BCP1217 EIBD217_BASE.BIT._BCP1217
#define EIBD217_BCP2217 EIBD217_BASE.BIT._BCP2217
#define EIBD217_CST EIBD217_BASE.BIT._CST
#define EIBD218 EIBD218_BASE.UINT32
#define EIBD218_PEID0218 EIBD218_BASE.BIT._PEID0218
#define EIBD218_PEID1218 EIBD218_BASE.BIT._PEID1218
#define EIBD218_PEID2218 EIBD218_BASE.BIT._PEID2218
#define EIBD218_GPID0218 EIBD218_BASE.BIT._GPID0218
#define EIBD218_GPID1218 EIBD218_BASE.BIT._GPID1218
#define EIBD218_GPID2218 EIBD218_BASE.BIT._GPID2218
#define EIBD218_BCP0218 EIBD218_BASE.BIT._BCP0218
#define EIBD218_BCP1218 EIBD218_BASE.BIT._BCP1218
#define EIBD218_BCP2218 EIBD218_BASE.BIT._BCP2218
#define EIBD218_CST EIBD218_BASE.BIT._CST
#define EIBD219 EIBD219_BASE.UINT32
#define EIBD219_PEID0219 EIBD219_BASE.BIT._PEID0219
#define EIBD219_PEID1219 EIBD219_BASE.BIT._PEID1219
#define EIBD219_PEID2219 EIBD219_BASE.BIT._PEID2219
#define EIBD219_GPID0219 EIBD219_BASE.BIT._GPID0219
#define EIBD219_GPID1219 EIBD219_BASE.BIT._GPID1219
#define EIBD219_GPID2219 EIBD219_BASE.BIT._GPID2219
#define EIBD219_BCP0219 EIBD219_BASE.BIT._BCP0219
#define EIBD219_BCP1219 EIBD219_BASE.BIT._BCP1219
#define EIBD219_BCP2219 EIBD219_BASE.BIT._BCP2219
#define EIBD219_CST EIBD219_BASE.BIT._CST
#define EIBD228 EIBD228_BASE.UINT32
#define EIBD228_PEID0228 EIBD228_BASE.BIT._PEID0228
#define EIBD228_PEID1228 EIBD228_BASE.BIT._PEID1228
#define EIBD228_PEID2228 EIBD228_BASE.BIT._PEID2228
#define EIBD228_GPID0228 EIBD228_BASE.BIT._GPID0228
#define EIBD228_GPID1228 EIBD228_BASE.BIT._GPID1228
#define EIBD228_GPID2228 EIBD228_BASE.BIT._GPID2228
#define EIBD228_BCP0228 EIBD228_BASE.BIT._BCP0228
#define EIBD228_BCP1228 EIBD228_BASE.BIT._BCP1228
#define EIBD228_BCP2228 EIBD228_BASE.BIT._BCP2228
#define EIBD228_CST EIBD228_BASE.BIT._CST
#define EIBD229 EIBD229_BASE.UINT32
#define EIBD229_PEID0229 EIBD229_BASE.BIT._PEID0229
#define EIBD229_PEID1229 EIBD229_BASE.BIT._PEID1229
#define EIBD229_PEID2229 EIBD229_BASE.BIT._PEID2229
#define EIBD229_GPID0229 EIBD229_BASE.BIT._GPID0229
#define EIBD229_GPID1229 EIBD229_BASE.BIT._GPID1229
#define EIBD229_GPID2229 EIBD229_BASE.BIT._GPID2229
#define EIBD229_BCP0229 EIBD229_BASE.BIT._BCP0229
#define EIBD229_BCP1229 EIBD229_BASE.BIT._BCP1229
#define EIBD229_BCP2229 EIBD229_BASE.BIT._BCP2229
#define EIBD229_CST EIBD229_BASE.BIT._CST
#define EIBD230 EIBD230_BASE.UINT32
#define EIBD230_PEID0230 EIBD230_BASE.BIT._PEID0230
#define EIBD230_PEID1230 EIBD230_BASE.BIT._PEID1230
#define EIBD230_PEID2230 EIBD230_BASE.BIT._PEID2230
#define EIBD230_GPID0230 EIBD230_BASE.BIT._GPID0230
#define EIBD230_GPID1230 EIBD230_BASE.BIT._GPID1230
#define EIBD230_GPID2230 EIBD230_BASE.BIT._GPID2230
#define EIBD230_BCP0230 EIBD230_BASE.BIT._BCP0230
#define EIBD230_BCP1230 EIBD230_BASE.BIT._BCP1230
#define EIBD230_BCP2230 EIBD230_BASE.BIT._BCP2230
#define EIBD230_CST EIBD230_BASE.BIT._CST
#define EIBD231 EIBD231_BASE.UINT32
#define EIBD231_PEID0231 EIBD231_BASE.BIT._PEID0231
#define EIBD231_PEID1231 EIBD231_BASE.BIT._PEID1231
#define EIBD231_PEID2231 EIBD231_BASE.BIT._PEID2231
#define EIBD231_GPID0231 EIBD231_BASE.BIT._GPID0231
#define EIBD231_GPID1231 EIBD231_BASE.BIT._GPID1231
#define EIBD231_GPID2231 EIBD231_BASE.BIT._GPID2231
#define EIBD231_BCP0231 EIBD231_BASE.BIT._BCP0231
#define EIBD231_BCP1231 EIBD231_BASE.BIT._BCP1231
#define EIBD231_BCP2231 EIBD231_BASE.BIT._BCP2231
#define EIBD231_CST EIBD231_BASE.BIT._CST
#define EIBD232 EIBD232_BASE.UINT32
#define EIBD232_PEID0232 EIBD232_BASE.BIT._PEID0232
#define EIBD232_PEID1232 EIBD232_BASE.BIT._PEID1232
#define EIBD232_PEID2232 EIBD232_BASE.BIT._PEID2232
#define EIBD232_GPID0232 EIBD232_BASE.BIT._GPID0232
#define EIBD232_GPID1232 EIBD232_BASE.BIT._GPID1232
#define EIBD232_GPID2232 EIBD232_BASE.BIT._GPID2232
#define EIBD232_BCP0232 EIBD232_BASE.BIT._BCP0232
#define EIBD232_BCP1232 EIBD232_BASE.BIT._BCP1232
#define EIBD232_BCP2232 EIBD232_BASE.BIT._BCP2232
#define EIBD232_CST EIBD232_BASE.BIT._CST
#define EIBD233 EIBD233_BASE.UINT32
#define EIBD233_PEID0233 EIBD233_BASE.BIT._PEID0233
#define EIBD233_PEID1233 EIBD233_BASE.BIT._PEID1233
#define EIBD233_PEID2233 EIBD233_BASE.BIT._PEID2233
#define EIBD233_GPID0233 EIBD233_BASE.BIT._GPID0233
#define EIBD233_GPID1233 EIBD233_BASE.BIT._GPID1233
#define EIBD233_GPID2233 EIBD233_BASE.BIT._GPID2233
#define EIBD233_BCP0233 EIBD233_BASE.BIT._BCP0233
#define EIBD233_BCP1233 EIBD233_BASE.BIT._BCP1233
#define EIBD233_BCP2233 EIBD233_BASE.BIT._BCP2233
#define EIBD233_CST EIBD233_BASE.BIT._CST
#define EIBD234 EIBD234_BASE.UINT32
#define EIBD234_PEID0234 EIBD234_BASE.BIT._PEID0234
#define EIBD234_PEID1234 EIBD234_BASE.BIT._PEID1234
#define EIBD234_PEID2234 EIBD234_BASE.BIT._PEID2234
#define EIBD234_GPID0234 EIBD234_BASE.BIT._GPID0234
#define EIBD234_GPID1234 EIBD234_BASE.BIT._GPID1234
#define EIBD234_GPID2234 EIBD234_BASE.BIT._GPID2234
#define EIBD234_BCP0234 EIBD234_BASE.BIT._BCP0234
#define EIBD234_BCP1234 EIBD234_BASE.BIT._BCP1234
#define EIBD234_BCP2234 EIBD234_BASE.BIT._BCP2234
#define EIBD234_CST EIBD234_BASE.BIT._CST
#define EIBD235 EIBD235_BASE.UINT32
#define EIBD235_PEID0235 EIBD235_BASE.BIT._PEID0235
#define EIBD235_PEID1235 EIBD235_BASE.BIT._PEID1235
#define EIBD235_PEID2235 EIBD235_BASE.BIT._PEID2235
#define EIBD235_GPID0235 EIBD235_BASE.BIT._GPID0235
#define EIBD235_GPID1235 EIBD235_BASE.BIT._GPID1235
#define EIBD235_GPID2235 EIBD235_BASE.BIT._GPID2235
#define EIBD235_BCP0235 EIBD235_BASE.BIT._BCP0235
#define EIBD235_BCP1235 EIBD235_BASE.BIT._BCP1235
#define EIBD235_BCP2235 EIBD235_BASE.BIT._BCP2235
#define EIBD235_CST EIBD235_BASE.BIT._CST
#define EIBD236 EIBD236_BASE.UINT32
#define EIBD236_PEID0236 EIBD236_BASE.BIT._PEID0236
#define EIBD236_PEID1236 EIBD236_BASE.BIT._PEID1236
#define EIBD236_PEID2236 EIBD236_BASE.BIT._PEID2236
#define EIBD236_GPID0236 EIBD236_BASE.BIT._GPID0236
#define EIBD236_GPID1236 EIBD236_BASE.BIT._GPID1236
#define EIBD236_GPID2236 EIBD236_BASE.BIT._GPID2236
#define EIBD236_BCP0236 EIBD236_BASE.BIT._BCP0236
#define EIBD236_BCP1236 EIBD236_BASE.BIT._BCP1236
#define EIBD236_BCP2236 EIBD236_BASE.BIT._BCP2236
#define EIBD236_CST EIBD236_BASE.BIT._CST
#define EIBD237 EIBD237_BASE.UINT32
#define EIBD237_PEID0237 EIBD237_BASE.BIT._PEID0237
#define EIBD237_PEID1237 EIBD237_BASE.BIT._PEID1237
#define EIBD237_PEID2237 EIBD237_BASE.BIT._PEID2237
#define EIBD237_GPID0237 EIBD237_BASE.BIT._GPID0237
#define EIBD237_GPID1237 EIBD237_BASE.BIT._GPID1237
#define EIBD237_GPID2237 EIBD237_BASE.BIT._GPID2237
#define EIBD237_BCP0237 EIBD237_BASE.BIT._BCP0237
#define EIBD237_BCP1237 EIBD237_BASE.BIT._BCP1237
#define EIBD237_BCP2237 EIBD237_BASE.BIT._BCP2237
#define EIBD237_CST EIBD237_BASE.BIT._CST
#define EIBD238 EIBD238_BASE.UINT32
#define EIBD238_PEID0238 EIBD238_BASE.BIT._PEID0238
#define EIBD238_PEID1238 EIBD238_BASE.BIT._PEID1238
#define EIBD238_PEID2238 EIBD238_BASE.BIT._PEID2238
#define EIBD238_GPID0238 EIBD238_BASE.BIT._GPID0238
#define EIBD238_GPID1238 EIBD238_BASE.BIT._GPID1238
#define EIBD238_GPID2238 EIBD238_BASE.BIT._GPID2238
#define EIBD238_BCP0238 EIBD238_BASE.BIT._BCP0238
#define EIBD238_BCP1238 EIBD238_BASE.BIT._BCP1238
#define EIBD238_BCP2238 EIBD238_BASE.BIT._BCP2238
#define EIBD238_CST EIBD238_BASE.BIT._CST
#define EIBD239 EIBD239_BASE.UINT32
#define EIBD239_PEID0239 EIBD239_BASE.BIT._PEID0239
#define EIBD239_PEID1239 EIBD239_BASE.BIT._PEID1239
#define EIBD239_PEID2239 EIBD239_BASE.BIT._PEID2239
#define EIBD239_GPID0239 EIBD239_BASE.BIT._GPID0239
#define EIBD239_GPID1239 EIBD239_BASE.BIT._GPID1239
#define EIBD239_GPID2239 EIBD239_BASE.BIT._GPID2239
#define EIBD239_BCP0239 EIBD239_BASE.BIT._BCP0239
#define EIBD239_BCP1239 EIBD239_BASE.BIT._BCP1239
#define EIBD239_BCP2239 EIBD239_BASE.BIT._BCP2239
#define EIBD239_CST EIBD239_BASE.BIT._CST
#define EIBD240 EIBD240_BASE.UINT32
#define EIBD240_PEID0240 EIBD240_BASE.BIT._PEID0240
#define EIBD240_PEID1240 EIBD240_BASE.BIT._PEID1240
#define EIBD240_PEID2240 EIBD240_BASE.BIT._PEID2240
#define EIBD240_GPID0240 EIBD240_BASE.BIT._GPID0240
#define EIBD240_GPID1240 EIBD240_BASE.BIT._GPID1240
#define EIBD240_GPID2240 EIBD240_BASE.BIT._GPID2240
#define EIBD240_BCP0240 EIBD240_BASE.BIT._BCP0240
#define EIBD240_BCP1240 EIBD240_BASE.BIT._BCP1240
#define EIBD240_BCP2240 EIBD240_BASE.BIT._BCP2240
#define EIBD240_CST EIBD240_BASE.BIT._CST
#define EIBD241 EIBD241_BASE.UINT32
#define EIBD241_PEID0241 EIBD241_BASE.BIT._PEID0241
#define EIBD241_PEID1241 EIBD241_BASE.BIT._PEID1241
#define EIBD241_PEID2241 EIBD241_BASE.BIT._PEID2241
#define EIBD241_GPID0241 EIBD241_BASE.BIT._GPID0241
#define EIBD241_GPID1241 EIBD241_BASE.BIT._GPID1241
#define EIBD241_GPID2241 EIBD241_BASE.BIT._GPID2241
#define EIBD241_BCP0241 EIBD241_BASE.BIT._BCP0241
#define EIBD241_BCP1241 EIBD241_BASE.BIT._BCP1241
#define EIBD241_BCP2241 EIBD241_BASE.BIT._BCP2241
#define EIBD241_CST EIBD241_BASE.BIT._CST
#define EIBD242 EIBD242_BASE.UINT32
#define EIBD242_PEID0242 EIBD242_BASE.BIT._PEID0242
#define EIBD242_PEID1242 EIBD242_BASE.BIT._PEID1242
#define EIBD242_PEID2242 EIBD242_BASE.BIT._PEID2242
#define EIBD242_GPID0242 EIBD242_BASE.BIT._GPID0242
#define EIBD242_GPID1242 EIBD242_BASE.BIT._GPID1242
#define EIBD242_GPID2242 EIBD242_BASE.BIT._GPID2242
#define EIBD242_BCP0242 EIBD242_BASE.BIT._BCP0242
#define EIBD242_BCP1242 EIBD242_BASE.BIT._BCP1242
#define EIBD242_BCP2242 EIBD242_BASE.BIT._BCP2242
#define EIBD242_CST EIBD242_BASE.BIT._CST
#define EIBD243 EIBD243_BASE.UINT32
#define EIBD243_PEID0243 EIBD243_BASE.BIT._PEID0243
#define EIBD243_PEID1243 EIBD243_BASE.BIT._PEID1243
#define EIBD243_PEID2243 EIBD243_BASE.BIT._PEID2243
#define EIBD243_GPID0243 EIBD243_BASE.BIT._GPID0243
#define EIBD243_GPID1243 EIBD243_BASE.BIT._GPID1243
#define EIBD243_GPID2243 EIBD243_BASE.BIT._GPID2243
#define EIBD243_BCP0243 EIBD243_BASE.BIT._BCP0243
#define EIBD243_BCP1243 EIBD243_BASE.BIT._BCP1243
#define EIBD243_BCP2243 EIBD243_BASE.BIT._BCP2243
#define EIBD243_CST EIBD243_BASE.BIT._CST
#define EIBD244 EIBD244_BASE.UINT32
#define EIBD244_PEID0244 EIBD244_BASE.BIT._PEID0244
#define EIBD244_PEID1244 EIBD244_BASE.BIT._PEID1244
#define EIBD244_PEID2244 EIBD244_BASE.BIT._PEID2244
#define EIBD244_GPID0244 EIBD244_BASE.BIT._GPID0244
#define EIBD244_GPID1244 EIBD244_BASE.BIT._GPID1244
#define EIBD244_GPID2244 EIBD244_BASE.BIT._GPID2244
#define EIBD244_BCP0244 EIBD244_BASE.BIT._BCP0244
#define EIBD244_BCP1244 EIBD244_BASE.BIT._BCP1244
#define EIBD244_BCP2244 EIBD244_BASE.BIT._BCP2244
#define EIBD244_CST EIBD244_BASE.BIT._CST

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif