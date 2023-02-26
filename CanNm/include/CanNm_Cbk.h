/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2016 by Vector Informatik GmbH.                                                  All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  CanNm_Cbk.h
 *        \brief  AUTOSAR CAN Network Management
 *
 *      \details  Callback Header of AUTOSAR CAN Network Management
 *                AUTOSAR Release 4.0
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/

#if !defined (CANNM_CBK_H)
#define CANNM_CBK_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "CanNm_Cfg.h"                                                               /* Include CAN NM Configuration */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* Component Version Information (BCD coded) */
#define CANNM_CBK_MAJOR_VERSION         (0x06u)
#define CANNM_CBK_MINOR_VERSION         (0x02u)
#define CANNM_CBK_PATCH_VERSION         (0x00u)

/* Definition of Callback API-Ids. */
#define CANNM_SID_TXCONFIRMATION        (0x40u)
#define CANNM_SID_RXINDICATION          (0x42u)

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
#define CANNM_START_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

/***********************************************************************************************************************
 *  CanNm_RxIndication
 **********************************************************************************************************************/
/*! \brief       Indicates a successfully received NM message
 *  \details     -
 *  \param[in]   RxPduId                     ID of CAN NM PDU that has been received
 *  \param[in]   PduInfoPtr                  Pointer to CAN PDU related data containing DLC and pointer to CAN SDU buffer.
 *  \pre         -
 *  \note        Called by CanIf
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       SPEC-21847, SPEC-22028, SPEC-21910, SPEC-21721, SPEC-21811, SPEC-21989, SPEC-21793
 *  \trace       SPEC-21975, SPEC-21793
 **********************************************************************************************************************/
extern FUNC( void, CANNM_CODE ) CanNm_RxIndication( VAR( PduIdType, AUTOMATIC ) RxPduId,
                                                    P2CONST( PduInfoType, AUTOMATIC, CANNM_APPL_VAR ) PduInfoPtr );

#if ( ( CANNM_PASSIVE_MODE_ENABLED == STD_OFF ) && ( CANNM_IMMEDIATE_TXCONF_ENABLED == STD_OFF ) )
/***********************************************************************************************************************
 *  CanNm_TxConfirmation
 **********************************************************************************************************************/
/*! \brief       Confirms a successfully transmitted NM message
 *  \details     -
 *  \param[in]   TxPduId                     ID of CAN NM PDU that has been transmitted
 *  \pre         -
 *  \note        Called by CanIf
 *  \context     TASK|ISR1|ISR2
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \trace       SPEC-21806, SPEC-21766, SPEC-21704, SPEC-21806, SPEC-21745, SPEC-21688, SPEC-21793
 *  \trace       SPEC-22003
 **********************************************************************************************************************/
extern FUNC( void, CANNM_CODE ) CanNm_TxConfirmation( VAR( PduIdType, AUTOMATIC ) TxPduId );
#endif

#define CANNM_STOP_SEC_CODE
#include "MemMap.h"  /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif  /* CANNM_CBK_H */

/********************************************7**************************************************************************
 *  END OF FILE: CanNm_Cbk.h
 *********************************************************************************************************************/
