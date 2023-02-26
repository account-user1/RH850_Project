/**********************************************************************************************************************
* Copyright 2016 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_SyncCrc.h
* Module Description: Header file for the CM800A SyncCRC component
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 01/12/16  1        KJS       Initial Version                                                                 EA4#5405
* 07/05/17  2        KJS       Updated function prototype to increase ResvKey_Arg from 16 to 32 bits           EA4#13223
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_SYNCCRC_H
#define CDD_SYNCCRC_H

/************************************************ Include Statements *************************************************/
#include "CDD_SyncCrc_Cfg_private.h" /* Required for AUTOSAR wrapper */

/******************************************** File Level Rule Deviations *********************************************/

/**************************************************** Type defs ******************************************************/

/************************************************ Embedded Constants *************************************************/

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/
extern FUNC(void, CDD_SyncCrc_CODE) SyncCrcInit0(void);
extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u16_Oper( P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                     uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg,
                                                                     P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc16BitCrc_u08_Oper( P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                     uint32 Len_Arg, uint16 StrtVal_Arg, boolean FirstCall_Arg,
                                                                     P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u16_Oper( P2VAR(uint16, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                     uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg,
                                                                     P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u32_Oper( P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                     uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg,
                                                                     P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc32BitCrc_u08_Oper( P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                     uint32 Len_Arg, uint32 StrtVal_Arg, boolean FirstCall_Arg,
                                                                     P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc0X2F_Oper( P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                    uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg,
                                                                    P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) Calc8BitCrc_Oper( P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) DataPtr_Arg,
                                                                uint32 Len_Arg, uint8 StrtVal_Arg, boolean FirstCall_Arg,
                                                                P2VAR(uint8, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CalcCrcRes_Arg);

extern FUNC(Std_ReturnType, CDD_SyncCrc_CODE) ResvCrcHwUnit_Oper( CrcHwResvMod1 Mod_Arg, CrcHwResvCfg1 CrcCfg_Arg,
                                                                  P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwInRegAdr_Arg,
                                                                  P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) CrcHwOutRegAdr_Arg,
                                                                  uint32 StrtVal_Arg, P2VAR(uint32, AUTOMATIC, RTE_CDD_SYNCCRC_APPL_VAR) ResvKey_Arg);

#if ( STD_ON == ARWRPRENAD_CNT_U08 )
    extern FUNC(uint8, CDD_SyncCrc_CODE) Crc_CalculateCRC8( const uint8* Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8, boolean Crc_IsFirstCall );
    extern FUNC(uint8, CDD_SyncCrc_CODE) Crc_CalculateCRC8H2F( const uint8* Crc_DataPtr, uint32 Crc_Length, uint8 Crc_StartValue8H2F, boolean Crc_IsFirstCall );
    extern FUNC(uint16, CDD_SyncCrc_CODE) Crc_CalculateCRC16( const uint8* Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall );
    extern FUNC(uint32, CDD_SyncCrc_CODE) Crc_CalculateCRC32( const uint8* Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall );
#endif
/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_SYNCCRC_H */
