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
 *          File:  Rte_DualCtrlrOutpMgr.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DualCtrlrOutpMgr>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DUALCTRLROUTPMGR_H
# define _RTE_DUALCTRLROUTPMGR_H

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

# include "Rte_DualCtrlrOutpMgr_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_ImcSigArbn_ImcSysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(ImcArbnRxSts1, RTE_VAR_INIT) Rte_DualCtrlrOutpMgr_ImcSysStVld_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_LoaMgr_MotAndThermProtnLoaMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(SysSt1, RTE_VAR_INIT) Rte_SysStMod_SysSt_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_ImcSigArbn_VehSpdImcCorrd_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_DualEcuFltMtgtnSca_Val (0.5F)
#  define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
#  define Rte_InitValue_ImcSysSt_Val (3U)
#  define Rte_InitValue_ImcSysStVld_Val (0U)
#  define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
#  define Rte_InitValue_SysSt_Val (3U)
#  define Rte_InitValue_VehSpd_Val (0.0F)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_INIT) Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ImcSysSt_Val Rte_Read_DualCtrlrOutpMgr_ImcSysSt_Val
#  define Rte_Read_DualCtrlrOutpMgr_ImcSysSt_Val(data) (*(data) = Rte_ImcSigArbn_ImcSysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_ImcSysStVld_Val Rte_Read_DualCtrlrOutpMgr_ImcSysStVld_Val
#  define Rte_Read_DualCtrlrOutpMgr_ImcSysStVld_Val(data) (*(data) = Rte_DualCtrlrOutpMgr_ImcSysStVld_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_DualCtrlrOutpMgr_MotAndThermProtnLoaMod_Val
#  define Rte_Read_DualCtrlrOutpMgr_MotAndThermProtnLoaMod_Val(data) (*(data) = Rte_LoaMgr_MotAndThermProtnLoaMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_SysSt_Val Rte_Read_DualCtrlrOutpMgr_SysSt_Val
#  define Rte_Read_DualCtrlrOutpMgr_SysSt_Val(data) (*(data) = Rte_SysStMod_SysSt_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_VehSpd_Val Rte_Read_DualCtrlrOutpMgr_VehSpd_Val
#  define Rte_Read_DualCtrlrOutpMgr_VehSpd_Val(data) (*(data) = Rte_ImcSigArbn_VehSpdImcCorrd_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_DualEcuFltMtgtnEna_Logl Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl
#  define Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl(data) (Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DualEcuFltMtgtnSca_Val Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val
#  define Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val(data) (Rte_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_DualEcuMotCtrlMtgtnEna_Logl Rte_Write_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl
#  define Rte_Write_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl(data) (Rte_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_IMCARBN_APPL_CODE) GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_IMCARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_IMCARBN_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetSigImcData_logl_Oper GetSigImcData_logl_Oper
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt() \
  Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld() \
  Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna() \
  Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld() \
  Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(data) \
  (Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsnt = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(data) \
  (Rte_Irv_DualCtrlrOutpMgr_ImcDiagcStsNonRcvrlReqDiFltPrsntVld = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(data) \
  (Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEna = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(data) \
  (Rte_Irv_DualCtrlrOutpMgr_ImcDualEcuMotCtrlMtgtnEnaVld = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrConOutpSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrEnaRate_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrEnaRate_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrLimdOutpSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrMaxOutpSca_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrFltThdTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrMaxOutpTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrMinOutpTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrNonRecFltThdTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrThdTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrThdTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val() (((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrVltgModFltThdTmr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrDiRateTblY_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrDiRateTblY_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrVehSpdRefTblX_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Inin00_DEFAULT_RTE_CALPRM_GROUP])->DualCtrlrOutpMgrVehSpdRefTblX_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_OutpSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpRefTiEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_RefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_FltStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchImcDualEcuMotCtrlMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_LtchSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_MaxOutpTmrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_NonRecFltEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_PrevLtchNonRecFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_DualCtrlrOutpMgr_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_OutpSca() \
  (&Rte_DualCtrlrOutpMgr_OutpSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FltRefTiEnaLrng() \
  (&Rte_DualCtrlrOutpMgr_FltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LtchRefTiEnaLrng() \
  (&Rte_DualCtrlrOutpMgr_LtchRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxOutpRefTiEna() \
  (&Rte_DualCtrlrOutpMgr_MaxOutpRefTiEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NonRecFltRefTiEnaLrng() \
  (&Rte_DualCtrlrOutpMgr_NonRecFltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_RefTiEnaLrng() \
  (&Rte_DualCtrlrOutpMgr_RefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStRefTiEnaLrng() \
  (&Rte_DualCtrlrOutpMgr_SysStRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FltLrngEnaPrev() \
  (&Rte_DualCtrlrOutpMgr_FltLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FltStsPrev() \
  (&Rte_DualCtrlrOutpMgr_FltStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev() \
  (&Rte_DualCtrlrOutpMgr_LtchImcDualEcuMotCtrlMtgtnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LtchSysStPrev() \
  (&Rte_DualCtrlrOutpMgr_LtchSysStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MaxOutpTmrCmpl() \
  (&Rte_DualCtrlrOutpMgr_MaxOutpTmrCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_NonRecFltEnaPrev() \
  (&Rte_DualCtrlrOutpMgr_NonRecFltEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLtch() \
  (&Rte_DualCtrlrOutpMgr_PrevLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_PrevLtchNonRecFlt() \
  (&Rte_DualCtrlrOutpMgr_PrevLtchNonRecFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_SysStLrngEnaPrev() \
  (&Rte_DualCtrlrOutpMgr_SysStLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define DualCtrlrOutpMgr_START_SEC_CODE
# include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_DualCtrlrOutpMgrInit1 DualCtrlrOutpMgrInit1
#  define RTE_RUNNABLE_DualCtrlrOutpMgrPer1 DualCtrlrOutpMgrPer1
#  define RTE_RUNNABLE_DualCtrlrOutpMgrPer2 DualCtrlrOutpMgrPer2
# endif

FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer2(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define DualCtrlrOutpMgr_STOP_SEC_CODE
# include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DUALCTRLROUTPMGR_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
