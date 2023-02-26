%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 25-May-2016 13:34:29       %
%                                  Created with tool release: 2.40.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: KPIT                      %
%%-----------------------------------------------------------------------%

SF050A = DataDict.FDD;
SF050A.Version = '1.3.X';
SF050A.LongName = 'Motor Torque Transitional Damping';
SF050A.ShoName  = 'MotTqTranlDampg';
SF050A.DesignASIL = 'QM';
SF050A.Description = [...
  'Transitional damping is computed, triggered by LoaState or DiagStatus'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotTqTranlDampgInit1 = DataDict.Runnable;
MotTqTranlDampgInit1.Context = 'Rte';
MotTqTranlDampgInit1.TimeStep = 0;
MotTqTranlDampgInit1.Description = 'Initialization Runnable';

MotTqTranlDampgPer1 = DataDict.Runnable;
MotTqTranlDampgPer1.Context = 'Rte';
MotTqTranlDampgPer1.TimeStep = 0.002;
MotTqTranlDampgPer1.Description = 'Periodic Runnable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'MotTqTranlDampgPer1'};
GetRefTmr100MicroSec32bit.Description = 'Get Reference Timer Module';
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
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Reference Timer';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'MotTqTranlDampgPer1'};
GetTiSpan100MicroSec32bit.Description = 'Get Elapsed Time Module';
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference Timer';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Time Span';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiMechPolarity = DataDict.IpSignal;
AssiMechPolarity.LongName = 'Assist Mechanism Polarity';
AssiMechPolarity.Description = 'Polarity for Motor Torque Command';
AssiMechPolarity.DocUnits = 'Uls';
AssiMechPolarity.EngDT = dt.s08;
AssiMechPolarity.EngInit = 1;
AssiMechPolarity.EngMin = -1;
AssiMechPolarity.EngMax = 1;
AssiMechPolarity.ReadIn = {'MotTqTranlDampgPer1'};
AssiMechPolarity.ReadType = 'Rte';


DiagcStsCtrldShtDwnFltPrsnt = DataDict.IpSignal;
DiagcStsCtrldShtDwnFltPrsnt.LongName = 'Diagnostic Status Controlled Shutdown Fault Present';
DiagcStsCtrldShtDwnFltPrsnt.Description = [...
  'Fault for Diagnostic Status Controlled Shutdown'];
DiagcStsCtrldShtDwnFltPrsnt.DocUnits = 'Cnt';
DiagcStsCtrldShtDwnFltPrsnt.EngDT = dt.lgc;
DiagcStsCtrldShtDwnFltPrsnt.EngInit = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMin = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMax = 1;
DiagcStsCtrldShtDwnFltPrsnt.ReadIn = {'MotTqTranlDampgPer1'};
DiagcStsCtrldShtDwnFltPrsnt.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Position';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'MotTqTranlDampgPer1'};
HwAg.ReadType = 'Rte';


LoaSt = DataDict.IpSignal;
LoaSt.LongName = 'LOA State';
LoaSt.Description = 'LOA State';
LoaSt.DocUnits = 'Cnt';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = LoaSt1.LOAST_NORM;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.ReadIn = {'MotTqTranlDampgPer1'};
LoaSt.ReadType = 'Rte';


MotTqCmdCrf = DataDict.IpSignal;
MotTqCmdCrf.LongName = 'Motor Torque Command CRF';
MotTqCmdCrf.Description = [...
  'Motor Torque Command Core Reference Frame'];
MotTqCmdCrf.DocUnits = 'MotNwtMtr';
MotTqCmdCrf.EngDT = dt.float32;
MotTqCmdCrf.EngInit = 0;
MotTqCmdCrf.EngMin = -8.8;
MotTqCmdCrf.EngMax = 8.8;
MotTqCmdCrf.ReadIn = {'MotTqTranlDampgPer1'};
MotTqCmdCrf.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity CRF';
MotVelCrf.Description = [...
  'Motor Velocity Core Reference Frame'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'MotTqTranlDampgPer1'};
MotVelCrf.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'MotTqTranlDampgPer1'};
SysSt.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'MotTqTranlDampgPer1'};
VehSpd.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MotTqCmdCrfDampd = DataDict.OpSignal;
MotTqCmdCrfDampd.LongName = 'Motor Torque Command CRF Damped';
MotTqCmdCrfDampd.Description = [...
  'Normal summed motor torque commands with damping added to handle state' ...
  ' transitions or LOA Mitigation transitions.'];
MotTqCmdCrfDampd.DocUnits = 'MotNwtMtr';
MotTqCmdCrfDampd.SwcShoName = 'MotTqTranlDampg';
MotTqCmdCrfDampd.EngDT = dt.float32;
MotTqCmdCrfDampd.EngInit = 0;
MotTqCmdCrfDampd.EngMin = -8.8;
MotTqCmdCrfDampd.EngMax = 8.8;
MotTqCmdCrfDampd.TestTolerance = 0.0005;
MotTqCmdCrfDampd.WrittenIn = {'MotTqTranlDampgPer1'};
MotTqCmdCrfDampd.WriteType = 'Rte';


MotTqCmdMrfDampd = DataDict.OpSignal;
MotTqCmdMrfDampd.LongName = 'Motor Torque Command MRF Damped';
MotTqCmdMrfDampd.Description = [...
  'Normal summed motor torque commands with damping added to handle state' ...
  ' transitions or LOA Mitigation transitions, converted to motor referen' ...
  'ce frame.'];
MotTqCmdMrfDampd.DocUnits = 'MotNwtMtr';
MotTqCmdMrfDampd.SwcShoName = 'MotTqTranlDampg';
MotTqCmdMrfDampd.EngDT = dt.float32;
MotTqCmdMrfDampd.EngInit = 0;
MotTqCmdMrfDampd.EngMin = -8.8;
MotTqCmdMrfDampd.EngMax = 8.8;
MotTqCmdMrfDampd.TestTolerance = 0.0005;
MotTqCmdMrfDampd.WrittenIn = {'MotTqTranlDampgPer1'};
MotTqCmdMrfDampd.WriteType = 'Rte';


MotTqTranlDampgCmpl = DataDict.OpSignal;
MotTqTranlDampgCmpl.LongName = 'Motor Torque Transitional Damping Complete';
MotTqTranlDampgCmpl.Description = [...
  'Boolean flag.  True means that temporary transitional damping is no lo' ...
  'nger being applied.'];
MotTqTranlDampgCmpl.DocUnits = 'Cnt';
MotTqTranlDampgCmpl.SwcShoName = 'MotTqTranlDampg';
MotTqTranlDampgCmpl.EngDT = dt.lgc;
MotTqTranlDampgCmpl.EngInit = 0;
MotTqTranlDampgCmpl.EngMin = 0;
MotTqTranlDampgCmpl.EngMax = 1;
MotTqTranlDampgCmpl.TestTolerance = 0;
MotTqTranlDampgCmpl.WrittenIn = {'MotTqTranlDampgPer1'};
MotTqTranlDampgCmpl.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------
CtrldDampgScaX = DataDict.IRV;
CtrldDampgScaX.LongName = 'Controlled Damping Scale X';
CtrldDampgScaX.Description = [...
  'X-table created during initialization.  Used to create timer-based dam' ...
  'ping profile.'];
CtrldDampgScaX.DocUnits = 'MilliSec';
CtrldDampgScaX.EngDT = dt.u16p0;
CtrldDampgScaX.EngInit =  ...
   [0              100];
CtrldDampgScaX.EngMin = 0;
CtrldDampgScaX.EngMax = 1000;
CtrldDampgScaX.ReadIn = {'MotTqTranlDampgPer1'};
CtrldDampgScaX.WrittenIn = {'MotTqTranlDampgInit1'};


CtrldDampgScaY = DataDict.IRV;
CtrldDampgScaY.LongName = 'Controlled Damping Scale Y';
CtrldDampgScaY.Description = [...
  'Y-table created during initialization.  Used to create timer-based dam' ...
  'ping profile.'];
CtrldDampgScaY.DocUnits = 'Uls';
CtrldDampgScaY.EngDT = dt.u2p14;
CtrldDampgScaY.EngInit =  ...
   [1                0];
CtrldDampgScaY.EngMin = 0;
CtrldDampgScaY.EngMax = 1;
CtrldDampgScaY.ReadIn = {'MotTqTranlDampgPer1'};
CtrldDampgScaY.WrittenIn = {'MotTqTranlDampgInit1'};



%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotTqTranlDampgCmdLim = DataDict.Calibration;
MotTqTranlDampgCmdLim.LongName = 'Motor Torque Transitional Damping Command Limit';
MotTqTranlDampgCmdLim.Description = [...
  'Maximum allowed magnitude of damping torque command'];
MotTqTranlDampgCmdLim.DocUnits = 'MotNwtMtr';
MotTqTranlDampgCmdLim.EngDT = dt.float32;
MotTqTranlDampgCmdLim.EngVal = 3;
MotTqTranlDampgCmdLim.EngMin = 0;
MotTqTranlDampgCmdLim.EngMax = 5.75;
MotTqTranlDampgCmdLim.Cardinality = 'Inin';
MotTqTranlDampgCmdLim.CustomerVisible = false;
MotTqTranlDampgCmdLim.Online = false;
MotTqTranlDampgCmdLim.Impact = 'H';
MotTqTranlDampgCmdLim.TuningOwner = 'Safety';
MotTqTranlDampgCmdLim.GraphLink = {''};
MotTqTranlDampgCmdLim.Monotony = 'None';
MotTqTranlDampgCmdLim.MaxGrad = 5.75;
MotTqTranlDampgCmdLim.PortName = 'MotTqTranlDampgCmdLim';


MotTqTranlDampgDampgCoeff = DataDict.Calibration;
MotTqTranlDampgDampgCoeff.LongName = 'Motor Torque Transitional Damping Damping Coefficient';
MotTqTranlDampgDampgCoeff.Description = 'Coeff x MotVel = Damping Torque.';
MotTqTranlDampgDampgCoeff.DocUnits = 'MotNwtMtrPerRadPerSec';
MotTqTranlDampgDampgCoeff.EngDT = dt.float32;
MotTqTranlDampgDampgCoeff.EngVal = 0.036;
MotTqTranlDampgDampgCoeff.EngMin = 0;
MotTqTranlDampgDampgCoeff.EngMax = 2;
MotTqTranlDampgDampgCoeff.Cardinality = 'Inin';
MotTqTranlDampgDampgCoeff.CustomerVisible = false;
MotTqTranlDampgDampgCoeff.Online = false;
MotTqTranlDampgDampgCoeff.Impact = 'H';
MotTqTranlDampgDampgCoeff.TuningOwner = 'Safety';
MotTqTranlDampgDampgCoeff.GraphLink = {''};
MotTqTranlDampgDampgCoeff.Monotony = 'None';
MotTqTranlDampgDampgCoeff.MaxGrad = 2;
MotTqTranlDampgDampgCoeff.PortName = 'MotTqTranlDampgDampgCoeff';


MotTqTranlDampgRampEnd = DataDict.Calibration;
MotTqTranlDampgRampEnd.LongName = 'Motor Torque Transitional Damping Ramp End';
MotTqTranlDampgRampEnd.Description = [...
  'Tuneable Ramp Scale value associated with k_CtrlDmpTmrBkptTwo_mS'];
MotTqTranlDampgRampEnd.DocUnits = 'Uls';
MotTqTranlDampgRampEnd.EngDT = dt.u2p14;
MotTqTranlDampgRampEnd.EngVal = 0;
MotTqTranlDampgRampEnd.EngMin = 0;
MotTqTranlDampgRampEnd.EngMax = 1;
MotTqTranlDampgRampEnd.Cardinality = 'Inin';
MotTqTranlDampgRampEnd.CustomerVisible = false;
MotTqTranlDampgRampEnd.Online = false;
MotTqTranlDampgRampEnd.Impact = 'H';
MotTqTranlDampgRampEnd.TuningOwner = 'Safety';
MotTqTranlDampgRampEnd.GraphLink = {''};
MotTqTranlDampgRampEnd.Monotony = 'None';
MotTqTranlDampgRampEnd.MaxGrad = 1;
MotTqTranlDampgRampEnd.PortName = 'MotTqTranlDampgRampEnd';


MotTqTranlDampgTmrPt1 = DataDict.Calibration;
MotTqTranlDampgTmrPt1.LongName = 'Motor Torque Transitional Damping Timer Point 1';
MotTqTranlDampgTmrPt1.Description = [...
  'X value for tuning point 1 corresponding to a ramp scale factor of 1'];
MotTqTranlDampgTmrPt1.DocUnits = 'MilliSec';
MotTqTranlDampgTmrPt1.EngDT = dt.float32;
MotTqTranlDampgTmrPt1.EngVal = 100;
MotTqTranlDampgTmrPt1.EngMin = 0;
MotTqTranlDampgTmrPt1.EngMax = 1000;
MotTqTranlDampgTmrPt1.Cardinality = 'Inin';
MotTqTranlDampgTmrPt1.CustomerVisible = false;
MotTqTranlDampgTmrPt1.Online = false;
MotTqTranlDampgTmrPt1.Impact = 'H';
MotTqTranlDampgTmrPt1.TuningOwner = 'Safety';
MotTqTranlDampgTmrPt1.GraphLink = {''};
MotTqTranlDampgTmrPt1.Monotony = 'None';
MotTqTranlDampgTmrPt1.MaxGrad = 1000;
MotTqTranlDampgTmrPt1.PortName = 'MotTqTranlDampgTmrPt1';


MotTqTranlDampgTmrPt2 = DataDict.Calibration;
MotTqTranlDampgTmrPt2.LongName = 'Motor Torque Transitional Damping Timer Point 2';
MotTqTranlDampgTmrPt2.Description = [...
  'X value for tuning point 2 corresponding to a ramp scale factor of k_C' ...
  'ntrlDmpRampEnd_Uls'];
MotTqTranlDampgTmrPt2.DocUnits = 'MilliSec';
MotTqTranlDampgTmrPt2.EngDT = dt.float32;
MotTqTranlDampgTmrPt2.EngVal = 1000;
MotTqTranlDampgTmrPt2.EngMin = 0;
MotTqTranlDampgTmrPt2.EngMax = 1000;
MotTqTranlDampgTmrPt2.Cardinality = 'Inin';
MotTqTranlDampgTmrPt2.CustomerVisible = false;
MotTqTranlDampgTmrPt2.Online = false;
MotTqTranlDampgTmrPt2.Impact = 'H';
MotTqTranlDampgTmrPt2.TuningOwner = 'Safety';
MotTqTranlDampgTmrPt2.GraphLink = {''};
MotTqTranlDampgTmrPt2.Monotony = 'None';
MotTqTranlDampgTmrPt2.MaxGrad = 1000;
MotTqTranlDampgTmrPt2.PortName = 'MotTqTranlDampgTmrPt2';


MotTqTranlDampgVehSpdBlndX = DataDict.Calibration;
MotTqTranlDampgVehSpdBlndX.LongName = 'Motor Torque Transitional Damping Vehicle Speed Blend X';
MotTqTranlDampgVehSpdBlndX.Description = [...
  'X table to determine VehSpd blend.  Used to blend between 1 and the PP' ...
  'SValueto determine PPSScale.'];
MotTqTranlDampgVehSpdBlndX.DocUnits = 'Kph';
MotTqTranlDampgVehSpdBlndX.EngDT = dt.u9p7;
MotTqTranlDampgVehSpdBlndX.EngVal =  ...
   [0               10               20              100];
MotTqTranlDampgVehSpdBlndX.EngMin = 0;
MotTqTranlDampgVehSpdBlndX.EngMax = 511;
MotTqTranlDampgVehSpdBlndX.Cardinality = 'Inin';
MotTqTranlDampgVehSpdBlndX.CustomerVisible = false;
MotTqTranlDampgVehSpdBlndX.Online = false;
MotTqTranlDampgVehSpdBlndX.Impact = 'H';
MotTqTranlDampgVehSpdBlndX.TuningOwner = 'CSE';
MotTqTranlDampgVehSpdBlndX.GraphLink = {''};
MotTqTranlDampgVehSpdBlndX.Monotony = 'Strictly_Increasing';
MotTqTranlDampgVehSpdBlndX.MaxGrad = 511;
MotTqTranlDampgVehSpdBlndX.PortName = 'MotTqTranlDampgVehSpdBlndX';


MotTqTranlDampgVehSpdBlndY = DataDict.Calibration;
MotTqTranlDampgVehSpdBlndY.LongName = 'Motor Torque Transitional Damping Vehicle Speed Blend Y';
MotTqTranlDampgVehSpdBlndY.Description = [...
  'Should probably leave these values alone.  Usually tuned as [1 1 0 0].' ...
  '  Used to blend between 1 and the PPSValueto determine PPSScale.'];
MotTqTranlDampgVehSpdBlndY.DocUnits = 'Uls';
MotTqTranlDampgVehSpdBlndY.EngDT = dt.u2p14;
MotTqTranlDampgVehSpdBlndY.EngVal =  ...
   [1                1                0                0];
MotTqTranlDampgVehSpdBlndY.EngMin = 0;
MotTqTranlDampgVehSpdBlndY.EngMax = 1;
MotTqTranlDampgVehSpdBlndY.Cardinality = 'Cmn';
MotTqTranlDampgVehSpdBlndY.CustomerVisible = false;
MotTqTranlDampgVehSpdBlndY.Online = false;
MotTqTranlDampgVehSpdBlndY.Impact = 'H';
MotTqTranlDampgVehSpdBlndY.TuningOwner = 'CSE';
MotTqTranlDampgVehSpdBlndY.GraphLink = {'MotTqTranlDampgVehSpdBlndX'};
MotTqTranlDampgVehSpdBlndY.Monotony = 'Decreasing';
MotTqTranlDampgVehSpdBlndY.MaxGrad = 1;
MotTqTranlDampgVehSpdBlndY.PortName = 'MotTqTranlDampgVehSpdBlndY';


MotTqTranlDampgVelThd = DataDict.Calibration;
MotTqTranlDampgVelThd.LongName = 'Motor Torque Transitional Damping Velocity Threshold';
MotTqTranlDampgVelThd.Description = [...
  'Minimum motor velocity above which damping is applied'];
MotTqTranlDampgVelThd.DocUnits = 'MotRadPerSec';
MotTqTranlDampgVelThd.EngDT = dt.float32;
MotTqTranlDampgVelThd.EngVal = 2.3;
MotTqTranlDampgVelThd.EngMin = 0;
MotTqTranlDampgVelThd.EngMax = 700;
MotTqTranlDampgVelThd.Cardinality = 'Inin';
MotTqTranlDampgVelThd.CustomerVisible = false;
MotTqTranlDampgVelThd.Online = false;
MotTqTranlDampgVelThd.Impact = 'H';
MotTqTranlDampgVelThd.TuningOwner = 'Safety';
MotTqTranlDampgVelThd.GraphLink = {''};
MotTqTranlDampgVelThd.Monotony = 'None';
MotTqTranlDampgVelThd.MaxGrad = 700;
MotTqTranlDampgVelThd.PortName = 'MotTqTranlDampgVelThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dMotTqTranlDampgCmdCtrld = DataDict.Display;
dMotTqTranlDampgCmdCtrld.LongName = 'Motor Torque Transitional Damping Command Controlled';
dMotTqTranlDampgCmdCtrld.Description = [...
  'Raw damping command scaled by a time based profile.'];
dMotTqTranlDampgCmdCtrld.DocUnits = 'MotNwtMtr';
dMotTqTranlDampgCmdCtrld.EngDT = dt.float32;
dMotTqTranlDampgCmdCtrld.EngMin = -5.75;
dMotTqTranlDampgCmdCtrld.EngMax = 5.75;
dMotTqTranlDampgCmdCtrld.InitRowCol = [1  1];


dMotTqTranlDampgSignPhaSca = DataDict.Display;
dMotTqTranlDampgSignPhaSca.LongName = 'Motor Torque Transitional Damping Sign Phase Scale';
dMotTqTranlDampgSignPhaSca.Description = [...
  'Scale factor derived in Phase Plane Switching block.  When signs of Mo' ...
  'tVel and HwAg match, scale factor is a function of vehicle speed, othe' ...
  'rwise it is a constant 1.'];
dMotTqTranlDampgSignPhaSca.DocUnits = 'Uls';
dMotTqTranlDampgSignPhaSca.EngDT = dt.float32;
dMotTqTranlDampgSignPhaSca.EngMin = 0;
dMotTqTranlDampgSignPhaSca.EngMax = 1;
dMotTqTranlDampgSignPhaSca.InitRowCol = [1  1];


dMotTqTranlDampgTiElpd = DataDict.Display;
dMotTqTranlDampgTiElpd.LongName = 'Motor Torque Transitional Damping Time Elapsed';
dMotTqTranlDampgTiElpd.Description = [...
  'Elapsed time since transitional damping was first initiated.  Value = ' ...
  'zero during normal driving conditions.'];
dMotTqTranlDampgTiElpd.DocUnits = 'MilliSec';
dMotTqTranlDampgTiElpd.EngDT = dt.float32;
dMotTqTranlDampgTiElpd.EngMin = 0;
dMotTqTranlDampgTiElpd.EngMax = 1000;
dMotTqTranlDampgTiElpd.InitRowCol = [1  1];


dMotTqTranlDampgTmrEna = DataDict.Display;
dMotTqTranlDampgTmrEna.LongName = 'Motor Torque Transitional Damping Timer Enable';
dMotTqTranlDampgTmrEna.Description = [...
  'When true, transitional damping is being applied.'];
dMotTqTranlDampgTmrEna.DocUnits = 'Cnt';
dMotTqTranlDampgTmrEna.EngDT = dt.lgc;
dMotTqTranlDampgTmrEna.EngMin = 0;
dMotTqTranlDampgTmrEna.EngMax = 1;
dMotTqTranlDampgTmrEna.InitRowCol = [1  1];


dMotTqTranlDampgVelDampgCmd = DataDict.Display;
dMotTqTranlDampgVelDampgCmd.LongName = 'Motor Torque Transitional Damping Velocity Damping Command';
dMotTqTranlDampgVelDampgCmd.Description = [...
  'Motor velocity x damping coefficient x quadrant-dependent scale factor' ...
  ' (a.k.a phase plane switching).'];
dMotTqTranlDampgVelDampgCmd.DocUnits = 'MotNwtMtr';
dMotTqTranlDampgVelDampgCmd.EngDT = dt.float32;
dMotTqTranlDampgVelDampgCmd.EngMin = -2700;
dMotTqTranlDampgVelDampgCmd.EngMax = 2700;
dMotTqTranlDampgVelDampgCmd.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
DiagStsPrev = DataDict.PIM;
DiagStsPrev.LongName = 'Diagnosis Status Previous';
DiagStsPrev.Description = [...
  'State variable for DiagcStsCtrldShtDwnFltPrsnt.'];
DiagStsPrev.DocUnits = 'Cnt';
DiagStsPrev.EngDT = dt.lgc;
DiagStsPrev.EngMin = 0;
DiagStsPrev.EngMax = 1;
DiagStsPrev.InitRowCol = [1  1];


LoaStPrev = DataDict.PIM;
LoaStPrev.LongName = 'LOA State Previous';
LoaStPrev.Description = 'State variable for LoaSt.';
LoaStPrev.DocUnits = 'Cnt';
LoaStPrev.EngDT = enum.LoaSt1;
LoaStPrev.EngMin = LoaSt1.LOAST_NORM;
LoaStPrev.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaStPrev.InitRowCol = [1  1];


StLtchPrev = DataDict.PIM;
StLtchPrev.LongName = 'State Latch';
StLtchPrev.Description = [...
  'State Latch is udes to compute Motor Torque Damping'];
StLtchPrev.DocUnits = 'Cnt';
StLtchPrev.EngDT = dt.lgc;
StLtchPrev.EngMin = 0;
StLtchPrev.EngMax = 1;
StLtchPrev.InitRowCol = [1  1];


TmrRefTi = DataDict.PIM;
TmrRefTi.LongName = 'Timer Reference Time';
TmrRefTi.Description = [...
  'Reference time, saved across execution loops to calculate elapsed time' ...
  '.'];
TmrRefTi.DocUnits = 'Cnt';
TmrRefTi.EngDT = dt.u32;
TmrRefTi.EngMin = 0;
TmrRefTi.EngMax = 4294967295;
TmrRefTi.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
RAMPSTRT_ULS_U2P14 = DataDict.Constant;
RAMPSTRT_ULS_U2P14.LongName = 'Ramp Start';
RAMPSTRT_ULS_U2P14.Description = [...
  'Initial value of 2-point ramp-out applied to transitional damping comm' ...
  'and.'];
RAMPSTRT_ULS_U2P14.DocUnits = 'Uls';
RAMPSTRT_ULS_U2P14.EngDT = dt.u2p14;
RAMPSTRT_ULS_U2P14.EngVal = 1;
RAMPSTRT_ULS_U2P14.Define = 'Local';


SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command High Limit';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Description = [...
  'Limit on high value of motor torque command.'];
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.EngVal = 8.8;
SYSGLBPRM_MOTTQCMDHILIM_MOTNWTMTR_F32.Define = 'Global';


SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32 = DataDict.Constant;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.LongName = 'Motor Torque Command Low Limit';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Description = [...
  'Limit on lower value of motor torque command'];
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.DocUnits = 'MotNwtMtr';
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngDT = dt.float32;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.EngVal = -8.8;
SYSGLBPRM_MOTTQCMDLOLIM_MOTNWTMTR_F32.Define = 'Global';


TICNVN_MILLISECPERCNT_F32 = DataDict.Constant;
TICNVN_MILLISECPERCNT_F32.LongName = 'Time Conversion';
TICNVN_MILLISECPERCNT_F32.Description = [...
  'Need to get output from 100 uSec timer into milliseconds.  Not sure if' ...
  ' this is correct.'];
TICNVN_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
TICNVN_MILLISECPERCNT_F32.EngDT = dt.float32;
TICNVN_MILLISECPERCNT_F32.EngVal = 0.1;
TICNVN_MILLISECPERCNT_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
