#ifndef __DR7F701373_RSENT_MDSEL_HEADER__
#define __DR7F701373_RSENT_MDSEL_HEADER__



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
    uint32 _MSSEL00 : 1;
    uint32 _MSSEL01 : 1;
    uint32 _MSSEL02 : 1;
    uint32 _MSSEL03 : 1;
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
} RSENT0TSSELBits_t;

typedef struct
{
    uint32 _MSSEL10 : 1;
    uint32 _MSSEL11 : 1;
    uint32 _MSSEL12 : 1;
    uint32 _MSSEL13 : 1;
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
} RSENT1TSSELBits_t;

typedef struct
{
    uint32 _MSSEL20 : 1;
    uint32 _MSSEL21 : 1;
    uint32 _MSSEL22 : 1;
    uint32 _MSSEL23 : 1;
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
} RSENT2TSSELBits_t;

typedef struct
{
    uint32 _MSSEL30 : 1;
    uint32 _MSSEL31 : 1;
    uint32 _MSSEL32 : 1;
    uint32 _MSSEL33 : 1;
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
} RSENT3TSSELBits_t;

typedef struct
{
    uint32 _MSSEL40 : 1;
    uint32 _MSSEL41 : 1;
    uint32 _MSSEL42 : 1;
    uint32 _MSSEL43 : 1;
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
} RSENT4TSSELBits_t;

typedef struct
{
    uint32 _MSSEL50 : 1;
    uint32 _MSSEL51 : 1;
    uint32 _MSSEL52 : 1;
    uint32 _MSSEL53 : 1;
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
} RSENT5TSSELBits_t;

typedef struct
{
    uint32 _MSSEL60 : 1;
    uint32 _MSSEL61 : 1;
    uint32 _MSSEL62 : 1;
    uint32 _MSSEL63 : 1;
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
} RSENT6TSSELBits_t;

typedef struct
{
    uint32 _MSSEL70 : 1;
    uint32 _MSSEL71 : 1;
    uint32 _MSSEL72 : 1;
    uint32 _MSSEL73 : 1;
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
} RSENT7TSSELBits_t;

typedef struct
{
    uint32 _MSSEL80 : 1;
    uint32 _MSSEL81 : 1;
    uint32 _MSSEL82 : 1;
    uint32 _MSSEL83 : 1;
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
} RSENT8TSSELBits_t;

typedef struct
{
    uint32 _MSSEL90 : 1;
    uint32 _MSSEL91 : 1;
    uint32 _MSSEL92 : 1;
    uint32 _MSSEL93 : 1;
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
} RSENT9TSSELBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT0TSSELBits_t BIT;
} RSENT0TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT1TSSELBits_t BIT;
} RSENT1TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT2TSSELBits_t BIT;
} RSENT2TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT3TSSELBits_t BIT;
} RSENT3TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT4TSSELBits_t BIT;
} RSENT4TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT5TSSELBits_t BIT;
} RSENT5TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT6TSSELBits_t BIT;
} RSENT6TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT7TSSELBits_t BIT;
} RSENT7TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT8TSSELBits_t BIT;
} RSENT8TSSEL_t;

typedef union
{
    uint32 UINT32;
    RSENT9TSSELBits_t BIT;
} RSENT9TSSEL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT0TSSEL_BASE, 0xFFCDCF00, __READ_WRITE, RSENT0TSSEL_t);
__IOREG(RSENT1TSSEL_BASE, 0xFFCDCF04, __READ_WRITE, RSENT1TSSEL_t);
__IOREG(RSENT2TSSEL_BASE, 0xFFCDCF08, __READ_WRITE, RSENT2TSSEL_t);
__IOREG(RSENT3TSSEL_BASE, 0xFFCDCF0C, __READ_WRITE, RSENT3TSSEL_t);
__IOREG(RSENT4TSSEL_BASE, 0xFFCDCF10, __READ_WRITE, RSENT4TSSEL_t);
__IOREG(RSENT5TSSEL_BASE, 0xFFCDCF14, __READ_WRITE, RSENT5TSSEL_t);
__IOREG(RSENT6TSSEL_BASE, 0xFFCDCF18, __READ_WRITE, RSENT6TSSEL_t);
__IOREG(RSENT7TSSEL_BASE, 0xFFCDCF1C, __READ_WRITE, RSENT7TSSEL_t);
__IOREG(RSENT8TSSEL_BASE, 0xFFCDCF20, __READ_WRITE, RSENT8TSSEL_t);
__IOREG(RSENT9TSSEL_BASE, 0xFFCDCF24, __READ_WRITE, RSENT9TSSEL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT0TSSEL RSENT0TSSEL_BASE.UINT32
#define RSENT0TSSEL_MSSEL00 RSENT0TSSEL_BASE.BIT._MSSEL00
#define RSENT0TSSEL_MSSEL01 RSENT0TSSEL_BASE.BIT._MSSEL01
#define RSENT0TSSEL_MSSEL02 RSENT0TSSEL_BASE.BIT._MSSEL02
#define RSENT0TSSEL_MSSEL03 RSENT0TSSEL_BASE.BIT._MSSEL03
#define RSENT1TSSEL RSENT1TSSEL_BASE.UINT32
#define RSENT1TSSEL_MSSEL10 RSENT1TSSEL_BASE.BIT._MSSEL10
#define RSENT1TSSEL_MSSEL11 RSENT1TSSEL_BASE.BIT._MSSEL11
#define RSENT1TSSEL_MSSEL12 RSENT1TSSEL_BASE.BIT._MSSEL12
#define RSENT1TSSEL_MSSEL13 RSENT1TSSEL_BASE.BIT._MSSEL13
#define RSENT2TSSEL RSENT2TSSEL_BASE.UINT32
#define RSENT2TSSEL_MSSEL20 RSENT2TSSEL_BASE.BIT._MSSEL20
#define RSENT2TSSEL_MSSEL21 RSENT2TSSEL_BASE.BIT._MSSEL21
#define RSENT2TSSEL_MSSEL22 RSENT2TSSEL_BASE.BIT._MSSEL22
#define RSENT2TSSEL_MSSEL23 RSENT2TSSEL_BASE.BIT._MSSEL23
#define RSENT3TSSEL RSENT3TSSEL_BASE.UINT32
#define RSENT3TSSEL_MSSEL30 RSENT3TSSEL_BASE.BIT._MSSEL30
#define RSENT3TSSEL_MSSEL31 RSENT3TSSEL_BASE.BIT._MSSEL31
#define RSENT3TSSEL_MSSEL32 RSENT3TSSEL_BASE.BIT._MSSEL32
#define RSENT3TSSEL_MSSEL33 RSENT3TSSEL_BASE.BIT._MSSEL33
#define RSENT4TSSEL RSENT4TSSEL_BASE.UINT32
#define RSENT4TSSEL_MSSEL40 RSENT4TSSEL_BASE.BIT._MSSEL40
#define RSENT4TSSEL_MSSEL41 RSENT4TSSEL_BASE.BIT._MSSEL41
#define RSENT4TSSEL_MSSEL42 RSENT4TSSEL_BASE.BIT._MSSEL42
#define RSENT4TSSEL_MSSEL43 RSENT4TSSEL_BASE.BIT._MSSEL43
#define RSENT5TSSEL RSENT5TSSEL_BASE.UINT32
#define RSENT5TSSEL_MSSEL50 RSENT5TSSEL_BASE.BIT._MSSEL50
#define RSENT5TSSEL_MSSEL51 RSENT5TSSEL_BASE.BIT._MSSEL51
#define RSENT5TSSEL_MSSEL52 RSENT5TSSEL_BASE.BIT._MSSEL52
#define RSENT5TSSEL_MSSEL53 RSENT5TSSEL_BASE.BIT._MSSEL53
#define RSENT6TSSEL RSENT6TSSEL_BASE.UINT32
#define RSENT6TSSEL_MSSEL60 RSENT6TSSEL_BASE.BIT._MSSEL60
#define RSENT6TSSEL_MSSEL61 RSENT6TSSEL_BASE.BIT._MSSEL61
#define RSENT6TSSEL_MSSEL62 RSENT6TSSEL_BASE.BIT._MSSEL62
#define RSENT6TSSEL_MSSEL63 RSENT6TSSEL_BASE.BIT._MSSEL63
#define RSENT7TSSEL RSENT7TSSEL_BASE.UINT32
#define RSENT7TSSEL_MSSEL70 RSENT7TSSEL_BASE.BIT._MSSEL70
#define RSENT7TSSEL_MSSEL71 RSENT7TSSEL_BASE.BIT._MSSEL71
#define RSENT7TSSEL_MSSEL72 RSENT7TSSEL_BASE.BIT._MSSEL72
#define RSENT7TSSEL_MSSEL73 RSENT7TSSEL_BASE.BIT._MSSEL73
#define RSENT8TSSEL RSENT8TSSEL_BASE.UINT32
#define RSENT8TSSEL_MSSEL80 RSENT8TSSEL_BASE.BIT._MSSEL80
#define RSENT8TSSEL_MSSEL81 RSENT8TSSEL_BASE.BIT._MSSEL81
#define RSENT8TSSEL_MSSEL82 RSENT8TSSEL_BASE.BIT._MSSEL82
#define RSENT8TSSEL_MSSEL83 RSENT8TSSEL_BASE.BIT._MSSEL83
#define RSENT9TSSEL RSENT9TSSEL_BASE.UINT32
#define RSENT9TSSEL_MSSEL90 RSENT9TSSEL_BASE.BIT._MSSEL90
#define RSENT9TSSEL_MSSEL91 RSENT9TSSEL_BASE.BIT._MSSEL91
#define RSENT9TSSEL_MSSEL92 RSENT9TSSEL_BASE.BIT._MSSEL92
#define RSENT9TSSEL_MSSEL93 RSENT9TSSEL_BASE.BIT._MSSEL93

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif