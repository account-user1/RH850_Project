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
 *            Module: IoHwAb
 *           Program: MSR_Ford_SLP1 (MSR_Ford_SLP1)
 *          Customer: Nexteer Automotive Corporation
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: R7F701373EABG
 *    License Scope : The usage is restricted to CBD1601056_D00
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: IoHwAb_30.c
 *   Generation Time: 2018-02-07 11:10:37
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


#define IOHWAB_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/

/* ===== MODULE INCLUDES ================================================== */
#include "IoHwAb.h" 
#include "IoHwAb_Cbk.h"
#include "IoHwAb_Cfg.h"


/* ===== RTE INCLUDE ====================================================== */
#include "Rte_IoHwAb.h"


/* ===== USER INCLUDES ==================================================== */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Includes>
 *********************************************************************************************************************/

/* TODO temporary solution before Change Mode Api is fixed */
#include "PORT_RegDefns.h" 

/**********************************************************************************************************************
* Module File Name  : IoHwAb_30.c
* Module Description: I/O Hardware Abstraction module used primarily for GPIO interface
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          10 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 08/02/17  1        XL        Initial version                                                                 EA4#14121
* 08/04/17  2        XL        Added GetGpioEcuIdnPin1 & 2                                                     EA4#14121
* 08/18/17  3        XL        Corrected DIO macro                                                             EA4#14121
* 08/21/17  4        XL        Corrected DIO macro                                                             EA4#14121
* 09/11/17  5        XL        Updated for CM012A 2.0.0                                                        EA4#14121
* 09/19/17  6        XL        Fixed Api                                                                       EA4#14121
* 10/12/17  7        XL        Temporary patch for change mode Api                                             EA4#14121
* 12/04/17  8        XL        Renamed HwTq2 to HwTq8                                                          EA4#12624
* 02/07/18  9        XL        Updated CM012A                                                                  EA4#20495
* 04/18/18  10       XL        Updated GTM pins related runnables
**********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define IOHWAB_C_MAJOR_VERSION  (6u) 
#define IOHWAB_C_MINOR_VERSION  (00u) 
#define IOHWAB_C_PATCH_VERSION  (00u) 

#if (  (IOHWAB_CFG_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CFG_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
        #error "Version numbers of IoHwAb.c and IoHwAb_Cfg.h are inconsistent!"
#endif

#if(   (IOHWAB_SW_MAJOR_VERSION != (3u)) \
    || (IOHWAB_SW_MINOR_VERSION != (0u)) )
    #error "Version numbers of IoHwAb.c and IoHwAb.h are inconsistent!"
#endif

#if(   (IOHWAB_CBK_MAJOR_VERSION != IOHWAB_C_MAJOR_VERSION) \
    || (IOHWAB_CBK_MINOR_VERSION != IOHWAB_C_MINOR_VERSION) )
    #error "Version numbers of IoHwAb.c and IoHwAb_Cbk.h are inconsistent!"
#endif



/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Macros>
 *********************************************************************************************************************/
/* TODO: Add user macros here */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK User Data>
 *********************************************************************************************************************/
/* TODO: Add user variables here */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/



/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

#define IOHWAB_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/* Hint: IoHwAb_Init() has been removed from the code. Use the configuration switch 'IoHwAbUseInitFunction'
   to enable it. */



/**********************************************************************************************************************
 *  CLIENT/SERVER PORTS
 **********************************************************************************************************************/


/* ----- Operations Of Client/Server Port GetGpioMcuEna ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioMcuEna_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioMcuEna_Oper is an operation of the C/S port 
 *              GetGpioMcuEna
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioMcuEna_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioMcuEna_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_McuEna);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioMcuEna_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioMotDrvr0Diag ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioMotDrvr0Diag_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioMotDrvr0Diag_Oper is an operation of the C/S port 
 *              GetGpioMotDrvr0Diag
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioMotDrvr0Diag_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioMotDrvr0Diag_Oper>
 *********************************************************************************************************************/

  *PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_GateDrv0Diagc);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioMotDrvr0Diag_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioPwrOutpEnaFb ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioPwrOutpEnaFb_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioPwrOutpEnaFb_Oper is an operation of the C/S port 
 *              GetGpioPwrOutpEnaFb
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioPwrOutpEnaFb_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioPwrOutpEnaFb_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_PwrOutpEnaFb);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioPwrOutpEnaFb_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaALowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaALowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaALowrCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaALowrCmd);
  PCR4_8 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaAUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaAUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaAUpprCmd);
  PCR3_12 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaBLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaBLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaBLowrCmd);
  PCR5_15 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaBUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaBUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaBUpprCmd);
  PCR4_1 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaCLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaCLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaCLowrCmd);
  PCR5_9 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctGpioPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctGpioPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctGpioPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetFctGpioPhaCUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctGpioPhaCUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctGpioPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

  //Port_SetToDioMode(DioConf_DioChannel_PhaCUpprCmd);
  PCR5_8 &= ~((uint32)(0x70U));	/* set bit 6 PMC, bit 5 PIPC, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctGpioPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaALowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaALowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaALowrCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O0N_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaALowrCmd, APP_ALT1_OUT);
  PCR4_8 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaAUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaAUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O0_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaAUpprCmd, APP_ALT1_OUT);
  PCR3_12 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaBLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaBLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O2N_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaBLowrCmd, APP_ALT1_OUT);
  PCR5_15 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaBUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaBUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O2_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaBUpprCmd, APP_ALT1_OUT);
  PCR4_1 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaCLowrCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaCLowrCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O3N_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaCLowrCmd, APP_ALT1_OUT);
  PCR5_9 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPeriphPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPeriphPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPeriphPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetFctPeriphPhaCUpprCmd
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPeriphPhaCUpprCmd_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPeriphPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

  /* Set to GTMAT0O3_ALT1_OUT */
  //Port_SetPinMode(DioConf_DioChannel_PhaCUpprCmd, APP_ALT1_OUT);
  PCR5_8 |= (uint32)(0x60U);	/* set bit 6 PMC, bit 5 PIPC to 1, bit 4 PM to 0 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPeriphPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwAg1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwAg1_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwAg1_Oper is an operation of the C/S port 
 *              SetFctPrphlHwAg1
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwAg1_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwAg1_Oper>
 *********************************************************************************************************************/
	
  /* Set to SENT2SPCO_ALT4_OUT */
  //Port_SetPinMode(DioConf_DioChannel_HwPos1_SPCO, APP_ALT4_OUT);
  PCR3_4 = 0x10001143u;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwAg1_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTqB ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTqB_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTqB_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTqB
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTqB_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTqB_Oper>
 *********************************************************************************************************************/
	
  /* Set to SENT4SPCO_ALT3_OUT */
  //Port_SetPinMode(DioConf_DioChannel_HwTrqB_SPCO, APP_ALT3_OUT);

  /* TODO SENT1 is P3_9 which is processed in HwTq1 */
  PCR3_9 = 0x10001143;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTqB_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetFctPrphlHwTqA ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetFctPrphlHwTqA_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetFctPrphlHwTqA_Oper is an operation of the C/S port 
 *              SetFctPrphlHwTqA
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetFctPrphlHwTqA_Oper()
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetFctPrphlHwTqA_Oper>
 *********************************************************************************************************************/

  /* Set to SENT1SPCO_ALT4_OUT */
  //Port_SetPinMode(DioConf_DioChannel_HwTrqA_SPCO, APP_ALT4_OUT);

  /* TODO SENT4 is P3_1 which is processed in HwTq8 */
  PCR3_1 = 0x10001142;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetFctPrphlHwTqA_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioGateDrv0Rst ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioGateDrv0Rst_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioGateDrv0Rst_Oper is an operation of the C/S port 
 *              SetGpioGateDrv0Rst
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioGateDrv0Rst_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioGateDrv0Rst_Oper>
 *********************************************************************************************************************/

  Dio_WriteChannel(DioConf_DioChannel_GateDrv0Rst, PinSt_Arg);
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioGateDrv0Rst_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaALowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaALowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaALowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaALowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaALowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaALowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaALowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaALowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaAUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaAUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaAUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaAUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaAUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaAUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaAUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaAUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaBLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaBLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaBLowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaBLowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaBLowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaBLowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaBLowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaBLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaBUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaBUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaBUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaBUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaBUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaBUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaBUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaBUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaCLowrCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaCLowrCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaCLowrCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaCLowrCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaCLowrCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaCLowrCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaCLowrCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaCLowrCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPhaCUpprCmd ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPhaCUpprCmd_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPhaCUpprCmd_Oper is an operation of the C/S port 
 *              SetGpioPhaCUpprCmd
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPhaCUpprCmd_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPhaCUpprCmd_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_PhaCUpprCmd, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPhaCUpprCmd_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioPwrTurnOffCtrl ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioPwrTurnOffCtrl_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioPwrTurnOffCtrl_Oper is an operation of the C/S port 
 *              SetGpioPwrTurnOffCtrl
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioPwrTurnOffCtrl_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioPwrTurnOffCtrl_Oper>
 *********************************************************************************************************************/

	Dio_WriteChannel(DioConf_DioChannel_McuTod, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioPwrTurnOffCtrl_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioSysFlt2A ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioSysFlt2A_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioSysFlt2A_Oper is an operation of the C/S port 
 *              SetGpioSysFlt2A
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioSysFlt2A_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioSysFlt2A_Oper>
 *********************************************************************************************************************/
	
	Dio_WriteChannel(DioConf_DioChannel_SysFlt2A, PinSt_Arg);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioSysFlt2A_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port SetGpioTmplMonrWdg ----- */

/**********************************************************************************************************************
 *  IoHwAb_SetGpioTmplMonrWdg_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_SetGpioTmplMonrWdg_Oper is an operation of the C/S port 
 *              SetGpioTmplMonrWdg
 *  \param[in]  PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_SetGpioTmplMonrWdg_Oper(
  IOHWAB_BOOL PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK SetGpioTmplMonrWdg_Oper>
 *********************************************************************************************************************/

    Dio_WriteChannel(DioConf_DioChannel_TmplMonrWdg, PinSt_Arg);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_SetGpioTmplMonrWdg_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioEcuIdnPin1 ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioEcuIdnPin1_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioEcuIdnPin1_Oper is an operation of the C/S port 
 *              GetGpioEcuIdnPin1
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioEcuIdnPin1_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioEcuIdnPin1_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_EcuId1);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioEcuIdnPin1_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */




/* ----- Operations Of Client/Server Port GetGpioEcuIdnPin2 ----- */

/**********************************************************************************************************************
 *  IoHwAb_GetGpioEcuIdnPin2_Oper
 **********************************************************************************************************************/
/*! \brief      The method IoHwAb_GetGpioEcuIdnPin2_Oper is an operation of the C/S port 
 *              GetGpioEcuIdnPin2
 *  \param[out] PinSt_Arg                       Parameter 'PinSt_Arg'   
 **********************************************************************************************************************/
FUNC(Std_ReturnType, IOHWAB_CODE) IoHwAb_GetGpioEcuIdnPin2_Oper(
  P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg
)
{
  Std_ReturnType ReturnValue = E_OK;
  
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK GetGpioEcuIdnPin2_Oper>
 *********************************************************************************************************************/

	*PinSt_Arg = Dio_ReadChannel(DioConf_DioChannel_EcuId2);
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return ReturnValue;    
} /* IoHwAb_GetGpioEcuIdnPin2_Oper() */ /* PRQA S 2006 */ /* MD_MSR_14.7 */



/**********************************************************************************************************************
 *  SENDER/RECEIVER PORTS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  RUNNABLES
 **********************************************************************************************************************/

/**********************************************************************************************************************
 *  IoHwAb_Per1
 **********************************************************************************************************************/
/*! \brief      The method Per1 is a user defined runnable entity function that will be called
 *              every 100 msec by the RTE.
 *  \retval     void
 **********************************************************************************************************************/
FUNC(void, IOHWAB_APPL_CODE) IoHwAb_Per1(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK Per1>
 *********************************************************************************************************************/

	/* Runnable intentionally empty.  Runnable is only present to allow mapping of IoHwAb component to a specific application */
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

  return;
} /* IoHwAb_Per1() */ 



/**********************************************************************************************************************
 *  SCHEDULABLES
 **********************************************************************************************************************/



/* Hint: IoHwAb_GetVersionInfo() has been removed from the code. Use the configuration switch 'IoHwAbVersionInfoApi'
   to enable it. */



/* Section for deleted/unregonized user blocks: */
#if 0

#endif


#define IOHWAB_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
/**********************************************************************************************************************
 *  END OF FILE: IoHwAb_30.c
 **********************************************************************************************************************/
