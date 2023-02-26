
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy_Cfg_private.h
* Module Description: Configuration Header file for NvM Proxy
* Project           : CBD
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          26 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 05/01/15  1       KJS     Initial version of the proxy header template                                    EA4#471
* 07/16/15  2       KJS     Added diagnostic support                                                        EA4#471
* 09/16/15  3       KJS     Added header include generation support and corrected revision log.             EA4#1484
* 01/26/16  4       KJS     Removed items no longer required and naming updates for EA4                     EA4#3443
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_NVMPROXY_CFG_PRIVATE_H
#define CDD_NVMPROXY_CFG_PRIVATE_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "Os.h"

/* Includes defined in the NvMProxy Configuration */
#include "DiagcMgr.h"

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

typedef void (*FctCallBackTyp)();

typedef struct
{
    FctCallBackTyp FctCallBack;
    uint16 NvmBlkId;
    uint8 FltResp;
} NvMProxyCrcFltDescrTblTyp;

/****************************************************** Macros *******************************************************/

#define NVMOSAPP_CNT_U08           Appl10 /* NvM Application OS Reference Name */
#define NROFNVMBLKS_CNT_U08        145U /* Number of NvM Blocks */
#define NROFCRCNVMBLKS_CNT_U08     95U /* Number of NvM Blocks using a CRC */
#define NROFCRCPROXYBLKS_CNT_U08   93U /* Number of NvM CRC checks configured for NvM Proxy Init */

#define FLTTBLSIZE_CNT_U08     5U
#define NTCNR06IDX_CNT_U08     0U
#define NTCNR07IDX_CNT_U08     1U
#define NTCNR08IDX_CNT_U08     2U
#define NTCNR0AIDX_CNT_U08     3U
#define NTCNRBFIDX_CNT_U08     4U
#define NTCCHKDISAD_CNT_U08    0xFFU

/* NTC BF Check Values */
#define CLSCHKINVLD_CNT_U32         0x5555AAAAUL
#define CLSCHKVLD_CNT_U32           0x00FF00FFUL
#define CLSCHKWRALLFAILD_CNT_U32    0xFFAAFFAAUL


/*********************************************** Exported Declarations ***********************************************/

/* Defined in CDD_NvMProxy_Cfg.c */
extern const VAR(NvMProxyCrcFltDescrTblTyp, RTE_VAR_DEFAULT_RTE_Appl10_PIM_GROUP) NvMProxy_CrcFltDescrTbl[];

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_NVMPROXY_CFG_PRIVATE_H */
