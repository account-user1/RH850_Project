/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_CurrMeasArbn_MotCtrl.c
* Module Description: Implementation of Arbitration of Current Measurement signals
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/11/15  1        Selva       Initial Version                                                                EA4#368
* 09/17/15  2        Selva     Updated for A1589 (Sine Voltage Waveforms Clamped)                              EA4#1605
* 10/28/15  3        Selva     Updated Requirements tags to match FDD. No function change                      EA4#2040
* 03/15/16  4        Rijvi     Fixed anomaly EA4#3437                                                          EA4#4758
* 03/18/16  5        Selva    Fixed anomaly EA4#2989                                                          EA4#4752
**********************************************************************************************************************/


/************************************MISRA deviations*********************************************************************/
/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.2]: Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


 /**********************************************************************************************************************
 *                     << Start of include and declaration area >>        
 *********************************************************************************************************************/

#include "Rte_CDD_CurrMeasArbn.h"
#include "CDD_CurrMeasArbn.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "NxtrMath.h"


/********************************************* Embedded Local Constants **********************************************/
#define   CORRLNSTSCOMPCON1_ULS_U08         7U  /* Set bit 0-2 for indicating correlation status of ABC, Decimal equivalent is 7 */
#define   CORRLNSTSCOMPCON2_ULS_U08         56U  /* Set bit 3-6 for indicating correlation status of DEF, Decimal equivalent is 56*/
#define   MAXVALSIGSTALL_CNT_U08       255U  
#define   ONEDIVSQRT3_ULS_F32          0.5773503F  
#define   MOTCURRDAXQAXLIM_AMPR_F32    200.0F
#define   ONEDIV3_ULS_F32       0.333333F /*(1.0F/3.0F)*/

/******************************************** Local Function Prototypes **********************************************/
LOCAL_INLINE FUNC(boolean, CurrMeasArbn_APPL_CODE) SigAvlCheck(    SigQlfr1 CurrMeasSigQlfr_T_enum,
                                                              uint8 CurrMeasSigRollgCntr_Cnt_T_u08,
                                                              uint8 CurrMeasSigCorrlnChk_Cnt_T_u08,
                                                              P2VAR(uint8, AUTOMATIC, CurrMeasArbn_APPL_VAR) PrevCurrMeasSigRollgCntr_Cnt_T_u08,
                                                              P2VAR(uint8, AUTOMATIC, CurrMeasArbn_APPL_VAR) CurrMeasSigStall_Cnt_T_u08
                                                              );
LOCAL_INLINE FUNC(void, CurrMeasArbn_APPL_CODE) ParkTransformation(float32 PhaseAMotCurrCorrd_Ampr_T_f32,
                                                             float32 PhaseBMotCurrCorrd_Ampr_T_f32, 
                                                             float32 PhaseCMotCurrCorrd_Ampr_T_f32,
                                                             float32 MotCtrlCurrMeasMotAgCorrd_Rad_T_f32, 
                                                             sint8 MotCtrlMotElecMeclPolarity_Uls_T_s08,
                                                             P2VAR(float32, AUTOMATIC, CurrMeasArbn_APPL_VAR) MotCurrDax_Ampr_T_f32, 
                                                             P2VAR(float32, AUTOMATIC, CurrMeasArbn_APPL_VAR) MotCurrQax_Ampr_T_f32);
                                                               
/**********************************************************************************************************************
 *                           << End of include and declaration area >>         
 *********************************************************************************************************************/



#define CDD_CurrMeasArbn_MotCtrl_START_SEC_CODE
#include "CDD_CurrMeasArbn_MotCtrl_MemMap.h" 

 /*****************************************************************************
  * Name:   CurrMeasArbnPer1
  * Description: Created for Arbitration of Current measurement Signals 
  * Inputs:      None
  * Outputs:     None
  * Usage notes: Called by Motor control ISR (Call rate 2*MtrCtrlISR)
*****************************************************************************/ 
FUNC(void, CDD_CurrMeasArbn_CODE) CurrMeasArbnPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
    VAR(uint8,    AUTOMATIC)       MotCtrlCurrMeasCorrlnSts_Cnt_T_u08;
    VAR(float32,  AUTOMATIC)       MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdA_Ampr_T_f32;     
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdB_Ampr_T_f32;    
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdC_Ampr_T_f32;   
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdD_Ampr_T_f32;    
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdE_Ampr_T_f32;    
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrCorrdF_Ampr_T_f32;    
    VAR(SigQlfr1, AUTOMATIC)       MotCtrlMotCurrQlfr1_T_enum;
    VAR(SigQlfr1, AUTOMATIC)       MotCtrlMotCurrQlfr2_T_enum;
    VAR(uint8,    AUTOMATIC)       MotCtrlMotCurrRollgCntr1_Cnt_T_u08;
    VAR(uint8,    AUTOMATIC)       MotCtrlMotCurrRollgCntr2_Cnt_T_u08;
    VAR(sint8,    AUTOMATIC)       MotCtrlMotElecMeclPolarity_Uls_T_s08;
    VAR(boolean,  AUTOMATIC)       SigAvlABC_Cnt_T_logl;
    VAR(boolean,  AUTOMATIC)       SigAvlDEF_Cnt_T_logl;       
    VAR(float32,  AUTOMATIC)       Phase1MotCurrCorrd_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       Phase2MotCurrCorrd_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       Phase3MotCurrCorrd_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrDax_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       MotCtrlMotCurrQax_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       MotCurrDax_Ampr_T_f32;
    VAR(float32,  AUTOMATIC)       MotCurrQax_Ampr_T_f32;
	VAR(uint8,    AUTOMATIC)       MotCtrlCurrMeasCorrlnStsABC_Cnt_T_u08 = 0U;
	VAR(uint8,    AUTOMATIC)       MotCtrlCurrMeasCorrlnStsDEF_Cnt_T_u08 = 0U;
    
    /* REQ: ES208A #216 I */
    MotCtrlCurrMeasCorrlnSts_Cnt_T_u08    = MOTCTRLMGR_MotCtrlCurrMeasCorrlnSts;  /* REQ: ES208A #205 I */
    MotCtrlCurrMeasMotAgCorrd_Rad_T_f32   = MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd; /* REQ: ES208A #202 I */
    MotCtrlMotCurrCorrdA_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdA;      /* REQ: ES208A #104 I */
    MotCtrlMotCurrCorrdB_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdB;      /* REQ: ES208A #103 I */
    MotCtrlMotCurrCorrdC_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdC;      /* REQ: ES208A #102 I */
    MotCtrlMotCurrCorrdD_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdD;      /* REQ: ES208A #101 I */
    MotCtrlMotCurrCorrdE_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdE;      /* REQ: ES208A #100 I */
    MotCtrlMotCurrCorrdF_Ampr_T_f32       = MOTCTRLMGR_MotCtrlMotCurrCorrdF;      /* REQ: ES208A #99 I */
    MotCtrlMotCurrQlfr1_T_enum            = MOTCTRLMGR_MotCtrlMotCurrQlfr1;       /* REQ: ES208A #215 I */
    MotCtrlMotCurrQlfr2_T_enum            = MOTCTRLMGR_MotCtrlMotCurrQlfr2;       /* REQ: ES208A #214 I */
    MotCtrlMotCurrRollgCntr1_Cnt_T_u08    = MOTCTRLMGR_MotCtrlMotCurrRollgCntr1;   /* REQ: ES208A #213 I */
    MotCtrlMotCurrRollgCntr2_Cnt_T_u08    = MOTCTRLMGR_MotCtrlMotCurrRollgCntr2;   /* REQ: ES208A #212 I */
    MotCtrlMotElecMeclPolarity_Uls_T_s08  = MOTCTRLMGR_MotCtrlMotElecMeclPolarity; /* REQ: ES208A #200 I */


	
    /* REQ: ES208A #135 I */
	if( (MotCtrlCurrMeasCorrlnSts_Cnt_T_u08 & CORRLNSTSCOMPCON1_ULS_U08) == CORRLNSTSCOMPCON1_ULS_U08 )
	{
		MotCtrlCurrMeasCorrlnStsABC_Cnt_T_u08 = 1U;
	}
    SigAvlABC_Cnt_T_logl = SigAvlCheck(MotCtrlMotCurrQlfr1_T_enum,  MotCtrlMotCurrRollgCntr1_Cnt_T_u08, MotCtrlCurrMeasCorrlnStsABC_Cnt_T_u08,
                                                            Rte_Pim_CurrMeasArbnSens0RollgCntPrev(),
                                                            Rte_Pim_CurrMeasArbnSens0StallCntPrev());
    /* ENDREQ: ES208A #135 I */
	
    /* REQ: ES208A #219 I */
	if( (MotCtrlCurrMeasCorrlnSts_Cnt_T_u08 & CORRLNSTSCOMPCON2_ULS_U08) == CORRLNSTSCOMPCON2_ULS_U08 )
	{
		MotCtrlCurrMeasCorrlnStsDEF_Cnt_T_u08 = 1U;
	}
    SigAvlDEF_Cnt_T_logl = SigAvlCheck(MotCtrlMotCurrQlfr2_T_enum,  MotCtrlMotCurrRollgCntr2_Cnt_T_u08, MotCtrlCurrMeasCorrlnStsDEF_Cnt_T_u08,
                                                            Rte_Pim_CurrMeasArbnSens1RollgCntPrev(),
                                                            Rte_Pim_CurrMeasArbnSens1StallCntPrev());
    /* ENDREQ: ES208A #219 I */

    if ((SigAvlABC_Cnt_T_logl == TRUE) && (SigAvlDEF_Cnt_T_logl == TRUE))
    {
      /* REQ: ES208A #211 I */
      Phase1MotCurrCorrd_Ampr_T_f32=(MotCtrlMotCurrCorrdA_Ampr_T_f32 +  MotCtrlMotCurrCorrdD_Ampr_T_f32)* 0.5F;
      Phase2MotCurrCorrd_Ampr_T_f32=(MotCtrlMotCurrCorrdB_Ampr_T_f32 +  MotCtrlMotCurrCorrdE_Ampr_T_f32)* 0.5F;
      Phase3MotCurrCorrd_Ampr_T_f32=(MotCtrlMotCurrCorrdC_Ampr_T_f32 +  MotCtrlMotCurrCorrdF_Ampr_T_f32)* 0.5F;
      /* ENDREQ: ES208A #211 I */
     
    }
    else if((SigAvlABC_Cnt_T_logl == TRUE))
    { 
      /* REQ: ES208A #217 I */
      Phase1MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdA_Ampr_T_f32;
      Phase2MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdB_Ampr_T_f32;
      Phase3MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdC_Ampr_T_f32;
      /* ENDREQ: ES208A #217 I */
    }
    else if(SigAvlDEF_Cnt_T_logl == TRUE)
    {
      /* REQ: ES208A #218 I */
      Phase1MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdD_Ampr_T_f32;
      Phase2MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdE_Ampr_T_f32;
      Phase3MotCurrCorrd_Ampr_T_f32 = MotCtrlMotCurrCorrdF_Ampr_T_f32;
      /* ENDREQ: ES208A #218 I */
    }
    else
    { 
      /* REQ: ES208A #220 I */
      Phase1MotCurrCorrd_Ampr_T_f32 = 0.0F;  
      Phase2MotCurrCorrd_Ampr_T_f32 = 0.0F;
      Phase3MotCurrCorrd_Ampr_T_f32 = 0.0F;
      /* ENDREQ: ES208A #220 I */
    }


    /* REQ: ES208A #15 I */
    ParkTransformation(Phase1MotCurrCorrd_Ampr_T_f32,Phase2MotCurrCorrd_Ampr_T_f32,Phase3MotCurrCorrd_Ampr_T_f32,
                                              MotCtrlCurrMeasMotAgCorrd_Rad_T_f32, MotCtrlMotElecMeclPolarity_Uls_T_s08,
                                              &MotCurrDax_Ampr_T_f32, &MotCurrQax_Ampr_T_f32); 
    /* ENDREQ: ES208A #15 I */
    MotCtrlMotCurrDax_Ampr_T_f32 = MotCurrDax_Ampr_T_f32 ; /* REQ: ES208A #15 I */ /* REQ: ES208A #204 I */
    MotCtrlMotCurrQax_Ampr_T_f32 = MotCurrQax_Ampr_T_f32 ; /* REQ: ES208A #15 I */ /* REQ: ES208A #206 I */
     
    MotCtrlMotCurrDax_Ampr_T_f32 = Lim_f32(MotCtrlMotCurrDax_Ampr_T_f32, -MOTCURRDAXQAXLIM_AMPR_F32, MOTCURRDAXQAXLIM_AMPR_F32);	 
    MotCtrlMotCurrQax_Ampr_T_f32 = Lim_f32(MotCtrlMotCurrQax_Ampr_T_f32,  -MOTCURRDAXQAXLIM_AMPR_F32, MOTCURRDAXQAXLIM_AMPR_F32) ;
	
	
    MOTCTRLMGR_MotCtrlMotCurrDax = MotCtrlMotCurrDax_Ampr_T_f32 ; 
    MOTCTRLMGR_MotCtrlMotCurrQax = MotCtrlMotCurrQax_Ampr_T_f32 ; 
    
    /*ENDREQ: ES208A #216 I */
}



 /*****************************************************************************
  * Name:        SigAvlCheck
  * Description: Created for checking Signal Availability for current measurement 1,2 
  * Inputs:      CurrMeasSigQlfr_T_enum           -  current measurement State Qualifier
  *              CurrMeasSigRollgCntr_Cnt_T_u08         - current measurement Rolling Counter
  *              CurrMeasSigCorrlnChk_Cnt_T_u08          - signal Correleation check Status
  *              *PrevCurrMeasSigRollgCntr_Cnt_T_u08     - current measurement Rolling Counter Previous Value
  *              *CurrMeasSigStall_Cnt_T_u08            - current measurement Stall previous value
  * Outputs:     SignalAvailable_Cnt_T_logl          - True or False based on Signal availability
  *
*****************************************************************************/
LOCAL_INLINE FUNC(boolean, CurrMeasArbn_APPL_CODE) SigAvlCheck( SigQlfr1 CurrMeasSigQlfr_T_enum,
                                                               uint8 CurrMeasSigRollgCntr_Cnt_T_u08,
                                                               uint8 CurrMeasSigCorrlnChk_Cnt_T_u08,
                                                               P2VAR(uint8, AUTOMATIC, CurrMeasArbn_APPL_VAR) PrevCurrMeasSigRollgCntr_Cnt_T_u08,
                                                               P2VAR(uint8, AUTOMATIC, CurrMeasArbn_APPL_VAR) CurrMeasSigStall_Cnt_T_u08
                                                               )
{
    VAR(boolean, AUTOMATIC) SignalAvailable_Cnt_T_logl;
    
    SignalAvailable_Cnt_T_logl = TRUE;
    /* Check if the current is equal to previous rolling count value*/
   
    if ((*PrevCurrMeasSigRollgCntr_Cnt_T_u08) ==  CurrMeasSigRollgCntr_Cnt_T_u08) 
    { 
        if (*CurrMeasSigStall_Cnt_T_u08 < MAXVALSIGSTALL_CNT_U08) 
        {
            *CurrMeasSigStall_Cnt_T_u08 = *CurrMeasSigStall_Cnt_T_u08 + 1U;
        }
    }
    else
    {
        *CurrMeasSigStall_Cnt_T_u08 = 0U;
    }
    
     /* Signal is not available under two conditions
       1) There is Stall in the rolling counter value( Calibration determine if it reaches the max stall value)
       2) Signal Qualifier indicates failed state in current measurement
     */
    if ((*CurrMeasSigStall_Cnt_T_u08 >= Rte_Prm_CurrMeasArbnMaxStallCntr_Val()) || (CurrMeasSigQlfr_T_enum == SIGQLFR_FAILD) ||
                                                                (CurrMeasSigCorrlnChk_Cnt_T_u08 == 0U)) 
    {
       SignalAvailable_Cnt_T_logl = FALSE;
    }
    
    *PrevCurrMeasSigRollgCntr_Cnt_T_u08 = CurrMeasSigRollgCntr_Cnt_T_u08;
    
    return SignalAvailable_Cnt_T_logl;
}


 /*****************************************************************************
  * Name:        ParkTransformation
  * Description: Created for checking Signal Availability for current measurement 1,2 
  * Inputs:      PhaseAMotCurrCorrd_Ampr_T_f32       -    Phase 1 current   
  *              PhaseBMotCurrCorrd_Ampr_T_f32       -    Phase 2 current        
  *              PhaseCMotCurrCorrd_Ampr_T_f32        -    Phase 3 current  
  *              MotCtrlCurrMeasMotAgCorrd_Rad_T_f32    -    Corrected angle in radians
  *              MotCtrlMotElecMeclPolarity_Uls_T_s08  - Motor electromechanical ploarity (Value will be +1 or -1)
  * Outputs:     *MotCurrDax_Ampr_T_f32                     D axis current
  *              *MotCurrQax_Ampr_T_f32                     Q axis current 
  *
*****************************************************************************/
LOCAL_INLINE FUNC(void, CurrMeasArbn_APPL_CODE) ParkTransformation(float32 PhaseAMotCurrCorrd_Ampr_T_f32,
                                              float32 PhaseBMotCurrCorrd_Ampr_T_f32, 
                                              float32 PhaseCMotCurrCorrd_Ampr_T_f32,
                                              float32 MotCtrlCurrMeasMotAgCorrd_Rad_T_f32, 
                                              sint8 MotCtrlMotElecMeclPolarity_Uls_T_s08,
                                              P2VAR(float32, AUTOMATIC, CurrMeasArbn_APPL_VAR) MotCurrDax_Ampr_T_f32, 
                                              P2VAR(float32, AUTOMATIC, CurrMeasArbn_APPL_VAR) MotCurrQax_Ampr_T_f32)
{
     VAR(float32, AUTOMATIC) SinMotAg_Deg_T_f32;
     VAR(float32, AUTOMATIC) CosMotAg_Deg_T_f32;
     VAR(float32, AUTOMATIC) PhaseMotCurr_Ampr_T_f32;
     
    /* REQ: ES208A #221 I */
     
    SinMotAg_Deg_T_f32 = Sin_f32(MotCtrlCurrMeasMotAgCorrd_Rad_T_f32);
    CosMotAg_Deg_T_f32 = Cos_f32(MotCtrlCurrMeasMotAgCorrd_Rad_T_f32); 
    PhaseMotCurr_Ampr_T_f32 =((PhaseAMotCurrCorrd_Ampr_T_f32 * 2.0F) - PhaseBMotCurrCorrd_Ampr_T_f32 - PhaseCMotCurrCorrd_Ampr_T_f32)*ONEDIV3_ULS_F32;
    
     
    *MotCurrDax_Ampr_T_f32 =(PhaseMotCurr_Ampr_T_f32 * CosMotAg_Deg_T_f32) + (SinMotAg_Deg_T_f32 * ONEDIVSQRT3_ULS_F32 * (PhaseBMotCurrCorrd_Ampr_T_f32 - PhaseCMotCurrCorrd_Ampr_T_f32)* (float32)MotCtrlMotElecMeclPolarity_Uls_T_s08);
    *MotCurrQax_Ampr_T_f32 =(PhaseMotCurr_Ampr_T_f32 * SinMotAg_Deg_T_f32) + (CosMotAg_Deg_T_f32 * ONEDIVSQRT3_ULS_F32 * (PhaseCMotCurrCorrd_Ampr_T_f32 - PhaseBMotCurrCorrd_Ampr_T_f32)* (float32)MotCtrlMotElecMeclPolarity_Uls_T_s08);
    
    /* REQ: ES208A #221 I */
}

#define CDD_CurrMeasArbn_MotCtrl_STOP_SEC_CODE
#include "CDD_CurrMeasArbn_MotCtrl_MemMap.h" 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
