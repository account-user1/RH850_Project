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
 *          File:  Rte_CDD_MotVel.h
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF040A_MotVel_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotVel
 *  Generated at:  Thu Jul 20 09:08:54 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotVel> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTVEL_H
# define _RTE_CDD_MOTVEL_H

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

# include "Rte_CDD_MotVel_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotVel
{
  /* PIM Handles section */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgBufIdxPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgBufIdxPrim; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u0p16_8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(Ary1D_u32_8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotAgTiBufPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MotVelIninCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotVelAvrgTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(u0p16, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotVelMotAgRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_dMotVelTiStampRef; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotVel, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotVel; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotVel, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_AssiMechPolarity_Val (1)
# define Rte_InitValue_MotAgBufIdx_Val (0U)
# define Rte_InitValue_MotAgMeclIdptSig_Val (3U)
# define Rte_InitValue_MotVelCrf_Val (0.0F)
# define Rte_InitValue_MotVelMrf_Val (0.0F)
# define Rte_InitValue_MotVelVld_Logl (TRUE)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_AssiMechPolarity_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBuf_Ary1D(P2VAR(Ary1D_u0p16_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgBufIdx_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgMeclIdptSig_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D(P2VAR(Ary1D_u32_8, AUTOMATIC, RTE_CDD_MOTVEL_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotVel_MotVelCrf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotVel_MotVelMrf_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotVel_MotVelVld_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_AssiMechPolarity_Val Rte_Read_CDD_MotVel_AssiMechPolarity_Val
# define Rte_Read_MotAgBuf_Ary1D Rte_Read_CDD_MotVel_MotAgBuf_Ary1D
# define Rte_Read_MotAgBufIdx_Val Rte_Read_CDD_MotVel_MotAgBufIdx_Val
# define Rte_Read_MotAgMeclIdptSig_Val Rte_Read_CDD_MotVel_MotAgMeclIdptSig_Val
# define Rte_Read_MotAgTiBuf_Ary1D Rte_Read_CDD_MotVel_MotAgTiBuf_Ary1D


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_MotVelCrf_Val Rte_Write_CDD_MotVel_MotVelCrf_Val
# define Rte_Write_MotVelMrf_Val Rte_Write_CDD_MotVel_MotVelMrf_Val
# define Rte_Write_MotVelVld_Logl Rte_Write_CDD_MotVel_MotVelVld_Logl


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_dMotVelAvrgTi() (Rte_Inst_CDD_MotVel->Pim_dMotVelAvrgTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotVelTiStampRef() (Rte_Inst_CDD_MotVel->Pim_dMotVelTiStampRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_dMotVelMotAgRef() (Rte_Inst_CDD_MotVel->Pim_dMotVelMotAgRef) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAgBufIdxPrev() (Rte_Inst_CDD_MotVel->Pim_MotAgBufIdxPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotAgBufIdxPrim() (Rte_Inst_CDD_MotVel->Pim_MotAgBufIdxPrim) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MotVelIninCntr() (Rte_Inst_CDD_MotVel->Pim_MotVelIninCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAgBufPrev() (*Rte_Inst_CDD_MotVel->Pim_MotAgBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAgBufPrev() (Rte_Inst_CDD_MotVel->Pim_MotAgBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#  define Rte_Pim_MotAgTiBufPrev() (*Rte_Inst_CDD_MotVel->Pim_MotAgTiBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# else
#  define Rte_Pim_MotAgTiBufPrev() (Rte_Inst_CDD_MotVel->Pim_MotAgTiBufPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotVelAvrgTi(void)
 *   float32 *Rte_Pim_dMotVelTiStampRef(void)
 *   u0p16 *Rte_Pim_dMotVelMotAgRef(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrev(void)
 *   uint8 *Rte_Pim_MotAgBufIdxPrim(void)
 *   uint8 *Rte_Pim_MotVelIninCntr(void)
 *   u0p16 *Rte_Pim_MotAgBufPrev(void)
 *     Returnvalue: u0p16* is of type Ary1D_u0p16_8
 *   uint32 *Rte_Pim_MotAgTiBufPrev(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_8
 *
 *********************************************************************************************************************/


# define CDD_MotVel_START_SEC_CODE
# include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotVelInit1 MotVelInit1
FUNC(void, CDD_MotVel_CODE) MotVelInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotVelPer2
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
 *   Std_ReturnType Rte_Read_AssiMechPolarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_MotAgBuf_Ary1D(u0p16 *data)
 *     Argument data: u0p16* is of type Ary1D_u0p16_8
 *   Std_ReturnType Rte_Read_MotAgBufIdx_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgMeclIdptSig_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotAgTiBuf_Ary1D(uint32 *data)
 *     Argument data: uint32* is of type Ary1D_u32_8
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotVelCrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelMrf_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotVelVld_Logl(boolean data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotVelPer2 MotVelPer2
FUNC(void, CDD_MotVel_CODE) MotVelPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotVel_STOP_SEC_CODE
# include "CDD_MotVel_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTVEL_H */

#include "Rte_Stubs.h"
