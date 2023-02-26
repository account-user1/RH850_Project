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
 *          File:  Rte_CDD_McuDiagc.h
 *     SW-C Type:  CDD_McuDiagc
 *  Generated at:  Tue Sep 27 12:50:28 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_McuDiagc> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MCUDIAGC_H
# define _RTE_CDD_MCUDIAGC_H

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

# include "Rte_CDD_McuDiagc_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_McuDiagc
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FastLoopCntrDiagcCfgd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FastLoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LoopCntr2MilliSecStore; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LoopCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMcuDiagcFastLoopCntrMax; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMcuDiagcFastLoopCntrMin; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMcuDiagcLoopCntr2MilliSecMotCtrlDif; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_McuDiagc, RTE_CONST, RTE_CONST) Rte_Inst_CDD_McuDiagc; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_McuDiagc, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_FastLoopCntr_Val (0U)
# define Rte_InitValue_LoopCntr2MilliSec_Val (0U)
# define Rte_InitValue_SlowLoopCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_McuDiagc_FastLoopCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_MCUDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_McuDiagc_SlowLoopCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_MCUDIAGC_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_McuDiagc_LoopCntr2MilliSec_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_McuDiagc_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_McuDiagc_McuDiagc2MilliSecCntrCompThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_McuDiagc_McuDiagcFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_CDD_McuDiagc_McuDiagcFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_FastLoopCntr_Val Rte_Read_CDD_McuDiagc_FastLoopCntr_Val
# define Rte_Read_SlowLoopCntr_Val Rte_Read_CDD_McuDiagc_SlowLoopCntr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_LoopCntr2MilliSec_Val Rte_Write_CDD_McuDiagc_LoopCntr2MilliSec_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_SetNtcSts_Oper Rte_Call_CDD_McuDiagc_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_McuDiagc2MilliSecCntrCompThd_Val Rte_Prm_CDD_McuDiagc_McuDiagc2MilliSecCntrCompThd_Val

# define Rte_Prm_McuDiagcFltFailStep_Val Rte_Prm_CDD_McuDiagc_McuDiagcFltFailStep_Val

# define Rte_Prm_McuDiagcFltPassStep_Val Rte_Prm_CDD_McuDiagc_McuDiagcFltPassStep_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_FastLoopCntrPrev() (Rte_Inst_CDD_McuDiagc->Pim_FastLoopCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LoopCntr2MilliSecStore() (Rte_Inst_CDD_McuDiagc->Pim_LoopCntr2MilliSecStore) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LoopCntrPrev() (Rte_Inst_CDD_McuDiagc->Pim_LoopCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMcuDiagcFastLoopCntrMax() (Rte_Inst_CDD_McuDiagc->Pim_dMcuDiagcFastLoopCntrMax) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMcuDiagcFastLoopCntrMin() (Rte_Inst_CDD_McuDiagc->Pim_dMcuDiagcFastLoopCntrMin) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMcuDiagcLoopCntr2MilliSecMotCtrlDif() (Rte_Inst_CDD_McuDiagc->Pim_dMcuDiagcLoopCntr2MilliSecMotCtrlDif) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FastLoopCntrDiagcCfgd() (Rte_Inst_CDD_McuDiagc->Pim_FastLoopCntrDiagcCfgd) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_FastLoopCntrPrev(void)
 *   uint16 *Rte_Pim_LoopCntr2MilliSecStore(void)
 *   uint16 *Rte_Pim_LoopCntrPrev(void)
 *   uint16 *Rte_Pim_dMcuDiagcFastLoopCntrMax(void)
 *   uint16 *Rte_Pim_dMcuDiagcFastLoopCntrMin(void)
 *   uint16 *Rte_Pim_dMcuDiagcLoopCntr2MilliSecMotCtrlDif(void)
 *   uint8 *Rte_Pim_FastLoopCntrDiagcCfgd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_McuDiagc2MilliSecCntrCompThd_Val(void)
 *   uint16 Rte_Prm_McuDiagcFltFailStep_Val(void)
 *   uint16 Rte_Prm_McuDiagcFltPassStep_Val(void)
 *
 *********************************************************************************************************************/


# define CDD_McuDiagc_START_SEC_CODE
# include "CDD_McuDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: McuDiagcInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_McuDiagcInit1 McuDiagcInit1
FUNC(void, CDD_McuDiagc_CODE) McuDiagcInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: McuDiagcPer2
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
 *   Std_ReturnType Rte_Read_FastLoopCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_SlowLoopCntr_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_LoopCntr2MilliSec_Val(uint16 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_McuDiagcPer2 McuDiagcPer2
FUNC(void, CDD_McuDiagc_CODE) McuDiagcPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_McuDiagc_STOP_SEC_CODE
# include "CDD_McuDiagc_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1474988967
#    error "The magic number of the generated file <C:/Component/ES002A_McuDiagc_Impl/tools/contract/Rte_CDD_McuDiagc.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1474988967
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_CDD_MCUDIAGC_H */
