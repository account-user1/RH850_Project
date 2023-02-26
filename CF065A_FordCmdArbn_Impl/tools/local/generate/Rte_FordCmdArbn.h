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
 *          File:  Rte_FordCmdArbn.h
 *        Config:  C:/Component/CF065A_FordCmdArbn_Impl/tools/Component.dpa
 *     SW-C Type:  FordCmdArbn
 *  Generated at:  Wed May  2 13:04:38 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordCmdArbn> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDCMDARBN_H
# define _RTE_FORDCMDARBN_H

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

# include "Rte_FordCmdArbn_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_FordCmdArbn
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_FordCmdArbn, RTE_CONST, RTE_CONST) Rte_Inst_FordCmdArbn; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_FordCmdArbn, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_EcuId_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlArbnCmd_Val (0U)
# define Rte_InitValue_FordActvNiblCtrlFeatSt_Val (0U)
# define Rte_InitValue_FordDrvrSteerRcmdnArbnCmd_Val (0U)
# define Rte_InitValue_FordDrvrSteerRcmdnFeatSt_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordEvasSteerAssiFeatSt_Val (0U)
# define Rte_InitValue_FordExtAgCtrlArbnCmd_Val (0U)
# define Rte_InitValue_FordExtAgCtrlFeatSt_Val (0U)
# define Rte_InitValue_FordLaneDprtrWarnArbnCmd_Val (0U)
# define Rte_InitValue_FordLaneDprtrWarnFeatSt_Val (0U)
# define Rte_InitValue_FordLaneKeepAssiArbnCmd_Val (0U)
# define Rte_InitValue_FordLaneKeepAssiFeatSt_Val (0U)
# define Rte_InitValue_FordLatCtrlArbnCmd_Val (0U)
# define Rte_InitValue_FordLatCtrlFeatSt_Val (0U)
# define Rte_InitValue_FordPullDriftCmpArbnCmd_Val (0U)
# define Rte_InitValue_FordPullDriftCmpFeatSt_Val (0U)
# define Rte_InitValue_FordPullDriftCmpLrngArbnCmd_Val (0U)
# define Rte_InitValue_FordPullDriftCmpLrngFeatSt_Val (0U)
# define Rte_InitValue_FordSpare1ArbnCmd_Val (0U)
# define Rte_InitValue_FordSpare1FeatSt_Val (0U)
# define Rte_InitValue_FordSpare2ArbnCmd_Val (0U)
# define Rte_InitValue_FordSpare2FeatSt_Val (0U)
# define Rte_InitValue_FordSpare3ArbnCmd_Val (0U)
# define Rte_InitValue_FordSpare3FeatSt_Val (0U)
# define Rte_InitValue_FordSteerModlSts_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnArbnCmd_Val (0U)
# define Rte_InitValue_FordSteerTqDstbcRejctnFeatSt_Val (0U)
# define Rte_InitValue_FordSysOperMotTqCmdSca_Val (1.0F)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_EcuId_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordActvNiblCtrlFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordDrvrSteerRcmdnFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordEvasSteerAssiFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordExtAgCtrlFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordLaneDprtrWarnFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordLaneKeepAssiFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordLatCtrlFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordPullDriftCmpFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordPullDriftCmpLrngFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSpare1FeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSpare2FeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSpare3FeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSteerModlSts_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSteerTqDstbcRejctnFeatSt_Val(P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordCmdArbn_FordSysOperMotTqCmdSca_Val(P2VAR(float32, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordExtAgCtrlArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordLatCtrlArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordPullDriftCmpArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordSpare1ArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordSpare2ArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordSpare3ArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_FordCmdArbn_GetSigImcData_u08_Oper(uint16 SigId_Arg, P2VAR(uint8, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) Data_Arg, P2VAR(ImcArbnRxSts1, AUTOMATIC, RTE_FORDCMDARBN_APPL_VAR) Sts_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnNormAssiTqThd_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerAssiDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerAssiDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnExtAgCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnExtAgCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnExtAgDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnExtAgDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnNonStMask_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnNonStMask_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare1Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare1Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare1DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare1DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare2Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare2Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare2DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare2DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare3Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare3Deactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare3DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSpare3DeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeactvn_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(boolean, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_logl_13, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordActvNiblCtrlFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordEvasSteerAssiFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordLaneDprtrWarnFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordLatCtrlFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordPullDriftCmpFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare1Feat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare2Feat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare3Feat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_LaneKeepAssiFeat(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_SteerSts(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordActvNiblCtrlFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordEvasSteerAssiFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordLaneDprtrWarnFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordLatCtrlFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordPullDriftCmpFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordPullDriftCmpLrngFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare1Feat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare2Feat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare3Feat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_LaneKeepAssiFeat(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_SteerSts(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_EcuId_Val Rte_Read_FordCmdArbn_EcuId_Val
# define Rte_Read_FordActvNiblCtrlFeatSt_Val Rte_Read_FordCmdArbn_FordActvNiblCtrlFeatSt_Val
# define Rte_Read_FordDrvrSteerRcmdnFeatSt_Val Rte_Read_FordCmdArbn_FordDrvrSteerRcmdnFeatSt_Val
# define Rte_Read_FordEvasSteerAssiFeatSt_Val Rte_Read_FordCmdArbn_FordEvasSteerAssiFeatSt_Val
# define Rte_Read_FordExtAgCtrlFeatSt_Val Rte_Read_FordCmdArbn_FordExtAgCtrlFeatSt_Val
# define Rte_Read_FordLaneDprtrWarnFeatSt_Val Rte_Read_FordCmdArbn_FordLaneDprtrWarnFeatSt_Val
# define Rte_Read_FordLaneKeepAssiFeatSt_Val Rte_Read_FordCmdArbn_FordLaneKeepAssiFeatSt_Val
# define Rte_Read_FordLatCtrlFeatSt_Val Rte_Read_FordCmdArbn_FordLatCtrlFeatSt_Val
# define Rte_Read_FordPullDriftCmpFeatSt_Val Rte_Read_FordCmdArbn_FordPullDriftCmpFeatSt_Val
# define Rte_Read_FordPullDriftCmpLrngFeatSt_Val Rte_Read_FordCmdArbn_FordPullDriftCmpLrngFeatSt_Val
# define Rte_Read_FordSpare1FeatSt_Val Rte_Read_FordCmdArbn_FordSpare1FeatSt_Val
# define Rte_Read_FordSpare2FeatSt_Val Rte_Read_FordCmdArbn_FordSpare2FeatSt_Val
# define Rte_Read_FordSpare3FeatSt_Val Rte_Read_FordCmdArbn_FordSpare3FeatSt_Val
# define Rte_Read_FordSteerModlSts_Val Rte_Read_FordCmdArbn_FordSteerModlSts_Val
# define Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val Rte_Read_FordCmdArbn_FordSteerTqDstbcRejctnFeatSt_Val
# define Rte_Read_FordSysOperMotTqCmdSca_Val Rte_Read_FordCmdArbn_FordSysOperMotTqCmdSca_Val


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_FordActvNiblCtrlArbnCmd_Val Rte_Write_FordCmdArbn_FordActvNiblCtrlArbnCmd_Val
# define Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val Rte_Write_FordCmdArbn_FordDrvrSteerRcmdnArbnCmd_Val
# define Rte_Write_FordEvasSteerAssiArbnCmd_Val Rte_Write_FordCmdArbn_FordEvasSteerAssiArbnCmd_Val
# define Rte_Write_FordExtAgCtrlArbnCmd_Val Rte_Write_FordCmdArbn_FordExtAgCtrlArbnCmd_Val
# define Rte_Write_FordLaneDprtrWarnArbnCmd_Val Rte_Write_FordCmdArbn_FordLaneDprtrWarnArbnCmd_Val
# define Rte_Write_FordLaneKeepAssiArbnCmd_Val Rte_Write_FordCmdArbn_FordLaneKeepAssiArbnCmd_Val
# define Rte_Write_FordLatCtrlArbnCmd_Val Rte_Write_FordCmdArbn_FordLatCtrlArbnCmd_Val
# define Rte_Write_FordPullDriftCmpArbnCmd_Val Rte_Write_FordCmdArbn_FordPullDriftCmpArbnCmd_Val
# define Rte_Write_FordPullDriftCmpLrngArbnCmd_Val Rte_Write_FordCmdArbn_FordPullDriftCmpLrngArbnCmd_Val
# define Rte_Write_FordSpare1ArbnCmd_Val Rte_Write_FordCmdArbn_FordSpare1ArbnCmd_Val
# define Rte_Write_FordSpare2ArbnCmd_Val Rte_Write_FordCmdArbn_FordSpare2ArbnCmd_Val
# define Rte_Write_FordSpare3ArbnCmd_Val Rte_Write_FordCmdArbn_FordSpare3ArbnCmd_Val
# define Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val Rte_Write_FordCmdArbn_FordSteerTqDstbcRejctnArbnCmd_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetSigImcData_u08_Oper Rte_Call_FordCmdArbn_GetSigImcData_u08_Oper


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordActvNiblCtrlFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordEvasSteerAssiFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordLaneDprtrWarnFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordLatCtrlFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordPullDriftCmpFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare1Feat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare2Feat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSpare3Feat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_LaneKeepAssiFeat(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_FordCmdArbnPer1_SteerSts(data) \
  Rte_IrvWrite_FordCmdArbn_FordCmdArbnPer1_SteerSts(data)
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordActvNiblCtrlFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordEvasSteerAssiFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordLaneDprtrWarnFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordLatCtrlFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordPullDriftCmpFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordPullDriftCmpLrngFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare1Feat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare2Feat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSpare3Feat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_LaneKeepAssiFeat()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_FordCmdArbnPer2_SteerSts() \
  Rte_IrvRead_FordCmdArbn_FordCmdArbnPer2_SteerSts()
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_FordCmdArbnNormAssiTqThd_Val Rte_Prm_FordCmdArbn_FordCmdArbnNormAssiTqThd_Val

# define Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerAssiDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnExtAgCtrlDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnExtAgDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnNonStMask_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnNonStMask_Ary1D

# define Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare1Deactvn_Ary1D

# define Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare1DeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare2Deactvn_Ary1D

# define Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare2DeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare3Deactvn_Ary1D

# define Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSpare3DeniedActvnReq_Ary1D

# define Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeactvn_Ary1D

# define Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D Rte_Prm_FordCmdArbn_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_FordCmdArbnNormAssiTqThd_Val(void)
 *   boolean *Rte_Prm_FordCmdArbnActvNiblCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnActvNiblCtrlDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnDrvrSteerDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnDrvrSteerRcmdnDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnEvasSteerAssiDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnEvasSteerDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnExtAgCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnExtAgDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneDprtrWarnDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneDprtrWarnDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneKeepAssiDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLaneKeepAssiDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLatCtrlDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnLatCtrlDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnNonStMask_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnPullDriftCmpLrngDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare1Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare1DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare2Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare2DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare3Deactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSpare3DeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSteerDstbcDeactvn_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *   boolean *Rte_Prm_FordCmdArbnSteerDstbcDeniedActvnReq_Ary1D(void)
 *     Returnvalue: boolean* is of type Ary1D_logl_13
 *
 *********************************************************************************************************************/


# define FordCmdArbn_START_SEC_CODE
# include "FordCmdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordCmdArbnInit1 FordCmdArbnInit1
FUNC(void, FordCmdArbn_CODE) FordCmdArbnInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnPer1
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
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordDrvrSteerRcmdnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEvasSteerAssiFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneDprtrWarnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLaneKeepAssiFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordLatCtrlFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordPullDriftCmpLrngFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare1FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare2FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSpare3FeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSteerModlSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSteerTqDstbcRejctnFeatSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordSysOperMotTqCmdSca_Val(float32 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordActvNiblCtrlFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordDrvrSteerRcmdnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordEvasSteerAssiFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordLaneDprtrWarnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordLatCtrlFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordPullDriftCmpLrngFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare1Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare2Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSpare3Feat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_FordSteerTqDstbcRejctnFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_LaneKeepAssiFeat(uint8 data)
 *   void Rte_IrvWrite_FordCmdArbnPer1_SteerSts(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetSigImcData_u08_Oper(uint16 SigId_Arg, uint8 *Data_Arg, ImcArbnRxSts1 *Sts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordCmdArbnPer1 FordCmdArbnPer1
FUNC(void, FordCmdArbn_CODE) FordCmdArbnPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordCmdArbnPer2
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
 *   Std_ReturnType Rte_Read_FordExtAgCtrlFeatSt_Val(uint8 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordActvNiblCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordDrvrSteerRcmdnArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordEvasSteerAssiArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordExtAgCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLaneDprtrWarnArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLaneKeepAssiArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordLatCtrlArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordPullDriftCmpLrngArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare1ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare2ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSpare3ArbnCmd_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordSteerTqDstbcRejctnArbnCmd_Val(uint8 data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordActvNiblCtrlFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordDrvrSteerRcmdnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordEvasSteerAssiFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordLaneDprtrWarnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordLatCtrlFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordPullDriftCmpLrngFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare1Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare2Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSpare3Feat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_FordSteerTqDstbcRejctnFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_LaneKeepAssiFeat(void)
 *   uint8 Rte_IrvRead_FordCmdArbnPer2_SteerSts(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_FordCmdArbnPer2 FordCmdArbnPer2
FUNC(void, FordCmdArbn_CODE) FordCmdArbnPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define FordCmdArbn_STOP_SEC_CODE
# include "FordCmdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetSigImcData_u08_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDCMDARBN_H */

#include "Rte_Stubs.h"
