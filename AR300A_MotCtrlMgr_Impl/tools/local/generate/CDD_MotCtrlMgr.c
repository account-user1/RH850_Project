
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr.c
* Module Description: Motor Control Manager
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 15.09.2016 08:34:05
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       czgng4 %
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
		(void)Rte_Write_Signal2_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.Signal2);
		(void)Rte_Write_Signal3_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.Signal3);
		(void)Rte_Write_Signal4_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.Signal4);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsEnum_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsEnum);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsbool_Logl(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsbool);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsf32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsf32);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss08_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMss08);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss16_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMss16);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMss32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMss32);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu08_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsu08);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsu16);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu16Ary_Ary1D(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsu16Ary);
		(void)Rte_Write_WriteMotCtrlReadMotCtrlReadTwoMsu32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadMotCtrlReadTwoMsu32);
		(void)Rte_Write_WriteMotCtrlReadTwoMsEnum_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsEnum);
		(void)Rte_Write_WriteMotCtrlReadTwoMsbool_Logl(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsbool);
		(void)Rte_Write_WriteMotCtrlReadTwoMsf32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsf32);
		(void)Rte_Write_WriteMotCtrlReadTwoMss08_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMss08);
		(void)Rte_Write_WriteMotCtrlReadTwoMss16_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMss16);
		(void)Rte_Write_WriteMotCtrlReadTwoMss32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMss32);
		(void)Rte_Write_WriteMotCtrlReadTwoMsu08_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsu08);
		(void)Rte_Write_WriteMotCtrlReadTwoMsu16_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsu16);
		(void)Rte_Write_WriteMotCtrlReadTwoMsu32_Val(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsu32);
		(void)Rte_Write_WriteMotCtrlReadTwoMsu32Ary_Ary1D(MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec.WriteMotCtrlReadTwoMsu32Ary);
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
	(void)Rte_Read_ReadMotCtrlWriteTwoMsEnum_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsEnum);
	(void)Rte_Read_ReadMotCtrlWriteTwoMsbool_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsbool);
	(void)Rte_Read_ReadMotCtrlWriteTwoMsf32_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsf32);
	(void)Rte_Read_ReadMotCtrlWriteTwoMss08_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMss08);
	(void)Rte_Read_ReadMotCtrlWriteTwoMss16_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMss16);
	(void)Rte_Read_ReadMotCtrlWriteTwoMss32_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMss32);
	(void)Rte_Read_ReadMotCtrlWriteTwoMss32Ary_Ary1D(MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMss32Ary);
	(void)Rte_Read_ReadMotCtrlWriteTwoMsu08_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsu08);
	(void)Rte_Read_ReadMotCtrlWriteTwoMsu16_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsu16);
	(void)Rte_Read_ReadMotCtrlWriteTwoMsu32_Val(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.ReadMotCtrlWriteTwoMsu32);
	(void)Rte_Read_Signal0_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.Signal0);
	(void)Rte_Read_Signal5_Logl(&MotCtrlMgr_TwoMilliSecToMotCtrl_Rec.Signal5);

	(void)Rte_Call_DmaEna2MilliSecToMotCtrlTrf_Oper();
}

#define CDD_MotCtrlMgr_STOP_SEC_CODE
#include "CDD_MotCtrlMgr_MemMap.h"
