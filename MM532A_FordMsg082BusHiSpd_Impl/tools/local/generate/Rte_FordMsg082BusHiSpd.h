/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_FordMsg082BusHiSpd.h
 *        Config:  C:/Component/MM532A_FordMsg082BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg082BusHiSpd
 *  Generated at:  Thu Jan  4 09:23:04 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg082BusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG082BUSHISPD_H
# define _RTE_FORDMSG082BUSHISPD_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_FordMsg082BusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg082BusHiSpd
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg082BusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg082BusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg082BusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ElecPwrSteerCurr_Val (140.75F)
# define Rte_InitValue_ElecPwrSteerVltg_Val (18.75F)
# define Rte_InitValue_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure (0U)
# define Rte_InitValue_FordSteerModlSts_Ford_SteMdule_D_Stat (0U)
# define Rte_InitValue_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat (FALSE)
# define Rte_InitValue_FordVehDrvrSteerTqReq_Val (0.0F)
# define Rte_InitValue_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst (FALSE)
# define Rte_InitValue_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1 (0U)
# define Rte_InitValue_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2 (FALSE)
# define Rte_InitValue_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3 (FALSE)
# define Rte_InitValue_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4 (FALSE)
# define Rte_InitValue_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5 (FALSE)
# define Rte_InitValue_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6 (FALSE)
# define Rte_InitValue_FordVehVelMaxReqTrlrAid_Val (255U)
# define Rte_InitValue_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq (FALSE)
# define Rte_InitValue_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat (FALSE)
# define Rte_InitValue_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl (0U)
# define Rte_InitValue_Ford_EPAS_Failure1_Ford_EPAS_Failure (0U)
# define Rte_InitValue_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1 (0U)
# define Rte_InitValue_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2 (FALSE)
# define Rte_InitValue_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3 (FALSE)
# define Rte_InitValue_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4 (FALSE)
# define Rte_InitValue_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5 (FALSE)
# define Rte_InitValue_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6 (FALSE)
# define Rte_InitValue_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat (0U)
# define Rte_InitValue_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est (4095U)
# define Rte_InitValue_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas (255U)
# define Rte_InitValue_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque (255U)
# define Rte_InitValue_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst (FALSE)
# define Rte_InitValue_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq (FALSE)
# define Rte_InitValue_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid (255U)
# define Rte_InitValue_InpTqRaw_Val (7.875F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_ElecPwrSteerCurr_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_ElecPwrSteerVltg_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure(P2VAR(Ford_EPAS_Failure, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordSteerModlSts_Ford_SteMdule_D_Stat(P2VAR(Ford_SteMdule_D_Stat, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat(P2VAR(Ford_DrvSteActv_B_Stat, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehDrvrSteerTqReq_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst(P2VAR(Ford_TrlrHitchLamp_D_Rqst, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1(P2VAR(Ford_SAPPAngleControlStat1, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2(P2VAR(Ford_SAPPAngleControlStat2, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3(P2VAR(Ford_SAPPAngleControlStat3, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4(P2VAR(Ford_SAPPAngleControlStat4, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5(P2VAR(Ford_SAPPAngleControlStat5, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6(P2VAR(Ford_SAPPAngleControlStat6, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehVelMaxReqTrlrAid_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq(P2VAR(Ford_VehVTrlrAid_B_Rq, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg082BusHiSpd_InpTqRaw_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG082BUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat(Ford_DrvSteActv_B_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl(Ford_DrvSte_Tq_Actl data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_EPAS_Failure1_Ford_EPAS_Failure(Ford_EPAS_Failure data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1(Ford_SAPPAngleControlStat1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2(Ford_SAPPAngleControlStat2 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3(Ford_SAPPAngleControlStat3 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4(Ford_SAPPAngleControlStat4 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5(Ford_SAPPAngleControlStat5 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6(Ford_SAPPAngleControlStat6 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat(Ford_SteMdule_D_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est(Ford_SteMdule_I_Est data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas(Ford_SteMdule_U_Meas data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque(Ford_SteeringColumnTorque data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst(Ford_TrlrHitchLamp_D_Rqst data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq(Ford_VehVTrlrAid_B_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg082BusHiSpd_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid(Ford_Veh_V_RqMxTrlrAid data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ElecPwrSteerCurr_Val Rte_Read_FordMsg082BusHiSpd_ElecPwrSteerCurr_Val
# define Rte_Read_ElecPwrSteerVltg_Val Rte_Read_FordMsg082BusHiSpd_ElecPwrSteerVltg_Val
# define Rte_Read_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure Rte_Read_FordMsg082BusHiSpd_FordElecPwrAssidSteerFailr_Ford_EPAS_Failure
# define Rte_Read_FordSteerModlSts_Ford_SteMdule_D_Stat Rte_Read_FordMsg082BusHiSpd_FordSteerModlSts_Ford_SteMdule_D_Stat
# define Rte_Read_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat Rte_Read_FordMsg082BusHiSpd_FordVehDrvrSteerActvnSts_Ford_DrvSteActv_B_Stat
# define Rte_Read_FordVehDrvrSteerTqReq_Val Rte_Read_FordMsg082BusHiSpd_FordVehDrvrSteerTqReq_Val
# define Rte_Read_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst Rte_Read_FordMsg082BusHiSpd_FordVehReCamrLiSts_Ford_TrlrHitchLamp_D_Rqst
# define Rte_Read_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts1_Ford_SAPPAngleControlStat1
# define Rte_Read_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts2_Ford_SAPPAngleControlStat2
# define Rte_Read_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts3_Ford_SAPPAngleControlStat3
# define Rte_Read_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts4_Ford_SAPPAngleControlStat4
# define Rte_Read_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts5_Ford_SAPPAngleControlStat5
# define Rte_Read_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6 Rte_Read_FordMsg082BusHiSpd_FordVehSAPPAgCtrlSts6_Ford_SAPPAngleControlStat6
# define Rte_Read_FordVehVelMaxReqTrlrAid_Val Rte_Read_FordMsg082BusHiSpd_FordVehVelMaxReqTrlrAid_Val
# define Rte_Read_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq Rte_Read_FordMsg082BusHiSpd_FordVehVelTrlrAidReq_Ford_VehVTrlrAid_B_Rq
# define Rte_Read_InpTqRaw_Val Rte_Read_FordMsg082BusHiSpd_InpTqRaw_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat Rte_Write_FordMsg082BusHiSpd_Ford_DrvSteActv_B_Stat1_Ford_DrvSteActv_B_Stat
# define Rte_Write_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl Rte_Write_FordMsg082BusHiSpd_Ford_DrvSte_Tq_Actl_Ford_DrvSte_Tq_Actl
# define Rte_Write_Ford_EPAS_Failure1_Ford_EPAS_Failure Rte_Write_FordMsg082BusHiSpd_Ford_EPAS_Failure1_Ford_EPAS_Failure
# define Rte_Write_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat1_1_Ford_SAPPAngleControlStat1
# define Rte_Write_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat2_1_Ford_SAPPAngleControlStat2
# define Rte_Write_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat3_1_Ford_SAPPAngleControlStat3
# define Rte_Write_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat4_1_Ford_SAPPAngleControlStat4
# define Rte_Write_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat5_1_Ford_SAPPAngleControlStat5
# define Rte_Write_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6 Rte_Write_FordMsg082BusHiSpd_Ford_SAPPAngleControlStat6_1_Ford_SAPPAngleControlStat6
# define Rte_Write_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_D_Stat1_Ford_SteMdule_D_Stat
# define Rte_Write_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_I_Est_Ford_SteMdule_I_Est
# define Rte_Write_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas Rte_Write_FordMsg082BusHiSpd_Ford_SteMdule_U_Meas_Ford_SteMdule_U_Meas
# define Rte_Write_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque Rte_Write_FordMsg082BusHiSpd_Ford_SteeringColumnTorque_Ford_SteeringColumnTorque
# define Rte_Write_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst Rte_Write_FordMsg082BusHiSpd_Ford_TrlrHitchLamp_D_Rqst1_Ford_TrlrHitchLamp_D_Rqst
# define Rte_Write_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq Rte_Write_FordMsg082BusHiSpd_Ford_VehVTrlrAid_B_Rq1_Ford_VehVTrlrAid_B_Rq
# define Rte_Write_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid Rte_Write_FordMsg082BusHiSpd_Ford_Veh_V_RqMxTrlrAid_Ford_Veh_V_RqMxTrlrAid




# define FordMsg082BusHiSpd_START_SEC_CODE
# include "FordMsg082BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg082BusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg082BusHiSpdInit1 FordMsg082BusHiSpdInit1
FUNC(void, FordMsg082BusHiSpd_CODE) FordMsg082BusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

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

# define RTE_RUNNABLE_FordMsg082BusHiSpdPer1 FordMsg082BusHiSpdPer1
FUNC(void, FordMsg082BusHiSpd_CODE) FordMsg082BusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg082BusHiSpd_STOP_SEC_CODE
# include "FordMsg082BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG082BUSHISPD_H */

#include "Rte_Stubs.h"
