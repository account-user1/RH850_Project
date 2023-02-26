/******************************************************************************/
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701370A_72                                     */
/* File Name  : P1X_C_Hardware_Defines.h                                      */
/* Abstract   : Definition of I/O Register                                    */
/* History    : E1.00a [Device File version]                                  */
/* Definitions of Hardware Registers addresses                                */
/*                                                                            */
/* Copyright(c) 2017 Renesas Electronics Corporation. All rights reserved.    */
/*                                                                            */
/******************************************************************************/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * Ver4.02.00.D_FLS_HF003: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info : Split up P1X_C_Hardware.h
 *                         to two files P1X_C_Hardware_Defines.h and
 *                         P1X_C_Hardware_Types.h. P1X_C_Hardware_Defines.h
 *                         includes addresses of hardware registers.
 *                       : Modification Info Ends :
 */
/******************************************************************************/

#ifndef P1X_C_HARDWARE_DEFINES_H
#define P1X_C_HARDWARE_DEFINES_H

#include <io_macros_v2.h>

__IOREG( FLXA0    ,0x10020000ul    ,__READ_WRITE   , T_FLXA0   ); /* FLXA0  */
__IOREG( FLXA1    ,0x10021000ul    ,__READ_WRITE   , T_FLXA0   ); /* FLXA1  */
// __IOREG( ETNA0    ,0x10024000ul    ,__READ_WRITE   , T_ETNA0   ); /* ETNA0*/
__IOREG( FCLA_ICU ,0xFFC34000ul    ,__READ_WRITE   , T_FCLA_ICU );/* FCLA0_ICU*/
__IOREG( DNFA2    ,0xFFC30200ul    ,__READ_WRITE   , T_DNFA2   ); /* DNFA2  */
__IOREG( DNFA3    ,0xFFC30300ul    ,__READ_WRITE   , T_DNFA3   ); /* DNFA3  */
__IOREG( DNFA4    ,0xFFC30400ul    ,__READ_WRITE   , T_DNFA4   ); /* DNFA4  */
__IOREG( DNFA5    ,0xFFC30500ul    ,__READ_WRITE   , T_DNFA5   ); /* DNFA5  */
__IOREG( DNFA6    ,0xFFC30600ul    ,__READ_WRITE   , T_DNFA6   ); /* DNFA6  */
__IOREG( DNFA7    ,0xFFC30700ul    ,__READ_WRITE   , T_DNFA7   ); /* DNFA7  */
__IOREG( FCLA0    ,0xFFC34000ul    ,__READ_WRITE   , T_FCLA0   ); /* FCLA0  */
__IOREG( FCLA1    ,0xFFC34100ul    ,__READ_WRITE   , T_FCLA1   ); /* FCLA1  */
__IOREG( FCLA2    ,0xFFC34200ul    ,__READ_WRITE   , T_FCLA2   ); /* FCLA2  */
__IOREG( FCLA3    ,0xFFC34300ul    ,__READ_WRITE   , T_FCLA3   ); /* FCLA3  */
__IOREG( FCLA4    ,0xFFC34400ul    ,__READ_WRITE   , T_FCLA4   ); /* FCLA4  */
__IOREG( FCLA5    ,0xFFC34500ul    ,__READ_WRITE   , T_FCLA5   ); /* FCLA5  */
__IOREG( FCLA6    ,0xFFC34600ul    ,__READ_WRITE   , T_FCLA6   ); /* FCLA6  */
__IOREG( CSIH1    ,0xFFCA0000ul    ,__READ_WRITE   , T_CSIH1   ); /* CSIH1  */
__IOREG( CSIH3    ,0xFFCA3000ul    ,__READ_WRITE   , T_CSIH3   ); /* CSIH3  */
__IOREG( RLN31    ,0xFFCAC000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN31  */
__IOREG( RLN33    ,0xFFCAD000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN33  */
__IOREG( ECMM1    ,0xFFCB0000ul    ,__READ_WRITE   , T_ECMM0   ); /* ECMM1  */
__IOREG( ECMC1    ,0xFFCB1000ul    ,__READ_WRITE   , T_ECMC0   ); /* ECMC1  */
__IOREG( ECM1     ,0xFFCB2000ul    ,__READ_WRITE   , T_ECM0    ); /* ECM1   */
__IOREG( DCRB0    ,0xFFD50000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0  */
__IOREG( DCRB2    ,0xFFD51000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB2  */
__IOREG( DCRB4    ,0xFFD52000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB4  */
__IOREG( DCRB6    ,0xFFD53000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB6  */
__IOREG( ECMM0    ,0xFFD60000ul    ,__READ_WRITE   , T_ECMM0   ); /* ECMM0  */
__IOREG( ECMC0    ,0xFFD61000ul    ,__READ_WRITE   , T_ECMC0   ); /* ECMC0  */
__IOREG( ECM0     ,0xFFD62000ul    ,__READ_WRITE   , T_ECM0    ); /* ECM0   */
__IOREG( CSIH0    ,0xFFD80000ul    ,__READ_WRITE   , T_CSIH0   ); /* CSIH0  */
__IOREG( CSIH2    ,0xFFD83000ul    ,__READ_WRITE   , T_CSIH2   ); /* CSIH2  */
__IOREG( RLN30    ,0xFFD8C000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN30  */
__IOREG( RLN32    ,0xFFD8D000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN32  */
__IOREG( FSGD2A   ,0xFFDDD000ul    ,__READ_WRITE   , T_FSGD2A  ); /* FSGD2A */
__IOREG( WDTA0    ,0xFFED0000ul    ,__READ_WRITE   , T_WDTA0   ); /* WDTA0  */
__IOREG( WDTA1    ,0xFFED1000ul    ,__READ_WRITE   , T_WDTA0   ); /* WDTA1  */
__IOREG( FSGD1A   ,0xFFEE0000ul    ,__READ_WRITE   , T_FSGD1A  ); /* FSGD1A */
__IOREG( FSGD1B   ,0xFFEE0200ul    ,__READ_WRITE   , T_FSGD1B  ); /* FSGD1B */
__IOREG( DCRB1    ,0xFFF70000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB1  */
__IOREG( DCRB3    ,0xFFF71000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB3  */
__IOREG( DCRB5    ,0xFFF72000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB5  */
__IOREG( DCRB7    ,0xFFF73000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB7  */
__IOREG( CLMA0    ,0xFFF83100ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA0  */
__IOREG( CLMA1    ,0xFFF83200ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA1  */
__IOREG( CLMA2    ,0xFFF83300ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA2  */
__IOREG( CLMA3    ,0xFFF83400ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA3  */
__IOREG( CLMA4    ,0xFFF83500ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA4  */
__IOREG( CLMA5    ,0xFFF86800ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA5  */
__IOREG( FSGD4A   ,0xFFF90000ul    ,__READ_WRITE   , T_FSGD4A  ); /* CLMA5  */
__IOREG( FSGD4B   ,0xFFF90200ul    ,__READ_WRITE   , T_FSGD4B  ); /* CLMA5  */
__IOREG( RH850_ADCF0 ,0xFFF91000ul ,__READ_WRITE , Adc_ConfigRegisters );
                                                                    /* ADCF0  */
__IOREG( RH850_ADCF1 ,0xFFF92000ul ,__READ_WRITE , Adc_ConfigRegisters );
                                                                    /* ADCF1  */
__IOREG( FSGD3A   ,0xFFF94000ul    ,__READ_WRITE   , T_FSGD3A  ); /* FSGD3A */
__IOREG( FSGD3B   ,0xFFF94200ul    ,__READ_WRITE   , T_FSGD3B  ); /* FSGD3B */
__IOREG( FSGDF0   ,0xFFFA0000ul    ,__READ_WRITE   , T_FSGDF0  ); /* FSGDF0 */
__IOREG( FSGDF1   ,0xFFFA0020ul    ,__READ_WRITE   , T_FSGDF1  ); /* FSGDF1 */
__IOREG( FSGDE0   ,0xFFFA0040ul    ,__READ_WRITE   , T_FSGDE0  ); /* FSGDE0 */
__IOREG( FSGDE1   ,0xFFFA0060ul    ,__READ_WRITE   , T_FSGDE1  ); /* FSGDE1 */
__IOREG( RH850_PIC2 ,0xFFD68000ul ,__READ_WRITE ,  Adc_PicRegisters); /*PIC2*/

__IOREG( TIM00    ,0xFFE01000ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM00 */
__IOREG( TIM01    ,0xFFE01080ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM01 */
__IOREG( TIM02    ,0xFFE01100ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM02 */
__IOREG( TIM03    ,0xFFE01180ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM03 */
__IOREG( TIM04    ,0xFFE01200ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM04 */
__IOREG( TIM05    ,0xFFE01280ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM05 */
__IOREG( TIM06    ,0xFFE01300ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM06 */
__IOREG( TIM07    ,0xFFE01380ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM07 */
__IOREG( TIM10    ,0xFFE01800ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM10 */
__IOREG( TIM11    ,0xFFE01880ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM11 */
__IOREG( TIM12    ,0xFFE01900ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM12 */
__IOREG( TIM13    ,0xFFE01980ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM13 */
__IOREG( TIM14    ,0xFFE01A00ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM14 */
__IOREG( TIM15    ,0xFFE01A80ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM15 */
__IOREG( TIM16    ,0xFFE01B00ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM16 */
__IOREG( TIM17    ,0xFFE01B80ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM17 */
__IOREG( TIM0     ,0xFFE01074ul    ,__READ_WRITE   , T_TIMOS   ); /* TIM0 */
__IOREG( TIM1     ,0xFFE01874ul    ,__READ_WRITE   , T_TIMOS   ); /* TIM1 */

__IOREG( GTM0     ,0xFFE00000ul    ,__READ_WRITE   , T_GTM0    ); /* GTM0 */
__IOREG( STM0     ,0xFFDD8000ul    ,__READ_WRITE   , T_STM0    ); /* STM0 */
__IOREG( FLMD     ,0xFFA00000ul    ,__READ_WRITE   , T_FLMD    ); /* FLMD */
__IOREG( DCRB0    ,0xFFD50000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0 */
__IOREG( DCRB1    ,0xFFF70000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB1 */
__IOREG( DCRB2    ,0xFFD51000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0 */
__IOREG( DCRB3    ,0xFFF71000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB3 */
__IOREG( DCRB4    ,0xFFD52000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB4 */
__IOREG( DCRB5    ,0xFFF72000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB5 */
__IOREG( DCRB6    ,0xFFD53000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB6 */
__IOREG( DCRB7    ,0xFFF73000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB7 */


__IOREG( EIC0     , 0xFFFEEA00ul , __READ_WRITE, unsigned short ); /* EIC0  */
__IOREG( EIC1     , 0xFFFEEA02ul , __READ_WRITE, unsigned short ); /* EIC1  */
__IOREG( EIC2     , 0xFFFEEA04ul , __READ_WRITE, unsigned short ); /* EIC2  */
__IOREG( EIC3     , 0xFFFEEA06ul , __READ_WRITE, unsigned short ); /* EIC3  */
__IOREG( EIC8     , 0xFFFEEA10ul , __READ_WRITE, unsigned short ); /* EIC8  */
__IOREG( EIC9     , 0xFFFEEA12ul , __READ_WRITE, unsigned short ); /* EIC9  */
__IOREG( EIC12    , 0xFFFEEA18ul , __READ_WRITE, unsigned short ); /* EIC12 */
__IOREG( EIC13    , 0xFFFEEA1Aul , __READ_WRITE, unsigned short ); /* EIC13 */
__IOREG( EIC14    , 0xFFFEEA1Cul , __READ_WRITE, unsigned short ); /* EIC14 */
__IOREG( EIC15    , 0xFFFEEA1Eul , __READ_WRITE, unsigned short ); /* EIC15 */
__IOREG( EIC16    , 0xFFFEEA20ul , __READ_WRITE, unsigned short ); /* EIC16 */
__IOREG( EIC17    , 0xFFFEEA22ul , __READ_WRITE, unsigned short ); /* EIC17 */
__IOREG( EIC18    , 0xFFFEEA24ul , __READ_WRITE, unsigned short ); /* EIC18 */
__IOREG( EIC19    , 0xFFFEEA26ul , __READ_WRITE, unsigned short ); /* EIC19 */
__IOREG( EIC20    , 0xFFFEEA28ul , __READ_WRITE, unsigned short ); /* EIC20 */
__IOREG( EIC21    , 0xFFFEEA2Aul , __READ_WRITE, unsigned short ); /* EIC21 */
__IOREG( EIC22    , 0xFFFEEA2Cul , __READ_WRITE, unsigned short ); /* EIC22 */
__IOREG( EIC23    , 0xFFFEEA2Eul , __READ_WRITE, unsigned short ); /* EIC23 */
__IOREG( EIC24    , 0xFFFEEA30ul , __READ_WRITE, unsigned short ); /* EIC24 */
__IOREG( EIC25    , 0xFFFEEA32ul , __READ_WRITE, unsigned short ); /* EIC25 */
__IOREG( EIC26    , 0xFFFEEA34ul , __READ_WRITE, unsigned short ); /* EIC26 */
__IOREG( EIC27    , 0xFFFEEA36ul , __READ_WRITE, unsigned short ); /* EIC27 */
__IOREG( EIC28    , 0xFFFEEA38ul , __READ_WRITE, unsigned short ); /* EIC28 */
__IOREG( EIC29    , 0xFFFEEA3Aul , __READ_WRITE, unsigned short ); /* EIC29 */
__IOREG( EIC30    , 0xFFFEEA3Cul , __READ_WRITE, unsigned short ); /* EIC30 */
__IOREG( EIC31    , 0xFFFEEA3Eul , __READ_WRITE, unsigned short ); /* EIC31 */
__IOREG( EIC32    , 0xFFFFB040ul, __READ_WRITE, unsigned short  ); /* EIC32 */
__IOREG( EIC33    , 0xFFFFB042ul, __READ_WRITE, unsigned short  ); /* EIC33 */
__IOREG( EIC34    , 0xFFFFB044ul, __READ_WRITE, unsigned short  ); /* EIC34 */
__IOREG( EIC35    , 0xFFFFB046ul, __READ_WRITE, unsigned short  ); /* EIC35 */
__IOREG( EIC36    , 0xFFFFB048ul, __READ_WRITE, unsigned short  ); /* EIC36 */
__IOREG( EIC38    , 0xFFFFB04Cul, __READ_WRITE, unsigned short  ); /* EIC38 */
__IOREG( EIC39    , 0xFFFFB04Eul, __READ_WRITE, unsigned short  ); /* EIC39 */
__IOREG( EIC41    , 0xFFFFB052ul, __READ_WRITE, unsigned short  ); /* EIC41 */
__IOREG( EIC42    , 0xFFFFB054ul, __READ_WRITE, unsigned short  ); /* EIC42 */
__IOREG( EIC53    , 0xFFFFB06Aul, __READ_WRITE, unsigned short  ); /* EIC53 */
__IOREG( EIC54    , 0xFFFFB06Cul, __READ_WRITE, unsigned short  ); /* EIC54 */
__IOREG( EIC55    , 0xFFFFB06Eul, __READ_WRITE, unsigned short  ); /* EIC55 */
__IOREG( EIC56    , 0xFFFFB070ul, __READ_WRITE, unsigned short  ); /* EIC56 */
__IOREG( EIC57    , 0xFFFFB072ul, __READ_WRITE, unsigned short  ); /* EIC57 */
__IOREG( EIC58    , 0xFFFFB074ul, __READ_WRITE, unsigned short  ); /* EIC58 */
__IOREG( EIC59    , 0xFFFFB076ul, __READ_WRITE, unsigned short  ); /* EIC59 */
__IOREG( EIC60    , 0xFFFFB078ul, __READ_WRITE, unsigned short  ); /* EIC60 */
__IOREG( EIC61    , 0xFFFFB07Aul, __READ_WRITE, unsigned short  ); /* EIC61 */
__IOREG( EIC62    , 0xFFFFB07Cul, __READ_WRITE, unsigned short  ); /* EIC62 */
__IOREG( EIC69    , 0xFFFFB08Aul, __READ_WRITE, unsigned short  ); /* EIC69 */
__IOREG( EIC70    , 0xFFFFB08Cul, __READ_WRITE, unsigned short  ); /* EIC70 */
__IOREG( EIC71    , 0xFFFFB08Eul, __READ_WRITE, unsigned short  ); /* EIC71 */
__IOREG( EIC72    , 0xFFFFB090ul, __READ_WRITE, unsigned short  ); /* EIC72 */
__IOREG( EIC73    , 0xFFFFB092ul, __READ_WRITE, unsigned short  ); /* EIC73 */
__IOREG( EIC74    , 0xFFFFB094ul, __READ_WRITE, unsigned short  ); /* EIC74 */
__IOREG( EIC75    , 0xFFFFB096ul, __READ_WRITE, unsigned short  ); /* EIC75 */
__IOREG( EIC76    , 0xFFFFB098ul, __READ_WRITE, unsigned short  ); /* EIC76 */
__IOREG( EIC77    , 0xFFFFB09Aul, __READ_WRITE, unsigned short  ); /* EIC77 */
__IOREG( EIC78    , 0xFFFFB09Cul, __READ_WRITE, unsigned short  ); /* EIC78 */
__IOREG( EIC79    , 0xFFFFB09Eul, __READ_WRITE, unsigned short  ); /* EIC79 */
__IOREG( EIC80    , 0xFFFFB0A0ul , __READ_WRITE, unsigned short ); /* EIC80 */
__IOREG( EIC81    , 0xFFFFB0A2ul , __READ_WRITE, unsigned short ); /* EIC81 */
__IOREG( EIC82    , 0xFFFFB0A4ul , __READ_WRITE, unsigned short ); /* EIC82 */
__IOREG( EIC83    , 0xFFFFB0A6ul , __READ_WRITE, unsigned short ); /* EIC83 */
__IOREG( EIC84    , 0xFFFFB0A8ul , __READ_WRITE, unsigned short ); /* EIC84 */
__IOREG( EIC85    , 0xFFFFB0AAul , __READ_WRITE, unsigned short ); /* EIC85 */
__IOREG( EIC86    , 0xFFFFB0ACul , __READ_WRITE, unsigned short ); /* EIC86 */
__IOREG( EIC87    , 0xFFFFB0AEul , __READ_WRITE, unsigned short ); /* EIC87 */
__IOREG( EIC88    , 0xFFFFB0B0ul , __READ_WRITE, unsigned short ); /* EIC88 */
__IOREG( EIC89    , 0xFFFFB0B2ul , __READ_WRITE, unsigned short ); /* EIC89 */
__IOREG( EIC90    , 0xFFFFB0B4ul , __READ_WRITE, unsigned short ); /* EIC90 */
__IOREG( EIC91    , 0xFFFFB0B6ul , __READ_WRITE, unsigned short ); /* EIC91 */
__IOREG( EIC92    , 0xFFFFB0B8ul , __READ_WRITE, unsigned short ); /* EIC92 */
__IOREG( EIC93    , 0xFFFFB0BAul , __READ_WRITE, unsigned short ); /* EIC93 */
__IOREG( EIC94    , 0xFFFFB0BCul , __READ_WRITE, unsigned short ); /* EIC94 */
__IOREG( EIC95    , 0xFFFFB0BEul , __READ_WRITE, unsigned short ); /* EIC95 */
__IOREG( EIC96    , 0xFFFFB0C0ul , __READ_WRITE, unsigned short ); /* EIC96 */
__IOREG( EIC97    , 0xFFFFB0C2ul , __READ_WRITE, unsigned short ); /* EIC97 */
__IOREG( EIC98    , 0xFFFFB0C4ul , __READ_WRITE, unsigned short ); /* EIC98 */
__IOREG( EIC99    , 0xFFFFB0C6ul , __READ_WRITE, unsigned short ); /* EIC99 */
__IOREG( EIC100   , 0xFFFFB0C8ul , __READ_WRITE, unsigned short ); /* EIC100 */
__IOREG( EIC101   , 0xFFFFB0CAul , __READ_WRITE, unsigned short ); /* EIC101 */


__IOREG( EIC111   , 0xFFFFB0DEul, __READ_WRITE, unsigned short  ); /* EIC111*/
__IOREG( EIC114   , 0xFFFFB0E4ul, __READ_WRITE, unsigned short  ); /* EIC114*/
__IOREG( EIC128   , 0xFFFFB100ul, __READ_WRITE, unsigned short  ); /* EIC128*/
__IOREG( EIC129   , 0xFFFFB102ul, __READ_WRITE, unsigned short  ); /* EIC129*/
__IOREG( EIC130   , 0xFFFFB104ul, __READ_WRITE, unsigned short  ); /* EIC130*/
__IOREG( EIC131   , 0xFFFFB106ul, __READ_WRITE, unsigned short  ); /* EIC131*/
__IOREG( EIC132   , 0xFFFFB108ul, __READ_WRITE, unsigned short  ); /* EIC132*/
__IOREG( EIC133   , 0xFFFFB10Aul, __READ_WRITE, unsigned short  ); /* EIC133*/
__IOREG( EIC134   , 0xFFFFB10Cul, __READ_WRITE, unsigned short  ); /* EIC134*/
__IOREG( EIC141   , 0xFFFFB11Aul, __READ_WRITE, unsigned short  ); /* EIC141*/
__IOREG( EIC142   , 0xFFFFB11Cul, __READ_WRITE, unsigned short  ); /* EIC142*/
__IOREG( EIC143   , 0xFFFFB11Eul, __READ_WRITE, unsigned short  ); /* EIC143*/
__IOREG( EIC144   , 0xFFFFB120ul, __READ_WRITE, unsigned short  ); /* EIC144*/
__IOREG( EIC145   , 0xFFFFB122ul, __READ_WRITE, unsigned short  ); /* EIC145*/
__IOREG( EIC146   , 0xFFFFB124ul, __READ_WRITE, unsigned short  ); /* EIC146*/
__IOREG( EIC147   , 0xFFFFB126ul, __READ_WRITE, unsigned short  ); /* EIC147*/
__IOREG( EIC148   , 0xFFFFB128ul, __READ_WRITE, unsigned short  ); /* EIC148*/
__IOREG( EIC156   , 0xFFFFB138ul, __READ_WRITE, unsigned short  ); /* EIC156*/
__IOREG( EIC157   , 0xFFFFB13Aul, __READ_WRITE, unsigned short  ); /* EIC157*/
__IOREG( EIC158   , 0xFFFFB13Cul, __READ_WRITE, unsigned short  ); /* EIC158*/
__IOREG( EIC159   , 0xFFFFB13Eul, __READ_WRITE, unsigned short  ); /* EIC159*/
__IOREG( EIC160   , 0xFFFFB140ul, __READ_WRITE, unsigned short  ); /* EIC160*/
__IOREG( EIC161   , 0xFFFFB142ul, __READ_WRITE, unsigned short  ); /* EIC161*/
__IOREG( EIC162   , 0xFFFFB144ul, __READ_WRITE, unsigned short  ); /* EIC162*/
__IOREG( EIC163   , 0xFFFFB146ul, __READ_WRITE, unsigned short  ); /* EIC163*/
__IOREG( EIC164   , 0xFFFFB148ul, __READ_WRITE, unsigned short  ); /* EIC164*/
__IOREG( EIC165   , 0xFFFFB14Aul, __READ_WRITE, unsigned short  ); /* EIC165*/
__IOREG( EIC166   , 0xFFFFB14Cul , __READ_WRITE, unsigned short ); /* EIC166 */
__IOREG( EIC167   , 0xFFFFB14Eul , __READ_WRITE, unsigned short ); /* EIC167 */
__IOREG( EIC168   , 0xFFFFB150ul , __READ_WRITE, unsigned short ); /* EIC168 */
__IOREG( EIC169   , 0xFFFFB152ul , __READ_WRITE, unsigned short ); /* EIC169 */
__IOREG( EIC170   , 0xFFFFB154ul , __READ_WRITE, unsigned short ); /* EIC170 */
__IOREG( EIC171   , 0xFFFFB156ul , __READ_WRITE, unsigned short ); /* EIC171 */
__IOREG( EIC174   , 0xFFFFB15Cul, __READ_WRITE, unsigned short  ); /* EIC174*/
__IOREG( EIC177   , 0xFFFFB162ul, __READ_WRITE, unsigned short  ); /* EIC177*/
__IOREG( EIC184   , 0xFFFFB170ul, __READ_WRITE, unsigned short  ); /* EIC184*/
__IOREG( EIC186   , 0xFFFFB174ul, __READ_WRITE, unsigned short  ); /* EIC186*/
__IOREG( EIC197   , 0xFFFFB18Aul, __READ_WRITE, unsigned short  ); /* EIC197*/
__IOREG( EIC209   , 0xFFFFB1A2ul, __READ_WRITE, unsigned short  ); /* EIC209*/
__IOREG( EIC211   , 0xFFFFB1A6ul, __READ_WRITE, unsigned short  ); /* EIC211*/
__IOREG( EIC240   , 0xFFFFB1E0ul, __READ_WRITE, unsigned short  ); /* EIC240*/
__IOREG( EIC241   , 0xFFFFB1E2ul, __READ_WRITE, unsigned short  ); /* EIC241*/
__IOREG( EIC242   , 0xFFFFB1E4ul, __READ_WRITE, unsigned short  ); /* EIC242*/
__IOREG( EIC243   , 0xFFFFB1E6ul, __READ_WRITE, unsigned short  ); /* EIC243*/
__IOREG( EIC244   , 0xFFFFB1E8ul, __READ_WRITE, unsigned short  ); /* EIC244*/
__IOREG( EIC245   , 0xFFFFB1EAul, __READ_WRITE, unsigned short  ); /* EIC245*/

__IOREG( IMR0     , 0xFFFEEAF0ul, __READ_WRITE, unsigned long   ); /* IMR0 */
__IOREG( IMR1     , 0xFFFFB404ul, __READ_WRITE, unsigned long   ); /* IMR1 */
__IOREG( IMR2     , 0xFFFFB408ul, __READ_WRITE, unsigned long   ); /* IMR2 */
__IOREG( IMR3     , 0xFFFFB40Cul, __READ_WRITE, unsigned long   ); /* IMR3 */
__IOREG( IMR4     , 0xFFFFB410ul, __READ_WRITE, unsigned long   ); /* IMR4 */
__IOREG( IMR5     , 0xFFFFB414ul, __READ_WRITE, unsigned long   ); /* IMR5 */
__IOREG( IMR6     , 0xFFFFB418ul, __READ_WRITE, unsigned long   ); /* IMR6 */
__IOREG( IMR7     , 0xFFFFB41Cul, __READ_WRITE, unsigned long   ); /* IMR7 */


__IOREG( MSR_LM2  , 0xFFF86210ul, __READ_WRITE, unsigned long   ); /* MSR_LM2 */
__IOREG( MSR_LM3  , 0xFFF81710ul, __READ_WRITE, unsigned long   ); /* MSR_LM3 */
__IOREG( MSR_LM4  , 0xFFF81810ul, __READ_WRITE, unsigned long   ); /* MSR_LM4 */
__IOREG( MSR_LM5  , 0xFFF81910ul, __READ_WRITE, unsigned long   ); /* MSR_LM5 */
__IOREG( MSR_LM6  , 0xFFF81A10ul, __READ_WRITE, unsigned long   ); /* MSR_LM6 */
__IOREG( MSR_LM7  , 0xFFF81B10ul, __READ_WRITE, unsigned long   ); /* MSR_LM7 */
__IOREG( MSR_LM8  , 0xFFF81C10ul, __READ_WRITE, unsigned long   ); /* MSR_LM8 */
__IOREG( MSR_LM10 , 0xFFF81E10ul, __READ_WRITE, unsigned long   ); /* MSR_LM10*/
__IOREG( MSR_LM11 , 0xFFF81F10ul, __READ_WRITE, unsigned long   ); /* MSR_LM11*/
__IOREG( MSR_LM12 , 0xFFF82010ul, __READ_WRITE, unsigned long   ); /* MSR_LM12*/

__IOREG( DSA0     , 0xFFFF8400ul, __READ_WRITE, unsigned long   ); /* DSA0 */
__IOREG( DSA1     , 0xFFFF8440ul, __READ_WRITE, unsigned long   ); /* DSA1 */
__IOREG( DSA2     , 0xFFFF8480ul, __READ_WRITE, unsigned long   ); /* DSA2 */
__IOREG( DSA3     , 0xFFFF84C0ul, __READ_WRITE, unsigned long   ); /* DSA3 */
__IOREG( DSA4     , 0xFFFF8500ul, __READ_WRITE, unsigned long   ); /* DSA4 */
__IOREG( DSA5     , 0xFFFF8540ul, __READ_WRITE, unsigned long   ); /* DSA5 */
__IOREG( DSA6     , 0xFFFF8580ul, __READ_WRITE, unsigned long   ); /* DSA6 */
__IOREG( DSA7     , 0xFFFF85C0ul, __READ_WRITE, unsigned long   ); /* DSA7 */
__IOREG( DSA8     , 0xFFFF8600ul, __READ_WRITE, unsigned long   ); /* DSA8 */
__IOREG( DSA9     , 0xFFFF8640ul, __READ_WRITE, unsigned long   ); /* DSA9 */
__IOREG( DSA10    , 0xFFFF8680ul, __READ_WRITE, unsigned long   ); /* DSA10 */
__IOREG( DSA11    , 0xFFFF86C0ul, __READ_WRITE, unsigned long   ); /* DSA11 */
__IOREG( DSA12    , 0xFFFF8700ul, __READ_WRITE, unsigned long   ); /* DSA12 */
__IOREG( DSA13    , 0xFFFF8740ul, __READ_WRITE, unsigned long   ); /* DSA13 */
__IOREG( DSA14    , 0xFFFF8780ul, __READ_WRITE, unsigned long   ); /* DSA14 */
__IOREG( DSA15    , 0xFFFF87C0ul, __READ_WRITE, unsigned long   ); /* DSA15 */

__IOREG( G0MEV1   , 0xFFFEEC04ul, __READ_WRITE, unsigned long   ); /* G0MEV1 */
__IOREG( BOOTCTRL , 0xFFC58000ul, __READ_WRITE, unsigned long   ); /*BOOTCTRL*/


__IOREG( P0       , 0xFFC10000ul, __READ_WRITE, unsigned short );
__IOREG( PSR0     , 0xFFC10004ul, __READ_WRITE, unsigned long );
__IOREG( PNOT0    , 0xFFC10008ul, __READ_WRITE, unsigned short );
__IOREG( PPR0     , 0xFFC1000Cul, __READ_WRITE, unsigned short );
__IOREG( PM0      , 0xFFC10010ul, __READ_WRITE, unsigned short );
__IOREG( PMC0     , 0xFFC10014ul, __READ_WRITE, unsigned short );
__IOREG( PFC0     , 0xFFC10018ul, __READ_WRITE, unsigned short );
__IOREG( PFCE0    , 0xFFC1001Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR0    , 0xFFC10020ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR0   , 0xFFC10024ul, __READ_WRITE, unsigned long );
__IOREG( PINV0    , 0xFFC10030ul, __READ_WRITE, unsigned short );
__IOREG( P1       , 0xFFC10040ul, __READ_WRITE, unsigned short );
__IOREG( PSR1     , 0xFFC10044ul, __READ_WRITE, unsigned long );
__IOREG( PNOT1    , 0xFFC10048ul, __READ_WRITE, unsigned short );
__IOREG( PPR1     , 0xFFC1004Cul, __READ_WRITE, unsigned short );
__IOREG( PM1      , 0xFFC10050ul, __READ_WRITE, unsigned short );
__IOREG( PMC1     , 0xFFC10054ul, __READ_WRITE, unsigned short );
__IOREG( PFC1     , 0xFFC10058ul, __READ_WRITE, unsigned short );
__IOREG( PFCE1    , 0xFFC1005Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR1    , 0xFFC10060ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR1   , 0xFFC10064ul, __READ_WRITE, unsigned long );
__IOREG( PINV1    , 0xFFC10070ul, __READ_WRITE, unsigned short );
__IOREG( P2       , 0xFFC10080ul, __READ_WRITE, unsigned short );
__IOREG( PSR2     , 0xFFC10084ul, __READ_WRITE, unsigned long );
__IOREG( PNOT2    , 0xFFC10088ul, __READ_WRITE, unsigned short );
__IOREG( PPR2     , 0xFFC1008Cul, __READ_WRITE, unsigned short );
__IOREG( PM2      , 0xFFC10090ul, __READ_WRITE, unsigned short );
__IOREG( PMC2     , 0xFFC10094ul, __READ_WRITE, unsigned short );
__IOREG( PFC2     , 0xFFC10098ul, __READ_WRITE, unsigned short );
__IOREG( PFCE2    , 0xFFC1009Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR2    , 0xFFC100A0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR2   , 0xFFC100A4ul, __READ_WRITE, unsigned long );
__IOREG( PINV2    , 0xFFC100B0ul, __READ_WRITE, unsigned short );
__IOREG( P3       , 0xFFC100C0ul, __READ_WRITE, unsigned short );
__IOREG( PSR3     , 0xFFC100C4ul, __READ_WRITE, unsigned long );
__IOREG( PNOT3    , 0xFFC100C8ul, __READ_WRITE, unsigned short );
__IOREG( PPR3     , 0xFFC100CCul, __READ_WRITE, unsigned short );
__IOREG( PM3      , 0xFFC100D0ul, __READ_WRITE, unsigned short );
__IOREG( PMC3     , 0xFFC100D4ul, __READ_WRITE, unsigned short );
__IOREG( PFC3     , 0xFFC100D8ul, __READ_WRITE, unsigned short );
__IOREG( PFCE3    , 0xFFC100DCul, __READ_WRITE, unsigned short );
__IOREG( PMSR3    , 0xFFC100E0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR3   , 0xFFC100E4ul, __READ_WRITE, unsigned long );
__IOREG( PINV3    , 0xFFC100F0ul, __READ_WRITE, unsigned short );
__IOREG( P4       , 0xFFC10100ul, __READ_WRITE, unsigned short );
__IOREG( PSR4     , 0xFFC10104ul, __READ_WRITE, unsigned long );
__IOREG( PNOT4    , 0xFFC10108ul, __READ_WRITE, unsigned short );
__IOREG( PPR4     , 0xFFC1010Cul, __READ_WRITE, unsigned short );
__IOREG( PM4      , 0xFFC10110ul, __READ_WRITE, unsigned short );
__IOREG( PMC4     , 0xFFC10114ul, __READ_WRITE, unsigned short );
__IOREG( PFC4     , 0xFFC10118ul, __READ_WRITE, unsigned short );
__IOREG( PFCE4    , 0xFFC1011Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR4    , 0xFFC10120ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR4   , 0xFFC10124ul, __READ_WRITE, unsigned long );
__IOREG( PINV4    , 0xFFC10130ul, __READ_WRITE, unsigned short );
__IOREG( P5       , 0xFFC10140ul, __READ_WRITE, unsigned short );
__IOREG( PSR5     , 0xFFC10144ul, __READ_WRITE, unsigned long );
__IOREG( PNOT5    , 0xFFC10148ul, __READ_WRITE, unsigned short );
__IOREG( PPR5     , 0xFFC1014Cul, __READ_WRITE, unsigned short );
__IOREG( PM5      , 0xFFC10150ul, __READ_WRITE, unsigned short );
__IOREG( PMC5     , 0xFFC10154ul, __READ_WRITE, unsigned short );
__IOREG( PFC5     , 0xFFC10158ul, __READ_WRITE, unsigned short );
__IOREG( PFCE5    , 0xFFC1015Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR5    , 0xFFC10160ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR5   , 0xFFC10164ul, __READ_WRITE, unsigned long );
__IOREG( PINV5    , 0xFFC10170ul, __READ_WRITE, unsigned short );
__IOREG( P6       , 0xFFC10180ul, __READ_WRITE, unsigned short );
__IOREG( PSR6     , 0xFFC10184ul, __READ_WRITE, unsigned long );
__IOREG( PNOT6    , 0xFFC10188ul, __READ_WRITE, unsigned short );
__IOREG( PPR6     , 0xFFC1018Cul, __READ_WRITE, unsigned short );
__IOREG( PM6      , 0xFFC10190ul, __READ_WRITE, unsigned short );
__IOREG( PMC6     , 0xFFC10194ul, __READ_WRITE, unsigned short );
__IOREG( PFC6     , 0xFFC10198ul, __READ_WRITE, unsigned short );
__IOREG( PFCE6    , 0xFFC1019Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR6    , 0xFFC101A0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR6   , 0xFFC101A4ul, __READ_WRITE, unsigned long );
__IOREG( PINV6    , 0xFFC101B0ul, __READ_WRITE, unsigned short );
__IOREG( P7       , 0xFFC101C0ul, __READ_WRITE, unsigned short );
__IOREG( PSR7     , 0xFFC101C4ul, __READ_WRITE, unsigned long );
__IOREG( PNOT7    , 0xFFC101C8ul, __READ_WRITE, unsigned short );
__IOREG( PPR7     , 0xFFC101CCul, __READ_WRITE, unsigned short );
__IOREG( PM7      , 0xFFC101D0ul, __READ_WRITE, unsigned short );
__IOREG( PMC7     , 0xFFC101D4ul, __READ_WRITE, unsigned short );
__IOREG( PFC7     , 0xFFC101D8ul, __READ_WRITE, unsigned short );
__IOREG( PFCE7    , 0xFFC101DCul, __READ_WRITE, unsigned short );
__IOREG( PMSR7    , 0xFFC101E0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR7   , 0xFFC101E4ul, __READ_WRITE, unsigned long );
__IOREG( PINV7    , 0xFFC101F0ul, __READ_WRITE, unsigned short );
__IOREG( P8       , 0xFFC10200ul, __READ_WRITE, unsigned short );
__IOREG( PSR8     , 0xFFC10204ul, __READ_WRITE, unsigned long );
__IOREG( PNOT8    , 0xFFC10208ul, __READ_WRITE, unsigned short );
__IOREG( PPR8     , 0xFFC1020Cul, __READ_WRITE, unsigned short );
__IOREG( PM8      , 0xFFC10210ul, __READ_WRITE, unsigned short );
__IOREG( PMC8     , 0xFFC10214ul, __READ_WRITE, unsigned short );
__IOREG( PFC8     , 0xFFC10218ul, __READ_WRITE, unsigned short );
__IOREG( PFCE8    , 0xFFC1021Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR8    , 0xFFC10220ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR8   , 0xFFC10224ul, __READ_WRITE, unsigned long );
__IOREG( PINV8    , 0xFFC10230ul, __READ_WRITE, unsigned short );
__IOREG( P9       , 0xFFC10240ul, __READ_WRITE, unsigned short );
__IOREG( PSR9     , 0xFFC10244ul, __READ_WRITE, unsigned long );
__IOREG( PNOT9    , 0xFFC10248ul, __READ_WRITE, unsigned short );
__IOREG( PPR9     , 0xFFC1024Cul, __READ_WRITE, unsigned short );
__IOREG( PM9      , 0xFFC10250ul, __READ_WRITE, unsigned short );
__IOREG( PMC9     , 0xFFC10254ul, __READ_WRITE, unsigned short );
__IOREG( PFC9     , 0xFFC10258ul, __READ_WRITE, unsigned short );
__IOREG( PFCE9    , 0xFFC1025Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR9    , 0xFFC10260ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR9   , 0xFFC10264ul, __READ_WRITE, unsigned long );
__IOREG( PINV9    , 0xFFC10270ul, __READ_WRITE, unsigned short );
__IOREG( PIBC0    , 0xFFC14000ul, __READ_WRITE, unsigned short );
__IOREG( PBDC0    , 0xFFC14004ul, __READ_WRITE, unsigned short );
__IOREG( PIPC0    , 0xFFC14008ul, __READ_WRITE, unsigned short );
__IOREG( PU0      , 0xFFC1400Cul, __READ_WRITE, unsigned short );
__IOREG( PD0      , 0xFFC14010ul, __READ_WRITE, unsigned short );
__IOREG( PODC0    , 0xFFC14014ul, __READ_WRITE, unsigned long );
__IOREG( PDSC0    , 0xFFC14018ul, __READ_WRITE, unsigned long );
__IOREG( PIS0     , 0xFFC1401Cul, __READ_WRITE, unsigned short );
__IOREG( PISA0    , 0xFFC14024ul, __READ_WRITE, unsigned short );
__IOREG( PUCC0    , 0xFFC14028ul, __READ_WRITE, unsigned long );
__IOREG( PODCE0   , 0xFFC14038ul, __READ_WRITE, unsigned long );
__IOREG( PIBC1    , 0xFFC14040ul, __READ_WRITE, unsigned short );
__IOREG( PBDC1    , 0xFFC14044ul, __READ_WRITE, unsigned short );
__IOREG( PIPC1    , 0xFFC14048ul, __READ_WRITE, unsigned short );
__IOREG( PU1      , 0xFFC1404Cul, __READ_WRITE, unsigned short );
__IOREG( PD1      , 0xFFC14050ul, __READ_WRITE, unsigned short );
__IOREG( PODC1    , 0xFFC14054ul, __READ_WRITE, unsigned long );
__IOREG( PDSC1    , 0xFFC14058ul, __READ_WRITE, unsigned long );
__IOREG( PIS1     , 0xFFC1405Cul, __READ_WRITE, unsigned short );
__IOREG( PISA1    , 0xFFC14064ul, __READ_WRITE, unsigned short );
__IOREG( PUCC1    , 0xFFC14068ul, __READ_WRITE, unsigned long );
__IOREG( PODCE1   , 0xFFC14078ul, __READ_WRITE, unsigned long );
__IOREG( PIBC2    , 0xFFC14080ul, __READ_WRITE, unsigned short );
__IOREG( PBDC2    , 0xFFC14084ul, __READ_WRITE, unsigned short );
__IOREG( PIPC2    , 0xFFC14088ul, __READ_WRITE, unsigned short );
__IOREG( PU2      , 0xFFC1408Cul, __READ_WRITE, unsigned short );
__IOREG( PD2      , 0xFFC14090ul, __READ_WRITE, unsigned short );
__IOREG( PODC2    , 0xFFC14094ul, __READ_WRITE, unsigned long );
__IOREG( PDSC2    , 0xFFC14098ul, __READ_WRITE, unsigned long );
__IOREG( PIS2     , 0xFFC1409Cul, __READ_WRITE, unsigned short );
__IOREG( PISA2    , 0xFFC140A4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC2    , 0xFFC140A8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE2   , 0xFFC140B8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC3    , 0xFFC140C0ul, __READ_WRITE, unsigned short );
__IOREG( PBDC3    , 0xFFC140C4ul, __READ_WRITE, unsigned short );
__IOREG( PIPC3    , 0xFFC140C8ul, __READ_WRITE, unsigned short );
__IOREG( PU3      , 0xFFC140CCul, __READ_WRITE, unsigned short );
__IOREG( PD3      , 0xFFC140D0ul, __READ_WRITE, unsigned short );
__IOREG( PODC3    , 0xFFC140D4ul, __READ_WRITE, unsigned long );
__IOREG( PDSC3    , 0xFFC140D8ul, __READ_WRITE, unsigned long );
__IOREG( PIS3     , 0xFFC140DCul, __READ_WRITE, unsigned short );
__IOREG( PISA3    , 0xFFC140E4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC3    , 0xFFC140E8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE3   , 0xFFC140F8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC4    , 0xFFC14100ul, __READ_WRITE, unsigned short );
__IOREG( PBDC4    , 0xFFC14104ul, __READ_WRITE, unsigned short );
__IOREG( PIPC4    , 0xFFC14108ul, __READ_WRITE, unsigned short );
__IOREG( PU4      , 0xFFC1410Cul, __READ_WRITE, unsigned short );
__IOREG( PD4      , 0xFFC14110ul, __READ_WRITE, unsigned short );
__IOREG( PODC4    , 0xFFC14114ul, __READ_WRITE, unsigned long );
__IOREG( PDSC4    , 0xFFC14118ul, __READ_WRITE, unsigned long );
__IOREG( PIS4     , 0xFFC1411Cul, __READ_WRITE, unsigned short );
__IOREG( PISA4    , 0xFFC14124ul, __READ_WRITE, unsigned short );
__IOREG( PUCC4    , 0xFFC14128ul, __READ_WRITE, unsigned long );
__IOREG( PODCE4   , 0xFFC14138ul, __READ_WRITE, unsigned long );
__IOREG( PIBC5    , 0xFFC14140ul, __READ_WRITE, unsigned short );
__IOREG( PBDC5    , 0xFFC14144ul, __READ_WRITE, unsigned short );
__IOREG( PIPC5    , 0xFFC14148ul, __READ_WRITE, unsigned short );
__IOREG( PU5      , 0xFFC1414Cul, __READ_WRITE, unsigned short );
__IOREG( PD5      , 0xFFC14150ul, __READ_WRITE, unsigned short );
__IOREG( PODC5    , 0xFFC14154ul, __READ_WRITE, unsigned long );
__IOREG( PDSC5    , 0xFFC14158ul, __READ_WRITE, unsigned long );
__IOREG( PIS5     , 0xFFC1415Cul, __READ_WRITE, unsigned short );
__IOREG( PISA5    , 0xFFC14164ul, __READ_WRITE, unsigned short );
__IOREG( PUCC5    , 0xFFC14168ul, __READ_WRITE, unsigned long );
__IOREG( PODCE5   , 0xFFC14178ul, __READ_WRITE, unsigned long );
__IOREG( PIBC6    , 0xFFC14180ul, __READ_WRITE, unsigned short );
__IOREG( PBDC6    , 0xFFC14184ul, __READ_WRITE, unsigned short );
__IOREG( PIPC6    , 0xFFC14188ul, __READ_WRITE, unsigned short );
__IOREG( PU6      , 0xFFC1418Cul, __READ_WRITE, unsigned short );
__IOREG( PD6      , 0xFFC14190ul, __READ_WRITE, unsigned short );
__IOREG( PODC6    , 0xFFC14194ul, __READ_WRITE, unsigned long );
__IOREG( PDSC6    , 0xFFC14198ul, __READ_WRITE, unsigned long );
__IOREG( PIS6     , 0xFFC1419Cul, __READ_WRITE, unsigned short );
__IOREG( PISA6    , 0xFFC141A4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC6    , 0xFFC141A8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE6   , 0xFFC141B8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC7    , 0xFFC141C0ul, __READ_WRITE, unsigned short );
__IOREG( PBDC7    , 0xFFC141C4ul, __READ_WRITE, unsigned short );
__IOREG( PIPC7    , 0xFFC141C8ul, __READ_WRITE, unsigned short );
__IOREG( PU7      , 0xFFC141CCul, __READ_WRITE, unsigned short );
__IOREG( PD7      , 0xFFC141D0ul, __READ_WRITE, unsigned short );
__IOREG( PODC7    , 0xFFC141D4ul, __READ_WRITE, unsigned long );
__IOREG( PDSC7    , 0xFFC141D8ul, __READ_WRITE, unsigned long );
__IOREG( PIS7     , 0xFFC141DCul, __READ_WRITE, unsigned short );
__IOREG( PISA7    , 0xFFC141E4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC7    , 0xFFC141E8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE7   , 0xFFC141F8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC8    , 0xFFC14200ul, __READ_WRITE, unsigned short );
__IOREG( PBDC8    , 0xFFC14204ul, __READ_WRITE, unsigned short );
__IOREG( PIPC8    , 0xFFC14208ul, __READ_WRITE, unsigned short );
__IOREG( PU8      , 0xFFC1420Cul, __READ_WRITE, unsigned short );
__IOREG( PD8      , 0xFFC14210ul, __READ_WRITE, unsigned short );
__IOREG( PODC8    , 0xFFC14214ul, __READ_WRITE, unsigned long );
__IOREG( PDSC8    , 0xFFC14218ul, __READ_WRITE, unsigned long );
__IOREG( PIS8     , 0xFFC1421Cul, __READ_WRITE, unsigned short );
__IOREG( PISA8    , 0xFFC14224ul, __READ_WRITE, unsigned short );
__IOREG( PUCC8    , 0xFFC14228ul, __READ_WRITE, unsigned long );
__IOREG( PODCE8   , 0xFFC14238ul, __READ_WRITE, unsigned long );
__IOREG( PIBC9    , 0xFFC14240ul, __READ_WRITE, unsigned short );
__IOREG( PBDC9    , 0xFFC14244ul, __READ_WRITE, unsigned short );
__IOREG( PIPC9    , 0xFFC14248ul, __READ_WRITE, unsigned short );
__IOREG( PU9      , 0xFFC1424Cul, __READ_WRITE, unsigned short );
__IOREG( PD9      , 0xFFC14250ul, __READ_WRITE, unsigned short );
__IOREG( PODC9    , 0xFFC14254ul, __READ_WRITE, unsigned long );
__IOREG( PDSC9    , 0xFFC14258ul, __READ_WRITE, unsigned long );
__IOREG( PIS9     , 0xFFC1425Cul, __READ_WRITE, unsigned short );
__IOREG( PISA9    , 0xFFC14264ul, __READ_WRITE, unsigned short );
__IOREG( PUCC9    , 0xFFC14268ul, __READ_WRITE, unsigned long );
__IOREG( PODCE9   , 0xFFC14278ul, __READ_WRITE, unsigned long );
__IOREG( JP0      , 0xFFC20000ul, __READ_WRITE, unsigned char );
__IOREG( JPSR0    , 0xFFC20004ul, __READ_WRITE, unsigned long );
__IOREG( JPNOT0   , 0xFFC20008ul, __READ_WRITE, unsigned char );
__IOREG( JPPR0    , 0xFFC2000Cul, __READ_WRITE, unsigned char );
__IOREG( JPM0     , 0xFFC20010ul, __READ_WRITE, unsigned char );
__IOREG( JPMC0    , 0xFFC20014ul, __READ_WRITE, unsigned char );
__IOREG( JPFC0    , 0xFFC20018ul, __READ_WRITE, unsigned char );
__IOREG( JPFCE0   , 0xFFC2001Cul, __READ_WRITE, unsigned char );
__IOREG( JPMSR0   , 0xFFC20020ul, __READ_WRITE, unsigned long );
__IOREG( JPMCSR0  , 0xFFC20024ul, __READ_WRITE, unsigned long );
__IOREG( JPINV0   , 0xFFC20030ul, __READ_WRITE, unsigned char );
__IOREG( JPIBC0   , 0xFFC24000ul, __READ_WRITE, unsigned char );
__IOREG( JPBDC0   , 0xFFC24004ul, __READ_WRITE, unsigned char );
__IOREG( JPU0     , 0xFFC2400Cul, __READ_WRITE, unsigned char );
__IOREG( JPD0     , 0xFFC24010ul, __READ_WRITE, unsigned char );
__IOREG( JPODC0   , 0xFFC24014ul, __READ_WRITE, unsigned long );
__IOREG( JPDSC0   , 0xFFC24018ul, __READ_WRITE, unsigned long );
__IOREG( JPIS0    , 0xFFC2401Cul, __READ_WRITE, unsigned char );
__IOREG( JPISA0   , 0xFFC24024ul, __READ_WRITE, unsigned char );
__IOREG( JPUCC0   , 0xFFC24028ul, __READ_WRITE, unsigned long );
__IOREG( JPODCE0  , 0xFFC24038ul, __READ_WRITE, unsigned long );

__IOREG( RESC       , 0xFFF82800ul, __READ_WRITE, unsigned char  ); /* RESC */
__IOREG( CVMDEW     , 0xFFF82C1Cul, __READ_WRITE, unsigned char  ); /* CVMDEW */
__IOREG( CVMDMASK   , 0xFFF82C0Cul, __READ_WRITE, unsigned char  ); /*CVMDMASK*/
__IOREG( CVMFC      , 0xFFF82C18ul, __WRITE     , unsigned char  ); /*CVMFC*/
__IOREG( CVMF       , 0xFFF82C00ul, __READ      , unsigned char  ); /*CVMF*/
__IOREG( CVMDIAG    , 0xFFF82C10ul, __READ_WRITE, unsigned char  ); /*CVMDIAG*/
__IOREG( CVMMON     , 0xFFF82C14ul, __READ      , unsigned char  ); /*CVMMON*/
__IOREG( CVMDE      , 0xFFF82C04ul, __READ      , unsigned char  ); /*CVMDE*/
__IOREG( CLKD0DIVL  , 0xFFF88800ul, __READ_WRITE, unsigned long  );/*CLKD0DIVL*/
__IOREG( CLKD1DIVL  , 0xFFF88808ul, __READ_WRITE, unsigned long  );/*CLKD1DIVL*/
__IOREG( CLKD2DIVL  , 0xFFF88810ul, __READ_WRITE, unsigned long  );/*CLKD2DIVL*/
__IOREG( CLKD3DIVL  , 0xFFF88818ul, __READ_WRITE, unsigned long  );/*CLKD3DIVL*/
__IOREG( CLKD0STATL , 0xFFF88804ul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD0STATL*/
__IOREG( CLKD1STATL , 0xFFF8880Cul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD1STATL*/
__IOREG( CLKD2STATL , 0xFFF88814ul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD2STATL*/
__IOREG( CLKD3STATL , 0xFFF8881Cul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD3STATL*/
__IOREG( CKSC0CL    , 0xFFF89000ul, __READ_WRITE, unsigned long  );/* CKSC0CL */
__IOREG( CKSC1CL    , 0xFFF89040ul, __READ_WRITE, unsigned long  );/* CKSC1CL */
__IOREG( CKSC2CL    , 0xFFF89080ul, __READ_WRITE, unsigned long  );/* CKSC2CL */
__IOREG( CKSC3CL    , 0xFFF890C0ul, __READ_WRITE, unsigned long  );/* CKSC3CL */
__IOREG( CKSC0SL    , 0xFFF89008ul, __READ_WRITE, unsigned long  );/* CKSC0SL */
__IOREG( CKSC1SL    , 0xFFF89048ul, __READ_WRITE, unsigned long  );/* CKSC1SL */
__IOREG( CKSC2SL    , 0xFFF89088ul, __READ_WRITE, unsigned long  );/* CKSC2SL */
__IOREG( CKSC3SL    , 0xFFF890C8ul, __READ_WRITE, unsigned long  );/* CKSC3SL */
__IOREG( RESF       , 0xFFF81000ul, __READ_WRITE, unsigned short );/* RESF */
__IOREG( RESFC      , 0xFFF81008ul, __READ_WRITE, unsigned short );/* RESFC */
__IOREG( SWSRESA0   , 0xFFF81100ul, __READ_WRITE, unsigned char  );/* SWSRESA0*/
__IOREG( SWARESA0   , 0xFFF81200ul, __READ_WRITE, unsigned char  );/* SWARESA0*/

__IOREG( FHVE3      , 0xFFF82410ul, __READ_WRITE, unsigned long  );/* FHVE3 */
__IOREG( FHVE15     , 0xFFF8A430ul, __READ_WRITE, unsigned long  );/* FHVE15 */
__IOREG( SELFID0    , 0xFFA08000ul, __READ_WRITE, unsigned long  );/* SELFID0 */
__IOREG( SELFID1    , 0xFFA08004ul, __READ_WRITE, unsigned long  );/* SELFID1 */
__IOREG( SELFID2    , 0xFFA08008ul, __READ_WRITE, unsigned long  );/* SELFID2 */
__IOREG( SELFID3    , 0xFFA0800Cul, __READ_WRITE, unsigned long  );/* SELFID3 */
__IOREG( SELFID4    , 0xFFA08010ul, __READ_WRITE, unsigned long  );/* SELFID4 */
__IOREG( SELFID5    , 0xFFA08014ul, __READ_WRITE, unsigned long  );/* SELFID5 */
__IOREG( SELFID6    , 0xFFA08018ul, __READ_WRITE, unsigned long  );/* SELFID6 */
__IOREG( SELFID7    , 0xFFA0801Cul, __READ_WRITE, unsigned long  );/* SELFID7 */
__IOREG( CFPEID0    , 0xFFA08060ul, __READ_WRITE, unsigned long  );/* CFPEID0 */
__IOREG( CFPEID1    , 0xFFA08064ul, __READ_WRITE, unsigned long  );/* CFPEID1 */
__IOREG( CFPEID2    , 0xFFA08068ul, __READ_WRITE, unsigned long  );/* CFPEID2 */
__IOREG( CFPEID3    , 0xFFA0806Cul, __READ_WRITE, unsigned long  );/* CFPEID3 */
__IOREG( CFPEID4    , 0xFFA08070ul, __READ_WRITE, unsigned long  );/* CFPEID4 */
__IOREG( CFPEID5    , 0xFFA08074ul, __READ_WRITE, unsigned long  );/* CFPEID5 */
__IOREG( CFPEID6    , 0xFFA08078ul, __READ_WRITE, unsigned long  );/* CFPEID6 */
__IOREG( CFPEID7    , 0xFFA0807Cul, __READ_WRITE, unsigned long  );/* CFPEID7 */
__IOREG( CMPTST0    , 0xFFFEED00ul, __READ_WRITE, unsigned long  );/* CMPTST0 */
__IOREG( CMPTST1    , 0xFFFEED04ul, __READ_WRITE, unsigned long  );/* CMPTST1 */


__IOREG( DSA0       , 0xFFFF8400ul, __READ_WRITE, unsigned long  );
__IOREG( DDA0       , 0xFFFF8404ul, __READ_WRITE, unsigned long  );
__IOREG( DTC0       , 0xFFFF8408ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT0      , 0xFFFF840Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA0      , 0xFFFF8410ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA0      , 0xFFFF8414ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC0      , 0xFFFF8418ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC0      , 0xFFFF841Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN0      , 0xFFFF8420ul, __READ_WRITE, unsigned long  );
__IOREG( DCST0      , 0xFFFF8424ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS0     , 0xFFFF8428ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC0     , 0xFFFF842Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR0      , 0xFFFF8430ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ0    , 0xFFFF8434ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC0   , 0xFFFF8438ul, __READ_WRITE, unsigned long  );
__IOREG( DSA1       , 0xFFFF8440ul, __READ_WRITE, unsigned long  );
__IOREG( DDA1       , 0xFFFF8444ul, __READ_WRITE, unsigned long  );
__IOREG( DTC1       , 0xFFFF8448ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT1      , 0xFFFF844Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA1      , 0xFFFF8450ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA1      , 0xFFFF8454ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC1      , 0xFFFF8458ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC1      , 0xFFFF845Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN1      , 0xFFFF8460ul, __READ_WRITE, unsigned long  );
__IOREG( DCST1      , 0xFFFF8464ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS1     , 0xFFFF8468ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC1     , 0xFFFF846Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR1      , 0xFFFF8470ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ1    , 0xFFFF8474ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC1   , 0xFFFF8478ul, __READ_WRITE, unsigned long  );
__IOREG( DSA2       , 0xFFFF8480ul, __READ_WRITE, unsigned long  );
__IOREG( DDA2       , 0xFFFF8484ul, __READ_WRITE, unsigned long  );
__IOREG( DTC2       , 0xFFFF8488ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT2      , 0xFFFF848Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA2      , 0xFFFF8490ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA2      , 0xFFFF8494ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC2      , 0xFFFF8498ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC2      , 0xFFFF849Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN2      , 0xFFFF84A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST2      , 0xFFFF84A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS2     , 0xFFFF84A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC2     , 0xFFFF84ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR2      , 0xFFFF84B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ2    , 0xFFFF84B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC2   , 0xFFFF84B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA3       , 0xFFFF84C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA3       , 0xFFFF84C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC3       , 0xFFFF84C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT3      , 0xFFFF84CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA3      , 0xFFFF84D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA3      , 0xFFFF84D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC3      , 0xFFFF84D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC3      , 0xFFFF84DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN3      , 0xFFFF84E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST3      , 0xFFFF84E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS3     , 0xFFFF84E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC3     , 0xFFFF84ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR3      , 0xFFFF84F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ3    , 0xFFFF84F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC3   , 0xFFFF84F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA4       , 0xFFFF8500ul, __READ_WRITE, unsigned long  );
__IOREG( DDA4       , 0xFFFF8504ul, __READ_WRITE, unsigned long  );
__IOREG( DTC4       , 0xFFFF8508ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT4      , 0xFFFF850Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA4      , 0xFFFF8510ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA4      , 0xFFFF8514ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC4      , 0xFFFF8518ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC4      , 0xFFFF851Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN4      , 0xFFFF8520ul, __READ_WRITE, unsigned long  );
__IOREG( DCST4      , 0xFFFF8524ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS4     , 0xFFFF8528ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC4     , 0xFFFF852Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR4      , 0xFFFF8530ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ4    , 0xFFFF8534ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC4   , 0xFFFF8538ul, __READ_WRITE, unsigned long  );
__IOREG( DSA5       , 0xFFFF8540ul, __READ_WRITE, unsigned long  );
__IOREG( DDA5       , 0xFFFF8544ul, __READ_WRITE, unsigned long  );
__IOREG( DTC5       , 0xFFFF8548ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT5      , 0xFFFF854Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA5      , 0xFFFF8550ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA5      , 0xFFFF8554ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC5      , 0xFFFF8558ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC5      , 0xFFFF855Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN5      , 0xFFFF8560ul, __READ_WRITE, unsigned long  );
__IOREG( DCST5      , 0xFFFF8564ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS5     , 0xFFFF8568ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC5     , 0xFFFF856Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR5      , 0xFFFF8570ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ5    , 0xFFFF8574ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC5   , 0xFFFF8578ul, __READ_WRITE, unsigned long  );
__IOREG( DSA6       , 0xFFFF8580ul, __READ_WRITE, unsigned long  );
__IOREG( DDA6       , 0xFFFF8584ul, __READ_WRITE, unsigned long  );
__IOREG( DTC6       , 0xFFFF8588ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT6      , 0xFFFF858Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA6      , 0xFFFF8590ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA6      , 0xFFFF8594ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC6      , 0xFFFF8598ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC6      , 0xFFFF859Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN6      , 0xFFFF85A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST6      , 0xFFFF85A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS6     , 0xFFFF85A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC6     , 0xFFFF85ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR6      , 0xFFFF85B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ6    , 0xFFFF85B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC6   , 0xFFFF85B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA7       , 0xFFFF85C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA7       , 0xFFFF85C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC7       , 0xFFFF85C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT7      , 0xFFFF85CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA7      , 0xFFFF85D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA7      , 0xFFFF85D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC7      , 0xFFFF85D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC7      , 0xFFFF85DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN7      , 0xFFFF85E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST7      , 0xFFFF85E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS7     , 0xFFFF85E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC7     , 0xFFFF85ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR7      , 0xFFFF85F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ7    , 0xFFFF85F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC7   , 0xFFFF85F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA8       , 0xFFFF8600ul, __READ_WRITE, unsigned long  );
__IOREG( DDA8       , 0xFFFF8604ul, __READ_WRITE, unsigned long  );
__IOREG( DTC8       , 0xFFFF8608ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT8      , 0xFFFF860Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA8      , 0xFFFF8610ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA8      , 0xFFFF8614ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC8      , 0xFFFF8618ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC8      , 0xFFFF861Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN8      , 0xFFFF8620ul, __READ_WRITE, unsigned long  );
__IOREG( DCST8      , 0xFFFF8624ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS8     , 0xFFFF8628ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC8     , 0xFFFF862Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR8      , 0xFFFF8630ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ8    , 0xFFFF8634ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC8   , 0xFFFF8638ul, __READ_WRITE, unsigned long  );
__IOREG( DSA9       , 0xFFFF8640ul, __READ_WRITE, unsigned long  );
__IOREG( DDA9       , 0xFFFF8644ul, __READ_WRITE, unsigned long  );
__IOREG( DTC9       , 0xFFFF8648ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT9      , 0xFFFF864Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA9      , 0xFFFF8650ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA9      , 0xFFFF8654ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC9      , 0xFFFF8658ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC9      , 0xFFFF865Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN9      , 0xFFFF8660ul, __READ_WRITE, unsigned long  );
__IOREG( DCST9      , 0xFFFF8664ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS9     , 0xFFFF8668ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC9     , 0xFFFF866Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR9      , 0xFFFF8670ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ9    , 0xFFFF8674ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC9   , 0xFFFF8678ul, __READ_WRITE, unsigned long  );
__IOREG( DSA10      , 0xFFFF8680ul, __READ_WRITE, unsigned long  );
__IOREG( DDA10      , 0xFFFF8684ul, __READ_WRITE, unsigned long  );
__IOREG( DTC10      , 0xFFFF8688ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT10     , 0xFFFF868Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA10     , 0xFFFF8690ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA10     , 0xFFFF8694ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC10     , 0xFFFF8698ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC10     , 0xFFFF869Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN10     , 0xFFFF86A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST10     , 0xFFFF86A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS10    , 0xFFFF86A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC10    , 0xFFFF86ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR10     , 0xFFFF86B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ10   , 0xFFFF86B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC10  , 0xFFFF86B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA11      , 0xFFFF86C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA11      , 0xFFFF86C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC11      , 0xFFFF86C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT11     , 0xFFFF86CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA11     , 0xFFFF86D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA11     , 0xFFFF86D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC11     , 0xFFFF86D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC11     , 0xFFFF86DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN11     , 0xFFFF86E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST11     , 0xFFFF86E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS11    , 0xFFFF86E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC11    , 0xFFFF86ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR11     , 0xFFFF86F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ11   , 0xFFFF86F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC11  , 0xFFFF86F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA12      , 0xFFFF8700ul, __READ_WRITE, unsigned long  );
__IOREG( DDA12      , 0xFFFF8704ul, __READ_WRITE, unsigned long  );
__IOREG( DTC12      , 0xFFFF8708ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT12     , 0xFFFF870Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA12     , 0xFFFF8710ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA12     , 0xFFFF8714ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC12     , 0xFFFF8718ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC12     , 0xFFFF871Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN12     , 0xFFFF8720ul, __READ_WRITE, unsigned long  );
__IOREG( DCST12     , 0xFFFF8724ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS12    , 0xFFFF8728ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC12    , 0xFFFF872Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR12     , 0xFFFF8730ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ12   , 0xFFFF8734ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC12  , 0xFFFF8738ul, __READ_WRITE, unsigned long  );
__IOREG( DSA13      , 0xFFFF8740ul, __READ_WRITE, unsigned long  );
__IOREG( DDA13      , 0xFFFF8744ul, __READ_WRITE, unsigned long  );
__IOREG( DTC13      , 0xFFFF8748ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT13     , 0xFFFF874Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA13     , 0xFFFF8750ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA13     , 0xFFFF8754ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC13     , 0xFFFF8758ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC13     , 0xFFFF875Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN13     , 0xFFFF8760ul, __READ_WRITE, unsigned long  );
__IOREG( DCST13     , 0xFFFF8764ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS13    , 0xFFFF8768ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC13    , 0xFFFF876Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR13     , 0xFFFF8770ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ13   , 0xFFFF8774ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC13  , 0xFFFF8778ul, __READ_WRITE, unsigned long  );
__IOREG( DSA14      , 0xFFFF8780ul, __READ_WRITE, unsigned long  );
__IOREG( DDA14      , 0xFFFF8784ul, __READ_WRITE, unsigned long  );
__IOREG( DTC14      , 0xFFFF8788ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT14     , 0xFFFF878Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA14     , 0xFFFF8790ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA14     , 0xFFFF8794ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC14     , 0xFFFF8798ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC14     , 0xFFFF879Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN14     , 0xFFFF87A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST14     , 0xFFFF87A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS14    , 0xFFFF87A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC14    , 0xFFFF87ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR14     , 0xFFFF87B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ14   , 0xFFFF87B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC14  , 0xFFFF87B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA15      , 0xFFFF87C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA15      , 0xFFFF87C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC15      , 0xFFFF87C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT15     , 0xFFFF87CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA15     , 0xFFFF87D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA15     , 0xFFFF87D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC15     , 0xFFFF87D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC15     , 0xFFFF87DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN15     , 0xFFFF87E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST15     , 0xFFFF87E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS15    , 0xFFFF87E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC15    , 0xFFFF87ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR15     , 0xFFFF87F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ15   , 0xFFFF87F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC15  , 0xFFFF87F8ul, __READ_WRITE, unsigned long  );

__IOREG( PEGG0MK    , 0xFFFEE680ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0MKL   , 0xFFFEE680ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0MKLL  , 0xFFFEE680ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKLH  , 0xFFFEE681ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKH   , 0xFFFEE682ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0MKHL  , 0xFFFEE682ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKHH  , 0xFFFEE683ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BA    , 0xFFFEE684ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0BAL   , 0xFFFEE684ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0BALL  , 0xFFFEE684ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BALH  , 0xFFFEE685ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BAH   , 0xFFFEE686ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0BAHL  , 0xFFFEE686ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BAHH  , 0xFFFEE687ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SP    , 0xFFFEE688ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0SPL   , 0xFFFEE688ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0SPLL  , 0xFFFEE688ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPLH  , 0xFFFEE689ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPH   , 0xFFFEE68Aul, __READ_WRITE, unsigned short );
__IOREG( PEGG0SPHL  , 0xFFFEE68Aul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPHH  , 0xFFFEE68Bul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MK    , 0xFFFEE690ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1MKL   , 0xFFFEE690ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1MKLL  , 0xFFFEE690ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKLH  , 0xFFFEE691ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKH   , 0xFFFEE692ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1MKHL  , 0xFFFEE692ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKHH  , 0xFFFEE693ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BA    , 0xFFFEE694ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1BAL   , 0xFFFEE694ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1BALL  , 0xFFFEE694ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BALH  , 0xFFFEE695ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BAH   , 0xFFFEE696ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1BAHL  , 0xFFFEE696ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BAHH  , 0xFFFEE697ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SP    , 0xFFFEE698ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1SPL   , 0xFFFEE698ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1SPLL  , 0xFFFEE698ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPLH  , 0xFFFEE699ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPH   , 0xFFFEE69Aul, __READ_WRITE, unsigned short );
__IOREG( PEGG1SPHL  , 0xFFFEE69Aul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPHH  , 0xFFFEE69Bul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MK    , 0xFFFEE6A0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2MKL   , 0xFFFEE6A0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2MKLL  , 0xFFFEE6A0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKLH  , 0xFFFEE6A1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKH   , 0xFFFEE6A2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2MKHL  , 0xFFFEE6A2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKHH  , 0xFFFEE6A3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BA    , 0xFFFEE6A4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2BAL   , 0xFFFEE6A4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2BALL  , 0xFFFEE6A4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BALH  , 0xFFFEE6A5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BAH   , 0xFFFEE6A6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2BAHL  , 0xFFFEE6A6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BAHH  , 0xFFFEE6A7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SP    , 0xFFFEE6A8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2SPL   , 0xFFFEE6A8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2SPLL  , 0xFFFEE6A8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPLH  , 0xFFFEE6A9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPH   , 0xFFFEE6AAul, __READ_WRITE, unsigned short );
__IOREG( PEGG2SPHL  , 0xFFFEE6AAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPHH  , 0xFFFEE6ABul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MK    , 0xFFFEE6B0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3MKL   , 0xFFFEE6B0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3MKLL  , 0xFFFEE6B0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKLH  , 0xFFFEE6B1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKH   , 0xFFFEE6B2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3MKHL  , 0xFFFEE6B2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKHH  , 0xFFFEE6B3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BA    , 0xFFFEE6B4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3BAL   , 0xFFFEE6B4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3BALL  , 0xFFFEE6B4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BALH  , 0xFFFEE6B5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BAH   , 0xFFFEE6B6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3BAHL  , 0xFFFEE6B6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BAHH  , 0xFFFEE6B7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SP    , 0xFFFEE6B8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3SPL   , 0xFFFEE6B8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3SPLL  , 0xFFFEE6B8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPLH  , 0xFFFEE6B9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPH   , 0xFFFEE6BAul, __READ_WRITE, unsigned short );
__IOREG( PEGG3SPHL  , 0xFFFEE6BAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPHH  , 0xFFFEE6BBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MK    , 0xFFFEE6C0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4MKL   , 0xFFFEE6C0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4MKLL  , 0xFFFEE6C0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKLH  , 0xFFFEE6C1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKH   , 0xFFFEE6C2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4MKHL  , 0xFFFEE6C2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKHH  , 0xFFFEE6C3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BA    , 0xFFFEE6C4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4BAL   , 0xFFFEE6C4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4BALL  , 0xFFFEE6C4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BALH  , 0xFFFEE6C5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BAH   , 0xFFFEE6C6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4BAHL  , 0xFFFEE6C6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BAHH  , 0xFFFEE6C7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SP    , 0xFFFEE6C8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4SPL   , 0xFFFEE6C8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4SPLL  , 0xFFFEE6C8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPLH  , 0xFFFEE6C9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPH   , 0xFFFEE6CAul, __READ_WRITE, unsigned short );
__IOREG( PEGG4SPHL  , 0xFFFEE6CAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPHH  , 0xFFFEE6CBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MK    , 0xFFFEE6D0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5MKL   , 0xFFFEE6D0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5MKLL  , 0xFFFEE6D0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKLH  , 0xFFFEE6D1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKH   , 0xFFFEE6D2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5MKHL  , 0xFFFEE6D2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKHH  , 0xFFFEE6D3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BA    , 0xFFFEE6D4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5BAL   , 0xFFFEE6D4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5BALL  , 0xFFFEE6D4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BALH  , 0xFFFEE6D5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BAH   , 0xFFFEE6D6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5BAHL  , 0xFFFEE6D6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BAHH  , 0xFFFEE6D7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SP    , 0xFFFEE6D8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5SPL   , 0xFFFEE6D8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5SPLL  , 0xFFFEE6D8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPLH  , 0xFFFEE6D9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPH   , 0xFFFEE6DAul, __READ_WRITE, unsigned short );
__IOREG( PEGG5SPHL  , 0xFFFEE6DAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPHH  , 0xFFFEE6DBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MK    , 0xFFFEE6E0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6MKL   , 0xFFFEE6E0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6MKLL  , 0xFFFEE6E0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKLH  , 0xFFFEE6E1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKH   , 0xFFFEE6E2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6MKHL  , 0xFFFEE6E2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKHH  , 0xFFFEE6E3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BA    , 0xFFFEE6E4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6BAL   , 0xFFFEE6E4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6BALL  , 0xFFFEE6E4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BALH  , 0xFFFEE6E5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BAH   , 0xFFFEE6E6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6BAHL  , 0xFFFEE6E6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BAHH  , 0xFFFEE6E7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SP    , 0xFFFEE6E8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6SPL   , 0xFFFEE6E8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6SPLL  , 0xFFFEE6E8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPLH  , 0xFFFEE6E9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPH   , 0xFFFEE6EAul, __READ_WRITE, unsigned short );
__IOREG( PEGG6SPHL  , 0xFFFEE6EAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPHH  , 0xFFFEE6EBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MK    , 0xFFFEE6F0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7MKL   , 0xFFFEE6F0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7MKLL  , 0xFFFEE6F0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKLH  , 0xFFFEE6F1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKH   , 0xFFFEE6F2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7MKHL  , 0xFFFEE6F2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKHH  , 0xFFFEE6F3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BA    , 0xFFFEE6F4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7BAL   , 0xFFFEE6F4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7BALL  , 0xFFFEE6F4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BALH  , 0xFFFEE6F5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BAH   , 0xFFFEE6F6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7BAHL  , 0xFFFEE6F6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BAHH  , 0xFFFEE6F7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SP    , 0xFFFEE6F8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7SPL   , 0xFFFEE6F8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7SPLL  , 0xFFFEE6F8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPLH  , 0xFFFEE6F9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPH   , 0xFFFEE6FAul, __READ_WRITE, unsigned short );
__IOREG( PEGG7SPHL  , 0xFFFEE6FAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPHH  , 0xFFFEE6FBul, __READ_WRITE, unsigned char  );

__IOREG( UCFERRINT  , 0xFFC62000ul, __READ_WRITE, unsigned long );/* UCFERRINT*/
__IOREG( CFAPCTL    , 0xFFC62100ul, __READ_WRITE, unsigned long );/* CFAPCTL */
__IOREG( CFECCCTL_PE1 , 0xFFC62400ul, __READ_WRITE, unsigned long );
                                                              /* CFECCCTL_PE1 */

__IOREG( UCFSERSTCLR, 0xFFC62004ul, __READ_WRITE, unsigned long );
                                                                 /*UCFSERSTCLR*/
__IOREG( UCFSERSTR  , 0xFFC62020ul, __READ_WRITE, unsigned long );/*UCFSERSTR */
__IOREG( UCFDEDADR  , 0xFFC620C0ul, __READ_WRITE, unsigned long );/* UCFDEDADR*/
__IOREG( UCF1SEDADR , 0xFFC62040ul, __READ_WRITE, unsigned long );/*UCF1SEDADR*/

__IOREG( RSENT0    ,0xFFCDC000ul       ,__READ_WRITE     , T_RSENT0);/* RSENT0*/
__IOREG( RSENT1    ,0xFFCDC100ul       ,__READ_WRITE     , T_RSENT1);/* RSENT1*/
__IOREG( RSENT2    ,0xFFCDC200ul       ,__READ_WRITE     , T_RSENT2);/* RSENT2*/
__IOREG( RSENT3    ,0xFFCDC300ul       ,__READ_WRITE     , T_RSENT3);/* RSENT3*/
__IOREG( RSENT4    ,0xFFCDC400ul       ,__READ_WRITE     , T_RSENT4);/* RSENT4*/
__IOREG( RSENT5    ,0xFFCDC500ul       ,__READ_WRITE     , T_RSENT5);/* RSENT5*/
__IOREG( RSENT6    ,0xFFCDC600ul       ,__READ_WRITE     , T_RSENT6);/* RSENT6*/
__IOREG( RSENT7    ,0xFFCDC700ul       ,__READ_WRITE     , T_RSENT7);/* RSENT7*/
__IOREG( RSENT8    ,0xFFCDC800ul       ,__READ_WRITE     , T_RSENT8);/* RSENT8*/
__IOREG( RSENT9    ,0xFFCDC900ul       ,__READ_WRITE     , T_RSENT9);/* RSENT9*/

__IOREG( HSUS0     ,0xFFD88000ul       ,__READ_WRITE      , T_HSUS0 );/* HSUS0*/
__IOREG( HSUS1     ,0xFFCA8000ul       ,__READ_WRITE      , T_HSUS1 );/* HSUS1*/
__IOREG( HSUS2     ,0xFFD89000ul       ,__READ_WRITE      , T_HSUS2 );/* HSUS2*/
__IOREG( HSUS3     ,0xFFCA9000ul       ,__READ_WRITE      , T_HSUS3 );/* HSUS3*/

__IOREG( LRECCCTL_PE1           , 0xFFC65400ul, __READ_WRITE, unsigned long );
__IOREG( LRERRINT_PE1           , 0xFFC65404ul, __READ_WRITE, unsigned long );

__IOREG( ETNA0EMR0              , 0x100245B0ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EDMR0             , 0x10024400ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EMR1              , 0xFFC65404ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EDMR1             , 0x10025400ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0ARSTR             , 0x10024800ul, __READ_WRITE, unsigned long );


/* ATOM registers */
__IOREG( ATOM0GLBCTRL   ,0xFFE0D040ul ,__READ_WRITE   , T_ATOM0 ); /*ATOM0 */
__IOREG( ATOM1GLBCTRL   ,0xFFE0D840ul ,__READ_WRITE   , T_ATOM0 ); /* ATOM1 */
__IOREG( ATOM2GLBCTRL   ,0xFFE0E040ul ,__READ_WRITE   , T_ATOM0 ); /* ATOM2 */
__IOREG( GTM0ATOM00CTRL ,0xFFE0D004ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM00*/
__IOREG( GTM0ATOM01CTRL ,0xFFE0D084ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM01*/
__IOREG( GTM0ATOM02CTRL ,0xFFE0D104ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM02*/
__IOREG( GTM0ATOM03CTRL ,0xFFE0D184ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM03*/
__IOREG( GTM0ATOM04CTRL ,0xFFE0D204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM04*/
__IOREG( GTM0ATOM05CTRL ,0xFFE0D284ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM05*/
__IOREG( GTM0ATOM06CTRL ,0xFFE0D304ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM06*/
__IOREG( GTM0ATOM07CTRL ,0xFFE0D384ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM07*/
__IOREG( GTM0ATOM10CTRL ,0xFFE0D804ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM10*/
__IOREG( GTM0ATOM11CTRL ,0xFFE0D884ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM11*/
__IOREG( GTM0ATOM12CTRL ,0xFFE0D904ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM12*/
__IOREG( GTM0ATOM13CTRL ,0xFFE0D984ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM13*/
__IOREG( GTM0ATOM14CTRL ,0xFFE0DA04ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM14*/
__IOREG( GTM0ATOM15CTRL ,0xFFE0DA84ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM15*/
__IOREG( GTM0ATOM16CTRL ,0xFFE0DB04ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM16*/
__IOREG( GTM0ATOM17CTRL ,0xFFE0DB84ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM17*/
__IOREG( GTM0ATOM20CTRL ,0xFFE0E004ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM20*/
__IOREG( GTM0ATOM21CTRL ,0xFFE0E084ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM21*/
__IOREG( GTM0ATOM22CTRL ,0xFFE0E104ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM22*/
__IOREG( GTM0ATOM23CTRL ,0xFFE0E184ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM23*/
__IOREG( GTM0ATOM24CTRL ,0xFFE0E204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM24*/
__IOREG( GTM0ATOM24CTRL ,0xFFE0E204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM24*/


/*FACI Register*/

__IOREG( FCUFAREA            , 0xFFC59008ul, __READ_WRITE, unsigned char);
__IOREG( FACIFRTEINT        , 0xffa1009cUL, __READ_WRITE, unsigned long);



__IOREG( SWLRESS3           , 0xfff8170cUL   , __READ      , unsigned long);
__IOREG( SWLRESS4           , 0xfff8180cUL   , __READ      , unsigned long);
__IOREG( SWLRESS5           , 0xfff8190cUL   , __READ      , unsigned long);
__IOREG( SWLRESS6           , 0xfff81a0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS7           , 0xfff81b0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS8           , 0xfff81c0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS10          , 0xfff81e0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS11          , 0xfff81f0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS12          , 0xfff8200cUL   , __READ      , unsigned long);

__IOREG( CLMATEST           , 0xFFF83000ul   ,__READ_WRITE , unsigned long);
                                                                 /* CLMATEST  */
__IOREG( CLMATESTS          , 0xFFF83004ul   ,__READ       , unsigned long);
                                                                /* CLMATESTS  */
__IOREG( CLMA5CTL1           ,0xFFF86804ul   ,__READ_WRITE , unsigned char);
                                                                /* CLMA5CTL1  */
/* ECC registers for CSIH */
__IOREG(ECCCSIH0            , 0xFFC70000, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH0 */
__IOREG(ECCCSIH1            , 0xFFC78000, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH1 */
__IOREG(ECCCSIH2            , 0xFFC70100, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH2 */
__IOREG(ECCCSIH3            , 0xFFC78100, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH3 */


#define PEG         (*(volatile struct st_peg         *)0xFFFEE680)
                                                                    /* PEG */

#define ETNA0      (*(volatile struct EthernetRegStruct *) 0x10024000)
                                                               /* ETNA Port 0 */
#define ETNA1      (*(volatile struct EthernetRegStruct *) 0x10025000)
                                                               /* ETNA Port 1 */
#define ETNACOM    (*(volatile struct EthernetCommonRegStruct *) 0x10024800)
                                                       /* ETNA Common = ARSTR */
#define ETNATSU    (*(volatile struct EthernetTSUReg *) 0x10024900)
                                                                  /* ETNA TSU */

#define FACIREG0         (*((volatile FlsFACIReg         *)0xffa10000UL))
                                                               /* FACI Unit 0 */
#define FACIREG1         (*((volatile FlsFACIReg         *)0xffa18000UL))
                                                               /* FACI Unit 1 */
#define ECCREG0          (*((volatile FlsECCReg          *)0xffc5b000UL))
                                                                 /* ECC Unit 0*/
#define ECCREG1          (*((volatile FlsECCReg          *)0xffc5c000UL))
                                                                 /* ECC Unit 1*/

#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]

#define FLXA1FRITCLL FLXA1.FRITC.UINT8[LL]
#define FLXA1FRITSLL FLXA1.FRITS.UINT8[LL]
#define FLXA1FROTCLL FLXA1.FROTC.UINT8[LL]
#define FLXA1FROTSLL FLXA1.FROTS.UINT8[LL]

#define RSENT0MDCLL RSENT0.MDC.UINT8[LL]
#define RSENT1MDCLL RSENT1.MDC.UINT8[LL]
#define RSENT2MDCLL RSENT2.MDC.UINT8[LL]
#define RSENT3MDCLL RSENT3.MDC.UINT8[LL]
#define RSENT4MDCLL RSENT4.MDC.UINT8[LL]
#define RSENT8MDCLL RSENT8.MDC.UINT8[LL]
#define RSENT7MSTLL RSENT7.MST.UINT8[LL]
#define RSENT8MSTLL RSENT8.MST.UINT8[LL]
#define RSENT9MDCLL RSENT9.MDC.UINT8[LL]
#define RSENT9MSTLL RSENT9.MST.UINT8[LL]

#define HSUS0EN HSUS0.EN
#define HSUS1EN HSUS1.EN
#define HSUS2EN HSUS2.EN
#define HSUS3EN HSUS3.EN

#define CSIH0TXE CSIH0.CTL0.BIT.TXE
#define CSIH0RXE CSIH0.CTL0.BIT.RXE
#define CSIH1TXE CSIH1.CTL0.BIT.TXE
#define CSIH1RXE CSIH1.CTL0.BIT.RXE
#define CSIH2TXE CSIH2.CTL0.BIT.TXE
#define CSIH2RXE CSIH2.CTL0.BIT.RXE
#define CSIH3TXE CSIH3.CTL0.BIT.TXE
#define CSIH3RXE CSIH3.CTL0.BIT.RXE

#define RLN30LCUC RLN30.LCUC
#define RLN30LMST RLN30.LMST
#define RLN31LCUC RLN31.LCUC
#define RLN31LMST RLN31.LMST
#define RLN32LCUC RLN32.LCUC
#define RLN32LMST RLN32.LMST
#define RLN33LCUC RLN33.LCUC
#define RLN33LMST RLN33.LMST

#define RSENT0MSTLL RSENT0.MST.UINT8[LL]
#define RSENT1MSTLL RSENT1.MST.UINT8[LL]
#define RSENT2MSTLL RSENT2.MST.UINT8[LL]
#define RSENT3MSTLL RSENT3.MST.UINT8[LL]
#define RSENT4MSTLL RSENT4.MST.UINT8[LL]
#define RSENT5MDCLL RSENT5.MDC.UINT8[LL]
#define RSENT5MSTLL RSENT5.MST.UINT8[LL]
#define RSENT6MDCLL RSENT6.MDC.UINT8[LL]
#define RSENT6MSTLL RSENT6.MST.UINT8[LL]
#define RSENT7MDCLL RSENT7.MDC.UINT8[LL]

#define PIC2CTRGPREMUX0 PIC2.CTRGPREMUX0
#define PIC2CTRGPREMUX1 PIC2.CTRGPREMUX1
#define PIC2CTRGMUX0 PIC2.CTRGMUX0
#define PIC2CTRGMUX1 PIC2.CTRGMUX1
#define PIC2CEDGSEL0 PIC2.CEDGSEL0
#define PIC2CEDGSEL1 PIC2.CEDGSEL1
#define PIC2CENP2TIM0 RH850_PIC2.ulPIC2CENP2TIMn[0]
#define PIC2CENP2TIM1 RH850_PIC2.ulPIC2CENP2TIMn[1]
#define PIC2CENHIZDTM RH850_PIC2.ulPIC2CENHIZDTM

#define ADCF0VCR0 ADCF0.VCR0
#define ADCF0VCR1 ADCF0.VCR1
#define ADCF0VCR2 ADCF0.VCR2
#define ADCF0VCR3 ADCF0.VCR3
#define ADCF0VCR4 ADCF0.VCR4
#define ADCF0VCR5 ADCF0.VCR5
#define ADCF0VCR6 ADCF0.VCR6
#define ADCF0VCR7 ADCF0.VCR7
#define ADCF0VCR8 ADCF0.VCR8
#define ADCF0VCR9 ADCF0.VCR9
#define ADCF0VCR10 ADCF0.VCR10
#define ADCF0VCR11 ADCF0.VCR11
#define ADCF0VCR12 ADCF0.VCR12
#define ADCF0VCR13 ADCF0.VCR13
#define ADCF0VCR14 ADCF0.VCR14
#define ADCF0VCR15 ADCF0.VCR15
#define ADCF0VCR16 ADCF0.VCR16
#define ADCF0VCR17 ADCF0.VCR17
#define ADCF0VCR18 ADCF0.VCR18
#define ADCF0VCR19 ADCF0.VCR19
#define ADCF0VCR20 ADCF0.VCR20
#define ADCF0VCR21 ADCF0.VCR21
#define ADCF0VCR22 ADCF0.VCR22
#define ADCF0VCR23 ADCF0.VCR23
#define ADCF0VCR24 ADCF0.VCR24
#define ADCF0VCR25 ADCF0.VCR25
#define ADCF0VCR26 ADCF0.VCR26
#define ADCF0VCR27 ADCF0.VCR27
#define ADCF0DR00 ADCF0.DR00
#define ADCF0DR02 ADCF0.DR02
#define ADCF0DR04 ADCF0.DR04
#define ADCF0DR06 ADCF0.DR06
#define ADCF0DR08 ADCF0.DR08
#define ADCF0DR10 ADCF0.DR10
#define ADCF0DR12 ADCF0.DR12
#define ADCF0DR14 ADCF0.DR14
#define ADCF0DR16 ADCF0.DR16
#define ADCF0DR18 ADCF0.DR18
#define ADCF0DR20 ADCF0.DR20
#define ADCF0DR22 ADCF0.DR22
#define ADCF0DR24 ADCF0.DR24
#define ADCF0DR26 ADCF0.DR26
#define ADCF0DIR0 ADCF0.DIR0
#define ADCF0DIR1 ADCF0.DIR1
#define ADCF0DIR2 ADCF0.DIR2
#define ADCF0DIR3 ADCF0.DIR3
#define ADCF0DIR4 ADCF0.DIR4
#define ADCF0DIR5 ADCF0.DIR5
#define ADCF0DIR6 ADCF0.DIR6
#define ADCF0DIR7 ADCF0.DIR7
#define ADCF0DIR8 ADCF0.DIR8
#define ADCF0DIR9 ADCF0.DIR9
#define ADCF0DIR10 ADCF0.DIR10
#define ADCF0DIR11 ADCF0.DIR11
#define ADCF0DIR12 ADCF0.DIR12
#define ADCF0DIR13 ADCF0.DIR13
#define ADCF0DIR14 ADCF0.DIR14
#define ADCF0DIR15 ADCF0.DIR15
#define ADCF0DIR16 ADCF0.DIR16
#define ADCF0DIR17 ADCF0.DIR17
#define ADCF0DIR18 ADCF0.DIR18
#define ADCF0DIR19 ADCF0.DIR19
#define ADCF0DIR20 ADCF0.DIR20
#define ADCF0DIR21 ADCF0.DIR21
#define ADCF0DIR22 ADCF0.DIR22
#define ADCF0DIR23 ADCF0.DIR23
#define ADCF0DIR24 ADCF0.DIR24
#define ADCF0DIR25 ADCF0.DIR25
#define ADCF0DIR26 ADCF0.DIR26
#define ADCF0DIR27 ADCF0.DIR27
#define ADCF0ADSYNSTCR ADCF0.ADSYNSTCR
#define ADCF0ADTSYNSTCR ADCF0.ADTSYNSTCR
#define ADCF0ADHALTR ADCF0.ADHALTR
#define ADCF0ADCR1 ADCF0.ADCR1
#define ADCF0MPXCURCR ADCF0.MPXCURCR
#define ADCF0MPXCURR ADCF0.MPXCURR
#define ADCF0MPXOWR ADCF0.MPXOWR
#define ADCF0ADCR2 ADCF0.ADCR2
#define ADCF0ADENDP0 ADCF0.ADENDP0
#define ADCF0SFTCR ADCF0.SFTCR
#define ADCF0TDCR ADCF0.TDCR
#define ADCF0ULLMTBR0 ADCF0.ULLMTBR0
#define ADCF0ULLMTBR1 ADCF0.ULLMTBR1
#define ADCF0ULLMTBR2 ADCF0.ULLMTBR2
#define ADCF0ECR ADCF0.ECR
#define ADCF0ULER ADCF0.ULER
#define ADCF0OWER ADCF0.OWER
#define ADCF0PER ADCF0.PER
#define ADCF0IDER ADCF0.IDER
#define ADCF0SGSTCR0 ADCF0.SGSTCR0
#define ADCF0SGCR0 ADCF0.SGCR0
#define ADCF0SGVCSP0 ADCF0.SGVCSP0
#define ADCF0SGVCEP0 ADCF0.SGVCEP0
#define ADCF0SGMCYCR0 ADCF0.SGMCYCR0
#define ADCF0SGSR0 ADCF0.SGSR0
#define ADCF0ULLMSR0 ADCF0.ULLMSR0
#define ADCF0SGSTCR1 ADCF0.SGSTCR1
#define ADCF0SGCR1 ADCF0.SGCR1
#define ADCF0SGVCSP1 ADCF0.SGVCSP1
#define ADCF0SGVCEP1 ADCF0.SGVCEP1
#define ADCF0SGMCYCR1 ADCF0.SGMCYCR1
#define ADCF0SGSR1 ADCF0.SGSR1
#define ADCF0ULLMSR1 ADCF0.ULLMSR1
#define ADCF0SGSTCR2 ADCF0.SGSTCR2
#define ADCF0SGCR2 ADCF0.SGCR2
#define ADCF0SGVCSP2 ADCF0.SGVCSP2
#define ADCF0SGVCEP2 ADCF0.SGVCEP2
#define ADCF0SGMCYCR2 ADCF0.SGMCYCR2
#define ADCF0SGSR2 ADCF0.SGSR2
#define ADCF0ULLMSR2 ADCF0.ULLMSR2
#define ADCF0SGSTCR3 ADCF0.SGSTCR3
#define ADCF0ADTSTCR3 ADCF0.ADTSTCR3
#define ADCF0ADTENDCR3 ADCF0.ADTENDCR3
#define ADCF0SGCR3 ADCF0.SGCR3
#define ADCF0SGVCSP3 ADCF0.SGVCSP3
#define ADCF0SGVCEP3 ADCF0.SGVCEP3
#define ADCF0SGMCYCR3 ADCF0.SGMCYCR3
#define ADCF0SGSR3 ADCF0.SGSR3
#define ADCF0ADTIPR3 ADCF0.ADTIPR3
#define ADCF0ADTPRR3 ADCF0.ADTPRR3
#define ADCF0ULLMSR3 ADCF0.ULLMSR3
#define ADCF0SGSTCR4 ADCF0.SGSTCR4
#define ADCF0ADTSTCR4 ADCF0.ADTSTCR4
#define ADCF0ADTENDCR4 ADCF0.ADTENDCR4
#define ADCF0SGCR4 ADCF0.SGCR4
#define ADCF0SGVCSP4 ADCF0.SGVCSP4
#define ADCF0SGVCEP4 ADCF0.SGVCEP4
#define ADCF0SGMCYCR4 ADCF0.SGMCYCR4
#define ADCF0SGSR4 ADCF0.SGSR4
#define ADCF0ADTIPR4 ADCF0.ADTIPR4
#define ADCF0ADTPRR4 ADCF0.ADTPRR4
#define ADCF0ULLMSR4 ADCF0.ULLMSR4
#define ADCF1VCR0 ADCF1.VCR0
#define ADCF1VCR1 ADCF1.VCR1
#define ADCF1VCR2 ADCF1.VCR2
#define ADCF1VCR3 ADCF1.VCR3
#define ADCF1VCR4 ADCF1.VCR4
#define ADCF1VCR5 ADCF1.VCR5
#define ADCF1VCR6 ADCF1.VCR6
#define ADCF1VCR7 ADCF1.VCR7
#define ADCF1VCR8 ADCF1.VCR8
#define ADCF1VCR9 ADCF1.VCR9
#define ADCF1VCR10 ADCF1.VCR10
#define ADCF1VCR11 ADCF1.VCR11
#define ADCF1VCR12 ADCF1.VCR12
#define ADCF1VCR13 ADCF1.VCR13
#define ADCF1VCR14 ADCF1.VCR14
#define ADCF1VCR15 ADCF1.VCR15
#define ADCF1VCR16 ADCF1.VCR16
#define ADCF1VCR17 ADCF1.VCR17
#define ADCF1VCR18 ADCF1.VCR18
#define ADCF1VCR19 ADCF1.VCR19
#define ADCF1VCR20 ADCF1.VCR20
#define ADCF1VCR21 ADCF1.VCR21
#define ADCF1VCR22 ADCF1.VCR22
#define ADCF1VCR23 ADCF1.VCR23
#define ADCF1VCR24 ADCF1.VCR24
#define ADCF1VCR25 ADCF1.VCR25
#define ADCF1VCR26 ADCF1.VCR26
#define ADCF1VCR27 ADCF1.VCR27
#define ADCF1DR00 ADCF1.DR00
#define ADCF1DR02 ADCF1.DR02
#define ADCF1DR04 ADCF1.DR04
#define ADCF1DR06 ADCF1.DR06
#define ADCF1DR08 ADCF1.DR08
#define ADCF1DR10 ADCF1.DR10
#define ADCF1DR12 ADCF1.DR12
#define ADCF1DR14 ADCF1.DR14
#define ADCF1DR16 ADCF1.DR16
#define ADCF1DR18 ADCF1.DR18
#define ADCF1DR20 ADCF1.DR20
#define ADCF1DR22 ADCF1.DR22
#define ADCF1DR24 ADCF1.DR24
#define ADCF1DR26 ADCF1.DR26
#define ADCF1DIR0 ADCF1.DIR0
#define ADCF1DIR1 ADCF1.DIR1
#define ADCF1DIR2 ADCF1.DIR2
#define ADCF1DIR3 ADCF1.DIR3
#define ADCF1DIR4 ADCF1.DIR4
#define ADCF1DIR5 ADCF1.DIR5
#define ADCF1DIR6 ADCF1.DIR6
#define ADCF1DIR7 ADCF1.DIR7
#define ADCF1DIR8 ADCF1.DIR8
#define ADCF1DIR9 ADCF1.DIR9
#define ADCF1DIR10 ADCF1.DIR10
#define ADCF1DIR11 ADCF1.DIR11
#define ADCF1DIR12 ADCF1.DIR12
#define ADCF1DIR13 ADCF1.DIR13
#define ADCF1DIR14 ADCF1.DIR14
#define ADCF1DIR15 ADCF1.DIR15
#define ADCF1DIR16 ADCF1.DIR16
#define ADCF1DIR17 ADCF1.DIR17
#define ADCF1DIR18 ADCF1.DIR18
#define ADCF1DIR19 ADCF1.DIR19
#define ADCF1DIR20 ADCF1.DIR20
#define ADCF1DIR21 ADCF1.DIR21
#define ADCF1DIR22 ADCF1.DIR22
#define ADCF1DIR23 ADCF1.DIR23
#define ADCF1DIR24 ADCF1.DIR24
#define ADCF1DIR25 ADCF1.DIR25
#define ADCF1DIR26 ADCF1.DIR26
#define ADCF1DIR27 ADCF1.DIR27
#define ADCF1ADHALTR ADCF1.ADHALTR
#define ADCF1ADCR1 ADCF1.ADCR1
#define ADCF1MPXCURCR ADCF1.MPXCURCR
#define ADCF1MPXCURR ADCF1.MPXCURR
#define ADCF1MPXOWR ADCF1.MPXOWR
#define ADCF1ADCR2 ADCF1.ADCR2
#define ADCF1ADENDP0 ADCF1.ADENDP0
#define ADCF1SFTCR ADCF1.SFTCR
#define ADCF1TDCR ADCF1.TDCR
#define ADCF1ULLMTBR0 ADCF1.ULLMTBR0
#define ADCF1ULLMTBR1 ADCF1.ULLMTBR1
#define ADCF1ULLMTBR2 ADCF1.ULLMTBR2
#define ADCF1ECR ADCF1.ECR
#define ADCF1ULER ADCF1.ULER
#define ADCF1OWER ADCF1.OWER
#define ADCF1PER ADCF1.PER
#define ADCF1IDER ADCF1.IDER
#define ADCF1SGSTCR0 ADCF1.SGSTCR0
#define ADCF1SGCR0 ADCF1.SGCR0
#define ADCF1SGVCSP0 ADCF1.SGVCSP0
#define ADCF1SGVCEP0 ADCF1.SGVCEP0
#define ADCF1SGMCYCR0 ADCF1.SGMCYCR0
#define ADCF1SGSR0 ADCF1.SGSR0
#define ADCF1ULLMSR0 ADCF1.ULLMSR0
#define ADCF1SGSTCR1 ADCF1.SGSTCR1
#define ADCF1SGCR1 ADCF1.SGCR1
#define ADCF1SGVCSP1 ADCF1.SGVCSP1
#define ADCF1SGVCEP1 ADCF1.SGVCEP1
#define ADCF1SGMCYCR1 ADCF1.SGMCYCR1
#define ADCF1SGSR1 ADCF1.SGSR1
#define ADCF1ULLMSR1 ADCF1.ULLMSR1
#define ADCF1SGSTCR2 ADCF1.SGSTCR2
#define ADCF1SGCR2 ADCF1.SGCR2
#define ADCF1SGVCSP2 ADCF1.SGVCSP2
#define ADCF1SGVCEP2 ADCF1.SGVCEP2
#define ADCF1SGMCYCR2 ADCF1.SGMCYCR2
#define ADCF1SGSR2 ADCF1.SGSR2
#define ADCF1ULLMSR2 ADCF1.ULLMSR2
#define ADCF1SGSTCR3 ADCF1.SGSTCR3
#define ADCF1ADTSTCR3 ADCF1.ADTSTCR3
#define ADCF1ADTENDCR3 ADCF1.ADTENDCR3
#define ADCF1SGCR3 ADCF1.SGCR3
#define ADCF1SGVCSP3 ADCF1.SGVCSP3
#define ADCF1SGVCEP3 ADCF1.SGVCEP3
#define ADCF1SGMCYCR3 ADCF1.SGMCYCR3
#define ADCF1SGSR3 ADCF1.SGSR3
#define ADCF1ADTIPR3 ADCF1.ADTIPR3
#define ADCF1ADTPRR3 ADCF1.ADTPRR3
#define ADCF1ULLMSR3 ADCF1.ULLMSR3
#define ADCF1SGSTCR4 ADCF1.SGSTCR4
#define ADCF1ADTSTCR4 ADCF1.ADTSTCR4
#define ADCF1ADTENDCR4 ADCF1.ADTENDCR4
#define ADCF1SGCR4 ADCF1.SGCR4
#define ADCF1SGVCSP4 ADCF1.SGVCSP4
#define ADCF1SGVCEP4 ADCF1.SGVCEP4
#define ADCF1SGMCYCR4 ADCF1.SGMCYCR4
#define ADCF1SGSR4 ADCF1.SGSR4
#define ADCF1ADTIPR4 ADCF1.ADTIPR4
#define ADCF1ADTPRR4 ADCF1.ADTPRR4
#define ADCF1ULLMSR4 ADCF1.ULLMSR4


#define FLMDCNT FLMD.CNT
#define FLMDPCMD FLMD.PCMD

#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]
#define FLXA1FRITCLL FLXA1.FRITC.UINT8[LL]

#define GTM0GTMREV GTM0.GTMREV
#define GTM0GTMRST GTM0.GTMRST
#define GTM0GTMCTRL GTM0.GTMCTRL
#define GTM0GTMAEIADDRXPT GTM0.GTMAEIADDRXPT
#define GTM0GTMIRQNOTIFY GTM0.GTMIRQNOTIFY
#define GTM0GTMIRQEN GTM0.GTMIRQEN
#define GTM0GTMIRQFORCINT GTM0.GTMIRQFORCINT
#define GTM0GTMIRQMODE GTM0.GTMIRQMODE
#define GTM0GTMEIRQEN GTM0.GTMEIRQEN
#define GTM0GTMHWCONF GTM0.GTMHWCONF
#define GTM0GTMBRIDGEMODE GTM0.GTMBRIDGEMODE
#define GTM0GTMBRIDGEPTR1 GTM0.GTMBRIDGEPTR1
#define GTM0GTMBRIDGEPTR2 GTM0.GTMBRIDGEPTR2
#define GTM0GTMTIM0AUXINSRC GTM0.GTMTIM0AUXINSRC
#define GTM0GTMTIM1AUXINSRC GTM0.GTMTIM1AUXINSRC
#define GTM0GTMEXTCAPEN0 GTM0.GTMEXTCAPEN0
#define GTM0GTMEXTCAPEN1 GTM0.GTMEXTCAPEN1
#define GTM0GTMEXTCAPEN2 GTM0.GTMEXTCAPEN2
#define GTM0GTMEXTCAPEN3 GTM0.GTMEXTCAPEN3
#define GTM0GTMEXTCAPEN4 GTM0.GTMEXTCAPEN4
#define GTM0GTMEXTCAPEN5 GTM0.GTMEXTCAPEN5
#define GTM0GTMEXTCAPEN6 GTM0.GTMEXTCAPEN6
#define GTM0GTMEXTCAPEN7 GTM0.GTMEXTCAPEN7
#define GTM0GTMATOM0OUT GTM0.GTMATOM0OUT
#define GTM0GTMATOM2OUT GTM0.GTMATOM2OUT
#define GTM0TBUCHEN GTM0.TBUCHEN
#define GTM0TBU0CTRL GTM0.TBU0CTRL
#define GTM0TBU0BASE GTM0.TBU0BASE
#define GTM0TBU1CTRL GTM0.TBU1CTRL
#define GTM0TBU1BASE GTM0.TBU1BASE
#define GTM0MONSTATUS GTM0.MONSTATUS
#define GTM0MONACTIVITYMCS0 GTM0.MONACTIVITYMCS0
#define GTM0MONACTIVITYMCS1 GTM0.MONACTIVITYMCS1
#define GTM0CMPEN GTM0.CMPEN
#define GTM0CMPIRQNOTIFY GTM0.CMPIRQNOTIFY
#define GTM0CMPIRQEN GTM0.CMPIRQEN
#define GTM0CMPIRQFORCINT GTM0.CMPIRQFORCINT
#define GTM0CMPIRQMODE GTM0.CMPIRQMODE
#define GTM0CMPEIRQEN GTM0.CMPEIRQEN
#define GTM0ARUACCESS GTM0.ARUACCESS
#define GTM0ARUDATAH GTM0.ARUDATAH
#define GTM0ARUDATAL GTM0.ARUDATAL
#define GTM0ARUDBGACCESS0 GTM0.ARUDBGACCESS0
#define GTM0ARUDBGDATA0H GTM0.ARUDBGDATA0H
#define GTM0ARUDBGDATA0L GTM0.ARUDBGDATA0L
#define GTM0ARUDBGACCESS1 GTM0.ARUDBGACCESS1
#define GTM0ARUDBGDATA1H GTM0.ARUDBGDATA1H
#define GTM0ARUDBGDATA1L GTM0.ARUDBGDATA1L
#define GTM0ARUIRQNOTIFY GTM0.ARUIRQNOTIFY
#define GTM0ARUIRQEN GTM0.ARUIRQEN
#define GTM0ARUIRQFORCINT GTM0.ARUIRQFORCINT
#define GTM0ARUIRQMODE GTM0.ARUIRQMODE
#define GTM0ARUCADDREND GTM0.ARUCADDREND
#define GTM0CMUCLKEN GTM0.CMUCLKEN
#define GTM0CMUGCLKNUM GTM0.CMUGCLKNUM
#define GTM0CMUGCLKDEN GTM0.CMUGCLKDEN
#define GTM0CMUCLK0CTRL GTM0.CMUCLK0CTRL
#define GTM0CMUCLK1CTRL GTM0.CMUCLK1CTRL
#define GTM0CMUCLK2CTRL GTM0.CMUCLK2CTRL
#define GTM0CMUCLK3CTRL GTM0.CMUCLK3CTRL
#define GTM0CMUCLK4CTRL GTM0.CMUCLK4CTRL
#define GTM0CMUCLK5CTRL GTM0.CMUCLK5CTRL
#define GTM0CMUCLK6CTRL GTM0.CMUCLK6CTRL
#define GTM0CMUCLK7CTRL GTM0.CMUCLK7CTRL
#define GTM0CMUGLBCTRL GTM0.CMUGLBCTRL
#define GTM0ICMIRQG0 GTM0.ICMIRQG0
#define GTM0ICMIRQG2 GTM0.ICMIRQG2
#define GTM0ICMIRQG9 GTM0.ICMIRQG9
#define GTM0ICMIRQGMEI GTM0.ICMIRQGMEI
#define GTM0ICMIRQGCEI1 GTM0.ICMIRQGCEI1
#define GTM0ICMIRQGMCS0CI GTM0.ICMIRQGMCS0CI
#define GTM0ICMIRQGMCS1CI GTM0.ICMIRQGMCS1CI
#define GTM0ICMIRQGMCS0CEI GTM0.ICMIRQGMCS0CEI
#define GTM0ICMIRQGMCS1CEI GTM0.ICMIRQGMCS1CEI
#define GTM0MCFGCTRL GTM0.MCFGCTRL
#define GTM0TIM00GPR0 GTM0.TIM00GPR0
#define GTM0TIM00GPR1 GTM0.TIM00GPR1
#define GTM0TIM00CNT GTM0.TIM00CNT
#define GTM0TIM00ECNT GTM0.TIM00ECNT
#define GTM0TIM00CNTS GTM0.TIM00CNTS
#define GTM0TIM00TDUC GTM0.TIM00TDUC
#define GTM0TIM00TDUV GTM0.TIM00TDUV
#define GTM0TIM00FLTRE GTM0.TIM00FLTRE
#define GTM0TIM00FLTFE GTM0.TIM00FLTFE
#define GTM0TIM00CTRL GTM0.TIM00CTRL
#define GTM0TIM00ECTRL GTM0.TIM00ECTRL
#define GTM0TIM00IRQNOTIFY GTM0.TIM00IRQNOTIFY
#define GTM0TIM00IRQEN GTM0.TIM00IRQEN
#define GTM0TIM00IRQFORCINT GTM0.TIM00IRQFORCINT
#define GTM0TIM00IRQMODE GTM0.TIM00IRQMODE
#define GTM0TIM00EIRQEN GTM0.TIM00EIRQEN
#define GTM0TIM0INPVAL GTM0.TIM0INPVAL
#define GTM0TIM0INSRC GTM0.TIM0INSRC
#define GTM0TIM0RST GTM0.TIM0RST
#define GTM0TIM01GPR0 GTM0.TIM01GPR0
#define GTM0TIM01GPR1 GTM0.TIM01GPR1
#define GTM0TIM01CNT GTM0.TIM01CNT
#define GTM0TIM01ECNT GTM0.TIM01ECNT
#define GTM0TIM01CNTS GTM0.TIM01CNTS
#define GTM0TIM01TDUC GTM0.TIM01TDUC
#define GTM0TIM01TDUV GTM0.TIM01TDUV
#define GTM0TIM01FLTRE GTM0.TIM01FLTRE
#define GTM0TIM01FLTFE GTM0.TIM01FLTFE
#define GTM0TIM01CTRL GTM0.TIM01CTRL
#define GTM0TIM01ECTRL GTM0.TIM01ECTRL
#define GTM0TIM01IRQNOTIFY GTM0.TIM01IRQNOTIFY
#define GTM0TIM01IRQEN GTM0.TIM01IRQEN
#define GTM0TIM01IRQFORCINT GTM0.TIM01IRQFORCINT
#define GTM0TIM01IRQMODE GTM0.TIM01IRQMODE
#define GTM0TIM01EIRQEN GTM0.TIM01EIRQEN
#define GTM0TIM02GPR0 GTM0.TIM02GPR0
#define GTM0TIM02GPR1 GTM0.TIM02GPR1
#define GTM0TIM02CNT GTM0.TIM02CNT
#define GTM0TIM02ECNT GTM0.TIM02ECNT
#define GTM0TIM02CNTS GTM0.TIM02CNTS
#define GTM0TIM02TDUC GTM0.TIM02TDUC
#define GTM0TIM02TDUV GTM0.TIM02TDUV
#define GTM0TIM02FLTRE GTM0.TIM02FLTRE
#define GTM0TIM02FLTFE GTM0.TIM02FLTFE
#define GTM0TIM02CTRL GTM0.TIM02CTRL
#define GTM0TIM02ECTRL GTM0.TIM02ECTRL
#define GTM0TIM02IRQNOTIFY GTM0.TIM02IRQNOTIFY
#define GTM0TIM02IRQEN GTM0.TIM02IRQEN
#define GTM0TIM02IRQFORCINT GTM0.TIM02IRQFORCINT
#define GTM0TIM02IRQMODE GTM0.TIM02IRQMODE
#define GTM0TIM02EIRQEN GTM0.TIM02EIRQEN
#define GTM0TIM03GPR0 GTM0.TIM03GPR0
#define GTM0TIM03GPR1 GTM0.TIM03GPR1
#define GTM0TIM03CNT GTM0.TIM03CNT
#define GTM0TIM03ECNT GTM0.TIM03ECNT
#define GTM0TIM03CNTS GTM0.TIM03CNTS
#define GTM0TIM03TDUC GTM0.TIM03TDUC
#define GTM0TIM03TDUV GTM0.TIM03TDUV
#define GTM0TIM03FLTRE GTM0.TIM03FLTRE
#define GTM0TIM03FLTFE GTM0.TIM03FLTFE
#define GTM0TIM03CTRL GTM0.TIM03CTRL
#define GTM0TIM03ECTRL GTM0.TIM03ECTRL
#define GTM0TIM03IRQNOTIFY GTM0.TIM03IRQNOTIFY
#define GTM0TIM03IRQEN GTM0.TIM03IRQEN
#define GTM0TIM03IRQFORCINT GTM0.TIM03IRQFORCINT
#define GTM0TIM03IRQMODE GTM0.TIM03IRQMODE
#define GTM0TIM03EIRQEN GTM0.TIM03EIRQEN
#define GTM0TIM04GPR0 GTM0.TIM04GPR0
#define GTM0TIM04GPR1 GTM0.TIM04GPR1
#define GTM0TIM04CNT GTM0.TIM04CNT
#define GTM0TIM04ECNT GTM0.TIM04ECNT
#define GTM0TIM04CNTS GTM0.TIM04CNTS
#define GTM0TIM04TDUC GTM0.TIM04TDUC
#define GTM0TIM04TDUV GTM0.TIM04TDUV
#define GTM0TIM04FLTRE GTM0.TIM04FLTRE
#define GTM0TIM04FLTFE GTM0.TIM04FLTFE
#define GTM0TIM04CTRL GTM0.TIM04CTRL
#define GTM0TIM04ECTRL GTM0.TIM04ECTRL
#define GTM0TIM04IRQNOTIFY GTM0.TIM04IRQNOTIFY
#define GTM0TIM04IRQEN GTM0.TIM04IRQEN
#define GTM0TIM04IRQFORCINT GTM0.TIM04IRQFORCINT
#define GTM0TIM04IRQMODE GTM0.TIM04IRQMODE
#define GTM0TIM04EIRQEN GTM0.TIM04EIRQEN
#define GTM0TIM05GPR0 GTM0.TIM05GPR0
#define GTM0TIM05GPR1 GTM0.TIM05GPR1
#define GTM0TIM05CNT GTM0.TIM05CNT
#define GTM0TIM05ECNT GTM0.TIM05ECNT
#define GTM0TIM05CNTS GTM0.TIM05CNTS
#define GTM0TIM05TDUC GTM0.TIM05TDUC
#define GTM0TIM05TDUV GTM0.TIM05TDUV
#define GTM0TIM05FLTRE GTM0.TIM05FLTRE
#define GTM0TIM05FLTFE GTM0.TIM05FLTFE
#define GTM0TIM05CTRL GTM0.TIM05CTRL
#define GTM0TIM05ECTRL GTM0.TIM05ECTRL
#define GTM0TIM05IRQNOTIFY GTM0.TIM05IRQNOTIFY
#define GTM0TIM05IRQEN GTM0.TIM05IRQEN
#define GTM0TIM05IRQFORCINT GTM0.TIM05IRQFORCINT
#define GTM0TIM05IRQMODE GTM0.TIM05IRQMODE
#define GTM0TIM05EIRQEN GTM0.TIM05EIRQEN
#define GTM0TIM06GPR0 GTM0.TIM06GPR0
#define GTM0TIM06GPR1 GTM0.TIM06GPR1
#define GTM0TIM06CNT GTM0.TIM06CNT
#define GTM0TIM06ECNT GTM0.TIM06ECNT
#define GTM0TIM06CNTS GTM0.TIM06CNTS
#define GTM0TIM06TDUC GTM0.TIM06TDUC
#define GTM0TIM06TDUV GTM0.TIM06TDUV
#define GTM0TIM06FLTRE GTM0.TIM06FLTRE
#define GTM0TIM06FLTFE GTM0.TIM06FLTFE
#define GTM0TIM06CTRL GTM0.TIM06CTRL
#define GTM0TIM06ECTRL GTM0.TIM06ECTRL
#define GTM0TIM06IRQNOTIFY GTM0.TIM06IRQNOTIFY
#define GTM0TIM06IRQEN GTM0.TIM06IRQEN
#define GTM0TIM06IRQFORCINT GTM0.TIM06IRQFORCINT
#define GTM0TIM06IRQMODE GTM0.TIM06IRQMODE
#define GTM0TIM06EIRQEN GTM0.TIM06EIRQEN
#define GTM0TIM07GPR0 GTM0.TIM07GPR0
#define GTM0TIM07GPR1 GTM0.TIM07GPR1
#define GTM0TIM07CNT GTM0.TIM07CNT
#define GTM0TIM07ECNT GTM0.TIM07ECNT
#define GTM0TIM07CNTS GTM0.TIM07CNTS
#define GTM0TIM07TDUC GTM0.TIM07TDUC
#define GTM0TIM07TDUV GTM0.TIM07TDUV
#define GTM0TIM07FLTRE GTM0.TIM07FLTRE
#define GTM0TIM07FLTFE GTM0.TIM07FLTFE
#define GTM0TIM07CTRL GTM0.TIM07CTRL
#define GTM0TIM07ECTRL GTM0.TIM07ECTRL
#define GTM0TIM07IRQNOTIFY GTM0.TIM07IRQNOTIFY
#define GTM0TIM07IRQEN GTM0.TIM07IRQEN
#define GTM0TIM07IRQFORCINT GTM0.TIM07IRQFORCINT
#define GTM0TIM07IRQMODE GTM0.TIM07IRQMODE
#define GTM0TIM07EIRQEN GTM0.TIM07EIRQEN
#define GTM0TIM10GPR0 GTM0.TIM10GPR0
#define GTM0TIM10GPR1 GTM0.TIM10GPR1
#define GTM0TIM10CNT GTM0.TIM10CNT
#define GTM0TIM10ECNT GTM0.TIM10ECNT
#define GTM0TIM10CNTS GTM0.TIM10CNTS
#define GTM0TIM10TDUC GTM0.TIM10TDUC
#define GTM0TIM10TDUV GTM0.TIM10TDUV
#define GTM0TIM10FLTRE GTM0.TIM10FLTRE
#define GTM0TIM10FLTFE GTM0.TIM10FLTFE
#define GTM0TIM10CTRL GTM0.TIM10CTRL
#define GTM0TIM10ECTRL GTM0.TIM10ECTRL
#define GTM0TIM10IRQNOTIFY GTM0.TIM10IRQNOTIFY
#define GTM0TIM10IRQEN GTM0.TIM10IRQEN
#define GTM0TIM10IRQFORCINT GTM0.TIM10IRQFORCINT
#define GTM0TIM10IRQMODE GTM0.TIM10IRQMODE
#define GTM0TIM10EIRQEN GTM0.TIM10EIRQEN
#define GTM0TIM1INPVAL GTM0.TIM1INPVAL
#define GTM0TIM1INSRC GTM0.TIM1INSRC
#define GTM0TIM1RST GTM0.TIM1RST
#define GTM0TIM11GPR0 GTM0.TIM11GPR0
#define GTM0TIM11GPR1 GTM0.TIM11GPR1
#define GTM0TIM11CNT GTM0.TIM11CNT
#define GTM0TIM11ECNT GTM0.TIM11ECNT
#define GTM0TIM11CNTS GTM0.TIM11CNTS
#define GTM0TIM11TDUC GTM0.TIM11TDUC
#define GTM0TIM11TDUV GTM0.TIM11TDUV
#define GTM0TIM11FLTRE GTM0.TIM11FLTRE
#define GTM0TIM11FLTFE GTM0.TIM11FLTFE
#define GTM0TIM11CTRL GTM0.TIM11CTRL
#define GTM0TIM11ECTRL GTM0.TIM11ECTRL
#define GTM0TIM11IRQNOTIFY GTM0.TIM11IRQNOTIFY
#define GTM0TIM11IRQEN GTM0.TIM11IRQEN
#define GTM0TIM11IRQFORCINT GTM0.TIM11IRQFORCINT
#define GTM0TIM11IRQMODE GTM0.TIM11IRQMODE
#define GTM0TIM11EIRQEN GTM0.TIM11EIRQEN
#define GTM0TIM12GPR0 GTM0.TIM12GPR0
#define GTM0TIM12GPR1 GTM0.TIM12GPR1
#define GTM0TIM12CNT GTM0.TIM12CNT
#define GTM0TIM12ECNT GTM0.TIM12ECNT
#define GTM0TIM12CNTS GTM0.TIM12CNTS
#define GTM0TIM12TDUC GTM0.TIM12TDUC
#define GTM0TIM12TDUV GTM0.TIM12TDUV
#define GTM0TIM12FLTRE GTM0.TIM12FLTRE
#define GTM0TIM12FLTFE GTM0.TIM12FLTFE
#define GTM0TIM12CTRL GTM0.TIM12CTRL
#define GTM0TIM12ECTRL GTM0.TIM12ECTRL
#define GTM0TIM12IRQNOTIFY GTM0.TIM12IRQNOTIFY
#define GTM0TIM12IRQEN GTM0.TIM12IRQEN
#define GTM0TIM12IRQFORCINT GTM0.TIM12IRQFORCINT
#define GTM0TIM12IRQMODE GTM0.TIM12IRQMODE
#define GTM0TIM12EIRQEN GTM0.TIM12EIRQEN
#define GTM0TIM13GPR0 GTM0.TIM13GPR0
#define GTM0TIM13GPR1 GTM0.TIM13GPR1
#define GTM0TIM13CNT GTM0.TIM13CNT
#define GTM0TIM13ECNT GTM0.TIM13ECNT
#define GTM0TIM13CNTS GTM0.TIM13CNTS
#define GTM0TIM13TDUC GTM0.TIM13TDUC
#define GTM0TIM13TDUV GTM0.TIM13TDUV
#define GTM0TIM13FLTRE GTM0.TIM13FLTRE
#define GTM0TIM13FLTFE GTM0.TIM13FLTFE
#define GTM0TIM13CTRL GTM0.TIM13CTRL
#define GTM0TIM13ECTRL GTM0.TIM13ECTRL
#define GTM0TIM13IRQNOTIFY GTM0.TIM13IRQNOTIFY
#define GTM0TIM13IRQEN GTM0.TIM13IRQEN
#define GTM0TIM13IRQFORCINT GTM0.TIM13IRQFORCINT
#define GTM0TIM13IRQMODE GTM0.TIM13IRQMODE
#define GTM0TIM13EIRQEN GTM0.TIM13EIRQEN
#define GTM0TIM14GPR0 GTM0.TIM14GPR0
#define GTM0TIM14GPR1 GTM0.TIM14GPR1
#define GTM0TIM14CNT GTM0.TIM14CNT
#define GTM0TIM14ECNT GTM0.TIM14ECNT
#define GTM0TIM14CNTS GTM0.TIM14CNTS
#define GTM0TIM14TDUC GTM0.TIM14TDUC
#define GTM0TIM14TDUV GTM0.TIM14TDUV
#define GTM0TIM14FLTRE GTM0.TIM14FLTRE
#define GTM0TIM14FLTFE GTM0.TIM14FLTFE
#define GTM0TIM14CTRL GTM0.TIM14CTRL
#define GTM0TIM14ECTRL GTM0.TIM14ECTRL
#define GTM0TIM14IRQNOTIFY GTM0.TIM14IRQNOTIFY
#define GTM0TIM14IRQEN GTM0.TIM14IRQEN
#define GTM0TIM14IRQFORCINT GTM0.TIM14IRQFORCINT
#define GTM0TIM14IRQMODE GTM0.TIM14IRQMODE
#define GTM0TIM14EIRQEN GTM0.TIM14EIRQEN
#define GTM0TIM15GPR0 GTM0.TIM15GPR0
#define GTM0TIM15GPR1 GTM0.TIM15GPR1
#define GTM0TIM15CNT GTM0.TIM15CNT
#define GTM0TIM15ECNT GTM0.TIM15ECNT
#define GTM0TIM15CNTS GTM0.TIM15CNTS
#define GTM0TIM15TDUC GTM0.TIM15TDUC
#define GTM0TIM15TDUV GTM0.TIM15TDUV
#define GTM0TIM15FLTRE GTM0.TIM15FLTRE
#define GTM0TIM15FLTFE GTM0.TIM15FLTFE
#define GTM0TIM15CTRL GTM0.TIM15CTRL
#define GTM0TIM15ECTRL GTM0.TIM15ECTRL
#define GTM0TIM15IRQNOTIFY GTM0.TIM15IRQNOTIFY
#define GTM0TIM15IRQEN GTM0.TIM15IRQEN
#define GTM0TIM15IRQFORCINT GTM0.TIM15IRQFORCINT
#define GTM0TIM15IRQMODE GTM0.TIM15IRQMODE
#define GTM0TIM15EIRQEN GTM0.TIM15EIRQEN
#define GTM0TIM16GPR0 GTM0.TIM16GPR0
#define GTM0TIM16GPR1 GTM0.TIM16GPR1
#define GTM0TIM16CNT GTM0.TIM16CNT
#define GTM0TIM16ECNT GTM0.TIM16ECNT
#define GTM0TIM16CNTS GTM0.TIM16CNTS
#define GTM0TIM16TDUC GTM0.TIM16TDUC
#define GTM0TIM16TDUV GTM0.TIM16TDUV
#define GTM0TIM16FLTRE GTM0.TIM16FLTRE
#define GTM0TIM16FLTFE GTM0.TIM16FLTFE
#define GTM0TIM16CTRL GTM0.TIM16CTRL
#define GTM0TIM16ECTRL GTM0.TIM16ECTRL
#define GTM0TIM16IRQNOTIFY GTM0.TIM16IRQNOTIFY
#define GTM0TIM16IRQEN GTM0.TIM16IRQEN
#define GTM0TIM16IRQFORCINT GTM0.TIM16IRQFORCINT
#define GTM0TIM16IRQMODE GTM0.TIM16IRQMODE
#define GTM0TIM16EIRQEN GTM0.TIM16EIRQEN
#define GTM0TIM17GPR0 GTM0.TIM17GPR0
#define GTM0TIM17GPR1 GTM0.TIM17GPR1
#define GTM0TIM17CNT GTM0.TIM17CNT
#define GTM0TIM17ECNT GTM0.TIM17ECNT
#define GTM0TIM17CNTS GTM0.TIM17CNTS
#define GTM0TIM17TDUC GTM0.TIM17TDUC
#define GTM0TIM17TDUV GTM0.TIM17TDUV
#define GTM0TIM17FLTRE GTM0.TIM17FLTRE
#define GTM0TIM17FLTFE GTM0.TIM17FLTFE
#define GTM0TIM17CTRL GTM0.TIM17CTRL
#define GTM0TIM17ECTRL GTM0.TIM17ECTRL
#define GTM0TIM17IRQNOTIFY GTM0.TIM17IRQNOTIFY
#define GTM0TIM17IRQEN GTM0.TIM17IRQEN
#define GTM0TIM17IRQFORCINT GTM0.TIM17IRQFORCINT
#define GTM0TIM17IRQMODE GTM0.TIM17IRQMODE
#define GTM0TIM17EIRQEN GTM0.TIM17EIRQEN

#define FLXA0FRT0C FLXA0.FRT0C.UINT32
#define FLXA0FRT2C FLXA0.FRT2C.UINT32
#define FLXA1FRT0C FLXA1.FRT0C.UINT32
#define FLXA1FRT2C FLXA1.FRT2C.UINT32

#define HSUS0EN HSUS0.EN
#define HSUS0CST HSUS0.CST
#define HSUS0SRST HSUS0.SRST
#define HSUS1EN HSUS1.EN
#define HSUS1CST HSUS1.CST
#define HSUS1SRST HSUS1.SRST
#define HSUS2EN HSUS2.EN
#define HSUS2CST HSUS2.CST
#define HSUS2SRST HSUS2.SRST
#define HSUS3EN HSUS3.EN
#define HSUS3CST HSUS3.CST
#define HSUS3SRST HSUS3.SRST

#define STM0CKSEL STM0.CKSEL.UINT32
#define STM0CKSELLL STM0.CKSEL.UINT8[LL]
#define STM0TS STM0.TS.UINT32
#define STM0TSLL STM0.TS.UINT8[LL]
#define STM0TT STM0.TT.UINT32
#define STM0TTLL STM0.TT.UINT8[LL]
#define STM0CSTR STM0.CSTR.UINT32
#define STM0CSTRLL STM0.CSTR.UINT8[LL]
#define STM0STR STM0.STR
#define STM0STC STM0.STC
#define STM0IS STM0.IS.UINT32
#define STM0ISLL STM0.IS.UINT8[LL]
#define STM0ISLH STM0.IS.UINT8[LH]
#define STM0RM STM0.RM.UINT32
#define STM0RMLL STM0.RM.UINT8[LL]
#define STM0CNT0L STM0.CNT0L
#define STM0CNT0H STM0.CNT0H
#define STM0CMP0AL STM0.CMP0AL
#define STM0CMP0AH STM0.CMP0AH
#define STM0CMP0BL STM0.CMP0BL
#define STM0CMP0BH STM0.CMP0BH
#define STM0CMP0CL STM0.CMP0CL
#define STM0CMP0CH STM0.CMP0CH
#define STM0CMP0DL STM0.CMP0DL
#define STM0CMP0DH STM0.CMP0DH

#define DNFA7EN DNFA7.EN.UINT16

#define PEGG0BA PEG.G0BA.UINT32
#define PEGG1BA PEG.G1BA.UINT32
#define PEGG0SP PEG.G0SP.UINT32
#define PEGG1SP PEG.G1SP.UINT32
#define PEGG0MK PEG.G0MK.UINT32
#define PEGG1MK PEG.G1MK.UINT32

#define DNFA2CTL DNFA2.CTL.UINT8
#define DNFA2PRS0 DNFA2.CTL.PRS0
#define DNFA2PRS1 DNFA2.CTL.PRS1
#define DNFA2PRS2 DNFA2.CTL.PRS2
#define DNFA2NFSTS0 DNFA2.CTL.NFSTS0
#define DNFA2NFSTS1 DNFA2.CTL.NFSTS1
#define DNFA2EN DNFA2.EN.UINT16
#define DNFA2ENL DNFA2.EN.UINT8[L]
#define DNFA2NFENL0 DNFA2.EN.NFENL0
#define DNFA2NFENL1 DNFA2.EN.NFENL1
#define DNFA3CTL DNFA3.CTL.UINT8
#define DNFA3PRS0 DNFA3.CTL.PRS0
#define DNFA3PRS1 DNFA3.CTL.PRS1
#define DNFA3PRS2 DNFA3.CTL.PRS2
#define DNFA3NFSTS0 DNFA3.CTL.NFSTS0
#define DNFA3NFSTS1 DNFA3.CTL.NFSTS1
#define DNFA3EN DNFA3.EN.UINT16
#define DNFA3ENL DNFA3.EN.UINT8[L]
#define DNFA3NFENL0 DNFA3.EN.NFENL0
#define DNFA3NFENL1 DNFA3.EN.NFENL1
#define DNFA4CTL DNFA4.CTL.UINT8
#define DNFA4PRS0 DNFA4.CTL.PRS0
#define DNFA4PRS1 DNFA4.CTL.PRS1
#define DNFA4PRS2 DNFA4.CTL.PRS2
#define DNFA4NFSTS0 DNFA4.CTL.NFSTS0
#define DNFA4NFSTS1 DNFA4.CTL.NFSTS1
#define DNFA4EN DNFA4.EN.UINT16
#define DNFA4ENL DNFA4.EN.UINT8[L]
#define DNFA4NFENL0 DNFA4.EN.NFENL0
#define DNFA4NFENL1 DNFA4.EN.NFENL1
#define DNFA5CTL DNFA5.CTL.UINT8
#define DNFA5PRS0 DNFA5.CTL.PRS0
#define DNFA5PRS1 DNFA5.CTL.PRS1
#define DNFA5PRS2 DNFA5.CTL.PRS2
#define DNFA5NFSTS0 DNFA5.CTL.NFSTS0
#define DNFA5NFSTS1 DNFA5.CTL.NFSTS1
#define DNFA5EN DNFA5.EN.UINT16
#define DNFA5ENL DNFA5.EN.UINT8[L]
#define DNFA5NFENL0 DNFA5.EN.NFENL0
#define DNFA5NFENL1 DNFA5.EN.NFENL1
#define DNFA5NFENL2 DNFA5.EN.NFENL2
#define DNFA5NFENL3 DNFA5.EN.NFENL3
#define DNFA5NFENL4 DNFA5.EN.NFENL4
#define DNFA5NFENL5 DNFA5.EN.NFENL5
#define DNFA5NFENL6 DNFA5.EN.NFENL6
#define DNFA5NFENL7 DNFA5.EN.NFENL7
#define DNFA6CTL DNFA6.CTL.UINT8
#define DNFA6PRS0 DNFA6.CTL.PRS0
#define DNFA6PRS1 DNFA6.CTL.PRS1
#define DNFA6PRS2 DNFA6.CTL.PRS2
#define DNFA6NFSTS0 DNFA6.CTL.NFSTS0
#define DNFA6NFSTS1 DNFA6.CTL.NFSTS1
#define DNFA6EN DNFA6.EN.UINT16
#define DNFA6ENL DNFA6.EN.UINT8[L]
#define DNFA6NFENL0 DNFA6.EN.NFENL0
#define DNFA6NFENL1 DNFA6.EN.NFENL1
#define DNFA7CTL DNFA7.CTL.UINT8
#define DNFA7PRS0 DNFA7.CTL.PRS0
#define DNFA7PRS1 DNFA7.CTL.PRS1
#define DNFA7PRS2 DNFA7.CTL.PRS2
#define DNFA7NFSTS0 DNFA7.CTL.NFSTS0
#define DNFA7NFSTS1 DNFA7.CTL.NFSTS1
#define DNFA7ENL DNFA7.EN.UINT8[L]
#define DNFA7NFENL0 DNFA7.EN.NFENL0
#define DNFA7NFENL1 DNFA7.EN.NFENL1


#define FCLA0CTL0 FCLA0.CTL0.UINT8
#define FCLA0INTR0 FCLA0.CTL0.INTR0
#define FCLA0INTF0 FCLA0.CTL0.INTF0
#define FCLA0INTL0 FCLA0.CTL0.INTL0
#define FCLA0CTL1 FCLA0.CTL1.UINT8
#define FCLA0INTR1 FCLA0.CTL1.INTR1
#define FCLA0INTF1 FCLA0.CTL1.INTF1
#define FCLA0INTL1 FCLA0.CTL1.INTL1
#define FCLA0CTL2 FCLA0.CTL2.UINT8
#define FCLA0INTR2 FCLA0.CTL2.INTR2
#define FCLA0INTF2 FCLA0.CTL2.INTF2
#define FCLA0INTL2 FCLA0.CTL2.INTL2
#define FCLA0CTL3 FCLA0.CTL3.UINT8
#define FCLA0INTR3 FCLA0.CTL3.INTR3
#define FCLA0INTF3 FCLA0.CTL3.INTF3
#define FCLA0INTL3 FCLA0.CTL3.INTL3
#define FCLA0CTL4 FCLA0.CTL4.UINT8
#define FCLA0INTR4 FCLA0.CTL4.INTR4
#define FCLA0INTF4 FCLA0.CTL4.INTF4
#define FCLA0INTL4 FCLA0.CTL4.INTL4
#define FCLA0CTL5 FCLA0.CTL5.UINT8
#define FCLA0INTR5 FCLA0.CTL5.INTR5
#define FCLA0INTF5 FCLA0.CTL5.INTF5
#define FCLA0INTL5 FCLA0.CTL5.INTL5
#define FCLA0CTL6 FCLA0.CTL6.UINT8
#define FCLA0INTR6 FCLA0.CTL6.INTR6
#define FCLA0INTF6 FCLA0.CTL6.INTF6
#define FCLA0INTL6 FCLA0.CTL6.INTL6
#define FCLA0CTL7 FCLA0.CTL7.UINT8
#define FCLA0INTR7 FCLA0.CTL7.INTR7
#define FCLA0INTF7 FCLA0.CTL7.INTF7
#define FCLA0INTL7 FCLA0.CTL7.INTL7
#define FCLA1CTL0 FCLA1.CTL0.UINT8
#define FCLA1INTR0 FCLA1.CTL0.INTR0
#define FCLA1INTF0 FCLA1.CTL0.INTF0
#define FCLA1INTL0 FCLA1.CTL0.INTL0
#define FCLA1CTL1 FCLA1.CTL1.UINT8
#define FCLA1INTR1 FCLA1.CTL1.INTR1
#define FCLA1INTF1 FCLA1.CTL1.INTF1
#define FCLA1INTL1 FCLA1.CTL1.INTL1
#define FCLA1CTL2 FCLA1.CTL2.UINT8
#define FCLA1INTR2 FCLA1.CTL2.INTR2
#define FCLA1INTF2 FCLA1.CTL2.INTF2
#define FCLA1INTL2 FCLA1.CTL2.INTL2
#define FCLA1CTL3 FCLA1.CTL3.UINT8
#define FCLA1INTR3 FCLA1.CTL3.INTR3
#define FCLA1INTF3 FCLA1.CTL3.INTF3
#define FCLA1INTL3 FCLA1.CTL3.INTL3
#define FCLA1CTL4 FCLA1.CTL4.UINT8
#define FCLA1INTR4 FCLA1.CTL4.INTR4
#define FCLA1INTF4 FCLA1.CTL4.INTF4
#define FCLA1INTL4 FCLA1.CTL4.INTL4
#define FCLA2CTL0 FCLA2.CTL0.UINT8
#define FCLA2INTR0 FCLA2.CTL0.INTR0
#define FCLA2INTF0 FCLA2.CTL0.INTF0
#define FCLA2CTL1 FCLA2.CTL1.UINT8
#define FCLA2INTR1 FCLA2.CTL1.INTR1
#define FCLA2INTF1 FCLA2.CTL1.INTF1
#define FCLA3CTL0 FCLA3.CTL0.UINT8
#define FCLA3INTR0 FCLA3.CTL0.INTR0
#define FCLA3INTF0 FCLA3.CTL0.INTF0
#define FCLA3CTL1 FCLA3.CTL1.UINT8
#define FCLA3INTR1 FCLA3.CTL1.INTR1
#define FCLA3INTF1 FCLA3.CTL1.INTF1
#define FCLA4CTL0 FCLA4.CTL0.UINT8
#define FCLA4INTR0 FCLA4.CTL0.INTR0
#define FCLA4INTF0 FCLA4.CTL0.INTF0
#define FCLA4CTL1 FCLA4.CTL1.UINT8
#define FCLA4INTR1 FCLA4.CTL1.INTR1
#define FCLA4INTF1 FCLA4.CTL1.INTF1
#define FCLA5CTL0 FCLA5.CTL0.UINT8
#define FCLA5BYPS0 FCLA5.CTL0.BYPS0
#define FCLA5CTL1 FCLA5.CTL1.UINT8
#define FCLA5BYPS1 FCLA5.CTL1.BYPS1
#define FCLA5CTL2 FCLA5.CTL2.UINT8
#define FCLA5BYPS2 FCLA5.CTL2.BYPS2
#define FCLA5CTL3 FCLA5.CTL3.UINT8
#define FCLA5BYPS3 FCLA5.CTL3.BYPS3
#define FCLA5CTL4 FCLA5.CTL4.UINT8
#define FCLA5BYPS4 FCLA5.CTL4.BYPS4
#define FCLA5CTL5 FCLA5.CTL5.UINT8
#define FCLA5BYPS5 FCLA5.CTL5.BYPS5
#define FCLA5CTL6 FCLA5.CTL6.UINT8
#define FCLA5BYPS6 FCLA5.CTL6.BYPS6
#define FCLA5CTL7 FCLA5.CTL7.UINT8
#define FCLA5BYPS7 FCLA5.CTL7.BYPS7
#define FCLA6CTL0 FCLA6.CTL0.UINT8
#define FCLA6BYPS0 FCLA6.CTL0.BYPS0
#define FCLA6CTL1 FCLA6.CTL1.UINT8
#define FCLA6BYPS1 FCLA6.CTL1.BYPS1

#define FACI0FPMON FACI0.FPMON
#define FACI0FASTAT FACI0.FASTAT
#define FACI0FAEINT FACI0.FAEINT
#define FACI0FSADDR FACI0.FSADDR
#define FACI0FEADDR FACI0.FEADDR
#define FACI0FCURAME FACI0.FCURAME
#define FACI0FRAMMCR FACI0.FRAMMCR
#define FACI0FPROTDR0 FACI0.FPROTDR0
#define FACI0FPROTCR0 FACI0.FPROTCR0
#define FACI0FPROTCR1 FACI0.FPROTCR1
#define FACI0FPROTCR2 FACI0.FPROTCR2
#define FACI0FPROTCR3 FACI0.FPROTCR3
#define FACI0FPROTCR4 FACI0.FPROTCR4
#define FACI0FSTATR FACI0.FSTATR
#define FACI0FENTRYR FACI0.FENTRYR
#define FACI0FSUINITR FACI0.FSUINITR
#define FACI0FLKSTAT FACI0.FLKSTAT
#define FACI0FRFSTEADR FACI0.FRFSTEADR
#define FACI0FRTSTAT FACI0.FRTSTAT
#define FACI0FRTEINT FACI0.FRTEINT
#define FACI0FCMDR FACI0.FCMDR
#define FACI0FRAMECCR FACI0.FRAMECCR
#define FACI0FPESTAT FACI0.FPESTAT
#define FACI0FCNFPRGCNT FACI0.FCNFPRGCNT
#define FACI0FBCCNT FACI0.FBCCNT
#define FACI0FBCSTAT FACI0.FBCSTAT
#define FACI0FPSADDR FACI0.FPSADDR
#define FACI0FCPSR FACI0.FCPSR
#define FACI0FPCKAR FACI0.FPCKAR
#define FACI0FECCEMON FACI0.FECCEMON
#define FACI0FECCTMD FACI0.FECCTMD
#define FACI0FDMYECC FACI0.FDMYECC
#define FACI1FPMON FACI1.FPMON
#define FACI1FASTAT FACI1.FASTAT
#define FACI1FAEINT FACI1.FAEINT
#define FACI1FSADDR FACI1.FSADDR
#define FACI1FEADDR FACI1.FEADDR
#define FACI1FCURAME FACI1.FCURAME
#define FACI1FRAMMCR FACI1.FRAMMCR
#define FACI1FPROTDR0 FACI1.FPROTDR0
#define FACI1FPROTCR0 FACI1.FPROTCR0
#define FACI1FPROTCR1 FACI1.FPROTCR1
#define FACI1FPROTCR2 FACI1.FPROTCR2
#define FACI1FPROTCR3 FACI1.FPROTCR3
#define FACI1FPROTCR4 FACI1.FPROTCR4
#define FACI1FSTATR FACI1.FSTATR
#define FACI1FENTRYR FACI1.FENTRYR
#define FACI1FSUINITR FACI1.FSUINITR
#define FACI1FLKSTAT FACI1.FLKSTAT
#define FACI1FRFSTEADR FACI1.FRFSTEADR
#define FACI1FRTSTAT FACI1.FRTSTAT
#define FACI1FRTEINT FACI1.FRTEINT
#define FACI1FCMDR FACI1.FCMDR
#define FACI1FRAMECCR FACI1.FRAMECCR
#define FACI1FPESTAT FACI1.FPESTAT
#define FACI1FCNFPRGCNT FACI1.FCNFPRGCNT
#define FACI1FBCCNT FACI1.FBCCNT
#define FACI1FBCSTAT FACI1.FBCSTAT
#define FACI1FPSADDR FACI1.FPSADDR
#define FACI1FCPSR FACI1.FCPSR
#define FACI1FPCKAR FACI1.FPCKAR
#define FACI1FECCEMON FACI1.FECCEMON
#define FACI1FECCTMD FACI1.FECCTMD
#define FACI1FDMYECC FACI1.FDMYECC

#define ECCCSIH0CTL ECCCSIH0.CTL.UINT32
#define ECCCSIH0CTLL ECCCSIH0.CTL.UINT16[L]
#define ECCCSIH0CTLLL ECCCSIH0.CTL.UINT8[LL]
#define ECCCSIH0CTLLH ECCCSIH0.CTL.UINT8[LH]
#define ECCCSIH0CTLH ECCCSIH0.CTL.UINT16[H]
#define ECCCSIH0CTLHL ECCCSIH0.CTL.UINT8[HL]
#define ECCCSIH0CTLHH ECCCSIH0.CTL.UINT8[HH]
#define ECCCSIH0ECEMF ECCCSIH0.CTL.BIT.ECEMF
#define ECCCSIH0ECER1F ECCCSIH0.CTL.BIT.ECER1F
#define ECCCSIH0ECER2F ECCCSIH0.CTL.BIT.ECER2F
#define ECCCSIH0EC1EDIC ECCCSIH0.CTL.BIT.EC1EDIC
#define ECCCSIH0EC2EDIC ECCCSIH0.CTL.BIT.EC2EDIC
#define ECCCSIH0EC1ECP ECCCSIH0.CTL.BIT.EC1ECP
#define ECCCSIH0ECTHM ECCCSIH0.CTL.BIT.ECTHM
#define ECCCSIH0ECER1C ECCCSIH0.CTL.BIT.ECER1C
#define ECCCSIH0ECER2C ECCCSIH0.CTL.BIT.ECER2C
#define ECCCSIH0ECOVFF ECCCSIH0.CTL.BIT.ECOVFF
#define ECCCSIH0EMCA ECCCSIH0.CTL.BIT.EMCA
#define ECCCSIH0ECSEDF0 ECCCSIH0.CTL.BIT.ECSEDF0
#define ECCCSIH0ECDEDF0 ECCCSIH0.CTL.BIT.ECDEDF0
#define ECCCSIH0TMC ECCCSIH0.TMC.UINT16
#define ECCCSIH0TMCL ECCCSIH0.TMC.UINT8[L]
#define ECCCSIH0TMCH ECCCSIH0.TMC.UINT8[H]
#define ECCCSIH0ECREIS ECCCSIH0.TMC.BIT.ECREIS
#define ECCCSIH0ECDCS ECCCSIH0.TMC.BIT.ECDCS
#define ECCCSIH0ECENS ECCCSIH0.TMC.BIT.ECENS
#define ECCCSIH0ECREOS ECCCSIH0.TMC.BIT.ECREOS
#define ECCCSIH0ECTRRS ECCCSIH0.TMC.BIT.ECTRRS
#define ECCCSIH0ECTMCE ECCCSIH0.TMC.BIT.ECTMCE
#define ECCCSIH0ETMA ECCCSIH0.TMC.BIT.ETMA
#define ECCCSIH0TRC ECCCSIH0.TRC.UINT32
#define ECCCSIH0ERDB ECCCSIH0.TRC.UINT8[LL]
#define ECCCSIH0ECRD ECCCSIH0.TRC.UINT8[LH]
#define ECCCSIH0HORD ECCCSIH0.TRC.UINT8[HL]
#define ECCCSIH0SYND ECCCSIH0.TRC.UINT8[HH]
#define ECCCSIH0TED ECCCSIH0.TED.UINT32
#define ECCCSIH0ECEDB ECCCSIH0.TED.BIT.ECEDB
#define ECCCSIH0EAD0 ECCCSIH0.EAD0.UINT32
#define ECCCSIH0ECEAD ECCCSIH0.EAD0.BIT.ECEAD

#define ECCCSIH1CTL ECCCSIH1.CTL.UINT32
#define ECCCSIH1CTLL ECCCSIH1.CTL.UINT16[L]
#define ECCCSIH1CTLLL ECCCSIH1.CTL.UINT8[LL]
#define ECCCSIH1CTLLH ECCCSIH1.CTL.UINT8[LH]
#define ECCCSIH1CTLH ECCCSIH1.CTL.UINT16[H]
#define ECCCSIH1CTLHL ECCCSIH1.CTL.UINT8[HL]
#define ECCCSIH1CTLHH ECCCSIH1.CTL.UINT8[HH]
#define ECCCSIH1ECEMF ECCCSIH1.CTL.BIT.ECEMF
#define ECCCSIH1ECER1F ECCCSIH1.CTL.BIT.ECER1F
#define ECCCSIH1ECER2F ECCCSIH1.CTL.BIT.ECER2F
#define ECCCSIH1EC1EDIC ECCCSIH1.CTL.BIT.EC1EDIC
#define ECCCSIH1EC2EDIC ECCCSIH1.CTL.BIT.EC2EDIC
#define ECCCSIH1EC1ECP ECCCSIH1.CTL.BIT.EC1ECP
#define ECCCSIH1ECTHM ECCCSIH1.CTL.BIT.ECTHM
#define ECCCSIH1ECER1C ECCCSIH1.CTL.BIT.ECER1C
#define ECCCSIH1ECER2C ECCCSIH1.CTL.BIT.ECER2C
#define ECCCSIH2ECOVFF ECCCSIH2.CTL.BIT.ECOVFF
#define ECCCSIH1EMCA ECCCSIH1.CTL.BIT.EMCA
#define ECCCSIH1ECSEDF0 ECCCSIH1.CTL.BIT.ECSEDF0
#define ECCCSIH1ECDEDF0 ECCCSIH1.CTL.BIT.ECDEDF0
#define ECCCSIH1TMC ECCCSIH1.TMC.UINT16
#define ECCCSIH1TMCL ECCCSIH1.TMC.UINT8[L]
#define ECCCSIH1TMCH ECCCSIH1.TMC.UINT8[H]
#define ECCCSIH1ECREIS ECCCSIH1.TMC.BIT.ECREIS
#define ECCCSIH1ECDCS ECCCSIH1.TMC.BIT.ECDCS
#define ECCCSIH1ECENS ECCCSIH1.TMC.BIT.ECENS
#define ECCCSIH1ECREOS ECCCSIH1.TMC.BIT.ECREOS
#define ECCCSIH1ECTRRS ECCCSIH1.TMC.BIT.ECTRRS
#define ECCCSIH1ECTMCE ECCCSIH1.TMC.BIT.ECTMCE
#define ECCCSIH1ETMA ECCCSIH1.TMC.BIT.ETMA
#define ECCCSIH1TRC ECCCSIH1.TRC.UINT32
#define ECCCSIH1ERDB ECCCSIH1.TRC.UINT8[LL]
#define ECCCSIH1ECRD ECCCSIH1.TRC.UINT8[LH]
#define ECCCSIH1HORD ECCCSIH1.TRC.UINT8[HL]
#define ECCCSIH1SYND ECCCSIH1.TRC.UINT8[HH]
#define ECCCSIH1TED ECCCSIH1.TED.UINT32
#define ECCCSIH1ECEDB ECCCSIH1.TED.BIT.ECEDB
#define ECCCSIH1EAD0 ECCCSIH1.EAD0.UINT32
#define ECCCSIH1ECEAD ECCCSIH1.EAD0.BIT.ECEAD

#define ECCCSIH2CTL ECCCSIH2.CTL.UINT32
#define ECCCSIH2CTLL ECCCSIH2.CTL.UINT16[L]
#define ECCCSIH2CTLLL ECCCSIH2.CTL.UINT8[LL]
#define ECCCSIH2CTLLH ECCCSIH2.CTL.UINT8[LH]
#define ECCCSIH2CTLH ECCCSIH2.CTL.UINT16[H]
#define ECCCSIH2CTLHL ECCCSIH2.CTL.UINT8[HL]
#define ECCCSIH2CTLHH ECCCSIH2.CTL.UINT8[HH]
#define ECCCSIH2ECEMF ECCCSIH2.CTL.BIT.ECEMF
#define ECCCSIH2ECER1F ECCCSIH2.CTL.BIT.ECER1F
#define ECCCSIH2ECER2F ECCCSIH2.CTL.BIT.ECER2F
#define ECCCSIH2EC1EDIC ECCCSIH2.CTL.BIT.EC1EDIC
#define ECCCSIH2EC2EDIC ECCCSIH2.CTL.BIT.EC2EDIC
#define ECCCSIH2EC1ECP ECCCSIH2.CTL.BIT.EC1ECP
#define ECCCSIH2ECTHM ECCCSIH2.CTL.BIT.ECTHM
#define ECCCSIH2ECER1C ECCCSIH2.CTL.BIT.ECER1C
#define ECCCSIH2ECER2C ECCCSIH2.CTL.BIT.ECER2C
#define ECCCSIH2ECOVFF ECCCSIH2.CTL.BIT.ECOVFF
#define ECCCSIH2EMCA ECCCSIH2.CTL.BIT.EMCA
#define ECCCSIH2ECSEDF0 ECCCSIH2.CTL.BIT.ECSEDF0
#define ECCCSIH2ECDEDF0 ECCCSIH2.CTL.BIT.ECDEDF0
#define ECCCSIH2TMC ECCCSIH2.TMC.UINT16
#define ECCCSIH2TMCL ECCCSIH2.TMC.UINT8[L]
#define ECCCSIH2TMCH ECCCSIH2.TMC.UINT8[H]
#define ECCCSIH2ECREIS ECCCSIH2.TMC.BIT.ECREIS
#define ECCCSIH2ECDCS ECCCSIH2.TMC.BIT.ECDCS
#define ECCCSIH2ECENS ECCCSIH2.TMC.BIT.ECENS
#define ECCCSIH2ECREOS ECCCSIH2.TMC.BIT.ECREOS
#define ECCCSIH2ECTRRS ECCCSIH2.TMC.BIT.ECTRRS
#define ECCCSIH2ECTMCE ECCCSIH2.TMC.BIT.ECTMCE
#define ECCCSIH2ETMA ECCCSIH2.TMC.BIT.ETMA
#define ECCCSIH2TRC ECCCSIH2.TRC.UINT32
#define ECCCSIH2ERDB ECCCSIH2.TRC.UINT8[LL]
#define ECCCSIH2ECRD ECCCSIH2.TRC.UINT8[LH]
#define ECCCSIH2HORD ECCCSIH2.TRC.UINT8[HL]
#define ECCCSIH2SYND ECCCSIH2.TRC.UINT8[HH]
#define ECCCSIH2TED ECCCSIH2.TED.UINT32
#define ECCCSIH2ECEDB ECCCSIH2.TED.BIT.ECEDB
#define ECCCSIH2EAD0 ECCCSIH2.EAD0.UINT32
#define ECCCSIH2ECEAD ECCCSIH2.EAD0.BIT.ECEAD

#define ECCCSIH3CTL ECCCSIH3.CTL.UINT32
#define ECCCSIH3CTLL ECCCSIH3.CTL.UINT16[L]
#define ECCCSIH3CTLLL ECCCSIH3.CTL.UINT8[LL]
#define ECCCSIH3CTLLH ECCCSIH3.CTL.UINT8[LH]
#define ECCCSIH3CTLH ECCCSIH3.CTL.UINT16[H]
#define ECCCSIH3CTLHL ECCCSIH3.CTL.UINT8[HL]
#define ECCCSIH3CTLHH ECCCSIH3.CTL.UINT8[HH]
#define ECCCSIH3ECEMF ECCCSIH3.CTL.BIT.ECEMF
#define ECCCSIH3ECER1F ECCCSIH3.CTL.BIT.ECER1F
#define ECCCSIH3ECER2F ECCCSIH3.CTL.BIT.ECER2F
#define ECCCSIH3EC1EDIC ECCCSIH3.CTL.BIT.EC1EDIC
#define ECCCSIH3EC2EDIC ECCCSIH3.CTL.BIT.EC2EDIC
#define ECCCSIH3EC1ECP ECCCSIH3.CTL.BIT.EC1ECP
#define ECCCSIH3ECTHM ECCCSIH3.CTL.BIT.ECTHM
#define ECCCSIH3ECER1C ECCCSIH3.CTL.BIT.ECER1C
#define ECCCSIH3ECER2C ECCCSIH3.CTL.BIT.ECER2C
#define ECCCSIH3ECOVFF ECCCSIH3.CTL.BIT.ECOVFF
#define ECCCSIH3EMCA ECCCSIH3.CTL.BIT.EMCA
#define ECCCSIH3ECSEDF0 ECCCSIH3.CTL.BIT.ECSEDF0
#define ECCCSIH3ECDEDF0 ECCCSIH3.CTL.BIT.ECDEDF0
#define ECCCSIH3TMC ECCCSIH3.TMC.UINT16
#define ECCCSIH3TMCL ECCCSIH3.TMC.UINT8[L]
#define ECCCSIH3TMCH ECCCSIH3.TMC.UINT8[H]
#define ECCCSIH3ECREIS ECCCSIH3.TMC.BIT.ECREIS
#define ECCCSIH3ECDCS ECCCSIH3.TMC.BIT.ECDCS
#define ECCCSIH3ECENS ECCCSIH3.TMC.BIT.ECENS
#define ECCCSIH3ECREOS ECCCSIH3.TMC.BIT.ECREOS
#define ECCCSIH3ECTRRS ECCCSIH3.TMC.BIT.ECTRRS
#define ECCCSIH3ECTMCE ECCCSIH3.TMC.BIT.ECTMCE
#define ECCCSIH3ETMA ECCCSIH3.TMC.BIT.ETMA
#define ECCCSIH3TRC ECCCSIH3.TRC.UINT32
#define ECCCSIH3ERDB ECCCSIH3.TRC.UINT8[LL]
#define ECCCSIH3ECRD ECCCSIH3.TRC.UINT8[LH]
#define ECCCSIH3HORD ECCCSIH3.TRC.UINT8[HL]
#define ECCCSIH3SYND ECCCSIH3.TRC.UINT8[HH]
#define ECCCSIH3TED ECCCSIH3.TED.UINT32
#define ECCCSIH3ECEDB ECCCSIH3.TED.BIT.ECEDB
#define ECCCSIH3EAD0 ECCCSIH3.EAD0.UINT32
#define ECCCSIH3ECEAD ECCCSIH3.EAD0.BIT.ECEAD


#endif
