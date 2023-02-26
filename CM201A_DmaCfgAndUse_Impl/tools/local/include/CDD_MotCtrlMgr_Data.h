/**********************************************************************************************************************
 * Copyright 2017 Nexteer
 * Nexteer Confidential
 *
 * Module File Name  : CDD_MotCtrlMgr_Data.h
 * Module Description: Header file for local folder of CM201A
 * Project           : CBD
 * Author            : Krzysztof Byrski
 **********************************************************************************************************************
 * Version Control:
 * %version:          1 %
 * %derived_by:       nz2999 %
 *---------------------------------------------------------------------------------------------------------------------
 * Date      Rev      Author    Change Description                                                             SCR #
 * --------  -------  --------  ----------------------------------------------------------------------------  ---------
 * 07/25/17  1        KByrski   Initial version                                                               EA4#13238
 *********************************************************************************************************************/

#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/*********************************************** Exported Declarations ***********************************************/
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_DmaAdc0ResTrig;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_DmaAdc1ResTrig;
extern VAR(boolean, AUTOMATIC) MOTCTRLMGR_DmaTwoMiliSecToMotCtrlTrig;
extern VAR(uint32,  AUTOMATIC) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec[16];
extern VAR(uint32,  AUTOMATIC) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec[16];
extern VAR(uint16,  AUTOMATIC) MOTCTRLMGR_MotCtrlAdc0RawRes[24];
extern VAR(uint16,  AUTOMATIC) MOTCTRLMGR_MotCtrlAdc1RawRes[24];
extern VAR(uint32,  AUTOMATIC) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec[16];
extern VAR(uint32,  AUTOMATIC) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec[16];

#endif /* CDD_MOTCTRLMGR_DATA_H */
