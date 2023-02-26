/*  *****   STARTSINGLE_OF_MULTIPLE_COMMENT    *****  */

/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2007-2010 by Vector Informatik GmbH.                                             All rights reserved.
 * 
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Fr_GeneralTypes.h
 *      Project:  FlexRay Stack
 *       Module:  -
 *    Generator:  -
 *
 *  Description:  Datatype definitions according to AUTOSAR 3.0 FlexRay Driver SWS
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Sebastian Schmar              Ssr           Vector Informatik GmbH
 *  Juergen Schaeffer             Jsr           Vector Informatik GmbH
 *  Sebastian Gaertner            Seg           Vector Informatik GmbH
 *  Klaus Bergdolt                Ber           Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2006-05-17  Ber                   Generated filed according to AUTOSAR FlexRay Driver SWS.
 *  01.00.01  2008-03-19  Jsr                   Changed enum types to u8 types
 *  01.00.02  2008-06-24  Jsr     ESCAN00027841 Fr_VErrorStatusType added
 *  01.01.00  2008-11-04  Seg     ESCAN00030471 Name of Fr_GeneralTypes.h
 *  01.02.00  2009-03-11  Seg     ESCAN00032698 Missing versionstring for licence database
 *  01.03.00  2009-07-30  Ssr     ESCAN00036317 FlexRay Driver shall support FIFOs (Asr 4.0)
 *                        Jsr     ESCAN00031969 update function headers
 *  01.03.01  2009-10-22  Jsr     ESCAN00035424 Compiler errors in Enabled "Extended Version checks and Link Time" Variant
 *  01.04.00  2009-11-13  Jsr     ESCAN00037151 Read and verification of the FlexRay configuration
 *  01.04.01  2009-11-26  Jsr                   Update Fr_CCLLParamIndexType
 *  01.05.00  2010-02-19  Jsr                   Update comments according coding rules (CDK)
 *                                ESCAN00040841 Add Trcv Types
 *                        Ssr                   Resolve compiler errors at header include protection
 *  01.06.00  2010-07-23  Jsr                   Update ReadCCConfig Values according Autosar
 *                                ESCAN00043900 Enhancement parameters for ReadCCConfig
 *                                ESCAN00044864 Truncation of parameter values at ReadCCConfig
 *                                              Review finding in in DocTechRef: replace Fr_CCLLParamIndexType with uint8
 *  01.07.00  2011-06-17  Seg     ESCAN00048747 Missing declaration of Fr_ConfigType 
 *                                ESCAN00050556 Update ReadCCConfig Values according Autosar 3.2
 *                                ESCAN00051495 Extend FrTrcv_TrcvWUReasonType in Fr_GeneralTypes.h
 **************************************************************************************************/
#if (!defined  FR_GENERALTYPES_H)
# define FR_GENERALTYPES_H

/**************************************************************************************************
* INCLUDES
**************************************************************************************************/
# include "Std_Types.h"

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject :   DrvFr__baseAsr CQComponent : Implementation */
# define DRVFR__BASEASR_VERSION          0x0107u/* BCD coded version number */
# define DRVFR__BASEASR_RELEASE_VERSION  0x00u  /* BCD coded release version number  */

typedef void Fr_ConfigType;

/** The values of this enumeration are used to provide information 
    whether or not the local FlexRay CC is synchronous to the FR global time */

typedef uint8 Fr_SyncStateType;
# define FR_ASYNC ((Fr_SyncStateType)0) /** The local FlexRay CC is asynchronous to the FR global time */
# define FR_SYNC  ((Fr_SyncStateType)1) /** The local FlexRay CC is synchronous to the FR global time */

typedef uint8 Fr_OffsetCorrectionType;
# define FR_OFFSET_INC       ((Fr_OffsetCorrectionType)0) /** add predefined correction value vOffsetCorrection */
# define FR_OFFSET_DEC       ((Fr_OffsetCorrectionType)1) /** subtract predefined correction value vOffsetCorrection */
# define FR_OFFSET_NOCHANGE  ((Fr_OffsetCorrectionType)2) /** apply no offset correction value */

typedef uint8 Fr_RateCorrectionType;
# define FR_RATE_INC       ((Fr_RateCorrectionType)0) /** add predefined correction value vRateCorrection. */
# define FR_RATE_DEC       ((Fr_RateCorrectionType)1) /** subtract predefined correction value vRateCorrection. */
# define FR_RATE_NOCHANGE  ((Fr_RateCorrectionType)2) /** apply no rate correction value */

typedef uint8 Fr_POCStateType;
# define FR_POCSTATE_CONFIG          ((Fr_POCStateType)0) /** Configuration state */
# define FR_POCSTATE_DEFAULT_CONFIG  ((Fr_POCStateType)1) /** State prior to config, only left with an explicit configuration request */
# define FR_POCSTATE_HALT            ((Fr_POCStateType)2) /** Error state, can only be left by a re-initialization */
# define FR_POCSTATE_NORMAL_ACTIVE   ((Fr_POCStateType)3) /** Normal operation */
# define FR_POCSTATE_NORMAL_PASSIVE  ((Fr_POCStateType)4) /** Errors detected, no transmission of data, but attempting to return to normal operation */
# define FR_POCSTATE_READY           ((Fr_POCStateType)5) /** State reached from FR_POCSTATE_CONFIG after concluding the configuration */
# define FR_POCSTATE_STARTUP         ((Fr_POCStateType)6) /** CC transmits only startup frames */
# define FR_POCSTATE_WAKEUP          ((Fr_POCStateType)7) /** CC sends a wakeup pattern if it couldn't find anything on the bus */

typedef uint8 Fr_TxLPduStatusType;
# define FR_TRANSMITTED      ((Fr_TxLPduStatusType)0) /** LSdu has been transmitted */
# define FR_NOT_TRANSMITTED  ((Fr_TxLPduStatusType)1) /** LSdu has not been transmitted */

/** These values are used to determine if a LSdu has been received */
typedef uint8 Fr_RxLPduStatusType;
# define FR_RECEIVED     ((Fr_RxLPduStatusType)0) /** LSdu has been received */
# define FR_NOT_RECEIVED ((Fr_RxLPduStatusType)1) /** LSdu has not been received */
# define FR_RECEIVED_MORE_DATA_AVAILABLE ((Fr_RxLPduStatusType)2)

/** This formal definition refers to chapter "2.2.1.3 POC status" of FlexRay Protocol Specification */
typedef uint8 Fr_WakeupStateType;
# define FR_WAKEUPSTATE_UNDEFINED          ((Fr_WakeupStateType)0)
# define FR_WAKEUPSTATE_RECEIVED_HEADER    ((Fr_WakeupStateType)1)
# define FR_WAKEUPSTATE_RECEIVED_WUP       ((Fr_WakeupStateType)2)
# define FR_WAKEUPSTATE_COLLISION_HEADER   ((Fr_WakeupStateType)3)
# define FR_WAKEUPSTATE_COLLISION_WUP      ((Fr_WakeupStateType)4)
# define FR_WAKEUPSTATE_COLLISION_UNKNOWN  ((Fr_WakeupStateType)5)
# define FR_WAKEUPSTATE_TRANSMITTED        ((Fr_WakeupStateType)6)

/** These values are derived from Table 9-1 of Version 2.1 of the FlexRay Protocol Specification */
typedef uint8 Fr_MTSStatusType;
# define FR_MTS_RCV                ((Fr_MTSStatusType)0)/** A valid MTS has been received */
# define FR_MTS_RCV_SYNERR         ((Fr_MTSStatusType)1)/** A valid MTS has been received and a Syntax Error was detected */
# define FR_MTS_RCV_BVIO           ((Fr_MTSStatusType)2)/** A valid MTS has been received and a Boundary Violation has been detected */
# define FR_MTS_RCV_SYNERR_BVIO    ((Fr_MTSStatusType)3)/** A valid MTS has been received and a Syntax Error and a Boundary Violation has been detected */
# define FR_MTS_NOT_RCV            ((Fr_MTSStatusType)4)/** No valid MTS has been received */
# define FR_MTS_NOT_RCV_SYNERR     ((Fr_MTSStatusType)5)/** No valid MTS has been received and a Syntax Error was detected */
# define FR_MTS_NOT_RCV_BVIO       ((Fr_MTSStatusType)6)/** No valid MTS has been received and a Boundary Violation has been detected */
# define FR_MTS_NOT_RCV_SYNERR_BVIO ((Fr_MTSStatusType)7)/** No valid MTS has been received and a Syntax Error and a Boundary Violation has been detected */

/** The values are used to reference a channel on a CC */
typedef uint8 Fr_ChannelType;
# define FR_CHANNEL_A  ((Fr_ChannelType)0)/** Refers to channel A of a CC */
# define FR_CHANNEL_B  ((Fr_ChannelType)1)/** Refers to channel B of a CC */
# define FR_CHANNEL_AB ((Fr_ChannelType)2)/** Refers to both channels of a CC */

typedef uint8 Fr_SlotModeType;
# define FR_SLOTMODE_SINGLE      ((Fr_SlotModeType)0)
# define FR_SLOTMODE_ALL_PENDING ((Fr_SlotModeType)1)
# define FR_SLOTMODE_ALL         ((Fr_SlotModeType)2)

typedef uint8 Fr_ErrorModeType;
# define FR_ERRORMODE_ACTIVE     ((Fr_ErrorModeType)0)
# define FR_ERRORMODE_PASSIVE    ((Fr_ErrorModeType)1)
# define FR_ERRORMODE_COMM_HALT  ((Fr_ErrorModeType)2)

typedef uint8 Fr_WakeupStatusType;
# define FR_WAKEUP_UNDEFINED         ((Fr_WakeupStatusType)0)
# define FR_WAKEUP_RECEIVED_HEADER   ((Fr_WakeupStatusType)1)
# define FR_WAKEUP_RECEIVED_WUP      ((Fr_WakeupStatusType)2)
# define FR_WAKEUP_COLLISION_HEADER  ((Fr_WakeupStatusType)3)
# define FR_WAKEUP_COLLISION_WUP     ((Fr_WakeupStatusType)4)
# define FR_WAKEUP_COLLISION_UNKNOWN ((Fr_WakeupStatusType)5)
# define FR_WAKEUP_TRANSMITTED       ((Fr_WakeupStatusType)6)

typedef uint8 Fr_StartupStateType;
# define  FR_STARTUP_UNDEFINED                     ((Fr_StartupStateType)0)
# define  FR_STARTUP_COLDSTART_LISTEN              ((Fr_StartupStateType)1)
# define  FR_STARTUP_INTEGRATION_COLDSTART_CHECK   ((Fr_StartupStateType)2)
# define  FR_STARTUP_COLDSTART_JOIN                ((Fr_StartupStateType)3)
# define  FR_STARTUP_COLDSTART_COLLISION_RESOLUTION  ((Fr_StartupStateType)4)
# define  FR_STARTUP_COLDSTART_CONSISTENCY_CHECK   ((Fr_StartupStateType)5)
# define  FR_STARTUP_INTEGRATION_LISTEN            ((Fr_StartupStateType)6)
# define  FR_STARTUP_INITIALIZE_SCHEDULE           ((Fr_StartupStateType)7)
# define  FR_STARTUP_INTEGRATION_CONSISTENCY_CHECK ((Fr_StartupStateType)8)
# define  FR_STARTUP_COLDSTART_GAP                 ((Fr_StartupStateType)9)

typedef struct
{
  boolean ColdstartNoise;
  boolean CHIHaltRequest;
  boolean Freeze;
  Fr_SlotModeType SlotMode;
  Fr_WakeupStatusType WakeupStatus;
  Fr_ErrorModeType ErrorMode;
  Fr_StartupStateType StartupState;
  Fr_POCStateType State;
} Fr_POCStatusType;

typedef uint32 Fr_VErrorStatusType;

/* uint32 values */
#define	FR_CIDX_GDCYCLE	0                         
#define	FR_CIDX_PMICROPERCYCLE	1                 
#define	FR_CIDX_PDLISTENTIMEOUT	2                 

/* uint16 values */
#define	FR_CIDX_GMACROPERCYCLE	3                 
#define	FR_CIDX_GDMACROTICK	4                     
#define	FR_CIDX_GNUMBEROFMINISLOTS	5             
#define	FR_CIDX_GNUMBEROFSTATICSLOTS	6           
#define	FR_CIDX_GDNIT	7                           
#define	FR_CIDX_GDSTATICSLOT	8                   
#define	FR_CIDX_GDWAKEUPRXWINDOW	9               
#define	FR_CIDX_PKEYSLOTID	10                    
#define	FR_CIDX_PLATESTTX 	11                    
#define	FR_CIDX_POFFSETCORRECTIONOUT	12          
#define	FR_CIDX_POFFSETCORRECTIONSTART	13        
#define	FR_CIDX_PRATECORRECTIONOUT	14            
#define	FR_CIDX_PSECONDKEYSLOTID	15              
#define	FR_CIDX_PDACCEPTEDSTARTUPRANGE	16        

/* uint8 values */
#define	FR_CIDX_GCOLDSTARTATTEMPTS	17            
#define	FR_CIDX_GCYCLECOUNTMAX	18                
#define	FR_CIDX_GLISTENNOISE	19                  
#define	FR_CIDX_GMAXWITHOUTCLOCKCORRECTFATAL 	20  
#define	FR_CIDX_GMAXWITHOUTCLOCKCORRECTPASSIVE	21
#define	FR_CIDX_GNETWORKMANAGEMENTVECTORLENGTH	22
#define	FR_CIDX_GPAYLOADLENGTHSTATIC	23          
#define	FR_CIDX_GSYNCFRAMEIDCOUNTMAX	24          
#define	FR_CIDX_GDACTIONPOINTOFFSET	25            
#define	FR_CIDX_GDBIT	26                          
#define	FR_CIDX_GDCASRXLOWMAX	27
#define	FR_CIDX_GDDYNAMICSLOTIDLEPHASE	28
#define	FR_CIDX_GDMINISLOTACTIONPOINTOFFSET	29
#define	FR_CIDX_GDMINISLOT	30
#define	FR_CIDX_GDSAMPLECLOCKPERIOD	31               
#define	FR_CIDX_GDSYMBOLWINDOW	32
#define	FR_CIDX_GDSYMBOLWINDOWACTIONPOINTOFFSET	33  
#define	FR_CIDX_GDTSSTRANSMITTER	34
#define	FR_CIDX_GDWAKEUPRXIDLE	35                  
#define	FR_CIDX_GDWAKEUPRXLOW	36                    
#define	FR_CIDX_GDWAKEUPTXACTIVE	37                
#define	FR_CIDX_GDWAKEUPTXIDLE	38                  
#define	FR_CIDX_PALLOWPASSIVETOACTIVE	39
#define	FR_CIDX_PCHANNELS 	40                      
#define	FR_CIDX_PCLUSTERDRIFTDAMPING	41
#define	FR_CIDX_PDECODINGCORRECTION	42
#define	FR_CIDX_PDELAYCOMPENSATIONA	43
#define	FR_CIDX_PDELAYCOMPENSATIONB	44
#define	FR_CIDX_PMACROINITIALOFFSETA	45
#define	FR_CIDX_PMACROINITIALOFFSETB	46
#define	FR_CIDX_PMICROINITIALOFFSETA	47
#define	FR_CIDX_PMICROINITIALOFFSETB	48
#define	FR_CIDX_PPAYLOADLENGTHDYNMAX	49
#define	FR_CIDX_PSAMPLESPERMICROTICK 	50            
#define	FR_CIDX_PWAKEUPCHANNEL	51                  
#define	FR_CIDX_PWAKEUPPATTERN	52
#define	FR_CIDX_PDMICROTICK	53                      
#define	FR_CIDX_PDEXTERNRATECORRECTION	54
#define	FR_CIDX_PDEXTERNOFFSETCORRECTION	55 
#define	FR_CIDX_GDIGNOREAFTERTX	56           

/* boolean values */
#define	FR_CIDX_PALLOWHALTDUETOCLOCK 	57 
#define	FR_CIDX_PEXTERNALSYNC	58             
#define	FR_CIDX_PFALLBACKINTERNAL	59         
#define	FR_CIDX_PKEYSLOTONLYENABLED	60       
#define	FR_CIDX_PKEYSLOTUSEDFORSTARTUP	61
#define	FR_CIDX_PKEYSLOTUSEDFORSYNC	62
#define	FR_CIDX_PNMVECTOREARLYUPDATE	63
#define	FR_CIDX_PTWOKEYSLOTMODE	64

/* FrTrcv252: FrTrcv048: */
#define FRTRCV_TRCVMODE_UNKNOWN         (FrTrcv_TrcvModeType)0u
/* Transceiver is in state NORMAL */
#define FRTRCV_TRCVMODE_NORMAL          (FrTrcv_TrcvModeType)1u
/* Transceiver is in state STANDBY */
#define FRTRCV_TRCVMODE_STANDBY         (FrTrcv_TrcvModeType)2u
/* Transceiver is in state SLEEP */
#define FRTRCV_TRCVMODE_SLEEP           (FrTrcv_TrcvModeType)3u
/* Transceiver is in state RECEIVEONLY */
#define FRTRCV_TRCVMODE_RECEIVEONLY     (FrTrcv_TrcvModeType)4u
typedef uint8 FrTrcv_TrcvModeType;

/* FrTrcv074: */
/* The transceiver does not support any information for the wake up reason. */
#define FRTRCV_WU_NOT_SUPPORTED         (FrTrcv_TrcvWUReasonType)0u
/* The transceiver has detected that the bus has caused the wake up of the ECU. */
#define FRTRCV_WU_BY_BUS                (FrTrcv_TrcvWUReasonType)1u
/* The transceiver has detected that the bus has woken up by the ECU via FrTrcv_GotoNormalMode API call */
#define FRTRCV_WU_INTERNALLY            (FrTrcv_TrcvWUReasonType)2u
/* The transceiver has detected that the "wake up" is due to an ECU reset. */
#define FRTRCV_WU_RESET                 (FrTrcv_TrcvWUReasonType)3u
/* The transceiver has detected that the "wake up" is due to an ECU reset after power on. */
#define FRTRCV_WU_POWER_ON              (FrTrcv_TrcvWUReasonType)4u
/* The transceiver has detected a wake-up event at one of the transceiver's pins (not at the FlexRay bus). */
#define FRTRCV_WU_BY_PIN                (FrTrcv_TrcvWUReasonType)5u
typedef uint8 FrTrcv_TrcvWUReasonType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/***** end of header file ************************************************************************/
#endif /* FR_GENERALTYPES_H */
