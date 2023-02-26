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
 *          File:  Rte_FordMsg40ABusHiSpd.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <FordMsg40ABusHiSpd>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_FORDMSG40ABUSHISPD_H
# define _RTE_FORDMSG40ABUSHISPD_H

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

# include "Rte_FordMsg40ABusHiSpd_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_DiagcMgr_ClrDiagcFlgProxy_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordCanDtcInhb8_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_ClrDiagcFlgProxy_Val (0U)
#  define Rte_InitValue_FordCanDtcInhb_Val (1U)
#  define Rte_InitValue_FordEpsLifeCycMod_Val (0U)
#  define Rte_InitValue_FordMfgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordMissMsgDiagcInhb_Val (0U)
#  define Rte_InitValue_FordVehGlbRealTi_Val (0.1F)
#  define Rte_InitValue_FordVehTireCircum_Val (65534.0F)
# endif


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData(P2VAR(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData(P2VAR(Ford_VehicleGGCCData, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D(P2CONST(uint8, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D(P2CONST(Ary1D_u08_17, AUTOMATIC, RTE_FORDMSG40ABUSHISPD_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_ClrDiagcFlgProxy_Val Rte_Read_FordMsg40ABusHiSpd_ClrDiagcFlgProxy_Val
#  define Rte_Read_FordMsg40ABusHiSpd_ClrDiagcFlgProxy_Val(data) (*(data) = Rte_DiagcMgr_ClrDiagcFlgProxy_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordCanDtcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordCanDtcInhb_Val
#  define Rte_Read_FordMsg40ABusHiSpd_FordCanDtcInhb_Val(data) (*(data) = Rte_FordCanDtcInhb_FordCanDtcInhb8_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordEpsLifeCycMod_Val Rte_Read_FordMsg40ABusHiSpd_FordEpsLifeCycMod_Val
#  define Rte_Read_FordMsg40ABusHiSpd_FordEpsLifeCycMod_Val(data) (*(data) = Rte_FordCanDtcInhb_FordEpsLifeCycMod_Val, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMfgDiagcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val
#  define Rte_Read_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val(data) (*(data) = Rte_FordMsg40ABusHiSpd_FordMfgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_FordMissMsgDiagcInhb_Val Rte_Read_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val
#  define Rte_Read_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val(data) (*(data) = Rte_FordMsg40ABusHiSpd_FordMissMsgDiagcInhb_Val, ((Std_ReturnType)RTE_E_UNCONNECTED)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_Ford_VehGGCCData_Ford_VehicleGGCCData Rte_Read_FordMsg40ABusHiSpd_Ford_VehGGCCData_Ford_VehicleGGCCData


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_FordVehGlbRealTi_Val Rte_Write_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val
#  define Rte_Write_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val(data) (Rte_FordMsg40ABusHiSpd_FordVehGlbRealTi_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_FordVehIdnNr_Ary1D Rte_Write_FordMsg40ABusHiSpd_FordVehIdnNr_Ary1D
#  define Rte_Write_FordVehTireCircum_Val Rte_Write_FordMsg40ABusHiSpd_FordVehTireCircum_Val
#  define Rte_Write_FordMsg40ABusHiSpd_FordVehTireCircum_Val(data) (Rte_FordMsg40ABusHiSpd_FordVehTireCircum_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetRefTmr100MicroSec32bit_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) RefTmr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetRefTmr100MicroSec32bit_Oper(arg1) (GetRefTmr100MicroSec32bit_Oper(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CDD_NXTRTI_APPL_CODE) GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, P2VAR(uint32, AUTOMATIC, RTE_CDD_NXTRTI_APPL_VAR) TiSpan); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CDD_NXTRTI_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_GetTiSpan100MicroSec32bit_Oper(arg1, arg2) (GetTiSpan100MicroSec32bit_Oper(arg1, arg2), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_FordMsg40ABusHiSpdMissMsgFaildThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg40ABusHiSpdMissMsgFaildThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_FordMsg40ABusHiSpdMissMsgPassdThd_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->FordMsg40ABusHiSpdMissMsgPassdThd_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehGlbRealTiPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(float32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehTireCircumPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgFaildRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_MissMsgPassdRefTi; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordClrDiagcFlgProxyPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40AMiss; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehMsg40ARxd; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC100Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_6, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC101Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_5, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrC102Prev; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(Ary1D_u08_17, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_FordMsg40ABusHiSpd_FordVehIdnNrPrev; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_FordVehGlbRealTiPrev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehGlbRealTiPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehTireCircumPrev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehTireCircumPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgFaildRefTi() \
  (&Rte_FordMsg40ABusHiSpd_MissMsgFaildRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_MissMsgPassdRefTi() \
  (&Rte_FordMsg40ABusHiSpd_MissMsgPassdRefTi) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordClrDiagcFlgProxyPrev() \
  (&Rte_FordMsg40ABusHiSpd_FordClrDiagcFlgProxyPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg40AMiss() \
  (&Rte_FordMsg40ABusHiSpd_FordVehMsg40AMiss) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_FordVehMsg40ARxd() \
  (&Rte_FordMsg40ABusHiSpd_FordVehMsg40ARxd) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_FordVehIdnNrC100Prev() (&((*RtePim_FordVehIdnNrC100Prev())[0]))
#  else
#   define Rte_Pim_FordVehIdnNrC100Prev() RtePim_FordVehIdnNrC100Prev()
#  endif
#  define RtePim_FordVehIdnNrC100Prev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehIdnNrC100Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_FordVehIdnNrC101Prev() (&((*RtePim_FordVehIdnNrC101Prev())[0]))
#  else
#   define Rte_Pim_FordVehIdnNrC101Prev() RtePim_FordVehIdnNrC101Prev()
#  endif
#  define RtePim_FordVehIdnNrC101Prev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehIdnNrC101Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_FordVehIdnNrC102Prev() (&((*RtePim_FordVehIdnNrC102Prev())[0]))
#  else
#   define Rte_Pim_FordVehIdnNrC102Prev() RtePim_FordVehIdnNrC102Prev()
#  endif
#  define RtePim_FordVehIdnNrC102Prev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehIdnNrC102Prev) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Pim_FordVehIdnNrPrev() (&((*RtePim_FordVehIdnNrPrev())[0]))
#  else
#   define Rte_Pim_FordVehIdnNrPrev() RtePim_FordVehIdnNrPrev()
#  endif
#  define RtePim_FordVehIdnNrPrev() \
  (&Rte_FordMsg40ABusHiSpd_FordVehIdnNrPrev) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define FordMsg40ABusHiSpd_START_SEC_CODE
# include "FordMsg40ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_FordMsg40ABusHiSpdInit1 FordMsg40ABusHiSpdInit1
#  define RTE_RUNNABLE_FordMsg40ABusHiSpdPer1 FordMsg40ABusHiSpdPer1
# endif

FUNC(void, FordMsg40ABusHiSpd_CODE) FordMsg40ABusHiSpdInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, FordMsg40ABusHiSpd_CODE) FordMsg40ABusHiSpdPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define FordMsg40ABusHiSpd_STOP_SEC_CODE
# include "FordMsg40ABusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_FORDMSG40ABUSHISPD_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
