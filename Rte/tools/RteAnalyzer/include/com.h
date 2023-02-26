/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  
 *        \brief  Com Header for RTE Analyzer
 *
 *      \details  This header provides the static defines, prototypes and datatypes of the COM module
 *                that are required for the static analysis with RTE Analyzer.
 *
 *********************************************************************************************************************/
 /**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Sascha Sommer                 So            Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2015-07-31  So                    Initial creation
 *********************************************************************************************************************/
#ifndef _COM_H_
# define _COM_H_

# include "Std_Types.h" 

# include "Com_Cfg.h"

# define RTE_TEST_STUBS
# define COM_VERSION 40u

/* AUTOSAR Com 4.0 */
# define COM_AR_RELEASE_MAJOR_VERSION 4u
# define COM_AR_RELEASE_MINOR_VERSION 0u

# define IL_ASRCOMCFG5_VERSION 0x0202U
# define COM_VENDOR_ID 30U

/** the service is currently not available e.g. the corresponding I-PDU group is stopped */
# define COM_SERVICE_NOT_AVAILABLE  0x80U

typedef uint32 Com_SignalIdType;
typedef uint32 Com_SignalGroupIdType;

# define COM_CODE
# define COM_APPL_DATA
# define COM_APPL_VAR 

/* Send APIs */
FUNC(uint8, COM_CODE) Com_SendSignal(Com_SignalIdType SignalId, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr);

FUNC(uint8, COM_CODE) Com_SendDynSignal(Com_SignalIdType SignalId, P2CONST(void, AUTOMATIC, COM_APPL_DATA) SignalDataPtr,
    uint16 Length); 

FUNC(uint8, COM_CODE) Com_SendSignalGroup(Com_SignalGroupIdType SignalGroupId);

FUNC(uint8, COM_CODE) Com_SendSignalGroupArray(Com_SignalGroupIdType SignalGroupId, P2CONST(uint8, AUTOMATIC, COM_APPL_DATA) SignalGroupArrayPtr);

#define Com_UpdateShadowSignal(SignalId, SignalDataPtr) (void) Com_SendSignal((SignalId), (SignalDataPtr))

/* Receive APIs */
FUNC(uint8, COM_CODE) Com_ReceiveSignal(Com_SignalIdType SignalId, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr);

FUNC(uint8, COM_CODE) Com_ReceiveDynSignal(Com_SignalIdType SignalId, P2VAR(void, AUTOMATIC, COM_APPL_VAR) SignalDataPtr, 
   P2VAR(uint16, AUTOMATIC, COM_APPL_VAR) Length); 

FUNC(uint8, COM_CODE) Com_ReceiveSignalGroup(Com_SignalGroupIdType SignalGroupId);

FUNC(uint8, COM_CODE) Com_ReceiveSignalGroupArray(Com_SignalGroupIdType SignalGroupId, P2VAR(uint8, AUTOMATIC, COM_APPL_VAR) SignalGroupArrayPtr);

#define Com_ReceiveShadowSignal(SignalId, SignalDataPtr) (void) Com_ReceiveSignal((SignalId), (SignalDataPtr))

/* Invalidate APIs */
FUNC(uint8, COM_CODE) Com_InvalidateSignal(Com_SignalIdType SignalId);

FUNC(uint8, COM_CODE) Com_InvalidateSignalGroup(Com_SignalGroupIdType SignalGroupId);

#endif /*_COM_H_*/
