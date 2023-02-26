/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_MotAgSwCal.c
 *        Config:  C:/_EA4SynWrkgCpy/ES280A_MotAgSwCal_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_MotAgSwCal
 *  Generated at:  Mon Sep 25 15:28:27 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_MotAgSwCal>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgSwCal.c
* Module Description: Motor Angle Software Calibration Component
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:             1 %
* %derived_by:          nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- ----------
* 07/31/17   1        Shruthi   Initial Version                                                             EA4#12616
**********************************************************************************************************************/
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
 * u0p16
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * u16p16
 *   uint32 represents integers with a minimum value of 0 and a maximum value 
 *      of 4294967295. The order-relation on uint32 is: x < y if y - x is positive.
 *      uint32 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39). 
 *      
 *      For example: 1, 0, 12234567, 104400.
 *
 * u3p13
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 *********************************************************************************************************************/

#include "Rte_CDD_MotAgSwCal.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrMath.h"
 #include "NxtrFixdPt.h"
 #include "CDD_MotAgSwCal_private.h"
 
 /*MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */
 /*MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1] : There is no appropriate action to take on the return value of Rte_Read,Rte_Write*/ 
 /*MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2] : Server runnable is a void functon; Rte generation adds standard return type but no error information is returned.
                           List of Functions : SwCalStsCallBack */
 
 #define BOOSTMODLNIDXDFT_ULS_F32              0.180895705F
 #define HLDMODLNIDXDFT_ULS_F32                0.072358282F
 #define COOLDWNMODLNIDXDFT_ULS_F32            0.0F
 #define RAMP1TIDFT_MILLISEC_U08               20U
 #define BOOSTTIDFT_MILLISEC_U08               10U
 #define RAMP2TIDFT_MILLISEC_U08               20U
 #define HLDTIDFT_MILLISEC_U16                 30U
 #define RAMP3TIDFT_MILLISEC_U08               20U
 #define COOLDWNTIDFT_MILLISEC_U16             200U
 #define POSNSTEPSIZEDFT_MOTREVELEC_U0P16     (FloatToFixd_u16_f32(0.031250477F,NXTRFIXDPT_FLOATTOP16_ULS_F32))
 #define ELECREVCNTDFT_CNT_U08                 10U
 #define PWMTISCA_CNTPERMILLISEC_U16           16U
 #define SWCALSAMPLEHLDSTRTCON_CNT_U08         4U
 #define SWCALSAMPLEHLDSTOPCON_CNT_U08         3U

 #define PSBLNROFMOTAGMEASDIES_CNT_U08         3U
 #define PSBLNROFOUTPPERDIE_CNT_U08            4U
 #define PSBLNROFSNSRDATA_CNT_U08             (PSBLNROFMOTAGMEASDIES_CNT_U08*PSBLNROFOUTPPERDIE_CNT_U08)

 #define SWCALMOTAG5SINIDX_CNT_U08             0U
 #define SWCALMOTAG5COSIDX_CNT_U08             1U
 #define SWCALMOTAG6SINIDX_CNT_U08             2U
 #define SWCALMOTAG6COSIDX_CNT_U08             3U
 #define SWCALMOTAG2SINIDX_CNT_U08             4U
 #define SWCALMOTAG2COSIDX_CNT_U08             5U
 #define POSNIDXBYTEMASK_CNT_U08               255U

 static FUNC(void, CDD_MotAgSwCal_CODE) UpdTiOuts(void);

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
 * u0p16: Integer in interval [0...65535]
 * u16p16: Integer in interval [0...4294967295]
 * u3p13: Integer in interval [0...65535]
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Array Types:
 * ============
 * Ary1D_u16_12: Array with 12 element(s) of type uint16
 * Ary1D_u3p13_50: Array with 50 element(s) of type u3p13
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_BoostModlnIdx(void)
 *   float32 *Rte_Pim_BoostSlew(void)
 *   float32 *Rte_Pim_CoolDwnModlnIdx(void)
 *   float32 *Rte_Pim_CoolDwnSlew(void)
 *   float32 *Rte_Pim_HldModlnIdx(void)
 *   float32 *Rte_Pim_HldSlew(void)
 *   float32 *Rte_Pim_SwCalMotModlnIdx(void)
 *   uint32 *Rte_Pim_BoostTiOut(void)
 *   uint32 *Rte_Pim_CoolDwnTiOut(void)
 *   uint32 *Rte_Pim_HldTiOut(void)
 *   u16p16 *Rte_Pim_PosnIdx(void)
 *   u16p16 *Rte_Pim_SamplePosnIdx(void)
 *   uint32 *Rte_Pim_SampleStopTi(void)
 *   uint32 *Rte_Pim_SampleStrtTi(void)
 *   uint32 *Rte_Pim_SwCalCycTi(void)
 *   uint16 *Rte_Pim_CoolDwnTi(void)
 *   uint16 *Rte_Pim_HldTi(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg2SinMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg5CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg5SinMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg6CosMeasRawPrev(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasAvrg(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasRawCumv(void)
 *   u3p13 *Rte_Pim_MotAg6SinMeasRawPrev(void)
 *   u0p16 *Rte_Pim_PosnStepSize(void)
 *   uint8 *Rte_Pim_BoostTi(void)
 *   uint8 *Rte_Pim_ElecRevCnt(void)
 *   uint8 *Rte_Pim_MotAg2CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg2SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg5CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg5SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg6CosAdcFaildCntr(void)
 *   uint8 *Rte_Pim_MotAg6SinAdcFaildCntr(void)
 *   uint8 *Rte_Pim_Ramp1Ti(void)
 *   uint8 *Rte_Pim_Ramp2Ti(void)
 *   uint8 *Rte_Pim_Ramp3Ti(void)
 *   uint8 *Rte_Pim_SampleIdx(void)
 *   uint8 *Rte_Pim_SwCalStepDir(void)
 *   boolean *Rte_Pim_SampleRdyFlg(void)
 *   boolean *Rte_Pim_SwCalEna(void)
 *   u3p13 *Rte_Pim_MotAg2CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg2SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg5CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg5SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg6CosMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *   u3p13 *Rte_Pim_MotAg6SinMeasRaw(void)
 *     Returnvalue: u3p13* is of type Ary1D_u3p13_50
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotAgSwCalVehSpdThd_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_MotAgSwCal_START_SEC_CODE
#include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgSwCalInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgSwCalInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgSwCalInit1
 *********************************************************************************************************************/

    *Rte_Pim_BoostModlnIdx()   = BOOSTMODLNIDXDFT_ULS_F32;
    *Rte_Pim_HldModlnIdx()     = HLDMODLNIDXDFT_ULS_F32;
    *Rte_Pim_CoolDwnModlnIdx() = COOLDWNMODLNIDXDFT_ULS_F32;
    *Rte_Pim_Ramp1Ti()         = RAMP1TIDFT_MILLISEC_U08;
    *Rte_Pim_BoostTi()         = BOOSTTIDFT_MILLISEC_U08;
    *Rte_Pim_Ramp2Ti()         = RAMP2TIDFT_MILLISEC_U08;
    *Rte_Pim_HldTi()           = HLDTIDFT_MILLISEC_U16;
    *Rte_Pim_Ramp3Ti()         = RAMP3TIDFT_MILLISEC_U08;
    *Rte_Pim_CoolDwnTi()       = COOLDWNTIDFT_MILLISEC_U16;
    *Rte_Pim_PosnStepSize()    = POSNSTEPSIZEDFT_MOTREVELEC_U0P16;
    *Rte_Pim_ElecRevCnt()      = ELECREVCNTDFT_CNT_U08;

    RstFctPrm();
    UpdTiOuts();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotAgSwCalPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, const uint16 *SnsrData_Arg)
 *     Argument SnsrData_Arg: uint16* is of type Ary1D_u16_12
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgSwCalPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgSwCal_CODE) MotAgSwCalPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotAgSwCalPer2
 *********************************************************************************************************************/
    VAR(uint8  , AUTOMATIC) ElecRev_Cnt_T_u08;
    VAR(uint16 , AUTOMATIC) PosIdx_Cnt_T_u16;
    VAR(u3p13 , AUTOMATIC) SnsrData_Cnt_T_u3p13[PSBLNROFSNSRDATA_CNT_U08]={0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U};

    if(*Rte_Pim_SampleRdyFlg() != FALSE)
    {
        SnsrData_Cnt_T_u3p13[SWCALMOTAG5SINIDX_CNT_U08] = *Rte_Pim_MotAg5SinMeasAvrg();
        SnsrData_Cnt_T_u3p13[SWCALMOTAG5COSIDX_CNT_U08] = *Rte_Pim_MotAg5CosMeasAvrg();
        SnsrData_Cnt_T_u3p13[SWCALMOTAG6SINIDX_CNT_U08] = *Rte_Pim_MotAg6SinMeasAvrg();
        SnsrData_Cnt_T_u3p13[SWCALMOTAG6COSIDX_CNT_U08] = *Rte_Pim_MotAg6CosMeasAvrg();
        SnsrData_Cnt_T_u3p13[SWCALMOTAG2SINIDX_CNT_U08] = *Rte_Pim_MotAg2SinMeasAvrg();
        SnsrData_Cnt_T_u3p13[SWCALMOTAG2COSIDX_CNT_U08] = *Rte_Pim_MotAg2CosMeasAvrg();

        ElecRev_Cnt_T_u08 = (uint8)((*Rte_Pim_SamplePosnIdx() >> SWCALPOSNIDXSHIFTCON_CNT_U08) & (uint32)POSNIDXBYTEMASK_CNT_U08);
        PosIdx_Cnt_T_u16  = (uint16)(*Rte_Pim_SamplePosnIdx() & (uint32)POSNIDXWORDMASK_CNT_U16);

        (void)Rte_Call_SwCalStsCallBack_Oper(ElecRev_Cnt_T_u08,PosIdx_Cnt_T_u16,(const uint16*)SnsrData_Cnt_T_u3p13);
        *Rte_Pim_SampleRdyFlg() = FALSE;
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalGetPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalGetPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalGetPrm_Oper(float32 *BoostModlnIdx_Arg, float32 *HldModlnIdx_Arg, float32 *CoolDwnModlnIdx_Arg, uint8 *Ramp1Ti_Arg, uint8 *Ramp2Ti_Arg, uint8 *Ramp3Ti_Arg, uint8 *BoostTi_Arg, uint16 *HldTi_Arg, uint16 *CoolDwnTi_Arg, u0p16 *PosnStepSize_Arg, uint8 *ElecRevCnt_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalGetPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgSwCal_CODE) SwCalGetPrm_Oper(P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldModlnIdx_Arg, P2VAR(float32, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnModlnIdx_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp1Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp2Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) Ramp3Ti_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) BoostTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) HldTi_Arg, P2VAR(uint16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) CoolDwnTi_Arg, P2VAR(u0p16, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) PosnStepSize_Arg, P2VAR(uint8, AUTOMATIC, RTE_CDD_MOTAGSWCAL_APPL_VAR) ElecRevCnt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalGetPrm_Oper
 *********************************************************************************************************************/

    *BoostModlnIdx_Arg   = *Rte_Pim_BoostModlnIdx();
    *HldModlnIdx_Arg     = *Rte_Pim_HldModlnIdx();
    *CoolDwnModlnIdx_Arg = *Rte_Pim_CoolDwnModlnIdx();
    *Ramp1Ti_Arg         = *Rte_Pim_Ramp1Ti();
    *Ramp2Ti_Arg         = *Rte_Pim_Ramp2Ti();
    *Ramp3Ti_Arg         = *Rte_Pim_Ramp3Ti();
    *BoostTi_Arg         = *Rte_Pim_BoostTi();
    *HldTi_Arg           = *Rte_Pim_HldTi();
    *CoolDwnTi_Arg       = *Rte_Pim_CoolDwnTi();
    *PosnStepSize_Arg    = *Rte_Pim_PosnStepSize();
    *ElecRevCnt_Arg      = *Rte_Pim_ElecRevCnt();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalSetPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalSetPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalSetPrm_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_MotAgSwCal_CODE) SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalSetPrm_Oper (returns application error)
 *********************************************************************************************************************/

    VAR(Std_ReturnType, AUTOMATIC) RtnVal_Cnt_T_enum;

    if(*Rte_Pim_SwCalEna() == FALSE)
    {
        *Rte_Pim_BoostModlnIdx()   = BoostModlnIdx_Arg;
        *Rte_Pim_HldModlnIdx()     = HldModlnIdx_Arg;
        *Rte_Pim_CoolDwnModlnIdx() = CoolDwnModlnIdx_Arg;
        *Rte_Pim_Ramp1Ti()         = Ramp1Ti_Arg;
        *Rte_Pim_Ramp2Ti()         = Ramp2Ti_Arg;
        *Rte_Pim_Ramp3Ti()         = Ramp3Ti_Arg;
        *Rte_Pim_BoostTi()         = BoostTi_Arg;
        *Rte_Pim_HldTi()           = HldTi_Arg;
        *Rte_Pim_CoolDwnTi()       = CoolDwnTi_Arg;
        *Rte_Pim_PosnStepSize()    = PosnStepSize_Arg;
        *Rte_Pim_ElecRevCnt()      = ElecRevCnt_Arg;

        UpdTiOuts();
        RtnVal_Cnt_T_enum = E_OK;
    }
    else
    {
        RtnVal_Cnt_T_enum = E_NOT_OK;
    }

    return RtnVal_Cnt_T_enum;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStop_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStop>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStop_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalStop_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgSwCal_CODE) SwCalStop_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalStop_Oper
 *********************************************************************************************************************/

    RstFctPrm();

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStrt_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStrt>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStrt_Oper(void)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalStrt_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_MotAgSwCal_CODE) SwCalStrt_Oper(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalStrt_Oper
 *********************************************************************************************************************/

    *Rte_Pim_SwCalEna() = TRUE;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_MotAgSwCal_STOP_SEC_CODE
#include "CDD_MotAgSwCal_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static FUNC(void, CDD_MotAgSwCal_CODE) UpdTiOuts(void)
{
    VAR(uint32, AUTOMATIC)  Ramp1Ti_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  Ramp2Ti_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  Ramp3Ti_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  BoostTi_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  HldTi_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  CoolDwnTi_Cnt_T_u32;

    /* Convert ramp times into units of counts for slew calculations */
    Ramp1Ti_Cnt_T_u32           = (uint32)(*Rte_Pim_Ramp1Ti())*PWMTISCA_CNTPERMILLISEC_U16;
    Ramp2Ti_Cnt_T_u32           = (uint32)(*Rte_Pim_Ramp2Ti())*PWMTISCA_CNTPERMILLISEC_U16;
    Ramp3Ti_Cnt_T_u32           = (uint32)(*Rte_Pim_Ramp3Ti())*PWMTISCA_CNTPERMILLISEC_U16;
    /* Convert time for each state into units of counts */
    BoostTi_Cnt_T_u32           = (uint32)(*Rte_Pim_BoostTi()  )*PWMTISCA_CNTPERMILLISEC_U16;
    HldTi_Cnt_T_u32             = (uint32)(*Rte_Pim_HldTi()    )*PWMTISCA_CNTPERMILLISEC_U16;
    CoolDwnTi_Cnt_T_u32         = (uint32)(*Rte_Pim_CoolDwnTi())*PWMTISCA_CNTPERMILLISEC_U16;

    *Rte_Pim_BoostTiOut()       =  Ramp1Ti_Cnt_T_u32 + BoostTi_Cnt_T_u32;
    *Rte_Pim_HldTiOut()         =  Ramp2Ti_Cnt_T_u32 + HldTi_Cnt_T_u32 + *Rte_Pim_BoostTiOut();
    *Rte_Pim_CoolDwnTiOut()     =  Ramp3Ti_Cnt_T_u32 + CoolDwnTi_Cnt_T_u32 + *Rte_Pim_HldTiOut();

    *Rte_Pim_SampleStrtTi()     = (HldTi_Cnt_T_u32/SWCALSAMPLEHLDSTRTCON_CNT_U08) + Ramp2Ti_Cnt_T_u32 + *Rte_Pim_BoostTiOut();
    *Rte_Pim_SampleStopTi()     = ((HldTi_Cnt_T_u32*SWCALSAMPLEHLDSTOPCON_CNT_U08)/SWCALSAMPLEHLDSTRTCON_CNT_U08) + Ramp2Ti_Cnt_T_u32 + *Rte_Pim_BoostTiOut();

    if(Ramp1Ti_Cnt_T_u32 > 0U)
    {
        *Rte_Pim_BoostSlew() = Lim_f32(Abslt_f32_f32((*Rte_Pim_BoostModlnIdx() - *Rte_Pim_CoolDwnModlnIdx())/((float32)Ramp1Ti_Cnt_T_u32)),
                                       0.0F,
                                       1.0F);
    }
    else
    {
        *Rte_Pim_BoostSlew() = 1.0F;
    }

    if(Ramp2Ti_Cnt_T_u32 > 0U)
    {
        *Rte_Pim_HldSlew() = Lim_f32(Abslt_f32_f32((*Rte_Pim_HldModlnIdx() - *Rte_Pim_BoostModlnIdx())/((float32)Ramp2Ti_Cnt_T_u32)),
                                     0.0F,
                                     1.0F);
    }
    else
    {
        *Rte_Pim_HldSlew() = 1.0F;
    }

    if(Ramp3Ti_Cnt_T_u32 > 0U)
    {
        *Rte_Pim_CoolDwnSlew() = Lim_f32(Abslt_f32_f32((*Rte_Pim_CoolDwnModlnIdx() - *Rte_Pim_HldModlnIdx())/((float32)Ramp3Ti_Cnt_T_u32)),
                                         0.0F,
                                         1.0F);
    }
    else
    {
        *Rte_Pim_CoolDwnSlew() = 1.0F;
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
