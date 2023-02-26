/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_IoHwAb.h
 *        Config:  EPS.dpa
 *   ECU-Project:  PSCM_FD
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1601056 for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <IoHwAb>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_IOHWAB_H
# define _RTE_IOHWAB_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_IoHwAb_Type.h"
# include "Rte_DataHandleType.h"


# define IoHwAb_START_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_IoHwAb_GetGpioEcuIdnPin1_Oper IoHwAb_GetGpioEcuIdnPin1_Oper
#  define RTE_RUNNABLE_IoHwAb_GetGpioEcuIdnPin2_Oper IoHwAb_GetGpioEcuIdnPin2_Oper
#  define RTE_RUNNABLE_IoHwAb_GetGpioMcuEna_Oper IoHwAb_GetGpioMcuEna_Oper
#  define RTE_RUNNABLE_IoHwAb_GetGpioMotDrvr0Diag_Oper IoHwAb_GetGpioMotDrvr0Diag_Oper
#  define RTE_RUNNABLE_IoHwAb_GetGpioPwrOutpEnaFb_Oper IoHwAb_GetGpioPwrOutpEnaFb_Oper
#  define RTE_RUNNABLE_IoHwAb_Per1 IoHwAb_Per1
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaALowrCmd_Oper IoHwAb_SetFctGpioPhaALowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaAUpprCmd_Oper IoHwAb_SetFctGpioPhaAUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaBLowrCmd_Oper IoHwAb_SetFctGpioPhaBLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaBUpprCmd_Oper IoHwAb_SetFctGpioPhaBUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaCLowrCmd_Oper IoHwAb_SetFctGpioPhaCLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctGpioPhaCUpprCmd_Oper IoHwAb_SetFctGpioPhaCUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaALowrCmd_Oper IoHwAb_SetFctPeriphPhaALowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper IoHwAb_SetFctPeriphPhaAUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper IoHwAb_SetFctPeriphPhaBLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper IoHwAb_SetFctPeriphPhaBUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper IoHwAb_SetFctPeriphPhaCLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper IoHwAb_SetFctPeriphPhaCUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPrphlHwAg1_Oper IoHwAb_SetFctPrphlHwAg1_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPrphlHwTqA_Oper IoHwAb_SetFctPrphlHwTqA_Oper
#  define RTE_RUNNABLE_IoHwAb_SetFctPrphlHwTqB_Oper IoHwAb_SetFctPrphlHwTqB_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioGateDrv0Rst_Oper IoHwAb_SetGpioGateDrv0Rst_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaALowrCmd_Oper IoHwAb_SetGpioPhaALowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaAUpprCmd_Oper IoHwAb_SetGpioPhaAUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaBLowrCmd_Oper IoHwAb_SetGpioPhaBLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaBUpprCmd_Oper IoHwAb_SetGpioPhaBUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaCLowrCmd_Oper IoHwAb_SetGpioPhaCLowrCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPhaCUpprCmd_Oper IoHwAb_SetGpioPhaCUpprCmd_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioPwrTurnOffCtrl_Oper IoHwAb_SetGpioPwrTurnOffCtrl_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioSysFlt2A_Oper IoHwAb_SetGpioSysFlt2A_Oper
#  define RTE_RUNNABLE_IoHwAb_SetGpioTmplMonrWdg_Oper IoHwAb_SetGpioTmplMonrWdg_Oper
# endif

FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GetGpioEcuIdnPin1_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GetGpioEcuIdnPin2_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GetGpioMcuEna_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GetGpioMotDrvr0Diag_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_GetGpioPwrOutpEnaFb_Oper(P2VAR(IOHWAB_BOOL, AUTOMATIC, RTE_IOHWAB_APPL_VAR) PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, IoHwAb_CODE) IoHwAb_Per1(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPrphlHwAg1_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPrphlHwTqA_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetFctPrphlHwTqB_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioGateDrv0Rst_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaALowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaAUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaBLowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaBUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaCLowrCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPhaCUpprCmd_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioPwrTurnOffCtrl_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioSysFlt2A_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, IoHwAb_CODE) IoHwAb_SetGpioTmplMonrWdg_Oper(IOHWAB_BOOL PinSt_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define IoHwAb_STOP_SEC_CODE
# include "IoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_GetGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetFctGpio_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetFctPeriph_PortIf1_E_NOT_OK (1U)

#  define RTE_E_SetGpio_PortIf1_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_IOHWAB_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
