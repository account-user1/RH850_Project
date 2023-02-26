#ifndef __DR7F701373_HSUS0_HEADER__
#define __DR7F701373_HSUS0_HEADER__



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
    uint32 _HSUS0CKEN : 1;
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
} HSUS0CKENBits_t;

typedef struct
{
    uint32 _HSUS0SRST : 1;
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
} HSUS0SRSTBits_t;

typedef struct
{
    uint32 _HSUS0EN : 1;
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
} HSUS0ENBits_t;

typedef struct
{
    uint32 _HSUS0MD : 1;
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
} HSUS0MDBits_t;

typedef struct
{
    uint32 _LANE : 2;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _PRSL : 2;
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
} HSUS0CTLBits_t;

typedef struct
{
    uint32 _HSUS0TDIV : 4;
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
} HSUS0TDIVBits_t;

typedef struct
{
    uint32 _HSUS0TSAR : 32;
} HSUS0TSARBits_t;

typedef struct
{
    uint32 _HSUS0TPFM : 13;
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
} HSUS0TPFMBits_t;

typedef struct
{
    uint32 _HSUS0RDAR : 32;
} HSUS0RDARBits_t;

typedef struct
{
    uint32 _HSUS0RPFM : 19;
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
} HSUS0RPFMBits_t;

typedef struct
{
    uint32 _HSUS0RGFM : 18;
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
} HSUS0RGFMBits_t;

typedef struct
{
    uint32 _HSUS0TPCE : 1;
    uint32 _HSUS0RFFE : 1;
    uint32 _HSUS0RGFE : 1;
    uint32 _HSUS0RPCE : 1;
    uint32 _HSUS0PEE : 1;
    uint32 _HSUS0OVEE : 1;
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
} HSUS0IRENBits_t;

typedef struct
{
    const uint32 _HSUS0TPCF : 1;
    const uint32 _HSUS0RFFF : 1;
    const uint32 _HSUS0RGFF : 1;
    const uint32 _HSUS0RPCF : 1;
    const uint32 _HSUS0PEF : 1;
    const uint32 _HSUS0OVEF : 1;
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
} HSUS0IRSTBits_t;

typedef struct
{
    uint32 _HSUS0TPCC : 1;
    uint32 _HSUS0RFFC : 1;
    uint32 _HSUS0RGFC : 1;
    uint32 _HSUS0RPCC : 1;
    uint32 _HSUS0PEC : 1;
    uint32 _HSUS0OVEC : 1;
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
} HSUS0IRCLBits_t;

typedef struct
{
    const uint32 _HSUS0ACTF : 1;
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
} HSUS0CSTBits_t;

typedef struct
{
    const uint32 _HSUS0CTFM : 13;
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
} HSUS0CTFMBits_t;

typedef struct
{
    const uint32 _HSUS0CRFM : 19;
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
} HSUS0CRFMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    HSUS0CKENBits_t BIT;
} HSUS0CKEN_t;

typedef union
{
    uint32 UINT32;
    HSUS0SRSTBits_t BIT;
} HSUS0SRST_t;

typedef union
{
    uint32 UINT32;
    HSUS0ENBits_t BIT;
} HSUS0EN_t;

typedef union
{
    uint32 UINT32;
    HSUS0MDBits_t BIT;
} HSUS0MD_t;

typedef union
{
    uint32 UINT32;
    HSUS0CTLBits_t BIT;
} HSUS0CTL_t;

typedef union
{
    uint32 UINT32;
    HSUS0TDIVBits_t BIT;
} HSUS0TDIV_t;

typedef union
{
    uint32 UINT32;
    HSUS0TSARBits_t BIT;
} HSUS0TSAR_t;

typedef union
{
    uint32 UINT32;
    HSUS0TPFMBits_t BIT;
} HSUS0TPFM_t;

typedef union
{
    uint32 UINT32;
    HSUS0RDARBits_t BIT;
} HSUS0RDAR_t;

typedef union
{
    uint32 UINT32;
    HSUS0RPFMBits_t BIT;
} HSUS0RPFM_t;

typedef union
{
    uint32 UINT32;
    HSUS0RGFMBits_t BIT;
} HSUS0RGFM_t;

typedef union
{
    uint32 UINT32;
    HSUS0IRENBits_t BIT;
} HSUS0IREN_t;

typedef union
{
    uint32 UINT32;
    const HSUS0IRSTBits_t BIT;
} HSUS0IRST_t;

typedef union
{
    uint32 UINT32;
    HSUS0IRCLBits_t BIT;
} HSUS0IRCL_t;

typedef union
{
    uint32 UINT32;
    const HSUS0CSTBits_t BIT;
} HSUS0CST_t;

typedef union
{
    uint32 UINT32;
    const HSUS0CTFMBits_t BIT;
} HSUS0CTFM_t;

typedef union
{
    uint32 UINT32;
    const HSUS0CRFMBits_t BIT;
} HSUS0CRFM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(HSUS0CKEN_BASE, 0xFFD88000, __READ_WRITE, HSUS0CKEN_t);
__IOREG(HSUS0SRST_BASE, 0xFFD88004, __READ_WRITE, HSUS0SRST_t);
__IOREG(HSUS0EN_BASE, 0xFFD88008, __READ_WRITE, HSUS0EN_t);
__IOREG(HSUS0MD_BASE, 0xFFD8800C, __READ_WRITE, HSUS0MD_t);
__IOREG(HSUS0CTL_BASE, 0xFFD88010, __READ_WRITE, HSUS0CTL_t);
__IOREG(HSUS0TDIV_BASE, 0xFFD88014, __READ_WRITE, HSUS0TDIV_t);
__IOREG(HSUS0TSAR_BASE, 0xFFD88018, __READ_WRITE, HSUS0TSAR_t);
__IOREG(HSUS0TPFM_BASE, 0xFFD8801C, __READ_WRITE, HSUS0TPFM_t);
__IOREG(HSUS0RDAR_BASE, 0xFFD88020, __READ_WRITE, HSUS0RDAR_t);
__IOREG(HSUS0RPFM_BASE, 0xFFD88024, __READ_WRITE, HSUS0RPFM_t);
__IOREG(HSUS0RGFM_BASE, 0xFFD88028, __READ_WRITE, HSUS0RGFM_t);
__IOREG(HSUS0IREN_BASE, 0xFFD8802C, __READ_WRITE, HSUS0IREN_t);
__IOREG(HSUS0IRST_BASE, 0xFFD88030, __READ, HSUS0IRST_t);
__IOREG(HSUS0IRCL_BASE, 0xFFD88034, __READ_WRITE, HSUS0IRCL_t);
__IOREG(HSUS0CST_BASE, 0xFFD88038, __READ, HSUS0CST_t);
__IOREG(HSUS0CTFM_BASE, 0xFFD8803C, __READ, HSUS0CTFM_t);
__IOREG(HSUS0CRFM_BASE, 0xFFD88040, __READ, HSUS0CRFM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define HSUS0CKEN HSUS0CKEN_BASE.UINT32
#define HSUS0CKEN_HSUS0CKEN HSUS0CKEN_BASE.BIT._HSUS0CKEN
#define HSUS0SRST HSUS0SRST_BASE.UINT32
#define HSUS0SRST_HSUS0SRST HSUS0SRST_BASE.BIT._HSUS0SRST
#define HSUS0EN HSUS0EN_BASE.UINT32
#define HSUS0EN_HSUS0EN HSUS0EN_BASE.BIT._HSUS0EN
#define HSUS0MD HSUS0MD_BASE.UINT32
#define HSUS0MD_HSUS0MD HSUS0MD_BASE.BIT._HSUS0MD
#define HSUS0CTL HSUS0CTL_BASE.UINT32
#define HSUS0CTL_LANE HSUS0CTL_BASE.BIT._LANE
#define HSUS0CTL_PRSL HSUS0CTL_BASE.BIT._PRSL
#define HSUS0TDIV HSUS0TDIV_BASE.UINT32
#define HSUS0TDIV_HSUS0TDIV HSUS0TDIV_BASE.BIT._HSUS0TDIV
#define HSUS0TSAR HSUS0TSAR_BASE.UINT32
#define HSUS0TSAR_HSUS0TSAR HSUS0TSAR_BASE.BIT._HSUS0TSAR
#define HSUS0TPFM HSUS0TPFM_BASE.UINT32
#define HSUS0TPFM_HSUS0TPFM HSUS0TPFM_BASE.BIT._HSUS0TPFM
#define HSUS0RDAR HSUS0RDAR_BASE.UINT32
#define HSUS0RDAR_HSUS0RDAR HSUS0RDAR_BASE.BIT._HSUS0RDAR
#define HSUS0RPFM HSUS0RPFM_BASE.UINT32
#define HSUS0RPFM_HSUS0RPFM HSUS0RPFM_BASE.BIT._HSUS0RPFM
#define HSUS0RGFM HSUS0RGFM_BASE.UINT32
#define HSUS0RGFM_HSUS0RGFM HSUS0RGFM_BASE.BIT._HSUS0RGFM
#define HSUS0IREN HSUS0IREN_BASE.UINT32
#define HSUS0IREN_HSUS0TPCE HSUS0IREN_BASE.BIT._HSUS0TPCE
#define HSUS0IREN_HSUS0RFFE HSUS0IREN_BASE.BIT._HSUS0RFFE
#define HSUS0IREN_HSUS0RGFE HSUS0IREN_BASE.BIT._HSUS0RGFE
#define HSUS0IREN_HSUS0RPCE HSUS0IREN_BASE.BIT._HSUS0RPCE
#define HSUS0IREN_HSUS0PEE HSUS0IREN_BASE.BIT._HSUS0PEE
#define HSUS0IREN_HSUS0OVEE HSUS0IREN_BASE.BIT._HSUS0OVEE
#define HSUS0IRST HSUS0IRST_BASE.UINT32
#define HSUS0IRST_HSUS0TPCF HSUS0IRST_BASE.BIT._HSUS0TPCF
#define HSUS0IRST_HSUS0RFFF HSUS0IRST_BASE.BIT._HSUS0RFFF
#define HSUS0IRST_HSUS0RGFF HSUS0IRST_BASE.BIT._HSUS0RGFF
#define HSUS0IRST_HSUS0RPCF HSUS0IRST_BASE.BIT._HSUS0RPCF
#define HSUS0IRST_HSUS0PEF HSUS0IRST_BASE.BIT._HSUS0PEF
#define HSUS0IRST_HSUS0OVEF HSUS0IRST_BASE.BIT._HSUS0OVEF
#define HSUS0IRCL HSUS0IRCL_BASE.UINT32
#define HSUS0IRCL_HSUS0TPCC HSUS0IRCL_BASE.BIT._HSUS0TPCC
#define HSUS0IRCL_HSUS0RFFC HSUS0IRCL_BASE.BIT._HSUS0RFFC
#define HSUS0IRCL_HSUS0RGFC HSUS0IRCL_BASE.BIT._HSUS0RGFC
#define HSUS0IRCL_HSUS0RPCC HSUS0IRCL_BASE.BIT._HSUS0RPCC
#define HSUS0IRCL_HSUS0PEC HSUS0IRCL_BASE.BIT._HSUS0PEC
#define HSUS0IRCL_HSUS0OVEC HSUS0IRCL_BASE.BIT._HSUS0OVEC
#define HSUS0CST HSUS0CST_BASE.UINT32
#define HSUS0CST_HSUS0ACTF HSUS0CST_BASE.BIT._HSUS0ACTF
#define HSUS0CTFM HSUS0CTFM_BASE.UINT32
#define HSUS0CTFM_HSUS0CTFM HSUS0CTFM_BASE.BIT._HSUS0CTFM
#define HSUS0CRFM HSUS0CRFM_BASE.UINT32
#define HSUS0CRFM_HSUS0CRFM HSUS0CRFM_BASE.BIT._HSUS0CRFM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif