/* TODO Stub file remove later */
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordVehSpdArbn.c
 *        Config:  C:/Users/gz324f/Desktop/working/_Ford_T3T6_Eps_Impl_A_Working/CF049A_FordVehSpdArbn_Impl/tools/Component.dpa
 *     SW-C Type:  FordVehSpdArbn
 *  Generated at:  Tue Feb  6 11:39:08 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordVehSpdArbn>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : FordVehSpdArbn.c
* Module Description: Implementation of Ford Vehicle Speed Arbitration(CF049A) FDD
* Project           : CBD 
* Author            : Matthew Leser
***********************************************************************************************************************
* Version Control:
* %version          : 1 %
* %derived_by       : nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/06/17  1        ML        Initial Version                                                                EA4#13526
**********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_FordVehSpdArbn.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "NxtrMath.h"
#include "ArchGlbPrm.h"

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read*, Rte_Write*,
                                              GetErrorStatus */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 
#define DRVNVEHSPDMAX_KPH_F32                   65535.0F
#define FORDTIERCIRCUMMAX_MILLIMTR_U16          ((uint16)65534U)
#define FORDVEHSPDLOQLYMAX_KPH_F32              1023.9F
#define FORDVEHSPDLOQLYMIN_KPH_F32              0.0F
#define FORDVEHSPDMAX_KPH_F32                   1023.9F
#define FORDVEHSPDMIN_KPH_F32                   0.0F
#define MILLIMTRTOKILOMTR_ULS_F32               0.000001F
#define RADTOREV_ULS_F32                        0.159154943F
#define SECTOHR_ULS_F32                         3600.0F

static FUNC(void, FORDHWAGARBN_CODE) FordVehSpdLoQlyProc(VAR(float32, AUTOMATIC) FordVehSpdBrkModl_Kph_T_f32,
                                                         VAR(float32, AUTOMATIC) FordVehSpdEngModl_Kph_T_f32,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdBrkModlLoQlyVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdEngModlLoQlyVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdEngModlVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdBrkModlVld_Cnt_T_Logl,
                                                         P2VAR(float32, AUTOMATIC, FORDVEHSPDARBN_VAR) FordVehSpdLoQly_Kph_T_f32,
                                                         P2VAR(boolean, AUTOMATIC, FORDVEHSPDARBN_VAR) FordVehSpdLoQlyVld_Cnt_T_logl);
                                                            
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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 *
 * Enumeration Types:
 * ==================
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint16 *Rte_Pim_FordVehTireCircum(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordVehSpdArbnTireCircumMax_Val(void)
 *   uint16 Rte_Prm_FordVehSpdArbnTireCircumMin_Val(void)
 *   boolean Rte_Prm_FordVehSpdArbnDrvnWhl_Logl(void)
 *
 *********************************************************************************************************************/


#define FordVehSpdArbn_START_SEC_CODE
#include "FordVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordVehSpdArbnInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_FordVehSpdArbnInit1_FordVehArbnTireCircum(uint16 data)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FordVehTireCircum_GetErrorStatus(NvM_RequestResultType *ErrorStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVehSpdArbnInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordVehSpdArbn_CODE) FordVehSpdArbnInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVehSpdArbnInit1
 *********************************************************************************************************************/

    VAR(NvM_RequestResultType, AUTOMATIC) NvmErrSts_Cnt_T_enum;
    VAR(uint16, AUTOMATIC) FordVehArbnTireCircum_MilliMtr_T_u16;
    
    (void)Rte_Call_FordVehTireCircum_GetErrorStatus(&NvmErrSts_Cnt_T_enum);
    
    if(NvmErrSts_Cnt_T_enum == NVM_REQ_OK)
    {
        FordVehArbnTireCircum_MilliMtr_T_u16 = Lim_u16(*Rte_Pim_FordVehTireCircum(), 
                                                    Rte_Prm_FordVehSpdArbnTireCircumMin_Val(),
                                                    Rte_Prm_FordVehSpdArbnTireCircumMax_Val());
    }
    else
    {
        FordVehArbnTireCircum_MilliMtr_T_u16 = FORDTIERCIRCUMMAX_MILLIMTR_U16;
    }
    
    Rte_IrvWrite_FordVehSpdArbnInit1_FordVehArbnTireCircum(FordVehArbnTireCircum_MilliMtr_T_u16);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordVehSpdArbnPer1
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
 *   Std_ReturnType Rte_Read_FordAbsModlPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordEscModlPrsnt_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehFrntRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehReLeWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehReRiWhlSpdVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpdBrkModl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdBrkModlLoQlyVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpdBrkModlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpdEngModl_Val(float32 *data)
 *   Std_ReturnType Rte_Read_FordVehSpdEngModlLoQlyVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehSpdEngModlVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordVehTireCircumIn_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdLoQly_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehSpdLoQlyVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehSpdVld_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   uint16 Rte_IrvRead_FordVehSpdArbnPer1_FordVehArbnTireCircum(void)
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_FordVehTireCircum_SetRamBlockStatus(boolean RamBlockStatus_Arg)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVehSpdArbnPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordVehSpdArbn_CODE) FordVehSpdArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordVehSpdArbnPer1
 *********************************************************************************************************************/
    
    /*** Inputs ***/
    VAR(boolean, AUTOMATIC) FordAbsModlPrsnt_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordEscModlPrsnt_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehFrntLeWhlSpd_RadPerSec_T_f32;
    VAR(boolean, AUTOMATIC) FordVehFrntLeWhlSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehFrntRiWhlSpd_RadPerSec_T_f32;
    VAR(boolean, AUTOMATIC) FordVehFrntRiWhlSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehReLeWhlSpd_RadPerSec_T_f32;
    VAR(boolean, AUTOMATIC) FordVehReLeWhlSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehReRiWhlSpd_RadPerSec_T_f32;
    VAR(boolean, AUTOMATIC) FordVehReRiWhlSpdVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) FordVehSpdBrkModl_Kph_T_f32;
    VAR(boolean, AUTOMATIC) FordVehSpdBrkModlLoQlyVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordVehSpdBrkModlVld_Cnt_T_Logl;
    VAR(float32, AUTOMATIC) FordVehSpdEngModl_Kph_T_f32;
    VAR(boolean, AUTOMATIC) FordVehSpdEngModlLoQlyVld_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) FordVehSpdEngModlVld_Cnt_T_logl;
    VAR(uint16, AUTOMATIC)  FordVehArbnTireCircum_MilliMtr_T_u16;
    
    /*** Outputs ***/
    VAR(float32, AUTOMATIC) FordVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) FordVehSpdLoQly_Kph_T_f32;
    VAR(boolean, AUTOMATIC) FordVehSpdLoQlyVld_Cnt_T_logl = FALSE;
    VAR(boolean, AUTOMATIC) FordVehSpdVld_Cnt_T_logl = FALSE;
    
    /*** Temporary Variables ***/
    VAR(float32, AUTOMATIC) LeMinDrvnVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) RiMinDrvnVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) AbsLeMinDrvnVehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) AbsRiMinDrvnVehSpd_Kph_T_f32;
	
	VAR(float32, AUTOMAITC) FordVehTireCircum;
    
    (void)Rte_Read_FordAbsModlPrsnt_Logl(&FordAbsModlPrsnt_Cnt_T_logl);
    (void)Rte_Read_FordEscModlPrsnt_Logl(&FordEscModlPrsnt_Cnt_T_logl);
    (void)Rte_Read_FordVehFrntLeWhlSpd_Val(&FordVehFrntLeWhlSpd_RadPerSec_T_f32);
    (void)Rte_Read_FordVehFrntLeWhlSpdVld_Logl(&FordVehFrntLeWhlSpdVld_Cnt_T_logl);
    (void)Rte_Read_FordVehFrntRiWhlSpd_Val(&FordVehFrntRiWhlSpd_RadPerSec_T_f32);
    (void)Rte_Read_FordVehFrntRiWhlSpdVld_Logl(&FordVehFrntRiWhlSpdVld_Cnt_T_logl);
    (void)Rte_Read_FordVehReLeWhlSpd_Val(&FordVehReLeWhlSpd_RadPerSec_T_f32);
    (void)Rte_Read_FordVehReLeWhlSpdVld_Logl(&FordVehReLeWhlSpdVld_Cnt_T_logl);
    (void)Rte_Read_FordVehReRiWhlSpd_Val(&FordVehReRiWhlSpd_RadPerSec_T_f32);
    (void)Rte_Read_FordVehReRiWhlSpdVld_Logl(&FordVehReRiWhlSpdVld_Cnt_T_logl);
    (void)Rte_Read_FordVehSpdBrkModl_Val(&FordVehSpdBrkModl_Kph_T_f32);
    (void)Rte_Read_FordVehSpdBrkModlLoQlyVld_Logl(&FordVehSpdBrkModlLoQlyVld_Cnt_T_logl);
    (void)Rte_Read_FordVehSpdBrkModlVld_Logl(&FordVehSpdBrkModlVld_Cnt_T_Logl);
    (void)Rte_Read_FordVehSpdEngModl_Val(&FordVehSpdEngModl_Kph_T_f32);
    (void)Rte_Read_FordVehSpdEngModlLoQlyVld_Logl(&FordVehSpdEngModlLoQlyVld_Cnt_T_logl);
    (void)Rte_Read_FordVehSpdEngModlVld_Logl(&FordVehSpdEngModlVld_Cnt_T_logl);
    FordVehArbnTireCircum_MilliMtr_T_u16 = Rte_IrvRead_FordVehSpdArbnPer1_FordVehArbnTireCircum();
    
    if((FordAbsModlPrsnt_Cnt_T_logl == TRUE) || (FordEscModlPrsnt_Cnt_T_logl == TRUE))
    {
        if(Rte_Prm_FordVehSpdArbnDrvnWhl_Logl() == TRUE)
        {
            if((FordVehFrntLeWhlSpdVld_Cnt_T_logl == TRUE) && (FordVehArbnTireCircum_MilliMtr_T_u16 != FORDTIERCIRCUMMAX_MILLIMTR_U16))
            {
                LeMinDrvnVehSpd_Kph_T_f32 = RADTOREV_ULS_F32 * SECTOHR_ULS_F32 * FordVehFrntLeWhlSpd_RadPerSec_T_f32 *
                                            MILLIMTRTOKILOMTR_ULS_F32 * (float32)FordVehArbnTireCircum_MilliMtr_T_u16;
            }
            else
            {
                LeMinDrvnVehSpd_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
            }
            
            if((FordVehFrntRiWhlSpdVld_Cnt_T_logl == TRUE) && (FordVehArbnTireCircum_MilliMtr_T_u16 != FORDTIERCIRCUMMAX_MILLIMTR_U16))
            {
                RiMinDrvnVehSpd_Kph_T_f32 = RADTOREV_ULS_F32 * SECTOHR_ULS_F32 * FordVehFrntRiWhlSpd_RadPerSec_T_f32 *
                                            MILLIMTRTOKILOMTR_ULS_F32 * (float32)FordVehArbnTireCircum_MilliMtr_T_u16;
            }
            else
            {
                RiMinDrvnVehSpd_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
            }
        }
        else
        {
            if((FordVehReLeWhlSpdVld_Cnt_T_logl == TRUE) && (FordVehArbnTireCircum_MilliMtr_T_u16 != FORDTIERCIRCUMMAX_MILLIMTR_U16))
            {
                LeMinDrvnVehSpd_Kph_T_f32 = RADTOREV_ULS_F32 * SECTOHR_ULS_F32 * FordVehReLeWhlSpd_RadPerSec_T_f32 *
                                            MILLIMTRTOKILOMTR_ULS_F32 * (float32)FordVehArbnTireCircum_MilliMtr_T_u16;
            }
            else
            {
                LeMinDrvnVehSpd_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
            }
            if((FordVehReRiWhlSpdVld_Cnt_T_logl == TRUE) && (FordVehArbnTireCircum_MilliMtr_T_u16 != FORDTIERCIRCUMMAX_MILLIMTR_U16))
            {
                RiMinDrvnVehSpd_Kph_T_f32 = RADTOREV_ULS_F32 * SECTOHR_ULS_F32 * FordVehReRiWhlSpd_RadPerSec_T_f32 *
                                            MILLIMTRTOKILOMTR_ULS_F32 * (float32)FordVehArbnTireCircum_MilliMtr_T_u16;
            }
            else
            {
                RiMinDrvnVehSpd_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
            }
        }
        
        AbsLeMinDrvnVehSpd_Kph_T_f32 = Abslt_f32_f32(LeMinDrvnVehSpd_Kph_T_f32 - DRVNVEHSPDMAX_KPH_F32);
        AbsRiMinDrvnVehSpd_Kph_T_f32 = Abslt_f32_f32(RiMinDrvnVehSpd_Kph_T_f32 - DRVNVEHSPDMAX_KPH_F32);
        
        if(FordVehSpdBrkModlVld_Cnt_T_Logl == TRUE)
        {
            if((AbsLeMinDrvnVehSpd_Kph_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (AbsRiMinDrvnVehSpd_Kph_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
            {
                FordVehSpd_Kph_T_f32 = Max_f32(LeMinDrvnVehSpd_Kph_T_f32, RiMinDrvnVehSpd_Kph_T_f32);
                FordVehSpdVld_Cnt_T_logl = TRUE;
            }
            else if((AbsLeMinDrvnVehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (AbsRiMinDrvnVehSpd_Kph_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
            {
                FordVehSpd_Kph_T_f32 = RiMinDrvnVehSpd_Kph_T_f32;
                FordVehSpdVld_Cnt_T_logl = TRUE;
            }
            else if((AbsLeMinDrvnVehSpd_Kph_T_f32 > ARCHGLBPRM_FLOATZEROTHD_ULS_F32) && (AbsRiMinDrvnVehSpd_Kph_T_f32 <= ARCHGLBPRM_FLOATZEROTHD_ULS_F32))
            {
                FordVehSpd_Kph_T_f32 = LeMinDrvnVehSpd_Kph_T_f32;
                FordVehSpdVld_Cnt_T_logl = TRUE;
            }
            else
            {
                FordVehSpd_Kph_T_f32 = 0.0F;
                FordVehSpdVld_Cnt_T_logl = FALSE;
            }
            
            FordVehSpd_Kph_T_f32 = Max_f32(FordVehSpd_Kph_T_f32, FordVehSpdBrkModl_Kph_T_f32);
        }
        else
        {
            FordVehSpd_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
            FordVehSpdVld_Cnt_T_logl = FALSE;
        }
    }
    else
    {
        FordVehSpd_Kph_T_f32 = FordVehSpdEngModl_Kph_T_f32;
        FordVehSpdVld_Cnt_T_logl = FordVehSpdEngModlVld_Cnt_T_logl;
    }
    
    FordVehSpdLoQlyProc(FordVehSpdBrkModl_Kph_T_f32,
                        FordVehSpdEngModl_Kph_T_f32,
                        FordVehSpdBrkModlLoQlyVld_Cnt_T_logl,
                        FordVehSpdEngModlLoQlyVld_Cnt_T_logl,
                        FordVehSpdEngModlVld_Cnt_T_logl,
                        FordVehSpdBrkModlVld_Cnt_T_Logl,
                        &FordVehSpdLoQly_Kph_T_f32,
                        &FordVehSpdLoQlyVld_Cnt_T_logl);
    
    (void)Rte_Write_FordVehSpd_Val(Lim_f32(FordVehSpd_Kph_T_f32, FORDVEHSPDMIN_KPH_F32, FORDVEHSPDMAX_KPH_F32));
    (void)Rte_Write_FordVehSpdLoQly_Val(Lim_f32(FordVehSpdLoQly_Kph_T_f32, FORDVEHSPDLOQLYMIN_KPH_F32, FORDVEHSPDLOQLYMAX_KPH_F32));
    (void)Rte_Write_FordVehSpdVld_Logl(FordVehSpdVld_Cnt_T_logl);
    (void)Rte_Write_FordVehSpdLoQlyVld_Logl(FordVehSpdLoQlyVld_Cnt_T_logl);
    
	(void)Rte_Read_FordVehTireCircumIn_Val(&FordVehTireCircum);
	*Rte_Pim_FordVehTireCircum() = (uint16)FordVehTireCircum;
	Rte_Call_FordVehTireCircum_SetRamBlockStatus(TRUE);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordVehSpdArbn_STOP_SEC_CODE
#include "FordVehSpdArbn_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**************************************************************************************************************************
  * Name         :  FordVehSpdLoQlyProc
  * Description  :  Implementation of 'FordVehSpdLoQlyProcessing' block in FDD.
  * Inputs       :  FordVehSpdBrkModl_Kph_T_f32 - RTE Input
  *                 FordVehSpdEngModl_Kph_T_f32 - RTE Input
  *                 FordVehSpdBrkModlLoQlyVld_Cnt_T_logl - RTE Input
  *                 FordVehSpdEngModlLoQlyVld_Cnt_T_logl - RTE Input
  *                 FordVehSpdEngModlVld_Cnt_T_logl - RTE Input
  *                 FordVehSpdBrkModlVld_Cnt_T_Logl - RTE Input
  * Inputs/Outputs:  FordVehSpdLoQly_Kph_T_f32 - RTE Output
  *                  FordVehSpdLoQlyVld_Cnt_T_logl - RTE Output
  * Outputs:        None
  * Usage Notes  :  None
  ************************************************************************************************************************/
static FUNC(void, FORDHWAGARBN_CODE) FordVehSpdLoQlyProc(VAR(float32, AUTOMATIC) FordVehSpdBrkModl_Kph_T_f32,
                                                         VAR(float32, AUTOMATIC) FordVehSpdEngModl_Kph_T_f32,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdBrkModlLoQlyVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdEngModlLoQlyVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdEngModlVld_Cnt_T_logl,
                                                         VAR(boolean, AUTOMATIC) FordVehSpdBrkModlVld_Cnt_T_Logl,
                                                         P2VAR(float32, AUTOMATIC, FORDVEHSPDARBN_VAR) FordVehSpdLoQly_Kph_T_f32,
                                                         P2VAR(boolean, AUTOMATIC, FORDVEHSPDARBN_VAR) FordVehSpdLoQlyVld_Cnt_T_logl)
{
    if((FordVehSpdEngModlVld_Cnt_T_logl == TRUE) && (FordVehSpdBrkModlVld_Cnt_T_Logl == TRUE))
    {
        *FordVehSpdLoQly_Kph_T_f32 = Max_f32(FordVehSpdBrkModl_Kph_T_f32, FordVehSpdEngModl_Kph_T_f32);
    }
    else if(FordVehSpdEngModlVld_Cnt_T_logl == TRUE)
    {
        *FordVehSpdLoQly_Kph_T_f32 = FordVehSpdEngModl_Kph_T_f32;
    }
    else if(FordVehSpdBrkModlVld_Cnt_T_Logl == TRUE)
    {
        *FordVehSpdLoQly_Kph_T_f32 = FordVehSpdBrkModl_Kph_T_f32;
    }
    else
    {
        *FordVehSpdLoQly_Kph_T_f32 = DRVNVEHSPDMAX_KPH_F32;
    }
    
    if((FordVehSpdBrkModlLoQlyVld_Cnt_T_logl == TRUE) || (FordVehSpdEngModlLoQlyVld_Cnt_T_logl == TRUE))
    {
        *FordVehSpdLoQlyVld_Cnt_T_logl = TRUE;
    }     
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
