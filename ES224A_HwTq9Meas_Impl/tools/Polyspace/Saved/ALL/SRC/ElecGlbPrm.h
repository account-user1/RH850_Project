/*****************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: ElecGlbPrm.h
* Module Description: Electrical global parameter definitions
* Project           : CBD
* Author            : Spandana Balani
*****************************************************************************
* Version Control:
* %version:           1 %
* %derived_by:        nzlf92 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 04/21/15  1        SB       Initial version                                                                   EA4#490
* 06/04/15  2        SB       Implement version 2                                                               EA4#733
* 13/08/15  3        Rijvi    Implement version 3                                                               EA4#1242
* 13/01/16  4        SB           Implement version 4                                                                   EA4#3324
* 06/10/16  5        KK           Implement version 5                                                                   EA4#6208
* 07/14/16  6        Rijvi        Implement version 6                                                                   EA4#6490
* 12/14/16  7        AJM      Updated as per version 6.2.0 making Config parameters as configurable inputs      EA4#8920
* 02/10/17  8        AJM      Updated as per version 6.3.0                                                      EA4#9797  
* 05/08/17  9        AJM      Updated as per version 6.4.0                                                      EA4#11642 
* 05/30/17  10       KK       Corrected ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08 value                            EA4#12291
* 09/20/17  11       BRB      Updated as per design version 6.7.0                                               EA4#15439
******************************************************************************/ 

#ifndef ELECGLBPRM_H
#define ELECGLBPRM_H

#include "ElecGlbPrm_Cfg.h"
/* Start of Constants */

/* PWM Timer Unit Frequency */
#define ELECGLBPRM_PWMTMRFRQ_HZ_U32             (80000000U)

/* Inverse Motor Control Period */
/* (0.08F * NXTRFIXDPT_FLOATTOP19_ULS_F32) */
#define ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19   (41943U) 

/* StartUp State - Current Measurement WarmInit Initialization Complete */
#define ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08      (110U)

/* StartUp State - Current Measurement WarmInit Initialization Start */
#define ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08      (100U)

/* StartUp State - Disable */
#define ELECGLBPRM_STRTUPSTDI_CNT_U08           (160U)

/* StartUp State - Flash Memory Initialization Start */
#define ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08       (110U)

/* StartUp State - Initial */
#define ELECGLBPRM_STRTUPSTINIT_CNT_U08         (20U)

/* StartUp State - Motor Driver Initialization Complete */
#define ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08      (100U)

/* StartUp State - Motor Driver Initialization Start */
#define ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08      (80U)

/* StartUp State - Phase Disconnect Warm Init Start */
#define ELECGLBPRM_STRTUPSTPHADISCNCTWRMININSTRT_CNT_U08    ((uint8)105U)

/* StartUp State - Power Disconnect A Complete */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08  (40U)

/* StartUp State - Power Disconnect A Start */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 (20U)

/* StartUp State - Power Disconnect B Complete */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08 (80U)

/* StartUp State - Power Disconnect B Start */
#define ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 (60U)

/* StartUp State - Run */
#define ELECGLBPRM_STRTUPSTRUN_CNT_U08 (140U)

/* StartUp State - Temporal Monitor Initialization Complete */
#define ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08 (60U)

/* StartUp State - Temporal Monitor Initialization Start */
#define ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08 (40U)

/* StartUp State - Warm Initialization Complete */
#define ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08 (120U)

/* Trim Invalid Fault */
#define ELECGLBPRM_TRIMINVLDFLT_CNT_U08 ((uint8)1U)

/* Degrees per Revolution */
#define ELECGLBPRM_DEGPERREV_DEGPERREV_F32 (360.0F)

/* HandWheel Angle Center Offset */
#define ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32 (900.0F)

/* Handwheel Angle Saturation Lower Limit */
#define ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32 (-900.0F)

/* Handwheel Angle Saturation Upper Limit */
#define ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32 (900.0F)

/* Handwheel Angle Scale */
#define ELECGLBPRM_HWAGSCA_ULS_F32 (0.08789F)

/* Handwheel Angle Spur Gear Ratio */
#define ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32 (1.1F)

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0 */
#define ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32 (0.4545F)

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1 */
#define ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32 (0.5F)

/* Handwheel Torque Offset */
#define ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32 (10.0F)

/* Handwheel Torque Saturation Lower Limit */
#define ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32 (-10.0F)

/* Handwheel Torque Saturation Upper Limit */
#define ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32 (10.0F)

/* Handwheel Torque Scale */
#define ELECGLBPRM_HWTQSCA_ULS_F32 (0.004884005F)

/* No Fault */
#define ELECGLBPRM_NOFLT_CNT_U08 (0U)

/* Offset Trim Not Performed */
#define ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08 (1U)

/* Protocol Fault */
#define ELECGLBPRM_PRTCLFLT_CNT_U08 (1U)

/* Revolutions per 360 Degrees */
#define ELECGLBPRM_REVPER360DEG_REVPERDEG_F32 (0.002777777778F)

/* Skip Step Fault */
#define ELECGLBPRM_SKIPSTEPFLT_CNT_U08 (1U)

/* Sensor Internal Fault */
#define ELECGLBPRM_SNSRINTFLT_CNT_U08 (2U)

/* Vernier Error Fault */
#define ELECGLBPRM_VRNRERRFLT_CNT_U08 (2U)

/* Handwheel Torque Measure Buffer Size */
#define ELECGLBPRM_HWTQBUFSIZE_CNT_U08                          (8U)

/* ADC Fault */
#define ELECGLBPRM_ADCFLT_CNT_U08                               (4U)

/* Offset Trim Not Performed */
#define ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08                      (1U)

/* Sensor Scale Not Performed */
#define ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08                       (1U)

/* Gate Drive Configuration  State Parameter Bit Starting Index */
#define ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08     127U

/* Gate Drive Configuration  State */
#define ELECGLBPRM_GATEDRVCFGST_CNT_U08                                         2U

/* Gate Drive Offstate Check Register Write 1 Column 1 */
#define ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08             0U

/* Gate Drive Offstate Check Register Write 2 Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08             1U

/* Gate Drive Offstate Check Digital Pin Verify Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08         2U

/* Gate Drive Offstate Check Status Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08             3U

/* Gate Drive Offstate Check Diagnostic 1 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08           4U

/* Gate Drive Offstate Check Diagnostic 2 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08           5U

/* Gate Drive Offstate Check Verify Result 0 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08           6U

/* Gate Drive Offstate Check Verify Result 1 Register Column */
#define ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08           7U

/* OffState Verification Size */
#define ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08                          19U

/* Gate Drive OffState Verify State */
#define ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08                           1U

/* Gate Drive Operate Fault Monitor State */
#define ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08                         3U

/* Motor Control ISR Interrupt source as DMA */
#define ELECGLBPRM_MOTCTRLINTRPTTRIGCFGA_CNT_U08                        0U

/* Motor Control ISR Interrupt source as TSG31 Peak */
#define ELECGLBPRM_MOTCTRLINTRPTTRIGCFGB_CNT_U08                        1U

/* Handwheel Torque Maximum Range */
#define ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32                      ((float32)10.0F)

/* Handwheel Torque Minimum Range */
#define ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32                      ((float32)-10.0F)

/* Handwheel Torque SENT Buffer Size */
#define ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08                              ((uint8)4U)

/* SENT Communication Status Clear Register */
#define ELECGLBPRM_SENTCOMSTSCLR_CNT_U32                                ((uint32)0x07FEU)

/* Sent Communication Status Error Mask */
#define ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32                    ((uint32)0xFEU)

/* Sent Communication Status FRS Mask */
#define ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32                    ((uint32)0x1U)

/* Sent Communication Status NRS Mask */
#define ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32                    ((uint32)0x80U)

/* Sent Communication Status Slow Mask */
#define ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32                   ((uint32)0x700U)

/* Sent Fast Receive Handwheel Angle Data Mask */
#define ELECGLBPRM_SENTFASTRXHWAGDATAMASK_CNT_U32       ((uint32)0xFFF0U)

/* Sent Fast Receive Handwheel Angle Sensor Identifier Mask */
#define ELECGLBPRM_SENTFASTRXHWAGSNSRIDMASK_CNT_U32     ((uint32)0xFU)

/* Sent Fast Receive Data Mask */
#define ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32                  ((uint32)0xFFFU)

/* Sent Fast Receive FCCN Mask */
#define ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32                  ((uint32)0x30000000U)

/* Sent Fast Receive SND Mask */
#define ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32                    ((uint32)0x80000000U)

/* Sent Slow Receive Data Identifier Mask */
#define ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32                 ((uint32)0xF00U)

/* Sent Slow Receive Data Mask */
#define ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32                   ((uint32)0xFFU)

/* Handwheel Angle Latch Fault parameter Bit */
#define ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08                  ((uint8)128U)

/* Gate Drive Offstate Check Data Array */
extern CONST(uint16, ElecGlbPrm_CONST)  ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[20][8];


#endif
