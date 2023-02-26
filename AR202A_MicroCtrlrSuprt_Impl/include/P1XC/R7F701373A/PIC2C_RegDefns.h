#ifndef __DR7F701373_PIC2C_HEADER__
#define __DR7F701373_PIC2C_HEADER__



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
    uint32 _PREMUX00 : 12;
    uint32 _PREMUX02 : 6;
    uint32 _PREMUX03 : 6;
    uint32 _PREMUX04 : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PIC2CTRGPREMUX0Bits_t;

typedef struct
{
    uint32 _PREMUX10 : 6;
    uint32 _PREMUX11 : 6;
    uint32 _PREMUX12 : 6;
    uint32 _PREMUX13 : 6;
    uint32 _PREMUX14 : 6;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} PIC2CTRGPREMUX1Bits_t;

typedef struct
{
    uint32 _MUX00 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _MUX01 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _MUX02 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _MUX03 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _MUX04 : 1;
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
} PIC2CTRGMUX0Bits_t;

typedef struct
{
    uint32 _MUX10 : 1;
    uint32 padding1 : 1;
    uint32 padding2 : 1;
    uint32 padding3 : 1;
    uint32 _MUX11 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _MUX12 : 1;
    uint32 padding9 : 1;
    uint32 padding10 : 1;
    uint32 padding11 : 1;
    uint32 _MUX13 : 1;
    uint32 padding13 : 1;
    uint32 padding14 : 1;
    uint32 padding15 : 1;
    uint32 _MUX14 : 1;
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
} PIC2CTRGMUX1Bits_t;

typedef struct
{
    uint32 _EDGSEL00 : 2;
    uint32 _EDGSEL01 : 2;
    uint32 _EDGSEL02 : 2;
    uint32 _EDGSEL03 : 2;
    uint32 _EDGSEL04 : 2;
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
} PIC2CEDGSEL0Bits_t;

typedef struct
{
    uint32 _EDGSEL10 : 2;
    uint32 _EDGSEL11 : 2;
    uint32 _EDGSEL12 : 2;
    uint32 _EDGSEL13 : 2;
    uint32 _EDGSEL14 : 2;
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
} PIC2CEDGSEL1Bits_t;

typedef struct
{
    uint32 _ENP2TIM00 : 2;
    uint32 _ENP2TIM01 : 2;
    uint32 _ENP2TIM02 : 2;
    uint32 _ENP2TIM03 : 2;
    uint32 _ENP2TIM04 : 2;
    uint32 _ENP2TIM05 : 2;
    uint32 _ENP2TIM06 : 2;
    uint32 _ENP2TIM07 : 2;
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
} PIC2CENP2TIM0Bits_t;

typedef struct
{
    uint32 _ENP2TIM10 : 2;
    uint32 _ENP2TIM11 : 2;
    uint32 _ENP2TIM12 : 2;
    uint32 _ENP2TIM13 : 2;
    uint32 _ENP2TIM14 : 2;
    uint32 _ENP2TIM15 : 2;
    uint32 _ENP2TIM16 : 2;
    uint32 _ENP2TIM17 : 2;
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
} PIC2CENP2TIM1Bits_t;

typedef struct
{
    uint32 _HIZ0ESO : 1;
    uint32 _HIZ1ESO : 1;
    uint32 _HIZ2ESO : 1;
    uint32 _HIZ0ECM : 1;
    uint32 _HIZ1ECM : 1;
    uint32 _HIZ2ECM : 1;
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
} PIC2CENHIZDTMBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    PIC2CTRGPREMUX0Bits_t BIT;
} PIC2CTRGPREMUX0_t;

typedef union
{
    uint32 UINT32;
    PIC2CTRGPREMUX1Bits_t BIT;
} PIC2CTRGPREMUX1_t;

typedef union
{
    uint32 UINT32;
    PIC2CTRGMUX0Bits_t BIT;
} PIC2CTRGMUX0_t;

typedef union
{
    uint32 UINT32;
    PIC2CTRGMUX1Bits_t BIT;
} PIC2CTRGMUX1_t;

typedef union
{
    uint32 UINT32;
    PIC2CEDGSEL0Bits_t BIT;
} PIC2CEDGSEL0_t;

typedef union
{
    uint32 UINT32;
    PIC2CEDGSEL1Bits_t BIT;
} PIC2CEDGSEL1_t;

typedef union
{
    uint32 UINT32;
    PIC2CENP2TIM0Bits_t BIT;
} PIC2CENP2TIM0_t;

typedef union
{
    uint32 UINT32;
    PIC2CENP2TIM1Bits_t BIT;
} PIC2CENP2TIM1_t;

typedef union
{
    uint32 UINT32;
    PIC2CENHIZDTMBits_t BIT;
} PIC2CENHIZDTM_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(PIC2CTRGPREMUX0_BASE, 0xFFD68000, __READ_WRITE, PIC2CTRGPREMUX0_t);
__IOREG(PIC2CTRGPREMUX1_BASE, 0xFFD68004, __READ_WRITE, PIC2CTRGPREMUX1_t);
__IOREG(PIC2CTRGMUX0_BASE, 0xFFD68010, __READ_WRITE, PIC2CTRGMUX0_t);
__IOREG(PIC2CTRGMUX1_BASE, 0xFFD68014, __READ_WRITE, PIC2CTRGMUX1_t);
__IOREG(PIC2CEDGSEL0_BASE, 0xFFD68018, __READ_WRITE, PIC2CEDGSEL0_t);
__IOREG(PIC2CEDGSEL1_BASE, 0xFFD6801C, __READ_WRITE, PIC2CEDGSEL1_t);
__IOREG(PIC2CENP2TIM0_BASE, 0xFFD68020, __READ_WRITE, PIC2CENP2TIM0_t);
__IOREG(PIC2CENP2TIM1_BASE, 0xFFD68024, __READ_WRITE, PIC2CENP2TIM1_t);
__IOREG(PIC2CENHIZDTM_BASE, 0xFFD68028, __READ_WRITE, PIC2CENHIZDTM_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define PIC2CTRGPREMUX0 PIC2CTRGPREMUX0_BASE.UINT32
#define PIC2CTRGPREMUX0_PREMUX00 PIC2CTRGPREMUX0_BASE.BIT._PREMUX00
#define PIC2CTRGPREMUX0_PREMUX02 PIC2CTRGPREMUX0_BASE.BIT._PREMUX02
#define PIC2CTRGPREMUX0_PREMUX03 PIC2CTRGPREMUX0_BASE.BIT._PREMUX03
#define PIC2CTRGPREMUX0_PREMUX04 PIC2CTRGPREMUX0_BASE.BIT._PREMUX04
#define PIC2CTRGPREMUX1 PIC2CTRGPREMUX1_BASE.UINT32
#define PIC2CTRGPREMUX1_PREMUX10 PIC2CTRGPREMUX1_BASE.BIT._PREMUX10
#define PIC2CTRGPREMUX1_PREMUX11 PIC2CTRGPREMUX1_BASE.BIT._PREMUX11
#define PIC2CTRGPREMUX1_PREMUX12 PIC2CTRGPREMUX1_BASE.BIT._PREMUX12
#define PIC2CTRGPREMUX1_PREMUX13 PIC2CTRGPREMUX1_BASE.BIT._PREMUX13
#define PIC2CTRGPREMUX1_PREMUX14 PIC2CTRGPREMUX1_BASE.BIT._PREMUX14
#define PIC2CTRGMUX0 PIC2CTRGMUX0_BASE.UINT32
#define PIC2CTRGMUX0_MUX00 PIC2CTRGMUX0_BASE.BIT._MUX00
#define PIC2CTRGMUX0_MUX01 PIC2CTRGMUX0_BASE.BIT._MUX01
#define PIC2CTRGMUX0_MUX02 PIC2CTRGMUX0_BASE.BIT._MUX02
#define PIC2CTRGMUX0_MUX03 PIC2CTRGMUX0_BASE.BIT._MUX03
#define PIC2CTRGMUX0_MUX04 PIC2CTRGMUX0_BASE.BIT._MUX04
#define PIC2CTRGMUX1 PIC2CTRGMUX1_BASE.UINT32
#define PIC2CTRGMUX1_MUX10 PIC2CTRGMUX1_BASE.BIT._MUX10
#define PIC2CTRGMUX1_MUX11 PIC2CTRGMUX1_BASE.BIT._MUX11
#define PIC2CTRGMUX1_MUX12 PIC2CTRGMUX1_BASE.BIT._MUX12
#define PIC2CTRGMUX1_MUX13 PIC2CTRGMUX1_BASE.BIT._MUX13
#define PIC2CTRGMUX1_MUX14 PIC2CTRGMUX1_BASE.BIT._MUX14
#define PIC2CEDGSEL0 PIC2CEDGSEL0_BASE.UINT32
#define PIC2CEDGSEL0_EDGSEL00 PIC2CEDGSEL0_BASE.BIT._EDGSEL00
#define PIC2CEDGSEL0_EDGSEL01 PIC2CEDGSEL0_BASE.BIT._EDGSEL01
#define PIC2CEDGSEL0_EDGSEL02 PIC2CEDGSEL0_BASE.BIT._EDGSEL02
#define PIC2CEDGSEL0_EDGSEL03 PIC2CEDGSEL0_BASE.BIT._EDGSEL03
#define PIC2CEDGSEL0_EDGSEL04 PIC2CEDGSEL0_BASE.BIT._EDGSEL04
#define PIC2CEDGSEL1 PIC2CEDGSEL1_BASE.UINT32
#define PIC2CEDGSEL1_EDGSEL10 PIC2CEDGSEL1_BASE.BIT._EDGSEL10
#define PIC2CEDGSEL1_EDGSEL11 PIC2CEDGSEL1_BASE.BIT._EDGSEL11
#define PIC2CEDGSEL1_EDGSEL12 PIC2CEDGSEL1_BASE.BIT._EDGSEL12
#define PIC2CEDGSEL1_EDGSEL13 PIC2CEDGSEL1_BASE.BIT._EDGSEL13
#define PIC2CEDGSEL1_EDGSEL14 PIC2CEDGSEL1_BASE.BIT._EDGSEL14
#define PIC2CENP2TIM0 PIC2CENP2TIM0_BASE.UINT32
#define PIC2CENP2TIM0_ENP2TIM00 PIC2CENP2TIM0_BASE.BIT._ENP2TIM00
#define PIC2CENP2TIM0_ENP2TIM01 PIC2CENP2TIM0_BASE.BIT._ENP2TIM01
#define PIC2CENP2TIM0_ENP2TIM02 PIC2CENP2TIM0_BASE.BIT._ENP2TIM02
#define PIC2CENP2TIM0_ENP2TIM03 PIC2CENP2TIM0_BASE.BIT._ENP2TIM03
#define PIC2CENP2TIM0_ENP2TIM04 PIC2CENP2TIM0_BASE.BIT._ENP2TIM04
#define PIC2CENP2TIM0_ENP2TIM05 PIC2CENP2TIM0_BASE.BIT._ENP2TIM05
#define PIC2CENP2TIM0_ENP2TIM06 PIC2CENP2TIM0_BASE.BIT._ENP2TIM06
#define PIC2CENP2TIM0_ENP2TIM07 PIC2CENP2TIM0_BASE.BIT._ENP2TIM07
#define PIC2CENP2TIM1 PIC2CENP2TIM1_BASE.UINT32
#define PIC2CENP2TIM1_ENP2TIM10 PIC2CENP2TIM1_BASE.BIT._ENP2TIM10
#define PIC2CENP2TIM1_ENP2TIM11 PIC2CENP2TIM1_BASE.BIT._ENP2TIM11
#define PIC2CENP2TIM1_ENP2TIM12 PIC2CENP2TIM1_BASE.BIT._ENP2TIM12
#define PIC2CENP2TIM1_ENP2TIM13 PIC2CENP2TIM1_BASE.BIT._ENP2TIM13
#define PIC2CENP2TIM1_ENP2TIM14 PIC2CENP2TIM1_BASE.BIT._ENP2TIM14
#define PIC2CENP2TIM1_ENP2TIM15 PIC2CENP2TIM1_BASE.BIT._ENP2TIM15
#define PIC2CENP2TIM1_ENP2TIM16 PIC2CENP2TIM1_BASE.BIT._ENP2TIM16
#define PIC2CENP2TIM1_ENP2TIM17 PIC2CENP2TIM1_BASE.BIT._ENP2TIM17
#define PIC2CENHIZDTM PIC2CENHIZDTM_BASE.UINT32
#define PIC2CENHIZDTM_HIZ0ESO PIC2CENHIZDTM_BASE.BIT._HIZ0ESO
#define PIC2CENHIZDTM_HIZ1ESO PIC2CENHIZDTM_BASE.BIT._HIZ1ESO
#define PIC2CENHIZDTM_HIZ2ESO PIC2CENHIZDTM_BASE.BIT._HIZ2ESO
#define PIC2CENHIZDTM_HIZ0ECM PIC2CENHIZDTM_BASE.BIT._HIZ0ECM
#define PIC2CENHIZDTM_HIZ1ECM PIC2CENHIZDTM_BASE.BIT._HIZ1ECM
#define PIC2CENHIZDTM_HIZ2ECM PIC2CENHIZDTM_BASE.BIT._HIZ2ECM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif