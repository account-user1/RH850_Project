#ifndef __DR7F701373_ADCF1_HEADER__
#define __DR7F701373_ADCF1_HEADER__



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
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR0Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR1Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR2Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR3Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR4Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR5Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR6Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR7Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR8Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR9Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR10Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR11Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR12Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR13Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR14Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR15Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR16Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR17Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR18Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR19Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR20Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR21Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR22Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR23Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR24Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR25Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR26Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR27Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR28Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR29Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR30Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR31Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR32Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR33Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR34Bits_t;

typedef struct
{
    uint32 _GCTRL : 5;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 _ADIE : 1;
    uint32 padding8 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 padding12 : 1;
    uint32 _CNVCLS : 3;
    uint32 _PDE : 1;
    uint32 _PUE : 1;
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
} ADCF1VCR35Bits_t;

typedef struct
{
    const uint32 _DR0 : 16;
    const uint32 _DR1 : 16;
} ADCF1DR00Bits_t;

typedef struct
{
    const uint32 _DR2 : 16;
    const uint32 _DR3 : 16;
} ADCF1DR02Bits_t;

typedef struct
{
    const uint32 _DR4 : 16;
    const uint32 _DR5 : 16;
} ADCF1DR04Bits_t;

typedef struct
{
    const uint32 _DR6 : 16;
    const uint32 _DR7 : 16;
} ADCF1DR06Bits_t;

typedef struct
{
    const uint32 _DR8 : 16;
    const uint32 _DR9 : 16;
} ADCF1DR08Bits_t;

typedef struct
{
    const uint32 _DR10 : 16;
    const uint32 _DR11 : 16;
} ADCF1DR10Bits_t;

typedef struct
{
    const uint32 _DR12 : 16;
    const uint32 _DR13 : 16;
} ADCF1DR12Bits_t;

typedef struct
{
    const uint32 _DR14 : 16;
    const uint32 _DR15 : 16;
} ADCF1DR14Bits_t;

typedef struct
{
    const uint32 _DR16 : 16;
    const uint32 _DR17 : 16;
} ADCF1DR16Bits_t;

typedef struct
{
    const uint32 _DR18 : 16;
    const uint32 _DR19 : 16;
} ADCF1DR18Bits_t;

typedef struct
{
    const uint32 _DR20 : 16;
    const uint32 _DR21 : 16;
} ADCF1DR20Bits_t;

typedef struct
{
    const uint32 _DR22 : 16;
    const uint32 _DR23 : 16;
} ADCF1DR22Bits_t;

typedef struct
{
    const uint32 _DR24 : 16;
    const uint32 _DR25 : 16;
} ADCF1DR24Bits_t;

typedef struct
{
    const uint32 _DR26 : 16;
    const uint32 _DR27 : 16;
} ADCF1DR26Bits_t;

typedef struct
{
    const uint32 _DR28 : 16;
    const uint32 _DR29 : 16;
} ADCF1DR28Bits_t;

typedef struct
{
    const uint32 _DR30 : 16;
    const uint32 _DR31 : 16;
} ADCF1DR30Bits_t;

typedef struct
{
    const uint32 _DR32 : 16;
    const uint32 _DR33 : 16;
} ADCF1DR32Bits_t;

typedef struct
{
    const uint32 _DR34 : 16;
    const uint32 _DR35 : 16;
} ADCF1DR34Bits_t;

typedef struct
{
    const uint32 _DR0 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR0Bits_t;

typedef struct
{
    const uint32 _DR1 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR1Bits_t;

typedef struct
{
    const uint32 _DR2 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR2Bits_t;

typedef struct
{
    const uint32 _DR3 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR3Bits_t;

typedef struct
{
    const uint32 _DR4 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR4Bits_t;

typedef struct
{
    const uint32 _DR5 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR5Bits_t;

typedef struct
{
    const uint32 _ADCF1DIR6 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR6Bits_t;

typedef struct
{
    const uint32 _DR7 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR7Bits_t;

typedef struct
{
    const uint32 _DR8 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR8Bits_t;

typedef struct
{
    const uint32 _DR9 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR9Bits_t;

typedef struct
{
    const uint32 _DR10 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR10Bits_t;

typedef struct
{
    const uint32 _DR11 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR11Bits_t;

typedef struct
{
    const uint32 _DR12 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR12Bits_t;

typedef struct
{
    const uint32 _DR13 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR13Bits_t;

typedef struct
{
    const uint32 _DR14 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR14Bits_t;

typedef struct
{
    const uint32 _DR15 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR15Bits_t;

typedef struct
{
    const uint32 _DR16 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR16Bits_t;

typedef struct
{
    const uint32 _DR17 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR17Bits_t;

typedef struct
{
    const uint32 _DR18 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR18Bits_t;

typedef struct
{
    const uint32 _DR19 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR19Bits_t;

typedef struct
{
    const uint32 _DR20 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR20Bits_t;

typedef struct
{
    const uint32 _DR21 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR21Bits_t;

typedef struct
{
    const uint32 _DR22 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR22Bits_t;

typedef struct
{
    const uint32 _DR23 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR23Bits_t;

typedef struct
{
    const uint32 _DR24 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR24Bits_t;

typedef struct
{
    const uint32 _DR25 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR25Bits_t;

typedef struct
{
    const uint32 _DR26 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR26Bits_t;

typedef struct
{
    const uint32 _DR27 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR27Bits_t;

typedef struct
{
    const uint32 _DR28 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR28Bits_t;

typedef struct
{
    const uint32 _DR29 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR29Bits_t;

typedef struct
{
    const uint32 _DR30 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR30Bits_t;

typedef struct
{
    const uint32 _DR31 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR31Bits_t;

typedef struct
{
    const uint32 _DR32 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR32Bits_t;

typedef struct
{
    const uint32 _DR33 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR33Bits_t;

typedef struct
{
    const uint32 _DR34 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR34Bits_t;

typedef struct
{
    const uint32 _DR35 : 16;
    const uint32 _ID : 5;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _PRTY : 1;
    const uint32 _WFLG : 1;
    uint32 padding26 : 1;
    uint32 padding27 : 1;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} ADCF1DIR35Bits_t;

typedef struct
{
    uint8 _HALT : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADHALTRBits_t;

typedef struct
{
    uint8 _SUSMTD : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADCR1Bits_t;

typedef struct
{
    uint8 _MSKCFMT0 : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1MPXCURCRBits_t;

typedef struct
{
    const uint32 _MPXCUR : 4;
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
    const uint32 _MSKC : 4;
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
} ADCF1MPXCURRBits_t;

typedef struct
{
    uint8 _MPXOW : 4;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1MPXOWRBits_t;

typedef struct
{
    uint8 _ADDNT : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _DFMT : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADCR2Bits_t;

typedef struct
{
    uint8 _ENDP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADENDP0Bits_t;

typedef struct
{
    uint8 _IDEIE : 1;
    uint8 _PEIE : 1;
    uint8 _OWEIE : 1;
    uint8 _ULEIE : 1;
    uint8 _RDCLRE : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SFTCRBits_t;

typedef struct
{
    uint8 _TDLV : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 _TDE : 1;
} ADCF1TDCRBits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF1ULLMTBR0Bits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF1ULLMTBR1Bits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF1ULLMTBR2Bits_t;

typedef struct
{
    uint8 _IDEC : 1;
    uint8 _PEC : 1;
    uint8 _OWEC : 1;
    uint8 _ULEC : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ECRBits_t;

typedef struct
{
    const uint8 _ULECAP : 6;
    uint8 padding6 : 1;
    const uint8 _ULE : 1;
} ADCF1ULERBits_t;

typedef struct
{
    const uint8 _OWECAP : 6;
    uint8 padding6 : 1;
    const uint8 _OWE : 1;
} ADCF1OWERBits_t;

typedef struct
{
    const uint8 _PECAP : 6;
    uint8 padding6 : 1;
    const uint8 _PE : 1;
} ADCF1PERBits_t;

typedef struct
{
    const uint8 _IDECAP : 6;
    uint8 padding6 : 1;
    const uint8 _IDE : 1;
} ADCF1IDERBits_t;

typedef struct
{
    uint8 _SGST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSTCR0Bits_t;

typedef struct
{
    uint8 _TRGMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _ADIE : 1;
    uint8 _SCANMD : 1;
    uint8 _ADSTARTE : 1;
    uint8 padding7 : 1;
} ADCF1SGCR0Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCSP0Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCEP0Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF1SGMCYCR0Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    const uint8 _SGACT : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSR0Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ULLMSR0Bits_t;

typedef struct
{
    uint8 _SGST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSTCR1Bits_t;

typedef struct
{
    uint8 _TRGMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _ADIE : 1;
    uint8 _SCANMD : 1;
    uint8 _ADSTARTE : 1;
    uint8 padding7 : 1;
} ADCF1SGCR1Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCSP1Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCEP1Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF1SGMCYCR1Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    const uint8 _SGACT : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSR1Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ULLMSR1Bits_t;

typedef struct
{
    uint8 _SGST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSTCR2Bits_t;

typedef struct
{
    uint8 _TRGMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _ADIE : 1;
    uint8 _SCANMD : 1;
    uint8 _ADSTARTE : 1;
    uint8 padding7 : 1;
} ADCF1SGCR2Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCSP2Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCEP2Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF1SGMCYCR2Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    const uint8 _SGACT : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSR2Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ULLMSR2Bits_t;

typedef struct
{
    uint8 _SGST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSTCR3Bits_t;

typedef struct
{
    uint8 _ADTST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADTSTCR3Bits_t;

typedef struct
{
    uint8 _ADTEND : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADTENDCR3Bits_t;

typedef struct
{
    uint8 _TRGMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _ADIE : 1;
    uint8 _SCANMD : 1;
    uint8 _ADSTARTE : 1;
    uint8 padding7 : 1;
} ADCF1SGCR3Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCSP3Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCEP3Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF1SGMCYCR3Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    const uint8 _SGACT : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSR3Bits_t;

typedef struct
{
    uint32 _ADTIP : 21;
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
} ADCF1ADTIPR3Bits_t;

typedef struct
{
    uint32 _ADTPR : 21;
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
} ADCF1ADTPRR3Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ULLMSR3Bits_t;

typedef struct
{
    uint8 _SGST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSTCR4Bits_t;

typedef struct
{
    uint8 _ADTST : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADTSTCR4Bits_t;

typedef struct
{
    uint8 _ADTEND : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ADTENDCR4Bits_t;

typedef struct
{
    uint8 _TRGMD : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 _ADIE : 1;
    uint8 _SCANMD : 1;
    uint8 _ADSTARTE : 1;
    uint8 padding7 : 1;
} ADCF1SGCR4Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCSP4Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGVCEP4Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF1SGMCYCR4Bits_t;

typedef struct
{
    uint8 padding0 : 1;
    const uint8 _SGACT : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1SGSR4Bits_t;

typedef struct
{
    uint32 _ADTIP : 21;
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
} ADCF1ADTIPR4Bits_t;

typedef struct
{
    uint32 _ADTPR : 21;
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
} ADCF1ADTPRR4Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF1ULLMSR4Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ADCF1VCR0Bits_t BIT;
} ADCF1VCR0_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR1Bits_t BIT;
} ADCF1VCR1_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR2Bits_t BIT;
} ADCF1VCR2_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR3Bits_t BIT;
} ADCF1VCR3_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR4Bits_t BIT;
} ADCF1VCR4_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR5Bits_t BIT;
} ADCF1VCR5_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR6Bits_t BIT;
} ADCF1VCR6_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR7Bits_t BIT;
} ADCF1VCR7_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR8Bits_t BIT;
} ADCF1VCR8_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR9Bits_t BIT;
} ADCF1VCR9_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR10Bits_t BIT;
} ADCF1VCR10_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR11Bits_t BIT;
} ADCF1VCR11_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR12Bits_t BIT;
} ADCF1VCR12_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR13Bits_t BIT;
} ADCF1VCR13_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR14Bits_t BIT;
} ADCF1VCR14_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR15Bits_t BIT;
} ADCF1VCR15_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR16Bits_t BIT;
} ADCF1VCR16_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR17Bits_t BIT;
} ADCF1VCR17_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR18Bits_t BIT;
} ADCF1VCR18_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR19Bits_t BIT;
} ADCF1VCR19_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR20Bits_t BIT;
} ADCF1VCR20_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR21Bits_t BIT;
} ADCF1VCR21_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR22Bits_t BIT;
} ADCF1VCR22_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR23Bits_t BIT;
} ADCF1VCR23_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR24Bits_t BIT;
} ADCF1VCR24_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR25Bits_t BIT;
} ADCF1VCR25_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR26Bits_t BIT;
} ADCF1VCR26_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR27Bits_t BIT;
} ADCF1VCR27_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR28Bits_t BIT;
} ADCF1VCR28_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR29Bits_t BIT;
} ADCF1VCR29_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR30Bits_t BIT;
} ADCF1VCR30_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR31Bits_t BIT;
} ADCF1VCR31_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR32Bits_t BIT;
} ADCF1VCR32_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR33Bits_t BIT;
} ADCF1VCR33_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR34Bits_t BIT;
} ADCF1VCR34_t;

typedef union
{
    uint32 UINT32;
    ADCF1VCR35Bits_t BIT;
} ADCF1VCR35_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR00Bits_t BIT;
} ADCF1DR00_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR02Bits_t BIT;
} ADCF1DR02_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR04Bits_t BIT;
} ADCF1DR04_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR06Bits_t BIT;
} ADCF1DR06_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR08Bits_t BIT;
} ADCF1DR08_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR10Bits_t BIT;
} ADCF1DR10_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR12Bits_t BIT;
} ADCF1DR12_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR14Bits_t BIT;
} ADCF1DR14_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR16Bits_t BIT;
} ADCF1DR16_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR18Bits_t BIT;
} ADCF1DR18_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR20Bits_t BIT;
} ADCF1DR20_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR22Bits_t BIT;
} ADCF1DR22_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR24Bits_t BIT;
} ADCF1DR24_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR26Bits_t BIT;
} ADCF1DR26_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR28Bits_t BIT;
} ADCF1DR28_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR30Bits_t BIT;
} ADCF1DR30_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR32Bits_t BIT;
} ADCF1DR32_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DR34Bits_t BIT;
} ADCF1DR34_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR0Bits_t BIT;
} ADCF1DIR0_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR1Bits_t BIT;
} ADCF1DIR1_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR2Bits_t BIT;
} ADCF1DIR2_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR3Bits_t BIT;
} ADCF1DIR3_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR4Bits_t BIT;
} ADCF1DIR4_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR5Bits_t BIT;
} ADCF1DIR5_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR6Bits_t BIT;
} ADCF1DIR6_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR7Bits_t BIT;
} ADCF1DIR7_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR8Bits_t BIT;
} ADCF1DIR8_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR9Bits_t BIT;
} ADCF1DIR9_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR10Bits_t BIT;
} ADCF1DIR10_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR11Bits_t BIT;
} ADCF1DIR11_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR12Bits_t BIT;
} ADCF1DIR12_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR13Bits_t BIT;
} ADCF1DIR13_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR14Bits_t BIT;
} ADCF1DIR14_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR15Bits_t BIT;
} ADCF1DIR15_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR16Bits_t BIT;
} ADCF1DIR16_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR17Bits_t BIT;
} ADCF1DIR17_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR18Bits_t BIT;
} ADCF1DIR18_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR19Bits_t BIT;
} ADCF1DIR19_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR20Bits_t BIT;
} ADCF1DIR20_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR21Bits_t BIT;
} ADCF1DIR21_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR22Bits_t BIT;
} ADCF1DIR22_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR23Bits_t BIT;
} ADCF1DIR23_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR24Bits_t BIT;
} ADCF1DIR24_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR25Bits_t BIT;
} ADCF1DIR25_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR26Bits_t BIT;
} ADCF1DIR26_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR27Bits_t BIT;
} ADCF1DIR27_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR28Bits_t BIT;
} ADCF1DIR28_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR29Bits_t BIT;
} ADCF1DIR29_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR30Bits_t BIT;
} ADCF1DIR30_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR31Bits_t BIT;
} ADCF1DIR31_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR32Bits_t BIT;
} ADCF1DIR32_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR33Bits_t BIT;
} ADCF1DIR33_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR34Bits_t BIT;
} ADCF1DIR34_t;

typedef union
{
    uint32 UINT32;
    const ADCF1DIR35Bits_t BIT;
} ADCF1DIR35_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADHALTRBits_t BIT;
} ADCF1ADHALTR_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADCR1Bits_t BIT;
} ADCF1ADCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF1MPXCURCRBits_t BIT;
} ADCF1MPXCURCR_t;

typedef union
{
    uint32 UINT32;
    const ADCF1MPXCURRBits_t BIT;
} ADCF1MPXCURR_t;

typedef union
{
    uint8 UINT8;
    ADCF1MPXOWRBits_t BIT;
} ADCF1MPXOWR_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADCR2Bits_t BIT;
} ADCF1ADCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADENDP0Bits_t BIT;
} ADCF1ADENDP0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SFTCRBits_t BIT;
} ADCF1SFTCR_t;

typedef union
{
    uint8 UINT8;
    ADCF1TDCRBits_t BIT;
} ADCF1TDCR_t;

typedef union
{
    uint32 UINT32;
    ADCF1ULLMTBR0Bits_t BIT;
} ADCF1ULLMTBR0_t;

typedef union
{
    uint32 UINT32;
    ADCF1ULLMTBR1Bits_t BIT;
} ADCF1ULLMTBR1_t;

typedef union
{
    uint32 UINT32;
    ADCF1ULLMTBR2Bits_t BIT;
} ADCF1ULLMTBR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1ECRBits_t BIT;
} ADCF1ECR_t;

typedef union
{
    uint8 UINT8;
    const ADCF1ULERBits_t BIT;
} ADCF1ULER_t;

typedef union
{
    uint8 UINT8;
    const ADCF1OWERBits_t BIT;
} ADCF1OWER_t;

typedef union
{
    uint8 UINT8;
    const ADCF1PERBits_t BIT;
} ADCF1PER_t;

typedef union
{
    uint8 UINT8;
    const ADCF1IDERBits_t BIT;
} ADCF1IDER_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGSTCR0Bits_t BIT;
} ADCF1SGSTCR0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGCR0Bits_t BIT;
} ADCF1SGCR0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCSP0Bits_t BIT;
} ADCF1SGVCSP0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCEP0Bits_t BIT;
} ADCF1SGVCEP0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGMCYCR0Bits_t BIT;
} ADCF1SGMCYCR0_t;

typedef union
{
    uint8 UINT8;
    const ADCF1SGSR0Bits_t BIT;
} ADCF1SGSR0_t;

typedef union
{
    uint8 UINT8;
    ADCF1ULLMSR0Bits_t BIT;
} ADCF1ULLMSR0_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGSTCR1Bits_t BIT;
} ADCF1SGSTCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGCR1Bits_t BIT;
} ADCF1SGCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCSP1Bits_t BIT;
} ADCF1SGVCSP1_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCEP1Bits_t BIT;
} ADCF1SGVCEP1_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGMCYCR1Bits_t BIT;
} ADCF1SGMCYCR1_t;

typedef union
{
    uint8 UINT8;
    const ADCF1SGSR1Bits_t BIT;
} ADCF1SGSR1_t;

typedef union
{
    uint8 UINT8;
    ADCF1ULLMSR1Bits_t BIT;
} ADCF1ULLMSR1_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGSTCR2Bits_t BIT;
} ADCF1SGSTCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGCR2Bits_t BIT;
} ADCF1SGCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCSP2Bits_t BIT;
} ADCF1SGVCSP2_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCEP2Bits_t BIT;
} ADCF1SGVCEP2_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGMCYCR2Bits_t BIT;
} ADCF1SGMCYCR2_t;

typedef union
{
    uint8 UINT8;
    const ADCF1SGSR2Bits_t BIT;
} ADCF1SGSR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1ULLMSR2Bits_t BIT;
} ADCF1ULLMSR2_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGSTCR3Bits_t BIT;
} ADCF1SGSTCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADTSTCR3Bits_t BIT;
} ADCF1ADTSTCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADTENDCR3Bits_t BIT;
} ADCF1ADTENDCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGCR3Bits_t BIT;
} ADCF1SGCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCSP3Bits_t BIT;
} ADCF1SGVCSP3_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCEP3Bits_t BIT;
} ADCF1SGVCEP3_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGMCYCR3Bits_t BIT;
} ADCF1SGMCYCR3_t;

typedef union
{
    uint8 UINT8;
    const ADCF1SGSR3Bits_t BIT;
} ADCF1SGSR3_t;

typedef union
{
    uint32 UINT32;
    ADCF1ADTIPR3Bits_t BIT;
} ADCF1ADTIPR3_t;

typedef union
{
    uint32 UINT32;
    ADCF1ADTPRR3Bits_t BIT;
} ADCF1ADTPRR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1ULLMSR3Bits_t BIT;
} ADCF1ULLMSR3_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGSTCR4Bits_t BIT;
} ADCF1SGSTCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADTSTCR4Bits_t BIT;
} ADCF1ADTSTCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF1ADTENDCR4Bits_t BIT;
} ADCF1ADTENDCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGCR4Bits_t BIT;
} ADCF1SGCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCSP4Bits_t BIT;
} ADCF1SGVCSP4_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGVCEP4Bits_t BIT;
} ADCF1SGVCEP4_t;

typedef union
{
    uint8 UINT8;
    ADCF1SGMCYCR4Bits_t BIT;
} ADCF1SGMCYCR4_t;

typedef union
{
    uint8 UINT8;
    const ADCF1SGSR4Bits_t BIT;
} ADCF1SGSR4_t;

typedef union
{
    uint32 UINT32;
    ADCF1ADTIPR4Bits_t BIT;
} ADCF1ADTIPR4_t;

typedef union
{
    uint32 UINT32;
    ADCF1ADTPRR4Bits_t BIT;
} ADCF1ADTPRR4_t;

typedef union
{
    uint8 UINT8;
    ADCF1ULLMSR4Bits_t BIT;
} ADCF1ULLMSR4_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ADCF1VCR0_BASE, 0xFFF92000, __READ_WRITE, ADCF1VCR0_t);
__IOREG(ADCF1VCR1_BASE, 0xFFF92004, __READ_WRITE, ADCF1VCR1_t);
__IOREG(ADCF1VCR2_BASE, 0xFFF92008, __READ_WRITE, ADCF1VCR2_t);
__IOREG(ADCF1VCR3_BASE, 0xFFF9200C, __READ_WRITE, ADCF1VCR3_t);
__IOREG(ADCF1VCR4_BASE, 0xFFF92010, __READ_WRITE, ADCF1VCR4_t);
__IOREG(ADCF1VCR5_BASE, 0xFFF92014, __READ_WRITE, ADCF1VCR5_t);
__IOREG(ADCF1VCR6_BASE, 0xFFF92018, __READ_WRITE, ADCF1VCR6_t);
__IOREG(ADCF1VCR7_BASE, 0xFFF9201C, __READ_WRITE, ADCF1VCR7_t);
__IOREG(ADCF1VCR8_BASE, 0xFFF92020, __READ_WRITE, ADCF1VCR8_t);
__IOREG(ADCF1VCR9_BASE, 0xFFF92024, __READ_WRITE, ADCF1VCR9_t);
__IOREG(ADCF1VCR10_BASE, 0xFFF92028, __READ_WRITE, ADCF1VCR10_t);
__IOREG(ADCF1VCR11_BASE, 0xFFF9202C, __READ_WRITE, ADCF1VCR11_t);
__IOREG(ADCF1VCR12_BASE, 0xFFF92030, __READ_WRITE, ADCF1VCR12_t);
__IOREG(ADCF1VCR13_BASE, 0xFFF92034, __READ_WRITE, ADCF1VCR13_t);
__IOREG(ADCF1VCR14_BASE, 0xFFF92038, __READ_WRITE, ADCF1VCR14_t);
__IOREG(ADCF1VCR15_BASE, 0xFFF9203C, __READ_WRITE, ADCF1VCR15_t);
__IOREG(ADCF1VCR16_BASE, 0xFFF92040, __READ_WRITE, ADCF1VCR16_t);
__IOREG(ADCF1VCR17_BASE, 0xFFF92044, __READ_WRITE, ADCF1VCR17_t);
__IOREG(ADCF1VCR18_BASE, 0xFFF92048, __READ_WRITE, ADCF1VCR18_t);
__IOREG(ADCF1VCR19_BASE, 0xFFF9204C, __READ_WRITE, ADCF1VCR19_t);
__IOREG(ADCF1VCR20_BASE, 0xFFF92050, __READ_WRITE, ADCF1VCR20_t);
__IOREG(ADCF1VCR21_BASE, 0xFFF92054, __READ_WRITE, ADCF1VCR21_t);
__IOREG(ADCF1VCR22_BASE, 0xFFF92058, __READ_WRITE, ADCF1VCR22_t);
__IOREG(ADCF1VCR23_BASE, 0xFFF9205C, __READ_WRITE, ADCF1VCR23_t);
__IOREG(ADCF1VCR24_BASE, 0xFFF92060, __READ_WRITE, ADCF1VCR24_t);
__IOREG(ADCF1VCR25_BASE, 0xFFF92064, __READ_WRITE, ADCF1VCR25_t);
__IOREG(ADCF1VCR26_BASE, 0xFFF92068, __READ_WRITE, ADCF1VCR26_t);
__IOREG(ADCF1VCR27_BASE, 0xFFF9206C, __READ_WRITE, ADCF1VCR27_t);
__IOREG(ADCF1VCR28_BASE, 0xFFF92070, __READ_WRITE, ADCF1VCR28_t);
__IOREG(ADCF1VCR29_BASE, 0xFFF92074, __READ_WRITE, ADCF1VCR29_t);
__IOREG(ADCF1VCR30_BASE, 0xFFF92078, __READ_WRITE, ADCF1VCR30_t);
__IOREG(ADCF1VCR31_BASE, 0xFFF9207C, __READ_WRITE, ADCF1VCR31_t);
__IOREG(ADCF1VCR32_BASE, 0xFFF92080, __READ_WRITE, ADCF1VCR32_t);
__IOREG(ADCF1VCR33_BASE, 0xFFF92084, __READ_WRITE, ADCF1VCR33_t);
__IOREG(ADCF1VCR34_BASE, 0xFFF92088, __READ_WRITE, ADCF1VCR34_t);
__IOREG(ADCF1VCR35_BASE, 0xFFF9208C, __READ_WRITE, ADCF1VCR35_t);
__IOREG(ADCF1DR00_BASE, 0xFFF92100, __READ, ADCF1DR00_t);
__IOREG(ADCF1DR02_BASE, 0xFFF92104, __READ, ADCF1DR02_t);
__IOREG(ADCF1DR04_BASE, 0xFFF92108, __READ, ADCF1DR04_t);
__IOREG(ADCF1DR06_BASE, 0xFFF9210C, __READ, ADCF1DR06_t);
__IOREG(ADCF1DR08_BASE, 0xFFF92110, __READ, ADCF1DR08_t);
__IOREG(ADCF1DR10_BASE, 0xFFF92114, __READ, ADCF1DR10_t);
__IOREG(ADCF1DR12_BASE, 0xFFF92118, __READ, ADCF1DR12_t);
__IOREG(ADCF1DR14_BASE, 0xFFF9211C, __READ, ADCF1DR14_t);
__IOREG(ADCF1DR16_BASE, 0xFFF92120, __READ, ADCF1DR16_t);
__IOREG(ADCF1DR18_BASE, 0xFFF92124, __READ, ADCF1DR18_t);
__IOREG(ADCF1DR20_BASE, 0xFFF92128, __READ, ADCF1DR20_t);
__IOREG(ADCF1DR22_BASE, 0xFFF9212C, __READ, ADCF1DR22_t);
__IOREG(ADCF1DR24_BASE, 0xFFF92130, __READ, ADCF1DR24_t);
__IOREG(ADCF1DR26_BASE, 0xFFF92134, __READ, ADCF1DR26_t);
__IOREG(ADCF1DR28_BASE, 0xFFF92138, __READ, ADCF1DR28_t);
__IOREG(ADCF1DR30_BASE, 0xFFF9213C, __READ, ADCF1DR30_t);
__IOREG(ADCF1DR32_BASE, 0xFFF92140, __READ, ADCF1DR32_t);
__IOREG(ADCF1DR34_BASE, 0xFFF92144, __READ, ADCF1DR34_t);
__IOREG(ADCF1DIR0_BASE, 0xFFF92200, __READ, ADCF1DIR0_t);
__IOREG(ADCF1DIR1_BASE, 0xFFF92204, __READ, ADCF1DIR1_t);
__IOREG(ADCF1DIR2_BASE, 0xFFF92208, __READ, ADCF1DIR2_t);
__IOREG(ADCF1DIR3_BASE, 0xFFF9220C, __READ, ADCF1DIR3_t);
__IOREG(ADCF1DIR4_BASE, 0xFFF92210, __READ, ADCF1DIR4_t);
__IOREG(ADCF1DIR5_BASE, 0xFFF92214, __READ, ADCF1DIR5_t);
__IOREG(ADCF1DIR6_BASE, 0xFFF92218, __READ, ADCF1DIR6_t);
__IOREG(ADCF1DIR7_BASE, 0xFFF9221C, __READ, ADCF1DIR7_t);
__IOREG(ADCF1DIR8_BASE, 0xFFF92220, __READ, ADCF1DIR8_t);
__IOREG(ADCF1DIR9_BASE, 0xFFF92224, __READ, ADCF1DIR9_t);
__IOREG(ADCF1DIR10_BASE, 0xFFF92228, __READ, ADCF1DIR10_t);
__IOREG(ADCF1DIR11_BASE, 0xFFF9222C, __READ, ADCF1DIR11_t);
__IOREG(ADCF1DIR12_BASE, 0xFFF92230, __READ, ADCF1DIR12_t);
__IOREG(ADCF1DIR13_BASE, 0xFFF92234, __READ, ADCF1DIR13_t);
__IOREG(ADCF1DIR14_BASE, 0xFFF92238, __READ, ADCF1DIR14_t);
__IOREG(ADCF1DIR15_BASE, 0xFFF9223C, __READ, ADCF1DIR15_t);
__IOREG(ADCF1DIR16_BASE, 0xFFF92240, __READ, ADCF1DIR16_t);
__IOREG(ADCF1DIR17_BASE, 0xFFF92244, __READ, ADCF1DIR17_t);
__IOREG(ADCF1DIR18_BASE, 0xFFF92248, __READ, ADCF1DIR18_t);
__IOREG(ADCF1DIR19_BASE, 0xFFF9224C, __READ, ADCF1DIR19_t);
__IOREG(ADCF1DIR20_BASE, 0xFFF92250, __READ, ADCF1DIR20_t);
__IOREG(ADCF1DIR21_BASE, 0xFFF92254, __READ, ADCF1DIR21_t);
__IOREG(ADCF1DIR22_BASE, 0xFFF92258, __READ, ADCF1DIR22_t);
__IOREG(ADCF1DIR23_BASE, 0xFFF9225C, __READ, ADCF1DIR23_t);
__IOREG(ADCF1DIR24_BASE, 0xFFF92260, __READ, ADCF1DIR24_t);
__IOREG(ADCF1DIR25_BASE, 0xFFF92264, __READ, ADCF1DIR25_t);
__IOREG(ADCF1DIR26_BASE, 0xFFF92268, __READ, ADCF1DIR26_t);
__IOREG(ADCF1DIR27_BASE, 0xFFF9226C, __READ, ADCF1DIR27_t);
__IOREG(ADCF1DIR28_BASE, 0xFFF92270, __READ, ADCF1DIR28_t);
__IOREG(ADCF1DIR29_BASE, 0xFFF92274, __READ, ADCF1DIR29_t);
__IOREG(ADCF1DIR30_BASE, 0xFFF92278, __READ, ADCF1DIR30_t);
__IOREG(ADCF1DIR31_BASE, 0xFFF9227C, __READ, ADCF1DIR31_t);
__IOREG(ADCF1DIR32_BASE, 0xFFF92280, __READ, ADCF1DIR32_t);
__IOREG(ADCF1DIR33_BASE, 0xFFF92284, __READ, ADCF1DIR33_t);
__IOREG(ADCF1DIR34_BASE, 0xFFF92288, __READ, ADCF1DIR34_t);
__IOREG(ADCF1DIR35_BASE, 0xFFF9228C, __READ, ADCF1DIR35_t);
__IOREG(ADCF1ADHALTR_BASE, 0xFFF92380, __READ_WRITE, ADCF1ADHALTR_t);
__IOREG(ADCF1ADCR1_BASE, 0xFFF92384, __READ_WRITE, ADCF1ADCR1_t);
__IOREG(ADCF1MPXCURCR_BASE, 0xFFF92388, __READ_WRITE, ADCF1MPXCURCR_t);
__IOREG(ADCF1MPXCURR_BASE, 0xFFF9238C, __READ, ADCF1MPXCURR_t);
__IOREG(ADCF1MPXOWR_BASE, 0xFFF92390, __READ_WRITE, ADCF1MPXOWR_t);
__IOREG(ADCF1ADCR2_BASE, 0xFFF92398, __READ_WRITE, ADCF1ADCR2_t);
__IOREG(ADCF1ADENDP0_BASE, 0xFFF923A0, __READ_WRITE, ADCF1ADENDP0_t);
__IOREG(ADCF1SFTCR_BASE, 0xFFF923C0, __READ_WRITE, ADCF1SFTCR_t);
__IOREG(ADCF1TDCR_BASE, 0xFFF923C4, __READ_WRITE, ADCF1TDCR_t);
__IOREG(ADCF1ULLMTBR0_BASE, 0xFFF923CC, __READ_WRITE, ADCF1ULLMTBR0_t);
__IOREG(ADCF1ULLMTBR1_BASE, 0xFFF923D0, __READ_WRITE, ADCF1ULLMTBR1_t);
__IOREG(ADCF1ULLMTBR2_BASE, 0xFFF923D4, __READ_WRITE, ADCF1ULLMTBR2_t);
__IOREG(ADCF1ECR_BASE, 0xFFF923D8, __READ_WRITE, ADCF1ECR_t);
__IOREG(ADCF1ULER_BASE, 0xFFF923DC, __READ, ADCF1ULER_t);
__IOREG(ADCF1OWER_BASE, 0xFFF923E0, __READ, ADCF1OWER_t);
__IOREG(ADCF1PER_BASE, 0xFFF923E4, __READ, ADCF1PER_t);
__IOREG(ADCF1IDER_BASE, 0xFFF923E8, __READ, ADCF1IDER_t);
__IOREG(ADCF1SGSTCR0_BASE, 0xFFF92480, __READ_WRITE, ADCF1SGSTCR0_t);
__IOREG(ADCF1SGCR0_BASE, 0xFFF92490, __READ_WRITE, ADCF1SGCR0_t);
__IOREG(ADCF1SGVCSP0_BASE, 0xFFF92494, __READ_WRITE, ADCF1SGVCSP0_t);
__IOREG(ADCF1SGVCEP0_BASE, 0xFFF92498, __READ_WRITE, ADCF1SGVCEP0_t);
__IOREG(ADCF1SGMCYCR0_BASE, 0xFFF9249C, __READ_WRITE, ADCF1SGMCYCR0_t);
__IOREG(ADCF1SGSR0_BASE, 0xFFF924A4, __READ, ADCF1SGSR0_t);
__IOREG(ADCF1ULLMSR0_BASE, 0xFFF924B0, __READ_WRITE, ADCF1ULLMSR0_t);
__IOREG(ADCF1SGSTCR1_BASE, 0xFFF92500, __READ_WRITE, ADCF1SGSTCR1_t);
__IOREG(ADCF1SGCR1_BASE, 0xFFF92510, __READ_WRITE, ADCF1SGCR1_t);
__IOREG(ADCF1SGVCSP1_BASE, 0xFFF92514, __READ_WRITE, ADCF1SGVCSP1_t);
__IOREG(ADCF1SGVCEP1_BASE, 0xFFF92518, __READ_WRITE, ADCF1SGVCEP1_t);
__IOREG(ADCF1SGMCYCR1_BASE, 0xFFF9251C, __READ_WRITE, ADCF1SGMCYCR1_t);
__IOREG(ADCF1SGSR1_BASE, 0xFFF92524, __READ, ADCF1SGSR1_t);
__IOREG(ADCF1ULLMSR1_BASE, 0xFFF92530, __READ_WRITE, ADCF1ULLMSR1_t);
__IOREG(ADCF1SGSTCR2_BASE, 0xFFF92580, __READ_WRITE, ADCF1SGSTCR2_t);
__IOREG(ADCF1SGCR2_BASE, 0xFFF92590, __READ_WRITE, ADCF1SGCR2_t);
__IOREG(ADCF1SGVCSP2_BASE, 0xFFF92594, __READ_WRITE, ADCF1SGVCSP2_t);
__IOREG(ADCF1SGVCEP2_BASE, 0xFFF92598, __READ_WRITE, ADCF1SGVCEP2_t);
__IOREG(ADCF1SGMCYCR2_BASE, 0xFFF9259C, __READ_WRITE, ADCF1SGMCYCR2_t);
__IOREG(ADCF1SGSR2_BASE, 0xFFF925A4, __READ, ADCF1SGSR2_t);
__IOREG(ADCF1ULLMSR2_BASE, 0xFFF925B0, __READ_WRITE, ADCF1ULLMSR2_t);
__IOREG(ADCF1SGSTCR3_BASE, 0xFFF92600, __READ_WRITE, ADCF1SGSTCR3_t);
__IOREG(ADCF1ADTSTCR3_BASE, 0xFFF92608, __READ_WRITE, ADCF1ADTSTCR3_t);
__IOREG(ADCF1ADTENDCR3_BASE, 0xFFF9260C, __READ_WRITE, ADCF1ADTENDCR3_t);
__IOREG(ADCF1SGCR3_BASE, 0xFFF92610, __READ_WRITE, ADCF1SGCR3_t);
__IOREG(ADCF1SGVCSP3_BASE, 0xFFF92614, __READ_WRITE, ADCF1SGVCSP3_t);
__IOREG(ADCF1SGVCEP3_BASE, 0xFFF92618, __READ_WRITE, ADCF1SGVCEP3_t);
__IOREG(ADCF1SGMCYCR3_BASE, 0xFFF9261C, __READ_WRITE, ADCF1SGMCYCR3_t);
__IOREG(ADCF1SGSR3_BASE, 0xFFF92624, __READ, ADCF1SGSR3_t);
__IOREG(ADCF1ADTIPR3_BASE, 0xFFF92628, __READ_WRITE, ADCF1ADTIPR3_t);
__IOREG(ADCF1ADTPRR3_BASE, 0xFFF9262C, __READ_WRITE, ADCF1ADTPRR3_t);
__IOREG(ADCF1ULLMSR3_BASE, 0xFFF92630, __READ_WRITE, ADCF1ULLMSR3_t);
__IOREG(ADCF1SGSTCR4_BASE, 0xFFF92680, __READ_WRITE, ADCF1SGSTCR4_t);
__IOREG(ADCF1ADTSTCR4_BASE, 0xFFF92688, __READ_WRITE, ADCF1ADTSTCR4_t);
__IOREG(ADCF1ADTENDCR4_BASE, 0xFFF9268C, __READ_WRITE, ADCF1ADTENDCR4_t);
__IOREG(ADCF1SGCR4_BASE, 0xFFF92690, __READ_WRITE, ADCF1SGCR4_t);
__IOREG(ADCF1SGVCSP4_BASE, 0xFFF92694, __READ_WRITE, ADCF1SGVCSP4_t);
__IOREG(ADCF1SGVCEP4_BASE, 0xFFF92698, __READ_WRITE, ADCF1SGVCEP4_t);
__IOREG(ADCF1SGMCYCR4_BASE, 0xFFF9269C, __READ_WRITE, ADCF1SGMCYCR4_t);
__IOREG(ADCF1SGSR4_BASE, 0xFFF926A4, __READ, ADCF1SGSR4_t);
__IOREG(ADCF1ADTIPR4_BASE, 0xFFF926A8, __READ_WRITE, ADCF1ADTIPR4_t);
__IOREG(ADCF1ADTPRR4_BASE, 0xFFF926AC, __READ_WRITE, ADCF1ADTPRR4_t);
__IOREG(ADCF1ULLMSR4_BASE, 0xFFF926B0, __READ_WRITE, ADCF1ULLMSR4_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ADCF1VCR0 ADCF1VCR0_BASE.UINT32
#define ADCF1VCR0_GCTRL ADCF1VCR0_BASE.BIT._GCTRL
#define ADCF1VCR0_ADIE ADCF1VCR0_BASE.BIT._ADIE
#define ADCF1VCR0_CNVCLS ADCF1VCR0_BASE.BIT._CNVCLS
#define ADCF1VCR0_PDE ADCF1VCR0_BASE.BIT._PDE
#define ADCF1VCR0_PUE ADCF1VCR0_BASE.BIT._PUE
#define ADCF1VCR1 ADCF1VCR1_BASE.UINT32
#define ADCF1VCR1_GCTRL ADCF1VCR1_BASE.BIT._GCTRL
#define ADCF1VCR1_ADIE ADCF1VCR1_BASE.BIT._ADIE
#define ADCF1VCR1_CNVCLS ADCF1VCR1_BASE.BIT._CNVCLS
#define ADCF1VCR1_PDE ADCF1VCR1_BASE.BIT._PDE
#define ADCF1VCR1_PUE ADCF1VCR1_BASE.BIT._PUE
#define ADCF1VCR2 ADCF1VCR2_BASE.UINT32
#define ADCF1VCR2_GCTRL ADCF1VCR2_BASE.BIT._GCTRL
#define ADCF1VCR2_ADIE ADCF1VCR2_BASE.BIT._ADIE
#define ADCF1VCR2_CNVCLS ADCF1VCR2_BASE.BIT._CNVCLS
#define ADCF1VCR2_PDE ADCF1VCR2_BASE.BIT._PDE
#define ADCF1VCR2_PUE ADCF1VCR2_BASE.BIT._PUE
#define ADCF1VCR3 ADCF1VCR3_BASE.UINT32
#define ADCF1VCR3_GCTRL ADCF1VCR3_BASE.BIT._GCTRL
#define ADCF1VCR3_ADIE ADCF1VCR3_BASE.BIT._ADIE
#define ADCF1VCR3_CNVCLS ADCF1VCR3_BASE.BIT._CNVCLS
#define ADCF1VCR3_PDE ADCF1VCR3_BASE.BIT._PDE
#define ADCF1VCR3_PUE ADCF1VCR3_BASE.BIT._PUE
#define ADCF1VCR4 ADCF1VCR4_BASE.UINT32
#define ADCF1VCR4_GCTRL ADCF1VCR4_BASE.BIT._GCTRL
#define ADCF1VCR4_ADIE ADCF1VCR4_BASE.BIT._ADIE
#define ADCF1VCR4_CNVCLS ADCF1VCR4_BASE.BIT._CNVCLS
#define ADCF1VCR4_PDE ADCF1VCR4_BASE.BIT._PDE
#define ADCF1VCR4_PUE ADCF1VCR4_BASE.BIT._PUE
#define ADCF1VCR5 ADCF1VCR5_BASE.UINT32
#define ADCF1VCR5_GCTRL ADCF1VCR5_BASE.BIT._GCTRL
#define ADCF1VCR5_ADIE ADCF1VCR5_BASE.BIT._ADIE
#define ADCF1VCR5_CNVCLS ADCF1VCR5_BASE.BIT._CNVCLS
#define ADCF1VCR5_PDE ADCF1VCR5_BASE.BIT._PDE
#define ADCF1VCR5_PUE ADCF1VCR5_BASE.BIT._PUE
#define ADCF1VCR6 ADCF1VCR6_BASE.UINT32
#define ADCF1VCR6_GCTRL ADCF1VCR6_BASE.BIT._GCTRL
#define ADCF1VCR6_ADIE ADCF1VCR6_BASE.BIT._ADIE
#define ADCF1VCR6_CNVCLS ADCF1VCR6_BASE.BIT._CNVCLS
#define ADCF1VCR6_PDE ADCF1VCR6_BASE.BIT._PDE
#define ADCF1VCR6_PUE ADCF1VCR6_BASE.BIT._PUE
#define ADCF1VCR7 ADCF1VCR7_BASE.UINT32
#define ADCF1VCR7_GCTRL ADCF1VCR7_BASE.BIT._GCTRL
#define ADCF1VCR7_ADIE ADCF1VCR7_BASE.BIT._ADIE
#define ADCF1VCR7_CNVCLS ADCF1VCR7_BASE.BIT._CNVCLS
#define ADCF1VCR7_PDE ADCF1VCR7_BASE.BIT._PDE
#define ADCF1VCR7_PUE ADCF1VCR7_BASE.BIT._PUE
#define ADCF1VCR8 ADCF1VCR8_BASE.UINT32
#define ADCF1VCR8_GCTRL ADCF1VCR8_BASE.BIT._GCTRL
#define ADCF1VCR8_ADIE ADCF1VCR8_BASE.BIT._ADIE
#define ADCF1VCR8_CNVCLS ADCF1VCR8_BASE.BIT._CNVCLS
#define ADCF1VCR8_PDE ADCF1VCR8_BASE.BIT._PDE
#define ADCF1VCR8_PUE ADCF1VCR8_BASE.BIT._PUE
#define ADCF1VCR9 ADCF1VCR9_BASE.UINT32
#define ADCF1VCR9_GCTRL ADCF1VCR9_BASE.BIT._GCTRL
#define ADCF1VCR9_ADIE ADCF1VCR9_BASE.BIT._ADIE
#define ADCF1VCR9_CNVCLS ADCF1VCR9_BASE.BIT._CNVCLS
#define ADCF1VCR9_PDE ADCF1VCR9_BASE.BIT._PDE
#define ADCF1VCR9_PUE ADCF1VCR9_BASE.BIT._PUE
#define ADCF1VCR10 ADCF1VCR10_BASE.UINT32
#define ADCF1VCR10_GCTRL ADCF1VCR10_BASE.BIT._GCTRL
#define ADCF1VCR10_ADIE ADCF1VCR10_BASE.BIT._ADIE
#define ADCF1VCR10_CNVCLS ADCF1VCR10_BASE.BIT._CNVCLS
#define ADCF1VCR10_PDE ADCF1VCR10_BASE.BIT._PDE
#define ADCF1VCR10_PUE ADCF1VCR10_BASE.BIT._PUE
#define ADCF1VCR11 ADCF1VCR11_BASE.UINT32
#define ADCF1VCR11_GCTRL ADCF1VCR11_BASE.BIT._GCTRL
#define ADCF1VCR11_ADIE ADCF1VCR11_BASE.BIT._ADIE
#define ADCF1VCR11_CNVCLS ADCF1VCR11_BASE.BIT._CNVCLS
#define ADCF1VCR11_PDE ADCF1VCR11_BASE.BIT._PDE
#define ADCF1VCR11_PUE ADCF1VCR11_BASE.BIT._PUE
#define ADCF1VCR12 ADCF1VCR12_BASE.UINT32
#define ADCF1VCR12_GCTRL ADCF1VCR12_BASE.BIT._GCTRL
#define ADCF1VCR12_ADIE ADCF1VCR12_BASE.BIT._ADIE
#define ADCF1VCR12_CNVCLS ADCF1VCR12_BASE.BIT._CNVCLS
#define ADCF1VCR12_PDE ADCF1VCR12_BASE.BIT._PDE
#define ADCF1VCR12_PUE ADCF1VCR12_BASE.BIT._PUE
#define ADCF1VCR13 ADCF1VCR13_BASE.UINT32
#define ADCF1VCR13_GCTRL ADCF1VCR13_BASE.BIT._GCTRL
#define ADCF1VCR13_ADIE ADCF1VCR13_BASE.BIT._ADIE
#define ADCF1VCR13_CNVCLS ADCF1VCR13_BASE.BIT._CNVCLS
#define ADCF1VCR13_PDE ADCF1VCR13_BASE.BIT._PDE
#define ADCF1VCR13_PUE ADCF1VCR13_BASE.BIT._PUE
#define ADCF1VCR14 ADCF1VCR14_BASE.UINT32
#define ADCF1VCR14_GCTRL ADCF1VCR14_BASE.BIT._GCTRL
#define ADCF1VCR14_ADIE ADCF1VCR14_BASE.BIT._ADIE
#define ADCF1VCR14_CNVCLS ADCF1VCR14_BASE.BIT._CNVCLS
#define ADCF1VCR14_PDE ADCF1VCR14_BASE.BIT._PDE
#define ADCF1VCR14_PUE ADCF1VCR14_BASE.BIT._PUE
#define ADCF1VCR15 ADCF1VCR15_BASE.UINT32
#define ADCF1VCR15_GCTRL ADCF1VCR15_BASE.BIT._GCTRL
#define ADCF1VCR15_ADIE ADCF1VCR15_BASE.BIT._ADIE
#define ADCF1VCR15_CNVCLS ADCF1VCR15_BASE.BIT._CNVCLS
#define ADCF1VCR15_PDE ADCF1VCR15_BASE.BIT._PDE
#define ADCF1VCR15_PUE ADCF1VCR15_BASE.BIT._PUE
#define ADCF1VCR16 ADCF1VCR16_BASE.UINT32
#define ADCF1VCR16_GCTRL ADCF1VCR16_BASE.BIT._GCTRL
#define ADCF1VCR16_ADIE ADCF1VCR16_BASE.BIT._ADIE
#define ADCF1VCR16_CNVCLS ADCF1VCR16_BASE.BIT._CNVCLS
#define ADCF1VCR16_PDE ADCF1VCR16_BASE.BIT._PDE
#define ADCF1VCR16_PUE ADCF1VCR16_BASE.BIT._PUE
#define ADCF1VCR17 ADCF1VCR17_BASE.UINT32
#define ADCF1VCR17_GCTRL ADCF1VCR17_BASE.BIT._GCTRL
#define ADCF1VCR17_ADIE ADCF1VCR17_BASE.BIT._ADIE
#define ADCF1VCR17_CNVCLS ADCF1VCR17_BASE.BIT._CNVCLS
#define ADCF1VCR17_PDE ADCF1VCR17_BASE.BIT._PDE
#define ADCF1VCR17_PUE ADCF1VCR17_BASE.BIT._PUE
#define ADCF1VCR18 ADCF1VCR18_BASE.UINT32
#define ADCF1VCR18_GCTRL ADCF1VCR18_BASE.BIT._GCTRL
#define ADCF1VCR18_ADIE ADCF1VCR18_BASE.BIT._ADIE
#define ADCF1VCR18_CNVCLS ADCF1VCR18_BASE.BIT._CNVCLS
#define ADCF1VCR18_PDE ADCF1VCR18_BASE.BIT._PDE
#define ADCF1VCR18_PUE ADCF1VCR18_BASE.BIT._PUE
#define ADCF1VCR19 ADCF1VCR19_BASE.UINT32
#define ADCF1VCR19_GCTRL ADCF1VCR19_BASE.BIT._GCTRL
#define ADCF1VCR19_ADIE ADCF1VCR19_BASE.BIT._ADIE
#define ADCF1VCR19_CNVCLS ADCF1VCR19_BASE.BIT._CNVCLS
#define ADCF1VCR19_PDE ADCF1VCR19_BASE.BIT._PDE
#define ADCF1VCR19_PUE ADCF1VCR19_BASE.BIT._PUE
#define ADCF1VCR20 ADCF1VCR20_BASE.UINT32
#define ADCF1VCR20_GCTRL ADCF1VCR20_BASE.BIT._GCTRL
#define ADCF1VCR20_ADIE ADCF1VCR20_BASE.BIT._ADIE
#define ADCF1VCR20_CNVCLS ADCF1VCR20_BASE.BIT._CNVCLS
#define ADCF1VCR20_PDE ADCF1VCR20_BASE.BIT._PDE
#define ADCF1VCR20_PUE ADCF1VCR20_BASE.BIT._PUE
#define ADCF1VCR21 ADCF1VCR21_BASE.UINT32
#define ADCF1VCR21_GCTRL ADCF1VCR21_BASE.BIT._GCTRL
#define ADCF1VCR21_ADIE ADCF1VCR21_BASE.BIT._ADIE
#define ADCF1VCR21_CNVCLS ADCF1VCR21_BASE.BIT._CNVCLS
#define ADCF1VCR21_PDE ADCF1VCR21_BASE.BIT._PDE
#define ADCF1VCR21_PUE ADCF1VCR21_BASE.BIT._PUE
#define ADCF1VCR22 ADCF1VCR22_BASE.UINT32
#define ADCF1VCR22_GCTRL ADCF1VCR22_BASE.BIT._GCTRL
#define ADCF1VCR22_ADIE ADCF1VCR22_BASE.BIT._ADIE
#define ADCF1VCR22_CNVCLS ADCF1VCR22_BASE.BIT._CNVCLS
#define ADCF1VCR22_PDE ADCF1VCR22_BASE.BIT._PDE
#define ADCF1VCR22_PUE ADCF1VCR22_BASE.BIT._PUE
#define ADCF1VCR23 ADCF1VCR23_BASE.UINT32
#define ADCF1VCR23_GCTRL ADCF1VCR23_BASE.BIT._GCTRL
#define ADCF1VCR23_ADIE ADCF1VCR23_BASE.BIT._ADIE
#define ADCF1VCR23_CNVCLS ADCF1VCR23_BASE.BIT._CNVCLS
#define ADCF1VCR23_PDE ADCF1VCR23_BASE.BIT._PDE
#define ADCF1VCR23_PUE ADCF1VCR23_BASE.BIT._PUE
#define ADCF1VCR24 ADCF1VCR24_BASE.UINT32
#define ADCF1VCR24_GCTRL ADCF1VCR24_BASE.BIT._GCTRL
#define ADCF1VCR24_ADIE ADCF1VCR24_BASE.BIT._ADIE
#define ADCF1VCR24_CNVCLS ADCF1VCR24_BASE.BIT._CNVCLS
#define ADCF1VCR24_PDE ADCF1VCR24_BASE.BIT._PDE
#define ADCF1VCR24_PUE ADCF1VCR24_BASE.BIT._PUE
#define ADCF1VCR25 ADCF1VCR25_BASE.UINT32
#define ADCF1VCR25_GCTRL ADCF1VCR25_BASE.BIT._GCTRL
#define ADCF1VCR25_ADIE ADCF1VCR25_BASE.BIT._ADIE
#define ADCF1VCR25_CNVCLS ADCF1VCR25_BASE.BIT._CNVCLS
#define ADCF1VCR25_PDE ADCF1VCR25_BASE.BIT._PDE
#define ADCF1VCR25_PUE ADCF1VCR25_BASE.BIT._PUE
#define ADCF1VCR26 ADCF1VCR26_BASE.UINT32
#define ADCF1VCR26_GCTRL ADCF1VCR26_BASE.BIT._GCTRL
#define ADCF1VCR26_ADIE ADCF1VCR26_BASE.BIT._ADIE
#define ADCF1VCR26_CNVCLS ADCF1VCR26_BASE.BIT._CNVCLS
#define ADCF1VCR26_PDE ADCF1VCR26_BASE.BIT._PDE
#define ADCF1VCR26_PUE ADCF1VCR26_BASE.BIT._PUE
#define ADCF1VCR27 ADCF1VCR27_BASE.UINT32
#define ADCF1VCR27_GCTRL ADCF1VCR27_BASE.BIT._GCTRL
#define ADCF1VCR27_ADIE ADCF1VCR27_BASE.BIT._ADIE
#define ADCF1VCR27_CNVCLS ADCF1VCR27_BASE.BIT._CNVCLS
#define ADCF1VCR27_PDE ADCF1VCR27_BASE.BIT._PDE
#define ADCF1VCR27_PUE ADCF1VCR27_BASE.BIT._PUE
#define ADCF1VCR28 ADCF1VCR28_BASE.UINT32
#define ADCF1VCR28_GCTRL ADCF1VCR28_BASE.BIT._GCTRL
#define ADCF1VCR28_ADIE ADCF1VCR28_BASE.BIT._ADIE
#define ADCF1VCR28_CNVCLS ADCF1VCR28_BASE.BIT._CNVCLS
#define ADCF1VCR28_PDE ADCF1VCR28_BASE.BIT._PDE
#define ADCF1VCR28_PUE ADCF1VCR28_BASE.BIT._PUE
#define ADCF1VCR29 ADCF1VCR29_BASE.UINT32
#define ADCF1VCR29_GCTRL ADCF1VCR29_BASE.BIT._GCTRL
#define ADCF1VCR29_ADIE ADCF1VCR29_BASE.BIT._ADIE
#define ADCF1VCR29_CNVCLS ADCF1VCR29_BASE.BIT._CNVCLS
#define ADCF1VCR29_PDE ADCF1VCR29_BASE.BIT._PDE
#define ADCF1VCR29_PUE ADCF1VCR29_BASE.BIT._PUE
#define ADCF1VCR30 ADCF1VCR30_BASE.UINT32
#define ADCF1VCR30_GCTRL ADCF1VCR30_BASE.BIT._GCTRL
#define ADCF1VCR30_ADIE ADCF1VCR30_BASE.BIT._ADIE
#define ADCF1VCR30_CNVCLS ADCF1VCR30_BASE.BIT._CNVCLS
#define ADCF1VCR30_PDE ADCF1VCR30_BASE.BIT._PDE
#define ADCF1VCR30_PUE ADCF1VCR30_BASE.BIT._PUE
#define ADCF1VCR31 ADCF1VCR31_BASE.UINT32
#define ADCF1VCR31_GCTRL ADCF1VCR31_BASE.BIT._GCTRL
#define ADCF1VCR31_ADIE ADCF1VCR31_BASE.BIT._ADIE
#define ADCF1VCR31_CNVCLS ADCF1VCR31_BASE.BIT._CNVCLS
#define ADCF1VCR31_PDE ADCF1VCR31_BASE.BIT._PDE
#define ADCF1VCR31_PUE ADCF1VCR31_BASE.BIT._PUE
#define ADCF1VCR32 ADCF1VCR32_BASE.UINT32
#define ADCF1VCR32_GCTRL ADCF1VCR32_BASE.BIT._GCTRL
#define ADCF1VCR32_ADIE ADCF1VCR32_BASE.BIT._ADIE
#define ADCF1VCR32_CNVCLS ADCF1VCR32_BASE.BIT._CNVCLS
#define ADCF1VCR32_PDE ADCF1VCR32_BASE.BIT._PDE
#define ADCF1VCR32_PUE ADCF1VCR32_BASE.BIT._PUE
#define ADCF1VCR33 ADCF1VCR33_BASE.UINT32
#define ADCF1VCR33_GCTRL ADCF1VCR33_BASE.BIT._GCTRL
#define ADCF1VCR33_ADIE ADCF1VCR33_BASE.BIT._ADIE
#define ADCF1VCR33_CNVCLS ADCF1VCR33_BASE.BIT._CNVCLS
#define ADCF1VCR33_PDE ADCF1VCR33_BASE.BIT._PDE
#define ADCF1VCR33_PUE ADCF1VCR33_BASE.BIT._PUE
#define ADCF1VCR34 ADCF1VCR34_BASE.UINT32
#define ADCF1VCR34_GCTRL ADCF1VCR34_BASE.BIT._GCTRL
#define ADCF1VCR34_ADIE ADCF1VCR34_BASE.BIT._ADIE
#define ADCF1VCR34_CNVCLS ADCF1VCR34_BASE.BIT._CNVCLS
#define ADCF1VCR34_PDE ADCF1VCR34_BASE.BIT._PDE
#define ADCF1VCR34_PUE ADCF1VCR34_BASE.BIT._PUE
#define ADCF1VCR35 ADCF1VCR35_BASE.UINT32
#define ADCF1VCR35_GCTRL ADCF1VCR35_BASE.BIT._GCTRL
#define ADCF1VCR35_ADIE ADCF1VCR35_BASE.BIT._ADIE
#define ADCF1VCR35_CNVCLS ADCF1VCR35_BASE.BIT._CNVCLS
#define ADCF1VCR35_PDE ADCF1VCR35_BASE.BIT._PDE
#define ADCF1VCR35_PUE ADCF1VCR35_BASE.BIT._PUE
#define ADCF1DR00 ADCF1DR00_BASE.UINT32
#define ADCF1DR00_DR0 ADCF1DR00_BASE.BIT._DR0
#define ADCF1DR00_DR1 ADCF1DR00_BASE.BIT._DR1
#define ADCF1DR02 ADCF1DR02_BASE.UINT32
#define ADCF1DR02_DR2 ADCF1DR02_BASE.BIT._DR2
#define ADCF1DR02_DR3 ADCF1DR02_BASE.BIT._DR3
#define ADCF1DR04 ADCF1DR04_BASE.UINT32
#define ADCF1DR04_DR4 ADCF1DR04_BASE.BIT._DR4
#define ADCF1DR04_DR5 ADCF1DR04_BASE.BIT._DR5
#define ADCF1DR06 ADCF1DR06_BASE.UINT32
#define ADCF1DR06_DR6 ADCF1DR06_BASE.BIT._DR6
#define ADCF1DR06_DR7 ADCF1DR06_BASE.BIT._DR7
#define ADCF1DR08 ADCF1DR08_BASE.UINT32
#define ADCF1DR08_DR8 ADCF1DR08_BASE.BIT._DR8
#define ADCF1DR08_DR9 ADCF1DR08_BASE.BIT._DR9
#define ADCF1DR10 ADCF1DR10_BASE.UINT32
#define ADCF1DR10_DR10 ADCF1DR10_BASE.BIT._DR10
#define ADCF1DR10_DR11 ADCF1DR10_BASE.BIT._DR11
#define ADCF1DR12 ADCF1DR12_BASE.UINT32
#define ADCF1DR12_DR12 ADCF1DR12_BASE.BIT._DR12
#define ADCF1DR12_DR13 ADCF1DR12_BASE.BIT._DR13
#define ADCF1DR14 ADCF1DR14_BASE.UINT32
#define ADCF1DR14_DR14 ADCF1DR14_BASE.BIT._DR14
#define ADCF1DR14_DR15 ADCF1DR14_BASE.BIT._DR15
#define ADCF1DR16 ADCF1DR16_BASE.UINT32
#define ADCF1DR16_DR16 ADCF1DR16_BASE.BIT._DR16
#define ADCF1DR16_DR17 ADCF1DR16_BASE.BIT._DR17
#define ADCF1DR18 ADCF1DR18_BASE.UINT32
#define ADCF1DR18_DR18 ADCF1DR18_BASE.BIT._DR18
#define ADCF1DR18_DR19 ADCF1DR18_BASE.BIT._DR19
#define ADCF1DR20 ADCF1DR20_BASE.UINT32
#define ADCF1DR20_DR20 ADCF1DR20_BASE.BIT._DR20
#define ADCF1DR20_DR21 ADCF1DR20_BASE.BIT._DR21
#define ADCF1DR22 ADCF1DR22_BASE.UINT32
#define ADCF1DR22_DR22 ADCF1DR22_BASE.BIT._DR22
#define ADCF1DR22_DR23 ADCF1DR22_BASE.BIT._DR23
#define ADCF1DR24 ADCF1DR24_BASE.UINT32
#define ADCF1DR24_DR24 ADCF1DR24_BASE.BIT._DR24
#define ADCF1DR24_DR25 ADCF1DR24_BASE.BIT._DR25
#define ADCF1DR26 ADCF1DR26_BASE.UINT32
#define ADCF1DR26_DR26 ADCF1DR26_BASE.BIT._DR26
#define ADCF1DR26_DR27 ADCF1DR26_BASE.BIT._DR27
#define ADCF1DR28 ADCF1DR28_BASE.UINT32
#define ADCF1DR28_DR28 ADCF1DR28_BASE.BIT._DR28
#define ADCF1DR28_DR29 ADCF1DR28_BASE.BIT._DR29
#define ADCF1DR30 ADCF1DR30_BASE.UINT32
#define ADCF1DR30_DR30 ADCF1DR30_BASE.BIT._DR30
#define ADCF1DR30_DR31 ADCF1DR30_BASE.BIT._DR31
#define ADCF1DR32 ADCF1DR32_BASE.UINT32
#define ADCF1DR32_DR32 ADCF1DR32_BASE.BIT._DR32
#define ADCF1DR32_DR33 ADCF1DR32_BASE.BIT._DR33
#define ADCF1DR34 ADCF1DR34_BASE.UINT32
#define ADCF1DR34_DR34 ADCF1DR34_BASE.BIT._DR34
#define ADCF1DR34_DR35 ADCF1DR34_BASE.BIT._DR35
#define ADCF1DIR0 ADCF1DIR0_BASE.UINT32
#define ADCF1DIR0_DR0 ADCF1DIR0_BASE.BIT._DR0
#define ADCF1DIR0_ID ADCF1DIR0_BASE.BIT._ID
#define ADCF1DIR0_PRTY ADCF1DIR0_BASE.BIT._PRTY
#define ADCF1DIR0_WFLG ADCF1DIR0_BASE.BIT._WFLG
#define ADCF1DIR1 ADCF1DIR1_BASE.UINT32
#define ADCF1DIR1_DR1 ADCF1DIR1_BASE.BIT._DR1
#define ADCF1DIR1_ID ADCF1DIR1_BASE.BIT._ID
#define ADCF1DIR1_PRTY ADCF1DIR1_BASE.BIT._PRTY
#define ADCF1DIR1_WFLG ADCF1DIR1_BASE.BIT._WFLG
#define ADCF1DIR2 ADCF1DIR2_BASE.UINT32
#define ADCF1DIR2_DR2 ADCF1DIR2_BASE.BIT._DR2
#define ADCF1DIR2_ID ADCF1DIR2_BASE.BIT._ID
#define ADCF1DIR2_PRTY ADCF1DIR2_BASE.BIT._PRTY
#define ADCF1DIR2_WFLG ADCF1DIR2_BASE.BIT._WFLG
#define ADCF1DIR3 ADCF1DIR3_BASE.UINT32
#define ADCF1DIR3_DR3 ADCF1DIR3_BASE.BIT._DR3
#define ADCF1DIR3_ID ADCF1DIR3_BASE.BIT._ID
#define ADCF1DIR3_PRTY ADCF1DIR3_BASE.BIT._PRTY
#define ADCF1DIR3_WFLG ADCF1DIR3_BASE.BIT._WFLG
#define ADCF1DIR4 ADCF1DIR4_BASE.UINT32
#define ADCF1DIR4_DR4 ADCF1DIR4_BASE.BIT._DR4
#define ADCF1DIR4_ID ADCF1DIR4_BASE.BIT._ID
#define ADCF1DIR4_PRTY ADCF1DIR4_BASE.BIT._PRTY
#define ADCF1DIR4_WFLG ADCF1DIR4_BASE.BIT._WFLG
#define ADCF1DIR5 ADCF1DIR5_BASE.UINT32
#define ADCF1DIR5_DR5 ADCF1DIR5_BASE.BIT._DR5
#define ADCF1DIR5_ID ADCF1DIR5_BASE.BIT._ID
#define ADCF1DIR5_PRTY ADCF1DIR5_BASE.BIT._PRTY
#define ADCF1DIR5_WFLG ADCF1DIR5_BASE.BIT._WFLG
#define ADCF1DIR6 ADCF1DIR6_BASE.UINT32
#define ADCF1DIR6_ADCF1DIR6 ADCF1DIR6_BASE.BIT._ADCF1DIR6
#define ADCF1DIR6_ID ADCF1DIR6_BASE.BIT._ID
#define ADCF1DIR6_PRTY ADCF1DIR6_BASE.BIT._PRTY
#define ADCF1DIR6_WFLG ADCF1DIR6_BASE.BIT._WFLG
#define ADCF1DIR7 ADCF1DIR7_BASE.UINT32
#define ADCF1DIR7_DR7 ADCF1DIR7_BASE.BIT._DR7
#define ADCF1DIR7_ID ADCF1DIR7_BASE.BIT._ID
#define ADCF1DIR7_PRTY ADCF1DIR7_BASE.BIT._PRTY
#define ADCF1DIR7_WFLG ADCF1DIR7_BASE.BIT._WFLG
#define ADCF1DIR8 ADCF1DIR8_BASE.UINT32
#define ADCF1DIR8_DR8 ADCF1DIR8_BASE.BIT._DR8
#define ADCF1DIR8_ID ADCF1DIR8_BASE.BIT._ID
#define ADCF1DIR8_PRTY ADCF1DIR8_BASE.BIT._PRTY
#define ADCF1DIR8_WFLG ADCF1DIR8_BASE.BIT._WFLG
#define ADCF1DIR9 ADCF1DIR9_BASE.UINT32
#define ADCF1DIR9_DR9 ADCF1DIR9_BASE.BIT._DR9
#define ADCF1DIR9_ID ADCF1DIR9_BASE.BIT._ID
#define ADCF1DIR9_PRTY ADCF1DIR9_BASE.BIT._PRTY
#define ADCF1DIR9_WFLG ADCF1DIR9_BASE.BIT._WFLG
#define ADCF1DIR10 ADCF1DIR10_BASE.UINT32
#define ADCF1DIR10_DR10 ADCF1DIR10_BASE.BIT._DR10
#define ADCF1DIR10_ID ADCF1DIR10_BASE.BIT._ID
#define ADCF1DIR10_PRTY ADCF1DIR10_BASE.BIT._PRTY
#define ADCF1DIR10_WFLG ADCF1DIR10_BASE.BIT._WFLG
#define ADCF1DIR11 ADCF1DIR11_BASE.UINT32
#define ADCF1DIR11_DR11 ADCF1DIR11_BASE.BIT._DR11
#define ADCF1DIR11_ID ADCF1DIR11_BASE.BIT._ID
#define ADCF1DIR11_PRTY ADCF1DIR11_BASE.BIT._PRTY
#define ADCF1DIR11_WFLG ADCF1DIR11_BASE.BIT._WFLG
#define ADCF1DIR12 ADCF1DIR12_BASE.UINT32
#define ADCF1DIR12_DR12 ADCF1DIR12_BASE.BIT._DR12
#define ADCF1DIR12_ID ADCF1DIR12_BASE.BIT._ID
#define ADCF1DIR12_PRTY ADCF1DIR12_BASE.BIT._PRTY
#define ADCF1DIR12_WFLG ADCF1DIR12_BASE.BIT._WFLG
#define ADCF1DIR13 ADCF1DIR13_BASE.UINT32
#define ADCF1DIR13_DR13 ADCF1DIR13_BASE.BIT._DR13
#define ADCF1DIR13_ID ADCF1DIR13_BASE.BIT._ID
#define ADCF1DIR13_PRTY ADCF1DIR13_BASE.BIT._PRTY
#define ADCF1DIR13_WFLG ADCF1DIR13_BASE.BIT._WFLG
#define ADCF1DIR14 ADCF1DIR14_BASE.UINT32
#define ADCF1DIR14_DR14 ADCF1DIR14_BASE.BIT._DR14
#define ADCF1DIR14_ID ADCF1DIR14_BASE.BIT._ID
#define ADCF1DIR14_PRTY ADCF1DIR14_BASE.BIT._PRTY
#define ADCF1DIR14_WFLG ADCF1DIR14_BASE.BIT._WFLG
#define ADCF1DIR15 ADCF1DIR15_BASE.UINT32
#define ADCF1DIR15_DR15 ADCF1DIR15_BASE.BIT._DR15
#define ADCF1DIR15_ID ADCF1DIR15_BASE.BIT._ID
#define ADCF1DIR15_PRTY ADCF1DIR15_BASE.BIT._PRTY
#define ADCF1DIR15_WFLG ADCF1DIR15_BASE.BIT._WFLG
#define ADCF1DIR16 ADCF1DIR16_BASE.UINT32
#define ADCF1DIR16_DR16 ADCF1DIR16_BASE.BIT._DR16
#define ADCF1DIR16_ID ADCF1DIR16_BASE.BIT._ID
#define ADCF1DIR16_PRTY ADCF1DIR16_BASE.BIT._PRTY
#define ADCF1DIR16_WFLG ADCF1DIR16_BASE.BIT._WFLG
#define ADCF1DIR17 ADCF1DIR17_BASE.UINT32
#define ADCF1DIR17_DR17 ADCF1DIR17_BASE.BIT._DR17
#define ADCF1DIR17_ID ADCF1DIR17_BASE.BIT._ID
#define ADCF1DIR17_PRTY ADCF1DIR17_BASE.BIT._PRTY
#define ADCF1DIR17_WFLG ADCF1DIR17_BASE.BIT._WFLG
#define ADCF1DIR18 ADCF1DIR18_BASE.UINT32
#define ADCF1DIR18_DR18 ADCF1DIR18_BASE.BIT._DR18
#define ADCF1DIR18_ID ADCF1DIR18_BASE.BIT._ID
#define ADCF1DIR18_PRTY ADCF1DIR18_BASE.BIT._PRTY
#define ADCF1DIR18_WFLG ADCF1DIR18_BASE.BIT._WFLG
#define ADCF1DIR19 ADCF1DIR19_BASE.UINT32
#define ADCF1DIR19_DR19 ADCF1DIR19_BASE.BIT._DR19
#define ADCF1DIR19_ID ADCF1DIR19_BASE.BIT._ID
#define ADCF1DIR19_PRTY ADCF1DIR19_BASE.BIT._PRTY
#define ADCF1DIR19_WFLG ADCF1DIR19_BASE.BIT._WFLG
#define ADCF1DIR20 ADCF1DIR20_BASE.UINT32
#define ADCF1DIR20_DR20 ADCF1DIR20_BASE.BIT._DR20
#define ADCF1DIR20_ID ADCF1DIR20_BASE.BIT._ID
#define ADCF1DIR20_PRTY ADCF1DIR20_BASE.BIT._PRTY
#define ADCF1DIR20_WFLG ADCF1DIR20_BASE.BIT._WFLG
#define ADCF1DIR21 ADCF1DIR21_BASE.UINT32
#define ADCF1DIR21_DR21 ADCF1DIR21_BASE.BIT._DR21
#define ADCF1DIR21_ID ADCF1DIR21_BASE.BIT._ID
#define ADCF1DIR21_PRTY ADCF1DIR21_BASE.BIT._PRTY
#define ADCF1DIR21_WFLG ADCF1DIR21_BASE.BIT._WFLG
#define ADCF1DIR22 ADCF1DIR22_BASE.UINT32
#define ADCF1DIR22_DR22 ADCF1DIR22_BASE.BIT._DR22
#define ADCF1DIR22_ID ADCF1DIR22_BASE.BIT._ID
#define ADCF1DIR22_PRTY ADCF1DIR22_BASE.BIT._PRTY
#define ADCF1DIR22_WFLG ADCF1DIR22_BASE.BIT._WFLG
#define ADCF1DIR23 ADCF1DIR23_BASE.UINT32
#define ADCF1DIR23_DR23 ADCF1DIR23_BASE.BIT._DR23
#define ADCF1DIR23_ID ADCF1DIR23_BASE.BIT._ID
#define ADCF1DIR23_PRTY ADCF1DIR23_BASE.BIT._PRTY
#define ADCF1DIR23_WFLG ADCF1DIR23_BASE.BIT._WFLG
#define ADCF1DIR24 ADCF1DIR24_BASE.UINT32
#define ADCF1DIR24_DR24 ADCF1DIR24_BASE.BIT._DR24
#define ADCF1DIR24_ID ADCF1DIR24_BASE.BIT._ID
#define ADCF1DIR24_PRTY ADCF1DIR24_BASE.BIT._PRTY
#define ADCF1DIR24_WFLG ADCF1DIR24_BASE.BIT._WFLG
#define ADCF1DIR25 ADCF1DIR25_BASE.UINT32
#define ADCF1DIR25_DR25 ADCF1DIR25_BASE.BIT._DR25
#define ADCF1DIR25_ID ADCF1DIR25_BASE.BIT._ID
#define ADCF1DIR25_PRTY ADCF1DIR25_BASE.BIT._PRTY
#define ADCF1DIR25_WFLG ADCF1DIR25_BASE.BIT._WFLG
#define ADCF1DIR26 ADCF1DIR26_BASE.UINT32
#define ADCF1DIR26_DR26 ADCF1DIR26_BASE.BIT._DR26
#define ADCF1DIR26_ID ADCF1DIR26_BASE.BIT._ID
#define ADCF1DIR26_PRTY ADCF1DIR26_BASE.BIT._PRTY
#define ADCF1DIR26_WFLG ADCF1DIR26_BASE.BIT._WFLG
#define ADCF1DIR27 ADCF1DIR27_BASE.UINT32
#define ADCF1DIR27_DR27 ADCF1DIR27_BASE.BIT._DR27
#define ADCF1DIR27_ID ADCF1DIR27_BASE.BIT._ID
#define ADCF1DIR27_PRTY ADCF1DIR27_BASE.BIT._PRTY
#define ADCF1DIR27_WFLG ADCF1DIR27_BASE.BIT._WFLG
#define ADCF1DIR28 ADCF1DIR28_BASE.UINT32
#define ADCF1DIR28_DR28 ADCF1DIR28_BASE.BIT._DR28
#define ADCF1DIR28_ID ADCF1DIR28_BASE.BIT._ID
#define ADCF1DIR28_PRTY ADCF1DIR28_BASE.BIT._PRTY
#define ADCF1DIR28_WFLG ADCF1DIR28_BASE.BIT._WFLG
#define ADCF1DIR29 ADCF1DIR29_BASE.UINT32
#define ADCF1DIR29_DR29 ADCF1DIR29_BASE.BIT._DR29
#define ADCF1DIR29_ID ADCF1DIR29_BASE.BIT._ID
#define ADCF1DIR29_PRTY ADCF1DIR29_BASE.BIT._PRTY
#define ADCF1DIR29_WFLG ADCF1DIR29_BASE.BIT._WFLG
#define ADCF1DIR30 ADCF1DIR30_BASE.UINT32
#define ADCF1DIR30_DR30 ADCF1DIR30_BASE.BIT._DR30
#define ADCF1DIR30_ID ADCF1DIR30_BASE.BIT._ID
#define ADCF1DIR30_PRTY ADCF1DIR30_BASE.BIT._PRTY
#define ADCF1DIR30_WFLG ADCF1DIR30_BASE.BIT._WFLG
#define ADCF1DIR31 ADCF1DIR31_BASE.UINT32
#define ADCF1DIR31_DR31 ADCF1DIR31_BASE.BIT._DR31
#define ADCF1DIR31_ID ADCF1DIR31_BASE.BIT._ID
#define ADCF1DIR31_PRTY ADCF1DIR31_BASE.BIT._PRTY
#define ADCF1DIR31_WFLG ADCF1DIR31_BASE.BIT._WFLG
#define ADCF1DIR32 ADCF1DIR32_BASE.UINT32
#define ADCF1DIR32_DR32 ADCF1DIR32_BASE.BIT._DR32
#define ADCF1DIR32_ID ADCF1DIR32_BASE.BIT._ID
#define ADCF1DIR32_PRTY ADCF1DIR32_BASE.BIT._PRTY
#define ADCF1DIR32_WFLG ADCF1DIR32_BASE.BIT._WFLG
#define ADCF1DIR33 ADCF1DIR33_BASE.UINT32
#define ADCF1DIR33_DR33 ADCF1DIR33_BASE.BIT._DR33
#define ADCF1DIR33_ID ADCF1DIR33_BASE.BIT._ID
#define ADCF1DIR33_PRTY ADCF1DIR33_BASE.BIT._PRTY
#define ADCF1DIR33_WFLG ADCF1DIR33_BASE.BIT._WFLG
#define ADCF1DIR34 ADCF1DIR34_BASE.UINT32
#define ADCF1DIR34_DR34 ADCF1DIR34_BASE.BIT._DR34
#define ADCF1DIR34_ID ADCF1DIR34_BASE.BIT._ID
#define ADCF1DIR34_PRTY ADCF1DIR34_BASE.BIT._PRTY
#define ADCF1DIR34_WFLG ADCF1DIR34_BASE.BIT._WFLG
#define ADCF1DIR35 ADCF1DIR35_BASE.UINT32
#define ADCF1DIR35_DR35 ADCF1DIR35_BASE.BIT._DR35
#define ADCF1DIR35_ID ADCF1DIR35_BASE.BIT._ID
#define ADCF1DIR35_PRTY ADCF1DIR35_BASE.BIT._PRTY
#define ADCF1DIR35_WFLG ADCF1DIR35_BASE.BIT._WFLG
#define ADCF1ADHALTR ADCF1ADHALTR_BASE.UINT8
#define ADCF1ADHALTR_HALT ADCF1ADHALTR_BASE.BIT._HALT
#define ADCF1ADCR1 ADCF1ADCR1_BASE.UINT8
#define ADCF1ADCR1_SUSMTD ADCF1ADCR1_BASE.BIT._SUSMTD
#define ADCF1MPXCURCR ADCF1MPXCURCR_BASE.UINT8
#define ADCF1MPXCURCR_MSKCFMT0 ADCF1MPXCURCR_BASE.BIT._MSKCFMT0
#define ADCF1MPXCURR ADCF1MPXCURR_BASE.UINT32
#define ADCF1MPXCURR_MPXCUR ADCF1MPXCURR_BASE.BIT._MPXCUR
#define ADCF1MPXCURR_MSKC ADCF1MPXCURR_BASE.BIT._MSKC
#define ADCF1MPXOWR ADCF1MPXOWR_BASE.UINT8
#define ADCF1MPXOWR_MPXOW ADCF1MPXOWR_BASE.BIT._MPXOW
#define ADCF1ADCR2 ADCF1ADCR2_BASE.UINT8
#define ADCF1ADCR2_ADDNT ADCF1ADCR2_BASE.BIT._ADDNT
#define ADCF1ADCR2_DFMT ADCF1ADCR2_BASE.BIT._DFMT
#define ADCF1ADENDP0 ADCF1ADENDP0_BASE.UINT8
#define ADCF1ADENDP0_ENDP ADCF1ADENDP0_BASE.BIT._ENDP
#define ADCF1SFTCR ADCF1SFTCR_BASE.UINT8
#define ADCF1SFTCR_IDEIE ADCF1SFTCR_BASE.BIT._IDEIE
#define ADCF1SFTCR_PEIE ADCF1SFTCR_BASE.BIT._PEIE
#define ADCF1SFTCR_OWEIE ADCF1SFTCR_BASE.BIT._OWEIE
#define ADCF1SFTCR_ULEIE ADCF1SFTCR_BASE.BIT._ULEIE
#define ADCF1SFTCR_RDCLRE ADCF1SFTCR_BASE.BIT._RDCLRE
#define ADCF1TDCR ADCF1TDCR_BASE.UINT8
#define ADCF1TDCR_TDLV ADCF1TDCR_BASE.BIT._TDLV
#define ADCF1TDCR_TDE ADCF1TDCR_BASE.BIT._TDE
#define ADCF1ULLMTBR0 ADCF1ULLMTBR0_BASE.UINT32
#define ADCF1ULLMTBR0_LLMTB ADCF1ULLMTBR0_BASE.BIT._LLMTB
#define ADCF1ULLMTBR0_ULMTB ADCF1ULLMTBR0_BASE.BIT._ULMTB
#define ADCF1ULLMTBR1 ADCF1ULLMTBR1_BASE.UINT32
#define ADCF1ULLMTBR1_LLMTB ADCF1ULLMTBR1_BASE.BIT._LLMTB
#define ADCF1ULLMTBR1_ULMTB ADCF1ULLMTBR1_BASE.BIT._ULMTB
#define ADCF1ULLMTBR2 ADCF1ULLMTBR2_BASE.UINT32
#define ADCF1ULLMTBR2_LLMTB ADCF1ULLMTBR2_BASE.BIT._LLMTB
#define ADCF1ULLMTBR2_ULMTB ADCF1ULLMTBR2_BASE.BIT._ULMTB
#define ADCF1ECR ADCF1ECR_BASE.UINT8
#define ADCF1ECR_IDEC ADCF1ECR_BASE.BIT._IDEC
#define ADCF1ECR_PEC ADCF1ECR_BASE.BIT._PEC
#define ADCF1ECR_OWEC ADCF1ECR_BASE.BIT._OWEC
#define ADCF1ECR_ULEC ADCF1ECR_BASE.BIT._ULEC
#define ADCF1ULER ADCF1ULER_BASE.UINT8
#define ADCF1ULER_ULECAP ADCF1ULER_BASE.BIT._ULECAP
#define ADCF1ULER_ULE ADCF1ULER_BASE.BIT._ULE
#define ADCF1OWER ADCF1OWER_BASE.UINT8
#define ADCF1OWER_OWECAP ADCF1OWER_BASE.BIT._OWECAP
#define ADCF1OWER_OWE ADCF1OWER_BASE.BIT._OWE
#define ADCF1PER ADCF1PER_BASE.UINT8
#define ADCF1PER_PECAP ADCF1PER_BASE.BIT._PECAP
#define ADCF1PER_PE ADCF1PER_BASE.BIT._PE
#define ADCF1IDER ADCF1IDER_BASE.UINT8
#define ADCF1IDER_IDECAP ADCF1IDER_BASE.BIT._IDECAP
#define ADCF1IDER_IDE ADCF1IDER_BASE.BIT._IDE
#define ADCF1SGSTCR0 ADCF1SGSTCR0_BASE.UINT8
#define ADCF1SGSTCR0_SGST ADCF1SGSTCR0_BASE.BIT._SGST
#define ADCF1SGCR0 ADCF1SGCR0_BASE.UINT8
#define ADCF1SGCR0_TRGMD ADCF1SGCR0_BASE.BIT._TRGMD
#define ADCF1SGCR0_ADIE ADCF1SGCR0_BASE.BIT._ADIE
#define ADCF1SGCR0_SCANMD ADCF1SGCR0_BASE.BIT._SCANMD
#define ADCF1SGCR0_ADSTARTE ADCF1SGCR0_BASE.BIT._ADSTARTE
#define ADCF1SGVCSP0 ADCF1SGVCSP0_BASE.UINT8
#define ADCF1SGVCSP0_VCSP ADCF1SGVCSP0_BASE.BIT._VCSP
#define ADCF1SGVCEP0 ADCF1SGVCEP0_BASE.UINT8
#define ADCF1SGVCEP0_VCEP ADCF1SGVCEP0_BASE.BIT._VCEP
#define ADCF1SGMCYCR0 ADCF1SGMCYCR0_BASE.UINT8
#define ADCF1SGMCYCR0_MCYC ADCF1SGMCYCR0_BASE.BIT._MCYC
#define ADCF1SGSR0 ADCF1SGSR0_BASE.UINT8
#define ADCF1SGSR0_SGACT ADCF1SGSR0_BASE.BIT._SGACT
#define ADCF1ULLMSR0 ADCF1ULLMSR0_BASE.UINT8
#define ADCF1ULLMSR0_ULS ADCF1ULLMSR0_BASE.BIT._ULS
#define ADCF1SGSTCR1 ADCF1SGSTCR1_BASE.UINT8
#define ADCF1SGSTCR1_SGST ADCF1SGSTCR1_BASE.BIT._SGST
#define ADCF1SGCR1 ADCF1SGCR1_BASE.UINT8
#define ADCF1SGCR1_TRGMD ADCF1SGCR1_BASE.BIT._TRGMD
#define ADCF1SGCR1_ADIE ADCF1SGCR1_BASE.BIT._ADIE
#define ADCF1SGCR1_SCANMD ADCF1SGCR1_BASE.BIT._SCANMD
#define ADCF1SGCR1_ADSTARTE ADCF1SGCR1_BASE.BIT._ADSTARTE
#define ADCF1SGVCSP1 ADCF1SGVCSP1_BASE.UINT8
#define ADCF1SGVCSP1_VCSP ADCF1SGVCSP1_BASE.BIT._VCSP
#define ADCF1SGVCEP1 ADCF1SGVCEP1_BASE.UINT8
#define ADCF1SGVCEP1_VCEP ADCF1SGVCEP1_BASE.BIT._VCEP
#define ADCF1SGMCYCR1 ADCF1SGMCYCR1_BASE.UINT8
#define ADCF1SGMCYCR1_MCYC ADCF1SGMCYCR1_BASE.BIT._MCYC
#define ADCF1SGSR1 ADCF1SGSR1_BASE.UINT8
#define ADCF1SGSR1_SGACT ADCF1SGSR1_BASE.BIT._SGACT
#define ADCF1ULLMSR1 ADCF1ULLMSR1_BASE.UINT8
#define ADCF1ULLMSR1_ULS ADCF1ULLMSR1_BASE.BIT._ULS
#define ADCF1SGSTCR2 ADCF1SGSTCR2_BASE.UINT8
#define ADCF1SGSTCR2_SGST ADCF1SGSTCR2_BASE.BIT._SGST
#define ADCF1SGCR2 ADCF1SGCR2_BASE.UINT8
#define ADCF1SGCR2_TRGMD ADCF1SGCR2_BASE.BIT._TRGMD
#define ADCF1SGCR2_ADIE ADCF1SGCR2_BASE.BIT._ADIE
#define ADCF1SGCR2_SCANMD ADCF1SGCR2_BASE.BIT._SCANMD
#define ADCF1SGCR2_ADSTARTE ADCF1SGCR2_BASE.BIT._ADSTARTE
#define ADCF1SGVCSP2 ADCF1SGVCSP2_BASE.UINT8
#define ADCF1SGVCSP2_VCSP ADCF1SGVCSP2_BASE.BIT._VCSP
#define ADCF1SGVCEP2 ADCF1SGVCEP2_BASE.UINT8
#define ADCF1SGVCEP2_VCEP ADCF1SGVCEP2_BASE.BIT._VCEP
#define ADCF1SGMCYCR2 ADCF1SGMCYCR2_BASE.UINT8
#define ADCF1SGMCYCR2_MCYC ADCF1SGMCYCR2_BASE.BIT._MCYC
#define ADCF1SGSR2 ADCF1SGSR2_BASE.UINT8
#define ADCF1SGSR2_SGACT ADCF1SGSR2_BASE.BIT._SGACT
#define ADCF1ULLMSR2 ADCF1ULLMSR2_BASE.UINT8
#define ADCF1ULLMSR2_ULS ADCF1ULLMSR2_BASE.BIT._ULS
#define ADCF1SGSTCR3 ADCF1SGSTCR3_BASE.UINT8
#define ADCF1SGSTCR3_SGST ADCF1SGSTCR3_BASE.BIT._SGST
#define ADCF1ADTSTCR3 ADCF1ADTSTCR3_BASE.UINT8
#define ADCF1ADTSTCR3_ADTST ADCF1ADTSTCR3_BASE.BIT._ADTST
#define ADCF1ADTENDCR3 ADCF1ADTENDCR3_BASE.UINT8
#define ADCF1ADTENDCR3_ADTEND ADCF1ADTENDCR3_BASE.BIT._ADTEND
#define ADCF1SGCR3 ADCF1SGCR3_BASE.UINT8
#define ADCF1SGCR3_TRGMD ADCF1SGCR3_BASE.BIT._TRGMD
#define ADCF1SGCR3_ADIE ADCF1SGCR3_BASE.BIT._ADIE
#define ADCF1SGCR3_SCANMD ADCF1SGCR3_BASE.BIT._SCANMD
#define ADCF1SGCR3_ADSTARTE ADCF1SGCR3_BASE.BIT._ADSTARTE
#define ADCF1SGVCSP3 ADCF1SGVCSP3_BASE.UINT8
#define ADCF1SGVCSP3_VCSP ADCF1SGVCSP3_BASE.BIT._VCSP
#define ADCF1SGVCEP3 ADCF1SGVCEP3_BASE.UINT8
#define ADCF1SGVCEP3_VCEP ADCF1SGVCEP3_BASE.BIT._VCEP
#define ADCF1SGMCYCR3 ADCF1SGMCYCR3_BASE.UINT8
#define ADCF1SGMCYCR3_MCYC ADCF1SGMCYCR3_BASE.BIT._MCYC
#define ADCF1SGSR3 ADCF1SGSR3_BASE.UINT8
#define ADCF1SGSR3_SGACT ADCF1SGSR3_BASE.BIT._SGACT
#define ADCF1ADTIPR3 ADCF1ADTIPR3_BASE.UINT32
#define ADCF1ADTIPR3_ADTIP ADCF1ADTIPR3_BASE.BIT._ADTIP
#define ADCF1ADTPRR3 ADCF1ADTPRR3_BASE.UINT32
#define ADCF1ADTPRR3_ADTPR ADCF1ADTPRR3_BASE.BIT._ADTPR
#define ADCF1ULLMSR3 ADCF1ULLMSR3_BASE.UINT8
#define ADCF1ULLMSR3_ULS ADCF1ULLMSR3_BASE.BIT._ULS
#define ADCF1SGSTCR4 ADCF1SGSTCR4_BASE.UINT8
#define ADCF1SGSTCR4_SGST ADCF1SGSTCR4_BASE.BIT._SGST
#define ADCF1ADTSTCR4 ADCF1ADTSTCR4_BASE.UINT8
#define ADCF1ADTSTCR4_ADTST ADCF1ADTSTCR4_BASE.BIT._ADTST
#define ADCF1ADTENDCR4 ADCF1ADTENDCR4_BASE.UINT8
#define ADCF1ADTENDCR4_ADTEND ADCF1ADTENDCR4_BASE.BIT._ADTEND
#define ADCF1SGCR4 ADCF1SGCR4_BASE.UINT8
#define ADCF1SGCR4_TRGMD ADCF1SGCR4_BASE.BIT._TRGMD
#define ADCF1SGCR4_ADIE ADCF1SGCR4_BASE.BIT._ADIE
#define ADCF1SGCR4_SCANMD ADCF1SGCR4_BASE.BIT._SCANMD
#define ADCF1SGCR4_ADSTARTE ADCF1SGCR4_BASE.BIT._ADSTARTE
#define ADCF1SGVCSP4 ADCF1SGVCSP4_BASE.UINT8
#define ADCF1SGVCSP4_VCSP ADCF1SGVCSP4_BASE.BIT._VCSP
#define ADCF1SGVCEP4 ADCF1SGVCEP4_BASE.UINT8
#define ADCF1SGVCEP4_VCEP ADCF1SGVCEP4_BASE.BIT._VCEP
#define ADCF1SGMCYCR4 ADCF1SGMCYCR4_BASE.UINT8
#define ADCF1SGMCYCR4_MCYC ADCF1SGMCYCR4_BASE.BIT._MCYC
#define ADCF1SGSR4 ADCF1SGSR4_BASE.UINT8
#define ADCF1SGSR4_SGACT ADCF1SGSR4_BASE.BIT._SGACT
#define ADCF1ADTIPR4 ADCF1ADTIPR4_BASE.UINT32
#define ADCF1ADTIPR4_ADTIP ADCF1ADTIPR4_BASE.BIT._ADTIP
#define ADCF1ADTPRR4 ADCF1ADTPRR4_BASE.UINT32
#define ADCF1ADTPRR4_ADTPR ADCF1ADTPRR4_BASE.BIT._ADTPR
#define ADCF1ULLMSR4 ADCF1ULLMSR4_BASE.UINT8
#define ADCF1ULLMSR4_ULS ADCF1ULLMSR4_BASE.BIT._ULS

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif