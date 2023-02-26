#ifndef __DR7F701373_STM0_HEADER__
#define __DR7F701373_STM0_HEADER__



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
    uint32 _CKSEL0 : 1;
    uint32 _CKSEL1 : 1;
    uint32 _CKSEL2 : 1;
    uint32 _CKSEL3 : 1;
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
} STM0CKSELBits_t;

typedef struct
{
    uint32 _TS0 : 1;
    uint32 _TS1 : 1;
    uint32 _TS2 : 1;
    uint32 _TS3 : 1;
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
} STM0TSBits_t;

typedef struct
{
    uint32 _TT0 : 1;
    uint32 _TT1 : 1;
    uint32 _TT2 : 1;
    uint32 _TT3 : 1;
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
} STM0TTBits_t;

typedef struct
{
    const uint32 _CST0 : 1;
    const uint32 _CST1 : 1;
    const uint32 _CST2 : 1;
    const uint32 _CST3 : 1;
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
} STM0CSTRBits_t;

typedef struct
{
    const uint32 _CM0A : 1;
    const uint32 _CM0B : 1;
    const uint32 _CM0C : 1;
    const uint32 _CM0D : 1;
    const uint32 _CM1A : 1;
    const uint32 _CM1B : 1;
    const uint32 _CM1C : 1;
    const uint32 _CM1D : 1;
    const uint32 _CM2A : 1;
    const uint32 _CM2B : 1;
    const uint32 _CM2C : 1;
    const uint32 _CM2D : 1;
    const uint32 _CM3A : 1;
    const uint32 _CM3B : 1;
    const uint32 _CM3C : 1;
    const uint32 _CM3D : 1;
    const uint32 _OVF0 : 1;
    const uint32 _OVF1 : 1;
    const uint32 _OVF2 : 1;
    const uint32 _OVF3 : 1;
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
} STM0STRBits_t;

typedef struct
{
    uint32 _CMR0A : 1;
    uint32 _CMR0B : 1;
    uint32 _CMR0C : 1;
    uint32 _CMR0D : 1;
    uint32 _CMR1A : 1;
    uint32 _CMR1B : 1;
    uint32 _CMR1C : 1;
    uint32 _CMR1D : 1;
    uint32 _CMR2A : 1;
    uint32 _CMR2B : 1;
    uint32 _CMR2C : 1;
    uint32 _CMR2D : 1;
    uint32 _CMR3A : 1;
    uint32 _CMR3B : 1;
    uint32 _CMR3C : 1;
    uint32 _CMR3D : 1;
    uint32 _OVR0 : 1;
    uint32 _OVR1 : 1;
    uint32 _OVR2 : 1;
    uint32 _OVR3 : 1;
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
} STM0STCBits_t;

typedef struct
{
    uint32 _STMINT0 : 2;
    uint32 _STMINT1 : 2;
    uint32 _STMINT2 : 2;
    uint32 _STMINT3 : 2;
    uint32 _STMINT4 : 2;
    uint32 _STMINT5 : 2;
    uint32 _STMINT6 : 2;
    uint32 _STMINT7 : 2;
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
} STM0ISBits_t;

typedef struct
{
    uint32 _RM0 : 1;
    uint32 _RM1 : 1;
    uint32 _RM2 : 1;
    uint32 _RM3 : 1;
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
} STM0RMBits_t;

typedef struct
{
    uint32 _CNT0L : 32;
} STM0CNT0LBits_t;

typedef struct
{
    uint32 _CNT0H : 32;
} STM0CNT0HBits_t;

typedef struct
{
    uint32 _CMP0AL : 32;
} STM0CMP0ALBits_t;

typedef struct
{
    uint32 _CMP0AH : 32;
} STM0CMP0AHBits_t;

typedef struct
{
    uint32 _CMP0BL : 32;
} STM0CMP0BLBits_t;

typedef struct
{
    uint32 _CMP0BH : 32;
} STM0CMP0BHBits_t;

typedef struct
{
    uint32 _CMP0CL : 32;
} STM0CMP0CLBits_t;

typedef struct
{
    uint32 _CMP0CH : 32;
} STM0CMP0CHBits_t;

typedef struct
{
    uint32 _CMP0DL : 32;
} STM0CMP0DLBits_t;

typedef struct
{
    uint32 _CMP0DH : 32;
} STM0CMP0DHBits_t;

typedef struct
{
    uint32 _CNT1 : 32;
} STM0CNT1Bits_t;

typedef struct
{
    uint32 _CMP1A : 32;
} STM0CMP1ABits_t;

typedef struct
{
    uint32 _CMP1B : 32;
} STM0CMP1BBits_t;

typedef struct
{
    uint32 _CMP1C : 32;
} STM0CMP1CBits_t;

typedef struct
{
    uint32 _CMP1D : 32;
} STM0CMP1DBits_t;

typedef struct
{
    uint32 _CNT2 : 32;
} STM0CNT2Bits_t;

typedef struct
{
    uint32 _CMP2A : 32;
} STM0CMP2ABits_t;

typedef struct
{
    uint32 _CMP2B : 32;
} STM0CMP2BBits_t;

typedef struct
{
    uint32 _CMP2C : 32;
} STM0CMP2CBits_t;

typedef struct
{
    uint32 _CMP2D : 32;
} STM0CMP2DBits_t;

typedef struct
{
    uint32 _CNT3 : 32;
} STM0CNT3Bits_t;

typedef struct
{
    uint32 _CMP3A : 32;
} STM0CMP3ABits_t;

typedef struct
{
    uint32 _CMP3B : 32;
} STM0CMP3BBits_t;

typedef struct
{
    uint32 _CMP3C : 32;
} STM0CMP3CBits_t;

typedef struct
{
    uint32 _CMP3D : 32;
} STM0CMP3DBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    STM0CKSELBits_t BIT;
} STM0CKSEL_t;

typedef union
{
    uint32 UINT32;
    STM0TSBits_t BIT;
} STM0TS_t;

typedef union
{
    uint32 UINT32;
    STM0TTBits_t BIT;
} STM0TT_t;

typedef union
{
    uint32 UINT32;
    const STM0CSTRBits_t BIT;
} STM0CSTR_t;

typedef union
{
    uint32 UINT32;
    const STM0STRBits_t BIT;
} STM0STR_t;

typedef union
{
    uint32 UINT32;
    STM0STCBits_t BIT;
} STM0STC_t;

typedef union
{
    uint32 UINT32;
    STM0ISBits_t BIT;
} STM0IS_t;

typedef union
{
    uint32 UINT32;
    STM0RMBits_t BIT;
} STM0RM_t;

typedef union
{
    uint32 UINT32;
    STM0CNT0LBits_t BIT;
} STM0CNT0L_t;

typedef union
{
    uint32 UINT32;
    STM0CNT0HBits_t BIT;
} STM0CNT0H_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0ALBits_t BIT;
} STM0CMP0AL_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0AHBits_t BIT;
} STM0CMP0AH_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0BLBits_t BIT;
} STM0CMP0BL_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0BHBits_t BIT;
} STM0CMP0BH_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0CLBits_t BIT;
} STM0CMP0CL_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0CHBits_t BIT;
} STM0CMP0CH_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0DLBits_t BIT;
} STM0CMP0DL_t;

typedef union
{
    uint32 UINT32;
    STM0CMP0DHBits_t BIT;
} STM0CMP0DH_t;

typedef union
{
    uint32 UINT32;
    STM0CNT1Bits_t BIT;
} STM0CNT1_t;

typedef union
{
    uint32 UINT32;
    STM0CMP1ABits_t BIT;
} STM0CMP1A_t;

typedef union
{
    uint32 UINT32;
    STM0CMP1BBits_t BIT;
} STM0CMP1B_t;

typedef union
{
    uint32 UINT32;
    STM0CMP1CBits_t BIT;
} STM0CMP1C_t;

typedef union
{
    uint32 UINT32;
    STM0CMP1DBits_t BIT;
} STM0CMP1D_t;

typedef union
{
    uint32 UINT32;
    STM0CNT2Bits_t BIT;
} STM0CNT2_t;

typedef union
{
    uint32 UINT32;
    STM0CMP2ABits_t BIT;
} STM0CMP2A_t;

typedef union
{
    uint32 UINT32;
    STM0CMP2BBits_t BIT;
} STM0CMP2B_t;

typedef union
{
    uint32 UINT32;
    STM0CMP2CBits_t BIT;
} STM0CMP2C_t;

typedef union
{
    uint32 UINT32;
    STM0CMP2DBits_t BIT;
} STM0CMP2D_t;

typedef union
{
    uint32 UINT32;
    STM0CNT3Bits_t BIT;
} STM0CNT3_t;

typedef union
{
    uint32 UINT32;
    STM0CMP3ABits_t BIT;
} STM0CMP3A_t;

typedef union
{
    uint32 UINT32;
    STM0CMP3BBits_t BIT;
} STM0CMP3B_t;

typedef union
{
    uint32 UINT32;
    STM0CMP3CBits_t BIT;
} STM0CMP3C_t;

typedef union
{
    uint32 UINT32;
    STM0CMP3DBits_t BIT;
} STM0CMP3D_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(STM0CKSEL_BASE, 0xFFDD8000, __READ_WRITE, STM0CKSEL_t);
__IOREG(STM0TS_BASE, 0xFFDD8010, __READ_WRITE, STM0TS_t);
__IOREG(STM0TT_BASE, 0xFFDD8014, __READ_WRITE, STM0TT_t);
__IOREG(STM0CSTR_BASE, 0xFFDD8018, __READ, STM0CSTR_t);
__IOREG(STM0STR_BASE, 0xFFDD8020, __READ, STM0STR_t);
__IOREG(STM0STC_BASE, 0xFFDD8024, __READ_WRITE, STM0STC_t);
__IOREG(STM0IS_BASE, 0xFFDD8030, __READ_WRITE, STM0IS_t);
__IOREG(STM0RM_BASE, 0xFFDD8034, __READ_WRITE, STM0RM_t);
__IOREG(STM0CNT0L_BASE, 0xFFDD8040, __READ_WRITE, STM0CNT0L_t);
__IOREG(STM0CNT0H_BASE, 0xFFDD8044, __READ_WRITE, STM0CNT0H_t);
__IOREG(STM0CMP0AL_BASE, 0xFFDD8050, __READ_WRITE, STM0CMP0AL_t);
__IOREG(STM0CMP0AH_BASE, 0xFFDD8054, __READ_WRITE, STM0CMP0AH_t);
__IOREG(STM0CMP0BL_BASE, 0xFFDD8058, __READ_WRITE, STM0CMP0BL_t);
__IOREG(STM0CMP0BH_BASE, 0xFFDD805C, __READ_WRITE, STM0CMP0BH_t);
__IOREG(STM0CMP0CL_BASE, 0xFFDD8060, __READ_WRITE, STM0CMP0CL_t);
__IOREG(STM0CMP0CH_BASE, 0xFFDD8064, __READ_WRITE, STM0CMP0CH_t);
__IOREG(STM0CMP0DL_BASE, 0xFFDD8068, __READ_WRITE, STM0CMP0DL_t);
__IOREG(STM0CMP0DH_BASE, 0xFFDD806C, __READ_WRITE, STM0CMP0DH_t);
__IOREG(STM0CNT1_BASE, 0xFFDD8070, __READ_WRITE, STM0CNT1_t);
__IOREG(STM0CMP1A_BASE, 0xFFDD8080, __READ_WRITE, STM0CMP1A_t);
__IOREG(STM0CMP1B_BASE, 0xFFDD8084, __READ_WRITE, STM0CMP1B_t);
__IOREG(STM0CMP1C_BASE, 0xFFDD8088, __READ_WRITE, STM0CMP1C_t);
__IOREG(STM0CMP1D_BASE, 0xFFDD808C, __READ_WRITE, STM0CMP1D_t);
__IOREG(STM0CNT2_BASE, 0xFFDD8090, __READ_WRITE, STM0CNT2_t);
__IOREG(STM0CMP2A_BASE, 0xFFDD80A0, __READ_WRITE, STM0CMP2A_t);
__IOREG(STM0CMP2B_BASE, 0xFFDD80A4, __READ_WRITE, STM0CMP2B_t);
__IOREG(STM0CMP2C_BASE, 0xFFDD80A8, __READ_WRITE, STM0CMP2C_t);
__IOREG(STM0CMP2D_BASE, 0xFFDD80AC, __READ_WRITE, STM0CMP2D_t);
__IOREG(STM0CNT3_BASE, 0xFFDD80B0, __READ_WRITE, STM0CNT3_t);
__IOREG(STM0CMP3A_BASE, 0xFFDD80C0, __READ_WRITE, STM0CMP3A_t);
__IOREG(STM0CMP3B_BASE, 0xFFDD80C4, __READ_WRITE, STM0CMP3B_t);
__IOREG(STM0CMP3C_BASE, 0xFFDD80C8, __READ_WRITE, STM0CMP3C_t);
__IOREG(STM0CMP3D_BASE, 0xFFDD80CC, __READ_WRITE, STM0CMP3D_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define STM0CKSEL STM0CKSEL_BASE.UINT32
#define STM0CKSEL_CKSEL0 STM0CKSEL_BASE.BIT._CKSEL0
#define STM0CKSEL_CKSEL1 STM0CKSEL_BASE.BIT._CKSEL1
#define STM0CKSEL_CKSEL2 STM0CKSEL_BASE.BIT._CKSEL2
#define STM0CKSEL_CKSEL3 STM0CKSEL_BASE.BIT._CKSEL3
#define STM0TS STM0TS_BASE.UINT32
#define STM0TS_TS0 STM0TS_BASE.BIT._TS0
#define STM0TS_TS1 STM0TS_BASE.BIT._TS1
#define STM0TS_TS2 STM0TS_BASE.BIT._TS2
#define STM0TS_TS3 STM0TS_BASE.BIT._TS3
#define STM0TT STM0TT_BASE.UINT32
#define STM0TT_TT0 STM0TT_BASE.BIT._TT0
#define STM0TT_TT1 STM0TT_BASE.BIT._TT1
#define STM0TT_TT2 STM0TT_BASE.BIT._TT2
#define STM0TT_TT3 STM0TT_BASE.BIT._TT3
#define STM0CSTR STM0CSTR_BASE.UINT32
#define STM0CSTR_CST0 STM0CSTR_BASE.BIT._CST0
#define STM0CSTR_CST1 STM0CSTR_BASE.BIT._CST1
#define STM0CSTR_CST2 STM0CSTR_BASE.BIT._CST2
#define STM0CSTR_CST3 STM0CSTR_BASE.BIT._CST3
#define STM0STR STM0STR_BASE.UINT32
#define STM0STR_CM0A STM0STR_BASE.BIT._CM0A
#define STM0STR_CM0B STM0STR_BASE.BIT._CM0B
#define STM0STR_CM0C STM0STR_BASE.BIT._CM0C
#define STM0STR_CM0D STM0STR_BASE.BIT._CM0D
#define STM0STR_CM1A STM0STR_BASE.BIT._CM1A
#define STM0STR_CM1B STM0STR_BASE.BIT._CM1B
#define STM0STR_CM1C STM0STR_BASE.BIT._CM1C
#define STM0STR_CM1D STM0STR_BASE.BIT._CM1D
#define STM0STR_CM2A STM0STR_BASE.BIT._CM2A
#define STM0STR_CM2B STM0STR_BASE.BIT._CM2B
#define STM0STR_CM2C STM0STR_BASE.BIT._CM2C
#define STM0STR_CM2D STM0STR_BASE.BIT._CM2D
#define STM0STR_CM3A STM0STR_BASE.BIT._CM3A
#define STM0STR_CM3B STM0STR_BASE.BIT._CM3B
#define STM0STR_CM3C STM0STR_BASE.BIT._CM3C
#define STM0STR_CM3D STM0STR_BASE.BIT._CM3D
#define STM0STR_OVF0 STM0STR_BASE.BIT._OVF0
#define STM0STR_OVF1 STM0STR_BASE.BIT._OVF1
#define STM0STR_OVF2 STM0STR_BASE.BIT._OVF2
#define STM0STR_OVF3 STM0STR_BASE.BIT._OVF3
#define STM0STC STM0STC_BASE.UINT32
#define STM0STC_CMR0A STM0STC_BASE.BIT._CMR0A
#define STM0STC_CMR0B STM0STC_BASE.BIT._CMR0B
#define STM0STC_CMR0C STM0STC_BASE.BIT._CMR0C
#define STM0STC_CMR0D STM0STC_BASE.BIT._CMR0D
#define STM0STC_CMR1A STM0STC_BASE.BIT._CMR1A
#define STM0STC_CMR1B STM0STC_BASE.BIT._CMR1B
#define STM0STC_CMR1C STM0STC_BASE.BIT._CMR1C
#define STM0STC_CMR1D STM0STC_BASE.BIT._CMR1D
#define STM0STC_CMR2A STM0STC_BASE.BIT._CMR2A
#define STM0STC_CMR2B STM0STC_BASE.BIT._CMR2B
#define STM0STC_CMR2C STM0STC_BASE.BIT._CMR2C
#define STM0STC_CMR2D STM0STC_BASE.BIT._CMR2D
#define STM0STC_CMR3A STM0STC_BASE.BIT._CMR3A
#define STM0STC_CMR3B STM0STC_BASE.BIT._CMR3B
#define STM0STC_CMR3C STM0STC_BASE.BIT._CMR3C
#define STM0STC_CMR3D STM0STC_BASE.BIT._CMR3D
#define STM0STC_OVR0 STM0STC_BASE.BIT._OVR0
#define STM0STC_OVR1 STM0STC_BASE.BIT._OVR1
#define STM0STC_OVR2 STM0STC_BASE.BIT._OVR2
#define STM0STC_OVR3 STM0STC_BASE.BIT._OVR3
#define STM0IS STM0IS_BASE.UINT32
#define STM0IS_STMINT0 STM0IS_BASE.BIT._STMINT0
#define STM0IS_STMINT1 STM0IS_BASE.BIT._STMINT1
#define STM0IS_STMINT2 STM0IS_BASE.BIT._STMINT2
#define STM0IS_STMINT3 STM0IS_BASE.BIT._STMINT3
#define STM0IS_STMINT4 STM0IS_BASE.BIT._STMINT4
#define STM0IS_STMINT5 STM0IS_BASE.BIT._STMINT5
#define STM0IS_STMINT6 STM0IS_BASE.BIT._STMINT6
#define STM0IS_STMINT7 STM0IS_BASE.BIT._STMINT7
#define STM0RM STM0RM_BASE.UINT32
#define STM0RM_RM0 STM0RM_BASE.BIT._RM0
#define STM0RM_RM1 STM0RM_BASE.BIT._RM1
#define STM0RM_RM2 STM0RM_BASE.BIT._RM2
#define STM0RM_RM3 STM0RM_BASE.BIT._RM3
#define STM0CNT0L STM0CNT0L_BASE.UINT32
#define STM0CNT0L_CNT0L STM0CNT0L_BASE.BIT._CNT0L
#define STM0CNT0H STM0CNT0H_BASE.UINT32
#define STM0CNT0H_CNT0H STM0CNT0H_BASE.BIT._CNT0H
#define STM0CMP0AL STM0CMP0AL_BASE.UINT32
#define STM0CMP0AL_CMP0AL STM0CMP0AL_BASE.BIT._CMP0AL
#define STM0CMP0AH STM0CMP0AH_BASE.UINT32
#define STM0CMP0AH_CMP0AH STM0CMP0AH_BASE.BIT._CMP0AH
#define STM0CMP0BL STM0CMP0BL_BASE.UINT32
#define STM0CMP0BL_CMP0BL STM0CMP0BL_BASE.BIT._CMP0BL
#define STM0CMP0BH STM0CMP0BH_BASE.UINT32
#define STM0CMP0BH_CMP0BH STM0CMP0BH_BASE.BIT._CMP0BH
#define STM0CMP0CL STM0CMP0CL_BASE.UINT32
#define STM0CMP0CL_CMP0CL STM0CMP0CL_BASE.BIT._CMP0CL
#define STM0CMP0CH STM0CMP0CH_BASE.UINT32
#define STM0CMP0CH_CMP0CH STM0CMP0CH_BASE.BIT._CMP0CH
#define STM0CMP0DL STM0CMP0DL_BASE.UINT32
#define STM0CMP0DL_CMP0DL STM0CMP0DL_BASE.BIT._CMP0DL
#define STM0CMP0DH STM0CMP0DH_BASE.UINT32
#define STM0CMP0DH_CMP0DH STM0CMP0DH_BASE.BIT._CMP0DH
#define STM0CNT1 STM0CNT1_BASE.UINT32
#define STM0CNT1_CNT1 STM0CNT1_BASE.BIT._CNT1
#define STM0CMP1A STM0CMP1A_BASE.UINT32
#define STM0CMP1A_CMP1A STM0CMP1A_BASE.BIT._CMP1A
#define STM0CMP1B STM0CMP1B_BASE.UINT32
#define STM0CMP1B_CMP1B STM0CMP1B_BASE.BIT._CMP1B
#define STM0CMP1C STM0CMP1C_BASE.UINT32
#define STM0CMP1C_CMP1C STM0CMP1C_BASE.BIT._CMP1C
#define STM0CMP1D STM0CMP1D_BASE.UINT32
#define STM0CMP1D_CMP1D STM0CMP1D_BASE.BIT._CMP1D
#define STM0CNT2 STM0CNT2_BASE.UINT32
#define STM0CNT2_CNT2 STM0CNT2_BASE.BIT._CNT2
#define STM0CMP2A STM0CMP2A_BASE.UINT32
#define STM0CMP2A_CMP2A STM0CMP2A_BASE.BIT._CMP2A
#define STM0CMP2B STM0CMP2B_BASE.UINT32
#define STM0CMP2B_CMP2B STM0CMP2B_BASE.BIT._CMP2B
#define STM0CMP2C STM0CMP2C_BASE.UINT32
#define STM0CMP2C_CMP2C STM0CMP2C_BASE.BIT._CMP2C
#define STM0CMP2D STM0CMP2D_BASE.UINT32
#define STM0CMP2D_CMP2D STM0CMP2D_BASE.BIT._CMP2D
#define STM0CNT3 STM0CNT3_BASE.UINT32
#define STM0CNT3_CNT3 STM0CNT3_BASE.BIT._CNT3
#define STM0CMP3A STM0CMP3A_BASE.UINT32
#define STM0CMP3A_CMP3A STM0CMP3A_BASE.BIT._CMP3A
#define STM0CMP3B STM0CMP3B_BASE.UINT32
#define STM0CMP3B_CMP3B STM0CMP3B_BASE.BIT._CMP3B
#define STM0CMP3C STM0CMP3C_BASE.UINT32
#define STM0CMP3C_CMP3C STM0CMP3C_BASE.BIT._CMP3C
#define STM0CMP3D STM0CMP3D_BASE.UINT32
#define STM0CMP3D_CMP3D STM0CMP3D_BASE.BIT._CMP3D

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif