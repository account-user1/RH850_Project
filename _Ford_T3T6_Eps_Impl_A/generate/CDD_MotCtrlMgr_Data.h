
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 13.04.2018 17:33:17
***********************************************************************************************************************
* Version Control:
* %version:          16 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 06/10/15  2        LWW       Template update for macro name fix                                              EA4#765
* 10/29/15  3        LWW       Template update for signal mapping changes                                      EA4#3428
* 08/08/16  4        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 5.3 [NXTRDEV 5.3.1]:  Typedef of enumerations the RTE may define may be duplicated in CDD_MotCtrlMgr_Data.h 
                                           for use by non-RTE functions since the RTE definition cannot be guaranteed to be visible 
										   to these non-RTE functions.  The typedef definitions, however, will be the same in 
										   both definitions and therefore will not impact functionality */

/***************************************** Non-Rte Enumeration Definitions *******************************************/
#ifndef Rte_TypeDef_SigQlfr1
	typedef uint8 SigQlfr1;
#endif

#ifndef SIGQLFR_NORES
	#define SIGQLFR_NORES (0U)
#endif
#ifndef SIGQLFR_PASSD
	#define SIGQLFR_PASSD (1U)
#endif
#ifndef SIGQLFR_FAILD
	#define SIGQLFR_FAILD (2U)
#endif

#ifndef Rte_TypeDef_SysSt1
	typedef uint8 SysSt1;
#endif

#ifndef SYSST_DI
	#define SYSST_DI (0U)
#endif
#ifndef SYSST_ENA
	#define SYSST_ENA (2U)
#endif
#ifndef SYSST_WRMININ
	#define SYSST_WRMININ (3U)
#endif
#ifndef SYSST_OFF
	#define SYSST_OFF (1U)
#endif

#ifndef Rte_TypeDef_IvtrFetFltPha1
	typedef uint8 IvtrFetFltPha1;
#endif

#ifndef IVTRFETFLTPHA_NOPHASNGFETFLT
	#define IVTRFETFLTPHA_NOPHASNGFETFLT (0U)
#endif
#ifndef IVTRFETFLTPHA_PHAASNGFETFLT
	#define IVTRFETFLTPHA_PHAASNGFETFLT (1U)
#endif
#ifndef IVTRFETFLTPHA_PHABSNGFETFLT
	#define IVTRFETFLTPHA_PHABSNGFETFLT (2U)
#endif
#ifndef IVTRFETFLTPHA_PHACSNGFETFLT
	#define IVTRFETFLTPHA_PHACSNGFETFLT (4U)
#endif

#ifndef Rte_TypeDef_IvtrFetFltTyp1
	typedef uint8 IvtrFetFltTyp1;
#endif

#ifndef IVTRFETFLTTYP_NOFETFLT
	#define IVTRFETFLTTYP_NOFETFLT (0U)
#endif
#ifndef IVTRFETFLTTYP_LOWRFETFLT
	#define IVTRFETFLTTYP_LOWRFETFLT (1U)
#endif
#ifndef IVTRFETFLTTYP_UPPRFETFLT
	#define IVTRFETFLTTYP_UPPRFETFLT (2U)
#endif
#ifndef IVTRFETFLTTYP_MPLFETFLT
	#define IVTRFETFLTTYP_MPLFETFLT (4U)
#endif

#ifndef Rte_TypeDef_MfgEnaSt1
	typedef uint8 MfgEnaSt1;
#endif

#ifndef MFGENAST_PRDNMOD
	#define MFGENAST_PRDNMOD (0U)
#endif
#ifndef MFGENAST_MFGMOD
	#define MFGENAST_MFGMOD (1U)
#endif
#ifndef MFGENAST_TESTMOD
	#define MFGENAST_TESTMOD (2U)
#endif

#ifndef Rte_TypeDef_MotCurrEolCalSt2
	typedef uint8 MotCurrEolCalSt2;
#endif

#ifndef MCECS_OFFSCMDSTRT
	#define MCECS_OFFSCMDSTRT (0U)
#endif
#ifndef MCECS_OFFSCMDHI
	#define MCECS_OFFSCMDHI (1U)
#endif
#ifndef MCECS_OFFSCMDLO
	#define MCECS_OFFSCMDLO (2U)
#endif
#ifndef MCECS_OFFSCMDZERO
	#define MCECS_OFFSCMDZERO (3U)
#endif
#ifndef MCECS_OFFSCMDEND
	#define MCECS_OFFSCMDEND (4U)
#endif
#ifndef MCECS_GAINCMDAD
	#define MCECS_GAINCMDAD (5U)
#endif
#ifndef MCECS_GAINCMDBE
	#define MCECS_GAINCMDBE (6U)
#endif
#ifndef MCECS_GAINCMDCF
	#define MCECS_GAINCMDCF (7U)
#endif
#ifndef MCECS_CMDSAFEST
	#define MCECS_CMDSAFEST (8U)
#endif

/*********************************************** Exported Declarations ***********************************************/
/* Type Declarations */
typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc1RawRes[24];
	VAR(sint32, TYPEDEF)     MotCtrlMotAgCumvAlgndMrfRev;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdC;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5Cos;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5Sin;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6Cos;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6Sin;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcVlyC;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgDax;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgQax;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgDaxFild;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgQaxFild;
	VAR(uint32, TYPEDEF)     MotCtrlMotAgTiBuf[8];
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumA;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumB;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiSumC;
	VAR(uint16, TYPEDEF)     MotCtrlNtc5DErrCnt;
	VAR(uint16, TYPEDEF)     MotCtrlFastLoopCntr;
	VAR(uint16, TYPEDEF)     MotCtrlSlowLoopCntr;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg5Mecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg6Mecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgBuf[8];
	VAR(uint16, TYPEDEF)     MotCtrlMotAg5RawMecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAg6RawMecl;
	VAR(boolean, TYPEDEF)     MotCtrlMotAgCumvInid;
	VAR(uint8, TYPEDEF)     MotCtrlMotCurrRollgCntr1;
	VAR(uint8, TYPEDEF)     MotCtrlMotAgBufIdx;
	VAR(uint8, TYPEDEF)     AlgnResd1[15]; 
}MotCtrlToTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     Adc1RawRes[24];
	VAR(sint32, TYPEDEF)     MotAgCumvAlgndMrfRev;
	VAR(float32, TYPEDEF)     MotCurrDax;
	VAR(float32, TYPEDEF)     MotCurrQax;
	VAR(float32, TYPEDEF)     MotCurrCorrdA;
	VAR(float32, TYPEDEF)     MotCurrCorrdB;
	VAR(float32, TYPEDEF)     MotCurrCorrdC;
	VAR(float32, TYPEDEF)     MotAg5Cos;
	VAR(float32, TYPEDEF)     MotAg5Sin;
	VAR(float32, TYPEDEF)     MotAg6Cos;
	VAR(float32, TYPEDEF)     MotAg6Sin;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyA;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyB;
	VAR(float32, TYPEDEF)     MotCurrAdcVlyC;
	VAR(float32, TYPEDEF)     MotVltgDax;
	VAR(float32, TYPEDEF)     MotVltgQax;
	VAR(float32, TYPEDEF)     MotVltgDaxFild;
	VAR(float32, TYPEDEF)     MotVltgQaxFild;
	VAR(uint32, TYPEDEF)     MotAgTiBuf[8];
	VAR(uint32, TYPEDEF)     PhaOnTiSumA;
	VAR(uint32, TYPEDEF)     PhaOnTiSumB;
	VAR(uint32, TYPEDEF)     PhaOnTiSumC;
	VAR(uint16, TYPEDEF)     Ntc5DErrCnt;
	VAR(uint16, TYPEDEF)     FastLoopCntr;
	VAR(uint16, TYPEDEF)     SlowLoopCntr;
	VAR(uint16, TYPEDEF)     MotAg5Mecl;
	VAR(uint16, TYPEDEF)     MotAg6Mecl;
	VAR(uint16, TYPEDEF)     MotAgBuf[8];
	VAR(uint16, TYPEDEF)     MotAg5RawMecl;
	VAR(uint16, TYPEDEF)     MotAg6RawMecl;
	VAR(boolean, TYPEDEF)     MotAgCumvInid;
	VAR(uint8, TYPEDEF)     MotCurrRollgCntr1;
	VAR(uint8, TYPEDEF)     MotAgBufIdx;
	VAR(uint8, TYPEDEF)     AlgnResd2[15]; 
}TwoMilliSecFromMotCtrlRec1;

typedef struct
{ 
	VAR(float32, TYPEDEF)     MotAgElecDlyRpl;
	VAR(float32, TYPEDEF)     MotCurrQaxToMotTqGain;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder1Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder1Pha;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder2Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder2Pha;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder3Mgn;
	VAR(float32, TYPEDEF)     MotTqRplCoggOrder3Pha;
	VAR(float32, TYPEDEF)     MotVelMrf;
	VAR(float32, TYPEDEF)     BrdgVltg;
	VAR(float32, TYPEDEF)     EcuTFild;
	VAR(float32, TYPEDEF)     MotAgElecDly;
	VAR(float32, TYPEDEF)     MotBackEmfVltg;
	VAR(float32, TYPEDEF)     MotCurrDaxCmd;
	VAR(float32, TYPEDEF)     MotCurrDaxMax;
	VAR(float32, TYPEDEF)     MotCurrQaxCmd;
	VAR(float32, TYPEDEF)     MotDampgDax;
	VAR(float32, TYPEDEF)     MotDampgQax;
	VAR(float32, TYPEDEF)     MotInduDaxEstimdIvs;
	VAR(float32, TYPEDEF)     MotInduQaxEstimdIvs;
	VAR(float32, TYPEDEF)     MotIntglGainDax;
	VAR(float32, TYPEDEF)     MotIntglGainQax;
	VAR(float32, TYPEDEF)     MotPropGainDax;
	VAR(float32, TYPEDEF)     MotPropGainQax;
	VAR(float32, TYPEDEF)     MotReacncDax;
	VAR(float32, TYPEDEF)     MotReacncQax;
	VAR(float32, TYPEDEF)     MotREstimd;
	VAR(float32, TYPEDEF)     MotVltgDaxFf;
	VAR(float32, TYPEDEF)     MotVltgQaxFf;
	VAR(float32, TYPEDEF)     MotAg5CosRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotAg5CosRtOffs;
	VAR(float32, TYPEDEF)     MotAg5SinRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotAg5SinRtOffs;
	VAR(float32, TYPEDEF)     MotAg6CosRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotAg6CosRtOffs;
	VAR(float32, TYPEDEF)     MotAg6SinRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotAg6SinRtOffs;
	VAR(float32, TYPEDEF)     VehSpd;
	VAR(float32, TYPEDEF)     MotAg2Cos;
	VAR(float32, TYPEDEF)     MotAg2Sin;
	VAR(uint16, TYPEDEF)     LoopCntr2MilliSec;
	VAR(uint8, TYPEDEF)     CurrMeasCorrlnSts;
	VAR(boolean, TYPEDEF)     CurrMeasWrmIninTestCmpl;
	VAR(SigQlfr1, TYPEDEF)     MotCurrQlfr1;
	VAR(sint8, TYPEDEF)     MotElecMeclPolarity;
	VAR(SysSt1, TYPEDEF)     SysSt;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyAAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyBAdcFaild;
	VAR(boolean, TYPEDEF)     MotCurrAdcVlyCAdcFaild;
	VAR(boolean, TYPEDEF)     DiagcStsIvtr1Inactv;
	VAR(boolean, TYPEDEF)     DualEcuMotCtrlMtgtnEna;
	VAR(SigQlfr1, TYPEDEF)     MotAg5MeclQlfr;
	VAR(uint8, TYPEDEF)     MotAg5MeclRollgCntr;
	VAR(SigQlfr1, TYPEDEF)     MotAg6MeclQlfr;
	VAR(uint8, TYPEDEF)     MotAg6MeclRollgCntr;
	VAR(IvtrFetFltPha1, TYPEDEF)     IvtrFetFltPha;
	VAR(IvtrFetFltTyp1, TYPEDEF)     IvtrFetFltTyp;
	VAR(boolean, TYPEDEF)     MotAg2CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotAg2SinAdcFaild;
	VAR(boolean, TYPEDEF)     MotAg5CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotAg5SinAdcFaild;
	VAR(boolean, TYPEDEF)     MotAg6CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotAg6SinAdcFaild;
	VAR(uint8, TYPEDEF)     MotAgMeclCorrlnSt;
	VAR(MotCurrEolCalSt2, TYPEDEF)     MotCurrEolCalSt;
	VAR(sint8, TYPEDEF)     MotAgMecl5Polarity;
	VAR(sint8, TYPEDEF)     MotAgMecl6Polarity;
	VAR(uint8, TYPEDEF)     MotAndThermProtnLoaMod;
	VAR(uint8, TYPEDEF)     AlgnResd3[3]; 
}TwoMilliSecToMotCtrlRec1;

typedef struct
{ 
	VAR(float32, TYPEDEF)     MotCtrlMotAgElecDlyRpl;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxToMotTqGain;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder1Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder1Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder2Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder2Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder3Mgn;
	VAR(float32, TYPEDEF)     MotCtrlMotTqRplCoggOrder3Pha;
	VAR(float32, TYPEDEF)     MotCtrlMotVelMrf;
	VAR(float32, TYPEDEF)     MotCtrlBrdgVltg;
	VAR(float32, TYPEDEF)     MotCtrlEcuTFild;
	VAR(float32, TYPEDEF)     MotCtrlMotAgElecDly;
	VAR(float32, TYPEDEF)     MotCtrlMotBackEmfVltg;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDaxCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrDaxMax;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotDampgDax;
	VAR(float32, TYPEDEF)     MotCtrlMotDampgQax;
	VAR(float32, TYPEDEF)     MotCtrlMotInduDaxEstimdIvs;
	VAR(float32, TYPEDEF)     MotCtrlMotInduQaxEstimdIvs;
	VAR(float32, TYPEDEF)     MotCtrlMotIntglGainDax;
	VAR(float32, TYPEDEF)     MotCtrlMotIntglGainQax;
	VAR(float32, TYPEDEF)     MotCtrlMotPropGainDax;
	VAR(float32, TYPEDEF)     MotCtrlMotPropGainQax;
	VAR(float32, TYPEDEF)     MotCtrlMotReacncDax;
	VAR(float32, TYPEDEF)     MotCtrlMotReacncQax;
	VAR(float32, TYPEDEF)     MotCtrlMotREstimd;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgDaxFf;
	VAR(float32, TYPEDEF)     MotCtrlMotVltgQaxFf;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5CosRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5CosRtOffs;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5SinRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotCtrlMotAg5SinRtOffs;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6CosRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6CosRtOffs;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6SinRtAmpRecpr;
	VAR(float32, TYPEDEF)     MotCtrlMotAg6SinRtOffs;
	VAR(float32, TYPEDEF)     MotCtrlVehSpd;
	VAR(float32, TYPEDEF)     MotCtrlMotAg2Cos;
	VAR(float32, TYPEDEF)     MotCtrlMotAg2Sin;
	VAR(uint16, TYPEDEF)     MotCtrlLoopCntr2MilliSec;
	VAR(uint8, TYPEDEF)     MotCtrlCurrMeasCorrlnSts;
	VAR(boolean, TYPEDEF)     MotCtrlCurrMeasWrmIninTestCmpl;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotCurrQlfr1;
	VAR(sint8, TYPEDEF)     MotCtrlMotElecMeclPolarity;
	VAR(SysSt1, TYPEDEF)     MotCtrlSysSt;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyAAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyBAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotCurrAdcVlyCAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlDiagcStsIvtr1Inactv;
	VAR(boolean, TYPEDEF)     MotCtrlDualEcuMotCtrlMtgtnEna;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotAg5MeclQlfr;
	VAR(uint8, TYPEDEF)     MotCtrlMotAg5MeclRollgCntr;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotAg6MeclQlfr;
	VAR(uint8, TYPEDEF)     MotCtrlMotAg6MeclRollgCntr;
	VAR(IvtrFetFltPha1, TYPEDEF)     MotCtrlIvtrFetFltPha;
	VAR(IvtrFetFltTyp1, TYPEDEF)     MotCtrlIvtrFetFltTyp;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg2CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg2SinAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg5CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg5SinAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg6CosAdcFaild;
	VAR(boolean, TYPEDEF)     MotCtrlMotAg6SinAdcFaild;
	VAR(uint8, TYPEDEF)     MotCtrlMotAgMeclCorrlnSt;
	VAR(MotCurrEolCalSt2, TYPEDEF)     MotCtrlMotCurrEolCalSt;
	VAR(sint8, TYPEDEF)     MotCtrlMotAgMecl5Polarity;
	VAR(sint8, TYPEDEF)     MotCtrlMotAgMecl6Polarity;
	VAR(uint8, TYPEDEF)     MotCtrlMotAndThermProtnLoaMod;
	VAR(uint8, TYPEDEF)     AlgnResd4[3]; 
}MotCtrlFromTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc0RawRes[24];
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCoggCmd;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxRplCmd;
	VAR(float32, TYPEDEF)     MotCtrlCurrMeasMotAgCorrd;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup2Ref0;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup2Ref1;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup3Ref0;
	VAR(float32, TYPEDEF)     MotCtrlAdc0ScanGroup3Ref1;
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag0;
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag2;
	VAR(float32, TYPEDEF)     MotCtrlAdc0SelfDiag4;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakA;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakB;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrAdcPeakC;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrSnsrOffs1;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdD;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdE;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrCorrdF;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiA;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiB;
	VAR(uint32, TYPEDEF)     MotCtrlPhaOnTiC;
	VAR(uint32, TYPEDEF)     MotCtrlPwmPerd;
	VAR(float32, TYPEDEF)     MotCtrlMotCurrQaxCmdFinal;
	VAR(float32, TYPEDEF)     MotCtrlMotModlnIdx;
	VAR(uint32, TYPEDEF)     MotCtrlMotAgMeasTi;
	VAR(uint32, TYPEDEF)     MotCtrlCmuOffs;
	VAR(float32, TYPEDEF)     MotCtrlSwCalModlnIdx;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgMecl;
	VAR(uint16, TYPEDEF)     MotCtrlMotAgElec;
	VAR(uint16, TYPEDEF)     MotCtrlMotPhaAdv;
	VAR(uint16, TYPEDEF)     MotCtrlSwCalPosnIdx;
	VAR(SigQlfr1, TYPEDEF)     MotCtrlMotCurrQlfr2;
	VAR(uint8, TYPEDEF)     MotCtrlMotCurrRollgCntr2;
	VAR(uint8, TYPEDEF)     MotCtrlAdcDiagcEndPtrOutp;
	VAR(uint8, TYPEDEF)     MotCtrlAdcDiagcStrtPtrOutp;
	VAR(MfgEnaSt1, TYPEDEF)     MotCtrlMfgEnaSt;
	VAR(boolean, TYPEDEF)     MotCtrlSwCalEna;
	VAR(uint8, TYPEDEF)     AlgnResd5[10]; 
}MotCtrlIntRec1;

/* Global Variable Declarations */
#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

/* Macro Definitions */
#define MOTCTRLMGR_MotCtrlAdc0RawRes     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0RawRes)
#define MOTCTRLMGR_MotCtrlAdc1RawRes     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc1RawRes)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCoggCmd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxCoggCmd)
#define MOTCTRLMGR_MotCtrlMotCurrQaxRplCmd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxRplCmd)
#define MOTCTRLMGR_MotCtrlMotAgElecDlyRpl     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgElecDlyRpl)
#define MOTCTRLMGR_MotCtrlMotCurrQaxToMotTqGain     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQaxToMotTqGain)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder1Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder1Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder1Pha)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder2Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder2Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder2Pha)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Mgn     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder3Mgn)
#define MOTCTRLMGR_MotCtrlMotTqRplCoggOrder3Pha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotTqRplCoggOrder3Pha)
#define MOTCTRLMGR_MotCtrlMotVelMrf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVelMrf)
#define MOTCTRLMGR_MotCtrlBrdgVltg     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlBrdgVltg)
#define MOTCTRLMGR_MotCtrlMotAgMecl     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgMecl)
#define MOTCTRLMGR_MotCtrlMotAgCumvAlgndMrfRev     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgCumvAlgndMrfRev)
#define MOTCTRLMGR_MotCtrlMotAgCumvInid     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgCumvInid)
#define MOTCTRLMGR_MotCtrlMotAgElec     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgElec)
#define MOTCTRLMGR_MotCtrlCurrMeasCorrlnSts     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlCurrMeasCorrlnSts)
#define MOTCTRLMGR_MotCtrlMotCurrDax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrDax)
#define MOTCTRLMGR_MotCtrlMotCurrQax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrQax)
#define MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlCurrMeasWrmIninTestCmpl)
#define MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlCurrMeasMotAgCorrd)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdA)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdB)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrCorrdC)
#define MOTCTRLMGR_MotCtrlMotCurrRollgCntr1     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrRollgCntr1)
#define MOTCTRLMGR_MotCtrlNtc5DErrCnt     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlNtc5DErrCnt)
#define MOTCTRLMGR_MotCtrlMotCurrQlfr1     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQlfr1)
#define MOTCTRLMGR_MotCtrlMotElecMeclPolarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotElecMeclPolarity)
#define MOTCTRLMGR_MotCtrlSysSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlSysSt)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref0     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0ScanGroup2Ref0)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup2Ref1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0ScanGroup2Ref1)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref0     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0ScanGroup3Ref0)
#define MOTCTRLMGR_MotCtrlAdc0ScanGroup3Ref1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0ScanGroup3Ref1)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag0     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0SelfDiag0)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag2     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0SelfDiag2)
#define MOTCTRLMGR_MotCtrlAdc0SelfDiag4     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0SelfDiag4)
#define MOTCTRLMGR_MotCtrlMotAg5Cos     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg5Cos)
#define MOTCTRLMGR_MotCtrlMotAg5Sin     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg5Sin)
#define MOTCTRLMGR_MotCtrlMotAg6Cos     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg6Cos)
#define MOTCTRLMGR_MotCtrlMotAg6Sin     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg6Sin)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakA     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakA)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakB     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakB)
#define MOTCTRLMGR_MotCtrlMotCurrAdcPeakC     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrAdcPeakC)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyA)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyB)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyC)
#define MOTCTRLMGR_MotCtrlMotCurrSnsrOffs1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrSnsrOffs1)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyAAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyBAdcFaild)
#define MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrAdcVlyCAdcFaild)
#define MOTCTRLMGR_MotCtrlEcuTFild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlEcuTFild)
#define MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlDiagcStsIvtr1Inactv)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdD     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrCorrdD)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdE     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrCorrdE)
#define MOTCTRLMGR_MotCtrlMotCurrCorrdF     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrCorrdF)
#define MOTCTRLMGR_MotCtrlMotCurrQlfr2     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQlfr2)
#define MOTCTRLMGR_MotCtrlMotCurrRollgCntr2     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrRollgCntr2)
#define MOTCTRLMGR_MotCtrlPhaOnTiA     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiA)
#define MOTCTRLMGR_MotCtrlPhaOnTiB     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiB)
#define MOTCTRLMGR_MotCtrlPhaOnTiC     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPhaOnTiC)
#define MOTCTRLMGR_MotCtrlPwmPerd     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlPwmPerd)
#define MOTCTRLMGR_MotCtrlAdcDiagcEndPtrOutp     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdcDiagcEndPtrOutp)
#define MOTCTRLMGR_MotCtrlAdcDiagcStrtPtrOutp     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdcDiagcStrtPtrOutp)
#define MOTCTRLMGR_MotCtrlFastLoopCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlFastLoopCntr)
#define MOTCTRLMGR_MotCtrlLoopCntr2MilliSec     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlLoopCntr2MilliSec)
#define MOTCTRLMGR_MotCtrlSlowLoopCntr     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlSlowLoopCntr)
#define MOTCTRLMGR_MotCtrlDualEcuMotCtrlMtgtnEna     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlDualEcuMotCtrlMtgtnEna)
#define MOTCTRLMGR_MotCtrlMotAgElecDly     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgElecDly)
#define MOTCTRLMGR_MotCtrlMotBackEmfVltg     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotBackEmfVltg)
#define MOTCTRLMGR_MotCtrlMotCurrDaxCmd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrDaxCmd)
#define MOTCTRLMGR_MotCtrlMotCurrDaxMax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrDaxMax)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCmd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrQaxCmd)
#define MOTCTRLMGR_MotCtrlMotCurrQaxCmdFinal     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotCurrQaxCmdFinal)
#define MOTCTRLMGR_MotCtrlMotDampgDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotDampgDax)
#define MOTCTRLMGR_MotCtrlMotDampgQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotDampgQax)
#define MOTCTRLMGR_MotCtrlMotInduDaxEstimdIvs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotInduDaxEstimdIvs)
#define MOTCTRLMGR_MotCtrlMotInduQaxEstimdIvs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotInduQaxEstimdIvs)
#define MOTCTRLMGR_MotCtrlMotIntglGainDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotIntglGainDax)
#define MOTCTRLMGR_MotCtrlMotIntglGainQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotIntglGainQax)
#define MOTCTRLMGR_MotCtrlMotModlnIdx     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotModlnIdx)
#define MOTCTRLMGR_MotCtrlMotPhaAdv     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotPhaAdv)
#define MOTCTRLMGR_MotCtrlMotPropGainDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotPropGainDax)
#define MOTCTRLMGR_MotCtrlMotPropGainQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotPropGainQax)
#define MOTCTRLMGR_MotCtrlMotReacncDax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotReacncDax)
#define MOTCTRLMGR_MotCtrlMotReacncQax     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotReacncQax)
#define MOTCTRLMGR_MotCtrlMotREstimd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotREstimd)
#define MOTCTRLMGR_MotCtrlMotVltgDax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotVltgDax)
#define MOTCTRLMGR_MotCtrlMotVltgDaxFf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVltgDaxFf)
#define MOTCTRLMGR_MotCtrlMotVltgQax     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotVltgQax)
#define MOTCTRLMGR_MotCtrlMotVltgQaxFf     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotVltgQaxFf)
#define MOTCTRLMGR_MotCtrlMotAgBufIdx     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgBufIdx)
#define MOTCTRLMGR_MotCtrlMotAgMeasTi     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMotAgMeasTi)
#define MOTCTRLMGR_MotCtrlMotAg5CosRtAmpRecpr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5CosRtAmpRecpr)
#define MOTCTRLMGR_MotCtrlMotAg5CosRtOffs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5CosRtOffs)
#define MOTCTRLMGR_MotCtrlMotAg5Mecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg5Mecl)
#define MOTCTRLMGR_MotCtrlMotAg5MeclQlfr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAg5MeclRollgCntr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAg5SinRtAmpRecpr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5SinRtAmpRecpr)
#define MOTCTRLMGR_MotCtrlMotAg5SinRtOffs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5SinRtOffs)
#define MOTCTRLMGR_MotCtrlMotAg6CosRtAmpRecpr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6CosRtAmpRecpr)
#define MOTCTRLMGR_MotCtrlMotAg6CosRtOffs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6CosRtOffs)
#define MOTCTRLMGR_MotCtrlMotAg6Mecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg6Mecl)
#define MOTCTRLMGR_MotCtrlMotAg6MeclQlfr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAg6MeclRollgCntr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAg6SinRtAmpRecpr     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6SinRtAmpRecpr)
#define MOTCTRLMGR_MotCtrlMotAg6SinRtOffs     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6SinRtOffs)
#define MOTCTRLMGR_MotCtrlMotVltgDaxFild     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotVltgDaxFild)
#define MOTCTRLMGR_MotCtrlMotVltgQaxFild     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotVltgQaxFild)
#define MOTCTRLMGR_MotCtrlMotAgBuf     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgBuf)
#define MOTCTRLMGR_MotCtrlMotAgTiBuf     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAgTiBuf)
#define MOTCTRLMGR_MotCtrlCmuOffs     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlCmuOffs)
#define MOTCTRLMGR_MotCtrlIvtrFetFltPha     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlIvtrFetFltPha)
#define MOTCTRLMGR_MotCtrlIvtrFetFltTyp     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlIvtrFetFltTyp)
#define MOTCTRLMGR_MotCtrlMfgEnaSt     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlMfgEnaSt)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumA     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumA)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumB     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumB)
#define MOTCTRLMGR_MotCtrlPhaOnTiSumC     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlPhaOnTiSumC)
#define MOTCTRLMGR_MotCtrlSwCalEna     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlSwCalEna)
#define MOTCTRLMGR_MotCtrlSwCalModlnIdx     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlSwCalModlnIdx)
#define MOTCTRLMGR_MotCtrlSwCalPosnIdx     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlSwCalPosnIdx)
#define MOTCTRLMGR_MotCtrlVehSpd     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlVehSpd)
#define MOTCTRLMGR_MotCtrlMotAg2Cos     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg2Cos)
#define MOTCTRLMGR_MotCtrlMotAg2CosAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg2CosAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAg2Sin     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg2Sin)
#define MOTCTRLMGR_MotCtrlMotAg2SinAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg2SinAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAg5CosAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5CosAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAg5SinAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg5SinAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAg6CosAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6CosAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAg6SinAdcFaild     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAg6SinAdcFaild)
#define MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMeclCorrlnSt)
#define MOTCTRLMGR_MotCtrlMotCurrEolCalSt     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotCurrEolCalSt)
#define MOTCTRLMGR_MotCtrlMotAgMecl5Polarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMecl5Polarity)
#define MOTCTRLMGR_MotCtrlMotAgMecl6Polarity     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAgMecl6Polarity)
#define MOTCTRLMGR_MotCtrlMotAndThermProtnLoaMod     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlMotAndThermProtnLoaMod)
#define MOTCTRLMGR_MotCtrlMotAg5RawMecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg5RawMecl)
#define MOTCTRLMGR_MotCtrlMotAg6RawMecl     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlMotAg6RawMecl)
#define MOTCTRLMGR_MotCtrlMotAgAMecl     (MOTCTRLMGR_MotCtrlMotAg5Mecl)
#define MOTCTRLMGR_MotCtrlMotAgAMeclQlfr     (MOTCTRLMGR_MotCtrlMotAg5MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAgAMeclRollgCntr     (MOTCTRLMGR_MotCtrlMotAg5MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAgBMecl     (MOTCTRLMGR_MotCtrlMotAg6Mecl)
#define MOTCTRLMGR_MotCtrlMotAgBMeclQlfr     (MOTCTRLMGR_MotCtrlMotAg6MeclQlfr)
#define MOTCTRLMGR_MotCtrlMotAgBMeclRollgCntr     (MOTCTRLMGR_MotCtrlMotAg6MeclRollgCntr)
#define MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSts     (MOTCTRLMGR_MotCtrlMotAgMeclCorrlnSt)
#define MOTCTRLMGR_MotCtrlMotAg5Polarity     (MOTCTRLMGR_MotCtrlMotAgMecl5Polarity)
#define MOTCTRLMGR_MotCtrlMotAg6Polarity     (MOTCTRLMGR_MotCtrlMotAgMecl6Polarity)

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
