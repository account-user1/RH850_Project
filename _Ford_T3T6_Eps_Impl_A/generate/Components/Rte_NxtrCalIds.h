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
 *          File:  Rte_NxtrCalIds.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <NxtrCalIds>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NXTRCALIDS_H
# define _RTE_NXTRCALIDS_H

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

# include "Rte_NxtrCalIds_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

#  define Rte_Prm_NxtrCalIdsCal0DevlpRelNr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpRelNr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal0DevlpTiStamp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpTiStamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal1DevlpRelNr_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpRelNr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal1DevlpTiStamp_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpTiStamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal2DevlpRelNr_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpRelNr_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal2DevlpTiStamp_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpTiStamp_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpRelSt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal0DevlpVers_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpVers_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpRelSt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal1DevlpVers_Val() (((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpVers_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpRelSt_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Prm_NxtrCalIdsCal2DevlpVers_Val() (((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpVers_Val) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpAuthor_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpAuthor_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpDesc_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal0DevlpDesc_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpAuthor_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn02Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal1DevlpAuthor_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D() (&(Rte_C_Ary1D_u8_48_0[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D() (&Rte_C_Ary1D_u8_48_0) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpAuthor_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpAuthor_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

#  ifdef RTE_PTR2ARRAYBASETYPE_PASSING
#   define Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D() (&(((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpDesc_Ary1D[0])) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  else
#   define Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D() (&((P2CONST(Rte_Calprm_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP_Type, AUTOMATIC, RTE_CONST))RteParameterBase[Rte_CalprmElementGroup_CalRegn01Cmn_DEFAULT_RTE_CALPRM_GROUP])->NxtrCalIdsCal2DevlpDesc_Ary1D) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  endif

# endif /* !defined(RTE_CORE) */


# define NxtrCalIds_START_SEC_CODE
# include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_NxtrCalIdsCalDevlpRd_Oper NxtrCalIdsCalDevlpRd_Oper
#  define RTE_RUNNABLE_NxtrCalIdsCalRelRd_Oper NxtrCalIdsCalRelRd_Oper
#  define RTE_RUNNABLE_NxtrCalIdsInit1 NxtrCalIdsInit1
# endif

# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(Ary1D_u8_48, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(void, NxtrCalIds_CODE) NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelNr, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, NxtrCalIds_CODE) NxtrCalIdsInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define NxtrCalIds_STOP_SEC_CODE
# include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_NXTRCALIDS_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
