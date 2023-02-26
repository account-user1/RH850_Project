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
 *          File:  Rte_EcuTMeas.h
 *        Config:  C:/_Synergy_Projects/Working/ses_dev_ea4/ES210A_EcuTMeas_Impl/tools/Component.dpa
 *     SW-C Type:  EcuTMeas
 *  Generated at:  Mon Oct 16 14:26:43 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <EcuTMeas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ECUTMEAS_H
# define _RTE_ECUTMEAS_H

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

# include "Rte_EcuTMeas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_EcuTMeas
{
  /* PIM Handles section */
  P2VAR(FilLpRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EcuTFilStVari; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dEcuTMeasEcuTCalcd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_EcuTMeas, RTE_CONST, RTE_CONST) Rte_Inst_EcuTMeas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_EcuTMeas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DiagcStsLimdTPrfmnc_Logl (FALSE)
# define Rte_InitValue_EcuT_Val (0.0F)
# define Rte_InitValue_EcuTAdcFaild_Logl (FALSE)
# define Rte_InitValue_EcuTFild_Val (25.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EcuTMeas_EcuT_Val(P2VAR(float32, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EcuTMeas_EcuTAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EcuTMeas_DiagcStsLimdTPrfmnc_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_EcuTMeas_EcuTFild_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_CnvSnpshtData_f32_Oper(P2VAR(uint32, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) SnpshtDataCnvd_Arg, float32 SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_CnvSnpshtData_logl_Oper(P2VAR(uint32, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) SnpshtDataCnvd_Arg, boolean SnpshtData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_GetNtcActv_Oper(NtcNr1 NtcNr, P2VAR(boolean, AUTOMATIC, RTE_ECUTMEAS_APPL_VAR) NtcActv); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EcuTMeas_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuT_Val Rte_Read_EcuTMeas_EcuT_Val
# define Rte_Read_EcuTAdcFaild_Logl Rte_Read_EcuTMeas_EcuTAdcFaild_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DiagcStsLimdTPrfmnc_Logl Rte_Write_EcuTMeas_DiagcStsLimdTPrfmnc_Logl
# define Rte_Write_EcuTFild_Val Rte_Write_EcuTMeas_EcuTFild_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_CnvSnpshtData_f32_Oper Rte_Call_EcuTMeas_CnvSnpshtData_f32_Oper
# define Rte_Call_CnvSnpshtData_logl_Oper Rte_Call_EcuTMeas_CnvSnpshtData_logl_Oper
# define Rte_Call_GetNtcActv_Oper Rte_Call_EcuTMeas_GetNtcActv_Oper
# define Rte_Call_SetNtcStsAndSnpshtData_Oper Rte_Call_EcuTMeas_SetNtcStsAndSnpshtData_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dEcuTMeasEcuTCalcd() (Rte_Inst_EcuTMeas->Pim_dEcuTMeasEcuTCalcd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_EcuTFilStVari() (Rte_Inst_EcuTMeas->Pim_EcuTFilStVari) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dEcuTMeasEcuTCalcd(void)
 *   FilLpRec1 *Rte_Pim_EcuTFilStVari(void)
 *
 *********************************************************************************************************************/


# define EcuTMeas_START_SEC_CODE
# include "EcuTMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: EcuTMeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuT_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EcuTFild_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EcuTMeasInit1 EcuTMeasInit1
FUNC(void, EcuTMeas_CODE) EcuTMeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: EcuTMeasPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuT_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTAdcFaild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DiagcStsLimdTPrfmnc_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EcuTFild_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CnvSnpshtData_f32_Oper(uint32 *SnpshtDataCnvd_Arg, float32 SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CnvSnpshtData_logl_Oper(uint32 *SnpshtDataCnvd_Arg, boolean SnpshtData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcActv_Oper(NtcNr1 NtcNr, boolean *NtcActv)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcActv1_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_EcuTMeasPer1 EcuTMeasPer1
FUNC(void, EcuTMeas_CODE) EcuTMeasPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define EcuTMeas_STOP_SEC_CODE
# include "EcuTMeas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcActv1_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ECUTMEAS_H */

#include "Rte_Stubs.h"
