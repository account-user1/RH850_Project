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
 *          File:  Rte_MotQuadDetn.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF101A_MotQuadDetn_Impl/tools/Component.dpa
 *     SW-C Type:  MotQuadDetn
 *  Generated at:  Thu Jun 15 13:23:39 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <MotQuadDetn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_MOTQUADDETN_H
# define _RTE_MOTQUADDETN_H

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

# include "Rte_MotQuadDetn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_MotQuadDetn
{
  /* PIM Handles section */
  P2VAR(s18p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgCumvPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(sint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotDirInstsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(sint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotTqCmdSignPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(s18p13, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotQuadDetnMotAgCumvDelta; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(sint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotQuadDetnTqCmdSign; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_MotQuadDetn, RTE_CONST, RTE_CONST) Rte_Inst_MotQuadDetn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_MotQuadDetn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_MotAgCumvAlgndMrf_Val (0)
# define Rte_InitValue_MotDirInsts_Val (1)
# define Rte_InitValue_MotTqCmd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotQuadDetn_MotAgCumvAlgndMrf_Val(P2VAR(s18p13, AUTOMATIC, RTE_MOTQUADDETN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_MotQuadDetn_MotTqCmd_Val(P2VAR(float32, AUTOMATIC, RTE_MOTQUADDETN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotQuadDetn_MotDirInsts_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_MotQuadDetn_MotQuad_Val(MotQuad1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(s18p13, RTE_CODE) Rte_Prm_MotQuadDetn_MotQuadDetnMotDirHysInsts_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_MotAgCumvAlgndMrf_Val Rte_Read_MotQuadDetn_MotAgCumvAlgndMrf_Val
# define Rte_Read_MotTqCmd_Val Rte_Read_MotQuadDetn_MotTqCmd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotDirInsts_Val Rte_Write_MotQuadDetn_MotDirInsts_Val
# define Rte_Write_MotQuad_Val Rte_Write_MotQuadDetn_MotQuad_Val


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_MotQuadDetnMotDirHysInsts_Val Rte_Prm_MotQuadDetn_MotQuadDetnMotDirHysInsts_Val

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_MotAgCumvPrev() (Rte_Inst_MotQuadDetn->Pim_MotAgCumvPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotQuadDetnMotAgCumvDelta() (Rte_Inst_MotQuadDetn->Pim_dMotQuadDetnMotAgCumvDelta) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotDirInstsPrev() (Rte_Inst_MotQuadDetn->Pim_MotDirInstsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotTqCmdSignPrev() (Rte_Inst_MotQuadDetn->Pim_MotTqCmdSignPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotQuadDetnTqCmdSign() (Rte_Inst_MotQuadDetn->Pim_dMotQuadDetnTqCmdSign) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   s18p13 *Rte_Pim_MotAgCumvPrev(void)
 *   s18p13 *Rte_Pim_dMotQuadDetnMotAgCumvDelta(void)
 *   sint8 *Rte_Pim_MotDirInstsPrev(void)
 *   sint8 *Rte_Pim_MotTqCmdSignPrev(void)
 *   sint8 *Rte_Pim_dMotQuadDetnTqCmdSign(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   s18p13 Rte_Prm_MotQuadDetnMotDirHysInsts_Val(void)
 *
 *********************************************************************************************************************/


# define MotQuadDetn_START_SEC_CODE
# include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotQuadDetnInit1 MotQuadDetnInit1
FUNC(void, MotQuadDetn_CODE) MotQuadDetnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotQuadDetnPer1
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
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(s18p13 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotDirInsts_Val(sint8 data)
 *   Std_ReturnType Rte_Write_MotQuad_Val(MotQuad1 data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotQuadDetnPer1 MotQuadDetnPer1
FUNC(void, MotQuadDetn_CODE) MotQuadDetnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define MotQuadDetn_STOP_SEC_CODE
# include "MotQuadDetn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_MOTQUADDETN_H */

#include "Rte_Stubs.h"
