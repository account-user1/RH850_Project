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
 *          File:  Rte_CDD_RamMem.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_RamMem>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_RAMMEM_H
# define _RTE_CDD_RAMMEM_H

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

# include "Rte_CDD_RamMem_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_INIT) Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_GlbRamEccSngBitCntrOutp_Val (0U)
#  define Rte_InitValue_LclRamEccSngBitCntrOutp_Val (0U)
# endif


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_GlbRamEccSngBitCntrOutp_Val Rte_Write_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val
#  define Rte_Write_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val(data) (Rte_CDD_RamMem_GlbRamEccSngBitCntrOutp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_LclRamEccSngBitCntrOutp_Val Rte_Write_CDD_RamMem_LclRamEccSngBitCntrOutp_Val
#  define Rte_Write_CDD_RamMem_LclRamEccSngBitCntrOutp_Val(data) (Rte_CDD_RamMem_LclRamEccSngBitCntrOutp_Val = (data), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_DIAGCMGRPROXYAPPL10_APPL_CODE) SetNtcSts10_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_DIAGCMGRPROXYAPPL10_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_SetNtcSts_Oper SetNtcSts10_Oper


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamFailrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamWordLineRead; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemCanRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemDtsRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufADblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemFrRamTmpBufBDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemGtmRamSngBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan0RamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemMCan1RamDblBitEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi0RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi1RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi2RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpi3RamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint32, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_dRamMemSpiRamEccErrAdr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_GlbRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(boolean, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) Rte_CDD_RamMem_LclRamEccSngBitSoftFailr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_Appl10_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_GlbRamFailrAdr() \
  (&Rte_CDD_RamMem_GlbRamFailrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GlbRamWordLineRead() \
  (&Rte_CDD_RamMem_GlbRamWordLineRead) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LclRamFailrAdr() \
  (&Rte_CDD_RamMem_LclRamFailrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LclRamWordLineRead() \
  (&Rte_CDD_RamMem_LclRamWordLineRead) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemCanRamDblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemCanRamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemCanRamSngBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemCanRamSngBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemDtsRamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemDtsRamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemFrRamDblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemFrRamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemFrRamSngBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemFrRamSngBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemFrRamTmpBufADblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemFrRamTmpBufADblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemFrRamTmpBufBDblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemFrRamTmpBufBDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemGtmRamSngBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemGtmRamSngBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemMCan0RamDblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemMCan0RamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemMCan1RamDblBitEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemMCan1RamDblBitEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemSpi0RamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemSpi0RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemSpi1RamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemSpi1RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemSpi2RamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemSpi2RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemSpi3RamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemSpi3RamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_dRamMemSpiRamEccErrAdr() \
  (&Rte_CDD_RamMem_dRamMemSpiRamEccErrAdr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GlbRamEccSngBitCntr() \
  (&Rte_CDD_RamMem_GlbRamEccSngBitCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LclRamEccSngBitCntr() \
  (&Rte_CDD_RamMem_LclRamEccSngBitCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_GlbRamEccSngBitSoftFailr() \
  (&Rte_CDD_RamMem_GlbRamEccSngBitSoftFailr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

#  define Rte_Pim_LclRamEccSngBitSoftFailr() \
  (&Rte_CDD_RamMem_LclRamEccSngBitSoftFailr) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CDD_RamMem_START_SEC_CODE
# include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RamMemInit1 RamMemInit1
#  define RTE_RUNNABLE_RamMemPer1 RamMemPer1
# endif

FUNC(void, CDD_RamMem_CODE) RamMemInit1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CDD_RamMem_CODE) RamMemPer1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CDD_RamMem_STOP_SEC_CODE
# include "CDD_RamMem_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_RAMMEM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
