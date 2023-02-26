/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_NxtrCalIds.h
 *     SW-C Type:  NxtrCalIds
 *  Generated at:  Mon Apr 11 14:40:14 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <NxtrCalIds> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NXTRCALIDS_H
# define _RTE_NXTRCALIDS_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_NxtrCalIds_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_NxtrCalIds
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_NxtrCalIds, RTE_CONST, RTE_CONST) Rte_Inst_NxtrCalIds; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_NxtrCalIds, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpRelNr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpTiStamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpRelNr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpTiStamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpRelNr_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint32, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpTiStamp_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpRelSt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpVers_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpRelSt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpVers_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpRelSt_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpVers_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_48, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_48, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_6, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpAuthor_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC_P2CONST(uint8, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC_P2CONST(Ary1D_u8_48, RTE_CONST_DEFAULT_RTE_CALPRM_GROUP, RTE_CODE) Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpDescr_Ary1D(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_NxtrCalIdsCal0DevlpRelNr_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpRelNr_Val

# define Rte_Prm_NxtrCalIdsCal0DevlpTiStamp_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpTiStamp_Val

# define Rte_Prm_NxtrCalIdsCal1DevlpRelNr_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpRelNr_Val

# define Rte_Prm_NxtrCalIdsCal1DevlpTiStamp_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpTiStamp_Val

# define Rte_Prm_NxtrCalIdsCal2DevlpRelNr_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpRelNr_Val

# define Rte_Prm_NxtrCalIdsCal2DevlpTiStamp_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpTiStamp_Val

# define Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpRelSt_Val

# define Rte_Prm_NxtrCalIdsCal0DevlpVers_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpVers_Val

# define Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpRelSt_Val

# define Rte_Prm_NxtrCalIdsCal1DevlpVers_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpVers_Val

# define Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpRelSt_Val

# define Rte_Prm_NxtrCalIdsCal2DevlpVers_Val Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpVers_Val

# define Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpAuthor_Ary1D

# define Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal0DevlpDescr_Ary1D

# define Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpAuthor_Ary1D

# define Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal1DevlpDescr_Ary1D

# define Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpAuthor_Ary1D

# define Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D Rte_Prm_NxtrCalIds_NxtrCalIdsCal2DevlpDescr_Ary1D



/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_NxtrCalIdsCal0DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal0DevlpTiStamp_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal1DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal1DevlpTiStamp_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal2DevlpRelNr_Val(void)
 *   uint32 Rte_Prm_NxtrCalIdsCal2DevlpTiStamp_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal0DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal0DevlpVers_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal1DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal1DevlpVers_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal2DevlpRelSt_Val(void)
 *   uint8 Rte_Prm_NxtrCalIdsCal2DevlpVers_Val(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal0DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal0DevlpDescr_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal1DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal1DevlpDescr_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal2DevlpAuthor_Ary1D(void)
 *   uint8 *Rte_Prm_NxtrCalIdsCal2DevlpDescr_Ary1D(void)
 *
 *********************************************************************************************************************/


# define NxtrCalIds_START_SEC_CODE
# include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsCalDevlpRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrCalIdsCalDevlpRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, uint8 *CalAuthor, uint8 *CalVers, uint32 *CalTiStamp, uint8 *CalDescr)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrCalIdsCalDevlpRd_Oper NxtrCalIdsCalDevlpRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, NxtrCalIds_CODE) NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalAuthor, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalVers, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalTiStamp, P2VAR(Ary1D_u8_48, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) CalDescr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsCalRelRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrCalIdsCalRelRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, uint32 *RelNr, uint8 *RelSt)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrCalIdsCalRelRd_Oper NxtrCalIdsCalRelRd_Oper
FUNC(void, NxtrCalIds_CODE) NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, P2VAR(uint32, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelNr, P2VAR(uint8, AUTOMATIC, RTE_NXTRCALIDS_APPL_VAR) RelSt); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrCalIdsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrCalIdsInit1 NxtrCalIdsInit1
FUNC(void, NxtrCalIds_CODE) NxtrCalIdsInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define NxtrCalIds_STOP_SEC_CODE
# include "NxtrCalIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1460390469
#    error "The magic number of the generated file <C:/Workspace/_EA4/T1xx/GM_T1XX_EPS_RH850_Working/NM004A_NxtrCalIds_Impl/tools/contract/Rte_NxtrCalIds.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1460390469
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_NXTRCALIDS_H */
