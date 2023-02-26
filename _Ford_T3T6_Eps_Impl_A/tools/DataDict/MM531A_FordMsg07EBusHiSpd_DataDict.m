%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 23-Mar-2018 15:41:57       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM531A = DataDict.FDD;
MM531A.Version = '3.0.X';
MM531A.LongName = 'Ford Message 07E Bus High Speed';
MM531A.ShoName  = 'FordMsg07EBusHiSpd';
MM531A.DesignASIL = 'B';
MM531A.Description = [...
  'Ford Message 07E Bus High Speed provides other vehicle modules with St' ...
  'eering Pinion Angle signals'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg07EBusHiSpdInit1 = DataDict.Runnable;
FordMsg07EBusHiSpdInit1.Context = 'Rte';
FordMsg07EBusHiSpdInit1.TimeStep = 0;
FordMsg07EBusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg07EBusHiSpdPer1 = DataDict.Runnable;
FordMsg07EBusHiSpdPer1.Context = 'Rte';
FordMsg07EBusHiSpdPer1.TimeStep = 0.01;
FordMsg07EBusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------

%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
CmpdSteerPinionAg = DataDict.IpSignal;
CmpdSteerPinionAg.LongName = 'Compensted Steering Pinion Angle';
CmpdSteerPinionAg.Description = [...
  'Compensted Steering Pinion Angle is received as input from EPS and pro' ...
  'cessed to CAN Bus'];
CmpdSteerPinionAg.DocUnits = 'HwDeg';
CmpdSteerPinionAg.EngDT = dt.float32;
CmpdSteerPinionAg.EngInit = 0;
CmpdSteerPinionAg.EngMin = -1600;
CmpdSteerPinionAg.EngMax = 1676.7;
CmpdSteerPinionAg.ReadIn = {'FordMsg07EBusHiSpdPer1'};
CmpdSteerPinionAg.ReadType = 'Rte';


CmpdSteerPinionAgQlyFac = DataDict.IpSignal;
CmpdSteerPinionAgQlyFac.LongName = 'Compensated Steering Pinion Angle Quality Factor';
CmpdSteerPinionAgQlyFac.Description = [...
  'Compensted Steering Pinion Angle Quality Factor is received as input f' ...
  'rom EPS and processed to CAN Bus'];
CmpdSteerPinionAgQlyFac.DocUnits = 'Cnt';
CmpdSteerPinionAgQlyFac.EngDT = enum.Ford_StePinCompAnEst_D_Qf;
CmpdSteerPinionAgQlyFac.EngInit = Ford_StePinCompAnEst_D_Qf.Cx1_No_Data_Exists;
CmpdSteerPinionAgQlyFac.EngMin = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
CmpdSteerPinionAgQlyFac.EngMax = Ford_StePinCompAnEst_D_Qf.Cx3_OK;
CmpdSteerPinionAgQlyFac.ReadIn = {'FordMsg07EBusHiSpdPer1'};
CmpdSteerPinionAgQlyFac.ReadType = 'Rte';


FordVehSteerPwrReq = DataDict.IpSignal;
FordVehSteerPwrReq.LongName = 'Ford Vehicle Steering Power Request';
FordVehSteerPwrReq.Description = [...
  'Ford Vehicle Steering Power Request is received as input from EPS and ' ...
  'processed to CAN Bus'];
FordVehSteerPwrReq.DocUnits = 'Cnt';
FordVehSteerPwrReq.EngDT = enum.Ford_StePw_B_Rq;
FordVehSteerPwrReq.EngInit = Ford_StePw_B_Rq.Cx0_No;
FordVehSteerPwrReq.EngMin = Ford_StePw_B_Rq.Cx0_No;
FordVehSteerPwrReq.EngMax = Ford_StePw_B_Rq.Cx1_Yes;
FordVehSteerPwrReq.ReadIn = {'FordMsg07EBusHiSpdPer1'};
FordVehSteerPwrReq.ReadType = 'Rte';


RelSteerPinionAg = DataDict.IpSignal;
RelSteerPinionAg.LongName = 'Relative Steering Pinion Angle';
RelSteerPinionAg.Description = [...
  'Relative Steering Pinion Angle is received as input from EPS and proce' ...
  'ssed to CAN Bus'];
RelSteerPinionAg.DocUnits = 'HwDeg';
RelSteerPinionAg.EngDT = dt.float32;
RelSteerPinionAg.EngInit = 3353.5;
RelSteerPinionAg.EngMin = -3200;
RelSteerPinionAg.EngMax = 3353.5;
RelSteerPinionAg.ReadIn = {'FordMsg07EBusHiSpdPer1'};
RelSteerPinionAg.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
Ford_StePinAn_No_Cnt = DataDict.OpSignal;
Ford_StePinAn_No_Cnt.LongName = 'Steering Pinion Angle Counter';
Ford_StePinAn_No_Cnt.Description = [...
  'This signal increments by 1 in every periodic cycle and set to zero on' ...
  'ce crosses 15.Customer datatype should be used. Datatype:Ford_StePinAn' ...
  '_No_Cnt with the range of 0 to 15.'];
Ford_StePinAn_No_Cnt.DocUnits = 'Cnt';
Ford_StePinAn_No_Cnt.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePinAn_No_Cnt.EngDT = dt.u08;
Ford_StePinAn_No_Cnt.EngInit = 0;
Ford_StePinAn_No_Cnt.EngMin = 0;
Ford_StePinAn_No_Cnt.EngMax = 15;
Ford_StePinAn_No_Cnt.TestTolerance = 0;
Ford_StePinAn_No_Cnt.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePinAn_No_Cnt.WriteType = 'Rte';


Ford_StePinAn_No_Cs = DataDict.OpSignal;
Ford_StePinAn_No_Cs.LongName = 'Steering Pinion Angle Checksum';
Ford_StePinAn_No_Cs.Description = [...
  'Calculated by using the least significant 8 bits of the sum of the lea' ...
  'st significant 8 bits of the Steering Pinion Relative Angle signal che' ...
  'cksum and the least significant 8 bits of the Steering Pinion Angle Co' ...
  'unter signal checksum.Customer datatype should be used. Datatype:Ford_' ...
  'StePinAn_No_Cs with the range of 0 to 255.'];
Ford_StePinAn_No_Cs.DocUnits = 'Cnt';
Ford_StePinAn_No_Cs.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePinAn_No_Cs.EngDT = dt.u08;
Ford_StePinAn_No_Cs.EngInit = 0;
Ford_StePinAn_No_Cs.EngMin = 0;
Ford_StePinAn_No_Cs.EngMax = 255;
Ford_StePinAn_No_Cs.TestTolerance = 0;
Ford_StePinAn_No_Cs.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePinAn_No_Cs.WriteType = 'Rte';


Ford_StePinCompAnEst_D_Qf1 = DataDict.OpSignal;
Ford_StePinCompAnEst_D_Qf1.LongName = 'Steering Pinion Compensated Quality Factor';
Ford_StePinCompAnEst_D_Qf1.Description = [...
  'Processed signal of input CmpdSteerPinionAgQlyFac.Customer datatype sh' ...
  'ould be used. Datatype:Ford_StePinCompAnEst_D_Qf.Elements are 0 - "Cx0' ...
  '_Faulty", 1 - "Cx1_No_Data_Exists", 2 -"Cx2_Degraded", 3 - "Cx3_OK"'];
Ford_StePinCompAnEst_D_Qf1.DocUnits = 'Cnt';
Ford_StePinCompAnEst_D_Qf1.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePinCompAnEst_D_Qf1.EngDT = enum.Ford_StePinCompAnEst_D_Qf;
Ford_StePinCompAnEst_D_Qf1.EngInit = Ford_StePinCompAnEst_D_Qf.Cx1_No_Data_Exists;
Ford_StePinCompAnEst_D_Qf1.EngMin = Ford_StePinCompAnEst_D_Qf.Cx0_Faulty;
Ford_StePinCompAnEst_D_Qf1.EngMax = Ford_StePinCompAnEst_D_Qf.Cx3_OK;
Ford_StePinCompAnEst_D_Qf1.TestTolerance = 0;
Ford_StePinCompAnEst_D_Qf1.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePinCompAnEst_D_Qf1.WriteType = 'Rte';


Ford_StePinComp_An_Est = DataDict.OpSignal;
Ford_StePinComp_An_Est.LongName = 'Steering Pinion Compensated Angle';
Ford_StePinComp_An_Est.Description = [...
  'Processed signal of input Compensted Steering Pinion Angle.Customer da' ...
  'tatype should be used. Datatype: Ford_StePinComp_An_Est with the range' ...
  ' of 0 to 32767.'];
Ford_StePinComp_An_Est.DocUnits = 'Cnt';
Ford_StePinComp_An_Est.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePinComp_An_Est.EngDT = dt.u16;
Ford_StePinComp_An_Est.EngInit = 0;
Ford_StePinComp_An_Est.EngMin = 0;
Ford_StePinComp_An_Est.EngMax = 32767;
Ford_StePinComp_An_Est.TestTolerance = 0;
Ford_StePinComp_An_Est.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePinComp_An_Est.WriteType = 'Rte';


Ford_StePinRelInit_An_Sns = DataDict.OpSignal;
Ford_StePinRelInit_An_Sns.LongName = 'Steering Pinion Relative Angle';
Ford_StePinRelInit_An_Sns.Description = [...
  'Processed signal of input RelSteerPinionAg.Customer datatype should be' ...
  ' used. Datatype: Ford_StePinRelInit_An_Sns with range of 0 to 65535.'];
Ford_StePinRelInit_An_Sns.DocUnits = 'Cnt';
Ford_StePinRelInit_An_Sns.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePinRelInit_An_Sns.EngDT = dt.u16;
Ford_StePinRelInit_An_Sns.EngInit = 65535;
Ford_StePinRelInit_An_Sns.EngMin = 0;
Ford_StePinRelInit_An_Sns.EngMax = 65535;
Ford_StePinRelInit_An_Sns.TestTolerance = 0;
Ford_StePinRelInit_An_Sns.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePinRelInit_An_Sns.WriteType = 'Rte';


Ford_StePw_B_Rq1 = DataDict.OpSignal;
Ford_StePw_B_Rq1.LongName = 'Steering Power Request';
Ford_StePw_B_Rq1.Description = [...
  'Processed value of Steering Power Request.Customer datatype should be ' ...
  'used.Datatype: Ford_StePw_B_Rq. Elements are 0 - "Cx0_No", 1 - "Cx1_Ye' ...
  's" '];
Ford_StePw_B_Rq1.DocUnits = 'Cnt';
Ford_StePw_B_Rq1.SwcShoName = 'FordMsg07EBusHiSpd';
Ford_StePw_B_Rq1.EngDT = enum.Ford_StePw_B_Rq;
Ford_StePw_B_Rq1.EngInit = Ford_StePw_B_Rq.Cx0_No;
Ford_StePw_B_Rq1.EngMin = Ford_StePw_B_Rq.Cx0_No;
Ford_StePw_B_Rq1.EngMax = Ford_StePw_B_Rq.Cx1_Yes;
Ford_StePw_B_Rq1.TestTolerance = 0;
Ford_StePw_B_Rq1.WrittenIn = {'FordMsg07EBusHiSpdPer1'};
Ford_StePw_B_Rq1.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
SteerPinionAgCntrPrev = DataDict.PIM;
SteerPinionAgCntrPrev.LongName = 'Steering Pinion Angle Counter Previous';
SteerPinionAgCntrPrev.Description = [...
  'It is used to hold the previous value of Steering Pinion Angle Counter' ...
  ''];
SteerPinionAgCntrPrev.DocUnits = 'Cnt';
SteerPinionAgCntrPrev.EngDT = dt.u08;
SteerPinionAgCntrPrev.EngMin = 0;
SteerPinionAgCntrPrev.EngMax = 15;
SteerPinionAgCntrPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
CMPDPINIONAGOFFS_HWDEG_F32 = DataDict.Constant;
CMPDPINIONAGOFFS_HWDEG_F32.LongName = 'Compensated Steering Pinion Angle';
CMPDPINIONAGOFFS_HWDEG_F32.Description = [...
  'Constant value used for calculation of Steering Pinion Compensated Ang' ...
  'le'];
CMPDPINIONAGOFFS_HWDEG_F32.DocUnits = 'HwDeg';
CMPDPINIONAGOFFS_HWDEG_F32.EngDT = dt.float32;
CMPDPINIONAGOFFS_HWDEG_F32.EngVal = 1600;
CMPDPINIONAGOFFS_HWDEG_F32.Define = 'Local';


CMPDSTEERPINIONAGMAX_HWDEG_F32 = DataDict.Constant;
CMPDSTEERPINIONAGMAX_HWDEG_F32.LongName = 'Compensated Steering Pinion Angle Maximum';
CMPDSTEERPINIONAGMAX_HWDEG_F32.Description = [...
  'Maximum value of Compensated Steering Pinion Angle'];
CMPDSTEERPINIONAGMAX_HWDEG_F32.DocUnits = 'HwDeg';
CMPDSTEERPINIONAGMAX_HWDEG_F32.EngDT = dt.float32;
CMPDSTEERPINIONAGMAX_HWDEG_F32.EngVal = 1676.7;
CMPDSTEERPINIONAGMAX_HWDEG_F32.Define = 'Local';


CMPDSTEERPINIONAGMIN_HWDEG_F32 = DataDict.Constant;
CMPDSTEERPINIONAGMIN_HWDEG_F32.LongName = 'Compensated Steering Pinion Angle Minimum';
CMPDSTEERPINIONAGMIN_HWDEG_F32.Description = [...
  'Minimum value of Compensated Steering Pinion Angle'];
CMPDSTEERPINIONAGMIN_HWDEG_F32.DocUnits = 'HwDeg';
CMPDSTEERPINIONAGMIN_HWDEG_F32.EngDT = dt.float32;
CMPDSTEERPINIONAGMIN_HWDEG_F32.EngVal = -1600;
CMPDSTEERPINIONAGMIN_HWDEG_F32.Define = 'Local';


MASKTOCALCCHKS_CNT_U16 = DataDict.Constant;
MASKTOCALCCHKS_CNT_U16.LongName = 'Mask To Calculate Checksum';
MASKTOCALCCHKS_CNT_U16.Description = [...
  'Used to extract least significant 8 bits of the Steering Pinion Relati' ...
  've Angle signal'];
MASKTOCALCCHKS_CNT_U16.DocUnits = 'Cnt';
MASKTOCALCCHKS_CNT_U16.EngDT = dt.u16;
MASKTOCALCCHKS_CNT_U16.EngVal = 255;
MASKTOCALCCHKS_CNT_U16.Define = 'Local';


PINIONAGSCAG_HWDEGPERCNT_F32 = DataDict.Constant;
PINIONAGSCAG_HWDEGPERCNT_F32.LongName = 'Pinion Angle Scaling';
PINIONAGSCAG_HWDEGPERCNT_F32.Description = 'Scale factor of Pinion Angle';
PINIONAGSCAG_HWDEGPERCNT_F32.DocUnits = 'HwDegPerCnt';
PINIONAGSCAG_HWDEGPERCNT_F32.EngDT = dt.float32;
PINIONAGSCAG_HWDEGPERCNT_F32.EngVal = 0.1;
PINIONAGSCAG_HWDEGPERCNT_F32.Define = 'Local';


RELSTEERPINIONAGMAX_HWDEG_F32 = DataDict.Constant;
RELSTEERPINIONAGMAX_HWDEG_F32.LongName = 'Relative Steering Pinion Angle Minimum';
RELSTEERPINIONAGMAX_HWDEG_F32.Description = [...
  'Minimum value of Relative Steering Pinion Angle'];
RELSTEERPINIONAGMAX_HWDEG_F32.DocUnits = 'HwDeg';
RELSTEERPINIONAGMAX_HWDEG_F32.EngDT = dt.float32;
RELSTEERPINIONAGMAX_HWDEG_F32.EngVal = 3353.5;
RELSTEERPINIONAGMAX_HWDEG_F32.Define = 'Local';


RELSTEERPINIONAGMIN_HWDEG_F32 = DataDict.Constant;
RELSTEERPINIONAGMIN_HWDEG_F32.LongName = 'Relative Steering Pinion Angle Minimum';
RELSTEERPINIONAGMIN_HWDEG_F32.Description = [...
  'Minimum value of Relative Steering Pinion Angle'];
RELSTEERPINIONAGMIN_HWDEG_F32.DocUnits = 'HwDeg';
RELSTEERPINIONAGMIN_HWDEG_F32.EngDT = dt.float32;
RELSTEERPINIONAGMIN_HWDEG_F32.EngVal = -3200;
RELSTEERPINIONAGMIN_HWDEG_F32.Define = 'Local';


RELSTEERPINIONAGOFFS_HWDEG_F32 = DataDict.Constant;
RELSTEERPINIONAGOFFS_HWDEG_F32.LongName = 'Relative Steering Pinion Angle Offset';
RELSTEERPINIONAGOFFS_HWDEG_F32.Description = [...
  'Offset value to get the scaled value'];
RELSTEERPINIONAGOFFS_HWDEG_F32.DocUnits = 'HwDeg';
RELSTEERPINIONAGOFFS_HWDEG_F32.EngDT = dt.float32;
RELSTEERPINIONAGOFFS_HWDEG_F32.EngVal = 3200;
RELSTEERPINIONAGOFFS_HWDEG_F32.Define = 'Local';


RISHIFT_CNT_U16 = DataDict.Constant;
RISHIFT_CNT_U16.LongName = 'Steering Pinion Relative Angle';
RISHIFT_CNT_U16.Description = [...
  'It is used get the 8 bits MSB of the 16 bit data'];
RISHIFT_CNT_U16.DocUnits = 'Cnt';
RISHIFT_CNT_U16.EngDT = dt.u16;
RISHIFT_CNT_U16.EngVal = 8;
RISHIFT_CNT_U16.Define = 'Local';


STEERPINIONAGCHKSMAX_CNT_U08 = DataDict.Constant;
STEERPINIONAGCHKSMAX_CNT_U08.LongName = 'Steering Pinion Angle Checksum Maximum';
STEERPINIONAGCHKSMAX_CNT_U08.Description = [...
  'Maximum value of Steering Pinion Angle Checksum'];
STEERPINIONAGCHKSMAX_CNT_U08.DocUnits = 'Cnt';
STEERPINIONAGCHKSMAX_CNT_U08.EngDT = dt.u08;
STEERPINIONAGCHKSMAX_CNT_U08.EngVal = 255;
STEERPINIONAGCHKSMAX_CNT_U08.Define = 'Local';


STEERPINIONAGCHKSMIN_CNT_U08 = DataDict.Constant;
STEERPINIONAGCHKSMIN_CNT_U08.LongName = 'Steering Pinion Angle Checksum Minimum';
STEERPINIONAGCHKSMIN_CNT_U08.Description = [...
  'Minimum value of Steering Pinion Angle Checksum'];
STEERPINIONAGCHKSMIN_CNT_U08.DocUnits = 'Cnt';
STEERPINIONAGCHKSMIN_CNT_U08.EngDT = dt.u08;
STEERPINIONAGCHKSMIN_CNT_U08.EngVal = 0;
STEERPINIONAGCHKSMIN_CNT_U08.Define = 'Local';


STEERPINIONAGCNTRMAX_CNT_U08 = DataDict.Constant;
STEERPINIONAGCNTRMAX_CNT_U08.LongName = 'Steering Pinion Angle Counter Maximum';
STEERPINIONAGCNTRMAX_CNT_U08.Description = [...
  'Maximum value of Steering Pinion Angle Counter'];
STEERPINIONAGCNTRMAX_CNT_U08.DocUnits = 'Cnt';
STEERPINIONAGCNTRMAX_CNT_U08.EngDT = dt.u08;
STEERPINIONAGCNTRMAX_CNT_U08.EngVal = 15;
STEERPINIONAGCNTRMAX_CNT_U08.Define = 'Local';


STEERPINIONAGCNTRMIN_CNT_U08 = DataDict.Constant;
STEERPINIONAGCNTRMIN_CNT_U08.LongName = 'Steering Pinion Angle Counter Minimum';
STEERPINIONAGCNTRMIN_CNT_U08.Description = [...
  'Minimum value of Steering Pinion Angle Counter'];
STEERPINIONAGCNTRMIN_CNT_U08.DocUnits = 'Cnt';
STEERPINIONAGCNTRMIN_CNT_U08.EngDT = dt.u08;
STEERPINIONAGCNTRMIN_CNT_U08.EngVal = 0;
STEERPINIONAGCNTRMIN_CNT_U08.Define = 'Local';


STEERPINIONCMPDAGMAX_CNT_U16 = DataDict.Constant;
STEERPINIONCMPDAGMAX_CNT_U16.LongName = 'Steering Pinion Compensated Angle Maximum';
STEERPINIONCMPDAGMAX_CNT_U16.Description = [...
  'Maximum value of Steering Pinion Compensated Angle'];
STEERPINIONCMPDAGMAX_CNT_U16.DocUnits = 'Cnt';
STEERPINIONCMPDAGMAX_CNT_U16.EngDT = dt.u16;
STEERPINIONCMPDAGMAX_CNT_U16.EngVal = 32767;
STEERPINIONCMPDAGMAX_CNT_U16.Define = 'Local';


STEERPINIONCMPDAGMIN_CNT_U16 = DataDict.Constant;
STEERPINIONCMPDAGMIN_CNT_U16.LongName = 'Steering Pinion Compensated Angle Minimum';
STEERPINIONCMPDAGMIN_CNT_U16.Description = [...
  'Minimum value of Steering Pinion Compensated Angle'];
STEERPINIONCMPDAGMIN_CNT_U16.DocUnits = 'Cnt';
STEERPINIONCMPDAGMIN_CNT_U16.EngDT = dt.u16;
STEERPINIONCMPDAGMIN_CNT_U16.EngVal = 0;
STEERPINIONCMPDAGMIN_CNT_U16.Define = 'Local';


STEERPINIONRELAGMAX_CNT_U16 = DataDict.Constant;
STEERPINIONRELAGMAX_CNT_U16.LongName = 'Steering Pinion Relative Angle Maximum';
STEERPINIONRELAGMAX_CNT_U16.Description = [...
  'Maximum value of Steering Pinion Relative Angle'];
STEERPINIONRELAGMAX_CNT_U16.DocUnits = 'Cnt';
STEERPINIONRELAGMAX_CNT_U16.EngDT = dt.u16;
STEERPINIONRELAGMAX_CNT_U16.EngVal = 65535;
STEERPINIONRELAGMAX_CNT_U16.Define = 'Local';


STEERPINIONRELAGMIN_CNT_U16 = DataDict.Constant;
STEERPINIONRELAGMIN_CNT_U16.LongName = 'Steering Pinion Relative Angle Minimum';
STEERPINIONRELAGMIN_CNT_U16.Description = [...
  'Minimum value of Steering Pinion Relative Angle'];
STEERPINIONRELAGMIN_CNT_U16.DocUnits = 'Cnt';
STEERPINIONRELAGMIN_CNT_U16.EngDT = dt.u16;
STEERPINIONRELAGMIN_CNT_U16.EngVal = 0;
STEERPINIONRELAGMIN_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
