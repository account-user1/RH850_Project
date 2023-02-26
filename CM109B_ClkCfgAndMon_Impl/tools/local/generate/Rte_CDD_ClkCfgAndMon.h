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
 *          File:  Rte_CDD_ClkCfgAndMon.h
 *        Config:  C:/_EA4SynWrkgCpy/CM109B_ClkCfgAndMon_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_ClkCfgAndMon
 *  Generated at:  Sun Nov 19 17:15:41 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_ClkCfgAndMon> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_CLKCFGANDMON_H
# define _RTE_CDD_CLKCFGANDMON_H

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

# include "Rte_CDD_ClkCfgAndMon_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_ClkCfgAndMon
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_ClkCfgAndMon, RTE_CONST, RTE_CONST) Rte_Inst_CDD_ClkCfgAndMon; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_ClkCfgAndMon, TYPEDEF, RTE_CONST) Rte_Instance;


# define CDD_ClkCfgAndMon_START_SEC_CODE
# include "CDD_ClkCfgAndMon_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: ClkCfgAndMonInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_ClkCfgAndMonInit1 ClkCfgAndMonInit1
FUNC(void, CDD_ClkCfgAndMon_CODE) ClkCfgAndMonInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_ClkCfgAndMon_STOP_SEC_CODE
# include "CDD_ClkCfgAndMon_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_CLKCFGANDMON_H */

#include "Rte_Stubs.h"
