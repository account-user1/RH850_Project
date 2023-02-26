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
extern VAR(float32, AUTOMATIC) MotAg5Meas_Ip_MotAg5Cos;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Ip_MotAg5CosAdcFaild;
extern VAR(u0p16, AUTOMATIC) MotAg5Meas_Ip_MotAg5RawMecl;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Ip_MotAg5Sin;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Ip_MotAg5SinAdcFaild;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Ip_MotVelMrf;

/* Outputs */
extern VAR(float32, AUTOMATIC) MotAg5Meas_Op_MotAg5CosRtAmpRecpr;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Op_MotAg5CosRtOffs;
extern VAR(SigQlfr1, AUTOMATIC) MotAg5Meas_Op_MotAg5MeclQlfr;
extern VAR(uint8, AUTOMATIC) MotAg5Meas_Op_MotAg5MeclRollgCntr;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Op_MotAg5SinRtAmpRecpr;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Op_MotAg5SinRtOffs;

/* Calibrations */
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasAmpSqdMaxThd;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasAmpSqdMinThd;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasLpFilFrq;
extern CONST(u0p16, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasOffs;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasRtAmpRecprLim;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasRtFilEnaThd;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasRtMotVelFilEnaThd;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasRtOffsLim;
extern CONST(float32, AUTOMATIC) MotAg5Meas_Cal_MotAg5MeasRtToNomRatLim;

/* PIMs */
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5EolPrm;
extern VAR(MotAgStVariRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5StVari;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Pim_dMotAg5MeasAmpVal;
extern VAR(FilLpRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5CosMaxLpFil;
extern VAR(FilLpRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5CosMinLpFil;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Pim_MotAg5NvmFltEna;
extern VAR(uint8, AUTOMATIC) MotAg5Meas_Pim_MotAg5PrevRollgCntr;
extern VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5RtPrm;
extern VAR(FilLpRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5SinMaxLpFil;
extern VAR(FilLpRec1, AUTOMATIC) MotAg5Meas_Pim_MotAg5SinMinLpFil;
extern VAR(u0p16, AUTOMATIC) MotAg5Meas_Pim_PrevMotAg5Mecl;

/* IRVs */
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Irv_MotAg5PrtclOk;
extern VAR(MotAgRtPrmRec1, AUTOMATIC) MotAg5Meas_Irv_MotAg5RtVari[1];

/* Arguments and Returns */
extern VAR(uint32, AUTOMATIC) MotAg5Meas_Srv_CnvSnpshtData_f32_SnpshtDataCnvd;
extern VAR(float32, AUTOMATIC) MotAg5Meas_Srv_CnvSnpshtData_f32_SnpshtData;
extern VAR(uint32, AUTOMATIC) MotAg5Meas_Srv_CnvSnpshtData_logl_SnpshtDataCnvd;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Srv_CnvSnpshtData_logl_SnpshtData;
extern VAR(NtcNr1, AUTOMATIC) MotAg5Meas_Srv_GetNtcQlfrSts_NtcNr;
extern VAR(SigQlfr1, AUTOMATIC) MotAg5Meas_Srv_GetNtcQlfrSts_NtcQlfr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_GetNtcQlfrSts_Return;
extern VAR(uint8, AUTOMATIC) MotAg5Meas_Srv_MotAg5EolPrm_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_MotAg5EolPrm_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Srv_MotAg5EolPrm_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_MotAg5EolPrm_SetRamBlockStatus_Return;
extern VAR(uint8, AUTOMATIC) MotAg5Meas_Srv_MotAg5StVari_GetErrorStatus_RequestResultPtr;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_MotAg5StVari_GetErrorStatus_Return;
extern VAR(boolean, AUTOMATIC) MotAg5Meas_Srv_MotAg5StVari_SetRamBlockStatus_BlockChanged;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_MotAg5StVari_SetRamBlockStatus_Return;
extern VAR(NtcNr1, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcNr;
extern VAR(uint8, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcStInfo;
extern VAR(NtcSts1, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_NtcSts;
extern VAR(uint16, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_DebStep;
extern VAR(uint32, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData0;
extern VAR(uint32, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData1;
extern VAR(uint32, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_SpclSnpshtData2;
extern VAR(Std_ReturnType, AUTOMATIC) MotAg5Meas_Srv_SetNtcStsAndSnpshtData_Return;
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg5Meas_Cli_MotAg5EolPrmRead_MotAg5EolPrmData;
extern VAR(MotAgEolPrmRec1, AUTOMATIC) MotAg5Meas_Cli_MotAg5EolPrmWr_MotAg5EolPrmData;


/*** Input Stubs ***/

#ifdef Rte_Read_MotAg5Cos_Val
# undef Rte_Read_MotAg5Cos_Val
#endif
#define Rte_Read_MotAg5Cos_Val(data) (*(data) = MotAg5Meas_Ip_MotAg5Cos)

#ifdef Rte_Read_MotAg5CosAdcFaild_Logl
# undef Rte_Read_MotAg5CosAdcFaild_Logl
#endif
#define Rte_Read_MotAg5CosAdcFaild_Logl(data) (*(data) = MotAg5Meas_Ip_MotAg5CosAdcFaild)

#ifdef Rte_Read_MotAg5RawMecl_Val
# undef Rte_Read_MotAg5RawMecl_Val
#endif
#define Rte_Read_MotAg5RawMecl_Val(data) (*(data) = MotAg5Meas_Ip_MotAg5RawMecl)

#ifdef Rte_Read_MotAg5Sin_Val
# undef Rte_Read_MotAg5Sin_Val
#endif
#define Rte_Read_MotAg5Sin_Val(data) (*(data) = MotAg5Meas_Ip_MotAg5Sin)

#ifdef Rte_Read_MotAg5SinAdcFaild_Logl
# undef Rte_Read_MotAg5SinAdcFaild_Logl
#endif
#define Rte_Read_MotAg5SinAdcFaild_Logl(data) (*(data) = MotAg5Meas_Ip_MotAg5SinAdcFaild)

#ifdef Rte_Read_MotVelMrf_Val
# undef Rte_Read_MotVelMrf_Val
#endif
#define Rte_Read_MotVelMrf_Val(data) (*(data) = MotAg5Meas_Ip_MotVelMrf)


/*** Output Stubs ***/

#ifdef Rte_Write_MotAg5CosRtAmpRecpr_Val
# undef Rte_Write_MotAg5CosRtAmpRecpr_Val
#endif
#define Rte_Write_MotAg5CosRtAmpRecpr_Val(data) (MotAg5Meas_Op_MotAg5CosRtAmpRecpr = (data))

#ifdef Rte_Write_MotAg5CosRtOffs_Val
# undef Rte_Write_MotAg5CosRtOffs_Val
#endif
#define Rte_Write_MotAg5CosRtOffs_Val(data) (MotAg5Meas_Op_MotAg5CosRtOffs = (data))

#ifdef Rte_Write_MotAg5MeclQlfr_Val
# undef Rte_Write_MotAg5MeclQlfr_Val
#endif
#define Rte_Write_MotAg5MeclQlfr_Val(data) (MotAg5Meas_Op_MotAg5MeclQlfr = (data))

#ifdef Rte_Write_MotAg5MeclRollgCntr_Val
# undef Rte_Write_MotAg5MeclRollgCntr_Val
#endif
#define Rte_Write_MotAg5MeclRollgCntr_Val(data) (MotAg5Meas_Op_MotAg5MeclRollgCntr = (data))

#ifdef Rte_Write_MotAg5SinRtAmpRecpr_Val
# undef Rte_Write_MotAg5SinRtAmpRecpr_Val
#endif
#define Rte_Write_MotAg5SinRtAmpRecpr_Val(data) (MotAg5Meas_Op_MotAg5SinRtAmpRecpr = (data))

#ifdef Rte_Write_MotAg5SinRtOffs_Val
# undef Rte_Write_MotAg5SinRtOffs_Val
#endif
#define Rte_Write_MotAg5SinRtOffs_Val(data) (MotAg5Meas_Op_MotAg5SinRtOffs = (data))


/*** Calibration Stubs ***/

#ifdef Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val
# undef Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val
#endif
#define Rte_Prm_MotAg5MeasAmpSqdMaxThd_Val() (MotAg5Meas_Cal_MotAg5MeasAmpSqdMaxThd)

#ifdef Rte_Prm_MotAg5MeasAmpSqdMinThd_Val
# undef Rte_Prm_MotAg5MeasAmpSqdMinThd_Val
#endif
#define Rte_Prm_MotAg5MeasAmpSqdMinThd_Val() (MotAg5Meas_Cal_MotAg5MeasAmpSqdMinThd)

#ifdef Rte_Prm_MotAg5MeasLpFilFrq_Val
# undef Rte_Prm_MotAg5MeasLpFilFrq_Val
#endif
#define Rte_Prm_MotAg5MeasLpFilFrq_Val() (MotAg5Meas_Cal_MotAg5MeasLpFilFrq)

#ifdef Rte_Prm_MotAg5MeasOffs_Val
# undef Rte_Prm_MotAg5MeasOffs_Val
#endif
#define Rte_Prm_MotAg5MeasOffs_Val() (MotAg5Meas_Cal_MotAg5MeasOffs)

#ifdef Rte_Prm_MotAg5MeasRtAmpRecprLim_Val
# undef Rte_Prm_MotAg5MeasRtAmpRecprLim_Val
#endif
#define Rte_Prm_MotAg5MeasRtAmpRecprLim_Val() (MotAg5Meas_Cal_MotAg5MeasRtAmpRecprLim)

#ifdef Rte_Prm_MotAg5MeasRtFilEnaThd_Val
# undef Rte_Prm_MotAg5MeasRtFilEnaThd_Val
#endif
#define Rte_Prm_MotAg5MeasRtFilEnaThd_Val() (MotAg5Meas_Cal_MotAg5MeasRtFilEnaThd)

#ifdef Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val
# undef Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val
#endif
#define Rte_Prm_MotAg5MeasRtMotVelFilEnaThd_Val() (MotAg5Meas_Cal_MotAg5MeasRtMotVelFilEnaThd)

#ifdef Rte_Prm_MotAg5MeasRtOffsLim_Val
# undef Rte_Prm_MotAg5MeasRtOffsLim_Val
#endif
#define Rte_Prm_MotAg5MeasRtOffsLim_Val() (MotAg5Meas_Cal_MotAg5MeasRtOffsLim)

#ifdef Rte_Prm_MotAg5MeasRtToNomRatLim_Val
# undef Rte_Prm_MotAg5MeasRtToNomRatLim_Val
#endif
#define Rte_Prm_MotAg5MeasRtToNomRatLim_Val() (MotAg5Meas_Cal_MotAg5MeasRtToNomRatLim)


/*** PIM Stubs ***/

#ifdef Rte_Pim_MotAg5EolPrm
# undef Rte_Pim_MotAg5EolPrm
#endif
#define Rte_Pim_MotAg5EolPrm() (&MotAg5Meas_Pim_MotAg5EolPrm)

#ifdef Rte_Pim_MotAg5StVari
# undef Rte_Pim_MotAg5StVari
#endif
#define Rte_Pim_MotAg5StVari() (&MotAg5Meas_Pim_MotAg5StVari)

#ifdef Rte_Pim_dMotAg5MeasAmpVal
# undef Rte_Pim_dMotAg5MeasAmpVal
#endif
#define Rte_Pim_dMotAg5MeasAmpVal() (&MotAg5Meas_Pim_dMotAg5MeasAmpVal)

#ifdef Rte_Pim_MotAg5CosMaxLpFil
# undef Rte_Pim_MotAg5CosMaxLpFil
#endif
#define Rte_Pim_MotAg5CosMaxLpFil() (&MotAg5Meas_Pim_MotAg5CosMaxLpFil)

#ifdef Rte_Pim_MotAg5CosMinLpFil
# undef Rte_Pim_MotAg5CosMinLpFil
#endif
#define Rte_Pim_MotAg5CosMinLpFil() (&MotAg5Meas_Pim_MotAg5CosMinLpFil)

#ifdef Rte_Pim_MotAg5NvmFltEna
# undef Rte_Pim_MotAg5NvmFltEna
#endif
#define Rte_Pim_MotAg5NvmFltEna() (&MotAg5Meas_Pim_MotAg5NvmFltEna)

#ifdef Rte_Pim_MotAg5PrevRollgCntr
# undef Rte_Pim_MotAg5PrevRollgCntr
#endif
#define Rte_Pim_MotAg5PrevRollgCntr() (&MotAg5Meas_Pim_MotAg5PrevRollgCntr)

#ifdef Rte_Pim_MotAg5RtPrm
# undef Rte_Pim_MotAg5RtPrm
#endif
#define Rte_Pim_MotAg5RtPrm() (&MotAg5Meas_Pim_MotAg5RtPrm)

#ifdef Rte_Pim_MotAg5SinMaxLpFil
# undef Rte_Pim_MotAg5SinMaxLpFil
#endif
#define Rte_Pim_MotAg5SinMaxLpFil() (&MotAg5Meas_Pim_MotAg5SinMaxLpFil)

#ifdef Rte_Pim_MotAg5SinMinLpFil
# undef Rte_Pim_MotAg5SinMinLpFil
#endif
#define Rte_Pim_MotAg5SinMinLpFil() (&MotAg5Meas_Pim_MotAg5SinMinLpFil)

#ifdef Rte_Pim_PrevMotAg5Mecl
# undef Rte_Pim_PrevMotAg5Mecl
#endif
#define Rte_Pim_PrevMotAg5Mecl() (&MotAg5Meas_Pim_PrevMotAg5Mecl)


/*** IRV Stubs ***/

#ifdef Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk
# undef Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk
#endif
#define Rte_IrvRead_MotAg5MeasPer3_MotAg5PrtclOk() (MotAg5Meas_Irv_MotAg5PrtclOk)

#ifdef Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk
# undef Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk
#endif
#define Rte_IrvWrite_MotAg5MeasPer1_MotAg5PrtclOk(data) (MotAg5Meas_Irv_MotAg5PrtclOk = (data))

#ifdef Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari
# undef Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari
#endif
#define Rte_IrvRead_MotAg5MeasPer1_MotAg5RtVari(ptr) Rte_Stub_MemCpy((void *)(ptr), (const void *)MotAg5Meas_Irv_MotAg5RtVari, (uint16)(sizeof(MotAgRtPrmRec1) * 1UL))

#ifdef Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari
# undef Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari
#endif
#define Rte_IrvWrite_MotAg5MeasPer3_MotAg5RtVari(ptr) Rte_Stub_MemCpy((void *)MotAg5Meas_Irv_MotAg5RtVari, (const void *)(ptr), (uint16)(sizeof(MotAgRtPrmRec1) * 1UL))


/*** Client Stub ***/

extern FUNC(void, AUTOMATIC) Rte_Stub(void);


#endif
