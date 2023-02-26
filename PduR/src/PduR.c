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
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  PduR.c
 *      Project:  Gw_AsrPduRCfg5
 *       Module:  MICROSAR PDU Router
 *    Generator:  Configurator 5
 *
 *  Description:  Vector implementation of AUTOSAR PDU Router
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

/**********************************************************************************************************************
 * LOCAL MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/
/* *INDENT-OFF* */
/* PRQA S 0779 EOF */ /* MD_MSR_5.1_779 */
/* PRQA S 0777 EOF */ /* MD_MSR_5.1_777 */
/* PRQA S 3355, 3356 EOF */ /* MD_CSL_3355_3356 */
/* *INDENT-ON* */

#define PDUR_SOURCE
/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "PduR.h"
#include "SchM_PduR.h"

#if(PDUR_USE_ECUM_BSW_ERROR_HOOK == STD_ON)
# include "EcuM_Error.h"
#endif

/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/
#define PDUR_TEMP_OFF STD_OFF

/**********************************************************************************************************************
 * LOCAL FUNCTION MACROS
 *********************************************************************************************************************/
#define PduR_Core_MemCpyRamToRam(d, s, l)    VStdMemCpyRamToRam((d), (s), (l))   /* PRQA S 3453 */      /* MD_MSR_19.7 */
#define PduR_Core_MemCpyRomToRam(d, s, l)    VStdMemCpyRomToRam((d), (s), (l))   /* PRQA S 3453 */      /* MD_MSR_19.7 */

/**********************************************************************************************************************
 * LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
#if(PDUR_RPG == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_RmDestRpgRom
 *********************************************************************************************************************/
/*! \brief      This function initializes the PDUR routing path groups.
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_RmDestRpgRom(void);
#endif

#if(PDUR_BMTXBUFFERRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_BmTxBufferRam
 *********************************************************************************************************************/
/*! \brief      This function initializes the BufferManager TxBuffer
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_BmTxBufferRam(void);
#endif

#if (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_Init_TTSingleBuffer
 *********************************************************************************************************************/
/*! \brief    This function initializes the single buffer with default values
 *  \param    none
 *  \return   none
 *  \pre      PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context  The function must be called on task level and has not to be interrupted.
 *             by other administrative function calls.
 *  \note
 *  \warning  PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_Init_TTSingleBuffer(void);
#endif

#if (PDUR_DEDICATEDTXBUFFEROFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_Init_DedicatedTxBuffer
 *********************************************************************************************************************/
/*! \brief    This function assign dedicated buffer to routing pathways
 *  \param    none
 *  \return   none
 *  \pre      PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context  The function must be called on task level and has not to be interrupted.
 *             by other administrative function calls.
 *  \note
 *  \warning  PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_Init_DedicatedTxBuffer(void);
#endif

#if (PDUR_DEDICATEDTXBUFFEROFRMSRCROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_Init_DedicatedTxBuffer
 *********************************************************************************************************************/
/*! \brief    This function assign dedicated buffer to routing pathways
 *  \param    none
 *  \return   none
 *  \pre      PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context  The function must be called on task level and has not to be interrupted.
 *             by other administrative function calls.
 *  \note
 *  \warning  PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_Init_DedicatedTxBuffer(void);
#endif

#if(PDUR_BMTXBUFFERINSTANCERAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_BmTxBufferRamInstance
 *********************************************************************************************************************/
/*! \brief      This function initializes the BufferManager TxBuffer Instance
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_BmTxBufferRamInstance(void);
#endif
#if(PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoRam
 *********************************************************************************************************************/
/*! \brief      This function initializes the FifoManager Fifo Ram
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoRam(void);
#endif
#if (PDUR_FMFIFOELEMENTRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoElementRam
 *********************************************************************************************************************/
/*! \brief      This function initializes the FifoManager Fifo Element Ram
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoElementRam(void);
#endif
#if(PDUR_FMFIFOINSTANCERAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoInstanceRam
 *********************************************************************************************************************/
/*! \brief      This function initializes the FifoManager Fifo Element Instance Ram
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoInstanceRam(void);
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Init
 *********************************************************************************************************************/
/*! \brief      This function initializes the PDUR fan in RAM variables.
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Init(void);
#endif

#if (PDUR_EXISTS_TP_LOWER_LAYER_DESTLAYERTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_GwTp
 *********************************************************************************************************************/
/*! \brief      This function initializes the PDUR transport protocol routings.
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the startup code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_GwTp(void);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_TxBufferInstance
 *********************************************************************************************************************/
/*! \brief   Initialize Buffer Instance elements.
 *  \param   none
 *  \return  none
 *  \pre     PduR_InitMemory() has been executed, if the startup code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted.
 *              by other administrative function calls.
 *  \warning PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_TxBufferInstance(void);
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFo
 *********************************************************************************************************************/
/*! \brief      Reset Routing state. If FanIn routing is configured, reset FanIn RAM table.
 *  \param[in]  rmGDestRomIdx Gateway Id.
 *  \return     none
 *  \context    The function is called in context PduR_RmIf_TxConfirmation() or PduR_RmIf_TriggerTransmit()
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFo(PduR_RmGDestRomIterType rmGDestRomIdx);
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Reset
 *********************************************************************************************************************/
/*! \brief      Reset RAM variables which hold the N:1 routing information.
 *  \param[in]  txIfMulti2LoStateIdx             Gateway or upper layer Id.
 *  \return     none
 *  \context    The function is called  in context PduR_RmIf_MultipleSourceHandler_Transmit
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Reset(PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType txIfMulti2LoStateIdx);
#endif

#if ((PDUR_TXIFMULTI2LO) == STD_ON && ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)))
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_CheckReset
 *********************************************************************************************************************/
/*! \brief      This helper function is called to check if the PduR_RmIf_MultipleSourceHandler_Reset() function
 *              must be called
 *  \param[in]  rmGDest             Gateway Id.
 *  \return     none
 *  \context    The function is called  in context PduR_RmIf_MultipleSourceHandler_Transmit
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_CheckReset(PduR_RmGDestRomIterType rmGDest);
#endif

#if ((PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_CalcDlc
 *********************************************************************************************************************/
/*! \brief      Check if the DLC is shorter than the initial configured DLC. If the DLC is shorter the short DLC is
 *              returned. If the DLC is greater the initial DLC is returned
 *  \param[in]  rmGDest            Gateway Id used for state handling.
 *  \param[in]  info              contains the data pointer and its length.
 *  \context    The function is called in context of the PduR_RmIf_RxIndication API.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(PduLengthType, PDUR_CODE) PduR_RmIf_CalcDlc(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
#endif

#if((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_CopyRxData
 *********************************************************************************************************************/
/*! \brief     Copy data to the buffer and performe state handling
 *
 *  \param[in] fmFifoElementRamIdx   fifo element Idx
 *  \param[in] info                  data
 *  \context   receive communication interface data
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_CopyRxData(PduR_FmFifoElementRamIterType fmFifoElementRamIdx, PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr);
#endif

#if((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_TransmitPreparation
 *********************************************************************************************************************/
/*! \brief      Perform buffer assignment and state handling before data transmission
 *
 *  \param[in]  rmGDest global destination Idx
 *  \param[in]  fmFifoElementRamIdx   fifo element Idx
 *  \context    receive communication interface data
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_TransmitPreparation(PduR_RmGDestRomIterType rmGDest, PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_FifoHandling
 *********************************************************************************************************************/
/*! \brief      Perform D-Fifo and TT- Fifo buffer and transmission handling
 *
 *  \param[in]  rmGDest global destination Idx
 *  \param[in]  destPduInfo  Info pointer contains data and length
 *  \context    D-Fifo or TT- FiFo communication interface routing
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_FifoHandling(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_FiFoDataProcessing
 *********************************************************************************************************************/
/*! \brief      Perform D-Fifo and TT- Fifo buffer and transmission handling
 *
 *  \param[in]  rmGDest global destination Idx
 *  \param[in]  fmFifoElementRamIdx  specific Fifo Element RAM index
 *  \context    D-Fifo or TT- FiFo communication interface routing
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_FiFoDataProcessing(PduR_RmGDestRomIterType rmGDest, PduR_FmFifoElementRamIterType * fmFifoElementRamIdx,
                                                                          PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr);
#endif

#if(PDUR_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_SingleBufferHandling
 *********************************************************************************************************************/
/*! \brief     perform Single buffer Fifo buffer and transmission handling ()
 *
 *  \param[in] rmGDest        global destination Idx
 *  \param[in] info           Info pointer contains data and length
 *  \param[in] destPduInfo    Info pointer contains data and max Pdu length
 *  \context   -
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_SingleBufferHandling(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                  P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) destPduInfo);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_After_PutData
 *********************************************************************************************************************/
/*! \brief      Update Instance after enqueue data
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  distanceInstReadIdx      distance between Main Read index and instance read index
 *  \return     -
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_PutData(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Put_Between_WriteIdx_EndIdx
 *********************************************************************************************************************/
/*! \brief      The WriteId leading. Add data up to the buffer end.
 *  \param[in]  txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \param[in]  info                     contains the data pointer and its length.
 *  \return     none
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Put_Between_WriteIdx_EndIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                       CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx
 *********************************************************************************************************************/
/*! \brief      Update Write Instance after put Data
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     none
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                            PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Put_Between_WriteIdx_ReadIdx
 *********************************************************************************************************************/
/*! \brief      The WriteId lagging the ReadIdx. Add data to the buffer in this range.
 *  \param[in]  txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \param[in]  info                     contains the data pointer and its length.
 *  \return     none
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Put_Between_WriteIdx_ReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx
 *********************************************************************************************************************/
/*! \brief      Update Write Instance after put Data.
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     none
 *  \context    The function is called in receive context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                             PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ
 *********************************************************************************************************************/
/*! \brief      Helper function which handles the BUFFER_EMPTY or Write4Read state.
 *  \param[in]  txBufferElementStateIdx  txBufferElementStateIdx read index in the transport protocol Tx buffer
 *  \param[in]  info                     contains the data pointer and its length.
 *  \return     BUFREQ_OK                State change action was successful.
 *              BUFREQ_E_NOT_OK          State change action was not successful.
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ
 *********************************************************************************************************************/
/*! \brief      Helper function which handles the BUFFER_EMPTY state.
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     -
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                                  PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData_StateHandler_BUFFER_READ4WRITE
 *********************************************************************************************************************/
/*! \brief                               Helper function which handles the BUFFER_READ4WRITE state.
 *  \param[in]  txBufferElementStateIdx  txBufferElementStateIdx read index in the transport protocol Tx buffer
 *  \param[in]  info                     contains the data pointer and its length.
 *  \return     BUFREQ_OK                State change action was successful.
 *              BUFREQ_E_NOT_OK          State change action was not successful.
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData_StateHandler_BUFFER_READ4WRITE(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                               CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_StateHandler_BUFFER_READ4WRITE
 *********************************************************************************************************************/
/*! \brief                                       Helper function which handles the BUFFER_READ4WRITE state.
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     -
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_StateHandler_BUFFER_READ4WRITE(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                         PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMain_After_GetData
 *********************************************************************************************************************/
/*!  \brief      Call to get queued data from the buffer.
 *   \param[in]  txBufferElementStateIdx    read index in the transport protocol Tx buffer
 *   \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *   \return     BUFREQ_OK              Copy action was successful.
 *               BUFREQ_E_NOT_OK        Copy action was not successful.
 *   \context    The function is called during transmission on the destination bus.
 *   \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Get_Between_ReadIdx_WriteIdx
 *********************************************************************************************************************/
/*! \brief      The ReadIdx lagging the WriteIdx. Get data in this range
 *  \param[in]  bmTxBufferInstanceRomIdx instance Idx
 *  \param[in]  info                     contains the data pointer where the data has to be copied and the
 *                                       desired length.
 *  \return     none
 *  \context    The function is called during transmission on the destination bus.
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Get_Between_ReadIdx_WriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx
 *********************************************************************************************************************/
/*! \brief      Update main Read Idx after data are dequeued from the buffer.
 *  \param[in]  txBufferElementStateIdx    read index in the transport protocol Tx buffer
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *                                       desired length.
 *  \return     none
 *  \context    The function is called during transmission on the destination bus.
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx,
                                                                                                PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Get_Between_ReadIdx_EndIdx
 *********************************************************************************************************************/
/*! \brief      The ReadIdx is leading. Get data up to the buffer end
 *  \param[in]  bmTxBufferInstanceRomIdx instance Idx
 *  \param[in]  info                     contains the data pointer where the data has to be copied and the
 *                                       desired length.
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Get_Between_ReadIdx_EndIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                      CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx
 *********************************************************************************************************************/
/*! \brief      Update main ReadIdx after dequeued data from the buffer
 *  \param[in]  txBufferElementStateIdx  1:N buffer specific destinations read pointer
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *                                       desired length.
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ
 *********************************************************************************************************************/
/*! \brief                             Helper function which handles the BUFFER_WRITE4READ state.
 *  \param[in]  bmTxBufferInstanceRomIdx instance Idx
 *  \param[in]  info                   contains the data pointer and its length.
 *  \return     BUFREQ_OK              State change action was successful.
 *              BUFREQ_E_NOT_OK        State change action was not successful.
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                               CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_WRITE4READ
 *********************************************************************************************************************/
/*! \brief                             Update main ReadIdx after dequeued data from the buffer
 *  \param[in]  txBufferElementStateIdx    read index in the transport protocol Tx buffer
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     BUFREQ_OK              State change action was successful.
 *              BUFREQ_E_NOT_OK        State change action was not successful.
 *  \context    The function is called after PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_WRITE4READ(PduR_BmTxBufferRomIterType txBufferElementStateIdx,
                                                                                                                PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE
 *********************************************************************************************************************/
/*! \brief                             Helper function which handles the BUFFER_FULL and READ4WRITE state.
 *  \param[in]  bmTxBufferInstanceRomIdx instance Idx
 *  \param[in]  info                   contains the data pointer and its length.
 *  \return     BUFREQ_OK              State change action was successful.
 *              BUFREQ_E_NOT_OK        State change action was not successful.
 *  \context    The function is called from PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                                       PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE
 *********************************************************************************************************************/
/*! \brief                             Helper function which handles the BUFFER_FULL and READ4WRITE state.
 *  \param[in]  txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     BUFREQ_OK              State change action was successful.
 *              BUFREQ_E_NOT_OK        State change action was not successful.
 *  \context    The function is called after PduR_Bm_GetData().
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(PduR_BmTxBufferRomIterType txBufferElementStateIdx,
                                                                                                                        PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_WriteIdx
 *********************************************************************************************************************/
/*! \brief      Set WriteIdx to buffer start Idx
 *  \param[in]  txBufferElementStateIdx   read index in the transport protocol Tx buffer
 *  \context    The function is called in receive context.
 *  \return     none
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_WriteIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_Instance_WriteIdx
 *********************************************************************************************************************/
/*! \brief      Set Instance WriteIdx to buffer start Idx
 *  \param[in]  bmTxBufferInstanceRomIdx   instance Idx
 *  \context    The function is called in receive context.
 *  \return     none
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_Instance_WriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_ReadIdx
 *********************************************************************************************************************/
/*! \brief      Set ReadIdx to buffer start Idx
 *  \param[in]  txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \context    The function is called in transmit context.
 *  \return     none
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_ReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_InstanceReadIdx
 *********************************************************************************************************************/
/*! \brief     Helper function to perform a wrap around for the instance specific read idx.
 *  \param[in] bmTxBufferInstanceRomIdx instance Idx
 *  \context   get data from buffer.
 *  \return    none
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_InstanceReadIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_WriteIdx_And_PutData
 *********************************************************************************************************************/
/*! \brief          Perform wrap around handling for WriteIdx
 *  \param[in]      txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \param[in,out]  info                     contains the data pointer and its length.
 *  \context        The function is called in receive context.
 *  \note       -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_WriteIdx_And_PutData(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_InstanceWriteIdx
 *********************************************************************************************************************/
/*! \brief          Perform wrap around handling for Instance WriteIdx
 *  \param[in]      bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]      distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \context        The function is called in receive context.
 *  \note       -
**********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_InstanceWriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_InstanceReadIdx_WrapAround
 **********************************************************************************************************************/
/*! \brief      Perform a wrap around handling for instance ReadIdx
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \param[in]  info                             contains the data pointer and its length.
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_InstanceReadIdx_WrapAround(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                      SduDataPtrType sduDataPtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx
 **********************************************************************************************************************/
/*! \brief      Perform a wrap around handling for instance ReadIdx
 *  \param[in]  txBufferElementStateIdx    read index in the transport protocol Tx buffer
 *  \param[in]  distanceInstReadIdx                              distance between Main Read index and instance read index
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 *  PduR_Bm_UpdateMainReadIdx
**********************************************************************************************************************/
/*!  \brief        Helper function which checks if the main buffer ReadIdx must be moved.
 *   \details      The main read will be moved if the slowest instance read pointer is moved
 *   \param[in]    txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *   \return       none
 *   \context      PduR_RmTp_CopyTxData() context or if meta data enabled also in the Transmission context, because
 *                 meta data are dequeued in the transmit context.
 *   \note         -
***********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMainReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_ResetTxBuffer
 *********************************************************************************************************************/
/*! \brief      Reset Buffer element: Read, WriteIndex, data and buffer size information, Buffer state.
 *  \param[in]  txBufferElementStateIdx  read index in the transport protocol Tx buffer
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ResetTxBuffer(PduR_BmTxBufferRomIterType txBufferElementStateIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_ResetTxBufferInstance
 *********************************************************************************************************************/
/*! \brief      Reset Instance Buffer element: Read, WriteIndex, data and buffer size information, Buffer state.
 *  \param[in]  bmTxBufferInstanceRomIdx  instance Idx
 *  \return     none
 *  \context    The function is called in transmit context.
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ResetTxBufferInstance(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx);
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AllocateFifoElement
 *********************************************************************************************************************/
/*! \brief       Helper function to allocate a FIFO element.
 *  \param[in]   fmFifoRamIdx        FIFO ID used for FIFO handling
 *  \param[out]  fmFifoElementRamIdx IDx to the next free FIFO Element.
 *  \return      E_OK                FIFO element could be allocated.
 *               E_NOT_OK            no FIFO element is available.
 *  \context     StartOfReception, RxIndication
 *  \note        -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_AllocateFifoElement(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamIterType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx);
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_Peek
 *********************************************************************************************************************/
/*!  \brief      Helper function which checks if any routing is ready to transmit in the FIFO
 *   \details    no dequeuing
 *   \param[in]  fmFifoRamIdx        Index of the destination FIFO
 *   \param[in]  fmFifoElementRamIdx Index of the current element which is used by the routing
 *   \return     E_OK     if a routing is waiting for transmission.
 *               E_NOT_OK FIFO is empty
 *   \context    TpTxConfirmation
 *   \note       -
***********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_Peek(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamIterType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx);
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext
 *********************************************************************************************************************/
/*! \brief       This function is called to activated the next pending element in the FiFo
 *  \param[in]   fmFifoRamIdx        Index of the destination FIFO
 *  \return      none
 *
 *  \context    in the functon FinishedReception or FinishedTransmission
 *  \note        -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext(PduR_FmFifoRamIterType fmFifoRamIdx);
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_STARTOFRECEPTIONRXSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FreeFifoElement
 *********************************************************************************************************************/
/*! \brief      If no Tx Buffer is available for the FIFO element the FIFO must be freed
 *  \param[in]  fmFifoRomIdx FIFO index
 *  \param[in]  previous write pointer (roll back)
 *  \return     none
 *
 *  \context    The function is called in context of the PduR_RmTp_StartOfReception.
 *  \note       none
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_FreeFifoElement(PduR_FmFifoRomIterType fmFifoRomIdx, PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_AllocateTxBuffer
 *********************************************************************************************************************/
/*! \brief       Search a suitable buffer from the buffer pool.
 *  \param[in]   bmTxBufferRomIndStartId   TxBuffer Indirection StartIdx
 *  \param[in]   bmTxBufferRomIndEndIdx    TxBuffer Indirection EndIdx
 *  \param[in]   fmFifoElementRamWriteIdx  Current write FIFO Idx
 *  \param[in]   TpSduLength               SDU length which must be routed
 *  \param[out]  bufferSizePtr             Available buffer
 *  \return      BUFREQ_OK                 Buffer request was successful.
 *               BUFREQ_E_NOT_OK           Currently no buffer is available or a buffer request occurs for a 1:N routing
 *                                         and no buffer is available to store the complete frame to the buffer.
 *  \context     The function is called in context of the PduR_RmTp_StartOfReception.
 *  \note        This function is called in context of the StartOfReception if the routing with the unique
 *               handle is not started yet or the reception of the SDU is finished and only the transmission is not
 *               finished.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_AllocateTxBuffer(PduR_BmTxBufferIndRomIterType bmTxBufferRomIndStartId, PduR_BmTxBufferIndRomIterType bmTxBufferRomIndEndIdx,
                                                                         PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, PduR_BmTxBufferArrayRamIterType TpSduLength, P2VAR(PduLengthType,
                                                                                                                                                                                    AUTOMATIC,
                                                                                                                                                                                    PDUR_APPL_DATA)
                                                                         bufferSizePtr);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AssignTxBuffer2FifoElement
 *********************************************************************************************************************/
/*! \brief        Assign the element from the buffer pool.
 *  \param[in]    fmFifoElementRamWriteIdx  Current write FIFO Idx
 *  \param[in]    bmTxBufferRomIdx Tx Buffer Idx
 *  \param[in]    TpSduLength       SDU length which must be routed
 *  \param[out]   none
 *  \return       none
 *
 *  \context      PduR_Bm_AllocateTxBuffer()
 *  \note
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_AssignTxBuffer2FifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, PduR_BmTxBufferRomIterType bmTxBufferRomIdx,
                                                                      PduR_BmTxBufferArrayRamIterType TpSduLength);
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_ReleaseTxBuffer
 *********************************************************************************************************************/
/*! \brief                             Reset the transmission administration structure
 *  \param[in]  bmTxBufferRomIdx       bmTxBufferRomIdx Tx Buffer Idx
 *  \return     none
 *  \context                           This function is called if the transmission is finished or aborted.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ReleaseTxBuffer(PduR_BmTxBufferRomIterType bmTxBufferRomIdx);
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DissolveFifoElementTxBufferRelation
 *********************************************************************************************************************/
/*! \brief                               ReleaseTx buffer Fifo Element connection in case of a shared buffer
 *  \param[in]  fmFifoElementRamIdx    Fifo State Id used for state handling
 *  \return     none
 *  \context                           This function is called if the transmission is finished or aborted.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_DissolveFifoElementTxBufferRelation(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ReleaseFifoElement
 *********************************************************************************************************************/
/*! \brief                               Reset Fifo Element
 *  \param[in]  fmFifoElementRamIdx    Fifo State Id used for state handling
 *  \return     none
 *  \context                           This function is called if the transmission is finished or aborted.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_ReleaseFifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_IsFifoElementAllocated
 *********************************************************************************************************************/
/*! \brief                             Helper function to check if the queue element is in use
 *  \param[in]  fmFifoElementRamWriteIdx    Fifo State Id used for state handling
 *  \return     E_OK                   if the queue is in use.
 *              E_NOT_OK               if the queue is not in use.
 *  \context                           This function is called if the transmission is finished or aborted.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_IsFifoElementAllocated(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
#endif

#if (PDUR_METADATA_SUPPORT == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_StartOfReceptionQueueMetaData
 *********************************************************************************************************************/
/*! \brief                          This function writes meta data to the Tp buffer and adjusts the info->SduLength
 *                                  if meta data is used.
 *  \param[in]     rmSrcIdx         Routing Manager Src Index
 *  \param[in,out] info             Contains Meta Data but not the Meta Data length! Meta data length are constant ROM
 *                                  data.
 *  \param[out]    bufferSizePtr    pointer to data structure which will be used to return the size of the Pdu which
                                    can be copied to the buffer.
 *  \return        BUFREQ_OK        Buffer request was successful.
 *                 BUFREQ_E_NOT_OK  Currently no buffer available
 *  \context       This function is called in context of the StartOfReception.
 *  \note                           This function is called in context of the StartOfReceptionn and calls the
 *                                  PduR_Bm_PutData() to copy Meta data to the buffer.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_StartOfReceptionQueueMetaData(PduR_RmSrcRomIterType rmSrcIdx,
                                                                                        PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                        SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr);
#endif

#if ((PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON) || (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_RmTp_AssignAssociatedBuffer2Destination
 *********************************************************************************************************************/
/*! \brief                           Assign the associated buffer to the destinations before the Transmit function is called
 *  \param[in] bmTxBufferRomIdx      Index of the Tx buffer
 *  \param[in] rmSrcIdx              Routing Manager Src Index
 *  \return    -
 *  \context                         This function is called in the transmit context.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_BmTxBufferRomIterType bmTxBufferRomIdx, PduR_RmSrcRomIterType rmSrcIdx);
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_AssignAssociatedBuffer2Destination
 *********************************************************************************************************************/
/*! \brief                           Assign the associated buffer to the destinations before the Transmit function is called
 *  \param[in] bmTxBufferRomIdx    Index of the Tx buffer
 *  \param[in] rmGDestRomIdx         global destination Pdu Idx
 *  \return    -
 *  \context                         This function is called in the transmit context.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_AssignAssociatedBuffer2Destination(PduR_BmTxBufferRomIterType bmTxBufferRomIdx, PduR_RmGDestRomIterType rmGDestRomIdx);

#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmInit_BmTxBufferInstanceRam
 *********************************************************************************************************************/
/*! \brief     This function initialize the all destination instances according the current Tp buffer state.
 *  \param[in] bmTxBufferInstanceRomIdx   instance Idx
 *  \param[in] bmTxBufferRomIdx    Index of the Tx buffer
 *  \return    -
 *  \context   In function PduR_RmTp_AssignAssociatedBuffer2Destination() in the transmit context.
 *  \note      -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmInit_BmTxBufferInstanceRam(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferRomIterType bmTxBufferRomIdx);

#endif
#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_LoAndUpTransmit
 *********************************************************************************************************************/
/*! \brief                             This function triggers the transmission on the destination bus(es). In case of a
 *                                     1:N routing including a upper layer module StartOfReception/ CopyRxData/
 *                                     and the Indication API of the upper layer is called.
 *  \param[in]  rmSrcIdx               Src Id used for state handling
 *  \param[in]  rmDestIdx              Destination Id
 *  \return     E_OK                   successful transmission.
 *              E_NOT_OK               transmission failing
 *  \context                           This function is called in the transmit context.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_LoAndUpTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestIdx);
#endif

#if ((PDUR_STARTOFRECEPTIONFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_COPYRXDATAFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_TPRXINDICATIONFCTPTRIDXOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmTp_UpTransmit
 *********************************************************************************************************************/
/*! \brief                              This function triggers the reception in an upper layer module in case of an
 *                                      1:N routing including an upper layer module StartOfReception/ CopyRxData/
 *                                      an the Indication API of the upper layer is called.
 *  \param[in]  rmSrcIdx               Routing Manager Src Idx
 *  \param[in]  rmDestTpIdx            Routing Manager Dest Idx
 *  \param[out] pUpperLayerInfo         points to data to provide them for the upper layer.
 *  \param[out] pUpperLayerDataInfo     contains the data size to copy.
 *  \context                            This function is called in case of an 1:n routing.
 *  \trace      SPEC-2020176
 *  \return     BUFREQ_OK               Buffer request was successful.
 *              BUFREQ_E_NOT_OK         Currently no buffer available
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_UpTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestTpIdx);
#endif

#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_LoTransmit
 *********************************************************************************************************************/
/*! \brief                              This function triggers the transmission in an lower layer module
 *  \param[in]  rmSrcIdx                Routing Manager Src Index
 *  \param[in]  rmDestTpIdx             Routing Manager Dest Index
 *  \context
 *  \trace
 *  \return     E_OK                   Transmission successful.
 *              E_NOT_OK               Transmission not successful.
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_LoTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestTpIdx);
#endif

#if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_ThresholdReached
 *********************************************************************************************************************/
/*! \brief                            This function calculates the fill level and returns true if the configured
 *                                    threshold is reached.
 *  \param[in]  rmSrcIdx              Routing Manager Src Index
 *  \return                           E_OK:     If threshold is reached.
 *                                    E_NOT_OK: If threshold is not reached.
 *  \context                          The function is called in context of PduR_RmTp_StartOfReception or PduR_RmTp_CopyRxData.
 *  \note                             If the Threshold is reached the transmission is triggered.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_ThresholdReached(PduR_RmSrcRomIterType rmSrcIdx);
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON))
 /**********************************************************************************************************************
 * PduR_TxSm_CancelTransmitPreparation
 *********************************************************************************************************************/
/*! \brief                              This function is called to cancel all destination transmit calls of a source
 *  \param[in]  fmFifoElementRamIdx     Fifo State Id used for state handling
 *  \context
 *  \trace
 *  \return     none
 *  \note       -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TxSm_CancelTransmitPreparation(PduR_FmFifoElementRamIterType fmFifoElementRamIdx);
#endif

#if (PDUR_TXMULTI2LOSTATE == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_Reset
 *********************************************************************************************************************/
/*! \brief                          Reset RAM variables which hold the N:1 Tp routing information.
 *  \param[in]   txMulti2LoStateIdx index of the active routing.
 *  \return      none
 *  \context                        The function is called  in context PduR_RmTp_MultipleSourceHandler_Transmit
  * \context     TASK|ISR1|ISR2
 *  \reentrant   TRUE
 *  \synchronous TRUE
 *  \note        -
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Reset(PduR_TxMulti2LoStateIterType txMulti2LoStateIdx);
#endif

#if (PDUR_TXMULTI2LOSTATE == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_Init
 *********************************************************************************************************************/
/*! \brief       This function initializes the PDUR fan in Transport Protocol RAM variables.
 *  \param       none
 *  \return      none
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     The function must be called on task level and has not to be interrupted by other administrative
 *               function calls.
 *  \note        -
 *  \warning     PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Init(void);
#endif

#if (PDUR_RMGDESTROMIFIDXOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_DisableIfRoutingAction
 *********************************************************************************************************************/
/*! \brief                     This function flushes the Interface queue if the queue is in use while the RoutingPathGroup
 *                             is disabled.
 *  \param[in]  gwId           Gateway Id used for state handling
 *  \context                   The function is called in the context of PduR_DisableIfRouting.
 *  \note                      Called in context of DisableRouting().
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_DisableIfRoutingAction(PduR_RmGDestRomIdxOfRmDestRomType rmGDestRomIfIdx);
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_Init
 *********************************************************************************************************************/
/*! \brief      This function initializes the switching manager sub-module.
 *  \param      none
 *  \return     none
 *  \pre        PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context    The function must be called on task level and has not to be interrupted
 *              by other administrative function calls.
 *  \note       -
 *  \warning    PduR_Init shall not pre-empt any PDUR function.
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Sm_Init(void);
#endif
/**********************************************************************************************************************
 * PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetSa
 *********************************************************************************************************************/
/*! \brief       This function extract the source address from the meta data
 *  \param       smSaTaFromMetaDataCalculationStrategyRomIdx Source Target address Rom Idx
 *  \param       metaData  Meta data contains Source Target address
 *  \return      PduR_SmSaType   metaData + offset & mask;
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     Smart Learning
 *
 *  \note        -
 *  \warning     -
 *********************************************************************************************************************/
#if(PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
LOCAL_INLINE FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetSa(PduR_SmSaTaFromMetaDataCalculationStrategyRomIterType smSaTaFromMetaDataCalculationStrategyRomIdx,
                                                                                              uint32 metaData);
#endif
/**********************************************************************************************************************
 * PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetTa
 *********************************************************************************************************************/
/*! \brief       This function extract the target address from the meta data
 *  \param       smSaTaFromMetaDataCalculationStrategyRomIdx Source Target address Rom Idx
 *  \param       metaData  Meta data contains Source Target address
 *  \return      PduR_SmSaType   metaData + offset & mask;
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     Smart Learning
 *
 *  \note        -
 *  \warning     -
 *********************************************************************************************************************/
#if(PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
LOCAL_INLINE FUNC(PduR_SmTaType, PDUR_CODE) PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetTa(PduR_SmSaTaFromMetaDataCalculationStrategyRomIterType smSaTaFromMetaDataCalculationStrategyRomIdx,
                                                                                              uint32 metaData);
#endif
/**********************************************************************************************************************
 * PduR_Sm_GetMetaData
 *********************************************************************************************************************/
/*! \brief       This function extract meta data
 *  \param       info contains metadata
 *  \param       metaDataLength meta data length
 *  \return      meta data
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     Smart Learning
 *
 *  \note        -
 *  \warning     -
 *********************************************************************************************************************/
#if(PDUR_SMDATAPLANEROM == STD_ON)
LOCAL_INLINE FUNC(uint32, PDUR_CODE) PduR_Sm_GetMetaData(P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, uint8 metaDataLength);
#endif
 /*********************************************************************************************************************
 * PduR_Sm_GetMetaData
 *********************************************************************************************************************/
/*! \brief       This function updates the Fib table while a routing was learned
 *  \param       sourceAdress  source adress
 *  \param       learnedConnectionId  learned connection Id
 *  \return      -
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     Smart Learning
 *
 *  \note        -
 *  \warning     -
 *********************************************************************************************************************/
#if(PDUR_SMDATAPLANEROM == STD_ON)
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Sm_UpdateFib(PduR_SmDataPlaneRomIterType smDataPlaneIdx, PduR_SmSaType sourceAdress, PduR_ConnectionIdOfSmSrcRomType learnedConnectionId);
#endif
/**********************************************************************************************************************
 * PduR_Sm_CheckLearned
 *********************************************************************************************************************/
/*! \brief       This function checks if a routing is learned.
 *  \param       smDataPlaneIdx   Data plane Idx.
 *  \return      PduR_FilterReturnType
 *                - PDUR_FILTER_PASS  Let the routing pass.
 *                - PDUR_FILTER_BLOCK Block the routing, it is not the learned destination connection
 *  \pre         PduR_InitMemory() has been executed, if the start up code does not initialise variables.
 *  \context     Smart Learning
 *
 *  \note      -
 *  \warning   -
 *********************************************************************************************************************/
#if(PDUR_SMDATAPLANEROM == STD_ON)
LOCAL_INLINE FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_CheckLearned(PduR_SmDataPlaneRomIterType smDataPlaneIdx, PduR_SmTaType targetAdress, PduR_ConnectionIdOfSmGDestRomType destConnection);
#endif

/**********************************************************************************************************************
 * LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
#define PDUR_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

#if(PDUR_USE_INIT_POINTER == STD_ON)
P2CONST(PduR_PBConfigType, PDUR_VAR_ZERO_INIT, PDUR_PBCFG) PduR_ConfigDataPtr = NULL_PTR;
#endif

#define PDUR_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * GLOBAL AND LOCAL FUNCTIONS
 *********************************************************************************************************************/
#define PDUR_START_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

#if(PDUR_VERSION_INFO_API == STD_ON)
/**********************************************************************************************************************
 * PduR_GetVersionInfo
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_GetVersionInfo(P2VAR(Std_VersionInfoType, AUTOMATIC, PDUR_APPL_DATA) versionInfo)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  /* Check parameter 'ConfigPtr' */
  if(versionInfo == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else
# endif
  {
    versionInfo->vendorID = (uint16) PDUR_VENDOR_ID;    /* SBSW_PDUR_GETVERSION_PARAM */
    versionInfo->moduleID = (uint8) PDUR_MODULE_ID;     /* SBSW_PDUR_GETVERSION_PARAM */
    versionInfo->sw_major_version = (uint8) PDUR_SW_MAJOR_VERSION;      /* SBSW_PDUR_GETVERSION_PARAM */
    versionInfo->sw_minor_version = (uint8) PDUR_SW_MINOR_VERSION;      /* SBSW_PDUR_GETVERSION_PARAM */
    versionInfo->sw_patch_version = (uint8) PDUR_SW_PATCH_VERSION;      /* SBSW_PDUR_GETVERSION_PARAM */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_VERSIONINFO, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}       /* End of PduR_GetVersionInfo() */
#endif

/**********************************************************************************************************************
 * PduR_GetConfigurationId
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(PduR_PBConfigIdType, PDUR_CODE) PduR_GetConfigurationId(void)
{
  uint16 configID = 0U;
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_INVALID_REQUEST;
  }
  else
  {
    configID = PduR_GetConfigId();
  }
  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_CONFIGURATIONID, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
#endif
  return configID;
}       /* End of PduR_GetConfigurationId() */

/**********************************************************************************************************************
 * PduR_RmIf_Init_DedicatedTxBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
#if (PDUR_DEDICATEDTXBUFFEROFRMGDESTROM == STD_ON)
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_Init_DedicatedTxBuffer(void)
{
  PduR_RmGDestRomIterType rmGDestRomIdx;
  for(rmGDestRomIdx = 0; rmGDestRomIdx < PduR_GetSizeOfRmGDestRom(); rmGDestRomIdx++)
  {
    if(PduR_IsDedicatedTxBufferOfRmGDestRom(rmGDestRomIdx))
    {
      if(PduR_IsFmFifoInstanceRomUsedOfRmGDestRom(rmGDestRomIdx))       /* COV_PDUR_FATAL_ERROR */
      {
        PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
        PduR_FmFifoElementRamIterType possilbeFmFifoElementRamIdx;
        for(possilbeFmFifoElementRamIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx); possilbeFmFifoElementRamIdx < PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRomIdx);
            possilbeFmFifoElementRamIdx++)
        {
          PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
          if(PduR_Fm_AllocateFifoElement(fmFifoRomIdx, &fmFifoElementRamIdx) == E_OK)   /* SBSW_PDUR_STACK_VARIABLE */ /* COV_PDUR_FATAL_ERROR */
          {
            PduLengthType bufferSizePtr = 0;
            if(PduR_Bm_AllocateTxBuffer(PduR_GetBmTxBufferIndRomStartIdxOfRmGDestRom(rmGDestRomIdx), PduR_GetBmTxBufferIndRomEndIdxOfRmGDestRom(rmGDestRomIdx), fmFifoElementRamIdx, 0, &bufferSizePtr) == BUFREQ_OK)   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */ /* COV_PDUR_FATAL_ERROR */
            {
              PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);      /* SBSW_PDUR_CSL03 */
              PduR_SetDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx, TRUE);   /* SBSW_PDUR_CSL03 */
            }
            else
            {
              PduR_Det_ReportError(PDUR_GWIF_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
            }
          }
          else
          {
            PduR_Det_ReportError(PDUR_GWIF_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
          }
        }
      }
      else
      {
        PduR_Det_ReportError(PDUR_GWIF_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
      }
    }
  }
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

/**********************************************************************************************************************
 * PduR_RmIf_Init_TTSingleBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/

#if (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_Init_TTSingleBuffer(void)
{
  PduR_RmGDestRomIterType rmGDestRomIdx;
  for(rmGDestRomIdx = 0; rmGDestRomIdx < PduR_GetSizeOfRmGDestRom(); rmGDestRomIdx++)
  {
    if(PduR_IsFiFoInitValuesUsedOfRmGDestRom(rmGDestRomIdx))
    {
      if(PduR_IsFmFifoInstanceRomUsedOfRmGDestRom(rmGDestRomIdx))       /* COV_PDUR_FATAL_ERROR */
      {
        PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
        PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
        for(fmFifoElementRamIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx); fmFifoElementRamIdx < PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRomIdx); fmFifoElementRamIdx++)
        {
          PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx);
          PduR_BmTxBufferArrayRamIterType pduLength = PduR_GetFiFoInitValuesLengthOfRmGDestRom(rmGDestRomIdx);
          SduDataPtrType sduDataPtr = (SduDataPtrType) PduR_GetAddrFiFoInitValues(PduR_GetFiFoInitValuesStartIdxOfRmGDestRom(rmGDestRomIdx));   /* PRQA S 0311 */ /* MD_PduR_0311 */

          PduR_GetFctPtrOfTpActivateWriteFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx);  /* SBSW_PDUR_CSL03 */
          (void) PduR_Bm_PutData(bmTxBufferRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_STACK_VARIABLE */
          PduR_GetFctPtrOfFinishWriteFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx, E_OK);  /* SBSW_PDUR_CSL03 */
          PduR_RmIf_AssignAssociatedBuffer2Destination(bmTxBufferRomIdx, rmGDestRomIdx);
        }
      }
      else
      {
        PduR_Det_ReportError(PDUR_GWIF_INIT_TTSINGLEBUFFER, PDUR_E_FATAL);
      }
    }
  }
}
#endif

/**********************************************************************************************************************
 * PduR_RmTp_Init_DedicatedTxBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
#if (PDUR_DEDICATEDTXBUFFEROFRMSRCROM == STD_ON)
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_Init_DedicatedTxBuffer(void)
{
  PduR_RmSrcRomIterType rmSrcRomIdx;
  for(rmSrcRomIdx = 0; rmSrcRomIdx < PduR_GetSizeOfRmSrcRom(); rmSrcRomIdx++)
  {
    if(PduR_IsDedicatedTxBufferOfRmSrcRom(rmSrcRomIdx))
    {
      if(PduR_IsFmFifoRomUsedOfRmSrcRom(rmSrcRomIdx))   /* COV_PDUR_FATAL_ERROR */
      {
        /* Allocate FiFo element */
        PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcRomIdx);
        PduR_FmFifoElementRamIterType possilbeFmFifoElementRamIdx;
        for(possilbeFmFifoElementRamIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx); possilbeFmFifoElementRamIdx < PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRomIdx);
            possilbeFmFifoElementRamIdx++)
        {
          PduR_FmFifoElementRamIterType fmFifoElementRamIdx = 0;
          if(PduR_Fm_AllocateFifoElement(fmFifoRomIdx, &fmFifoElementRamIdx) == E_OK)   /* SBSW_PDUR_STACK_VARIABLE */ /* COV_PDUR_FATAL_ERROR */
          {
            PduLengthType bufferSizePtr = 0;
            /* Mapping Src Handle and current Fifo element */
            PduR_SetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcRomIdx, fmFifoElementRamIdx);       /* SBSW_PDUR_CSL03 */
            /* Store related routing source in Fifo Manager Ram table */
            PduR_SetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamIdx, rmSrcRomIdx);       /* SBSW_PDUR_CSL03 */

            /* Split Allocate and Assign buffer */
            if(PduR_Bm_AllocateTxBuffer(PduR_GetBmTxBufferIndRomStartIdxOfRmSrcRom(rmSrcRomIdx), PduR_GetBmTxBufferIndRomEndIdxOfRmSrcRom(rmSrcRomIdx), fmFifoElementRamIdx, 0, &bufferSizePtr) == BUFREQ_OK)   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */ /* COV_PDUR_FATAL_ERROR */
            {
              PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);      /* SBSW_PDUR_CSL01 */
              PduR_SetDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx, TRUE);   /* SBSW_PDUR_CSL01 */
            }
            else
            {
              PduR_Det_ReportError(PDUR_GWTP_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
            }
          }
          else
          {
            PduR_Det_ReportError(PDUR_GWTP_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
          }
        }
      }
      else
      {
        PduR_Det_ReportError(PDUR_GWTP_INIT_DEDICATEDTXBUFFER, PDUR_E_FATAL);
      }
    }
  }
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

/**********************************************************************************************************************
 * PduR_Init
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Init(P2CONST(PduR_PBConfigType, AUTOMATIC, PDUR_PBCFG) ConfigPtr)
{
/* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */

  /* Check initialization state of the component */
  if(PduR_IsInitialized() == TRUE)
  {
    errorId = PDUR_E_ALREADY_INITIALIZED;
  }
  else
  {
#if(PDUR_USE_INIT_POINTER == STD_ON)
    PduR_ConfigDataPtr = ConfigPtr;
    if(PduR_ConfigDataPtr == NULL_PTR)
    {
# if(PDUR_USE_ECUM_BSW_ERROR_HOOK == STD_ON)    /* COV_PDUR_VAR_DEPENDENT_SWITCH */
      EcuM_BswErrorHook(PDUR_MODULE_ID, ECUM_BSWERROR_NULLPTR);
# endif
      errorId = PDUR_E_NULL_POINTER;
    }
# if (PDUR_FINALMAGICNUMBER == STD_ON)  /* COV_PDUR_VAR_DEPENDENT_SWITCH */
    else if(PduR_GetFinalMagicNumber() != PDUR_FINAL_MAGIC_NUMBER)
    {
#  if(PDUR_USE_ECUM_BSW_ERROR_HOOK == STD_ON)   /* COV_PDUR_VAR_DEPENDENT_SWITCH */
      EcuM_BswErrorHook(PDUR_MODULE_ID, ECUM_BSWERROR_MAGICNUMBER);
#  endif
      errorId = PDUR_E_INIT_FAILED;
    }
    else
    {
      /* nothing to do */
    }
# endif
#else
    if(ConfigPtr != NULL_PTR)
    {
      errorId = PDUR_E_NULL_POINTER;
    }
#endif
    if(errorId == PDUR_E_NO_ERROR)
    {
#if(PDUR_RPG == STD_ON)
      PduR_Init_RmDestRpgRom();
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
      PduR_RmIf_MultipleSourceHandler_Init();
#endif

      /* Init Buffer manager */
#if(PDUR_BMTXBUFFERRAM == STD_ON)
      PduR_Init_BmTxBufferRam();
#endif
#if(PDUR_BMTXBUFFERINSTANCERAM == STD_ON)
      PduR_Init_BmTxBufferRamInstance();
#endif
/* Init Fifo manager */
#if(PDUR_FMFIFORAM == STD_ON)
      PduR_Init_FmFifoRam();
#endif
#if (PDUR_FMFIFOELEMENTRAM == STD_ON)
      PduR_Init_FmFifoElementRam();
#endif
#if(PDUR_FMFIFOINSTANCERAM == STD_ON)
      PduR_Init_FmFifoInstanceRam();
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
      PduR_Sm_Init();
#endif

#if (PDUR_EXISTS_TP_LOWER_LAYER_DESTLAYERTYPEOFRMGDESTROM == STD_ON)
      PduR_Init_GwTp();
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
      PduR_Bm_TxBufferInstance();
#endif
#if (PDUR_TXMULTI2LOSTATE == STD_ON)
      PduR_RmTp_MultipleSourceHandler_Init();
#endif

#if (PDUR_DEDICATEDTXBUFFEROFRMSRCROM == STD_ON)
      PduR_RmTp_Init_DedicatedTxBuffer();
#endif

#if (PDUR_DEDICATEDTXBUFFEROFRMGDESTROM == STD_ON)
      PduR_RmIf_Init_DedicatedTxBuffer();
#endif

#if(PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
      PduR_RmIf_Init_TTSingleBuffer();
#endif
      PduR_SetInitialized(TRUE);
    }
  }
  /* ----- Development Error Report --------------------------------------- */
#if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_INIT, errorId);
  }
#else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
#endif
}       /* End of PduR_Init() */ /* PRQA S 6050 */ /* MD_MSR_STCAL */

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_BmTxBufferRam
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_BmTxBufferRam(void)
{
  PduR_BmTxBufferRomIterType txBufferStateIdx;
  for(txBufferStateIdx = 0; txBufferStateIdx < PduR_GetSizeOfBmTxBufferRam(); txBufferStateIdx++)
  {
    PduR_SetRxLengthOfBmTxBufferRam(txBufferStateIdx, PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferStateIdx));       /* SBSW_PDUR_CSL01 */
    PduR_SetTpBufMgrStateOfBmTxBufferRam(txBufferStateIdx, PDUR_BUFFER_IDLE_TPBUFMGRSTATEOFBMTXBUFFERRAM);      /* SBSW_PDUR_CSL01 */
    PduR_Bm_ResetTxBuffer(txBufferStateIdx);
  }
}
#endif

#if(PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_BmTxBufferRamInstance
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_BmTxBufferRamInstance(void)
{
  PduR_BmTxBufferRomIterType txBufferState;
  for(txBufferState = 0; txBufferState < PduR_GetSizeOfBmTxBufferRam(); txBufferState++)
  {
    PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx;
    for(bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(txBufferState);
        bmTxBufferInstanceRomIdx < PduR_GetBmTxBufferInstanceRomEndIdxOfBmTxBufferRom(txBufferState); bmTxBufferInstanceRomIdx++)
    {
      PduR_Bm_ResetTxBufferInstance(bmTxBufferInstanceRomIdx);
    }
  }
}
#endif

#if(PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoRam
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoRam(void)
{
  PduR_FmFifoRamIterType fmFifoRamIdx;
  for(fmFifoRamIdx = 0; fmFifoRamIdx < PduR_GetSizeOfFmFifoRam(); fmFifoRamIdx++)
  {
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM);       /* SBSW_PDUR_CSL01 */
    PduR_SetPendingConfirmationsOfFmFifoRam(fmFifoRamIdx, 0);   /* SBSW_PDUR_CSL01 */
    PduR_SetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx, PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRamIdx));        /* SBSW_PDUR_CSL01 */
    PduR_SetFmFifoElementRamWriteIdxOfFmFifoRam(fmFifoRamIdx, PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRamIdx));       /* SBSW_PDUR_CSL01 */
    PduR_SetFillLevelOfFmFifoRam(fmFifoRamIdx, 0);      /* SBSW_PDUR_CSL01 */
  }
}
#endif

#if (PDUR_FMFIFOELEMENTRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoElementRam
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoElementRam(void)
{
  PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
  for(fmFifoElementRamIdx = 0; fmFifoElementRamIdx < PduR_GetSizeOfFmFifoElementRam(); fmFifoElementRamIdx++)
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM); /* SBSW_PDUR_CSL01 */
    PduR_SetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx, (PduR_BmTxBufferRomIterType) PDUR_INVALID_VARARRAYIDX);     /* SBSW_PDUR_CSL01 */
    PduR_SetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamIdx, (PduR_RmSrcRomIterType) PDUR_INVALID_VARARRAYIDX);  /* SBSW_PDUR_CSL01 */
    PduR_SetDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx, FALSE);    /* SBSW_PDUR_CSL01 */
  }
}
#endif

#if(PDUR_FMFIFOINSTANCERAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_FmFifoInstanceRam
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_FmFifoInstanceRam(void)
{
  PduR_FmFifoInstanceRamIterType fmFifoInstanceRamIdx;
  for(fmFifoInstanceRamIdx = 0; fmFifoInstanceRamIdx < PduR_GetSizeOfFmFifoInstanceRam(); fmFifoInstanceRamIdx++)
  {
    PduR_SetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(fmFifoInstanceRamIdx, (PduR_BmTxBufferInstanceRomIterType) PDUR_INVALID_VARARRAYIDX);   /* SBSW_PDUR_CSL01 */
  }
}
#endif

#if(PDUR_RPG == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_RmDestRpgRom
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_RmDestRpgRom(void)
{
  {
    PduR_RmDestRpgRomIterType rmDestRpgRomIdx;
    for(rmDestRpgRomIdx = 0; rmDestRpgRomIdx < PduR_GetSizeOfRmDestRpgRom(); rmDestRpgRomIdx++)
    {
      PduR_SetEnabledCntOfRpgDestState(rmDestRpgRomIdx, PduR_GetInitialEnabledCntOfRmDestRpgRom(rmDestRpgRomIdx));      /* SBSW_PDUR_CSL01 */
    }
  }
  {
    PduR_RpgIterType rpgIdx;
    for(rpgIdx = 0; rpgIdx < PduR_GetSizeOfRpg(); rpgIdx++)
    {
      PduR_SetEnabledOfRpgState(rpgIdx, PduR_IsEnabledAtInitOfRpg(rpgIdx));     /* SBSW_PDUR_CSL01 */
    }
  }
}
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Init
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Init(void)
{
  PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType txIfMulti2LoStateIdx;
  for(txIfMulti2LoStateIdx = 0; txIfMulti2LoStateIdx < PduR_GetSizeOfTxIfMulti2LoState(); txIfMulti2LoStateIdx++)
  {
    PduR_RmIf_MultipleSourceHandler_Reset(txIfMulti2LoStateIdx);
  }
}
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Transmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Transmit(PduIdType txIf2LoMultiIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType txIfMulti2LoStateIdx = PduR_GetTxIfMulti2LoStateIdxOfTxIfMulti2Lo(txIf2LoMultiIdx);
    /* wait for any Tx Confirmation and an other transmission call is pending (e.g. from a upper layer) */
# if (PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIFMULTI2LO == STD_ON)
    if(!PduR_IsTransmissionActiveOfTxIfMulti2LoState(txIfMulti2LoStateIdx))
# endif
    {
      PduR_SetTxIfMulti2LoIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx, txIf2LoMultiIdx);        /* SBSW_PDUR_CSL03 */
      /* first transmission call */
      PduR_SetTransmissionActiveOfTxIfMulti2LoState(txIfMulti2LoStateIdx, TRUE);        /* SBSW_PDUR_CSL03 */
      PduR_SetSrcHndOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_GetSrcHndOfTxIfMulti2Lo(txIf2LoMultiIdx));   /* SBSW_PDUR_CSL03 */
      PduR_SetTxIfMulti2LoSrcModuleIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_GetSrcModuleIdxOfTxIfMulti2Lo(txIf2LoMultiIdx));   /* SBSW_PDUR_CSL03 */
# if (PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIFMULTI2LO == STD_ON)
      PduR_SetCallerNeedsTxConfOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_IsIfTxConfirmationFctPtrUsedOfTxIfMulti2Lo(txIf2LoMultiIdx));     /* SBSW_PDUR_CSL03 */
# endif
# if (PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
      PduR_SetCallerNeedsTriggerTransmitOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_IsIfTriggerTransmitFctPtrUsedOfTxIfMulti2Lo(txIf2LoMultiIdx));   /* SBSW_PDUR_CSL03 */
# endif
      retVal = PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfTxIfMulti2Lo(txIf2LoMultiIdx)) (PduR_GetDestHndOfTxIfMulti2Lo(txIf2LoMultiIdx), info); /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
# if (PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIFMULTI2LO == STD_ON)
      if((retVal != E_OK) || (!PduR_IsCallerNeedsTxConfOfTxIfMulti2LoState(txIfMulti2LoStateIdx)))      /* COV_PDUR_FEATURE_ALWAYS_TRUE */
      {
        PduR_RmIf_MultipleSourceHandler_Reset(txIfMulti2LoStateIdx);
      }
# else
      PduR_RmIf_MultipleSourceHandler_Reset(txIfMulti2LoStateIdx);
# endif
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_TriggerTransmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_TriggerTransmit(PduIdType txIfMulti2LoStateIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    if(PduR_IsCallerNeedsTriggerTransmitOfTxIfMulti2LoState(txIfMulti2LoStateIdx))      /* COV_PDUR_FEATURE_ALWAYS_TRUE */
    {
      /* Call appropriate trigger transmit function */
      retVal = PduR_GetIfTriggerTransmitFctPtr(PduR_GetIfTriggerTransmitFctPtrIdxOfTxIfMulti2Lo(PduR_GetTxIfMulti2LoIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx))) (PduR_GetSrcHndOfTxIfMulti2LoState(txIfMulti2LoStateIdx), info);     /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
    }
    else
    {
      PduR_Det_ReportError(PDUR_GWIF_MULTIPLESOURCEHANDLER_TRIGGERTRANSMIT, PDUR_E_UNEXPECTED_CALL);
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_CANCELTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_CancelTransmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_CancelTransmit(PduIdType txIfMulti2LoIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    /* get default or the entered multi Idx */
    PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType txIfMulti2LoStateIdx = PduR_GetTxIfMulti2LoStateIdxOfTxIfMulti2Lo(txIfMulti2LoIdx);
    if(PduR_IsCancelTransmitFctPtrUsedOfTxIfMulti2Lo(txIfMulti2LoIdx))  /* COV_PDUR_FEATURE_ALWAYS_TRUE */
    {
      if((PduR_IsTransmissionActiveOfTxIfMulti2LoState(txIfMulti2LoStateIdx)) && ((PduR_GetSrcHndOfTxIfMulti2Lo(txIfMulti2LoIdx) == PduR_GetSrcHndOfTxIfMulti2LoState(txIfMulti2LoStateIdx)) && (PduR_GetSrcModuleIdxOfTxIfMulti2Lo(txIfMulti2LoIdx) == PduR_GetTxIfMulti2LoSrcModuleIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx))))    /* COV_PDUR_CONDITIONAL_DEPENDENCE */
      {
        /* Cancel Transmission */
        retVal = PduR_GetCancelTransmitFctPtr(PduR_GetCancelTransmitFctPtrIdxOfTxIfMulti2Lo(txIfMulti2LoIdx)) (PduR_GetDestHndOfTxIfMulti2Lo(txIfMulti2LoIdx)); /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      }
      else
      {
        PduR_Det_ReportError(PDUR_GWIF_MULTIPLESOURCEHANDLER_CANCELTRANSMIT, PDUR_E_UNEXPECTED_CALL);
      }
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_TxConfirmation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_TxConfirmation(PduIdType txIfMulti2LoStateIdx)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    if(PduR_IsCallerNeedsTxConfOfTxIfMulti2LoState(txIfMulti2LoStateIdx))       /* COV_PDUR_FEATURE_ALWAYS_TRUE */
    {
      PduR_SrcHndOfTxIfMulti2LoStateType srcHnd = PduR_GetSrcHndOfTxIfMulti2LoState(txIfMulti2LoStateIdx);
      PduR_IfTxConfirmationFctPtrIdxOfTxIfMulti2LoType ifTxConfirmationId = PduR_GetIfTxConfirmationFctPtrIdxOfTxIfMulti2Lo(PduR_GetTxIfMulti2LoIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx));
      PduR_RmIf_MultipleSourceHandler_Reset((PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType) txIfMulti2LoStateIdx);
      /* Call appropriate confirmation function */
      PduR_GetIfTxConfirmationFctPtr(ifTxConfirmationId) (srcHnd);      /* SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY */
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if (PDUR_TXIFMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Reset
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_Reset(PduR_TxIfMulti2LoStateIdxOfTxIfMulti2LoType txIfMulti2LoStateIdx)
{
  PduR_SetTransmissionActiveOfTxIfMulti2LoState(txIfMulti2LoStateIdx, FALSE);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxIfMulti2LoIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_GetSizeOfTxIfMulti2Lo());       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxIfMulti2LoSrcModuleIdxOfTxIfMulti2LoState(txIfMulti2LoStateIdx, PduR_GetSizeOfTxIfMulti2Lo());      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetSrcHndOfTxIfMulti2LoState(txIfMulti2LoStateIdx, (PduR_SrcHndOfTxIfMulti2LoStateType) PduR_GetSizeOfTxIfMulti2LoState());      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
# if (PDUR_IFTXCONFIRMATIONFCTPTRUSEDOFTXIFMULTI2LO == STD_ON)
  PduR_SetCallerNeedsTxConfOfTxIfMulti2LoState(txIfMulti2LoStateIdx, FALSE);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
# endif
# if (PDUR_IFTRIGGERTRANSMITFCTPTRIDXOFTXIFMULTI2LO == STD_ON)
  PduR_SetCallerNeedsTriggerTransmitOfTxIfMulti2LoState(txIfMulti2LoStateIdx, FALSE);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
# endif
}
#endif

#if ((PDUR_TXIFMULTI2LO) == STD_ON && ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)))
/**********************************************************************************************************************
 * PduR_RmIf_MultipleSourceHandler_Reset
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_MultipleSourceHandler_CheckReset(PduR_RmGDestRomIterType rmGDest)
{
  if(PduR_IsIf2LoMultiRoutingOfRmGDestRom(rmGDest))     /* COV_PDUR_FEATURE_ALWAYS_TRUE */
  {
    PduR_RmIf_MultipleSourceHandler_Reset(PduR_GetTxIfMulti2LoStateIdxOfTxIfMulti2Lo(PduR_GetDestHndOfRmGDestRom(rmGDest)));
  }
}
#endif

#if (PDUR_EXISTS_TP_LOWER_LAYER_DESTLAYERTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Init_GwTp
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Init_GwTp(void)
{
  {
    PduR_RmGDestRomIterType rmGDestRamTpIdx;
    for(rmGDestRamTpIdx = 0; rmGDestRamTpIdx < PduR_GetSizeOfRmGDestRam(); rmGDestRamTpIdx++)
    {
      PduR_SetTpTxInstSmStateOfRmGDestRam(rmGDestRamTpIdx, PDUR_RM_TXINST_IDLE_TPTXINSTSMSTATEOFRMGDESTRAM);    /* SBSW_PDUR_CSL01 */
    }
  }
  {
    PduR_RmSrcRomIterType rmSrcIdx;
    for(rmSrcIdx = 0; rmSrcIdx < PduR_GetSizeOfRmSrcRam(); rmSrcIdx++)
    {
      PduR_SetTpRxSmStateOfRmSrcRam(rmSrcIdx, PDUR_RM_RX_IDLE_TPRXSMSTATEOFRMSRCRAM);   /* SBSW_PDUR_CSL01 */
      PduR_SetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx, (PduR_FmFifoElementRamIterType) PDUR_INVALID_VARARRAYIDX);   /* SBSW_PDUR_CSL01 */
    }
  }
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
  PduR_Bm_TxBufferInstance
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_TxBufferInstance(void)
{
  PduR_BmTxBufferRomIterType txBufferElementState;
  for(txBufferElementState = 0; txBufferElementState < PduR_GetSizeOfBmTxBufferRam(); txBufferElementState++)
  {
    PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx;
    for(bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(txBufferElementState);
        bmTxBufferInstanceRomIdx < PduR_GetBmTxBufferInstanceRomEndIdxOfBmTxBufferRom(txBufferElementState); bmTxBufferInstanceRomIdx++)
    {
      PduR_Bm_ResetTxBufferInstance(bmTxBufferInstanceRomIdx);
    }
  }
}
#endif

#if (PDUR_TXMULTI2LOSTATE == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_Init
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Init(void)
{
  PduR_TxMulti2LoStateIdxOfTxMulti2LoType txMulti2LoStateIdx;
  for(txMulti2LoStateIdx = 0; txMulti2LoStateIdx < PduR_GetSizeOfTxMulti2LoState(); txMulti2LoStateIdx++)
  {
    PduR_RmTp_MultipleSourceHandler_Reset(txMulti2LoStateIdx);
  }
}
#endif

/**********************************************************************************************************************
 * PduR_InitMemory
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_InitMemory(void)
{
  PduR_SetInitialized(FALSE);
#if(PDUR_USE_INIT_POINTER == STD_ON)
  PduR_ConfigDataPtr = NULL_PTR;
#endif
}       /* End of PduR_InitMemory() */

#if(PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_SingleBufferHandling
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_SingleBufferHandling(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                  P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) destPduInfo)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDest));
  PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
  PduR_Fm_FlushFiFo(rmGDest);
  PduR_SetPduRFiFoRoutingStateOfRmGDestRam(rmGDest, PDUR_WAIT_FOR_RXINDICATION_PDURFIFOROUTINGSTATEOFRMGDESTRAM);       /* SBSW_PDUR_CSL03 */
  if(PduR_Fm_AllocateFifoElement(fmFifoRomIdx, &fmFifoElementRamIdx) == E_OK)   /* SBSW_PDUR_STACK_VARIABLE */ /* COV_PDUR_FATAL_ERROR */
  {
    PduLengthType bufferSizePtr = 0;
    if(PduR_Bm_AllocateTxBuffer(PduR_GetBmTxBufferIndRomStartIdxOfRmGDestRom(rmGDest), PduR_GetBmTxBufferIndRomEndIdxOfRmGDestRom(rmGDest), fmFifoElementRamIdx, info->SduLength, &bufferSizePtr) == BUFREQ_OK) /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */ /* COV_PDUR_FATAL_ERROR */
    {
      PduR_RmIf_CopyRxData(fmFifoElementRamIdx, destPduInfo->SduLength, destPduInfo->SduDataPtr);       /* SBSW_PDUR_STACK_VARIABLE */
      PduR_RmIf_TransmitPreparation(rmGDest, fmFifoElementRamIdx);
      if(E_OK != PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmGDestRom(rmGDest)) (PduR_GetDestHndOfRmGDestRom(rmGDest), destPduInfo))    /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      {
        PduR_Det_ReportError(PDUR_GWIF_SINGLEBUFFERHANDLING, PDUR_E_PDU_INSTANCES_LOST);
      }
    }
    else
    {
      PduR_Det_ReportError(PDUR_GWIF_SINGLEBUFFERHANDLING, PDUR_E_FATAL);
    }
  }
  else
  {
    PduR_Det_ReportError(PDUR_GWIF_SINGLEBUFFERHANDLING, PDUR_E_FATAL);
  }
}
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_FifoHandling
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_FifoHandling(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  if(PduR_GetPduRFiFoRoutingStateOfRmGDestRam(rmGDest) == PDUR_WAIT_FOR_RXINDICATION_PDURFIFOROUTINGSTATEOFRMGDESTRAM)
  {
    PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
    if(PduR_RmIf_FiFoDataProcessing(rmGDest, &fmFifoElementRamIdx, info->SduLength, info->SduDataPtr) == E_OK)  /* SBSW_PDUR_STACK_VARIABLE */
    {
      PduR_RmIf_TransmitPreparation(rmGDest, fmFifoElementRamIdx);
      if(E_OK != PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmGDestRom(rmGDest)) (PduR_GetDestHndOfRmGDestRom(rmGDest), info))   /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      {
        PduR_Fm_FlushFiFo(rmGDest);
        PduR_Det_ReportError(PDUR_FCT_GWIF_FQ, PDUR_E_PDU_INSTANCES_LOST);
      }
    }
  }
  else
  {
    PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
    if(PduR_RmIf_FiFoDataProcessing(rmGDest, &fmFifoElementRamIdx, info->SduLength, info->SduDataPtr) != E_OK)  /* SBSW_PDUR_STACK_VARIABLE */
    {
      PduR_Fm_FlushFiFo(rmGDest);
      PduR_Det_ReportError(PDUR_FCT_GWIF_FQ, PDUR_E_PDU_INSTANCES_LOST);
# if (PDUR_TXIFMULTI2LO == STD_ON)
      PduR_RmIf_MultipleSourceHandler_CheckReset(rmGDest);
# endif
# if (PDUR_ERROR_NOTIFICATION == STD_ON)        /* COV_PDUR_ERROR_NOTIFICATION */
      ErrorNotificationQueueOverflow(PduR_GetDestHndOfRmGDestRom(rmGDest));
# endif
      if(PduR_RmIf_FiFoDataProcessing(rmGDest, &fmFifoElementRamIdx, info->SduLength, info->SduDataPtr) == E_OK)        /* SBSW_PDUR_STACK_VARIABLE */
      {
        PduR_RmIf_TransmitPreparation(rmGDest, fmFifoElementRamIdx);
        if(E_OK != PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmGDestRom(rmGDest)) (PduR_GetDestHndOfRmGDestRom(rmGDest), info)) /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
        {
          PduR_Fm_FlushFiFo(rmGDest);
        }
      }
    }
  }
}
#endif

/**********************************************************************************************************************
 * PduR_RmIf_FiFoDataProcessing
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_FiFoDataProcessing(PduR_RmGDestRomIterType rmGDest, PduR_FmFifoElementRamIterType * fmFifoElementRamIdx,
                                                                          PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr)
{
  Std_ReturnType retVal = E_NOT_OK;
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDest));
  if(PduR_Fm_AllocateFifoElement(fmFifoRomIdx, fmFifoElementRamIdx) == E_OK)    /* SBSW_PDUR_STACK_VARIABLE */
  {
    PduLengthType bufferSizePtr = 0;
    if(PduR_Bm_AllocateTxBuffer(PduR_GetBmTxBufferIndRomStartIdxOfRmGDestRom(rmGDest), PduR_GetBmTxBufferIndRomEndIdxOfRmGDestRom(rmGDest), *fmFifoElementRamIdx, pduLength, &bufferSizePtr) == BUFREQ_OK)      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    {
      PduR_SetStateOfFmFifoElementRam(*fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);     /* SBSW_PDUR_CSL01 */
      PduR_RmIf_CopyRxData(*fmFifoElementRamIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_STACK_VARIABLE */
      retVal = E_OK;
    }
    else
    {
      PduR_Fm_FreeFifoElement(fmFifoRomIdx, *fmFifoElementRamIdx);
    }
  }
  return retVal;
}
#endif

#if(PDUR_EXISTS_NO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_RxIndicationNoBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationNoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_RmGDestRomIterType rmGDest = (PduR_RmGDestRomIterType) id;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(E_OK != PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmGDestRom(rmGDest)) (PduR_GetDestHndOfRmGDestRom(rmGDest), info))       /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
  {
    PduR_Det_ReportError(PDUR_FCT_GWIF_FQ, PDUR_E_PDU_INSTANCES_LOST);
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if(PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_RxIndicationTTSingleBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationTTSingleBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_RmGDestRomIterType rmGDest = (PduR_RmGDestRomIterType) id;
  PduInfoType destPduInfo;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  destPduInfo.SduDataPtr = info->SduDataPtr;
  destPduInfo.SduLength = PduR_RmIf_CalcDlc(rmGDest, info);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_RmIf_SingleBufferHandling(rmGDest, info, &destPduInfo);  /* SBSW_PDUR_STACK_VARIABLE */
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if(PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
 /**********************************************************************************************************************
 * PduR_RmIf_RxIndicationTTFifoBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationTTFifoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_RmGDestRomIterType rmGDest = (PduR_RmGDestRomIterType) id;
  PduInfoType destPduInfo;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  destPduInfo.SduDataPtr = info->SduDataPtr;
  destPduInfo.SduLength = PduR_RmIf_CalcDlc(rmGDest, info);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_RmIf_FifoHandling(rmGDest, &destPduInfo);        /* SBSW_PDUR_STACK_VARIABLE */
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if(PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmIf_RxIndicationDirectFifoBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_RxIndicationDirectFifoBuffer(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_RmGDestRomIterType rmGDest = (PduR_RmGDestRomIterType) id;
  PduInfoType destPduInfo;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  destPduInfo.SduDataPtr = info->SduDataPtr;
  destPduInfo.SduLength = PduR_RmIf_CalcDlc(rmGDest, info);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_RmIf_FifoHandling(rmGDest, &destPduInfo);        /* SBSW_PDUR_STACK_VARIABLE */
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
 /**********************************************************************************************************************
 * PduR_RmIf_CopyRxData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_CopyRxData(PduR_FmFifoElementRamIterType fmFifoElementRamIdx, PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr)
{
  PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx);
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);  /* SBSW_PDUR_CSL01 */
  PduR_GetFctPtrOfTpActivateWriteFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx);  /* SBSW_PDUR_CSL03 */
  (void) PduR_Bm_PutData(bmTxBufferRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_STACK_VARIABLE */
  PduR_GetFctPtrOfFinishWriteFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx, E_OK);  /* SBSW_PDUR_CSL03 */
}
#endif

#if((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
 /**********************************************************************************************************************
 * PduR_RmIf_TransmitPreparation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_TransmitPreparation(PduR_RmGDestRomIterType rmGDest, PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx);
  PduR_SetPduRFiFoRoutingStateOfRmGDestRam(rmGDest, PduR_GetNextState_For_Wait_For_RxIndicationOfIfRoutingStateTable(PduR_GetFifoTypeOfRmGDestRom(rmGDest)));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_RmIf_AssignAssociatedBuffer2Destination(bmTxBufferRomIdx, rmGDest);
  PduR_GetFctPtrOfTpActivateReadFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx);   /* SBSW_PDUR_CSL03 */
}
#endif

#if((PDUR_EXISTS_NO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON ) ||(PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_RxIndication_MultiIf
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_RxIndication_MultiIf(PduIdType RxPduId, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* ----- Local Variables ---------------------------------------------- */
  uint8 errorId = PDUR_E_NO_ERROR;

  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  /* Check parameter 'info' */
  if(info == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if(info->SduDataPtr == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    PduR_RmSrcRomIterType rmSrcIdx = (PduR_RmSrcRomIterType) RxPduId;
    PduR_RmDestRomIterType rmDestIdx;

# if (PDUR_SMSRCFILTERFCTPTRUSEDOFRMSRCROM == STD_ON)
    if(PduR_IsSmSrcRomUsedOfRmSrcRom(rmSrcIdx))
    {
      PduR_SmSrcRomIterType smSrcRomIdx = (PduR_SmSrcRomIterType) PduR_GetSmSrcRomIdxOfRmSrcRom(rmSrcIdx);
      PduR_GetSmSrcFilterFctPtr(PduR_GetSmSrcFilterFctPtrIdxOfRmSrcRom(rmSrcIdx)) (smSrcRomIdx, info);  /* SBSW_PDUR_CSL03 */
    }
# endif
    for(rmDestIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestIdx++)
    {
# if (PDUR_RMDESTRPGROMIDXOFRMDESTROM == STD_ON)
      if((!PduR_IsRmDestRpgRomUsedOfRmDestRom(rmDestIdx)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfRmDestRom(rmDestIdx))))    /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
      {
        PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestIdx);
# if (PDUR_SMGDESTFILTERFCTPTRUSEDOFRMGDESTROM == STD_ON)
        PduR_FilterReturnType filterResult = PDUR_FILTER_PASS;
        if(PduR_IsSmGDestFilterFctPtrUsedOfRmGDestRom(rmGDestRomIdx))
        {
          PduR_SmGDestRomIterType smGDestRomIdx = (PduR_SmGDestRomIterType) PduR_GetSmGDestRomIdxOfRmGDestRom(rmGDestRomIdx);
          filterResult = PduR_GetSmGDestFilterFctPtr(PduR_GetSmGDestFilterFctPtrIdxOfRmGDestRom(rmGDestRomIdx)) (smGDestRomIdx, info);  /* SBSW_PDUR_CSL03 */
        }
        if(filterResult == PDUR_FILTER_PASS)
# endif
        {
# if (PDUR_IFRXINDICATIONFCTPTRIDXOFRMGDESTROM == STD_ON)
          if(PduR_GetDestLayerTypeOfRmGDestRom(rmGDestRomIdx) == PDUR_IF_UPPER_LAYER_DESTLAYERTYPEOFRMGDESTROM)
          {
            PduR_GetIfRxIndicationFctPtr(PduR_GetIfRxIndicationFctPtrIdxOfRmGDestRom(rmGDestRomIdx)) (PduR_GetDestHndOfRmGDestRom(rmGDestRomIdx), info);        /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
          }
          else
# endif
          {
            PduR_GetRmIfRxIndicationFctPtr(PduR_GetRmIfRxIndicationFctPtrIdxOfRmGDestRom(rmGDestRomIdx)) ((PduIdType) rmGDestRomIdx, info);     /* SBSW_PDUR_CSL03 */
          }
        }
      }
    }
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_MULTIIFRXIND, errorId);
  }
# endif
  PDUR_DUMMY_STATEMENT(RxPduId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_TriggerTransmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_PduR_3673_AsrProto */
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmIf_TriggerTransmit(PduIdType TxPduId, CONSTP2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  /* Check parameter 'info' */
  if(info == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if(info->SduDataPtr == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else
# endif
  {
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(TxPduId));
      if(info->SduLength >= PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
      {
        PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
        info->SduLength = (PduLengthType) PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
        PduR_Bm_ReadData(bmTxBufferRomIdx, info->SduLength, info->SduDataPtr);  /* SBSW_PDUR_STACK_VARIABLE */

# if (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
        if(PduR_GetPduRFiFoRoutingStateOfRmGDestRam(TxPduId) == PDUR_WAIT_FOR_TRIGGERTRANSMIT_PDURFIFOROUTINGSTATEOFRMGDESTRAM)
# endif
        {
          /* The Queue is not empty in this states return E_OK */
          PduR_SetPduRFiFoRoutingStateOfRmGDestRam(TxPduId, PduR_GetNextState_For_Wait_For_TriggerTransmitOfIfRoutingStateTable(PduR_GetFifoTypeOfRmGDestRom(TxPduId)));        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
          retVal = E_OK;
        }
# if (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON)
        else
        {
          PduR_Fm_FlushFiFo(TxPduId);
#  if (PDUR_TXIFMULTI2LO == STD_ON)
          PduR_RmIf_MultipleSourceHandler_CheckReset(TxPduId);
#  endif
        }
# endif
      }
    }
    SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();     /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_GWIF_TXTT, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
  return retVal;
}       /* End of PduR_RmIf_TriggerTransmit */
#endif
#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_TxConfirmation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmIf_TxConfirmation(PduIdType TxPduId)
{
  /* ----- Implementation ----------------------------------------------- */
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    PduR_RmGDestRomIterType rmGDestRomIdx = (PduR_RmGDestRomIterType) TxPduId;
    if(PduR_GetPduRFiFoRoutingStateOfRmGDestRam(rmGDestRomIdx) == PDUR_WAIT_FOR_TXCONFIRMATION_PDURFIFOROUTINGSTATEOFRMGDESTRAM)
    {
      PduR_FmFifoInstanceRamIterType fmFifoRomInstanceIdx = PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx);

      PduR_FmFifoRamIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(fmFifoRomInstanceIdx);
      PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
      PduR_FmFifoElementRamIterType peekedfmFifoElementRamTPReadIdx;
      PduR_GetFctPtrOfFinishReadFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx, E_OK);   /* SBSW_PDUR_CSL03 */
      PduR_Bm_ResetTxBufferInstance(PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx)));
      PduR_SetPduRFiFoRoutingStateOfRmGDestRam(rmGDestRomIdx, PduR_GetNextState_For_Init_If_Routing_StateOfIfRoutingStateTable(PduR_GetFifoTypeOfRmGDestRom(rmGDestRomIdx)));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
      if(PduR_Fm_Peek(fmFifoRomIdx, &peekedfmFifoElementRamTPReadIdx) == E_OK)  /* SBSW_PDUR_STACK_VARIABLE */
      {
        PduInfoType destPduInfo;
        PduR_BmTxBufferRomIterType bmTxBufferRom = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(peekedfmFifoElementRamTPReadIdx);
        destPduInfo.SduDataPtr = PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRom));
        destPduInfo.SduLength = (PduLengthType) PduR_GetLinearDataSizeOfBmTxBufferRam(bmTxBufferRom);
        PduR_RmIf_TransmitPreparation(rmGDestRomIdx, peekedfmFifoElementRamTPReadIdx);
        if(E_OK != PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmGDestRom(rmGDestRomIdx)) (PduR_GetDestHndOfRmGDestRom(rmGDestRomIdx), &destPduInfo))     /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
        {
          PduR_Fm_FlushFiFo(rmGDestRomIdx);
          PduR_Det_ReportError(PDUR_FCT_GWIF_FQ, PDUR_E_PDU_INSTANCES_LOST);
# if (PDUR_TXIFMULTI2LO == STD_ON)
          PduR_RmIf_MultipleSourceHandler_CheckReset(rmGDestRomIdx);
# endif
        }
      }
    }
    else
    {
      PduR_Fm_FlushFiFo(rmGDestRomIdx);
# if (PDUR_TXIFMULTI2LO == STD_ON)
      PduR_RmIf_MultipleSourceHandler_CheckReset(rmGDestRomIdx);
# endif
      PduR_Det_ReportError(PDUR_FCT_GWIF_FQ, PDUR_E_PDU_INSTANCES_LOST);
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}       /* PRQA S 6050 */ /* MD_MSR_STCAL */
/* End of PduR_RmIf_TxConfirmation() */
#endif

#if((PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_CalcDlc
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(PduLengthType, PDUR_CODE) PduR_RmIf_CalcDlc(PduR_RmGDestRomIterType rmGDest, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  /* if the length is shorter or equal use the provided length */
  PduLengthType dataLengthcopy = info->SduLength;
  /* MaxPduLength of no buffer routings is set to the maximum allowed value for this datatype, thus disabling this check */
  if(info->SduLength > PduR_GetMaxPduLengthOfRmGDestRom(rmGDest))
  {
    /* if the provided length is greater than the maximum buffer size the value is truncated to this value. */
    dataLengthcopy = PduR_GetMaxPduLengthOfRmGDestRom(rmGDest);
  }
  PDUR_DUMMY_STATEMENT(rmGDest);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return dataLengthcopy;
}
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFo
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFo(PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_FmFifoElementRamIterType fmFifoElementRamIdx;
  for(fmFifoElementRamIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx); fmFifoElementRamIdx < PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRomIdx); fmFifoElementRamIdx++)
  {
    PduR_GetFctPtrOfFmFlushFifoElement(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx);     /* SBSW_PDUR_CSL01 */
  }
  PduR_SetPduRFiFoRoutingStateOfRmGDestRam(rmGDestRomIdx, PduR_GetNextState_For_Init_If_Routing_StateOfIfRoutingStateTable(PduR_GetFifoTypeOfRmGDestRom(rmGDestRomIdx)));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetFillLevelOfFmFifoRam(fmFifoRomIdx, 0);        /* SBSW_PDUR_CSL01 */
  PduR_SetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx, PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx));  /* SBSW_PDUR_CSL01 */
  PduR_SetFmFifoElementRamWriteIdxOfFmFifoRam(fmFifoRomIdx, PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRomIdx)); /* SBSW_PDUR_CSL01 */
}
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_ReadActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_ReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx);
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(bmTxBufferRomIdx);
  PduR_Fm_ReleaseFifoElement(fmFifoElementRamIdx);
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx))
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);        /* SBSW_PDUR_CSL01 */
  }
  else
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM); /* SBSW_PDUR_CSL01 */
    PduR_Fm_DissolveFifoElementTxBufferRelation(fmFifoElementRamIdx);
  }
  PduR_Bm_ReleaseTxBuffer(bmTxBufferRomIdx);
  PduR_Bm_ResetTxBufferInstance(bmTxBufferInstanceRomIdx);
}
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_ReadInActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_ReadInActive(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx);
  PduR_Fm_ReleaseFifoElement(fmFifoElementRamIdx);
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx))
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);        /* SBSW_PDUR_CSL01 */
  }
  else
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM); /* SBSW_PDUR_CSL01 */
    PduR_Fm_DissolveFifoElementTxBufferRelation(fmFifoElementRamIdx);
  }
  PduR_Bm_ReleaseTxBuffer(bmTxBufferRomIdx);
}
#endif

#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_FlushFiFoElement_ReadInActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FlushFiFoElement_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PDUR_DUMMY_STATEMENT(fmFifoElementRamIdx);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_STARTOFRECEPTIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_StartOfReception
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 3 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_StartOfReception(PduIdType rmSrcIdx,
                                                              P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                              PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  /* ----- Local Variables ---------------------------------------------- */
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  uint8 errorId = PDUR_E_NO_ERROR;

# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  /* Check parameter bufferSizePtr */
  if(bufferSizePtr == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
#  if (PDUR_METADATA_SUPPORT == STD_ON)
  else if((PduR_IsMetaDataLengthUsedOfRmSrcRom(rmSrcIdx)) && ((info == NULL_PTR) || (info->SduDataPtr == NULL_PTR) || (info->SduLength < (PduLengthType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx))))  /* COV_PDUR_FEATURE_ALWAYS_TRUE */
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
#  endif
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      /* Handle src instance routing state */
      PduR_TpRxSmStateOfRmSrcRamType tpRxSmState = PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx);     /* SBSW_PDUR_CSL03 */
      /** Guard/Action: enqueue meta data **/
      retVal = PduR_GetFctPtrOfStartOfReceptionRxSmTransition(tpRxSmState) ((PduR_RmSrcRomIterType) rmSrcIdx, info, TpSduLength, bufferSizePtr);        /* SBSW_PDUR_CSL03 */
    }
    SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();     /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_GWTP_SORX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
  return retVal;
}
#endif

#if (PDUR_METADATA_SUPPORT == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_StartOfReceptionQueueMetaData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_StartOfReceptionQueueMetaData(PduR_RmSrcRomIterType rmSrcIdx,
                                                                                        PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                        SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  BufReq_ReturnType retVal;
  PduR_BmTxBufferArrayRamIterType metadataStartPosition = pduLength - (PduR_BmTxBufferArrayRamIterType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx);
  /* Metadata is appended after the payload data */
  /* Length information is used to enqueue the MetaData */
  pduLength = (PduR_BmTxBufferArrayRamIterType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx);
  /* enqueue data will never fail in this context because the buffer is always empty */
  retVal = PduR_Bm_PutData((PduR_BmTxBufferRomIterType) bmTxBufferRomIdx, pduLength, &sduDataPtr[metadataStartPosition]);       /* SBSW_PDUR_STACK_VARIABLE */
  *bufferSizePtr = (PduLengthType) PduR_GetTotalBufferSizeOfBmTxBufferRam(bmTxBufferRomIdx);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  return retVal;
}
#endif
#if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_CopyRxData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 2 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_CopyRxData(PduIdType rmSrcIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;

  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */

  /* Check parameter 'info' */
  if(info == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if((info->SduLength > 0) && (info->SduDataPtr == NULL_PTR))
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if(bufferSizePtr == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      /* Handle src instance routing state */
      retVal = PduR_GetFctPtrOfCopyRxDataRxSmTransition(PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx)) ((PduR_RmSrcRomIterType) rmSrcIdx, info->SduLength, info->SduDataPtr, bufferSizePtr);  /* SBSW_PDUR_CSL03 */
    }
    SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();     /* PRQA S 3109 */ /* MD_MSR_14.3 */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_GWTP_CPYRX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
  return retVal;
}       /* PRQA S 6080, 6030, 6050 */ /* MD_MSR_STMIF, MD_MSR_STCYC, MD_MSR_STCAL */
#endif

#if ((PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON) || (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_RmTp_AssignAssociatedBuffer2Destination
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_BmTxBufferRomIterType bmTxBufferRomIdx, PduR_RmSrcRomIterType rmSrcIdx)
{
  PduR_RmDestRomStartIdxOfRmSrcRomType rmDestRomIdx;
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = (PduR_BmTxBufferInstanceRomIterType) PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(bmTxBufferRomIdx);
  for(rmDestRomIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx++)
  {
    PduR_RmGDestRomIdxOfRmDestRomType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestRomIdx);
    if(bmTxBufferInstanceRomIdx >= PduR_GetBmTxBufferInstanceRomEndIdxOfBmTxBufferRom(bmTxBufferRomIdx))        /* COV_PDUR_FATAL_ERROR */
    {
      PduR_Det_ReportError(PDUR_GWTP_ASSIGNASSOCIATEDBUFFER2DESTINATION, PDUR_E_FATAL);
    }
    PduR_SetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx), bmTxBufferInstanceRomIdx);     /* SBSW_PDUR_CSL03 */
    PduR_SetTxBufferUsedOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, TRUE);        /* SBSW_PDUR_CSL03 */
    PduR_RmInit_BmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, bmTxBufferRomIdx);
    bmTxBufferInstanceRomIdx++;
  }
  PduR_SetInstanceStopIdxOfBmTxBufferRam(bmTxBufferRomIdx, bmTxBufferInstanceRomIdx);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif
#if ((PDUR_EXISTS_T_T_SINGLE_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmIf_AssignAssociatedBuffer2Destination
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmIf_AssignAssociatedBuffer2Destination(PduR_BmTxBufferRomIterType bmTxBufferRomIdx, PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = (PduR_BmTxBufferInstanceRomIterType) PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(bmTxBufferRomIdx);

  PduR_SetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx), bmTxBufferInstanceRomIdx);       /* SBSW_PDUR_CSL03 */
  PduR_SetTxBufferUsedOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, TRUE);  /* SBSW_PDUR_CSL03 */
  PduR_RmInit_BmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, bmTxBufferRomIdx);

  bmTxBufferInstanceRomIdx++;
  if(bmTxBufferInstanceRomIdx > PduR_GetBmTxBufferInstanceRomEndIdxOfBmTxBufferRom(bmTxBufferRomIdx))   /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_GWTP_ASSIGNASSOCIATEDBUFFER2DESTINATION, PDUR_E_FATAL);
  }
  PduR_SetInstanceStopIdxOfBmTxBufferRam(bmTxBufferRomIdx, bmTxBufferInstanceRomIdx);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_RmInit_BmTxBufferInstanceRam
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmInit_BmTxBufferInstanceRam(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferRomIterType bmTxBufferRomIdx)
{
  PduR_SetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRomIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetRxWriteIdxOfBmTxBufferRam(bmTxBufferRomIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetLinearBufferSizeOfBmTxBufferRam(bmTxBufferRomIdx)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetTotalBufferSizeOfBmTxBufferRam(bmTxBufferRomIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetTotalDataSizeOfBmTxBufferRam(bmTxBufferRomIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetLinearDataSizeOfBmTxBufferRam(bmTxBufferRomIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetPduRBufferStateOfBmTxBufferRam(bmTxBufferRomIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if ((PDUR_STARTOFRECEPTIONFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_COPYRXDATAFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_TPRXINDICATIONFCTPTRIDXOFRMDESTROM == STD_ON))
/**********************************************************************************************************************
 * PduR_RmTp_UpTransmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_UpTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestTpIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  BufReq_ReturnType retValBufReq;
  PduLengthType bufferSizePtr = 0;
  /* Forwarding to an upper layer module */
  PduR_RmGDestRomIdxOfRmDestRomType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestTpIdx);
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  /* Get the related BmTxBufferTP */
  PduR_BmTxBufferRomIterType txBufferElementStateIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
  /* If MetaData are available the pUpperLayerInfo points to MetaData */
  {
# if (PDUR_METADATA_SUPPORT == STD_ON )
    if(PduR_IsMetaDataLengthUsedOfRmSrcRom(rmSrcIdx))
    {
      PduInfoType metaInfo;
      PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
      PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx);
      PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx);
      metaInfo.SduDataPtr = PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRomIdx));
      metaInfo.SduLength = (PduLengthType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx);
      /* if MetaData are used they are always available ignore */
      (void) PduR_Bm_GetData(bmTxBufferInstanceRomIdx, (PduR_BmTxBufferArrayRamIterType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx), PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRomIdx)));       /* SBSW_PDUR_STACK_VARIABLE */
      retValBufReq = PduR_GetStartOfReceptionFctPtr(PduR_GetStartOfReceptionFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), &metaInfo, (PduLengthType) PduR_GetRxLengthOfBmTxBufferRam(txBufferElementStateIdx), &bufferSizePtr);  /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
    }
    else
# endif
    {
      retValBufReq = PduR_GetStartOfReceptionFctPtr(PduR_GetStartOfReceptionFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), NULL_PTR, (PduLengthType) PduR_GetRxLengthOfBmTxBufferRam(txBufferElementStateIdx), &bufferSizePtr);   /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
    }
  }
  if(retValBufReq == BUFREQ_OK)
  {
    /* RfC 52242 - Transport Protocol Gateway Reception to upper layer modules is not functional */
    /* \trace SPEC-2020098 */
    if(bufferSizePtr < PduR_GetRxLengthOfBmTxBufferRam(txBufferElementStateIdx))
    {
      PduR_GetTpRxIndicationFctPtr(PduR_GetTpRxIndicationFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), E_NOT_OK);        /* SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY */
    }
    else
    {
      PduInfoType info;
      info.SduDataPtr = PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx));     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      info.SduLength = (PduLengthType) PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

      if(BUFREQ_OK == PduR_GetCopyRxDataFctPtr(PduR_GetCopyRxDataFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), &info, &bufferSizePtr))   /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      {
        PduR_GetTpRxIndicationFctPtr(PduR_GetTpRxIndicationFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), E_OK);  /* SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY */
        retVal = E_OK;
      }
      else      /* \trace SPEC-2020102 */
      {
        PduR_GetTpRxIndicationFctPtr(PduR_GetTpRxIndicationFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), E_NOT_OK);      /* SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY */
      }
    }
  }
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return retVal;
}
#endif
#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_LoTransmit
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_LoTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestTpIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestTpIdx);
  if(PduR_IsTransmitFctPtrUsedOfRmDestRom(rmDestTpIdx)) /* COV_PDUR_FEATURE_ALWAYS_TRUE */
  {
    PduInfoType info;
    PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
    PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx);
    PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx);
    info.SduDataPtr = PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRomIdx));
    info.SduLength = (PduLengthType) PduR_GetRxLengthOfBmTxBufferRam(bmTxBufferRomIdx);
# if (PDUR_METADATA_SUPPORT == STD_ON)
    if(PduR_IsMetaDataLengthUsedOfRmSrcRom(rmSrcIdx))
    {
      PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
      /* Set Meta data length to copy */
      PduR_BmTxBufferArrayRamIterType pduLength = (PduR_BmTxBufferArrayRamIterType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx);
      SduDataPtrType sduDataPtr = PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(bmTxBufferRomIdx));
      /* if MetaData are used they are always available ignore */
      (void) PduR_Bm_GetData(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);  /* SBSW_PDUR_STACK_VARIABLE */
    }
# endif

    if(E_OK == PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfRmDestRom(rmDestTpIdx)) (PduR_GetDestHndOfRmDestRom(rmDestTpIdx), &info))      /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
    {
      retVal &= E_OK;
    }
    else
    {
      PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmGDestRomIdx, E_NOT_OK);     /* SBSW_PDUR_CSL03 */
    }
  }
  return retVal;
}
#endif
#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
  PduR_RmTp_LoAndUpTransmit
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/

LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_LoAndUpTransmit(PduR_RmSrcRomIterType rmSrcIdx, PduR_RmDestRomIterType rmDestIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  /* Confirmations are decremented in the Context of LoAndUpTransmit and CopyTxData */
  {
    /* Iterate over all routing destinations (1:N) */
# if (PDUR_RMDESTRPGROMIDXOFRMDESTROM == STD_ON)
    if((PduR_IsRmDestRpgRomUsedOfRmDestRom(rmDestIdx)) && (0 == PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfRmDestRom(rmDestIdx))))       /* COV_PDUR_RPG_FEATURE_CHECK */
    {
      PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestIdx);
      PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmGDestRomIdx, E_NOT_OK);     /* SBSW_PDUR_CSL03 */
    }
    else
# endif
    {
      if(PduR_IsTransmitFctPtrUsedOfRmDestRom(rmDestIdx))       /* COV_PDUR_FEATURE_ALWAYS_TRUE */
      {
        retVal = PduR_RmTp_LoTransmit(rmSrcIdx, rmDestIdx);
      }
# if ((PDUR_STARTOFRECEPTIONFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_COPYRXDATAFCTPTRIDXOFRMDESTROM == STD_ON) && (PDUR_TPRXINDICATIONFCTPTRIDXOFRMDESTROM == STD_ON))
      else
      {
        PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestIdx);
        if(E_OK == PduR_RmTp_UpTransmit(rmSrcIdx, rmDestIdx))   /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
        {
          retVal &= E_OK;
          PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmGDestRomIdx, E_OK);     /* SBSW_PDUR_CSL03 */
        }
        else
        {
          PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmGDestRomIdx, E_NOT_OK); /* SBSW_PDUR_CSL03 */
        }
      }
# endif
    }
  }
  return retVal;
}
#endif
#if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_TpRxIndication
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmTp_TpRxIndication(PduIdType rmSrcIdx, Std_ReturnType result)
{
  /* ----- Implementation ----------------------------------------------- */
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    /* Handle src instance routing state */
    PduR_TpRxSmStateOfRmSrcRamType tpRxSmState = PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx);
    PduR_GetFctPtrOfTpRxIndicationRxSmTransition(tpRxSmState) (rmSrcIdx, result);       /* SBSW_PDUR_CSL03 */
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_CopyTxData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 3 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_CopyTxData(PduIdType rmGDestRomIdx,
                                                        P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                        P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  /* parameter 'Handle Id' already checked by the caller API */
  /* Check parameter 'info' */
  if(info == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if((info->SduLength > 0) && (info->SduDataPtr == NULL_PTR))
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else if(availableDataPtr == NULL_PTR)
  {
    errorId = PDUR_E_PARAM_POINTER;
  }
  else
# endif
  {
    /* ----- Implementation ----------------------------------------------- */
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      /* Handle global routing state */
      retVal = PduR_GetFctPtrOfCopyTxDataTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) ((PduR_RmGDestRomIterType) rmGDestRomIdx, info->SduLength, info->SduDataPtr, retry, availableDataPtr);  /* SBSW_PDUR_CSL03 */
    }
    SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();     /* PRQA S 3109 */ /* MD_MSR_14.3 */
    PDUR_DUMMY_STATEMENT(retry);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_GWTP_CPYTX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_TpTxConfirmation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmTp_TpTxConfirmation(PduIdType rmGDestRomIdx, Std_ReturnType result)
{
  /* ----- Implementation ----------------------------------------------- */
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    /* Handle global routing state */
    PduR_GetFctPtrOfTpTxConfirmationTxSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) ((PduR_RmGDestRomIterType) rmGDestRomIdx, result);       /* SBSW_PDUR_CSL03 */
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
* PduR_Bm_ReadData
*********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
*********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Bm_ReadData(PduR_BmTxBufferRomIterType txBufferElementIdx, PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  /* Dequeue Data */
  PduR_Core_MemCpyRamToRam(sduDataPtr, PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementIdx)), pduLength);        /* SBSW_PDUR_MEM_CPY_FIFOMGR */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  switch (PduR_GetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
  {
    case PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      retVal = PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      retVal = PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      retVal = PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      if(pduLength != 0)
      {
        /* nothing to do no data available */
        retVal = BUFREQ_E_BUSY;
      }
      break;
    }
    default:   /* COV_PDUR_MISRA */
      break;
  }
  if((retVal == BUFREQ_OK) && (pduLength != 0))
  {
    retVal = PduR_Bm_UpdateMainReadIdx(PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx));
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMain_After_GetData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/

LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  switch (PduR_GetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx))
  {
    case PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_WRITE4READ(txBufferElementStateIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(txBufferElementStateIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(txBufferElementStateIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM:     /* COV_PDUR_FATAL_ERROR */
    {
      /* not enough data available is not possible in this function. */
      PduR_Det_ReportError(PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA, PDUR_E_FATAL);
      retVal = BUFREQ_E_BUSY;
      break;
    }
    default:   /* COV_PDUR_MISRA */
      break;
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Get_Between_ReadIdx_WriteIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Get_Between_ReadIdx_WriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength) > PduR_GetRxWriteIdxOfBmTxBufferRam(PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx)))   /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    /* Dequeue Data */
    PduR_Core_MemCpyRamToRam(sduDataPtr, PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx)), pduLength);        /* SBSW_PDUR_MEM_CPY_RAM2RAM */
    PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - pduLength));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_WRITEIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx) > PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx))    /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    PduR_SetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) - distanceInstReadIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) - distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_WRITEIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE
 *********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                                       PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  /* main Tx buffer element */
  if(PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == pduLength)
  {
    if(PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
    {
      PduR_Bm_Get_Between_ReadIdx_EndIdx(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_InstanceReadIdx(bmTxBufferInstanceRomIdx);
      PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
    else
    {
      PduR_Bm_Get_Between_ReadIdx_EndIdx(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_InstanceReadIdx(bmTxBufferInstanceRomIdx);
      PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > pduLength)
  {
    PduR_Bm_Get_Between_ReadIdx_EndIdx(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > pduLength)
  {
    PduR_Bm_InstanceReadIdx_WrapAround(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == pduLength)
  {
    PduR_Bm_InstanceReadIdx_WrapAround(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else
  {
    retVal = BUFREQ_E_BUSY;
  }
  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE
 *********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_FULL_OR_READ4WRITE(PduR_BmTxBufferRomIterType txBufferElementStateIdx,
                                                                                                                        PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  if(PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) == distanceInstReadIdx)
  {
    if(PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) == PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx))
    {
      PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_ReadIdx(txBufferElementStateIdx);
      PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM);        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
    else
    {
      PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_ReadIdx(txBufferElementStateIdx);
      PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) > distanceInstReadIdx)
  {
    PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(txBufferElementStateIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM);     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) > distanceInstReadIdx)
  {
    PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM);     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) == distanceInstReadIdx) /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else
  {
    /* not enough data available is not possible in this function. */
    PduR_Det_ReportError(PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA_STATEHANDLER_BUFFER_FULL_OR_READ4WRITE, PDUR_E_FATAL);
    retVal = BUFREQ_E_BUSY;
  }
  return retVal;
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Get_Between_ReadIdx_EndIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Get_Between_ReadIdx_EndIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                      CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength) > (PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx))))   /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    /* Dequeue Data */
    PduR_Core_MemCpyRamToRam(sduDataPtr, PduR_GetAddrBmTxBufferArrayRam(PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx)), pduLength);        /* SBSW_PDUR_MEM_CPY_RAM2RAM */
    PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - pduLength));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_ENDIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx) > PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(txBufferElementStateIdx))      /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    PduR_SetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) - distanceInstReadIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) - distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx) + distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_GET_BETWEEN_READIDX_ENDIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ
 *********************************************************************************************************************/
/*!
 *Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                               CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  if(PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == pduLength)
  {
    PduR_Bm_Get_Between_ReadIdx_WriteIdx(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > pduLength)
  {
    PduR_Bm_Get_Between_ReadIdx_WriteIdx(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  }
  else
  {
    /* not enough data available */
    retVal = BUFREQ_E_BUSY;
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_GetData_StateHandler_BUFFER_WRITE4READ
 *********************************************************************************************************************/
/*!
 *Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMain_After_GetData_StateHandler_BUFFER_WRITE4READ(PduR_BmTxBufferRomIterType txBufferElementStateIdx,
                                                                                                                PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  if(PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) == distanceInstReadIdx)
  {
    PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) > distanceInstReadIdx) /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx(txBufferElementStateIdx, distanceInstReadIdx); /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  }
  else
  {
    /* not enough data available is not possible in this function. */
    PduR_Det_ReportError(PDUR_GW_BUFMGR_UPDATEMAIN_AFTER_GETDATA_STATEHANDLER_BUFFER_WRITE4READ, PDUR_E_FATAL);
    retVal = BUFREQ_E_BUSY;
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData(PduR_BmTxBufferRomIterType txBufferElementIdx, PduR_BmTxBufferArrayRamIterType pduLength, CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx;
  switch (PduR_GetPduRBufferStateOfBmTxBufferRam(txBufferElementIdx))
  {
    case PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(txBufferElementIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(txBufferElementIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      retVal = PduR_Bm_PutData_StateHandler_BUFFER_READ4WRITE(txBufferElementIdx, pduLength, sduDataPtr);       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      if(pduLength != 0)
      {
        /* nothing to do, no buffer available return BUFREQ_E_NOT_OK */
        retVal = BUFREQ_E_NOT_OK;
      }
      break;
    }
    default:   /* COV_PDUR_MISRA */
      break;
  }
  for(bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(txBufferElementIdx);
      bmTxBufferInstanceRomIdx < PduR_GetInstanceStopIdxOfBmTxBufferRam(txBufferElementIdx); bmTxBufferInstanceRomIdx++)
  {
    PduR_Bm_UpdateInstance_After_PutData(bmTxBufferInstanceRomIdx, (pduLength));        /* SBSW_PDUR_STACK_VARIABLE */
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_PutData(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  switch (PduR_GetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
  {
    case PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(bmTxBufferInstanceRomIdx, distanceInstReadIdx);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(bmTxBufferInstanceRomIdx, distanceInstReadIdx);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM:
    {
      PduR_Bm_UpdateInstance_StateHandler_BUFFER_READ4WRITE(bmTxBufferInstanceRomIdx, distanceInstReadIdx);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      break;
    }
    case PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM:
    {
      if(distanceInstReadIdx != 0)
      {
        /* nothing to do, no buffer available */
      }
      break;
    }
    default:   /* COV_PDUR_MISRA */
      break;
  }
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Put_Between_WriteIdx_ReadIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 2 */ /* MD_PduR_3673_AsrProto */
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Put_Between_WriteIdx_ReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx) + pduLength) > PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx))      /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    /* Dequeue Data */
    PduR_Core_MemCpyRamToRam(PduR_GetAddrBmTxBufferArrayRam(PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx)), sduDataPtr, pduLength);        /* SBSW_PDUR_MEM_CPY_RAM2RAM */
    PduR_SetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) - pduLength));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) - pduLength));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) + pduLength)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx) + pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_READIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                             PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx) > PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))  /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - distanceInstReadIdx)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_READIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData_StateHandler_BUFFER_READ4WRITE
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData_StateHandler_BUFFER_READ4WRITE(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                               CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  if(PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) == pduLength)
  {
    PduR_Bm_Put_Between_WriteIdx_ReadIdx(txBufferElementStateIdx, pduLength, sduDataPtr);       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if((PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) > pduLength))
  {
    PduR_Bm_Put_Between_WriteIdx_ReadIdx(txBufferElementStateIdx, pduLength, sduDataPtr);       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

  }
  else
  {
    /* Not enough free buffer space available. Tp will never request more buffer than the PDUR has provided */
    retVal = BUFREQ_E_NOT_OK;
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_StateHandler_BUFFER_READ4WRITE
 *********************************************************************************************************************/
/*!
* This function is is called to update the instance parameters after data is copied to the buffer between read and write index
* Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_StateHandler_BUFFER_READ4WRITE(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                         PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  if(PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == distanceInstReadIdx)
  {
    PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if((PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > distanceInstReadIdx))
  {
    PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  }
  else
  {
    /* Not enough free buffer space available. Tp will never request more buffer than the PDUR has provided */
  }
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_PutData_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                                                        CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;

  if(PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) > pduLength)
  {
    PduR_Bm_Put_Between_WriteIdx_EndIdx(txBufferElementStateIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    if(pduLength != 0)
    {
      PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) == pduLength)
  {
    if(PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) == PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx))
    {
      PduR_Bm_Put_Between_WriteIdx_EndIdx(txBufferElementStateIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_WriteIdx(txBufferElementStateIdx);
      PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
    else
    {
      PduR_Bm_Put_Between_WriteIdx_EndIdx(txBufferElementStateIdx, pduLength, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_WriteIdx(txBufferElementStateIdx);
      PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) > pduLength)
  {
    PduR_Bm_Switch_WriteIdx_And_PutData(txBufferElementStateIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERRAM);     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) == pduLength)
  {
    PduR_Bm_Switch_WriteIdx_And_PutData(txBufferElementStateIdx, pduLength, sduDataPtr);        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else
  {
    /* Tp will never request more buffer than the PDUR has provided */
    retVal = BUFREQ_E_NOT_OK;
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_StateHandler_BUFFER_EMPTY_OR_WRITE4READ(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                                  PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  if(PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > distanceInstReadIdx)
  {
    PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    if(distanceInstReadIdx != 0)
    {
      PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_WRITE4READ_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == distanceInstReadIdx)
  {
    if(PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
    {
      PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);  /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_Instance_WriteIdx(bmTxBufferInstanceRomIdx);
      PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
    else
    {
      PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);  /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      PduR_Bm_Switch_Instance_WriteIdx(bmTxBufferInstanceRomIdx);
      PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    }
  }
  else if(PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) > distanceInstReadIdx)
  {
    PduR_Bm_Switch_InstanceWriteIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_READ4WRITE_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else if(PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == distanceInstReadIdx)
  {
    PduR_Bm_Switch_InstanceWriteIdx(bmTxBufferInstanceRomIdx, distanceInstReadIdx);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_FULL_PDURBUFFERSTATEOFBMTXBUFFERINSTANCERAM);  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  else
  {
    /* Tp will never request more buffer than the PDUR has provided */
  }
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Put_Between_WriteIdx_EndIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 2 */ /* MD_PduR_3673_AsrProto */
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Put_Between_WriteIdx_EndIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                       CONST(SduDataPtrType, AUTOMATIC) sduDataPtr)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if((PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx) + pduLength) > (PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(txBufferElementStateIdx)))     /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    /* Enqueue Data */
    PduR_Core_MemCpyRamToRam(PduR_GetAddrBmTxBufferArrayRam(PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx)), sduDataPtr, pduLength);        /* SBSW_PDUR_MEM_CPY_RAM2RAM */
    PduR_SetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx) + pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) - pduLength));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx) - pduLength));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx) + pduLength)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx) + pduLength));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_ENDIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx,
                                                                                            PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  /* main Tx buffer element */
  PduR_BmTxBufferRomIterType txBufferElementStateIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
  if((PduR_GetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx) > PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(txBufferElementStateIdx))    /* COV_PDUR_FATAL_ERROR */
  {
    errorId = PDUR_E_FATAL;
  }
  else
# endif
  {
    PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - distanceInstReadIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) - distanceInstReadIdx)); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) + distanceInstReadIdx));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_SANITIZE_UNDEFINED_BEHAVIOR == STD_ON)       /* COV_PDUR_VAR_FATAL_ERROR */
  if(errorId != PDUR_E_NO_ERROR)        /* COV_PDUR_FATAL_ERROR */
  {
    PduR_Det_ReportError(PDUR_FCT_GW_BUFMGR_PUT_BETWEEN_WRITEIDX_ENDIDX, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_WriteIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_WriteIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx)
{
  PduR_SetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferElementStateIdx) - PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx))); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx, PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_Instance_WriteIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_Instance_WriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx)
{
  PduR_BmTxBufferRomIterType txBufferElementStateIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
  PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferElementStateIdx) - PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx)));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx));      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_ReadIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_ReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx)
{
  PduR_SetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx)));      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx, PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx));        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_InstanceReadIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_InstanceReadIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx)
{
  /* main Tx buffer element */
  PduR_BmTxBufferRomIdxOfBmTxBufferInstanceRomType txBufferElementStateIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
  PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx)));    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_WriteIdx_And_PutData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_WriteIdx_And_PutData(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr)
{
  PduR_BmTxBufferArrayRamIterType pduLengthHead, pduLengthTail;
  pduLengthTail = PduR_GetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx);
  pduLengthHead = pduLength - pduLengthTail;
  PduR_Bm_Put_Between_WriteIdx_EndIdx(txBufferElementStateIdx, pduLengthTail, sduDataPtr);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Switch_WriteIdx(txBufferElementStateIdx);
  sduDataPtr = &sduDataPtr[pduLengthTail];      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Put_Between_WriteIdx_ReadIdx(txBufferElementStateIdx, pduLengthHead, sduDataPtr);     /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_InstanceWriteIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_InstanceWriteIdx(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  PduR_BmTxBufferArrayRamIterType taillength = PduR_GetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx);
  PduR_BmTxBufferArrayRamIterType headlenght = distanceInstReadIdx - taillength;
  PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_EndIdx(bmTxBufferInstanceRomIdx, taillength);       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Switch_Instance_WriteIdx(bmTxBufferInstanceRomIdx);
  PduR_Bm_UpdateInstance_After_Put_Between_WriteIdx_ReadIdx(bmTxBufferInstanceRomIdx, headlenght);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *

 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_Switch_ReadIdx_And_UpdateMainReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx, PduR_BmTxBufferArrayRamIterType distanceInstReadIdx)
{
  PduR_BmTxBufferArrayRamIterType taillength = PduR_GetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx);
  PduR_BmTxBufferArrayRamIterType headlength = distanceInstReadIdx - taillength;
  PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_EndIdx(txBufferElementStateIdx, taillength);      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Switch_ReadIdx(txBufferElementStateIdx);
  PduR_Bm_UpdateMainReadIdx_After_Get_Between_ReadIdx_WriteIdx(txBufferElementStateIdx, headlength);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_InstanceReadIdx_WrapAround
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_InstanceReadIdx_WrapAround(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx, PduR_BmTxBufferArrayRamIterType pduLength, SduDataPtrType sduDataPtr)
{
  PduR_BmTxBufferArrayRamIterType pduLengthHead, pduLengthTail;
  pduLengthTail = PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx);
  pduLengthHead = pduLength - pduLengthTail;
  PduR_Bm_Get_Between_ReadIdx_EndIdx(bmTxBufferInstanceRomIdx, PduR_GetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx), sduDataPtr);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Switch_InstanceReadIdx(bmTxBufferInstanceRomIdx);
  sduDataPtr = &sduDataPtr[pduLengthTail];      /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Bm_Get_Between_ReadIdx_WriteIdx(bmTxBufferInstanceRomIdx, pduLengthHead, sduDataPtr);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
*  PduR_Bm_UpdateMainReadIdx
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_UpdateMainReadIdx(PduR_BmTxBufferRomIterType txBufferElementStateIdx)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  PduR_BmTxBufferArrayRamIterType deltaInstIdxMainIdxTailMainIdx = 0;
  PduR_BmTxBufferArrayRamIterType deltaInstIdxMainIdxTailInstIdx = 0;
  boolean bIsAnyInstanceFull = FALSE;
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx;
  PduR_BmTxBufferArrayRamStartIdxOfBmTxBufferRomType txBufferArrayStartIdx = PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx);
  PduR_BmTxBufferArrayRamIterType txBufferArrayEndIdx = PduR_GetBmTxBufferArrayRamEndIdxOfBmTxBufferRom(txBufferElementStateIdx);
  PduR_BmTxBufferArrayRamIterType mainReadIdx = PduR_GetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx);
  PduR_BmTxBufferArrayRamIterType currentBeforeDestReadIdx = mainReadIdx;
  PduR_BmTxBufferArrayRamIterType currentAfterDestReadIdx = txBufferArrayEndIdx;        /* Start search at the end of the TxBuffer */
  for(bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(txBufferElementStateIdx);
      bmTxBufferInstanceRomIdx < PduR_GetInstanceStopIdxOfBmTxBufferRam(txBufferElementStateIdx); bmTxBufferInstanceRomIdx++)
  {
    if(PduR_IsTxBufferUsedOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx))
    {
      /* Iterate over all Instance Read Idx's */
      PduR_BmTxBufferArrayRamIterType txInstanceReadIdx = PduR_GetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx);
      /* Search the Index which is next to the Main Read */
      /* Scenario 1 */
      if(mainReadIdx == txInstanceReadIdx)
      {
        if(PduR_GetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx) == PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM)
        {
          if(((txBufferArrayStartIdx <= txInstanceReadIdx) && (txInstanceReadIdx <= currentBeforeDestReadIdx))) /* COV_PDUR_ROBUSTNESS */
          {
            deltaInstIdxMainIdxTailMainIdx = ((txBufferArrayEndIdx - mainReadIdx) + (txInstanceReadIdx - txBufferArrayStartIdx));
            currentBeforeDestReadIdx = txInstanceReadIdx;
          }
        }
        else
        {
          /* main read index is still equal instance read index */
          bIsAnyInstanceFull |= TRUE;
        }
      }
      /* Scenario 2 */
      else if((mainReadIdx < txInstanceReadIdx) && (txInstanceReadIdx < currentAfterDestReadIdx))
      {
        currentAfterDestReadIdx = txInstanceReadIdx;
        deltaInstIdxMainIdxTailInstIdx = (txInstanceReadIdx - mainReadIdx);
      }
      /* Scenario 3 */
      else if(((txBufferArrayStartIdx <= txInstanceReadIdx) && (txInstanceReadIdx < currentBeforeDestReadIdx))) /* COV_PDUR_ROBUSTNESS */
      {
        currentBeforeDestReadIdx = txInstanceReadIdx;
        deltaInstIdxMainIdxTailMainIdx = ((txBufferArrayEndIdx - mainReadIdx) + (txInstanceReadIdx - txBufferArrayStartIdx));
      }
      else
      {
        /* nothing to do */
      }
    }
  }
  if(!bIsAnyInstanceFull)
  {
    /* Check if currentAfterDestReadIdx != BmTxBufferArrayRamEndIdx */
    if((mainReadIdx < currentAfterDestReadIdx) && (currentAfterDestReadIdx < txBufferArrayEndIdx))      /* COV_PDUR_ROBUSTNESS */
    {
      retVal = PduR_Bm_UpdateMain_After_GetData(txBufferElementStateIdx, deltaInstIdxMainIdxTailInstIdx);       /* SBSW_PDUR_STACK_VARIABLE */
    }
    else if((txBufferArrayStartIdx <= currentBeforeDestReadIdx) && (currentBeforeDestReadIdx <= mainReadIdx))   /* COV_PDUR_ROBUSTNESS */
    {
      retVal = PduR_Bm_UpdateMain_After_GetData(txBufferElementStateIdx, deltaInstIdxMainIdxTailMainIdx);       /* SBSW_PDUR_STACK_VARIABLE */
    }
    else
    {
      PduR_Det_ReportError(PDUR_GW_BUFMGR_UPDATEMAINREADIDX, PDUR_E_FATAL);
    }
  }
  else
  {
    /* no Update because the slowest Instance does not move! */
  }
  return retVal;
}       /* PRQA S 6030, 6080 */ /* MD_MSR_STCYC, MD_MSR_STMIF */
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_ResetTxBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ResetTxBuffer(PduR_BmTxBufferRomIterType txBufferElementStateIdx)
{
  PduR_SetTxReadIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx)));      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetRxWriteIdxOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx)));     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferElementStateIdx))); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalBufferSizeOfBmTxBufferRam(txBufferElementStateIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferElementStateIdx)));  /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalDataSizeOfBmTxBufferRam(txBufferElementStateIdx, 0);     /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearDataSizeOfBmTxBufferRam(txBufferElementStateIdx, 0);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetPduRBufferStateOfBmTxBufferRam(txBufferElementStateIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetInstanceStopIdxOfBmTxBufferRam(txBufferElementStateIdx, PduR_GetBmTxBufferInstanceRomStartIdxOfBmTxBufferRom(txBufferElementStateIdx));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
  PduR_Bm_ResetTxBufferInstance
**********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
  *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ResetTxBufferInstance(PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx)
{
  PduR_BmTxBufferRomIdxOfBmTxBufferInstanceRomType txBufferElementStateIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferInstanceRom(bmTxBufferInstanceRomIdx);
  PduR_SetTxBufferUsedOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, FALSE); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxReadIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom((txBufferElementStateIdx))));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetRxWriteIdxOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetBmTxBufferArrayRamStartIdxOfBmTxBufferRom(txBufferElementStateIdx)));    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom((txBufferElementStateIdx))));      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalBufferSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, (PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom((txBufferElementStateIdx))));       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, 0);    /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetLinearDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, 0);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetPduRBufferStateOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx, PDUR_BUFFER_EMPTY_PDURBUFFERSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_ThresholdReached
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_ThresholdReached(PduR_RmSrcRomIterType rmSrcIdx)
{
  /* Trigger transmission if required */
  Std_ReturnType retVal = E_NOT_OK;
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_BmTxBufferArrayRamIterType availableTotalDataSize = PduR_GetTotalDataSizeOfBmTxBufferRam(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx));
  /* MetaData length are not take into account to calculate the Threshold */
# if (PDUR_METADATA_SUPPORT == STD_ON )
  if(PduR_IsMetaDataLengthUsedOfRmSrcRom(rmSrcIdx))     /* COV_PDUR_FEATURE_ALWAYS_TRUE */
  {
    availableTotalDataSize -= (PduR_BmTxBufferArrayRamIterType) PduR_GetMetaDataLengthOfRmSrcRom(rmSrcIdx);
  }
# endif
  /* Threshold reached or reception finished (sub state machine is in IDLE) */
  if(availableTotalDataSize >= PduR_GetTpThresholdOfRmSrcRom(rmSrcIdx))
  {
    retVal = E_OK;
  }
  return retVal;
}
#endif

#if (PDUR_STARTOFRECEPTIONRXSMTRANSITION  == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_StartOfReception_RmRxIdle
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_StartOfReception_RmRxIdle(PduR_RmSrcRomIterType rmSrcIdx,
                                                                       P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength, P2VAR(PduLengthType, AUTOMATIC,
                                                                                                                                                              PDUR_APPL_DATA) bufferSizePtr)
{
  BufReq_ReturnType retVal = BUFREQ_OK;
  /* Allocate FiFo element */
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamIdx = 0;
  if(PduR_Fm_AllocateFifoElement(fmFifoRomIdx, &fmFifoElementRamIdx) == E_OK)   /* SBSW_PDUR_STACK_VARIABLE */
  {
    /* Mapping Src Handle and current Fifo element */
    PduR_SetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx, fmFifoElementRamIdx);  /* SBSW_PDUR_CSL03 */
    /* Store related routing source in Fifo Manager Ram table */
    PduR_SetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamIdx, rmSrcIdx);  /* SBSW_PDUR_CSL03 */

    /* Split Allocate and Assign buffer */
    if(PduR_Bm_AllocateTxBuffer(PduR_GetBmTxBufferIndRomStartIdxOfRmSrcRom(rmSrcIdx), PduR_GetBmTxBufferIndRomEndIdxOfRmSrcRom(rmSrcIdx), fmFifoElementRamIdx, TpSduLength, bufferSizePtr) == BUFREQ_OK)        /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    {
      PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);      /* SBSW_PDUR_CSL01 */
# if  (PDUR_METADATA_SUPPORT == STD_ON )
      if(PduR_IsMetaDataLengthUsedOfRmSrcRom(rmSrcIdx)) /* COV_PDUR_FEATURE_ALWAYS_TRUE */
      {
        retVal = PduR_RmTp_StartOfReceptionQueueMetaData(rmSrcIdx, info->SduLength, info->SduDataPtr, bufferSizePtr);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      }
      if(retVal != BUFREQ_OK)   /* COV_PDUR_FATAL_ERROR */
      {
        PduR_Det_ReportError(PDUR_RXSM_STARTOFRECEPTION, PDUR_E_FATAL);
      }
      else
# endif
      {
        PduR_SetTpRxSmStateOfRmSrcRam(rmSrcIdx, PDUR_RM_RX_ACTIVE_TPRXSMSTATEOFRMSRCRAM);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
        PduR_GetFctPtrOfTpActivateWriteFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx)) (fmFifoElementRamIdx);    /* SBSW_PDUR_CSL03 */
        /* Call CheckReady2Transmit() of the FIFO Element state machine */
        if((PduR_GetFctPtrOfTpCheckReady2TransmitRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRomIdx)) (rmSrcIdx)) != E_OK)      /* SBSW_PDUR_CSL03 */
        {
          PduR_GetFctPtrOfTpRxIndicationRxSmTransition(PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx)) (rmSrcIdx, E_NOT_OK);   /* SBSW_PDUR_CSL03 */
          retVal = BUFREQ_E_NOT_OK;
        }
      }
    }
    else
    {
      PduR_Fm_FreeFifoElement(fmFifoRomIdx, fmFifoElementRamIdx);
      retVal = BUFREQ_E_NOT_OK;
    }
  }
  else
  {
    retVal = BUFREQ_E_NOT_OK;
  }
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return retVal;
}
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_STARTOFRECEPTIONRXSMTRANSITION  == STD_ON))
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_FreeFifoElement(PduR_FmFifoRomIterType fmFifoRomIdx, PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)
{
  /* no buffer available -> roll back release FiFo */
  if(PduR_GetFillLevelOfFmFifoRam(fmFifoRomIdx) > 0)    /* COV_PDUR_FATAL_ERROR */
  {
    PduR_DecFillLevelOfFmFifoRam(fmFifoRomIdx); /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
    PduR_SetFmFifoElementRamWriteIdxOfFmFifoRam(fmFifoRomIdx, fmFifoElementRamWriteIdx);        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */

    if(!PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamWriteIdx))   /* COV_PDUR_FATAL_ERROR */
    {
      PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM);  /* SBSW_PDUR_CSL01 */
    }
    else
    {
      PduR_Det_ReportError(PDUR_FM_FREEFIFOELEMENT, PDUR_E_FATAL);
    }
  }
  else
  {
    PduR_Det_ReportError(PDUR_FM_FREEFIFOELEMENT, PDUR_E_FATAL);
  }
}
#endif

#if (PDUR_STARTOFRECEPTIONRXSMTRANSITION  == STD_ON)
 /**********************************************************************************************************************
 * PduR_RxSm_StartOfReception_UnexpectedCall
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 2 */ /* MD_PduR_3673_UnexpectedCall */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_StartOfReception_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, PduLengthType TpSduLength,
                                                                             P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  PduR_Det_ReportError(PDUR_FCT_GWTP_CPYRX, PDUR_E_DUPLICATE_IPDU_ID);
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(info);   /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(TpSduLength);    /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return BUFREQ_E_NOT_OK;
}
#endif

#if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_CopyRxData_RmRxActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 1 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_RmRxActive(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                   SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  BufReq_ReturnType retVal;
  /** Action: Enqueue data **/
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_BmTxBufferRomIterType txBufferElementIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx);

  retVal = PduR_Bm_PutData(txBufferElementIdx, pduLength, sduDataPtr);  /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

  if(retVal == BUFREQ_OK)
  {
    PduR_FmFifoRamIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
    if(PduR_GetFctPtrOfTpCheckReady2TransmitRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRomIdx)) (rmSrcIdx) != E_OK)    /* SBSW_PDUR_CSL03 */
    {
      retVal = BUFREQ_E_NOT_OK;
    }
  }
  *bufferSizePtr = (PduLengthType) PduR_GetTotalBufferSizeOfBmTxBufferRam(txBufferElementIdx);  /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  return retVal;
}
#endif

#if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_CopyRxData_UnexpectedCall
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA  S 3673 2 */ /* MD_PduR_3673_UnexpectedCall */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                       SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  PduR_Det_ReportError(PDUR_RXSM_COPYRXDATA_UNEXPECTEDCALL, PDUR_E_UNEXPECTED_CALL);
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(pduLength);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(sduDataPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return BUFREQ_E_NOT_OK;
}
#endif

#if (PDUR_COPYRXDATARXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_CopyRxData_Aborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA  S 3673 2 */ /* MD_PduR_3673_Abort */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RxSm_CopyRxData_RmRxAborted(PduR_RmSrcRomIterType rmSrcIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                    SduDataPtrType sduDataPtr, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) bufferSizePtr)
{
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(pduLength);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(sduDataPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(bufferSizePtr);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return BUFREQ_E_NOT_OK;
}
#endif

#if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpRxIndication_RmRxActiveOrRmRxAborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RxSm_TpRxIndication_RmRxActiveOrRmRxAborted(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  /** Action: Start transmission **/
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);        /* SBSW_PDUR_CSL03 */
  PduR_GetFctPtrOfFinishReceptionRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRomIdx)) (rmSrcIdx, result);       /* SBSW_PDUR_CSL03 */
  PduR_GetFctPtrOfFinishWriteFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx)) (fmFifoElementRamWriteIdx, result);      /* SBSW_PDUR_CSL03 */
  PduR_SetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx, (PduR_FmFifoElementRamIterType) PDUR_INVALID_VARARRAYIDX);       /* SBSW_PDUR_CSL03 */
  PduR_SetTpRxSmStateOfRmSrcRam(rmSrcIdx, PDUR_RM_RX_IDLE_TPRXSMSTATEOFRMSRCRAM);       /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPRXINDICATIONRXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpRxIndication_UnexpectedCall
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RxSm_TpRxIndication_UnexpectedCall(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  PduR_Det_ReportError(PDUR_GWTP_RXSM_TPRXINDICATION_UNEXPECTEDCALL, PDUR_E_UNEXPECTED_CALL);
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_RmRxActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_RmRxActive(PduR_RmSrcRomIterType rmSrcIdx)
{
  PduR_SetTpRxSmStateOfRmSrcRam(rmSrcIdx, PDUR_RM_RX_ABORTED_TPRXSMSTATEOFRMSRCRAM);    /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_RmRxAborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/

FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_RmRxAborted(PduR_RmSrcRomIterType rmSrcIdx)     /* COV_PDUR_DUMMY_FUNCTION */
{
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_RmTxReceptionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_RmTxReceptionActive(PduR_RmSrcRomIterType rmSrcIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_FmFifoRamIterType fmFifoRamTpIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamTpIdx);

  if(fmFifoElementRamWriteIdx == fmFifoElementRamTPReadIdx)
  {
    /* Check if Threshold reached */
         /** Guard/Action: enqueue meta data **/
    /* TpThreshold reached? RX Indication occurs */
    if(PduR_Rm_ThresholdReached(rmSrcIdx) == E_OK)
    {
      PduR_RmDestRomIterType rmDestTpIdx;
      PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamTpIdx, PDUR_RM_TX_RECEPTION_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);  /* SBSW_PDUR_CSL03 */
      PduR_SetPendingConfirmationsOfFmFifoRam(fmFifoRamTpIdx, PduR_GetRmDestRomLengthOfRmSrcRom(rmSrcIdx));     /* SBSW_PDUR_CSL03 */
      /* Assign Tx Buffer */
      PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx), rmSrcIdx);
      PduR_GetFctPtrOfTpActivateReadFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx);   /* SBSW_PDUR_CSL03 */
      for(rmDestTpIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestTpIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestTpIdx++)
      {
        PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestTpIdx);
        /* if any routings is sucessfull return E_OK */
        retVal &= (PduR_GetFctPtrOfTpTriggerTransmitTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmDestTpIdx));      /* SBSW_PDUR_CSL03 */
      }
      if(retVal != E_OK)
      {
        PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamTpIdx, PDUR_RM_TX_RECEPTION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);     /* SBSW_PDUR_CSL03 */
      }
    }
    else
    {
      retVal = E_OK;
    }
  }
  else
  {
    retVal = E_OK;
  }
  return retVal;
}
#endif

#if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_NoAction(PduR_RmSrcRomIterType rmSrcIdx)
{
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return E_OK;
}
#endif

#if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxReceptionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxIdle(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  Std_ReturnType retVal = E_NOT_OK;
  PduR_FmFifoRamIterType fmFifoRamTpIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamTpIdx);
  if(result == E_OK)    /* COV_PDUR_FATAL_ERROR */
  {
    PduR_RmDestRomIterType rmDestTpIdx;
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamTpIdx, PDUR_RM_TX_RECEPTION_FINISHED_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);   /* SBSW_PDUR_CSL01 */
    PduR_SetPendingConfirmationsOfFmFifoRam(fmFifoRamTpIdx, PduR_GetRmDestRomLengthOfRmSrcRom(rmSrcIdx));       /* SBSW_PDUR_CSL03 */
    /* Assign Tx Buffer */
    PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx), rmSrcIdx);
    PduR_GetFctPtrOfTpActivateReadFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx);     /* SBSW_PDUR_CSL03 */
    for(rmDestTpIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestTpIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestTpIdx++)
    {
      PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestTpIdx);
      /* if any routings is sucessfull return E_OK */
      retVal &= (PduR_GetFctPtrOfTpTriggerTransmitTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmDestTpIdx));        /* SBSW_PDUR_CSL03 */
    }
    if(retVal != E_OK)
    {
      PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamTpIdx, PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM);   /* SBSW_PDUR_CSL01 */
    }
  }
  else
  {
    PduR_Det_ReportError(PDUR_FINISHRECEPTION, PDUR_E_FATAL);
  }
}
#endif
#if (PDUR_FINISHRECEPTIONRMSMTRANSITION  == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxReceptionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxReceptionActive(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx);
  if(fmFifoElementRamWriteIdx == fmFifoElementRamTPReadIdx)
  {
    if(result == E_OK)
    {
      Std_ReturnType retVal = E_NOT_OK;
      PduR_RmDestRomIterType rmDestIdx;
      PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_RECEPTION_FINISHED_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);   /* SBSW_PDUR_CSL01 */
      PduR_SetPendingConfirmationsOfFmFifoRam(fmFifoRamIdx, PduR_GetRmDestRomLengthOfRmSrcRom(rmSrcIdx));       /* SBSW_PDUR_CSL03 */
      /* Assign Tx Buffer */
      PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx), rmSrcIdx);
      PduR_GetFctPtrOfTpActivateReadFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx);   /* SBSW_PDUR_CSL03 */
      for(rmDestIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestIdx++)
      {
        PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestIdx);
        /* if any routings is sucessfull return E_OK */
        retVal &= (PduR_GetFctPtrOfTpTriggerTransmitTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmDestIdx));        /* SBSW_PDUR_CSL03 */
      }
      if(retVal != E_OK)
      {
        PduR_SetRmSrcIdxOfFmFifoElementRam((fmFifoElementRamWriteIdx), (PduR_RmSrcRomIterType) PDUR_INVALID_VARARRAYIDX);       /* SBSW_PDUR_CSL03 */
        PduR_Fm_ActivateNext(fmFifoRamIdx);
      }
    }
    else
    {
      PduR_GetFctPtrOfFinishWriteFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx)) (fmFifoElementRamWriteIdx, result);  /* SBSW_PDUR_CSL03 */
      PduR_SetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx, (PduR_FmFifoElementRamIterType) PDUR_INVALID_VARARRAYIDX);   /* SBSW_PDUR_CSL03 */
      PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM);     /* SBSW_PDUR_CSL01 */
      PduR_SetRmSrcIdxOfFmFifoElementRam((fmFifoElementRamWriteIdx), (PduR_RmSrcRomIterType) PDUR_INVALID_VARARRAYIDX); /* SBSW_PDUR_CSL03 */
      PduR_Fm_ActivateNext(fmFifoRamIdx);
    }
  }
}
#endif

#if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxReceptionTransmissionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxReceptionTransmissionActive(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_RECEPTION_FINISHED_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);       /* SBSW_PDUR_CSL01 */
  if(result != E_OK)
  {
    PduR_TxSm_CancelTransmitPreparation(fmFifoElementRamWriteIdx);
  }
}
#endif

#if (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_RmTxTransmissionFinished
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_RmTxTransmissionFinished(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfRmSrcRam(rmSrcIdx);
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM); /* SBSW_PDUR_CSL01 */
  PduR_SetRmSrcIdxOfFmFifoElementRam((fmFifoElementRamWriteIdx), (PduR_RmSrcRomIterType) PDUR_INVALID_VARARRAYIDX);     /* SBSW_PDUR_CSL03 */
  PduR_Fm_ActivateNext(fmFifoRamIdx);
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FINISHRECEPTIONRMSMTRANSITION   == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishReception_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishReception_NoAction(PduR_RmSrcRomIterType rmSrcIdx, Std_ReturnType result)
{
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_RmTxReceptionFinishedTransmissionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_RmTxReceptionFinishedTransmissionActive(PduR_RmDestRomIterType rmGDestRomIdx, Std_ReturnType result)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  if(PduR_GetPendingConfirmationsOfFmFifoRam(fmFifoRomIdx) == 0)
  {
    PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
    PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamReadIdx);
    PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
    PduR_GetFctPtrOfFinishReadFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamReadIdx)) (fmFifoElementRamReadIdx, result);       /* SBSW_PDUR_CSL03 */
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRomIdx, PDUR_RM_TX_IDLE_TPTXSMSTATEOFFMFIFORAM);       /* SBSW_PDUR_CSL03 */
    PduR_Fm_ActivateNext(fmFifoRamIdx);
  }
}
#endif

#if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_RmTxReceptionTransmissionActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_RmTxReceptionTransmissionActive(PduR_RmGDestRomIterType rmGDestRomIdx, Std_ReturnType result)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  if(PduR_GetPendingConfirmationsOfFmFifoRam(fmFifoRomIdx) == 0)
  {
    PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRomIdx, PDUR_RM_TX_TRANSMISSION_FINISHED_TPTXSMSTATEOFFMFIFORAM);      /* SBSW_PDUR_CSL01 */
    PduR_GetFctPtrOfFinishReadFmSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx, result);   /* SBSW_PDUR_CSL03 */
    if(result != E_OK)
    {
      PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx);
      PduR_TpRxSmStateOfRmSrcRamType tpRxSmState = PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx);
      PduR_GetFctPtrOfTpCancelReceiveFifoSmTransition(tpRxSmState) (rmSrcIdx);  /* SBSW_PDUR_CSL03 */
    }
  }
}
#endif

#if (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_FinishTransmission_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Rm_FinishTransmission_FatalError(PduR_RmDestRomIterType rmGDestRomIdx, Std_ReturnType result)        /* COV_PDUR_FATAL_ERROR */
{
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCANCELRECEIVEFIFOSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_RxSm_TpCancelReceive_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RxSm_TpCancelReceive_FatalError(PduR_RmSrcRomIterType rmSrcIdx)      /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_RXSM_TPCANCELRECEIVE_FATALERROR, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(rmSrcIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCHECKREADY2TRANSMITRMSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_Rm_CheckReady2Transmit_RmTxIdle
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_Rm_CheckReady2Transmit_RmTxIdle(PduR_RmSrcRomIterType rmSrcIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  /* Check if Threshold reached */
       /** Guard/Action: enqueue meta data **/
  /* TpThreshold reached? RX Indication occurs */
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx);
  if(PduR_Rm_ThresholdReached(rmSrcIdx) == E_OK)
  {
    PduR_RmDestRomIterType rmDestRomIdx;
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_RECEPTION_TRANSMISSION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);      /* SBSW_PDUR_CSL03 */
    PduR_SetPendingConfirmationsOfFmFifoRam(fmFifoRamIdx, PduR_GetRmDestRomLengthOfRmSrcRom(rmSrcIdx)); /* SBSW_PDUR_CSL03 */
    /* Assign Tx Buffer */
    PduR_RmTp_AssignAssociatedBuffer2Destination(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx), rmSrcIdx);
    PduR_GetFctPtrOfTpActivateReadFifoSmTransition(PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx)) (fmFifoElementRamTPReadIdx);     /* SBSW_PDUR_CSL03 */
    for(rmDestRomIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx++)
    {
      PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestRomIdx);
      /* if any routings is sucessfull return E_OK */
      retVal &= (PduR_GetFctPtrOfTpTriggerTransmitTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmDestRomIdx));       /* SBSW_PDUR_CSL03 */
    }
    if(retVal != E_OK)
    {
      PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_RECEPTION_ACTIVE_TPTXSMSTATEOFFMFIFORAM); /* SBSW_PDUR_CSL03 */
    }
  }
  else
  {
    retVal = E_OK;
    PduR_SetTpTxSmStateOfFmFifoRam(fmFifoRamIdx, PDUR_RM_TX_RECEPTION_ACTIVE_TPTXSMSTATEOFFMFIFORAM);   /* SBSW_PDUR_CSL03 */
  }
  return retVal;
}
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext(PduR_FmFifoRamIterType fmFifoRamIdx)
{
  PduR_FmFifoElementRamIterType peekedfmFifoElementRamTPReadIdx;
  if(PduR_Fm_Peek(fmFifoRamIdx, &peekedfmFifoElementRamTPReadIdx) == E_OK)      /* SBSW_PDUR_STACK_VARIABLE */
  {
    PduR_GetFctPtrOfTpActivateNextFifoSmTransition(PduR_GetStateOfFmFifoElementRam(peekedfmFifoElementRamTPReadIdx)) (peekedfmFifoElementRamTPReadIdx, E_OK);   /* SBSW_PDUR_CSL03 */
  }
}
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmWriteFinishedReadPending
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmWriteFinishedReadPending(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx);
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_GetFctPtrOfFinishReceptionRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRamIdx)) (rmSrcIdx, result);       /* SBSW_PDUR_CSL03 */
}
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FmWriteActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx);
  PduR_FmFifoRamIterType fmFifoRamIdx = PduR_GetFmFifoRomIdxOfRmSrcRom(rmSrcIdx);
  PduR_GetFctPtrOfTpCheckReady2TransmitRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRamIdx)) (rmSrcIdx); /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmWriteFinishedReadPending
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmWriteFinishedReadPending(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)
{
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_WRITE_FINISHED_READ_ACTIVE_STATEOFFMFIFOELEMENTRAM);        /* SBSW_PDUR_CSL03 */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FmWriteActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)
{
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_WRITE_READ_ACTIVE_STATEOFFMFIFOELEMENTRAM); /* SBSW_PDUR_CSL03 */
}
#endif
#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)
{
  PDUR_DUMMY_STATEMENT(fmFifoElementRamWriteIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateRead_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateRead_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)   /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_FMACTIVATEREAD, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(fmFifoElementRamWriteIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  PDUR_DUMMY_STATEMENT(fmFifoElementRamWriteIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmReadFinished
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmReadFinished(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  /* Reset buffer */
  PduR_Bm_ReleaseTxBuffer(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx));
  /* Reset Fifo element */
  PduR_Fm_ReleaseFifoElement(fmFifoElementRamWriteIdx);
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamWriteIdx))
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);   /* SBSW_PDUR_CSL03 */
  }
  else
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM);    /* SBSW_PDUR_CSL03 */
    /* release buffer connection */
    PduR_Fm_DissolveFifoElementTxBufferRelation(fmFifoElementRamWriteIdx);
  }
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif
#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmWriteReadActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmWriteReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_WRITE_FINISHED_READ_ACTIVE_STATEOFFMFIFOELEMENTRAM);        /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif
#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishWrite_FmWriteActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishWrite_FmWriteActive(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)
{
  if(result == E_OK)
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_WRITE_FINISHED_READ_PENDING_STATEOFFMFIFOELEMENTRAM);     /* SBSW_PDUR_CSL03 */
  }
  else
  {
    /* Reset Fifo element */
    PduR_Fm_ReleaseFifoElement(fmFifoElementRamWriteIdx);
    /* Reset buffer */
    PduR_Bm_ReleaseTxBuffer(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx));
    if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamWriteIdx))
    {
      PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM); /* SBSW_PDUR_CSL03 */
    }
    else
    {
      /* Shared buffer */
      PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM);  /* SBSW_PDUR_CSL03 */
      PduR_Fm_DissolveFifoElementTxBufferRelation(fmFifoElementRamWriteIdx);
    }
  }
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmWriteFinishedReadActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmWriteFinishedReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result)
{
  /* Reset Fifo element */
  PduR_Fm_ReleaseFifoElement(fmFifoElementRamReadIdx);
  /* Reset buffer */
  PduR_Bm_ReleaseTxBuffer(PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamReadIdx));
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamReadIdx))
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamReadIdx, PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM);    /* SBSW_PDUR_CSL03 */
  }
  else
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamReadIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM);     /* SBSW_PDUR_CSL03 */
    PduR_Fm_DissolveFifoElementTxBufferRelation(fmFifoElementRamReadIdx);
  }
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FmWriteReadActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FmWriteReadActive(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result)
{
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamReadIdx, PDUR_FM_READ_FINISHED_STATEOFFMFIFOELEMENTRAM);      /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result)       /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_FMFINISHREAD, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(fmFifoElementRamReadIdx);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_FinishRead_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_FinishRead_NoAction(PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx, Std_ReturnType result)
{
  PDUR_DUMMY_STATEMENT(fmFifoElementRamReadIdx);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FmAllocatedWithBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FmAllocatedWithBuffer(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)
{
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_WRITE_ACTIVE_STATEOFFMFIFOELEMENTRAM);      /* SBSW_PDUR_CSL03 */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ActivateWrite_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateWrite_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx)  /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_FM_ACTIVATEWRITE, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(fmFifoElementRamWriteIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
 /**********************************************************************************************************************
 * PduR_TxSm_CancelTransmitPreparation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_TxSm_CancelTransmitPreparation(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamIdx);
  PduR_RmDestRomIterType rmDestRomIdx;
  for(rmDestRomIdx = PduR_GetRmDestRomStartIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx < PduR_GetRmDestRomEndIdxOfRmSrcRom(rmSrcIdx); rmDestRomIdx++)
  {
    PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestRomIdx);
    if(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx) == PDUR_RM_TXINST_ACTIVE_TPTXINSTSMSTATEOFRMGDESTRAM)
    {
      PduR_GetFctPtrOfTpCancelTransmitTxInstSmTransition(PduR_GetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx)) (rmGDestRomIdx);   /* SBSW_PDUR_CSL03 */
    }
  }
}
#endif

#if ((PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
 /**********************************************************************************************************************
 * PduR_Fm_ActivateNext_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_ActivateNext_FatalError(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, Std_ReturnType result)    /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_FM_ACTIVATENEXT, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(fmFifoElementRamWriteIdx);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON) && (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_NoAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_NoAction(PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if ((PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON) && (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteFinishedReadActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteFinishedReadActive(PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
  PduR_TxSm_CancelTransmitPreparation(fmFifoElementRamReadIdx);
}
#endif

#if ((PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON) && (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteActive(PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamReadIdx);
  PduR_TpRxSmStateOfRmSrcRamType tpRxSmState = PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx);
  PduR_GetFctPtrOfTpCancelReceiveFifoSmTransition(tpRxSmState) (rmSrcIdx);      /* SBSW_PDUR_CSL03 */
}
#endif

#if ((PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON) && (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_DisableRouting_FmWriteActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Fm_DisableRouting_FmWriteReadActive(PduR_RmGDestRomIterType rmGDestRomIdx)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_FmFifoElementRamIterType fmFifoElementRamReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamReadIdx);
  PduR_TpRxSmStateOfRmSrcRamType tpRxSmState = PduR_GetTpRxSmStateOfRmSrcRam(rmSrcIdx);
  PduR_GetFctPtrOfTpCancelReceiveFifoSmTransition(tpRxSmState) (rmSrcIdx);      /* SBSW_PDUR_CSL03 */
  PduR_TxSm_CancelTransmitPreparation(fmFifoElementRamReadIdx);
}
#endif

#if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_RmTxinstActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA S 3673 2 */ /* MD_PduR_3673_AsrProto */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_RmTxinstActive(PduR_RmGDestRomIterType rmGDestRomIdx,
                                                                           PduR_BmTxBufferArrayRamIterType pduLength,
                                                                           SduDataPtrType sduDataPtr,
                                                                           P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  BufReq_ReturnType retVal;
  /* Get instance specific Tx Buffer element */
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));

  /** Action: Dequeue data **/
  retVal = PduR_Bm_GetData(bmTxBufferInstanceRomIdx, pduLength, sduDataPtr);    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  *availableDataPtr = (PduLengthType) PduR_GetTotalDataSizeOfBmTxBufferInstanceRam(bmTxBufferInstanceRomIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

  PDUR_DUMMY_STATEMENT(retry);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return retVal;
}
#endif

#if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_UnexpectedCall
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA  S 3673 2 */ /* MD_PduR_3673_UnexpectedCall */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_UnexpectedCall(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                           SduDataPtrType sduDataPtr,
                                                                           P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  PduR_Det_ReportError(PDUR_GWTP_TXINSTSM_COPYTXDATA_UNEXPECTEDCALL, PDUR_E_UNEXPECTED_CALL);
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(pduLength);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(sduDataPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return BUFREQ_E_NOT_OK;
}
#endif

#if (PDUR_COPYTXDATATXINSTSMTRANSITION == STD_ON)
 /**********************************************************************************************************************
 * PduR_TxInstSm_CopyTxData_RmTxinstAborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
/* PRQA  S 3673 2 */ /* MD_PduR_3673_Abort */
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_TxInstSm_CopyTxData_RmTxinstAborted(PduR_RmGDestRomIterType rmGDestRomIdx, PduR_BmTxBufferArrayRamIterType pduLength,
                                                                            SduDataPtrType sduDataPtr,
                                                                            P2CONST(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(pduLength);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(sduDataPtr);     /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(retry);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(availableDataPtr);       /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return BUFREQ_E_NOT_OK;
}
#endif

#if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTxConfirmation_RmTxinstActiveOrRmTxinstAborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *

 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_TxInstSm_TpTxConfirmation_RmTxinstActiveOrRmTxinstAborted(PduR_RmGDestRomIterType rmGDestRomIdx, Std_ReturnType result)
{
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_BmTxBufferInstanceRomIterType bmTxBufferInstanceRomIdx = PduR_GetBmTxBufferInstanceRomIdxOfFmFifoInstanceRam(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_SetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx, PDUR_RM_TXINST_IDLE_TPTXINSTSMSTATEOFRMGDESTRAM);  /* SBSW_PDUR_CSL03 */
  PduR_Bm_ResetTxBufferInstance(bmTxBufferInstanceRomIdx);
  PduR_DecPendingConfirmationsOfFmFifoRam(fmFifoRomIdx);        /* SBSW_PDUR_CSL03 */
  PduR_GetFctPtrOfFinishTransmissionRmSmTransition(PduR_GetTpTxSmStateOfFmFifoRam(fmFifoRomIdx)) (rmGDestRomIdx, result);       /* SBSW_PDUR_CSL03 */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPTXCONFIRMATIONTXSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTxConfirmation_UnexpectedCall
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_TxInstSm_TpTxConfirmation_UnexpectedCall(PduR_RmGDestRomIterType rmGDestRomIdx, Std_ReturnType result)
{
  PduR_Det_ReportError(PDUR_GWTP_TXINSTSM_TPTXCONFIRMATION_UNEXPECTEDCALL, PDUR_E_UNEXPECTED_CALL);
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  PDUR_DUMMY_STATEMENT(result); /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
}
#endif

#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTriggerTransmit_RmTxinstIdle
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpTriggerTransmit_RmTxinstIdle(PduR_RmDestRomIterType rmDestIdx)
{
  Std_ReturnType retVal = E_OK;
  PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRom(rmDestIdx);
  PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
  PduR_RmSrcRomIterType rmSrcIdx = PduR_GetRmSrcIdxOfFmFifoElementRam(fmFifoElementRamTPReadIdx);
  /* If query is necessary to keep the correct order in case of a N:1 routing */
  PduR_SetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx, PDUR_RM_TXINST_ACTIVE_TPTXINSTSMSTATEOFRMGDESTRAM);        /* SBSW_PDUR_CSL03 */
  if(PduR_RmTp_LoAndUpTransmit(rmSrcIdx, rmDestIdx) != E_OK)
  {
    retVal = E_NOT_OK;
  }
  return retVal;
}
#endif

#if (PDUR_TPTRIGGERTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpTriggerTransmit_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpTriggerTransmit_FatalError(PduR_RmDestRomIterType rmDestIdx)    /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_RM_TPTRIGGERTRANSMIT_FATALERROR, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(rmDestIdx);      /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return E_NOT_OK;
}
#endif

#if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_FatalError
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_FatalError(PduR_RmDestRomIterType rmGDestRomIdx) /* COV_PDUR_FATAL_ERROR */
{
  PduR_Det_ReportError(PDUR_GWTP_TXINSTSM_TPCANCELTRANSMIT_FATALERROR, PDUR_E_FATAL);
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return E_NOT_OK;
}
#endif

#if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_RmTxinstActive
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_RmTxinstActive(PduR_RmDestRomIterType rmGDestRomIdx)
{
  PduR_SetTpTxInstSmStateOfRmGDestRam(rmGDestRomIdx, PDUR_RM_TXINST_ABORTED_TPTXINSTSMSTATEOFRMGDESTRAM);       /* SBSW_PDUR_CSL01 */
  return E_OK;
}
#endif

#if (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON)
/**********************************************************************************************************************
 * PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_TxInstSm_TpCancelTransmit_RmTxinstAborted(PduR_RmDestRomIterType rmGDestRomIdx)    /* COV_PDUR_DUMMY_FUNCTION */
{
  /* nothing to do */
  PDUR_DUMMY_STATEMENT(rmGDestRomIdx);  /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
  return E_OK;
}
#endif

#if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_FINISHRECEPTIONRMSMTRANSITION == STD_ON) || (PDUR_FINISHTRANSMISSIONRMSMTRANSITION == STD_ON))
/**********************************************************************************************************************
 * PduR_Fm_Peek
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_Peek(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamIterType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  /* Start search on last read idx */
  PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx);
  /* FifoElements in the queue? */
  while(PduR_GetFillLevelOfFmFifoRam(fmFifoRamIdx) > 0)
  {
    /* Get next element */
    if(fmFifoElementRamTPReadIdx >= ((PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRamIdx) - (PduR_FmFifoElementRamIterType) 1)))
    {
      /* Wrap-around */
      fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRamIdx);
    }
    else
    {
      fmFifoElementRamTPReadIdx++;
    }
    *fmFifoElementRamIdx = fmFifoElementRamTPReadIdx;   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    /* FifoElement active? */
    if(PduR_Fm_IsFifoElementAllocated(fmFifoElementRamTPReadIdx) == E_OK)
    {
      retVal = E_OK;
      PduR_DecFillLevelOfFmFifoRam(fmFifoRamIdx);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
      PduR_SetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx, fmFifoElementRamTPReadIdx);      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
      break;
    }
    /* FifoElement is invalid -> Adapt fill level and update read pointer */
    else
    {
      PduR_DecFillLevelOfFmFifoRam(fmFifoRamIdx);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
      PduR_SetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRamIdx, fmFifoElementRamTPReadIdx);      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
      /* must be done because the Index in not set back to the begining. The Idx move through the buffer and the next element is initialized with pending */
    }
  }
  return retVal;
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AllocateFifoElement
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_AllocateFifoElement(PduR_FmFifoRamIterType fmFifoRamIdx, P2VAR(PduR_FmFifoElementRamIterType, AUTOMATIC, PDUR_APPL_DATA) fmFifoElementRamIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  /* Start search on last write idx */
  PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamWriteIdxOfFmFifoRam(fmFifoRamIdx);
  /* Free FifoElement available? */
  if(PduR_Fm_IsFifoElementAllocated(fmFifoElementRamWriteIdx) != E_OK)
  {
    PduR_SetStateOfFmFifoElementRam(fmFifoElementRamWriteIdx, PDUR_FM_ALLOCATED_STATEOFFMFIFOELEMENTRAM);       /* SBSW_PDUR_CSL03 */
    /* Return the found free FiFoElment */
    *fmFifoElementRamIdx = fmFifoElementRamWriteIdx;    /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */

    /* Get next fifo element */ /* Check if the write Idx is at the end (EndIdx -1) */
    if(fmFifoElementRamWriteIdx >= (PduR_GetFmFifoElementRamEndIdxOfFmFifoRom(fmFifoRamIdx) - (PduR_FmFifoElementRamIterType) 1))
    {
      /* Wrap-around */
      fmFifoElementRamWriteIdx = PduR_GetFmFifoElementRamStartIdxOfFmFifoRom(fmFifoRamIdx);
    }
    else
    {
      fmFifoElementRamWriteIdx++;
    }
    /* Update global FifoElement write pointer. This pointer points to the next available Fifo element. */
    PduR_SetFmFifoElementRamWriteIdxOfFmFifoRam(fmFifoRamIdx, fmFifoElementRamWriteIdx);        /* SBSW_PDUR_CSL03 */
    /* Update fill level */
    PduR_IncFillLevelOfFmFifoRam(fmFifoRamIdx); /* SBSW_PDUR_CSL03 */
    retVal = E_OK;
  }
  return retVal;
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_IsFifoElementAllocated
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
*********************************************************************************************************************/
LOCAL_INLINE FUNC(Std_ReturnType, PDUR_CODE) PduR_Fm_IsFifoElementAllocated(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  Std_ReturnType retVal = E_OK;
  /* Is a TxBuffer assigned/allocated to the FifoElement? */
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamIdx))
  {
    if((PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx) == (PduR_BmTxBufferInstanceRomIterType) PDUR_FM_ALLOCATED_WITH_BUFFER_STATEOFFMFIFOELEMENTRAM))
    {
      retVal = E_NOT_OK;
    }
  }
  else
  {
    if((PduR_GetStateOfFmFifoElementRam(fmFifoElementRamIdx) == (PduR_BmTxBufferInstanceRomIterType) PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM))
    {
      retVal = E_NOT_OK;
    }
  }
  return retVal;
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON )
/**********************************************************************************************************************
 * PduR_Bm_AllocateTxBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(BufReq_ReturnType, PDUR_CODE) PduR_Bm_AllocateTxBuffer(PduR_BmTxBufferIndRomIterType bmTxBufferRomIndStartId, PduR_BmTxBufferIndRomIterType bmTxBufferRomIndEndIdx,
                                                                         PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, PduR_BmTxBufferArrayRamIterType TpSduLength, P2VAR(PduLengthType,
                                                                                                                                                                                    AUTOMATIC,
                                                                                                                                                                                    PDUR_APPL_DATA)
                                                                         bufferSizePtr)
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  /* Get the assigned FifoElement */
  PduR_BmTxBufferRomIterType lastSuitableBmTxBufferRomIdx = (PduR_BmTxBufferRomIterType) PDUR_INVALID_VARARRAYIDX;
  PduR_BmTxBufferIndRomIterType bmTxBufferRomIndIdx;
  if(PduR_IsDedicatedTxBufferOfFmFifoElementRam(fmFifoElementRamWriteIdx))
  {
    PduR_BmTxBufferRomIterType txBufferRomIdx = PduR_GetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx);
    PduR_SetRxLengthOfBmTxBufferRam(txBufferRomIdx, TpSduLength);       /* SBSW_PDUR_CSL03 */
    *bufferSizePtr = (PduLengthType) PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(txBufferRomIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
    retVal = BUFREQ_OK;
  }
  else
  {
    for(bmTxBufferRomIndIdx = bmTxBufferRomIndStartId; bmTxBufferRomIndIdx < bmTxBufferRomIndEndIdx; bmTxBufferRomIndIdx++)
    {
      PduR_BmTxBufferRomIterType bmTxBufferRomIdx = PduR_GetBmTxBufferRomIdxOfBmTxBufferIndRom(bmTxBufferRomIndIdx);
      /* Buffer available? */
      if((PDUR_BUFFER_IDLE_TPBUFMGRSTATEOFBMTXBUFFERRAM == PduR_GetTpBufMgrStateOfBmTxBufferRam(bmTxBufferRomIdx)))
      {
        if(PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(bmTxBufferRomIdx) >= TpSduLength)
        {
          /* Initialize buffer and assign to FifoElement */
          PduR_Fm_AssignTxBuffer2FifoElement(fmFifoElementRamWriteIdx, bmTxBufferRomIdx, TpSduLength);
          /* Assign amount of available buffer */
          *bufferSizePtr = (PduLengthType) PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(bmTxBufferRomIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
          retVal = BUFREQ_OK;
          break;
        }
        else
        {
          /* This buffer is not large enough to hold the complete message but the buffer is available and could be used in case no other buffer is available. Reason: the buffer is large enough to hold at least one tpChunk. */
          lastSuitableBmTxBufferRomIdx = bmTxBufferRomIdx;
        }
      }
    }
  }
  /* No suitable buffer found which is large enough to store the full TP PDU. Use ring buffer mechanism (routing-on-the-fly) instead. */
  if(retVal != BUFREQ_OK)
  {
    /* The received TP PDU is larger than the largest available TP buffer element. The routing is executed using a ring buffer mechanism (routing on the fly) that allows a smaller receive buffer. */
    if((PduR_BmTxBufferRomIterType) PDUR_INVALID_VARARRAYIDX != lastSuitableBmTxBufferRomIdx)
    {
      /* Routing is possible, but the gateway will use the ring-buffer mechanism to perform routing. Routing must not be 1:N routing. */
      /* Initialize buffer and assign to FifoElement */
      PduR_Fm_AssignTxBuffer2FifoElement(fmFifoElementRamWriteIdx, lastSuitableBmTxBufferRomIdx, TpSduLength);
      /* Assign amount of available buffer */
      *bufferSizePtr = (PduLengthType) PduR_GetBmTxBufferArrayRamLengthOfBmTxBufferRom(lastSuitableBmTxBufferRomIdx);   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
      retVal = BUFREQ_OK;
    }
    else
    {
      /* Currently no buffer is available that would allow routing of a routing relation with the configured chunk size. 1:N routing relations can only be routed if a buffer of the I-PDU size is available. 1:1 routing relation can be routed principally but not at the current time. Prevented by validation! */
      retVal = BUFREQ_E_NOT_OK;
    }
  }
  return retVal;
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_AssignTxBuffer2FifoElement
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
  *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_AssignTxBuffer2FifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamWriteIdx, PduR_BmTxBufferRomIterType bmTxBufferRomIdx,
                                                                      PduR_BmTxBufferArrayRamIterType TpSduLength)
{
  /* Initialize buffer and assign to FifoElement */
  PduR_SetTpBufMgrStateOfBmTxBufferRam(bmTxBufferRomIdx, PDUR_BUFFER_RX_ACTIVE_TPBUFMGRSTATEOFBMTXBUFFERRAM);   /* SBSW_PDUR_CSL03 */
  PduR_SetRxLengthOfBmTxBufferRam(bmTxBufferRomIdx, TpSduLength);       /* SBSW_PDUR_CSL03 */
  PduR_SetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamWriteIdx, bmTxBufferRomIdx);       /* SBSW_PDUR_CSL03 */
}
#endif

#if (PDUR_BMTXBUFFERARRAYRAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Bm_ReleaseTxBuffer
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
  *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Bm_ReleaseTxBuffer(PduR_BmTxBufferRomIterType bmTxBufferRomIdx)
{
  /* Release the BmTxBufferRamTP buffer state machine and Reset Buffer element */
  PduR_SetTpBufMgrStateOfBmTxBufferRam(bmTxBufferRomIdx, PDUR_BUFFER_IDLE_TPBUFMGRSTATEOFBMTXBUFFERRAM);        /* SBSW_PDUR_CSL03 */
  PduR_Bm_ResetTxBuffer(bmTxBufferRomIdx);
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_DissolveFifoElementTxBufferRelation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
  *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_DissolveFifoElementTxBufferRelation(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_SetBmTxBufferRomIdxOfFmFifoElementRam(fmFifoElementRamIdx, (PduR_BmTxBufferRomIterType) PDUR_INVALID_VARARRAYIDX);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_FMFIFORAM == STD_ON)
/**********************************************************************************************************************
 * PduR_Fm_ReleaseFifoElement
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
  *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Fm_ReleaseFifoElement(PduR_FmFifoElementRamIterType fmFifoElementRamIdx)
{
  PduR_SetRmSrcIdxOfFmFifoElementRam((fmFifoElementRamIdx), (PduR_RmSrcRomIterType) PDUR_INVALID_VARARRAYIDX);  /* SBSW_PDUR_CSL03 */
  PduR_SetStateOfFmFifoElementRam(fmFifoElementRamIdx, PDUR_FM_IDLE_STATEOFFMFIFOELEMENTRAM);   /* SBSW_PDUR_CSL03 */
}
#endif

#if (PDUR_TRANSMITFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_Transmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Transmit(PduIdType txMulti2LoIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  Std_ReturnType retVal = E_NOT_OK;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    /* get default or the entered multi Idx */
    PduR_TxMulti2LoStateIterType txMulti2LoStateIdx = PduR_GetTxMulti2LoStateIdxOfTxMulti2Lo(txMulti2LoIdx);
    /* Wait for any Tx Confirmation or an other transmission call is pending (e.g. from a upper layer) */
    if(!PduR_IsTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx))
    {
      /* first transmission call */
      PduR_SetTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx, TRUE);    /* SBSW_PDUR_CSL03 */
      PduR_SetSrcHndOfTxMulti2LoState(txMulti2LoStateIdx, PduR_GetSrcHndOfTxMulti2Lo(txMulti2LoIdx));   /* SBSW_PDUR_CSL03 */
      PduR_SetTxMulti2LoIdxOfTxMulti2LoState(txMulti2LoStateIdx, txMulti2LoIdx);        /* SBSW_PDUR_CSL03 */
      PduR_SetTxMulti2LoSrcModuleIdxOfTxMulti2LoState(txMulti2LoStateIdx, PduR_GetSrcModuleIdxOfTxMulti2Lo(txMulti2LoIdx));     /* SBSW_PDUR_CSL03 */
      retVal = PduR_GetTransmitFctPtr(PduR_GetTransmitFctPtrIdxOfTxMulti2Lo(txMulti2LoIdx)) (PduR_GetDestHndOfTxMulti2Lo(txMulti2LoIdx), info); /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      if(retVal != E_OK)
      {
        PduR_RmTp_MultipleSourceHandler_Reset(txMulti2LoStateIdx);
      }
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_TPTXCONFIRMATIONFCTPTRUSEDOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_TpTxConfirmation
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_TpTxConfirmation(PduIdType txMulti2LoStateIdx, Std_ReturnType result)
{
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(PduR_IsTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx))
  {
    PduR_TxMulti2LoIdxOfTxMulti2LoStateType txMulti2LoIdx = PduR_GetTxMulti2LoIdxOfTxMulti2LoState(txMulti2LoStateIdx);
    PduR_TpTxConfirmationFctPtrIdxOfTxMulti2LoType tpTxConfirmationId = PduR_GetTpTxConfirmationFctPtrIdxOfTxMulti2Lo(txMulti2LoIdx);
    PduR_SrcHndOfTxMulti2LoStateType srcHnd = PduR_GetSrcHndOfTxMulti2LoState(txMulti2LoStateIdx);
    PduR_RmTp_MultipleSourceHandler_Reset(txMulti2LoStateIdx);
    PduR_GetTpTxConfirmationFctPtr(tpTxConfirmationId) (srcHnd, result);        /* SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY */
  }
  else
  {
    PduR_Det_ReportError(PDUR_GWTP_MULTIPLESOURCEHANDLER_TPTXCONFIRMATION, PDUR_E_UNEXPECTED_CALL);
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if (PDUR_COPYTXDATAFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_CopyTxData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(BufReq_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_CopyTxData(PduIdType txMulti2LoStateIdx, P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info,
                                                                              P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) retry, P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) availableDataPtr)
{
  BufReq_ReturnType retVal = BUFREQ_E_NOT_OK;
  /* Call appropriate CopyTxData function */
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  if(PduR_IsTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx))
  {
    PduR_TxMulti2LoIdxOfTxMulti2LoStateType txMulti2LoIdx = PduR_GetTxMulti2LoIdxOfTxMulti2LoState(txMulti2LoStateIdx);
# if (PDUR_RMDESTRPGROMIDXOFTXMULTI2LO == STD_ON)
    if((!PduR_IsRmDestRpgRomUsedOfTxMulti2Lo(txMulti2LoIdx)) || (0 != PduR_GetEnabledCntOfRpgDestState(PduR_GetRmDestRpgRomIdxOfTxMulti2Lo(txMulti2LoIdx))))    /* COV_PDUR_RPG_FEATURE_CHECK */
# endif
    {
      retVal = PduR_GetCopyTxDataFctPtr(PduR_GetCopyTxDataFctPtrIdxOfTxMulti2Lo(txMulti2LoIdx)) (PduR_GetSrcHndOfTxMulti2LoState(txMulti2LoStateIdx), info, retry, availableDataPtr);   /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
    }
  }
  else
  {
    PduR_Det_ReportError(PDUR_GWTP_MULTIPLESOURCEHANDLER_COPYTXDATA, PDUR_E_UNEXPECTED_CALL);
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_CANCELTRANSMITFCTPTRIDXOFTXMULTI2LO == STD_ON)
/**********************************************************************************************************************
 * PduR_RmTp_MultipleSourceHandler_CancelTransmit
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_CancelTransmit(PduIdType txMulti2LoIdx)
{
  Std_ReturnType retVal = E_NOT_OK;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  {
    /* get default or the entered multi Idx */
    PduR_TxMulti2LoStateIdxOfTxMulti2LoType txMulti2LoStateIdx = PduR_GetTxMulti2LoStateIdxOfTxMulti2Lo(txMulti2LoIdx);
    /* Wait for any Tx Confirmation or an other transmission call is pending (e.g. from a upper layer) */
    if(PduR_IsCancelTransmitFctPtrUsedOfTxMulti2Lo(txMulti2LoIdx))      /* COV_PDUR_FEATURE_ALWAYS_TRUE */
    {
      if((PduR_IsTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx)) && ((PduR_GetSrcHndOfTxMulti2Lo(txMulti2LoIdx) == PduR_GetSrcHndOfTxMulti2LoState(txMulti2LoStateIdx)) && (PduR_GetSrcModuleIdxOfTxMulti2Lo(txMulti2LoIdx) == PduR_GetTxMulti2LoSrcModuleIdxOfTxMulti2LoState(txMulti2LoStateIdx))))  /* COV_PDUR_CONDITIONAL_DEPENDENCE */
      {
        /* first transmission call */
        retVal = PduR_GetCancelTransmitFctPtr(PduR_GetCancelTransmitFctPtrIdxOfTxMulti2Lo(txMulti2LoIdx)) (PduR_GetDestHndOfTxMulti2Lo(txMulti2LoIdx)); /* SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR */
      }
      else
      {
        PduR_Det_ReportError(PDUR_GWTP_MULTIPLESOURCEHANDLER_CANCELTRANSMIT, PDUR_E_UNEXPECTED_CALL);
      }
    }
  }
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
  return retVal;
}
#endif

#if (PDUR_TXMULTI2LOSTATE == STD_ON)
 /*********************************************************************************************************************
  * PduR_RmTp_MultipleSourceHandler_Reset
  ********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_RmTp_MultipleSourceHandler_Reset(PduR_TxMulti2LoStateIterType txMulti2LoStateIdx)
{
  PduR_SetTransmissionActiveOfTxMulti2LoState(txMulti2LoStateIdx, FALSE);       /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetSrcHndOfTxMulti2LoState(txMulti2LoStateIdx, (PduR_SrcHndOfTxMulti2LoStateType) PduR_GetSizeOfTxMulti2LoState());      /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
  PduR_SetTxMulti2LoIdxOfTxMulti2LoState(txMulti2LoStateIdx, (PduR_TxMulti2LoIdxOfTxMulti2LoStateType) PduR_GetSizeOfTxMulti2LoState());        /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_Init
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Sm_Init(void)
{
  PduR_SmFibRamIterType smFibRamIdx;
  for(smFibRamIdx = 0; smFibRamIdx < PduR_GetSizeOfSmFibRam(); smFibRamIdx++)
  {
    PduR_SetLearnedConnectionIdOfSmFibRam(smFibRamIdx, PDUR_SM_UNLEARNED_CONNECTION);   /* SBSW_PDUR_CSL01 */
  }
}
#endif

#if (PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_AddOffset
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_AddOffset(PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx, uint32 metaData)
{
  PduR_MaskOfSmLinearTaToSaCalculationStrategyRomType mask = PduR_GetMaskOfSmLinearTaToSaCalculationStrategyRom(smLinearTaToSaCalculationStrategyIdx);
  PduR_OffsetOfSmLinearTaToSaCalculationStrategyRomType offset = PduR_GetOffsetOfSmLinearTaToSaCalculationStrategyRom(smLinearTaToSaCalculationStrategyIdx);
  PduR_SmSaType sourceAdress = (metaData + offset) & mask;
  return sourceAdress;
}
#endif

#if (PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_LinearTaToSaCalculationStrategy_SubtractOffset
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_LinearTaToSaCalculationStrategy_GetSa_SubtractOffset(PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx, uint32 metaData)
{
  PduR_MaskOfSmLinearTaToSaCalculationStrategyRomType mask = PduR_GetMaskOfSmLinearTaToSaCalculationStrategyRom(smLinearTaToSaCalculationStrategyIdx);
  PduR_OffsetOfSmLinearTaToSaCalculationStrategyRomType offset = PduR_GetOffsetOfSmLinearTaToSaCalculationStrategyRom(smLinearTaToSaCalculationStrategyIdx);
  PduR_SmSaType sourceAdress = (metaData - offset) & mask;
  return sourceAdress;
}
#endif

#if (PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetSa
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(PduR_SmSaType, PDUR_CODE) PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetSa(PduR_SmSaTaFromMetaDataCalculationStrategyRomIterType smSaTaFromMetaDataCalculationStrategyRomIdx,
                                                                                              uint32 metaData)
{
  /* Get adress startbit / mask */
  PduR_SaStartBitOfSmSaTaFromMetaDataCalculationStrategyRomType saStartBitPos = PduR_GetSaStartBitOfSmSaTaFromMetaDataCalculationStrategyRom(smSaTaFromMetaDataCalculationStrategyRomIdx);
  PduR_SaMaskOfSmSaTaFromMetaDataCalculationStrategyRomType saMask = PduR_GetSaMaskOfSmSaTaFromMetaDataCalculationStrategyRom(smSaTaFromMetaDataCalculationStrategyRomIdx);

  /* Extract SA and TA from meta data */
  PduR_SmSaType sourceAdress = (metaData >> saStartBitPos) & saMask;
  return sourceAdress;
}
#endif

#if (PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetTa
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(PduR_SmTaType, PDUR_CODE) PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetTa(PduR_SmSaTaFromMetaDataCalculationStrategyRomIterType smSaTaFromMetaDataCalculationStrategyRomIdx,
                                                                                              uint32 metaData)
{
  /* Get adress startbit / mask */
  PduR_TaStartBitOfSmSaTaFromMetaDataCalculationStrategyRomType taStartBitPos = PduR_GetTaStartBitOfSmSaTaFromMetaDataCalculationStrategyRom(smSaTaFromMetaDataCalculationStrategyRomIdx);
  PduR_TaMaskOfSmSaTaFromMetaDataCalculationStrategyRomType taMask = PduR_GetTaMaskOfSmSaTaFromMetaDataCalculationStrategyRom(smSaTaFromMetaDataCalculationStrategyRomIdx);

  /* Extract SA and TA from meta data */
  PduR_SmTaType targetAdress = (metaData >> taStartBitPos) & taMask;
  return targetAdress;
}
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_GetMetaData
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(uint32, PDUR_CODE) PduR_Sm_GetMetaData(P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info, uint8 metaDataLength)
{
  uint32 metaData = 0;
  SduDataPtrType metaDataPtr = &info->SduDataPtr[info->SduLength - metaDataLength];
  uint8 itMetaData;
  for(itMetaData = metaDataLength; itMetaData > 0; itMetaData--)
  {
    metaData = (((uint32) (metaData << 8)) | metaDataPtr[itMetaData - 1]);
  }
  return metaData;
}
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_UpdateFib
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_Sm_UpdateFib(PduR_SmDataPlaneRomIterType smDataPlaneIdx, PduR_SmSaType sourceAdress, PduR_ConnectionIdOfSmSrcRomType learnedConnectionId)
{
  PduR_SmFibRamIterType smFibRamIdx = PduR_GetSmFibRamStartIdxOfSmDataPlaneRom(smDataPlaneIdx) + sourceAdress;
  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  PduR_SetLearnedConnectionIdOfSmFibRam(smFibRamIdx, (PduR_LearnedConnectionIdOfSmFibRamType) learnedConnectionId);     /* SBSW_PDUR_CSL01 */
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */
}
#endif

#if (PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_CheckLearned
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_CheckLearned(PduR_SmDataPlaneRomIterType smDataPlaneIdx, PduR_SmTaType targetAdress, PduR_ConnectionIdOfSmGDestRomType destConnection)
{
  PduR_FilterReturnType filterResult;
  PduR_SmFibRamIterType smFibRamIdx = PduR_GetSmFibRamStartIdxOfSmDataPlaneRom(smDataPlaneIdx) + targetAdress;
  PduR_LearnedConnectionIdOfSmFibRamType learnedConnectionId;

  SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();      /* PRQA S 3109 */ /* MD_MSR_14.3 */
  learnedConnectionId = PduR_GetLearnedConnectionIdOfSmFibRam(smFibRamIdx);
  SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();       /* PRQA S 3109 */ /* MD_MSR_14.3 */

  if((learnedConnectionId == PDUR_SM_UNLEARNED_CONNECTION) ||   /* Related connection is no learned yet. */
     (learnedConnectionId == destConnection))   /* Routing destination connection is the learned connection. */
  {
    filterResult = PDUR_FILTER_PASS;    /* Let the routing pass */
  }
  else
  {
    filterResult = PDUR_FILTER_BLOCK;   /* Block the routing, it is not the learned destination connection */
  }
  return filterResult;
}
#endif

#if(PDUR_SMDATAPLANEROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_SrcFilter_LinearTaToSaCalculationStrategy
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Sm_SrcFilter_LinearTaToSaCalculationStrategy(PduR_SmSrcRomIterType smSrcRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_SmDataPlaneRomIterType smDataPlaneIdx = PduR_GetSmDataPlaneRomIdxOfSmSrcRom(smSrcRomIdx);
  PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx = PduR_GetSmLinearTaToSaCalculationStrategyRomIdxOfSmDataPlaneRom(smDataPlaneIdx);

  /* Get adress info from Pdu */
  uint32 metaData = PduR_Sm_GetMetaData(info, PduR_GetMetaDataLengthOfSmSrcRom(smSrcRomIdx));   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_Sm_LinearTaToSaCalculationStrategy_GetSaFctPtrType getSaFctPtr =
    PduR_GetSmLinearTaToSaCalculationStrategyGetSaFctPtr(PduR_GetSmLinearTaToSaCalculationStrategyGetSaFctPtrIdxOfSmSrcRom(smSrcRomIdx));
  PduR_SmSaType sourceAdress = getSaFctPtr(smLinearTaToSaCalculationStrategyIdx, metaData);     /* SBSW_PDUR_CSL03 */

  /* Update FIB */
  PduR_Sm_UpdateFib(smDataPlaneIdx, sourceAdress, PduR_GetConnectionIdOfSmSrcRom(smSrcRomIdx));
}
#endif

#if(PDUR_SMLINEARTATOSACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_DestFilter_LinearTaToSaCalculationStrategy
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_DestFilter_LinearTaToSaCalculationStrategy(PduR_SmGDestRomIterType smGDestRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_SmDataPlaneRomIterType smDataPlaneIdx = PduR_GetSmDataPlaneRomIdxOfSmGDestRom(smGDestRomIdx);
  PduR_SmLinearTaToSaCalculationStrategyRomIterType smLinearTaToSaCalculationStrategyIdx = PduR_GetSmLinearTaToSaCalculationStrategyRomIdxOfSmDataPlaneRom(smDataPlaneIdx);

  /* Get target adress from meta data */
  uint32 metaData = PduR_Sm_GetMetaData(info, PduR_GetMetaDataLengthOfSmGDestRom(smGDestRomIdx));       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_MaskOfSmLinearTaToSaCalculationStrategyRomType mask = PduR_GetMaskOfSmLinearTaToSaCalculationStrategyRom(smLinearTaToSaCalculationStrategyIdx);
  PduR_SmTaType targetAdress = metaData & mask;

  /* Check if destination is already known */
  return PduR_Sm_CheckLearned(smDataPlaneIdx, targetAdress, PduR_GetConnectionIdOfSmGDestRom(smGDestRomIdx));
}
#endif

#if (PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_SrcFilter_SaTaFromMetaDataCalculationStrategy
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_Sm_SrcFilter_SaTaFromMetaDataCalculationStrategy(PduR_SmSrcRomIterType smSrcRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_SmDataPlaneRomIterType smDataPlaneRomIdx = PduR_GetSmDataPlaneRomIdxOfSmSrcRom(smSrcRomIdx);

  /* Get adress info from Pdu */
  uint32 metaData = PduR_Sm_GetMetaData(info, PduR_GetMetaDataLengthOfSmSrcRom(smSrcRomIdx));   /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_SmSaType sa = PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetSa(PduR_GetSmSaTaFromMetaDataCalculationStrategyRomIdxOfSmDataPlaneRom(smDataPlaneRomIdx), metaData);       /* SBSW_PDUR_STACK_VARIABLE */

  /* Update FIB */
  PduR_Sm_UpdateFib(smDataPlaneRomIdx, sa, PduR_GetConnectionIdOfSmSrcRom(smSrcRomIdx));
}
#endif

#if (PDUR_SMSATAFROMMETADATACALCULATIONSTRATEGYROM == STD_ON)
/**********************************************************************************************************************
 * PduR_Sm_DestFilter_SaTaFromMetaDataCalculationStrategy
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *********************************************************************************************************************/
FUNC(PduR_FilterReturnType, PDUR_CODE) PduR_Sm_DestFilter_SaTaFromMetaDataCalculationStrategy(PduR_SmGDestRomIterType smGDestRomIdx, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info)
{
  PduR_SmDataPlaneRomIterType smDataPlaneRomIdx = PduR_GetSmDataPlaneRomIdxOfSmGDestRom(smGDestRomIdx);

  /* Get adress info from Pdu */
  uint32 metaData = PduR_Sm_GetMetaData(info, PduR_GetMetaDataLengthOfSmGDestRom(smGDestRomIdx));       /* SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION */
  PduR_SmSaType ta = PduR_Sm_SaTaFromMetaDataCalculationStrategy_GetTa(PduR_GetSmSaTaFromMetaDataCalculationStrategyRomIdxOfSmDataPlaneRom(smDataPlaneRomIdx), metaData);       /* SBSW_PDUR_STACK_VARIABLE */

  /* Check if destination is already known */
  return PduR_Sm_CheckLearned(smDataPlaneRomIdx, ta, PduR_GetConnectionIdOfSmGDestRom(smGDestRomIdx));
}
#endif

#if (PDUR_RPG == STD_ON)
/**********************************************************************************************************************
 * PduR_EnableRouting
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_EnableRouting(PduR_RoutingPathGroupIdType id)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
  /* Check parameter 'Handle Id' */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_UNINIT;
  }
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  else if(id >= PduR_GetSizeOfRpg())
  {
    errorId = PDUR_E_ROUTING_PATH_GROUP_ID_INVALID;
  }
#  if(PDUR_INVALIDHNDOFRPG == STD_ON)
  else if(PduR_IsInvalidHndOfRpg(id))
  {
    errorId = PDUR_E_ROUTING_PATH_GROUP_ID_INVALID;
  }
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      if(!PduR_IsEnabledOfRpgState(id))
      {
        PduR_RmDestRpgRomIterType rmDestRpgRomIndIdx;
        for(rmDestRpgRomIndIdx = PduR_GetRmDestRpgRomIndStartIdxOfRpg(id); rmDestRpgRomIndIdx < PduR_GetRmDestRpgRomIndEndIdxOfRpg(id); rmDestRpgRomIndIdx++)
        {
          PduR_RmDestRpgRomIndType rmDestRpgRomIdx = PduR_GetRmDestRpgRomInd(rmDestRpgRomIndIdx);
          PduR_SetEnabledCntOfRpgDestState(rmDestRpgRomIdx, PduR_GetEnabledCntOfRpgDestState(rmDestRpgRomIdx) + 1);     /* SBSW_PDUR_CSL03 */
        }
        PduR_SetEnabledOfRpgState(id, TRUE);    /* SBSW_PDUR_CSL01 */
      }
      SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();   /* PRQA S 3109 */ /* MD_MSR_14.3 */
    }
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_ENABLEROUTING, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (PDUR_RPG == STD_ON)
/**********************************************************************************************************************
 * PduR_DisableRouting
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *********************************************************************************************************************/
FUNC(void, PDUR_CODE) PduR_DisableRouting(PduR_RoutingPathGroupIdType id)
{
  uint8 errorId = PDUR_E_NO_ERROR;
  /* ----- Development Error Checks ------------------------------------- */
  /* Check parameter 'Handle Id' */
  if(PduR_IsInitialized() == FALSE)
  {
    errorId = PDUR_E_UNINIT;
  }
# if (PDUR_DEV_ERROR_DETECT == STD_ON)  /* COV_PDUR_VAR_DEV_ERROR_DETECT */
  else if(id >= PduR_GetSizeOfRpg())
  {
    errorId = PDUR_E_ROUTING_PATH_GROUP_ID_INVALID;
  }
#  if(PDUR_INVALIDHNDOFRPG == STD_ON)
  else if(PduR_IsInvalidHndOfRpg(id))
  {
    errorId = PDUR_E_ROUTING_PATH_GROUP_ID_INVALID;
  }
#  endif
# endif
  else
  {
    /* ----- Implementation ----------------------------------------------- */
    SchM_Enter_PduR_PDUR_EXCLUSIVE_AREA_0();    /* PRQA S 3109 */ /* MD_MSR_14.3 */
    {
      /** Guard: Routing is disabled **/
      if(PduR_IsEnabledOfRpgState(id))
      {
        PduR_RmDestRpgRomIterType rmDestRpgRomIndIdx;
        for(rmDestRpgRomIndIdx = PduR_GetRmDestRpgRomIndStartIdxOfRpg(id); rmDestRpgRomIndIdx < PduR_GetRmDestRpgRomIndEndIdxOfRpg(id); rmDestRpgRomIndIdx++)
        {
          PduR_RmDestRpgRomIndType rmDestRpgRomInd = PduR_GetRmDestRpgRomInd(rmDestRpgRomIndIdx);
# if (PDUR_RMGDESTROMIFIDXOFRMDESTRPGROM == STD_ON)
          if(PduR_IsRmGDestRomIfUsedOfRmDestRpgRom(rmDestRpgRomInd))
          {
            PduR_DisableIfRoutingAction(PduR_GetRmGDestRomIfIdxOfRmDestRpgRom(rmDestRpgRomInd));
          }
# endif
# if ((PDUR_RMGDESTROMUSEDOFRMDESTRPGROM == STD_ON) && (PDUR_TPCANCELTRANSMITTXINSTSMTRANSITION == STD_ON))
          if(PduR_IsRmGDestRomUsedOfRmDestRpgRom(rmDestRpgRomInd))
          {
            PduR_RmGDestRomIterType rmGDestRomIdx = PduR_GetRmGDestRomIdxOfRmDestRpgRom(rmDestRpgRomInd);
            PduR_FmFifoRomIterType fmFifoRomIdx = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIdx));
            PduR_FmFifoElementRamIterType fmFifoElementRamTPReadIdx = PduR_GetFmFifoElementRamReadIdxOfFmFifoRam(fmFifoRomIdx);
            PduR_StateOfFmFifoElementRamType fifoSmState = PduR_GetStateOfFmFifoElementRam(fmFifoElementRamTPReadIdx);
            PduR_GetFctPtrOfTpDisableRoutingTxSmTransition(fifoSmState) (rmGDestRomIdx);        /* SBSW_PDUR_CSL03 */
          }
# endif
          PduR_SetEnabledCntOfRpgDestState(rmDestRpgRomInd, (PduR_GetEnabledCntOfRpgDestState(rmDestRpgRomInd) - 1));   /* SBSW_PDUR_CSL03 */
        }
        PduR_SetEnabledOfRpgState(id, FALSE);   /* SBSW_PDUR_CSL01 */
      }
      SchM_Exit_PduR_PDUR_EXCLUSIVE_AREA_0();   /* PRQA S 3109 */ /* MD_MSR_14.3 */
    }
  }
  /* ----- Development Error Report --------------------------------------- */
# if (PDUR_DEV_ERROR_REPORT == STD_ON)
  if(errorId != PDUR_E_NO_ERROR)
  {
    PduR_Det_ReportError(PDUR_FCT_DISABLEROUTING, errorId);
  }
# else
  PDUR_DUMMY_STATEMENT(errorId);        /* PRQA S 3112, 3199 */ /* MD_MSR_14.2 */ /* lint -e{438} */
# endif
}       /* PRQA S 6080 */ /* MD_MSR_STMIF */
#endif

#if (PDUR_RMGDESTROMIFIDXOFRMDESTRPGROM == STD_ON)
/**********************************************************************************************************************
 * PduR_DisableIfRoutingAction
 *********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *********************************************************************************************************************/
LOCAL_INLINE FUNC(void, PDUR_CODE) PduR_DisableIfRoutingAction(PduR_RmGDestRomIdxOfRmDestRomType rmGDestRomIfIdx)
{
# if ((PDUR_EXISTS_DIRECT_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON) || (PDUR_EXISTS_T_T_FIFO_BUFFER_FIFOTYPEOFRMGDESTROM == STD_ON))
  if(PduR_IsFmFifoInstanceRomUsedOfRmGDestRom(rmGDestRomIfIdx))
  {
    PduR_FmFifoInstanceRomIterType fmFifoInstanceRom = PduR_GetFmFifoInstanceRomIdxOfRmGDestRom(rmGDestRomIfIdx);
    PduR_FmFifoRomIterType fmFifoRom = PduR_GetFmFifoRomIdxOfFmFifoInstanceRom(fmFifoInstanceRom);
    if(PduR_GetFillLevelOfFmFifoRam(fmFifoRom) > 0)
    {
      PduR_Fm_FlushFiFo(rmGDestRomIfIdx);
    }
  }
# endif

# if (PDUR_TXIFMULTI2LO == STD_ON)
  if(PduR_IsIf2LoMultiRoutingOfRmGDestRom(rmGDestRomIfIdx))
  {
    PduR_RmIf_MultipleSourceHandler_Reset(PduR_GetTxIfMulti2LoStateIdxOfTxIfMulti2Lo(PduR_GetDestHndOfRmGDestRom(rmGDestRomIfIdx)));
  }
# endif
  PduR_SetPduRFiFoRoutingStateOfRmGDestRam(rmGDestRomIfIdx, PduR_GetNextState_For_Init_If_Routing_StateOfIfRoutingStateTable(PduR_GetFifoTypeOfRmGDestRom(rmGDestRomIfIdx)));   /* SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION */
}
#endif

#define PDUR_STOP_SEC_CODE
#include "MemMap.h"    /* PRQA S 5087 */        /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * GLOBAL MISRA / PCLINT JUSTIFICATION
 *********************************************************************************************************************/
/* module specific MISRA deviations:

    MD_PduR_3673_AsrProto:
    Reason:     Function prototype is based on AUTOSAR specification. The function prototype which describe the
    interfaces vary between different specifications. No optimization possible.
    Risk:       Unexpected value modification.
    Prevention: Covered by code review.

    MD_PduR_3673_UnexpectedCall:
    Reason:     The function is called unexpectedly and must not do anything. But the function parameter prototype
                must be a pointer to var because the expected functions performes a write access.
    Risk:       Unexpected value modification.
    Prevention: Covered by code review.

    MD_PduR_3673_Abort:
    Reason:     The function is called unexpectedly because the routing is already aborted and must not do anything.
                But the function parameter prototype must be a pointer to var because the expected functions
                performes a write access.
    Risk:       Unexpected value modification.
    Prevention: Covered by code review.

    MD_PduR_0311:
    Reason:     Dangerous pointer cast results in loss of const qualification.
    Risk:       Write operation to ROM
    Prevention: Reviewed the complete code sequence. Only read operations are performed

*/

/* *INDENT-OFF* */
/* SBSW_JUSTIFICATION_BEGIN

  \ID SBSW_PDUR_IDX_PARAM_INTERNAL_FUNCTION
    \DESCRIPTION The index is passed to an internal function as parameter and is used within the function to write to a memory location.
    \COUNTERMEASURE \N The index is read by the calling function using the ComStackLib macros. The ComStackLib ensures that the index is valid.

  \ID SBSW_PDUR_VALID_PTR_ENSURED_BY_CALLING_FUNCTION
    \DESCRIPTION A pointer is written or passed to a function. The pointer can possibly be used to write to the corresponding memory location.
    \COUNTERMEASURE \N The calling function ensures that the pointer is valid.

  \ID SBSW_PDUR_STACK_VARIABLE
    \DESCRIPTION A pointer is passed to a function. The pointer can possibly be used to write to the corresponding memory location.
    \COUNTERMEASURE \N The pointer points to a local stack variable, therefore it's always valid.

  \ID SBSW_PDUR_GETVERSION_PARAM
    \DESCRIPTION    The PduR_GetVersionInfo writes to the 'versioninfo' pointer parameter. It is checked against NULL,
                    but this does not guarantee that the referenced memory is valid.
    \COUNTERMEASURE \N  Pointers passed to public PduR APIs point to a valid memory range. A general countermeasure is included in the safety manual.

  \ID SBSW_PDUR_API_CALL_FORWARDING_ID_AND_PTR
    \DESCRIPTION    The API is called with an Id and a pointer.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.

    \COUNTERMEASURE \N The function pointer is read using the passed Id and ComStackLib macros.
                       The Id is a SNV provided by the lower layer. It is checked when it was first passed to the PduR module.
                       The pointer is either forwarded and assumed to be valid or it is a local stack variable.

  \ID SBSW_PDUR_API_CALL_FORWARDING_ID_ONLY
    \DESCRIPTION    The API is called with an Id.
                    The API call is forwarded using a function pointer which is read using ComStackLib macros.
    \COUNTERMEASURE \R The function pointer is read using the passed Id and ComStackLib macros.
                       The Id is a SNV provided by the lower layer.
                       It is checked when it was first passed to the PduR module.

  \ID SBSW_PDUR_MEM_CPY_FIFOMGR
    \DESCRIPTION Call to copy RAM data to RAM
    \COUNTERMEASURE \N The passed pointers are either read by ComStackLib macros or are passed through and checked by one of the calling functions.
                       The size of the copy operation is always equal or less than the size of the destination buffer. This is ensured by the calling function.

  \ID SBSW_PDUR_MEM_CPY_RAM2RAM
    \DESCRIPTION Call to copy RAM data to RAM
    \COUNTERMEASURE \R The passed pointers are either read by ComStackLib macros or are passed through and checked by one of the calling functions.
                    \R The size of the copy operation is checked against the remaining free buffer space.

  \ID SBSW_PDUR_CSL01
    \DESCRIPTION Index Access is using ComStackLib
    \COUNTERMEASURE  \N Qualified use-case CSL01 of ComStackLib.

  \ID SBSW_PDUR_CSL02
    \DESCRIPTION  Access of Table1, via indirection over Table2
                  with same index using ComStackLib.
    \COUNTERMEASURE \N Qualified use-case CSL02 of ComStackLib

  \ID SBSW_PDUR_CSL03
    \DESCRIPTION Access to Table1 via indirection over Table2.
    \COUNTERMEASURE \N Qualified use-case CSL03 of ComStackLib

  SBSW_JUSTIFICATION_END */

/*
  SBSW_PDUR_CSL01 Boundary check using generated identifiers:
  Table1 -- Size of the table itself

  SBSW_PDUR_CSL02 Arrays of same size:
  Table1 -- SizeRelation --> Table2

  SBSW_PDUR_CSL03: Usage of modelled indirections:
  Table1 -- Key Size Relation --> Table2
*/

/* COV_JUSTIFICATION_BEGIN
  \ID COV_PDUR_FEATURE_ALWAYS_TRUE
    \ACCEPT TX
    \ACCEPT TF tf xf
    \REASON Depending on the configuration the feature check can always be true. In this case the compiler removes the check.

  \ID COV_PDUR_RPG_FEATURE_CHECK
    \ACCEPT TF xf tf
    \ACCEPT TF tx tf
    \REASON For postbuild configurations the feature has a runtime feature check. For none-postbuild configurations with routing path groups the first condition is always false.

  \ID COV_PDUR_CONDITIONAL_DEPENDENCE
    \ACCEPT TF tf tf tx
    \ACCEPT TF tf tx tf
    \REASON The conditions are not independent due to short-circuit evaluation.

  \ID COV_PDUR_MISRA
    \ACCEPT X
    \ACCEPT TX
    \REASON [MSR_COV_MISRA]

  \ID COV_PDUR_FATAL_ERROR
    \ACCEPT X
    \ACCEPT XF
    \ACCEPT TX
    \REASON Fatal error check.

  \ID COV_PDUR_ROBUSTNESS
    \ACCEPT TF tx tf
    \ACCEPT TX tx tx
    \REASON This check increases robustness.

  \ID COV_PDUR_DUMMY_FUNCTION
    \ACCEPT X
    \REASON Depending on the configuration the dummy function is not callable in all configuration variants.
            It is just a dummy function with out influencing the control- and data flow.

  \ID COV_PDUR_VAR_FATAL_ERROR
    \ACCEPT TX
    \REASON Fatal error check.

  \ID COV_PDUR_VAR_DEV_ERROR_DETECT
    \ACCEPT TX
    \REASON Det error detection must always be enabled for SafeBsw.

  \ID COV_PDUR_ERROR_NOTIFICATION
    \ACCEPT XF
    \REASON Always false. Feature is not part of SafeBsw.

  \ID COV_PDUR_VAR_DEPENDENT_SWITCH
    \ACCEPT TX
    \REASON The nested switch depends on a previous switch.

COV_JUSTIFICATION_END */

/* *INDENT-ON* */

/**********************************************************************************************************************
 * END OF FILE: PduR.c
 *********************************************************************************************************************/
