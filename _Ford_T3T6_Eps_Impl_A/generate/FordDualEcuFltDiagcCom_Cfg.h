/**********************************************************************************************************************
* Copyright 2018 Nexteer
* Nexteer Confidential
*
* Module File Name:   FordDualEcuFltDiagcCom_Cfg.h
* Module Description: Configuration header file for CF088A FordDualEcuFltDiagcCom component.
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 03/08/18	1		XL		Initial creation
**********************************************************************************************************************/
#ifndef FORDDUALECUFLTDIAGCCOM_CFG_H
#define FORDDUALECUFLTDIAGCCOM_CFG_H

/************************************************ Include Statements *************************************************/
#include "Rte_FordDualEcuFltDiagcCom.h"
#include "DiagcMgr.h"

/******************************************** File Level Rule Deviations *********************************************/

/********************************************* Embedded Local Constants **********************************************/
extern CONST(uint16, FordDualEcuFltDiagcCom_CONST) FORDDTCTONTCMAP[TOTNROFDTC_CNT_U08 + 1U];


#endif /* FORDDUALECUFLTDIAGCCOM_CFG_H */