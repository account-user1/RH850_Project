/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_Adcf0CfgAndUse.c
 *        Config:  C:/Users/nz2999/Documents/Synergy/ccm_wa/ses_dev_ea4/CM301A_Adcf0CfgAndUse_Impl-nz2999/CM301A_Adcf0CfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_Adcf0CfgAndUse
 *  Generated at:  Wed Aug 16 09:45:49 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_Adcf0CfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_Adcf0CfgAndUse.c
 * Module Description: Nexteer ADCf0 Initialisation
 * Project           : CBD
 * Author            : Mateusz Bartocha
 **********************************************************************************************************************
 * Version Control:
 * %version:          2 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 08/03/17  1        MB        Initial Version                                                               EA4#10924
 * 08/16/17  2        KByrski   Corrected ADCF0ADCR2_DFMT init value, init function renamed                   EA4#14547
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_CDD_Adcf0CfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/************************************************ Include Statements *************************************************/
#include "ADCF0_RegDefns.h"
#include "CDD_Adcf0CfgAndUse.h"

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
 * uint8: Integer in interval [0...255] (standard type)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint8 *Rte_Pim_Adcf0DiagcEndPtr(void)
 *   uint8 *Rte_Pim_Adcf0DiagcStrtPtr(void)
 *
 *********************************************************************************************************************/


#define CDD_Adcf0CfgAndUse_START_SEC_CODE
#include "CDD_Adcf0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Adcf0CfgAndUseInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf0CfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_Adcf0CfgAndUse_CODE) Adcf0CfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Adcf0CfgAndUseInit1
 *********************************************************************************************************************/

    ADCF0VCR0           = ADCF0CFGANDUSE_ADCF0VCR00_CNT_U32;
    ADCF0VCR1           = ADCF0CFGANDUSE_ADCF0VCR01_CNT_U32;
    ADCF0VCR2           = ADCF0CFGANDUSE_ADCF0VCR02_CNT_U32;
    ADCF0VCR3           = ADCF0CFGANDUSE_ADCF0VCR03_CNT_U32;
    ADCF0VCR4           = ADCF0CFGANDUSE_ADCF0VCR04_CNT_U32;
    ADCF0VCR5           = ADCF0CFGANDUSE_ADCF0VCR05_CNT_U32;
    ADCF0VCR6           = ADCF0CFGANDUSE_ADCF0VCR06_CNT_U32;
    ADCF0VCR7           = ADCF0CFGANDUSE_ADCF0VCR07_CNT_U32;
    ADCF0VCR8           = ADCF0CFGANDUSE_ADCF0VCR08_CNT_U32;
    ADCF0VCR9           = ADCF0CFGANDUSE_ADCF0VCR09_CNT_U32;
    ADCF0VCR10          = ADCF0CFGANDUSE_ADCF0VCR10_CNT_U32;
    ADCF0VCR11          = ADCF0CFGANDUSE_ADCF0VCR11_CNT_U32;
    ADCF0VCR12          = ADCF0CFGANDUSE_ADCF0VCR12_CNT_U32;
    ADCF0VCR13          = ADCF0CFGANDUSE_ADCF0VCR13_CNT_U32;
    ADCF0VCR14          = ADCF0CFGANDUSE_ADCF0VCR14_CNT_U32;
    ADCF0VCR15          = ADCF0CFGANDUSE_ADCF0VCR15_CNT_U32;
    ADCF0VCR16          = ADCF0CFGANDUSE_ADCF0VCR16_CNT_U32;
    ADCF0VCR17          = ADCF0CFGANDUSE_ADCF0VCR17_CNT_U32;
    ADCF0VCR18          = ADCF0CFGANDUSE_ADCF0VCR18_CNT_U32;
    ADCF0VCR19          = ADCF0CFGANDUSE_ADCF0VCR19_CNT_U32;
    ADCF0VCR20          = ADCF0CFGANDUSE_ADCF0VCR20_CNT_U32;
    ADCF0VCR21          = ADCF0CFGANDUSE_ADCF0VCR21_CNT_U32;
    ADCF0VCR22          = ADCF0CFGANDUSE_ADCF0VCR22_CNT_U32;
    ADCF0VCR23          = ADCF0CFGANDUSE_ADCF0VCR23_CNT_U32;
    ADCF0ADCR1_SUSMTD   = 0U;
    ADCF0ADCR2_ADDNT    = 0U;
    ADCF0ADCR2_DFMT     = 1U;
    ADCF0SFTCR_IDEIE    = 0U;
    ADCF0SFTCR_PEIE     = 0U;
    ADCF0SFTCR_OWEIE    = 0U;
    ADCF0SFTCR_ULEIE    = 0U;
    ADCF0SFTCR_RDCLRE   = 1U;
    ADCF0ULLMTBR0       = 0U;
    ADCF0ULLMTBR1       = 0U;
    ADCF0ULLMTBR2       = 0U;
    ADCF0SGSTCR0        = 0U;
    ADCF0SGCR0          = 0U;
    ADCF0SGVCSP0        = 0U;
    ADCF0SGVCEP0        = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
    ADCF0SGMCYCR0       = 0U;
    ADCF0ULLMSR0        = 0U;
    ADCF0SGSTCR1        = 0U;
    ADCF0SGCR1          = ADCF0CFGANDUSE_ADCF0SGSWENACNVNANDDMAINTRPT_CNT_U08; /* 17 */
    ADCF0SGVCSP1        = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
    ADCF0SGVCEP1        = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08; /* 23 */
    ADCF0SGMCYCR1       = 0U;
    ADCF0ULLMSR1        = 0U;
    ADCF0SGSTCR2        = 0U;
    ADCF0SGCR2          = ADCF0CFGANDUSE_ADCF0SGSWENACNVN_CNT_U08; /* 1 */
    ADCF0SGVCSP2        = ADCF0CFGANDUSE_ADCF0SGVCSP2_CNT_U08;
    ADCF0SGVCEP2        = ADCF0CFGANDUSE_ADCF0SGVCEP2_CNT_U08;
    ADCF0SGMCYCR2       = 0U;
    ADCF0ULLMSR2        = 0U;
    ADCF0SGSTCR3        = 0U;
    ADCF0SGCR3          = ADCF0CFGANDUSE_ADCF0SGSWENACNVN_CNT_U08; /* 1 */
    ADCF0SGVCSP3        = ADCF0CFGANDUSE_ADCF0SGVCSP3_CNT_U08;
    ADCF0SGVCEP3        = ADCF0CFGANDUSE_ADCF0SGVCEP3_CNT_U08;
    ADCF0SGMCYCR3       = 0U;
    ADCF0ULLMSR3        = 0U;
    ADCF0SGSTCR4        = 0U;
    ADCF0SGCR4          = 0U;
    ADCF0SGVCSP4        = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08;
    ADCF0SGVCEP4        = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08;
    ADCF0SGMCYCR4       = 0U;
    ADCF0ULLMSR4        = 0U;

    ADCF0SGSTCR0        = ADCF0CFGANDUSE_ADCF0SGSWENACNVN_CNT_U08;

    *Rte_Pim_Adcf0DiagcEndPtr() = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08;
    *Rte_Pim_Adcf0DiagcStrtPtr() = ADCF0CFGANDUSE_ADCF0DIAGCSCANGROUPMAX_CNT_U08;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_Adcf0CfgAndUse_STOP_SEC_CODE
#include "CDD_Adcf0CfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
