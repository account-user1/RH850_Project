/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  AssiPahSum.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/SF034B_AssiPahSum_Impl/tools/Component.dpa
 *     SW-C Type:  AssiPahSum
 *  Generated at:  Fri May 12 10:25:19 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <AssiPahSum>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2017, 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : AssiPahSum.c
* Module Description: Implementation of Assist Path Summation FDD SF034B
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/06/15   1       NS        Initial version                                                                EA4#936
* 05/12/17   2       SPP       Remove Application Data Types                                                  EA4#11059
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_AssiPahSum.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


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


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_AssiPahSumHysCmpLim_Val(void)
 *
 *********************************************************************************************************************/


#define AssiPahSum_START_SEC_CODE
#include "AssiPahSum_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: AssiPahSumPer1
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
 *   Std_ReturnType Rte_Read_AssiCmdBas_Val(float32 *data)
 *   Std_ReturnType Rte_Read_AssiHiFrqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HysCmpCmd_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiCmdSum_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPahSumPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, AssiPahSum_CODE) AssiPahSumPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: AssiPahSumPer1
 *********************************************************************************************************************/
    /* Input variables */
    VAR(float32, AUTOMATIC) AssiCmdBas_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiHiFrqCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HysCmpCmd_MotNwtMtr_T_f32;
    
    
    /* Output variable */
    VAR(float32, AUTOMATIC) AssiCmdSum_MotNwtMtr_T_f32;
    
    
    VAR(float32, AUTOMATIC) AssiCmdBasLtd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) AssiHiFrqCmdLtd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HysCmpCmdLtd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) InputSum_MotNwtMtr_T_f32;

    
    /* Read inputs */
    (void)Rte_Read_AssiCmdBas_Val(&AssiCmdBas_MotNwtMtr_T_f32);     
    (void)Rte_Read_AssiHiFrqCmd_Val(&AssiHiFrqCmd_MotNwtMtr_T_f32); 
    (void)Rte_Read_HysCmpCmd_Val(&HysCmpCmd_MotNwtMtr_T_f32);       
    
    
    /* Calculate the output by limiting the sum of the limited inputs */
    HysCmpCmdLtd_MotNwtMtr_T_f32 = Lim_f32(HysCmpCmd_MotNwtMtr_T_f32,               
                                           -Rte_Prm_AssiPahSumHysCmpLim_Val(),
                                           Rte_Prm_AssiPahSumHysCmpLim_Val());
    AssiHiFrqCmdLtd_MotNwtMtr_T_f32 = Lim_f32(AssiHiFrqCmd_MotNwtMtr_T_f32,         
                                              SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                              SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    AssiCmdBasLtd_MotNwtMtr_T_f32 = Lim_f32(AssiCmdBas_MotNwtMtr_T_f32,             
                                            SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                            SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    
    InputSum_MotNwtMtr_T_f32 = AssiCmdBasLtd_MotNwtMtr_T_f32 + AssiHiFrqCmdLtd_MotNwtMtr_T_f32 + HysCmpCmdLtd_MotNwtMtr_T_f32;
    
    AssiCmdSum_MotNwtMtr_T_f32 = Lim_f32(InputSum_MotNwtMtr_T_f32,
                                         SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32,
                                         SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
                                          
    
    /* Write output */
    (void)Rte_Write_AssiCmdSum_Val(AssiCmdSum_MotNwtMtr_T_f32);     

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define AssiPahSum_STOP_SEC_CODE
#include "AssiPahSum_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
