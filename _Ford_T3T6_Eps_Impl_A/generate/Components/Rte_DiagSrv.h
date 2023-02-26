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
 *          File:  Rte_DiagSrv.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DiagSrv>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DIAGSRV_H
# define _RTE_DIAGSRV_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_DiagSrv_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CMNMFGSRV_APPL_CODE) CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CMNMFGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_CmnMfgSrvCmnMfgSrvMaiFct_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7) (CmnMfgSrvCmnMfgSrvMaiFct_Oper(arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define DiagSrv_START_SEC_CODE
# include "DiagSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU
#  define RTE_RUNNABLE_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment
#  define RTE_RUNNABLE_DiagSrvInit1 DiagSrvInit1
#  define RTE_RUNNABLE_NexteerDidRead NexteerDidRead
#  define RTE_RUNNABLE_NexteerDidWrite NexteerDidWrite
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start
#  define RTE_RUNNABLE_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, DiagSrv_CODE) DiagSrvInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidRead(uint16 DID, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidRead(uint16 DID, P2VAR(Dcm_Data1024ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidWrite(uint16 DID, P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) NexteerDidWrite(uint16 DID, P2CONST(Dcm_Data1024ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, DiagSrv_CODE) RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DiagSrv_STOP_SEC_CODE
# include "DiagSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_E_NOT_OK (1U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD00toFD39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD00toFD39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DIAGSRV_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
