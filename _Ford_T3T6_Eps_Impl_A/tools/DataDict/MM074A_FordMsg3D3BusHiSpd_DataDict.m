%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 02-Apr-2018 17:35:26       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

MM074A = DataDict.FDD;
MM074A.Version = '2.0.X';
MM074A.LongName = 'Ford Message 3D3 Bus High Speed';
MM074A.ShoName  = 'FordMsg3D3BusHiSpd';
MM074A.DesignASIL = 'B';
MM074A.Description = [...
  'The purpose of the Ford Message 3D3 Bus High Speed function is to prov' ...
  'ide the Electric Power Steering system with signal values for the Traf' ...
  'fic Jam Assist and Lane Center Assist functions from CAN. The Ford Mes' ...
  'sage 3D3 function will perform the missing message as well as provide ' ...
  'a validity flag for the signal values and received message.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordMsg3D3BusHiSpdInit1 = DataDict.Runnable;
FordMsg3D3BusHiSpdInit1.Context = 'Rte';
FordMsg3D3BusHiSpdInit1.TimeStep = 0;
FordMsg3D3BusHiSpdInit1.Description = 'Initialization Runnable';

FordMsg3D3BusHiSpdPer1 = DataDict.Runnable;
FordMsg3D3BusHiSpdPer1.Context = 'Rte';
FordMsg3D3BusHiSpdPer1.TimeStep = 0.01;
FordMsg3D3BusHiSpdPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds'];

ComIPduCallout_LateralMotionControl_FD1 = DataDict.SrvRunnable;
ComIPduCallout_LateralMotionControl_FD1.Context = 'NonRte';
ComIPduCallout_LateralMotionControl_FD1.Description = [...
  'Server Runnable for Message reception'];
ComIPduCallout_LateralMotionControl_FD1.Return = DataDict.CSReturn;
ComIPduCallout_LateralMotionControl_FD1.Return.Type = 'None';
ComIPduCallout_LateralMotionControl_FD1.Return.Min = [];
ComIPduCallout_LateralMotionControl_FD1.Return.Max = [];
ComIPduCallout_LateralMotionControl_FD1.Return.TestTolerance = [];
ComIPduCallout_LateralMotionControl_FD1.Arguments(1) = DataDict.CSArguments;
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).Name = 'LateralMotionControl';
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).EngDT = dt.lgc;
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).EngMin = 0;
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).EngMax = 1;
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).TestTolerance = 0;
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).Units = 'Cnt';
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).Direction = 'Out';
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).InitRowCol = [1  1];
ComIPduCallout_LateralMotionControl_FD1.Arguments(1).Description = [...
  'LateralMotionControl is set to one when service is invoked'];

ComTimeoutNotification_LatCtlRampType_D_Rq = DataDict.SrvRunnable;
ComTimeoutNotification_LatCtlRampType_D_Rq.Context = 'NonRte';
ComTimeoutNotification_LatCtlRampType_D_Rq.Description = [...
  'Server Runnable for Message Timeout'];
ComTimeoutNotification_LatCtlRampType_D_Rq.Return = DataDict.CSReturn;
ComTimeoutNotification_LatCtlRampType_D_Rq.Return.Type = 'None';
ComTimeoutNotification_LatCtlRampType_D_Rq.Return.Min = [];
ComTimeoutNotification_LatCtlRampType_D_Rq.Return.Max = [];
ComTimeoutNotification_LatCtlRampType_D_Rq.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordMsg3D3BusHiSpdInit1','FordMsg3D3BusHiSpdPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time from the SimnTi value obtained at root lay' ...
  'er of model and gives the RefTmr.'];
GetRefTmr100MicroSec32bit.Return = DataDict.CSReturn;
GetRefTmr100MicroSec32bit.Return.Type = 'None';
GetRefTmr100MicroSec32bit.Return.Min = [];
GetRefTmr100MicroSec32bit.Return.Max = [];
GetRefTmr100MicroSec32bit.Return.TestTolerance = [];
GetRefTmr100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetRefTmr100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetRefTmr100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetRefTmr100MicroSec32bit.Arguments(1).EngMin = 0;
GetRefTmr100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 0;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'FordMsg3D3BusHiSpdPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'It Captures simulation time fromSimnTi value, handles counter wrapping' ...
  ', and subtracts RefTmr,provides the TiSpan'];
GetTiSpan100MicroSec32bit.Return = DataDict.CSReturn;
GetTiSpan100MicroSec32bit.Return.Type = 'None';
GetTiSpan100MicroSec32bit.Return.Min = [];
GetTiSpan100MicroSec32bit.Return.Max = [];
GetTiSpan100MicroSec32bit.Return.TestTolerance = [];
GetTiSpan100MicroSec32bit.Arguments(1) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(1).Name = 'RefTmr';
GetTiSpan100MicroSec32bit.Arguments(1).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(1).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(1).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(1).Direction = 'In';
GetTiSpan100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference time in 100 uSec';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 0;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Wrapped value of the current time';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'FordMsg3D3BusHiSpdPer1'};
SetNtcSts.Description = 'Set the NTC status';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = 0;
SetNtcSts.Return.Description = 'Returns the NTC Qualifier status';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Contains NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Provides the Parameter byte information'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'Pass the current NTC Status';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Used to Implements ISO based error accumulator strategy'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
ClrDiagcFlgProxy = DataDict.IpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostic Flag Proxy';
ClrDiagcFlgProxy.Description = [...
  'This Signal should be zero for the Diagnostics to function'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
ClrDiagcFlgProxy.ReadType = 'Rte';


FordCanDtcInhb = DataDict.IpSignal;
FordCanDtcInhb.LongName = 'CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'This signal should be set to 0 to enable the diagnostics.Data Type: Bo' ...
  'olean with Minvalue “False”(0), Init value “True”(1) and Max value “Tr' ...
  'ue”(1)'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
FordCanDtcInhb.ReadType = 'Rte';


FordEpsLifeCycMod = DataDict.IpSignal;
FordEpsLifeCycMod.LongName = 'EPS Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'This signal is used to decide threshold value to FAIL the NTC'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.EngDT = dt.u08;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
FordEpsLifeCycMod.ReadType = 'Rte';


FordLaneCentrAssiEnad = DataDict.IpSignal;
FordLaneCentrAssiEnad.LongName = 'Lane Center Assist Enabled';
FordLaneCentrAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC. Data T' ...
  'ype: Boolean with Minvalue “False”(0), Init value “False”(0) and Max v' ...
  'alue “True”(1)'];
FordLaneCentrAssiEnad.DocUnits = 'Cnt';
FordLaneCentrAssiEnad.EngDT = dt.lgc;
FordLaneCentrAssiEnad.EngInit = 0;
FordLaneCentrAssiEnad.EngMin = 0;
FordLaneCentrAssiEnad.EngMax = 1;
FordLaneCentrAssiEnad.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
FordLaneCentrAssiEnad.ReadType = 'Rte';


FordTrfcJamAssiEnad = DataDict.IpSignal;
FordTrfcJamAssiEnad.LongName = 'Ford Traffic Jam Assist Enabled';
FordTrfcJamAssiEnad.Description = [...
  'This signal should be set to 1 in order to Test Diagnostic NTC. Data T' ...
  'ype: Boolean with Minvalue “False”(0), Init value “False”(0) and Max v' ...
  'alue “True”(1)'];
FordTrfcJamAssiEnad.DocUnits = 'Cnt';
FordTrfcJamAssiEnad.EngDT = dt.lgc;
FordTrfcJamAssiEnad.EngInit = 0;
FordTrfcJamAssiEnad.EngMin = 0;
FordTrfcJamAssiEnad.EngMax = 1;
FordTrfcJamAssiEnad.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
FordTrfcJamAssiEnad.ReadType = 'Rte';


Ford_HandsOffCnfm_B_Rq1 = DataDict.IpSignal;
Ford_HandsOffCnfm_B_Rq1.LongName = 'Lateral Control Hands Off Detection Torque Stimulus Request';
Ford_HandsOffCnfm_B_Rq1.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS.Customer Data type : Ford_HandsOffCnfm_B_Rq,So' ...
  'urcesignal range:[0,1], Cx0_Inactive,Cx1_Active'];
Ford_HandsOffCnfm_B_Rq1.DocUnits = 'Cnt';
Ford_HandsOffCnfm_B_Rq1.EngDT = enum.Ford_HandsOffCnfm_B_Rq;
Ford_HandsOffCnfm_B_Rq1.EngInit = Ford_HandsOffCnfm_B_Rq.Cx0_Inactive;
Ford_HandsOffCnfm_B_Rq1.EngMin = Ford_HandsOffCnfm_B_Rq.Cx0_Inactive;
Ford_HandsOffCnfm_B_Rq1.EngMax = Ford_HandsOffCnfm_B_Rq.Cx1_Active;
Ford_HandsOffCnfm_B_Rq1.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_HandsOffCnfm_B_Rq1.ReadType = 'Rte';


Ford_LatCtlCurv_NoRate_Actl = DataDict.IpSignal;
Ford_LatCtlCurv_NoRate_Actl.LongName = 'Lateral Control Curvature Rate';
Ford_LatCtlCurv_NoRate_Actl.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS.'];
Ford_LatCtlCurv_NoRate_Actl.DocUnits = 'Cnt';
Ford_LatCtlCurv_NoRate_Actl.EngDT = dt.u16;
Ford_LatCtlCurv_NoRate_Actl.EngInit = 4096;
Ford_LatCtlCurv_NoRate_Actl.EngMin = 0;
Ford_LatCtlCurv_NoRate_Actl.EngMax = 8191;
Ford_LatCtlCurv_NoRate_Actl.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlCurv_NoRate_Actl.ReadType = 'Rte';


Ford_LatCtlCurv_No_Actl = DataDict.IpSignal;
Ford_LatCtlCurv_No_Actl.LongName = 'Lateral Control Curvature';
Ford_LatCtlCurv_No_Actl.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS'];
Ford_LatCtlCurv_No_Actl.DocUnits = 'Cnt';
Ford_LatCtlCurv_No_Actl.EngDT = dt.u16;
Ford_LatCtlCurv_No_Actl.EngInit = 1000;
Ford_LatCtlCurv_No_Actl.EngMin = 0;
Ford_LatCtlCurv_No_Actl.EngMax = 2047;
Ford_LatCtlCurv_No_Actl.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlCurv_No_Actl.ReadType = 'Rte';


Ford_LatCtlPathOffst_L_Actl = DataDict.IpSignal;
Ford_LatCtlPathOffst_L_Actl.LongName = 'Lateral Control Path Offset';
Ford_LatCtlPathOffst_L_Actl.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS'];
Ford_LatCtlPathOffst_L_Actl.DocUnits = 'Cnt';
Ford_LatCtlPathOffst_L_Actl.EngDT = dt.u16;
Ford_LatCtlPathOffst_L_Actl.EngInit = 512;
Ford_LatCtlPathOffst_L_Actl.EngMin = 0;
Ford_LatCtlPathOffst_L_Actl.EngMax = 1023;
Ford_LatCtlPathOffst_L_Actl.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlPathOffst_L_Actl.ReadType = 'Rte';


Ford_LatCtlPath_An_Actl = DataDict.IpSignal;
Ford_LatCtlPath_An_Actl.LongName = 'Lateral Control Path';
Ford_LatCtlPath_An_Actl.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS'];
Ford_LatCtlPath_An_Actl.DocUnits = 'Cnt';
Ford_LatCtlPath_An_Actl.EngDT = dt.u16;
Ford_LatCtlPath_An_Actl.EngInit = 1000;
Ford_LatCtlPath_An_Actl.EngMin = 0;
Ford_LatCtlPath_An_Actl.EngMax = 2047;
Ford_LatCtlPath_An_Actl.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlPath_An_Actl.ReadType = 'Rte';


Ford_LatCtlPrecision_D_Rq1 = DataDict.IpSignal;
Ford_LatCtlPrecision_D_Rq1.LongName = 'Lateral Control Precision';
Ford_LatCtlPrecision_D_Rq1.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS. Customer Data type : Ford_BrkTot_Tq_Act,Sourc' ...
  'esignal range:[0,3], Cx0_Comfortable,Cx1_Precise,Cx3_NotUsed2,Cx3_NotU' ...
  'sed2'];
Ford_LatCtlPrecision_D_Rq1.DocUnits = 'Cnt';
Ford_LatCtlPrecision_D_Rq1.EngDT = enum.Ford_LatCtlPrecision_D_Rq;
Ford_LatCtlPrecision_D_Rq1.EngInit = Ford_LatCtlPrecision_D_Rq.Cx0_Comfortable;
Ford_LatCtlPrecision_D_Rq1.EngMin = Ford_LatCtlPrecision_D_Rq.Cx0_Comfortable;
Ford_LatCtlPrecision_D_Rq1.EngMax = Ford_LatCtlPrecision_D_Rq.Cx3_NotUsed2;
Ford_LatCtlPrecision_D_Rq1.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlPrecision_D_Rq1.ReadType = 'Rte';


Ford_LatCtlRampType_D_Rq1 = DataDict.IpSignal;
Ford_LatCtlRampType_D_Rq1.LongName = 'Lateral Control Ramp Type';
Ford_LatCtlRampType_D_Rq1.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS.Customer Data type : Ford_LatCtlRampType_D_Rq,' ...
  'Sourcesignal range:[0,3], Cx0_Slow,Cx1_Medium,Cx2_Fast,Cx3_Immediately' ...
  ''];
Ford_LatCtlRampType_D_Rq1.DocUnits = 'Cnt';
Ford_LatCtlRampType_D_Rq1.EngDT = enum.Ford_LatCtlRampType_D_Rq;
Ford_LatCtlRampType_D_Rq1.EngInit = Ford_LatCtlRampType_D_Rq.Cx0_Slow;
Ford_LatCtlRampType_D_Rq1.EngMin = Ford_LatCtlRampType_D_Rq.Cx0_Slow;
Ford_LatCtlRampType_D_Rq1.EngMax = Ford_LatCtlRampType_D_Rq.Cx3_Immediately;
Ford_LatCtlRampType_D_Rq1.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlRampType_D_Rq1.ReadType = 'Rte';


Ford_LatCtlRng_L_Max = DataDict.IpSignal;
Ford_LatCtlRng_L_Max.LongName = 'Lateral Control Ring Maximum';
Ford_LatCtlRng_L_Max.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS'];
Ford_LatCtlRng_L_Max.DocUnits = 'Cnt';
Ford_LatCtlRng_L_Max.EngDT = dt.u08;
Ford_LatCtlRng_L_Max.EngInit = 0;
Ford_LatCtlRng_L_Max.EngMin = 0;
Ford_LatCtlRng_L_Max.EngMax = 63;
Ford_LatCtlRng_L_Max.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtlRng_L_Max.ReadType = 'Rte';


Ford_LatCtl_D_Rq1 = DataDict.IpSignal;
Ford_LatCtl_D_Rq1.LongName = 'Lateral Control Request';
Ford_LatCtl_D_Rq1.Description = [...
  'It is a message signal which is received from CAN bus,which will be pr' ...
  'ocessed and used in EPS.Customer Data type : Ford_LatCtl_D_Rq,Sourcesi' ...
  'gnal range:[0,7], Cx0_NoLateralControl,Cx1_ContinuousPathFollowingCx2_' ...
  'InterventionLeft,Cx3_InterventionRight,Cx4_NotUsed1,Cx5_NotUsed2Cx6_No' ...
  'tUsed3,Cx7_NotUsed4'];
Ford_LatCtl_D_Rq1.DocUnits = 'Cnt';
Ford_LatCtl_D_Rq1.EngDT = enum.Ford_LatCtl_D_Rq;
Ford_LatCtl_D_Rq1.EngInit = Ford_LatCtl_D_Rq.Cx0_NoLateralControl;
Ford_LatCtl_D_Rq1.EngMin = Ford_LatCtl_D_Rq.Cx0_NoLateralControl;
Ford_LatCtl_D_Rq1.EngMax = Ford_LatCtl_D_Rq.Cx7_NotUsed4;
Ford_LatCtl_D_Rq1.ReadIn = {'FordMsg3D3BusHiSpdPer1'};
Ford_LatCtl_D_Rq1.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordVehLatCtrlCrvt = DataDict.OpSignal;
FordVehLatCtrlCrvt.LongName = 'Ford Vehicle Lateral Control Curvature';
FordVehLatCtrlCrvt.Description = [...
  'Processed value of Lateral Control Curvature'];
FordVehLatCtrlCrvt.DocUnits = 'IvsMtr';
FordVehLatCtrlCrvt.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlCrvt.EngDT = dt.float32;
FordVehLatCtrlCrvt.EngInit = 0;
FordVehLatCtrlCrvt.EngMin = -0.02;
FordVehLatCtrlCrvt.EngMax = 0.02094;
FordVehLatCtrlCrvt.TestTolerance = 0;
FordVehLatCtrlCrvt.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlCrvt.WriteType = 'Rte';


FordVehLatCtrlCrvtRate = DataDict.OpSignal;
FordVehLatCtrlCrvtRate.LongName = 'Ford Vehicle Lateral Control Curvature Rate';
FordVehLatCtrlCrvtRate.Description = [...
  'Processed value of Lateral Control Curvature Rate'];
FordVehLatCtrlCrvtRate.DocUnits = 'IvsMtr';
FordVehLatCtrlCrvtRate.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlCrvtRate.EngDT = dt.float32;
FordVehLatCtrlCrvtRate.EngInit = 0;
FordVehLatCtrlCrvtRate.EngMin = -0.001024;
FordVehLatCtrlCrvtRate.EngMax = 0.00102375;
FordVehLatCtrlCrvtRate.TestTolerance = 0;
FordVehLatCtrlCrvtRate.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlCrvtRate.WriteType = 'Rte';


FordVehLatCtrlCrvtRateRaw = DataDict.OpSignal;
FordVehLatCtrlCrvtRateRaw.LongName = 'Ford Vehicle Lateral Control Curvature Rate Raw';
FordVehLatCtrlCrvtRateRaw.Description = [...
  'Processed value of Lateral Control Curvature Rate'];
FordVehLatCtrlCrvtRateRaw.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRateRaw.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlCrvtRateRaw.EngDT = dt.u16;
FordVehLatCtrlCrvtRateRaw.EngInit = 4096;
FordVehLatCtrlCrvtRateRaw.EngMin = 0;
FordVehLatCtrlCrvtRateRaw.EngMax = 8191;
FordVehLatCtrlCrvtRateRaw.TestTolerance = 0;
FordVehLatCtrlCrvtRateRaw.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlCrvtRateRaw.WriteType = 'Rte';


FordVehLatCtrlCrvtRaw = DataDict.OpSignal;
FordVehLatCtrlCrvtRaw.LongName = 'Ford Vehicle Lateral Control Curvature Raw';
FordVehLatCtrlCrvtRaw.Description = [...
  'Processed value of Lateral Control Curvature'];
FordVehLatCtrlCrvtRaw.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRaw.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlCrvtRaw.EngDT = dt.u16;
FordVehLatCtrlCrvtRaw.EngInit = 1000;
FordVehLatCtrlCrvtRaw.EngMin = 0;
FordVehLatCtrlCrvtRaw.EngMax = 2047;
FordVehLatCtrlCrvtRaw.TestTolerance = 0;
FordVehLatCtrlCrvtRaw.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlCrvtRaw.WriteType = 'Rte';


FordVehLatCtrlHandsOffDetnTqStimlsReq = DataDict.OpSignal;
FordVehLatCtrlHandsOffDetnTqStimlsReq.LongName = 'Ford Vehicle Lateral Control Hands Off Detection Torque XXXXX Request';
FordVehLatCtrlHandsOffDetnTqStimlsReq.Description = [...
  'Processed value of Lateral Control Hands Off Detection Torque Stimulus' ...
  ' Request'];
FordVehLatCtrlHandsOffDetnTqStimlsReq.DocUnits = 'Cnt';
FordVehLatCtrlHandsOffDetnTqStimlsReq.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngDT = enum.Ford_HandsOffCnfm_B_Rq;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngInit = Ford_HandsOffCnfm_B_Rq.Cx0_Inactive;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngMin = Ford_HandsOffCnfm_B_Rq.Cx0_Inactive;
FordVehLatCtrlHandsOffDetnTqStimlsReq.EngMax = Ford_HandsOffCnfm_B_Rq.Cx1_Active;
FordVehLatCtrlHandsOffDetnTqStimlsReq.TestTolerance = 0;
FordVehLatCtrlHandsOffDetnTqStimlsReq.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlHandsOffDetnTqStimlsReq.WriteType = 'Rte';


FordVehLatCtrlImgProcrModlAVld = DataDict.OpSignal;
FordVehLatCtrlImgProcrModlAVld.LongName = 'Ford Vehicle Lateral Control Image Processor Module A Valid';
FordVehLatCtrlImgProcrModlAVld.Description = [...
  'This output tells if the value for Ford Vehicle Lateral Control Image ' ...
  'Processor Module A Valid is valid or not'];
FordVehLatCtrlImgProcrModlAVld.DocUnits = 'Cnt';
FordVehLatCtrlImgProcrModlAVld.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlImgProcrModlAVld.EngDT = dt.lgc;
FordVehLatCtrlImgProcrModlAVld.EngInit = 0;
FordVehLatCtrlImgProcrModlAVld.EngMin = 0;
FordVehLatCtrlImgProcrModlAVld.EngMax = 1;
FordVehLatCtrlImgProcrModlAVld.TestTolerance = 0;
FordVehLatCtrlImgProcrModlAVld.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlImgProcrModlAVld.WriteType = 'Rte';


FordVehLatCtrlPah = DataDict.OpSignal;
FordVehLatCtrlPah.LongName = 'Ford Vehicle Lateral Control Path';
FordVehLatCtrlPah.Description = [...
  'Processed value of Lateral Control Path'];
FordVehLatCtrlPah.DocUnits = 'Rad';
FordVehLatCtrlPah.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlPah.EngDT = dt.float32;
FordVehLatCtrlPah.EngInit = 0;
FordVehLatCtrlPah.EngMin = -0.5;
FordVehLatCtrlPah.EngMax = 0.5235;
FordVehLatCtrlPah.TestTolerance = 0;
FordVehLatCtrlPah.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlPah.WriteType = 'Rte';


FordVehLatCtrlPahOffs = DataDict.OpSignal;
FordVehLatCtrlPahOffs.LongName = 'Ford Vehicle Lateral Control Path Offset';
FordVehLatCtrlPahOffs.Description = [...
  'Processed value of Lateral Control Path Offset'];
FordVehLatCtrlPahOffs.DocUnits = 'Mtr';
FordVehLatCtrlPahOffs.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlPahOffs.EngDT = dt.float32;
FordVehLatCtrlPahOffs.EngInit = 0;
FordVehLatCtrlPahOffs.EngMin = -5.12;
FordVehLatCtrlPahOffs.EngMax = 5.11;
FordVehLatCtrlPahOffs.TestTolerance = 0;
FordVehLatCtrlPahOffs.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlPahOffs.WriteType = 'Rte';


FordVehLatCtrlPahOffsRaw = DataDict.OpSignal;
FordVehLatCtrlPahOffsRaw.LongName = 'Ford Vehicle Lateral Control Path Offset Raw';
FordVehLatCtrlPahOffsRaw.Description = [...
  'Processed Value of Lateral Control Path Offset'];
FordVehLatCtrlPahOffsRaw.DocUnits = 'Cnt';
FordVehLatCtrlPahOffsRaw.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlPahOffsRaw.EngDT = dt.u16;
FordVehLatCtrlPahOffsRaw.EngInit = 512;
FordVehLatCtrlPahOffsRaw.EngMin = 0;
FordVehLatCtrlPahOffsRaw.EngMax = 1023;
FordVehLatCtrlPahOffsRaw.TestTolerance = 0;
FordVehLatCtrlPahOffsRaw.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlPahOffsRaw.WriteType = 'Rte';


FordVehLatCtrlPahRaw = DataDict.OpSignal;
FordVehLatCtrlPahRaw.LongName = 'Ford Vehicle Lateral Control Path Raw';
FordVehLatCtrlPahRaw.Description = [...
  'Processed value of Lateral Control Path'];
FordVehLatCtrlPahRaw.DocUnits = 'Cnt';
FordVehLatCtrlPahRaw.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlPahRaw.EngDT = dt.u16;
FordVehLatCtrlPahRaw.EngInit = 1000;
FordVehLatCtrlPahRaw.EngMin = 0;
FordVehLatCtrlPahRaw.EngMax = 2047;
FordVehLatCtrlPahRaw.TestTolerance = 0;
FordVehLatCtrlPahRaw.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlPahRaw.WriteType = 'Rte';


FordVehLatCtrlPrcsn = DataDict.OpSignal;
FordVehLatCtrlPrcsn.LongName = 'Ford Vehicle Lateral Control Precision';
FordVehLatCtrlPrcsn.Description = [...
  'Processed value of Lateral Control Precision'];
FordVehLatCtrlPrcsn.DocUnits = 'Cnt';
FordVehLatCtrlPrcsn.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlPrcsn.EngDT = enum.Ford_LatCtlPrecision_D_Rq;
FordVehLatCtrlPrcsn.EngInit = Ford_LatCtlPrecision_D_Rq.Cx0_Comfortable;
FordVehLatCtrlPrcsn.EngMin = Ford_LatCtlPrecision_D_Rq.Cx0_Comfortable;
FordVehLatCtrlPrcsn.EngMax = Ford_LatCtlPrecision_D_Rq.Cx3_NotUsed2;
FordVehLatCtrlPrcsn.TestTolerance = 0;
FordVehLatCtrlPrcsn.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlPrcsn.WriteType = 'Rte';


FordVehLatCtrlRampTyp = DataDict.OpSignal;
FordVehLatCtrlRampTyp.LongName = 'Ford Vehicle Lateral Control Ramp Type';
FordVehLatCtrlRampTyp.Description = [...
  'Processed Value of Lateral Control Ramp Type'];
FordVehLatCtrlRampTyp.DocUnits = 'Cnt';
FordVehLatCtrlRampTyp.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlRampTyp.EngDT = enum.Ford_LatCtlRampType_D_Rq;
FordVehLatCtrlRampTyp.EngInit = Ford_LatCtlRampType_D_Rq.Cx0_Slow;
FordVehLatCtrlRampTyp.EngMin = Ford_LatCtlRampType_D_Rq.Cx0_Slow;
FordVehLatCtrlRampTyp.EngMax = Ford_LatCtlRampType_D_Rq.Cx3_Immediately;
FordVehLatCtrlRampTyp.TestTolerance = 0;
FordVehLatCtrlRampTyp.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlRampTyp.WriteType = 'Rte';


FordVehLatCtrlReq = DataDict.OpSignal;
FordVehLatCtrlReq.LongName = 'Ford Vehicle Lateral Control Request';
FordVehLatCtrlReq.Description = [...
  'Processed Value of Lateral Control Request'];
FordVehLatCtrlReq.DocUnits = 'Cnt';
FordVehLatCtrlReq.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlReq.EngDT = enum.Ford_LatCtl_D_Rq;
FordVehLatCtrlReq.EngInit = Ford_LatCtl_D_Rq.Cx0_NoLateralControl;
FordVehLatCtrlReq.EngMin = Ford_LatCtl_D_Rq.Cx0_NoLateralControl;
FordVehLatCtrlReq.EngMax = Ford_LatCtl_D_Rq.Cx7_NotUsed4;
FordVehLatCtrlReq.TestTolerance = 0;
FordVehLatCtrlReq.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlReq.WriteType = 'Rte';


FordVehLatCtrlRingMax = DataDict.OpSignal;
FordVehLatCtrlRingMax.LongName = 'Ford Vehicle Lateral Control Ring Maximum';
FordVehLatCtrlRingMax.Description = [...
  'Processed Value of Lateral Control Ring Max'];
FordVehLatCtrlRingMax.DocUnits = 'Mtr';
FordVehLatCtrlRingMax.SwcShoName = 'FordMsg3D3BusHiSpd';
FordVehLatCtrlRingMax.EngDT = dt.u08;
FordVehLatCtrlRingMax.EngInit = 0;
FordVehLatCtrlRingMax.EngMin = 0;
FordVehLatCtrlRingMax.EngMax = 126;
FordVehLatCtrlRingMax.TestTolerance = 0;
FordVehLatCtrlRingMax.WrittenIn = {'FordMsg3D3BusHiSpdPer1'};
FordVehLatCtrlRingMax.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd = DataDict.Calibration;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.LongName = 'Ford Message 3D3 Bus High Speed Image Processor Module A Valid Failed Threshold';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.Description = [...
  'Threshold to set the FordVehLatCtrlImgProcrModlAVld to false'];
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.DocUnits = 'MilliSec';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.EngDT = dt.u16;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.EngVal = 1000;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.EngMin = 0;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.EngMax = 6000;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.Cardinality = 'Cmn';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.CustomerVisible = false;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.Online = false;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.Impact = 'H';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.TuningOwner = 'EPDT';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.GraphLink = {''};
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.Monotony = 'None';
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.MaxGrad = 0;
FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd.PortName = 'FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd';


FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd = DataDict.Calibration;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.LongName = 'Ford Message 3D3 Bus High Speed Image Processor Module A Valid Passed Threshold';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.Description = [...
  'Threshold to set the FordVehLatCtrlImgProcrModlAVld to true'];
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.DocUnits = 'MilliSec';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.EngDT = dt.u16;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.EngVal = 5000;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.EngMin = 0;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.EngMax = 6000;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.Cardinality = 'Cmn';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.CustomerVisible = false;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.Online = false;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.Impact = 'H';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.TuningOwner = 'EPDT';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.GraphLink = {''};
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.Monotony = 'None';
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.MaxGrad = 0;
FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd.PortName = 'FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd';


FordMsg3D3BusHiSpdMissMsgFaildThd = DataDict.Calibration;
FordMsg3D3BusHiSpdMissMsgFaildThd.LongName = 'Ford Message 3D3 Bus High Speed Missing Message Failed Threshold';
FordMsg3D3BusHiSpdMissMsgFaildThd.Description = [...
  'Threshold to set FordMsg3D3MissMsg NTC'];
FordMsg3D3BusHiSpdMissMsgFaildThd.DocUnits = 'MilliSec';
FordMsg3D3BusHiSpdMissMsgFaildThd.EngDT = dt.u16;
FordMsg3D3BusHiSpdMissMsgFaildThd.EngVal = 1000;
FordMsg3D3BusHiSpdMissMsgFaildThd.EngMin = 0;
FordMsg3D3BusHiSpdMissMsgFaildThd.EngMax = 6000;
FordMsg3D3BusHiSpdMissMsgFaildThd.Cardinality = 'Cmn';
FordMsg3D3BusHiSpdMissMsgFaildThd.CustomerVisible = false;
FordMsg3D3BusHiSpdMissMsgFaildThd.Online = false;
FordMsg3D3BusHiSpdMissMsgFaildThd.Impact = 'L';
FordMsg3D3BusHiSpdMissMsgFaildThd.TuningOwner = 'EPDT';
FordMsg3D3BusHiSpdMissMsgFaildThd.GraphLink = {''};
FordMsg3D3BusHiSpdMissMsgFaildThd.Monotony = 'None';
FordMsg3D3BusHiSpdMissMsgFaildThd.MaxGrad = 0;
FordMsg3D3BusHiSpdMissMsgFaildThd.PortName = 'FordMsg3D3BusHiSpdMissMsgFaildThd';


FordMsg3D3BusHiSpdMissMsgPassdThd = DataDict.Calibration;
FordMsg3D3BusHiSpdMissMsgPassdThd.LongName = 'Ford Message 3D3 Bus High Speed Missing Message Passed Threshold';
FordMsg3D3BusHiSpdMissMsgPassdThd.Description = [...
  'Threshold to Reset FordMsg3D3MissMsg NTC'];
FordMsg3D3BusHiSpdMissMsgPassdThd.DocUnits = 'MilliSec';
FordMsg3D3BusHiSpdMissMsgPassdThd.EngDT = dt.u16;
FordMsg3D3BusHiSpdMissMsgPassdThd.EngVal = 0;
FordMsg3D3BusHiSpdMissMsgPassdThd.EngMin = 0;
FordMsg3D3BusHiSpdMissMsgPassdThd.EngMax = 6000;
FordMsg3D3BusHiSpdMissMsgPassdThd.Cardinality = 'Cmn';
FordMsg3D3BusHiSpdMissMsgPassdThd.CustomerVisible = false;
FordMsg3D3BusHiSpdMissMsgPassdThd.Online = false;
FordMsg3D3BusHiSpdMissMsgPassdThd.Impact = 'L';
FordMsg3D3BusHiSpdMissMsgPassdThd.TuningOwner = 'EPDT';
FordMsg3D3BusHiSpdMissMsgPassdThd.GraphLink = {''};
FordMsg3D3BusHiSpdMissMsgPassdThd.Monotony = 'None';
FordMsg3D3BusHiSpdMissMsgPassdThd.MaxGrad = 0;
FordMsg3D3BusHiSpdMissMsgPassdThd.PortName = 'FordMsg3D3BusHiSpdMissMsgPassdThd';



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
ClrDiagcFlgProxyPrev = DataDict.PIM;
ClrDiagcFlgProxyPrev.LongName = 'Clear Diagnostic Flag Proxy';
ClrDiagcFlgProxyPrev.Description = 'Clear Diagc Flag Proxy';
ClrDiagcFlgProxyPrev.DocUnits = 'Cnt';
ClrDiagcFlgProxyPrev.EngDT = dt.u08;
ClrDiagcFlgProxyPrev.EngMin = 0;
ClrDiagcFlgProxyPrev.EngMax = 1;
ClrDiagcFlgProxyPrev.InitRowCol = [1  1];


FirstTranVldFlg = DataDict.PIM;
FirstTranVldFlg.LongName = 'First Transition Valid Flag';
FirstTranVldFlg.Description = [...
  'This flag is used to indicate the reception of first message'];
FirstTranVldFlg.DocUnits = 'Cnt';
FirstTranVldFlg.EngDT = dt.lgc;
FirstTranVldFlg.EngMin = 0;
FirstTranVldFlg.EngMax = 1;
FirstTranVldFlg.InitRowCol = [1  1];


FordVehLatCtrlCrvtPrev = DataDict.PIM;
FordVehLatCtrlCrvtPrev.LongName = 'Ford Vehicle Lateral Control Curvature Previous';
FordVehLatCtrlCrvtPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlCrvt'];
FordVehLatCtrlCrvtPrev.DocUnits = 'IvsMtr';
FordVehLatCtrlCrvtPrev.EngDT = dt.float32;
FordVehLatCtrlCrvtPrev.EngMin = -0.2;
FordVehLatCtrlCrvtPrev.EngMax = 0.02094;
FordVehLatCtrlCrvtPrev.InitRowCol = [1  1];


FordVehLatCtrlCrvtRatePrev = DataDict.PIM;
FordVehLatCtrlCrvtRatePrev.LongName = 'Ford Vehicle Lateral Control Curvature Rate Previous';
FordVehLatCtrlCrvtRatePrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlCrvtRate'];
FordVehLatCtrlCrvtRatePrev.DocUnits = 'IvsMtr';
FordVehLatCtrlCrvtRatePrev.EngDT = dt.float32;
FordVehLatCtrlCrvtRatePrev.EngMin = -0.001024;
FordVehLatCtrlCrvtRatePrev.EngMax = 0.00102375;
FordVehLatCtrlCrvtRatePrev.InitRowCol = [1  1];


FordVehLatCtrlCrvtRateRawPrev = DataDict.PIM;
FordVehLatCtrlCrvtRateRawPrev.LongName = 'Ford Vehicle Lateral Control Curvature Rate Raw Previous';
FordVehLatCtrlCrvtRateRawPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlCrvtRateRaw'];
FordVehLatCtrlCrvtRateRawPrev.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRateRawPrev.EngDT = dt.u16;
FordVehLatCtrlCrvtRateRawPrev.EngMin = 0;
FordVehLatCtrlCrvtRateRawPrev.EngMax = 8191;
FordVehLatCtrlCrvtRateRawPrev.InitRowCol = [1  1];


FordVehLatCtrlCrvtRawPrev = DataDict.PIM;
FordVehLatCtrlCrvtRawPrev.LongName = 'Ford Vehicle Lateral Control Curvature Raw Previous';
FordVehLatCtrlCrvtRawPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlCrvtRaw'];
FordVehLatCtrlCrvtRawPrev.DocUnits = 'Cnt';
FordVehLatCtrlCrvtRawPrev.EngDT = dt.u16;
FordVehLatCtrlCrvtRawPrev.EngMin = 0;
FordVehLatCtrlCrvtRawPrev.EngMax = 2047;
FordVehLatCtrlCrvtRawPrev.InitRowCol = [1  1];


FordVehLatCtrlHandsOffDetnTqStimlsReqPrev = DataDict.PIM;
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.LongName = 'Ford Vehicle Lateral Control Hands Off Detection Torque Stimulus Request Previous';
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlHandsOffDetnTqS' ...
  'tmlsReq'];
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.DocUnits = 'Cnt';
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.EngDT = enum.Ford_HandsOffCnfm_B_Rq;
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.EngMin = Ford_HandsOffCnfm_B_Rq.Cx0_Inactive;
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.EngMax = Ford_HandsOffCnfm_B_Rq.Cx1_Active;
FordVehLatCtrlHandsOffDetnTqStimlsReqPrev.InitRowCol = [1  1];


FordVehLatCtrlImgProcrModlAVldPrev = DataDict.PIM;
FordVehLatCtrlImgProcrModlAVldPrev.LongName = 'Ford Vehicle Lateral Control Image Processor Module A Valid Previous';
FordVehLatCtrlImgProcrModlAVldPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlImgProcrModlAVl' ...
  'd'];
FordVehLatCtrlImgProcrModlAVldPrev.DocUnits = 'Cnt';
FordVehLatCtrlImgProcrModlAVldPrev.EngDT = dt.lgc;
FordVehLatCtrlImgProcrModlAVldPrev.EngMin = 0;
FordVehLatCtrlImgProcrModlAVldPrev.EngMax = 1;
FordVehLatCtrlImgProcrModlAVldPrev.InitRowCol = [1  1];


FordVehLatCtrlPahOffsPrev = DataDict.PIM;
FordVehLatCtrlPahOffsPrev.LongName = 'Ford Vehicle Lateral Control Path Offset Previous';
FordVehLatCtrlPahOffsPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlPahOffs'];
FordVehLatCtrlPahOffsPrev.DocUnits = 'Mtr';
FordVehLatCtrlPahOffsPrev.EngDT = dt.float32;
FordVehLatCtrlPahOffsPrev.EngMin = -5.12;
FordVehLatCtrlPahOffsPrev.EngMax = 5.11;
FordVehLatCtrlPahOffsPrev.InitRowCol = [1  1];


FordVehLatCtrlPahOffsRawPrev = DataDict.PIM;
FordVehLatCtrlPahOffsRawPrev.LongName = 'Ford Vehicle Lateral Control Path Offset Raw Previous';
FordVehLatCtrlPahOffsRawPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlPahOffsRaw'];
FordVehLatCtrlPahOffsRawPrev.DocUnits = 'Cnt';
FordVehLatCtrlPahOffsRawPrev.EngDT = dt.u16;
FordVehLatCtrlPahOffsRawPrev.EngMin = 0;
FordVehLatCtrlPahOffsRawPrev.EngMax = 1023;
FordVehLatCtrlPahOffsRawPrev.InitRowCol = [1  1];


FordVehLatCtrlPahPrev = DataDict.PIM;
FordVehLatCtrlPahPrev.LongName = 'Ford Vehicle Lateral Control Path Previous';
FordVehLatCtrlPahPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlPah'];
FordVehLatCtrlPahPrev.DocUnits = 'Rad';
FordVehLatCtrlPahPrev.EngDT = dt.float32;
FordVehLatCtrlPahPrev.EngMin = -0.5;
FordVehLatCtrlPahPrev.EngMax = 0.5235;
FordVehLatCtrlPahPrev.InitRowCol = [1  1];


FordVehLatCtrlPahRawPrev = DataDict.PIM;
FordVehLatCtrlPahRawPrev.LongName = 'Ford Vehicle Lateral Control Path Raw Previous';
FordVehLatCtrlPahRawPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlPahRaw'];
FordVehLatCtrlPahRawPrev.DocUnits = 'Cnt';
FordVehLatCtrlPahRawPrev.EngDT = dt.u16;
FordVehLatCtrlPahRawPrev.EngMin = 0;
FordVehLatCtrlPahRawPrev.EngMax = 2047;
FordVehLatCtrlPahRawPrev.InitRowCol = [1  1];


FordVehLatCtrlPrcsnPrev = DataDict.PIM;
FordVehLatCtrlPrcsnPrev.LongName = 'Ford Vehicle Lateral Control Precision Previous';
FordVehLatCtrlPrcsnPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlPrcsn'];
FordVehLatCtrlPrcsnPrev.DocUnits = 'Cnt';
FordVehLatCtrlPrcsnPrev.EngDT = enum.Ford_LatCtlPrecision_D_Rq;
FordVehLatCtrlPrcsnPrev.EngMin = Ford_LatCtlPrecision_D_Rq.Cx0_Comfortable;
FordVehLatCtrlPrcsnPrev.EngMax = Ford_LatCtlPrecision_D_Rq.Cx3_NotUsed2;
FordVehLatCtrlPrcsnPrev.InitRowCol = [1  1];


FordVehLatCtrlRampTypPrev = DataDict.PIM;
FordVehLatCtrlRampTypPrev.LongName = 'Ford Vehicle Lateral Control Ramp Type Previous';
FordVehLatCtrlRampTypPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlRampTyp'];
FordVehLatCtrlRampTypPrev.DocUnits = 'Cnt';
FordVehLatCtrlRampTypPrev.EngDT = enum.Ford_LatCtlRampType_D_Rq;
FordVehLatCtrlRampTypPrev.EngMin = Ford_LatCtlRampType_D_Rq.Cx0_Slow;
FordVehLatCtrlRampTypPrev.EngMax = Ford_LatCtlRampType_D_Rq.Cx3_Immediately;
FordVehLatCtrlRampTypPrev.InitRowCol = [1  1];


FordVehLatCtrlReqPrev = DataDict.PIM;
FordVehLatCtrlReqPrev.LongName = 'Ford Vehicle Lateral Control Request Previous';
FordVehLatCtrlReqPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlReq'];
FordVehLatCtrlReqPrev.DocUnits = 'Cnt';
FordVehLatCtrlReqPrev.EngDT = enum.Ford_LatCtl_D_Rq;
FordVehLatCtrlReqPrev.EngMin = Ford_LatCtl_D_Rq.Cx0_NoLateralControl;
FordVehLatCtrlReqPrev.EngMax = Ford_LatCtl_D_Rq.Cx7_NotUsed4;
FordVehLatCtrlReqPrev.InitRowCol = [1  1];


FordVehLatCtrlRingMaxPrev = DataDict.PIM;
FordVehLatCtrlRingMaxPrev.LongName = 'Ford Vehicle Lateral Control Ring Maximum Previous';
FordVehLatCtrlRingMaxPrev.Description = [...
  'It is used to hold the previous value of FordVehLatCtrlRingMax'];
FordVehLatCtrlRingMaxPrev.DocUnits = 'Mtr';
FordVehLatCtrlRingMaxPrev.EngDT = dt.u08;
FordVehLatCtrlRingMaxPrev.EngMin = 0;
FordVehLatCtrlRingMaxPrev.EngMax = 126;
FordVehLatCtrlRingMaxPrev.InitRowCol = [1  1];


FordVehMsg3D3Miss = DataDict.PIM;
FordVehMsg3D3Miss.LongName = 'Ford Vehicle ';
FordVehMsg3D3Miss.Description = [...
  'Used to hold value of Ford Vehicle message 3D3 miss'];
FordVehMsg3D3Miss.DocUnits = 'Cnt';
FordVehMsg3D3Miss.EngDT = dt.lgc;
FordVehMsg3D3Miss.EngMin = 0;
FordVehMsg3D3Miss.EngMax = 1;
FordVehMsg3D3Miss.InitRowCol = [1  1];


ImgProcrModlAVldFaildRefTi = DataDict.PIM;
ImgProcrModlAVldFaildRefTi.LongName = 'Image Processor Module A Valid Failed Reference Time';
ImgProcrModlAVldFaildRefTi.Description = [...
  'Timer for Valid Failed Reference Time will increment or reset based on' ...
  ' the conditions'];
ImgProcrModlAVldFaildRefTi.DocUnits = 'Cnt';
ImgProcrModlAVldFaildRefTi.EngDT = dt.u32;
ImgProcrModlAVldFaildRefTi.EngMin = 0;
ImgProcrModlAVldFaildRefTi.EngMax = 4294967295;
ImgProcrModlAVldFaildRefTi.InitRowCol = [1  1];


ImgProcrModlAVldPassdRefTi = DataDict.PIM;
ImgProcrModlAVldPassdRefTi.LongName = 'Image Processor Module A Valid Passed Reference Time';
ImgProcrModlAVldPassdRefTi.Description = [...
  'Timer for Valid Passed Reference Time will increment or reset based on' ...
  ' the conditions'];
ImgProcrModlAVldPassdRefTi.DocUnits = 'Cnt';
ImgProcrModlAVldPassdRefTi.EngDT = dt.u32;
ImgProcrModlAVldPassdRefTi.EngMin = 0;
ImgProcrModlAVldPassdRefTi.EngMax = 4294967295;
ImgProcrModlAVldPassdRefTi.InitRowCol = [1  1];


MissMsgFaildRefTi = DataDict.PIM;
MissMsgFaildRefTi.LongName = 'Missing Message Failed Reference Time';
MissMsgFaildRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgFaildRefTi.DocUnits = 'Cnt';
MissMsgFaildRefTi.EngDT = dt.u32;
MissMsgFaildRefTi.EngMin = 0;
MissMsgFaildRefTi.EngMax = 4294967295;
MissMsgFaildRefTi.InitRowCol = [1  1];


MissMsgPassdRefTi = DataDict.PIM;
MissMsgPassdRefTi.LongName = 'Missing Message Passed Reference Time';
MissMsgPassdRefTi.Description = [...
  'Timer for misisng message will increment or reset based on the conditi' ...
  'ons'];
MissMsgPassdRefTi.DocUnits = 'Cnt';
MissMsgPassdRefTi.EngDT = dt.u32;
MissMsgPassdRefTi.EngMin = 0;
MissMsgPassdRefTi.EngMax = 4294967295;
MissMsgPassdRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BUSHISPDFIXDTITHD_MILLISEC_U16 = DataDict.Constant;
BUSHISPDFIXDTITHD_MILLISEC_U16.LongName = 'Fixed Value';
BUSHISPDFIXDTITHD_MILLISEC_U16.Description = [...
  'Pass constant value 5000 if EpsLifeCycMod is one'];
BUSHISPDFIXDTITHD_MILLISEC_U16.DocUnits = 'MilliSec';
BUSHISPDFIXDTITHD_MILLISEC_U16.EngDT = dt.u16;
BUSHISPDFIXDTITHD_MILLISEC_U16.EngVal = 5000;
BUSHISPDFIXDTITHD_MILLISEC_U16.Define = 'Local';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ue is multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


DEBSTEP_CNT_U16 = DataDict.Constant;
DEBSTEP_CNT_U16.LongName = 'Debounce Step';
DEBSTEP_CNT_U16.Description = [...
  'Used for Set the Delay to Set or Clear Fault'];
DEBSTEP_CNT_U16.DocUnits = 'Cnt';
DEBSTEP_CNT_U16.EngDT = dt.u16;
DEBSTEP_CNT_U16.EngVal = 65535;
DEBSTEP_CNT_U16.Define = 'Local';


FORDLATCTRLPAHOFFS_MTR_F32 = DataDict.Constant;
FORDLATCTRLPAHOFFS_MTR_F32.LongName = 'Ford Lateral Control Path Offset';
FORDLATCTRLPAHOFFS_MTR_F32.Description = [...
  'Offset for Ford Vehicle Lateral Control Path Offset '];
FORDLATCTRLPAHOFFS_MTR_F32.DocUnits = 'Mtr';
FORDLATCTRLPAHOFFS_MTR_F32.EngDT = dt.float32;
FORDLATCTRLPAHOFFS_MTR_F32.EngVal = 5.12;
FORDLATCTRLPAHOFFS_MTR_F32.Define = 'Local';


FORDVEHLATCTRLCRVTMAX_IVSMTR_F32 = DataDict.Constant;
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.LongName = 'Ford Vehicle Lateral Control Curvature Maximum';
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Curvature'];
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.DocUnits = 'IvsMtr';
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.EngVal = 0.02094;
FORDVEHLATCTRLCRVTMAX_IVSMTR_F32.Define = 'Local';


FORDVEHLATCTRLCRVTMIN_IVSMTR_F32 = DataDict.Constant;
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.LongName = 'Ford Vehicle Lateral Control Curvature Minimum';
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Curvature'];
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.DocUnits = 'IvsMtr';
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.EngVal = -0.2;
FORDVEHLATCTRLCRVTMIN_IVSMTR_F32.Define = 'Local';


FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32 = DataDict.Constant;
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.LongName = 'Ford Vehicle Lateral Control Curvature Rate Maximum';
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Curvature Rate '];
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.DocUnits = 'IvsMtr';
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.EngVal = 0.00102375;
FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32.Define = 'Local';


FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32 = DataDict.Constant;
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.LongName = 'Ford Vehicle Lateral Control Curvature Rate Minimum';
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Curvature Rate '];
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.DocUnits = 'IvsMtr';
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.EngVal = -0.001024;
FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32.Define = 'Local';


FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.LongName = 'Ford Vehicle Lateral Control Curvature Rate Raw Maximum';
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Curvature Rate Raw '];
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.EngVal = 8191;
FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16.Define = 'Local';


FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.LongName = 'Ford Vehicle Lateral Control Curvature Rate Raw Minimum';
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Curvature Rate Raw '];
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.EngVal = 0;
FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16.Define = 'Local';


FORDVEHLATCTRLCRVTRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.LongName = 'Ford Vehicle Lateral Control Curvature Raw Maximum';
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Curvature Raw '];
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.EngVal = 2047;
FORDVEHLATCTRLCRVTRAWMAX_CNT_U16.Define = 'Local';


FORDVEHLATCTRLCRVTRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.LongName = 'Ford Vehicle Lateral Control Curvature Raw Minimum';
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Curvature Raw '];
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.EngVal = 0;
FORDVEHLATCTRLCRVTRAWMIN_CNT_U16.Define = 'Local';


FORDVEHLATCTRLPAHMAX_RAD_F32 = DataDict.Constant;
FORDVEHLATCTRLPAHMAX_RAD_F32.LongName = 'Ford Vehicle Lateral Control Path Maximum';
FORDVEHLATCTRLPAHMAX_RAD_F32.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Path '];
FORDVEHLATCTRLPAHMAX_RAD_F32.DocUnits = 'Rad';
FORDVEHLATCTRLPAHMAX_RAD_F32.EngDT = dt.float32;
FORDVEHLATCTRLPAHMAX_RAD_F32.EngVal = 0.5235;
FORDVEHLATCTRLPAHMAX_RAD_F32.Define = 'Local';


FORDVEHLATCTRLPAHMIN_RAD_F32 = DataDict.Constant;
FORDVEHLATCTRLPAHMIN_RAD_F32.LongName = 'Ford Vehicle Lateral Control Path Minimum';
FORDVEHLATCTRLPAHMIN_RAD_F32.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Path '];
FORDVEHLATCTRLPAHMIN_RAD_F32.DocUnits = 'Rad';
FORDVEHLATCTRLPAHMIN_RAD_F32.EngDT = dt.float32;
FORDVEHLATCTRLPAHMIN_RAD_F32.EngVal = -0.5;
FORDVEHLATCTRLPAHMIN_RAD_F32.Define = 'Local';


FORDVEHLATCTRLPAHOFFSMAX_MTR_F32 = DataDict.Constant;
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.LongName = 'Ford Vehicle Lateral Control Path Offset Maximum';
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Path Offset '];
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.DocUnits = 'Mtr';
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.EngVal = 5.11;
FORDVEHLATCTRLPAHOFFSMAX_MTR_F32.Define = 'Local';


FORDVEHLATCTRLPAHOFFSMIN_MTR_F32 = DataDict.Constant;
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.LongName = 'Ford Vehicle Lateral Control Path Offset Minimum';
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Path Offset '];
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.DocUnits = 'Mtr';
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.EngDT = dt.float32;
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.EngVal = -5.12;
FORDVEHLATCTRLPAHOFFSMIN_MTR_F32.Define = 'Local';


FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.LongName = 'Ford Vehicle Lateral Control Path Offset Raw Maximum';
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Path Offset Raw '];
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.EngVal = 1023;
FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16.Define = 'Local';


FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.LongName = 'Ford Vehicle Lateral Control Path Offset Raw Minimum';
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Path Offset Raw '];
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.EngVal = 0;
FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16.Define = 'Local';


FORDVEHLATCTRLPAHRAWMAX_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.LongName = 'Ford Vehicle Lateral Control Path Raw Maximum';
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Path Raw '];
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.EngVal = 2047;
FORDVEHLATCTRLPAHRAWMAX_CNT_U16.Define = 'Local';


FORDVEHLATCTRLPAHRAWMIN_CNT_U16 = DataDict.Constant;
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.LongName = 'Ford Vehicle Lateral Control Path Raw Minimum';
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Path Raw '];
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.DocUnits = 'Cnt';
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.EngDT = dt.u16;
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.EngVal = 0;
FORDVEHLATCTRLPAHRAWMIN_CNT_U16.Define = 'Local';


FORDVEHLATCTRLRINGMAXMAX_CNT_U08 = DataDict.Constant;
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.LongName = 'Ford Vehicle Lateral Control Ring Max Maximum';
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.Description = [...
  'Maximum value of Ford Vehicle Lateral Control Ring Max '];
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.DocUnits = 'Cnt';
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.EngDT = dt.u08;
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.EngVal = 126;
FORDVEHLATCTRLRINGMAXMAX_CNT_U08.Define = 'Local';


FORDVEHLATCTRLRINGMAXMIN_CNT_U08 = DataDict.Constant;
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.LongName = 'Ford Vehicle Lateral Control Ring Max Minimum';
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.Description = [...
  'Minimum value of Ford Vehicle Lateral Control Ring Max '];
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.DocUnits = 'Cnt';
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.EngDT = dt.u08;
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.EngVal = 0;
FORDVEHLATCTRLRINGMAXMIN_CNT_U08.Define = 'Local';


LATCTRLCRVTOFFS_IVSMTR_F32 = DataDict.Constant;
LATCTRLCRVTOFFS_IVSMTR_F32.LongName = 'Lateral Control Curvature Offset';
LATCTRLCRVTOFFS_IVSMTR_F32.Description = [...
  'Offset for Ford Vehicle Lateral Control Curvature '];
LATCTRLCRVTOFFS_IVSMTR_F32.DocUnits = 'IvsMtr';
LATCTRLCRVTOFFS_IVSMTR_F32.EngDT = dt.float32;
LATCTRLCRVTOFFS_IVSMTR_F32.EngVal = 0.02;
LATCTRLCRVTOFFS_IVSMTR_F32.Define = 'Local';


LATCTRLCRVTRATEOFFS_IVSMTR_F32 = DataDict.Constant;
LATCTRLCRVTRATEOFFS_IVSMTR_F32.LongName = 'Lateral Control Curvature Rate Offset';
LATCTRLCRVTRATEOFFS_IVSMTR_F32.Description = [...
  'Offset for Ford Vehicle Lateral Control Curvature Rate '];
LATCTRLCRVTRATEOFFS_IVSMTR_F32.DocUnits = 'IvsMtr';
LATCTRLCRVTRATEOFFS_IVSMTR_F32.EngDT = dt.float32;
LATCTRLCRVTRATEOFFS_IVSMTR_F32.EngVal = 0.001024;
LATCTRLCRVTRATEOFFS_IVSMTR_F32.Define = 'Local';


LATCTRLCRVTRATERAW_CNT_U16 = DataDict.Constant;
LATCTRLCRVTRATERAW_CNT_U16.LongName = 'Lateral Control Curvature Rate Raw';
LATCTRLCRVTRATERAW_CNT_U16.Description = [...
  'Initialization Value of Ford Vehicle Lateral Control Curvature Rate Ra' ...
  'w'];
LATCTRLCRVTRATERAW_CNT_U16.DocUnits = 'Cnt';
LATCTRLCRVTRATERAW_CNT_U16.EngDT = dt.u16;
LATCTRLCRVTRATERAW_CNT_U16.EngVal = 4096;
LATCTRLCRVTRATERAW_CNT_U16.Define = 'Local';


LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32 = DataDict.Constant;
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.LongName = 'Lateral Control Curvature Rate Scaling Factor';
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Lateral Control Curvature Rate '];
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.DocUnits = 'IvsMtrCnt';
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.EngDT = dt.float32;
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.EngVal = 2.5e-07;
LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32.Define = 'Local';


LATCTRLCRVTRAW_CNT_U16 = DataDict.Constant;
LATCTRLCRVTRAW_CNT_U16.LongName = 'Lateral Control Curvature Raw';
LATCTRLCRVTRAW_CNT_U16.Description = [...
  'Initialization Value of Ford Vehicle Lateral Control Curvature Raw '];
LATCTRLCRVTRAW_CNT_U16.DocUnits = 'Cnt';
LATCTRLCRVTRAW_CNT_U16.EngDT = dt.u16;
LATCTRLCRVTRAW_CNT_U16.EngVal = 1000;
LATCTRLCRVTRAW_CNT_U16.Define = 'Local';


LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32 = DataDict.Constant;
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.LongName = 'Lateral Control Curvature Scaling Factor';
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Lateral Control Curvature '];
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.DocUnits = 'IvsMtrCnt';
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.EngDT = dt.float32;
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.EngVal = 2e-05;
LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32.Define = 'Local';


LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32 = DataDict.Constant;
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.LongName = 'Lateral Control Path Offset Scaling Factor';
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Lateral Control Path Offset '];
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.DocUnits = 'MtrPerCnt';
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.EngDT = dt.float32;
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.EngVal = 0.01;
LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32.Define = 'Local';


LATCTRLPAHOFFS_CNT_U16 = DataDict.Constant;
LATCTRLPAHOFFS_CNT_U16.LongName = 'Lateral Control Path Offset';
LATCTRLPAHOFFS_CNT_U16.Description = [...
  'Initialization Value of Ford Vehicle Lateral Control Path Offset Raw'];
LATCTRLPAHOFFS_CNT_U16.DocUnits = 'Cnt';
LATCTRLPAHOFFS_CNT_U16.EngDT = dt.u16;
LATCTRLPAHOFFS_CNT_U16.EngVal = 512;
LATCTRLPAHOFFS_CNT_U16.Define = 'Local';


LATCTRLPAHOFFS_RAD_F32 = DataDict.Constant;
LATCTRLPAHOFFS_RAD_F32.LongName = 'Lateral Control Path Offset';
LATCTRLPAHOFFS_RAD_F32.Description = [...
  'Offset for Ford Vehicle Lateral Control Path '];
LATCTRLPAHOFFS_RAD_F32.DocUnits = 'Rad';
LATCTRLPAHOFFS_RAD_F32.EngDT = dt.float32;
LATCTRLPAHOFFS_RAD_F32.EngVal = 0.5;
LATCTRLPAHOFFS_RAD_F32.Define = 'Local';


LATCTRLPAHSCAGFAC_RADPERCNT_F32 = DataDict.Constant;
LATCTRLPAHSCAGFAC_RADPERCNT_F32.LongName = 'Lateral Control Path Scaling Factor';
LATCTRLPAHSCAGFAC_RADPERCNT_F32.Description = [...
  'Scaling Factor for Ford Vehicle Lateral Control Path '];
LATCTRLPAHSCAGFAC_RADPERCNT_F32.DocUnits = 'RadPerCnt';
LATCTRLPAHSCAGFAC_RADPERCNT_F32.EngDT = dt.float32;
LATCTRLPAHSCAGFAC_RADPERCNT_F32.EngVal = 0.0005;
LATCTRLPAHSCAGFAC_RADPERCNT_F32.Define = 'Local';


LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08 = DataDict.Constant;
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.LongName = 'Lateral Control Ring Maximum Scaling Factor';
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.Description = [...
  'Scaling Factor for Ford Vehicle Lateral Control Ring Maximum '];
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.DocUnits = 'MtrPerCnt';
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.EngDT = dt.u08;
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.EngVal = 2;
LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08.Define = 'Local';


MODSEL_CNT_U08 = DataDict.Constant;
MODSEL_CNT_U08.LongName = 'Mode Select';
MODSEL_CNT_U08.Description = [...
  'Mode select constant is used to select the appropriate threshold based' ...
  ' on the EPSLifeCycMod '];
MODSEL_CNT_U08.DocUnits = 'Cnt';
MODSEL_CNT_U08.EngDT = dt.u08;
MODSEL_CNT_U08.EngVal = 1;
MODSEL_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
FordMsg3D3MissMsg = DataDict.NTC;
FordMsg3D3MissMsg.NtcNr = NtcNr1.NTCNR_0X151;
FordMsg3D3MissMsg.NtcTyp = 'None';
FordMsg3D3MissMsg.LongName = 'Ford Message 3D3 Missing Message';
FordMsg3D3MissMsg.Description = 'Used to set the NTC if message is missing';
FordMsg3D3MissMsg.NtcStInfo = DataDict.NtcStInfoBitPacked;
FordMsg3D3MissMsg.NtcStInfo.Bit0Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit1Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit2Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit3Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit4Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit5Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit6Descr = 'Unused';
FordMsg3D3MissMsg.NtcStInfo.Bit7Descr = 'Unused';
FordMsg3D3MissMsg.NtcStsLockdThisIgnCyc = 0;


%end of Data Dictionary
