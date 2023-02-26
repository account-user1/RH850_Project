#ifndef __DR7F701373_RSENT5_HEADER__
#define __DR7F701373_RSENT5_HEADER__



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
} RSENT5TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT5TSCBits_t;

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
} RSENT5CCBits_t;

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
} RSENT5BRPBits_t;

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
} RSENT5IDEBits_t;

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
} RSENT5MDCBits_t;

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
} RSENT5SPCTBits_t;

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
} RSENT5MSTBits_t;

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
} RSENT5CSBits_t;

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
} RSENT5CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT5SRTSBits_t;

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
} RSENT5SRXDBits_t;

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
} RSENT5CPLBits_t;

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
} RSENT5MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT5FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT5FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT5TSPCBits_t BIT;
} RSENT5TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT5TSCBits_t BIT;
} RSENT5TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT5CCBits_t BIT;
} RSENT5CC_t;

typedef union
{
    uint32 UINT32;
    RSENT5BRPBits_t BIT;
} RSENT5BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT5IDEBits_t BIT;
} RSENT5IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT5MDCBits_t BIT;
} RSENT5MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT5SPCTBits_t BIT;
} RSENT5SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT5MSTBits_t BIT;
} RSENT5MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT5CSBits_t BIT;
} RSENT5CS_t;

typedef union
{
    uint32 UINT32;
    RSENT5CSCBits_t BIT;
} RSENT5CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT5SRTSBits_t BIT;
} RSENT5SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT5SRXDBits_t BIT;
} RSENT5SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT5CPLBits_t BIT;
} RSENT5CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT5MLBits_t BIT;
} RSENT5ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT5FRTSBits_t BIT;
} RSENT5FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT5FRXDBits_t BIT;
} RSENT5FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT5TSPC_BASE, 0xFFCDC500, __READ_WRITE, RSENT5TSPC_t);
__IOREG(RSENT5TSC_BASE, 0xFFCDC504, __READ_WRITE, RSENT5TSC_t);
__IOREG(RSENT5CC_BASE, 0xFFCDC510, __READ_WRITE, RSENT5CC_t);
__IOREG(RSENT5BRP_BASE, 0xFFCDC514, __READ_WRITE, RSENT5BRP_t);
__IOREG(RSENT5IDE_BASE, 0xFFCDC518, __READ_WRITE, RSENT5IDE_t);
__IOREG(RSENT5MDC_BASE, 0xFFCDC51C, __READ_WRITE, RSENT5MDC_t);
__IOREG(RSENT5SPCT_BASE, 0xFFCDC520, __READ_WRITE, RSENT5SPCT_t);
__IOREG(RSENT5MST_BASE, 0xFFCDC524, __READ, RSENT5MST_t);
__IOREG(RSENT5CS_BASE, 0xFFCDC528, __READ, RSENT5CS_t);
__IOREG(RSENT5CSC_BASE, 0xFFCDC52C, __READ_WRITE, RSENT5CSC_t);
__IOREG(RSENT5SRTS_BASE, 0xFFCDC530, __READ, RSENT5SRTS_t);
__IOREG(RSENT5SRXD_BASE, 0xFFCDC534, __READ, RSENT5SRXD_t);
__IOREG(RSENT5CPL_BASE, 0xFFCDC538, __READ, RSENT5CPL_t);
__IOREG(RSENT5ML_BASE, 0xFFCDC53C, __READ, RSENT5ML_t);
__IOREG(RSENT5FRTS_BASE, 0xFFCDC540, __READ, RSENT5FRTS_t);
__IOREG(RSENT5FRXD_BASE, 0xFFCDC544, __READ, RSENT5FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT5TSPC RSENT5TSPC_BASE.UINT32
#define RSENT5TSPC_TTPV RSENT5TSPC_BASE.BIT._TTPV
#define RSENT5TSPC_TTM RSENT5TSPC_BASE.BIT._TTM
#define RSENT5TSPC_TMS RSENT5TSPC_BASE.BIT._TMS
#define RSENT5TSC RSENT5TSC_BASE.UINT32
#define RSENT5TSC_TS RSENT5TSC_BASE.BIT._TS
#define RSENT5CC RSENT5CC_BASE.UINT32
#define RSENT5CC_SPCE RSENT5CC_BASE.BIT._SPCE
#define RSENT5CC_NDN RSENT5CC_BASE.BIT._NDN
#define RSENT5CC_PPC RSENT5CC_BASE.BIT._PPC
#define RSENT5CC_PPTC RSENT5CC_BASE.BIT._PPTC
#define RSENT5CC_SMF RSENT5CC_BASE.BIT._SMF
#define RSENT5CC_DFC RSENT5CC_BASE.BIT._DFC
#define RSENT5CC_FCCD RSENT5CC_BASE.BIT._FCCD
#define RSENT5CC_SCCD RSENT5CC_BASE.BIT._SCCD
#define RSENT5CC_FCM RSENT5CC_BASE.BIT._FCM
#define RSENT5CC_SOPC RSENT5CC_BASE.BIT._SOPC
#define RSENT5BRP RSENT5BRP_BASE.UINT32
#define RSENT5BRP_SCMV RSENT5BRP_BASE.BIT._SCMV
#define RSENT5BRP_SCDV RSENT5BRP_BASE.BIT._SCDV
#define RSENT5BRP_TTI RSENT5BRP_BASE.BIT._TTI
#define RSENT5BRP_TTF RSENT5BRP_BASE.BIT._TTF
#define RSENT5IDE RSENT5IDE_BASE.UINT32
#define RSENT5IDE_FRIE RSENT5IDE_BASE.BIT._FRIE
#define RSENT5IDE_FCIE RSENT5IDE_BASE.BIT._FCIE
#define RSENT5IDE_FMIE RSENT5IDE_BASE.BIT._FMIE
#define RSENT5IDE_FEIE RSENT5IDE_BASE.BIT._FEIE
#define RSENT5IDE_FNIE RSENT5IDE_BASE.BIT._FNIE
#define RSENT5IDE_CLIE RSENT5IDE_BASE.BIT._CLIE
#define RSENT5IDE_CVIE RSENT5IDE_BASE.BIT._CVIE
#define RSENT5IDE_NRIE RSENT5IDE_BASE.BIT._NRIE
#define RSENT5IDE_SCIE RSENT5IDE_BASE.BIT._SCIE
#define RSENT5IDE_SMIE RSENT5IDE_BASE.BIT._SMIE
#define RSENT5IDE_SEIE RSENT5IDE_BASE.BIT._SEIE
#define RSENT5MDC RSENT5MDC_BASE.UINT32
#define RSENT5MDC_OMC RSENT5MDC_BASE.BIT._OMC
#define RSENT5SPCT RSENT5SPCT_BASE.UINT32
#define RSENT5SPCT_TLL RSENT5SPCT_BASE.BIT._TLL
#define RSENT5MST RSENT5MST_BASE.UINT32
#define RSENT5MST_OMS RSENT5MST_BASE.BIT._OMS
#define RSENT5CS RSENT5CS_BASE.UINT32
#define RSENT5CS_FRS RSENT5CS_BASE.BIT._FRS
#define RSENT5CS_FCS RSENT5CS_BASE.BIT._FCS
#define RSENT5CS_FMS RSENT5CS_BASE.BIT._FMS
#define RSENT5CS_FES RSENT5CS_BASE.BIT._FES
#define RSENT5CS_FNS RSENT5CS_BASE.BIT._FNS
#define RSENT5CS_CLS RSENT5CS_BASE.BIT._CLS
#define RSENT5CS_CVS RSENT5CS_BASE.BIT._CVS
#define RSENT5CS_NRS RSENT5CS_BASE.BIT._NRS
#define RSENT5CS_SCS RSENT5CS_BASE.BIT._SCS
#define RSENT5CS_SMS RSENT5CS_BASE.BIT._SMS
#define RSENT5CS_SES RSENT5CS_BASE.BIT._SES
#define RSENT5CSC RSENT5CSC_BASE.UINT32
#define RSENT5CSC_FCC RSENT5CSC_BASE.BIT._FCC
#define RSENT5CSC_FMC RSENT5CSC_BASE.BIT._FMC
#define RSENT5CSC_FEC RSENT5CSC_BASE.BIT._FEC
#define RSENT5CSC_FNC RSENT5CSC_BASE.BIT._FNC
#define RSENT5CSC_CLC RSENT5CSC_BASE.BIT._CLC
#define RSENT5CSC_CVC RSENT5CSC_BASE.BIT._CVC
#define RSENT5CSC_NRC RSENT5CSC_BASE.BIT._NRC
#define RSENT5CSC_SCC RSENT5CSC_BASE.BIT._SCC
#define RSENT5CSC_SMC RSENT5CSC_BASE.BIT._SMC
#define RSENT5CSC_SEC RSENT5CSC_BASE.BIT._SEC
#define RSENT5SRTS RSENT5SRTS_BASE.UINT32
#define RSENT5SRTS_STS RSENT5SRTS_BASE.BIT._STS
#define RSENT5SRXD RSENT5SRXD_BASE.UINT32
#define RSENT5SRXD_IDD RSENT5SRXD_BASE.BIT._IDD
#define RSENT5SRXD_SMGC RSENT5SRXD_BASE.BIT._SMGC
#define RSENT5SRXD_SCRC RSENT5SRXD_BASE.BIT._SCRC
#define RSENT5SRXD_SND RSENT5SRXD_BASE.BIT._SND
#define RSENT5CPL RSENT5CPL_BASE.UINT32
#define RSENT5CPL_CPLV RSENT5CPL_BASE.BIT._CPLV
#define RSENT5ML RSENT5ML_BASE.UINT32
#define RSENT5ML_MLV RSENT5ML_BASE.BIT._MLV
#define RSENT5FRTS RSENT5FRTS_BASE.UINT32
#define RSENT5FRTS_FTS RSENT5FRTS_BASE.BIT._FTS
#define RSENT5FRXD RSENT5FRXD_BASE.UINT32
#define RSENT5FRXD_ND RSENT5FRXD_BASE.BIT._ND
#define RSENT5FRXD_FCRC RSENT5FRXD_BASE.BIT._FCRC
#define RSENT5FRXD_FCCN RSENT5FRXD_BASE.BIT._FCCN
#define RSENT5FRXD_FND RSENT5FRXD_BASE.BIT._FND
#define RSENT5FRXD_SNDM RSENT5FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif