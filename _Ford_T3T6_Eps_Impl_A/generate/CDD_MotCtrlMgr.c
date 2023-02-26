
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr.c
* Module Description: Motor Control Manager
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 13.04.2018 17:33:15
***********************************************************************************************************************
* Version Control:
* %version:          15 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Template Version                                                        EA4#511
* 10/29/15  2        LWW       Template update for signal mapping changes                                      EA4#3428
* 08/08/16  3        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/



/************************************************ Include Statements *************************************************/
#include "Rte_CDD_MotCtrlMgr.h"
#include "CDD_MotCtrlMgr_Data.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value.  Applicable to all casts to void for all Rte_Read and Rte_Write and for client calls that don't have return errors. */ 

/********************************************* Embedded Local Constants **********************************************/

/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/

/*********************************************** Function Definitions ************************************************/

#define CDD_MotCtrlMgr_START_SEC_CODE
#include "CDD_MotCtrlMgr_MemMap.h"

/**********************************************************************************************************************
  * Name:        MotCtrlMgrPer1
  * Description: This function copies all non-RTE data transferred by the DMA from the Motor Control loop to the 2ms loop
  *              and provides them as standard sender outputs for use by the RTE.  A DMA function is called to ensure
  *              completion of the transfer and in case of a timeout error, the RTE outputs are not updated from values
  *              last loop.
  * Inputs:      MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec structure
  * Outputs:     Individual RTE outputs for all signals
  * Usage Notes: To be scheduled by the RTE near the start of the 2ms loop.  Note that other runnables not requiring 
  *              Motor control data can be scheduled in-between the runnable triggering the DMA transfer and this function
  *              to try to prevent or minimize stalled execution while waiting for the DMA transfer.
  ********************************************************************************************************************/
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer1(void)
{
	if (Rte_Call_DmaWaitForMotCtrlTo2MilliSecTrf_Oper() == E_OK)
	{
		(void)Rte_Write_MotAgCumvAlgndMrfRev_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAgCumvAlgndMrfRev);
		(void)Rte_Write_MotAgCumvInid_Logl(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAgCumvInid);
		(void)Rte_Write_MotCurrDax_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrDax);
		(void)Rte_Write_MotCurrQax_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrQax);
		(void)Rte_Write_MotCurrCorrdA_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrCorrdA);
		(void)Rte_Write_MotCurrCorrdB_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrCorrdB);
		(void)Rte_Write_MotCurrCorrdC_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrCorrdC);
		(void)Rte_Write_MotCurrRollgCntr1_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrRollgCntr1);
		(void)Rte_Write_Ntc5DErrCnt_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.Ntc5DErrCnt);
		(void)Rte_Write_MotAg5Cos_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg5Cos);
		(void)Rte_Write_MotAg5Sin_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg5Sin);
		(void)Rte_Write_MotAg6Cos_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg6Cos);
		(void)Rte_Write_MotAg6Sin_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg6Sin);
		(void)Rte_Write_MotCurrAdcVlyA_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrAdcVlyA);
		(void)Rte_Write_MotCurrAdcVlyB_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrAdcVlyB);
		(void)Rte_Write_MotCurrAdcVlyC_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotCurrAdcVlyC);
		(void)Rte_Write_FastLoopCntr_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.FastLoopCntr);
		(void)Rte_Write_SlowLoopCntr_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.SlowLoopCntr);
		(void)Rte_Write_MotVltgDax_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotVltgDax);
		(void)Rte_Write_MotVltgQax_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotVltgQax);
		(void)Rte_Write_MotAgBufIdx_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAgBufIdx);
		(void)Rte_Write_MotAg5Mecl_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg5Mecl);
		(void)Rte_Write_MotAg6Mecl_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg6Mecl);
		(void)Rte_Write_MotVltgDaxFild_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotVltgDaxFild);
		(void)Rte_Write_MotVltgQaxFild_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotVltgQaxFild);
		(void)Rte_Write_MotAgBuf_Ary1D(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAgBuf);
		(void)Rte_Write_MotAgTiBuf_Ary1D(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAgTiBuf);
		(void)Rte_Write_PhaOnTiSumA_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.PhaOnTiSumA);
		(void)Rte_Write_PhaOnTiSumB_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.PhaOnTiSumB);
		(void)Rte_Write_PhaOnTiSumC_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.PhaOnTiSumC);
		(void)Rte_Write_MotAg5RawMecl_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg5RawMecl);
		(void)Rte_Write_MotAg6RawMecl_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.MotAg6RawMecl);
	}
}


/**********************************************************************************************************************
  * Name:        MotCtrlMgrPer2
  * Description: This function copies all RTE data transferred by the DMA from the 2ms loop to the Motor Control loop 
  *              to the non-RTE structure the DMA references.  A DMA function is called at the end of processing to
  *              trigger the DMA transfer of the data.
  * Inputs:      Individual RTE inputs for all signals
  * Outputs:     MotCtrlMgr_TwoMilliSecToMotCtrl_Rec structure
  * Usage Notes: To be scheduled by the RTE at the end of the 2ms forward path after all critical forward path motor control
  *              signals have been calculated.
  ********************************************************************************************************************/
FUNC(void, CDD_MotCtrlMgr_CODE) MotCtrlMgrPer2(void)
{
	(void)Rte_Read_MotAgElecDlyRpl_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAgElecDlyRpl);
	(void)Rte_Read_MotCurrQaxToMotTqGain_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrQaxToMotTqGain);
	(void)Rte_Read_MotTqRplCoggOrder1Mgn_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder1Mgn);
	(void)Rte_Read_MotTqRplCoggOrder1Pha_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder1Pha);
	(void)Rte_Read_MotTqRplCoggOrder2Mgn_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder2Mgn);
	(void)Rte_Read_MotTqRplCoggOrder2Pha_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder2Pha);
	(void)Rte_Read_MotTqRplCoggOrder3Mgn_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder3Mgn);
	(void)Rte_Read_MotTqRplCoggOrder3Pha_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotTqRplCoggOrder3Pha);
	(void)Rte_Read_MotVelMrf_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotVelMrf);
	(void)Rte_Read_BrdgVltg_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.BrdgVltg);
	(void)Rte_Read_CurrMeasCorrlnSts_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.CurrMeasCorrlnSts);
	(void)Rte_Read_CurrMeasWrmIninTestCmpl_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.CurrMeasWrmIninTestCmpl);
	(void)Rte_Read_MotCurrQlfr1_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrQlfr1);
	(void)Rte_Read_MotElecMeclPolarity_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotElecMeclPolarity);
	(void)Rte_Read_SysSt_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.SysSt);
	(void)Rte_Read_MotCurrAdcVlyAAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrAdcVlyAAdcFaild);
	(void)Rte_Read_MotCurrAdcVlyBAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrAdcVlyBAdcFaild);
	(void)Rte_Read_MotCurrAdcVlyCAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrAdcVlyCAdcFaild);
	(void)Rte_Read_EcuTFild_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.EcuTFild);
	(void)Rte_Read_DiagcStsIvtr1Inactv_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.DiagcStsIvtr1Inactv);
	(void)Rte_Read_LoopCntr2MilliSec_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.LoopCntr2MilliSec);
	(void)Rte_Read_DualEcuMotCtrlMtgtnEna_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.DualEcuMotCtrlMtgtnEna);
	(void)Rte_Read_MotAgElecDly_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAgElecDly);
	(void)Rte_Read_MotBackEmfVltg_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotBackEmfVltg);
	(void)Rte_Read_MotCurrDaxCmd_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrDaxCmd);
	(void)Rte_Read_MotCurrDaxMax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrDaxMax);
	(void)Rte_Read_MotCurrQaxCmd_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrQaxCmd);
	(void)Rte_Read_MotDampgDax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotDampgDax);
	(void)Rte_Read_MotDampgQax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotDampgQax);
	(void)Rte_Read_MotInduDaxEstimdIvs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotInduDaxEstimdIvs);
	(void)Rte_Read_MotInduQaxEstimdIvs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotInduQaxEstimdIvs);
	(void)Rte_Read_MotIntglGainDax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotIntglGainDax);
	(void)Rte_Read_MotIntglGainQax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotIntglGainQax);
	(void)Rte_Read_MotPropGainDax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotPropGainDax);
	(void)Rte_Read_MotPropGainQax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotPropGainQax);
	(void)Rte_Read_MotReacncDax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotReacncDax);
	(void)Rte_Read_MotReacncQax_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotReacncQax);
	(void)Rte_Read_MotREstimd_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotREstimd);
	(void)Rte_Read_MotVltgDaxFf_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotVltgDaxFf);
	(void)Rte_Read_MotVltgQaxFf_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotVltgQaxFf);
	(void)Rte_Read_MotAg5CosRtAmpRecpr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5CosRtAmpRecpr);
	(void)Rte_Read_MotAg5CosRtOffs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5CosRtOffs);
	(void)Rte_Read_MotAg5MeclQlfr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5MeclQlfr);
	(void)Rte_Read_MotAg5MeclRollgCntr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5MeclRollgCntr);
	(void)Rte_Read_MotAg5SinRtAmpRecpr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5SinRtAmpRecpr);
	(void)Rte_Read_MotAg5SinRtOffs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5SinRtOffs);
	(void)Rte_Read_MotAg6CosRtAmpRecpr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6CosRtAmpRecpr);
	(void)Rte_Read_MotAg6CosRtOffs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6CosRtOffs);
	(void)Rte_Read_MotAg6MeclQlfr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6MeclQlfr);
	(void)Rte_Read_MotAg6MeclRollgCntr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6MeclRollgCntr);
	(void)Rte_Read_MotAg6SinRtAmpRecpr_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6SinRtAmpRecpr);
	(void)Rte_Read_MotAg6SinRtOffs_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6SinRtOffs);
	(void)Rte_Read_IvtrFetFltPha_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.IvtrFetFltPha);
	(void)Rte_Read_IvtrFetFltTyp_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.IvtrFetFltTyp);
	(void)Rte_Read_VehSpd_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.VehSpd);
	(void)Rte_Read_MotAg2Cos_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg2Cos);
	(void)Rte_Read_MotAg2CosAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg2CosAdcFaild);
	(void)Rte_Read_MotAg2Sin_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg2Sin);
	(void)Rte_Read_MotAg2SinAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg2SinAdcFaild);
	(void)Rte_Read_MotAg5CosAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5CosAdcFaild);
	(void)Rte_Read_MotAg5SinAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg5SinAdcFaild);
	(void)Rte_Read_MotAg6CosAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6CosAdcFaild);
	(void)Rte_Read_MotAg6SinAdcFaild_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAg6SinAdcFaild);
	(void)Rte_Read_MotAgMeclCorrlnSt_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAgMeclCorrlnSt);
	(void)Rte_Read_MotCurrEolCalSt_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotCurrEolCalSt);
	(void)Rte_Read_MotAgMecl5Polarity_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAgMecl5Polarity);
	(void)Rte_Read_MotAgMecl6Polarity_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAgMecl6Polarity);
	(void)Rte_Read_MotAndThermProtnLoaMod_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.MotAndThermProtnLoaMod);

	(void)Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper();
}

#define CDD_MotCtrlMgr_STOP_SEC_CODE
#include "CDD_MotCtrlMgr_MemMap.h"
