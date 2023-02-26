#ifndef __DR7F701373_HSUS1_HEADER__
#define __DR7F701373_HSUS1_HEADER__



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
    uint32 _HSUS1CKEN : 1;
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
} HSUS1CKENBits_t;

typedef struct
{
    uint32 _HSUS1SRST : 1;
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
} HSUS1SRSTBits_t;

typedef struct
{
    uint32 _HSUS1EN : 1;
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
} HSUS1ENBits_t;

typedef struct
{
    uint32 _HSUS1MD : 1;
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
} HSUS1MDBits_t;

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
} HSUS1CTLBits_t;

typedef struct
{
    uint32 _HSUS1TDIV : 4;
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
} HSUS1TDIVBits_t;

typedef struct
{
    uint32 _HSUS1TSAR : 32;
} HSUS1TSARBits_t;

typedef struct
{
    uint32 _HSUS1TPFM : 13;
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
} HSUS1TPFMBits_t;

typedef struct
{
    uint32 _HSUS1RDAR : 32;
} HSUS1RDARBits_t;

typedef struct
{
    uint32 _HSUS1RPFM : 19;
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
} HSUS1RPFMBits_t;

typedef struct
{
    uint32 _HSUS1RGFM : 18;
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
} HSUS1RGFMBits_t;

typedef struct
{
    uint32 _HSUS1TPCE : 1;
    uint32 _HSUS1RFFE : 1;
    uint32 _HSUS1RGFE : 1;
    uint32 _HSUS1RPCE : 1;
    uint32 _HSUS1PEE : 1;
    uint32 _HSUS1OVEE : 1;
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
} HSUS1IRENBits_t;

typedef struct
{
    const uint32 _HSUS1TPCF : 1;
    const uint32 _HSUS1RFFF : 1;
    const uint32 _HSUS1RGFF : 1;
    const uint32 _HSUS1RPCF : 1;
    const uint32 _HSUS1PEF : 1;
    const uint32 _HSUS1OVEF : 1;
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
} HSUS1IRSTBits_t;

typedef struct
{
    uint32 _HSUS1TPCC : 1;
    uint32 _HSUS1RFFC : 1;
    uint32 _HSUS1RGFC : 1;
    uint32 _HSUS1RPCC : 1;
    uint32 _HSUS1PEC : 1;
    uint32 _HSUS1OVEC : 1;
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
} HSUS1IRCLBits_t;

typedef struct
{
    const uint32 _HSUS1ACTF : 1;
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
} HSUS1CSTBits_t;

typedef struct
{
    const uint32 _HSUS1CTFM : 13;
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
} HSUS1CTFMBits_t;

typedef struct
{
    const uint32 _HSUS1CRFM : 19;
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
} HSUS1CRFMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    HSUS1CKENBits_t BIT;
} HSUS1CKEN_t;

typedef union
{
    uint32 UINT32;
    HSUS1SRSTBits_t BIT;
} HSUS1SRST_t;

typedef union
{
    uint32 UINT32;
    HSUS1ENBits_t BIT;
} HSUS1EN_t;

typedef union
{
    uint32 UINT32;
    HSUS1MDBits_t BIT;
} HSUS1MD_t;

typedef union
{
    uint32 UINT32;
    HSUS1CTLBits_t BIT;
} HSUS1CTL_t;

typedef union
{
    uint32 UINT32;
    HSUS1TDIVBits_t BIT;
} HSUS1TDIV_t;

typedef union
{
    uint32 UINT32;
    HSUS1TSARBits_t BIT;
} HSUS1TSAR_t;

typedef union
{
    uint32 UINT32;
    HSUS1TPFMBits_t BIT;
} HSUS1TPFM_t;

typedef union
{
    uint32 UINT32;
    HSUS1RDARBits_t BIT;
} HSUS1RDAR_t;

typedef union
{
    uint32 UINT32;
    HSUS1RPFMBits_t BIT;
} HSUS1RPFM_t;

typedef union
{
    uint32 UINT32;
    HSUS1RGFMBits_t BIT;
} HSUS1RGFM_t;

typedef union
{
    uint32 UINT32;
    HSUS1IRENBits_t BIT;
} HSUS1IREN_t;

typedef union
{
    uint32 UINT32;
    const HSUS1IRSTBits_t BIT;
} HSUS1IRST_t;

typedef union
{
    uint32 UINT32;
    HSUS1IRCLBits_t BIT;
} HSUS1IRCL_t;

typedef union
{
    uint32 UINT32;
    const HSUS1CSTBits_t BIT;
} HSUS1CST_t;

typedef union
{
    uint32 UINT32;
    const HSUS1CTFMBits_t BIT;
} HSUS1CTFM_t;

typedef union
{
    uint32 UINT32;
    const HSUS1CRFMBits_t BIT;
} HSUS1CRFM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(HSUS1CKEN_BASE, 0xFFCA8000, __READ_WRITE, HSUS1CKEN_t);
__IOREG(HSUS1SRST_BASE, 0xFFCA8004, __READ_WRITE, HSUS1SRST_t);
__IOREG(HSUS1EN_BASE, 0xFFCA8008, __READ_WRITE, HSUS1EN_t);
__IOREG(HSUS1MD_BASE, 0xFFCA800C, __READ_WRITE, HSUS1MD_t);
__IOREG(HSUS1CTL_BASE, 0xFFCA8010, __READ_WRITE, HSUS1CTL_t);
__IOREG(HSUS1TDIV_BASE, 0xFFCA8014, __READ_WRITE, HSUS1TDIV_t);
__IOREG(HSUS1TSAR_BASE, 0xFFCA8018, __READ_WRITE, HSUS1TSAR_t);
__IOREG(HSUS1TPFM_BASE, 0xFFCA801C, __READ_WRITE, HSUS1TPFM_t);
__IOREG(HSUS1RDAR_BASE, 0xFFCA8020, __READ_WRITE, HSUS1RDAR_t);
__IOREG(HSUS1RPFM_BASE, 0xFFCA8024, __READ_WRITE, HSUS1RPFM_t);
__IOREG(HSUS1RGFM_BASE, 0xFFCA8028, __READ_WRITE, HSUS1RGFM_t);
__IOREG(HSUS1IREN_BASE, 0xFFCA802C, __READ_WRITE, HSUS1IREN_t);
__IOREG(HSUS1IRST_BASE, 0xFFCA8030, __READ, HSUS1IRST_t);
__IOREG(HSUS1IRCL_BASE, 0xFFCA8034, __READ_WRITE, HSUS1IRCL_t);
__IOREG(HSUS1CST_BASE, 0xFFCA8038, __READ, HSUS1CST_t);
__IOREG(HSUS1CTFM_BASE, 0xFFCA803C, __READ, HSUS1CTFM_t);
__IOREG(HSUS1CRFM_BASE, 0xFFCA8040, __READ, HSUS1CRFM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define HSUS1CKEN HSUS1CKEN_BASE.UINT32
#define HSUS1CKEN_HSUS1CKEN HSUS1CKEN_BASE.BIT._HSUS1CKEN
#define HSUS1SRST HSUS1SRST_BASE.UINT32
#define HSUS1SRST_HSUS1SRST HSUS1SRST_BASE.BIT._HSUS1SRST
#define HSUS1EN HSUS1EN_BASE.UINT32
#define HSUS1EN_HSUS1EN HSUS1EN_BASE.BIT._HSUS1EN
#define HSUS1MD HSUS1MD_BASE.UINT32
#define HSUS1MD_HSUS1MD HSUS1MD_BASE.BIT._HSUS1MD
#define HSUS1CTL HSUS1CTL_BASE.UINT32
#define HSUS1CTL_LANE HSUS1CTL_BASE.BIT._LANE
#define HSUS1CTL_PRSL HSUS1CTL_BASE.BIT._PRSL
#define HSUS1TDIV HSUS1TDIV_BASE.UINT32
#define HSUS1TDIV_HSUS1TDIV HSUS1TDIV_BASE.BIT._HSUS1TDIV
#define HSUS1TSAR HSUS1TSAR_BASE.UINT32
#define HSUS1TSAR_HSUS1TSAR HSUS1TSAR_BASE.BIT._HSUS1TSAR
#define HSUS1TPFM HSUS1TPFM_BASE.UINT32
#define HSUS1TPFM_HSUS1TPFM HSUS1TPFM_BASE.BIT._HSUS1TPFM
#define HSUS1RDAR HSUS1RDAR_BASE.UINT32
#define HSUS1RDAR_HSUS1RDAR HSUS1RDAR_BASE.BIT._HSUS1RDAR
#define HSUS1RPFM HSUS1RPFM_BASE.UINT32
#define HSUS1RPFM_HSUS1RPFM HSUS1RPFM_BASE.BIT._HSUS1RPFM
#define HSUS1RGFM HSUS1RGFM_BASE.UINT32
#define HSUS1RGFM_HSUS1RGFM HSUS1RGFM_BASE.BIT._HSUS1RGFM
#define HSUS1IREN HSUS1IREN_BASE.UINT32
#define HSUS1IREN_HSUS1TPCE HSUS1IREN_BASE.BIT._HSUS1TPCE
#define HSUS1IREN_HSUS1RFFE HSUS1IREN_BASE.BIT._HSUS1RFFE
#define HSUS1IREN_HSUS1RGFE HSUS1IREN_BASE.BIT._HSUS1RGFE
#define HSUS1IREN_HSUS1RPCE HSUS1IREN_BASE.BIT._HSUS1RPCE
#define HSUS1IREN_HSUS1PEE HSUS1IREN_BASE.BIT._HSUS1PEE
#define HSUS1IREN_HSUS1OVEE HSUS1IREN_BASE.BIT._HSUS1OVEE
#define HSUS1IRST HSUS1IRST_BASE.UINT32
#define HSUS1IRST_HSUS1TPCF HSUS1IRST_BASE.BIT._HSUS1TPCF
#define HSUS1IRST_HSUS1RFFF HSUS1IRST_BASE.BIT._HSUS1RFFF
#define HSUS1IRST_HSUS1RGFF HSUS1IRST_BASE.BIT._HSUS1RGFF
#define HSUS1IRST_HSUS1RPCF HSUS1IRST_BASE.BIT._HSUS1RPCF
#define HSUS1IRST_HSUS1PEF HSUS1IRST_BASE.BIT._HSUS1PEF
#define HSUS1IRST_HSUS1OVEF HSUS1IRST_BASE.BIT._HSUS1OVEF
#define HSUS1IRCL HSUS1IRCL_BASE.UINT32
#define HSUS1IRCL_HSUS1TPCC HSUS1IRCL_BASE.BIT._HSUS1TPCC
#define HSUS1IRCL_HSUS1RFFC HSUS1IRCL_BASE.BIT._HSUS1RFFC
#define HSUS1IRCL_HSUS1RGFC HSUS1IRCL_BASE.BIT._HSUS1RGFC
#define HSUS1IRCL_HSUS1RPCC HSUS1IRCL_BASE.BIT._HSUS1RPCC
#define HSUS1IRCL_HSUS1PEC HSUS1IRCL_BASE.BIT._HSUS1PEC
#define HSUS1IRCL_HSUS1OVEC HSUS1IRCL_BASE.BIT._HSUS1OVEC
#define HSUS1CST HSUS1CST_BASE.UINT32
#define HSUS1CST_HSUS1ACTF HSUS1CST_BASE.BIT._HSUS1ACTF
#define HSUS1CTFM HSUS1CTFM_BASE.UINT32
#define HSUS1CTFM_HSUS1CTFM HSUS1CTFM_BASE.BIT._HSUS1CTFM
#define HSUS1CRFM HSUS1CRFM_BASE.UINT32
#define HSUS1CRFM_HSUS1CRFM HSUS1CRFM_BASE.BIT._HSUS1CRFM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif