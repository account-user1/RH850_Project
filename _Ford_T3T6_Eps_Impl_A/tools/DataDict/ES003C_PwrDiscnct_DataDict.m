%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Jun-2017 10:35:28       %
%                                  Created with tool release: 2.57.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES003C = DataDict.FDD;
ES003C.Version = '1.1.X';
ES003C.LongName = 'Power Disconnect';
ES003C.ShoName  = 'PwrDiscnct';
ES003C.DesignASIL = 'B';
ES003C.Description = [...
  'Power Disconnect with Bridge,Single Inverter and No Precharge '];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PwrDiscnctInit1 = DataDict.Runnable;
PwrDiscnctInit1.Context = 'Rte';
PwrDiscnctInit1.TimeStep = 0;
PwrDiscnctInit1.Description = 'Initialization';

PwrDiscnctPer1 = DataDict.Runnable;
PwrDiscnctPer1.Context = 'Rte';
PwrDiscnctPer1.TimeStep = 0.002;
PwrDiscnctPer1.Description = 'Running Every 0.002 Milli second';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
CnvSnpshtData_f32 = DataDict.Client;
CnvSnpshtData_f32.CallLocation = {'PwrDiscnctPer1'};
CnvSnpshtData_f32.Description = [...
  'Convert a float data type to a uint32 data type'];
CnvSnpshtData_f32.Return = DataDict.CSReturn;
CnvSnpshtData_f32.Return.Type = 'None';
CnvSnpshtData_f32.Return.Min = [];
CnvSnpshtData_f32.Return.Max = [];
CnvSnpshtData_f32.Return.TestTolerance = [];
CnvSnpshtData_f32.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_f32.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_f32.Arguments(1).EngMin = 0;
CnvSnpshtData_f32.Arguments(1).EngMax = 4294967295;
CnvSnpshtData_f32.Arguments(1).TestTolerance = 0;
CnvSnpshtData_f32.Arguments(1).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(1).Direction = 'Out';
CnvSnpshtData_f32.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_f32.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_f32.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_f32.Arguments(2).EngDT = dt.float32;
CnvSnpshtData_f32.Arguments(2).EngMin = -3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).EngMax = 3.402823466e+38;
CnvSnpshtData_f32.Arguments(2).Units = 'Cnt';
CnvSnpshtData_f32.Arguments(2).Direction = 'In';
CnvSnpshtData_f32.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_f32.Arguments(2).Description = [...
  'Input for converting Snapshot data of type float32'];


SetNtcStsAndSnpshtData = DataDict.Client;
SetNtcStsAndSnpshtData.CallLocation = {'PwrDiscnctPer1'};
SetNtcStsAndSnpshtData.Description = 'Set NTC Status And Snapshot Data';
SetNtcStsAndSnpshtData.Return = DataDict.CSReturn;
SetNtcStsAndSnpshtData.Return.Type = 'Standard';
SetNtcStsAndSnpshtData.Return.Min = 0;
SetNtcStsAndSnpshtData.Return.Max = 1;
SetNtcStsAndSnpshtData.Return.TestTolerance = 0;
SetNtcStsAndSnpshtData.Return.Description = 'None';
SetNtcStsAndSnpshtData.Arguments(1) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(1).Name = 'NtcNr';
SetNtcStsAndSnpshtData.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsAndSnpshtData.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsAndSnpshtData.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsAndSnpshtData.Arguments(1).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(1).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(1).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(1).Description = 'NTC Number';
SetNtcStsAndSnpshtData.Arguments(2) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(2).Name = 'NtcStInfo';
SetNtcStsAndSnpshtData.Arguments(2).EngDT = dt.u08;
SetNtcStsAndSnpshtData.Arguments(2).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(2).EngMax = 255;
SetNtcStsAndSnpshtData.Arguments(2).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(2).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(2).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(2).Description = 'NTC State Info';
SetNtcStsAndSnpshtData.Arguments(3) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(3).Name = 'NtcSts';
SetNtcStsAndSnpshtData.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsAndSnpshtData.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsAndSnpshtData.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsAndSnpshtData.Arguments(3).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(3).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(3).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(3).Description = 'NTC Status';
SetNtcStsAndSnpshtData.Arguments(4) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(4).Name = 'DebStep';
SetNtcStsAndSnpshtData.Arguments(4).EngDT = dt.u16;
SetNtcStsAndSnpshtData.Arguments(4).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(4).EngMax = 65535;
SetNtcStsAndSnpshtData.Arguments(4).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(4).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(4).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(4).Description = 'Debounce Step';
SetNtcStsAndSnpshtData.Arguments(5) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(5).Name = 'SpclSnpshtData0';
SetNtcStsAndSnpshtData.Arguments(5).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(5).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(5).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(5).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(5).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(5).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(5).Description = 'Special Snapshot Data 0';
SetNtcStsAndSnpshtData.Arguments(6) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(6).Name = 'SpclSnpshtData1';
SetNtcStsAndSnpshtData.Arguments(6).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(6).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(6).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(6).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(6).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(6).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(6).Description = 'Special Snapshot Data 1';
SetNtcStsAndSnpshtData.Arguments(7) = DataDict.CSArguments;
SetNtcStsAndSnpshtData.Arguments(7).Name = 'SpclSnpshtData2';
SetNtcStsAndSnpshtData.Arguments(7).EngDT = dt.u32;
SetNtcStsAndSnpshtData.Arguments(7).EngMin = 0;
SetNtcStsAndSnpshtData.Arguments(7).EngMax = 4294967295;
SetNtcStsAndSnpshtData.Arguments(7).Units = 'Cnt';
SetNtcStsAndSnpshtData.Arguments(7).Direction = 'In';
SetNtcStsAndSnpshtData.Arguments(7).InitRowCol = [1  1];
SetNtcStsAndSnpshtData.Arguments(7).Description = 'Special Snapshot Data 2';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BattVltg = DataDict.IpSignal;
BattVltg.LongName = 'Battery Voltage';
BattVltg.Description = [...
  'ADC Converted representation of Battery Voltage '];
BattVltg.DocUnits = 'Volt';
BattVltg.EngDT = dt.float32;
BattVltg.EngInit = 0;
BattVltg.EngMin = 0;
BattVltg.EngMax = 40;
BattVltg.ReadIn = {'PwrDiscnctPer1'};
BattVltg.ReadType = 'Rte';


BattVltgAdcFaild = DataDict.IpSignal;
BattVltgAdcFaild.LongName = 'Battery Voltage ADC Failed';
BattVltgAdcFaild.Description = 'Battery Voltage ADC Failed';
BattVltgAdcFaild.DocUnits = 'Cnt';
BattVltgAdcFaild.EngDT = dt.lgc;
BattVltgAdcFaild.EngInit = 0;
BattVltgAdcFaild.EngMin = 0;
BattVltgAdcFaild.EngMax = 1;
BattVltgAdcFaild.ReadIn = {'PwrDiscnctPer1'};
BattVltgAdcFaild.ReadType = 'Rte';


BattVltgSwd1 = DataDict.IpSignal;
BattVltgSwd1.LongName = 'Battery Switched 1 Voltage';
BattVltgSwd1.Description = [...
  'ADC Converted representation of Switch 1 Voltage'];
BattVltgSwd1.DocUnits = 'Volt';
BattVltgSwd1.EngDT = dt.float32;
BattVltgSwd1.EngInit = 0;
BattVltgSwd1.EngMin = 0;
BattVltgSwd1.EngMax = 40;
BattVltgSwd1.ReadIn = {'PwrDiscnctPer1'};
BattVltgSwd1.ReadType = 'Rte';


ChrgPmpDiag = DataDict.IpSignal;
ChrgPmpDiag.LongName = 'Charge Pump Diagnosis';
ChrgPmpDiag.Description = [...
  'ADC Converted representation of the Override signal diagnostic monitor' ...
  ' point'];
ChrgPmpDiag.DocUnits = 'Volt';
ChrgPmpDiag.EngDT = dt.float32;
ChrgPmpDiag.EngInit = 0;
ChrgPmpDiag.EngMin = 0;
ChrgPmpDiag.EngMax = 40;
ChrgPmpDiag.ReadIn = {'PwrDiscnctPer1'};
ChrgPmpDiag.ReadType = 'Rte';


ChrgPmpDiagAdcFaild = DataDict.IpSignal;
ChrgPmpDiagAdcFaild.LongName = 'Charge Pump Diagnosis ADC Failed';
ChrgPmpDiagAdcFaild.Description = 'Charge Pump Diagnosis ADC Failed';
ChrgPmpDiagAdcFaild.DocUnits = 'Cnt';
ChrgPmpDiagAdcFaild.EngDT = dt.lgc;
ChrgPmpDiagAdcFaild.EngInit = 0;
ChrgPmpDiagAdcFaild.EngMin = 0;
ChrgPmpDiagAdcFaild.EngMax = 1;
ChrgPmpDiagAdcFaild.ReadIn = {'PwrDiscnctPer1'};
ChrgPmpDiagAdcFaild.ReadType = 'Rte';


MotVelMrf = DataDict.IpSignal;
MotVelMrf.LongName = 'Motor Velocity MRF';
MotVelMrf.Description = [...
  'Unfiltered version of motor velocity'];
MotVelMrf.DocUnits = 'MotRadPerSec';
MotVelMrf.EngDT = dt.float32;
MotVelMrf.EngInit = 0;
MotVelMrf.EngMin = -1350;
MotVelMrf.EngMax = 1350;
MotVelMrf.ReadIn = {'PwrDiscnctPer1'};
MotVelMrf.ReadType = 'Rte';


PwrDiscnctSwtDiag = DataDict.IpSignal;
PwrDiscnctSwtDiag.LongName = 'Power Disconnect Switch Diagnosis';
PwrDiscnctSwtDiag.Description = [...
  'ADC Converted representation of the PMOS Diagnostic monitor point'];
PwrDiscnctSwtDiag.DocUnits = 'Volt';
PwrDiscnctSwtDiag.EngDT = dt.float32;
PwrDiscnctSwtDiag.EngInit = 0;
PwrDiscnctSwtDiag.EngMin = 0;
PwrDiscnctSwtDiag.EngMax = 40;
PwrDiscnctSwtDiag.ReadIn = {'PwrDiscnctPer1'};
PwrDiscnctSwtDiag.ReadType = 'Rte';


StrtUpSt = DataDict.IpSignal;
StrtUpSt.LongName = 'Start Up State';
StrtUpSt.Description = [...
  'Constant indicating the sequence type'];
StrtUpSt.DocUnits = 'Cnt';
StrtUpSt.EngDT = dt.u08;
StrtUpSt.EngInit = 0;
StrtUpSt.EngMin = 0;
StrtUpSt.EngMax = 160;
StrtUpSt.ReadIn = {'PwrDiscnctPer1'};
StrtUpSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = [...
  'Flag indicating the state of the system'];
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'PwrDiscnctPer1'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PwrDiscnctATestCmpl = DataDict.OpSignal;
PwrDiscnctATestCmpl.LongName = 'Power Disconnect A Test Complete';
PwrDiscnctATestCmpl.Description = [...
  'Flag indicating that the sequence A is complete'];
PwrDiscnctATestCmpl.DocUnits = 'Cnt';
PwrDiscnctATestCmpl.SwcShoName = 'PwrDiscnct';
PwrDiscnctATestCmpl.EngDT = dt.lgc;
PwrDiscnctATestCmpl.EngInit = 0;
PwrDiscnctATestCmpl.EngMin = 0;
PwrDiscnctATestCmpl.EngMax = 1;
PwrDiscnctATestCmpl.TestTolerance = 0;
PwrDiscnctATestCmpl.WrittenIn = {'PwrDiscnctPer1'};
PwrDiscnctATestCmpl.WriteType = 'Rte';


PwrDiscnctBTestCmpl = DataDict.OpSignal;
PwrDiscnctBTestCmpl.LongName = 'Power Disconnect B Test Complete';
PwrDiscnctBTestCmpl.Description = [...
  'Flag indicating that the sequence B is complete'];
PwrDiscnctBTestCmpl.DocUnits = 'Cnt';
PwrDiscnctBTestCmpl.SwcShoName = 'PwrDiscnct';
PwrDiscnctBTestCmpl.EngDT = dt.lgc;
PwrDiscnctBTestCmpl.EngInit = 0;
PwrDiscnctBTestCmpl.EngMin = 0;
PwrDiscnctBTestCmpl.EngMax = 1;
PwrDiscnctBTestCmpl.TestTolerance = 0;
PwrDiscnctBTestCmpl.WrittenIn = {'PwrDiscnctPer1'};
PwrDiscnctBTestCmpl.WriteType = 'Rte';


PwrDiscnctClsd = DataDict.OpSignal;
PwrDiscnctClsd.LongName = 'Power Disconnect Closed';
PwrDiscnctClsd.Description = [...
  'Flag indicating that the power disconnect is closed'];
PwrDiscnctClsd.DocUnits = 'Cnt';
PwrDiscnctClsd.SwcShoName = 'PwrDiscnct';
PwrDiscnctClsd.EngDT = dt.lgc;
PwrDiscnctClsd.EngInit = 0;
PwrDiscnctClsd.EngMin = 0;
PwrDiscnctClsd.EngMax = 1;
PwrDiscnctClsd.TestTolerance = 0;
PwrDiscnctClsd.WrittenIn = {'PwrDiscnctPer1'};
PwrDiscnctClsd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
PwrDiscnctBattVltgExtdNormThd = DataDict.Calibration;
PwrDiscnctBattVltgExtdNormThd.LongName = 'Battery Voltage Extended Normal Threshold';
PwrDiscnctBattVltgExtdNormThd.Description = [...
  'Battery threshold for switching between extended-operational and norma' ...
  'l-operational ranges'];
PwrDiscnctBattVltgExtdNormThd.DocUnits = 'Volt';
PwrDiscnctBattVltgExtdNormThd.EngDT = dt.float32;
PwrDiscnctBattVltgExtdNormThd.EngVal = 8;
PwrDiscnctBattVltgExtdNormThd.EngMin = 0;
PwrDiscnctBattVltgExtdNormThd.EngMax = 30;
PwrDiscnctBattVltgExtdNormThd.Cardinality = 'Inin';
PwrDiscnctBattVltgExtdNormThd.CustomerVisible = false;
PwrDiscnctBattVltgExtdNormThd.Online = false;
PwrDiscnctBattVltgExtdNormThd.Impact = 'H';
PwrDiscnctBattVltgExtdNormThd.TuningOwner = 'FDD';
PwrDiscnctBattVltgExtdNormThd.GraphLink = {''};
PwrDiscnctBattVltgExtdNormThd.Monotony = 'None';
PwrDiscnctBattVltgExtdNormThd.MaxGrad = 30;
PwrDiscnctBattVltgExtdNormThd.PortName = 'PwrDiscnctBattVltgExtdNormThd';


PwrDiscnctBattVltgNonExtdThd = DataDict.Calibration;
PwrDiscnctBattVltgNonExtdThd.LongName = 'Battery Voltage Non Extended Threshold';
PwrDiscnctBattVltgNonExtdThd.Description = [...
  'Battery threshold for switching between non-operational and extended-o' ...
  'perational ranges'];
PwrDiscnctBattVltgNonExtdThd.DocUnits = 'Volt';
PwrDiscnctBattVltgNonExtdThd.EngDT = dt.float32;
PwrDiscnctBattVltgNonExtdThd.EngVal = 7;
PwrDiscnctBattVltgNonExtdThd.EngMin = 0;
PwrDiscnctBattVltgNonExtdThd.EngMax = 30;
PwrDiscnctBattVltgNonExtdThd.Cardinality = 'Inin';
PwrDiscnctBattVltgNonExtdThd.CustomerVisible = false;
PwrDiscnctBattVltgNonExtdThd.Online = false;
PwrDiscnctBattVltgNonExtdThd.Impact = 'H';
PwrDiscnctBattVltgNonExtdThd.TuningOwner = 'FDD';
PwrDiscnctBattVltgNonExtdThd.GraphLink = {''};
PwrDiscnctBattVltgNonExtdThd.Monotony = 'None';
PwrDiscnctBattVltgNonExtdThd.MaxGrad = 30;
PwrDiscnctBattVltgNonExtdThd.PortName = 'PwrDiscnctBattVltgNonExtdThd';


PwrDiscnctChrgMinDeltaExtOper = DataDict.Calibration;
PwrDiscnctChrgMinDeltaExtOper.LongName = 'Charge Minimum Delta External Operational';
PwrDiscnctChrgMinDeltaExtOper.Description = [...
  'Minimum charge pump delta allowed for extended-operational cases'];
PwrDiscnctChrgMinDeltaExtOper.DocUnits = 'Volt';
PwrDiscnctChrgMinDeltaExtOper.EngDT = dt.float32;
PwrDiscnctChrgMinDeltaExtOper.EngVal = 5;
PwrDiscnctChrgMinDeltaExtOper.EngMin = 0;
PwrDiscnctChrgMinDeltaExtOper.EngMax = 30;
PwrDiscnctChrgMinDeltaExtOper.Cardinality = 'Inin';
PwrDiscnctChrgMinDeltaExtOper.CustomerVisible = false;
PwrDiscnctChrgMinDeltaExtOper.Online = false;
PwrDiscnctChrgMinDeltaExtOper.Impact = 'H';
PwrDiscnctChrgMinDeltaExtOper.TuningOwner = 'FDD';
PwrDiscnctChrgMinDeltaExtOper.GraphLink = {''};
PwrDiscnctChrgMinDeltaExtOper.Monotony = 'None';
PwrDiscnctChrgMinDeltaExtOper.MaxGrad = 30;
PwrDiscnctChrgMinDeltaExtOper.PortName = 'PwrDiscnctChrgMinDeltaExtOper';


PwrDiscnctChrgMinDeltaNonOper = DataDict.Calibration;
PwrDiscnctChrgMinDeltaNonOper.LongName = 'Charge Minimum Delta Non Operational';
PwrDiscnctChrgMinDeltaNonOper.Description = [...
  'Minimum charge pump delta allowed for non-operational cases'];
PwrDiscnctChrgMinDeltaNonOper.DocUnits = 'Volt';
PwrDiscnctChrgMinDeltaNonOper.EngDT = dt.float32;
PwrDiscnctChrgMinDeltaNonOper.EngVal = 0;
PwrDiscnctChrgMinDeltaNonOper.EngMin = 0;
PwrDiscnctChrgMinDeltaNonOper.EngMax = 30;
PwrDiscnctChrgMinDeltaNonOper.Cardinality = 'Inin';
PwrDiscnctChrgMinDeltaNonOper.CustomerVisible = false;
PwrDiscnctChrgMinDeltaNonOper.Online = false;
PwrDiscnctChrgMinDeltaNonOper.Impact = 'H';
PwrDiscnctChrgMinDeltaNonOper.TuningOwner = 'FDD';
PwrDiscnctChrgMinDeltaNonOper.GraphLink = {''};
PwrDiscnctChrgMinDeltaNonOper.Monotony = 'None';
PwrDiscnctChrgMinDeltaNonOper.MaxGrad = 30;
PwrDiscnctChrgMinDeltaNonOper.PortName = 'PwrDiscnctChrgMinDeltaNonOper';


PwrDiscnctChrgMinDeltaNormOper = DataDict.Calibration;
PwrDiscnctChrgMinDeltaNormOper.LongName = 'Charge Minimum Delta Normal Operational';
PwrDiscnctChrgMinDeltaNormOper.Description = [...
  'Minimum charge pump delta allowed for non-operational cases'];
PwrDiscnctChrgMinDeltaNormOper.DocUnits = 'Volt';
PwrDiscnctChrgMinDeltaNormOper.EngDT = dt.float32;
PwrDiscnctChrgMinDeltaNormOper.EngVal = 6;
PwrDiscnctChrgMinDeltaNormOper.EngMin = 0;
PwrDiscnctChrgMinDeltaNormOper.EngMax = 30;
PwrDiscnctChrgMinDeltaNormOper.Cardinality = 'Inin';
PwrDiscnctChrgMinDeltaNormOper.CustomerVisible = false;
PwrDiscnctChrgMinDeltaNormOper.Online = false;
PwrDiscnctChrgMinDeltaNormOper.Impact = 'H';
PwrDiscnctChrgMinDeltaNormOper.TuningOwner = 'FDD';
PwrDiscnctChrgMinDeltaNormOper.GraphLink = {''};
PwrDiscnctChrgMinDeltaNormOper.Monotony = 'None';
PwrDiscnctChrgMinDeltaNormOper.MaxGrad = 30;
PwrDiscnctChrgMinDeltaNormOper.PortName = 'PwrDiscnctChrgMinDeltaNormOper';


PwrDiscnctChrgPmpDiagOpenThd = DataDict.Calibration;
PwrDiscnctChrgPmpDiagOpenThd.LongName = 'Power / Power Disconnect Charge Pump Diagnosis Open Threshold';
PwrDiscnctChrgPmpDiagOpenThd.Description = [...
  'Voltage threshold for determining charge pump output is open'];
PwrDiscnctChrgPmpDiagOpenThd.DocUnits = 'Volt';
PwrDiscnctChrgPmpDiagOpenThd.EngDT = dt.float32;
PwrDiscnctChrgPmpDiagOpenThd.EngVal = 0.5;
PwrDiscnctChrgPmpDiagOpenThd.EngMin = 0;
PwrDiscnctChrgPmpDiagOpenThd.EngMax = 30;
PwrDiscnctChrgPmpDiagOpenThd.Cardinality = 'Inin';
PwrDiscnctChrgPmpDiagOpenThd.CustomerVisible = false;
PwrDiscnctChrgPmpDiagOpenThd.Online = false;
PwrDiscnctChrgPmpDiagOpenThd.Impact = 'H';
PwrDiscnctChrgPmpDiagOpenThd.TuningOwner = 'FDD';
PwrDiscnctChrgPmpDiagOpenThd.GraphLink = {''};
PwrDiscnctChrgPmpDiagOpenThd.Monotony = 'None';
PwrDiscnctChrgPmpDiagOpenThd.MaxGrad = 30;
PwrDiscnctChrgPmpDiagOpenThd.PortName = 'PwrDiscnctChrgPmpDiagOpenThd';


PwrDiscnctDeltaSwtClsThd = DataDict.Calibration;
PwrDiscnctDeltaSwtClsThd.LongName = 'Power / Power Disconnect Delta Switch Close Threshold';
PwrDiscnctDeltaSwtClsThd.Description = [...
  'Maximum value the PMOS Diag is expected to deviate from battery when c' ...
  'losed'];
PwrDiscnctDeltaSwtClsThd.DocUnits = 'Volt';
PwrDiscnctDeltaSwtClsThd.EngDT = dt.float32;
PwrDiscnctDeltaSwtClsThd.EngVal = 1;
PwrDiscnctDeltaSwtClsThd.EngMin = 0;
PwrDiscnctDeltaSwtClsThd.EngMax = 30;
PwrDiscnctDeltaSwtClsThd.Cardinality = 'Inin';
PwrDiscnctDeltaSwtClsThd.CustomerVisible = false;
PwrDiscnctDeltaSwtClsThd.Online = false;
PwrDiscnctDeltaSwtClsThd.Impact = 'H';
PwrDiscnctDeltaSwtClsThd.TuningOwner = 'FDD';
PwrDiscnctDeltaSwtClsThd.GraphLink = {''};
PwrDiscnctDeltaSwtClsThd.Monotony = 'None';
PwrDiscnctDeltaSwtClsThd.MaxGrad = 30;
PwrDiscnctDeltaSwtClsThd.PortName = 'PwrDiscnctDeltaSwtClsThd';


PwrDiscnctDeltaVltgClsThd = DataDict.Calibration;
PwrDiscnctDeltaVltgClsThd.LongName = 'Delta Voltage Close Threshold';
PwrDiscnctDeltaVltgClsThd.Description = [...
  'Maximum delta voltage before which the power disconnect is considered ' ...
  'open'];
PwrDiscnctDeltaVltgClsThd.DocUnits = 'Volt';
PwrDiscnctDeltaVltgClsThd.EngDT = dt.float32;
PwrDiscnctDeltaVltgClsThd.EngVal = 0.5;
PwrDiscnctDeltaVltgClsThd.EngMin = 0;
PwrDiscnctDeltaVltgClsThd.EngMax = 30;
PwrDiscnctDeltaVltgClsThd.Cardinality = 'Inin';
PwrDiscnctDeltaVltgClsThd.CustomerVisible = false;
PwrDiscnctDeltaVltgClsThd.Online = false;
PwrDiscnctDeltaVltgClsThd.Impact = 'H';
PwrDiscnctDeltaVltgClsThd.TuningOwner = 'FDD';
PwrDiscnctDeltaVltgClsThd.GraphLink = {''};
PwrDiscnctDeltaVltgClsThd.Monotony = 'None';
PwrDiscnctDeltaVltgClsThd.MaxGrad = 30;
PwrDiscnctDeltaVltgClsThd.PortName = 'PwrDiscnctDeltaVltgClsThd';


PwrDiscnctDeltaVltgOpenThd = DataDict.Calibration;
PwrDiscnctDeltaVltgOpenThd.LongName = 'Delta Voltage Open Threshold';
PwrDiscnctDeltaVltgOpenThd.Description = [...
  'Voltage Threshold for determining Vswitch is open'];
PwrDiscnctDeltaVltgOpenThd.DocUnits = 'Volt';
PwrDiscnctDeltaVltgOpenThd.EngDT = dt.float32;
PwrDiscnctDeltaVltgOpenThd.EngVal = 2;
PwrDiscnctDeltaVltgOpenThd.EngMin = 0;
PwrDiscnctDeltaVltgOpenThd.EngMax = 30;
PwrDiscnctDeltaVltgOpenThd.Cardinality = 'Inin';
PwrDiscnctDeltaVltgOpenThd.CustomerVisible = false;
PwrDiscnctDeltaVltgOpenThd.Online = false;
PwrDiscnctDeltaVltgOpenThd.Impact = 'H';
PwrDiscnctDeltaVltgOpenThd.TuningOwner = 'FDD';
PwrDiscnctDeltaVltgOpenThd.GraphLink = {''};
PwrDiscnctDeltaVltgOpenThd.Monotony = 'None';
PwrDiscnctDeltaVltgOpenThd.MaxGrad = 30;
PwrDiscnctDeltaVltgOpenThd.PortName = 'PwrDiscnctDeltaVltgOpenThd';


PwrDiscnctFltFailStep = DataDict.Calibration;
PwrDiscnctFltFailStep.LongName = 'Power Disconnect Fault 0x42 Fail Step';
PwrDiscnctFltFailStep.Description = [...
  'Power Disconnect NTC 0x42 Fail Step'];
PwrDiscnctFltFailStep.DocUnits = 'Cnt';
PwrDiscnctFltFailStep.EngDT = dt.u16;
PwrDiscnctFltFailStep.EngVal = 4;
PwrDiscnctFltFailStep.EngMin = 0;
PwrDiscnctFltFailStep.EngMax = 65535;
PwrDiscnctFltFailStep.Cardinality = 'Inin';
PwrDiscnctFltFailStep.CustomerVisible = false;
PwrDiscnctFltFailStep.Online = false;
PwrDiscnctFltFailStep.Impact = 'M';
PwrDiscnctFltFailStep.TuningOwner = 'FDD';
PwrDiscnctFltFailStep.GraphLink = {''};
PwrDiscnctFltFailStep.Monotony = 'None';
PwrDiscnctFltFailStep.MaxGrad = 65535;
PwrDiscnctFltFailStep.PortName = 'PwrDiscnctFltFailStep';


PwrDiscnctFltPassStep = DataDict.Calibration;
PwrDiscnctFltPassStep.LongName = 'Power Disconnect Fault Pass Step';
PwrDiscnctFltPassStep.Description = [...
  'Power Disconnect NTC 0x42 Pass Step'];
PwrDiscnctFltPassStep.DocUnits = 'Cnt';
PwrDiscnctFltPassStep.EngDT = dt.u16;
PwrDiscnctFltPassStep.EngVal = 1;
PwrDiscnctFltPassStep.EngMin = 0;
PwrDiscnctFltPassStep.EngMax = 65535;
PwrDiscnctFltPassStep.Cardinality = 'Inin';
PwrDiscnctFltPassStep.CustomerVisible = false;
PwrDiscnctFltPassStep.Online = false;
PwrDiscnctFltPassStep.Impact = 'M';
PwrDiscnctFltPassStep.TuningOwner = 'FDD';
PwrDiscnctFltPassStep.GraphLink = {''};
PwrDiscnctFltPassStep.Monotony = 'None';
PwrDiscnctFltPassStep.MaxGrad = 65535;
PwrDiscnctFltPassStep.PortName = 'PwrDiscnctFltPassStep';


PwrDiscnctFltThd = DataDict.Calibration;
PwrDiscnctFltThd.LongName = 'Power Disconnect Fault Threshold';
PwrDiscnctFltThd.Description = [...
  'Power Disconnect NTC 0x42 Threshold'];
PwrDiscnctFltThd.DocUnits = 'Cnt';
PwrDiscnctFltThd.EngDT = dt.u16;
PwrDiscnctFltThd.EngVal = 100;
PwrDiscnctFltThd.EngMin = 0;
PwrDiscnctFltThd.EngMax = 65535;
PwrDiscnctFltThd.Cardinality = 'Inin';
PwrDiscnctFltThd.CustomerVisible = false;
PwrDiscnctFltThd.Online = false;
PwrDiscnctFltThd.Impact = 'M';
PwrDiscnctFltThd.TuningOwner = 'FDD';
PwrDiscnctFltThd.GraphLink = {''};
PwrDiscnctFltThd.Monotony = 'None';
PwrDiscnctFltThd.MaxGrad = 65535;
PwrDiscnctFltThd.PortName = 'PwrDiscnctFltThd';


PwrDiscnctMtrMtnThd = DataDict.Calibration;
PwrDiscnctMtrMtnThd.LongName = 'Motor Position Threshold';
PwrDiscnctMtrMtnThd.Description = [...
  'Threshold value used to determine if the motor is moving'];
PwrDiscnctMtrMtnThd.DocUnits = 'MotRadPerSec';
PwrDiscnctMtrMtnThd.EngDT = dt.float32;
PwrDiscnctMtrMtnThd.EngVal = 100;
PwrDiscnctMtrMtnThd.EngMin = 0;
PwrDiscnctMtrMtnThd.EngMax = 700;
PwrDiscnctMtrMtnThd.Cardinality = 'Inin';
PwrDiscnctMtrMtnThd.CustomerVisible = false;
PwrDiscnctMtrMtnThd.Online = false;
PwrDiscnctMtrMtnThd.Impact = 'M';
PwrDiscnctMtrMtnThd.TuningOwner = 'FDD';
PwrDiscnctMtrMtnThd.GraphLink = {''};
PwrDiscnctMtrMtnThd.Monotony = 'None';
PwrDiscnctMtrMtnThd.MaxGrad = 700;
PwrDiscnctMtrMtnThd.PortName = 'PwrDiscnctMtrMtnThd';


PwrDiscnctPwrDiscnctRtFltFailStep = DataDict.Calibration;
PwrDiscnctPwrDiscnctRtFltFailStep.LongName = 'Power Disconnect Runtime Fault Fail Step';
PwrDiscnctPwrDiscnctRtFltFailStep.Description = [...
  'Power Disconnect NTC 0x43 Fail Step'];
PwrDiscnctPwrDiscnctRtFltFailStep.DocUnits = 'Cnt';
PwrDiscnctPwrDiscnctRtFltFailStep.EngDT = dt.u16;
PwrDiscnctPwrDiscnctRtFltFailStep.EngVal = 1308;
PwrDiscnctPwrDiscnctRtFltFailStep.EngMin = 0;
PwrDiscnctPwrDiscnctRtFltFailStep.EngMax = 65535;
PwrDiscnctPwrDiscnctRtFltFailStep.Cardinality = 'Inin';
PwrDiscnctPwrDiscnctRtFltFailStep.CustomerVisible = false;
PwrDiscnctPwrDiscnctRtFltFailStep.Online = false;
PwrDiscnctPwrDiscnctRtFltFailStep.Impact = 'M';
PwrDiscnctPwrDiscnctRtFltFailStep.TuningOwner = 'FDD';
PwrDiscnctPwrDiscnctRtFltFailStep.GraphLink = {''};
PwrDiscnctPwrDiscnctRtFltFailStep.Monotony = 'None';
PwrDiscnctPwrDiscnctRtFltFailStep.MaxGrad = 65535;
PwrDiscnctPwrDiscnctRtFltFailStep.PortName = 'PwrDiscnctPwrDiscnctRtFltFailStep';


PwrDiscnctPwrDiscnctRtFltPassStep = DataDict.Calibration;
PwrDiscnctPwrDiscnctRtFltPassStep.LongName = 'Power Disconnect Runtime Fault Pass Step';
PwrDiscnctPwrDiscnctRtFltPassStep.Description = [...
  'Power Disconnect NTC 0x43 Pass Step'];
PwrDiscnctPwrDiscnctRtFltPassStep.DocUnits = 'Cnt';
PwrDiscnctPwrDiscnctRtFltPassStep.EngDT = dt.u16;
PwrDiscnctPwrDiscnctRtFltPassStep.EngVal = 327;
PwrDiscnctPwrDiscnctRtFltPassStep.EngMin = 0;
PwrDiscnctPwrDiscnctRtFltPassStep.EngMax = 65535;
PwrDiscnctPwrDiscnctRtFltPassStep.Cardinality = 'Inin';
PwrDiscnctPwrDiscnctRtFltPassStep.CustomerVisible = false;
PwrDiscnctPwrDiscnctRtFltPassStep.Online = false;
PwrDiscnctPwrDiscnctRtFltPassStep.Impact = 'M';
PwrDiscnctPwrDiscnctRtFltPassStep.TuningOwner = 'FDD';
PwrDiscnctPwrDiscnctRtFltPassStep.GraphLink = {''};
PwrDiscnctPwrDiscnctRtFltPassStep.Monotony = 'None';
PwrDiscnctPwrDiscnctRtFltPassStep.MaxGrad = 65535;
PwrDiscnctPwrDiscnctRtFltPassStep.PortName = 'PwrDiscnctPwrDiscnctRtFltPassStep';


PwrDiscnctSwtDiagOpenThd = DataDict.Calibration;
PwrDiscnctSwtDiagOpenThd.LongName = 'Power / Power Disconnect Switch Diagnosis Open Threshold';
PwrDiscnctSwtDiagOpenThd.Description = [...
  'Voltage threshold for determining switch is open'];
PwrDiscnctSwtDiagOpenThd.DocUnits = 'Volt';
PwrDiscnctSwtDiagOpenThd.EngDT = dt.float32;
PwrDiscnctSwtDiagOpenThd.EngVal = 0.5;
PwrDiscnctSwtDiagOpenThd.EngMin = 0;
PwrDiscnctSwtDiagOpenThd.EngMax = 30;
PwrDiscnctSwtDiagOpenThd.Cardinality = 'Inin';
PwrDiscnctSwtDiagOpenThd.CustomerVisible = false;
PwrDiscnctSwtDiagOpenThd.Online = false;
PwrDiscnctSwtDiagOpenThd.Impact = 'H';
PwrDiscnctSwtDiagOpenThd.TuningOwner = 'FDD';
PwrDiscnctSwtDiagOpenThd.GraphLink = {''};
PwrDiscnctSwtDiagOpenThd.Monotony = 'None';
PwrDiscnctSwtDiagOpenThd.MaxGrad = 30;
PwrDiscnctSwtDiagOpenThd.PortName = 'PwrDiscnctSwtDiagOpenThd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
BattVltgSwdMax = DataDict.ImprtdCal;
BattVltgSwdMax.DocUnits = 'Volt';
BattVltgSwdMax.EngDT = dt.float32;
BattVltgSwdMax.EngVal = 16;
BattVltgSwdMax.EngMin = 6;
BattVltgSwdMax.EngMax = 26.5;
BattVltgSwdMax.PortName = 'BattVltgSwdMax';
BattVltgSwdMax.Description = [...
  'Voltage transition point to switch between Switched Battery and Batter' ...
  'y voltage'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
FirstRunCmpl = DataDict.PIM;
FirstRunCmpl.LongName = 'First Run Complete';
FirstRunCmpl.Description = 'Indication of first run Complete';
FirstRunCmpl.DocUnits = 'Cnt';
FirstRunCmpl.EngDT = dt.lgc;
FirstRunCmpl.EngMin = 0;
FirstRunCmpl.EngMax = 1;
FirstRunCmpl.InitRowCol = [1  1];



Ntc042PrmByte = DataDict.PIM;
Ntc042PrmByte.LongName = 'NTC 042 Parameter Byte ';
Ntc042PrmByte.Description = [...
  'used to save parameter bits for NTC 42'];
Ntc042PrmByte.DocUnits = 'Cnt';
Ntc042PrmByte.EngDT = dt.u08;
Ntc042PrmByte.EngMin = 0;
Ntc042PrmByte.EngMax = 255;
Ntc042PrmByte.InitRowCol = [1  1];


PwrDiscnctClsdSts = DataDict.PIM;
PwrDiscnctClsdSts.LongName = 'Power Disconnect Closed Status';
PwrDiscnctClsdSts.Description = [...
  'Indication of Power Disconnect Closed to write to RTE output'];
PwrDiscnctClsdSts.DocUnits = 'Cnt';
PwrDiscnctClsdSts.EngDT = dt.lgc;
PwrDiscnctClsdSts.EngMin = 0;
PwrDiscnctClsdSts.EngMax = 1;
PwrDiscnctClsdSts.InitRowCol = [1  1];


PwrDiscnctFltAtInitErrAcc = DataDict.PIM;
PwrDiscnctFltAtInitErrAcc.LongName = 'Power Disconnect Fault At Init Error Accumulator Test Complete Previous';
PwrDiscnctFltAtInitErrAcc.Description = [...
  'Indication of Fault error accumulator value'];
PwrDiscnctFltAtInitErrAcc.DocUnits = 'Cnt';
PwrDiscnctFltAtInitErrAcc.EngDT = dt.u16;
PwrDiscnctFltAtInitErrAcc.EngMin = 0;
PwrDiscnctFltAtInitErrAcc.EngMax = 65535;
PwrDiscnctFltAtInitErrAcc.InitRowCol = [1  1];


PwrDiscnctSt = DataDict.PIM;
PwrDiscnctSt.LongName = 'Power Disconnect State';
PwrDiscnctSt.Description = [...
  'Indication of Power Disconnect State'];
PwrDiscnctSt.DocUnits = 'Cnt';
PwrDiscnctSt.EngDT = enum.PwrDiscnctSts1;
PwrDiscnctSt.EngMin = PwrDiscnctSts1.PWRDISCNCTSTS_WAITFORSTRTA;
PwrDiscnctSt.EngMax = PwrDiscnctSts1.PWRDISCNCTSTS_RTDIAGC;
PwrDiscnctSt.InitRowCol = [1  1];


PwrDiscnctTestACmpl = DataDict.PIM;
PwrDiscnctTestACmpl.LongName = 'Power Disconnect Test A Complete';
PwrDiscnctTestACmpl.Description = [...
  'Indication of Power Disconnect A Test completion to write to RTE at th' ...
  'e end'];
PwrDiscnctTestACmpl.DocUnits = 'Cnt';
PwrDiscnctTestACmpl.EngDT = dt.lgc;
PwrDiscnctTestACmpl.EngMin = 0;
PwrDiscnctTestACmpl.EngMax = 1;
PwrDiscnctTestACmpl.InitRowCol = [1  1];


PwrDiscnctTestBCmpl = DataDict.PIM;
PwrDiscnctTestBCmpl.LongName = 'Power Disconnect Test B Complete';
PwrDiscnctTestBCmpl.Description = [...
  'Indication of Power Disconnect B Test Complete Flag to write to RTE at' ...
  ' the end'];
PwrDiscnctTestBCmpl.DocUnits = 'Cnt';
PwrDiscnctTestBCmpl.EngDT = dt.lgc;
PwrDiscnctTestBCmpl.EngMin = 0;
PwrDiscnctTestBCmpl.EngMax = 1;
PwrDiscnctTestBCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect A Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect A Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.EngVal = 20;
ELECGLBPRM_STRTUPSTPWRDISCNCTATESTSTRT_CNT_U08.Define = 'Global';


ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08 = DataDict.Constant;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.LongName = 'StartUp State - Power Disconnect B Start';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Description = [...
  'Indication to start Power Disconnect B Sequence'];
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.DocUnits = 'Cnt';
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngDT = dt.u08;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.EngVal = 60;
ELECGLBPRM_STRTUPSTPWRDISCNCTBTESTSTRT_CNT_U08.Define = 'Global';


INIERRACC_CNT_U16 = DataDict.Constant;
INIERRACC_CNT_U16.LongName = 'Initial Error Accumulator';
INIERRACC_CNT_U16.Description = [...
  'Value used to initialize error accumulator to 1/4 th of threshold'];
INIERRACC_CNT_U16.DocUnits = 'Cnt';
INIERRACC_CNT_U16.EngDT = dt.u16;
INIERRACC_CNT_U16.EngVal = 4;
INIERRACC_CNT_U16.Define = 'Local';


PASSSTEPMAX_CNT_U16 = DataDict.Constant;
PASSSTEPMAX_CNT_U16.LongName = 'Pass Step Maximum';
PASSSTEPMAX_CNT_U16.Description = 'Maximum value to take NTC to Pass';
PASSSTEPMAX_CNT_U16.DocUnits = 'Cnt';
PASSSTEPMAX_CNT_U16.EngDT = dt.u16;
PASSSTEPMAX_CNT_U16.EngVal = 65535;
PASSSTEPMAX_CNT_U16.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
PwrDiscnctFltAtInit = DataDict.NTC;
PwrDiscnctFltAtInit.NtcNr = NtcNr1.NTCNR_0X042;
PwrDiscnctFltAtInit.NtcTyp = 'None';
PwrDiscnctFltAtInit.LongName = 'Power Disconnect Fault At Initialization';
PwrDiscnctFltAtInit.Description = 'The NTC flag that is used to indicate a Power Disconnect Fault At Initialization';
PwrDiscnctFltAtInit.NtcStInfo = DataDict.NtcStInfoBitPacked;
PwrDiscnctFltAtInit.NtcStInfo.Bit0Descr = 'Bit used to indicate power disconnect Fail to Open depending on dela voltage';
PwrDiscnctFltAtInit.NtcStInfo.Bit1Descr = 'Bit used to indicate power disconnect Fail to Open using voltage across PMOS FET  ';
PwrDiscnctFltAtInit.NtcStInfo.Bit2Descr = 'Bit used to indicate power disconnect Fail to Open using voltage across FET gate signal override  ';
PwrDiscnctFltAtInit.NtcStInfo.Bit3Descr = 'Unused';
PwrDiscnctFltAtInit.NtcStInfo.Bit4Descr = 'Bit used to indicate power disconnect Fail to Close using voltage across PMOS FET';
PwrDiscnctFltAtInit.NtcStInfo.Bit5Descr = 'Bit used to indicate Power Disconnect Fail to Close using delta voltage';
PwrDiscnctFltAtInit.NtcStInfo.Bit6Descr = 'Unused';
PwrDiscnctFltAtInit.NtcStInfo.Bit7Descr = 'Unused';


PwrDiscnctRtFlt = DataDict.NTC;
PwrDiscnctRtFlt.NtcNr = NtcNr1.NTCNR_0X043;
PwrDiscnctRtFlt.NtcTyp = 'Deb';
PwrDiscnctRtFlt.LongName = 'Power Disconnect Runtime Fault';
PwrDiscnctRtFlt.Description = 'The NTC flag that is used to indicate a Power Disconnect Runtime Fault';
PwrDiscnctRtFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
PwrDiscnctRtFlt.NtcStInfo.Bit0Descr = 'Bit used to indicate Unexpected Open During Operation';
PwrDiscnctRtFlt.NtcStInfo.Bit1Descr = 'Bit used for Battery voltage ADC Fail';
PwrDiscnctRtFlt.NtcStInfo.Bit2Descr = 'Bit Used for Charge Pump Doagnosis signal ADC fail';
PwrDiscnctRtFlt.NtcStInfo.Bit3Descr = 'Unused';
PwrDiscnctRtFlt.NtcStInfo.Bit4Descr = 'Unused';
PwrDiscnctRtFlt.NtcStInfo.Bit5Descr = 'Unused';
PwrDiscnctRtFlt.NtcStInfo.Bit6Descr = 'Unused';
PwrDiscnctRtFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
