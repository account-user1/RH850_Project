
/**********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name  : MfgSrvCfg.h.tt
* Module Description: Nexteer Manufacturing Services
* Project           : CBD
* Author            : Jared Julien
* Generator         : artt 2.0.2.0
* Generation Time   : 06.04.2018 17:12:17
***********************************************************************************************************************
* Version Control:
* %version:          10 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* -------   -------  --------  -----------------------------------------------------------------------------  ---------
* 11/04/15  1        JWJ       Initial Version                                                                EA4#
* 06/07/17  2        JWJ       Changed non-trusted function calls to support both old and new OS via patch    EA4#11834
* 07/07/17  3        JWJ       Update non-trusted function table to include application ID number             EA4#13539
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef MFGSRVCFG_H
#define MFGSRVCFG_H

/************************************************ Include Statements *************************************************/
#include "CmnMfgSrvTyp.h"

/* TODO temporary fix for CM101B new data types */
#define McuDiagc1 P1mcDiagc1
#define MCUDIAGC_SOFTRST P1MCDIAGC_SOFTRST
#define MCUDIAGC_HARDRST P1MCDIAGC_HARDRST

/******************************************** File Level Rule Deviations *********************************************/

/***************************************** Non-Rte Enumeration Definitions *******************************************/

/*********************************************** Exported Declarations ***********************************************/
extern CONST(MfgSrvTblRec, AUTOMATIC) CmnMfgSrv_MfgSrvTbl_Cnt_str[100u];
extern CONST(NonTrustdFctApplIdxRec, AUTOMATIC) CmnMfgSrvCfg_NonTrustdFctPtrTbl[11U];


/* Service Enable/Disable */
#define CMNMFGSRV_FD32ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F116ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE21ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F150ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F119ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FE8BENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F195ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDAFENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB3ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_2A01ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD84ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F232ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE03ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEA4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE9CENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE90ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD06ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDBAENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDDDENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD3CENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB9ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F11AENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F206ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDA3ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDB1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDD4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDA4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F221ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_2A02ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F9ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDD7ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE8AENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F140ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F115ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDAAENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FE02ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F118ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD8CENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F210ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE98ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD60ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDBBENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F117ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F001ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE89ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F000ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE99ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEA8ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F207ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_2A03ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDF8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDF1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_2A04ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD02ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDD5ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F200ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDB2ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F010ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F2ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDA5ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F101ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDD8ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB5ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_107EENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_2761ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEB1ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD41ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD42ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEAAENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD8DENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE01ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F141ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F211ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F110ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F002ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD00ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FEA2ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDBCENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDDFENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F100ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD61ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDABENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDADENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEABENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD03ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F114ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDDAENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F3ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDA9ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDB6ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDD9ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F23EENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDF4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD38ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDD1ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_1161ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD68ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_1001ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE00ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F212ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F112ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE08ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDBDENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD30ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDC8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD01ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDC0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F1FDENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD88ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEA9ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F201ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEA0ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDDBENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F23FENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_1160ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F4ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB7ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE9EENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F113ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDD2ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDF5ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD39ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE80ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD3AENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F213ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F22EENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDBEENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE8CENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD40ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD31ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD05ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_3E00ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1FEENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD89ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FE20ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F151ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDACENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F202ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_2762ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDDCENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE9DENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F111ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDD3ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDA1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD3BENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD70ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD80ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD90ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F22FENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD91ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDBFENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDF0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD71ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD81ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDD0ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1FFENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F203ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDA0ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDA2ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FE81ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F230ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE88ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD85ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F204ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE83ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F1F7ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F21FENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F231ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDAEENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEA1ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_F194ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F205ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDB8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDA8ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_F220ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FE82ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FEB0ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FDC1ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDC2ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDC9ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDCAENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDF6ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FDF7ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD55ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD62ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC
#define CMNMFGSRV_FD63ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD73ENA_CNT_LGC	CMNMFGSRV_DISAD_CNT_LGC
#define CMNMFGSRV_FD54ENA_CNT_LGC	CMNMFGSRV_ENAD_CNT_LGC

/* Prototypes for enabled services */
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE21Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF119RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8BWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF195Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB3Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F0Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDBARd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB9Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA3RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB1Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8AWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDAARoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F1Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD60Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDBBRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE89RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF1RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD02Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF200RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB2Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F2Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD41CtrlAdj(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD00Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF100RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDABRoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFEABRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD03Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB3Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F3Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA9RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC8Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD01Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC0Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1FDRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF119RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8CRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD40Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD02Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1FERd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD89Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE20RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF151RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB0Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD41CtrlRtn(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA1RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE21Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF1RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD70RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE20RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD41Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8BRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF0RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFEABWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD71RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD81RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD03Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1FFRd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA0RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA2RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB1Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF100RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD40CtrlAdj(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC0Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF151RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE88RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8ARd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF119RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD40CtrlRtn(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD85RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF1F7Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFE8CWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF8Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB2Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF0RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF151RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD89Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF100RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvF194Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB8Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDA8RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDB0Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC1Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC1Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC2RoutineStop(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC2RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC2RoutineSts(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC9Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDC9Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDCARd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDCAWr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF6Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF6Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF7Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFDF7Wr(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD55Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD62Rd(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);
FUNC(NegRespCodEnum, CmnMfgSrv_CODE) CmnMfgSrv_SrvFD54RoutineStrt(VAR(uint8, CmnMfgSrv_VAR) DataBuf_Uls_T_u08[]);


/**************************************** End Of Multiple Include Protection *****************************************/
#endif

/* End of File: MfgSrvCfg.h */
