#ifndef __DR7F701373_RSENT3_HEADER__
#define __DR7F701373_RSENT3_HEADER__



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
    uint32 _TTPV : 7;
    uint32 padding7 : 1;
    uint32 _TTM : 7;
    uint32 padding15 : 1;
    uint32 _TMS : 1;
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
} RSENT3TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT3TSCBits_t;

typedef struct
{
    uint32 _SPCE : 1;
    uint32 _NDN : 3;
    uint32 _PPC : 1;
    uint32 _PPTC : 1;
    uint32 _SMF : 2;
    const uint32 _DFC : 1;
    uint32 _FCCD : 1;
    uint32 _SCCD : 1;
    uint32 _FCM : 1;
    uint32 _SOPC : 1;
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
} RSENT3CCBits_t;

typedef struct
{
    uint32 _SCMV : 4;
    uint32 padding4 : 1;
    uint32 padding5 : 1;
    uint32 padding6 : 1;
    uint32 padding7 : 1;
    uint32 _SCDV : 7;
    uint32 padding15 : 1;
    uint32 _TTI : 7;
    uint32 padding23 : 1;
    uint32 _TTF : 4;
    uint32 padding28 : 1;
    uint32 padding29 : 1;
    uint32 padding30 : 1;
    uint32 padding31 : 1;
} RSENT3BRPBits_t;

typedef struct
{
    uint32 _FRIE : 1;
    uint32 _FCIE : 1;
    uint32 _FMIE : 1;
    uint32 _FEIE : 1;
    uint32 _FNIE : 1;
    uint32 _CLIE : 1;
    uint32 _CVIE : 1;
    uint32 _NRIE : 1;
    uint32 _SCIE : 1;
    uint32 _SMIE : 1;
    uint32 _SEIE : 1;
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
} RSENT3IDEBits_t;

typedef struct
{
    uint32 _OMC : 3;
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
} RSENT3MDCBits_t;

typedef struct
{
    uint32 _TLL : 7;
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
} RSENT3SPCTBits_t;

typedef struct
{
    const uint32 _OMS : 3;
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
} RSENT3MSTBits_t;

typedef struct
{
    const uint32 _FRS : 1;
    const uint32 _FCS : 1;
    const uint32 _FMS : 1;
    const uint32 _FES : 1;
    const uint32 _FNS : 1;
    const uint32 _CLS : 1;
    const uint32 _CVS : 1;
    const uint32 _NRS : 1;
    const uint32 _SCS : 1;
    const uint32 _SMS : 1;
    const uint32 _SES : 1;
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
} RSENT3CSBits_t;

typedef struct
{
    uint32 padding0 : 1;
    uint32 _FCC : 1;
    uint32 _FMC : 1;
    uint32 _FEC : 1;
    uint32 _FNC : 1;
    uint32 _CLC : 1;
    uint32 _CVC : 1;
    uint32 _NRC : 1;
    uint32 _SCC : 1;
    uint32 _SMC : 1;
    uint32 _SEC : 1;
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
} RSENT3CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT3SRTSBits_t;

typedef struct
{
    const uint32 _IDD : 20;
    const uint32 _SMGC : 1;
    uint32 padding21 : 1;
    uint32 padding22 : 1;
    uint32 padding23 : 1;
    const uint32 _SCRC : 6;
    uint32 padding30 : 1;
    const uint32 _SND : 1;
} RSENT3SRXDBits_t;

typedef struct
{
    const uint32 _CPLV : 17;
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
} RSENT3CPLBits_t;

typedef struct
{
    const uint32 _MLV : 21;
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
} RSENT3MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT3FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT3FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT3TSPCBits_t BIT;
} RSENT3TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT3TSCBits_t BIT;
} RSENT3TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT3CCBits_t BIT;
} RSENT3CC_t;

typedef union
{
    uint32 UINT32;
    RSENT3BRPBits_t BIT;
} RSENT3BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT3IDEBits_t BIT;
} RSENT3IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT3MDCBits_t BIT;
} RSENT3MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT3SPCTBits_t BIT;
} RSENT3SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT3MSTBits_t BIT;
} RSENT3MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT3CSBits_t BIT;
} RSENT3CS_t;

typedef union
{
    uint32 UINT32;
    RSENT3CSCBits_t BIT;
} RSENT3CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT3SRTSBits_t BIT;
} RSENT3SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT3SRXDBits_t BIT;
} RSENT3SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT3CPLBits_t BIT;
} RSENT3CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT3MLBits_t BIT;
} RSENT3ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT3FRTSBits_t BIT;
} RSENT3FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT3FRXDBits_t BIT;
} RSENT3FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT3TSPC_BASE, 0xFFCDC300, __READ_WRITE, RSENT3TSPC_t);
__IOREG(RSENT3TSC_BASE, 0xFFCDC304, __READ_WRITE, RSENT3TSC_t);
__IOREG(RSENT3CC_BASE, 0xFFCDC310, __READ_WRITE, RSENT3CC_t);
__IOREG(RSENT3BRP_BASE, 0xFFCDC314, __READ_WRITE, RSENT3BRP_t);
__IOREG(RSENT3IDE_BASE, 0xFFCDC318, __READ_WRITE, RSENT3IDE_t);
__IOREG(RSENT3MDC_BASE, 0xFFCDC31C, __READ_WRITE, RSENT3MDC_t);
__IOREG(RSENT3SPCT_BASE, 0xFFCDC320, __READ_WRITE, RSENT3SPCT_t);
__IOREG(RSENT3MST_BASE, 0xFFCDC324, __READ, RSENT3MST_t);
__IOREG(RSENT3CS_BASE, 0xFFCDC328, __READ, RSENT3CS_t);
__IOREG(RSENT3CSC_BASE, 0xFFCDC32C, __READ_WRITE, RSENT3CSC_t);
__IOREG(RSENT3SRTS_BASE, 0xFFCDC330, __READ, RSENT3SRTS_t);
__IOREG(RSENT3SRXD_BASE, 0xFFCDC334, __READ, RSENT3SRXD_t);
__IOREG(RSENT3CPL_BASE, 0xFFCDC338, __READ, RSENT3CPL_t);
__IOREG(RSENT3ML_BASE, 0xFFCDC33C, __READ, RSENT3ML_t);
__IOREG(RSENT3FRTS_BASE, 0xFFCDC340, __READ, RSENT3FRTS_t);
__IOREG(RSENT3FRXD_BASE, 0xFFCDC344, __READ, RSENT3FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT3TSPC RSENT3TSPC_BASE.UINT32
#define RSENT3TSPC_TTPV RSENT3TSPC_BASE.BIT._TTPV
#define RSENT3TSPC_TTM RSENT3TSPC_BASE.BIT._TTM
#define RSENT3TSPC_TMS RSENT3TSPC_BASE.BIT._TMS
#define RSENT3TSC RSENT3TSC_BASE.UINT32
#define RSENT3TSC_TS RSENT3TSC_BASE.BIT._TS
#define RSENT3CC RSENT3CC_BASE.UINT32
#define RSENT3CC_SPCE RSENT3CC_BASE.BIT._SPCE
#define RSENT3CC_NDN RSENT3CC_BASE.BIT._NDN
#define RSENT3CC_PPC RSENT3CC_BASE.BIT._PPC
#define RSENT3CC_PPTC RSENT3CC_BASE.BIT._PPTC
#define RSENT3CC_SMF RSENT3CC_BASE.BIT._SMF
#define RSENT3CC_DFC RSENT3CC_BASE.BIT._DFC
#define RSENT3CC_FCCD RSENT3CC_BASE.BIT._FCCD
#define RSENT3CC_SCCD RSENT3CC_BASE.BIT._SCCD
#define RSENT3CC_FCM RSENT3CC_BASE.BIT._FCM
#define RSENT3CC_SOPC RSENT3CC_BASE.BIT._SOPC
#define RSENT3BRP RSENT3BRP_BASE.UINT32
#define RSENT3BRP_SCMV RSENT3BRP_BASE.BIT._SCMV
#define RSENT3BRP_SCDV RSENT3BRP_BASE.BIT._SCDV
#define RSENT3BRP_TTI RSENT3BRP_BASE.BIT._TTI
#define RSENT3BRP_TTF RSENT3BRP_BASE.BIT._TTF
#define RSENT3IDE RSENT3IDE_BASE.UINT32
#define RSENT3IDE_FRIE RSENT3IDE_BASE.BIT._FRIE
#define RSENT3IDE_FCIE RSENT3IDE_BASE.BIT._FCIE
#define RSENT3IDE_FMIE RSENT3IDE_BASE.BIT._FMIE
#define RSENT3IDE_FEIE RSENT3IDE_BASE.BIT._FEIE
#define RSENT3IDE_FNIE RSENT3IDE_BASE.BIT._FNIE
#define RSENT3IDE_CLIE RSENT3IDE_BASE.BIT._CLIE
#define RSENT3IDE_CVIE RSENT3IDE_BASE.BIT._CVIE
#define RSENT3IDE_NRIE RSENT3IDE_BASE.BIT._NRIE
#define RSENT3IDE_SCIE RSENT3IDE_BASE.BIT._SCIE
#define RSENT3IDE_SMIE RSENT3IDE_BASE.BIT._SMIE
#define RSENT3IDE_SEIE RSENT3IDE_BASE.BIT._SEIE
#define RSENT3MDC RSENT3MDC_BASE.UINT32
#define RSENT3MDC_OMC RSENT3MDC_BASE.BIT._OMC
#define RSENT3SPCT RSENT3SPCT_BASE.UINT32
#define RSENT3SPCT_TLL RSENT3SPCT_BASE.BIT._TLL
#define RSENT3MST RSENT3MST_BASE.UINT32
#define RSENT3MST_OMS RSENT3MST_BASE.BIT._OMS
#define RSENT3CS RSENT3CS_BASE.UINT32
#define RSENT3CS_FRS RSENT3CS_BASE.BIT._FRS
#define RSENT3CS_FCS RSENT3CS_BASE.BIT._FCS
#define RSENT3CS_FMS RSENT3CS_BASE.BIT._FMS
#define RSENT3CS_FES RSENT3CS_BASE.BIT._FES
#define RSENT3CS_FNS RSENT3CS_BASE.BIT._FNS
#define RSENT3CS_CLS RSENT3CS_BASE.BIT._CLS
#define RSENT3CS_CVS RSENT3CS_BASE.BIT._CVS
#define RSENT3CS_NRS RSENT3CS_BASE.BIT._NRS
#define RSENT3CS_SCS RSENT3CS_BASE.BIT._SCS
#define RSENT3CS_SMS RSENT3CS_BASE.BIT._SMS
#define RSENT3CS_SES RSENT3CS_BASE.BIT._SES
#define RSENT3CSC RSENT3CSC_BASE.UINT32
#define RSENT3CSC_FCC RSENT3CSC_BASE.BIT._FCC
#define RSENT3CSC_FMC RSENT3CSC_BASE.BIT._FMC
#define RSENT3CSC_FEC RSENT3CSC_BASE.BIT._FEC
#define RSENT3CSC_FNC RSENT3CSC_BASE.BIT._FNC
#define RSENT3CSC_CLC RSENT3CSC_BASE.BIT._CLC
#define RSENT3CSC_CVC RSENT3CSC_BASE.BIT._CVC
#define RSENT3CSC_NRC RSENT3CSC_BASE.BIT._NRC
#define RSENT3CSC_SCC RSENT3CSC_BASE.BIT._SCC
#define RSENT3CSC_SMC RSENT3CSC_BASE.BIT._SMC
#define RSENT3CSC_SEC RSENT3CSC_BASE.BIT._SEC
#define RSENT3SRTS RSENT3SRTS_BASE.UINT32
#define RSENT3SRTS_STS RSENT3SRTS_BASE.BIT._STS
#define RSENT3SRXD RSENT3SRXD_BASE.UINT32
#define RSENT3SRXD_IDD RSENT3SRXD_BASE.BIT._IDD
#define RSENT3SRXD_SMGC RSENT3SRXD_BASE.BIT._SMGC
#define RSENT3SRXD_SCRC RSENT3SRXD_BASE.BIT._SCRC
#define RSENT3SRXD_SND RSENT3SRXD_BASE.BIT._SND
#define RSENT3CPL RSENT3CPL_BASE.UINT32
#define RSENT3CPL_CPLV RSENT3CPL_BASE.BIT._CPLV
#define RSENT3ML RSENT3ML_BASE.UINT32
#define RSENT3ML_MLV RSENT3ML_BASE.BIT._MLV
#define RSENT3FRTS RSENT3FRTS_BASE.UINT32
#define RSENT3FRTS_FTS RSENT3FRTS_BASE.BIT._FTS
#define RSENT3FRXD RSENT3FRXD_BASE.UINT32
#define RSENT3FRXD_ND RSENT3FRXD_BASE.BIT._ND
#define RSENT3FRXD_FCRC RSENT3FRXD_BASE.BIT._FCRC
#define RSENT3FRXD_FCCN RSENT3FRXD_BASE.BIT._FCCN
#define RSENT3FRXD_FND RSENT3FRXD_BASE.BIT._FND
#define RSENT3FRXD_SNDM RSENT3FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif