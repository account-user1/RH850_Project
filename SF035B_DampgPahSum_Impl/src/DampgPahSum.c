/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DampgPahSum.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF035B_DampgPahSum_Impl/tools/Component.dpa
 *     SW-C Type:  DampgPahSum
 *  Generated at:  Fri May 26 15:07:43 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <DampgPahSum>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DampgPahSum.c
* Module Description: Implementation of Damping Path Summation FDD SF035B
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/06/15   1       NS        Initial version                                                                EA4#940
* 05/26/17   2       SPP       Remove application data types                                                 EA4#11061
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_DampgPahSum.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "SysGlbPrm.h"
 #include "NxtrMath.h"
 
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read and Rte_Write */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 *
 *********************************************************************************************************************/


#define DampgPahSum_START_SEC_CODE
#include "DampgPahSum_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: DampgPahSumPer1
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
 *   Std_ReturnType Rte_Read_DampgCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_InertiaCmpVelCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DampgCmd_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgPahSumPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DampgPahSum_CODE) DampgPahSumPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: DampgPahSumPer1
 *********************************************************************************************************************/
    /* Input variables */
    VAR(float32, AUTOMATIC) DampgCmdBas_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) InertiaCmpVelCmd_MotNwtMtr_T_f32;
    
    
    /* Output variable */
    VAR(float32, AUTOMATIC) DampgCmd_MotNwtMtr_T_f32;
    
    
    VAR(float32, AUTOMATIC) DampgCmdBasLtd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) InertiaCmpVelCmdLtd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) InputDiff_MotNwtMtr_T_f32;
    
    
    /* Read inputs */
    (void)Rte_Read_DampgCmdBas_Val(&DampgCmdBas_MotNwtMtr_T_f32);           
    (void)Rte_Read_InertiaCmpVelCmd_Val(&InertiaCmpVelCmd_MotNwtMtr_T_f32); 
    
    
    /* Calculate the output by limiting the difference of the limited inputs */
    DampgCmdBasLtd_MotNwtMtr_T_f32 = Lim_f32(DampgCmdBas_MotNwtMtr_T_f32,           
                                             SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                             SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    InertiaCmpVelCmdLtd_MotNwtMtr_T_f32 = Lim_f32(InertiaCmpVelCmd_MotNwtMtr_T_f32, 
                                                  SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                                  SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
                                                                                              
    InputDiff_MotNwtMtr_T_f32 = DampgCmdBasLtd_MotNwtMtr_T_f32 - InertiaCmpVelCmdLtd_MotNwtMtr_T_f32;
    
    DampgCmd_MotNwtMtr_T_f32 = Lim_f32(InputDiff_MotNwtMtr_T_f32,
                                       SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                       SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    
    /* Write output */
    (void)Rte_Write_DampgCmd_Val(DampgCmd_MotNwtMtr_T_f32); 

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DampgPahSum_STOP_SEC_CODE
#include "DampgPahSum_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
