#ifndef __DR7F701373_RSENT2_HEADER__
#define __DR7F701373_RSENT2_HEADER__



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
} RSENT2TSPCBits_t;

typedef struct
{
    uint32 _TS : 32;
} RSENT2TSCBits_t;

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
} RSENT2CCBits_t;

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
} RSENT2BRPBits_t;

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
} RSENT2IDEBits_t;

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
} RSENT2MDCBits_t;

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
} RSENT2SPCTBits_t;

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
} RSENT2MSTBits_t;

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
} RSENT2CSBits_t;

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
} RSENT2CSCBits_t;

typedef struct
{
    const uint32 _STS : 32;
} RSENT2SRTSBits_t;

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
} RSENT2SRXDBits_t;

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
} RSENT2CPLBits_t;

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
} RSENT2MLBits_t;

typedef struct
{
    const uint32 _FTS : 32;
} RSENT2FRTSBits_t;

typedef struct
{
    const uint32 _ND : 24;
    const uint32 _FCRC : 4;
    const uint32 _FCCN : 2;
    const uint32 _FND : 1;
    const uint32 _SNDM : 1;
} RSENT2FRXDBits_t;

/* ------------------------------------------------------------------ */
/* BASE TYPE STRUCTURES                                               */
/* ------------------------------------------------------------------ */
typedef union
{
    uint32 UINT32;
    RSENT2TSPCBits_t BIT;
} RSENT2TSPC_t;

typedef union
{
    uint32 UINT32;
    RSENT2TSCBits_t BIT;
} RSENT2TSC_t;

typedef union
{
    uint32 UINT32;
    RSENT2CCBits_t BIT;
} RSENT2CC_t;

typedef union
{
    uint32 UINT32;
    RSENT2BRPBits_t BIT;
} RSENT2BRP_t;

typedef union
{
    uint32 UINT32;
    RSENT2IDEBits_t BIT;
} RSENT2IDE_t;

typedef union
{
    uint32 UINT32;
    RSENT2MDCBits_t BIT;
} RSENT2MDC_t;

typedef union
{
    uint32 UINT32;
    RSENT2SPCTBits_t BIT;
} RSENT2SPCT_t;

typedef union
{
    uint32 UINT32;
    const RSENT2MSTBits_t BIT;
} RSENT2MST_t;

typedef union
{
    uint32 UINT32;
    const RSENT2CSBits_t BIT;
} RSENT2CS_t;

typedef union
{
    uint32 UINT32;
    RSENT2CSCBits_t BIT;
} RSENT2CSC_t;

typedef union
{
    uint32 UINT32;
    const RSENT2SRTSBits_t BIT;
} RSENT2SRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT2SRXDBits_t BIT;
} RSENT2SRXD_t;

typedef union
{
    uint32 UINT32;
    const RSENT2CPLBits_t BIT;
} RSENT2CPL_t;

typedef union
{
    uint32 UINT32;
    const RSENT2MLBits_t BIT;
} RSENT2ML_t;

typedef union
{
    uint32 UINT32;
    const RSENT2FRTSBits_t BIT;
} RSENT2FRTS_t;

typedef union
{
    uint32 UINT32;
    const RSENT2FRXDBits_t BIT;
} RSENT2FRXD_t;

/* ------------------------------------------------------------------ */
/* MEMORY MAPPING PRAGMAS                                             */
/* ------------------------------------------------------------------ */
__IOREG(RSENT2TSPC_BASE, 0xFFCDC200, __READ_WRITE, RSENT2TSPC_t);
__IOREG(RSENT2TSC_BASE, 0xFFCDC204, __READ_WRITE, RSENT2TSC_t);
__IOREG(RSENT2CC_BASE, 0xFFCDC210, __READ_WRITE, RSENT2CC_t);
__IOREG(RSENT2BRP_BASE, 0xFFCDC214, __READ_WRITE, RSENT2BRP_t);
__IOREG(RSENT2IDE_BASE, 0xFFCDC218, __READ_WRITE, RSENT2IDE_t);
__IOREG(RSENT2MDC_BASE, 0xFFCDC21C, __READ_WRITE, RSENT2MDC_t);
__IOREG(RSENT2SPCT_BASE, 0xFFCDC220, __READ_WRITE, RSENT2SPCT_t);
__IOREG(RSENT2MST_BASE, 0xFFCDC224, __READ, RSENT2MST_t);
__IOREG(RSENT2CS_BASE, 0xFFCDC228, __READ, RSENT2CS_t);
__IOREG(RSENT2CSC_BASE, 0xFFCDC22C, __READ_WRITE, RSENT2CSC_t);
__IOREG(RSENT2SRTS_BASE, 0xFFCDC230, __READ, RSENT2SRTS_t);
__IOREG(RSENT2SRXD_BASE, 0xFFCDC234, __READ, RSENT2SRXD_t);
__IOREG(RSENT2CPL_BASE, 0xFFCDC238, __READ, RSENT2CPL_t);
__IOREG(RSENT2ML_BASE, 0xFFCDC23C, __READ, RSENT2ML_t);
__IOREG(RSENT2FRTS_BASE, 0xFFCDC240, __READ, RSENT2FRTS_t);
__IOREG(RSENT2FRXD_BASE, 0xFFCDC244, __READ, RSENT2FRXD_t);

/* ------------------------------------------------------------------ */
/* REGISTER ACCESS MACROS                                             */
/* ------------------------------------------------------------------ */
#define RSENT2TSPC RSENT2TSPC_BASE.UINT32
#define RSENT2TSPC_TTPV RSENT2TSPC_BASE.BIT._TTPV
#define RSENT2TSPC_TTM RSENT2TSPC_BASE.BIT._TTM
#define RSENT2TSPC_TMS RSENT2TSPC_BASE.BIT._TMS
#define RSENT2TSC RSENT2TSC_BASE.UINT32
#define RSENT2TSC_TS RSENT2TSC_BASE.BIT._TS
#define RSENT2CC RSENT2CC_BASE.UINT32
#define RSENT2CC_SPCE RSENT2CC_BASE.BIT._SPCE
#define RSENT2CC_NDN RSENT2CC_BASE.BIT._NDN
#define RSENT2CC_PPC RSENT2CC_BASE.BIT._PPC
#define RSENT2CC_PPTC RSENT2CC_BASE.BIT._PPTC
#define RSENT2CC_SMF RSENT2CC_BASE.BIT._SMF
#define RSENT2CC_DFC RSENT2CC_BASE.BIT._DFC
#define RSENT2CC_FCCD RSENT2CC_BASE.BIT._FCCD
#define RSENT2CC_SCCD RSENT2CC_BASE.BIT._SCCD
#define RSENT2CC_FCM RSENT2CC_BASE.BIT._FCM
#define RSENT2CC_SOPC RSENT2CC_BASE.BIT._SOPC
#define RSENT2BRP RSENT2BRP_BASE.UINT32
#define RSENT2BRP_SCMV RSENT2BRP_BASE.BIT._SCMV
#define RSENT2BRP_SCDV RSENT2BRP_BASE.BIT._SCDV
#define RSENT2BRP_TTI RSENT2BRP_BASE.BIT._TTI
#define RSENT2BRP_TTF RSENT2BRP_BASE.BIT._TTF
#define RSENT2IDE RSENT2IDE_BASE.UINT32
#define RSENT2IDE_FRIE RSENT2IDE_BASE.BIT._FRIE
#define RSENT2IDE_FCIE RSENT2IDE_BASE.BIT._FCIE
#define RSENT2IDE_FMIE RSENT2IDE_BASE.BIT._FMIE
#define RSENT2IDE_FEIE RSENT2IDE_BASE.BIT._FEIE
#define RSENT2IDE_FNIE RSENT2IDE_BASE.BIT._FNIE
#define RSENT2IDE_CLIE RSENT2IDE_BASE.BIT._CLIE
#define RSENT2IDE_CVIE RSENT2IDE_BASE.BIT._CVIE
#define RSENT2IDE_NRIE RSENT2IDE_BASE.BIT._NRIE
#define RSENT2IDE_SCIE RSENT2IDE_BASE.BIT._SCIE
#define RSENT2IDE_SMIE RSENT2IDE_BASE.BIT._SMIE
#define RSENT2IDE_SEIE RSENT2IDE_BASE.BIT._SEIE
#define RSENT2MDC RSENT2MDC_BASE.UINT32
#define RSENT2MDC_OMC RSENT2MDC_BASE.BIT._OMC
#define RSENT2SPCT RSENT2SPCT_BASE.UINT32
#define RSENT2SPCT_TLL RSENT2SPCT_BASE.BIT._TLL
#define RSENT2MST RSENT2MST_BASE.UINT32
#define RSENT2MST_OMS RSENT2MST_BASE.BIT._OMS
#define RSENT2CS RSENT2CS_BASE.UINT32
#define RSENT2CS_FRS RSENT2CS_BASE.BIT._FRS
#define RSENT2CS_FCS RSENT2CS_BASE.BIT._FCS
#define RSENT2CS_FMS RSENT2CS_BASE.BIT._FMS
#define RSENT2CS_FES RSENT2CS_BASE.BIT._FES
#define RSENT2CS_FNS RSENT2CS_BASE.BIT._FNS
#define RSENT2CS_CLS RSENT2CS_BASE.BIT._CLS
#define RSENT2CS_CVS RSENT2CS_BASE.BIT._CVS
#define RSENT2CS_NRS RSENT2CS_BASE.BIT._NRS
#define RSENT2CS_SCS RSENT2CS_BASE.BIT._SCS
#define RSENT2CS_SMS RSENT2CS_BASE.BIT._SMS
#define RSENT2CS_SES RSENT2CS_BASE.BIT._SES
#define RSENT2CSC RSENT2CSC_BASE.UINT32
#define RSENT2CSC_FCC RSENT2CSC_BASE.BIT._FCC
#define RSENT2CSC_FMC RSENT2CSC_BASE.BIT._FMC
#define RSENT2CSC_FEC RSENT2CSC_BASE.BIT._FEC
#define RSENT2CSC_FNC RSENT2CSC_BASE.BIT._FNC
#define RSENT2CSC_CLC RSENT2CSC_BASE.BIT._CLC
#define RSENT2CSC_CVC RSENT2CSC_BASE.BIT._CVC
#define RSENT2CSC_NRC RSENT2CSC_BASE.BIT._NRC
#define RSENT2CSC_SCC RSENT2CSC_BASE.BIT._SCC
#define RSENT2CSC_SMC RSENT2CSC_BASE.BIT._SMC
#define RSENT2CSC_SEC RSENT2CSC_BASE.BIT._SEC
#define RSENT2SRTS RSENT2SRTS_BASE.UINT32
#define RSENT2SRTS_STS RSENT2SRTS_BASE.BIT._STS
#define RSENT2SRXD RSENT2SRXD_BASE.UINT32
#define RSENT2SRXD_IDD RSENT2SRXD_BASE.BIT._IDD
#define RSENT2SRXD_SMGC RSENT2SRXD_BASE.BIT._SMGC
#define RSENT2SRXD_SCRC RSENT2SRXD_BASE.BIT._SCRC
#define RSENT2SRXD_SND RSENT2SRXD_BASE.BIT._SND
#define RSENT2CPL RSENT2CPL_BASE.UINT32
#define RSENT2CPL_CPLV RSENT2CPL_BASE.BIT._CPLV
#define RSENT2ML RSENT2ML_BASE.UINT32
#define RSENT2ML_MLV RSENT2ML_BASE.BIT._MLV
#define RSENT2FRTS RSENT2FRTS_BASE.UINT32
#define RSENT2FRTS_FTS RSENT2FRTS_BASE.BIT._FTS
#define RSENT2FRXD RSENT2FRXD_BASE.UINT32
#define RSENT2FRXD_ND RSENT2FRXD_BASE.BIT._ND
#define RSENT2FRXD_FCRC RSENT2FRXD_BASE.BIT._FCRC
#define RSENT2FRXD_FCCN RSENT2FRXD_BASE.BIT._FCCN
#define RSENT2FRXD_FND RSENT2FRXD_BASE.BIT._FND
#define RSENT2FRXD_SNDM RSENT2FRXD_BASE.BIT._SNDM

/* ------------- */
/* END OF FILE   */
/* ------------- */

#endif