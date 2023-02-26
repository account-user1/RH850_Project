/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_NvMProxy.h
* Module Description: Header file for NvM Proxy component
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/15/15  1        KJS       Initial Version                                                                 EA4#471
* 01/28/16  2        KJS       Merged NvMProxy API header into this header                                     EA4#3443
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_NVMPROXY_H
#define CDD_NVMPROXY_H

#include "Std_Types.h"
#include "Rte_Type.h"


/************************************************ Embedded Constants *************************************************/

/******************************************** File Level Rule Deviations *********************************************/

/*********************************************** Function Definitions ************************************************/

extern FUNC(void, CDD_NvMProxy_CODE) NvMProxy_Init0(void);

extern FUNC(void, CDD_NvMProxy_CODE) NvMProxy_MainFunction(void);

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_ClsChkWr_Oper(void);

/* NvM Proxy API */

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_EraseNvBlock( NvM_BlockIdType BlockId );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_GetDataIndex( NvM_BlockIdType BlockId,
                                                                      P2VAR(uint8, AUTOMATIC, AUTOMATIC) DataIndexPtr );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_GetErrorStatus( NvM_BlockIdType BlockId, 
                                                                        P2VAR(uint8, AUTOMATIC, AUTOMATIC) RequestResultPtr );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_InvalidateNvBlock( NvM_BlockIdType BlockId );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_ReadBlock( NvM_BlockIdType BlockId,
                                                                   P2VAR(uint8, AUTOMATIC, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_RestoreBlockDefaults( NvM_BlockIdType BlockId,
                                                                              P2VAR(uint8, AUTOMATIC, AUTOMATIC) NvM_DstPtr );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_SetBlockProtection( NvM_BlockIdType BlockId,
                                                                            VAR(boolean, AUTOMATIC) ProtectionEnabled );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_SetDataIndex( NvM_BlockIdType BlockId,
                                                                      VAR(uint8, AUTOMATIC) DataIndex );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_SetRamBlockStatus( NvM_BlockIdType BlockId,
                                                                           VAR(boolean, AUTOMATIC) BlockChanged );

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_WriteBlock( NvM_BlockIdType BlockId,
                                                                    P2CONST(uint8, AUTOMATIC, AUTOMATIC) NvM_SrcPtr );

#endif /* CDD_NVMPROXY_H */
