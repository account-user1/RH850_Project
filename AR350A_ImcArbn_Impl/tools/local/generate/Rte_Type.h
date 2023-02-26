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
 *          File:  Rte_Type.h
 *        Config:  C:/Component/AR350A_ImcArbn_Impl/tools/Component.dpa
 *     SW-C Type:  ImcArbn
 *  Generated at:  Wed Jul  5 15:51:22 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  Header file containing user defined AUTOSAR types and RTE structures (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_TYPE_H
# define _RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_Ary1D_u8_2
typedef uint8 Ary1D_u8_2[2];

# define Rte_TypeDef_Ary1D_u8_3
typedef uint8 Ary1D_u8_3[3];

# define Rte_TypeDef_Ary1D_u8_8
typedef uint8 Ary1D_u8_8[8];

# define Rte_TypeDef_Ary2D_u8_2_2
typedef Ary1D_u8_2 Ary2D_u8_2_2[2];

# define Rte_TypeDef_ImcArbnRxDataSrc1
typedef ImcArbnRxDataSrc2 ImcArbnRxDataSrc1;

# define Rte_TypeDef_ImcArbnRxExtdSts1
typedef ImcArbnRxExtdSts2 ImcArbnRxExtdSts1;

# define Rte_TypeDef_ImcArbnRxSts1
typedef uint8 ImcArbnRxSts1;

# define Rte_TypeDef_NtcNr1
typedef uint16 NtcNr1;

# define Rte_TypeDef_NtcSts1
typedef uint8 NtcSts1;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_Ary1D_boolean_4
typedef boolean Ary1D_boolean_4[4];

#  define Rte_TypeDef_Ary1D_f32_12
typedef float32 Ary1D_f32_12[12];

#  define Rte_TypeDef_Ary1D_f32_2
typedef float32 Ary1D_f32_2[2];

#  define Rte_TypeDef_Ary1D_f32_26
typedef float32 Ary1D_f32_26[26];

#  define Rte_TypeDef_Ary1D_f32_3
typedef float32 Ary1D_f32_3[3];

#  define Rte_TypeDef_Ary1D_f32_30
typedef float32 Ary1D_f32_30[30];

#  define Rte_TypeDef_Ary1D_f32_4
typedef float32 Ary1D_f32_4[4];

#  define Rte_TypeDef_Ary1D_f32_5
typedef float32 Ary1D_f32_5[5];

#  define Rte_TypeDef_Ary1D_f32_72
typedef float32 Ary1D_f32_72[72];

#  define Rte_TypeDef_Ary1D_f32_8
typedef float32 Ary1D_f32_8[8];

#  define Rte_TypeDef_Ary1D_s16_22
typedef sint16 Ary1D_s16_22[22];

#  define Rte_TypeDef_Ary1D_u16_257
typedef uint16 Ary1D_u16_257[257];

#  define Rte_TypeDef_Ary1D_u16_3
typedef uint16 Ary1D_u16_3[3];

#  define Rte_TypeDef_Ary1D_u32_4
typedef uint32 Ary1D_u32_4[4];

#  define Rte_TypeDef_Ary1D_u32_512
typedef uint32 Ary1D_u32_512[512];

#  define Rte_TypeDef_Ary1D_u32_8
typedef uint32 Ary1D_u32_8[8];

#  define Rte_TypeDef_Ary1D_u8_22
typedef uint8 Ary1D_u8_22[22];

#  define Rte_TypeDef_Ary1D_u8_225
typedef uint8 Ary1D_u8_225[225];

#  define Rte_TypeDef_AnHwTqScaFacRec1
typedef struct
{
  float32 SnsrSca;
  boolean SnsrScaPrfmdSts;
} AnHwTqScaFacRec1;

#  define Rte_TypeDef_CurrMeasEolGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
} CurrMeasEolGainCalRec1;

#  define Rte_TypeDef_CurrMeasEolOffsCalRec1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} CurrMeasEolOffsCalRec1;

#  define Rte_TypeDef_CurrMeasEolOffsGainCalRec1
typedef struct
{
  float32 CurrMeasMotCurrOffsZeroAvrgA;
  float32 CurrMeasMotCurrOffsZeroAvrgB;
  float32 CurrMeasMotCurrOffsZeroAvrgC;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
} CurrMeasEolOffsGainCalRec1;

#  define Rte_TypeDef_DutyCycThermProtnFilStValRec1
typedef struct
{
  uint8 Fil3StVal;
  uint8 Fil4StVal;
  uint8 Fil5StVal;
  uint8 Fil6StVal;
} DutyCycThermProtnFilStValRec1;

#  define Rte_TypeDef_EOLGainOffs1
typedef struct
{
  float32 CurrMeasEolOffsHiBrdgVltg;
  float32 CurrMeasMotCurrEolGainA;
  float32 CurrMeasMotCurrEolGainB;
  float32 CurrMeasMotCurrEolGainC;
  float32 CurrMeasMotCurrEolGainD;
  float32 CurrMeasMotCurrEolGainE;
  float32 CurrMeasMotCurrEolGainF;
  float32 CurrMeasMotCurrEolOffsDifA;
  float32 CurrMeasMotCurrEolOffsDifB;
  float32 CurrMeasMotCurrEolOffsDifC;
  float32 CurrMeasMotCurrEolOffsDifD;
  float32 CurrMeasMotCurrEolOffsDifE;
  float32 CurrMeasMotCurrEolOffsDifF;
  float32 CurrMeasMotCurrOffsLoAvrgA;
  float32 CurrMeasMotCurrOffsLoAvrgB;
  float32 CurrMeasMotCurrOffsLoAvrgC;
  float32 CurrMeasMotCurrOffsLoAvrgD;
  float32 CurrMeasMotCurrOffsLoAvrgE;
  float32 CurrMeasMotCurrOffsLoAvrgF;
} EOLGainOffs1;

#  define Rte_TypeDef_EotNvmDataRec1
typedef struct
{
  float32 CwEot;
  float32 CcwEot;
  boolean CwEotDetd;
  boolean CcwEotDetd;
} EotNvmDataRec1;

#  define Rte_TypeDef_FilNotchGainRec1
typedef struct
{
  float32 FilGainB0;
  float32 FilGainB1;
  float32 FilGainB2;
  float32 FilGainA1;
  float32 FilGainA2;
} FilNotchGainRec1;

#  define Rte_TypeDef_FilNotchStRec1
typedef struct
{
  float32 FilSt1;
  float32 FilSt2;
} FilNotchStRec1;

#  define Rte_TypeDef_HwAgOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwAgOffsRec1;

#  define Rte_TypeDef_HwAgSnsrTrimRec1
typedef struct
{
  float32 TrimVal;
  boolean TrimPrfmd;
} HwAgSnsrTrimRec1;

#  define Rte_TypeDef_HwTqOffsRec1
typedef struct
{
  float32 OffsTrim;
  boolean OffsTrimPrfmdSts;
} HwTqOffsRec1;

#  define Rte_TypeDef_MaxHwAgCwAndCcwRec1
typedef struct
{
  float32 HwAgCcwMax;
  float32 HwAgCwMax;
} MaxHwAgCwAndCcwRec1;

#  define Rte_TypeDef_MaxHwAgCwAndCcwRec2
typedef struct
{
  float32 HwAgCcwMax;
  float32 HwAgCwMax;
  uint8 HwAgOverTrvlCnt;
} MaxHwAgCwAndCcwRec2;

#  define Rte_TypeDef_MotAgMeasEolPrmRec1
typedef struct
{
  float32 SinOffs;
  float32 CosOffs;
  float32 SinAmpRecpr;
  float32 CosAmpRecpr;
  float32 SinDelta;
} MotAgMeasEolPrmRec1;

#  define Rte_TypeDef_MotPrmNomEolRec2
typedef struct
{
  float32 MotKeNom;
  float32 MotRNom;
} MotPrmNomEolRec2;

#  define Rte_TypeDef_MotPrmNomEolRec3
typedef struct
{
  float32 MotBackEmfConNom;
  float32 MotRNom;
} MotPrmNomEolRec3;

#  define Rte_TypeDef_NtcFltInfoRec1
typedef struct
{
  uint16 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} NtcFltInfoRec1;

#  define Rte_TypeDef_NtcInfoRec1
typedef struct
{
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} NtcInfoRec1;

#  define Rte_TypeDef_StordLstPrmRec1
typedef struct
{
  float32 PinionAg;
  boolean PinionAgVld;
} StordLstPrmRec1;

#  define Rte_TypeDef_SysFricNonLrngDataRec1
typedef struct
{
  float32 EolFric;
  boolean EnaFricLrng;
  boolean EnaFricOffsOutp;
} SysFricNonLrngDataRec1;

#  define Rte_TypeDef_WhlImbRejctnCmpPeakRec1
typedef struct
{
  float32 LePeakPrev;
  float32 RiPeakPrev;
  float32 MaxCompPerc;
  uint32 ActvCmpBand1;
  uint32 ActvCmpBand2;
  uint32 ActvCmpBand3;
} WhlImbRejctnCmpPeakRec1;

#  define Rte_TypeDef_AdrMpgReqTyp1
typedef uint8 AdrMpgReqTyp1;

#  define Rte_TypeDef_Ary1D_NtcFltInfoRec1_20
typedef NtcFltInfoRec1 Ary1D_NtcFltInfoRec1_20[20];

#  define Rte_TypeDef_Ary1D_NtcInfoRec1_512
typedef NtcInfoRec1 Ary1D_NtcInfoRec1_512[512];

#  define Rte_TypeDef_Ary2D_f32_3_3
typedef Ary1D_f32_3 Ary2D_f32_3_3[3];

#  define Rte_TypeDef_Ary2D_f32_4_2
typedef Ary1D_f32_2 Ary2D_f32_4_2[4];

#  define Rte_TypeDef_Ary2D_f32_4_5
typedef Ary1D_f32_5 Ary2D_f32_4_5[4];

#  define Rte_TypeDef_Ary2D_f32_4_8
typedef Ary1D_f32_8 Ary2D_f32_4_8[4];

#  define Rte_TypeDef_Ary2D_f32_5_4
typedef Ary1D_f32_4 Ary2D_f32_5_4[5];

#  define Rte_TypeDef_Ary2D_f32_5_5
typedef Ary1D_f32_5 Ary2D_f32_5_5[5];

#  define Rte_TypeDef_Ary2D_f32_8_4
typedef Ary1D_f32_4 Ary2D_f32_8_4[8];

#  define Rte_TypeDef_Ary2D_u16_8_3
typedef Ary1D_u16_3 Ary2D_u16_8_3[8];

#  define Rte_TypeDef_BattSwdVltgCorrlnSts1
typedef uint8 BattSwdVltgCorrlnSts1;

#  define Rte_TypeDef_BattVltgSt1
typedef uint8 BattVltgSt1;

#  define Rte_TypeDef_CalCopySts1
typedef uint8 CalCopySts1;

#  define Rte_TypeDef_CrcHwResvCfg1
typedef uint8 CrcHwResvCfg1;

#  define Rte_TypeDef_CrcHwResvMod1
typedef uint8 CrcHwResvMod1;

#  define Rte_TypeDef_CrcHwSts1
typedef uint8 CrcHwSts1;

#  define Rte_TypeDef_CrcHwStsRec1
typedef struct
{
  uint16 TaskId;
  CrcHwSts1 CrcHwSts;
} CrcHwStsRec1;

#  define Rte_TypeDef_EgyModSt1
typedef uint8 EgyModSt1;

#  define Rte_TypeDef_GetSegMod1
typedef uint8 GetSegMod1;

#  define Rte_TypeDef_GmFctDiArbnSts1
typedef uint8 GmFctDiArbnSts1;

#  define Rte_TypeDef_GmSysPwrMod1
typedef uint8 GmSysPwrMod1;

#  define Rte_TypeDef_GmTqArbnEscSt1
typedef uint8 GmTqArbnEscSt1;

#  define Rte_TypeDef_GmTqArbnLkaSt1
typedef uint8 GmTqArbnLkaSt1;

#  define Rte_TypeDef_HwAgTrajCmdSt1
typedef uint16 HwAgTrajCmdSt1;

#  define Rte_TypeDef_LoaSt1
typedef uint8 LoaSt1;

#  define Rte_TypeDef_MfgEnaSt1
typedef uint8 MfgEnaSt1;

#  define Rte_TypeDef_MotCurrEolCalSt1
typedef uint8 MotCurrEolCalSt1;

#  define Rte_TypeDef_MotCurrEolCalSt2
typedef uint8 MotCurrEolCalSt2;

#  define Rte_TypeDef_MotQuad1
typedef uint8 MotQuad1;

#  define Rte_TypeDef_NtcNrWithResd1
typedef uint16 NtcNrWithResd1;

#  define Rte_TypeDef_ReadFltInfoRec1
typedef struct
{
  NtcNrWithResd1 NtcNr;
  uint8 AgiCntr;
  uint8 Sts;
  uint8 NtcStInfo;
} ReadFltInfoRec1;

#  define Rte_TypeDef_SigQlfr1
typedef uint8 SigQlfr1;

#  define Rte_TypeDef_StHlthMonSig1
typedef uint8 StHlthMonSig1;

#  define Rte_TypeDef_StHlthMonSig2
typedef uint8 StHlthMonSig2;

#  define Rte_TypeDef_StHlthMonSig3
typedef uint8 StHlthMonSig3;

#  define Rte_TypeDef_SteerMod1
typedef uint8 SteerMod1;

#  define Rte_TypeDef_StrtUpSt1
typedef uint8 StrtUpSt1;

#  define Rte_TypeDef_SysFricLrngOperMod1
typedef uint8 SysFricLrngOperMod1;

#  define Rte_TypeDef_SysSt1
typedef uint8 SysSt1;

#  define Rte_TypeDef_s10p5
typedef sint16 s10p5;

#  define Rte_TypeDef_s11p4
typedef sint16 s11p4;

#  define Rte_TypeDef_s14p1
typedef sint16 s14p1;

#  define Rte_TypeDef_s15p0
typedef sint16 s15p0;

#  define Rte_TypeDef_s15p16
typedef sint32 s15p16;

#  define Rte_TypeDef_s18p13
typedef sint32 s18p13;

#  define Rte_TypeDef_s1p14
typedef sint16 s1p14;

#  define Rte_TypeDef_s2p13
typedef sint16 s2p13;

#  define Rte_TypeDef_s3p12
typedef sint16 s3p12;

#  define Rte_TypeDef_s4p11
typedef sint16 s4p11;

#  define Rte_TypeDef_s5p10
typedef sint16 s5p10;

#  define Rte_TypeDef_s6p9
typedef sint16 s6p9;

#  define Rte_TypeDef_s7p8
typedef sint16 s7p8;

#  define Rte_TypeDef_s8p7
typedef sint16 s8p7;

#  define Rte_TypeDef_sm5p12
typedef sint8 sm5p12;

#  define Rte_TypeDef_u0p16
typedef uint16 u0p16;

#  define Rte_TypeDef_u10p6
typedef uint16 u10p6;

#  define Rte_TypeDef_u11p5
typedef uint16 u11p5;

#  define Rte_TypeDef_u12p4
typedef uint16 u12p4;

#  define Rte_TypeDef_u13p3
typedef uint16 u13p3;

#  define Rte_TypeDef_u15p1
typedef uint16 u15p1;

#  define Rte_TypeDef_u16p0
typedef uint16 u16p0;

#  define Rte_TypeDef_u1p15
typedef uint16 u1p15;

#  define Rte_TypeDef_u2p14
typedef uint16 u2p14;

#  define Rte_TypeDef_u3p13
typedef uint16 u3p13;

#  define Rte_TypeDef_u4p12
typedef uint16 u4p12;

#  define Rte_TypeDef_u5p11
typedef uint16 u5p11;

#  define Rte_TypeDef_u6p10
typedef uint16 u6p10;

#  define Rte_TypeDef_u7p9
typedef uint16 u7p9;

#  define Rte_TypeDef_u8p8
typedef uint16 u8p8;

#  define Rte_TypeDef_u9p7
typedef uint16 u9p7;

#  define Rte_TypeDef_Ary1D_CrcHwStsRec1_4
typedef CrcHwStsRec1 Ary1D_CrcHwStsRec1_4[4];

#  define Rte_TypeDef_Ary1D_ReadFltInfoRec1_20
typedef ReadFltInfoRec1 Ary1D_ReadFltInfoRec1_20[20];

#  define Rte_TypeDef_Ary1D_s10p5_8
typedef s10p5 Ary1D_s10p5_8[8];

#  define Rte_TypeDef_Ary1D_s11p4_11
typedef s11p4 Ary1D_s11p4_11[11];

#  define Rte_TypeDef_Ary1D_s11p4_14
typedef s11p4 Ary1D_s11p4_14[14];

#  define Rte_TypeDef_Ary1D_s11p4_5
typedef s11p4 Ary1D_s11p4_5[5];

#  define Rte_TypeDef_Ary1D_s14p1_8
typedef s14p1 Ary1D_s14p1_8[8];

#  define Rte_TypeDef_Ary1D_s15p0_4
typedef s15p0 Ary1D_s15p0_4[4];

#  define Rte_TypeDef_Ary1D_s1p14_12
typedef s1p14 Ary1D_s1p14_12[12];

#  define Rte_TypeDef_Ary1D_s1p14_128
typedef s1p14 Ary1D_s1p14_128[128];

#  define Rte_TypeDef_Ary1D_s1p14_512
typedef s1p14 Ary1D_s1p14_512[512];

#  define Rte_TypeDef_Ary1D_s2p13_1024
typedef s2p13 Ary1D_s2p13_1024[1024];

#  define Rte_TypeDef_Ary1D_s2p13_1025
typedef s2p13 Ary1D_s2p13_1025[1025];

#  define Rte_TypeDef_Ary1D_s4p11_11
typedef s4p11 Ary1D_s4p11_11[11];

#  define Rte_TypeDef_Ary1D_s4p11_12
typedef s4p11 Ary1D_s4p11_12[12];

#  define Rte_TypeDef_Ary1D_s4p11_20
typedef s4p11 Ary1D_s4p11_20[20];

#  define Rte_TypeDef_Ary1D_s4p11_4
typedef s4p11 Ary1D_s4p11_4[4];

#  define Rte_TypeDef_Ary1D_s4p11_5
typedef s4p11 Ary1D_s4p11_5[5];

#  define Rte_TypeDef_Ary1D_s4p11_8
typedef s4p11 Ary1D_s4p11_8[8];

#  define Rte_TypeDef_Ary1D_s7p8_11
typedef s7p8 Ary1D_s7p8_11[11];

#  define Rte_TypeDef_Ary1D_s7p8_12
typedef s7p8 Ary1D_s7p8_12[12];

#  define Rte_TypeDef_Ary1D_s7p8_20
typedef s7p8 Ary1D_s7p8_20[20];

#  define Rte_TypeDef_Ary1D_s7p8_5
typedef s7p8 Ary1D_s7p8_5[5];

#  define Rte_TypeDef_Ary1D_s7p8_6
typedef s7p8 Ary1D_s7p8_6[6];

#  define Rte_TypeDef_Ary1D_s8p7_12
typedef s8p7 Ary1D_s8p7_12[12];

#  define Rte_TypeDef_Ary1D_s8p7_14
typedef s8p7 Ary1D_s8p7_14[14];

#  define Rte_TypeDef_Ary1D_s8p7_3
typedef s8p7 Ary1D_s8p7_3[3];

#  define Rte_TypeDef_Ary1D_sm5p12_128
typedef sm5p12 Ary1D_sm5p12_128[128];

#  define Rte_TypeDef_Ary1D_u0p16_10
typedef u0p16 Ary1D_u0p16_10[10];

#  define Rte_TypeDef_Ary1D_u0p16_2
typedef u0p16 Ary1D_u0p16_2[2];

#  define Rte_TypeDef_Ary1D_u0p16_3
typedef u0p16 Ary1D_u0p16_3[3];

#  define Rte_TypeDef_Ary1D_u0p16_8
typedef u0p16 Ary1D_u0p16_8[8];

#  define Rte_TypeDef_Ary1D_u10p6_10
typedef u10p6 Ary1D_u10p6_10[10];

#  define Rte_TypeDef_Ary1D_u10p6_12
typedef u10p6 Ary1D_u10p6_12[12];

#  define Rte_TypeDef_Ary1D_u10p6_13
typedef u10p6 Ary1D_u10p6_13[13];

#  define Rte_TypeDef_Ary1D_u10p6_3
typedef u10p6 Ary1D_u10p6_3[3];

#  define Rte_TypeDef_Ary1D_u10p6_4
typedef u10p6 Ary1D_u10p6_4[4];

#  define Rte_TypeDef_Ary1D_u10p6_5
typedef u10p6 Ary1D_u10p6_5[5];

#  define Rte_TypeDef_Ary1D_u10p6_7
typedef u10p6 Ary1D_u10p6_7[7];

#  define Rte_TypeDef_Ary1D_u10p6_8
typedef u10p6 Ary1D_u10p6_8[8];

#  define Rte_TypeDef_Ary1D_u10p6_9
typedef u10p6 Ary1D_u10p6_9[9];

#  define Rte_TypeDef_Ary1D_u11p5_10
typedef u11p5 Ary1D_u11p5_10[10];

#  define Rte_TypeDef_Ary1D_u11p5_11
typedef u11p5 Ary1D_u11p5_11[11];

#  define Rte_TypeDef_Ary1D_u11p5_12
typedef u11p5 Ary1D_u11p5_12[12];

#  define Rte_TypeDef_Ary1D_u11p5_13
typedef u11p5 Ary1D_u11p5_13[13];

#  define Rte_TypeDef_Ary1D_u11p5_4
typedef u11p5 Ary1D_u11p5_4[4];

#  define Rte_TypeDef_Ary1D_u11p5_6
typedef u11p5 Ary1D_u11p5_6[6];

#  define Rte_TypeDef_Ary1D_u11p5_7
typedef u11p5 Ary1D_u11p5_7[7];

#  define Rte_TypeDef_Ary1D_u11p5_8
typedef u11p5 Ary1D_u11p5_8[8];

#  define Rte_TypeDef_Ary1D_u12p4_12
typedef u12p4 Ary1D_u12p4_12[12];

#  define Rte_TypeDef_Ary1D_u12p4_13
typedef u12p4 Ary1D_u12p4_13[13];

#  define Rte_TypeDef_Ary1D_u12p4_16
typedef u12p4 Ary1D_u12p4_16[16];

#  define Rte_TypeDef_Ary1D_u12p4_2
typedef u12p4 Ary1D_u12p4_2[2];

#  define Rte_TypeDef_Ary1D_u12p4_4
typedef u12p4 Ary1D_u12p4_4[4];

#  define Rte_TypeDef_Ary1D_u12p4_7
typedef u12p4 Ary1D_u12p4_7[7];

#  define Rte_TypeDef_Ary1D_u12p4_9
typedef u12p4 Ary1D_u12p4_9[9];

#  define Rte_TypeDef_Ary1D_u13p3_2
typedef u13p3 Ary1D_u13p3_2[2];

#  define Rte_TypeDef_Ary1D_u13p3_6
typedef u13p3 Ary1D_u13p3_6[6];

#  define Rte_TypeDef_Ary1D_u15p1_12
typedef u15p1 Ary1D_u15p1_12[12];

#  define Rte_TypeDef_Ary1D_u16p0_2
typedef u16p0 Ary1D_u16p0_2[2];

#  define Rte_TypeDef_Ary1D_u16p0_20
typedef u16p0 Ary1D_u16p0_20[20];

#  define Rte_TypeDef_Ary1D_u16p0_8
typedef u16p0 Ary1D_u16p0_8[8];

#  define Rte_TypeDef_Ary1D_u1p15_10
typedef u1p15 Ary1D_u1p15_10[10];

#  define Rte_TypeDef_Ary1D_u1p15_11
typedef u1p15 Ary1D_u1p15_11[11];

#  define Rte_TypeDef_Ary1D_u1p15_12
typedef u1p15 Ary1D_u1p15_12[12];

#  define Rte_TypeDef_Ary1D_u1p15_2
typedef u1p15 Ary1D_u1p15_2[2];

#  define Rte_TypeDef_Ary1D_u1p15_4
typedef u1p15 Ary1D_u1p15_4[4];

#  define Rte_TypeDef_Ary1D_u1p15_5
typedef u1p15 Ary1D_u1p15_5[5];

#  define Rte_TypeDef_Ary1D_u1p15_6
typedef u1p15 Ary1D_u1p15_6[6];

#  define Rte_TypeDef_Ary1D_u2p14_10
typedef u2p14 Ary1D_u2p14_10[10];

#  define Rte_TypeDef_Ary1D_u2p14_12
typedef u2p14 Ary1D_u2p14_12[12];

#  define Rte_TypeDef_Ary1D_u2p14_16
typedef u2p14 Ary1D_u2p14_16[16];

#  define Rte_TypeDef_Ary1D_u2p14_2
typedef u2p14 Ary1D_u2p14_2[2];

#  define Rte_TypeDef_Ary1D_u2p14_3
typedef u2p14 Ary1D_u2p14_3[3];

#  define Rte_TypeDef_Ary1D_u2p14_4
typedef u2p14 Ary1D_u2p14_4[4];

#  define Rte_TypeDef_Ary1D_u2p14_5
typedef u2p14 Ary1D_u2p14_5[5];

#  define Rte_TypeDef_Ary1D_u2p14_6
typedef u2p14 Ary1D_u2p14_6[6];

#  define Rte_TypeDef_Ary1D_u2p14_7
typedef u2p14 Ary1D_u2p14_7[7];

#  define Rte_TypeDef_Ary1D_u2p14_8
typedef u2p14 Ary1D_u2p14_8[8];

#  define Rte_TypeDef_Ary1D_u2p14_9
typedef u2p14 Ary1D_u2p14_9[9];

#  define Rte_TypeDef_Ary1D_u3p13_10
typedef u3p13 Ary1D_u3p13_10[10];

#  define Rte_TypeDef_Ary1D_u3p13_13
typedef u3p13 Ary1D_u3p13_13[13];

#  define Rte_TypeDef_Ary1D_u3p13_5
typedef u3p13 Ary1D_u3p13_5[5];

#  define Rte_TypeDef_Ary1D_u3p13_8
typedef u3p13 Ary1D_u3p13_8[8];

#  define Rte_TypeDef_Ary1D_u4p12_10
typedef u4p12 Ary1D_u4p12_10[10];

#  define Rte_TypeDef_Ary1D_u4p12_11
typedef u4p12 Ary1D_u4p12_11[11];

#  define Rte_TypeDef_Ary1D_u4p12_12
typedef u4p12 Ary1D_u4p12_12[12];

#  define Rte_TypeDef_Ary1D_u4p12_13
typedef u4p12 Ary1D_u4p12_13[13];

#  define Rte_TypeDef_Ary1D_u4p12_14
typedef u4p12 Ary1D_u4p12_14[14];

#  define Rte_TypeDef_Ary1D_u4p12_2
typedef u4p12 Ary1D_u4p12_2[2];

#  define Rte_TypeDef_Ary1D_u4p12_20
typedef u4p12 Ary1D_u4p12_20[20];

#  define Rte_TypeDef_Ary1D_u4p12_3
typedef u4p12 Ary1D_u4p12_3[3];

#  define Rte_TypeDef_Ary1D_u4p12_4
typedef u4p12 Ary1D_u4p12_4[4];

#  define Rte_TypeDef_Ary1D_u4p12_5
typedef u4p12 Ary1D_u4p12_5[5];

#  define Rte_TypeDef_Ary1D_u4p12_6
typedef u4p12 Ary1D_u4p12_6[6];

#  define Rte_TypeDef_Ary1D_u4p12_7
typedef u4p12 Ary1D_u4p12_7[7];

#  define Rte_TypeDef_Ary1D_u4p12_8
typedef u4p12 Ary1D_u4p12_8[8];

#  define Rte_TypeDef_Ary1D_u5p11_10
typedef u5p11 Ary1D_u5p11_10[10];

#  define Rte_TypeDef_Ary1D_u5p11_11
typedef u5p11 Ary1D_u5p11_11[11];

#  define Rte_TypeDef_Ary1D_u5p11_12
typedef u5p11 Ary1D_u5p11_12[12];

#  define Rte_TypeDef_Ary1D_u5p11_13
typedef u5p11 Ary1D_u5p11_13[13];

#  define Rte_TypeDef_Ary1D_u5p11_14
typedef u5p11 Ary1D_u5p11_14[14];

#  define Rte_TypeDef_Ary1D_u5p11_16
typedef u5p11 Ary1D_u5p11_16[16];

#  define Rte_TypeDef_Ary1D_u5p11_17
typedef u5p11 Ary1D_u5p11_17[17];

#  define Rte_TypeDef_Ary1D_u5p11_5
typedef u5p11 Ary1D_u5p11_5[5];

#  define Rte_TypeDef_Ary1D_u5p11_6
typedef u5p11 Ary1D_u5p11_6[6];

#  define Rte_TypeDef_Ary1D_u5p11_8
typedef u5p11 Ary1D_u5p11_8[8];

#  define Rte_TypeDef_Ary1D_u6p10_10
typedef u6p10 Ary1D_u6p10_10[10];

#  define Rte_TypeDef_Ary1D_u6p10_17
typedef u6p10 Ary1D_u6p10_17[17];

#  define Rte_TypeDef_Ary1D_u6p10_6
typedef u6p10 Ary1D_u6p10_6[6];

#  define Rte_TypeDef_Ary1D_u6p10_9
typedef u6p10 Ary1D_u6p10_9[9];

#  define Rte_TypeDef_Ary1D_u7p9_12
typedef u7p9 Ary1D_u7p9_12[12];

#  define Rte_TypeDef_Ary1D_u7p9_3
typedef u7p9 Ary1D_u7p9_3[3];

#  define Rte_TypeDef_Ary1D_u7p9_4
typedef u7p9 Ary1D_u7p9_4[4];

#  define Rte_TypeDef_Ary1D_u7p9_6
typedef u7p9 Ary1D_u7p9_6[6];

#  define Rte_TypeDef_Ary1D_u8p8_10
typedef u8p8 Ary1D_u8p8_10[10];

#  define Rte_TypeDef_Ary1D_u8p8_11
typedef u8p8 Ary1D_u8p8_11[11];

#  define Rte_TypeDef_Ary1D_u8p8_12
typedef u8p8 Ary1D_u8p8_12[12];

#  define Rte_TypeDef_Ary1D_u8p8_13
typedef u8p8 Ary1D_u8p8_13[13];

#  define Rte_TypeDef_Ary1D_u8p8_14
typedef u8p8 Ary1D_u8p8_14[14];

#  define Rte_TypeDef_Ary1D_u8p8_2
typedef u8p8 Ary1D_u8p8_2[2];

#  define Rte_TypeDef_Ary1D_u8p8_20
typedef u8p8 Ary1D_u8p8_20[20];

#  define Rte_TypeDef_Ary1D_u8p8_3
typedef u8p8 Ary1D_u8p8_3[3];

#  define Rte_TypeDef_Ary1D_u8p8_4
typedef u8p8 Ary1D_u8p8_4[4];

#  define Rte_TypeDef_Ary1D_u8p8_5
typedef u8p8 Ary1D_u8p8_5[5];

#  define Rte_TypeDef_Ary1D_u8p8_6
typedef u8p8 Ary1D_u8p8_6[6];

#  define Rte_TypeDef_Ary1D_u8p8_7
typedef u8p8 Ary1D_u8p8_7[7];

#  define Rte_TypeDef_Ary1D_u8p8_8
typedef u8p8 Ary1D_u8p8_8[8];

#  define Rte_TypeDef_Ary1D_u8p8_9
typedef u8p8 Ary1D_u8p8_9[9];

#  define Rte_TypeDef_Ary1D_u9p7_10
typedef u9p7 Ary1D_u9p7_10[10];

#  define Rte_TypeDef_Ary1D_u9p7_11
typedef u9p7 Ary1D_u9p7_11[11];

#  define Rte_TypeDef_Ary1D_u9p7_12
typedef u9p7 Ary1D_u9p7_12[12];

#  define Rte_TypeDef_Ary1D_u9p7_16
typedef u9p7 Ary1D_u9p7_16[16];

#  define Rte_TypeDef_Ary1D_u9p7_2
typedef u9p7 Ary1D_u9p7_2[2];

#  define Rte_TypeDef_Ary1D_u9p7_3
typedef u9p7 Ary1D_u9p7_3[3];

#  define Rte_TypeDef_Ary1D_u9p7_4
typedef u9p7 Ary1D_u9p7_4[4];

#  define Rte_TypeDef_Ary1D_u9p7_5
typedef u9p7 Ary1D_u9p7_5[5];

#  define Rte_TypeDef_Ary1D_u9p7_6
typedef u9p7 Ary1D_u9p7_6[6];

#  define Rte_TypeDef_Ary1D_u9p7_7
typedef u9p7 Ary1D_u9p7_7[7];

#  define Rte_TypeDef_Ary1D_u9p7_8
typedef u9p7 Ary1D_u9p7_8[8];

#  define Rte_TypeDef_Ary1D_u9p7_9
typedef u9p7 Ary1D_u9p7_9[9];

#  define Rte_TypeDef_Ary2D_s1p14_10_12
typedef Ary1D_s1p14_12 Ary2D_s1p14_10_12[10];

#  define Rte_TypeDef_Ary2D_s4p11_11_8
typedef Ary1D_s4p11_8 Ary2D_s4p11_11_8[11];

#  define Rte_TypeDef_Ary2D_s4p11_12_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_12_11[12];

#  define Rte_TypeDef_Ary2D_s4p11_12_20
typedef Ary1D_s4p11_20 Ary2D_s4p11_12_20[12];

#  define Rte_TypeDef_Ary2D_s4p11_8_11
typedef Ary1D_s4p11_11 Ary2D_s4p11_8_11[8];

#  define Rte_TypeDef_Ary2D_s7p8_11_12
typedef Ary1D_s7p8_12 Ary2D_s7p8_11_12[11];

#  define Rte_TypeDef_Ary2D_s7p8_12_11
typedef Ary1D_s7p8_11 Ary2D_s7p8_12_11[12];

#  define Rte_TypeDef_Ary2D_s7p8_3_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_3_5[3];

#  define Rte_TypeDef_Ary2D_s7p8_3_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_3_6[3];

#  define Rte_TypeDef_Ary2D_s7p8_4_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_4_5[4];

#  define Rte_TypeDef_Ary2D_s7p8_9_5
typedef Ary1D_s7p8_5 Ary2D_s7p8_9_5[9];

#  define Rte_TypeDef_Ary2D_s7p8_9_6
typedef Ary1D_s7p8_6 Ary2D_s7p8_9_6[9];

#  define Rte_TypeDef_Ary2D_u0p16_20_8
typedef Ary1D_u0p16_8 Ary2D_u0p16_20_8[20];

#  define Rte_TypeDef_Ary2D_u0p16_4_2
typedef Ary1D_u0p16_2 Ary2D_u0p16_4_2[4];

#  define Rte_TypeDef_Ary2D_u10p6_3_7
typedef Ary1D_u10p6_7 Ary2D_u10p6_3_7[3];

#  define Rte_TypeDef_Ary2D_u10p6_8_12
typedef Ary1D_u10p6_12 Ary2D_u10p6_8_12[8];

#  define Rte_TypeDef_Ary2D_u10p6_8_9
typedef Ary1D_u10p6_9 Ary2D_u10p6_8_9[8];

#  define Rte_TypeDef_Ary2D_u12p4_12_13
typedef Ary1D_u12p4_13 Ary2D_u12p4_12_13[12];

#  define Rte_TypeDef_Ary2D_u12p4_4_2
typedef Ary1D_u12p4_2 Ary2D_u12p4_4_2[4];

#  define Rte_TypeDef_Ary2D_u12p4_5_4
typedef Ary1D_u12p4_4 Ary2D_u12p4_5_4[5];

#  define Rte_TypeDef_Ary2D_u12p4_8_12
typedef Ary1D_u12p4_12 Ary2D_u12p4_8_12[8];

#  define Rte_TypeDef_Ary2D_u12p4_9_16
typedef Ary1D_u12p4_16 Ary2D_u12p4_9_16[9];

#  define Rte_TypeDef_Ary2D_u16_3_8
typedef Ary1D_u16p0_8 Ary2D_u16_3_8[3];

#  define Rte_TypeDef_Ary2D_u1p15_12_5
typedef Ary1D_u1p15_5 Ary2D_u1p15_12_5[12];

#  define Rte_TypeDef_Ary2D_u1p15_5_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_5_4[5];

#  define Rte_TypeDef_Ary2D_u1p15_8_4
typedef Ary1D_u1p15_4 Ary2D_u1p15_8_4[8];

#  define Rte_TypeDef_Ary2D_u2p14_12_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_12_5[12];

#  define Rte_TypeDef_Ary2D_u2p14_5_10
typedef Ary1D_u2p14_10 Ary2D_u2p14_5_10[5];

#  define Rte_TypeDef_Ary2D_u2p14_5_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_5_8[5];

#  define Rte_TypeDef_Ary2D_u2p14_6_5
typedef Ary1D_u2p14_5 Ary2D_u2p14_6_5[6];

#  define Rte_TypeDef_Ary2D_u2p14_6_7
typedef Ary1D_u2p14_7 Ary2D_u2p14_6_7[6];

#  define Rte_TypeDef_Ary2D_u2p14_7_6
typedef Ary1D_u2p14_6 Ary2D_u2p14_7_6[7];

#  define Rte_TypeDef_Ary2D_u2p14_7_8
typedef Ary1D_u2p14_8 Ary2D_u2p14_7_8[7];

#  define Rte_TypeDef_Ary2D_u3p13_12_13
typedef Ary1D_u3p13_13 Ary2D_u3p13_12_13[12];

#  define Rte_TypeDef_Ary2D_u3p13_20_8
typedef Ary1D_u3p13_8 Ary2D_u3p13_20_8[20];

#  define Rte_TypeDef_Ary2D_u4p12_12_20
typedef Ary1D_u4p12_20 Ary2D_u4p12_12_20[12];

#  define Rte_TypeDef_Ary2D_u4p12_12_5
typedef Ary1D_u4p12_5 Ary2D_u4p12_12_5[12];

#  define Rte_TypeDef_Ary2D_u4p12_12_8
typedef Ary1D_u4p12_8 Ary2D_u4p12_12_8[12];

#  define Rte_TypeDef_Ary2D_u4p12_13_3
typedef Ary1D_u4p12_3 Ary2D_u4p12_13_3[13];

#  define Rte_TypeDef_Ary2D_u4p12_3_13
typedef Ary1D_u4p12_13 Ary2D_u4p12_3_13[3];

#  define Rte_TypeDef_Ary2D_u4p12_6_7
typedef Ary1D_u4p12_7 Ary2D_u4p12_6_7[6];

#  define Rte_TypeDef_Ary2D_u5p11_12_13
typedef Ary1D_u5p11_13 Ary2D_u5p11_12_13[12];

#  define Rte_TypeDef_Ary2D_u5p11_12_5
typedef Ary1D_u5p11_5 Ary2D_u5p11_12_5[12];

#  define Rte_TypeDef_Ary2D_u5p11_9_16
typedef Ary1D_u5p11_16 Ary2D_u5p11_9_16[9];

#  define Rte_TypeDef_Ary2D_u6p10_5_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_5_9[5];

#  define Rte_TypeDef_Ary2D_u6p10_8_9
typedef Ary1D_u6p10_9 Ary2D_u6p10_8_9[8];

#  define Rte_TypeDef_Ary2D_u7p9_8_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_8_4[8];

#  define Rte_TypeDef_Ary2D_u7p9_9_4
typedef Ary1D_u7p9_4 Ary2D_u7p9_9_4[9];

#  define Rte_TypeDef_Ary2D_u8p8_12_20
typedef Ary1D_u8p8_20 Ary2D_u8p8_12_20[12];

#  define Rte_TypeDef_Ary2D_u8p8_3_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_3_5[3];

#  define Rte_TypeDef_Ary2D_u8p8_3_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_3_6[3];

#  define Rte_TypeDef_Ary2D_u8p8_5_10
typedef Ary1D_u8p8_10 Ary2D_u8p8_5_10[5];

#  define Rte_TypeDef_Ary2D_u8p8_5_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_5_8[5];

#  define Rte_TypeDef_Ary2D_u8p8_6_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_6_5[6];

#  define Rte_TypeDef_Ary2D_u8p8_9_4
typedef Ary1D_u8p8_4 Ary2D_u8p8_9_4[9];

#  define Rte_TypeDef_Ary2D_u8p8_9_5
typedef Ary1D_u8p8_5 Ary2D_u8p8_9_5[9];

#  define Rte_TypeDef_Ary2D_u8p8_9_6
typedef Ary1D_u8p8_6 Ary2D_u8p8_9_6[9];

#  define Rte_TypeDef_Ary2D_u8p8_9_8
typedef Ary1D_u8p8_8 Ary2D_u8p8_9_8[9];

#  define Rte_TypeDef_MotRplCoggPrmRec1
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec1;

#  define Rte_TypeDef_MotRplCoggPrmRec2
typedef struct
{
  uint16 CoggOrder1;
  s1p14 CoggOrder1X;
  s1p14 CoggOrder1Y;
  uint16 CoggOrder2;
  s1p14 CoggOrder2X;
  s1p14 CoggOrder2Y;
  uint16 CoggOrder3;
  s1p14 CoggOrder3X;
  s1p14 CoggOrder3Y;
} MotRplCoggPrmRec2;

#  define Rte_TypeDef_PassFailCntrDiagcRec1
typedef struct
{
  float32 Cntr;
  float32 Thd;
  float32 NegStep;
  float32 PosStep;
  SigQlfr1 Sts;
} PassFailCntrDiagcRec1;

#  define Rte_TypeDef_SnsrLrndOffsRec1
typedef struct
{
  float32 HwAgLrndTi;
  float32 YawRateElpdTi;
  Ary2D_f32_3_3 HwTqLrngCovariMtrx;
  Ary1D_f32_3 HwTqLrngEstimnVect;
  s6p9 YawRateOffs;
  s5p10 HwAgOffs;
  s3p12 HwTqOffs;
  s6p9 HwAgLrngYawOffsRef;
  s11p4 HwAgLrngHwAgFilSt;
  s10p5 HwAgLrngSysTqFilSt;
  s11p4 HwTqLrngHwAgRef;
  uint16 HwTqLrngSampleCntNeg;
  uint16 HwTqLrngSampleCntPos;
  uint8 HwTqLrngSts;
  boolean YawRateOffsVld;
} SnsrLrndOffsRec1;

#  define Rte_TypeDef_SysFricDataRec1
typedef struct
{
  float32 FricOffs;
  Ary1D_f32_4 BasLineFric;
  Ary1D_f32_4 VehLrndFric;
  Ary2D_f32_8_4 Hys;
  Ary2D_u16_8_3 RngCntr;
  SysFricLrngOperMod1 SysFricLrngOperMod;
} SysFricDataRec1;

# endif


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

#endif /* _RTE_TYPE_H */
