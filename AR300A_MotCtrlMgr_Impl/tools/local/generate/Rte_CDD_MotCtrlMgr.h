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
 *          File:  Rte_CDD_MotCtrlMgr.h
 *        Config:  C:/Users/czgng4/Desktop/MotCtrlMgr/AR300A_MotCtrlMgr_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotCtrlMgr
 *  Generated at:  Thu May 18 21:34:42 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <CDD_MotCtrlMgr> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CDD_MOTCTRLMGR_H
# define _RTE_CDD_MOTCTRLMGR_H

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

# include "Rte_CDD_MotCtrlMgr_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CDD_MotCtrlMgr
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CDD_MotCtrlMgr, RTE_CONST, RTE_CONST) Rte_Inst_CDD_MotCtrlMgr; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CDD_MotCtrlMgr, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_ReadMotCtrlWriteTwoMsEnum_Val (4294967295U)
# define Rte_InitValue_ReadMotCtrlWriteTwoMsbool_Logl (FALSE)
# define Rte_InitValue_ReadMotCtrlWriteTwoMsf32_Val (1.0F)
# define Rte_InitValue_ReadMotCtrlWriteTwoMss08_Val (-128)
# define Rte_InitValue_ReadMotCtrlWriteTwoMss16_Val (-32768)
# define Rte_InitValue_ReadMotCtrlWriteTwoMss32_Val (-2147483647)
# define Rte_InitValue_ReadMotCtrlWriteTwoMsu08_Val (255U)
# define Rte_InitValue_ReadMotCtrlWriteTwoMsu16_Val (65535U)
# define Rte_InitValue_ReadMotCtrlWriteTwoMsu32_Val (4294967295U)
# define Rte_InitValue_Signal0_Logl (FALSE)
# define Rte_InitValue_Signal2_Val (-128)
# define Rte_InitValue_Signal3_Val (-128)
# define Rte_InitValue_Signal4_Val (-128)
# define Rte_InitValue_Signal5_Logl (FALSE)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val (65535U)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl (FALSE)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val (1.0F)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMss08_Val (-128)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMss16_Val (-32768)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMss32_Val (-2147483647)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val (255U)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val (65535U)
# define Rte_InitValue_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val (4294967295U)
# define Rte_InitValue_WriteMotCtrlReadTwoMsEnum_Val (65535U)
# define Rte_InitValue_WriteMotCtrlReadTwoMsbool_Logl (TRUE)
# define Rte_InitValue_WriteMotCtrlReadTwoMsf32_Val (1.0F)
# define Rte_InitValue_WriteMotCtrlReadTwoMss08_Val (-128)
# define Rte_InitValue_WriteMotCtrlReadTwoMss16_Val (-32768)
# define Rte_InitValue_WriteMotCtrlReadTwoMss32_Val (-2147483647)
# define Rte_InitValue_WriteMotCtrlReadTwoMsu08_Val (255U)
# define Rte_InitValue_WriteMotCtrlReadTwoMsu16_Val (65535U)
# define Rte_InitValue_WriteMotCtrlReadTwoMsu32_Val (4294967295U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsEnum_Val(P2VAR(TestEnum_u32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsbool_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsf32_Val(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss08_Val(P2VAR(sint8, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss16_Val(P2VAR(sint16, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss32_Val(P2VAR(sint32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss32Ary_Ary1D(P2VAR(sint32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss32Ary_Ary1D(P2VAR(Ary_s32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu08_Val(P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu16_Val(P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu32_Val(P2VAR(uint32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_Signal0_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CDD_MotCtrlMgr_Signal5_Logl(P2VAR(boolean, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_Signal2_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_Signal3_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_Signal4_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val(TestEnum_u16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss08_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss16_Val(sint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss32_Val(sint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D(P2CONST(uint16, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D(P2CONST(Ary_u16, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsEnum_Val(TestEnum_u16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsbool_Logl(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsf32_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss08_Val(sint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss16_Val(sint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss32_Val(sint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu08_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu16_Val(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu32_Val(uint32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu32Ary_Ary1D(P2CONST(uint32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu32Ary_Ary1D(P2CONST(Ary_u32, AUTOMATIC, RTE_CDD_MOTCTRLMGR_APPL_DATA) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotCtrlMgr_DmaEna2MilliSecToMotCtrlTrf_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CDD_MotCtrlMgr_DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsEnum_Val
# define Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsbool_Logl
# define Rte_Read_ReadMotCtrlWriteTwoMsf32_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsf32_Val
# define Rte_Read_ReadMotCtrlWriteTwoMss08_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss08_Val
# define Rte_Read_ReadMotCtrlWriteTwoMss16_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss16_Val
# define Rte_Read_ReadMotCtrlWriteTwoMss32_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss32_Val
# define Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Ary1D Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMss32Ary_Ary1D
# define Rte_Read_ReadMotCtrlWriteTwoMsu08_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu08_Val
# define Rte_Read_ReadMotCtrlWriteTwoMsu16_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu16_Val
# define Rte_Read_ReadMotCtrlWriteTwoMsu32_Val Rte_Read_CDD_MotCtrlMgr_ReadMotCtrlWriteTwoMsu32_Val
# define Rte_Read_Signal0_Logl Rte_Read_CDD_MotCtrlMgr_Signal0_Logl
# define Rte_Read_Signal5_Logl Rte_Read_CDD_MotCtrlMgr_Signal5_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_Signal2_Val Rte_Write_CDD_MotCtrlMgr_Signal2_Val
# define Rte_Write_Signal3_Val Rte_Write_CDD_MotCtrlMgr_Signal3_Val
# define Rte_Write_Signal4_Val Rte_Write_CDD_MotCtrlMgr_Signal4_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss08_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss16_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMss32_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D
# define Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val
# define Rte_Write_WriteMotCtrlReadTwoMsEnum_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsEnum_Val
# define Rte_Write_WriteMotCtrlReadTwoMsbool_Logl Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsbool_Logl
# define Rte_Write_WriteMotCtrlReadTwoMsf32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsf32_Val
# define Rte_Write_WriteMotCtrlReadTwoMss08_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss08_Val
# define Rte_Write_WriteMotCtrlReadTwoMss16_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss16_Val
# define Rte_Write_WriteMotCtrlReadTwoMss32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMss32_Val
# define Rte_Write_WriteMotCtrlReadTwoMsu08_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu08_Val
# define Rte_Write_WriteMotCtrlReadTwoMsu16_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu16_Val
# define Rte_Write_WriteMotCtrlReadTwoMsu32_Val Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu32_Val
# define Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Ary1D Rte_Write_CDD_MotCtrlMgr_WriteMotCtrlReadTwoMsu32Ary_Ary1D


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper Rte_Call_CDD_MotCtrlMgr_DmaEna2MilliSecToMotCtrlTrf_Oper
# define Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper Rte_Call_CDD_MotCtrlMgr_DmaWaitForMotCtrlTo2MilliSecTrf_Oper




# define CDD_MotCtrlMgr_START_SEC_CODE
# include "CDD_MotCtrlMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlMgrPer1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_Signal2_Val(sint8 data)
 *   Std_ReturnType Rte_Write_Signal3_Val(sint8 data)
 *   Std_ReturnType Rte_Write_Signal4_Val(sint8 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val(TestEnum_u16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val(float32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val(sint8 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val(sint16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val(sint32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D(const uint16 *data)
 *     Argument data: uint16* is of type Ary_u16
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val(uint32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsEnum_Val(TestEnum_u16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsbool_Logl(boolean data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsf32_Val(float32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMss08_Val(sint8 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMss16_Val(sint16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMss32_Val(sint32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsu08_Val(uint8 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsu16_Val(uint16 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsu32_Val(uint32 data)
 *   Std_ReturnType Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Ary1D(const uint32 *data)
 *     Argument data: uint32* is of type Ary_u32
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCtrlMgrPer1 MotCtrlMgrPer1
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotCtrlMgrPer2
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
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val(TestEnum_u32 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsf32_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMss08_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMss16_Val(sint16 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMss32_Val(sint32 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Ary1D(sint32 *data)
 *     Argument data: sint32* is of type Ary_s32
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsu08_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsu16_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_ReadMotCtrlWriteTwoMsu32_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_Signal0_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Signal5_Logl(boolean *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_MotCtrlMgrPer2 MotCtrlMgrPer2
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CDD_MotCtrlMgr_STOP_SEC_CODE
# include "CDD_MotCtrlMgr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_DmaWaitForMotCtrlTo2MilliSecTrf_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CDD_MOTCTRLMGR_H */

#include "Rte_Stubs.h"
