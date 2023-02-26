/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg3CABusHiSpd.c
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM073A_FordMsg3CABusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3CABusHiSpd
 *  Generated at:  Fri May  4 15:08:46 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg3CABusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordMsg3CABusHiSpd.c
* Module Description: FordMsg3CABusHiSpd.c - MM073A
* Project           : CBD
* Author            : Guru Seshadhri (TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz5334 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 04/19/18   1       GS(TATA)  Initial Version                                                               EA4#20124
* 05/04/18   2       SNH	   Changed input and output port data types to match with CF110A                 EA4#23316
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * NtcNr1
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NtcSts1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *
 * Component Types:
 * ================
 * FordMsg3CABusHiSpd
 *   The purpose of the Ford Message 3CA Bus Hish Speed function isto provide the Electric Power Steering system with signal values for Lane Detection Warning and Lane Keep Assist functions form CAN.The Ford Message 3CA function will perform the missing message and signal invalid diagnostics as well as provide a validity signal for the signal values and received message
 *
 *
 * Port Prototypes:
 * ================
 * ClrDiagcFlgProxy
 *   When ClrDiagcFlgProxy is True, Diagnostic test is performed
 *
 * FordCanDtcInhb
 *   This signal should be set to false in order to Test Diagnostic NTC,Customer datatype should be used. Data Type: Boolean with Min value "False"(0), Init value "True"(0) and Max value "True"(1)
 *
 * FordEpsLifeCycMod
 *   This signal is used to decide calibration value to FAIL the NTC
 *
 * FordLaneDetnWarnEnad
 *   This signal is set to 1 in order to set the missing NTC to pass or fail.Customer datatype should be used. Data Type: Boolean with Min value "False"(0), Init value "False"(0) and Max value "True"(1)
 *
 * FordLaneKeepAssiEnad
 *   This signal is set to 1 in order to set the missing NTC to pass or fail.Customer datatype should be used. Data Type: Boolean with Min value "False"(0), Init value "False"(0) and Max value "True"(1)
 *
 * FordVehLaneAssiImgProcgModlAVld
 *   This signal Check the validity of Ford Vehicle Turn Signal
 *
 * FordVehLaneDetnWarnInten
 *   Vehicle Lane Detection Warning Intensity is assigned to Ford Vehicle LaneDetection Warning Status
 *
 * FordVehLaneDetnWarnSts
 *   Vehicle Lane Detection Warning Status is assigned to Ford Vehicle Lane Detection warning Status
 *
 * FordVehLaneKeepSysCrvt
 *   Processed value of Lane Keep System Curvature to be used by Ford Vehicle System Curvature Quality
 *
 * FordVehLaneKeepSysCrvtRaw
 *   Lane Keep System Curvature is assigned to Ford Vehicle Lane Keep System Curevature Raw
 *
 * FordVehLaneKeepSysRampTyp
 *   Lane Keep System Ramp is assigned to Ford Vehicle Lane Keep System Ramp Type
 *
 * FordVehLaneKeepSysReqdAg
 *   Processed value of Lane Keep System Requested Angle to be used byFord Vehicle System Requested Angle Quality
 *
 * FordVehLaneKeepSysReqdAgRaw
 *   Lane Keep System Requested angle is assigned to Ford Vehicle Lane Keep Requested Angle Raw
 *
 * FordVehLaneKeepSysSts
 *   Lane Keep System Status is assigned to Ford Vehicle Lane Keep SystemStatus
 *
 * Ford_LaCurvature_No_Calc
 *   It is a message signal which is received from CAN bus which will be processed
 *
 * Ford_LaRampType_B_Req
 *   It is a message signal which is received from CAN bus which will be processed.Customer datatype should be used. Datatype: Ford_LaRampType_B_Req. Elements are: 0 - "Cx0_Smooth", 1 - "Cx1_Quick
 *
 * Ford_LaRefAng_No_Req
 *   It is a message signal which is received from CAN bus which will be processed
 *
 * Ford_LdwActvIntns_D_Req
 *   It is a message signal which is received from CAN bus which will be processed.Customer datatype should be used. Datatype: Ford_LdwActvIntns_D_Req. Elements are: 0 - "Cx0_None", 1 - "Cx1_Low", 2- "Cx2_Medium", 3 - "Cx3_High
 *
 * Ford_LdwActvStats_D_Req
 *   It is a message signal which is received from CAN bus which will be processed.Customer datatype should be used. Datatype: Ford_LdwActvStats_D_Req. Elements are: 0 - "Cx0_LDW_Idle", 1 - "Cx1_Not_Used1", 2- "Cx2_LDW_Warning_Left", 3 - "Cx3_LDW_Suppress_Left,"4 - "Cx4_LDW_Warning_Right",5 - "Cx5_LDW_Suppress_Right",6 - "Cx6_Not_Used2",7 - "Cx7_LDW_Suppress_Right_Left
 *
 * Ford_LkaActvStats_D2_Req
 *   It is a message signal which is received from CAN bus which will be processed.Customer datatype should be used. Datatype: Ford_LkaActvStats_D2_Req. Elements are: 0 - "Cx0_LkaNoInterv", 1 - "Cx1_LkaIncrIntervLeft", 2- "Cx2_LkaStandIntervLeft", 3 - "Cx3_LkaSupperLeft"4 - "Cx4_LkaStandIntervRight",5 - "Cx5_LkaSupperRight",6 - "Cx6_LkaIncrIntervRight",7 - "Cx7_NotUsed
 *
 * GetRefTmr100MicroSec32bit
 *   It captures simulation time fromthe SimnTi value obtained at root layer of model and gives the RefTmr
 *
 * GetTiSpan100MicroSec32bit
 *   It Captures simulation time fromSimnTi value, handles counter wrapping, and subtracts RefTmr,provides the TiSpan
 *
 * SetNtcSts
 *   Set the NTC status
 *
 *
 * Runnable Entities:
 * ==================
 * FordMsg3CABusHiSpdInit1
 *   Initialization Runnable
 *
 * FordMsg3CABusHiSpdPer1
 *   Periodic Runnable at 10 milli-seconds
 *
 *
 * Per-Instance Memory:
 * ====================
 * ClrDiagcFlgProxyPrev
 *   Clear Diagc Flag Proxy
 *
 * FirstTranVldFlg
 *   This flag is used to indicate the reception of first message
 *
 * FordVehLaneAssiImgProcgModlAVldPrev
 *   Holds previous value of FordVehLaneAssilmgProcgModlAVld when FOrdMsg3CA message is missing
 *
 * FordVehLaneDetnWarnIntenPrev
 *   Holds Previous value of FordVehLaneDetnWarnInten when FordMsg3CA message is missing
 *
 * FordVehLaneDetnWarnStsPrev
 *   Holds Previous value of FordVehLaneDetnWarnSts when FordMsg3Ca message is missing
 *
 * FordVehLaneKeepSysCrvtInvldFaildRefTi
 *   Timer for invalid message will increment or reset based on the conditions
 *
 * FordVehLaneKeepSysCrvtInvldPassdRefTi
 *   Timer for invalid message will increment or reset based on the conditions
 *
 * FordVehLaneKeepSysCrvtPrev
 *   Holds previous value of FordVehLaneKeepSysCrvt when FOrdMsg3CA message is missing
 *
 * FordVehLaneKeepSysCrvtRawPrev
 *   Holds previous value of FordVehLaneKeepSysCrvtRaw when FOrdMsg3CA message is missing
 *
 * FordVehLaneKeepSysRampTypPrev
 *   Holds previous value of FordVehLaneKeepSysRamp when FOrdMsg3CA message is missing
 *
 * FordVehLaneKeepSysReqdAgInvldPassdRefTi
 *   Timer for invalid message will increment or reset based on the conditions
 *
 * FordVehLaneKeepSysReqdAgPrev
 *   Holds previous value of FordVehLaneKeepSysReqdAg when FOrdMsg3CA message is missing
 *
 * FordVehLaneKeepSysReqdAgRawPrev
 *   Holds previous value of FordVehLaneKeepSysReqdAgRaw when FOrdMsg3CA message is missing
 *
 * FordVehLaneKeepSysStsPrev
 *   Holds previous value of FordVehLaneKeepSysSts when FOrdMsg3CA message is missing
 *
 * FordVehMsg3CAMiss
 *   Flag for missing message diagnostics, it is true when message is missing
 *
 * LaneAssiImgProcgModlAFaildCrvtTiThd
 *   Timer to update Ford Vehicle Lane Assist Image Processing Module A Valid signal as true or false based on calibration
 *
 * LaneAssiImgProcgModlAFaildReqdAgTiThd
 *   Timer to update Ford Vehicle Lane Assist Image Processing Module A Valid signal as true or false based on calibration
 *
 * LaneAssiImgProcgModlAVldMissRefTi
 *   Timer for valid message will increment or reset based on the conditions
 *
 * LaneAssiImgProcgModlAVldPassdRefTi
 *   Timer for valid message will increment or reset based on the conditions
 *
 * LaneKeepSysReqdAgInvldFaildRefTi
 *   Timer for invalid message will increment or reset based on the conditions
 *
 * MissMsgFaildRefTi
 *   Timer for missing message will increment or reset based on the conditions
 *
 * MissMsgPassdRefTi
 *   Timer for missing message will increment or reset based on the conditions
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg3CABusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrFixdPt.h"
 #include "NxtrMath.h"
 
 /******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read, Rte_Write and SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */

/********************************************* Embedded Local Constants **********************************************/
 #define BUSHISPDFIXDTITHD_MILLISEC_U16				    ((uint16)5000U)
 #define CNVMILLISECTOCNT_CNTPERMILLISEC_U16   			((uint16)10U)
 #define DEBSTEP_CNT_U16   								((uint16)65535U)
 #define FLT_CNT_U16   									((uint16)4094U)
 #define LANEKEEPSYSCRVTMAX_IVSMTR_F32   				(0.01023F)
 #define LANEKEEPSYSCRVTMIN_IVSMTR_F32   				(-0.01024F)
 #define LANEKEEPSYSCRVTRAWINITVAL_CNT_U16   			((uint16)2048U)
 #define LANEKEEPSYSCRVTRAWMAX_CNT_U16   				((uint16)4095U)
 #define LANEKEEPSYSCRVTRAWMIN_CNT_U16   				((uint16)0U)
 #define LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32   		(0.000005F)
 #define LANEKEEPSYSCRVTSOFFS_IVSMTR_F32   				(0.01024F)
 #define LANEKEEPSYSREQDAGMAX_MILLIRAD_F32   			(102.3F)
 #define LANEKEEPSYSREQDAGMIN_MILLIRAD_F32   			(-102.4F)
 #define LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32   			(102.4F)
 #define LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16   			((uint16)2048U)
 #define LANEKEEPSYSREQDAGRAWMAX_CNT_U16   				((uint16)4095U)
 #define LANEKEEPSYSREQDAGRAWMIN_CNT_U16   				((uint16)0U)
 #define LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32   	(0.05F)
 #define MODSEL_CNT_U08   								((uint8)1U)

/******************************************** Local Function Prototypes **********************************************/

 static FUNC(void, FordMsg3CABusHiSpd_CODE) DiagEna(VAR(boolean, AUTOMATIC) FordLaneDetnWarnEnad_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl,
													VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
													VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) MissMsgDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) ClrDiagcFlgProxyDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldDiagEna_Cnt_T_logl);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) CalSeln(VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                    P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdMissTiThd_MilliSec_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) MissMsgDiagEnaChk(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
                                                              VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_MilliSec_T_u16);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) FordVehPrpnWhlTqSigInvldNtc(VAR(uint16, AUTOMATIC) BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16,
                                                                        VAR(boolean, AUTOMATIC) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
																		VAR(uint16, AUTOMATIC) BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
																		VAR(boolean, AUTOMATIC) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) OutpProcg(VAR(Ford_LaCurvature_No_Calc, AUTOMATIC) Ford_LaCurvature_No_Calc_Cnt_T_enum,
                                                      VAR(Ford_LaRampType_B_Req, AUTOMATIC) Ford_LaRampType_B_Req_Cnt_T_enum,
													  VAR(Ford_LaRefAng_No_Req, AUTOMATIC) Ford_LaRefAng_No_Req_Cnt_T_enum,
													  VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC) Ford_LdwActvIntns_D_Req_Cnt_T_enum,
													  VAR(Ford_LdwActvStats_D_Req, AUTOMATIC) Ford_LdwActvStats_D_Req_Cnt_T_enum,
													  VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC) Ford_LkaActvStats_D2_Req_Cnt_T_enum,
													  P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
													  P2VAR(float32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysCrvt_IvsMtr_T_f32,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysRampTyp_Cnt_T_u08,
													  P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
													  P2VAR(float32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysReqdAg_MilliRad_T_f32,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneDetnWarnInten_Cnt_T_u08,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneDetnWarnSts_Cnt_T_u08,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysSts_Cnt_T_u08,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) VldProcg(VAR(uint16, AUTOMATIC) FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
                                                     VAR(uint16, AUTOMATIC) FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysVldInp_Cnt_T_logl);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) VldElpdTi_Cnt_T_logl,
                                                      P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldCrvtElpdTi_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldReqdAgElpdTi_Cnt_T_logl);

 static FUNC(void, FordMsg3CABusHiSpd_CODE) ChkElpdTi(VAR(boolean, AUTOMATIC) VldElpdTi_Cnt_T_logl,
                                                      VAR(boolean, AUTOMATIC) InvldCrvtElpdTi_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) InvldReqdAgElpdTi_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysVldInp_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * Ford_LaRampType_B_Req: Boolean
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_LaCurvature_No_Calc: Enumeration of integer in interval [0...4095] with enumerators
 *   CxFFF_Fault (4095U)
 *   Unit: [1/m], Factor: 5e-006, Offset: -0.01024
 * Ford_LaRefAng_No_Req: Enumeration of integer in interval [0...4095] with enumerators
 *   CxFFF_Fault (4095U)
 *   Unit: [mrad], Factor: 0.05, Offset: -102.4
 * Ford_LdwActvIntns_D_Req: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_None (0U)
 *   Cx1_Low (1U)
 *   Cx2_Medium (2U)
 *   Cx3_High (3U)
 * Ford_LdwActvStats_D_Req: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_LDW_Idle (0U)
 *   Cx1_Not_Used1 (1U)
 *   Cx2_LDW_Warning_Left (2U)
 *   Cx3_LDW_Suppress_Left (3U)
 *   Cx4_LDW_Warning_Right (4U)
 *   Cx5_LDW_Suppress_Right (5U)
 *   Cx6_Not_Used2 (6U)
 *   Cx7_LDW_Suppress_Right_Left (7U)
 * Ford_LkaActvStats_D2_Req: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_LkaNoInterv (0U)
 *   Cx1_LkaIncrIntervLeft (1U)
 *   Cx2_LkaStandIntervLeft (2U)
 *   Cx3_LkaSupprLeft (3U)
 *   Cx4_LkaStandIntervRight (4U)
 *   Cx5_LkaSupprRight (5U)
 *   Cx6_LkaIncrIntervRight (6U)
 *   Cx7_NotUsed (7U)
 * NtcNr1: Enumeration of integer in interval [0...65535] with enumerators
 *   NTCNR_0X001 (1U)
 *   NTCNR_0X002 (2U)
 *   NTCNR_0X003 (3U)
 *   NTCNR_0X004 (4U)
 *   NTCNR_0X005 (5U)
 *   NTCNR_0X006 (6U)
 *   NTCNR_0X007 (7U)
 *   NTCNR_0X008 (8U)
 *   NTCNR_0X009 (9U)
 *   NTCNR_0X00A (10U)
 *   NTCNR_0X00B (11U)
 *   NTCNR_0X00C (12U)
 *   NTCNR_0X00D (13U)
 *   NTCNR_0X00E (14U)
 *   NTCNR_0X00F (15U)
 *   NTCNR_0X010 (16U)
 *   NTCNR_0X011 (17U)
 *   NTCNR_0X012 (18U)
 *   NTCNR_0X013 (19U)
 *   NTCNR_0X014 (20U)
 *   NTCNR_0X015 (21U)
 *   NTCNR_0X016 (22U)
 *   NTCNR_0X017 (23U)
 *   NTCNR_0X018 (24U)
 *   NTCNR_0X019 (25U)
 *   NTCNR_0X01A (26U)
 *   NTCNR_0X01B (27U)
 *   NTCNR_0X01C (28U)
 *   NTCNR_0X01D (29U)
 *   NTCNR_0X01E (30U)
 *   NTCNR_0X01F (31U)
 *   NTCNR_0X020 (32U)
 *   NTCNR_0X021 (33U)
 *   NTCNR_0X022 (34U)
 *   NTCNR_0X023 (35U)
 *   NTCNR_0X024 (36U)
 *   NTCNR_0X025 (37U)
 *   NTCNR_0X026 (38U)
 *   NTCNR_0X027 (39U)
 *   NTCNR_0X028 (40U)
 *   NTCNR_0X029 (41U)
 *   NTCNR_0X02A (42U)
 *   NTCNR_0X02B (43U)
 *   NTCNR_0X02C (44U)
 *   NTCNR_0X02D (45U)
 *   NTCNR_0X02E (46U)
 *   NTCNR_0X02F (47U)
 *   NTCNR_0X030 (48U)
 *   NTCNR_0X031 (49U)
 *   NTCNR_0X032 (50U)
 *   NTCNR_0X033 (51U)
 *   NTCNR_0X034 (52U)
 *   NTCNR_0X035 (53U)
 *   NTCNR_0X036 (54U)
 *   NTCNR_0X037 (55U)
 *   NTCNR_0X038 (56U)
 *   NTCNR_0X039 (57U)
 *   NTCNR_0X03A (58U)
 *   NTCNR_0X03B (59U)
 *   NTCNR_0X03C (60U)
 *   NTCNR_0X03D (61U)
 *   NTCNR_0X03E (62U)
 *   NTCNR_0X03F (63U)
 *   NTCNR_0X040 (64U)
 *   NTCNR_0X041 (65U)
 *   NTCNR_0X042 (66U)
 *   NTCNR_0X043 (67U)
 *   NTCNR_0X044 (68U)
 *   NTCNR_0X045 (69U)
 *   NTCNR_0X046 (70U)
 *   NTCNR_0X047 (71U)
 *   NTCNR_0X048 (72U)
 *   NTCNR_0X049 (73U)
 *   NTCNR_0X04A (74U)
 *   NTCNR_0X04B (75U)
 *   NTCNR_0X04C (76U)
 *   NTCNR_0X04D (77U)
 *   NTCNR_0X04E (78U)
 *   NTCNR_0X04F (79U)
 *   NTCNR_0X050 (80U)
 *   NTCNR_0X051 (81U)
 *   NTCNR_0X052 (82U)
 *   NTCNR_0X053 (83U)
 *   NTCNR_0X054 (84U)
 *   NTCNR_0X055 (85U)
 *   NTCNR_0X056 (86U)
 *   NTCNR_0X057 (87U)
 *   NTCNR_0X058 (88U)
 *   NTCNR_0X059 (89U)
 *   NTCNR_0X05A (90U)
 *   NTCNR_0X05B (91U)
 *   NTCNR_0X05C (92U)
 *   NTCNR_0X05D (93U)
 *   NTCNR_0X05E (94U)
 *   NTCNR_0X05F (95U)
 *   NTCNR_0X060 (96U)
 *   NTCNR_0X061 (97U)
 *   NTCNR_0X062 (98U)
 *   NTCNR_0X063 (99U)
 *   NTCNR_0X064 (100U)
 *   NTCNR_0X065 (101U)
 *   NTCNR_0X066 (102U)
 *   NTCNR_0X067 (103U)
 *   NTCNR_0X068 (104U)
 *   NTCNR_0X069 (105U)
 *   NTCNR_0X06A (106U)
 *   NTCNR_0X06B (107U)
 *   NTCNR_0X06C (108U)
 *   NTCNR_0X06D (109U)
 *   NTCNR_0X06E (110U)
 *   NTCNR_0X06F (111U)
 *   NTCNR_0X070 (112U)
 *   NTCNR_0X071 (113U)
 *   NTCNR_0X072 (114U)
 *   NTCNR_0X073 (115U)
 *   NTCNR_0X074 (116U)
 *   NTCNR_0X075 (117U)
 *   NTCNR_0X076 (118U)
 *   NTCNR_0X077 (119U)
 *   NTCNR_0X078 (120U)
 *   NTCNR_0X079 (121U)
 *   NTCNR_0X07A (122U)
 *   NTCNR_0X07B (123U)
 *   NTCNR_0X07C (124U)
 *   NTCNR_0X07D (125U)
 *   NTCNR_0X07E (126U)
 *   NTCNR_0X07F (127U)
 *   NTCNR_0X080 (128U)
 *   NTCNR_0X081 (129U)
 *   NTCNR_0X082 (130U)
 *   NTCNR_0X083 (131U)
 *   NTCNR_0X084 (132U)
 *   NTCNR_0X085 (133U)
 *   NTCNR_0X086 (134U)
 *   NTCNR_0X087 (135U)
 *   NTCNR_0X088 (136U)
 *   NTCNR_0X089 (137U)
 *   NTCNR_0X08A (138U)
 *   NTCNR_0X08B (139U)
 *   NTCNR_0X08C (140U)
 *   NTCNR_0X08D (141U)
 *   NTCNR_0X08E (142U)
 *   NTCNR_0X08F (143U)
 *   NTCNR_0X090 (144U)
 *   NTCNR_0X091 (145U)
 *   NTCNR_0X092 (146U)
 *   NTCNR_0X093 (147U)
 *   NTCNR_0X094 (148U)
 *   NTCNR_0X095 (149U)
 *   NTCNR_0X096 (150U)
 *   NTCNR_0X097 (151U)
 *   NTCNR_0X098 (152U)
 *   NTCNR_0X099 (153U)
 *   NTCNR_0X09A (154U)
 *   NTCNR_0X09B (155U)
 *   NTCNR_0X09C (156U)
 *   NTCNR_0X09D (157U)
 *   NTCNR_0X09E (158U)
 *   NTCNR_0X09F (159U)
 *   NTCNR_0X0A0 (160U)
 *   NTCNR_0X0A1 (161U)
 *   NTCNR_0X0A2 (162U)
 *   NTCNR_0X0A3 (163U)
 *   NTCNR_0X0A4 (164U)
 *   NTCNR_0X0A5 (165U)
 *   NTCNR_0X0A6 (166U)
 *   NTCNR_0X0A7 (167U)
 *   NTCNR_0X0A8 (168U)
 *   NTCNR_0X0A9 (169U)
 *   NTCNR_0X0AA (170U)
 *   NTCNR_0X0AB (171U)
 *   NTCNR_0X0AC (172U)
 *   NTCNR_0X0AD (173U)
 *   NTCNR_0X0AE (174U)
 *   NTCNR_0X0AF (175U)
 *   NTCNR_0X0B0 (176U)
 *   NTCNR_0X0B1 (177U)
 *   NTCNR_0X0B2 (178U)
 *   NTCNR_0X0B3 (179U)
 *   NTCNR_0X0B4 (180U)
 *   NTCNR_0X0B5 (181U)
 *   NTCNR_0X0B6 (182U)
 *   NTCNR_0X0B7 (183U)
 *   NTCNR_0X0B8 (184U)
 *   NTCNR_0X0B9 (185U)
 *   NTCNR_0X0BA (186U)
 *   NTCNR_0X0BB (187U)
 *   NTCNR_0X0BC (188U)
 *   NTCNR_0X0BD (189U)
 *   NTCNR_0X0BE (190U)
 *   NTCNR_0X0BF (191U)
 *   NTCNR_0X0C0 (192U)
 *   NTCNR_0X0C1 (193U)
 *   NTCNR_0X0C2 (194U)
 *   NTCNR_0X0C3 (195U)
 *   NTCNR_0X0C4 (196U)
 *   NTCNR_0X0C5 (197U)
 *   NTCNR_0X0C6 (198U)
 *   NTCNR_0X0C7 (199U)
 *   NTCNR_0X0C8 (200U)
 *   NTCNR_0X0C9 (201U)
 *   NTCNR_0X0CA (202U)
 *   NTCNR_0X0CB (203U)
 *   NTCNR_0X0CC (204U)
 *   NTCNR_0X0CD (205U)
 *   NTCNR_0X0CE (206U)
 *   NTCNR_0X0CF (207U)
 *   NTCNR_0X0D0 (208U)
 *   NTCNR_0X0D1 (209U)
 *   NTCNR_0X0D2 (210U)
 *   NTCNR_0X0D3 (211U)
 *   NTCNR_0X0D4 (212U)
 *   NTCNR_0X0D5 (213U)
 *   NTCNR_0X0D6 (214U)
 *   NTCNR_0X0D7 (215U)
 *   NTCNR_0X0D8 (216U)
 *   NTCNR_0X0D9 (217U)
 *   NTCNR_0X0DA (218U)
 *   NTCNR_0X0DB (219U)
 *   NTCNR_0X0DC (220U)
 *   NTCNR_0X0DD (221U)
 *   NTCNR_0X0DE (222U)
 *   NTCNR_0X0DF (223U)
 *   NTCNR_0X0E0 (224U)
 *   NTCNR_0X0E1 (225U)
 *   NTCNR_0X0E2 (226U)
 *   NTCNR_0X0E3 (227U)
 *   NTCNR_0X0E4 (228U)
 *   NTCNR_0X0E5 (229U)
 *   NTCNR_0X0E6 (230U)
 *   NTCNR_0X0E7 (231U)
 *   NTCNR_0X0E8 (232U)
 *   NTCNR_0X0E9 (233U)
 *   NTCNR_0X0EA (234U)
 *   NTCNR_0X0EB (235U)
 *   NTCNR_0X0EC (236U)
 *   NTCNR_0X0ED (237U)
 *   NTCNR_0X0EE (238U)
 *   NTCNR_0X0EF (239U)
 *   NTCNR_0X0F0 (240U)
 *   NTCNR_0X0F1 (241U)
 *   NTCNR_0X0F2 (242U)
 *   NTCNR_0X0F3 (243U)
 *   NTCNR_0X0F4 (244U)
 *   NTCNR_0X0F5 (245U)
 *   NTCNR_0X0F6 (246U)
 *   NTCNR_0X0F7 (247U)
 *   NTCNR_0X0F8 (248U)
 *   NTCNR_0X0F9 (249U)
 *   NTCNR_0X0FA (250U)
 *   NTCNR_0X0FB (251U)
 *   NTCNR_0X0FC (252U)
 *   NTCNR_0X0FD (253U)
 *   NTCNR_0X0FE (254U)
 *   NTCNR_0X0FF (255U)
 *   NTCNR_0X100 (256U)
 *   NTCNR_0X101 (257U)
 *   NTCNR_0X102 (258U)
 *   NTCNR_0X103 (259U)
 *   NTCNR_0X104 (260U)
 *   NTCNR_0X105 (261U)
 *   NTCNR_0X106 (262U)
 *   NTCNR_0X107 (263U)
 *   NTCNR_0X108 (264U)
 *   NTCNR_0X109 (265U)
 *   NTCNR_0X10A (266U)
 *   NTCNR_0X10B (267U)
 *   NTCNR_0X10C (268U)
 *   NTCNR_0X10D (269U)
 *   NTCNR_0X10E (270U)
 *   NTCNR_0X10F (271U)
 *   NTCNR_0X110 (272U)
 *   NTCNR_0X111 (273U)
 *   NTCNR_0X112 (274U)
 *   NTCNR_0X113 (275U)
 *   NTCNR_0X114 (276U)
 *   NTCNR_0X115 (277U)
 *   NTCNR_0X116 (278U)
 *   NTCNR_0X117 (279U)
 *   NTCNR_0X118 (280U)
 *   NTCNR_0X119 (281U)
 *   NTCNR_0X11A (282U)
 *   NTCNR_0X11B (283U)
 *   NTCNR_0X11C (284U)
 *   NTCNR_0X11D (285U)
 *   NTCNR_0X11E (286U)
 *   NTCNR_0X11F (287U)
 *   NTCNR_0X120 (288U)
 *   NTCNR_0X121 (289U)
 *   NTCNR_0X122 (290U)
 *   NTCNR_0X123 (291U)
 *   NTCNR_0X124 (292U)
 *   NTCNR_0X125 (293U)
 *   NTCNR_0X126 (294U)
 *   NTCNR_0X127 (295U)
 *   NTCNR_0X128 (296U)
 *   NTCNR_0X129 (297U)
 *   NTCNR_0X12A (298U)
 *   NTCNR_0X12B (299U)
 *   NTCNR_0X12C (300U)
 *   NTCNR_0X12D (301U)
 *   NTCNR_0X12E (302U)
 *   NTCNR_0X12F (303U)
 *   NTCNR_0X130 (304U)
 *   NTCNR_0X131 (305U)
 *   NTCNR_0X132 (306U)
 *   NTCNR_0X133 (307U)
 *   NTCNR_0X134 (308U)
 *   NTCNR_0X135 (309U)
 *   NTCNR_0X136 (310U)
 *   NTCNR_0X137 (311U)
 *   NTCNR_0X138 (312U)
 *   NTCNR_0X139 (313U)
 *   NTCNR_0X13A (314U)
 *   NTCNR_0X13B (315U)
 *   NTCNR_0X13C (316U)
 *   NTCNR_0X13D (317U)
 *   NTCNR_0X13E (318U)
 *   NTCNR_0X13F (319U)
 *   NTCNR_0X140 (320U)
 *   NTCNR_0X141 (321U)
 *   NTCNR_0X142 (322U)
 *   NTCNR_0X143 (323U)
 *   NTCNR_0X144 (324U)
 *   NTCNR_0X145 (325U)
 *   NTCNR_0X146 (326U)
 *   NTCNR_0X147 (327U)
 *   NTCNR_0X148 (328U)
 *   NTCNR_0X149 (329U)
 *   NTCNR_0X14A (330U)
 *   NTCNR_0X14B (331U)
 *   NTCNR_0X14C (332U)
 *   NTCNR_0X14D (333U)
 *   NTCNR_0X14E (334U)
 *   NTCNR_0X14F (335U)
 *   NTCNR_0X150 (336U)
 *   NTCNR_0X151 (337U)
 *   NTCNR_0X152 (338U)
 *   NTCNR_0X153 (339U)
 *   NTCNR_0X154 (340U)
 *   NTCNR_0X155 (341U)
 *   NTCNR_0X156 (342U)
 *   NTCNR_0X157 (343U)
 *   NTCNR_0X158 (344U)
 *   NTCNR_0X159 (345U)
 *   NTCNR_0X15A (346U)
 *   NTCNR_0X15B (347U)
 *   NTCNR_0X15C (348U)
 *   NTCNR_0X15D (349U)
 *   NTCNR_0X15E (350U)
 *   NTCNR_0X15F (351U)
 *   NTCNR_0X160 (352U)
 *   NTCNR_0X161 (353U)
 *   NTCNR_0X162 (354U)
 *   NTCNR_0X163 (355U)
 *   NTCNR_0X164 (356U)
 *   NTCNR_0X165 (357U)
 *   NTCNR_0X166 (358U)
 *   NTCNR_0X167 (359U)
 *   NTCNR_0X168 (360U)
 *   NTCNR_0X169 (361U)
 *   NTCNR_0X16A (362U)
 *   NTCNR_0X16B (363U)
 *   NTCNR_0X16C (364U)
 *   NTCNR_0X16D (365U)
 *   NTCNR_0X16E (366U)
 *   NTCNR_0X16F (367U)
 *   NTCNR_0X170 (368U)
 *   NTCNR_0X171 (369U)
 *   NTCNR_0X172 (370U)
 *   NTCNR_0X173 (371U)
 *   NTCNR_0X174 (372U)
 *   NTCNR_0X175 (373U)
 *   NTCNR_0X176 (374U)
 *   NTCNR_0X177 (375U)
 *   NTCNR_0X178 (376U)
 *   NTCNR_0X179 (377U)
 *   NTCNR_0X17A (378U)
 *   NTCNR_0X17B (379U)
 *   NTCNR_0X17C (380U)
 *   NTCNR_0X17D (381U)
 *   NTCNR_0X17E (382U)
 *   NTCNR_0X17F (383U)
 *   NTCNR_0X180 (384U)
 *   NTCNR_0X181 (385U)
 *   NTCNR_0X182 (386U)
 *   NTCNR_0X183 (387U)
 *   NTCNR_0X184 (388U)
 *   NTCNR_0X185 (389U)
 *   NTCNR_0X186 (390U)
 *   NTCNR_0X187 (391U)
 *   NTCNR_0X188 (392U)
 *   NTCNR_0X189 (393U)
 *   NTCNR_0X18A (394U)
 *   NTCNR_0X18B (395U)
 *   NTCNR_0X18C (396U)
 *   NTCNR_0X18D (397U)
 *   NTCNR_0X18E (398U)
 *   NTCNR_0X18F (399U)
 *   NTCNR_0X190 (400U)
 *   NTCNR_0X191 (401U)
 *   NTCNR_0X192 (402U)
 *   NTCNR_0X193 (403U)
 *   NTCNR_0X194 (404U)
 *   NTCNR_0X195 (405U)
 *   NTCNR_0X196 (406U)
 *   NTCNR_0X197 (407U)
 *   NTCNR_0X198 (408U)
 *   NTCNR_0X199 (409U)
 *   NTCNR_0X19A (410U)
 *   NTCNR_0X19B (411U)
 *   NTCNR_0X19C (412U)
 *   NTCNR_0X19D (413U)
 *   NTCNR_0X19E (414U)
 *   NTCNR_0X19F (415U)
 *   NTCNR_0X1A0 (416U)
 *   NTCNR_0X1A1 (417U)
 *   NTCNR_0X1A2 (418U)
 *   NTCNR_0X1A3 (419U)
 *   NTCNR_0X1A4 (420U)
 *   NTCNR_0X1A5 (421U)
 *   NTCNR_0X1A6 (422U)
 *   NTCNR_0X1A7 (423U)
 *   NTCNR_0X1A8 (424U)
 *   NTCNR_0X1A9 (425U)
 *   NTCNR_0X1AA (426U)
 *   NTCNR_0X1AB (427U)
 *   NTCNR_0X1AC (428U)
 *   NTCNR_0X1AD (429U)
 *   NTCNR_0X1AE (430U)
 *   NTCNR_0X1AF (431U)
 *   NTCNR_0X1B0 (432U)
 *   NTCNR_0X1B1 (433U)
 *   NTCNR_0X1B2 (434U)
 *   NTCNR_0X1B3 (435U)
 *   NTCNR_0X1B4 (436U)
 *   NTCNR_0X1B5 (437U)
 *   NTCNR_0X1B6 (438U)
 *   NTCNR_0X1B7 (439U)
 *   NTCNR_0X1B8 (440U)
 *   NTCNR_0X1B9 (441U)
 *   NTCNR_0X1BA (442U)
 *   NTCNR_0X1BB (443U)
 *   NTCNR_0X1BC (444U)
 *   NTCNR_0X1BD (445U)
 *   NTCNR_0X1BE (446U)
 *   NTCNR_0X1BF (447U)
 *   NTCNR_0X1C0 (448U)
 *   NTCNR_0X1C1 (449U)
 *   NTCNR_0X1C2 (450U)
 *   NTCNR_0X1C3 (451U)
 *   NTCNR_0X1C4 (452U)
 *   NTCNR_0X1C5 (453U)
 *   NTCNR_0X1C6 (454U)
 *   NTCNR_0X1C7 (455U)
 *   NTCNR_0X1C8 (456U)
 *   NTCNR_0X1C9 (457U)
 *   NTCNR_0X1CA (458U)
 *   NTCNR_0X1CB (459U)
 *   NTCNR_0X1CC (460U)
 *   NTCNR_0X1CD (461U)
 *   NTCNR_0X1CE (462U)
 *   NTCNR_0X1CF (463U)
 *   NTCNR_0X1D0 (464U)
 *   NTCNR_0X1D1 (465U)
 *   NTCNR_0X1D2 (466U)
 *   NTCNR_0X1D3 (467U)
 *   NTCNR_0X1D4 (468U)
 *   NTCNR_0X1D5 (469U)
 *   NTCNR_0X1D6 (470U)
 *   NTCNR_0X1D7 (471U)
 *   NTCNR_0X1D8 (472U)
 *   NTCNR_0X1D9 (473U)
 *   NTCNR_0X1DA (474U)
 *   NTCNR_0X1DB (475U)
 *   NTCNR_0X1DC (476U)
 *   NTCNR_0X1DD (477U)
 *   NTCNR_0X1DE (478U)
 *   NTCNR_0X1DF (479U)
 *   NTCNR_0X1E0 (480U)
 *   NTCNR_0X1E1 (481U)
 *   NTCNR_0X1E2 (482U)
 *   NTCNR_0X1E3 (483U)
 *   NTCNR_0X1E4 (484U)
 *   NTCNR_0X1E5 (485U)
 *   NTCNR_0X1E6 (486U)
 *   NTCNR_0X1E7 (487U)
 *   NTCNR_0X1E8 (488U)
 *   NTCNR_0X1E9 (489U)
 *   NTCNR_0X1EA (490U)
 *   NTCNR_0X1EB (491U)
 *   NTCNR_0X1EC (492U)
 *   NTCNR_0X1ED (493U)
 *   NTCNR_0X1EE (494U)
 *   NTCNR_0X1EF (495U)
 *   NTCNR_0X1F0 (496U)
 *   NTCNR_0X1F1 (497U)
 *   NTCNR_0X1F2 (498U)
 *   NTCNR_0X1F3 (499U)
 *   NTCNR_0X1F4 (500U)
 *   NTCNR_0X1F5 (501U)
 *   NTCNR_0X1F6 (502U)
 *   NTCNR_0X1F7 (503U)
 *   NTCNR_0X1F8 (504U)
 *   NTCNR_0X1F9 (505U)
 *   NTCNR_0X1FA (506U)
 *   NTCNR_0X1FB (507U)
 *   NTCNR_0X1FC (508U)
 *   NTCNR_0X1FD (509U)
 *   NTCNR_0X1FE (510U)
 *   NTCNR_0X1FF (511U)
 * NtcSts1: Enumeration of integer in interval [0...255] with enumerators
 *   NTCSTS_PASSD (0U)
 *   NTCSTS_FAILD (1U)
 *   NTCSTS_PREPASSD (2U)
 *   NTCSTS_PREFAILD (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_FordVehLaneKeepSysCrvtPrev(void)
 *   float32 *Rte_Pim_FordVehLaneKeepSysReqdAgPrev(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi(void)
 *   uint32 *Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLaneKeepSysCrvtRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneDetnWarnIntenPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneDetnWarnStsPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneKeepSysRampTypPrev(void)
 *   uint8 *Rte_Pim_FordVehLaneKeepSysStsPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   boolean *Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3CAMiss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg3CABusHiSpd_START_SEC_CODE
#include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CABusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CABusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CABusHiSpdInit1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32;
 
	*Rte_Pim_FirstTranVldFlg() = TRUE;
	*Rte_Pim_FordVehLaneKeepSysCrvtRawPrev() = LANEKEEPSYSCRVTRAWINITVAL_CNT_U16;
	*Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev() = LANEKEEPSYSREQDAGRAWINITVAL_CNT_U16;
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3CABusHiSpdPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDetnWarnEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc(Ford_LaCurvature_No_Calc *data)
 *   Std_ReturnType Rte_Read_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req(Ford_LaRampType_B_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req(Ford_LaRefAng_No_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req(Ford_LdwActvIntns_D_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req(Ford_LdwActvStats_D_Req *data)
 *   Std_ReturnType Rte_Read_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req(Ford_LkaActvStats_D2_Req *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLaneAssiImgProcgModlAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLaneDetnWarnInten_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneDetnWarnSts_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysCrvt_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysCrvtRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysRampTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysReqdAg_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysReqdAgRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLaneKeepSysSts_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CABusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3CABusHiSpd_CODE) FordMsg3CABusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3CABusHiSpdPer1
 *********************************************************************************************************************/
	VAR(uint8, AUTOMATIC) 	ClrDiagcFlgProxy_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) 	FordEpsLifeCycMod_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLaneDetnWarnInten_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLaneDetnWarnSts_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) 	FordVehLaneKeepSysRampTyp_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordVehLaneKeepSysSts_Cnt_T_u08;
	
	VAR(uint16, AUTOMATIC) 	FordVehLaneKeepSysCrvtRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) 	FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC) 	BusHiSpdMissTiThd_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) 	BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16;
	VAR(uint16, AUTOMATIC) 	BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16;
 
	VAR(uint32, AUTOMATIC) 	TiSpan_Cnt_T_u32;
	VAR(uint32, AUTOMATIC) 	GetRefTmr_Cnt_T_u32;

	VAR(float32, AUTOMATIC) FordVehLaneKeepSysReqdAg_MilliRad_T_f32;
	VAR(float32, AUTOMATIC) FordVehLaneKeepSysCrvt_IvsMtr_T_f32;

	VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneDetnWarnEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) InvldDiagEna_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LaneKeepSysCrvtRawVldInp_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl;

	VAR(Ford_LaCurvature_No_Calc, AUTOMATIC) Ford_LaCurvature_No_Calc_Cnt_T_enum;
	VAR(Ford_LaRefAng_No_Req, AUTOMATIC) 	 Ford_LaRefAng_No_Req_Cnt_T_enum;
	VAR(Ford_LaRampType_B_Req, AUTOMATIC)    Ford_LaRampType_B_Req_Cnt_T_enum;
	VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC)  Ford_LdwActvIntns_D_Req_Cnt_T_enum;
	VAR(Ford_LdwActvStats_D_Req, AUTOMATIC)  Ford_LdwActvStats_D_Req_Cnt_T_enum;
	VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC) Ford_LkaActvStats_D2_Req_Cnt_T_enum;

	/* Reading inputs from RTE */
	(void) Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
	(void) Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
	(void) Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
	(void) Rte_Read_FordLaneDetnWarnEnad_Logl(&FordLaneDetnWarnEnad_Cnt_T_logl);
	(void) Rte_Read_FordLaneKeepAssiEnad_Logl(&FordLaneKeepAssiEnad_Cnt_T_logl);
	(void) Rte_Read_Ford_LaCurvature_No_Calc_Ford_LaCurvature_No_Calc(&Ford_LaCurvature_No_Calc_Cnt_T_enum);
	(void) Rte_Read_Ford_LaRampType_B_Req_Ford_LaRampType_B_Req(&Ford_LaRampType_B_Req_Cnt_T_enum);
	(void) Rte_Read_Ford_LaRefAng_No_Req_Ford_LaRefAng_No_Req(&Ford_LaRefAng_No_Req_Cnt_T_enum);
	(void) Rte_Read_Ford_LdwActvIntns_D_Req_Ford_LdwActvIntns_D_Req(&Ford_LdwActvIntns_D_Req_Cnt_T_enum);
	(void) Rte_Read_Ford_LdwActvStats_D_Req_Ford_LdwActvStats_D_Req(&Ford_LdwActvStats_D_Req_Cnt_T_enum);
	(void) Rte_Read_Ford_LkaActvStats_D2_Req_Ford_LkaActvStats_D2_Req(&Ford_LkaActvStats_D2_Req_Cnt_T_enum);
 
	/* Start of DiagEna */
	DiagEna(FordLaneDetnWarnEnad_Cnt_T_logl,
			FordLaneKeepAssiEnad_Cnt_T_logl,
			ClrDiagcFlgProxy_Cnt_T_u08,
			FordCanDtcInhb_Cnt_T_logl,
			&MissMsgDiagEna_Cnt_T_logl,
			&ClrDiagcFlgProxyDiagEna_Cnt_T_logl,
			&InvldDiagEna_Cnt_T_logl);
	/* End of DiagEna */
 
	/* Start of CalSeln */
	CalSeln(FordEpsLifeCycMod_Cnt_T_u08,
			&BusHiSpdMissTiThd_MilliSec_T_u16,
			&BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
			&BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16);
	/* End of CalSeln */
 
	if(TRUE == *Rte_Pim_FordVehMsg3CAMiss())
	{
		/* Start of MsgMiss */	 	 
		MissMsgDiagEnaChk(MissMsgDiagEna_Cnt_T_logl,
                       BusHiSpdMissTiThd_MilliSec_T_u16);

		/* Start of ClrDiagcFlgProxyDiagEnaChk */
		if(TRUE == ClrDiagcFlgProxyDiagEna_Cnt_T_logl)
		{
			/* TmrRst */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
		}
		else
		{
			/* Do Nothing */
		}
		/* End of ClrDiagcFlgProxyDiagEnaChk */
	 
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAVldMissTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			/* SetFalse */
			FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* PrevValue */
			FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = *Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev();
		}
	 
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14B, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
	 
	 	FordVehLaneKeepSysCrvtRaw_Cnt_T_u16 = *Rte_Pim_FordVehLaneKeepSysCrvtRawPrev();
		FordVehLaneKeepSysCrvt_IvsMtr_T_f32 = *Rte_Pim_FordVehLaneKeepSysCrvtPrev();
		FordVehLaneKeepSysRampTyp_Cnt_T_u08 = *Rte_Pim_FordVehLaneKeepSysRampTypPrev();
		FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16 = *Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev();
		FordVehLaneKeepSysReqdAg_MilliRad_T_f32 = *Rte_Pim_FordVehLaneKeepSysReqdAgPrev();
		FordVehLaneDetnWarnInten_Cnt_T_u08 = *Rte_Pim_FordVehLaneDetnWarnIntenPrev();
		FordVehLaneDetnWarnSts_Cnt_T_u08 = *Rte_Pim_FordVehLaneDetnWarnStsPrev();
		FordVehLaneKeepSysSts_Cnt_T_u08 = *Rte_Pim_FordVehLaneKeepSysStsPrev();
		
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
		/* End of MsgMiss */
	}
	else
	{
		/* Start of MsgPrsnt */	 
		OutpProcg(Ford_LaCurvature_No_Calc_Cnt_T_enum,
				Ford_LaRampType_B_Req_Cnt_T_enum,
				Ford_LaRefAng_No_Req_Cnt_T_enum,
				Ford_LdwActvIntns_D_Req_Cnt_T_enum,
				Ford_LdwActvStats_D_Req_Cnt_T_enum,
				Ford_LkaActvStats_D2_Req_Cnt_T_enum,
				&FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
				&FordVehLaneKeepSysCrvt_IvsMtr_T_f32,
				&FordVehLaneKeepSysRampTyp_Cnt_T_u08,
				&FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
				&FordVehLaneKeepSysReqdAg_MilliRad_T_f32,
				&FordVehLaneDetnWarnInten_Cnt_T_u08,
				&FordVehLaneDetnWarnSts_Cnt_T_u08,
				&FordVehLaneKeepSysSts_Cnt_T_u08,
				&FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl,
				&LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
				&LaneKeepSysReqdAgRawVldInp_Cnt_T_logl);
	 
		if(TRUE == MissMsgDiagEna_Cnt_T_logl)
		{
			/* MissMsgNtcPass */
			(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
			if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdMissMsgPassdTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				/* SetNtcSts */
				(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14A, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			}
			else
			{
				/* Do Nothing */
			}
		}
		else
		{
			/* MissNtcPassTmrRst */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14A, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
	 
		if(TRUE == InvldDiagEna_Cnt_T_logl)
		{
			/* Start of FordVehPrpnWhlTqSigInvldNtc */
			FordVehPrpnWhlTqSigInvldNtc(BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16,
										LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
										BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
										LaneKeepSysReqdAgRawVldInp_Cnt_T_logl);
			/* End of FordVehPrpnWhlTqSigInvldNtc */
		}
		else
		{
			/* InvldNtcPassTmrRst */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
			*Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
		 
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14B, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
	 
		if(TRUE == ClrDiagcFlgProxyDiagEna_Cnt_T_logl)
		{
			/* TmrRst */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
			*Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi() = GetRefTmr_Cnt_T_u32;
			*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
		}
		else
		{
			/* Do Nothing */
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_LaneAssiImgProcgModlAVldMissRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;
		/* End of MsgPrsnt */
	}
 
	/* Range limiting the Output signals */
	FordVehLaneKeepSysCrvtRaw_Cnt_T_u16 = Lim_u16(FordVehLaneKeepSysCrvtRaw_Cnt_T_u16, LANEKEEPSYSCRVTRAWMIN_CNT_U16, LANEKEEPSYSCRVTRAWMAX_CNT_U16);
	FordVehLaneKeepSysCrvt_IvsMtr_T_f32 = Lim_f32(FordVehLaneKeepSysCrvt_IvsMtr_T_f32, LANEKEEPSYSCRVTMIN_IVSMTR_F32, LANEKEEPSYSCRVTMAX_IVSMTR_F32);
	FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16 = Lim_u16(FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16, LANEKEEPSYSREQDAGRAWMIN_CNT_U16, LANEKEEPSYSREQDAGRAWMAX_CNT_U16);
	FordVehLaneKeepSysReqdAg_MilliRad_T_f32 = Lim_f32(FordVehLaneKeepSysReqdAg_MilliRad_T_f32, LANEKEEPSYSREQDAGMIN_MILLIRAD_F32, LANEKEEPSYSREQDAGMAX_MILLIRAD_F32);
 
	*Rte_Pim_FordVehLaneKeepSysCrvtRawPrev() = FordVehLaneKeepSysCrvtRaw_Cnt_T_u16;
	*Rte_Pim_FordVehLaneKeepSysCrvtPrev() = FordVehLaneKeepSysCrvt_IvsMtr_T_f32;
	*Rte_Pim_FordVehLaneKeepSysRampTypPrev() = FordVehLaneKeepSysRampTyp_Cnt_T_u08;
	*Rte_Pim_FordVehLaneKeepSysReqdAgRawPrev() = FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16;
	*Rte_Pim_FordVehLaneKeepSysReqdAgPrev() = FordVehLaneKeepSysReqdAg_MilliRad_T_f32;
	*Rte_Pim_FordVehLaneDetnWarnIntenPrev() = FordVehLaneDetnWarnInten_Cnt_T_u08;
	*Rte_Pim_FordVehLaneDetnWarnStsPrev() = FordVehLaneDetnWarnSts_Cnt_T_u08;
	*Rte_Pim_FordVehLaneKeepSysStsPrev() = FordVehLaneKeepSysSts_Cnt_T_u08;
	*Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev() = FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl;

	/* Writing outputs to RTE */
	(void) Rte_Write_FordVehLaneAssiImgProcgModlAVld_Logl(FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl);
	(void) Rte_Write_FordVehLaneDetnWarnInten_Val(FordVehLaneDetnWarnInten_Cnt_T_u08);
	(void) Rte_Write_FordVehLaneDetnWarnSts_Val(FordVehLaneDetnWarnSts_Cnt_T_u08);
	(void) Rte_Write_FordVehLaneKeepSysCrvt_Val(FordVehLaneKeepSysCrvt_IvsMtr_T_f32);
	(void) Rte_Write_FordVehLaneKeepSysCrvtRaw_Val(FordVehLaneKeepSysCrvtRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLaneKeepSysRampTyp_Val(FordVehLaneKeepSysRampTyp_Cnt_T_u08);
	(void) Rte_Write_FordVehLaneKeepSysReqdAg_Val(FordVehLaneKeepSysReqdAg_MilliRad_T_f32);
	(void) Rte_Write_FordVehLaneKeepSysReqdAgRaw_Val(FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLaneKeepSysSts_Val(FordVehLaneKeepSysSts_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg3CABusHiSpd_STOP_SEC_CODE
#include "FordMsg3CABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
  * Name            : DiagEna
  * Description     : Implementation of DiagEna subsystem in the model.
  * Inputs          : FordLaneDetnWarnEnad_Cnt_T_logl,
  *					  FordLaneKeepAssiEnad_Cnt_T_logl,
  *                   ClrDiagcFlgProxy_Cnt_T_u08,
  *                   FordCanDtcInhb_Cnt_T_logl.              
  * Outputs         : *MissMsgDiagEna_Cnt_T_logl,
  *					  *ClrDiagcFlgProxyDiagEna_Cnt_T_logl,
  *                   *InvldDiagEna_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) DiagEna(VAR(boolean, AUTOMATIC) FordLaneDetnWarnEnad_Cnt_T_logl,
                                                    VAR(boolean, AUTOMATIC) FordLaneKeepAssiEnad_Cnt_T_logl,
													VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
													VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) MissMsgDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) ClrDiagcFlgProxyDiagEna_Cnt_T_logl,
													P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldDiagEna_Cnt_T_logl)
{
	/* Start of DiagEna */
	if(((TRUE == FordLaneKeepAssiEnad_Cnt_T_logl) ||
	    (TRUE == FordLaneDetnWarnEnad_Cnt_T_logl)) &&
		(FALSE == FordCanDtcInhb_Cnt_T_logl))
	{
		*MissMsgDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*MissMsgDiagEna_Cnt_T_logl = FALSE;
	}

	if(ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
	{
		*ClrDiagcFlgProxyDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*ClrDiagcFlgProxyDiagEna_Cnt_T_logl = FALSE;
	}
	*Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;

	if((FALSE == FordCanDtcInhb_Cnt_T_logl) &&
	    (TRUE == FordLaneKeepAssiEnad_Cnt_T_logl))
	{
		*InvldDiagEna_Cnt_T_logl = TRUE;
	}
	else
	{
		*InvldDiagEna_Cnt_T_logl = FALSE;
	}
	/* End of DiagEna */
}

/*****************************************************************************
  * Name            : CalSeln
  * Description     : Implementation of CalSeln subsystem in the model.
  * Inputs          : FordEpsLifeCycMod_Cnt_T_u08.                  
  * Outputs         : *BusHiSpdMissTiThd_MilliSec_T_u16,
  *					  *BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
  *                   *BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) CalSeln(VAR(uint8, AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                    P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdMissTiThd_MilliSec_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
													P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16)
{
	/* Start of CalSeln */
	if(MODSEL_CNT_U08 == FordEpsLifeCycMod_Cnt_T_u08)
	{
		/* FixdTi */
		*BusHiSpdMissTiThd_MilliSec_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
		*BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
	}
	else
	{
		/* CalTi */
		*BusHiSpdMissTiThd_MilliSec_T_u16 = Rte_Prm_FordMsg3CABusHiSpdMissMsgFaildTiThd_Val();
		*BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16 = Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldFaildTiThd_Val();
		*BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16 = Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldFaildTiThd_Val();
	}
	/* End of CalSeln */
}

/*****************************************************************************
  * Name            : MissMsgDiagEnaChk
  * Description     : Implementation of MissMsgNtcFail, MissNtcPassTmrRst
  *                   subsystems in the model.
  * Inputs          : MissMsgDiagEna_Cnt_T_logl,
  *                   BusHiSpdMissTiThd_MilliSec_T_u16.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) MissMsgDiagEnaChk(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
                                                              VAR(uint16, AUTOMATIC) BusHiSpdMissTiThd_MilliSec_T_u16)
{
	/* Start of MissMsgDiagEnaChk */
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;

	if(TRUE == MissMsgDiagEna_Cnt_T_logl)
	{
		/* MissMsgNtcFail */
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdMissTiThd_MilliSec_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14A, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
	}
	else
	{
		/* MissNtcPassTmrRst */
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14A, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	}
	/* End of MissMsgDiagEnaChk */
}

/*****************************************************************************
  * Name            : FordVehPrpnWhlTqSigInvldNtc
  * Description     : Implementation of FordVehPrpnWhlTqSigInvldNtc subsystem in the model.
  * Inputs          : BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16,
  *                   LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
  *                   BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
  *                   LaneKeepSysReqdAgRawVldInp_Cnt_T_logl.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) FordVehPrpnWhlTqSigInvldNtc(VAR(uint16, AUTOMATIC) BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16,
                                                                        VAR(boolean, AUTOMATIC) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
																		VAR(uint16, AUTOMATIC) BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16,
																		VAR(boolean, AUTOMATIC) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl)
{
	/* Start of FordVehPrpnWhlTqSigInvldNtc */
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;

	if(TRUE == LaneKeepSysCrvtRawVldInp_Cnt_T_logl)
	{
		/* NTCPASS */
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysCrvtInvldPassdTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi());
	}
	else
	{
		/* NTCFAIL */
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLaneKeepSysCrvtInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLaneKeepSysCrvInvldTiThd_MilliSec_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14C, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLaneKeepSysCrvtInvldPassdRefTi());
	}

	if(TRUE == LaneKeepSysReqdAgRawVldInp_Cnt_T_logl)
	{
		/* NTCPASS1 */
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneKeepSysReqdAgInvldPassdTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14B, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi());
	}
	else
	{
		/* NTCFAIL1 */
		(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneKeepSysReqdAgInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdLaneKeepSysReqdAgInvldTiThd_MilliSec_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X14B, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
		}
		else
		{
			/* Do Nothing */
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehLaneKeepSysReqdAgInvldPassdRefTi());
	}
	/* End of FordVehPrpnWhlTqSigInvldNtc */
}

/*****************************************************************************
  * Name            : OutpProcg
  * Description     : Implementation of OutputProcg subsystem in the model.
  * Inputs          : Ford_LaCurvature_No_Calc_Cnt_T_enum,
  *					  Ford_LaRampType_B_Req_Cnt_T_enum,
  *                   Ford_LaRefAng_No_Req_Cnt_T_enum,
  *                   Ford_LdwActvIntns_D_Req_Cnt_T_enum,
  *                   Ford_LdwActvStats_D_Req_Cnt_T_enum,
  *					  Ford_LkaActvStats_D2_Req_Cnt_T_enum.
  * Outputs         : *FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
  *                   *FordVehLaneKeepSysCrvt_IvsMtr_T_f32,
  *                   *FordVehLaneKeepSysRampTyp_Cnt_T_u08,
  *                   *FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
  *                   *FordVehLaneKeepSysReqdAg_MilliRad_T_f32,
  *                   *FordVehLaneDetnWarnInten_Cnt_T_u08,
  *                   *FordVehLaneDetnWarnSts_Cnt_T_u08,
  *                   *FordVehLaneKeepSysSts_Cnt_T_u08,
  *                   *FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl,
  *                   *LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
  *                   *LaneKeepSysReqdAgRawVldInp_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) OutpProcg(VAR(Ford_LaCurvature_No_Calc, AUTOMATIC) Ford_LaCurvature_No_Calc_Cnt_T_enum,
                                                      VAR(Ford_LaRampType_B_Req, AUTOMATIC) Ford_LaRampType_B_Req_Cnt_T_enum,
													  VAR(Ford_LaRefAng_No_Req, AUTOMATIC) Ford_LaRefAng_No_Req_Cnt_T_enum,
													  VAR(Ford_LdwActvIntns_D_Req, AUTOMATIC) Ford_LdwActvIntns_D_Req_Cnt_T_enum,
													  VAR(Ford_LdwActvStats_D_Req, AUTOMATIC) Ford_LdwActvStats_D_Req_Cnt_T_enum,
													  VAR(Ford_LkaActvStats_D2_Req, AUTOMATIC) Ford_LkaActvStats_D2_Req_Cnt_T_enum,
													  P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
													  P2VAR(float32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysCrvt_IvsMtr_T_f32,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysRampTyp_Cnt_T_u08,
													  P2VAR(uint16, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
													  P2VAR(float32, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysReqdAg_MilliRad_T_f32,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneDetnWarnInten_Cnt_T_u08,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneDetnWarnSts_Cnt_T_u08,
													  P2VAR(uint8, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneKeepSysSts_Cnt_T_u08,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl)
{
		/* Start of OutpProcg */
		VAR(boolean, AUTOMATIC) LaneKeepSysVldInp_Cnt_T_logl;
		VAR(boolean, AUTOMATIC) VldElpdTi_Cnt_T_logl;
		VAR(boolean, AUTOMATIC) InvldCrvtElpdTi_Cnt_T_logl;
		VAR(boolean, AUTOMATIC) InvldReqdAgElpdTi_Cnt_T_logl;
	 
		/* LaneKeepSysRampTypProcg */
		*FordVehLaneKeepSysRampTyp_Cnt_T_u08 = (uint8)Ford_LaRampType_B_Req_Cnt_T_enum;
	 
		/* LaneDetnWarnIntenProcg */
		*FordVehLaneDetnWarnInten_Cnt_T_u08 = (uint8)Ford_LdwActvIntns_D_Req_Cnt_T_enum;
	 
		/* LaneDetnWarnStsProcg */
		*FordVehLaneDetnWarnSts_Cnt_T_u08 = (uint8)Ford_LdwActvStats_D_Req_Cnt_T_enum;
	 
		/* LaneKeepSysStsProcg */
		*FordVehLaneKeepSysSts_Cnt_T_u08 = (uint8)Ford_LkaActvStats_D2_Req_Cnt_T_enum;
	 
		/* LaneKeepSysCrvtProcg */
		*FordVehLaneKeepSysCrvtRaw_Cnt_T_u16 = (uint16)Ford_LaCurvature_No_Calc_Cnt_T_enum;
		*FordVehLaneKeepSysCrvt_IvsMtr_T_f32 = ((FixdToFloat_f32_u16(Ford_LaCurvature_No_Calc_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * 
	                                           LANEKEEPSYSCRVTSCAGFAC_IVSMTRPERCNT_F32) - LANEKEEPSYSCRVTSOFFS_IVSMTR_F32);
	 
		/* LaneKeepSysReqdAgProcg */
		*FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16 = (uint16)Ford_LaRefAng_No_Req_Cnt_T_enum;
		*FordVehLaneKeepSysReqdAg_MilliRad_T_f32 = ((FixdToFloat_f32_u16(Ford_LaRefAng_No_Req_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32) * 
	                                               LANEKEEPSYSREQDAGSCAGFAC_MILLIRADPERCNT_F32) - LANEKEEPSYSREQDAGOFFS_MILLIRAD_F32);
												  
		/* Start of VldProcg */
		VldProcg(*FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
				*FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
				LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
				LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
				&LaneKeepSysVldInp_Cnt_T_logl);
		/* End of VldProcg */
		
		/* Start of VldElpdTi */
		VldElpdTi(&VldElpdTi_Cnt_T_logl,
                  &InvldCrvtElpdTi_Cnt_T_logl,
		    	  &InvldReqdAgElpdTi_Cnt_T_logl);
		/* End of VldElpdTi */
	 
		if(TRUE == *Rte_Pim_FirstTranVldFlg())
		{
			/* First Tran */
			*Rte_Pim_FirstTranVldFlg() = FALSE;
			*FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = LaneKeepSysVldInp_Cnt_T_logl;
		}
		else
		{		 
			/* ChkElpdTi */
			ChkElpdTi(VldElpdTi_Cnt_T_logl,
					InvldCrvtElpdTi_Cnt_T_logl,
					InvldReqdAgElpdTi_Cnt_T_logl,
					LaneKeepSysVldInp_Cnt_T_logl,
					*LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
					*LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
					FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl);	 
		}
		/* End of OutpProcg */
}
 
/*****************************************************************************
  * Name            : VldProcg
  * Description     : Implementation of VldProcg subsystem in the model.
  * Inputs          : FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
  *					  FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16.
  * Outputs         : *LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
  *                   *LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
  *                   *LaneKeepSysVldInp_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) VldProcg(VAR(uint16, AUTOMATIC) FordVehLaneKeepSysCrvtRaw_Cnt_T_u16,
                                                     VAR(uint16, AUTOMATIC) FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
													 P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR)LaneKeepSysVldInp_Cnt_T_logl)
{
	/* Start of VldProcg */
	if(FordVehLaneKeepSysCrvtRaw_Cnt_T_u16 <= FLT_CNT_U16)
	{
		*LaneKeepSysCrvtRawVldInp_Cnt_T_logl = TRUE;
	}
	else
	{
		*LaneKeepSysCrvtRawVldInp_Cnt_T_logl = FALSE;
	}
	 
	if(FLT_CNT_U16 <= FordVehLaneKeepSysReqdAgRaw_Cnt_T_u16)
	{
		*LaneKeepSysReqdAgRawVldInp_Cnt_T_logl = TRUE;
	}
	else
	{
		*LaneKeepSysReqdAgRawVldInp_Cnt_T_logl = FALSE;
	}
	 
	if((TRUE == *LaneKeepSysCrvtRawVldInp_Cnt_T_logl) &&
		(TRUE == *LaneKeepSysReqdAgRawVldInp_Cnt_T_logl))
	{
		*LaneKeepSysVldInp_Cnt_T_logl = TRUE;
	}
	else
	{
		*LaneKeepSysVldInp_Cnt_T_logl = FALSE;
	}
	/* End of VldProcg */
}
 
/*****************************************************************************
  * Name            : VldElpdTi
  * Description     : Implementation of VldElpdTi subsystem in the model.
  * Inputs          : NA.
  * Outputs         : *VldElpdTi_Cnt_T_logl,
  *					  *InvldCrvtElpdTi_Cnt_T_logl,
  *                   *InvldReqdAgElpdTi_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) VldElpdTi(P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) VldElpdTi_Cnt_T_logl,
                                                      P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldCrvtElpdTi_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) InvldReqdAgElpdTi_Cnt_T_logl)
{
	/* Start of VldElpdTi */
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	 
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAPassdTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*VldElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*VldElpdTi_Cnt_T_logl = FALSE;
	}
	 
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildCrvtTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*InvldCrvtElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*InvldCrvtElpdTi_Cnt_T_logl = FALSE;
	}
	 
	(void) Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd(),&TiSpan_Cnt_T_u32);
	if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3CABusHiSpdLaneAssiImgProcgModlAFaildReqdAgTiThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
	{
		*InvldReqdAgElpdTi_Cnt_T_logl = TRUE;
	}
	else
	{
		*InvldReqdAgElpdTi_Cnt_T_logl = FALSE;
	}	 
	/* End of VldElpdTi */
}
/*****************************************************************************
  * Name            : ChkElpdTi
  * Description     : Implementation of ChkElpdTi subsystem in the model.
  * Inputs          : VldElpdTi_Cnt_T_logl,
  *					  InvldCrvtElpdTi_Cnt_T_logl,
  *                   InvldReqdAgElpdTi_Cnt_T_logl,
  *                   LaneKeepSysVldInp_Cnt_T_logl,
  *                   LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
  *					  LaneKeepSysReqdAgRawVldInp_Cnt_T_logl.
  * Outputs         : *FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
static FUNC(void, FordMsg3CABusHiSpd_CODE) ChkElpdTi(VAR(boolean, AUTOMATIC) VldElpdTi_Cnt_T_logl,
                                                      VAR(boolean, AUTOMATIC) InvldCrvtElpdTi_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) InvldReqdAgElpdTi_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysVldInp_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysCrvtRawVldInp_Cnt_T_logl,
													  VAR(boolean, AUTOMATIC) LaneKeepSysReqdAgRawVldInp_Cnt_T_logl,
													  P2VAR(boolean, AUTOMATIC, RTE_FORDMSG3CABUSHISPD_APPL_VAR) FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl)
{
	/* Start of ChkElpdTi */
	VAR(boolean, AUTOMATIC) CrvtRawInvld_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) ReqdAgInvld_Cnt_T_logl;
	VAR(uint32, AUTOMATIC)  GetRefTmr_Cnt_T_u32;
	 
	if(TRUE == LaneKeepSysVldInp_Cnt_T_logl)
	{
		/* Vld */
		if(TRUE == VldElpdTi_Cnt_T_logl)
		{
			/* SetFordVehLaneAssiImgProcgModlAVldTrue */
			*FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = TRUE;
		}
		else
		{
			/* PreviousValue */
			*FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = *Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd() = GetRefTmr_Cnt_T_u32;
	}
	else
	{
		/* Invld */
		if(TRUE == LaneKeepSysCrvtRawVldInp_Cnt_T_logl)
		{
			/* SetCrvtRawInvldFalse */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LaneAssiImgProcgModlAFaildCrvtTiThd());
			CrvtRawInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* CrvtRawInvld */
			CrvtRawInvld_Cnt_T_logl = InvldCrvtElpdTi_Cnt_T_logl;
		}
		 
		if(TRUE == LaneKeepSysReqdAgRawVldInp_Cnt_T_logl)
		{
			/* SetReqdAgInvldFalse */
			(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LaneAssiImgProcgModlAFaildReqdAgTiThd());
			ReqdAgInvld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* ReqdAgInvld */
			ReqdAgInvld_Cnt_T_logl = InvldReqdAgElpdTi_Cnt_T_logl;
		}
		 
		if((TRUE == CrvtRawInvld_Cnt_T_logl) ||
		    (TRUE == ReqdAgInvld_Cnt_T_logl))
		{
			/* SetFordVehLaneAssiImgProcgModlAVldFalse */
			*FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = FALSE;
		}
		else
		{
			/* PreviousValue */
			*FordVehLaneAssiImgProcgModlAVld_Cnt_T_logl = *Rte_Pim_FordVehLaneAssiImgProcgModlAVldPrev();
		}
		(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_LaneAssiImgProcgModlAVldPassdRefTi());
	}
	/* End of ChkElpdTi */
}
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
