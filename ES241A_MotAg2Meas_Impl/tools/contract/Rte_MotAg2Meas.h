/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_MotAg2Meas.h
 *     SW-C Type:  MotAg2Meas
 *  Generated at:  Thu Apr 14 15:08:46 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotAg2Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTAG2MEAS_H
# define _RTE_MOTAG2MEAS_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_MotAg2Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotAg2Meas
{
  /* PIM Handles section */
  P2VAR(MotAgMeasEolPrmRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2EolPrm; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2MeclPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAg2MeclRollgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotAg2Meas, RTE_CONST, RTE_CONST) Rte_Inst_MotAg2Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotAg2Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAg2Cos_Val (0.0F)
# define Rte_InitValue_MotAg2CosAdcFaild_Logl (FALSE)
# define Rte_InitValue_MotAg2Mecl_Val (0U)
# define Rte_InitValue_MotAg2MeclQlfr_Val (0U)
# define Rte_InitValue_MotAg2MeclRollgCntr_Val (0U)
# define Rte_InitValue_MotAg2Sin_Val (0.0F)
# define Rte_InitValue_MotAg2SinAdcFaild_Logl (FALSE)
# define Rte_InitValue_MotAg2VltgSqd_Val (1.755625F)
# define Rte_InitValue_MotAgMecl2Polarity_Val (1)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotAg2Meas_MotAg2Cos_Val(P2VAR(float32, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotAg2Meas_MotAg2CosAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotAg2Meas_MotAg2Sin_Val(P2VAR(float32, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotAg2Meas_MotAg2SinAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotAg2Meas_MotAgMecl2Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotAg2Meas_MotAg2Mecl_Val(u0p16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotAg2Meas_MotAg2MeclQlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotAg2Meas_MotAg2MeclRollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotAg2Meas_MotAg2VltgSqd_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotAg2Meas_FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotAg2Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotAg2Meas_MotAg2EolPrm_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotAg2Meas_MotAg2EolPrm_SetRamBlockStatus(Boolean RamBlockStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MotAg2Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_MotAg2Meas_MotAg2MeasOffs_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC_P2CONST(MotAgMeasEolPrmRec1, RTE_CONST_DEFAULT_RTE_CDATA_GROUP, RTE_CODE) Rte_CData_MotAg2Meas_MotAg2EolPrmDft(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotAg2Cos_Val Rte_Read_MotAg2Meas_MotAg2Cos_Val
# define Rte_Read_MotAg2CosAdcFaild_Logl Rte_Read_MotAg2Meas_MotAg2CosAdcFaild_Logl
# define Rte_Read_MotAg2Sin_Val Rte_Read_MotAg2Meas_MotAg2Sin_Val
# define Rte_Read_MotAg2SinAdcFaild_Logl Rte_Read_MotAg2Meas_MotAg2SinAdcFaild_Logl
# define Rte_Read_MotAgMecl2Polarity_Val Rte_Read_MotAg2Meas_MotAgMecl2Polarity_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotAg2Mecl_Val Rte_Write_MotAg2Meas_MotAg2Mecl_Val
# define Rte_Write_MotAg2MeclQlfr_Val Rte_Write_MotAg2Meas_MotAg2MeclQlfr_Val
# define Rte_Write_MotAg2MeclRollgCntr_Val Rte_Write_MotAg2Meas_MotAg2MeclRollgCntr_Val
# define Rte_Write_MotAg2VltgSqd_Val Rte_Write_MotAg2Meas_MotAg2VltgSqd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_FltInj_f32_Oper Rte_Call_MotAg2Meas_FltInj_f32_Oper
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_MotAg2Meas_GetNtcQlfrSts_Oper
# define Rte_Call_MotAg2EolPrm_GetErrorStatus Rte_Call_MotAg2Meas_MotAg2EolPrm_GetErrorStatus
# define Rte_Call_MotAg2EolPrm_SetRamBlockStatus Rte_Call_MotAg2Meas_MotAg2EolPrm_SetRamBlockStatus
# define Rte_Call_SetNtcSts_Oper Rte_Call_MotAg2Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_CData (SW-C local calibration parameters)
 *********************************************************************************************************************/

# define Rte_CData_MotAg2EolPrmDft Rte_CData_MotAg2Meas_MotAg2EolPrmDft

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotAg2MeasOffs_Val Rte_Prm_MotAg2Meas_MotAg2MeasOffs_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotAg2MeclPrev() (Rte_Inst_MotAg2Meas->Pim_MotAg2MeclPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2MeclRollgCntrPrev() (Rte_Inst_MotAg2Meas->Pim_MotAg2MeclRollgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAg2EolPrm() (Rte_Inst_MotAg2Meas->Pim_MotAg2EolPrm) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotAg2MeclPrev(void)
 *   uint8 *Rte_Pim_MotAg2MeclRollgCntrPrev(void)
 *   MotAgMeasEolPrmRec1 *Rte_Pim_MotAg2EolPrm(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   MotAgMeasEolPrmRec1 *Rte_CData_MotAg2EolPrmDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotAg2MeasOffs_Val(void)
 *
 *********************************************************************************************************************/


# define MotAg2Meas_START_SEC_CODE
# include "MotAg2Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg2MeasEolPrmRead_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg2MeasEolPrmRead>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg2MeasEolPrmRead_Oper(MotAgMeasEolPrmRec1 *MotAgEolPrmRead_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg2MeasEolPrmRead_Oper MotAg2MeasEolPrmRead_Oper
FUNC(void, MotAg2Meas_CODE) MotAg2MeasEolPrmRead_Oper(P2VAR(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_MOTAG2MEAS_APPL_VAR) MotAgEolPrmRead_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg2MeasEolPrmWr_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <MotAg2MeasEolPrmWr>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg2EolPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void MotAg2MeasEolPrmWr_Oper(const MotAgMeasEolPrmRec1 *MotAgSinCosEolCalData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg2MeasEolPrmWr_Oper MotAg2MeasEolPrmWr_Oper
FUNC(void, MotAg2Meas_CODE) MotAg2MeasEolPrmWr_Oper(P2CONST(MotAgMeasEolPrmRec1, AUTOMATIC, RTE_MOTAG2MEAS_APPL_DATA) MotAgSinCosEolCalData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg2MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotAg2EolPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg2MeasInit1 MotAg2MeasInit1
FUNC(void, MotAg2Meas_CODE) MotAg2MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAg2MeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotAg2Cos_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg2CosAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAg2Sin_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg2SinAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAgMecl2Polarity_Val(sint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAg2Mecl_Val(u0p16 data)
 *   Std_ReturnType Rte_Write_MotAg2MeclQlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_MotAg2MeclRollgCntr_Val(uint8 data)
 *   Std_ReturnType Rte_Write_MotAg2VltgSqd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotAg2MeasPer1 MotAg2MeasPer1
FUNC(void, MotAg2Meas_CODE) MotAg2MeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotAg2Meas_STOP_SEC_CODE
# include "MotAg2Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1460663929
#    error "The magic number of the generated file <C:/Component/ES241A_MotAg2Meas_Impl/tools/contract/Rte_MotAg2Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1460663929
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_MOTAG2MEAS_H */
