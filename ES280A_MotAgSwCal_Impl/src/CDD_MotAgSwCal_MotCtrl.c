/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotAgSwCalNonRte.c
* Module Description: Motor Angle Software Calibration. This file implements Motor Control functionality of MotAgSwCal
* Project           : CBD
* Author            : Shruthi Raghavan
***********************************************************************************************************************
* Version Control:
* %version:             1 %
* %derived_by:          nz2554 %
*----------------------------------------------------------------------------------------------------------------------
*   Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  ---------- --------------------------------------------------------------------------- ----------
* 07/24/17   1        Shruthi   Initial Version                                                             EA4#12616
**********************************************************************************************************************/

#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "Rte_CDD_MotAgSwCal.h" /*Needed for visibility to Pims.*/
#include "CDD_MotCtrlMgr_Data.h"
#include "CDD_MotAgSwCal.h"
#include "CDD_MotAgSwCal_private.h"

/*MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1 ] : AUTOSAR requires deviation from this rule for Memory Mapping include statements */

#define PimMotAg5SinMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg5SinMeasRaw()))
#define PimMotAg5CosMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg5CosMeasRaw()))
#define PimMotAg6SinMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg6SinMeasRaw()))
#define PimMotAg6CosMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg6CosMeasRaw()))
#define PimMotAg2SinMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg2SinMeasRaw()))
#define PimMotAg2CosMeasRaw_rec (*(Ary1D_u3p13_50 *)(Rte_Pim_MotAg2CosMeasRaw()))

#define SWCALCYCTIMODCON_CNT_U08     16U
#define SWCALDIRBACKW_CNT_U08        1U
#define SWCALHALFMAXAG_CNT_U16       4095U
#define SWCALONEREV_CNT_U16          8192U
#define MOTAGSAMPLEBUFSIZE_CNT_U08   50U

static FUNC(void, MotAgSwCal_CODE) UpdFaildAdcCntrs(void);
static FUNC(uint16, MotAgSwCal_CODE) CalcMotAgDelta(VAR(float32, AUTOMATIC) CurrMotAgCptVal_Volt_T_f32,
                                                  P2VAR(u3p13 , AUTOMATIC, AUTOMATIC) PrevMotAgCptVal_Cnt_T_u3p13);

#define MotAgSwCal_MotCtrl_START_SEC_CODE
#include "CDD_MotAgSwCal_MotCtrl_MemMap.h" 

/**********************************************************************************
 * Name        : MotAgSwCalPer1
 * Description : Main periodic function for Hall Sensor calibration routine.
 * Inputs      : NONE
 * Outputs     : NONE
 * Usage Notes : Called from MotCtrlISR @MotCtrlRate
 ********************************************************************************/
FUNC(void, MotAgSwCal_CODE) MotAgSwCalPer1(void)
{
    VAR(uint8  , AUTOMATIC) LoopCnt_Cnt_T_u08;
    VAR(boolean, AUTOMATIC) AdcSigVld_Cnt_T_logl;
    VAR(float32, AUTOMATIC) ModlnIdxTar_Cnt_T_f32;
    VAR(float32, AUTOMATIC) ModlnIdxSlew_Cnt_T_f32;
    VAR(uint32 , AUTOMATIC) MotAg5SinMeasSum_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) MotAg5CosMeasSum_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) MotAg6SinMeasSum_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) MotAg6CosMeasSum_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) MotAg2SinMeasSum_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) MotAg2CosMeasSum_Cnt_T_u32 = 0U;

    if((MOTCTRLMGR_MotCtrlMotAg5SinAdcFaild == FALSE)&&
       (MOTCTRLMGR_MotCtrlMotAg5CosAdcFaild == FALSE)&&
       (MOTCTRLMGR_MotCtrlMotAg6SinAdcFaild == FALSE)&&
       (MOTCTRLMGR_MotCtrlMotAg6CosAdcFaild == FALSE)&&
       (MOTCTRLMGR_MotCtrlMotAg2SinAdcFaild == FALSE)&&
       (MOTCTRLMGR_MotCtrlMotAg2CosAdcFaild == FALSE))
    {
        AdcSigVld_Cnt_T_logl = TRUE;
    }
    else
    {
        AdcSigVld_Cnt_T_logl = FALSE;
    }


    if((*Rte_Pim_SwCalEna() == TRUE) &&
       (MOTCTRLMGR_MotCtrlVehSpd < Rte_Prm_MotAgSwCalVehSpdThd_Val()) &&
       (MOTCTRLMGR_MotCtrlMfgEnaSt != MFGENAST_PRDNMOD) &&
       (AdcSigVld_Cnt_T_logl == TRUE))
    {
        if(*Rte_Pim_SwCalCycTi() <= *Rte_Pim_BoostTiOut())
        {
            ModlnIdxTar_Cnt_T_f32   = *Rte_Pim_BoostModlnIdx();
            ModlnIdxSlew_Cnt_T_f32  = *Rte_Pim_BoostSlew();
        }
        else if(*Rte_Pim_SwCalCycTi() <= *Rte_Pim_HldTiOut())
        {
            ModlnIdxTar_Cnt_T_f32  = *Rte_Pim_HldModlnIdx();
            ModlnIdxSlew_Cnt_T_f32 = *Rte_Pim_HldSlew();

			/* Sample only during sample window and only once per millisecond (62.5uS * 16 = 1ms) */
            if( ((*Rte_Pim_SwCalCycTi() % SWCALCYCTIMODCON_CNT_U08) == 0U) &&
                (*Rte_Pim_SwCalCycTi()  >= *Rte_Pim_SampleStrtTi()) &&
                (*Rte_Pim_SwCalCycTi()  <  *Rte_Pim_SampleStopTi())  &&
                (*Rte_Pim_SampleIdx()   <  MOTAGSAMPLEBUFSIZE_CNT_U08))
            {
                /*Overflow is intentional for following cumulative angle calculations (will not happen in real scenarios)*/
                *Rte_Pim_MotAg5SinMeasRawCumv() = (uint16)((*Rte_Pim_MotAg5SinMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg5Sin, Rte_Pim_MotAg5SinMeasRawPrev()));
                *Rte_Pim_MotAg5CosMeasRawCumv() = (uint16)((*Rte_Pim_MotAg5CosMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg5Cos, Rte_Pim_MotAg5CosMeasRawPrev()));
                *Rte_Pim_MotAg6SinMeasRawCumv() = (uint16)((*Rte_Pim_MotAg6SinMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg6Sin, Rte_Pim_MotAg6SinMeasRawPrev()));
                *Rte_Pim_MotAg6CosMeasRawCumv() = (uint16)((*Rte_Pim_MotAg6CosMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg6Cos, Rte_Pim_MotAg6CosMeasRawPrev()));
                *Rte_Pim_MotAg2SinMeasRawCumv() = (uint16)((*Rte_Pim_MotAg2SinMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg2Sin, Rte_Pim_MotAg2SinMeasRawPrev()));
                *Rte_Pim_MotAg2CosMeasRawCumv() = (uint16)((*Rte_Pim_MotAg2CosMeasRawCumv()) + CalcMotAgDelta(MOTCTRLMGR_MotCtrlMotAg2Cos, Rte_Pim_MotAg2CosMeasRawPrev()));

                /*SampleIdx is less than Array size due to the if-condition (*Rte_Pim_SampleIdx() < MOTAGSAMPLEBUFSIZE_CNT_U08)
                  Hence, out-of-bounds indexing of these arrays is not possible : Checked for file version 1.0*/
                PimMotAg5SinMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg5SinMeasRawCumv();
                PimMotAg5CosMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg5CosMeasRawCumv();
                PimMotAg6SinMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg6SinMeasRawCumv();
                PimMotAg6CosMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg6CosMeasRawCumv();
                PimMotAg2SinMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg2SinMeasRawCumv();
                PimMotAg2CosMeasRaw_rec[*Rte_Pim_SampleIdx()] = *Rte_Pim_MotAg2CosMeasRawCumv();

                *Rte_Pim_SampleIdx() += 1U;
            }
        }
        else
        {
            ModlnIdxTar_Cnt_T_f32   = *Rte_Pim_CoolDwnModlnIdx();
            ModlnIdxSlew_Cnt_T_f32  = *Rte_Pim_CoolDwnSlew();
            if(*Rte_Pim_SwCalCycTi() > *Rte_Pim_CoolDwnTiOut())
            {
                if((*Rte_Pim_SampleRdyFlg() == FALSE)&&(*Rte_Pim_SampleIdx() > 0U))
                {
                    for(LoopCnt_Cnt_T_u08=0U; LoopCnt_Cnt_T_u08 < (*Rte_Pim_SampleIdx());LoopCnt_Cnt_T_u08++)
                    {
                        MotAg5SinMeasSum_Cnt_T_u32 += PimMotAg5SinMeasRaw_rec[LoopCnt_Cnt_T_u08];
                        MotAg5CosMeasSum_Cnt_T_u32 += PimMotAg5CosMeasRaw_rec[LoopCnt_Cnt_T_u08];
                        MotAg6SinMeasSum_Cnt_T_u32 += PimMotAg6SinMeasRaw_rec[LoopCnt_Cnt_T_u08];
                        MotAg6CosMeasSum_Cnt_T_u32 += PimMotAg6CosMeasRaw_rec[LoopCnt_Cnt_T_u08];
                        MotAg2SinMeasSum_Cnt_T_u32 += PimMotAg2SinMeasRaw_rec[LoopCnt_Cnt_T_u08];
                        MotAg2CosMeasSum_Cnt_T_u32 += PimMotAg2CosMeasRaw_rec[LoopCnt_Cnt_T_u08];
                    }

                    *Rte_Pim_SamplePosnIdx() = *Rte_Pim_PosnIdx();

                    /*SampleIdx is non-zero due to the if-condition that checks for (*Rte_Pim_SampleIdx() > 0U).
                      Hence, divide by zero not possible for below statements : Checked for file version 1.0*/
                    *Rte_Pim_MotAg5SinMeasAvrg() = (uint16)(MotAg5SinMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));
                    *Rte_Pim_MotAg5CosMeasAvrg() = (uint16)(MotAg5CosMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));
                    *Rte_Pim_MotAg6SinMeasAvrg() = (uint16)(MotAg6SinMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));
                    *Rte_Pim_MotAg6CosMeasAvrg() = (uint16)(MotAg6CosMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));
                    *Rte_Pim_MotAg2SinMeasAvrg() = (uint16)(MotAg2SinMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));
                    *Rte_Pim_MotAg2CosMeasAvrg() = (uint16)(MotAg2CosMeasSum_Cnt_T_u32/(*Rte_Pim_SampleIdx()));

                    *Rte_Pim_SampleIdx() = 0U;
                    *Rte_Pim_SampleRdyFlg() = TRUE;
                }

                if(*Rte_Pim_SwCalStepDir() == SWCALDIRFWD_CNT_U08)
                {
                    *Rte_Pim_PosnIdx() += *Rte_Pim_PosnStepSize();
                    if((*Rte_Pim_PosnIdx() >> SWCALPOSNIDXSHIFTCON_CNT_U08) >= *Rte_Pim_ElecRevCnt())
                    {
                        *Rte_Pim_SwCalStepDir() = SWCALDIRBACKW_CNT_U08;
                    }
                }
                else
                {
                    *Rte_Pim_PosnIdx() -= *Rte_Pim_PosnStepSize();
                    if(*Rte_Pim_PosnIdx()==0)
                    {
                        RstFctPrm();
                    }
                }

                *Rte_Pim_SwCalCycTi() = 0U;
            }
        }

        /*Rollover is intentional (Expect correct values to be sent via Server runnables which would prevent rollover)*/
        *Rte_Pim_SwCalCycTi() += 1U;

        
        *Rte_Pim_SwCalMotModlnIdx() = Lim_f32(ModlnIdxTar_Cnt_T_f32,(*Rte_Pim_SwCalMotModlnIdx()-ModlnIdxSlew_Cnt_T_f32),(*Rte_Pim_SwCalMotModlnIdx()+ ModlnIdxSlew_Cnt_T_f32));
    }
    else
    {
        RstFctPrm();
        if(AdcSigVld_Cnt_T_logl == FALSE)
        {
            UpdFaildAdcCntrs();
        }
    }
    MOTCTRLMGR_MotCtrlSwCalEna      = *Rte_Pim_SwCalEna();
    MOTCTRLMGR_MotCtrlSwCalModlnIdx = Lim_f32(*Rte_Pim_SwCalMotModlnIdx(),0.0F,1.0F);
    MOTCTRLMGR_MotCtrlSwCalPosnIdx  = (uint16)(*Rte_Pim_PosnIdx() & POSNIDXWORDMASK_CNT_U16);
}



/*******************************************************************************************
 * Name        : CalcMotAgDelta
 * Description : Calculates motor angle delta when the current and previous values are passed
 *               as inputs. Rollover adjustment is done and output is in signed 16-bit.
 * Inputs      : CurrMotAgCptVal_Volt_T_f32 : Current value of the sine/cosine component of
 *                                            the motor angle signal being processed
 *               *PrevMotAgCptVal_Cnt_T_u3p13 : Previous value of the sine/cosine component of
 *                                            the motor angle signal being processed
 * Outputs     : MotAgDelta (Return) : The absolute delta between current and previous
 *                                      motor angle signal's sine/cosine component 
 * Usage Notes : NONE
 *****************************************************************************************/
static FUNC(uint16, MotAgSwCal_CODE) CalcMotAgDelta(VAR(float32, AUTOMATIC) CurrMotAgCptVal_Volt_T_f32,
                                                  P2VAR(u3p13 , AUTOMATIC, AUTOMATIC) PrevMotAgCptVal_Cnt_T_u3p13)
{
    VAR(u3p13, AUTOMATIC) CurrMotAgCptVal_Cnt_T_u3p13;
    VAR(sint32, AUTOMATIC) MotAgDelta_Cnt_T_s32;

    CurrMotAgCptVal_Cnt_T_u3p13 = FloatToFixd_u16_f32(CurrMotAgCptVal_Volt_T_f32, NXTRFIXDPT_FLOATTOP13_ULS_F32);

    MotAgDelta_Cnt_T_s32 = (sint32)CurrMotAgCptVal_Cnt_T_u3p13 - (sint32)(*PrevMotAgCptVal_Cnt_T_u3p13);
    *PrevMotAgCptVal_Cnt_T_u3p13 = CurrMotAgCptVal_Cnt_T_u3p13;

    if(MotAgDelta_Cnt_T_s32 < 0)
    {
        MotAgDelta_Cnt_T_s32 = -MotAgDelta_Cnt_T_s32;
    }
    
    return (uint16)MotAgDelta_Cnt_T_s32;
}

/*******************************************************************************************
 * Name        : UpdFaildAdcCntrs
 * Description : Update the ADC Failed counter for each signal input from ADC when there the
 *               corresponding ADC signal's failed flag is set to TRUE.
 * Inputs      : MOTCTRLMGR_MotCtrlMotAg5SinAdcFaild - MotAg5Sin ADC singal failed
 *               MOTCTRLMGR_MotCtrlMotAg5CosAdcFaild - MotAg5Cos ADC singal failed
 *               MOTCTRLMGR_MotCtrlMotAg6SinAdcFaild - MotAg6Sin ADC singal failed
 *               MOTCTRLMGR_MotCtrlMotAg6CosAdcFaild - MotAg6Cos ADC singal failed
 *               MOTCTRLMGR_MotCtrlMotAg2SinAdcFaild - MotAg2Sin ADC singal failed
 *               MOTCTRLMGR_MotCtrlMotAg2CosAdcFaild - MotAg2Cos ADC singal failed
 * Outputs     : *Rte_Pim_MotAg5SinAdcFaildCntr()    - MotAg5SinAdc signal failed counter
 *               *Rte_Pim_MotAg5CosAdcFaildCntr()    - MotAg5CosAdc signal failed counter
 *               *Rte_Pim_MotAg6SinAdcFaildCntr()    - MotAg6SinAdc signal failed counter
 *               *Rte_Pim_MotAg6CosAdcFaildCntr()    - MotAg6CosAdc signal failed counter
 *               *Rte_Pim_MotAg2SinAdcFaildCntr()    - MotAg2SinAdc signal failed counter
 *               *Rte_Pim_MotAg2CosAdcFaildCntr()    - MotAg2CosAdc signal failed counter
 * Usage Notes : NONE
 *****************************************************************************************/
static FUNC(void, MotAgSwCal_CODE) UpdFaildAdcCntrs(void)
{
    if(MOTCTRLMGR_MotCtrlMotAg5SinAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg5SinAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
    if(MOTCTRLMGR_MotCtrlMotAg5CosAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg5CosAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
    if(MOTCTRLMGR_MotCtrlMotAg6SinAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg6SinAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
    if(MOTCTRLMGR_MotCtrlMotAg6CosAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg6CosAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
    if(MOTCTRLMGR_MotCtrlMotAg2SinAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg2SinAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
    if(MOTCTRLMGR_MotCtrlMotAg2CosAdcFaild == TRUE)
    {
        *Rte_Pim_MotAg2CosAdcFaildCntr() += 1U; /*Rollover is intentional*/
    }
}

#define MotAgSwCal_MotCtrl_STOP_SEC_CODE
#include "CDD_MotAgSwCal_MotCtrl_MemMap.h" 
