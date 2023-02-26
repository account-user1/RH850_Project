/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Appl_Cbk.h
 *   Generation Time: 2018-05-07 16:44:09
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/


#if !defined (APPL_CBK_H)
# define APPL_CBK_H

/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "Com_Types.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
#define COM_START_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* Configurable notification interface prototypes */
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_BrkTot_Tq_Actl_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_CmbbDeny_B_ActlBrk_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_EsaEnbl_D2_Rq(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_EsaOn_B_Rq(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Ford_StePinOffst_D_Stat_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Ford_VehVActlEng_D_Qf_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_GearLvrPos_D_Actl_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_HitchToVehAxle_L_Calc(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Ignition_Status_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LaCurvature_No_Calc_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_LatCtlRampType_D_Rq_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_OdometerMasterValue(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Outside_Air_Temp_Stat(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_PwPckTq_D_Stat_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_SelDrvMdeChassis2_D_Rq(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_TrlrAidMde_D_Rq_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_TrlrAidSwtch_D_RqDrv(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_TrlrLampCnnct_B_Actl(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_TurnLghtSwtch_D_Stat_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_VehLatComp_A_Actl_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_VehYaw_W_Actl_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_Veh_V_ActlBrk_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_VehicleGGCCData_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_WhlDirFl_D_Actl_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_WhlFl_W_Meas_Oper(void);
FUNC(void, COM_APPL_CODE) ComTimeoutNotification_YawStabilityIndex_Oper(void);


#define COM_STOP_SEC_APPL_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

#endif  /* APPL_CBK_H */
/**********************************************************************************************************************
  END OF FILE: Appl_Cbk.h
**********************************************************************************************************************/

