/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: MotCtrlMgr Complex Driver Header Stub
* Project           : CBD
* Author            : Sankardu Varadapureddi
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : pznywf %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/11/15  1        SV        Initial Version                                                                 EA4#462                                                                 
**********************************************************************************************************************/
#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

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

extern uint16 MOTCTRLMGR_MotCtrlMotAgElec;
extern float32 MOTCTRLMGR_MotCtrlMotModlnIdx;
extern uint16 MOTCTRLMGR_MotCtrlMotPhaAdv;
extern uint16 MOTCTRLMGR_MotCtrlSwCalPosnIdx;
extern float32 MOTCTRLMGR_MotCtrlSwCalModlnIdx;

extern uint32 MOTCTRLMGR_MotCtrlCmuOffs;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiA;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiB;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiC;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiSumA;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiSumB;
extern uint32 MOTCTRLMGR_MotCtrlPhaOnTiSumC;
extern uint32 MOTCTRLMGR_MotCtrlPwmPerd;
extern boolean MOTCTRLMGR_MotCtrlSwCalEna;
extern float32 MOTCTRLMGR_MotCtrlVehSpd;
extern IvtrFetFltPha1 MOTCTRLMGR_MotCtrlIvtrFetFltPha;
extern IvtrFetFltTyp1 MOTCTRLMGR_MotCtrlIvtrFetFltTyp;
extern MfgEnaSt1 MOTCTRLMGR_MotCtrlMfgEnaSt;

#endif

