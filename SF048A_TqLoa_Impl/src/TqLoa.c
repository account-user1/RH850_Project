/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TqLoa.c
 *     SW-C Type:  TqLoa
 *  Generated at:  Wed Sep 23 17:32:31 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <TqLoa>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: TqLoa.c
* Module Description: Implementation of TqLoa FDD SF048A
* Project           : CBD 
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        gzkys7 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/21/15  1        SB       Initial Version                                                                  EA4#1011
**********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  u10p6
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u2p14
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u4p12
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_TqLoa.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 #include "NxtrFil.h"
 #include "ArchGlbPrm.h" 
 #include "NxtrMath.h"
 #include "NxtrFixdPt.h"
 #include "NxtrIntrpn.h"
 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

 #define GRVYTLCON_MTRPERSECSQD_F32             9.81F /* units for this constant should be Uls but matched FDD */
 #define INVGRVYTLCON_SECSQDPERMTR_F32          (1.0F/9.81F) /* units for this constant should be Uls but matched FDD */
 #define HWAUTHYMIN_ULS_F32                     0.99F
 #define MOTTQSCAFACMAX_ULS_F32                 1.0F
 #define MOTTQSCAFACMIN_ULS_F32                 0.0F
 #define DEADZONEOUTPUT_MOTNWTMTR_F32           0.0F
 #define MTRPERSECOVERKPH_MTRPERSECPERKPH_F32   0.2778F  
 #define PrmTqLoaVehLatAGainY_u4p12             (*(const Ary1D_u4p12_8 *)(Rte_Prm_TqLoaVehLatAGainY_Ary1D()))
 #define PrmTqLoaTqCmdLimY_u4p12                (*(const Ary1D_u4p12_8 *)(Rte_Prm_TqLoaTqCmdLimY_Ary1D()))
 #define PrmTqLoaVehLatADifScaFacX_u2p14        (*(const Ary1D_u2p14_4 *)(Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D()))
 #define PrmTqLoaVehLatADifScaFacY_u1p15        (*(const Ary2D_u1p15_8_4 *)(Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D()))
 #define PrmTqLoaVehSpdScaFacX_u10p6            (*(const Ary1D_u10p6_5 *)(Rte_Prm_TqLoaVehSpdScaFacX_Ary1D()))
 #define PrmTqLoaVehSpdScaFacY_u1p15            (*(const Ary1D_u1p15_5 *)(Rte_Prm_TqLoaVehSpdScaFacY_Ary1D()))
 #define PrmTqLoaVehSpdX_u10p6                  (*(const Ary1D_u10p6_8 *)(Rte_Prm_TqLoaVehSpdX_Ary1D())) 
 

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
 * u10p6: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u2p14: Integer in interval [0...65535]
 * u4p12: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u10p6_5: Array with 5 element(s) of type u10p6
 * Ary1D_u10p6_8: Array with 8 element(s) of type u10p6
 * Ary1D_u1p15_4: Array with 4 element(s) of type u1p15
 * Ary1D_u1p15_5: Array with 5 element(s) of type u1p15
 * Ary1D_u2p14_4: Array with 4 element(s) of type u2p14
 * Ary1D_u4p12_8: Array with 8 element(s) of type u4p12
 * Ary2D_u1p15_8_4: Array with 8 element(s) of type Ary1D_u1p15_4
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_MotTqCmdPrev(void)
 *   float32 *Rte_Pim_MotVelAndTqBasdScaFacPrev(void)
 *   float32 *Rte_Pim_VehLatADifScaFacPrev(void)
 *   float32 *Rte_Pim_dTqLoaMotTqCmdPreScag(void)
 *   float32 *Rte_Pim_dTqLoaMotVelAndTqBasdScaFac(void)
 *   float32 *Rte_Pim_dTqLoaScaFacFinal(void)
 *   float32 *Rte_Pim_dTqLoaVehLatADifScaFac(void)
 *   float32 *Rte_Pim_dTqLoaVehLatAEstimn(void)
 *   float32 *Rte_Pim_dTqLoaVehSpdBasdScaFac(void)
 *   FilLpRec1 *Rte_Pim_VehLatAEstimnFil(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_TqLoaDrvrTqNom_Val(void)
 *   float32 Rte_Prm_TqLoaMotTqCmdLim_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaMotVelMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaTqCmdMgnThd_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val(void)
 *   float32 Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(void)
 *   float32 Rte_Prm_TqLoaVehSteerRat_Val(void)
 *   float32 Rte_Prm_TqLoaVehUnderSteerGrdt_Val(void)
 *   float32 Rte_Prm_TqLoaVehWhlBas_Val(void)
 *   u4p12 *Rte_Prm_TqLoaTqCmdLimY_Ary1D(void)
 *   u2p14 *Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(void)
 *   u1p15 *Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(void)
 *   u4p12 *Rte_Prm_TqLoaVehLatAGainY_Ary1D(void)
 *   u10p6 *Rte_Prm_TqLoaVehSpdScaFacX_Ary1D(void)
 *   u1p15 *Rte_Prm_TqLoaVehSpdScaFacY_Ary1D(void)
 *   u10p6 *Rte_Prm_TqLoaVehSpdX_Ary1D(void)
 *
 *********************************************************************************************************************/


#define TqLoa_START_SEC_CODE
#include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, TqLoa_CODE) TqLoaInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaInit1
 *********************************************************************************************************************/
     FilLpInit(0.0F, Rte_Prm_TqLoaVehLatAEstimnFilFrq_Val(), ARCHGLBPRM_2MILLISEC_SEC_F32, Rte_Pim_VehLatAEstimnFil());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: TqLoaPer1
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
 *   Std_ReturnType Rte_Read_MotAgLoaMtgtnEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_MotVelCrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAgConf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatA_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehLatAVld_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdVld_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_TqLoaAvl_Logl(boolean data)
 *   Std_ReturnType Rte_Write_TqLoaCmd_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, TqLoa_CODE) TqLoaPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: TqLoaPer1
 *********************************************************************************************************************/
     VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
     VAR(boolean, AUTOMATIC) VehSpdVld_Cnt_T_logl;
     VAR(float32, AUTOMATIC) PinionAg_HwDeg_T_f32;
     VAR(float32, AUTOMATIC) VehLatA_MtrPerSecSqd_T_f32;
     VAR(boolean, AUTOMATIC) VehLatAVld_Cnt_T_logl;
     VAR(float32, AUTOMATIC) MotVelCrf_MotRadPerSec_T_f32;
     VAR(float32, AUTOMATIC) PinionAgConf_Uls_T_f32;
     VAR(boolean, AUTOMATIC) MotAgLoaMtgtnEna_Cnt_T_logl;
     VAR(float32, AUTOMATIC) TqLoaCmd_MotNwtMtr_T_f32;   
     VAR(boolean, AUTOMATIC) TqLoaAvl_Cnt_T_logl;    
     VAR(float32, AUTOMATIC) LatAEst_Grvy_T_f32;     
     VAR(float32, AUTOMATIC) Usquare_MtrSqpSecSq_T_f32;  
     VAR(float32, AUTOMATIC) AbsltDiffSca_Grvy_T_f32;
     VAR(float32, AUTOMATIC) Cmd_MtrNm_T_f32;
     VAR(float32, AUTOMATIC) DiffSca_Grvy_T_f32;
     VAR(float32, AUTOMATIC) ScaFacFinal_Uls_T_f32;
     VAR(float32, AUTOMATIC) VehLatADifScaFac_Uls_T_f32;     
     VAR(float32, AUTOMATIC) MotVelAndTqBasdScaFac_Uls_T_f32;
     VAR(float32, AUTOMATIC) NomDrvTq_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) ScadMotTqCmd_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) SpdDptGainTbl_Uls_T_f32;
     VAR(float32, AUTOMATIC) TempMotTqCmd_MotNwtMtr_T_f32;
     VAR(float32, AUTOMATIC) TempTqCmdTbl_Uls_T_f32;
     VAR(float32, AUTOMATIC) TrqBasdScaFac_Uls_T_f32;
     VAR(float32, AUTOMATIC) VehSpdBasdGainTbl_Uls_T_f32;
     VAR(float32, AUTOMATIC) FiltLatAEst_Grvy_T_f32;     
     VAR(uint16,  AUTOMATIC) DiffSca_Grvy_T_u1p15;
     VAR(uint16,  AUTOMATIC) VehSpd_Kph_T_u10p6;
     VAR(uint16,  AUTOMATIC) TempTqCmdTbl_Uls_T_u4p12;
     VAR(uint16,  AUTOMATIC) VehSpdBasdGainTbl_Uls_T_u1p15;
     VAR(uint16,  AUTOMATIC) VehLatAGainTbl_Uls_T_u4p12;
     VAR(uint16,  AUTOMATIC) AbsltDiffSca_Grvy_T_u2p14;  
     
     /* Read Input */    
     (void) Rte_Read_PinionAgConf_Val(&PinionAgConf_Uls_T_f32);
     (void) Rte_Read_PinionAg_Val(&PinionAg_HwDeg_T_f32);
     (void) Rte_Read_MotAgLoaMtgtnEna_Logl(&MotAgLoaMtgtnEna_Cnt_T_logl);
     (void) Rte_Read_MotVelCrf_Val(&MotVelCrf_MotRadPerSec_T_f32);
     (void) Rte_Read_VehLatA_Val(&VehLatA_MtrPerSecSqd_T_f32);
     (void) Rte_Read_VehLatAVld_Logl(&VehLatAVld_Cnt_T_logl);
     (void) Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);
     (void) Rte_Read_VehSpdVld_Logl(&VehSpdVld_Cnt_T_logl);
     
     /* Estimate Lateral Acceleration - Calculates the lateral acceleration of the vehicle using vehicle speed and 
        steering angle */
     Usquare_MtrSqpSecSq_T_f32 = (VehSpd_Kph_T_f32 * MTRPERSECOVERKPH_MTRPERSECPERKPH_F32) * 
                                 (VehSpd_Kph_T_f32 * MTRPERSECOVERKPH_MTRPERSECPERKPH_F32);
     LatAEst_Grvy_T_f32 = ((PinionAg_HwDeg_T_f32/Rte_Prm_TqLoaVehSteerRat_Val()) * ARCHGLBPRM_PIOVER180_ULS_F32 )* 
                            (Usquare_MtrSqpSecSq_T_f32 / 
                            ((Rte_Prm_TqLoaVehUnderSteerGrdt_Val() * Usquare_MtrSqpSecSq_T_f32) + 
                            (Rte_Prm_TqLoaVehWhlBas_Val() * GRVYTLCON_MTRPERSECSQD_F32)));
     *Rte_Pim_dTqLoaVehLatAEstimn() = LatAEst_Grvy_T_f32;
     
     /** Calculate_TqLoaCmd **/
     /* Calculate_TqCmd - Use lateral acceleration and vehicle speed to find an intermediate (temporary) motor torque command. 
        Vehicle speed based table provides a scalar factor to convert lateral acceleration to motor torque. 
        This torque command is further limited using a calibrateable deadzone.*/     
     VehSpd_Kph_T_u10p6 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP6_ULS_F32);
     VehLatAGainTbl_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmTqLoaVehSpdX_u10p6,
                                                                 PrmTqLoaVehLatAGainY_u4p12,
                                                                 (uint16)TblSize_m(PrmTqLoaVehSpdX_u10p6),
                                                                 VehSpd_Kph_T_u10p6);
     SpdDptGainTbl_Uls_T_f32 = FixdToFloat_f32_u16(VehLatAGainTbl_Uls_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
     NomDrvTq_MotNwtMtr_T_f32 = (LatAEst_Grvy_T_f32 * SpdDptGainTbl_Uls_T_f32);
     /*DeadZone */              
     Cmd_MtrNm_T_f32 =  ((NomDrvTq_MotNwtMtr_T_f32 > Rte_Prm_TqLoaDrvrTqNom_Val()) ? (NomDrvTq_MotNwtMtr_T_f32 - Rte_Prm_TqLoaDrvrTqNom_Val()) :\
                        ((NomDrvTq_MotNwtMtr_T_f32 < (-Rte_Prm_TqLoaDrvrTqNom_Val())) ? (NomDrvTq_MotNwtMtr_T_f32 + Rte_Prm_TqLoaDrvrTqNom_Val()) :\
                        (DEADZONEOUTPUT_MOTNWTMTR_F32))) ;
     TempTqCmdTbl_Uls_T_u4p12 = LnrIntrpn_u16_u16VariXu16VariY(PrmTqLoaVehSpdX_u10p6,
                                                               PrmTqLoaTqCmdLimY_u4p12,
                                                               (uint16)TblSize_m(PrmTqLoaVehSpdX_u10p6),
                                                               VehSpd_Kph_T_u10p6); 
     TempTqCmdTbl_Uls_T_f32 = FixdToFloat_f32_u16(TempTqCmdTbl_Uls_T_u4p12, NXTRFIXDPT_P12TOFLOAT_ULS_F32);
     TempMotTqCmd_MotNwtMtr_T_f32 = Lim_f32(Cmd_MtrNm_T_f32, -TempTqCmdTbl_Uls_T_f32, TempTqCmdTbl_Uls_T_f32);
     *Rte_Pim_dTqLoaMotTqCmdPreScag() = TempMotTqCmd_MotNwtMtr_T_f32;
     /** Cmd_Scaling **/ 
     /* Calculate_MotVelAndTqBasdScaFac - Motor velocity based scaling reduces the output command if the 
        absolute velocity value is within some bounded region close to zero */  
     /* Calculate MotVelAndTqBasdScaFac */
     if(((*Rte_Pim_MotTqCmdPrev() >= Rte_Prm_TqLoaTqCmdMgnThd_Val()) && 
        (MotVelCrf_MotRadPerSec_T_f32 >= Rte_Prm_TqLoaMotVelMgnThd_Val())) ||
        ((*Rte_Pim_MotTqCmdPrev() <= (-Rte_Prm_TqLoaTqCmdMgnThd_Val())) && 
        (MotVelCrf_MotRadPerSec_T_f32 <= (-Rte_Prm_TqLoaMotVelMgnThd_Val()))))
     {
         TrqBasdScaFac_Uls_T_f32 = Rte_Prm_TqLoaMotVelAndTqBasdScaFacMax_Val();
     }  
     else
     {
         TrqBasdScaFac_Uls_T_f32 = Rte_Prm_TqLoaMotVelAndTqBasdScaFacMin_Val();
     }   
     *Rte_Pim_MotVelAndTqBasdScaFacPrev() = Lim_f32(TrqBasdScaFac_Uls_T_f32, 
                                                    ((*Rte_Pim_MotVelAndTqBasdScaFacPrev()) + 
                                                    (Rte_Prm_TqLoaMotVelAndTqBasdScaFacFallRate_Val()  * ARCHGLBPRM_2MILLISEC_SEC_F32)), 
                                                    ((*Rte_Pim_MotVelAndTqBasdScaFacPrev()) + 
                                                    (Rte_Prm_TqLoaMotVelAndTqBasdScaFacRiseRate_Val() *ARCHGLBPRM_2MILLISEC_SEC_F32 )));
     /* MtrVelBasedScaling */
     MotVelAndTqBasdScaFac_Uls_T_f32 = Lim_f32(*Rte_Pim_MotVelAndTqBasdScaFacPrev(), MOTTQSCAFACMIN_ULS_F32, MOTTQSCAFACMAX_ULS_F32);
     *Rte_Pim_dTqLoaMotVelAndTqBasdScaFac() = MotVelAndTqBasdScaFac_Uls_T_f32;
     
     /* VehicleSpeedBasedScaling - Vehicle speed dependent scaling to deactivate TLOA at very low speeds */
     VehSpdBasdGainTbl_Uls_T_u1p15 = LnrIntrpn_u16_u16VariXu16VariY(PrmTqLoaVehSpdScaFacX_u10p6,
                                                                    PrmTqLoaVehSpdScaFacY_u1p15, 
                                                                    (uint16)TblSize_m(PrmTqLoaVehSpdScaFacX_u10p6),
                                                                    VehSpd_Kph_T_u10p6);                                                               
     VehSpdBasdGainTbl_Uls_T_f32 = FixdToFloat_f32_u16(VehSpdBasdGainTbl_Uls_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32); 
     VehSpdBasdGainTbl_Uls_T_f32 = Lim_f32(VehSpdBasdGainTbl_Uls_T_f32, MOTTQSCAFACMIN_ULS_F32, MOTTQSCAFACMAX_ULS_F32);
     *Rte_Pim_dTqLoaVehSpdBasdScaFac() = VehSpdBasdGainTbl_Uls_T_f32;
     
     /* LatAccSBasedScaling - Calculates scale based on difference between measured and calculated lateral acceleration. */
     FiltLatAEst_Grvy_T_f32 = FilLpUpdOutp_f32(LatAEst_Grvy_T_f32, Rte_Pim_VehLatAEstimnFil());
     AbsltDiffSca_Grvy_T_f32    = Abslt_f32_f32(FiltLatAEst_Grvy_T_f32 - ((-VehLatA_MtrPerSecSqd_T_f32) *(INVGRVYTLCON_SECSQDPERMTR_F32)));
     AbsltDiffSca_Grvy_T_u2p14 = FloatToFixd_u16_f32(AbsltDiffSca_Grvy_T_f32, NXTRFIXDPT_FLOATTOP14_ULS_F32);
     DiffSca_Grvy_T_u1p15 = BilnrIntrpnWithRound_u16_u16CmnXu16MplY(VehSpd_Kph_T_u10p6,
                                                                    AbsltDiffSca_Grvy_T_u2p14,
                                                                    PrmTqLoaVehSpdX_u10p6,
                                                                    (uint16)TblSize_m(PrmTqLoaVehSpdX_u10p6),
                                                                    Rte_Prm_TqLoaVehLatADifScaFacX_Ary1D(),
                                                                    Rte_Prm_TqLoaVehLatADifScaFacY_Ary2D(),
                                                                    (uint16)TblSize_m(PrmTqLoaVehLatADifScaFacX_u2p14));
                                                            
     DiffSca_Grvy_T_f32 = FixdToFloat_f32_u16(DiffSca_Grvy_T_u1p15, NXTRFIXDPT_P15TOFLOAT_ULS_F32);                                                                 
     *Rte_Pim_VehLatADifScaFacPrev() = Lim_f32(DiffSca_Grvy_T_f32, 
                                              ((*Rte_Pim_VehLatADifScaFacPrev()) + 
                                              (Rte_Prm_TqLoaVehLatADifScaFacFallRate_Val()  * ARCHGLBPRM_2MILLISEC_SEC_F32)), 
                                              ((*Rte_Pim_VehLatADifScaFacPrev()) + 
                                              (Rte_Prm_TqLoaVehLatADifScaFacRiseRate_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)));
     VehLatADifScaFac_Uls_T_f32 = Lim_f32(*Rte_Pim_VehLatADifScaFacPrev(), MOTTQSCAFACMIN_ULS_F32, MOTTQSCAFACMAX_ULS_F32);
     *Rte_Pim_dTqLoaVehLatADifScaFac() = VehLatADifScaFac_Uls_T_f32;
     /* Scaling */
     ScaFacFinal_Uls_T_f32 = (MotVelAndTqBasdScaFac_Uls_T_f32 * VehSpdBasdGainTbl_Uls_T_f32 * VehLatADifScaFac_Uls_T_f32);
     ScaFacFinal_Uls_T_f32 = Lim_f32(ScaFacFinal_Uls_T_f32, MOTTQSCAFACMIN_ULS_F32, MOTTQSCAFACMAX_ULS_F32);
     *Rte_Pim_dTqLoaScaFacFinal() = ScaFacFinal_Uls_T_f32;
     ScadMotTqCmd_MotNwtMtr_T_f32 = TempMotTqCmd_MotNwtMtr_T_f32 * ScaFacFinal_Uls_T_f32;    
     
     *Rte_Pim_MotTqCmdPrev() = ScadMotTqCmd_MotNwtMtr_T_f32;
     *Rte_Pim_dTqLoaMotTqCmdPreScag() = ScadMotTqCmd_MotNwtMtr_T_f32;
     TqLoaCmd_MotNwtMtr_T_f32 = Lim_f32(ScadMotTqCmd_MotNwtMtr_T_f32, (-Rte_Prm_TqLoaMotTqCmdLim_Val()), Rte_Prm_TqLoaMotTqCmdLim_Val());
     /* ValidityCheck */
     if((VehSpdVld_Cnt_T_logl == FALSE)|| 
        (VehLatAVld_Cnt_T_logl == FALSE)|| 
        (PinionAgConf_Uls_T_f32 <= HWAUTHYMIN_ULS_F32)||
        (MotAgLoaMtgtnEna_Cnt_T_logl == TRUE))
     {
         TqLoaAvl_Cnt_T_logl = FALSE;
     }
     else
     {
         TqLoaAvl_Cnt_T_logl = TRUE;
     }
	 
	 /* Write Outputs */
     (void) Rte_Write_TqLoaAvl_Logl(TqLoaAvl_Cnt_T_logl); 
     (void) Rte_Write_TqLoaCmd_Val(TqLoaCmd_MotNwtMtr_T_f32);  

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define TqLoa_STOP_SEC_CODE
#include "TqLoa_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
