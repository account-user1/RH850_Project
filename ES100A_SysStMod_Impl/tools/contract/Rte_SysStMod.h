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
 *          File:  Rte_SysStMod.h
 *     SW-C Type:  SysStMod
 *  Generated at:  Mon Apr  4 12:38:51 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <SysStMod> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_SYSSTMOD_H
# define _RTE_SYSSTMOD_H

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

# include "Rte_SysStMod_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_SysStMod
{
  /* PIM Handles section */
  P2VAR(SysSt1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStModPrevSysSt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dSysStModTranVect; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_SysStMod, RTE_CONST, RTE_CONST) Rte_Inst_SysStMod; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_SysStMod, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PwrSplyEnaReq_Logl (FALSE)
# define Rte_InitValue_StrtUpSt_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_SysStFltOutpReqDi_Logl (FALSE)
# define Rte_InitValue_SysStImdtTranReqOff_Logl (FALSE)
# define Rte_InitValue_SysStReqDi_Logl (FALSE)
# define Rte_InitValue_SysStReqEna_Logl (FALSE)
# define Rte_InitValue_SysStWrmIninCmpl_Logl (FALSE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_PwrSplyEnaReq_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_StrtUpSt_Val(P2VAR(uint8, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_SysStFltOutpReqDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_SysStImdtTranReqOff_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_SysStReqDi_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_SysStReqEna_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_SysStMod_SysStWrmIninCmpl_Logl(P2VAR(boolean, AUTOMATIC, RTE_SYSSTMOD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_SysStMod_SysSt_Val(SysSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PwrSplyEnaReq_Logl Rte_Read_SysStMod_PwrSplyEnaReq_Logl
# define Rte_Read_StrtUpSt_Val Rte_Read_SysStMod_StrtUpSt_Val
# define Rte_Read_SysStFltOutpReqDi_Logl Rte_Read_SysStMod_SysStFltOutpReqDi_Logl
# define Rte_Read_SysStImdtTranReqOff_Logl Rte_Read_SysStMod_SysStImdtTranReqOff_Logl
# define Rte_Read_SysStReqDi_Logl Rte_Read_SysStMod_SysStReqDi_Logl
# define Rte_Read_SysStReqEna_Logl Rte_Read_SysStMod_SysStReqEna_Logl
# define Rte_Read_SysStWrmIninCmpl_Logl Rte_Read_SysStMod_SysStWrmIninCmpl_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_SysSt_Val Rte_Write_SysStMod_SysSt_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dSysStModTranVect() (Rte_Inst_SysStMod->Pim_dSysStModTranVect) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStModPrevSysSt() (Rte_Inst_SysStMod->Pim_SysStModPrevSysSt) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_dSysStModTranVect(void)
 *   SysSt1 *Rte_Pim_SysStModPrevSysSt(void)
 *
 *********************************************************************************************************************/


# define SysStMod_START_SEC_CODE
# include "SysStMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysStModInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysStModInit1 SysStModInit1
FUNC(void, SysStMod_CODE) SysStModInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysStModPer1
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
 *   Std_ReturnType Rte_Read_PwrSplyEnaReq_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStImdtTranReqOff_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStReqEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStWrmIninCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysSt_Val(SysSt1 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_SysStModPer1 SysStModPer1
FUNC(void, SysStMod_CODE) SysStModPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define SysStMod_STOP_SEC_CODE
# include "SysStMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1459796796
#    error "The magic number of the generated file <C:/component/ES100A_SysStMod_Impl/tools/contract/Rte_SysStMod.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1459796796
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_SYSSTMOD_H */
