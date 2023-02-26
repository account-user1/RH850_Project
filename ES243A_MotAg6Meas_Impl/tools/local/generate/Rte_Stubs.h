/******************************************************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name:   Rte_Stubs.h
* Module Description: Stubs header for Polyspace analysis.  Generated from TL109A_SwcSuprt.
* Project:            CBD
* Author:             Owen Tosh
******************************************************************************************************************/


#ifndef RTE_STUBS_H
#define RTE_STUBS_H


/*** Extern Statements ***/

extern FUNC(void, RTE_CODE) Rte_Stub_MemCpy(void * destination, const void * source, uint16 length);

/* Inputs */
extern VAR(float32, AUTOMATIC) MotAg6Meas_Ip_MotAg6Cos;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Ip_MotAg6CosAdcFaild;
extern VAR(u0p16, AUTOMATIC) MotAg6Meas_Ip_MotAg6RawMecl;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Ip_MotAg6Sin;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Ip_MotAg6SinAdcFaild;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Ip_MotVelMrf;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotAg6Meas_Op_MotAg6CosRtAmpRecpr;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Op_MotAg6CosRtOffs;
extern VAR(SigQlfr1, AUTOMATIC) MotAg6Meas_Op_MotAg6MeclQlfr;
extern VAR(uint8, AUTOMATIC) MotAg6Meas_Op_MotAg6MeclRollgCntr;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Op_MotAg6SinRtAmpRecpr;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Op_MotAg6SinRtOffs;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasAmpSqdMaxThd;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasAmpSqdMinThd;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasLpFilFrq;
extern CONST(u0p16, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasOffs;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasRtAmpRecprLim;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasRtFilEnaThd;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasRtMotVelFilEnaThd;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasRtOffsLim;
extern CONST(float32, AUTOMATIC) MotAg6Meas_Cal_MotAg6MeasRtToNomRatLim;

/* PIMs */
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6EolPrm;
extern VAR(MotAgStVariRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6StVari;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Pim_dMotAg6MeasAmpVal;
extern VAR(FilLpRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6CosMaxLpFil;
extern VAR(FilLpRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6CosMinLpFil;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Pim_MotAg6NvmFltEna;
extern VAR(uint8, AUTOMATIC) MotAg6Meas_Pim_MotAg6PrevRollgCntr;
extern VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6RtPrm;
extern VAR(FilLpRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6SinMaxLpFil;
extern VAR(FilLpRec1, AUTOMATIC) MotAg6Meas_Pim_MotAg6SinMinLpFil;
extern VAR(u0p16, AUTOMATIC) MotAg6Meas_Pim_PrevMotAg6Mecl;

/* IRVs */
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Irv_MotAg6PrtclOk;
extern VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg6Meas_Irv_MotAg6RtVari[1];

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) MotAg6Meas_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
extern VAR(float32, AUTOMATIC) MotAg6Meas_Srv_CnvSnpshtData_f32_SnpshtData;
extern VAR(uint32, AUTOMATIC) MotAg6Meas_Srv_CnvSnpshtData_logl_SnpshtDataCnvd;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Srv_CnvSnpshtData_logl_SnpshtData;
extern VAR(NtcNr1, AUTOMATIC) MotAg6Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) MotAg6Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint8, AUTOMATIC) MotAg6Meas_Srv_MotAg6EolPrm_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_MotAg6EolPrm_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Srv_MotAg6EolPrm_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_MotAg6EolPrm_SetRamBlockStatus_Return;
extern VAR(uint8, AUTOMATIC) MotAg6Meas_Srv_MotAg6StVari_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_MotAg6StVari_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) MotAg6Meas_Srv_MotAg6StVari_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_MotAg6StVari_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg6Meas_Srv_SetNtcStsAndSnpshtData_Return;
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg6Meas_Cli_MotAg6EolPrmRead_MotAg6EolPrmData;
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg6Meas_Cli_MotAg6EolPrmWr_MotAg6EolPrmData;


/*** Input Stubs ***/

#ifdef Rte_Read_MotAg6Cos_Val
# undef Rte_Read_MotAg6Cos_Val
#endif
#define Rte_Read_MotAg6Cos_Val(data) (*(data) = MotAg6Meas_Ip_MotAg6Cos)

#ifdef Rte_Read_MotAg6CosAdcFaild_Logl
# undef Rte_Read_MotAg6CosAdcFaild_Logl
#endif
#define Rte_Read_MotAg6CosAdcFaild_Logl(data) (*(data) = MotAg6Meas_Ip_MotAg6CosAdcFaild)

#ifdef Rte_Read_MotAg6RawMecl_Val
# undef Rte_Read_MotAg6RawMecl_Val
#endif
#define Rte_Read_MotAg6RawMecl_Val(data) (*(data) = MotAg6Meas_Ip_MotAg6RawMecl)

#ifdef Rte_Read_MotAg6Sin_Val
# undef Rte_Read_MotAg6Sin_Val
#endif
#define Rte_Read_MotAg6Sin_Val(data) (*(data) = MotAg6Meas_Ip_MotAg6Sin)

#ifdef Rte_Read_MotAg6SinAdcFaild_Logl
# undef Rte_Read_MotAg6SinAdcFaild_Logl
#endif
#define Rte_Read_MotAg6SinAdcFaild_Logl(data) (*(data) = MotAg6Meas_Ip_MotAg6SinAdcFaild)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = MotAg6Meas_Ip_MotVelMrf)


/*** Output Stubs ***/

#ifdef Rte_Write_MotAg6CosRtAmpRecpr_Val
# undef Rte_Write_MotAg6CosRtAmpRecpr_Val
#endif
#define Rte_Write_MotAg6CosRtAmpRecpr_Val(data) (MotAg6Meas_Op_MotAg6CosRtAmpRecpr = (data))

#ifdef Rte_Write_MotAg6CosRtOffs_Val
# undef Rte_Write_MotAg6CosRtOffs_Val
#endif
#define Rte_Write_MotAg6CosRtOffs_Val(data) (MotAg6Meas_Op_MotAg6CosRtOffs = (data))

#ifdef Rte_Write_MotAg6MeclQlfr_Val
# undef Rte_Write_MotAg6MeclQlfr_Val
#endif
#define Rte_Write_MotAg6MeclQlfr_Val(data) (MotAg6Meas_Op_MotAg6MeclQlfr = (data))

#ifdef Rte_Write_MotAg6MeclRollgCntr_Val
# undef Rte_Write_MotAg6MeclRollgCntr_Val
#endif
#define Rte_Write_MotAg6MeclRollgCntr_Val(data) (MotAg6Meas_Op_MotAg6MeclRollgCntr = (data))

#ifdef Rte_Write_MotAg6SinRtAmpRecpr_Val
# undef Rte_Write_MotAg6SinRtAmpRecpr_Val
#endif
#define Rte_Write_MotAg6SinRtAmpRecpr_Val(data) (MotAg6Meas_Op_MotAg6SinRtAmpRecpr = (data))

#ifdef Rte_Write_MotAg6SinRtOffs_Val
# undef Rte_Write_MotAg6SinRtOffs_Val
#endif
#define Rte_Write_MotAg6SinRtOffs_Val(data) (MotAg6Meas_Op_MotAg6SinRtOffs = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotAg6MeasAmpSqdMaxThd_Val
# undef Rte_Prm_MotAg6MeasAmpSqdMaxThd_Val
#endif
#define Rte_Prm_MotAg6MeasAmpSqdMaxThd_Val() (MotAg6Meas_Cal_MotAg6MeasAmpSqdMaxThd)

#ifdef Rte_Prm_MotAg6MeasAmpSqdMinThd_Val
# undef Rte_Prm_MotAg6MeasAmpSqdMinThd_Val
#endif
#define Rte_Prm_MotAg6MeasAmpSqdMinThd_Val() (MotAg6Meas_Cal_MotAg6MeasAmpSqdMinThd)

#ifdef Rte_Prm_MotAg6MeasLpFilFrq_Val
# undef Rte_Prm_MotAg6MeasLpFilFrq_Val
#endif
#define Rte_Prm_MotAg6MeasLpFilFrq_Val() (MotAg6Meas_Cal_MotAg6MeasLpFilFrq)

#ifdef Rte_Prm_MotAg6MeasOffs_Val
# undef Rte_Prm_MotAg6MeasOffs_Val
#endif
#define Rte_Prm_MotAg6MeasOffs_Val() (MotAg6Meas_Cal_MotAg6MeasOffs)

#ifdef Rte_Prm_MotAg6MeasRtAmpRecprLim_Val
# undef Rte_Prm_MotAg6MeasRtAmpRecprLim_Val
#endif
#define Rte_Prm_MotAg6MeasRtAmpRecprLim_Val() (MotAg6Meas_Cal_MotAg6MeasRtAmpRecprLim)

#ifdef Rte_Prm_MotAg6MeasRtFilEnaThd_Val
# undef Rte_Prm_MotAg6MeasRtFilEnaThd_Val
#endif
#define Rte_Prm_MotAg6MeasRtFilEnaThd_Val() (MotAg6Meas_Cal_MotAg6MeasRtFilEnaThd)

#ifdef Rte_Prm_MotAg6MeasRtMotVelFilEnaThd_Val
# undef Rte_Prm_MotAg6MeasRtMotVelFilEnaThd_Val
#endif
#define Rte_Prm_MotAg6MeasRtMotVelFilEnaThd_Val() (MotAg6Meas_Cal_MotAg6MeasRtMotVelFilEnaThd)

#ifdef Rte_Prm_MotAg6MeasRtOffsLim_Val
# undef Rte_Prm_MotAg6MeasRtOffsLim_Val
#endif
#define Rte_Prm_MotAg6MeasRtOffsLim_Val() (MotAg6Meas_Cal_MotAg6MeasRtOffsLim)

#ifdef Rte_Prm_MotAg6MeasRtToNomRatLim_Val
# undef Rte_Prm_MotAg6MeasRtToNomRatLim_Val
#endif
#define Rte_Prm_MotAg6MeasRtToNomRatLim_Val() (MotAg6Meas_Cal_MotAg6MeasRtToNomRatLim)


/*** PIM Stubs ***/

#ifdef Rte_Pim_MotAg6EolPrm
# undef Rte_Pim_MotAg6EolPrm
#endif
#define Rte_Pim_MotAg6EolPrm() (&MotAg6Meas_Pim_MotAg6EolPrm)

#ifdef Rte_Pim_MotAg6StVari
# undef Rte_Pim_MotAg6StVari
#endif
#define Rte_Pim_MotAg6StVari() (&MotAg6Meas_Pim_MotAg6StVari)

#ifdef Rte_Pim_dMotAg6MeasAmpVal
# undef Rte_Pim_dMotAg6MeasAmpVal
#endif
#define Rte_Pim_dMotAg6MeasAmpVal() (&MotAg6Meas_Pim_dMotAg6MeasAmpVal)

#ifdef Rte_Pim_MotAg6CosMaxLpFil
# undef Rte_Pim_MotAg6CosMaxLpFil
#endif
#define Rte_Pim_MotAg6CosMaxLpFil() (&MotAg6Meas_Pim_MotAg6CosMaxLpFil)

#ifdef Rte_Pim_MotAg6CosMinLpFil
# undef Rte_Pim_MotAg6CosMinLpFil
#endif
#define Rte_Pim_MotAg6CosMinLpFil() (&MotAg6Meas_Pim_MotAg6CosMinLpFil)

#ifdef Rte_Pim_MotAg6NvmFltEna
# undef Rte_Pim_MotAg6NvmFltEna
#endif
#define Rte_Pim_MotAg6NvmFltEna() (&MotAg6Meas_Pim_MotAg6NvmFltEna)

#ifdef Rte_Pim_MotAg6PrevRollgCntr
# undef Rte_Pim_MotAg6PrevRollgCntr
#endif
#define Rte_Pim_MotAg6PrevRollgCntr() (&MotAg6Meas_Pim_MotAg6PrevRollgCntr)

#ifdef Rte_Pim_MotAg6RtPrm
# undef Rte_Pim_MotAg6RtPrm
#endif
#define Rte_Pim_MotAg6RtPrm() (&MotAg6Meas_Pim_MotAg6RtPrm)

#ifdef Rte_Pim_MotAg6SinMaxLpFil
# undef Rte_Pim_MotAg6SinMaxLpFil
#endif
#define Rte_Pim_MotAg6SinMaxLpFil() (&MotAg6Meas_Pim_MotAg6SinMaxLpFil)

#ifdef Rte_Pim_MotAg6SinMinLpFil
# undef Rte_Pim_MotAg6SinMinLpFil
#endif
#define Rte_Pim_MotAg6SinMinLpFil() (&MotAg6Meas_Pim_MotAg6SinMinLpFil)

#ifdef Rte_Pim_PrevMotAg6Mecl
# undef Rte_Pim_PrevMotAg6Mecl
#endif
#define Rte_Pim_PrevMotAg6Mecl() (&MotAg6Meas_Pim_PrevMotAg6Mecl)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_MotAg6MeasPer3_MotAg6PrtclOk
# undef Rte_IrvRead_MotAg6MeasPer3_MotAg6PrtclOk
#endif
#define Rte_IrvRead_MotAg6MeasPer3_MotAg6PrtclOk() (MotAg6Meas_Irv_MotAg6PrtclOk)

#ifdef Rte_IrvWrite_MotAg6MeasPer1_MotAg6PrtclOk
# undef Rte_IrvWrite_MotAg6MeasPer1_MotAg6PrtclOk
#endif
#define Rte_IrvWrite_MotAg6MeasPer1_MotAg6PrtclOk(data) (MotAg6Meas_Irv_MotAg6PrtclOk = (data))

#ifdef Rte_IrvRead_MotAg6MeasPer1_MotAg6RtVari
# undef Rte_IrvRead_MotAg6MeasPer1_MotAg6RtVari
#endif
#define Rte_IrvRead_MotAg6MeasPer1_MotAg6RtVari(ptr) Rte_Stub_MemCpy((void *)(ptr), (const void *)MotAg6Meas_Irv_MotAg6RtVari, (uint16)(sizeof(MotAgRtPrmRec1) * 1UL))

#ifdef Rte_IrvWrite_MotAg6MeasPer3_MotAg6RtVari
# undef Rte_IrvWrite_MotAg6MeasPer3_MotAg6RtVari
#endif
#define Rte_IrvWrite_MotAg6MeasPer3_MotAg6RtVari(ptr) Rte_Stub_MemCpy((void *)MotAg6Meas_Irv_MotAg6RtVari, (const void *)(ptr), (uint16)(sizeof(MotAgRtPrmRec1) * 1UL))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
