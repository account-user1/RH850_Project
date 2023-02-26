/*********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name:   NxtrIntrpn.h
* Module Description: Source file for the interpolation library
* Project           : CBD
* Author            : Kevin Smith
**********************************************************************************************************************
* Version Control:
* %version:          %
* %derived_by:       %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev     Author  Change Description                                                              SCR #
* --------  ------- ------- ---------------------------------------------------------------------------     ----------
* 02/02/15  1       KJS     Converted EA1.x/EA3.x interpolation library functions to EA4.x standards        EA4#109
*                           Added linear interpolation rounding functions
*********************************************************************************************************************/

#ifndef NXTRINTRPN_H
#define NXTRINTRPN_H

#include "Std_Types.h"

/*********************************************************************************************************************
 * Linear Interpolation - Truncating Functions - Fixed X Axis
 ********************************************************************************************************************/

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_u16FixdXu16VariY( uint16 DeltaX,
                                                                     const uint16 YTbl[],
                                                                     uint16 Size,
                                                                     uint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_u16FixdXs16VariY( uint16 DeltaX,
                                                                     const sint16 YTbl[],
                                                                     uint16 Size,
                                                                     uint16 Inp);
                                                                     
/*********************************************************************************************************************
 * Linear Interpolation - Truncating Functions - Variable X Axis
 ********************************************************************************************************************/

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_u16VariXu16VariY( const uint16 XTbl[],
                                                                     const uint16 YTbl[],
                                                                     uint16 Size,
                                                                     uint16 Inp);

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpn_u16_s16VariXu16VariY( const sint16 XTbl[],
                                                                     const uint16 YTbl[],
                                                                     uint16 Size,
                                                                     sint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_s16VariXs16VariY( const sint16 XTbl[],
                                                                     const sint16 YTbl[],
                                                                     uint16 Size,
                                                                     sint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpn_s16_u16VariXs16VariY( const uint16 XTbl[],
                                                                     const sint16 YTbl[],
                                                                     uint16 Size,
                                                                     uint16 Inp);

/*********************************************************************************************************************
 * Linear Interpolation - Rounding Functions - Fixed X Axis
 ********************************************************************************************************************/

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_u16FixdXu16VariY( uint16 DeltaX,
                                                                              const uint16 YTbl[],
                                                                              uint16 Size,
                                                                              uint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_u16FixdXs16VariY( uint16 DeltaX,
                                                                              const sint16 YTbl[],
                                                                              uint16 Size,
                                                                              uint16 Inp);

/*********************************************************************************************************************
 * Linear Interpolation - Rounding Functions - Variable X Axis
 ********************************************************************************************************************/

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_u16VariXu16VariY( const uint16 XTbl[],
                                                                              const uint16 YTbl[],
                                                                              uint16 Size,
                                                                              uint16 Inp);

extern FUNC(uint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_u16_s16VariXu16VariY( const sint16 XTbl[],
                                                                              const uint16 YTbl[],
                                                                              uint16 Size,
                                                                              sint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_s16VariXs16VariY( const sint16 XTbl[],
                                                                              const sint16 YTbl[],
                                                                              uint16 Size,
                                                                              sint16 Inp);

extern FUNC(sint16, NxtrIntrpn_CODE) LnrIntrpnWithRound_s16_u16VariXs16VariY( const uint16 XTbl[],
                                                                              const sint16 YTbl[],
                                                                              uint16 Size,
                                                                              uint16 Inp);

/*********************************************************************************************************************
 * Bilinear Interpolation - Common X Axis
 ********************************************************************************************************************/

extern FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_u16CmnXu16MplY( uint16 BilnrSeln,
                                                                              uint16 Inp, 
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const uint16 XTbl[],
                                                                              const uint16 MplYTbl[], 
                                                                              uint16 XSize);

extern FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_u16CmnXs16MplY( uint16 BilnrSeln,
                                                                              uint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const uint16 XTbl[],
                                                                              const sint16 MplYTbl[],
                                                                              uint16 XSize);

extern FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_s16CmnXs16MplY( uint16 BilnrSeln,
                                                                              sint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const sint16 XTbl[],
                                                                              const sint16 MplYTbl[],
                                                                              uint16 XSize);

extern FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_s16CmnXu16MplY( uint16 BilnrSeln,
                                                                              sint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const sint16 XTbl[],
                                                                              const uint16 MplYTbl[],
                                                                              uint16 XSize);

/*********************************************************************************************************************
 * Bilinear Interpolation - Multiple X Axis
 ********************************************************************************************************************/

 extern FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_u16MplXu16MplY( uint16 BilnrSeln,
                                                                               uint16 Inp,
                                                                               const uint16 BilnrSelnTbl[],
                                                                               uint16 BilnrSelnSize,
                                                                               const uint16 MplXTbl[],
                                                                               const uint16 MplYTbl[],
                                                                               uint16 XSize);

extern FUNC(uint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_u16_s16MplXu16MplY( uint16 BilnrSeln,
                                                                              sint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const sint16 MplXTbl[],
                                                                              const uint16 MplYTbl[],
                                                                              uint16 XSize);

extern FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_s16MplXs16MplY( uint16 BilnrSeln,
                                                                              sint16 Inp,
                                                                              const uint16 BilnrSelnTbl[],
                                                                              uint16 BilnrSelnSize,
                                                                              const sint16 MplXTbl[],
                                                                              const sint16 MplYTbl[],
                                                                              uint16 XSize);

 extern FUNC(sint16, NxtrIntrpn_CODE) BilnrIntrpnWithRound_s16_u16MplXs16MplY( uint16 BilnrSeln,
                                                                               uint16 Inp,
                                                                               const uint16 BilnrSelnTbl[],
                                                                               uint16 BilnrSelnSize,
                                                                               const uint16 MplXTbl[],
                                                                               const sint16 MplYTbl[],
                                                                               uint16 XSize);

#endif /* NXTRINTRPN_H */
