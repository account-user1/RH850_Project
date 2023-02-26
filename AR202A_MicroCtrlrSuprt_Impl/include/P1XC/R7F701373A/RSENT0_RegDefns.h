#ifndef __DR7F701373_RSENT0_HEADER__
#define __DR7F701373_RSENT0_HEADER__



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
} RSENT0TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT0TSCBits_t;

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
} RSENT0CCBits_t;

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
} RSENT0BRPBits_t;

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
} RSENT0IDEBits_t;

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
} RSENT0MDCBits_t;

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
} RSENT0SPCTBits_t;

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
} RSENT0MSTBits_t;

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
} RSENT0CSBits_t;

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
} RSENT0CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT0SRTSBits_t;

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
} RSENT0SRXDBits_t;

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
} RSENT0CPLBits_t;

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
} RSENT0MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT0FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT0FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT0TSPCBits_t BIT;
} RSENT0TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT0TSCBits_t BIT;
} RSENT0TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT0CCBits_t BIT;
} RSENT0CC_t;

typedef union
{
    uint32 UINT32;
    RSENT0BRPBits_t BIT;
} RSENT0BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT0IDEBits_t BIT;
} RSENT0IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT0MDCBits_t BIT;
} RSENT0MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT0SPCTBits_t BIT;
} RSENT0SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT0MSTBits_t BIT;
} RSENT0MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT0CSBits_t BIT;
} RSENT0CS_t;

typedef union
{
    uint32 UINT32;
    RSENT0CSCBits_t BIT;
} RSENT0CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT0SRTSBits_t BIT;
} RSENT0SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT0SRXDBits_t BIT;
} RSENT0SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT0CPLBits_t BIT;
} RSENT0CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT0MLBits_t BIT;
} RSENT0ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT0FRTSBits_t BIT;
} RSENT0FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT0FRXDBits_t BIT;
} RSENT0FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT0TSPC_BASE, 0xFFCDC000, __READ_WRITE, RSENT0TSPC_t);
__IOREG(RSENT0TSC_BASE, 0xFFCDC004, __READ_WRITE, RSENT0TSC_t);
__IOREG(RSENT0CC_BASE, 0xFFCDC010, __READ_WRITE, RSENT0CC_t);
__IOREG(RSENT0BRP_BASE, 0xFFCDC014, __READ_WRITE, RSENT0BRP_t);
__IOREG(RSENT0IDE_BASE, 0xFFCDC018, __READ_WRITE, RSENT0IDE_t);
__IOREG(RSENT0MDC_BASE, 0xFFCDC01C, __READ_WRITE, RSENT0MDC_t);
__IOREG(RSENT0SPCT_BASE, 0xFFCDC020, __READ_WRITE, RSENT0SPCT_t);
__IOREG(RSENT0MST_BASE, 0xFFCDC024, __READ, RSENT0MST_t);
__IOREG(RSENT0CS_BASE, 0xFFCDC028, __READ, RSENT0CS_t);
__IOREG(RSENT0CSC_BASE, 0xFFCDC02C, __READ_WRITE, RSENT0CSC_t);
__IOREG(RSENT0SRTS_BASE, 0xFFCDC030, __READ, RSENT0SRTS_t);
__IOREG(RSENT0SRXD_BASE, 0xFFCDC034, __READ, RSENT0SRXD_t);
__IOREG(RSENT0CPL_BASE, 0xFFCDC038, __READ, RSENT0CPL_t);
__IOREG(RSENT0ML_BASE, 0xFFCDC03C, __READ, RSENT0ML_t);
__IOREG(RSENT0FRTS_BASE, 0xFFCDC040, __READ, RSENT0FRTS_t);
__IOREG(RSENT0FRXD_BASE, 0xFFCDC044, __READ, RSENT0FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT0TSPC RSENT0TSPC_BASE.UINT32
#define RSENT0TSPC_TTPV RSENT0TSPC_BASE.BIT._TTPV
#define RSENT0TSPC_TTM RSENT0TSPC_BASE.BIT._TTM
#define RSENT0TSPC_TMS RSENT0TSPC_BASE.BIT._TMS
#define RSENT0TSC RSENT0TSC_BASE.UINT32
#define RSENT0TSC_TS RSENT0TSC_BASE.BIT._TS
#define RSENT0CC RSENT0CC_BASE.UINT32
#define RSENT0CC_SPCE RSENT0CC_BASE.BIT._SPCE
#define RSENT0CC_NDN RSENT0CC_BASE.BIT._NDN
#define RSENT0CC_PPC RSENT0CC_BASE.BIT._PPC
#define RSENT0CC_PPTC RSENT0CC_BASE.BIT._PPTC
#define RSENT0CC_SMF RSENT0CC_BASE.BIT._SMF
#define RSENT0CC_DFC RSENT0CC_BASE.BIT._DFC
#define RSENT0CC_FCCD RSENT0CC_BASE.BIT._FCCD
#define RSENT0CC_SCCD RSENT0CC_BASE.BIT._SCCD
#define RSENT0CC_FCM RSENT0CC_BASE.BIT._FCM
#define RSENT0CC_SOPC RSENT0CC_BASE.BIT._SOPC
#define RSENT0BRP RSENT0BRP_BASE.UINT32
#define RSENT0BRP_SCMV RSENT0BRP_BASE.BIT._SCMV
#define RSENT0BRP_SCDV RSENT0BRP_BASE.BIT._SCDV
#define RSENT0BRP_TTI RSENT0BRP_BASE.BIT._TTI
#define RSENT0BRP_TTF RSENT0BRP_BASE.BIT._TTF
#define RSENT0IDE RSENT0IDE_BASE.UINT32
#define RSENT0IDE_FRIE RSENT0IDE_BASE.BIT._FRIE
#define RSENT0IDE_FCIE RSENT0IDE_BASE.BIT._FCIE
#define RSENT0IDE_FMIE RSENT0IDE_BASE.BIT._FMIE
#define RSENT0IDE_FEIE RSENT0IDE_BASE.BIT._FEIE
#define RSENT0IDE_FNIE RSENT0IDE_BASE.BIT._FNIE
#define RSENT0IDE_CLIE RSENT0IDE_BASE.BIT._CLIE
#define RSENT0IDE_CVIE RSENT0IDE_BASE.BIT._CVIE
#define RSENT0IDE_NRIE RSENT0IDE_BASE.BIT._NRIE
#define RSENT0IDE_SCIE RSENT0IDE_BASE.BIT._SCIE
#define RSENT0IDE_SMIE RSENT0IDE_BASE.BIT._SMIE
#define RSENT0IDE_SEIE RSENT0IDE_BASE.BIT._SEIE
#define RSENT0MDC RSENT0MDC_BASE.UINT32
#define RSENT0MDC_OMC RSENT0MDC_BASE.BIT._OMC
#define RSENT0SPCT RSENT0SPCT_BASE.UINT32
#define RSENT0SPCT_TLL RSENT0SPCT_BASE.BIT._TLL
#define RSENT0MST RSENT0MST_BASE.UINT32
#define RSENT0MST_OMS RSENT0MST_BASE.BIT._OMS
#define RSENT0CS RSENT0CS_BASE.UINT32
#define RSENT0CS_FRS RSENT0CS_BASE.BIT._FRS
#define RSENT0CS_FCS RSENT0CS_BASE.BIT._FCS
#define RSENT0CS_FMS RSENT0CS_BASE.BIT._FMS
#define RSENT0CS_FES RSENT0CS_BASE.BIT._FES
#define RSENT0CS_FNS RSENT0CS_BASE.BIT._FNS
#define RSENT0CS_CLS RSENT0CS_BASE.BIT._CLS
#define RSENT0CS_CVS RSENT0CS_BASE.BIT._CVS
#define RSENT0CS_NRS RSENT0CS_BASE.BIT._NRS
#define RSENT0CS_SCS RSENT0CS_BASE.BIT._SCS
#define RSENT0CS_SMS RSENT0CS_BASE.BIT._SMS
#define RSENT0CS_SES RSENT0CS_BASE.BIT._SES
#define RSENT0CSC RSENT0CSC_BASE.UINT32
#define RSENT0CSC_FCC RSENT0CSC_BASE.BIT._FCC
#define RSENT0CSC_FMC RSENT0CSC_BASE.BIT._FMC
#define RSENT0CSC_FEC RSENT0CSC_BASE.BIT._FEC
#define RSENT0CSC_FNC RSENT0CSC_BASE.BIT._FNC
#define RSENT0CSC_CLC RSENT0CSC_BASE.BIT._CLC
#define RSENT0CSC_CVC RSENT0CSC_BASE.BIT._CVC
#define RSENT0CSC_NRC RSENT0CSC_BASE.BIT._NRC
#define RSENT0CSC_SCC RSENT0CSC_BASE.BIT._SCC
#define RSENT0CSC_SMC RSENT0CSC_BASE.BIT._SMC
#define RSENT0CSC_SEC RSENT0CSC_BASE.BIT._SEC
#define RSENT0SRTS RSENT0SRTS_BASE.UINT32
#define RSENT0SRTS_STS RSENT0SRTS_BASE.BIT._STS
#define RSENT0SRXD RSENT0SRXD_BASE.UINT32
#define RSENT0SRXD_IDD RSENT0SRXD_BASE.BIT._IDD
#define RSENT0SRXD_SMGC RSENT0SRXD_BASE.BIT._SMGC
#define RSENT0SRXD_SCRC RSENT0SRXD_BASE.BIT._SCRC
#define RSENT0SRXD_SND RSENT0SRXD_BASE.BIT._SND
#define RSENT0CPL RSENT0CPL_BASE.UINT32
#define RSENT0CPL_CPLV RSENT0CPL_BASE.BIT._CPLV
#define RSENT0ML RSENT0ML_BASE.UINT32
#define RSENT0ML_MLV RSENT0ML_BASE.BIT._MLV
#define RSENT0FRTS RSENT0FRTS_BASE.UINT32
#define RSENT0FRTS_FTS RSENT0FRTS_BASE.BIT._FTS
#define RSENT0FRXD RSENT0FRXD_BASE.UINT32
#define RSENT0FRXD_ND RSENT0FRXD_BASE.BIT._ND
#define RSENT0FRXD_FCRC RSENT0FRXD_BASE.BIT._FCRC
#define RSENT0FRXD_FCCN RSENT0FRXD_BASE.BIT._FCCN
#define RSENT0FRXD_FND RSENT0FRXD_BASE.BIT._FND
#define RSENT0FRXD_SNDM RSENT0FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif