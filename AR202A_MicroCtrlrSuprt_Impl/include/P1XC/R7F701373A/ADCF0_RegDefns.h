#ifndef __DR7F701373_ADCF0_HEADER__
#define __DR7F701373_ADCF0_HEADER__



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
} ADCF0VCR0Bits_t;

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
} ADCF0VCR1Bits_t;

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
} ADCF0VCR2Bits_t;

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
} ADCF0VCR3Bits_t;

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
} ADCF0VCR4Bits_t;

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
} ADCF0VCR5Bits_t;

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
} ADCF0VCR6Bits_t;

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
} ADCF0VCR7Bits_t;

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
} ADCF0VCR8Bits_t;

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
} ADCF0VCR9Bits_t;

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
} ADCF0VCR10Bits_t;

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
} ADCF0VCR11Bits_t;

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
} ADCF0VCR12Bits_t;

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
} ADCF0VCR13Bits_t;

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
} ADCF0VCR14Bits_t;

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
} ADCF0VCR15Bits_t;

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
} ADCF0VCR16Bits_t;

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
} ADCF0VCR17Bits_t;

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
} ADCF0VCR18Bits_t;

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
} ADCF0VCR19Bits_t;

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
} ADCF0VCR20Bits_t;

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
} ADCF0VCR21Bits_t;

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
} ADCF0VCR22Bits_t;

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
} ADCF0VCR23Bits_t;

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
} ADCF0VCR24Bits_t;

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
} ADCF0VCR25Bits_t;

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
} ADCF0VCR26Bits_t;

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
} ADCF0VCR27Bits_t;

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
} ADCF0VCR28Bits_t;

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
} ADCF0VCR29Bits_t;

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
} ADCF0VCR30Bits_t;

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
} ADCF0VCR31Bits_t;

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
} ADCF0VCR32Bits_t;

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
} ADCF0VCR33Bits_t;

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
} ADCF0VCR34Bits_t;

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
} ADCF0VCR35Bits_t;

typedef struct
{
    const uint32 _DR0 : 16;
    const uint32 _DR1 : 16;
} ADCF0DR00Bits_t;

typedef struct
{
    const uint32 _DR2 : 16;
    const uint32 _DR3 : 16;
} ADCF0DR02Bits_t;

typedef struct
{
    const uint32 _DR4 : 16;
    const uint32 _DR5 : 16;
} ADCF0DR04Bits_t;

typedef struct
{
    const uint32 _DR6 : 16;
    const uint32 _DR7 : 16;
} ADCF0DR06Bits_t;

typedef struct
{
    const uint32 _DR8 : 16;
    const uint32 _DR9 : 16;
} ADCF0DR08Bits_t;

typedef struct
{
    const uint32 _DR10 : 16;
    const uint32 _DR11 : 16;
} ADCF0DR10Bits_t;

typedef struct
{
    const uint32 _DR12 : 16;
    const uint32 _DR13 : 16;
} ADCF0DR12Bits_t;

typedef struct
{
    const uint32 _DR14 : 16;
    const uint32 _DR15 : 16;
} ADCF0DR14Bits_t;

typedef struct
{
    const uint32 _DR16 : 16;
    const uint32 _DR17 : 16;
} ADCF0DR16Bits_t;

typedef struct
{
    const uint32 _DR18 : 16;
    const uint32 _DR19 : 16;
} ADCF0DR18Bits_t;

typedef struct
{
    const uint32 _DR20 : 16;
    const uint32 _DR21 : 16;
} ADCF0DR20Bits_t;

typedef struct
{
    const uint32 _DR22 : 16;
    const uint32 _DR23 : 16;
} ADCF0DR22Bits_t;

typedef struct
{
    const uint32 _DR24 : 16;
    const uint32 _DR25 : 16;
} ADCF0DR24Bits_t;

typedef struct
{
    const uint32 _DR26 : 16;
    const uint32 _DR27 : 16;
} ADCF0DR26Bits_t;

typedef struct
{
    const uint32 _DR28 : 16;
    const uint32 _DR29 : 16;
} ADCF0DR28Bits_t;

typedef struct
{
    const uint32 _DR30 : 16;
    const uint32 _DR31 : 16;
} ADCF0DR30Bits_t;

typedef struct
{
    const uint32 _DR32 : 16;
    const uint32 _DR33 : 16;
} ADCF0DR32Bits_t;

typedef struct
{
    const uint32 _DR34 : 16;
    const uint32 _DR35 : 16;
} ADCF0DR34Bits_t;

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
} ADCF0DIR0Bits_t;

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
} ADCF0DIR1Bits_t;

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
} ADCF0DIR2Bits_t;

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
} ADCF0DIR3Bits_t;

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
} ADCF0DIR4Bits_t;

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
} ADCF0DIR5Bits_t;

typedef struct
{
    const uint32 _DR6 : 16;
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
} ADCF0DIR6Bits_t;

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
} ADCF0DIR7Bits_t;

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
} ADCF0DIR8Bits_t;

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
} ADCF0DIR9Bits_t;

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
} ADCF0DIR10Bits_t;

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
} ADCF0DIR11Bits_t;

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
} ADCF0DIR12Bits_t;

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
} ADCF0DIR13Bits_t;

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
} ADCF0DIR14Bits_t;

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
} ADCF0DIR15Bits_t;

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
} ADCF0DIR16Bits_t;

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
} ADCF0DIR17Bits_t;

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
} ADCF0DIR18Bits_t;

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
} ADCF0DIR19Bits_t;

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
} ADCF0DIR20Bits_t;

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
} ADCF0DIR21Bits_t;

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
} ADCF0DIR22Bits_t;

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
} ADCF0DIR23Bits_t;

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
} ADCF0DIR24Bits_t;

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
} ADCF0DIR25Bits_t;

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
} ADCF0DIR26Bits_t;

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
} ADCF0DIR27Bits_t;

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
} ADCF0DIR28Bits_t;

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
} ADCF0DIR29Bits_t;

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
} ADCF0DIR30Bits_t;

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
} ADCF0DIR31Bits_t;

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
} ADCF0DIR32Bits_t;

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
} ADCF0DIR33Bits_t;

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
} ADCF0DIR34Bits_t;

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
} ADCF0DIR35Bits_t;

typedef struct
{
    uint8 _ADSTART : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ADSYNSTCRBits_t;

typedef struct
{
    uint8 _ADTSTART : 1;
    uint8 padding1 : 1;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ADTSYNSTCRBits_t;

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
} ADCF0ADHALTRBits_t;

typedef struct
{
    uint8 _SUSMTD : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ADCR1Bits_t;

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
} ADCF0MPXCURCRBits_t;

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
} ADCF0MPXCURRBits_t;

typedef struct
{
    uint8 _MPXOW : 4;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0MPXOWRBits_t;

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
} ADCF0ADCR2Bits_t;

typedef struct
{
    uint8 _ENDP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ADENDP0Bits_t;

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
} ADCF0SFTCRBits_t;

typedef struct
{
    uint8 _TDLV : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 _TDE : 1;
} ADCF0TDCRBits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF0ULLMTBR0Bits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF0ULLMTBR1Bits_t;

typedef struct
{
    uint32 _LLMTB : 16;
    uint32 _ULMTB : 16;
} ADCF0ULLMTBR2Bits_t;

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
} ADCF0ECRBits_t;

typedef struct
{
    const uint8 _ULECAP : 6;
    uint8 padding6 : 1;
    const uint8 _ULE : 1;
} ADCF0ULERBits_t;

typedef struct
{
    const uint8 _OWECAP : 6;
    uint8 padding6 : 1;
    const uint8 _OWE : 1;
} ADCF0OWERBits_t;

typedef struct
{
    const uint8 _PECAP : 6;
    uint8 padding6 : 1;
    const uint8 _PE : 1;
} ADCF0PERBits_t;

typedef struct
{
    const uint8 _IDECAP : 6;
    uint8 padding6 : 1;
    const uint8 _IDE : 1;
} ADCF0IDERBits_t;

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
} ADCF0SGSTCR0Bits_t;

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
} ADCF0SGCR0Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCSP0Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCEP0Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF0SGMCYCR0Bits_t;

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
} ADCF0SGSR0Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ULLMSR0Bits_t;

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
} ADCF0SGSTCR1Bits_t;

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
} ADCF0SGCR1Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCSP1Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCEP1Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF0SGMCYCR1Bits_t;

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
} ADCF0SGSR1Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ULLMSR1Bits_t;

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
} ADCF0SGSTCR2Bits_t;

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
} ADCF0SGCR2Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCSP2Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCEP2Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF0SGMCYCR2Bits_t;

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
} ADCF0SGSR2Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ULLMSR2Bits_t;

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
} ADCF0SGSTCR3Bits_t;

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
} ADCF0ADTSTCR3Bits_t;

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
} ADCF0ADTENDCR3Bits_t;

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
} ADCF0SGCR3Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCSP3Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCEP3Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF0SGMCYCR3Bits_t;

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
} ADCF0SGSR3Bits_t;

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
} ADCF0ADTIPR3Bits_t;

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
} ADCF0ADTPRR3Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ULLMSR3Bits_t;

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
} ADCF0SGSTCR4Bits_t;

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
} ADCF0ADTSTCR4Bits_t;

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
} ADCF0ADTENDCR4Bits_t;

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
} ADCF0SGCR4Bits_t;

typedef struct
{
    uint8 _VCSP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCSP4Bits_t;

typedef struct
{
    uint8 _VCEP : 6;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0SGVCEP4Bits_t;

typedef struct
{
    uint8 _MCYC : 8;
} ADCF0SGMCYCR4Bits_t;

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
} ADCF0SGSR4Bits_t;

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
} ADCF0ADTIPR4Bits_t;

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
} ADCF0ADTPRR4Bits_t;

typedef struct
{
    uint8 _ULS : 2;
    uint8 padding2 : 1;
    uint8 padding3 : 1;
    uint8 padding4 : 1;
    uint8 padding5 : 1;
    uint8 padding6 : 1;
    uint8 padding7 : 1;
} ADCF0ULLMSR4Bits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    ADCF0VCR0Bits_t BIT;
} ADCF0VCR0_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR1Bits_t BIT;
} ADCF0VCR1_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR2Bits_t BIT;
} ADCF0VCR2_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR3Bits_t BIT;
} ADCF0VCR3_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR4Bits_t BIT;
} ADCF0VCR4_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR5Bits_t BIT;
} ADCF0VCR5_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR6Bits_t BIT;
} ADCF0VCR6_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR7Bits_t BIT;
} ADCF0VCR7_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR8Bits_t BIT;
} ADCF0VCR8_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR9Bits_t BIT;
} ADCF0VCR9_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR10Bits_t BIT;
} ADCF0VCR10_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR11Bits_t BIT;
} ADCF0VCR11_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR12Bits_t BIT;
} ADCF0VCR12_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR13Bits_t BIT;
} ADCF0VCR13_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR14Bits_t BIT;
} ADCF0VCR14_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR15Bits_t BIT;
} ADCF0VCR15_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR16Bits_t BIT;
} ADCF0VCR16_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR17Bits_t BIT;
} ADCF0VCR17_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR18Bits_t BIT;
} ADCF0VCR18_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR19Bits_t BIT;
} ADCF0VCR19_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR20Bits_t BIT;
} ADCF0VCR20_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR21Bits_t BIT;
} ADCF0VCR21_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR22Bits_t BIT;
} ADCF0VCR22_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR23Bits_t BIT;
} ADCF0VCR23_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR24Bits_t BIT;
} ADCF0VCR24_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR25Bits_t BIT;
} ADCF0VCR25_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR26Bits_t BIT;
} ADCF0VCR26_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR27Bits_t BIT;
} ADCF0VCR27_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR28Bits_t BIT;
} ADCF0VCR28_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR29Bits_t BIT;
} ADCF0VCR29_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR30Bits_t BIT;
} ADCF0VCR30_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR31Bits_t BIT;
} ADCF0VCR31_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR32Bits_t BIT;
} ADCF0VCR32_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR33Bits_t BIT;
} ADCF0VCR33_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR34Bits_t BIT;
} ADCF0VCR34_t;

typedef union
{
    uint32 UINT32;
    ADCF0VCR35Bits_t BIT;
} ADCF0VCR35_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR00Bits_t BIT;
} ADCF0DR00_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR02Bits_t BIT;
} ADCF0DR02_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR04Bits_t BIT;
} ADCF0DR04_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR06Bits_t BIT;
} ADCF0DR06_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR08Bits_t BIT;
} ADCF0DR08_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR10Bits_t BIT;
} ADCF0DR10_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR12Bits_t BIT;
} ADCF0DR12_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR14Bits_t BIT;
} ADCF0DR14_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR16Bits_t BIT;
} ADCF0DR16_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR18Bits_t BIT;
} ADCF0DR18_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR20Bits_t BIT;
} ADCF0DR20_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR22Bits_t BIT;
} ADCF0DR22_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR24Bits_t BIT;
} ADCF0DR24_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR26Bits_t BIT;
} ADCF0DR26_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR28Bits_t BIT;
} ADCF0DR28_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR30Bits_t BIT;
} ADCF0DR30_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR32Bits_t BIT;
} ADCF0DR32_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DR34Bits_t BIT;
} ADCF0DR34_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR0Bits_t BIT;
} ADCF0DIR0_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR1Bits_t BIT;
} ADCF0DIR1_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR2Bits_t BIT;
} ADCF0DIR2_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR3Bits_t BIT;
} ADCF0DIR3_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR4Bits_t BIT;
} ADCF0DIR4_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR5Bits_t BIT;
} ADCF0DIR5_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR6Bits_t BIT;
} ADCF0DIR6_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR7Bits_t BIT;
} ADCF0DIR7_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR8Bits_t BIT;
} ADCF0DIR8_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR9Bits_t BIT;
} ADCF0DIR9_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR10Bits_t BIT;
} ADCF0DIR10_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR11Bits_t BIT;
} ADCF0DIR11_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR12Bits_t BIT;
} ADCF0DIR12_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR13Bits_t BIT;
} ADCF0DIR13_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR14Bits_t BIT;
} ADCF0DIR14_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR15Bits_t BIT;
} ADCF0DIR15_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR16Bits_t BIT;
} ADCF0DIR16_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR17Bits_t BIT;
} ADCF0DIR17_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR18Bits_t BIT;
} ADCF0DIR18_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR19Bits_t BIT;
} ADCF0DIR19_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR20Bits_t BIT;
} ADCF0DIR20_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR21Bits_t BIT;
} ADCF0DIR21_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR22Bits_t BIT;
} ADCF0DIR22_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR23Bits_t BIT;
} ADCF0DIR23_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR24Bits_t BIT;
} ADCF0DIR24_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR25Bits_t BIT;
} ADCF0DIR25_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR26Bits_t BIT;
} ADCF0DIR26_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR27Bits_t BIT;
} ADCF0DIR27_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR28Bits_t BIT;
} ADCF0DIR28_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR29Bits_t BIT;
} ADCF0DIR29_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR30Bits_t BIT;
} ADCF0DIR30_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR31Bits_t BIT;
} ADCF0DIR31_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR32Bits_t BIT;
} ADCF0DIR32_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR33Bits_t BIT;
} ADCF0DIR33_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR34Bits_t BIT;
} ADCF0DIR34_t;

typedef union
{
    uint32 UINT32;
    const ADCF0DIR35Bits_t BIT;
} ADCF0DIR35_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADSYNSTCRBits_t BIT;
} ADCF0ADSYNSTCR_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADTSYNSTCRBits_t BIT;
} ADCF0ADTSYNSTCR_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADHALTRBits_t BIT;
} ADCF0ADHALTR_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADCR1Bits_t BIT;
} ADCF0ADCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF0MPXCURCRBits_t BIT;
} ADCF0MPXCURCR_t;

typedef union
{
    uint32 UINT32;
    const ADCF0MPXCURRBits_t BIT;
} ADCF0MPXCURR_t;

typedef union
{
    uint8 UINT8;
    ADCF0MPXOWRBits_t BIT;
} ADCF0MPXOWR_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADCR2Bits_t BIT;
} ADCF0ADCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADENDP0Bits_t BIT;
} ADCF0ADENDP0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SFTCRBits_t BIT;
} ADCF0SFTCR_t;

typedef union
{
    uint8 UINT8;
    ADCF0TDCRBits_t BIT;
} ADCF0TDCR_t;

typedef union
{
    uint32 UINT32;
    ADCF0ULLMTBR0Bits_t BIT;
} ADCF0ULLMTBR0_t;

typedef union
{
    uint32 UINT32;
    ADCF0ULLMTBR1Bits_t BIT;
} ADCF0ULLMTBR1_t;

typedef union
{
    uint32 UINT32;
    ADCF0ULLMTBR2Bits_t BIT;
} ADCF0ULLMTBR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0ECRBits_t BIT;
} ADCF0ECR_t;

typedef union
{
    uint8 UINT8;
    const ADCF0ULERBits_t BIT;
} ADCF0ULER_t;

typedef union
{
    uint8 UINT8;
    const ADCF0OWERBits_t BIT;
} ADCF0OWER_t;

typedef union
{
    uint8 UINT8;
    const ADCF0PERBits_t BIT;
} ADCF0PER_t;

typedef union
{
    uint8 UINT8;
    const ADCF0IDERBits_t BIT;
} ADCF0IDER_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGSTCR0Bits_t BIT;
} ADCF0SGSTCR0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGCR0Bits_t BIT;
} ADCF0SGCR0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCSP0Bits_t BIT;
} ADCF0SGVCSP0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCEP0Bits_t BIT;
} ADCF0SGVCEP0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGMCYCR0Bits_t BIT;
} ADCF0SGMCYCR0_t;

typedef union
{
    uint8 UINT8;
    const ADCF0SGSR0Bits_t BIT;
} ADCF0SGSR0_t;

typedef union
{
    uint8 UINT8;
    ADCF0ULLMSR0Bits_t BIT;
} ADCF0ULLMSR0_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGSTCR1Bits_t BIT;
} ADCF0SGSTCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGCR1Bits_t BIT;
} ADCF0SGCR1_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCSP1Bits_t BIT;
} ADCF0SGVCSP1_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCEP1Bits_t BIT;
} ADCF0SGVCEP1_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGMCYCR1Bits_t BIT;
} ADCF0SGMCYCR1_t;

typedef union
{
    uint8 UINT8;
    const ADCF0SGSR1Bits_t BIT;
} ADCF0SGSR1_t;

typedef union
{
    uint8 UINT8;
    ADCF0ULLMSR1Bits_t BIT;
} ADCF0ULLMSR1_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGSTCR2Bits_t BIT;
} ADCF0SGSTCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGCR2Bits_t BIT;
} ADCF0SGCR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCSP2Bits_t BIT;
} ADCF0SGVCSP2_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCEP2Bits_t BIT;
} ADCF0SGVCEP2_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGMCYCR2Bits_t BIT;
} ADCF0SGMCYCR2_t;

typedef union
{
    uint8 UINT8;
    const ADCF0SGSR2Bits_t BIT;
} ADCF0SGSR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0ULLMSR2Bits_t BIT;
} ADCF0ULLMSR2_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGSTCR3Bits_t BIT;
} ADCF0SGSTCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADTSTCR3Bits_t BIT;
} ADCF0ADTSTCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADTENDCR3Bits_t BIT;
} ADCF0ADTENDCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGCR3Bits_t BIT;
} ADCF0SGCR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCSP3Bits_t BIT;
} ADCF0SGVCSP3_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCEP3Bits_t BIT;
} ADCF0SGVCEP3_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGMCYCR3Bits_t BIT;
} ADCF0SGMCYCR3_t;

typedef union
{
    uint8 UINT8;
    const ADCF0SGSR3Bits_t BIT;
} ADCF0SGSR3_t;

typedef union
{
    uint32 UINT32;
    ADCF0ADTIPR3Bits_t BIT;
} ADCF0ADTIPR3_t;

typedef union
{
    uint32 UINT32;
    ADCF0ADTPRR3Bits_t BIT;
} ADCF0ADTPRR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0ULLMSR3Bits_t BIT;
} ADCF0ULLMSR3_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGSTCR4Bits_t BIT;
} ADCF0SGSTCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADTSTCR4Bits_t BIT;
} ADCF0ADTSTCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF0ADTENDCR4Bits_t BIT;
} ADCF0ADTENDCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGCR4Bits_t BIT;
} ADCF0SGCR4_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCSP4Bits_t BIT;
} ADCF0SGVCSP4_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGVCEP4Bits_t BIT;
} ADCF0SGVCEP4_t;

typedef union
{
    uint8 UINT8;
    ADCF0SGMCYCR4Bits_t BIT;
} ADCF0SGMCYCR4_t;

typedef union
{
    uint8 UINT8;
    const ADCF0SGSR4Bits_t BIT;
} ADCF0SGSR4_t;

typedef union
{
    uint32 UINT32;
    ADCF0ADTIPR4Bits_t BIT;
} ADCF0ADTIPR4_t;

typedef union
{
    uint32 UINT32;
    ADCF0ADTPRR4Bits_t BIT;
} ADCF0ADTPRR4_t;

typedef union
{
    uint8 UINT8;
    ADCF0ULLMSR4Bits_t BIT;
} ADCF0ULLMSR4_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(ADCF0VCR0_BASE, 0xFFF91000, __READ_WRITE, ADCF0VCR0_t);
__IOREG(ADCF0VCR1_BASE, 0xFFF91004, __READ_WRITE, ADCF0VCR1_t);
__IOREG(ADCF0VCR2_BASE, 0xFFF91008, __READ_WRITE, ADCF0VCR2_t);
__IOREG(ADCF0VCR3_BASE, 0xFFF9100C, __READ_WRITE, ADCF0VCR3_t);
__IOREG(ADCF0VCR4_BASE, 0xFFF91010, __READ_WRITE, ADCF0VCR4_t);
__IOREG(ADCF0VCR5_BASE, 0xFFF91014, __READ_WRITE, ADCF0VCR5_t);
__IOREG(ADCF0VCR6_BASE, 0xFFF91018, __READ_WRITE, ADCF0VCR6_t);
__IOREG(ADCF0VCR7_BASE, 0xFFF9101C, __READ_WRITE, ADCF0VCR7_t);
__IOREG(ADCF0VCR8_BASE, 0xFFF91020, __READ_WRITE, ADCF0VCR8_t);
__IOREG(ADCF0VCR9_BASE, 0xFFF91024, __READ_WRITE, ADCF0VCR9_t);
__IOREG(ADCF0VCR10_BASE, 0xFFF91028, __READ_WRITE, ADCF0VCR10_t);
__IOREG(ADCF0VCR11_BASE, 0xFFF9102C, __READ_WRITE, ADCF0VCR11_t);
__IOREG(ADCF0VCR12_BASE, 0xFFF91030, __READ_WRITE, ADCF0VCR12_t);
__IOREG(ADCF0VCR13_BASE, 0xFFF91034, __READ_WRITE, ADCF0VCR13_t);
__IOREG(ADCF0VCR14_BASE, 0xFFF91038, __READ_WRITE, ADCF0VCR14_t);
__IOREG(ADCF0VCR15_BASE, 0xFFF9103C, __READ_WRITE, ADCF0VCR15_t);
__IOREG(ADCF0VCR16_BASE, 0xFFF91040, __READ_WRITE, ADCF0VCR16_t);
__IOREG(ADCF0VCR17_BASE, 0xFFF91044, __READ_WRITE, ADCF0VCR17_t);
__IOREG(ADCF0VCR18_BASE, 0xFFF91048, __READ_WRITE, ADCF0VCR18_t);
__IOREG(ADCF0VCR19_BASE, 0xFFF9104C, __READ_WRITE, ADCF0VCR19_t);
__IOREG(ADCF0VCR20_BASE, 0xFFF91050, __READ_WRITE, ADCF0VCR20_t);
__IOREG(ADCF0VCR21_BASE, 0xFFF91054, __READ_WRITE, ADCF0VCR21_t);
__IOREG(ADCF0VCR22_BASE, 0xFFF91058, __READ_WRITE, ADCF0VCR22_t);
__IOREG(ADCF0VCR23_BASE, 0xFFF9105C, __READ_WRITE, ADCF0VCR23_t);
__IOREG(ADCF0VCR24_BASE, 0xFFF91060, __READ_WRITE, ADCF0VCR24_t);
__IOREG(ADCF0VCR25_BASE, 0xFFF91064, __READ_WRITE, ADCF0VCR25_t);
__IOREG(ADCF0VCR26_BASE, 0xFFF91068, __READ_WRITE, ADCF0VCR26_t);
__IOREG(ADCF0VCR27_BASE, 0xFFF9106C, __READ_WRITE, ADCF0VCR27_t);
__IOREG(ADCF0VCR28_BASE, 0xFFF91070, __READ_WRITE, ADCF0VCR28_t);
__IOREG(ADCF0VCR29_BASE, 0xFFF91074, __READ_WRITE, ADCF0VCR29_t);
__IOREG(ADCF0VCR30_BASE, 0xFFF91078, __READ_WRITE, ADCF0VCR30_t);
__IOREG(ADCF0VCR31_BASE, 0xFFF9107C, __READ_WRITE, ADCF0VCR31_t);
__IOREG(ADCF0VCR32_BASE, 0xFFF91080, __READ_WRITE, ADCF0VCR32_t);
__IOREG(ADCF0VCR33_BASE, 0xFFF91084, __READ_WRITE, ADCF0VCR33_t);
__IOREG(ADCF0VCR34_BASE, 0xFFF91088, __READ_WRITE, ADCF0VCR34_t);
__IOREG(ADCF0VCR35_BASE, 0xFFF9108C, __READ_WRITE, ADCF0VCR35_t);
__IOREG(ADCF0DR00_BASE, 0xFFF91100, __READ, ADCF0DR00_t);
__IOREG(ADCF0DR02_BASE, 0xFFF91104, __READ, ADCF0DR02_t);
__IOREG(ADCF0DR04_BASE, 0xFFF91108, __READ, ADCF0DR04_t);
__IOREG(ADCF0DR06_BASE, 0xFFF9110C, __READ, ADCF0DR06_t);
__IOREG(ADCF0DR08_BASE, 0xFFF91110, __READ, ADCF0DR08_t);
__IOREG(ADCF0DR10_BASE, 0xFFF91114, __READ, ADCF0DR10_t);
__IOREG(ADCF0DR12_BASE, 0xFFF91118, __READ, ADCF0DR12_t);
__IOREG(ADCF0DR14_BASE, 0xFFF9111C, __READ, ADCF0DR14_t);
__IOREG(ADCF0DR16_BASE, 0xFFF91120, __READ, ADCF0DR16_t);
__IOREG(ADCF0DR18_BASE, 0xFFF91124, __READ, ADCF0DR18_t);
__IOREG(ADCF0DR20_BASE, 0xFFF91128, __READ, ADCF0DR20_t);
__IOREG(ADCF0DR22_BASE, 0xFFF9112C, __READ, ADCF0DR22_t);
__IOREG(ADCF0DR24_BASE, 0xFFF91130, __READ, ADCF0DR24_t);
__IOREG(ADCF0DR26_BASE, 0xFFF91134, __READ, ADCF0DR26_t);
__IOREG(ADCF0DR28_BASE, 0xFFF91138, __READ, ADCF0DR28_t);
__IOREG(ADCF0DR30_BASE, 0xFFF9113C, __READ, ADCF0DR30_t);
__IOREG(ADCF0DR32_BASE, 0xFFF91140, __READ, ADCF0DR32_t);
__IOREG(ADCF0DR34_BASE, 0xFFF91144, __READ, ADCF0DR34_t);
__IOREG(ADCF0DIR0_BASE, 0xFFF91200, __READ, ADCF0DIR0_t);
__IOREG(ADCF0DIR1_BASE, 0xFFF91204, __READ, ADCF0DIR1_t);
__IOREG(ADCF0DIR2_BASE, 0xFFF91208, __READ, ADCF0DIR2_t);
__IOREG(ADCF0DIR3_BASE, 0xFFF9120C, __READ, ADCF0DIR3_t);
__IOREG(ADCF0DIR4_BASE, 0xFFF91210, __READ, ADCF0DIR4_t);
__IOREG(ADCF0DIR5_BASE, 0xFFF91214, __READ, ADCF0DIR5_t);
__IOREG(ADCF0DIR6_BASE, 0xFFF91218, __READ, ADCF0DIR6_t);
__IOREG(ADCF0DIR7_BASE, 0xFFF9121C, __READ, ADCF0DIR7_t);
__IOREG(ADCF0DIR8_BASE, 0xFFF91220, __READ, ADCF0DIR8_t);
__IOREG(ADCF0DIR9_BASE, 0xFFF91224, __READ, ADCF0DIR9_t);
__IOREG(ADCF0DIR10_BASE, 0xFFF91228, __READ, ADCF0DIR10_t);
__IOREG(ADCF0DIR11_BASE, 0xFFF9122C, __READ, ADCF0DIR11_t);
__IOREG(ADCF0DIR12_BASE, 0xFFF91230, __READ, ADCF0DIR12_t);
__IOREG(ADCF0DIR13_BASE, 0xFFF91234, __READ, ADCF0DIR13_t);
__IOREG(ADCF0DIR14_BASE, 0xFFF91238, __READ, ADCF0DIR14_t);
__IOREG(ADCF0DIR15_BASE, 0xFFF9123C, __READ, ADCF0DIR15_t);
__IOREG(ADCF0DIR16_BASE, 0xFFF91240, __READ, ADCF0DIR16_t);
__IOREG(ADCF0DIR17_BASE, 0xFFF91244, __READ, ADCF0DIR17_t);
__IOREG(ADCF0DIR18_BASE, 0xFFF91248, __READ, ADCF0DIR18_t);
__IOREG(ADCF0DIR19_BASE, 0xFFF9124C, __READ, ADCF0DIR19_t);
__IOREG(ADCF0DIR20_BASE, 0xFFF91250, __READ, ADCF0DIR20_t);
__IOREG(ADCF0DIR21_BASE, 0xFFF91254, __READ, ADCF0DIR21_t);
__IOREG(ADCF0DIR22_BASE, 0xFFF91258, __READ, ADCF0DIR22_t);
__IOREG(ADCF0DIR23_BASE, 0xFFF9125C, __READ, ADCF0DIR23_t);
__IOREG(ADCF0DIR24_BASE, 0xFFF91260, __READ, ADCF0DIR24_t);
__IOREG(ADCF0DIR25_BASE, 0xFFF91264, __READ, ADCF0DIR25_t);
__IOREG(ADCF0DIR26_BASE, 0xFFF91268, __READ, ADCF0DIR26_t);
__IOREG(ADCF0DIR27_BASE, 0xFFF9126C, __READ, ADCF0DIR27_t);
__IOREG(ADCF0DIR28_BASE, 0xFFF91270, __READ, ADCF0DIR28_t);
__IOREG(ADCF0DIR29_BASE, 0xFFF91274, __READ, ADCF0DIR29_t);
__IOREG(ADCF0DIR30_BASE, 0xFFF91278, __READ, ADCF0DIR30_t);
__IOREG(ADCF0DIR31_BASE, 0xFFF9127C, __READ, ADCF0DIR31_t);
__IOREG(ADCF0DIR32_BASE, 0xFFF91280, __READ, ADCF0DIR32_t);
__IOREG(ADCF0DIR33_BASE, 0xFFF91284, __READ, ADCF0DIR33_t);
__IOREG(ADCF0DIR34_BASE, 0xFFF91288, __READ, ADCF0DIR34_t);
__IOREG(ADCF0DIR35_BASE, 0xFFF9128C, __READ, ADCF0DIR35_t);
__IOREG(ADCF0ADSYNSTCR_BASE, 0xFFF91300, __READ_WRITE, ADCF0ADSYNSTCR_t);
__IOREG(ADCF0ADTSYNSTCR_BASE, 0xFFF91304, __READ_WRITE, ADCF0ADTSYNSTCR_t);
__IOREG(ADCF0ADHALTR_BASE, 0xFFF91380, __READ_WRITE, ADCF0ADHALTR_t);
__IOREG(ADCF0ADCR1_BASE, 0xFFF91384, __READ_WRITE, ADCF0ADCR1_t);
__IOREG(ADCF0MPXCURCR_BASE, 0xFFF91388, __READ_WRITE, ADCF0MPXCURCR_t);
__IOREG(ADCF0MPXCURR_BASE, 0xFFF9138C, __READ, ADCF0MPXCURR_t);
__IOREG(ADCF0MPXOWR_BASE, 0xFFF91390, __READ_WRITE, ADCF0MPXOWR_t);
__IOREG(ADCF0ADCR2_BASE, 0xFFF91398, __READ_WRITE, ADCF0ADCR2_t);
__IOREG(ADCF0ADENDP0_BASE, 0xFFF913A0, __READ_WRITE, ADCF0ADENDP0_t);
__IOREG(ADCF0SFTCR_BASE, 0xFFF913C0, __READ_WRITE, ADCF0SFTCR_t);
__IOREG(ADCF0TDCR_BASE, 0xFFF913C4, __READ_WRITE, ADCF0TDCR_t);
__IOREG(ADCF0ULLMTBR0_BASE, 0xFFF913CC, __READ_WRITE, ADCF0ULLMTBR0_t);
__IOREG(ADCF0ULLMTBR1_BASE, 0xFFF913D0, __READ_WRITE, ADCF0ULLMTBR1_t);
__IOREG(ADCF0ULLMTBR2_BASE, 0xFFF913D4, __READ_WRITE, ADCF0ULLMTBR2_t);
__IOREG(ADCF0ECR_BASE, 0xFFF913D8, __READ_WRITE, ADCF0ECR_t);
__IOREG(ADCF0ULER_BASE, 0xFFF913DC, __READ, ADCF0ULER_t);
__IOREG(ADCF0OWER_BASE, 0xFFF913E0, __READ, ADCF0OWER_t);
__IOREG(ADCF0PER_BASE, 0xFFF913E4, __READ, ADCF0PER_t);
__IOREG(ADCF0IDER_BASE, 0xFFF913E8, __READ, ADCF0IDER_t);
__IOREG(ADCF0SGSTCR0_BASE, 0xFFF91480, __READ_WRITE, ADCF0SGSTCR0_t);
__IOREG(ADCF0SGCR0_BASE, 0xFFF91490, __READ_WRITE, ADCF0SGCR0_t);
__IOREG(ADCF0SGVCSP0_BASE, 0xFFF91494, __READ_WRITE, ADCF0SGVCSP0_t);
__IOREG(ADCF0SGVCEP0_BASE, 0xFFF91498, __READ_WRITE, ADCF0SGVCEP0_t);
__IOREG(ADCF0SGMCYCR0_BASE, 0xFFF9149C, __READ_WRITE, ADCF0SGMCYCR0_t);
__IOREG(ADCF0SGSR0_BASE, 0xFFF914A4, __READ, ADCF0SGSR0_t);
__IOREG(ADCF0ULLMSR0_BASE, 0xFFF914B0, __READ_WRITE, ADCF0ULLMSR0_t);
__IOREG(ADCF0SGSTCR1_BASE, 0xFFF91500, __READ_WRITE, ADCF0SGSTCR1_t);
__IOREG(ADCF0SGCR1_BASE, 0xFFF91510, __READ_WRITE, ADCF0SGCR1_t);
__IOREG(ADCF0SGVCSP1_BASE, 0xFFF91514, __READ_WRITE, ADCF0SGVCSP1_t);
__IOREG(ADCF0SGVCEP1_BASE, 0xFFF91518, __READ_WRITE, ADCF0SGVCEP1_t);
__IOREG(ADCF0SGMCYCR1_BASE, 0xFFF9151C, __READ_WRITE, ADCF0SGMCYCR1_t);
__IOREG(ADCF0SGSR1_BASE, 0xFFF91524, __READ, ADCF0SGSR1_t);
__IOREG(ADCF0ULLMSR1_BASE, 0xFFF91530, __READ_WRITE, ADCF0ULLMSR1_t);
__IOREG(ADCF0SGSTCR2_BASE, 0xFFF91580, __READ_WRITE, ADCF0SGSTCR2_t);
__IOREG(ADCF0SGCR2_BASE, 0xFFF91590, __READ_WRITE, ADCF0SGCR2_t);
__IOREG(ADCF0SGVCSP2_BASE, 0xFFF91594, __READ_WRITE, ADCF0SGVCSP2_t);
__IOREG(ADCF0SGVCEP2_BASE, 0xFFF91598, __READ_WRITE, ADCF0SGVCEP2_t);
__IOREG(ADCF0SGMCYCR2_BASE, 0xFFF9159C, __READ_WRITE, ADCF0SGMCYCR2_t);
__IOREG(ADCF0SGSR2_BASE, 0xFFF915A4, __READ, ADCF0SGSR2_t);
__IOREG(ADCF0ULLMSR2_BASE, 0xFFF915B0, __READ_WRITE, ADCF0ULLMSR2_t);
__IOREG(ADCF0SGSTCR3_BASE, 0xFFF91600, __READ_WRITE, ADCF0SGSTCR3_t);
__IOREG(ADCF0ADTSTCR3_BASE, 0xFFF91608, __READ_WRITE, ADCF0ADTSTCR3_t);
__IOREG(ADCF0ADTENDCR3_BASE, 0xFFF9160C, __READ_WRITE, ADCF0ADTENDCR3_t);
__IOREG(ADCF0SGCR3_BASE, 0xFFF91610, __READ_WRITE, ADCF0SGCR3_t);
__IOREG(ADCF0SGVCSP3_BASE, 0xFFF91614, __READ_WRITE, ADCF0SGVCSP3_t);
__IOREG(ADCF0SGVCEP3_BASE, 0xFFF91618, __READ_WRITE, ADCF0SGVCEP3_t);
__IOREG(ADCF0SGMCYCR3_BASE, 0xFFF9161C, __READ_WRITE, ADCF0SGMCYCR3_t);
__IOREG(ADCF0SGSR3_BASE, 0xFFF91624, __READ, ADCF0SGSR3_t);
__IOREG(ADCF0ADTIPR3_BASE, 0xFFF91628, __READ_WRITE, ADCF0ADTIPR3_t);
__IOREG(ADCF0ADTPRR3_BASE, 0xFFF9162C, __READ_WRITE, ADCF0ADTPRR3_t);
__IOREG(ADCF0ULLMSR3_BASE, 0xFFF91630, __READ_WRITE, ADCF0ULLMSR3_t);
__IOREG(ADCF0SGSTCR4_BASE, 0xFFF91680, __READ_WRITE, ADCF0SGSTCR4_t);
__IOREG(ADCF0ADTSTCR4_BASE, 0xFFF91688, __READ_WRITE, ADCF0ADTSTCR4_t);
__IOREG(ADCF0ADTENDCR4_BASE, 0xFFF9168C, __READ_WRITE, ADCF0ADTENDCR4_t);
__IOREG(ADCF0SGCR4_BASE, 0xFFF91690, __READ_WRITE, ADCF0SGCR4_t);
__IOREG(ADCF0SGVCSP4_BASE, 0xFFF91694, __READ_WRITE, ADCF0SGVCSP4_t);
__IOREG(ADCF0SGVCEP4_BASE, 0xFFF91698, __READ_WRITE, ADCF0SGVCEP4_t);
__IOREG(ADCF0SGMCYCR4_BASE, 0xFFF9169C, __READ_WRITE, ADCF0SGMCYCR4_t);
__IOREG(ADCF0SGSR4_BASE, 0xFFF916A4, __READ, ADCF0SGSR4_t);
__IOREG(ADCF0ADTIPR4_BASE, 0xFFF916A8, __READ_WRITE, ADCF0ADTIPR4_t);
__IOREG(ADCF0ADTPRR4_BASE, 0xFFF916AC, __READ_WRITE, ADCF0ADTPRR4_t);
__IOREG(ADCF0ULLMSR4_BASE, 0xFFF916B0, __READ_WRITE, ADCF0ULLMSR4_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define ADCF0VCR0 ADCF0VCR0_BASE.UINT32
#define ADCF0VCR0_GCTRL ADCF0VCR0_BASE.BIT._GCTRL
#define ADCF0VCR0_ADIE ADCF0VCR0_BASE.BIT._ADIE
#define ADCF0VCR0_CNVCLS ADCF0VCR0_BASE.BIT._CNVCLS
#define ADCF0VCR0_PDE ADCF0VCR0_BASE.BIT._PDE
#define ADCF0VCR0_PUE ADCF0VCR0_BASE.BIT._PUE
#define ADCF0VCR1 ADCF0VCR1_BASE.UINT32
#define ADCF0VCR1_GCTRL ADCF0VCR1_BASE.BIT._GCTRL
#define ADCF0VCR1_ADIE ADCF0VCR1_BASE.BIT._ADIE
#define ADCF0VCR1_CNVCLS ADCF0VCR1_BASE.BIT._CNVCLS
#define ADCF0VCR1_PDE ADCF0VCR1_BASE.BIT._PDE
#define ADCF0VCR1_PUE ADCF0VCR1_BASE.BIT._PUE
#define ADCF0VCR2 ADCF0VCR2_BASE.UINT32
#define ADCF0VCR2_GCTRL ADCF0VCR2_BASE.BIT._GCTRL
#define ADCF0VCR2_ADIE ADCF0VCR2_BASE.BIT._ADIE
#define ADCF0VCR2_CNVCLS ADCF0VCR2_BASE.BIT._CNVCLS
#define ADCF0VCR2_PDE ADCF0VCR2_BASE.BIT._PDE
#define ADCF0VCR2_PUE ADCF0VCR2_BASE.BIT._PUE
#define ADCF0VCR3 ADCF0VCR3_BASE.UINT32
#define ADCF0VCR3_GCTRL ADCF0VCR3_BASE.BIT._GCTRL
#define ADCF0VCR3_ADIE ADCF0VCR3_BASE.BIT._ADIE
#define ADCF0VCR3_CNVCLS ADCF0VCR3_BASE.BIT._CNVCLS
#define ADCF0VCR3_PDE ADCF0VCR3_BASE.BIT._PDE
#define ADCF0VCR3_PUE ADCF0VCR3_BASE.BIT._PUE
#define ADCF0VCR4 ADCF0VCR4_BASE.UINT32
#define ADCF0VCR4_GCTRL ADCF0VCR4_BASE.BIT._GCTRL
#define ADCF0VCR4_ADIE ADCF0VCR4_BASE.BIT._ADIE
#define ADCF0VCR4_CNVCLS ADCF0VCR4_BASE.BIT._CNVCLS
#define ADCF0VCR4_PDE ADCF0VCR4_BASE.BIT._PDE
#define ADCF0VCR4_PUE ADCF0VCR4_BASE.BIT._PUE
#define ADCF0VCR5 ADCF0VCR5_BASE.UINT32
#define ADCF0VCR5_GCTRL ADCF0VCR5_BASE.BIT._GCTRL
#define ADCF0VCR5_ADIE ADCF0VCR5_BASE.BIT._ADIE
#define ADCF0VCR5_CNVCLS ADCF0VCR5_BASE.BIT._CNVCLS
#define ADCF0VCR5_PDE ADCF0VCR5_BASE.BIT._PDE
#define ADCF0VCR5_PUE ADCF0VCR5_BASE.BIT._PUE
#define ADCF0VCR6 ADCF0VCR6_BASE.UINT32
#define ADCF0VCR6_GCTRL ADCF0VCR6_BASE.BIT._GCTRL
#define ADCF0VCR6_ADIE ADCF0VCR6_BASE.BIT._ADIE
#define ADCF0VCR6_CNVCLS ADCF0VCR6_BASE.BIT._CNVCLS
#define ADCF0VCR6_PDE ADCF0VCR6_BASE.BIT._PDE
#define ADCF0VCR6_PUE ADCF0VCR6_BASE.BIT._PUE
#define ADCF0VCR7 ADCF0VCR7_BASE.UINT32
#define ADCF0VCR7_GCTRL ADCF0VCR7_BASE.BIT._GCTRL
#define ADCF0VCR7_ADIE ADCF0VCR7_BASE.BIT._ADIE
#define ADCF0VCR7_CNVCLS ADCF0VCR7_BASE.BIT._CNVCLS
#define ADCF0VCR7_PDE ADCF0VCR7_BASE.BIT._PDE
#define ADCF0VCR7_PUE ADCF0VCR7_BASE.BIT._PUE
#define ADCF0VCR8 ADCF0VCR8_BASE.UINT32
#define ADCF0VCR8_GCTRL ADCF0VCR8_BASE.BIT._GCTRL
#define ADCF0VCR8_ADIE ADCF0VCR8_BASE.BIT._ADIE
#define ADCF0VCR8_CNVCLS ADCF0VCR8_BASE.BIT._CNVCLS
#define ADCF0VCR8_PDE ADCF0VCR8_BASE.BIT._PDE
#define ADCF0VCR8_PUE ADCF0VCR8_BASE.BIT._PUE
#define ADCF0VCR9 ADCF0VCR9_BASE.UINT32
#define ADCF0VCR9_GCTRL ADCF0VCR9_BASE.BIT._GCTRL
#define ADCF0VCR9_ADIE ADCF0VCR9_BASE.BIT._ADIE
#define ADCF0VCR9_CNVCLS ADCF0VCR9_BASE.BIT._CNVCLS
#define ADCF0VCR9_PDE ADCF0VCR9_BASE.BIT._PDE
#define ADCF0VCR9_PUE ADCF0VCR9_BASE.BIT._PUE
#define ADCF0VCR10 ADCF0VCR10_BASE.UINT32
#define ADCF0VCR10_GCTRL ADCF0VCR10_BASE.BIT._GCTRL
#define ADCF0VCR10_ADIE ADCF0VCR10_BASE.BIT._ADIE
#define ADCF0VCR10_CNVCLS ADCF0VCR10_BASE.BIT._CNVCLS
#define ADCF0VCR10_PDE ADCF0VCR10_BASE.BIT._PDE
#define ADCF0VCR10_PUE ADCF0VCR10_BASE.BIT._PUE
#define ADCF0VCR11 ADCF0VCR11_BASE.UINT32
#define ADCF0VCR11_GCTRL ADCF0VCR11_BASE.BIT._GCTRL
#define ADCF0VCR11_ADIE ADCF0VCR11_BASE.BIT._ADIE
#define ADCF0VCR11_CNVCLS ADCF0VCR11_BASE.BIT._CNVCLS
#define ADCF0VCR11_PDE ADCF0VCR11_BASE.BIT._PDE
#define ADCF0VCR11_PUE ADCF0VCR11_BASE.BIT._PUE
#define ADCF0VCR12 ADCF0VCR12_BASE.UINT32
#define ADCF0VCR12_GCTRL ADCF0VCR12_BASE.BIT._GCTRL
#define ADCF0VCR12_ADIE ADCF0VCR12_BASE.BIT._ADIE
#define ADCF0VCR12_CNVCLS ADCF0VCR12_BASE.BIT._CNVCLS
#define ADCF0VCR12_PDE ADCF0VCR12_BASE.BIT._PDE
#define ADCF0VCR12_PUE ADCF0VCR12_BASE.BIT._PUE
#define ADCF0VCR13 ADCF0VCR13_BASE.UINT32
#define ADCF0VCR13_GCTRL ADCF0VCR13_BASE.BIT._GCTRL
#define ADCF0VCR13_ADIE ADCF0VCR13_BASE.BIT._ADIE
#define ADCF0VCR13_CNVCLS ADCF0VCR13_BASE.BIT._CNVCLS
#define ADCF0VCR13_PDE ADCF0VCR13_BASE.BIT._PDE
#define ADCF0VCR13_PUE ADCF0VCR13_BASE.BIT._PUE
#define ADCF0VCR14 ADCF0VCR14_BASE.UINT32
#define ADCF0VCR14_GCTRL ADCF0VCR14_BASE.BIT._GCTRL
#define ADCF0VCR14_ADIE ADCF0VCR14_BASE.BIT._ADIE
#define ADCF0VCR14_CNVCLS ADCF0VCR14_BASE.BIT._CNVCLS
#define ADCF0VCR14_PDE ADCF0VCR14_BASE.BIT._PDE
#define ADCF0VCR14_PUE ADCF0VCR14_BASE.BIT._PUE
#define ADCF0VCR15 ADCF0VCR15_BASE.UINT32
#define ADCF0VCR15_GCTRL ADCF0VCR15_BASE.BIT._GCTRL
#define ADCF0VCR15_ADIE ADCF0VCR15_BASE.BIT._ADIE
#define ADCF0VCR15_CNVCLS ADCF0VCR15_BASE.BIT._CNVCLS
#define ADCF0VCR15_PDE ADCF0VCR15_BASE.BIT._PDE
#define ADCF0VCR15_PUE ADCF0VCR15_BASE.BIT._PUE
#define ADCF0VCR16 ADCF0VCR16_BASE.UINT32
#define ADCF0VCR16_GCTRL ADCF0VCR16_BASE.BIT._GCTRL
#define ADCF0VCR16_ADIE ADCF0VCR16_BASE.BIT._ADIE
#define ADCF0VCR16_CNVCLS ADCF0VCR16_BASE.BIT._CNVCLS
#define ADCF0VCR16_PDE ADCF0VCR16_BASE.BIT._PDE
#define ADCF0VCR16_PUE ADCF0VCR16_BASE.BIT._PUE
#define ADCF0VCR17 ADCF0VCR17_BASE.UINT32
#define ADCF0VCR17_GCTRL ADCF0VCR17_BASE.BIT._GCTRL
#define ADCF0VCR17_ADIE ADCF0VCR17_BASE.BIT._ADIE
#define ADCF0VCR17_CNVCLS ADCF0VCR17_BASE.BIT._CNVCLS
#define ADCF0VCR17_PDE ADCF0VCR17_BASE.BIT._PDE
#define ADCF0VCR17_PUE ADCF0VCR17_BASE.BIT._PUE
#define ADCF0VCR18 ADCF0VCR18_BASE.UINT32
#define ADCF0VCR18_GCTRL ADCF0VCR18_BASE.BIT._GCTRL
#define ADCF0VCR18_ADIE ADCF0VCR18_BASE.BIT._ADIE
#define ADCF0VCR18_CNVCLS ADCF0VCR18_BASE.BIT._CNVCLS
#define ADCF0VCR18_PDE ADCF0VCR18_BASE.BIT._PDE
#define ADCF0VCR18_PUE ADCF0VCR18_BASE.BIT._PUE
#define ADCF0VCR19 ADCF0VCR19_BASE.UINT32
#define ADCF0VCR19_GCTRL ADCF0VCR19_BASE.BIT._GCTRL
#define ADCF0VCR19_ADIE ADCF0VCR19_BASE.BIT._ADIE
#define ADCF0VCR19_CNVCLS ADCF0VCR19_BASE.BIT._CNVCLS
#define ADCF0VCR19_PDE ADCF0VCR19_BASE.BIT._PDE
#define ADCF0VCR19_PUE ADCF0VCR19_BASE.BIT._PUE
#define ADCF0VCR20 ADCF0VCR20_BASE.UINT32
#define ADCF0VCR20_GCTRL ADCF0VCR20_BASE.BIT._GCTRL
#define ADCF0VCR20_ADIE ADCF0VCR20_BASE.BIT._ADIE
#define ADCF0VCR20_CNVCLS ADCF0VCR20_BASE.BIT._CNVCLS
#define ADCF0VCR20_PDE ADCF0VCR20_BASE.BIT._PDE
#define ADCF0VCR20_PUE ADCF0VCR20_BASE.BIT._PUE
#define ADCF0VCR21 ADCF0VCR21_BASE.UINT32
#define ADCF0VCR21_GCTRL ADCF0VCR21_BASE.BIT._GCTRL
#define ADCF0VCR21_ADIE ADCF0VCR21_BASE.BIT._ADIE
#define ADCF0VCR21_CNVCLS ADCF0VCR21_BASE.BIT._CNVCLS
#define ADCF0VCR21_PDE ADCF0VCR21_BASE.BIT._PDE
#define ADCF0VCR21_PUE ADCF0VCR21_BASE.BIT._PUE
#define ADCF0VCR22 ADCF0VCR22_BASE.UINT32
#define ADCF0VCR22_GCTRL ADCF0VCR22_BASE.BIT._GCTRL
#define ADCF0VCR22_ADIE ADCF0VCR22_BASE.BIT._ADIE
#define ADCF0VCR22_CNVCLS ADCF0VCR22_BASE.BIT._CNVCLS
#define ADCF0VCR22_PDE ADCF0VCR22_BASE.BIT._PDE
#define ADCF0VCR22_PUE ADCF0VCR22_BASE.BIT._PUE
#define ADCF0VCR23 ADCF0VCR23_BASE.UINT32
#define ADCF0VCR23_GCTRL ADCF0VCR23_BASE.BIT._GCTRL
#define ADCF0VCR23_ADIE ADCF0VCR23_BASE.BIT._ADIE
#define ADCF0VCR23_CNVCLS ADCF0VCR23_BASE.BIT._CNVCLS
#define ADCF0VCR23_PDE ADCF0VCR23_BASE.BIT._PDE
#define ADCF0VCR23_PUE ADCF0VCR23_BASE.BIT._PUE
#define ADCF0VCR24 ADCF0VCR24_BASE.UINT32
#define ADCF0VCR24_GCTRL ADCF0VCR24_BASE.BIT._GCTRL
#define ADCF0VCR24_ADIE ADCF0VCR24_BASE.BIT._ADIE
#define ADCF0VCR24_CNVCLS ADCF0VCR24_BASE.BIT._CNVCLS
#define ADCF0VCR24_PDE ADCF0VCR24_BASE.BIT._PDE
#define ADCF0VCR24_PUE ADCF0VCR24_BASE.BIT._PUE
#define ADCF0VCR25 ADCF0VCR25_BASE.UINT32
#define ADCF0VCR25_GCTRL ADCF0VCR25_BASE.BIT._GCTRL
#define ADCF0VCR25_ADIE ADCF0VCR25_BASE.BIT._ADIE
#define ADCF0VCR25_CNVCLS ADCF0VCR25_BASE.BIT._CNVCLS
#define ADCF0VCR25_PDE ADCF0VCR25_BASE.BIT._PDE
#define ADCF0VCR25_PUE ADCF0VCR25_BASE.BIT._PUE
#define ADCF0VCR26 ADCF0VCR26_BASE.UINT32
#define ADCF0VCR26_GCTRL ADCF0VCR26_BASE.BIT._GCTRL
#define ADCF0VCR26_ADIE ADCF0VCR26_BASE.BIT._ADIE
#define ADCF0VCR26_CNVCLS ADCF0VCR26_BASE.BIT._CNVCLS
#define ADCF0VCR26_PDE ADCF0VCR26_BASE.BIT._PDE
#define ADCF0VCR26_PUE ADCF0VCR26_BASE.BIT._PUE
#define ADCF0VCR27 ADCF0VCR27_BASE.UINT32
#define ADCF0VCR27_GCTRL ADCF0VCR27_BASE.BIT._GCTRL
#define ADCF0VCR27_ADIE ADCF0VCR27_BASE.BIT._ADIE
#define ADCF0VCR27_CNVCLS ADCF0VCR27_BASE.BIT._CNVCLS
#define ADCF0VCR27_PDE ADCF0VCR27_BASE.BIT._PDE
#define ADCF0VCR27_PUE ADCF0VCR27_BASE.BIT._PUE
#define ADCF0VCR28 ADCF0VCR28_BASE.UINT32
#define ADCF0VCR28_GCTRL ADCF0VCR28_BASE.BIT._GCTRL
#define ADCF0VCR28_ADIE ADCF0VCR28_BASE.BIT._ADIE
#define ADCF0VCR28_CNVCLS ADCF0VCR28_BASE.BIT._CNVCLS
#define ADCF0VCR28_PDE ADCF0VCR28_BASE.BIT._PDE
#define ADCF0VCR28_PUE ADCF0VCR28_BASE.BIT._PUE
#define ADCF0VCR29 ADCF0VCR29_BASE.UINT32
#define ADCF0VCR29_GCTRL ADCF0VCR29_BASE.BIT._GCTRL
#define ADCF0VCR29_ADIE ADCF0VCR29_BASE.BIT._ADIE
#define ADCF0VCR29_CNVCLS ADCF0VCR29_BASE.BIT._CNVCLS
#define ADCF0VCR29_PDE ADCF0VCR29_BASE.BIT._PDE
#define ADCF0VCR29_PUE ADCF0VCR29_BASE.BIT._PUE
#define ADCF0VCR30 ADCF0VCR30_BASE.UINT32
#define ADCF0VCR30_GCTRL ADCF0VCR30_BASE.BIT._GCTRL
#define ADCF0VCR30_ADIE ADCF0VCR30_BASE.BIT._ADIE
#define ADCF0VCR30_CNVCLS ADCF0VCR30_BASE.BIT._CNVCLS
#define ADCF0VCR30_PDE ADCF0VCR30_BASE.BIT._PDE
#define ADCF0VCR30_PUE ADCF0VCR30_BASE.BIT._PUE
#define ADCF0VCR31 ADCF0VCR31_BASE.UINT32
#define ADCF0VCR31_GCTRL ADCF0VCR31_BASE.BIT._GCTRL
#define ADCF0VCR31_ADIE ADCF0VCR31_BASE.BIT._ADIE
#define ADCF0VCR31_CNVCLS ADCF0VCR31_BASE.BIT._CNVCLS
#define ADCF0VCR31_PDE ADCF0VCR31_BASE.BIT._PDE
#define ADCF0VCR31_PUE ADCF0VCR31_BASE.BIT._PUE
#define ADCF0VCR32 ADCF0VCR32_BASE.UINT32
#define ADCF0VCR32_GCTRL ADCF0VCR32_BASE.BIT._GCTRL
#define ADCF0VCR32_ADIE ADCF0VCR32_BASE.BIT._ADIE
#define ADCF0VCR32_CNVCLS ADCF0VCR32_BASE.BIT._CNVCLS
#define ADCF0VCR32_PDE ADCF0VCR32_BASE.BIT._PDE
#define ADCF0VCR32_PUE ADCF0VCR32_BASE.BIT._PUE
#define ADCF0VCR33 ADCF0VCR33_BASE.UINT32
#define ADCF0VCR33_GCTRL ADCF0VCR33_BASE.BIT._GCTRL
#define ADCF0VCR33_ADIE ADCF0VCR33_BASE.BIT._ADIE
#define ADCF0VCR33_CNVCLS ADCF0VCR33_BASE.BIT._CNVCLS
#define ADCF0VCR33_PDE ADCF0VCR33_BASE.BIT._PDE
#define ADCF0VCR33_PUE ADCF0VCR33_BASE.BIT._PUE
#define ADCF0VCR34 ADCF0VCR34_BASE.UINT32
#define ADCF0VCR34_GCTRL ADCF0VCR34_BASE.BIT._GCTRL
#define ADCF0VCR34_ADIE ADCF0VCR34_BASE.BIT._ADIE
#define ADCF0VCR34_CNVCLS ADCF0VCR34_BASE.BIT._CNVCLS
#define ADCF0VCR34_PDE ADCF0VCR34_BASE.BIT._PDE
#define ADCF0VCR34_PUE ADCF0VCR34_BASE.BIT._PUE
#define ADCF0VCR35 ADCF0VCR35_BASE.UINT32
#define ADCF0VCR35_GCTRL ADCF0VCR35_BASE.BIT._GCTRL
#define ADCF0VCR35_ADIE ADCF0VCR35_BASE.BIT._ADIE
#define ADCF0VCR35_CNVCLS ADCF0VCR35_BASE.BIT._CNVCLS
#define ADCF0VCR35_PDE ADCF0VCR35_BASE.BIT._PDE
#define ADCF0VCR35_PUE ADCF0VCR35_BASE.BIT._PUE
#define ADCF0DR00 ADCF0DR00_BASE.UINT32
#define ADCF0DR00_DR0 ADCF0DR00_BASE.BIT._DR0
#define ADCF0DR00_DR1 ADCF0DR00_BASE.BIT._DR1
#define ADCF0DR02 ADCF0DR02_BASE.UINT32
#define ADCF0DR02_DR2 ADCF0DR02_BASE.BIT._DR2
#define ADCF0DR02_DR3 ADCF0DR02_BASE.BIT._DR3
#define ADCF0DR04 ADCF0DR04_BASE.UINT32
#define ADCF0DR04_DR4 ADCF0DR04_BASE.BIT._DR4
#define ADCF0DR04_DR5 ADCF0DR04_BASE.BIT._DR5
#define ADCF0DR06 ADCF0DR06_BASE.UINT32
#define ADCF0DR06_DR6 ADCF0DR06_BASE.BIT._DR6
#define ADCF0DR06_DR7 ADCF0DR06_BASE.BIT._DR7
#define ADCF0DR08 ADCF0DR08_BASE.UINT32
#define ADCF0DR08_DR8 ADCF0DR08_BASE.BIT._DR8
#define ADCF0DR08_DR9 ADCF0DR08_BASE.BIT._DR9
#define ADCF0DR10 ADCF0DR10_BASE.UINT32
#define ADCF0DR10_DR10 ADCF0DR10_BASE.BIT._DR10
#define ADCF0DR10_DR11 ADCF0DR10_BASE.BIT._DR11
#define ADCF0DR12 ADCF0DR12_BASE.UINT32
#define ADCF0DR12_DR12 ADCF0DR12_BASE.BIT._DR12
#define ADCF0DR12_DR13 ADCF0DR12_BASE.BIT._DR13
#define ADCF0DR14 ADCF0DR14_BASE.UINT32
#define ADCF0DR14_DR14 ADCF0DR14_BASE.BIT._DR14
#define ADCF0DR14_DR15 ADCF0DR14_BASE.BIT._DR15
#define ADCF0DR16 ADCF0DR16_BASE.UINT32
#define ADCF0DR16_DR16 ADCF0DR16_BASE.BIT._DR16
#define ADCF0DR16_DR17 ADCF0DR16_BASE.BIT._DR17
#define ADCF0DR18 ADCF0DR18_BASE.UINT32
#define ADCF0DR18_DR18 ADCF0DR18_BASE.BIT._DR18
#define ADCF0DR18_DR19 ADCF0DR18_BASE.BIT._DR19
#define ADCF0DR20 ADCF0DR20_BASE.UINT32
#define ADCF0DR20_DR20 ADCF0DR20_BASE.BIT._DR20
#define ADCF0DR20_DR21 ADCF0DR20_BASE.BIT._DR21
#define ADCF0DR22 ADCF0DR22_BASE.UINT32
#define ADCF0DR22_DR22 ADCF0DR22_BASE.BIT._DR22
#define ADCF0DR22_DR23 ADCF0DR22_BASE.BIT._DR23
#define ADCF0DR24 ADCF0DR24_BASE.UINT32
#define ADCF0DR24_DR24 ADCF0DR24_BASE.BIT._DR24
#define ADCF0DR24_DR25 ADCF0DR24_BASE.BIT._DR25
#define ADCF0DR26 ADCF0DR26_BASE.UINT32
#define ADCF0DR26_DR26 ADCF0DR26_BASE.BIT._DR26
#define ADCF0DR26_DR27 ADCF0DR26_BASE.BIT._DR27
#define ADCF0DR28 ADCF0DR28_BASE.UINT32
#define ADCF0DR28_DR28 ADCF0DR28_BASE.BIT._DR28
#define ADCF0DR28_DR29 ADCF0DR28_BASE.BIT._DR29
#define ADCF0DR30 ADCF0DR30_BASE.UINT32
#define ADCF0DR30_DR30 ADCF0DR30_BASE.BIT._DR30
#define ADCF0DR30_DR31 ADCF0DR30_BASE.BIT._DR31
#define ADCF0DR32 ADCF0DR32_BASE.UINT32
#define ADCF0DR32_DR32 ADCF0DR32_BASE.BIT._DR32
#define ADCF0DR32_DR33 ADCF0DR32_BASE.BIT._DR33
#define ADCF0DR34 ADCF0DR34_BASE.UINT32
#define ADCF0DR34_DR34 ADCF0DR34_BASE.BIT._DR34
#define ADCF0DR34_DR35 ADCF0DR34_BASE.BIT._DR35
#define ADCF0DIR0 ADCF0DIR0_BASE.UINT32
#define ADCF0DIR0_DR0 ADCF0DIR0_BASE.BIT._DR0
#define ADCF0DIR0_ID ADCF0DIR0_BASE.BIT._ID
#define ADCF0DIR0_PRTY ADCF0DIR0_BASE.BIT._PRTY
#define ADCF0DIR0_WFLG ADCF0DIR0_BASE.BIT._WFLG
#define ADCF0DIR1 ADCF0DIR1_BASE.UINT32
#define ADCF0DIR1_DR1 ADCF0DIR1_BASE.BIT._DR1
#define ADCF0DIR1_ID ADCF0DIR1_BASE.BIT._ID
#define ADCF0DIR1_PRTY ADCF0DIR1_BASE.BIT._PRTY
#define ADCF0DIR1_WFLG ADCF0DIR1_BASE.BIT._WFLG
#define ADCF0DIR2 ADCF0DIR2_BASE.UINT32
#define ADCF0DIR2_DR2 ADCF0DIR2_BASE.BIT._DR2
#define ADCF0DIR2_ID ADCF0DIR2_BASE.BIT._ID
#define ADCF0DIR2_PRTY ADCF0DIR2_BASE.BIT._PRTY
#define ADCF0DIR2_WFLG ADCF0DIR2_BASE.BIT._WFLG
#define ADCF0DIR3 ADCF0DIR3_BASE.UINT32
#define ADCF0DIR3_DR3 ADCF0DIR3_BASE.BIT._DR3
#define ADCF0DIR3_ID ADCF0DIR3_BASE.BIT._ID
#define ADCF0DIR3_PRTY ADCF0DIR3_BASE.BIT._PRTY
#define ADCF0DIR3_WFLG ADCF0DIR3_BASE.BIT._WFLG
#define ADCF0DIR4 ADCF0DIR4_BASE.UINT32
#define ADCF0DIR4_DR4 ADCF0DIR4_BASE.BIT._DR4
#define ADCF0DIR4_ID ADCF0DIR4_BASE.BIT._ID
#define ADCF0DIR4_PRTY ADCF0DIR4_BASE.BIT._PRTY
#define ADCF0DIR4_WFLG ADCF0DIR4_BASE.BIT._WFLG
#define ADCF0DIR5 ADCF0DIR5_BASE.UINT32
#define ADCF0DIR5_DR5 ADCF0DIR5_BASE.BIT._DR5
#define ADCF0DIR5_ID ADCF0DIR5_BASE.BIT._ID
#define ADCF0DIR5_PRTY ADCF0DIR5_BASE.BIT._PRTY
#define ADCF0DIR5_WFLG ADCF0DIR5_BASE.BIT._WFLG
#define ADCF0DIR6 ADCF0DIR6_BASE.UINT32
#define ADCF0DIR6_DR6 ADCF0DIR6_BASE.BIT._DR6
#define ADCF0DIR6_ID ADCF0DIR6_BASE.BIT._ID
#define ADCF0DIR6_PRTY ADCF0DIR6_BASE.BIT._PRTY
#define ADCF0DIR6_WFLG ADCF0DIR6_BASE.BIT._WFLG
#define ADCF0DIR7 ADCF0DIR7_BASE.UINT32
#define ADCF0DIR7_DR7 ADCF0DIR7_BASE.BIT._DR7
#define ADCF0DIR7_ID ADCF0DIR7_BASE.BIT._ID
#define ADCF0DIR7_PRTY ADCF0DIR7_BASE.BIT._PRTY
#define ADCF0DIR7_WFLG ADCF0DIR7_BASE.BIT._WFLG
#define ADCF0DIR8 ADCF0DIR8_BASE.UINT32
#define ADCF0DIR8_DR8 ADCF0DIR8_BASE.BIT._DR8
#define ADCF0DIR8_ID ADCF0DIR8_BASE.BIT._ID
#define ADCF0DIR8_PRTY ADCF0DIR8_BASE.BIT._PRTY
#define ADCF0DIR8_WFLG ADCF0DIR8_BASE.BIT._WFLG
#define ADCF0DIR9 ADCF0DIR9_BASE.UINT32
#define ADCF0DIR9_DR9 ADCF0DIR9_BASE.BIT._DR9
#define ADCF0DIR9_ID ADCF0DIR9_BASE.BIT._ID
#define ADCF0DIR9_PRTY ADCF0DIR9_BASE.BIT._PRTY
#define ADCF0DIR9_WFLG ADCF0DIR9_BASE.BIT._WFLG
#define ADCF0DIR10 ADCF0DIR10_BASE.UINT32
#define ADCF0DIR10_DR10 ADCF0DIR10_BASE.BIT._DR10
#define ADCF0DIR10_ID ADCF0DIR10_BASE.BIT._ID
#define ADCF0DIR10_PRTY ADCF0DIR10_BASE.BIT._PRTY
#define ADCF0DIR10_WFLG ADCF0DIR10_BASE.BIT._WFLG
#define ADCF0DIR11 ADCF0DIR11_BASE.UINT32
#define ADCF0DIR11_DR11 ADCF0DIR11_BASE.BIT._DR11
#define ADCF0DIR11_ID ADCF0DIR11_BASE.BIT._ID
#define ADCF0DIR11_PRTY ADCF0DIR11_BASE.BIT._PRTY
#define ADCF0DIR11_WFLG ADCF0DIR11_BASE.BIT._WFLG
#define ADCF0DIR12 ADCF0DIR12_BASE.UINT32
#define ADCF0DIR12_DR12 ADCF0DIR12_BASE.BIT._DR12
#define ADCF0DIR12_ID ADCF0DIR12_BASE.BIT._ID
#define ADCF0DIR12_PRTY ADCF0DIR12_BASE.BIT._PRTY
#define ADCF0DIR12_WFLG ADCF0DIR12_BASE.BIT._WFLG
#define ADCF0DIR13 ADCF0DIR13_BASE.UINT32
#define ADCF0DIR13_DR13 ADCF0DIR13_BASE.BIT._DR13
#define ADCF0DIR13_ID ADCF0DIR13_BASE.BIT._ID
#define ADCF0DIR13_PRTY ADCF0DIR13_BASE.BIT._PRTY
#define ADCF0DIR13_WFLG ADCF0DIR13_BASE.BIT._WFLG
#define ADCF0DIR14 ADCF0DIR14_BASE.UINT32
#define ADCF0DIR14_DR14 ADCF0DIR14_BASE.BIT._DR14
#define ADCF0DIR14_ID ADCF0DIR14_BASE.BIT._ID
#define ADCF0DIR14_PRTY ADCF0DIR14_BASE.BIT._PRTY
#define ADCF0DIR14_WFLG ADCF0DIR14_BASE.BIT._WFLG
#define ADCF0DIR15 ADCF0DIR15_BASE.UINT32
#define ADCF0DIR15_DR15 ADCF0DIR15_BASE.BIT._DR15
#define ADCF0DIR15_ID ADCF0DIR15_BASE.BIT._ID
#define ADCF0DIR15_PRTY ADCF0DIR15_BASE.BIT._PRTY
#define ADCF0DIR15_WFLG ADCF0DIR15_BASE.BIT._WFLG
#define ADCF0DIR16 ADCF0DIR16_BASE.UINT32
#define ADCF0DIR16_DR16 ADCF0DIR16_BASE.BIT._DR16
#define ADCF0DIR16_ID ADCF0DIR16_BASE.BIT._ID
#define ADCF0DIR16_PRTY ADCF0DIR16_BASE.BIT._PRTY
#define ADCF0DIR16_WFLG ADCF0DIR16_BASE.BIT._WFLG
#define ADCF0DIR17 ADCF0DIR17_BASE.UINT32
#define ADCF0DIR17_DR17 ADCF0DIR17_BASE.BIT._DR17
#define ADCF0DIR17_ID ADCF0DIR17_BASE.BIT._ID
#define ADCF0DIR17_PRTY ADCF0DIR17_BASE.BIT._PRTY
#define ADCF0DIR17_WFLG ADCF0DIR17_BASE.BIT._WFLG
#define ADCF0DIR18 ADCF0DIR18_BASE.UINT32
#define ADCF0DIR18_DR18 ADCF0DIR18_BASE.BIT._DR18
#define ADCF0DIR18_ID ADCF0DIR18_BASE.BIT._ID
#define ADCF0DIR18_PRTY ADCF0DIR18_BASE.BIT._PRTY
#define ADCF0DIR18_WFLG ADCF0DIR18_BASE.BIT._WFLG
#define ADCF0DIR19 ADCF0DIR19_BASE.UINT32
#define ADCF0DIR19_DR19 ADCF0DIR19_BASE.BIT._DR19
#define ADCF0DIR19_ID ADCF0DIR19_BASE.BIT._ID
#define ADCF0DIR19_PRTY ADCF0DIR19_BASE.BIT._PRTY
#define ADCF0DIR19_WFLG ADCF0DIR19_BASE.BIT._WFLG
#define ADCF0DIR20 ADCF0DIR20_BASE.UINT32
#define ADCF0DIR20_DR20 ADCF0DIR20_BASE.BIT._DR20
#define ADCF0DIR20_ID ADCF0DIR20_BASE.BIT._ID
#define ADCF0DIR20_PRTY ADCF0DIR20_BASE.BIT._PRTY
#define ADCF0DIR20_WFLG ADCF0DIR20_BASE.BIT._WFLG
#define ADCF0DIR21 ADCF0DIR21_BASE.UINT32
#define ADCF0DIR21_DR21 ADCF0DIR21_BASE.BIT._DR21
#define ADCF0DIR21_ID ADCF0DIR21_BASE.BIT._ID
#define ADCF0DIR21_PRTY ADCF0DIR21_BASE.BIT._PRTY
#define ADCF0DIR21_WFLG ADCF0DIR21_BASE.BIT._WFLG
#define ADCF0DIR22 ADCF0DIR22_BASE.UINT32
#define ADCF0DIR22_DR22 ADCF0DIR22_BASE.BIT._DR22
#define ADCF0DIR22_ID ADCF0DIR22_BASE.BIT._ID
#define ADCF0DIR22_PRTY ADCF0DIR22_BASE.BIT._PRTY
#define ADCF0DIR22_WFLG ADCF0DIR22_BASE.BIT._WFLG
#define ADCF0DIR23 ADCF0DIR23_BASE.UINT32
#define ADCF0DIR23_DR23 ADCF0DIR23_BASE.BIT._DR23
#define ADCF0DIR23_ID ADCF0DIR23_BASE.BIT._ID
#define ADCF0DIR23_PRTY ADCF0DIR23_BASE.BIT._PRTY
#define ADCF0DIR23_WFLG ADCF0DIR23_BASE.BIT._WFLG
#define ADCF0DIR24 ADCF0DIR24_BASE.UINT32
#define ADCF0DIR24_DR24 ADCF0DIR24_BASE.BIT._DR24
#define ADCF0DIR24_ID ADCF0DIR24_BASE.BIT._ID
#define ADCF0DIR24_PRTY ADCF0DIR24_BASE.BIT._PRTY
#define ADCF0DIR24_WFLG ADCF0DIR24_BASE.BIT._WFLG
#define ADCF0DIR25 ADCF0DIR25_BASE.UINT32
#define ADCF0DIR25_DR25 ADCF0DIR25_BASE.BIT._DR25
#define ADCF0DIR25_ID ADCF0DIR25_BASE.BIT._ID
#define ADCF0DIR25_PRTY ADCF0DIR25_BASE.BIT._PRTY
#define ADCF0DIR25_WFLG ADCF0DIR25_BASE.BIT._WFLG
#define ADCF0DIR26 ADCF0DIR26_BASE.UINT32
#define ADCF0DIR26_DR26 ADCF0DIR26_BASE.BIT._DR26
#define ADCF0DIR26_ID ADCF0DIR26_BASE.BIT._ID
#define ADCF0DIR26_PRTY ADCF0DIR26_BASE.BIT._PRTY
#define ADCF0DIR26_WFLG ADCF0DIR26_BASE.BIT._WFLG
#define ADCF0DIR27 ADCF0DIR27_BASE.UINT32
#define ADCF0DIR27_DR27 ADCF0DIR27_BASE.BIT._DR27
#define ADCF0DIR27_ID ADCF0DIR27_BASE.BIT._ID
#define ADCF0DIR27_PRTY ADCF0DIR27_BASE.BIT._PRTY
#define ADCF0DIR27_WFLG ADCF0DIR27_BASE.BIT._WFLG
#define ADCF0DIR28 ADCF0DIR28_BASE.UINT32
#define ADCF0DIR28_DR28 ADCF0DIR28_BASE.BIT._DR28
#define ADCF0DIR28_ID ADCF0DIR28_BASE.BIT._ID
#define ADCF0DIR28_PRTY ADCF0DIR28_BASE.BIT._PRTY
#define ADCF0DIR28_WFLG ADCF0DIR28_BASE.BIT._WFLG
#define ADCF0DIR29 ADCF0DIR29_BASE.UINT32
#define ADCF0DIR29_DR29 ADCF0DIR29_BASE.BIT._DR29
#define ADCF0DIR29_ID ADCF0DIR29_BASE.BIT._ID
#define ADCF0DIR29_PRTY ADCF0DIR29_BASE.BIT._PRTY
#define ADCF0DIR29_WFLG ADCF0DIR29_BASE.BIT._WFLG
#define ADCF0DIR30 ADCF0DIR30_BASE.UINT32
#define ADCF0DIR30_DR30 ADCF0DIR30_BASE.BIT._DR30
#define ADCF0DIR30_ID ADCF0DIR30_BASE.BIT._ID
#define ADCF0DIR30_PRTY ADCF0DIR30_BASE.BIT._PRTY
#define ADCF0DIR30_WFLG ADCF0DIR30_BASE.BIT._WFLG
#define ADCF0DIR31 ADCF0DIR31_BASE.UINT32
#define ADCF0DIR31_DR31 ADCF0DIR31_BASE.BIT._DR31
#define ADCF0DIR31_ID ADCF0DIR31_BASE.BIT._ID
#define ADCF0DIR31_PRTY ADCF0DIR31_BASE.BIT._PRTY
#define ADCF0DIR31_WFLG ADCF0DIR31_BASE.BIT._WFLG
#define ADCF0DIR32 ADCF0DIR32_BASE.UINT32
#define ADCF0DIR32_DR32 ADCF0DIR32_BASE.BIT._DR32
#define ADCF0DIR32_ID ADCF0DIR32_BASE.BIT._ID
#define ADCF0DIR32_PRTY ADCF0DIR32_BASE.BIT._PRTY
#define ADCF0DIR32_WFLG ADCF0DIR32_BASE.BIT._WFLG
#define ADCF0DIR33 ADCF0DIR33_BASE.UINT32
#define ADCF0DIR33_DR33 ADCF0DIR33_BASE.BIT._DR33
#define ADCF0DIR33_ID ADCF0DIR33_BASE.BIT._ID
#define ADCF0DIR33_PRTY ADCF0DIR33_BASE.BIT._PRTY
#define ADCF0DIR33_WFLG ADCF0DIR33_BASE.BIT._WFLG
#define ADCF0DIR34 ADCF0DIR34_BASE.UINT32
#define ADCF0DIR34_DR34 ADCF0DIR34_BASE.BIT._DR34
#define ADCF0DIR34_ID ADCF0DIR34_BASE.BIT._ID
#define ADCF0DIR34_PRTY ADCF0DIR34_BASE.BIT._PRTY
#define ADCF0DIR34_WFLG ADCF0DIR34_BASE.BIT._WFLG
#define ADCF0DIR35 ADCF0DIR35_BASE.UINT32
#define ADCF0DIR35_DR35 ADCF0DIR35_BASE.BIT._DR35
#define ADCF0DIR35_ID ADCF0DIR35_BASE.BIT._ID
#define ADCF0DIR35_PRTY ADCF0DIR35_BASE.BIT._PRTY
#define ADCF0DIR35_WFLG ADCF0DIR35_BASE.BIT._WFLG
#define ADCF0ADSYNSTCR ADCF0ADSYNSTCR_BASE.UINT8
#define ADCF0ADSYNSTCR_ADSTART ADCF0ADSYNSTCR_BASE.BIT._ADSTART
#define ADCF0ADTSYNSTCR ADCF0ADTSYNSTCR_BASE.UINT8
#define ADCF0ADTSYNSTCR_ADTSTART ADCF0ADTSYNSTCR_BASE.BIT._ADTSTART
#define ADCF0ADHALTR ADCF0ADHALTR_BASE.UINT8
#define ADCF0ADHALTR_HALT ADCF0ADHALTR_BASE.BIT._HALT
#define ADCF0ADCR1 ADCF0ADCR1_BASE.UINT8
#define ADCF0ADCR1_SUSMTD ADCF0ADCR1_BASE.BIT._SUSMTD
#define ADCF0MPXCURCR ADCF0MPXCURCR_BASE.UINT8
#define ADCF0MPXCURCR_MSKCFMT0 ADCF0MPXCURCR_BASE.BIT._MSKCFMT0
#define ADCF0MPXCURR ADCF0MPXCURR_BASE.UINT32
#define ADCF0MPXCURR_MPXCUR ADCF0MPXCURR_BASE.BIT._MPXCUR
#define ADCF0MPXCURR_MSKC ADCF0MPXCURR_BASE.BIT._MSKC
#define ADCF0MPXOWR ADCF0MPXOWR_BASE.UINT8
#define ADCF0MPXOWR_MPXOW ADCF0MPXOWR_BASE.BIT._MPXOW
#define ADCF0ADCR2 ADCF0ADCR2_BASE.UINT8
#define ADCF0ADCR2_ADDNT ADCF0ADCR2_BASE.BIT._ADDNT
#define ADCF0ADCR2_DFMT ADCF0ADCR2_BASE.BIT._DFMT
#define ADCF0ADENDP0 ADCF0ADENDP0_BASE.UINT8
#define ADCF0ADENDP0_ENDP ADCF0ADENDP0_BASE.BIT._ENDP
#define ADCF0SFTCR ADCF0SFTCR_BASE.UINT8
#define ADCF0SFTCR_IDEIE ADCF0SFTCR_BASE.BIT._IDEIE
#define ADCF0SFTCR_PEIE ADCF0SFTCR_BASE.BIT._PEIE
#define ADCF0SFTCR_OWEIE ADCF0SFTCR_BASE.BIT._OWEIE
#define ADCF0SFTCR_ULEIE ADCF0SFTCR_BASE.BIT._ULEIE
#define ADCF0SFTCR_RDCLRE ADCF0SFTCR_BASE.BIT._RDCLRE
#define ADCF0TDCR ADCF0TDCR_BASE.UINT8
#define ADCF0TDCR_TDLV ADCF0TDCR_BASE.BIT._TDLV
#define ADCF0TDCR_TDE ADCF0TDCR_BASE.BIT._TDE
#define ADCF0ULLMTBR0 ADCF0ULLMTBR0_BASE.UINT32
#define ADCF0ULLMTBR0_LLMTB ADCF0ULLMTBR0_BASE.BIT._LLMTB
#define ADCF0ULLMTBR0_ULMTB ADCF0ULLMTBR0_BASE.BIT._ULMTB
#define ADCF0ULLMTBR1 ADCF0ULLMTBR1_BASE.UINT32
#define ADCF0ULLMTBR1_LLMTB ADCF0ULLMTBR1_BASE.BIT._LLMTB
#define ADCF0ULLMTBR1_ULMTB ADCF0ULLMTBR1_BASE.BIT._ULMTB
#define ADCF0ULLMTBR2 ADCF0ULLMTBR2_BASE.UINT32
#define ADCF0ULLMTBR2_LLMTB ADCF0ULLMTBR2_BASE.BIT._LLMTB
#define ADCF0ULLMTBR2_ULMTB ADCF0ULLMTBR2_BASE.BIT._ULMTB
#define ADCF0ECR ADCF0ECR_BASE.UINT8
#define ADCF0ECR_IDEC ADCF0ECR_BASE.BIT._IDEC
#define ADCF0ECR_PEC ADCF0ECR_BASE.BIT._PEC
#define ADCF0ECR_OWEC ADCF0ECR_BASE.BIT._OWEC
#define ADCF0ECR_ULEC ADCF0ECR_BASE.BIT._ULEC
#define ADCF0ULER ADCF0ULER_BASE.UINT8
#define ADCF0ULER_ULECAP ADCF0ULER_BASE.BIT._ULECAP
#define ADCF0ULER_ULE ADCF0ULER_BASE.BIT._ULE
#define ADCF0OWER ADCF0OWER_BASE.UINT8
#define ADCF0OWER_OWECAP ADCF0OWER_BASE.BIT._OWECAP
#define ADCF0OWER_OWE ADCF0OWER_BASE.BIT._OWE
#define ADCF0PER ADCF0PER_BASE.UINT8
#define ADCF0PER_PECAP ADCF0PER_BASE.BIT._PECAP
#define ADCF0PER_PE ADCF0PER_BASE.BIT._PE
#define ADCF0IDER ADCF0IDER_BASE.UINT8
#define ADCF0IDER_IDECAP ADCF0IDER_BASE.BIT._IDECAP
#define ADCF0IDER_IDE ADCF0IDER_BASE.BIT._IDE
#define ADCF0SGSTCR0 ADCF0SGSTCR0_BASE.UINT8
#define ADCF0SGSTCR0_SGST ADCF0SGSTCR0_BASE.BIT._SGST
#define ADCF0SGCR0 ADCF0SGCR0_BASE.UINT8
#define ADCF0SGCR0_TRGMD ADCF0SGCR0_BASE.BIT._TRGMD
#define ADCF0SGCR0_ADIE ADCF0SGCR0_BASE.BIT._ADIE
#define ADCF0SGCR0_SCANMD ADCF0SGCR0_BASE.BIT._SCANMD
#define ADCF0SGCR0_ADSTARTE ADCF0SGCR0_BASE.BIT._ADSTARTE
#define ADCF0SGVCSP0 ADCF0SGVCSP0_BASE.UINT8
#define ADCF0SGVCSP0_VCSP ADCF0SGVCSP0_BASE.BIT._VCSP
#define ADCF0SGVCEP0 ADCF0SGVCEP0_BASE.UINT8
#define ADCF0SGVCEP0_VCEP ADCF0SGVCEP0_BASE.BIT._VCEP
#define ADCF0SGMCYCR0 ADCF0SGMCYCR0_BASE.UINT8
#define ADCF0SGMCYCR0_MCYC ADCF0SGMCYCR0_BASE.BIT._MCYC
#define ADCF0SGSR0 ADCF0SGSR0_BASE.UINT8
#define ADCF0SGSR0_SGACT ADCF0SGSR0_BASE.BIT._SGACT
#define ADCF0ULLMSR0 ADCF0ULLMSR0_BASE.UINT8
#define ADCF0ULLMSR0_ULS ADCF0ULLMSR0_BASE.BIT._ULS
#define ADCF0SGSTCR1 ADCF0SGSTCR1_BASE.UINT8
#define ADCF0SGSTCR1_SGST ADCF0SGSTCR1_BASE.BIT._SGST
#define ADCF0SGCR1 ADCF0SGCR1_BASE.UINT8
#define ADCF0SGCR1_TRGMD ADCF0SGCR1_BASE.BIT._TRGMD
#define ADCF0SGCR1_ADIE ADCF0SGCR1_BASE.BIT._ADIE
#define ADCF0SGCR1_SCANMD ADCF0SGCR1_BASE.BIT._SCANMD
#define ADCF0SGCR1_ADSTARTE ADCF0SGCR1_BASE.BIT._ADSTARTE
#define ADCF0SGVCSP1 ADCF0SGVCSP1_BASE.UINT8
#define ADCF0SGVCSP1_VCSP ADCF0SGVCSP1_BASE.BIT._VCSP
#define ADCF0SGVCEP1 ADCF0SGVCEP1_BASE.UINT8
#define ADCF0SGVCEP1_VCEP ADCF0SGVCEP1_BASE.BIT._VCEP
#define ADCF0SGMCYCR1 ADCF0SGMCYCR1_BASE.UINT8
#define ADCF0SGMCYCR1_MCYC ADCF0SGMCYCR1_BASE.BIT._MCYC
#define ADCF0SGSR1 ADCF0SGSR1_BASE.UINT8
#define ADCF0SGSR1_SGACT ADCF0SGSR1_BASE.BIT._SGACT
#define ADCF0ULLMSR1 ADCF0ULLMSR1_BASE.UINT8
#define ADCF0ULLMSR1_ULS ADCF0ULLMSR1_BASE.BIT._ULS
#define ADCF0SGSTCR2 ADCF0SGSTCR2_BASE.UINT8
#define ADCF0SGSTCR2_SGST ADCF0SGSTCR2_BASE.BIT._SGST
#define ADCF0SGCR2 ADCF0SGCR2_BASE.UINT8
#define ADCF0SGCR2_TRGMD ADCF0SGCR2_BASE.BIT._TRGMD
#define ADCF0SGCR2_ADIE ADCF0SGCR2_BASE.BIT._ADIE
#define ADCF0SGCR2_SCANMD ADCF0SGCR2_BASE.BIT._SCANMD
#define ADCF0SGCR2_ADSTARTE ADCF0SGCR2_BASE.BIT._ADSTARTE
#define ADCF0SGVCSP2 ADCF0SGVCSP2_BASE.UINT8
#define ADCF0SGVCSP2_VCSP ADCF0SGVCSP2_BASE.BIT._VCSP
#define ADCF0SGVCEP2 ADCF0SGVCEP2_BASE.UINT8
#define ADCF0SGVCEP2_VCEP ADCF0SGVCEP2_BASE.BIT._VCEP
#define ADCF0SGMCYCR2 ADCF0SGMCYCR2_BASE.UINT8
#define ADCF0SGMCYCR2_MCYC ADCF0SGMCYCR2_BASE.BIT._MCYC
#define ADCF0SGSR2 ADCF0SGSR2_BASE.UINT8
#define ADCF0SGSR2_SGACT ADCF0SGSR2_BASE.BIT._SGACT
#define ADCF0ULLMSR2 ADCF0ULLMSR2_BASE.UINT8
#define ADCF0ULLMSR2_ULS ADCF0ULLMSR2_BASE.BIT._ULS
#define ADCF0SGSTCR3 ADCF0SGSTCR3_BASE.UINT8
#define ADCF0SGSTCR3_SGST ADCF0SGSTCR3_BASE.BIT._SGST
#define ADCF0ADTSTCR3 ADCF0ADTSTCR3_BASE.UINT8
#define ADCF0ADTSTCR3_ADTST ADCF0ADTSTCR3_BASE.BIT._ADTST
#define ADCF0ADTENDCR3 ADCF0ADTENDCR3_BASE.UINT8
#define ADCF0ADTENDCR3_ADTEND ADCF0ADTENDCR3_BASE.BIT._ADTEND
#define ADCF0SGCR3 ADCF0SGCR3_BASE.UINT8
#define ADCF0SGCR3_TRGMD ADCF0SGCR3_BASE.BIT._TRGMD
#define ADCF0SGCR3_ADIE ADCF0SGCR3_BASE.BIT._ADIE
#define ADCF0SGCR3_SCANMD ADCF0SGCR3_BASE.BIT._SCANMD
#define ADCF0SGCR3_ADSTARTE ADCF0SGCR3_BASE.BIT._ADSTARTE
#define ADCF0SGVCSP3 ADCF0SGVCSP3_BASE.UINT8
#define ADCF0SGVCSP3_VCSP ADCF0SGVCSP3_BASE.BIT._VCSP
#define ADCF0SGVCEP3 ADCF0SGVCEP3_BASE.UINT8
#define ADCF0SGVCEP3_VCEP ADCF0SGVCEP3_BASE.BIT._VCEP
#define ADCF0SGMCYCR3 ADCF0SGMCYCR3_BASE.UINT8
#define ADCF0SGMCYCR3_MCYC ADCF0SGMCYCR3_BASE.BIT._MCYC
#define ADCF0SGSR3 ADCF0SGSR3_BASE.UINT8
#define ADCF0SGSR3_SGACT ADCF0SGSR3_BASE.BIT._SGACT
#define ADCF0ADTIPR3 ADCF0ADTIPR3_BASE.UINT32
#define ADCF0ADTIPR3_ADTIP ADCF0ADTIPR3_BASE.BIT._ADTIP
#define ADCF0ADTPRR3 ADCF0ADTPRR3_BASE.UINT32
#define ADCF0ADTPRR3_ADTPR ADCF0ADTPRR3_BASE.BIT._ADTPR
#define ADCF0ULLMSR3 ADCF0ULLMSR3_BASE.UINT8
#define ADCF0ULLMSR3_ULS ADCF0ULLMSR3_BASE.BIT._ULS
#define ADCF0SGSTCR4 ADCF0SGSTCR4_BASE.UINT8
#define ADCF0SGSTCR4_SGST ADCF0SGSTCR4_BASE.BIT._SGST
#define ADCF0ADTSTCR4 ADCF0ADTSTCR4_BASE.UINT8
#define ADCF0ADTSTCR4_ADTST ADCF0ADTSTCR4_BASE.BIT._ADTST
#define ADCF0ADTENDCR4 ADCF0ADTENDCR4_BASE.UINT8
#define ADCF0ADTENDCR4_ADTEND ADCF0ADTENDCR4_BASE.BIT._ADTEND
#define ADCF0SGCR4 ADCF0SGCR4_BASE.UINT8
#define ADCF0SGCR4_TRGMD ADCF0SGCR4_BASE.BIT._TRGMD
#define ADCF0SGCR4_ADIE ADCF0SGCR4_BASE.BIT._ADIE
#define ADCF0SGCR4_SCANMD ADCF0SGCR4_BASE.BIT._SCANMD
#define ADCF0SGCR4_ADSTARTE ADCF0SGCR4_BASE.BIT._ADSTARTE
#define ADCF0SGVCSP4 ADCF0SGVCSP4_BASE.UINT8
#define ADCF0SGVCSP4_VCSP ADCF0SGVCSP4_BASE.BIT._VCSP
#define ADCF0SGVCEP4 ADCF0SGVCEP4_BASE.UINT8
#define ADCF0SGVCEP4_VCEP ADCF0SGVCEP4_BASE.BIT._VCEP
#define ADCF0SGMCYCR4 ADCF0SGMCYCR4_BASE.UINT8
#define ADCF0SGMCYCR4_MCYC ADCF0SGMCYCR4_BASE.BIT._MCYC
#define ADCF0SGSR4 ADCF0SGSR4_BASE.UINT8
#define ADCF0SGSR4_SGACT ADCF0SGSR4_BASE.BIT._SGACT
#define ADCF0ADTIPR4 ADCF0ADTIPR4_BASE.UINT32
#define ADCF0ADTIPR4_ADTIP ADCF0ADTIPR4_BASE.BIT._ADTIP
#define ADCF0ADTPRR4 ADCF0ADTPRR4_BASE.UINT32
#define ADCF0ADTPRR4_ADTPR ADCF0ADTPRR4_BASE.BIT._ADTPR
#define ADCF0ULLMSR4 ADCF0ULLMSR4_BASE.UINT8
#define ADCF0ULLMSR4_ULS ADCF0ULLMSR4_BASE.BIT._ULS

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif