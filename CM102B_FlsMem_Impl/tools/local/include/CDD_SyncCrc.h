/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc.h
* Module Description: Header file for the CM800A SyncCRC component
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nzt9hv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/12/16  1        KJS       Initial Version                                                                 EA4#5405
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SYNCCRC_H
#define CDD_SYNCCRC_H

/************************************************ Include Statements *************************************************/

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) ResvCrcHwUnit_Oper( CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg,
                                                                  P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg,
                                                                  P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg,
                                                                  uint32 StrtVal_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg);

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_SYNCCRC_H */
