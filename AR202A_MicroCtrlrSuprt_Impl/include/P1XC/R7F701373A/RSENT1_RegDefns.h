#ifndef __DR7F701373_RSENT1_HEADER__
#define __DR7F701373_RSENT1_HEADER__



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
} RSENT1TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT1TSCBits_t;

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
} RSENT1CCBits_t;

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
} RSENT1BRPBits_t;

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
} RSENT1IDEBits_t;

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
} RSENT1MDCBits_t;

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
} RSENT1SPCTBits_t;

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
} RSENT1MSTBits_t;

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
} RSENT1CSBits_t;

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
} RSENT1CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT1SRTSBits_t;

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
} RSENT1SRXDBits_t;

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
} RSENT1CPLBits_t;

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
} RSENT1MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT1FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT1FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT1TSPCBits_t BIT;
} RSENT1TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT1TSCBits_t BIT;
} RSENT1TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT1CCBits_t BIT;
} RSENT1CC_t;

typedef union
{
    uint32 UINT32;
    RSENT1BRPBits_t BIT;
} RSENT1BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT1IDEBits_t BIT;
} RSENT1IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT1MDCBits_t BIT;
} RSENT1MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT1SPCTBits_t BIT;
} RSENT1SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT1MSTBits_t BIT;
} RSENT1MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT1CSBits_t BIT;
} RSENT1CS_t;

typedef union
{
    uint32 UINT32;
    RSENT1CSCBits_t BIT;
} RSENT1CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT1SRTSBits_t BIT;
} RSENT1SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT1SRXDBits_t BIT;
} RSENT1SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT1CPLBits_t BIT;
} RSENT1CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT1MLBits_t BIT;
} RSENT1ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT1FRTSBits_t BIT;
} RSENT1FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT1FRXDBits_t BIT;
} RSENT1FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT1TSPC_BASE, 0xFFCDC100, __READ_WRITE, RSENT1TSPC_t);
__IOREG(RSENT1TSC_BASE, 0xFFCDC104, __READ_WRITE, RSENT1TSC_t);
__IOREG(RSENT1CC_BASE, 0xFFCDC110, __READ_WRITE, RSENT1CC_t);
__IOREG(RSENT1BRP_BASE, 0xFFCDC114, __READ_WRITE, RSENT1BRP_t);
__IOREG(RSENT1IDE_BASE, 0xFFCDC118, __READ_WRITE, RSENT1IDE_t);
__IOREG(RSENT1MDC_BASE, 0xFFCDC11C, __READ_WRITE, RSENT1MDC_t);
__IOREG(RSENT1SPCT_BASE, 0xFFCDC120, __READ_WRITE, RSENT1SPCT_t);
__IOREG(RSENT1MST_BASE, 0xFFCDC124, __READ, RSENT1MST_t);
__IOREG(RSENT1CS_BASE, 0xFFCDC128, __READ, RSENT1CS_t);
__IOREG(RSENT1CSC_BASE, 0xFFCDC12C, __READ_WRITE, RSENT1CSC_t);
__IOREG(RSENT1SRTS_BASE, 0xFFCDC130, __READ, RSENT1SRTS_t);
__IOREG(RSENT1SRXD_BASE, 0xFFCDC134, __READ, RSENT1SRXD_t);
__IOREG(RSENT1CPL_BASE, 0xFFCDC138, __READ, RSENT1CPL_t);
__IOREG(RSENT1ML_BASE, 0xFFCDC13C, __READ, RSENT1ML_t);
__IOREG(RSENT1FRTS_BASE, 0xFFCDC140, __READ, RSENT1FRTS_t);
__IOREG(RSENT1FRXD_BASE, 0xFFCDC144, __READ, RSENT1FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT1TSPC RSENT1TSPC_BASE.UINT32
#define RSENT1TSPC_TTPV RSENT1TSPC_BASE.BIT._TTPV
#define RSENT1TSPC_TTM RSENT1TSPC_BASE.BIT._TTM
#define RSENT1TSPC_TMS RSENT1TSPC_BASE.BIT._TMS
#define RSENT1TSC RSENT1TSC_BASE.UINT32
#define RSENT1TSC_TS RSENT1TSC_BASE.BIT._TS
#define RSENT1CC RSENT1CC_BASE.UINT32
#define RSENT1CC_SPCE RSENT1CC_BASE.BIT._SPCE
#define RSENT1CC_NDN RSENT1CC_BASE.BIT._NDN
#define RSENT1CC_PPC RSENT1CC_BASE.BIT._PPC
#define RSENT1CC_PPTC RSENT1CC_BASE.BIT._PPTC
#define RSENT1CC_SMF RSENT1CC_BASE.BIT._SMF
#define RSENT1CC_DFC RSENT1CC_BASE.BIT._DFC
#define RSENT1CC_FCCD RSENT1CC_BASE.BIT._FCCD
#define RSENT1CC_SCCD RSENT1CC_BASE.BIT._SCCD
#define RSENT1CC_FCM RSENT1CC_BASE.BIT._FCM
#define RSENT1CC_SOPC RSENT1CC_BASE.BIT._SOPC
#define RSENT1BRP RSENT1BRP_BASE.UINT32
#define RSENT1BRP_SCMV RSENT1BRP_BASE.BIT._SCMV
#define RSENT1BRP_SCDV RSENT1BRP_BASE.BIT._SCDV
#define RSENT1BRP_TTI RSENT1BRP_BASE.BIT._TTI
#define RSENT1BRP_TTF RSENT1BRP_BASE.BIT._TTF
#define RSENT1IDE RSENT1IDE_BASE.UINT32
#define RSENT1IDE_FRIE RSENT1IDE_BASE.BIT._FRIE
#define RSENT1IDE_FCIE RSENT1IDE_BASE.BIT._FCIE
#define RSENT1IDE_FMIE RSENT1IDE_BASE.BIT._FMIE
#define RSENT1IDE_FEIE RSENT1IDE_BASE.BIT._FEIE
#define RSENT1IDE_FNIE RSENT1IDE_BASE.BIT._FNIE
#define RSENT1IDE_CLIE RSENT1IDE_BASE.BIT._CLIE
#define RSENT1IDE_CVIE RSENT1IDE_BASE.BIT._CVIE
#define RSENT1IDE_NRIE RSENT1IDE_BASE.BIT._NRIE
#define RSENT1IDE_SCIE RSENT1IDE_BASE.BIT._SCIE
#define RSENT1IDE_SMIE RSENT1IDE_BASE.BIT._SMIE
#define RSENT1IDE_SEIE RSENT1IDE_BASE.BIT._SEIE
#define RSENT1MDC RSENT1MDC_BASE.UINT32
#define RSENT1MDC_OMC RSENT1MDC_BASE.BIT._OMC
#define RSENT1SPCT RSENT1SPCT_BASE.UINT32
#define RSENT1SPCT_TLL RSENT1SPCT_BASE.BIT._TLL
#define RSENT1MST RSENT1MST_BASE.UINT32
#define RSENT1MST_OMS RSENT1MST_BASE.BIT._OMS
#define RSENT1CS RSENT1CS_BASE.UINT32
#define RSENT1CS_FRS RSENT1CS_BASE.BIT._FRS
#define RSENT1CS_FCS RSENT1CS_BASE.BIT._FCS
#define RSENT1CS_FMS RSENT1CS_BASE.BIT._FMS
#define RSENT1CS_FES RSENT1CS_BASE.BIT._FES
#define RSENT1CS_FNS RSENT1CS_BASE.BIT._FNS
#define RSENT1CS_CLS RSENT1CS_BASE.BIT._CLS
#define RSENT1CS_CVS RSENT1CS_BASE.BIT._CVS
#define RSENT1CS_NRS RSENT1CS_BASE.BIT._NRS
#define RSENT1CS_SCS RSENT1CS_BASE.BIT._SCS
#define RSENT1CS_SMS RSENT1CS_BASE.BIT._SMS
#define RSENT1CS_SES RSENT1CS_BASE.BIT._SES
#define RSENT1CSC RSENT1CSC_BASE.UINT32
#define RSENT1CSC_FCC RSENT1CSC_BASE.BIT._FCC
#define RSENT1CSC_FMC RSENT1CSC_BASE.BIT._FMC
#define RSENT1CSC_FEC RSENT1CSC_BASE.BIT._FEC
#define RSENT1CSC_FNC RSENT1CSC_BASE.BIT._FNC
#define RSENT1CSC_CLC RSENT1CSC_BASE.BIT._CLC
#define RSENT1CSC_CVC RSENT1CSC_BASE.BIT._CVC
#define RSENT1CSC_NRC RSENT1CSC_BASE.BIT._NRC
#define RSENT1CSC_SCC RSENT1CSC_BASE.BIT._SCC
#define RSENT1CSC_SMC RSENT1CSC_BASE.BIT._SMC
#define RSENT1CSC_SEC RSENT1CSC_BASE.BIT._SEC
#define RSENT1SRTS RSENT1SRTS_BASE.UINT32
#define RSENT1SRTS_STS RSENT1SRTS_BASE.BIT._STS
#define RSENT1SRXD RSENT1SRXD_BASE.UINT32
#define RSENT1SRXD_IDD RSENT1SRXD_BASE.BIT._IDD
#define RSENT1SRXD_SMGC RSENT1SRXD_BASE.BIT._SMGC
#define RSENT1SRXD_SCRC RSENT1SRXD_BASE.BIT._SCRC
#define RSENT1SRXD_SND RSENT1SRXD_BASE.BIT._SND
#define RSENT1CPL RSENT1CPL_BASE.UINT32
#define RSENT1CPL_CPLV RSENT1CPL_BASE.BIT._CPLV
#define RSENT1ML RSENT1ML_BASE.UINT32
#define RSENT1ML_MLV RSENT1ML_BASE.BIT._MLV
#define RSENT1FRTS RSENT1FRTS_BASE.UINT32
#define RSENT1FRTS_FTS RSENT1FRTS_BASE.BIT._FTS
#define RSENT1FRXD RSENT1FRXD_BASE.UINT32
#define RSENT1FRXD_ND RSENT1FRXD_BASE.BIT._ND
#define RSENT1FRXD_FCRC RSENT1FRXD_BASE.BIT._FCRC
#define RSENT1FRXD_FCCN RSENT1FRXD_BASE.BIT._FCCN
#define RSENT1FRXD_FND RSENT1FRXD_BASE.BIT._FND
#define RSENT1FRXD_SNDM RSENT1FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif