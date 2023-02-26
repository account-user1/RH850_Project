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
 *          File:  Rte_CDD_FordBlaBoxIfCmp2.h
 *        Config:  C:/Users/nz2610/Documents/Synergy/Working/CF112A_FordBlaBoxIfCmp2_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_FordBlaBoxIfCmp2
 *  Generated at:  Sun May  6 12:14:28 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_FordBlaBoxIfCmp2> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_FORDBLABOXIFCMP2_H
# define _RTE_CDD_FORDBLABOXIFCMP2_H

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

# include "Rte_CDD_FordBlaBoxIfCmp2_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_FordBlaBoxIfCmp2
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_EvasSteerAssiFctCallTog; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmp2, RTE_CONST, RTE_CONST) Rte_Inst_CDD_FordBlaBoxIfCmp2; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_FordBlaBoxIfCmp2, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_FordBrkPlsRednActvnCntr_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiFeatSt_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiIntSts_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiSwVers_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnArbnCmd_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnFeatSt_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnIntSts_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnSwVers_Val (0U)
# define Rte_InitValue_FordTqSteerCmpActvnCntr_Val (0U)
# define Rte_InitValue_FordVehEvasSteerAssiSts_Val (TRUE)
# define Rte_InitValue_FordWrSrvBrkPlsRednActvnCntr_Val (0U)
# define Rte_InitValue_FordWrSrvEvasSteerAssiIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvSteerTqDstbcRejctnIntSts_Val (0U)
# define Rte_InitValue_FordWrSrvTqSteerCmpActvnCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnArbnCmd_Val(P2VAR(FordArbnCmd1, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_FORDBLABOXIFCMP2_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val(FordFeatSt1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Val(Ford_EsaOn_B_Stat data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuId_Val Rte_Read_CDD_FordBlaBoxIfCmp2_EcuId_Val
# define Rte_Read_FordEvasSteerAssiArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiArbnCmd_Val
# define Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnArbnCmd_Val
# define Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvBrkPlsRednActvnCntr_Val
# define Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvEvasSteerAssiIntSts_Val
# define Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvSteerTqDstbcRejctnIntSts_Val
# define Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val Rte_Read_CDD_FordBlaBoxIfCmp2_FordWrSrvTqSteerCmpActvnCntr_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordBrkPlsRednActvnCntr_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordBrkPlsRednActvnCntr_Val
# define Rte_Write_FordEvasSteerAssiFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiFeatSt_Val
# define Rte_Write_FordEvasSteerAssiIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiIntSts_Val
# define Rte_Write_FordEvasSteerAssiSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiSwVers_Val
# define Rte_Write_FordEvasSteerAssiTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordEvasSteerAssiTqReq_Val
# define Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnFeatSt_Val
# define Rte_Write_FordSteerTqDstbcRejctnIntSts_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnIntSts_Val
# define Rte_Write_FordSteerTqDstbcRejctnSwVers_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnSwVers_Val
# define Rte_Write_FordSteerTqDstbcRejctnTqReq_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordSteerTqDstbcRejctnTqReq_Val
# define Rte_Write_FordTqSteerCmpActvnCntr_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordTqSteerCmpActvnCntr_Val
# define Rte_Write_FordVehEvasSteerAssiSts_Val Rte_Write_CDD_FordBlaBoxIfCmp2_FordVehEvasSteerAssiSts_Val


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_EvasSteerAssiFctCallTog() (Rte_Inst_CDD_FordBlaBoxIfCmp2->Pim_EvasSteerAssiFctCallTog) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   boolean *Rte_Pim_EvasSteerAssiFctCallTog(void)
 *
 *********************************************************************************************************************/


# define CDD_FordBlaBoxIfCmp2_START_SEC_CODE
# include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp2Init1
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
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordBrkPlsRednActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordTqSteerCmpActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiSts_Val(Ford_EsaOn_B_Stat data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordBlaBoxIfCmp2Init1 FordBlaBoxIfCmp2Init1
FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Init1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordBlaBoxIfCmp2Per1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_EcuId_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnArbnCmd_Val(FordArbnCmd1 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvBrkPlsRednActvnCntr_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvEvasSteerAssiIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvSteerTqDstbcRejctnIntSts_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_FordWrSrvTqSteerCmpActvnCntr_Val(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordBrkPlsRednActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnFeatSt_Val(FordFeatSt1 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnIntSts_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnSwVers_Val(uint32 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnTqReq_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordTqSteerCmpActvnCntr_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehEvasSteerAssiSts_Val(Ford_EsaOn_B_Stat data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordBlaBoxIfCmp2Per1 FordBlaBoxIfCmp2Per1
FUNC(void, CDD_FordBlaBoxIfCmp2_CODE) FordBlaBoxIfCmp2Per1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_FordBlaBoxIfCmp2_STOP_SEC_CODE
# include "CDD_FordBlaBoxIfCmp2_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_FORDBLABOXIFCMP2_H */
