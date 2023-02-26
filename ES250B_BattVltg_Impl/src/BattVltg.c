/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  BattVltg.c
 *     SW-C Type:  BattVltg
 *  Generated at:  Wed May 18 08:37:05 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <BattVltg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : BattVltg.c
* Module Description: Implementation of Battery Voltage measurement for single inverter design (ES250B)
* Project           : CBD 
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : mzjphh %
*-------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                            SCR #
* --------  -------  --------  --------------------------------------------------------------------------   --------
* 05/18/16  1        NS        Initial Version                                                          	EA4#5643  
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_BattVltg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
 
/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take 
                                              on the return value for Rte_Read_*, Rte_Write_* */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/******************************************** Embedded Local Constants ***********************************************/
#define BRDGFLTVLTG_VOLT_F32    18.0F
#define BRDGVLTGMAX_VOLT_F32    26.5F
#define BRDGVLTGMIN_VOLT_F32    6.0F

#define BATTVLTGNOCORRLN        0U
#define BATTVLTGCORRLNSTS1      1U
#define BATTVLTGCORRLNSTS2      2U

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BattVltgPrevBattVltg(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_BattVltgSwdMax_Val(void)
 *
 *********************************************************************************************************************/


#define BattVltg_START_SEC_CODE
#include "BattVltg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BattVltgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, BattVltg_CODE) BattVltgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BattVltgInit1
 *********************************************************************************************************************/
    /* REQ: ES250B #72 I */
    *Rte_Pim_BattVltgPrevBattVltg() = BRDGFLTVLTG_VOLT_F32;
    /* ENDREQ: ES250B #72 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: BattVltgPer1
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
 *   Std_ReturnType Rte_Read_BattSwdVltgCorrlnSts_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_BattVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_BattVltgSwd1_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_BrdgVltg_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, BattVltg_CODE) BattVltgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: BattVltgPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(uint8, AUTOMATIC)   BattSwdVltgCorrlnSts_Cnt_T_u08;
    VAR(float32, AUTOMATIC) BattVltg_Volt_T_f32;
    VAR(float32, AUTOMATIC) BattVltgSwd1_Volt_T_f32;
    
    /* Output */
    VAR(float32, AUTOMATIC) BrdgVltg_Volt_T_f32 = 6.0F;
    
    /*** Read inputs ***/
    (void)Rte_Read_BattSwdVltgCorrlnSts_Val(&BattSwdVltgCorrlnSts_Cnt_T_u08);   /* REQ: ES250B #65 I */
    (void)Rte_Read_BattVltg_Val(&BattVltg_Volt_T_f32);                          /* REQ: ES250B #48 I */
    (void)Rte_Read_BattVltgSwd1_Val(&BattVltgSwd1_Volt_T_f32);                  /* REQ: ES250B #49 I */
    
    switch (BattSwdVltgCorrlnSts_Cnt_T_u08)
    {
        case BATTVLTGCORRLNSTS2:
            /* REQ: ES250B #78 I */
            BrdgVltg_Volt_T_f32 = BattVltgSwd1_Volt_T_f32;
            *Rte_Pim_BattVltgPrevBattVltg() = BattVltgSwd1_Volt_T_f32;
            break;
            /* ENDREQ: ES250B #78 I */
            
        case BATTVLTGCORRLNSTS1:
            /* REQ: ES250B #77 I */
            BrdgVltg_Volt_T_f32 = BattVltg_Volt_T_f32;
            *Rte_Pim_BattVltgPrevBattVltg() = BattVltg_Volt_T_f32;
            break;
            /* ENDREQ: ES250B #77 I */
            
        case BATTVLTGNOCORRLN:
            /* REQ: ES250B #73 I */
            BrdgVltg_Volt_T_f32 = *Rte_Pim_BattVltgPrevBattVltg();
            break;
            /* ENDREQ: ES250B #73 I */
            
        default:
            break;
    }
    
    /*** Limit output ***/
    BrdgVltg_Volt_T_f32 = Lim_f32(BrdgVltg_Volt_T_f32, BRDGVLTGMIN_VOLT_F32, BRDGVLTGMAX_VOLT_F32); /* REQ: ES250B #75 I */
    
    /*** Write output ***/
    (void)Rte_Write_BrdgVltg_Val(BrdgVltg_Volt_T_f32);  /* REQ: ES250B #51 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define BattVltg_STOP_SEC_CODE
#include "BattVltg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
