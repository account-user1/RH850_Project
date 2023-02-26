/*
 * CDD.NvMProxy.h - Stub Header File for DiagcMgr Contract folder
 *
 *  Created on: Mar 11, 2016
 *      Author: gzkys7
 */

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_NVMPROXY_H
#define CDD_NVMPROXY_H
/******************************************* Multiple Include Protection *********************************************/

typedef uint16 NvM_BlockIdType;

extern FUNC(Std_ReturnType, CDD_NvMProxy_CODE) NvMProxy_SetRamBlockStatus( NvM_BlockIdType BlockId,
                                                                           VAR(boolean, AUTOMATIC) BlockChanged );

#endif /* CDD_NVMPROXY_H */
