
/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name:   TrustdeFunction.h
* Module Description: This file includes the headers that provide the Os with the prototype definitions of trusted functions.
* Project           : Ford T3T6
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          7 %
* %derived_by:       gz324f %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 08/15/17  1       LWW     Initial version
* 08/15/17  2       XL      Added CDD_VrfyCritReg.h                                                         EA4#14121
* 08/15/17  3       XL      Added Spi.h                                                                     EA4#14121
* 08/24/17  4       XL      Added EcuM_UserTypes.h                                                          EA4#14121
* 09/01/17  5       XL      Added CDD_XcpIf.h                                                               EA4#14121
* 09/14/17  6       XL      Added CDD_Uart0CfgAndUse.h and CDD_Uart1CfgAndUse.h                             EA4#14121
* 11/21/17  7       XL      Added CDD_GuardCfgAndDiagc.h, CDD_FlsMem.h                                      EA4#17612
**********************************************************************************************************************/

#ifndef TRUSTEDFUNCTION_H
#define TRUSTEDFUNCTION_H

/* Note BSW headers are only included if RTE_CORE is not defined. This is done so APIs are not visible in RTE context to prevent conflicting function prototype definitions */
#ifndef RTE_CORE
#include "NvM.h"
#include "Fls.h"
#endif

#include "CDD_DmaCfgAndUse.h"
#include "CDD_FordT3T6McuCfg.h"
#include "CDD_VrfyCritReg.h"
#include "Spi.h"
#include "EcuM_UserTypes.h"
#include "CDD_XcpIf.h"
#include "CDD_Uart0CfgAndUse.h"
#include "CDD_Uart1CfgAndUse.h"
#include "CDD_GuardCfgAndDiagc.h"
#include "CDD_FlsMem.h"

#endif /* #ifndef TRUSTEDFUNCTION_H */