%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Dec-2017 09:45:47       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: X %           %
%                                  Derived by: %derived_by: X %          %
%%-----------------------------------------------------------------------%

CF050A = DataDict.FDD;
CF050A.Version = '1.0.X';
CF050A.LongName = 'Ford CAN DTC Inhibit';
CF050A.ShoName  = 'FordCanDtcInhb';
CF050A.DesignASIL = 'B';
CF050A.Description = [...
  'This function will inhibit requested CAN DTC messagesfor Ford vehicles' ...
  '.This module inhibits CAN DTC messages based on Ford requirements'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordCanDtcInhbInit1 = DataDict.Runnable;
FordCanDtcInhbInit1.Context = 'Rte';
FordCanDtcInhbInit1.TimeStep = 0;
FordCanDtcInhbInit1.Description = 'Initialization Runnable';

FordCanDtcInhbPer1 = DataDict.Runnable;
FordCanDtcInhbPer1.Context = 'Rte';
FordCanDtcInhbPer1.TimeStep = 0.01;
FordCanDtcInhbPer1.Description = [...
  'Periodic Runnable at 10 milli-seconds '];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'FordCanDtcInhbInit1','FordCanDtcInhbPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'It captures simulation time fromthe SimnTi value obtained at root laye' ...
  'r of model and gives the RefTmr.'];
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
GetTiSpan100MicroSec32bit.CallLocation = {'FordCanDtcInhbPer1'};
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



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
FordBattVltgEstimn = DataDict.IpSignal;
FordBattVltgEstimn.LongName = 'Ford Battery Voltage  Estimation';
FordBattVltgEstimn.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False '];
FordBattVltgEstimn.DocUnits = 'Volt';
FordBattVltgEstimn.EngDT = dt.float32;
FordBattVltgEstimn.EngInit = 0;
FordBattVltgEstimn.EngMin = -256;
FordBattVltgEstimn.EngMax = 255.98;
FordBattVltgEstimn.ReadIn = {'FordCanDtcInhbPer1'};
FordBattVltgEstimn.ReadType = 'Rte';


FordEpsSysSt = DataDict.IpSignal;
FordEpsSysSt.LongName = 'Ford EPS System State';
FordEpsSysSt.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False'];
FordEpsSysSt.DocUnits = 'Cnt';
FordEpsSysSt.EngDT = enum.FordEpsSysSt1;
FordEpsSysSt.EngInit = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMin = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMax = FordEpsSysSt1.FORDEPSSYSST_EPS_PWRDWN;
FordEpsSysSt.ReadIn = {'FordCanDtcInhbPer1'};
FordEpsSysSt.ReadType = 'Rte';


FordHardWireIgnOn = DataDict.IpSignal;
FordHardWireIgnOn.LongName = 'Ford Hard Wire Ignition On';
FordHardWireIgnOn.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False'];
FordHardWireIgnOn.DocUnits = 'Cnt';
FordHardWireIgnOn.EngDT = dt.lgc;
FordHardWireIgnOn.EngInit = 0;
FordHardWireIgnOn.EngMin = 0;
FordHardWireIgnOn.EngMax = 1;
FordHardWireIgnOn.ReadIn = {'FordCanDtcInhbPer1'};
FordHardWireIgnOn.ReadType = 'Rte';


FordVehElecPwrSts = DataDict.IpSignal;
FordVehElecPwrSts.LongName = 'Ford Vehicle Electric Power Status';
FordVehElecPwrSts.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False'];
FordVehElecPwrSts.DocUnits = 'Cnt';
FordVehElecPwrSts.EngDT = enum.Ford_ElPw_D_Stat;
FordVehElecPwrSts.EngInit = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMin = Ford_ElPw_D_Stat.Cx0_Not_Supported;
FordVehElecPwrSts.EngMax = Ford_ElPw_D_Stat.Cx7_NotUsed_3;
FordVehElecPwrSts.ReadIn = {'FordCanDtcInhbPer1'};
FordVehElecPwrSts.ReadType = 'Rte';


FordVehIgnStsQly = DataDict.IpSignal;
FordVehIgnStsQly.LongName = 'Ford Vehicle Ignition Status Quality';
FordVehIgnStsQly.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False'];
FordVehIgnStsQly.DocUnits = 'Cnt';
FordVehIgnStsQly.EngDT = enum.Ford_Ignition_Status;
FordVehIgnStsQly.EngInit = Ford_Ignition_Status.Cx0_Unknown;
FordVehIgnStsQly.EngMin = Ford_Ignition_Status.Cx0_Unknown;
FordVehIgnStsQly.EngMax = Ford_Ignition_Status.CxF_Invalid;
FordVehIgnStsQly.ReadIn = {'FordCanDtcInhbPer1'};
FordVehIgnStsQly.ReadType = 'Rte';


FordVehLifeCycModQly = DataDict.IpSignal;
FordVehLifeCycModQly.LongName = 'Ford Vehicle Life Cycle Mode Quality';
FordVehLifeCycModQly.Description = [...
  'This signal is used for processing of output Ford EPS LIfe Cycle Mode'];
FordVehLifeCycModQly.DocUnits = 'Cnt';
FordVehLifeCycModQly.EngDT = enum.Ford_LifeCycMde_D_Actl;
FordVehLifeCycModQly.EngInit = Ford_LifeCycMde_D_Actl.Cx0_Normal;
FordVehLifeCycModQly.EngMin = Ford_LifeCycMde_D_Actl.Cx0_Normal;
FordVehLifeCycModQly.EngMax = Ford_LifeCycMde_D_Actl.Cx3_Transport;
FordVehLifeCycModQly.ReadIn = {'FordCanDtcInhbPer1'};
FordVehLifeCycModQly.ReadType = 'Rte';


FordVehPwrpkTqSts = DataDict.IpSignal;
FordVehPwrpkTqSts.LongName = 'Ford Vehicle Powerpack Torque Status';
FordVehPwrpkTqSts.Description = [...
  'This is signal is used to set CAN DTC Inhibit True or False'];
FordVehPwrpkTqSts.DocUnits = 'Cnt';
FordVehPwrpkTqSts.EngDT = enum.Ford_PwPckTq_D_Stat;
FordVehPwrpkTqSts.EngInit = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
FordVehPwrpkTqSts.ReadIn = {'FordCanDtcInhbPer1'};
FordVehPwrpkTqSts.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordCanDtcInhb = DataDict.OpSignal;
FordCanDtcInhb.LongName = 'Ford CAN DTC Inhibit';
FordCanDtcInhb.Description = [...
  'Can Dtc Inhibit is set to true or false based on certain parameters'];
FordCanDtcInhb.DocUnits = 'Cnt';
FordCanDtcInhb.SwcShoName = 'FordCanDtcInhb';
FordCanDtcInhb.EngDT = dt.lgc;
FordCanDtcInhb.EngInit = 1;
FordCanDtcInhb.EngMin = 0;
FordCanDtcInhb.EngMax = 1;
FordCanDtcInhb.TestTolerance = 0;
FordCanDtcInhb.WrittenIn = {'FordCanDtcInhbPer1'};
FordCanDtcInhb.WriteType = 'Rte';


FordEpsLifeCycMod = DataDict.OpSignal;
FordEpsLifeCycMod.LongName = 'Ford Electric Power Steering Life Cycle Mode';
FordEpsLifeCycMod.Description = [...
  'Processed value from Ford Vehicle Life Cycle Mode Quality'];
FordEpsLifeCycMod.DocUnits = 'Cnt';
FordEpsLifeCycMod.SwcShoName = 'FordCanDtcInhb';
FordEpsLifeCycMod.EngDT = dt.lgc;
FordEpsLifeCycMod.EngInit = 0;
FordEpsLifeCycMod.EngMin = 0;
FordEpsLifeCycMod.EngMax = 1;
FordEpsLifeCycMod.TestTolerance = 0;
FordEpsLifeCycMod.WrittenIn = {'FordCanDtcInhbPer1'};
FordEpsLifeCycMod.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
FordCanDtcInhbFactryModThd = DataDict.Calibration;
FordCanDtcInhbFactryModThd.LongName = 'Ford Can Dtc Inhibit Factory Mode Threshold';
FordCanDtcInhbFactryModThd.Description = [...
  'Threshold to EPS Life cycle Mode to factory mode'];
FordCanDtcInhbFactryModThd.DocUnits = 'MilliSec';
FordCanDtcInhbFactryModThd.EngDT = dt.u16p0;
FordCanDtcInhbFactryModThd.EngVal = 0;
FordCanDtcInhbFactryModThd.EngMin = 0;
FordCanDtcInhbFactryModThd.EngMax = 65535;
FordCanDtcInhbFactryModThd.Cardinality = 'Cmn';
FordCanDtcInhbFactryModThd.CustomerVisible = false;
FordCanDtcInhbFactryModThd.Online = false;
FordCanDtcInhbFactryModThd.Impact = 'L';
FordCanDtcInhbFactryModThd.TuningOwner = 'EPDT';
FordCanDtcInhbFactryModThd.GraphLink = {''};
FordCanDtcInhbFactryModThd.Monotony = 'None';
FordCanDtcInhbFactryModThd.MaxGrad = Inf;
FordCanDtcInhbFactryModThd.PortName = 'FordCanDtcInhbFactryModThd';


FordCanDtcInhbTransptModThd = DataDict.Calibration;
FordCanDtcInhbTransptModThd.LongName = 'Ford Can Dtc Inhibit Transport Mode Threshold';
FordCanDtcInhbTransptModThd.Description = [...
  'Threshold to EPS Life cycle Mode to transport mode'];
FordCanDtcInhbTransptModThd.DocUnits = 'MilliSec';
FordCanDtcInhbTransptModThd.EngDT = dt.u16p0;
FordCanDtcInhbTransptModThd.EngVal = 0;
FordCanDtcInhbTransptModThd.EngMin = 0;
FordCanDtcInhbTransptModThd.EngMax = 65535;
FordCanDtcInhbTransptModThd.Cardinality = 'Cmn';
FordCanDtcInhbTransptModThd.CustomerVisible = false;
FordCanDtcInhbTransptModThd.Online = false;
FordCanDtcInhbTransptModThd.Impact = 'L';
FordCanDtcInhbTransptModThd.TuningOwner = 'EPDT';
FordCanDtcInhbTransptModThd.GraphLink = {''};
FordCanDtcInhbTransptModThd.Monotony = 'None';
FordCanDtcInhbTransptModThd.MaxGrad = Inf;
FordCanDtcInhbTransptModThd.PortName = 'FordCanDtcInhbTransptModThd';



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
CanDtcInhbRefTi = DataDict.PIM;
CanDtcInhbRefTi.LongName = 'CAN DTC Inhibit Reference Time';
CanDtcInhbRefTi.Description = [...
  'Timer to update CAN DTC Inhibit as true or false based on threshold va' ...
  'lue'];
CanDtcInhbRefTi.DocUnits = 'Cnt';
CanDtcInhbRefTi.EngDT = dt.u32;
CanDtcInhbRefTi.EngMin = 0;
CanDtcInhbRefTi.EngMax = 4294967295;
CanDtcInhbRefTi.InitRowCol = [1  1];


EpsFactryModRefTi = DataDict.PIM;
EpsFactryModRefTi.LongName = 'EPS Factory Mode Reference Time';
EpsFactryModRefTi.Description = [...
  'Timer to update Ford Electric Power Factory Mode as true or false base' ...
  'd on threshold value'];
EpsFactryModRefTi.DocUnits = 'Cnt';
EpsFactryModRefTi.EngDT = dt.u32;
EpsFactryModRefTi.EngMin = 0;
EpsFactryModRefTi.EngMax = 4294967295;
EpsFactryModRefTi.InitRowCol = [1  1];


EpsLifeCycModPrev = DataDict.PIM;
EpsLifeCycModPrev.LongName = 'EPS Life Cycle Mode Previous';
EpsLifeCycModPrev.Description = [...
  'Used to hold previous value of Ford Electric Power Steering Life Cycle' ...
  ' Mode'];
EpsLifeCycModPrev.DocUnits = 'Cnt';
EpsLifeCycModPrev.EngDT = dt.lgc;
EpsLifeCycModPrev.EngMin = 0;
EpsLifeCycModPrev.EngMax = 1;
EpsLifeCycModPrev.InitRowCol = [1  1];


EpsLifeCycModRefTi = DataDict.PIM;
EpsLifeCycModRefTi.LongName = 'EPS Life Cycle Mode Reference Time';
EpsLifeCycModRefTi.Description = [...
  'Timer to update Ford Electric Power SteeringLife Cycle Mode as true or' ...
  ' false based on threshold value'];
EpsLifeCycModRefTi.DocUnits = 'Cnt';
EpsLifeCycModRefTi.EngDT = dt.u32;
EpsLifeCycModRefTi.EngMin = 0;
EpsLifeCycModRefTi.EngMax = 4294967295;
EpsLifeCycModRefTi.InitRowCol = [1  1];


EpsTransptModRefTi = DataDict.PIM;
EpsTransptModRefTi.LongName = 'EPS Transport Mode Reference Time';
EpsTransptModRefTi.Description = [...
  'Timer to update Ford Electric Power Transport Mode as true or false ba' ...
  'sed on threshold value'];
EpsTransptModRefTi.DocUnits = 'Cnt';
EpsTransptModRefTi.EngDT = dt.u32;
EpsTransptModRefTi.EngMin = 0;
EpsTransptModRefTi.EngMax = 4294967295;
EpsTransptModRefTi.InitRowCol = [1  1];


FordReqdEpsLifeCycModPrev = DataDict.PIM;
FordReqdEpsLifeCycModPrev.LongName = 'Ford Requested EPS Life Cycle Mode Previous';
FordReqdEpsLifeCycModPrev.Description = [...
  'It is used to hold the previous value of Ford Requested EPS Life Cycle' ...
  ' Mode if new value is not set. And it displays the value during vehicl' ...
  'e testing.'];
FordReqdEpsLifeCycModPrev.DocUnits = 'Cnt';
FordReqdEpsLifeCycModPrev.EngDT = enum.FordEpsLifeCycMod1;
FordReqdEpsLifeCycModPrev.EngMin = FordEpsLifeCycMod1.Norm;
FordReqdEpsLifeCycModPrev.EngMax = FordEpsLifeCycMod1.Transpt;
FordReqdEpsLifeCycModPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
BATTVLTGTHD_VOLT_F32 = DataDict.Constant;
BATTVLTGTHD_VOLT_F32.LongName = 'Battery Voltage Threshhold';
BATTVLTGTHD_VOLT_F32.Description = [...
  'This constant sets the threshold voltage to determine CAN DTC Inhibit.' ...
  ''];
BATTVLTGTHD_VOLT_F32.DocUnits = 'Volt';
BATTVLTGTHD_VOLT_F32.EngDT = dt.u16;
BATTVLTGTHD_VOLT_F32.EngVal = 10;
BATTVLTGTHD_VOLT_F32.Define = 'Local';


CNVMILLISECTOCNT_CNTPERMILLISEC_U16 = DataDict.Constant;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.LongName = 'Convert Millisecond to Count';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Description = [...
  'one count of elapsed timer is equal to 100 microseconds. The count val' ...
  'ue is multiplied by this constant to convert millisecond to count'];
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngDT = dt.u16;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.EngVal = 10;
CNVMILLISECTOCNT_CNTPERMILLISEC_U16.Define = 'Local';


FIXDTHDTI_MILLISEC_U16 = DataDict.Constant;
FIXDTHDTI_MILLISEC_U16.LongName = 'Fixed Threshold Time ';
FIXDTHDTI_MILLISEC_U16.Description = [...
  'Pass a constant value of 5100 ms to set threshold'];
FIXDTHDTI_MILLISEC_U16.DocUnits = 'MilliSec';
FIXDTHDTI_MILLISEC_U16.EngDT = dt.u16;
FIXDTHDTI_MILLISEC_U16.EngVal = 5100;
FIXDTHDTI_MILLISEC_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
