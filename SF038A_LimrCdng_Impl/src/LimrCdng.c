/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  LimrCdng.c
 *     SW-C Type:  LimrCdng
 *  Generated at:  Mon Aug  3 08:20:29 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <LimrCdng>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : LimrCdng.c
* Module Description: Implementation of Limiter Conditioning FDD SF038A
* Project           : CBD
* Author            : Nick Saxton
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       mzjphh %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/15/15   1       NS        Initial version                                                                EA4#853
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
  u13p3
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_LimrCdng.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "FltInj.h"
#include "SysGlbPrm.h"
#include "NxtrFixdPt.h"
#include "NxtrIntrpn.h"
#include "NxtrMath.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array 
   type for code readability and to allow use of "sizeof". */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

#define GAINHILIM_ULS_F32               (1.0F)
#define GAINLOLIM_ULS_F32               (0.0F)
#define MOTTQLOLIMCDNG_MOTNWTMTR_F32    (0.0F)

#define PrmLimrCdngGainIncSlewX_u9p7         (*(const Ary1D_u9p7_2 *)(Rte_Prm_LimrCdngGainIncSlewX_Ary1D()))
#define PrmLimrCdngGainIncSlewY_u9p7         (*(const Ary1D_u9p7_2 *)(Rte_Prm_LimrCdngGainIncSlewY_Ary1D()))
#define PrmLimrCdngTqIncSlewX_u9p7           (*(const Ary1D_u9p7_2 *)(Rte_Prm_LimrCdngTqIncSlewX_Ary1D()))
#define PrmLimrCdngTqIncSlewY_u13p3           (*(const Ary1D_u9p7_2 *)(Rte_Prm_LimrCdngTqIncSlewY_Ary1D()))

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
 * u13p3: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Array Types:
 * ============
 * Ary1D_u13p3_2: Array with 2 element(s) of type u13p3
 * Ary1D_u9p7_2: Array with 2 element(s) of type u9p7
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_PrevEotAssiScaCdnd(void)
 *   float32 *Rte_Pim_PrevEotMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevStallMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevSysMotTqCmdScaCdnd(void)
 *   float32 *Rte_Pim_PrevThermMotTqLimCdnd(void)
 *   float32 *Rte_Pim_PrevVehSpdMotTqLimCdnd(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_LimrCdngGainDecSlew_Val(void)
 *   float32 Rte_Prm_LimrCdngTqDecSlew_Val(void)
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewX_Ary1D(void)
 *   u9p7 *Rte_Prm_LimrCdngGainIncSlewY_Ary1D(void)
 *   u9p7 *Rte_Prm_LimrCdngTqIncSlewX_Ary1D(void)
 *   u13p3 *Rte_Prm_LimrCdngTqIncSlewY_Ary1D(void)
 *
 *********************************************************************************************************************/


#define LimrCdng_START_SEC_CODE
#include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: LimrCdngPer1
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
 *   Std_ReturnType Rte_Read_EotAssiSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EotMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_StallMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysMotTqCmdSca_Val(float32 *data)
 *   Std_ReturnType Rte_Read_ThermMotTqLim_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_VehSpdMotTqLim_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_EotAssiScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_EotMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_StallMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_SysMotTqCmdScaCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_ThermMotTqLimCdnd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdMotTqLimCdnd_Val(float32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, LimrCdng_CODE) LimrCdngPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: LimrCdngPer1
 *********************************************************************************************************************/
    /* Inputs */
    VAR(float32, AUTOMATIC) EotAssiSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) EotMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) SysMotTqCmdSca_Uls_T_f32;
    VAR(float32, AUTOMATIC) ThermMotTqLim_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) VehSpd_Kph_T_f32;
    VAR(float32, AUTOMATIC) VehSpdMotTqLim_MotNwtMtr_T_f32;
    
    /* Outputs */
    VAR(float32, AUTOMATIC) EotAssiScaCdnd_Uls_T_f32;
    VAR(float32, AUTOMATIC) EotMotTqLimCdnd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) StallMotTqLimCdnd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) SysMotTqCmdScaCdnd_Uls_T_f32;
    VAR(float32, AUTOMATIC) ThermMotTqLimCdnd_MotNwtMtr_T_f32;
    VAR(float32, AUTOMATIC) VehSpdMotTqLimCdnd_MotNwtMtr_T_f32;
    
    VAR(uint16, AUTOMATIC)  VehSpeed_Kph_T_u9p7;
    VAR(uint16, AUTOMATIC)  GainIncSlew_UlsPerSec_T_u9p7;
    VAR(float32, AUTOMATIC) GainIncSlew_UlsPerSec_T_f32;
    VAR(uint16, AUTOMATIC)  TrqIncSlew_MotNwtMtrPerSec_T_u13p3;
    VAR(float32, AUTOMATIC) TrqIncSlew_MotNwtMtrPerSec_T_f32;
    
    /*** Read inputs ***/
    (void)Rte_Read_EotAssiSca_Val(&EotAssiSca_Uls_T_f32);               /* REQ: SF038A #9 I */
    (void)Rte_Read_EotMotTqLim_Val(&EotMotTqLim_MotNwtMtr_T_f32);       /* REQ: SF038A #33 I */
    (void)Rte_Read_StallMotTqLim_Val(&StallMotTqLim_MotNwtMtr_T_f32);   /* REQ: SF038A #35 I */
    (void)Rte_Read_SysMotTqCmdSca_Val(&SysMotTqCmdSca_Uls_T_f32);       /* REQ: SF038A #32 I */
    (void)Rte_Read_ThermMotTqLim_Val(&ThermMotTqLim_MotNwtMtr_T_f32);   /* REQ: SF038A #36 I */
    (void)Rte_Read_VehSpd_Val(&VehSpd_Kph_T_f32);                       /* REQ: SF038A #37 I */
    (void)Rte_Read_VehSpdMotTqLim_Val(&VehSpdMotTqLim_MotNwtMtr_T_f32); /* REQ: SF038A #34 I */
    
    /*** Determine GainIncSlew and TrqIncSlew ***/
    /* REQ: SF038A #83 I */
    VehSpeed_Kph_T_u9p7 = FloatToFixd_u16_f32(VehSpd_Kph_T_f32, NXTRFIXDPT_FLOATTOP7_ULS_F32);
    
    GainIncSlew_UlsPerSec_T_u9p7 = LnrIntrpn_u16_u16VariXu16VariY(PrmLimrCdngGainIncSlewX_u9p7,
                                                                  PrmLimrCdngGainIncSlewY_u9p7,
                                                                  (uint16)TblSize_m(PrmLimrCdngGainIncSlewX_u9p7),
                                                                  VehSpeed_Kph_T_u9p7);
    GainIncSlew_UlsPerSec_T_f32 = FixdToFloat_f32_u16(GainIncSlew_UlsPerSec_T_u9p7, NXTRFIXDPT_P7TOFLOAT_ULS_F32);
    
    TrqIncSlew_MotNwtMtrPerSec_T_u13p3 = LnrIntrpn_u16_u16VariXu16VariY(PrmLimrCdngTqIncSlewX_u9p7,
                                                                        PrmLimrCdngTqIncSlewY_u13p3,
                                                                        (uint16)TblSize_m(PrmLimrCdngTqIncSlewX_u9p7),
                                                                        VehSpeed_Kph_T_u9p7);
    TrqIncSlew_MotNwtMtrPerSec_T_f32 = FixdToFloat_f32_u16(TrqIncSlew_MotNwtMtrPerSec_T_u13p3, NXTRFIXDPT_P3TOFLOAT_ULS_F32);
    /* ENDREQ: SF038A #83 I */
    
    /*** Gain Rate Limit ***/
    /* REQ: SF038A #68 I */
    #if (STD_ON == FLTINJENA)
        (void)Rte_Call_FltInj_f32_Oper(&EotAssiSca_Uls_T_f32, FLTINJ_LIMRCDNG_EOTGAIN); /* REQ: SF038A #74 I */
    #endif
    EotAssiScaCdnd_Uls_T_f32 = Lim_f32(EotAssiSca_Uls_T_f32,
                                       (*Rte_Pim_PrevEotAssiScaCdnd() - (Rte_Prm_LimrCdngGainDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                       (*Rte_Pim_PrevEotAssiScaCdnd() + (GainIncSlew_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevEotAssiScaCdnd() = EotAssiScaCdnd_Uls_T_f32;
                                       
    #if (STD_ON == FLTINJENA)
        (void)Rte_Call_FltInj_f32_Oper(&SysMotTqCmdSca_Uls_T_f32, FLTINJ_LIMRCDNG_SYSMOTTQCMDSCA);  /* REQ: SF038A #75 I */
    #endif
    SysMotTqCmdScaCdnd_Uls_T_f32 = Lim_f32(SysMotTqCmdSca_Uls_T_f32,
                                           (*Rte_Pim_PrevSysMotTqCmdScaCdnd() - (Rte_Prm_LimrCdngGainDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                           (*Rte_Pim_PrevSysMotTqCmdScaCdnd() + (GainIncSlew_UlsPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevSysMotTqCmdScaCdnd() = SysMotTqCmdScaCdnd_Uls_T_f32;
    /* ENDREQ: SF038A #68 I */
    
    /*** Torque Rate Limit ***/
    /* REQ: SF038A #72 I */
    #if (STD_ON == FLTINJENA)
        (void)Rte_Call_FltInj_f32_Oper(&EotMotTqLim_MotNwtMtr_T_f32, FLTINJ_LIMRCDNG_EOTLIM);   /* REQ: SF038A #76 I */
    #endif
    EotMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(EotMotTqLim_MotNwtMtr_T_f32,
                                              (*Rte_Pim_PrevEotMotTqLimCdnd() - (Rte_Prm_LimrCdngTqDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                              (*Rte_Pim_PrevEotMotTqLimCdnd() + (TrqIncSlew_MotNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevEotMotTqLimCdnd() = EotMotTqLimCdnd_MotNwtMtr_T_f32;
    
    VehSpdMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(VehSpdMotTqLim_MotNwtMtr_T_f32,
                                                 (*Rte_Pim_PrevVehSpdMotTqLimCdnd() - (Rte_Prm_LimrCdngTqDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                                 (*Rte_Pim_PrevVehSpdMotTqLimCdnd() + (TrqIncSlew_MotNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevVehSpdMotTqLimCdnd() = VehSpdMotTqLimCdnd_MotNwtMtr_T_f32;
    
    StallMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(StallMotTqLim_MotNwtMtr_T_f32,
                                                (*Rte_Pim_PrevStallMotTqLimCdnd() - (Rte_Prm_LimrCdngTqDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                                (*Rte_Pim_PrevStallMotTqLimCdnd() + (TrqIncSlew_MotNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevStallMotTqLimCdnd() = StallMotTqLimCdnd_MotNwtMtr_T_f32;
    
    ThermMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(ThermMotTqLim_MotNwtMtr_T_f32,
                                                (*Rte_Pim_PrevThermMotTqLimCdnd() - (Rte_Prm_LimrCdngTqDecSlew_Val() * ARCHGLBPRM_2MILLISEC_SEC_F32)),
                                                (*Rte_Pim_PrevThermMotTqLimCdnd() + (TrqIncSlew_MotNwtMtrPerSec_T_f32 * ARCHGLBPRM_2MILLISEC_SEC_F32)));
    *Rte_Pim_PrevThermMotTqLimCdnd() = ThermMotTqLimCdnd_MotNwtMtr_T_f32;
    /* ENDREQ: SF038A #72 I */
    
    /*** Limit outputs ***/
    /* REQ: SF038A #87 I */
    EotAssiScaCdnd_Uls_T_f32 = Lim_f32(EotAssiScaCdnd_Uls_T_f32, GAINLOLIM_ULS_F32, GAINHILIM_ULS_F32);
    SysMotTqCmdScaCdnd_Uls_T_f32 = Lim_f32(SysMotTqCmdScaCdnd_Uls_T_f32, GAINLOLIM_ULS_F32, GAINHILIM_ULS_F32);
    /* ENDREQ: SF038A #87 I */
    /* REQ: SF038A #88 I */
    EotMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(EotMotTqLimCdnd_MotNwtMtr_T_f32, MOTTQLOLIMCDNG_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    VehSpdMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(VehSpdMotTqLimCdnd_MotNwtMtr_T_f32, MOTTQLOLIMCDNG_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    StallMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(StallMotTqLimCdnd_MotNwtMtr_T_f32, MOTTQLOLIMCDNG_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    ThermMotTqLimCdnd_MotNwtMtr_T_f32 = Lim_f32(ThermMotTqLimCdnd_MotNwtMtr_T_f32, MOTTQLOLIMCDNG_MOTNWTMTR_F32, SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32);
    /* ENDREQ: SF038A #88 I */
    
    /*** Write outputs ***/
    (void)Rte_Write_EotAssiScaCdnd_Val(EotAssiScaCdnd_Uls_T_f32);               /* REQ: SF038A #11 I */
    (void)Rte_Write_SysMotTqCmdScaCdnd_Val(SysMotTqCmdScaCdnd_Uls_T_f32);       /* REQ: SF038A #39 I */
    (void)Rte_Write_EotMotTqLimCdnd_Val(EotMotTqLimCdnd_MotNwtMtr_T_f32);       /* REQ: SF038A #40 I */
    (void)Rte_Write_VehSpdMotTqLimCdnd_Val(VehSpdMotTqLimCdnd_MotNwtMtr_T_f32); /* REQ: SF038A #41 I */
    (void)Rte_Write_StallMotTqLimCdnd_Val(StallMotTqLimCdnd_MotNwtMtr_T_f32);   /* REQ: SF038A #42 I */
    (void)Rte_Write_ThermMotTqLimCdnd_Val(ThermMotTqLimCdnd_MotNwtMtr_T_f32);   /* REQ: SF038A #43 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define LimrCdng_STOP_SEC_CODE
#include "LimrCdng_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
