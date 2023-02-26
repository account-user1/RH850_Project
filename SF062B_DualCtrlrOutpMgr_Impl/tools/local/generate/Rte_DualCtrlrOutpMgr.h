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
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF062B_DualCtrlrOutpMgr_Impl/tools/Component.dpa
 *     SW-C Type:  DualCtrlrOutpMgr
 *  Generated at:  Mon Oct 23 08:56:44 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <DualCtrlrOutpMgr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DUALCTRLROUTPMGR_H
# define _RTE_DUALCTRLROUTPMGR_H

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

# include "Rte_DualCtrlrOutpMgr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_DualCtrlrOutpMgr
{
  /* PIM Handles section */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FltLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_FltStsPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LtchRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_LtchSysStPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxOutpRefTiEna; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_MaxOutpTmrCmpl; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NonRecFltEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_NonRecFltRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_OutpSca; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLtch; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_PrevLtchNonRecFlt; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_RefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(boolean, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStLrngEnaPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SysStRefTiEnaLrng; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_DualCtrlrOutpMgr, RTE_CONST, RTE_CONST) Rte_Inst_DualCtrlrOutpMgr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_DualCtrlrOutpMgr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_DualEcuFltMtgtnEna_Logl (FALSE)
# define Rte_InitValue_DualEcuFltMtgtnSca_Val (0.5F)
# define Rte_InitValue_DualEcuMotCtrlMtgtnEna_Logl (FALSE)
# define Rte_InitValue_ImcSysSt_Val (3U)
# define Rte_InitValue_ImcSysStVld_Val (0U)
# define Rte_InitValue_MotAndThermProtnLoaMod_Val (0U)
# define Rte_InitValue_SysSt_Val (3U)
# define Rte_InitValue_VehSpd_Val (0.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DualCtrlrOutpMgr_ImcSysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DualCtrlrOutpMgr_ImcSysStVld_Val(P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DualCtrlrOutpMgr_MotAndThermProtnLoaMod_Val(P2VAR(uint8, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DualCtrlrOutpMgr_SysSt_Val(P2VAR(SysSt1, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_DualCtrlrOutpMgr_VehSpd_Val(P2VAR(float32, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) RefTmr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetSigImcData_logl_Oper(uint16 SigId_Arg, P2VAR(boolean, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DualCtrlrOutpMgr_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, P2VAR(uint32, AUTOMATIC, RTE_DUALCTRLROUTPMGR_APPL_VAR) TiSpan_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrConOutpSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrEnaRate_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrLimdOutpSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMaxOutpSca_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrFltThdTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMaxOutpTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMinOutpTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrNonRecFltThdTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrThdTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrVltgModFltThdTmr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u10p6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrDiRateTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u10p6_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrDiRateTblY_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(u9p7, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u9p7_10, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(boolean, RTE_CODE) Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ImcSysSt_Val Rte_Read_DualCtrlrOutpMgr_ImcSysSt_Val
# define Rte_Read_ImcSysStVld_Val Rte_Read_DualCtrlrOutpMgr_ImcSysStVld_Val
# define Rte_Read_MotAndThermProtnLoaMod_Val Rte_Read_DualCtrlrOutpMgr_MotAndThermProtnLoaMod_Val
# define Rte_Read_SysSt_Val Rte_Read_DualCtrlrOutpMgr_SysSt_Val
# define Rte_Read_VehSpd_Val Rte_Read_DualCtrlrOutpMgr_VehSpd_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_DualEcuFltMtgtnEna_Logl Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnEna_Logl
# define Rte_Write_DualEcuFltMtgtnSca_Val Rte_Write_DualCtrlrOutpMgr_DualEcuFltMtgtnSca_Val
# define Rte_Write_DualEcuMotCtrlMtgtnEna_Logl Rte_Write_DualCtrlrOutpMgr_DualEcuMotCtrlMtgtnEna_Logl


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetRefTmr100MicroSec32bit_Oper Rte_Call_DualCtrlrOutpMgr_GetRefTmr100MicroSec32bit_Oper
# define Rte_Call_GetSigImcData_logl_Oper Rte_Call_DualCtrlrOutpMgr_GetSigImcData_logl_Oper
# define Rte_Call_GetTiSpan100MicroSec32bit_Oper Rte_Call_DualCtrlrOutpMgr_GetTiSpan100MicroSec32bit_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt() \
  Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld() \
  Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna() \
  Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld() \
  Rte_IrvRead_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(data) \
  Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(data) \
  Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(data) \
  Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(data) \
  Rte_IrvWrite_DualCtrlrOutpMgr_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrConOutpSca_Val

# define Rte_Prm_DualCtrlrOutpMgrEnaRate_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrEnaRate_Val

# define Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrLimdOutpSca_Val

# define Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMaxOutpSca_Val

# define Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrFltThdTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMaxOutpTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrMinOutpTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrNonRecFltThdTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrThdTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrThdTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrVltgModFltThdTmr_Val

# define Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrDiRateTblY_Ary1D

# define Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D Rte_Prm_DualCtrlrOutpMgr_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_OutpSca() (Rte_Inst_DualCtrlrOutpMgr->Pim_OutpSca) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FltRefTiEnaLrng() (Rte_Inst_DualCtrlrOutpMgr->Pim_FltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LtchRefTiEnaLrng() (Rte_Inst_DualCtrlrOutpMgr->Pim_LtchRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxOutpRefTiEna() (Rte_Inst_DualCtrlrOutpMgr->Pim_MaxOutpRefTiEna) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NonRecFltRefTiEnaLrng() (Rte_Inst_DualCtrlrOutpMgr->Pim_NonRecFltRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_RefTiEnaLrng() (Rte_Inst_DualCtrlrOutpMgr->Pim_RefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStRefTiEnaLrng() (Rte_Inst_DualCtrlrOutpMgr->Pim_SysStRefTiEnaLrng) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FltLrngEnaPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_FltLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_FltStsPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_FltStsPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_LtchSysStPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_LtchSysStPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_MaxOutpTmrCmpl() (Rte_Inst_DualCtrlrOutpMgr->Pim_MaxOutpTmrCmpl) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_NonRecFltEnaPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_NonRecFltEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLtch() (Rte_Inst_DualCtrlrOutpMgr->Pim_PrevLtch) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_PrevLtchNonRecFlt() (Rte_Inst_DualCtrlrOutpMgr->Pim_PrevLtchNonRecFlt) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_SysStLrngEnaPrev() (Rte_Inst_DualCtrlrOutpMgr->Pim_SysStLrngEnaPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_OutpSca(void)
 *   uint32 *Rte_Pim_FltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_LtchRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_MaxOutpRefTiEna(void)
 *   uint32 *Rte_Pim_NonRecFltRefTiEnaLrng(void)
 *   uint32 *Rte_Pim_RefTiEnaLrng(void)
 *   uint32 *Rte_Pim_SysStRefTiEnaLrng(void)
 *   boolean *Rte_Pim_FltLrngEnaPrev(void)
 *   boolean *Rte_Pim_FltStsPrev(void)
 *   boolean *Rte_Pim_LtchImcDualEcuMotCtrlMtgtnEnaPrev(void)
 *   boolean *Rte_Pim_LtchSysStPrev(void)
 *   boolean *Rte_Pim_MaxOutpTmrCmpl(void)
 *   boolean *Rte_Pim_NonRecFltEnaPrev(void)
 *   boolean *Rte_Pim_PrevLtch(void)
 *   boolean *Rte_Pim_PrevLtchNonRecFlt(void)
 *   boolean *Rte_Pim_SysStLrngEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_DualCtrlrOutpMgrConOutpSca_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrEnaRate_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrLimdOutpSca_Val(void)
 *   float32 Rte_Prm_DualCtrlrOutpMgrMaxOutpSca_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrFltThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrMaxOutpTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrMinOutpTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrNonRecFltThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrThdTmr_Val(void)
 *   uint16 Rte_Prm_DualCtrlrOutpMgrVltgModFltThdTmr_Val(void)
 *   u10p6 *Rte_Prm_DualCtrlrOutpMgrDiRateTblY_Ary1D(void)
 *     Returnvalue: u10p6* is of type Ary1D_u10p6_10
 *   u9p7 *Rte_Prm_DualCtrlrOutpMgrVehSpdRefTblX_Ary1D(void)
 *     Returnvalue: u9p7* is of type Ary1D_u9p7_10
 *
 *********************************************************************************************************************/


# define DualCtrlrOutpMgr_START_SEC_CODE
# include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DualCtrlrOutpMgrInit1 DualCtrlrOutpMgrInit1
FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrPer1
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
 *   Std_ReturnType Rte_Read_ImcSysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_ImcSysStVld_Val(ImcArbnRxSts1 *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DualEcuFltMtgtnEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DualEcuFltMtgtnSca_Val(float32 data)
 *   Std_ReturnType Rte_Write_DualEcuMotCtrlMtgtnEna_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsnt(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEna(void)
 *   boolean Rte_IrvRead_DualCtrlrOutpMgrPer1_ImcDualEcuMotCtrlMtgtnEnaVld(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr_Arg, uint32 *TiSpan_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DualCtrlrOutpMgrPer1 DualCtrlrOutpMgrPer1
FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DualCtrlrOutpMgrPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsnt(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDiagcStsNonRcvrlReqDiFltPrsntVld(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEna(boolean data)
 *   void Rte_IrvWrite_DualCtrlrOutpMgrPer2_ImcDualEcuMotCtrlMtgtnEnaVld(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_logl_Oper(uint16 SigId_Arg, boolean *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_DualCtrlrOutpMgrPer2 DualCtrlrOutpMgrPer2
FUNC(void, DualCtrlrOutpMgr_CODE) DualCtrlrOutpMgrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define DualCtrlrOutpMgr_STOP_SEC_CODE
# include "DualCtrlrOutpMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigImcData_logl_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DUALCTRLROUTPMGR_H */

#include "Rte_Stubs.h"
