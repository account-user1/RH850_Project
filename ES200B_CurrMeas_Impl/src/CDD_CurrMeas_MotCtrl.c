/**********************************************************************************************************************
 * Copyright 2016, 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_CurrMeas_MotCtrl.c
 * Module Description: Implementation of CurrMeas
 * Project           : CBD
 * Author            : Nick Saxton
 **********************************************************************************************************************
 * Version Control:
 * %version:           3 %
 * %derived_by:        nz4qtt %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author         Change Description                                                         SCR #
 * --------  -------  --------  --------------------------------------------------------------------------    ---------
 * 06/17/16  1        Nick      Initial Version                                                               EA4#5602
 * 05/11/17  2        KByrski   Updated as per Design_2.0.0                                                   EA4#10116
 * 10/16/17  3        Krishna   Fixed anomaly EA4#13330 by using required NVM blocks as applicable            EA4#15188
 *********************************************************************************************************************/

#include "Rte_CDD_CurrMeas.h"
#include "CDD_CurrMeas.h"
#include "CDD_MotCtrlMgr_Data.h"
#include "FltInj.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "ArchGlbPrm.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 1.1   [NXTRDEV 1.1.2]:  Inline functions are used for functions called from Motor Control ISR to allow for throughput optimization */
/* MISRA-C:2004 Rule 19.1  [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/********************************************* Embedded Local Constants **********************************************/

#define DEGREES30_MOTRAD_F32    0.5236F
#define MAXCURRCORRD_AMPR_F32   200.0F
#define PHAONTIBCOK_CNT_U08     0x03U
#define PHAONTIACOK_CNT_U08     0x05U
#define PHAONTIABOK_CNT_U08     0x06U
#define PHAONTIABCOK_CNT_U08    0x07U

#define PHAONTIA_CNT_U08        0x04U
#define PHAONTIB_CNT_U08        0x02U
#define PHAONTIC_CNT_U08        0x01U
#define NANOSECTOSEC_ULS_F32    0.000000001F

/******************************************** Local Function Prototypes **********************************************/

LOCAL_INLINE FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkENABC(void);

LOCAL_INLINE FUNC(float32, CDD_CurrMeas_APPL_CODE) CalcMotCurrMotAgCorrd(void);

LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdABC(float32 MotCurrOffsA_Volt_T_f32,
                                                                   float32 MotCurrOffsB_Volt_T_f32,
                                                                   float32 MotCurrOffsC_Volt_T_f32);

LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcABC(P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsA_Volt_T_f32,
                                                            P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsB_Volt_T_f32,
                                                            P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsC_Volt_T_f32);

#define CDD_CurrMeas_MotCtrl_START_SEC_CODE
#include "CDD_CurrMeas_MotCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Name:        CurrMeasPer2
 * Description: Created for Current measurement
 * Inputs:      MotCtrlMotCurrAdcVlyA            Used in sub-function only
 *              MotCtrlMotCurrAdcVlyB            Used in sub-function only
 *              MotCtrlMotCurrAdcVlyC            Used in sub-function only
 *              MotCtrlDiagcStsIvtr1Inactv       <- MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv
 *              MotCtrlEcuTFild                  Unused
 *              MotCtrlMotAgElec                 Used in sub-function only
 *              MotCtrlMotElecMeclPolarity       Used in sub-function only
 *              MotCtrlMotVelMrf                 Used in sub-function only
 *              MotCtrlPhaOnTiA                  Used in sub-function only
 *              MotCtrlPhaOnTiB                  Used in sub-function only
 *              MotCtrlPhaOnTiC                  Used in sub-function only
 *              MotCtrlPwmPerd                   Used in sub-function only
 *              MotCtrlSysSt                     <- MOTCTRLMGR_MotCtrlSysSt
 *              MotCtrlCurrMeasWrmIninTestCmplPrev <- MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl
 *              MotCtrlMotCurrAdcVlyAAdcFaild    Used in sub-function only
 *              MotCtrlMotCurrAdcVlyBAdcFaild    Used in sub-function only
 *              MotCtrlMotCurrAdcVlyCAdcFaild    Used in sub-function only
 *              MotCtrlBrdgVltg                  Used in sub-function only
 *              MotCurrOffsDeltaA                Used in sub-function only
 *              MotCurrOffsDeltaB                Used in sub-function only
 *              MotCurrOffsDeltaC                Used in sub-function only
 *              CurrMeasMinRqrdPhaOnTi           Used in sub-function only
 *              CurrMeasMotAgCompuDly            Used in sub-function only
 *              MotCurrEolGainA                  Used in sub-function only
 *              MotCurrEolGainB                  Used in sub-function only
 *              MotCurrEolGainC                  Used in sub-function only
 *              CurrMeasEolOffsLoCmuOffs         Used in sub-function only
 *              MotCurrOffsLoAvrgA               Used in sub-function only
 *              MotCurrOffsLoAvrgB               Used in sub-function only
 *              MotCurrOffsLoAvrgC               Used in sub-function only
 *              MotCurrRollgCnt1Prev             <- Rte_Pim_MotCurrRollgCnt1Prev
 *              MotCtrlNtc5DErrCntPrev           <- Rte_Pim_MotCtrlNtc5DErrCntPrev
 * Outputs:     MotCtrlMotCurrCorrdA             -> MOTCTRLMGR_MotCtrlMotCurrCorrdA
 *              MotCtrlMotCurrCorrdB             Used in sub-function only
 *              MotCtrlMotCurrCorrdC             Used in sub-function only
 *              MotCtrlCurrMeasMotAgCorrd        -> MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd
 *              MotCtrlMotCurrRollgCntr1         -> Rte_Pim_MotCurrRollgCnt1Prev(), MOTCTRLMGR_MotCtrlMotCurrRollgCntr1
 *              MotCtrlNtc5DErrCnt               -> Rte_Pim_MotCtrlNtc5DErrCntPrev(), MOTCTRLMGR_MotCtrlNtc5DErrCnt
 * Usage Notes: Called by Motor control ISR (Call rate 2 * MtrCtrlISR)
 *********************************************************************************************************************/
FUNC(void, CDD_CurrMeas_APPL_CODE) CurrMeasPer2(void)
{
    /*** Inputs ***/
    VAR(boolean, AUTOMATIC) MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl;
    VAR(SysSt1,  AUTOMATIC) MotCtrlSysSt_T_enum;
    VAR(boolean, AUTOMATIC) MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl;

    /*** Temporary ***/
    VAR(float32, AUTOMATIC) MotCurrOffsA_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsB_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsC_Volt_T_f32;
    VAR(boolean, AUTOMATIC) PrtclChkENABC_Cnt_T_logl;

    /*** Read inputs ***/
    MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl     = MOTCTRLMGR_MotCtrlDiagcStsIvtr1Inactv;
    MotCtrlSysSt_T_enum                       = MOTCTRLMGR_MotCtrlSysSt;
    MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl = MOTCTRLMGR_MotCtrlCurrMeasWrmIninTestCmpl;

    if (((MotCtrlSysSt_T_enum == SYSST_ENA) || (MotCtrlSysSt_T_enum == SYSST_WRMININ)) && (MotCtrlCurrMeasWrmIninTestCmpl_Cnt_T_logl == TRUE))
    {
        if (MotCtrlDiagcStsIvtr1Inactv_Cnt_T_logl == FALSE)
        {
            PrtclChkENABC_Cnt_T_logl = ProtocolChkENABC();

            if( PrtclChkENABC_Cnt_T_logl == TRUE)
            {
                OffsCalcABC(&MotCurrOffsA_Volt_T_f32, &MotCurrOffsB_Volt_T_f32, &MotCurrOffsC_Volt_T_f32);
                CalMotCurrCorrdABC(MotCurrOffsA_Volt_T_f32,MotCurrOffsB_Volt_T_f32,MotCurrOffsC_Volt_T_f32);

                /* Overflow is intentional */
                *Rte_Pim_MotCurrRollgCnt1Prev() = *Rte_Pim_MotCurrRollgCnt1Prev() + 1U;
            }
            else
            {
                /* Overflow is intentional */
                *Rte_Pim_MotCtrlNtc5DErrCntPrev() = *Rte_Pim_MotCtrlNtc5DErrCntPrev() + 1U;
            }

			#if (STD_ON == FLTINJENA)
            FltInj_f32_Oper(&MOTCTRLMGR_MotCtrlMotCurrCorrdA, FLTINJ_CURRMEAS_MOTCURRCORRDA);
			#endif
        }

        MOTCTRLMGR_MotCtrlCurrMeasMotAgCorrd = CalcMotCurrMotAgCorrd();
    }

    /*** Write outputs ***/
    MOTCTRLMGR_MotCtrlMotCurrRollgCntr1 = *Rte_Pim_MotCurrRollgCnt1Prev();
    MOTCTRLMGR_MotCtrlNtc5DErrCnt       = *Rte_Pim_MotCtrlNtc5DErrCntPrev();
}

/************************************************** Local Functions **************************************************/

/**********************************************************************************************************************
 * Name:        OffsCalcABC
 * Description: Calculate the offset for ABC
 * Inputs:      MotCtrlPhaOnTiA                  <- MOTCTRLMGR_MotCtrlPhaOnTiA
 *              MotCtrlPhaOnTiB                  <- MOTCTRLMGR_MotCtrlPhaOnTiB
 *              MotCtrlPhaOnTiC                  <- MOTCTRLMGR_MotCtrlPhaOnTiC
 *              MotCtrlBrdgVltg                  <- MOTCTRLMGR_MotCtrlBrdgVltg
 *              MotCurrOffsDeltaA                <- Rte_Pim_MotCurrOffsDeltaA()
 *              MotCurrOffsDeltaB                <- Rte_Pim_MotCurrOffsDeltaB()
 *              MotCurrOffsDeltaC                <- Rte_Pim_MotCurrOffsDeltaC()
 *              CurrMeasEolOffsLoCmuOffs         <- Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val()
 *              MotCurrOffsLoAvrgA               <- Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA
 *              MotCurrOffsLoAvrgB               <- Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB
 *              MotCurrOffsLoAvrgC               <- Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC
 * Outputs:     MotCurrOffsA                     -> MotCurrOffsA_Volt_T_f32
 *              MotCurrOffsB                     -> MotCurrOffsB_Volt_T_f32
 *              MotCurrOffsC                     -> MotCurrOffsC_Volt_T_f32
 * Usage Notes: None
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) OffsCalcABC(P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsA_Volt_T_f32,
                                                            P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsB_Volt_T_f32,
                                                            P2VAR(float32, AUTOMATIC, CDD_CurrMeas_VAR) MotCurrOffsC_Volt_T_f32)
{
    /*** Inputs ***/
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiA_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiB_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiC_NanoSec_T_u32;
    VAR(float32, AUTOMATIC) MotCtrlBrdgVltg_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsDeltaA_VoltNanoSecPerVolt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsDeltaB_VoltNanoSecPerVolt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsDeltaC_VoltNanoSecPerVolt_T_f32;
    VAR(uint32,  AUTOMATIC) CurrMeasEolOffsLoCmuOffs_NanoSec_T_u32;
    VAR(float32, AUTOMATIC) MotCurrOffsLoAvrgA_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsLoAvrgB_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrOffsLoAvrgC_Volt_T_f32;

    /*** Read inputs ***/
    MotCtrlPhaOnTiA_NanoSec_T_u32                  = MOTCTRLMGR_MotCtrlPhaOnTiA;
    MotCtrlPhaOnTiB_NanoSec_T_u32                  = MOTCTRLMGR_MotCtrlPhaOnTiB;
    MotCtrlPhaOnTiC_NanoSec_T_u32                  = MOTCTRLMGR_MotCtrlPhaOnTiC;
    MotCtrlBrdgVltg_Volt_T_f32                     = MOTCTRLMGR_MotCtrlBrdgVltg;
    MotCurrOffsDeltaA_VoltNanoSecPerVolt_T_f32     = *Rte_Pim_MotCurrOffsDeltaA();
    MotCurrOffsDeltaB_VoltNanoSecPerVolt_T_f32     = *Rte_Pim_MotCurrOffsDeltaB();
    MotCurrOffsDeltaC_VoltNanoSecPerVolt_T_f32     = *Rte_Pim_MotCurrOffsDeltaC();
    CurrMeasEolOffsLoCmuOffs_NanoSec_T_u32         = Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val();
    MotCurrOffsLoAvrgA_Volt_T_f32                  = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgA;
    MotCurrOffsLoAvrgB_Volt_T_f32                  = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgB;
    MotCurrOffsLoAvrgC_Volt_T_f32                  = Rte_Pim_CurrMeasEolOffsCalSetABC()->CurrMeasMotCurrOffsLoAvrgC;

	
	*MotCurrOffsA_Volt_T_f32 = (MotCurrOffsDeltaA_VoltNanoSecPerVolt_T_f32
            * ((float32) MotCtrlPhaOnTiA_NanoSec_T_u32 - (float32) CurrMeasEolOffsLoCmuOffs_NanoSec_T_u32)
            * MotCtrlBrdgVltg_Volt_T_f32) + MotCurrOffsLoAvrgA_Volt_T_f32;

    *MotCurrOffsB_Volt_T_f32 = (MotCurrOffsDeltaB_VoltNanoSecPerVolt_T_f32
            * ((float32) MotCtrlPhaOnTiB_NanoSec_T_u32 - (float32) CurrMeasEolOffsLoCmuOffs_NanoSec_T_u32)
            * MotCtrlBrdgVltg_Volt_T_f32) + MotCurrOffsLoAvrgB_Volt_T_f32;

    *MotCurrOffsC_Volt_T_f32 = (MotCurrOffsDeltaC_VoltNanoSecPerVolt_T_f32
            * ((float32) MotCtrlPhaOnTiC_NanoSec_T_u32 - (float32) CurrMeasEolOffsLoCmuOffs_NanoSec_T_u32)
            * MotCtrlBrdgVltg_Volt_T_f32) + MotCurrOffsLoAvrgC_Volt_T_f32;
}

/**********************************************************************************************************************
 * Name:        CalMotCurrCorrdABC
 * Description: Calculate the motor current coordinates for ABC
 * Inputs:      MotCtrlPwmPerd                   <- MOTCTRLMGR_MotCtrlPwmPerd
 *              MotCtrlPhaOnTiA                  <- MOTCTRLMGR_MotCtrlPhaOnTiA
 *              MotCtrlPhaOnTiB                  <- MOTCTRLMGR_MotCtrlPhaOnTiB
 *              MotCtrlPhaOnTiC                  <- MOTCTRLMGR_MotCtrlPhaOnTiC
 *              CurrMeasMinRqrdPhaOnTi           <- Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val()
 *              MotCtrlMotCurrAdcVlyA            <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyA
 *              MotCtrlMotCurrAdcVlyB            <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyB
 *              MotCtrlMotCurrAdcVlyC            <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyC
 *              MotCurrOffsA                     <- MotCurrOffsA_Volt_T_f32
 *              MotCurrOffsB                     <- MotCurrOffsB_Volt_T_f32
 *              MotCurrOffsC                     <- MotCurrOffsC_Volt_T_f32
 *              MotCurrEolGainA                  <- Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA
 *              MotCurrEolGainB                  <- Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB
 *              MotCurrEolGainC                  <- Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC
 * Outputs:     MotCtrlMotCurrCorrdA             -> MOTCTRLMGR_MotCtrlMotCurrCorrdA
 *              MotCtrlMotCurrCorrdB             -> MOTCTRLMGR_MotCtrlMotCurrCorrdB
 *              MotCtrlMotCurrCorrdC             -> MOTCTRLMGR_MotCtrlMotCurrCorrdC
 * Usage Notes: None
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, CDD_CurrMeas_APPL_CODE) CalMotCurrCorrdABC(float32 MotCurrOffsA_Volt_T_f32,
                                                                   float32 MotCurrOffsB_Volt_T_f32,
                                                                   float32 MotCurrOffsC_Volt_T_f32)
{
    /*** Inputs ***/
    VAR(uint32,  AUTOMATIC) MotCtrlPwmPerd_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiA_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiB_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) MotCtrlPhaOnTiC_NanoSec_T_u32;
    VAR(uint32,  AUTOMATIC) CurrMeasMinRqrdPhaOnTi_NanoSec_T_u32;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrAdcVlyA_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrAdcVlyB_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrAdcVlyC_Volt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrEolGainA_AmprPerVolt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrEolGainB_AmprPerVolt_T_f32;
    VAR(float32, AUTOMATIC) MotCurrEolGainC_AmprPerVolt_T_f32;

    /*** Temporary ***/
    VAR(uint8,   AUTOMATIC) PhaOnTi_Cnt_T_u08 = 0;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrCorrdA_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrCorrdB_Ampr_T_f32;
    VAR(float32, AUTOMATIC) MotCtrlMotCurrCorrdC_Ampr_T_f32;

    /*** Read inputs ***/
    MotCtrlPwmPerd_NanoSec_T_u32         = MOTCTRLMGR_MotCtrlPwmPerd;
    MotCtrlPhaOnTiA_NanoSec_T_u32        = MOTCTRLMGR_MotCtrlPhaOnTiA;
    MotCtrlPhaOnTiB_NanoSec_T_u32        = MOTCTRLMGR_MotCtrlPhaOnTiB;
    MotCtrlPhaOnTiC_NanoSec_T_u32        = MOTCTRLMGR_MotCtrlPhaOnTiC;
    CurrMeasMinRqrdPhaOnTi_NanoSec_T_u32 = Rte_Prm_CurrMeasMinRqrdPhaOnTi_Val();
    MotCtrlMotCurrAdcVlyA_Volt_T_f32     = MOTCTRLMGR_MotCtrlMotCurrAdcVlyA;
    MotCtrlMotCurrAdcVlyB_Volt_T_f32     = MOTCTRLMGR_MotCtrlMotCurrAdcVlyB;
    MotCtrlMotCurrAdcVlyC_Volt_T_f32     = MOTCTRLMGR_MotCtrlMotCurrAdcVlyC;
    MotCurrEolGainA_AmprPerVolt_T_f32    = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainA;
    MotCurrEolGainB_AmprPerVolt_T_f32    = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainB;
    MotCurrEolGainC_AmprPerVolt_T_f32    = Rte_Pim_CurrMeasEolGainCalSetABC()->CurrMeasMotCurrEolGainC;

    if ((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiA_NanoSec_T_u32) >= CurrMeasMinRqrdPhaOnTi_NanoSec_T_u32)
    {
        PhaOnTi_Cnt_T_u08 |= PHAONTIA_CNT_U08;
    }

    if ((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiB_NanoSec_T_u32) >= CurrMeasMinRqrdPhaOnTi_NanoSec_T_u32)
    {
        PhaOnTi_Cnt_T_u08 |= PHAONTIB_CNT_U08;
    }

    if ((MotCtrlPwmPerd_NanoSec_T_u32 - MotCtrlPhaOnTiC_NanoSec_T_u32) >= CurrMeasMinRqrdPhaOnTi_NanoSec_T_u32)
    {
        PhaOnTi_Cnt_T_u08 |= PHAONTIC_CNT_U08;
    }

    switch (PhaOnTi_Cnt_T_u08)
    {
        case PHAONTIABCOK_CNT_U08:
            MotCtrlMotCurrCorrdA_Ampr_T_f32 = -MotCurrEolGainA_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32);
            MotCtrlMotCurrCorrdB_Ampr_T_f32 = -MotCurrEolGainB_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32);
            MotCtrlMotCurrCorrdC_Ampr_T_f32 = -MotCurrEolGainC_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32);
        break;

        case PHAONTIBCOK_CNT_U08:
            MotCtrlMotCurrCorrdB_Ampr_T_f32 = -MotCurrEolGainB_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32);
            MotCtrlMotCurrCorrdC_Ampr_T_f32 = -MotCurrEolGainC_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32);
            MotCtrlMotCurrCorrdA_Ampr_T_f32 = -MotCtrlMotCurrCorrdB_Ampr_T_f32 - MotCtrlMotCurrCorrdC_Ampr_T_f32;
        break;

        case PHAONTIACOK_CNT_U08:
            MotCtrlMotCurrCorrdA_Ampr_T_f32 = -MotCurrEolGainA_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32);
            MotCtrlMotCurrCorrdC_Ampr_T_f32 = -MotCurrEolGainC_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyC_Volt_T_f32 - MotCurrOffsC_Volt_T_f32);
            MotCtrlMotCurrCorrdB_Ampr_T_f32 = -MotCtrlMotCurrCorrdA_Ampr_T_f32 - MotCtrlMotCurrCorrdC_Ampr_T_f32;
        break;

        case PHAONTIABOK_CNT_U08:
            MotCtrlMotCurrCorrdA_Ampr_T_f32 = -MotCurrEolGainA_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyA_Volt_T_f32 - MotCurrOffsA_Volt_T_f32);
            MotCtrlMotCurrCorrdB_Ampr_T_f32 = -MotCurrEolGainB_AmprPerVolt_T_f32 * (MotCtrlMotCurrAdcVlyB_Volt_T_f32 - MotCurrOffsB_Volt_T_f32);
            MotCtrlMotCurrCorrdC_Ampr_T_f32 = -MotCtrlMotCurrCorrdA_Ampr_T_f32 - MotCtrlMotCurrCorrdB_Ampr_T_f32;
        break;

        default:
            *Rte_Pim_PhaOnTiErrCntPrev() = *Rte_Pim_PhaOnTiErrCntPrev() + 1U;

            /* Previous values remain unchanged in case of an error. */
            MotCtrlMotCurrCorrdA_Ampr_T_f32 = MOTCTRLMGR_MotCtrlMotCurrCorrdA;
            MotCtrlMotCurrCorrdB_Ampr_T_f32 = MOTCTRLMGR_MotCtrlMotCurrCorrdB;
            MotCtrlMotCurrCorrdC_Ampr_T_f32 = MOTCTRLMGR_MotCtrlMotCurrCorrdC;
        break;
    }

    /*** Write outputs ***/
    MOTCTRLMGR_MotCtrlMotCurrCorrdA = Lim_f32(MotCtrlMotCurrCorrdA_Ampr_T_f32, -MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32);
    MOTCTRLMGR_MotCtrlMotCurrCorrdB = Lim_f32(MotCtrlMotCurrCorrdB_Ampr_T_f32, -MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32);
    MOTCTRLMGR_MotCtrlMotCurrCorrdC = Lim_f32(MotCtrlMotCurrCorrdC_Ampr_T_f32, -MAXCURRCORRD_AMPR_F32, MAXCURRCORRD_AMPR_F32);
}

/**********************************************************************************************************************
 * Name:        CalcMotCurrMotAgCorrd
 * Description: Calculate the motor current angle corrected
 * Inputs:      MotCtrlMotAgElec                 <- MOTCTRLMGR_MotCtrlMotAgElec              (Electrical angle)
 *              MotCtrlMotElecMeclPolarity       <- MOTCTRLMGR_MotCtrlMotElecMeclPolarity    (Polarity)
 *              MotCtrlMotVelMrf                 <- MOTCTRLMGR_MotCtrlMotVelMrf              (MotorVelocity)
 *              CurrMeasMotAgCompuDly            <- Rte_Prm_CurrMeasMotAgCompuDly_Val()
 * Outputs:     MotCtrlCurrMeasMotAgCorrd        -> MotCtrlCurrMeasMotAgCorrd_Rad_T_f32      (Final Corrected angle)
 * Usage Notes: None
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(float32, CDD_CurrMeas_APPL_CODE) CalcMotCurrMotAgCorrd(void)
{
    /*** Inputs ***/
    VAR(uint16,  AUTOMATIC) MotCtrlMotAgElec_Rev_T_u0p16;
    VAR(sint8,   AUTOMATIC) MotCtrlMotElecMeclPolarity_Uls_T_s08;
    VAR(float32, AUTOMATIC) MotCtrlMotVelMrf_MtrRadpS_T_f32;
    VAR(uint32,  AUTOMATIC) CurrMeasMotAgCompuDly_NanoSec_T_u32;

    /*** Outputs ***/
    VAR(float32, AUTOMATIC) MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;

    /***Read inputs ***/
    MotCtrlMotAgElec_Rev_T_u0p16         = MOTCTRLMGR_MotCtrlMotAgElec;
    MotCtrlMotElecMeclPolarity_Uls_T_s08 = MOTCTRLMGR_MotCtrlMotElecMeclPolarity;
    MotCtrlMotVelMrf_MtrRadpS_T_f32      = MOTCTRLMGR_MotCtrlMotVelMrf;
    CurrMeasMotAgCompuDly_NanoSec_T_u32  = Rte_Prm_CurrMeasMotAgCompuDly_Val();

    MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 = FixdToFloat_f32_u16(MotCtrlMotAgElec_Rev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32) * ARCHGLBPRM_2PI_ULS_F32;
    MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 -= ((float32) MotCtrlMotElecMeclPolarity_Uls_T_s08) * DEGREES30_MOTRAD_F32;
    MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 += (((float32) Rte_Prm_SysGlbPrmMotPoleCnt_Val()) * 0.5F) * MotCtrlMotVelMrf_MtrRadpS_T_f32
            * ((float32) CurrMeasMotAgCompuDly_NanoSec_T_u32) * NANOSECTOSEC_ULS_F32;

    if (MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 > ARCHGLBPRM_2PI_ULS_F32)
    {
        MotCtrlCurrMeasMotAgCorrd_Rad_T_f32 -= ARCHGLBPRM_2PI_ULS_F32;
    }

    return MotCtrlCurrMeasMotAgCorrd_Rad_T_f32;
}

/**********************************************************************************************************************
 * Name:        ProtocolChkENABC
 * Description: Protocol check
 * Inputs:      MotCtrlMotCurrAdcVlyAAdcFaild     <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild
 *              MotCtrlMotCurrAdcVlyBAdcFaild     <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild
 *              MotCtrlMotCurrAdcVlyCAdcFaild     <- MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild
 * Outputs:     PrtclChkENABC                     -> ProtocolChkEn_Cnt_T_logl
 * Usage Notes: None
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(boolean, CDD_CurrMeas_APPL_CODE) ProtocolChkENABC(void)
{
    /*** Inputs ***/
    VAR(boolean, AUTOMATIC) MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl;
    VAR(boolean, AUTOMATIC) MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl;

    /*** Outputs ***/
    VAR(boolean, AUTOMATIC) ProtocolChkEn_Cnt_T_logl;

    /*** Read inputs ***/
    MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl = MOTCTRLMGR_MotCtrlMotCurrAdcVlyAAdcFaild;
    MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl = MOTCTRLMGR_MotCtrlMotCurrAdcVlyBAdcFaild;
    MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl = MOTCTRLMGR_MotCtrlMotCurrAdcVlyCAdcFaild;

    if( (MotCtrlMotCurrAdcVlyAAdcFaild_Cnt_T_logl == FALSE) &&
        (MotCtrlMotCurrAdcVlyBAdcFaild_Cnt_T_logl == FALSE) &&
        (MotCtrlMotCurrAdcVlyCAdcFaild_Cnt_T_logl == FALSE) )
    {
        ProtocolChkEn_Cnt_T_logl = TRUE;
    }
    else
    {
        ProtocolChkEn_Cnt_T_logl = FALSE;
    }

#if (STD_ON == FLTINJENA)
    FltInj_u08_Oper(&ProtocolChkEn_Cnt_T_logl, FLTINJ_CURRMEAS_TESTOK);
#endif

    return ProtocolChkEn_Cnt_T_logl;
}

/********************************************** End of Local Functions ***********************************************/

#define CDD_CurrMeas_MotCtrl_STOP_SEC_CODE
#include "CDD_CurrMeas_MotCtrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
