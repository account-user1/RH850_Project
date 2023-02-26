
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.c
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 13.04.2018 17:33:16
***********************************************************************************************************************
* Version Control:
* %version:          16 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 10/29/15  2        LWW       Template update for signal mapping changes and memory map change                EA4#3428
* 08/08/16  3        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_MotCtrlMgr_Data.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/************************************************** Global Signals ***************************************************/

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	0, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	{0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U}, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	{0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, 
	0U, 
	0U, 
	FALSE, 
	0U, 
	0U, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"


#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	0, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	{0U, 62U, 125U, 187U, 250U, 312U, 375U, 437U}, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	0U, 
	{0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U}, 
	0U, 
	0U, 
	FALSE, 
	0U, 
	0U, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec = 
{
	0.0F, 
	0.021651F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	6.0F, 
	25.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	8412.0F, 
	8412.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.005F, 
	0.0F, 
	0.0F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	63U, 
	FALSE, 
	SIGQLFR_NORES, 
	1, 
	SYSST_WRMININ, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	SIGQLFR_NORES, 
	0U, 
	SIGQLFR_NORES, 
	0U, 
	IVTRFETFLTPHA_NOPHASNGFETFLT, 
	IVTRFETFLTTYP_NOFETFLT, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	7U, 
	MCECS_OFFSCMDSTRT, 
	1, 
	1, 
	0U, 
	{0U,0U,0U}
};

#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec = 
{
	0.0F, 
	0.021651F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	6.0F, 
	25.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	8412.0F, 
	8412.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.005F, 
	0.0F, 
	0.0F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	1.0F, 
	2.5F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	63U, 
	FALSE, 
	SIGQLFR_NORES, 
	1, 
	SYSST_WRMININ, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	SIGQLFR_NORES, 
	0U, 
	SIGQLFR_NORES, 
	0U, 
	IVTRFETFLTPHA_NOPHASNGFETFLT, 
	IVTRFETFLTTYP_NOFETFLT, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	FALSE, 
	7U, 
	MCECS_OFFSCMDSTRT, 
	1, 
	1, 
	0U, 
	{0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	0U, 
	62500U, 
	0.0F, 
	0.0F, 
	0U, 
	0U, 
	0.0F, 
	0U, 
	0U, 
	0U, 
	0U, 
	SIGQLFR_NORES, 
	0U, 
	23U, 
	21U, 
	MFGENAST_PRDNMOD, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

