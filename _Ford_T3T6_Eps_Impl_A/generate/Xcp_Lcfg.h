/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Xcp
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Xcp_Lcfg.h
 *   Generation Time: 2017-09-01 14:41:01
 *           Project: EPS - Version 1.0
 *          Delivery: CBD1601056_D00
 *      Tool Version: DaVinci Configurator (beta) 5.14.21 SP3
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! These programs are fully operative programs. With regard to the fact that the programs are a beta-version only,    !
 ! Vector Informatik's liability shall be expressly excluded in cases of ordinary negligence, to the extent           !
 ! admissible by law or statute.                                                                                      !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

    
#if !defined(XCP_LCFG_H)
#define XCP_LCFG_H

#include "Xcp_Types.h"

/* PRQA S 5013 1 */ /* MD_Xcp_5013 */
typedef VAR(unsigned char, XCP_VAR_NOINIT) XcpCharType;

#define XCP_START_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

extern CONST(Xcp_TlApiType, XCP_CONST) Xcp_TlApi[1];

/* Events */
/* PRQA S 3684 1 */ /* MD_Xcp_3684 */
extern CONST(XcpCharType, XCP_CONST) kXcpEventName_0[];

/* PRQA S 3684 5 */ /* MD_Xcp_3684 */
extern CONSTP2CONST(XcpCharType, XCP_CONST, XCP_CONST) kXcpEventName[];
extern CONST(uint8, XCP_CONST) kXcpEventNameLength[];
extern CONST(uint8, XCP_CONST) kXcpEventCycle[];
extern CONST(uint8, XCP_CONST) kXcpEventUnit[];
extern CONST(uint8, XCP_CONST) kXcpEventDirection[];

#define XcpConf_XcpEventChannel_XCPEVECH2MILLISEC (0UL)


/* Flash programming */
/* PRQA S 3684 4 */ /* MD_Xcp_3684 */
extern CONSTP2CONST(XcpCharType, XCP_CONST, XCP_CONST) kXcpSectorName[];
extern CONST(uint8, XCP_CONST) kXcpSectorNameLength[];
extern CONST(uint32, XCP_CONST) kXcpProgramSectorStart[];
extern CONST(uint32, XCP_CONST) kXcpProgramSectorEnd[];

#define XCP_STOP_SEC_CONST_UNSPECIFIED
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


#endif /* XCP_LCFG_H */   

