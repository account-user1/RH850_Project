/*********************************************************************************
|  File Name:   CanIf_Hooks.h
|  Description: Each Function listed below support a Hook for Enter and Leave 
|               Function. This can be used for monitoring or runtime measurement
|               purpose. Leave following Hook-defines empty if you do not want to
|               use this funtionality.
|---------------------------------------------------------------------------------
|               A U T H O R   I D E N T I T Y
|---------------------------------------------------------------------------------
| Initials     Name                      Company
| --------     ---------------------     -----------------------------------------
| Seu          Eugen Stripling              Vector Informatik GmbH
| Rna          Ruediger Naas                Vector Informatik GmbH
|---------------------------------------------------------------------------------
|               C O R E    R E V I S I O N   H I S T O R Y
|---------------------------------------------------------------------------------
| Date       Ver      Author    Description
| ---------  -------  -------   --------------------------------------------------
| 2012-07-02 5.00.00   Seu      Creation
| 2013-09-13 5.01.00   Rna      CanIf_SetBaudrate(), CanIf_SetAddressTableEntry,
|                               CanIf_ResetAddressTableEntry added
| 2013-11-12 5.01.01   Rna      Changes for MISRA compliance
| 2016-02-26 6.00.00   Rna      Extended RAM check functions added
| 2016-10-11 6.01.00   Rna      CanIf_SetPduReceptionMode() added
|*********************************************************************************/

#if !defined( __AUTOSAR_CANIF_HOOKS_H__ )
#define  __AUTOSAR_CANIF_HOOKS_H__

/* "Begin" and "End" standard AutoSar API function CanIf_Init */
#define CanIfHook_OnBegin_CanIf_Init()
#define CanIfHook_OnEnd_CanIf_Init()

/* "Begin" and "End" standard AutoSar API function CanIf_SetControllerMode */
#define CanIfHook_OnBegin_CanIf_SetControllerMode()
#define CanIfHook_OnEnd_CanIf_SetControllerMode()

/* "Begin" and "End" standard AutoSar API function CanIf_GetControllerMode */
#define CanIfHook_OnBegin_CanIf_GetControllerMode()
#define CanIfHook_OnEnd_CanIf_GetControllerMode()

/* "Begin" and "End" standard AutoSar API function CanIf_Transmit */
#define CanIfHook_OnBegin_CanIf_Transmit()
#define CanIfHook_OnEnd_CanIf_Transmit()

/* "Begin" and "End" standard AutoSar function CanIf_TxConfirmation (handling sucessfull Tx) */
#define CanIfHook_OnBegin_CanIf_TxConfirmation()
#define CanIfHook_OnEnd_CanIf_TxConfirmation()

/* "Begin" and "End" standard AutoSar function CanIf_RxIndication() */
#define CanIfHook_OnBegin_CanIf_RxIndication()
#define CanIfHook_OnEnd_CanIf_RxIndication()

/* "Begin" and "End" standard AutoSar function CanIf_ControllerBusOff() */
#define CanIfHook_OnBegin_CanIf_ControllerBusOff()
#define CanIfHook_OnEnd_CanIf_ControllerBusOff()

/* "Begin" and "End" standard AutoSar function CanIf_SetPduMode() */
#define CanIfHook_OnBegin_CanIf_SetPduMode()
#define CanIfHook_OnEnd_CanIf_SetPduMode()

/* "Begin" and "End" standard AutoSar function CanIf_GetPduMode() */
#define CanIfHook_OnBegin_CanIf_GetPduMode()
#define CanIfHook_OnEnd_CanIf_GetPduMode()

/* "Begin" and "End" standard AutoSar API function CanIf_GetVersionInfo() */
#define CanIfHook_OnBegin_CanIf_GetVersionInfo()
#define CanIfHook_OnEnd_CanIf_GetVersionInfo()

/* "Begin" and "End" standard AutoSar API function CanIf_InitMemory() */
#define CanIfHook_OnBegin_CanIf_InitMemory()
#define CanIfHook_OnEnd_CanIf_InitMemory()

/* "Begin" and "End" standard AutoSar API function CanIf_CanIf_CancelTxConfirmation() */
#define CanIfHook_OnBegin_CanIf_CancelTxConfirmation()
#define CanIfHook_OnEnd_CanIf_CancelTxConfirmation()

/* "Begin" and "End" standard AutoSar API function CanIf_CanIf_CancelTransmit() */
#define CanIfHook_OnBegin_CanIf_CancelTransmit()
#define CanIfHook_OnEnd_CanIf_CancelTransmit()

/* "Begin" and "End" none AutoSar API function CanIf_CancelTxNotification() */
#define CanIfHook_OnBegin_CanIf_CancelTxNotification()
#define CanIfHook_OnEnd_CanIf_CancelTxNotification()

/* "Begin" and "End" standard AutoSar API function CanIf_SetTrcvMode() */
#define CanIfHook_OnBegin_CanIf_SetTrcvMode()
#define CanIfHook_OnEnd_CanIf_SetTrcvMode()

/* "Begin" and "End" standard AutoSar API function CanIf_GetTrcvMode() */
#define CanIfHook_OnBegin_CanIf_GetTrcvMode()
#define CanIfHook_OnEnd_CanIf_GetTrcvMode()

/* "Begin" and "End" standard AutoSar API function CanIf_CanIf_GetTrcvWakeupReason() */
#define CanIfHook_OnBegin_CanIf_GetTrcvWakeupReason()
#define CanIfHook_OnEnd_CanIf_GetTrcvWakeupReason()

/* "Begin" and "End" standard AutoSar API function CanIf_SetTrcvWakeupMode() */
#define CanIfHook_OnBegin_CanIf_SetTrcvWakeupMode()
#define CanIfHook_OnEnd_CanIf_SetTrcvWakeupMode()

/* "Begin" and "End" standard AutoSar API function CanIf_TrcvModeIndication() */
#define CanIfHook_OnBegin_CanIf_TrcvModeIndication()
#define CanIfHook_OnEnd_CanIf_TrcvModeIndication()

/* "Begin" and "End" standard AutoSar API function CanIf_ConfirmPnAvailability() */
#define CanIfHook_OnBegin_CanIf_ConfirmPnAvailability()
#define CanIfHook_OnEnd_CanIf_ConfirmPnAvailability()

/* "Begin" and "End" standard AutoSar API function CanIf_ClearTrcvWufFlagIndication() */
#define CanIfHook_OnBegin_CanIf_ClearTrcvWufFlagIndication()
#define CanIfHook_OnEnd_CanIf_ClearTrcvWufFlagIndication()

/* "Begin" and "End" standard AutoSar API function CanIf_ClearTrcvWufFlagIndication() */
#define CanIfHook_OnBegin_CanIf_CheckTrcvWakeFlagIndication()
#define CanIfHook_OnEnd_CanIf_CheckTrcvWakeFlagIndication()

/* "Begin" and "End" standard AutoSar API function CanIf_ClearTrcvWufFlag() */
#define CanIfHook_OnBegin_CanIf_ClearTrcvWufFlag()
#define CanIfHook_OnEnd_CanIf_ClearTrcvWufFlag()

/* "Begin" and "End" standard AutoSar API function CanIf_CheckTrcvWakeFlag() */
#define CanIfHook_OnBegin_CanIf_CheckTrcvWakeFlag()
#define CanIfHook_OnEnd_CanIf_CheckTrcvWakeFlag()

/* "Begin" and "End" standard AutoSar API function CanIf_CheckWakeup() */
#define CanIfHook_OnBegin_CanIf_CheckWakeup()
#define CanIfHook_OnEnd_CanIf_CheckWakeup()

/* "Begin" and "End" standard AutoSar API function CanIf_CheckValidation() */
#define CanIfHook_OnBegin_CanIf_CheckValidation()
#define CanIfHook_OnEnd_CanIf_CheckValidation()

/* "Begin" and "End" none AutoSar API function CanIf_ResetBusOffStart() */
#define CanIfHook_OnBegin_CanIf_ResetBusOffStart()
#define CanIfHook_OnEnd_CanIf_ResetBusOffStart()

/* "Begin" and "End" none AutoSar API function CanIf_ResetBusOffEnd() */
#define CanIfHook_OnBegin_CanIf_ResetBusOffEnd()
#define CanIfHook_OnEnd_CanIf_ResetBusOffEnd()

/* "Begin" and "End" standard AutoSar API function CanIf_SetDynamicTxId() */
#define CanIfHook_OnBegin_CanIf_SetDynamicTxId()
#define CanIfHook_OnEnd_CanIf_SetDynamicTxId()

/* "Begin" and "End" none AutoSar API function CanIf_ControllerModeIndication() */
#define CanIfHook_OnBegin_CanIf_ControllerModeIndication()
#define CanIfHook_OnEnd_CanIf_ControllerModeIndication()

/* "Begin" and "End" standard AutoSar API function CanIf_GetTxConfirmationState() */
#define CanIfHook_OnBegin_CanIf_GetTxConfirmationState()
#define CanIfHook_OnEnd_CanIf_GetTxConfirmationState()  

/* "Begin" and "End" standard AutoSar API function CanIf_CheckBaudrate() */
#define CanIfHook_OnBegin_CanIf_CheckBaudrate()
#define CanIfHook_OnEnd_CanIf_CheckBaudrate()

/* "Begin" and "End" standard AutoSar API function CanIf_ChangeBaudrate() */
#define CanIfHook_OnBegin_CanIf_ChangeBaudrate()
#define CanIfHook_OnEnd_CanIf_ChangeBaudrate()

/* "Begin" and "End" standard AutoSar API function CanIf_SetBaudrate() */
#define CanIfHook_OnBegin_CanIf_SetBaudrate()
#define CanIfHook_OnEnd_CanIf_SetBaudrate()

/* "Begin" and "End" standard AutoSar API function CanIf_SetAddressTableEntry() */
#define CanIfHook_OnBegin_CanIf_SetAddressTableEntry()
#define CanIfHook_OnEnd_CanIf_SetAddressTableEntry()

/* "Begin" and "End" standard AutoSar API function CanIf_ResetAddressTableEntry() */
#define CanIfHook_OnBegin_CanIf_ResetAddressTableEntry()
#define CanIfHook_OnEnd_CanIf_ResetAddressTableEntry()

/* "Begin" and "End" standard AutoSar API function CanIf_RamCheckCorruptMailbox() */
#define CanIfHook_OnBegin_CanIf_RamCheckCorruptMailbox()
#define CanIfHook_OnEnd_CanIf_RamCheckCorruptMailbox()

/* "Begin" and "End" standard AutoSar API function CanIf_RamCheckCorruptController() */
#define CanIfHook_OnBegin_CanIf_RamCheckCorruptController()
#define CanIfHook_OnEnd_CanIf_RamCheckCorruptController()

/* "Begin" and "End" standard AutoSar API function CanIf_RamCheckExecute() */
#define CanIfHook_OnBegin_CanIf_RamCheckExecute()
#define CanIfHook_OnEnd_CanIf_RamCheckExecute()

/* "Begin" and "End" standard AutoSar API function CanIf_EnableMailbox() */
#define CanIfHook_OnBegin_CanIf_EnableMailbox()
#define CanIfHook_OnEnd_CanIf_EnableMailbox()

/* "Begin" and "End" standard AutoSar API function CanIf_EnableController() */
#define CanIfHook_OnBegin_CanIf_EnableController()
#define CanIfHook_OnEnd_CanIf_EnableController()

/* "Begin" and "End" standard AutoSar API function CanIf_SetPduReceptionMode() */
#define CanIfHook_OnBegin_CanIf_SetPduReceptionMode()
#define CanIfHook_OnEnd_CanIf_SetPduReceptionMode()
#endif /* __AUTOSAR_CAN_HOOKS_H__ */
