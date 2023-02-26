
#include "Std_Types.h"
#include "ElecGlbPrm.h"

/* Inverter Count */
static const uint8 IntrCnt = ELECGLBPRM_IVTRCNT_CNT_U08;

/* Maximum PWM Frequency */
static const uint32 PWMFrqMax = ELECGLBPRM_PWMFRQMAX_HZ_U32;

/* Minimum PWM Frequency */
static const uint32 PWMFrqMin = ELECGLBPRM_PWMFRQMIN_HZ_U32;

/* Maximum PWM Period */
static const uint32 PWMPerdMax = ELECGLBPRM_PWMPERDMAX_NANOSEC_U32;

/* Minimum PWM Period */
static const uint32 PWMPerdMin = ELECGLBPRM_PWMPERDMIN_NANOSEC_U32;

/* Motor Control ISR Period Times 2 */
static const float32 PWMPerdNomX2 = ELECGLBPRM_PWMPERDNOMX2_SEC_F32;

/* Nominal PWM Period */
static uint16 PWMPerdNom = ELECGLBPRM_PWMPERDNOM_MICROSEC_U7P9;

/* PWM Timer Unit Frequency */
static const uint32 PWMTmrFrq = ELECGLBPRM_PWMTMRFRQ_HZ_U32;

/* Inverse Motor Control Period */
static const uint32 PWMTmrperDivsCntperNanoSec = ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19;

/* StartUp State - Current Measurement WarmInit Initialization Complete */
static const uint8 StrtupStCurrMeasWrmIninTest = ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTCMPL_CNT_U08;

/* StartUp State - Current Measurement WarmInit Initialization Start */
static const uint8 StrtupStCurrMeasWrmininTestStrt = ELECGLBPRM_STRTUPSTCURRMEASWRMININTESTSTRT_CNT_U08;

/* StartUp State - Disable */
static const uint8 StrtupStDi = ELECGLBPRM_STRTUPSTDI_CNT_U08;

/* StartUp State - Flash Memory Initialization Start */
static const uint8 StrtupStFlsMemIninStrt = ELECGLBPRM_STRTUPSTFLSMEMININSTRT_CNT_U08;

/* StartUp State - Initial */
static const uint8 StrtupStInit = ELECGLBPRM_STRTUPSTINIT_CNT_U08;

/* StartUp State - Motor Driver Initialization Complete */
static const uint8 StrtupStMtrDrvrIninCmpl = ELECGLBPRM_STRTUPSTMTRDRVRININCMPL_CNT_U08;

/* StartUp State - Motor Driver Initialization Start */
static const uint8 StrtupStMtrDrvrIninStrt = ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08;

/* StartUp State - Power Disconnect A Complete */
static const uint8 StrtupStPwrDiscnctATestCmpl = ELECGLBPRM_STRTUPSTPWRDISCNCTATESTCMPL_CNT_U08;

/* StartUp State - Power Disconnect A Start */
static const uint8 StrtupStPwrDiscnctATestStrt = ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08;

/* StartUp State - Power Disconnect B Complete */
static const uint8 StrtupStPwrDiscnctBTestCmpl = ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTCMPL_CNT_U08;

/* StartUp State - Power Disconnect B Start */
static const uint8 StrtupStPwrDiscnctBTestStrt = ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08;

/* StartUp State - Run */
static const uint8 StrtupStRun = ELECGLBPRM_STRTUPSTRUN_CNT_U08;

/* StartUp State - Temporal Monitor Initialization Complete */
static const uint8 StrtupStTmplMonIninTestCmpl = ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08;

/* StartUp State - Temporal Monitor Initialization Start */
static const uint8 StrtupStTmplMonIninTestStrt = ELECGLBPRM_STRTUPSTTMPLMONININTESTSTRT_CNT_U08;

/* StartUp State - Warm Initialization Complete */
static const uint8 StrtupStWarmIninCmpl = ELECGLBPRM_STRTUPSTWARMININCMPL_CNT_U08;

/* Degrees per Revolution */
static const float32 DegPerRev = ELECGLBPRM_DEGPERREV_DEGPERREV_F32;

/* HandWheel Angle Center Offset */
static const float32 HwAgCentrOffs = ELECGLBPRM_HWAGCENTROFFS_HWDEG_F32;

/* Handwheel Angle Saturation Lower Limit */
static const float32 HwAgSatnLowrLim = ELECGLBPRM_HWAGSATNLOWRLIM_HWDEG_F32;

/* Handwheel Angle Saturation Upper Limit */
static const float32 HwAgSatnUpprLim = ELECGLBPRM_HWAGSATNUPPRLIM_HWDEG_F32;

/* Handwheel Angle Scale */
static const float32 HwAgSca = ELECGLBPRM_HWAGSCA_ULS_F32;

/* Handwheel Angle Spur Gear Ratio */
static const float32 HwAgSpurGearRat = ELECGLBPRM_HWAGSPURGEARRAT_ULS_F32;

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 0 */
static const float32 HwAgSpurToRingGearRatSnsr0 = ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR0_ULS_F32;

/* Handwheel Angle0 Spur to Ring Gear Ratio Sensor 1 */
static const float32 HwAgSpurToRingGearRatSnsr1 = ELECGLBPRM_HWAGSPURTORINGGEARRATSNSR1_ULS_F32;

/* Handwheel Torque Offset */
static const float32 HwTqOffs = ELECGLBPRM_HWTQOFFS_HWNWTMTR_F32;

/* Handwheel Torque Saturation Lower Limit */
static const float32 HwTqSatnLowrLim = ELECGLBPRM_HWTQSATNLOWRLIM_HWNWTMTR_F32;

/* Handwheel Torque Saturation Upper Limit */
static const float32 HwTqSatnUpprLim = ELECGLBPRM_HWTQSATNUPPRLIM_HWNWTMTR_F32;

/* Handwheel Torque Scale */
static const float32 HwTqSca = ELECGLBPRM_HWTQSCA_ULS_F32;

/* No Fault */
static const uint8 NoFlt = ELECGLBPRM_NOFLT_CNT_U08;

/* Offset Trim Not Performed */
static const uint8 OffsTrimNotPrfmd = ELECGLBPRM_OFFSTRIMNOTPRFMD_CNT_U08;

/* Protocol Fault */
static const uint8 PrtclFlt = ELECGLBPRM_PRTCLFLT_CNT_U08;

/* Revolutions per 360 Degrees */
static const float32 RevPer360Deg = ELECGLBPRM_REVPER360DEG_REVPERDEG_F32;

/* Skip Step Fault */
static const uint8 SkipStepFlt = ELECGLBPRM_SKIPSTEPFLT_CNT_U08;

/* Sensor Internal Fault */
static const uint8 SnsrIntFlt = ELECGLBPRM_SNSRINTFLT_CNT_U08;

/* Vernier Error Fault */
static const uint8 VrnrErrFlt = ELECGLBPRM_VRNRERRFLT_CNT_U08;

/* Handwheel Torque Measure Buffer Size */
static const uint8 HwTqBufSize = ELECGLBPRM_HWTQBUFSIZE_CNT_U08;

/* ADC Fault */
static const uint8 AdcFlt = ELECGLBPRM_ADCFLT_CNT_U08;

/* Offset Trim Not Performed */
static const uint8 OffsTrimNotPrfm = ELECGLBPRM_OFFSTRIMNOTPRFM_CNT_U08;

/* Sensor Scale Not Performed */
static const uint8 SnsrScanNotPrfm = ELECGLBPRM_SNSRSCANOTPRFM_CNT_U08;

/* Gate Drive Configuration  State Parameter Bit Starting Index */
static const uint8 GateDrvCfgStPrmBitStrtgIdx =  ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08;

/* Gate Drive Configuration  State */
static const uint8 GateDrvCfgSt =  ELECGLBPRM_GATEDRVCFGST_CNT_U08;

/* Gate Drive Offstate Check Register Write 1 Column 1 */
static const uint8 GateDrvOffstChkRegWr1Col =  ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08;

/* Gate Drive Offstate Check Register Write 2 Column */
static const uint8 GateDrvOffstChkRegWr2Col =  ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08;

/* Gate Drive Offstate Check Digital Pin Verify Column */
static const uint8 GateDrvOffStChkDigPinVrfyCol =  ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08;

/* Gate Drive Offstate Check Status Register Column */
static const uint8 GateDrvOffStChkStsRegCol =  ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08;

/* Gate Drive Offstate Check Diagnostic 1 Register Column */
static const uint8 GateDrvOffstChkDiag1RegCol =  ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08;

/* Gate Drive Offstate Check Diagnostic 2 Register Column */
static const uint8 GateDrvOffstChkDiag2RegCol =  ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08;

/* Gate Drive Offstate Check Verify Result 0 Register Column */
static const uint8 GateDrvOffstChkVrfyRes0Col =  ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08;

/* Gate Drive Offstate Check Verify Result 1 Register Column */
static const uint8 GateDrvOffstChkVrfyRes1Col =  ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08;

/* OffState Verification Size */
static const uint8 GateDrvOffStChkSize =  ELECGLBPRM_GATEDRVOFFSTCHKSIZE_CNT_U08;

/* Gate Drive OffState Verify State */
static const uint8 GateDrvOffStVrfySt =  ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08;

/* Gate Drive Operate Fault Monitor State */
static const uint8 GateDrvOperFltMonrSt =  ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;

/* Handwheel Torque Maximum Range */
static const float32 HwTqMaxLim = ELECGLBPRM_HWTQMAXLIM_HWNWTMTR_F32;

/* Handwheel Torque Minimum Range */
static const float32 HwTqMinLim = ELECGLBPRM_HWTQMINLIM_HWNWTMTR_F32;

/* Handwheel Torque SENT Buffer Size */
static const uint8 HwTqSentBufSize =ELECGLBPRM_HWTQSENTBUFSIZE_CNT_U08;

/* SENT Communication Status Clear Register */
static const uint32 SentComStsClr = ELECGLBPRM_SENTCOMSTSCLR_CNT_U32;

/* Sent Communication Status Error Mask */
static const uint32 SentComStsErrMask = ELECGLBPRM_SENTCOMSTSERRMASK_CNT_U32;

/* Sent Communication Status FRS Mask */
static const uint32 SentComStsFrsMask = ELECGLBPRM_SENTCOMSTSFRSMASK_CNT_U32;

/* Sent Communication Status NRS Mask */
static const uint32 SentComStsSnsnrMask = ELECGLBPRM_SENTCOMSTSNRSMASK_CNT_U32;

/* Sent Communication Status Slow Mask */
static const uint32 SentComStsSlowMask = ELECGLBPRM_SENTCOMSTSSLOWMASK_CNT_U32;

/* Sent Fast Receive Data Mask */
static const uint32 SentFastRxnDataMask = ELECGLBPRM_SENTFASTRXNDATAMASK_CNT_U32;

/* Sent Fast Receive FCCN Mask */
static const uint32 SentFastRxnFccnMask = ELECGLBPRM_SENTFASTRXNFCCNMASK_CNT_U32;

/* Sent Fast Receive SND Mask */
static const uint32 SentFastRxSndMask = ELECGLBPRM_SENTFASTRXSNDMASK_CNT_U32;

/* Sent Slow Receive Data Identifier Mask */
static const uint32 SentSlowRxDataIdMask = ELECGLBPRM_SENTSLOWRXDATAIDMASK_CNT_U32;

/* Sent Slow Receive Data Mask */
static const uint32 SentSlowRxDataMask = ELECGLBPRM_SENTSLOWRXDATAMASK_CNT_U32;

/* Handwheel Torque Sensor Tick Count */
static const uint8 HwtqSnsrTickCnt = ELECGLBPRM_HWTQSNSRTICKCNT_CNT_U08;

/* Handwheel Torque Sensor Tick Count */
static const boolean HwAgIfLtchEna = ELECGLBPRM_HWAGIFFLTLTCHENA_CNT_LGC;

/* Handwheel Angle Latch Fault parameter Bit */
static const uint8 HwAgIfLtchFltPrmBit = ELECGLBPRM_HWAGLTCHFLTPARAMBIT_CNT_U08;
