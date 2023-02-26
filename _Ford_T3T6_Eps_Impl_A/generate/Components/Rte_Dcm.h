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
 *          File:  Rte_Dcm.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DCM_H
# define _RTE_DCM_H

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

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(BswM_BswMEcuResetMod, RTE_CODE) Rte_Mode_Dcm_Dcm_Read_BswM_MDGP_BswMEcuResetMod_Dcm_Read_BswM_MDGP_BswMEcuResetMod(P2VAR(BswM_BswMEcuResetMod, AUTOMATIC, RTE_DCM_APPL_VAR) previousMode, P2VAR(BswM_BswMEcuResetMod, AUTOMATIC, RTE_DCM_APPL_VAR) nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting(Dcm_ControlDtcSettingType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol(Dcm_ProtocolType ProtocolID); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_ShortTermAdjustment(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Data_Dummy_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmEnableDTCSetting(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_CompareKey(P2CONST(Dcm_Data18ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L1_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_CompareKey(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_Un_locked_L3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_Dcm_Read_BswM_MDGP_BswMEcuResetMod_Dcm_Read_BswM_MDGP_BswMEcuResetMod Rte_Mode_Dcm_Dcm_Read_BswM_MDGP_BswMEcuResetMod_Dcm_Read_BswM_MDGP_BswMEcuResetMod


/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmControlDtcSetting_DcmControlDtcSetting Rte_Switch_Dcm_DcmControlDtcSetting_DcmControlDtcSetting
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol Rte_Call_Dcm_CallbackDCMRequestServices_DcmDslCallbackDCMRequestService_StartProtocol
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) NexteerDidRead(uint16 DID, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) NexteerDidRead(uint16 DID, P2VAR(Dcm_Data1024ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeF194toF1FF_ReadDidData NexteerDidRead
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) NexteerDidWrite(uint16 DID, P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) NexteerDidWrite(uint16 DID, P2CONST(Dcm_Data1024ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, uint16 DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeF194toF1FF_WriteDidData NexteerDidWrite
#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeFD00toFD39_ReadDidData NexteerDidRead
#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeFD00toFD39_WriteDidData NexteerDidWrite
#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_ReadDidData NexteerDidRead
#  define Rte_Call_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_WriteDidData NexteerDidWrite
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) Customer_DID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_WriteData
#  define Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_WriteData
#  define Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData DataServices_DID_3003_Gear_Hardware_Part_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData DataServices_DID_3003_Gear_Hardware_Part_Number_WriteData
#  define Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData DataServices_DID_301A_Pull_Drift_Compensation_Value_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData DataServices_DID_301A_Pull_Drift_Compensation_Value_WriteData
#  define Rte_Call_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData DataServices_DID_301F_Steering_Pinion_Rotation_Speed_ReadData
#  define Rte_Call_DataServices_DID_3020_Steering_Pinion_Angle_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3020_Steering_Pinion_Angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_3020_Steering_Pinion_Angle_ReadData DataServices_DID_3020_Steering_Pinion_Angle_ReadData
#  define Rte_Call_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_ReadData
#  define Rte_Call_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_ReadData
#  define Rte_Call_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_ReadData
#  define Rte_Call_DataServices_DID_D100_Active_Diagnostic_Session_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D100_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_D100_Active_Diagnostic_Session_ReadData DataServices_DID_D100_Active_Diagnostic_Session_ReadData
#  define Rte_Call_DataServices_DID_D111_ECU_Power_Supply_Voltage_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData DataServices_DID_D111_ECU_Power_Supply_Voltage_ReadData
#  define Rte_Call_DataServices_DID_D117_ECU_Internal_Temperature_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D117_ECU_Internal_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_D117_ECU_Internal_Temperature_ReadData DataServices_DID_D117_ECU_Internal_Temperature_ReadData
#  define Rte_Call_DataServices_DID_D118_Motor_Current_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_D118_Motor_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_D118_Motor_Current_ReadData DataServices_DID_D118_Motor_Current_ReadData
#  define Rte_Call_DataServices_DID_DD00_Global_Real_Time_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DD00_Global_Real_Time_ReadData DataServices_DID_DD00_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_DD01_Total_Distance_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DD01_Total_Distance_ReadData DataServices_DID_DD01_Total_Distance_ReadData
#  define Rte_Call_DataServices_DID_DD09_Vehicle_Speed_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DD09_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DD09_Vehicle_Speed_ReadData DataServices_DID_DD09_Vehicle_Speed_ReadData
#  define Rte_Call_DataServices_DID_DE00_VehicleData_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE00_VehicleData_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE00_VehicleData_ReadData DataServices_DID_DE00_VehicleData_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE00_VehicleData_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE00_VehicleData_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE00_VehicleData_WriteData DataServices_DID_DE00_VehicleData_WriteData
#  define Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_ReadData DataServices_DID_DE01_FIHSwFeatureConfig_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE01_FIHSwFeatureConfig_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE01_FIHSwFeatureConfig_WriteData DataServices_DID_DE01_FIHSwFeatureConfig_WriteData
#  define Rte_Call_DataServices_DID_DE02_FeatureConfig_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE02_FeatureConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE02_FeatureConfig_ReadData DataServices_DID_DE02_FeatureConfig_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE02_FeatureConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE02_FeatureConfig_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE02_FeatureConfig_WriteData DataServices_DID_DE02_FeatureConfig_WriteData
#  define Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE03_Enable_DisableDTCs_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data64ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_ReadData DataServices_DID_DE03_Enable_DisableDTCs_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE03_Enable_DisableDTCs_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE03_Enable_DisableDTCs_WriteData(P2CONST(Dcm_Data64ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE03_Enable_DisableDTCs_WriteData DataServices_DID_DE03_Enable_DisableDTCs_WriteData
#  define Rte_Call_DataServices_DID_DE04_PDCResetValue_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE04_PDCResetValue_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE04_PDCResetValue_ReadData DataServices_DID_DE04_PDCResetValue_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE04_PDCResetValue_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE04_PDCResetValue_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE04_PDCResetValue_WriteData DataServices_DID_DE04_PDCResetValue_WriteData
#  define Rte_Call_DataServices_DID_DE05_Unused_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE05_Unused_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE05_Unused_ReadData DataServices_DID_DE05_Unused_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE05_Unused_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_DE05_Unused_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_DE05_Unused_WriteData DataServices_DID_DE05_Unused_WriteData
#  define Rte_Call_DataServices_DID_EE00_DevMessConfig_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE00_DevMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE00_DevMessConfig_ReadData DataServices_DID_EE00_DevMessConfig_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE00_DevMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE00_DevMessConfig_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE00_DevMessConfig_WriteData DataServices_DID_EE00_DevMessConfig_WriteData
#  define Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE01_XCP_Enable_Disable_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_ReadData DataServices_DID_EE01_XCP_Enable_Disable_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE01_XCP_Enable_Disable_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE01_XCP_Enable_Disable_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE01_XCP_Enable_Disable_WriteData DataServices_DID_EE01_XCP_Enable_Disable_WriteData
#  define Rte_Call_DataServices_DID_EE02_Assist_On_Off_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE02_Assist_On_Off_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE02_Assist_On_Off_ReadData DataServices_DID_EE02_Assist_On_Off_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE02_Assist_On_Off_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE02_Assist_On_Off_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE02_Assist_On_Off_WriteData DataServices_DID_EE02_Assist_On_Off_WriteData
#  define Rte_Call_DataServices_DID_EE03_IgnCycleCounter_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE03_IgnCycleCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE03_IgnCycleCounter_ReadData DataServices_DID_EE03_IgnCycleCounter_ReadData
#  define Rte_Call_DataServices_DID_EE04_IgnOnTime_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE04_IgnOnTime_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE04_IgnOnTime_ReadData DataServices_DID_EE04_IgnOnTime_ReadData
#  define Rte_Call_DataServices_DID_EE05_FinalMotTq_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE05_FinalMotTq_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE05_FinalMotTq_ReadData DataServices_DID_EE05_FinalMotTq_ReadData
#  define Rte_Call_DataServices_DID_EE06_VINChanged_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE06_VINChanged_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE06_VINChanged_ReadData DataServices_DID_EE06_VINChanged_ReadData
#  define Rte_Call_DataServices_DID_EE07_EPSSystemState_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE07_EPSSystemState_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE07_EPSSystemState_ReadData DataServices_DID_EE07_EPSSystemState_ReadData
#  define Rte_Call_DataServices_DID_EE20_LoAFaultReporting_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE20_LoAFaultReporting_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE20_LoAFaultReporting_ReadData DataServices_DID_EE20_LoAFaultReporting_ReadData
#  define Rte_Call_DataServices_DID_EE21_CurrentLvlCounter_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE21_CurrentLvlCounter_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data20ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE21_CurrentLvlCounter_ReadData DataServices_DID_EE21_CurrentLvlCounter_ReadData
#  define Rte_Call_DataServices_DID_EE22_VoltageLvlCounters_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE22_VoltageLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE22_VoltageLvlCounters_ReadData DataServices_DID_EE22_VoltageLvlCounters_ReadData
#  define Rte_Call_DataServices_DID_EE23_TempLvlCounters_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE23_TempLvlCounters_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE23_TempLvlCounters_ReadData DataServices_DID_EE23_TempLvlCounters_ReadData
#  define Rte_Call_DataServices_DID_EE40_ResearchMessConfig_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE40_ResearchMessConfig_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE40_ResearchMessConfig_ReadData DataServices_DID_EE40_ResearchMessConfig_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE40_ResearchMessConfig_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE40_ResearchMessConfig_WriteData(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE40_ResearchMessConfig_WriteData DataServices_DID_EE40_ResearchMessConfig_WriteData
#  define Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_ReadData DataServices_DID_EE41_ResearchFeatureSwitch_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE41_ResearchFeatureSwitch_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE41_ResearchFeatureSwitch_WriteData DataServices_DID_EE41_ResearchFeatureSwitch_WriteData
#  define Rte_Call_DataServices_DID_EE42_ActiveFeatures_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE42_ActiveFeatures_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE42_ActiveFeatures_ReadData DataServices_DID_EE42_ActiveFeatures_ReadData
#  define Rte_Call_DataServices_DID_EE43_SDMSteeringMode_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE43_SDMSteeringMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE43_SDMSteeringMode_ReadData DataServices_DID_EE43_SDMSteeringMode_ReadData
#  define Rte_Call_DataServices_DID_EE80_FIHSwVer_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE80_FIHSwVer_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE80_FIHSwVer_ReadData DataServices_DID_EE80_FIHSwVer_ReadData
#  define Rte_Call_DataServices_DID_EE81_FIHSwReserved0_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE81_FIHSwReserved0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE81_FIHSwReserved0_ReadData DataServices_DID_EE81_FIHSwReserved0_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE81_FIHSwReserved0_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE81_FIHSwReserved0_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE81_FIHSwReserved0_WriteData DataServices_DID_EE81_FIHSwReserved0_WriteData
#  define Rte_Call_DataServices_DID_EE82_FIHSwReserved1_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE82_FIHSwReserved1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE82_FIHSwReserved1_ReadData DataServices_DID_EE82_FIHSwReserved1_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE82_FIHSwReserved1_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE82_FIHSwReserved1_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE82_FIHSwReserved1_WriteData DataServices_DID_EE82_FIHSwReserved1_WriteData
#  define Rte_Call_DataServices_DID_EE83_FIHSwReserved2_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE83_FIHSwReserved2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE83_FIHSwReserved2_ReadData DataServices_DID_EE83_FIHSwReserved2_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE83_FIHSwReserved2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE83_FIHSwReserved2_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE83_FIHSwReserved2_WriteData DataServices_DID_EE83_FIHSwReserved2_WriteData
#  define Rte_Call_DataServices_DID_EE84_FIHSwReserved3_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE84_FIHSwReserved3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE84_FIHSwReserved3_ReadData DataServices_DID_EE84_FIHSwReserved3_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE84_FIHSwReserved3_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE84_FIHSwReserved3_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE84_FIHSwReserved3_WriteData DataServices_DID_EE84_FIHSwReserved3_WriteData
#  define Rte_Call_DataServices_DID_EE85_FIHSwReserved4_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE85_FIHSwReserved4_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE85_FIHSwReserved4_ReadData DataServices_DID_EE85_FIHSwReserved4_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE85_FIHSwReserved4_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE85_FIHSwReserved4_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE85_FIHSwReserved4_WriteData DataServices_DID_EE85_FIHSwReserved4_WriteData
#  define Rte_Call_DataServices_DID_EE86_FIHSwReserved5_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE86_FIHSwReserved5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE86_FIHSwReserved5_ReadData DataServices_DID_EE86_FIHSwReserved5_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE86_FIHSwReserved5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE86_FIHSwReserved5_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE86_FIHSwReserved5_WriteData DataServices_DID_EE86_FIHSwReserved5_WriteData
#  define Rte_Call_DataServices_DID_EE87_FIHSwReserved6_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE87_FIHSwReserved6_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE87_FIHSwReserved6_ReadData DataServices_DID_EE87_FIHSwReserved6_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE87_FIHSwReserved6_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE87_FIHSwReserved6_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE87_FIHSwReserved6_WriteData DataServices_DID_EE87_FIHSwReserved6_WriteData
#  define Rte_Call_DataServices_DID_EE88_FIHSwReserved7_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE88_FIHSwReserved7_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE88_FIHSwReserved7_ReadData DataServices_DID_EE88_FIHSwReserved7_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE88_FIHSwReserved7_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EE88_FIHSwReserved7_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EE88_FIHSwReserved7_WriteData DataServices_DID_EE88_FIHSwReserved7_WriteData
#  define Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED0_SupplierFactoryMode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_ReadData DataServices_DID_EED0_SupplierFactoryMode_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED0_SupplierFactoryMode_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED0_SupplierFactoryMode_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EED0_SupplierFactoryMode_WriteData DataServices_DID_EED0_SupplierFactoryMode_WriteData
#  define Rte_Call_DataServices_DID_EED1_SupplierInternalFaultCode_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED1_SupplierInternalFaultCode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EED1_SupplierInternalFaultCode_ReadData DataServices_DID_EED1_SupplierInternalFaultCode_ReadData
#  define Rte_Call_DataServices_DID_EED2_SupplierInternalErrorMemory_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData DataServices_DID_EED2_SupplierInternalErrorMemory_ReadData
#  define Rte_Call_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData DataServices_DID_F10A_ECU_Cal_Config_Part_Number_ReadData
#  define Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_WriteData
#  define Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData DataServices_DID_F111_ECU_Core_Assembly_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData DataServices_DID_F111_ECU_Core_Assembly_Number_WriteData
#  define Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData DataServices_DID_F113_ECU_Delivery_Assembly_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData DataServices_DID_F113_ECU_Delivery_Assembly_Number_WriteData
#  define Rte_Call_DataServices_DID_F124_ECU_Calibration_Data_1_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData DataServices_DID_F124_ECU_Calibration_Data_1_Number_ReadData
#  define Rte_Call_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_ReadData
#  define Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F162_Software_Download_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_ReadData DataServices_DID_F162_Software_Download_Specification_Version_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F162_Software_Download_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F162_Software_Download_Specification_Version_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F162_Software_Download_Specification_Version_WriteData DataServices_DID_F162_Software_Download_Specification_Version_WriteData
#  define Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_ReadData DataServices_DID_F163_Diagnostic_Specification_Version_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F163_Diagnostic_Specification_Version_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F163_Diagnostic_Specification_Version_WriteData DataServices_DID_F163_Diagnostic_Specification_Version_WriteData
#  define Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData DataServices_DID_F166_NOS_Message_Database_1_Version_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData DataServices_DID_F166_NOS_Message_Database_1_Version_Number_WriteData
#  define Rte_Call_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data11ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_ReadData
#  define Rte_Call_DataServices_DID_F180_Boot_Software_Identification_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F180_Boot_Software_Identification_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data25ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F180_Boot_Software_Identification_ReadData DataServices_DID_F180_Boot_Software_Identification_ReadData
#  define Rte_Call_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_ReadData
#  define Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18A_System_Supplier_Identifier_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_ReadData DataServices_DID_F18A_System_Supplier_Identifier_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18A_System_Supplier_Identifier_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18A_System_Supplier_Identifier_WriteData(P2CONST(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F18A_System_Supplier_Identifier_WriteData DataServices_DID_F18A_System_Supplier_Identifier_WriteData
#  define Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data16ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_ReadData DataServices_DID_F18C_ECU_Serial_Number_ReadData
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18C_ECU_Serial_Number_WriteData(P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F18C_ECU_Serial_Number_WriteData(P2CONST(Dcm_Data16ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_WriteData DataServices_DID_F18C_ECU_Serial_Number_WriteData
#  define Rte_Call_DataServices_DID_F190_Vehicle_Identification_Number_ConditionCheckRead Customer_DID_ConditionCheckRead
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) DataServices_DID_F190_Vehicle_Identification_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_DID_F190_Vehicle_Identification_Number_ReadData DataServices_DID_F190_Vehicle_Identification_Number_ReadData
#  define Rte_Call_DataServices_Data_Dummy_ReadData Rte_Call_Dcm_DataServices_Data_Dummy_ReadData
#  define Rte_Call_DataServices_Data_Dummy_ReadDataLength Rte_Call_Dcm_DataServices_Data_Dummy_ReadDataLength
#  define Rte_Call_DataServices_Data_Dummy_ReturnControlToECU Rte_Call_Dcm_DataServices_Data_Dummy_ReturnControlToECU
#  define Rte_Call_DataServices_Data_Dummy_ShortTermAdjustment Rte_Call_Dcm_DataServices_Data_Dummy_ShortTermAdjustment
#  define Rte_Call_DataServices_Data_Dummy_WriteData Rte_Call_Dcm_DataServices_Data_Dummy_WriteData
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadData
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReadDataLength
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ReturnControlToECU
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_ShortTermAdjustment
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadData
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) DataLength); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReadDataLength
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ReturnControlToECU
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, uint16 DataLength, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_ShortTermAdjustment
#  define Rte_Call_Dcm_DcmEnableDTCSetting Rte_Call_Dcm_Dcm_DcmEnableDTCSetting
#  define Rte_Call_Dcm_DcmGetExtendedDataRecordByDTC Rte_Call_Dcm_Dcm_DcmGetExtendedDataRecordByDTC
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data159ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(uint16, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) DataLength, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults RoutineServices_RTN_0202_On_Demand_Self_Test_RequestResults
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_Start RoutineServices_RTN_0202_On_Demand_Self_Test_Start
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_0202_On_Demand_Self_Test_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_0202_On_Demand_Self_Test_Stop RoutineServices_RTN_0202_On_Demand_Self_Test_Stop
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_Start
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_Start
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) Out_ResData, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop RoutineServices_RTN_Nexteer_F100_Request_System_State_Enable_Stop
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop RoutineServices_RTN_Nexteer_F119_Defeat_Duty_Cycle_Thermal_Protection_Stop
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop RoutineServices_RTN_Nexteer_F151_Defeat_Loss_of_Assist_Scale_Stop
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start RoutineServices_RTN_Nexteer_F200_Micro_Diagnostic_Fault_Injection_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start RoutineServices_RTN_Nexteer_FD54_Clear_Stack_Measurement_Result_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start RoutineServices_RTN_Nexteer_FD70_Clear_Nexteer_Trouble_Codes_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start RoutineServices_RTN_Nexteer_FD71_Clear_Nexteer_Snapshot_Data_Start_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start RoutineServices_RTN_Nexteer_FD81_Handwheel_Angle_1_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start RoutineServices_RTN_Nexteer_FD85_Handwheel_Angle_1_Clear_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA0_Handwheel_Torque_Sensor_0_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA1_Handwheel_Torque_Sensor_1_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA2_Handwheel_Torque_Sensor_2_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDA3_Handwheel_Torque_Sensor_3_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDA8_Handwheel_Torque_Sensor_0_Clear_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDA9_Handwheel_Torque_Sensor_1_Clear_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDAA_Handwheel_Torque_Sensor_2_Clear_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start RoutineServices_RTN_Nexteer_FDAB_Handwheel_Torque_Sensor_3_Clear_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop RoutineServices_RTN_Nexteer_FDC2_Software_Based_Motor_Calibration_Stop
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDF0_Current_Gain_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_RequestResults
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start RoutineServices_RTN_Nexteer_FDF1_Current_Offset_Auto_Trim_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start(P2CONST(Dcm_Data8ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(P2CONST(uint8, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DIAGSRV_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop RoutineServices_RTN_Nexteer_FE20_Motor_Velocity_Control_Stop
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start RoutineServices_RTN_Nexteer_FE88_System_Friction_Learning_Clear_Start
#  define RTE_START_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGSRV_APPL_CODE) RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DIAGSRV_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_DIAGSRV_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start RoutineServices_RTN_Nexteer_FE89_System_Friction_Learning_Initialize_Start
#  define Rte_Call_SecurityAccess_Un_locked_L1_CompareKey Rte_Call_Dcm_SecurityAccess_Un_locked_L1_CompareKey
#  define Rte_Call_SecurityAccess_Un_locked_L1_GetSeed Rte_Call_Dcm_SecurityAccess_Un_locked_L1_GetSeed
#  define Rte_Call_SecurityAccess_Un_locked_L3_CompareKey Rte_Call_Dcm_SecurityAccess_Un_locked_L3_CompareKey
#  define Rte_Call_SecurityAccess_Un_locked_L3_GetSeed Rte_Call_Dcm_SecurityAccess_Un_locked_L3_GetSeed
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) ServiceRequestNotification_Confirmation(uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_Confirmation ServiceRequestNotification_Confirmation
#  define RTE_START_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) ServiceRequestNotification_Indication(uint8 SID, P2CONST(uint8, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  else
FUNC(Std_ReturnType, RTE_CUSTDIAG_APPL_CODE) ServiceRequestNotification_Indication(uint8 SID, P2CONST(Dcm_Data1028ByteType, AUTOMATIC, RTE_CUSTDIAG_APPL_DATA) RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_CUSTDIAG_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
#  endif
#  define RTE_STOP_SEC_CUSTDIAG_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_Indication ServiceRequestNotification_Indication


# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSecurityLevelFixedBytes Dcm_GetSecurityLevelFixedBytes
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevelFixedBytes(Dcm_SecLevelType SecLevel, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) FixedBytes, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) BufferSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevelFixedBytes(Dcm_SecLevelType SecLevel, P2VAR(Dcm_Data12ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) FixedBytes, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) BufferSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CallbackDCMRequestServices_E_NOT_OK (1U)

#  define RTE_E_CallbackDCMRequestServices_E_PROTOCOL_NOT_ALLOWED (5U)

#  define RTE_E_DCMServices_DCM_E_BUFFERTOOLOW (42U)

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeF194toF1FF_E_NOT_OK (1U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD00toFD39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD00toFD39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DIDRange_NexteerDidRangeFD43toFEFF_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_205A_Torque_Steer_Compensation_Activation_Counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_205B_Brake_Pull_Reduction_Activation_Counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3003_Gear_Hardware_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_301A_Pull_Drift_Compensation_Value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_301F_Steering_Pinion_Rotation_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3020_Steering_Pinion_Angle_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_330C_Steering_Shaft_Torque_Sensor_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_3B4B_Steering_wheel_angle_alignment_offset_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_630F_Multiple_VIN_Storage_Original_VIN_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D100_Active_Diagnostic_Session_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D111_ECU_Power_Supply_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D117_ECU_Internal_Temperature_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D118_Motor_Current_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D118_Motor_Current_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD09_Vehicle_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD09_Vehicle_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE00_VehicleData_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE00_VehicleData_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE01_FIHSwFeatureConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE02_FeatureConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE02_FeatureConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE03_Enable_DisableDTCs_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE04_PDCResetValue_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE04_PDCResetValue_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DE05_Unused_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DE05_Unused_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE00_DevMessConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE00_DevMessConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE01_XCP_Enable_Disable_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE02_Assist_On_Off_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE02_Assist_On_Off_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE03_IgnCycleCounter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE03_IgnCycleCounter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE04_IgnOnTime_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE04_IgnOnTime_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE05_FinalMotTq_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE05_FinalMotTq_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE06_VINChanged_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE06_VINChanged_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE07_EPSSystemState_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE07_EPSSystemState_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE20_LoAFaultReporting_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE20_LoAFaultReporting_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE21_CurrentLvlCounter_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE21_CurrentLvlCounter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE22_VoltageLvlCounters_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE22_VoltageLvlCounters_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE23_TempLvlCounters_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE23_TempLvlCounters_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE40_ResearchMessConfig_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE40_ResearchMessConfig_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE41_ResearchFeatureSwitch_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE42_ActiveFeatures_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE42_ActiveFeatures_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE43_SDMSteeringMode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE43_SDMSteeringMode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE80_FIHSwVer_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE80_FIHSwVer_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE81_FIHSwReserved0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE81_FIHSwReserved0_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE82_FIHSwReserved1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE82_FIHSwReserved1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE83_FIHSwReserved2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE83_FIHSwReserved2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE84_FIHSwReserved3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE84_FIHSwReserved3_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE85_FIHSwReserved4_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE85_FIHSwReserved4_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE86_FIHSwReserved5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE86_FIHSwReserved5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE87_FIHSwReserved6_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE87_FIHSwReserved6_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE88_FIHSwReserved7_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE88_FIHSwReserved7_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED0_SupplierFactoryMode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED0_SupplierFactoryMode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_SupplierInternalFaultCode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED2_SupplierInternalErrorMemory_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F10A_ECU_Cal_Config_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F110_Subsystem_Specific_Diagnostic_Specification_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F111_ECU_Core_Assembly_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F113_ECU_Delivery_Assembly_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F124_ECU_Calibration_Data_1_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F15F_NOS_Generation_Tool_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F162_Software_Download_Specification_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F163_Diagnostic_Specification_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F166_NOS_Message_Database_1_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F17C_NOS_Bootloader_Generation_Tool_Version_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F180_Boot_Software_Identification_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F180_Boot_Software_Identification_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F188_Vehicle_Manufacturer_ECU_Software_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F18A_System_Supplier_Identifier_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F190_Vehicle_Identification_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Dummy_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Dummy_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD40_Manual_Torque_Command_E_NOT_OK (1U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Data_Nexteer_IoControl_FD41_Assist_Linear_Gain_E_NOT_OK (1U)

#  define RTE_E_DcmIf_DEM_CONTROL_DTC_SETTING_N_OK (1U)

#  define RTE_E_DcmIf_DEM_CONTROL_DTC_WRONG_DTCGROUP (2U)

#  define RTE_E_DcmIf_DEM_RECORD_PENDING (5U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_BUFFERSIZE (4U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_NUMBER (3U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_0202_On_Demand_Self_Test_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_200E_Calibrate_Steering_Angle_Centre_Position_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_200F_Clear_Steering_Angle_Centre_Position_Calibration_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_RTN_DC00_Reset_Assist_Fault_Counters_E_NOT_OK (1U)

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

#  define RTE_E_SecurityAccess_Un_locked_L1_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Un_locked_L1_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Un_locked_L1_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_Un_locked_L3_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_Un_locked_L3_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_Un_locked_L3_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_NOT_OK (1U)

#  define RTE_E_ServiceRequestNotification_E_REQUEST_NOT_ACCEPTED (8U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DCM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
