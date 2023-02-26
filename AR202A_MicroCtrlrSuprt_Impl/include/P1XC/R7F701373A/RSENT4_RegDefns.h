#ifndef __DR7F701373_RSENT4_HEADER__
#define __DR7F701373_RSENT4_HEADER__



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
} RSENT4TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT4TSCBits_t;

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
} RSENT4CCBits_t;

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
} RSENT4BRPBits_t;

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
} RSENT4IDEBits_t;

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
} RSENT4MDCBits_t;

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
} RSENT4SPCTBits_t;

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
} RSENT4MSTBits_t;

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
} RSENT4CSBits_t;

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
} RSENT4CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT4SRTSBits_t;

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
} RSENT4SRXDBits_t;

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
} RSENT4CPLBits_t;

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
} RSENT4MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT4FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT4FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT4TSPCBits_t BIT;
} RSENT4TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT4TSCBits_t BIT;
} RSENT4TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT4CCBits_t BIT;
} RSENT4CC_t;

typedef union
{
    uint32 UINT32;
    RSENT4BRPBits_t BIT;
} RSENT4BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT4IDEBits_t BIT;
} RSENT4IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT4MDCBits_t BIT;
} RSENT4MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT4SPCTBits_t BIT;
} RSENT4SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT4MSTBits_t BIT;
} RSENT4MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT4CSBits_t BIT;
} RSENT4CS_t;

typedef union
{
    uint32 UINT32;
    RSENT4CSCBits_t BIT;
} RSENT4CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT4SRTSBits_t BIT;
} RSENT4SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT4SRXDBits_t BIT;
} RSENT4SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT4CPLBits_t BIT;
} RSENT4CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT4MLBits_t BIT;
} RSENT4ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT4FRTSBits_t BIT;
} RSENT4FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT4FRXDBits_t BIT;
} RSENT4FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT4TSPC_BASE, 0xFFCDC400, __READ_WRITE, RSENT4TSPC_t);
__IOREG(RSENT4TSC_BASE, 0xFFCDC404, __READ_WRITE, RSENT4TSC_t);
__IOREG(RSENT4CC_BASE, 0xFFCDC410, __READ_WRITE, RSENT4CC_t);
__IOREG(RSENT4BRP_BASE, 0xFFCDC414, __READ_WRITE, RSENT4BRP_t);
__IOREG(RSENT4IDE_BASE, 0xFFCDC418, __READ_WRITE, RSENT4IDE_t);
__IOREG(RSENT4MDC_BASE, 0xFFCDC41C, __READ_WRITE, RSENT4MDC_t);
__IOREG(RSENT4SPCT_BASE, 0xFFCDC420, __READ_WRITE, RSENT4SPCT_t);
__IOREG(RSENT4MST_BASE, 0xFFCDC424, __READ, RSENT4MST_t);
__IOREG(RSENT4CS_BASE, 0xFFCDC428, __READ, RSENT4CS_t);
__IOREG(RSENT4CSC_BASE, 0xFFCDC42C, __READ_WRITE, RSENT4CSC_t);
__IOREG(RSENT4SRTS_BASE, 0xFFCDC430, __READ, RSENT4SRTS_t);
__IOREG(RSENT4SRXD_BASE, 0xFFCDC434, __READ, RSENT4SRXD_t);
__IOREG(RSENT4CPL_BASE, 0xFFCDC438, __READ, RSENT4CPL_t);
__IOREG(RSENT4ML_BASE, 0xFFCDC43C, __READ, RSENT4ML_t);
__IOREG(RSENT4FRTS_BASE, 0xFFCDC440, __READ, RSENT4FRTS_t);
__IOREG(RSENT4FRXD_BASE, 0xFFCDC444, __READ, RSENT4FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT4TSPC RSENT4TSPC_BASE.UINT32
#define RSENT4TSPC_TTPV RSENT4TSPC_BASE.BIT._TTPV
#define RSENT4TSPC_TTM RSENT4TSPC_BASE.BIT._TTM
#define RSENT4TSPC_TMS RSENT4TSPC_BASE.BIT._TMS
#define RSENT4TSC RSENT4TSC_BASE.UINT32
#define RSENT4TSC_TS RSENT4TSC_BASE.BIT._TS
#define RSENT4CC RSENT4CC_BASE.UINT32
#define RSENT4CC_SPCE RSENT4CC_BASE.BIT._SPCE
#define RSENT4CC_NDN RSENT4CC_BASE.BIT._NDN
#define RSENT4CC_PPC RSENT4CC_BASE.BIT._PPC
#define RSENT4CC_PPTC RSENT4CC_BASE.BIT._PPTC
#define RSENT4CC_SMF RSENT4CC_BASE.BIT._SMF
#define RSENT4CC_DFC RSENT4CC_BASE.BIT._DFC
#define RSENT4CC_FCCD RSENT4CC_BASE.BIT._FCCD
#define RSENT4CC_SCCD RSENT4CC_BASE.BIT._SCCD
#define RSENT4CC_FCM RSENT4CC_BASE.BIT._FCM
#define RSENT4CC_SOPC RSENT4CC_BASE.BIT._SOPC
#define RSENT4BRP RSENT4BRP_BASE.UINT32
#define RSENT4BRP_SCMV RSENT4BRP_BASE.BIT._SCMV
#define RSENT4BRP_SCDV RSENT4BRP_BASE.BIT._SCDV
#define RSENT4BRP_TTI RSENT4BRP_BASE.BIT._TTI
#define RSENT4BRP_TTF RSENT4BRP_BASE.BIT._TTF
#define RSENT4IDE RSENT4IDE_BASE.UINT32
#define RSENT4IDE_FRIE RSENT4IDE_BASE.BIT._FRIE
#define RSENT4IDE_FCIE RSENT4IDE_BASE.BIT._FCIE
#define RSENT4IDE_FMIE RSENT4IDE_BASE.BIT._FMIE
#define RSENT4IDE_FEIE RSENT4IDE_BASE.BIT._FEIE
#define RSENT4IDE_FNIE RSENT4IDE_BASE.BIT._FNIE
#define RSENT4IDE_CLIE RSENT4IDE_BASE.BIT._CLIE
#define RSENT4IDE_CVIE RSENT4IDE_BASE.BIT._CVIE
#define RSENT4IDE_NRIE RSENT4IDE_BASE.BIT._NRIE
#define RSENT4IDE_SCIE RSENT4IDE_BASE.BIT._SCIE
#define RSENT4IDE_SMIE RSENT4IDE_BASE.BIT._SMIE
#define RSENT4IDE_SEIE RSENT4IDE_BASE.BIT._SEIE
#define RSENT4MDC RSENT4MDC_BASE.UINT32
#define RSENT4MDC_OMC RSENT4MDC_BASE.BIT._OMC
#define RSENT4SPCT RSENT4SPCT_BASE.UINT32
#define RSENT4SPCT_TLL RSENT4SPCT_BASE.BIT._TLL
#define RSENT4MST RSENT4MST_BASE.UINT32
#define RSENT4MST_OMS RSENT4MST_BASE.BIT._OMS
#define RSENT4CS RSENT4CS_BASE.UINT32
#define RSENT4CS_FRS RSENT4CS_BASE.BIT._FRS
#define RSENT4CS_FCS RSENT4CS_BASE.BIT._FCS
#define RSENT4CS_FMS RSENT4CS_BASE.BIT._FMS
#define RSENT4CS_FES RSENT4CS_BASE.BIT._FES
#define RSENT4CS_FNS RSENT4CS_BASE.BIT._FNS
#define RSENT4CS_CLS RSENT4CS_BASE.BIT._CLS
#define RSENT4CS_CVS RSENT4CS_BASE.BIT._CVS
#define RSENT4CS_NRS RSENT4CS_BASE.BIT._NRS
#define RSENT4CS_SCS RSENT4CS_BASE.BIT._SCS
#define RSENT4CS_SMS RSENT4CS_BASE.BIT._SMS
#define RSENT4CS_SES RSENT4CS_BASE.BIT._SES
#define RSENT4CSC RSENT4CSC_BASE.UINT32
#define RSENT4CSC_FCC RSENT4CSC_BASE.BIT._FCC
#define RSENT4CSC_FMC RSENT4CSC_BASE.BIT._FMC
#define RSENT4CSC_FEC RSENT4CSC_BASE.BIT._FEC
#define RSENT4CSC_FNC RSENT4CSC_BASE.BIT._FNC
#define RSENT4CSC_CLC RSENT4CSC_BASE.BIT._CLC
#define RSENT4CSC_CVC RSENT4CSC_BASE.BIT._CVC
#define RSENT4CSC_NRC RSENT4CSC_BASE.BIT._NRC
#define RSENT4CSC_SCC RSENT4CSC_BASE.BIT._SCC
#define RSENT4CSC_SMC RSENT4CSC_BASE.BIT._SMC
#define RSENT4CSC_SEC RSENT4CSC_BASE.BIT._SEC
#define RSENT4SRTS RSENT4SRTS_BASE.UINT32
#define RSENT4SRTS_STS RSENT4SRTS_BASE.BIT._STS
#define RSENT4SRXD RSENT4SRXD_BASE.UINT32
#define RSENT4SRXD_IDD RSENT4SRXD_BASE.BIT._IDD
#define RSENT4SRXD_SMGC RSENT4SRXD_BASE.BIT._SMGC
#define RSENT4SRXD_SCRC RSENT4SRXD_BASE.BIT._SCRC
#define RSENT4SRXD_SND RSENT4SRXD_BASE.BIT._SND
#define RSENT4CPL RSENT4CPL_BASE.UINT32
#define RSENT4CPL_CPLV RSENT4CPL_BASE.BIT._CPLV
#define RSENT4ML RSENT4ML_BASE.UINT32
#define RSENT4ML_MLV RSENT4ML_BASE.BIT._MLV
#define RSENT4FRTS RSENT4FRTS_BASE.UINT32
#define RSENT4FRTS_FTS RSENT4FRTS_BASE.BIT._FTS
#define RSENT4FRXD RSENT4FRXD_BASE.UINT32
#define RSENT4FRXD_ND RSENT4FRXD_BASE.BIT._ND
#define RSENT4FRXD_FCRC RSENT4FRXD_BASE.BIT._FCRC
#define RSENT4FRXD_FCCN RSENT4FRXD_BASE.BIT._FCCN
#define RSENT4FRXD_FND RSENT4FRXD_BASE.BIT._FND
#define RSENT4FRXD_SNDM RSENT4FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif