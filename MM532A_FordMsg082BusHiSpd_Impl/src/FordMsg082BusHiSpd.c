/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg082BusHiSpd.c
 *        Config:  C:/Component/MM532A_FordMsg082BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg082BusHiSpd
 *  Generated at:  Thu Jan  4 09:23:04 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg082BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordMsg082BusHiSpd.c
* Module Description: FordMsg082BusHiSpd - MM532A 
* Project           : CBD
* Author            : Tata Elxsi
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz4qtt %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/20/17   1       RMG(TATA) Initial version                                                              EA4#17271   								
* 01/04/18   2       Updated Ford_DrvSte_Tq_Actl to use correct Ford specific datatype                      EA4#18709
*----------------------------------------------------------------------------------------------------------------------
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_FordMsg082BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

 /* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
 /* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */ 

#define DRVRSTEERTQACTOFFS_HWNWTMTR_F32              (8.0F)
#define DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32     (0.0625F)
#define ELECPWRSTEERVLTGMAX_VOLT_F32                 (18.75F)
#define ELECPWRSTEERVLTGMIN_VOLT_F32                 (6.0F)
#define MAXLIM_CNT_U08                               (255U)
#define MINLIM_CNT_U08                               (0U)
#define STEERCOLTQOFFS_HWNWTMTR_F32                  (8.0F)
#define STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32         (0.0625F)
#define STEERMODLESTIMDCURRMAX_CNT_U16               (4095U)
#define STEERMODLESTIMDCURRMIN_CNT_U16               (0U)
#define STEERMODLESTIMDCURROFFS_AMPR_F32             (64.0F)
#define STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32    (0.05F)
#define STEERMODLMEASDVLTGOFFS_VOLT_F32              (6.0F)
#define STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32     (0.05F)

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
 * Ford_DrvSteActv_B_Stat: Boolean
 * Ford_SAPPAngleControlStat2: Boolean
 * Ford_SAPPAngleControlStat3: Boolean
 * Ford_SAPPAngleControlStat4: Boolean
 * Ford_SAPPAngleControlStat5: Boolean
 * Ford_SAPPAngleControlStat6: Boolean
 * Ford_TrlrHitchLamp_D_Rqst: Boolean
 * Ford_VehVTrlrAid_B_Rq: Boolean
 * Ford_Veh_V_RqMxTrlrAid: Integer in interval [0...255]
 *   Unit: [km/h], Factor: 0.1, Offset: 0
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_DrvSte_Tq_Actl: Enumeration of integer in interval [0...255] with enumerators
 *   CxFE_Unknown (254U)
 *   CxFF_Invalid (255U)
 *   Unit: [Nm], Factor: 0.0625, Offset: -8
 * Ford_EPAS_Failure: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_EPAS_OK_NO_MESSAGE (0U)
 *   Cx1_POWER_STRG_ASSIST_FAULT (1U)
 *   Cx2_SERVICE_POWER_STEERING (2U)
 *   Cx3_SERVICE_POWER_STEERING_NOW (3U)
 * Ford_SAPPAngleControlStat1: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Closed (0U)
 *   Cx1_Open (1U)
 *   Cx2_Active (2U)
 *   Cx3_Fault (3U)
 * Ford_SteMdule_D_Stat: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_EPAS_Initialization (0U)
 *   Cx1_Normal_Op_Limited_Assist (1U)
 *   Cx2_Normal_Op_Full_Assist (2U)
 *   Cx3_EPAS_Shutdown (3U)
 *   Cx4_System_Failure (4U)
 *   Cx5_EPAS_Failure2 (5U)
 *   Cx6_EPAS_Failure3 (6U)
 *   Cx7_NotUsed (7U)
 * Ford_SteMdule_I_Est: Enumeration of integer in interval [0...4095] with enumerators
 *   CxFFF_Invalid (4095U)
 *   Unit: [Amps], Factor: 0.05, Offset: -64
 * Ford_SteMdule_U_Meas: Enumeration of integer in interval [0...255] with enumerators
 *   CxFF_Invalid (255U)
 *   Unit: [Volts], Factor: 0.05, Offset: 6
 * Ford_SteeringColumnTorque: Enumeration of integer in interval [0...255] with enumerators
 *   CxFE_Unknown (254U)
 *   CxFF_Invalid (255U)
 *   Unit: [Nm], Factor: 0.0625, Offset: -8
 *
 *********************************************************************************************************************/


#define FordMsg082BusHiSpd_START_SEC_CODE
#include "FordMsg082BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg082BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg082BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg082BusHiSpd_CODE) FordMsg082BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg082BusHiSpdInit1
 *********************************************************************************************************************/
     
     /*** Do Nothing ***/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg082BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_ElecPwrSteerCurr_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ElecPwrSteerVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure(Ford_EPAS_Failure *data)
 *   Std_ReturnType Rte_Read_FordSteerModlSts_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat(Ford_DrvSteActv_B_Stat *data)
 *   Std_ReturnType Rte_Read_FordVehDrvrSteerTqReq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst(Ford_TrlrHitchLamp_D_Rqst *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1(Ford_SAPPAngleControlStat1 *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2(Ford_SAPPAngleControlStat2 *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3(Ford_SAPPAngleControlStat3 *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4(Ford_SAPPAngleControlStat4 *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5(Ford_SAPPAngleControlStat5 *data)
 *   Std_ReturnType Rte_Read_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6(Ford_SAPPAngleControlStat6 *data)
 *   Std_ReturnType Rte_Read_FordVehVelMaxReqTrlrAid_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq(Ford_VehVTrlrAid_B_Rq *data)
 *   Std_ReturnType Rte_Read_InpTqRaw_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat(Ford_DrvSteActv_B_Stat data)
 *   Std_ReturnType Rte_Write_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl(Ford_DrvSte_Tq_Actl data)
 *   Std_ReturnType Rte_Write_Ford_EPAS_Failure1_Ford_EPAS_Failure(Ford_EPAS_Failure data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1(Ford_SAPPAngleControlStat1 data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2(Ford_SAPPAngleControlStat2 data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3(Ford_SAPPAngleControlStat3 data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4(Ford_SAPPAngleControlStat4 data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5(Ford_SAPPAngleControlStat5 data)
 *   Std_ReturnType Rte_Write_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6(Ford_SAPPAngleControlStat6 data)
 *   Std_ReturnType Rte_Write_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data)
 *   Std_ReturnType Rte_Write_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est(Ford_SteMdule_I_Est data)
 *   Std_ReturnType Rte_Write_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas(Ford_SteMdule_U_Meas data)
 *   Std_ReturnType Rte_Write_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque(Ford_SteeringColumnTorque data)
 *   Std_ReturnType Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst(Ford_TrlrHitchLamp_D_Rqst data)
 *   Std_ReturnType Rte_Write_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq(Ford_VehVTrlrAid_B_Rq data)
 *   Std_ReturnType Rte_Write_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid(Ford_Veh_V_RqMxTrlrAid data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg082BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg082BusHiSpd_CODE) FordMsg082BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg082BusHiSpdPer1
 *********************************************************************************************************************/
    VAR(float32, AUTOMATIC) ElecPwrSteerCurr_Ampr_T_f32;
    VAR(float32, AUTOMATIC) ElecPwrSteerVltg_Volt_T_f32;
    VAR(float32, AUTOMATIC) FordVehDrvrSteerTqReq_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) InpTqRaw_HwNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) Ford_SteMdule_I_Est_Cnt_T_f32;
	VAR(float32, AUTOMATIC) Ford_DrvSte_Tq_Actl_Cnt_T_f32;
	VAR(float32, AUTOMATIC) Ford_SteeringColumnTorque_Cnt_T_f32;
	VAR(float32, AUTOMATIC) Ford_SteMdule_U_Meas_Cnt_T_f32;
	
	VAR(uint8, AUTOMATIC) FordVehVelMaxReqTrlrAid_Cnt_T_u08;
	VAR(Ford_SteeringColumnTorque, AUTOMATIC) Ford_SteeringColumnTorque_Cnt_T_enum;
	VAR(Ford_SteMdule_U_Meas, AUTOMATIC) Ford_SteMdule_U_Meas_Cnt_T_enum;
	VAR(Ford_DrvSte_Tq_Actl, AUTOMATIC) Ford_DrvSte_Tq_Actl_Cnt_T_enum;
	VAR(Ford_Veh_V_RqMxTrlrAid, AUTOMATIC) Ford_Veh_V_RqMxTrlrAid_Cnt_T_enum;
	
    VAR(Ford_EPAS_Failure, AUTOMATIC)          FordElecPwrAssidSteerFailr_Cnt_T_enum;
    VAR(Ford_SteMdule_D_Stat, AUTOMATIC)       FordSteerModlSts_Cnt_T_enum;
    VAR(Ford_DrvSteActv_B_Stat, AUTOMATIC)     FordVehDrvrSteerActvnSts_Cnt_T_enum;
    VAR(Ford_TrlrHitchLamp_D_Rqst, AUTOMATIC)  FordVehReCamrLiSts_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat1, AUTOMATIC) FordVehSAPPAgCtrlSts1_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat2, AUTOMATIC) FordVehSAPPAgCtrlSts2_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat3, AUTOMATIC) FordVehSAPPAgCtrlSts3_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat4, AUTOMATIC) FordVehSAPPAgCtrlSts4_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat5, AUTOMATIC) FordVehSAPPAgCtrlSts5_Cnt_T_enum;
    VAR(Ford_SAPPAngleControlStat6, AUTOMATIC) FordVehSAPPAgCtrlSts6_Cnt_T_enum;
    VAR(Ford_VehVTrlrAid_B_Rq, AUTOMATIC)      FordVehVelTrlrAidReq_Cnt_T_enum;
	
	VAR(uint16, AUTOMATIC) Ford_SteMdule_I_Est_Cnt_T_u16p0;
    VAR(Ford_SteMdule_I_Est, AUTOMATIC) Ford_SteMdule_I_Est_Cnt_T_enum;
   
   /*Reading inputs from RTE*/
    (void)Rte_Read_ElecPwrSteerCurr_Val(&ElecPwrSteerCurr_Ampr_T_f32);
    (void)Rte_Read_ElecPwrSteerVltg_Val(&ElecPwrSteerVltg_Volt_T_f32);
    (void)Rte_Read_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure(&FordElecPwrAssidSteerFailr_Cnt_T_enum);
    (void)Rte_Read_FordSteerModlSts_Ford_SteMdule_D_Stat(&FordSteerModlSts_Cnt_T_enum);
    (void)Rte_Read_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat(&FordVehDrvrSteerActvnSts_Cnt_T_enum);
    (void)Rte_Read_FordVehDrvrSteerTqReq_Val(&FordVehDrvrSteerTqReq_HwNwtMtr_T_f32);
    (void)Rte_Read_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst(&FordVehReCamrLiSts_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1(&FordVehSAPPAgCtrlSts1_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2(&FordVehSAPPAgCtrlSts2_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3(&FordVehSAPPAgCtrlSts3_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4(&FordVehSAPPAgCtrlSts4_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5(&FordVehSAPPAgCtrlSts5_Cnt_T_enum);
    (void)Rte_Read_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6(&FordVehSAPPAgCtrlSts6_Cnt_T_enum);
    (void)Rte_Read_FordVehVelMaxReqTrlrAid_Val(&FordVehVelMaxReqTrlrAid_Cnt_T_u08);
    (void)Rte_Read_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq(&FordVehVelTrlrAidReq_Cnt_T_enum);
    (void)Rte_Read_InpTqRaw_Val(&InpTqRaw_HwNwtMtr_T_f32);
   
   
   /** Start of Steer_Col_Tq **/
   Ford_SteeringColumnTorque_Cnt_T_f32 = ((InpTqRaw_HwNwtMtr_T_f32 + STEERCOLTQOFFS_HWNWTMTR_F32)/(STEERCOLTQSCAGFAC_HWNWTMTRPERCNT_F32));
   Ford_SteeringColumnTorque_Cnt_T_enum = (uint8) (Ford_SteeringColumnTorque_Cnt_T_f32);
   Ford_SteeringColumnTorque_Cnt_T_enum = Lim_u08 (Ford_SteeringColumnTorque_Cnt_T_enum, MINLIM_CNT_U08, MAXLIM_CNT_U08);
   /** End of Steer_Col_Tq **/
   
   /** Start of Steer_Modl_Curr_Estim **/
   Ford_SteMdule_I_Est_Cnt_T_f32 = ((ElecPwrSteerCurr_Ampr_T_f32 + STEERMODLESTIMDCURROFFS_AMPR_F32)/(STEERMODLESTIMDCURRSCAGFAC_AMPRPERCNT_F32));
   Ford_SteMdule_I_Est_Cnt_T_u16p0 = FloatToFixd_u16_f32(Ford_SteMdule_I_Est_Cnt_T_f32, NXTRFIXDPT_FLOATTOP0_ULS_F32 );
   Ford_SteMdule_I_Est_Cnt_T_enum = Lim_u16 (Ford_SteMdule_I_Est_Cnt_T_u16p0, STEERMODLESTIMDCURRMIN_CNT_U16, STEERMODLESTIMDCURRMAX_CNT_U16);
   /** End of Steer_Modl_Curr_Estim **/
   
   /** Start of Steer_Modl_Vltg_Measrmnt **/
   ElecPwrSteerVltg_Volt_T_f32 = Lim_f32(ElecPwrSteerVltg_Volt_T_f32, ELECPWRSTEERVLTGMIN_VOLT_F32, ELECPWRSTEERVLTGMAX_VOLT_F32); 
   Ford_SteMdule_U_Meas_Cnt_T_f32 = ((ElecPwrSteerVltg_Volt_T_f32 - (STEERMODLMEASDVLTGOFFS_VOLT_F32))/(STEERMODLMEASDVLTGSCAGFAC_VOLTPERCNT_F32));
   Ford_SteMdule_U_Meas_Cnt_T_enum = (uint8) Ford_SteMdule_U_Meas_Cnt_T_f32;
   Ford_SteMdule_U_Meas_Cnt_T_enum = Lim_u08(Ford_SteMdule_U_Meas_Cnt_T_enum, MINLIM_CNT_U08, MAXLIM_CNT_U08);
   /** End of Steer_Modl_Vltg_Measrmnt **/
   
   /** Start of  Drvr_Steer_Tq_Act **/
   Ford_DrvSte_Tq_Actl_Cnt_T_f32 = ((FordVehDrvrSteerTqReq_HwNwtMtr_T_f32 + DRVRSTEERTQACTOFFS_HWNWTMTR_F32)/(DRVRSTEERTQACTSCAGFAC_HWNWTMTRPERCNT_F32));
   Ford_DrvSte_Tq_Actl_Cnt_T_enum = (uint8)(Ford_DrvSte_Tq_Actl_Cnt_T_f32);
   Ford_DrvSte_Tq_Actl_Cnt_T_enum =  Lim_u08(Ford_DrvSte_Tq_Actl_Cnt_T_enum, MINLIM_CNT_U08, MAXLIM_CNT_U08);
   /** End of  Drvr_Steer_Tq_Act **/
   
    /** Start of  Veh_Vel_Req_Max_Trlr_Aid **/
	Ford_Veh_V_RqMxTrlrAid_Cnt_T_enum = Lim_u08(FordVehVelMaxReqTrlrAid_Cnt_T_u08,MINLIM_CNT_U08, MAXLIM_CNT_U08);
    /** End of  Veh_Vel_Req_Max_Trlr_Aid **/
	
	 /*Writing outputs to RTE*/
	(void)Rte_Write_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat(FordVehDrvrSteerActvnSts_Cnt_T_enum);
    (void)Rte_Write_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl(Ford_DrvSte_Tq_Actl_Cnt_T_enum);
    (void)Rte_Write_Ford_EPAS_Failure1_Ford_EPAS_Failure(FordElecPwrAssidSteerFailr_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1(FordVehSAPPAgCtrlSts1_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2(FordVehSAPPAgCtrlSts2_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3(FordVehSAPPAgCtrlSts3_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4(FordVehSAPPAgCtrlSts4_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5(FordVehSAPPAgCtrlSts5_Cnt_T_enum);
    (void)Rte_Write_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6(FordVehSAPPAgCtrlSts6_Cnt_T_enum);
    (void)Rte_Write_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat(FordSteerModlSts_Cnt_T_enum);
    (void)Rte_Write_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est(Ford_SteMdule_I_Est_Cnt_T_enum);
    (void)Rte_Write_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas(Ford_SteMdule_U_Meas_Cnt_T_enum);
    (void)Rte_Write_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque(Ford_SteeringColumnTorque_Cnt_T_enum);
    (void)Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst(FordVehReCamrLiSts_Cnt_T_enum);
    (void)Rte_Write_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq(FordVehVelTrlrAidReq_Cnt_T_enum);
    (void)Rte_Write_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid(Ford_Veh_V_RqMxTrlrAid_Cnt_T_enum);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg082BusHiSpd_STOP_SEC_CODE
#include "FordMsg082BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
