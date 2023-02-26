#ifndef __DR7F701373_BIST_HEADER__
#define __DR7F701373_BIST_HEADER__



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
    const uint32 _LBISTREF1 : 20;
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
} LBISTREF1Bits_t;

typedef struct
{
    const uint32 _LBISTREF2 : 20;
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
} LBISTREF2Bits_t;

typedef struct
{
    const uint32 _MBISTREF1 : 20;
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
} MBISTREF1Bits_t;

typedef struct
{
    const uint32 _MBISTREF2 : 20;
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
} MBISTREF2Bits_t;

typedef struct
{
    const uint32 _LBISTSIG1 : 20;
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
} LBISTSIG1Bits_t;

typedef struct
{
    const uint32 _LBISTSIG2 : 20;
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
} LBISTSIG2Bits_t;

typedef struct
{
    const uint32 _MBISTSIG1 : 20;
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
} MBISTSIG1Bits_t;

typedef struct
{
    const uint32 _MBISTSIG2 : 20;
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
} MBISTSIG2Bits_t;

typedef struct
{
    const uint32 _MBISTFTAGL1 : 32;
} MBISTFTAGL1Bits_t;

typedef struct
{
    const uint32 _MBISTFTAGH1 : 32;
} MBISTFTAGH1Bits_t;

typedef struct
{
    const uint32 _MBISTFTAGL2 : 32;
} MBISTFTAGL2Bits_t;

typedef struct
{
    const uint32 _MBISTFTAGH2 : 32;
} MBISTFTAGH2Bits_t;

typedef struct
{
    const uint32 _CMPERR : 1;
    const uint32 _BISTEND : 1;
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
} BSEQ0STBits_t;

typedef struct
{
    const uint32 _CMPERRB : 1;
    const uint32 _BISTENDB : 1;
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
} BSEQ0STBBits_t;

typedef struct
{
    const uint32 _LBIST1ST : 1;
    const uint32 _LBIST2ST : 1;
    const uint32 _MBIST1ST : 1;
    const uint32 _MBIST2ST : 1;
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
} BISTSTBits_t;

typedef struct
{
    uint32 _HWBISTEXE : 1;
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
} BSEQ0CTLBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    const LBISTREF1Bits_t BIT;
} LBISTREF1_t;

typedef union
{
    uint32 UINT32;
    const LBISTREF2Bits_t BIT;
} LBISTREF2_t;

typedef union
{
    uint32 UINT32;
    const MBISTREF1Bits_t BIT;
} MBISTREF1_t;

typedef union
{
    uint32 UINT32;
    const MBISTREF2Bits_t BIT;
} MBISTREF2_t;

typedef union
{
    uint32 UINT32;
    const LBISTSIG1Bits_t BIT;
} LBISTSIG1_t;

typedef union
{
    uint32 UINT32;
    const LBISTSIG2Bits_t BIT;
} LBISTSIG2_t;

typedef union
{
    uint32 UINT32;
    const MBISTSIG1Bits_t BIT;
} MBISTSIG1_t;

typedef union
{
    uint32 UINT32;
    const MBISTSIG2Bits_t BIT;
} MBISTSIG2_t;

typedef union
{
    uint32 UINT32;
    const MBISTFTAGL1Bits_t BIT;
} MBISTFTAGL1_t;

typedef union
{
    uint32 UINT32;
    const MBISTFTAGH1Bits_t BIT;
} MBISTFTAGH1_t;

typedef union
{
    uint32 UINT32;
    const MBISTFTAGL2Bits_t BIT;
} MBISTFTAGL2_t;

typedef union
{
    uint32 UINT32;
    const MBISTFTAGH2Bits_t BIT;
} MBISTFTAGH2_t;

typedef union
{
    uint32 UINT32;
    const BSEQ0STBits_t BIT;
} BSEQ0ST_t;

typedef union
{
    uint32 UINT32;
    const BSEQ0STBBits_t BIT;
} BSEQ0STB_t;

typedef union
{
    uint32 UINT32;
    const BISTSTBits_t BIT;
} BISTST_t;

typedef union
{
    uint32 UINT32;
    BSEQ0CTLBits_t BIT;
} BSEQ0CTL_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(LBISTREF1_BASE, 0xFFCDA000, __READ, LBISTREF1_t);
__IOREG(LBISTREF2_BASE, 0xFFCDA004, __READ, LBISTREF2_t);
__IOREG(MBISTREF1_BASE, 0xFFCDA008, __READ, MBISTREF1_t);
__IOREG(MBISTREF2_BASE, 0xFFCDA00C, __READ, MBISTREF2_t);
__IOREG(LBISTSIG1_BASE, 0xFFCDA010, __READ, LBISTSIG1_t);
__IOREG(LBISTSIG2_BASE, 0xFFCDA014, __READ, LBISTSIG2_t);
__IOREG(MBISTSIG1_BASE, 0xFFCDA018, __READ, MBISTSIG1_t);
__IOREG(MBISTSIG2_BASE, 0xFFCDA01C, __READ, MBISTSIG2_t);
__IOREG(MBISTFTAGL1_BASE, 0xFFCDA020, __READ, MBISTFTAGL1_t);
__IOREG(MBISTFTAGH1_BASE, 0xFFCDA024, __READ, MBISTFTAGH1_t);
__IOREG(MBISTFTAGL2_BASE, 0xFFCDA028, __READ, MBISTFTAGL2_t);
__IOREG(MBISTFTAGH2_BASE, 0xFFCDA02C, __READ, MBISTFTAGH2_t);
__IOREG(BSEQ0ST_BASE, 0xFFCDA030, __READ, BSEQ0ST_t);
__IOREG(BSEQ0STB_BASE, 0xFFCDA034, __READ, BSEQ0STB_t);
__IOREG(BISTST_BASE, 0xFFCDA038, __READ, BISTST_t);
__IOREG(BSEQ0CTL_BASE, 0xFFF80200, __READ_WRITE, BSEQ0CTL_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define LBISTREF1 LBISTREF1_BASE.UINT32
#define LBISTREF1_LBISTREF1 LBISTREF1_BASE.BIT._LBISTREF1
#define LBISTREF2 LBISTREF2_BASE.UINT32
#define LBISTREF2_LBISTREF2 LBISTREF2_BASE.BIT._LBISTREF2
#define MBISTREF1 MBISTREF1_BASE.UINT32
#define MBISTREF1_MBISTREF1 MBISTREF1_BASE.BIT._MBISTREF1
#define MBISTREF2 MBISTREF2_BASE.UINT32
#define MBISTREF2_MBISTREF2 MBISTREF2_BASE.BIT._MBISTREF2
#define LBISTSIG1 LBISTSIG1_BASE.UINT32
#define LBISTSIG1_LBISTSIG1 LBISTSIG1_BASE.BIT._LBISTSIG1
#define LBISTSIG2 LBISTSIG2_BASE.UINT32
#define LBISTSIG2_LBISTSIG2 LBISTSIG2_BASE.BIT._LBISTSIG2
#define MBISTSIG1 MBISTSIG1_BASE.UINT32
#define MBISTSIG1_MBISTSIG1 MBISTSIG1_BASE.BIT._MBISTSIG1
#define MBISTSIG2 MBISTSIG2_BASE.UINT32
#define MBISTSIG2_MBISTSIG2 MBISTSIG2_BASE.BIT._MBISTSIG2
#define MBISTFTAGL1 MBISTFTAGL1_BASE.UINT32
#define MBISTFTAGL1_MBISTFTAGL1 MBISTFTAGL1_BASE.BIT._MBISTFTAGL1
#define MBISTFTAGH1 MBISTFTAGH1_BASE.UINT32
#define MBISTFTAGH1_MBISTFTAGH1 MBISTFTAGH1_BASE.BIT._MBISTFTAGH1
#define MBISTFTAGL2 MBISTFTAGL2_BASE.UINT32
#define MBISTFTAGL2_MBISTFTAGL2 MBISTFTAGL2_BASE.BIT._MBISTFTAGL2
#define MBISTFTAGH2 MBISTFTAGH2_BASE.UINT32
#define MBISTFTAGH2_MBISTFTAGH2 MBISTFTAGH2_BASE.BIT._MBISTFTAGH2
#define BSEQ0ST BSEQ0ST_BASE.UINT32
#define BSEQ0ST_CMPERR BSEQ0ST_BASE.BIT._CMPERR
#define BSEQ0ST_BISTEND BSEQ0ST_BASE.BIT._BISTEND
#define BSEQ0STB BSEQ0STB_BASE.UINT32
#define BSEQ0STB_CMPERRB BSEQ0STB_BASE.BIT._CMPERRB
#define BSEQ0STB_BISTENDB BSEQ0STB_BASE.BIT._BISTENDB
#define BISTST BISTST_BASE.UINT32
#define BISTST_LBIST1ST BISTST_BASE.BIT._LBIST1ST
#define BISTST_LBIST2ST BISTST_BASE.BIT._LBIST2ST
#define BISTST_MBIST1ST BISTST_BASE.BIT._MBIST1ST
#define BISTST_MBIST2ST BISTST_BASE.BIT._MBIST2ST
#define BSEQ0CTL BSEQ0CTL_BASE.UINT32
#define BSEQ0CTL_HWBISTEXE BSEQ0CTL_BASE.BIT._HWBISTEXE

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif