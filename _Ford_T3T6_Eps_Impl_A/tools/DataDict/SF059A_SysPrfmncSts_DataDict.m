%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Dec-2016 15:19:39       %
%                                  Created with tool release: 2.51.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF059A = DataDict.FDD;
SF059A.Version = '1.1.X';
SF059A.LongName = 'System Performance Status';
SF059A.ShoName  = 'SysPrfmncSts';
SF059A.DesignASIL = 'D';
SF059A.Description = [...
  'This function assesses the incoming system performance information, in' ...
  'cluding battery voltage, thermal usage, temperature and system states ' ...
  'etc., to compute and prioritize Battery Voltage State and System Perfo' ...
  'rmance State.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SysPrfmncStsInit1 = DataDict.Runnable;
SysPrfmncStsInit1.Context = 'Rte';
SysPrfmncStsInit1.TimeStep = 0;
SysPrfmncStsInit1.Description = 'SysPrfmncSts Init';

SysPrfmncStsPer1 = DataDict.Runnable;
SysPrfmncStsPer1.Context = 'Rte';
SysPrfmncStsPer1.TimeStep = 0.002;
SysPrfmncStsPer1.Description = 'SysPrfmncSts Periodic1';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'SysPrfmncStsPer1'};
GetNtcQlfrSts.Description = 'Get NTC Qualifier Status';
GetNtcQlfrSts.Return = DataDict.CSReturn;
GetNtcQlfrSts.Return.Type = 'Standard';
GetNtcQlfrSts.Return.Min = 0;
GetNtcQlfrSts.Return.Max = 1;
GetNtcQlfrSts.Return.TestTolerance = [];
GetNtcQlfrSts.Return.Description = '';
GetNtcQlfrSts.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(1).Name = 'NtcNr';
GetNtcQlfrSts.Arguments(1).EngDT = enum.NtcNr2;
GetNtcQlfrSts.Arguments(1).EngMin = NtcNr2.NTCNR_0X001;
GetNtcQlfrSts.Arguments(1).EngMax = NtcNr2.NTCNR_0X1FF;
GetNtcQlfrSts.Arguments(1).Units = 'Cnt';
GetNtcQlfrSts.Arguments(1).Direction = 'In';
GetNtcQlfrSts.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(1).Description = 'NTC Number';
GetNtcQlfrSts.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrSts.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrSts.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrSts.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrSts.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrSts.Arguments(2).TestTolerance = 0;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'NTC Qualifier';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = 'This input reads Battery Voltage';
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 5;
BattVltg.EngMin = 5;
BattVltg.EngMax = 31;
BattVltg.ReadIn = {'SysPrfmncStsPer1'};
BattVltg.ReadType = 'Rte';


DutyCycThermProtnMaxOutp = DataDict.IpSignal;
DutyCycThermProtnMaxOutp.LongName = 'Duty Cycle Thermal Protection Maximum Output';
DutyCycThermProtnMaxOutp.Description = [...
  'This input reads Duty Cycle Level from SF09, which Additional feature ' ...
  'which provides a torque command scale factor to reduce the assist gain' ...
  ' once the duty cycle usage system level performance specification has ' ...
  'been exceeded '];
DutyCycThermProtnMaxOutp.DocUnits = 'Uls';
DutyCycThermProtnMaxOutp.EngDT = dt.u16p0;
DutyCycThermProtnMaxOutp.EngInit = 0;
DutyCycThermProtnMaxOutp.EngMin = 0;
DutyCycThermProtnMaxOutp.EngMax = 200;
DutyCycThermProtnMaxOutp.ReadIn = {'SysPrfmncStsPer1'};
DutyCycThermProtnMaxOutp.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Control Temperature Final';
EcuTFild.Description = [...
  'Filtered measured temperature value from SF06 Temperature Estimation F' ...
  'unction'];
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 0;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'SysPrfmncStsPer1'};
EcuTFild.ReadType = 'Rte';


LoaSt = DataDict.IpSignal;
LoaSt.LongName = 'Loss of Assist State';
LoaSt.Description = 'Enumerated state chosen by LoaMgr';
LoaSt.DocUnits = 'Cnt';
LoaSt.EngDT = enum.LoaSt1;
LoaSt.EngInit = LoaSt1.LOAST_NORM;
LoaSt.EngMin = LoaSt1.LOAST_NORM;
LoaSt.EngMax = LoaSt1.LOAST_IMDTSHTDWNREQD;
LoaSt.ReadIn = {'SysPrfmncStsPer1'};
LoaSt.ReadType = 'Rte';


StallMotTqLim = DataDict.IpSignal;
StallMotTqLim.LongName = 'Stall Motor Torque Limit';
StallMotTqLim.Description = [...
  'This input reads Stall Motor Torque Limit, which is based on high torq' ...
  'ue levels at low motor speeds'];
StallMotTqLim.DocUnits = 'MotNwtMtr';
StallMotTqLim.EngDT = dt.float32;
StallMotTqLim.EngInit = 8.8;
StallMotTqLim.EngMin = 0;
StallMotTqLim.EngMax = 8.8;
StallMotTqLim.ReadIn = {'SysPrfmncStsPer1'};
StallMotTqLim.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'EPs System states';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'SysPrfmncStsPer1'};
SysSt.ReadType = 'Rte';


ThermDutyCycProtnLoadDptLim = DataDict.IpSignal;
ThermDutyCycProtnLoadDptLim.LongName = 'Thermal Duty Cycle Protection Load Dependent Limit';
ThermDutyCycProtnLoadDptLim.Description = [...
  'This input reads Thermal dudy Cycle Protection Temperature Dependent L' ...
  'imit'];
ThermDutyCycProtnLoadDptLim.DocUnits = 'MotNwtMtr';
ThermDutyCycProtnLoadDptLim.EngDT = dt.float32;
ThermDutyCycProtnLoadDptLim.EngInit = 8.8;
ThermDutyCycProtnLoadDptLim.EngMin = 0;
ThermDutyCycProtnLoadDptLim.EngMax = 8.8;
ThermDutyCycProtnLoadDptLim.ReadIn = {'SysPrfmncStsPer1'};
ThermDutyCycProtnLoadDptLim.ReadType = 'Rte';


ThermDutyCycProtnTDptLim = DataDict.IpSignal;
ThermDutyCycProtnTDptLim.LongName = 'Thermal Duty Cycle Protection Temperature Dependent Limit';
ThermDutyCycProtnTDptLim.Description = [...
  'Thermal Duty Cycle Protection Temperature Dependent Limit'];
ThermDutyCycProtnTDptLim.DocUnits = 'MotNwtMtr';
ThermDutyCycProtnTDptLim.EngDT = dt.float32;
ThermDutyCycProtnTDptLim.EngInit = 8.8;
ThermDutyCycProtnTDptLim.EngMin = 0;
ThermDutyCycProtnTDptLim.EngMax = 8.8;
ThermDutyCycProtnTDptLim.ReadIn = {'SysPrfmncStsPer1'};
ThermDutyCycProtnTDptLim.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Validity';
VehSpdVld.Description = [...
  'The validity of raw vehicle speed from GM.'];
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'SysPrfmncStsPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
BattVltgSt = DataDict.OpSignal;
BattVltgSt.LongName = 'Battery Voltage State';
BattVltgSt.Description = 'Battery Voltage State';
BattVltgSt.DocUnits = 'Cnt';
BattVltgSt.SwcShoName = 'SysPrfmncSts';
BattVltgSt.EngDT = enum.BattVltgSt1;
BattVltgSt.EngInit = BattVltgSt1.BATTVLTGST_NORMOPER;
BattVltgSt.EngMin = BattVltgSt1.BATTVLTGST_NORMOPER;
BattVltgSt.EngMax = BattVltgSt1.BATTVLTGST_LOVLTGOFF;
BattVltgSt.TestTolerance = 0;
BattVltgSt.WrittenIn = {'SysPrfmncStsPer1'};
BattVltgSt.WriteType = 'Rte';


SysPrfmncSt = DataDict.OpSignal;
SysPrfmncSt.LongName = 'System Performance State';
SysPrfmncSt.Description = 'System Performance State';
SysPrfmncSt.DocUnits = 'Cnt';
SysPrfmncSt.SwcShoName = 'SysPrfmncSts';
SysPrfmncSt.EngDT = dt.u16;
SysPrfmncSt.EngInit = 0;
SysPrfmncSt.EngMin = 0;
SysPrfmncSt.EngMax = 36702;
SysPrfmncSt.TestTolerance = 0;
SysPrfmncSt.WrittenIn = {'SysPrfmncStsPer1'};
SysPrfmncSt.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SysPrfmncStsAbsltCtrlTFltThd = DataDict.Calibration;
SysPrfmncStsAbsltCtrlTFltThd.LongName = 'Absolute Control Temperature Fault Threshold';
SysPrfmncStsAbsltCtrlTFltThd.Description = [...
  'Absolute Control Temperature Fault Threshold'];
SysPrfmncStsAbsltCtrlTFltThd.DocUnits = 'DegCgrd';
SysPrfmncStsAbsltCtrlTFltThd.EngDT = dt.float32;
SysPrfmncStsAbsltCtrlTFltThd.EngVal = 91;
SysPrfmncStsAbsltCtrlTFltThd.EngMin = 1;
SysPrfmncStsAbsltCtrlTFltThd.EngMax = 150;
SysPrfmncStsAbsltCtrlTFltThd.Cardinality = 'Cmn';
SysPrfmncStsAbsltCtrlTFltThd.CustomerVisible = false;
SysPrfmncStsAbsltCtrlTFltThd.Online = false;
SysPrfmncStsAbsltCtrlTFltThd.Impact = 'H';
SysPrfmncStsAbsltCtrlTFltThd.TuningOwner = 'CSE';
SysPrfmncStsAbsltCtrlTFltThd.GraphLink = {''};
SysPrfmncStsAbsltCtrlTFltThd.Monotony = 'None';
SysPrfmncStsAbsltCtrlTFltThd.MaxGrad = 149;
SysPrfmncStsAbsltCtrlTFltThd.PortName = 'SysPrfmncStsAbsltCtrlTFltThd';


SysPrfmncStsAssiStallLimDecThd = DataDict.Calibration;
SysPrfmncStsAssiStallLimDecThd.LongName = 'Assist Stall Limit Decrease Threshold';
SysPrfmncStsAssiStallLimDecThd.Description = [...
  'Assist Stall Limit Decrease Threshold'];
SysPrfmncStsAssiStallLimDecThd.DocUnits = 'MotNwtMtr';
SysPrfmncStsAssiStallLimDecThd.EngDT = dt.float32;
SysPrfmncStsAssiStallLimDecThd.EngVal = 8.8;
SysPrfmncStsAssiStallLimDecThd.EngMin = 0;
SysPrfmncStsAssiStallLimDecThd.EngMax = 8.8;
SysPrfmncStsAssiStallLimDecThd.Cardinality = 'Cmn';
SysPrfmncStsAssiStallLimDecThd.CustomerVisible = false;
SysPrfmncStsAssiStallLimDecThd.Online = false;
SysPrfmncStsAssiStallLimDecThd.Impact = 'M';
SysPrfmncStsAssiStallLimDecThd.TuningOwner = 'CSE';
SysPrfmncStsAssiStallLimDecThd.GraphLink = {''};
SysPrfmncStsAssiStallLimDecThd.Monotony = 'None';
SysPrfmncStsAssiStallLimDecThd.MaxGrad = 8.8;
SysPrfmncStsAssiStallLimDecThd.PortName = 'SysPrfmncStsAssiStallLimDecThd';


SysPrfmncStsBattDiagcHiCrit = DataDict.Calibration;
SysPrfmncStsBattDiagcHiCrit.LongName = 'Battery Diagnostic High Critical';
SysPrfmncStsBattDiagcHiCrit.Description = [...
  'The lower threshold voltage for the high battery voltage operation sta' ...
  'te'];
SysPrfmncStsBattDiagcHiCrit.DocUnits = 'Volt';
SysPrfmncStsBattDiagcHiCrit.EngDT = dt.float32;
SysPrfmncStsBattDiagcHiCrit.EngVal = 18;
SysPrfmncStsBattDiagcHiCrit.EngMin = 5;
SysPrfmncStsBattDiagcHiCrit.EngMax = 31;
SysPrfmncStsBattDiagcHiCrit.Cardinality = 'Cmn';
SysPrfmncStsBattDiagcHiCrit.CustomerVisible = false;
SysPrfmncStsBattDiagcHiCrit.Online = false;
SysPrfmncStsBattDiagcHiCrit.Impact = 'M';
SysPrfmncStsBattDiagcHiCrit.TuningOwner = 'CSE';
SysPrfmncStsBattDiagcHiCrit.GraphLink = {''};
SysPrfmncStsBattDiagcHiCrit.Monotony = 'None';
SysPrfmncStsBattDiagcHiCrit.MaxGrad = 26;
SysPrfmncStsBattDiagcHiCrit.PortName = 'SysPrfmncStsBattDiagcHiCrit';


SysPrfmncStsBattDiagcHiWarn = DataDict.Calibration;
SysPrfmncStsBattDiagcHiWarn.LongName = 'Battery Diagnostic High Warning';
SysPrfmncStsBattDiagcHiWarn.Description = [...
  'The lower threshold voltage for the battery high voltage warning'];
SysPrfmncStsBattDiagcHiWarn.DocUnits = 'Volt';
SysPrfmncStsBattDiagcHiWarn.EngDT = dt.float32;
SysPrfmncStsBattDiagcHiWarn.EngVal = 17.5;
SysPrfmncStsBattDiagcHiWarn.EngMin = 5;
SysPrfmncStsBattDiagcHiWarn.EngMax = 31;
SysPrfmncStsBattDiagcHiWarn.Cardinality = 'Cmn';
SysPrfmncStsBattDiagcHiWarn.CustomerVisible = false;
SysPrfmncStsBattDiagcHiWarn.Online = false;
SysPrfmncStsBattDiagcHiWarn.Impact = 'M';
SysPrfmncStsBattDiagcHiWarn.TuningOwner = 'CSE';
SysPrfmncStsBattDiagcHiWarn.GraphLink = {''};
SysPrfmncStsBattDiagcHiWarn.Monotony = 'None';
SysPrfmncStsBattDiagcHiWarn.MaxGrad = 26;
SysPrfmncStsBattDiagcHiWarn.PortName = 'SysPrfmncStsBattDiagcHiWarn';


SysPrfmncStsBattDiagcLoCrit = DataDict.Calibration;
SysPrfmncStsBattDiagcLoCrit.LongName = 'Battery Diagnostic Low Critical';
SysPrfmncStsBattDiagcLoCrit.Description = [...
  'The lower threshold voltage for the Low battery voltage operation stat' ...
  'e'];
SysPrfmncStsBattDiagcLoCrit.DocUnits = 'Volt';
SysPrfmncStsBattDiagcLoCrit.EngDT = dt.float32;
SysPrfmncStsBattDiagcLoCrit.EngVal = 9;
SysPrfmncStsBattDiagcLoCrit.EngMin = 5;
SysPrfmncStsBattDiagcLoCrit.EngMax = 31;
SysPrfmncStsBattDiagcLoCrit.Cardinality = 'Cmn';
SysPrfmncStsBattDiagcLoCrit.CustomerVisible = false;
SysPrfmncStsBattDiagcLoCrit.Online = false;
SysPrfmncStsBattDiagcLoCrit.Impact = 'M';
SysPrfmncStsBattDiagcLoCrit.TuningOwner = 'CSE';
SysPrfmncStsBattDiagcLoCrit.GraphLink = {''};
SysPrfmncStsBattDiagcLoCrit.Monotony = 'None';
SysPrfmncStsBattDiagcLoCrit.MaxGrad = 26;
SysPrfmncStsBattDiagcLoCrit.PortName = 'SysPrfmncStsBattDiagcLoCrit';


SysPrfmncStsBattDiagcLoWarn = DataDict.Calibration;
SysPrfmncStsBattDiagcLoWarn.LongName = 'Battery Diagnostic Low Warning';
SysPrfmncStsBattDiagcLoWarn.Description = [...
  'The lower threshold voltage for the battery Low voltage warning'];
SysPrfmncStsBattDiagcLoWarn.DocUnits = 'Volt';
SysPrfmncStsBattDiagcLoWarn.EngDT = dt.float32;
SysPrfmncStsBattDiagcLoWarn.EngVal = 11.3;
SysPrfmncStsBattDiagcLoWarn.EngMin = 5;
SysPrfmncStsBattDiagcLoWarn.EngMax = 31;
SysPrfmncStsBattDiagcLoWarn.Cardinality = 'Cmn';
SysPrfmncStsBattDiagcLoWarn.CustomerVisible = false;
SysPrfmncStsBattDiagcLoWarn.Online = false;
SysPrfmncStsBattDiagcLoWarn.Impact = 'M';
SysPrfmncStsBattDiagcLoWarn.TuningOwner = 'CSE';
SysPrfmncStsBattDiagcLoWarn.GraphLink = {''};
SysPrfmncStsBattDiagcLoWarn.Monotony = 'None';
SysPrfmncStsBattDiagcLoWarn.MaxGrad = 26;
SysPrfmncStsBattDiagcLoWarn.PortName = 'SysPrfmncStsBattDiagcLoWarn';


SysPrfmncStsBattVltgFilFrq = DataDict.Calibration;
SysPrfmncStsBattVltgFilFrq.LongName = 'Battery Voltage Filter Frequency';
SysPrfmncStsBattVltgFilFrq.Description = 'Battery Voltage Filter Frequency';
SysPrfmncStsBattVltgFilFrq.DocUnits = 'Hz';
SysPrfmncStsBattVltgFilFrq.EngDT = dt.float32;
SysPrfmncStsBattVltgFilFrq.EngVal = 10;
SysPrfmncStsBattVltgFilFrq.EngMin = 0.1;
SysPrfmncStsBattVltgFilFrq.EngMax = 500;
SysPrfmncStsBattVltgFilFrq.Cardinality = 'Cmn';
SysPrfmncStsBattVltgFilFrq.CustomerVisible = false;
SysPrfmncStsBattVltgFilFrq.Online = false;
SysPrfmncStsBattVltgFilFrq.Impact = 'M';
SysPrfmncStsBattVltgFilFrq.TuningOwner = 'CSE';
SysPrfmncStsBattVltgFilFrq.GraphLink = {''};
SysPrfmncStsBattVltgFilFrq.Monotony = 'None';
SysPrfmncStsBattVltgFilFrq.MaxGrad = 499.9;
SysPrfmncStsBattVltgFilFrq.PortName = 'SysPrfmncStsBattVltgFilFrq';


SysPrfmncStsDutyCycLvlFltThd = DataDict.Calibration;
SysPrfmncStsDutyCycLvlFltThd.LongName = 'Duty Cycle Level Fault Threshold';
SysPrfmncStsDutyCycLvlFltThd.Description = 'Duty Cycle Level Fault Threshold';
SysPrfmncStsDutyCycLvlFltThd.DocUnits = 'Uls';
SysPrfmncStsDutyCycLvlFltThd.EngDT = dt.u16p0;
SysPrfmncStsDutyCycLvlFltThd.EngVal = 70;
SysPrfmncStsDutyCycLvlFltThd.EngMin = 1;
SysPrfmncStsDutyCycLvlFltThd.EngMax = 200;
SysPrfmncStsDutyCycLvlFltThd.Cardinality = 'Cmn';
SysPrfmncStsDutyCycLvlFltThd.CustomerVisible = false;
SysPrfmncStsDutyCycLvlFltThd.Online = false;
SysPrfmncStsDutyCycLvlFltThd.Impact = 'M';
SysPrfmncStsDutyCycLvlFltThd.TuningOwner = 'CSE';
SysPrfmncStsDutyCycLvlFltThd.GraphLink = {''};
SysPrfmncStsDutyCycLvlFltThd.Monotony = 'None';
SysPrfmncStsDutyCycLvlFltThd.MaxGrad = 199;
SysPrfmncStsDutyCycLvlFltThd.PortName = 'SysPrfmncStsDutyCycLvlFltThd';


SysPrfmncStsLoadDptLimDecThd = DataDict.Calibration;
SysPrfmncStsLoadDptLimDecThd.LongName = 'Load Dependent Limit Decrease Threshold';
SysPrfmncStsLoadDptLimDecThd.Description = [...
  'Load Dependent Limit Decrease Threshold'];
SysPrfmncStsLoadDptLimDecThd.DocUnits = 'MotNwtMtr';
SysPrfmncStsLoadDptLimDecThd.EngDT = dt.float32;
SysPrfmncStsLoadDptLimDecThd.EngVal = 8.8;
SysPrfmncStsLoadDptLimDecThd.EngMin = 0;
SysPrfmncStsLoadDptLimDecThd.EngMax = 8.8;
SysPrfmncStsLoadDptLimDecThd.Cardinality = 'Cmn';
SysPrfmncStsLoadDptLimDecThd.CustomerVisible = false;
SysPrfmncStsLoadDptLimDecThd.Online = false;
SysPrfmncStsLoadDptLimDecThd.Impact = 'M';
SysPrfmncStsLoadDptLimDecThd.TuningOwner = 'CSE';
SysPrfmncStsLoadDptLimDecThd.GraphLink = {''};
SysPrfmncStsLoadDptLimDecThd.Monotony = 'None';
SysPrfmncStsLoadDptLimDecThd.MaxGrad = 8.8;
SysPrfmncStsLoadDptLimDecThd.PortName = 'SysPrfmncStsLoadDptLimDecThd';


SysPrfmncStsTDptLimThd = DataDict.Calibration;
SysPrfmncStsTDptLimThd.LongName = 'Temperature Dependent Limit Decrease Threshold';
SysPrfmncStsTDptLimThd.Description = [...
  'Temperature Dependent Limit Decrease Threshold'];
SysPrfmncStsTDptLimThd.DocUnits = 'MotNwtMtr';
SysPrfmncStsTDptLimThd.EngDT = dt.float32;
SysPrfmncStsTDptLimThd.EngVal = 8.8;
SysPrfmncStsTDptLimThd.EngMin = 0;
SysPrfmncStsTDptLimThd.EngMax = 8.8;
SysPrfmncStsTDptLimThd.Cardinality = 'Cmn';
SysPrfmncStsTDptLimThd.CustomerVisible = false;
SysPrfmncStsTDptLimThd.Online = false;
SysPrfmncStsTDptLimThd.Impact = 'M';
SysPrfmncStsTDptLimThd.TuningOwner = 'CSE';
SysPrfmncStsTDptLimThd.GraphLink = {''};
SysPrfmncStsTDptLimThd.Monotony = 'None';
SysPrfmncStsTDptLimThd.MaxGrad = 8.8;
SysPrfmncStsTDptLimThd.PortName = 'SysPrfmncStsTDptLimThd';



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
BattVltgLpFil = DataDict.PIM;
BattVltgLpFil.LongName = 'Battery Voltage LowPass Filter';
BattVltgLpFil.Description = [...
  'State Variable for Battery Voltage Lowpass Filter'];
BattVltgLpFil.DocUnits = 'Cnt';
BattVltgLpFil.EngDT = struct.FilLpRec1;
BattVltgLpFil.EngMin = [struct('FilSt',-3.402823466e+38,'FilGain',0)];
BattVltgLpFil.EngMax = [struct('FilSt',3.402823466e+38,'FilGain',3.402823466e+38)];
BattVltgLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_2MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_2MILLISEC_SEC_F32.LongName = '2 Milliseconds';
ARCHGLBPRM_2MILLISEC_SEC_F32.Description = '2ms periodic loop time step';
ARCHGLBPRM_2MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_2MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_2MILLISEC_SEC_F32.EngVal = 0.002;
ARCHGLBPRM_2MILLISEC_SEC_F32.Define = 'Global';


SYSPRFMNCBIT10_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT10_ULS_U16.LongName = 'System Performance Status Bit 10';
SYSPRFMNCBIT10_ULS_U16.Description = 'Enable bit 10 of SysPrfmncStatus';
SYSPRFMNCBIT10_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT10_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT10_ULS_U16.EngVal = 1024;
SYSPRFMNCBIT10_ULS_U16.Define = 'Local';


SYSPRFMNCBIT11_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT11_ULS_U16.LongName = 'System Performance Status Bit 11';
SYSPRFMNCBIT11_ULS_U16.Description = 'Enable bit 11 of SysPrfmncStatus';
SYSPRFMNCBIT11_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT11_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT11_ULS_U16.EngVal = 2048;
SYSPRFMNCBIT11_ULS_U16.Define = 'Local';


SYSPRFMNCBIT15_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT15_ULS_U16.LongName = 'System Performance Status Bit 15';
SYSPRFMNCBIT15_ULS_U16.Description = 'Enable bit 15 of SysPrfmncStatus';
SYSPRFMNCBIT15_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT15_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT15_ULS_U16.EngVal = 32768;
SYSPRFMNCBIT15_ULS_U16.Define = 'Local';


SYSPRFMNCBIT1_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT1_ULS_U16.LongName = 'System Performance Status Bit 1';
SYSPRFMNCBIT1_ULS_U16.Description = 'Enable bit 1 of SysPrfmncStatus';
SYSPRFMNCBIT1_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT1_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT1_ULS_U16.EngVal = 2;
SYSPRFMNCBIT1_ULS_U16.Define = 'Local';


SYSPRFMNCBIT2_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT2_ULS_U16.LongName = 'System Performance Status Bit 2';
SYSPRFMNCBIT2_ULS_U16.Description = 'Enable bit 2 of SysPrfmncStatus';
SYSPRFMNCBIT2_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT2_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT2_ULS_U16.EngVal = 4;
SYSPRFMNCBIT2_ULS_U16.Define = 'Local';


SYSPRFMNCBIT3_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT3_ULS_U16.LongName = 'System Performance Status Bit 3';
SYSPRFMNCBIT3_ULS_U16.Description = 'Enable bit 3 of SysPrfmncStatus';
SYSPRFMNCBIT3_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT3_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT3_ULS_U16.EngVal = 8;
SYSPRFMNCBIT3_ULS_U16.Define = 'Local';


SYSPRFMNCBIT4_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT4_ULS_U16.LongName = 'System Performance Status Bit 4';
SYSPRFMNCBIT4_ULS_U16.Description = 'Enable bit 4 of SysPrfmncStatus';
SYSPRFMNCBIT4_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT4_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT4_ULS_U16.EngVal = 16;
SYSPRFMNCBIT4_ULS_U16.Define = 'Local';


SYSPRFMNCBIT6_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT6_ULS_U16.LongName = 'System Performance Status Bit 6';
SYSPRFMNCBIT6_ULS_U16.Description = 'Enable bit 6 of SysPrfmncStatus';
SYSPRFMNCBIT6_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT6_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT6_ULS_U16.EngVal = 64;
SYSPRFMNCBIT6_ULS_U16.Define = 'Local';


SYSPRFMNCBIT8_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT8_ULS_U16.LongName = 'System Performance Status Bit 8';
SYSPRFMNCBIT8_ULS_U16.Description = 'Enable bit 8 of SysPrfmncStatus';
SYSPRFMNCBIT8_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT8_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT8_ULS_U16.EngVal = 256;
SYSPRFMNCBIT8_ULS_U16.Define = 'Local';


SYSPRFMNCBIT9_ULS_U16 = DataDict.Constant;
SYSPRFMNCBIT9_ULS_U16.LongName = 'System Performance Status Bit 9';
SYSPRFMNCBIT9_ULS_U16.Description = 'Enable bit 9 of SysPrfmncStatus';
SYSPRFMNCBIT9_ULS_U16.DocUnits = 'Uls';
SYSPRFMNCBIT9_ULS_U16.EngDT = dt.u16;
SYSPRFMNCBIT9_ULS_U16.EngVal = 512;
SYSPRFMNCBIT9_ULS_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
