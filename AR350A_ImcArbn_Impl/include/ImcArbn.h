/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : ImcArbn.h
* Module Description: IMC Arbitration Public Header file
* Project           : CBD
* Author            : Akilan Rathakrishnan
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       tzyksv %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/15/2017	1     RA			 Initial version							                               EA4#9291
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef IMCARBN_H
#define IMCARBN_H

/************************************************ Include Statements *************************************************/
#include "ImcArbn_Cfg.h"
/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Exported Declarations ***********************************************/
/* Signal Group Frame Size */
#define IMCARBN_FRMSIZE_CNT_U08                  (8U)
/* Rate Group ID for 2ms Rate Group */
#define IMCARBN_RATEGROUPID2MILLISEC_CNT_U08     (0U)
/* Rate Group ID for 10ms Rate Group */
#define IMCARBN_RATEGROUPID10MILLISEC_CNT_U08    (1U)
/* Rate Group ID for 100ms Rate Group */
#define IMCARBN_RATEGROUPID100MILLISEC_CNT_U08   (2U)
/* Total number of Rate Groups */
#define IMCARBN_NROFRATEGROUP_CNT_U08 (3U)

/* Pattern values */
#define IMCARBN_PATIDN_CNT_U08                                (0xA0U)
#define IMCARBN_PATIDNIVS_CNT_U08                             (0x40U)
#define IMCARBN_PATIDMASKVAL_CNT_U08                          (0xE0U)


/* Status enum ImcArbnRxExtdSts1 values */
#define IMCARBNRXEXTDSTS_NEVERRXD             (0U)
#define IMCARBNRXEXTDSTS_MISS                 (1U)
#define IMCARBNRXEXTDSTS_DATAINVLD            (2U)
#define IMCARBNRXEXTDSTS_PREVDATA             (3U)
#define IMCARBNRXEXTDSTS_DATAVLDWITHBACKUP    (4U)
#define IMCARBNRXEXTDSTS_DATAVLDWITHNOBACKUP  (5U)
#define IMCARBNRXEXTDSTS_STRTG                (6U)

/* Values for ImcArbnRxDataSrc1 */
#define IMCARBNRXDATASRC_NOSRC                (0U)
#define IMCARBNRXDATASRC_PRIM                 (1U)
#define IMCARBNRXDATASRC_SECDRY               (2U)


/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* IMCARBN_H */

