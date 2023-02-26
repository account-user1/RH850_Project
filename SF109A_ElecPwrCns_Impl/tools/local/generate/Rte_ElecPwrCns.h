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
 *          File:  Rte_ElecPwrCns.h
 *        Config:  C:/Component/SF109A_ElecPwrCns_Impl/tools/Component.dpa
 *     SW-C Type:  ElecPwrCns
 *  Generated at:  Thu Oct 19 14:34:42 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <ElecPwrCns> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_ELECPWRCNS_H
# define _RTE_ELECPWRCNS_H

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

# include "Rte_ElecPwrCns_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_ElecPwrCns
{
  /* PIM Handles section */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dElecPwrCnsDrpInpPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dElecPwrCnsModInpPwr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dElecPwrCnsMotCurrDaxEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dElecPwrCnsMotCurrQaxEstim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_ElecPwrCns, RTE_CONST, RTE_CONST) Rte_Inst_ElecPwrCns; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_ElecPwrCns, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_BrdgVltg_Val (6.0F)
# define Rte_InitValue_ElecInpPwrEstim_Val (0.0F)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_MotCurrDax_Val (0.0F)
# define Rte_InitValue_MotCurrDaxCmd_Val (0.0F)
# define Rte_InitValue_MotCurrQax_Val (0.0F)
# define Rte_InitValue_MotCurrQaxCmd_Val (0.0F)
# define Rte_InitValue_MotVltgDax_Val (0.0F)
# define Rte_InitValue_MotVltgQax_Val (0.0F)
# define Rte_InitValue_SplyCurrEstim_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_BrdgVltg_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotCurrDax_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotCurrDaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotCurrQax_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotCurrQaxCmd_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotVltgDax_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ElecPwrCns_MotVltgQax_Val(P2VAR(float32, AUTOMATIC, RTE_ELECPWRCNS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ElecPwrCns_ElecInpPwrEstim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_ElecPwrCns_SplyCurrEstim_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ElecPwrCns_ElecPwrCnsCtrlrInpR_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_ElecPwrCns_ElecPwrCnsPrstcPwrLoss_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_BrdgVltg_Val Rte_Read_ElecPwrCns_BrdgVltg_Val
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_ElecPwrCns_MotAndThermProtnLoaMod_Val
# define Rte_Read_MotCurrDax_Val Rte_Read_ElecPwrCns_MotCurrDax_Val
# define Rte_Read_MotCurrDaxCmd_Val Rte_Read_ElecPwrCns_MotCurrDaxCmd_Val
# define Rte_Read_MotCurrQax_Val Rte_Read_ElecPwrCns_MotCurrQax_Val
# define Rte_Read_MotCurrQaxCmd_Val Rte_Read_ElecPwrCns_MotCurrQaxCmd_Val
# define Rte_Read_MotVltgDax_Val Rte_Read_ElecPwrCns_MotVltgDax_Val
# define Rte_Read_MotVltgQax_Val Rte_Read_ElecPwrCns_MotVltgQax_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_ElecInpPwrEstim_Val Rte_Write_ElecPwrCns_ElecInpPwrEstim_Val
# define Rte_Write_SplyCurrEstim_Val Rte_Write_ElecPwrCns_SplyCurrEstim_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_ElecPwrCnsCtrlrInpR_Val Rte_Prm_ElecPwrCns_ElecPwrCnsCtrlrInpR_Val

# define Rte_Prm_ElecPwrCnsPrstcPwrLoss_Val Rte_Prm_ElecPwrCns_ElecPwrCnsPrstcPwrLoss_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dElecPwrCnsDrpInpPwr() (Rte_Inst_ElecPwrCns->Pim_dElecPwrCnsDrpInpPwr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dElecPwrCnsModInpPwr() (Rte_Inst_ElecPwrCns->Pim_dElecPwrCnsModInpPwr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dElecPwrCnsMotCurrDaxEstim() (Rte_Inst_ElecPwrCns->Pim_dElecPwrCnsMotCurrDaxEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dElecPwrCnsMotCurrQaxEstim() (Rte_Inst_ElecPwrCns->Pim_dElecPwrCnsMotCurrQaxEstim) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dElecPwrCnsDrpInpPwr(void)
 *   float32 *Rte_Pim_dElecPwrCnsModInpPwr(void)
 *   float32 *Rte_Pim_dElecPwrCnsMotCurrDaxEstim(void)
 *   float32 *Rte_Pim_dElecPwrCnsMotCurrQaxEstim(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_ElecPwrCnsCtrlrInpR_Val(void)
 *   float32 Rte_Prm_ElecPwrCnsPrstcPwrLoss_Val(void)
 *
 *********************************************************************************************************************/


# define ElecPwrCns_START_SEC_CODE
# include "ElecPwrCns_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ElecPwrCnsPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVltgDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVltgQax_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ElecInpPwrEstim_Val(float32 data)
 *   Std_ReturnType Rte_Write_SplyCurrEstim_Val(float32 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ElecPwrCnsPer1 ElecPwrCnsPer1
FUNC(void, ElecPwrCns_CODE) ElecPwrCnsPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define ElecPwrCns_STOP_SEC_CODE
# include "ElecPwrCns_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_ELECPWRCNS_H */

#include "Rte_Stubs.h"
