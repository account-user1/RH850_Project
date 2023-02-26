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
 *          File:  Rte_NxtrSwIds.h
 *     SW-C Type:  NxtrSwIds
 *  Generated at:  Tue Jan 26 09:31:07 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <NxtrSwIds> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_NXTRSWIDS_H
# define _RTE_NXTRSWIDS_H

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

# include "Rte_NxtrSwIds_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_NxtrSwIds
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_NxtrSwIds, RTE_CONST, RTE_CONST) Rte_Inst_NxtrSwIds; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_NxtrSwIds, TYPEDEF, RTE_CONST) Rte_Instance;


# define NxtrSwIds_START_SEC_CODE
# include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsInit1 NxtrSwIdsInit1
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsPsrInfoRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsPsrInfoRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType NxtrSwIdsPsrInfoRd_Oper(uint32 *PsrId, uint8 *PsrRev)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsPsrInfoRd_Oper NxtrSwIdsPsrInfoRd_Oper
FUNC(Std_ReturnType, NxtrSwIds_CODE) NxtrSwIdsPsrInfoRd_Oper(P2VAR(uint32, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrId, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) PsrRev); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwBuildDateTiRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwBuildDateTiRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwBuildDateTiRd_Oper(uint8 *SwBuildDateTi)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsSwBuildDateTiRd_Oper NxtrSwIdsSwBuildDateTiRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwBuildDateTiRd_Oper(P2VAR(Ary1D_u8_20, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwBuildDateTi); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelInfoRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelInfoRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelInfoRd_Oper(uint8 *SwOrigin, uint8 *SwAuthor)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsSwRelInfoRd_Oper NxtrSwIdsSwRelInfoRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelInfoRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwOrigin, P2VAR(Ary1D_u8_6, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwAuthor); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelNrRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelNrRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelNrRd_Oper(uint8 *SwRelNr)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsSwRelNrRd_Oper NxtrSwIdsSwRelNrRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelNrRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelNr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

/**********************************************************************************************************************
 *
 * Runnable Entity Name: NxtrSwIdsSwRelVerRd_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <NxtrSwIdsSwRelVerRd>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void NxtrSwIdsSwRelVerRd_Oper(uint8 *SwRelVer)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_NxtrSwIdsSwRelVerRd_Oper NxtrSwIdsSwRelVerRd_Oper
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(uint8, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(void, NxtrSwIds_CODE) NxtrSwIdsSwRelVerRd_Oper(P2VAR(Ary1D_u8_16, AUTOMATIC, RTE_NXTRSWIDS_APPL_VAR) SwRelVer); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif

# define NxtrSwIds_STOP_SEC_CODE
# include "NxtrSwIds_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1453826265
#    error "The magic number of the generated file <C:/Workspace/_EA4/_Components/NM003A_NxtrSwIds_Impl-kzdyfh/NM003A_NxtrSwIds_Impl/tools/contract/Rte_NxtrSwIds.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1453826265
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_NXTRSWIDS_H */
