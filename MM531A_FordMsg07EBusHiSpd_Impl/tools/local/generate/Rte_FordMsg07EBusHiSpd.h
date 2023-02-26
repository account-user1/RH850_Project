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
 *          File:  Rte_FordMsg07EBusHiSpd.h
 *        Config:  C:/Users/NZ5334/Documents/Synergy/Working/ses_dev_ea4/MM531A_FordMsg07EBusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg07EBusHiSpd
 *  Generated at:  Wed Apr 18 10:31:33 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg07EBusHiSpd> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG07EBUSHISPD_H
# define _RTE_FORDMSG07EBUSHISPD_H

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

# include "Rte_FordMsg07EBusHiSpd_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordMsg07EBusHiSpd
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SteerPinionAgCntrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordMsg07EBusHiSpd, RTE_CONST, RTE_CONST) Rte_Inst_FordMsg07EBusHiSpd; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordMsg07EBusHiSpd, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_CmpdSteerPinionAg_Val (0.0F)
# define Rte_InitValue_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf (1U)
# define Rte_InitValue_FordVehSteerPwrReq_Ford_StePw_B_Rq (FALSE)
# define Rte_InitValue_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt (0U)
# define Rte_InitValue_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs (0U)
# define Rte_InitValue_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf (1U)
# define Rte_InitValue_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est (0U)
# define Rte_InitValue_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns (65535U)
# define Rte_InitValue_Ford_StePw_B_Rq_Ford_StePw_B_Rq (FALSE)
# define Rte_InitValue_RelSteerPinionAg_Val (3353.5F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG07EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf(P2VAR(Ford_StePinCompAnEst_D_Qf, AUTOMATIC, RTE_FORDMSG07EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq(P2VAR(Ford_StePw_B_Rq, AUTOMATIC, RTE_FORDMSG07EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg07EBusHiSpd_RelSteerPinionAg_Val(P2VAR(float32, AUTOMATIC, RTE_FORDMSG07EBUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg07EBusHiSpd_Ford_StePw_B_Rq_Ford_StePw_B_Rq(Ford_StePw_B_Rq data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_CmpdSteerPinionAg_Val Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAg_Val
# define Rte_Read_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf Rte_Read_FordMsg07EBusHiSpd_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf
# define Rte_Read_FordVehSteerPwrReq_Ford_StePw_B_Rq Rte_Read_FordMsg07EBusHiSpd_FordVehSteerPwrReq_Ford_StePw_B_Rq
# define Rte_Read_RelSteerPinionAg_Val Rte_Read_FordMsg07EBusHiSpd_RelSteerPinionAg_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt
# define Rte_Write_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs Rte_Write_FordMsg07EBusHiSpd_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs
# define Rte_Write_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf Rte_Write_FordMsg07EBusHiSpd_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf
# define Rte_Write_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est Rte_Write_FordMsg07EBusHiSpd_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est
# define Rte_Write_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns Rte_Write_FordMsg07EBusHiSpd_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns
# define Rte_Write_Ford_StePw_B_Rq_Ford_StePw_B_Rq Rte_Write_FordMsg07EBusHiSpd_Ford_StePw_B_Rq_Ford_StePw_B_Rq


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_SteerPinionAgCntrPrev() (Rte_Inst_FordMsg07EBusHiSpd->Pim_SteerPinionAgCntrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_SteerPinionAgCntrPrev(void)
 *
 *********************************************************************************************************************/


# define FordMsg07EBusHiSpd_START_SEC_CODE
# include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07EBusHiSpdInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg07EBusHiSpdInit1 FordMsg07EBusHiSpdInit1
FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg07EBusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_CmpdSteerPinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_CmpdSteerPinionAgQlyFac_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf *data)
 *   Std_ReturnType Rte_Read_FordVehSteerPwrReq_Ford_StePw_B_Rq(Ford_StePw_B_Rq *data)
 *   Std_ReturnType Rte_Read_RelSteerPinionAg_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Ford_StePinAn_No_Cnt_Ford_StePinAn_No_Cnt(Ford_StePinAn_No_Cnt data)
 *   Std_ReturnType Rte_Write_Ford_StePinAn_No_Cs_Ford_StePinAn_No_Cs(Ford_StePinAn_No_Cs data)
 *   Std_ReturnType Rte_Write_Ford_StePinCompAnEst_D_Qf_Ford_StePinCompAnEst_D_Qf(Ford_StePinCompAnEst_D_Qf data)
 *   Std_ReturnType Rte_Write_Ford_StePinComp_An_Est_Ford_StePinComp_An_Est(Ford_StePinComp_An_Est data)
 *   Std_ReturnType Rte_Write_Ford_StePinRelInit_An_Sns_Ford_StePinRelInit_An_Sns(Ford_StePinRelInit_An_Sns data)
 *   Std_ReturnType Rte_Write_Ford_StePw_B_Rq_Ford_StePw_B_Rq(Ford_StePw_B_Rq data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordMsg07EBusHiSpdPer1 FordMsg07EBusHiSpdPer1
FUNC(void, FordMsg07EBusHiSpd_CODE) FordMsg07EBusHiSpdPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordMsg07EBusHiSpd_STOP_SEC_CODE
# include "FordMsg07EBusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG07EBUSHISPD_H */

#include "Rte_Stubs.h"
