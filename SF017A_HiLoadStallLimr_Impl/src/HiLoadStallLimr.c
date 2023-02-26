/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  HiLoadStallLimr.c
 *        Config:  C:/_Synergy_Projects/Working/SF017A_HiLoadStallLimr_Impl/tools/Component.dpa
 *     SW-C Type:  HiLoadStallLimr
 *  Generated at:  Fri Nov  3 09:40:54 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <HiLoadStallLimr>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /**********************************************************************************************************************
* Copyright 2015, 2017,2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : HiLoadStallLimr.c
* Module Description: Implementation of High load thermal management algorithm (FDD SF017A)
* Project           : CBD 
* Author            : Krishna Kanth Anne
************************************************************************************************************************
* Version Control:1
* %version          : 4 %
* %derived_by       : czmgrw %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author     Change Description                                                             SCR #
* -------   -------  --------  ---------------------------------------------------------------------------    ---------
* 08/20/15  1        KK         Initial Version                                                                EA4#664
* 02/28/17  2        ML         Update to Design vers 2.0.0                                                   EA4#8136
* 10/20/17  3        ML         Added new input and logic for it. Added capability to switch to different    EA4#13258
                                cals when in FET mitigation mode.
* 03/22/18  4        JK         Moved filter init to make it independent of FETCalIdx from Init function.    EA4#21877
                                Removed filter init from periodic.
                                Modified the bit masks constants used in 'Bit_Pack_Decoder' block 
                                to match design - EA4#21869  

***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * u8p8
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_HiLoadStallLimr.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFil.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "SysGlbPrm.h"


#define FETMTGTNFLTSTSDISIDX_CNT_U08    ((uint8)0U)
#define FETMTGTNFLTSTSENAIDX_CNT_U08    ((uint8)1U)
#define IVTRLOABITMASK_CNT_U08          ((uint8)2U)
#define FETLOABITMASK_CNT_U08           ((uint8)4U)

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value Rte_Call & Rte_Write */ 

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8         (*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D())
#define PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8         (*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D())
#define PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimX_u8p8 (*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D())
#define PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimY_u8p8 (*(const Ary1D_u8p8_6 *) Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D())

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
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * u8p8: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_f32_2: Array with 2 element(s) of type float32
 * Ary1D_u8p8_6: Array with 6 element(s) of type u8p8
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_StallMotTqLimFetMtgtnPrev(void)
 *   float32 *Rte_Pim_StallMotTqLimPrev(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmd(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild(void)
 *   float32 *Rte_Pim_dHiLoadStallLimrStallMotTqLim(void)
 *   uint8 *Rte_Pim_FetLoaMtgtnCalIdx(void)
 *   FilLpRec1 *Rte_Pim_StallMotTqCmdFetMtgtnFil(void)
 *   FilLpRec1 *Rte_Pim_StallMotTqCmdFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(void)
 *   float32 Rte_Prm_HiLoadStallLimrStallThermLimSca_Val(void)
 *   float32 *Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_2
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdFetMtgtnLimY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimX_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   u8p8 *Rte_Prm_HiLoadStallLimrStallMotTqCmdLimY_Ary1D(void)
 *     Returnvalue: u8p8* is of type Ary1D_u8p8_6
 *   float32 *Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D(void)
 *     Returnvalue: float32* is of type Ary1D_f32_2
 *
 *********************************************************************************************************************/


#define HiLoadStallLimr_START_SEC_CODE
#include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrInit1
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl = FALSE;
    
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);

    FilLpInit(0.0F, Rte_Prm_HiLoadStallLimrMotTqCmdFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_StallMotTqCmdFil());
    FilLpInit(0.0F, Rte_Prm_HiLoadStallLimrMotTqCmdFetMtgtnEnaFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_StallMotTqCmdFetMtgtnFil());

    if((MotAndThermProtnLoaMod_Cnt_T_u08 & FETLOABITMASK_CNT_U08) == FETLOABITMASK_CNT_U08)
    {
        FetLoaMtgtnEna_Cnt_T_logl = TRUE;
    }
    
    if(FetLoaMtgtnEna_Cnt_T_logl == FALSE)
    {
        *Rte_Pim_FetLoaMtgtnCalIdx() = FETMTGTNFLTSTSDISIDX_CNT_U08;        
    }
    else
    {
        *Rte_Pim_FetLoaMtgtnCalIdx() = FETMTGTNFLTSTSENAIDX_CNT_U08;        
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HiLoadStallLimrPer1
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
 *   Std_ReturnType Rte_Read_DualEcuFltMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotAndThermProtnLoaMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdLimdPreStall_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLimDi_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_StallMotTqLim_Val(float32 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, HiLoadStallLimr_CODE) HiLoadStallLimrPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: HiLoadStallLimrPer1
 *********************************************************************************************************************/


    VAR(float32, AUTOMATIC) MotTqCmdLimdPreStall_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqCmd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqCmdFild_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqLim_MotNwtMtr_T_f32;
    
    VAR(uint16, AUTOMATIC)  StallMotTqCmdFil_MotNwtMtr_T_u8p8;
    
    VAR(uint8, AUTOMATIC) MotAndThermProtnLoaMod_Cnt_T_u08;
    
    VAR(boolean, AUTOMATIC) DualEcuFltMtgtnEna_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) IvtrLoaMtgtnEna_Cnt_T_lgc = FALSE;
    VAR(boolean, AUTOMATIC) StallMotTqLimDi_Cnt_T_lgc;
    VAR(boolean, AUTOMATIC) FetLoaMtgtnEna_Cnt_T_logl = FALSE;
    
    
    /*** Read Inputs from RTE ***/
    (void)Rte_Read_MotTqCmdLimdPreStall_Val(&MotTqCmdLimdPreStall_MotNwtMtr_T_f32);
    (void)Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
    (void)Rte_Read_StallMotTqLimDi_Logl(&StallMotTqLimDi_Cnt_T_lgc);
    (void)Rte_Read_DualEcuFltMtgtnEna_Logl(&DualEcuFltMtgtnEna_Cnt_T_lgc);
    (void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotAndThermProtnLoaMod_Cnt_T_u08);
    
    if(TRUE == StallMotTqLimDi_Cnt_T_lgc)
    {   
        StallMotTqLim_MotNwtMtr_T_f32 = SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32;
    }
    
    else
    {
        /*** Start of Determine Motor Torque ***/
        if(Abslt_f32_f32(MotVelCrf_MotRadPerSec_T_f32) <= Rte_Prm_HiLoadStallLimrMotVelMgnThd_Ary1D()[*Rte_Pim_FetLoaMtgtnCalIdx()])
        {
            if(*Rte_Pim_FetLoaMtgtnCalIdx() == 0U)
            {
                StallMotTqCmd_MotNwtMtr_T_f32 = Lim_f32(MotTqCmdLimdPreStall_MotNwtMtr_T_f32, 0.0F, FixdToFloat_f32_u16(PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8[0], NXTRFIXDPT_P8TOFLOAT_ULS_F32));
            }
            else
            {
                StallMotTqCmd_MotNwtMtr_T_f32 = Lim_f32(MotTqCmdLimdPreStall_MotNwtMtr_T_f32, 0.0F, FixdToFloat_f32_u16(PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimY_u8p8[0], NXTRFIXDPT_P8TOFLOAT_ULS_F32));
            }
               
        }
            
        else
        {
            StallMotTqCmd_MotNwtMtr_T_f32 = 0.0F;
        }
        
        *Rte_Pim_dHiLoadStallLimrStallMotTqCmd() = StallMotTqCmd_MotNwtMtr_T_f32;      
        
        /*** End of Determine Motor Torque ***/
                        
        /*** Start of Calculate StallMotTqLim ***/
        if(*Rte_Pim_FetLoaMtgtnCalIdx() == 0U)
        {
        
            StallMotTqCmdFild_MotNwtMtr_T_f32               = FilLpUpdOutp_f32(StallMotTqCmd_MotNwtMtr_T_f32, Rte_Pim_StallMotTqCmdFil());
            *Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild()    = StallMotTqCmdFild_MotNwtMtr_T_f32;
            StallMotTqCmdFil_MotNwtMtr_T_u8p8               = FloatToFixd_u16_f32(StallMotTqCmdFild_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
            HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32    = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8,
                                                                                                                 PrmHiLoadStallLimrStallMotTqCmdLimY_u8p8,
                                                                                                                 (uint16)TblSize_m(PrmHiLoadStallLimrStallMotTqCmdLimX_u8p8),
                                                                                                                 StallMotTqCmdFil_MotNwtMtr_T_u8p8),
                                                                                  NXTRFIXDPT_P8TOFLOAT_ULS_F32);
            *Rte_Pim_dHiLoadStallLimrStallMotTqLim()        = HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32;
            StallMotTqLim_MotNwtMtr_T_f32                   = Lim_f32(HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32, 
                                                                      ((-Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D()[*Rte_Pim_FetLoaMtgtnCalIdx()] * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimPrev()), 
                                                                      (( Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D()[*Rte_Pim_FetLoaMtgtnCalIdx()] * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimPrev()));
            *Rte_Pim_StallMotTqLimPrev()                    = StallMotTqLim_MotNwtMtr_T_f32;
        }
        else
        {
             StallMotTqCmdFild_MotNwtMtr_T_f32              = FilLpUpdOutp_f32(StallMotTqCmd_MotNwtMtr_T_f32, Rte_Pim_StallMotTqCmdFetMtgtnFil());
             *Rte_Pim_dHiLoadStallLimrStallMotTqCmdFild()   = StallMotTqCmdFild_MotNwtMtr_T_f32;
             StallMotTqCmdFil_MotNwtMtr_T_u8p8              = FloatToFixd_u16_f32(StallMotTqCmdFild_MotNwtMtr_T_f32, NXTRFIXDPT_FLOATTOP8_ULS_F32);
             HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32   = FixdToFloat_f32_u16(LnrIntrpn_u16_u16VariXu16VariY(PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimX_u8p8,
                                                                                                                 PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimY_u8p8,
                                                                                                                 (uint16)TblSize_m(PrmHiLoadStallLimrStallMotTqCmdFetMtgtnLimX_u8p8),
                                                                                                                 StallMotTqCmdFil_MotNwtMtr_T_u8p8),
                                                                                  NXTRFIXDPT_P8TOFLOAT_ULS_F32);   
             *Rte_Pim_dHiLoadStallLimrStallMotTqLim()       = HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32;
             StallMotTqLim_MotNwtMtr_T_f32                  = Lim_f32(HiLoadStallLimrStallMotTqLim_MotNwtMtr_T_f32,
                                                                      ((-Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D()[*Rte_Pim_FetLoaMtgtnCalIdx()] * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimFetMtgtnPrev()),
                                                                      (( Rte_Prm_HiLoadStallLimrStallMotTqLimSlewRate_Ary1D()[*Rte_Pim_FetLoaMtgtnCalIdx()] * ARCHGLBPRM_2MILLISEC_SEC_F32) + *Rte_Pim_StallMotTqLimFetMtgtnPrev()));
             *Rte_Pim_StallMotTqLimFetMtgtnPrev()                   = StallMotTqLim_MotNwtMtr_T_f32;
        }
        /*** End of Calculate StallMotTqLim ***/
    }
    
    /*** Bit Pack Decoder ***/
    if((MotAndThermProtnLoaMod_Cnt_T_u08 & IVTRLOABITMASK_CNT_U08) == IVTRLOABITMASK_CNT_U08)
    {
        IvtrLoaMtgtnEna_Cnt_T_lgc = TRUE;
    }
    
    if((MotAndThermProtnLoaMod_Cnt_T_u08 & FETLOABITMASK_CNT_U08) == FETLOABITMASK_CNT_U08)
    {
        FetLoaMtgtnEna_Cnt_T_logl = TRUE;
    }
    
    /*** FET Loa Fault Mitigation Calibration Selection ***/
    if(FetLoaMtgtnEna_Cnt_T_logl == FALSE)
    {
        *Rte_Pim_FetLoaMtgtnCalIdx() = FETMTGTNFLTSTSDISIDX_CNT_U08;
    }
    else
    {
        *Rte_Pim_FetLoaMtgtnCalIdx() = FETMTGTNFLTSTSENAIDX_CNT_U08;
    }
    
    /*** Thermal Limit Scaling ***/
    if((IvtrLoaMtgtnEna_Cnt_T_lgc == TRUE) || (DualEcuFltMtgtnEna_Cnt_T_lgc == TRUE))
    {
        StallMotTqLim_MotNwtMtr_T_f32 = StallMotTqLim_MotNwtMtr_T_f32 * Rte_Prm_HiLoadStallLimrStallThermLimSca_Val();
    }
    
    StallMotTqLim_MotNwtMtr_T_f32 = Lim_f32(StallMotTqLim_MotNwtMtr_T_f32, 0.0F, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
            
    (void)Rte_Write_StallMotTqLim_Val(StallMotTqLim_MotNwtMtr_T_f32);
        
    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define HiLoadStallLimr_STOP_SEC_CODE
#include "HiLoadStallLimr_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
