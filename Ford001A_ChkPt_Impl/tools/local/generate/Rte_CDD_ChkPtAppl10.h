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
 *          File:  Rte_CDD_ChkPtAppl10.h
 *        Config:  C:/Users/gz324f/Desktop/working/component/Ford_001A_ChkPt/Ford001A_ChkPt_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_ChkPtAppl10
 *  Generated at:  Wed Jul 19 15:35:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_ChkPtAppl10> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CHKPTAPPL10_H
# define _RTE_CDD_CHKPTAPPL10_H

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

# include "Rte_CDD_ChkPtAppl10_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_ChkPtAppl10
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_ChkPtAppl10, RTE_CONST, RTE_CONST) Rte_Inst_CDD_ChkPtAppl10; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_ChkPtAppl10, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_100ms_Appl10_End_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_100ms_Appl10_Strt_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_10ms_Appl10_End_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_10ms_Appl10_Strt_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_2ms_Appl10_End_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_2ms_Appl10_Strt_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_4ms_Appl10_End_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_ChkPtAppl10_ChkPt_4ms_Appl10_Strt_CheckpointReached(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_ChkPt_100ms_Appl10_End_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_100ms_Appl10_End_CheckpointReached
# define Rte_Call_ChkPt_100ms_Appl10_Strt_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_100ms_Appl10_Strt_CheckpointReached
# define Rte_Call_ChkPt_10ms_Appl10_End_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_10ms_Appl10_End_CheckpointReached
# define Rte_Call_ChkPt_10ms_Appl10_Strt_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_10ms_Appl10_Strt_CheckpointReached
# define Rte_Call_ChkPt_2ms_Appl10_End_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_2ms_Appl10_End_CheckpointReached
# define Rte_Call_ChkPt_2ms_Appl10_Strt_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_2ms_Appl10_Strt_CheckpointReached
# define Rte_Call_ChkPt_4ms_Appl10_End_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_4ms_Appl10_End_CheckpointReached
# define Rte_Call_ChkPt_4ms_Appl10_Strt_CheckpointReached Rte_Call_CDD_ChkPtAppl10_ChkPt_4ms_Appl10_Strt_CheckpointReached




# define CDD_ChkPtAppl10_START_SEC_CODE
# include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPtAppl10_Init1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPtAppl10_Init1 ChkPtAppl10_Init1
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPtAppl10_Init1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_100msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_100ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_100msAppl10End ChkPt_100msAppl10End
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10End(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_100msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_100ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_100msAppl10Strt ChkPt_100msAppl10Strt
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_100msAppl10Strt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_10msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_10ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_10msAppl10End ChkPt_10msAppl10End
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10End(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_10msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_10ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_10msAppl10Strt ChkPt_10msAppl10Strt
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_10msAppl10Strt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_2msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_2ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_2msAppl10End ChkPt_2msAppl10End
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10End(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_2msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_2ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_2msAppl10Strt ChkPt_2msAppl10Strt
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_2msAppl10Strt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_4msAppl10End
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_4ms_Appl10_End_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_4msAppl10End ChkPt_4msAppl10End
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10End(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkPt_4msAppl10Strt
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 4ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_ChkPt_4ms_Appl10_Strt_CheckpointReached(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_WdgM_AliveSupervision_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ChkPt_4msAppl10Strt ChkPt_4msAppl10Strt
FUNC(void, CDD_ChkPtAppl10_CODE) ChkPt_4msAppl10Strt(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_ChkPtAppl10_STOP_SEC_CODE
# include "CDD_ChkPtAppl10_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_WdgM_AliveSupervision_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CHKPTAPPL10_H */
