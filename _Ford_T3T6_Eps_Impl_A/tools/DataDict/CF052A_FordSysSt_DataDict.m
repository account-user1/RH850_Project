%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Jan-2018 12:40:49       %
%                                  Created with tool release: 3.2.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

CF052A = DataDict.FDD;
CF052A.Version = '1.0.X';
CF052A.LongName = 'Ford System State';
CF052A.ShoName  = 'FordSysSt';
CF052A.DesignASIL = 'D';
CF052A.Description = [...
  'Ford System State will handle the internal states and failure modes an' ...
  'd output the correct current state to the bus.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
FordSysStInit1 = DataDict.Runnable;
FordSysStInit1.Context = 'Rte';
FordSysStInit1.TimeStep = 0;
FordSysStInit1.Description = 'Initialization Runnable';

FordSysStPer1 = DataDict.Runnable;
FordSysStPer1.Context = 'Rte';
FordSysStPer1.TimeStep = 0.004;
FordSysStPer1.Description = 'Periodic Runnable at 10 ms';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'FordSysStPer1'};
GetNtcQlfrSts.Description = [...
  'Client defintion to return NTC state'];
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = 0;
GetNtcQlfrSts.Return.Description = 'Standard Return';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'Enum definition of NTC numbers';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Enum to indicate the state of NTC';


GetGpioMcuEna = DataDict.Client;
GetGpioMcuEna.CallLocation = {'GmVehPwrModPer1'};
GetGpioMcuEna.Description = [...
  'It is used to get the status of Communication Enable.'];
GetGpioMcuEna.Return = DataDict.CSReturn;
GetGpioMcuEna.Return.Type = 'Standard';
GetGpioMcuEna.Return.Min = 0;
GetGpioMcuEna.Return.Max = 1;
GetGpioMcuEna.Return.TestTolerance = 0;
GetGpioMcuEna.Return.Description = '';
GetGpioMcuEna.Arguments(1) = DataDict.CSArguments;
GetGpioMcuEna.Arguments(1).Name = 'PinSt';
GetGpioMcuEna.Arguments(1).EngDT = dt.lgc;
GetGpioMcuEna.Arguments(1).EngMin = 0;
GetGpioMcuEna.Arguments(1).EngMax = 1;
GetGpioMcuEna.Arguments(1).TestTolerance = 999;
GetGpioMcuEna.Arguments(1).Units = 'Cnt';
GetGpioMcuEna.Arguments(1).Direction = 'Out';
GetGpioMcuEna.Arguments(1).InitRowCol = [1  1];
GetGpioMcuEna.Arguments(1).Description = '';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
SysStWrmIninCmpl = DataDict.IpSignal;
SysStWrmIninCmpl.LongName = 'Warm Init Start Up Testing Completed';
SysStWrmIninCmpl.DocUnits = 'Cnt';
SysStWrmIninCmpl.EngDT = dt.lgc;
SysStWrmIninCmpl.EngInit = 0;
SysStWrmIninCmpl.EngMin = 0;
SysStWrmIninCmpl.EngMax = 1;
SysStWrmIninCmpl.ReadIn = {'SysStModPer1'};
SysStWrmIninCmpl.ReadType = 'Rte';


SysStReqEnaOvrd = DataDict.IpSignal;
SysStReqEnaOvrd.LongName = 'System State Request Enable Override';
SysStReqEnaOvrd.DocUnits = 'Cnt';
SysStReqEnaOvrd.EngDT = dt.lgc;
SysStReqEnaOvrd.EngInit = 0;
SysStReqEnaOvrd.EngMin = 0;
SysStReqEnaOvrd.EngMax = 1;
SysStReqEnaOvrd.ReadIn = {'SysStModPer1'};
SysStReqEnaOvrd.ReadType = 'Rte';


LoaSt = DataDict.IpSignal;
LoaSt.LongName = 'LOA State';
LoaSt.Description = 'Represent LOA State';
LoaSt.DocUnits = 'Cnt';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = LoaSt1.LOAST_NORM;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.ReadIn = {'FordSysStPer1'};
LoaSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'Represents the Ford System State';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'FordSysStPer1'};
SysSt.ReadType = 'Rte';


FordVehPwrpkTqSts = DataDict.IpSignal;
FordVehPwrpkTqSts.LongName = 'Ford Vehicle Power Pack Torque Status';
FordVehPwrpkTqSts.Description = [...
  'It provid information about Torque sensor information'];
FordVehPwrpkTqSts.DocUnits = 'Cnt';
FordVehPwrpkTqSts.EngDT = enum.Ford_PwPckTq_D_Stat;
FordVehPwrpkTqSts.EngInit = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMin = Ford_PwPckTq_D_Stat.Cx0_PwPckOff_TqNotAvailable;
FordVehPwrpkTqSts.EngMax = Ford_PwPckTq_D_Stat.Cx3_PwPckOn_TqAvailable;
FordVehPwrpkTqSts.ReadIn = {'FordSysStPer1'};
FordVehPwrpkTqSts.ReadType = 'Rte';


FordVehSpd = DataDict.IpSignal;
FordVehSpd.LongName = 'Ford Vehicle Speed';
FordVehSpd.Description = 'Ford Vehicle Speed';
FordVehSpd.DocUnits = 'Kph';
FordVehSpd.EngDT = dt.float32;
FordVehSpd.EngInit = 0;
FordVehSpd.EngMin = 0;
FordVehSpd.EngMax = 511;
FordVehSpd.ReadIn = {'FordSysStPer1'};
FordVehSpd.ReadType = 'Rte';


FordVehSpdVld = DataDict.IpSignal;
FordVehSpdVld.LongName = 'Ford Vehicle Speed Valid';
FordVehSpdVld.Description = [...
  'To check the validity of vehicle speed'];
FordVehSpdVld.DocUnits = 'Cnt';
FordVehSpdVld.EngDT = dt.lgc;
FordVehSpdVld.EngInit = 0;
FordVehSpdVld.EngMin = 0;
FordVehSpdVld.EngMax = 1;
FordVehSpdVld.ReadIn = {'FordSysStPer1'};
FordVehSpdVld.ReadType = 'Rte';


FordVltgOperSt = DataDict.IpSignal;
FordVltgOperSt.LongName = 'Ford Voltage  Operation State';
FordVltgOperSt.Description = [...
  'Represents the Voltage  Operation State'];
FordVltgOperSt.DocUnits = 'Cnt';
FordVltgOperSt.EngDT = enum.FordVltgOperSt1;
FordVltgOperSt.EngInit = FordVltgOperSt1.FORDVLTGOPERST_NORMVLTGOP;
FordVltgOperSt.EngMin = FordVltgOperSt1.FORDVLTGOPERST_NORMVLTGOP;
FordVltgOperSt.EngMax = FordVltgOperSt1.FORDVLTGOPERST_HIVLTG_NOASSI;
FordVltgOperSt.ReadIn = {'FordSysStPer1'};
FordVltgOperSt.ReadType = 'Rte';


FordVltgOperRamp = DataDict.IpSignal;
FordVltgOperRamp.LongName = 'Ford Voltage  Operation State';
FordVltgOperRamp.Description = [...
  'Represents the Voltage Operation Ramp'];
FordVltgOperRamp.DocUnits = 'Cnt';
FordVltgOperRamp.EngDT = dt.float32;
FordVltgOperRamp.EngInit = 1;
FordVltgOperRamp.EngMin = 0.1;
FordVltgOperRamp.EngMax = 500;
FordVltgOperRamp.ReadIn = {'FordSysStPer1'};
FordVltgOperRamp.ReadType = 'Rte';


FordVltgOperScar = DataDict.IpSignal;
FordVltgOperScar.LongName = 'Ford Voltage Operation Scaler';
FordVltgOperScar.Description = [...
  'Represents the Voltage  Operation State'];
FordVltgOperScar.DocUnits = 'Cnt';
FordVltgOperScar.EngDT = dt.float32;
FordVltgOperScar.EngInit = 1;
FordVltgOperScar.EngMin = 0;
FordVltgOperScar.EngMax = 1;
FordVltgOperScar.ReadIn = {'FordSysStPer1'};
FordVltgOperScar.ReadType = 'Rte';


%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
FordEpsFailr = DataDict.OpSignal;
FordEpsFailr.LongName = 'Ford Epas Failure';
FordEpsFailr.Description = [...
  'Represent the Ford Epas Failure state '];
FordEpsFailr.DocUnits = 'Cnt';
FordEpsFailr.SwcShoName = 'FordSysSt';
FordEpsFailr.EngDT = enum.Ford_EPAS_Failure;
FordEpsFailr.EngInit = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
FordEpsFailr.EngMin = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
FordEpsFailr.EngMax = Ford_EPAS_Failure.Cx3_SERVICE_POWER_STEERING_NOW;
FordEpsFailr.TestTolerance = 0;
FordEpsFailr.WrittenIn = {'FordSysStPer1'};
FordEpsFailr.WriteType = 'Rte';


FordEpsSysSt = DataDict.OpSignal;
FordEpsSysSt.LongName = 'Ford Eps System State';
FordEpsSysSt.Description = [...
  'Represent the Ford Eps System State'];
FordEpsSysSt.DocUnits = 'Cnt';
FordEpsSysSt.SwcShoName = 'FordSysSt';
FordEpsSysSt.EngDT = enum.FordEpsSysSt1;
FordEpsSysSt.EngInit = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMin = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysSt.EngMax = FordEpsSysSt1.FORDEPSSYSST_EPS_PWRDWN;
FordEpsSysSt.TestTolerance = 0;
FordEpsSysSt.WrittenIn = {'FordSysStPer1'};
FordEpsSysSt.WriteType = 'Rte';


SysStReqEna.OpSignal;
SysStReqEna.LongName = 'System State Required Enable';
SysStReqEna.Description = [...
  'Represent the C Term for Vehicle Power Modes'];
SysStReqEna.DocUnits = 'Cnt';
SysStReqEna.SwcShoName = 'FordSysSt';
SysStReqEna.EngDT = dt.lgc;
SysStReqEna.EngInit = 0;
SysStReqEna.EngMin = 0;
SysStReqEna.EngMax = 1;
SysStReqEna.TestTolerance = 0;
SysStReqEna.WrittenIn = {'SysStReqEnaPer1'};
SysStReqEna.WriteType = 'Rte';


FordPwrSplyEnaReq = DataDict.OpSignal;
FordPwrSplyEnaReq.LongName = 'Ford Power Supply Enable Request';
FordPwrSplyEnaReq.Description = [...
  'FordPwrSplyEnaReq will enable or disable based on EpsEna '];
FordPwrSplyEnaReq.DocUnits = 'Cnt';
FordPwrSplyEnaReq.SwcShoName = 'FordSysSt';
FordPwrSplyEnaReq.EngDT = dt.lgc;
FordPwrSplyEnaReq.EngInit = 0;
FordPwrSplyEnaReq.EngMin = 0;
FordPwrSplyEnaReq.EngMax = 1;
FordPwrSplyEnaReq.TestTolerance = 0;
FordPwrSplyEnaReq.WrittenIn = {'FordSysStPer1'};
FordPwrSplyEnaReq.WriteType = 'Rte';


FordSteerModlSts = DataDict.OpSignal;
FordSteerModlSts.LongName = 'Ford Steering Module Status';
FordSteerModlSts.Description = [...
  'Represent the Ford Steering Module Status'];
FordSteerModlSts.DocUnits = 'Cnt';
FordSteerModlSts.SwcShoName = 'FordSysSt';
FordSteerModlSts.EngDT = enum.Ford_SteMdule_D_Stat;
FordSteerModlSts.EngInit = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
FordSteerModlSts.EngMin = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
FordSteerModlSts.EngMax = Ford_SteMdule_D_Stat.Cx7_NotUsed;
FordSteerModlSts.TestTolerance = 0;
FordSteerModlSts.WrittenIn = {'FordSysStPer1'};
FordSteerModlSts.WriteType = 'Rte';


OperScaFctr = DataDict.OpSignal;
OperScaFctr.LongName = 'Operation Scale Factor';
OperScaFctr.Description = [...
  'Represent the scaler target used to ramp assist during state transitions '];
OperScaFctr.DocUnits = 'Cnt';
OperScaFctr.SwcShoName = 'FordSysSt';
OperScaFctr.EngDT = dt.float32;
OperScaFctr.EngInit = 1;
OperScaFctr.EngMin = 0;
OperScaFctr.EngMax = 1;
OperScaFctr.TestTolerance = 0;
OperScaFctr.WrittenIn = {'FordSysStPer1'};
OperScaFctr.WriteType = 'Rte';


OperRampRate = DataDict.OpSignal;
OperRampRate.LongName = 'Operation Ramp Rate';
OperRampRate.Description = [...
  'Represent the Ramp Rate used to ramp assist during state transitions '];
OperRampRate.DocUnits = 'Cnt';
OperRampRate.SwcShoName = 'FordSysSt';
OperRampRate.EngDT = dt.float32;
OperRampRate.EngInit = 50;
OperRampRate.EngMin = .1;
OperRampRate.EngMax = 1000;
OperRampRate.TestTolerance = 0;
OperRampRate.WrittenIn = {'FordSysStPer1'};
OperRampRate.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------


NormLimpHomeScar = DataDict.Calibration;
NormLimpHomeScar.LongName = 'Normal Limp Home Scaler';
NormLimpHomeScar.Description = [...
  'Sets the Scaler being used from Normal operation to Limp Home '];
NormLimpHomeScar.DocUnits = 'cnt';
NormLimpHomeScar.EngDT = dt.float32;
NormLimpHomeScar.EngVal = 0;
NormLimpHomeScar.EngMin = 0;
NormLimpHomeScar.EngMax = 1;
NormLimpHomeScar.Cardinality = 'Cmn';
NormLimpHomeScar.CustomerVisible = True;
NormLimpHomeScar.Online = false;
NormLimpHomeScar.Impact = 'H';
NormLimpHomeScar.TuningOwner = 'CSE';
NormLimpHomeScar.GraphLink = {''};
NormLimpHomeScar.Monotony = 'None';
NormLimpHomeScar.MaxGrad = 998;
NormLimpHomeScar.PortName = 'FordSysSt';


InitLimpHomeScar = DataDict.Calibration;
InitLimpHomeScar.LongName = 'Normal Limp Home Scaler';
InitLimpHomeScar.Description = [...
  'Sets the Scaler being used from Initialization to Limp Home '];
InitLimpHomeScar.DocUnits = 'cnt';
InitLimpHomeScar.EngDT = dt.float32;
InitLimpHomeScar.EngVal = 0;
InitLimpHomeScar.EngMin = 0;
InitLimpHomeScar.EngMax = 1;
InitLimpHomeScar.Cardinality = 'Cmn';
InitLimpHomeScar.CustomerVisible = True;
InitLimpHomeScar.Online = false;
InitLimpHomeScar.Impact = 'H';
InitLimpHomeScar.TuningOwner = 'CSE';
InitLimpHomeScar.GraphLink = {''};
InitLimpHomeScar.Monotony = 'None';
InitLimpHomeScar.MaxGrad = 998;
InitLimpHomeScar.PortName = 'FordSysSt';


LimdAssiScar = DataDict.Calibration;
LimdAssiScar.LongName = 'Limited Assist Scaler';
LimdAssiScar.Description = [...
  'Sets the Scaler being used from Full Assist to Limited Assist'];
LimdAssiScar.DocUnits = 'cnt';
LimdAssiScar.EngDT = dt.float32;
LimdAssiScar.EngVal = 0;
LimdAssiScar.EngMin = 0;
LimdAssiScar.EngMax = 1;
LimdAssiScar.Cardinality = 'Cmn';
LimdAssiScar.CustomerVisible = True;
LimdAssiScar.Online = false;
LimdAssiScar.Impact = 'H';
LimdAssiScar.TuningOwner = 'CSE';
LimdAssiScar.GraphLink = {''};
LimdAssiScar.Monotony = 'None';
LimdAssiScar.MaxGrad = 998;
LimdAssiScar.PortName = 'FordSysSt';


LimdAssiRamp = DataDict.Calibration;
LimdAssiRamp.LongName = 'Limited Assist Ramp';
LimdAssiRamp.Description = [...
  'Sets the Ramp being used from Full Assist to Limited Assist '];
LimdAssiRamp.DocUnits = 'cnt';
LimdAssiRamp.EngDT = dt.float32;
LimdAssiRamp.EngVal = 1;
LimdAssiRamp.EngMin = .1;
LimdAssiRamp.EngMax = 1000;
LimdAssiRamp.Cardinality = 'Cmn';
LimdAssiRamp.CustomerVisible = True;
LimdAssiRamp.Online = false;
LimdAssiRamp.Impact = 'H';
LimdAssiRamp.TuningOwner = 'CSE';
LimdAssiRamp.GraphLink = {''};
LimdAssiRamp.Monotony = 'None';
LimdAssiRamp.MaxGrad = 998;
LimdAssiRamp.PortName = 'FordSysSt';


NormLimpHomeRamp = DataDict.Calibration;
NormLimpHomeRamp.LongName = 'Normal Limp Home Ramp';
NormLimpHomeRamp.Description = [...
  'Sets the Ramp being used from Normal Operation to Limp Home '];
NormLimpHomeRamp.DocUnits = 'cnt';
NormLimpHomeRamp.EngDT = dt.float32;
NormLimpHomeRamp.EngVal = 1;
NormLimpHomeRamp.EngMin = .1;
NormLimpHomeRamp.EngMax = 1000;
NormLimpHomeRamp.Cardinality = 'Cmn';
NormLimpHomeRamp.CustomerVisible = True;
NormLimpHomeRamp.Online = false;
NormLimpHomeRamp.Impact = 'H';
NormLimpHomeRamp.TuningOwner = 'CSE';
NormLimpHomeRamp.GraphLink = {''};
NormLimpHomeRamp.Monotony = 'None';
NormLimpHomeRamp.MaxGrad = 998;
NormLimpHomeRamp.PortName = 'FordSysSt';


InitLimpHomeRamp = DataDict.Calibration;
InitLimpHomeRamp.LongName = 'Initialization Limp Home Ramp';
InitLimpHomeRamp.Description = [...
  'Sets the Ramp being used from Initialization to Limp Home '];
InitLimpHomeRamp.DocUnits = 'cnt';
InitLimpHomeRamp.EngDT = dt.float32;
InitLimpHomeRamp.EngVal = 1;
InitLimpHomeRamp.EngMin = .1;
InitLimpHomeRamp.EngMax = 1000;
InitLimpHomeRamp.Cardinality = 'Cmn';
InitLimpHomeRamp.CustomerVisible = True;
InitLimpHomeRamp.Online = false;
InitLimpHomeRamp.Impact = 'H';
InitLimpHomeRamp.TuningOwner = 'CSE';
InitLimpHomeRamp.GraphLink = {''};
InitLimpHomeRamp.Monotony = 'None';
InitLimpHomeRamp.MaxGrad = 998;
InitLimpHomeRamp.PortName = 'FordSysSt';


LimdAssiRampUpRate = DataDict.Calibration;
LimdAssiRampUpRate.LongName = 'Limited Assist Ramp Up Rate';
LimdAssiRampUpRate.Description = [...
  'Sets the Ramp being used from Initialization to Limited Assist after a normal shutdown '];
LimdAssiRampUpRate.DocUnits = 'cnt';
LimdAssiRampUpRate.EngDT = dt.float32;
LimdAssiRampUpRate.EngVal = 1;
LimdAssiRampUpRate.EngMin = .1;
LimdAssiRampUpRate.EngMax = 1000;
LimdAssiRampUpRate.Cardinality = 'Cmn';
LimdAssiRampUpRate.CustomerVisible = True;
LimdAssiRampUpRate.Online = false;
LimdAssiRampUpRate.Impact = 'H';
LimdAssiRampUpRate.TuningOwner = 'CSE';
LimdAssiRampUpRate.GraphLink = {''};
LimdAssiRampUpRate.Monotony = 'None';
LimdAssiRampUpRate.MaxGrad = 998;
LimdAssiRampUpRate.PortName = 'FordSysSt';


LimdAssiRampUpRateFaild = DataDict.Calibration;
LimdAssiRampUpRateFaild.LongName = 'Limited Assist Ramp Up Rate Failed';
LimdAssiRampUpRateFaild.Description = [...
  'Sets the Ramp being used from Initialization to Limited Assist after an improper shutdown '];
LimdAssiRampUpRateFaild.DocUnits = 'cnt';
LimdAssiRampUpRateFaild.EngDT = dt.float32;
LimdAssiRampUpRateFaild.EngVal = 1;
LimdAssiRampUpRateFaild.EngMin = .1;
LimdAssiRampUpRateFaild.EngMax = 1000;
LimdAssiRampUpRateFaild.Cardinality = 'Cmn';
LimdAssiRampUpRateFaild.CustomerVisible = True;
LimdAssiRampUpRateFaild.Online = false;
LimdAssiRampUpRateFaild.Impact = 'H';
LimdAssiRampUpRateFaild.TuningOwner = 'CSE';
LimdAssiRampUpRateFaild.GraphLink = {''};
LimdAssiRampUpRateFaild.Monotony = 'None';
LimdAssiRampUpRateFaild.MaxGrad = 998;
LimdAssiRampUpRateFaild.PortName = 'FordSysSt';


FullAssiRampUpRate = DataDict.Calibration;
FullAssiRampUpRate.LongName = 'Full Assist Ramp Up Rate';
FullAssiRampUpRate.Description = [...
  'Sets the Ramp being used from Limited Assist to Full Assist when Voltage was Normal '];
FullAssiRampUpRate.DocUnits = 'cnt';
FullAssiRampUpRate.EngDT = dt.float32;
FullAssiRampUpRate.EngVal = 1;
FullAssiRampUpRate.EngMin = .1;
FullAssiRampUpRate.EngMax = 1000;
FullAssiRampUpRate.Cardinality = 'Cmn';
FullAssiRampUpRate.CustomerVisible = True;
FullAssiRampUpRate.Online = false;
FullAssiRampUpRate.Impact = 'H';
FullAssiRampUpRate.TuningOwner = 'CSE';
FullAssiRampUpRate.GraphLink = {''};
FullAssiRampUpRate.Monotony = 'None';
FullAssiRampUpRate.MaxGrad = 998;
FullAssiRampUpRate.PortName = 'FordSysSt';


ShtdwnRamp = DataDict.Calibration;
ShtdwnRamp.LongName = 'Shutdown Ramp';
ShtdwnRamp.Description = [...
  'Sets the Ramp being used going to Shutdown '];
ShtdwnRamp.DocUnits = 'cnt';
ShtdwnRamp.EngDT = dt.float32;
ShtdwnRamp.EngVal = 1;
ShtdwnRamp.EngMin = .1;
ShtdwnRamp.EngMax = 1000;
ShtdwnRamp.Cardinality = 'Cmn';
ShtdwnRamp.CustomerVisible = True;
ShtdwnRamp.Online = false;
ShtdwnRamp.Impact = 'H';
ShtdwnRamp.TuningOwner = 'CSE';
ShtdwnRamp.GraphLink = {''};
ShtdwnRamp.Monotony = 'None';
ShtdwnRamp.MaxGrad = 998;
ShtdwnRamp.PortName = 'FordSysSt';


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
FordEpsFailrPrev = DataDict.PIM;
FordEpsFailrPrev.LongName = 'Ford Epas Failure Previous';
FordEpsFailrPrev.Description = [...
  'For Software to keep track of Ford Epas Failure in each of State Machi' ...
  'ne State'];
FordEpsFailrPrev.DocUnits = 'Cnt';
FordEpsFailrPrev.EngDT = enum.Ford_EPAS_Failure;
FordEpsFailrPrev.EngMin = Ford_EPAS_Failure.Cx0_EPAS_OK_NO_MESSAGE;
FordEpsFailrPrev.EngMax = Ford_EPAS_Failure.Cx3_SERVICE_POWER_STEERING_NOW;
FordEpsFailrPrev.InitRowCol = [1  1];


FordEpsSysStPrev = DataDict.PIM;
FordEpsSysStPrev.LongName = 'Ford Eps System State Previous';
FordEpsSysStPrev.Description = [...
  'For Software to keep track of Ford Eps System State in each of State M' ...
  'achine State'];
FordEpsSysStPrev.DocUnits = 'Cnt';
FordEpsSysStPrev.EngDT = enum.FordEpsSysSt1;
FordEpsSysStPrev.EngMin = FordEpsSysSt1.FORDEPSSYSST_EPS_ININ;
FordEpsSysStPrev.EngMax = FordEpsSysSt1.FORDEPSSYSST_EPS_PWRDWN;
FordEpsSysStPrev.InitRowCol = [1  1];


SysStReqEnaPrev = DataDict.PIM;
SysStReqEnaPrev.LongName = 'System State Request Enable Previous';
SysStReqEnaPrev.Description = ['For software to keep track of System State' ...
  'Request Enable during quick ignition cycles'];
SysStReqEnaPrev.DocUnits = 'Cnt';
SysStReqEnaPrev.EngDT = dt.lgc;
SysStReqEnaPrev.EngMin = 0;
SysStReqEnaPrev.EngMax = 1;
SysStReqEnaPrev.InitRowCol = [1  1];


PwrSplyEnaReqPrev = DataDict.PIM;
PwrSplyEnaReqPrev.LongName = 'Power Supply Enable Request Previous';
PwrSplyEnaReqPrev.Description = ['For Software to keep track of Power Supply' ...
  'Request Enable during quick ignition cycles'];
PwrSplyEnaReqPrev.DocUnits = 'Cnt';
PwrSplyEnaReqPrev.EngDT = dt.lgc;
PwrSplyEnaReqPrev.EngMin = 0;
PwrSplyEnaReqPrev.EngMax = 1;
PwrSplyEnaReqPrev.InitRowCol = [1  1];


FordSteerModlStsPrev = DataDict.PIM;
FordSteerModlStsPrev.LongName = 'Ford Steering Module Status Previous';
FordSteerModlStsPrev.Description = [...
  'For Software to keep track of Ford Steering Module Status in each of S' ...
  'tate Machine State'];
FordSteerModlStsPrev.DocUnits = 'Cnt';
FordSteerModlStsPrev.EngDT = enum.Ford_SteMdule_D_Stat;
FordSteerModlStsPrev.EngMin = Ford_SteMdule_D_Stat.Cx0_EPAS_Initialization;
FordSteerModlStsPrev.EngMax = Ford_SteMdule_D_Stat.Cx7_NotUsed;
FordSteerModlStsPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
VEHSPDTHD_KPH_F32 = DataDict.Constant;
VEHSPDTHD_KPH_F32.LongName = 'Vehicle Speed Threshold';
VEHSPDTHD_KPH_F32.Description = [...
  'Vehicle Speed Threshold is getting compared with constant for a state ' ...
  'transition'];
VEHSPDTHD_KPH_F32.DocUnits = 'Kph';
VEHSPDTHD_KPH_F32.EngDT = dt.float32;
VEHSPDTHD_KPH_F32.EngVal = 3;
VEHSPDTHD_KPH_F32.Define = 'Local';





%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
