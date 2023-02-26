%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 04-Aug-2017 15:21:43       %
%                                  Created with tool release: 3.0.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES101A = DataDict.FDD;
ES101A.Version = '5.3.X';
ES101A.LongName = 'Diagnostic Manager';
ES101A.ShoName  = 'DiagcMgr';
ES101A.DesignASIL = 'D';
ES101A.Description = [...
  'This function is responsible for handling all the NTCs that are used b' ...
  'y different FDDs. The Diagnostic Manager sets the NTC called by any co' ...
  'mponent and requests the system to either ramp down to Disable or take' ...
  ' no action'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
DiagcMgrInit1 = DataDict.Runnable;
DiagcMgrInit1.Context = 'Rte';
DiagcMgrInit1.TimeStep = 0;
DiagcMgrInit1.Description = 'Diagnostic Manager Core Init 1';

DiagcMgrPer1 = DataDict.Runnable;
DiagcMgrPer1.Context = 'Rte';
DiagcMgrPer1.TimeStep = 0.002;
DiagcMgrPer1.Description = 'Diagnostic Manager Core Periodic 1';

DiagcMgrPer2 = DataDict.Runnable;
DiagcMgrPer2.Context = 'Rte';
DiagcMgrPer2.TimeStep = 0.1;
DiagcMgrPer2.Description = 'Diagnostic Manager Core Periodic 2';

ClrAllDiagc = DataDict.SrvRunnable;
ClrAllDiagc.Context = 'Rte';
ClrAllDiagc.Description = [...
  'A function to clear all Diagnostics. NTCs and DTCs'];
ClrAllDiagc.Return = DataDict.CSReturn;
ClrAllDiagc.Return.Type = 'None';
ClrAllDiagc.Return.Min = [];
ClrAllDiagc.Return.Max = [];
ClrAllDiagc.Return.TestTolerance = [];

ClrLtchCntrData = DataDict.SrvRunnable;
ClrLtchCntrData.Context = 'Rte';
ClrLtchCntrData.Description = [...
  'Clear Latch Counter Data - Reset all counters to 0'];
ClrLtchCntrData.Return = DataDict.CSReturn;
ClrLtchCntrData.Return.Type = 'None';
ClrLtchCntrData.Return.Min = [];
ClrLtchCntrData.Return.Max = [];
ClrLtchCntrData.Return.TestTolerance = [];

ClrSnpshtData = DataDict.SrvRunnable;
ClrSnpshtData.Context = 'Rte';
ClrSnpshtData.Description = 'Clear Snapshot Data';
ClrSnpshtData.Return = DataDict.CSReturn;
ClrSnpshtData.Return.Type = 'None';
ClrSnpshtData.Return.Min = [];
ClrSnpshtData.Return.Max = [];
ClrSnpshtData.Return.TestTolerance = [];

CnvSnpshtData_f32 = DataDict.SrvRunnable;
CnvSnpshtData_f32.Context = 'Rte';
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

CnvSnpshtData_logl = DataDict.SrvRunnable;
CnvSnpshtData_logl.Context = 'Rte';
CnvSnpshtData_logl.Description = [...
  'Convert a logical data type to a uint32 data type'];
CnvSnpshtData_logl.Return = DataDict.CSReturn;
CnvSnpshtData_logl.Return.Type = 'None';
CnvSnpshtData_logl.Return.Min = [];
CnvSnpshtData_logl.Return.Max = [];
CnvSnpshtData_logl.Return.TestTolerance = [];
CnvSnpshtData_logl.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_logl.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_logl.Arguments(1).EngMin = 0;
CnvSnpshtData_logl.Arguments(1).EngMax = 1;
CnvSnpshtData_logl.Arguments(1).TestTolerance = 0;
CnvSnpshtData_logl.Arguments(1).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(1).Direction = 'Out';
CnvSnpshtData_logl.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_logl.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_logl.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_logl.Arguments(2).EngDT = dt.lgc;
CnvSnpshtData_logl.Arguments(2).EngMin = 0;
CnvSnpshtData_logl.Arguments(2).EngMax = 1;
CnvSnpshtData_logl.Arguments(2).Units = 'Cnt';
CnvSnpshtData_logl.Arguments(2).Direction = 'In';
CnvSnpshtData_logl.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_logl.Arguments(2).Description = [...
  'Input for converting Snapshot data of type boolean'];

CnvSnpshtData_s08 = DataDict.SrvRunnable;
CnvSnpshtData_s08.Context = 'Rte';
CnvSnpshtData_s08.Description = [...
  'Convert a signed08 data type to a uint32 data type'];
CnvSnpshtData_s08.Return = DataDict.CSReturn;
CnvSnpshtData_s08.Return.Type = 'None';
CnvSnpshtData_s08.Return.Min = [];
CnvSnpshtData_s08.Return.Max = [];
CnvSnpshtData_s08.Return.TestTolerance = [];
CnvSnpshtData_s08.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_s08.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_s08.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_s08.Arguments(1).EngMin = 0;
CnvSnpshtData_s08.Arguments(1).EngMax = 255;
CnvSnpshtData_s08.Arguments(1).TestTolerance = 0;
CnvSnpshtData_s08.Arguments(1).Units = 'Cnt';
CnvSnpshtData_s08.Arguments(1).Direction = 'Out';
CnvSnpshtData_s08.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_s08.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_s08.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_s08.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_s08.Arguments(2).EngDT = dt.s08;
CnvSnpshtData_s08.Arguments(2).EngMin = -127;
CnvSnpshtData_s08.Arguments(2).EngMax = 127;
CnvSnpshtData_s08.Arguments(2).Units = 'Cnt';
CnvSnpshtData_s08.Arguments(2).Direction = 'In';
CnvSnpshtData_s08.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_s08.Arguments(2).Description = [...
  'Input for converting Snapshot data of type signed08'];

CnvSnpshtData_s16 = DataDict.SrvRunnable;
CnvSnpshtData_s16.Context = 'Rte';
CnvSnpshtData_s16.Description = [...
  'Convert a signed16 data type to a uint32 data type'];
CnvSnpshtData_s16.Return = DataDict.CSReturn;
CnvSnpshtData_s16.Return.Type = 'None';
CnvSnpshtData_s16.Return.Min = [];
CnvSnpshtData_s16.Return.Max = [];
CnvSnpshtData_s16.Return.TestTolerance = [];
CnvSnpshtData_s16.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_s16.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_s16.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_s16.Arguments(1).EngMin = 0;
CnvSnpshtData_s16.Arguments(1).EngMax = 65535;
CnvSnpshtData_s16.Arguments(1).TestTolerance = 0;
CnvSnpshtData_s16.Arguments(1).Units = 'Cnt';
CnvSnpshtData_s16.Arguments(1).Direction = 'Out';
CnvSnpshtData_s16.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_s16.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_s16.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_s16.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_s16.Arguments(2).EngDT = dt.s16;
CnvSnpshtData_s16.Arguments(2).EngMin = -32768;
CnvSnpshtData_s16.Arguments(2).EngMax = 32767;
CnvSnpshtData_s16.Arguments(2).Units = 'Cnt';
CnvSnpshtData_s16.Arguments(2).Direction = 'In';
CnvSnpshtData_s16.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_s16.Arguments(2).Description = [...
  'Input for converting Snapshot data of type signed16'];

CnvSnpshtData_s32 = DataDict.SrvRunnable;
CnvSnpshtData_s32.Context = 'Rte';
CnvSnpshtData_s32.Description = [...
  'Convert a signed32 data type to a uint32 data type'];
CnvSnpshtData_s32.Return = DataDict.CSReturn;
CnvSnpshtData_s32.Return.Type = 'None';
CnvSnpshtData_s32.Return.Min = [];
CnvSnpshtData_s32.Return.Max = [];
CnvSnpshtData_s32.Return.TestTolerance = [];
CnvSnpshtData_s32.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_s32.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_s32.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_s32.Arguments(1).EngMin = 0;
CnvSnpshtData_s32.Arguments(1).EngMax = 4294967295;
CnvSnpshtData_s32.Arguments(1).TestTolerance = 0;
CnvSnpshtData_s32.Arguments(1).Units = 'Cnt';
CnvSnpshtData_s32.Arguments(1).Direction = 'Out';
CnvSnpshtData_s32.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_s32.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_s32.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_s32.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_s32.Arguments(2).EngDT = dt.s32;
CnvSnpshtData_s32.Arguments(2).EngMin = -2147483648;
CnvSnpshtData_s32.Arguments(2).EngMax = 2147483647;
CnvSnpshtData_s32.Arguments(2).Units = 'Cnt';
CnvSnpshtData_s32.Arguments(2).Direction = 'In';
CnvSnpshtData_s32.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_s32.Arguments(2).Description = [...
  'Input for converting Snapshot data of type signed32'];

CnvSnpshtData_u08 = DataDict.SrvRunnable;
CnvSnpshtData_u08.Context = 'Rte';
CnvSnpshtData_u08.Description = [...
  'Convert a uint08 data type to a uint32 data type'];
CnvSnpshtData_u08.Return = DataDict.CSReturn;
CnvSnpshtData_u08.Return.Type = 'None';
CnvSnpshtData_u08.Return.Min = [];
CnvSnpshtData_u08.Return.Max = [];
CnvSnpshtData_u08.Return.TestTolerance = [];
CnvSnpshtData_u08.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_u08.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_u08.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_u08.Arguments(1).EngMin = 0;
CnvSnpshtData_u08.Arguments(1).EngMax = 255;
CnvSnpshtData_u08.Arguments(1).TestTolerance = 0;
CnvSnpshtData_u08.Arguments(1).Units = 'Cnt';
CnvSnpshtData_u08.Arguments(1).Direction = 'Out';
CnvSnpshtData_u08.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_u08.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_u08.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_u08.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_u08.Arguments(2).EngDT = dt.u08;
CnvSnpshtData_u08.Arguments(2).EngMin = 0;
CnvSnpshtData_u08.Arguments(2).EngMax = 255;
CnvSnpshtData_u08.Arguments(2).Units = 'Cnt';
CnvSnpshtData_u08.Arguments(2).Direction = 'In';
CnvSnpshtData_u08.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_u08.Arguments(2).Description = [...
  'Input for converting Snapshot data of type unsigned08'];

CnvSnpshtData_u16 = DataDict.SrvRunnable;
CnvSnpshtData_u16.Context = 'Rte';
CnvSnpshtData_u16.Description = [...
  'Convert a uint16 data type to a uint32 data type'];
CnvSnpshtData_u16.Return = DataDict.CSReturn;
CnvSnpshtData_u16.Return.Type = 'None';
CnvSnpshtData_u16.Return.Min = [];
CnvSnpshtData_u16.Return.Max = [];
CnvSnpshtData_u16.Return.TestTolerance = [];
CnvSnpshtData_u16.Arguments(1) = DataDict.CSArguments;
CnvSnpshtData_u16.Arguments(1).Name = 'SnpshtDataCnvd';
CnvSnpshtData_u16.Arguments(1).EngDT = dt.u32;
CnvSnpshtData_u16.Arguments(1).EngMin = 0;
CnvSnpshtData_u16.Arguments(1).EngMax = 65535;
CnvSnpshtData_u16.Arguments(1).TestTolerance = 0;
CnvSnpshtData_u16.Arguments(1).Units = 'Cnt';
CnvSnpshtData_u16.Arguments(1).Direction = 'Out';
CnvSnpshtData_u16.Arguments(1).InitRowCol = [1  1];
CnvSnpshtData_u16.Arguments(1).Description = [...
  'Converted Snapshot data of type uint32'];
CnvSnpshtData_u16.Arguments(2) = DataDict.CSArguments;
CnvSnpshtData_u16.Arguments(2).Name = 'SnpshtData';
CnvSnpshtData_u16.Arguments(2).EngDT = dt.u16;
CnvSnpshtData_u16.Arguments(2).EngMin = 0;
CnvSnpshtData_u16.Arguments(2).EngMax = 65535;
CnvSnpshtData_u16.Arguments(2).Units = 'Cnt';
CnvSnpshtData_u16.Arguments(2).Direction = 'In';
CnvSnpshtData_u16.Arguments(2).InitRowCol = [1  1];
CnvSnpshtData_u16.Arguments(2).Description = [...
  'Input for converting Snapshot data of type unsigned16'];

DiagcMgrIninCore = DataDict.SrvRunnable;
DiagcMgrIninCore.Context = 'Rte';
DiagcMgrIninCore.Description = [...
  'Used to initialize the data from NVM, Initialize NtcInfoAry, Initializ' ...
  'e DiagcSts and DiagcMgrActv'];
DiagcMgrIninCore.Return = DataDict.CSReturn;
DiagcMgrIninCore.Return.Type = 'None';
DiagcMgrIninCore.Return.Min = [];
DiagcMgrIninCore.Return.Max = [];
DiagcMgrIninCore.Return.TestTolerance = [];
DiagcMgrIninCore.Arguments(1) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(1).Name = 'ApplIdx';
DiagcMgrIninCore.Arguments(1).EngDT = dt.u08;
DiagcMgrIninCore.Arguments(1).EngMin = 0;
DiagcMgrIninCore.Arguments(1).EngMax = 255;
DiagcMgrIninCore.Arguments(1).Units = 'Cnt';
DiagcMgrIninCore.Arguments(1).Direction = 'In';
DiagcMgrIninCore.Arguments(1).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(1).Description = 'Application Index';
DiagcMgrIninCore.Arguments(2) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(2).Name = 'NtcInfoArySize';
DiagcMgrIninCore.Arguments(2).EngDT = dt.u08;
DiagcMgrIninCore.Arguments(2).EngMin = 0;
DiagcMgrIninCore.Arguments(2).EngMax = 255;
DiagcMgrIninCore.Arguments(2).Units = 'Cnt';
DiagcMgrIninCore.Arguments(2).Direction = 'In';
DiagcMgrIninCore.Arguments(2).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(2).Description = 'NTC Info Array Size';
DiagcMgrIninCore.Arguments(3) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(3).Name = 'NtcInfoAry';
DiagcMgrIninCore.Arguments(3).EngDT = struct.NtcInfoRec4;
DiagcMgrIninCore.Arguments(3).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
DiagcMgrIninCore.Arguments(3).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
DiagcMgrIninCore.Arguments(3).TestTolerance = 0;
DiagcMgrIninCore.Arguments(3).Units = 'Cnt';
DiagcMgrIninCore.Arguments(3).Direction = 'InOut';
DiagcMgrIninCore.Arguments(3).InitRowCol = [65535      1];
DiagcMgrIninCore.Arguments(3).Description = 'NTC Info Array of Config length';
DiagcMgrIninCore.Arguments(4) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(4).Name = 'DiagcData';
DiagcMgrIninCore.Arguments(4).EngDT = struct.DiagcDataRec2;
DiagcMgrIninCore.Arguments(4).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
DiagcMgrIninCore.Arguments(4).EngMax = [struct('DiagcSts',255,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
DiagcMgrIninCore.Arguments(4).TestTolerance = 0;
DiagcMgrIninCore.Arguments(4).Units = 'Cnt';
DiagcMgrIninCore.Arguments(4).Direction = 'Out';
DiagcMgrIninCore.Arguments(4).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(4).Description = 'Diagnostic Data';
DiagcMgrIninCore.Arguments(5) = DataDict.CSArguments;
DiagcMgrIninCore.Arguments(5).Name = 'ProxySetNtcData';
DiagcMgrIninCore.Arguments(5).EngDT = struct.DiagcDataRec2;
DiagcMgrIninCore.Arguments(5).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
DiagcMgrIninCore.Arguments(5).EngMax = [struct('DiagcSts',255,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
DiagcMgrIninCore.Arguments(5).TestTolerance = 0;
DiagcMgrIninCore.Arguments(5).Units = 'Cnt';
DiagcMgrIninCore.Arguments(5).Direction = 'Out';
DiagcMgrIninCore.Arguments(5).InitRowCol = [1  1];
DiagcMgrIninCore.Arguments(5).Description = 'Proxy Set NTC Data';

DiagcMgrPwrDwn = DataDict.SrvRunnable;
DiagcMgrPwrDwn.Context = 'NonRte';
DiagcMgrPwrDwn.Description = 'Diagnostic Manager Power Down';
DiagcMgrPwrDwn.Return = DataDict.CSReturn;
DiagcMgrPwrDwn.Return.Type = 'None';
DiagcMgrPwrDwn.Return.Min = [];
DiagcMgrPwrDwn.Return.Max = [];
DiagcMgrPwrDwn.Return.TestTolerance = [];

GetNtcActvCore = DataDict.SrvRunnable;
GetNtcActvCore.Context = 'Rte';
GetNtcActvCore.Description = 'Get NTC Active Core';
GetNtcActvCore.Return = DataDict.CSReturn;
GetNtcActvCore.Return.Type = 'None';
GetNtcActvCore.Return.Min = [];
GetNtcActvCore.Return.Max = [];
GetNtcActvCore.Return.TestTolerance = [];
GetNtcActvCore.Arguments(1) = DataDict.CSArguments;
GetNtcActvCore.Arguments(1).Name = 'NtcNr';
GetNtcActvCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcActvCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcActvCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcActvCore.Arguments(1).Units = 'Cnt';
GetNtcActvCore.Arguments(1).Direction = 'In';
GetNtcActvCore.Arguments(1).InitRowCol = [1  1];
GetNtcActvCore.Arguments(1).Description = 'NTC Number';
GetNtcActvCore.Arguments(2) = DataDict.CSArguments;
GetNtcActvCore.Arguments(2).Name = 'NtcActv';
GetNtcActvCore.Arguments(2).EngDT = dt.lgc;
GetNtcActvCore.Arguments(2).EngMin = 0;
GetNtcActvCore.Arguments(2).EngMax = 1;
GetNtcActvCore.Arguments(2).TestTolerance = 0;
GetNtcActvCore.Arguments(2).Units = 'Cnt';
GetNtcActvCore.Arguments(2).Direction = 'Out';
GetNtcActvCore.Arguments(2).InitRowCol = [1  1];
GetNtcActvCore.Arguments(2).Description = 'NTC Active';

GetNtcQlfrStsCore = DataDict.SrvRunnable;
GetNtcQlfrStsCore.Context = 'Rte';
GetNtcQlfrStsCore.Description = 'Get NTC Qualifier Status Core';
GetNtcQlfrStsCore.Return = DataDict.CSReturn;
GetNtcQlfrStsCore.Return.Type = 'None';
GetNtcQlfrStsCore.Return.Min = [];
GetNtcQlfrStsCore.Return.Max = [];
GetNtcQlfrStsCore.Return.TestTolerance = [];
GetNtcQlfrStsCore.Arguments(1) = DataDict.CSArguments;
GetNtcQlfrStsCore.Arguments(1).Name = 'NtcNr';
GetNtcQlfrStsCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcQlfrStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcQlfrStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcQlfrStsCore.Arguments(1).Units = 'Cnt';
GetNtcQlfrStsCore.Arguments(1).Direction = 'In';
GetNtcQlfrStsCore.Arguments(1).InitRowCol = [1  1];
GetNtcQlfrStsCore.Arguments(1).Description = 'NTC Number';
GetNtcQlfrStsCore.Arguments(2) = DataDict.CSArguments;
GetNtcQlfrStsCore.Arguments(2).Name = 'NtcQlfr';
GetNtcQlfrStsCore.Arguments(2).EngDT = enum.SigQlfr1;
GetNtcQlfrStsCore.Arguments(2).EngMin = SigQlfr1.SIGQLFR_NORES;
GetNtcQlfrStsCore.Arguments(2).EngMax = SigQlfr1.SIGQLFR_FAILD;
GetNtcQlfrStsCore.Arguments(2).TestTolerance = 0;
GetNtcQlfrStsCore.Arguments(2).Units = 'Cnt';
GetNtcQlfrStsCore.Arguments(2).Direction = 'Out';
GetNtcQlfrStsCore.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrStsCore.Arguments(2).Description = 'NTC Qualifier';

GetNtcStsCore = DataDict.SrvRunnable;
GetNtcStsCore.Context = 'Rte';
GetNtcStsCore.Description = 'Get NTC Status Core';
GetNtcStsCore.Return = DataDict.CSReturn;
GetNtcStsCore.Return.Type = 'None';
GetNtcStsCore.Return.Min = [];
GetNtcStsCore.Return.Max = [];
GetNtcStsCore.Return.TestTolerance = [];
GetNtcStsCore.Arguments(1) = DataDict.CSArguments;
GetNtcStsCore.Arguments(1).Name = 'NtcNr';
GetNtcStsCore.Arguments(1).EngDT = enum.NtcNr1;
GetNtcStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
GetNtcStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
GetNtcStsCore.Arguments(1).Units = 'Cnt';
GetNtcStsCore.Arguments(1).Direction = 'In';
GetNtcStsCore.Arguments(1).InitRowCol = [1  1];
GetNtcStsCore.Arguments(1).Description = 'NTC Number';
GetNtcStsCore.Arguments(2) = DataDict.CSArguments;
GetNtcStsCore.Arguments(2).Name = 'NtcInfoSts';
GetNtcStsCore.Arguments(2).EngDT = dt.u08;
GetNtcStsCore.Arguments(2).EngMin = 0;
GetNtcStsCore.Arguments(2).EngMax = 255;
GetNtcStsCore.Arguments(2).TestTolerance = 0;
GetNtcStsCore.Arguments(2).Units = 'Cnt';
GetNtcStsCore.Arguments(2).Direction = 'Out';
GetNtcStsCore.Arguments(2).InitRowCol = [1  1];
GetNtcStsCore.Arguments(2).Description = 'NTC Info Status';

ReadLtchCntrData = DataDict.SrvRunnable;
ReadLtchCntrData.Context = 'Rte';
ReadLtchCntrData.Description = 'Read Latch Counter Data';
ReadLtchCntrData.Return = DataDict.CSReturn;
ReadLtchCntrData.Return.Type = 'None';
ReadLtchCntrData.Return.Min = [];
ReadLtchCntrData.Return.Max = [];
ReadLtchCntrData.Return.TestTolerance = [];
ReadLtchCntrData.Arguments(1) = DataDict.CSArguments;
ReadLtchCntrData.Arguments(1).Name = 'ReadLtchCntrAry';
ReadLtchCntrData.Arguments(1).EngDT = dt.u08;
ReadLtchCntrData.Arguments(1).EngMin = 0;
ReadLtchCntrData.Arguments(1).EngMax = 255;
ReadLtchCntrData.Arguments(1).TestTolerance = 0;
ReadLtchCntrData.Arguments(1).Units = 'Cnt';
ReadLtchCntrData.Arguments(1).Direction = 'Out';
ReadLtchCntrData.Arguments(1).InitRowCol = [1  20];
ReadLtchCntrData.Arguments(1).Description = [...
  'Diagnostic Manager Read Latch Counters'];

ReadNtcFltAry = DataDict.SrvRunnable;
ReadNtcFltAry.Context = 'Rte';
ReadNtcFltAry.Description = 'Read NTC Fault Array';
ReadNtcFltAry.Return = DataDict.CSReturn;
ReadNtcFltAry.Return.Type = 'None';
ReadNtcFltAry.Return.Min = [];
ReadNtcFltAry.Return.Max = [];
ReadNtcFltAry.Return.TestTolerance = [];
ReadNtcFltAry.Arguments(1) = DataDict.CSArguments;
ReadNtcFltAry.Arguments(1).Name = 'DiagcMgrReadFltInfo';
ReadNtcFltAry.Arguments(1).EngDT = struct.ReadFltInfoRec1;
ReadNtcFltAry.Arguments(1).EngMin = [struct('NtcNr',0,'AgiCntr',0,'Sts',0,'NtcStInfo',0)];
ReadNtcFltAry.Arguments(1).EngMax = [struct('NtcNr',511,'AgiCntr',255,'Sts',255,'NtcStInfo',255)];
ReadNtcFltAry.Arguments(1).TestTolerance = 0;
ReadNtcFltAry.Arguments(1).Units = 'Cnt';
ReadNtcFltAry.Arguments(1).Direction = 'Out';
ReadNtcFltAry.Arguments(1).InitRowCol = [1  20];
ReadNtcFltAry.Arguments(1).Description = 'Diagnostic Manager Read Fault Info';

ReadNtcInfoAndDebCntr = DataDict.SrvRunnable;
ReadNtcInfoAndDebCntr.Context = 'Rte';
ReadNtcInfoAndDebCntr.Description = 'Read NTC Info and Debounce Counter';
ReadNtcInfoAndDebCntr.Return = DataDict.CSReturn;
ReadNtcInfoAndDebCntr.Return.Type = 'None';
ReadNtcInfoAndDebCntr.Return.Min = [];
ReadNtcInfoAndDebCntr.Return.Max = [];
ReadNtcInfoAndDebCntr.Return.TestTolerance = [];
ReadNtcInfoAndDebCntr.Arguments(1) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(1).Name = 'NtcNr';
ReadNtcInfoAndDebCntr.Arguments(1).EngDT = enum.NtcNr1;
ReadNtcInfoAndDebCntr.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
ReadNtcInfoAndDebCntr.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
ReadNtcInfoAndDebCntr.Arguments(1).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(1).Direction = 'In';
ReadNtcInfoAndDebCntr.Arguments(1).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(1).Description = 'NTC Number';
ReadNtcInfoAndDebCntr.Arguments(2) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(2).Name = 'NtcInfo';
ReadNtcInfoAndDebCntr.Arguments(2).EngDT = struct.NtcInfoRec4;
ReadNtcInfoAndDebCntr.Arguments(2).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
ReadNtcInfoAndDebCntr.Arguments(2).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
ReadNtcInfoAndDebCntr.Arguments(2).TestTolerance = 0;
ReadNtcInfoAndDebCntr.Arguments(2).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(2).Direction = 'Out';
ReadNtcInfoAndDebCntr.Arguments(2).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(2).Description = 'None';
ReadNtcInfoAndDebCntr.Arguments(3) = DataDict.CSArguments;
ReadNtcInfoAndDebCntr.Arguments(3).Name = 'DebCntr';
ReadNtcInfoAndDebCntr.Arguments(3).EngDT = dt.s16;
ReadNtcInfoAndDebCntr.Arguments(3).EngMin = -32768;
ReadNtcInfoAndDebCntr.Arguments(3).EngMax = 32767;
ReadNtcInfoAndDebCntr.Arguments(3).TestTolerance = 0;
ReadNtcInfoAndDebCntr.Arguments(3).Units = 'Cnt';
ReadNtcInfoAndDebCntr.Arguments(3).Direction = 'Out';
ReadNtcInfoAndDebCntr.Arguments(3).InitRowCol = [1  1];
ReadNtcInfoAndDebCntr.Arguments(3).Description = 'Debounce Counter of that NTC';

ReadSnpshtData = DataDict.SrvRunnable;
ReadSnpshtData.Context = 'Rte';
ReadSnpshtData.Description = 'Read Snapshot Data';
ReadSnpshtData.Return = DataDict.CSReturn;
ReadSnpshtData.Return.Type = 'None';
ReadSnpshtData.Return.Min = [];
ReadSnpshtData.Return.Max = [];
ReadSnpshtData.Return.TestTolerance = [];
ReadSnpshtData.Arguments(1) = DataDict.CSArguments;
ReadSnpshtData.Arguments(1).Name = 'ReadSnpshtAry';
ReadSnpshtData.Arguments(1).EngDT = struct.SnpshtDataRec2;
ReadSnpshtData.Arguments(1).EngMin = [struct('SpclSnpshtData0',0,'SpclSnpshtData1',0,'SpclSnpshtData2',0,'MicroDiagcData',0,'HwTq',0,'MotTq',0,'IgnCntr',0,'BrdgVltg',0,'EcuT',0,'NtcNr',0,'NtcStInfo',0,'SysSt',0)];
ReadSnpshtData.Arguments(1).EngMax = [struct('SpclSnpshtData0',4294967295,'SpclSnpshtData1',4294967295,'SpclSnpshtData2',4294967295,'MicroDiagcData',255,'HwTq',10,'MotTq',8.8,'IgnCntr',255,'BrdgVltg',40,'EcuT',150,'NtcNr',255,'NtcStInfo',255,'SysSt',4)];
ReadSnpshtData.Arguments(1).TestTolerance = 0;
ReadSnpshtData.Arguments(1).Units = 'Cnt';
ReadSnpshtData.Arguments(1).Direction = 'Out';
ReadSnpshtData.Arguments(1).InitRowCol = [8  1];
ReadSnpshtData.Arguments(1).Description = 'Outputs the Array of Snapshot Data';

RestoreDiagcMgrLtchCntrAryDft = DataDict.SrvRunnable;
RestoreDiagcMgrLtchCntrAryDft.Context = 'NonRte';
RestoreDiagcMgrLtchCntrAryDft.Description = [...
  'Resotre Latch Counter Array to Default Values'];
RestoreDiagcMgrLtchCntrAryDft.Return = DataDict.CSReturn;
RestoreDiagcMgrLtchCntrAryDft.Return.Type = 'None';
RestoreDiagcMgrLtchCntrAryDft.Return.Min = [];
RestoreDiagcMgrLtchCntrAryDft.Return.Max = [];
RestoreDiagcMgrLtchCntrAryDft.Return.TestTolerance = [];

RestoreNtcFltAryDft = DataDict.SrvRunnable;
RestoreNtcFltAryDft.Context = 'NonRte';
RestoreNtcFltAryDft.Description = [...
  'Resotre NTC Fault Array to Default Values'];
RestoreNtcFltAryDft.Return = DataDict.CSReturn;
RestoreNtcFltAryDft.Return.Type = 'None';
RestoreNtcFltAryDft.Return.Min = [];
RestoreNtcFltAryDft.Return.Max = [];
RestoreNtcFltAryDft.Return.TestTolerance = [];

RestoreSnpshtAryDft = DataDict.SrvRunnable;
RestoreSnpshtAryDft.Context = 'NonRte';
RestoreSnpshtAryDft.Description = [...
  'Resotre Snapshot Array to Default Values'];
RestoreSnpshtAryDft.Return = DataDict.CSReturn;
RestoreSnpshtAryDft.Return.Type = 'None';
RestoreSnpshtAryDft.Return.Min = [];
RestoreSnpshtAryDft.Return.Max = [];
RestoreSnpshtAryDft.Return.TestTolerance = [];

SetNtcStsCore = DataDict.SrvRunnable;
SetNtcStsCore.Context = 'Rte';
SetNtcStsCore.Description = [...
  'Set NTC status and Snapshot Data Core'];
SetNtcStsCore.Return = DataDict.CSReturn;
SetNtcStsCore.Return.Type = 'Standard';
SetNtcStsCore.Return.Min = 0;
SetNtcStsCore.Return.Max = 1;
SetNtcStsCore.Return.TestTolerance = [];
SetNtcStsCore.Return.Description = 'Standard Return';
SetNtcStsCore.Arguments(1) = DataDict.CSArguments;
SetNtcStsCore.Arguments(1).Name = 'NtcNr';
SetNtcStsCore.Arguments(1).EngDT = enum.NtcNr1;
SetNtcStsCore.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcStsCore.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcStsCore.Arguments(1).Units = 'Cnt';
SetNtcStsCore.Arguments(1).Direction = 'In';
SetNtcStsCore.Arguments(1).InitRowCol = [1  1];
SetNtcStsCore.Arguments(1).Description = 'NTC Number';
SetNtcStsCore.Arguments(2) = DataDict.CSArguments;
SetNtcStsCore.Arguments(2).Name = 'NtcStInfo';
SetNtcStsCore.Arguments(2).EngDT = dt.u08;
SetNtcStsCore.Arguments(2).EngMin = 0;
SetNtcStsCore.Arguments(2).EngMax = 255;
SetNtcStsCore.Arguments(2).Units = 'Cnt';
SetNtcStsCore.Arguments(2).Direction = 'In';
SetNtcStsCore.Arguments(2).InitRowCol = [1  1];
SetNtcStsCore.Arguments(2).Description = 'NTC State Info';
SetNtcStsCore.Arguments(3) = DataDict.CSArguments;
SetNtcStsCore.Arguments(3).Name = 'NtcSts';
SetNtcStsCore.Arguments(3).EngDT = enum.NtcSts1;
SetNtcStsCore.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcStsCore.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcStsCore.Arguments(3).Units = 'Cnt';
SetNtcStsCore.Arguments(3).Direction = 'In';
SetNtcStsCore.Arguments(3).InitRowCol = [1  1];
SetNtcStsCore.Arguments(3).Description = 'NTC Status';
SetNtcStsCore.Arguments(4) = DataDict.CSArguments;
SetNtcStsCore.Arguments(4).Name = 'DebStep';
SetNtcStsCore.Arguments(4).EngDT = dt.u16;
SetNtcStsCore.Arguments(4).EngMin = 0;
SetNtcStsCore.Arguments(4).EngMax = 65535;
SetNtcStsCore.Arguments(4).Units = 'Cnt';
SetNtcStsCore.Arguments(4).Direction = 'In';
SetNtcStsCore.Arguments(4).InitRowCol = [1  1];
SetNtcStsCore.Arguments(4).Description = 'Debounce Step';
SetNtcStsCore.Arguments(5) = DataDict.CSArguments;
SetNtcStsCore.Arguments(5).Name = 'DiagcData';
SetNtcStsCore.Arguments(5).EngDT = struct.DiagcDataRec2;
SetNtcStsCore.Arguments(5).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
SetNtcStsCore.Arguments(5).EngMax = [struct('DiagcSts',255,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
SetNtcStsCore.Arguments(5).TestTolerance = 0;
SetNtcStsCore.Arguments(5).Units = 'Cnt';
SetNtcStsCore.Arguments(5).Direction = 'InOut';
SetNtcStsCore.Arguments(5).InitRowCol = [1  1];
SetNtcStsCore.Arguments(5).Description = 'Diagnostic Data';
SetNtcStsCore.Arguments(6) = DataDict.CSArguments;
SetNtcStsCore.Arguments(6).Name = 'ProxySetNtcData';
SetNtcStsCore.Arguments(6).EngDT = struct.DiagcDataRec2;
SetNtcStsCore.Arguments(6).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
SetNtcStsCore.Arguments(6).EngMax = [struct('DiagcSts',255,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
SetNtcStsCore.Arguments(6).TestTolerance = 0;
SetNtcStsCore.Arguments(6).Units = 'Cnt';
SetNtcStsCore.Arguments(6).Direction = 'InOut';
SetNtcStsCore.Arguments(6).InitRowCol = [1  1];
SetNtcStsCore.Arguments(6).Description = 'Proxy Set NTC Data';
SetNtcStsCore.Arguments(7) = DataDict.CSArguments;
SetNtcStsCore.Arguments(7).Name = 'NtcInfo';
SetNtcStsCore.Arguments(7).EngDT = struct.NtcInfoRec4;
SetNtcStsCore.Arguments(7).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
SetNtcStsCore.Arguments(7).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
SetNtcStsCore.Arguments(7).TestTolerance = 0;
SetNtcStsCore.Arguments(7).Units = 'Cnt';
SetNtcStsCore.Arguments(7).Direction = 'InOut';
SetNtcStsCore.Arguments(7).InitRowCol = [1  1];
SetNtcStsCore.Arguments(7).Description = 'NTC Info';
SetNtcStsCore.Arguments(8) = DataDict.CSArguments;
SetNtcStsCore.Arguments(8).Name = 'NtcInfoDebCntr';
SetNtcStsCore.Arguments(8).EngDT = dt.s16;
SetNtcStsCore.Arguments(8).EngMin = -32768;
SetNtcStsCore.Arguments(8).EngMax = 32767;
SetNtcStsCore.Arguments(8).TestTolerance = 0;
SetNtcStsCore.Arguments(8).Units = 'Cnt';
SetNtcStsCore.Arguments(8).Direction = 'InOut';
SetNtcStsCore.Arguments(8).InitRowCol = [1  1];
SetNtcStsCore.Arguments(8).Description = 'NTC Info Debounce Counter';
SetNtcStsCore.Arguments(9) = DataDict.CSArguments;
SetNtcStsCore.Arguments(9).Name = 'SpclSnpshtData0';
SetNtcStsCore.Arguments(9).EngDT = dt.u32;
SetNtcStsCore.Arguments(9).EngMin = 0;
SetNtcStsCore.Arguments(9).EngMax = 4294967295;
SetNtcStsCore.Arguments(9).Units = 'Cnt';
SetNtcStsCore.Arguments(9).Direction = 'In';
SetNtcStsCore.Arguments(9).InitRowCol = [1  1];
SetNtcStsCore.Arguments(9).Description = 'Special Snapshot Data 0';
SetNtcStsCore.Arguments(10) = DataDict.CSArguments;
SetNtcStsCore.Arguments(10).Name = 'SpclSnpshtData1';
SetNtcStsCore.Arguments(10).EngDT = dt.u32;
SetNtcStsCore.Arguments(10).EngMin = 0;
SetNtcStsCore.Arguments(10).EngMax = 4294967295;
SetNtcStsCore.Arguments(10).Units = 'Cnt';
SetNtcStsCore.Arguments(10).Direction = 'In';
SetNtcStsCore.Arguments(10).InitRowCol = [1  1];
SetNtcStsCore.Arguments(10).Description = 'Special Snapshot Data 1';
SetNtcStsCore.Arguments(11) = DataDict.CSArguments;
SetNtcStsCore.Arguments(11).Name = 'SpclSnpshtData2';
SetNtcStsCore.Arguments(11).EngDT = dt.u32;
SetNtcStsCore.Arguments(11).EngMin = 0;
SetNtcStsCore.Arguments(11).EngMax = 4294967295;
SetNtcStsCore.Arguments(11).Units = 'Cnt';
SetNtcStsCore.Arguments(11).Direction = 'In';
SetNtcStsCore.Arguments(11).InitRowCol = [1  1];
SetNtcStsCore.Arguments(11).Description = 'Special Snapshot Data 2';
SetNtcStsCore.Arguments(12) = DataDict.CSArguments;
SetNtcStsCore.Arguments(12).Name = 'SpclSnpshtDataPrsnt';
SetNtcStsCore.Arguments(12).EngDT = dt.lgc;
SetNtcStsCore.Arguments(12).EngMin = 0;
SetNtcStsCore.Arguments(12).EngMax = 1;
SetNtcStsCore.Arguments(12).Units = 'Cnt';
SetNtcStsCore.Arguments(12).Direction = 'In';
SetNtcStsCore.Arguments(12).InitRowCol = [1  1];
SetNtcStsCore.Arguments(12).Description = 'Special Snapshot Data Present';

UpdDtcEnaCdn = DataDict.SrvRunnable;
UpdDtcEnaCdn.Context = 'NonRte';
UpdDtcEnaCdn.Description = 'Update DTC Enable Condition';
UpdDtcEnaCdn.Return = DataDict.CSReturn;
UpdDtcEnaCdn.Return.Type = 'None';
UpdDtcEnaCdn.Return.Min = [];
UpdDtcEnaCdn.Return.Max = [];
UpdDtcEnaCdn.Return.TestTolerance = [];
UpdDtcEnaCdn.Arguments(1) = DataDict.CSArguments;
UpdDtcEnaCdn.Arguments(1).Name = 'DtcEnaCdnSts';
UpdDtcEnaCdn.Arguments(1).EngDT = dt.lgc;
UpdDtcEnaCdn.Arguments(1).EngMin = 0;
UpdDtcEnaCdn.Arguments(1).EngMax = 1;
UpdDtcEnaCdn.Arguments(1).Units = 'Cnt';
UpdDtcEnaCdn.Arguments(1).Direction = 'In';
UpdDtcEnaCdn.Arguments(1).InitRowCol = [1  1];
UpdDtcEnaCdn.Arguments(1).Description = 'DTC Enable Condition Status';
UpdDtcEnaCdn.Arguments(2) = DataDict.CSArguments;
UpdDtcEnaCdn.Arguments(2).Name = 'DtcEnaCdnId';
UpdDtcEnaCdn.Arguments(2).EngDT = dt.u08;
UpdDtcEnaCdn.Arguments(2).EngMin = 0;
UpdDtcEnaCdn.Arguments(2).EngMax = 15;
UpdDtcEnaCdn.Arguments(2).Units = 'Cnt';
UpdDtcEnaCdn.Arguments(2).Direction = 'In';
UpdDtcEnaCdn.Arguments(2).InitRowCol = [1  1];
UpdDtcEnaCdn.Arguments(2).Description = 'DTC Enable Condition Id';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
Dem_ClearDTC = DataDict.Client;
Dem_ClearDTC.CallLocation = {'DiagcMgrPer2'};
Dem_ClearDTC.Description = 'DEM Clear DTC';
Dem_ClearDTC.Return = DataDict.CSReturn;
Dem_ClearDTC.Return.Type = 'Dem_ReturnClearDTCType';
Dem_ClearDTC.Return.Min = 0;
Dem_ClearDTC.Return.Max = 6;
Dem_ClearDTC.Return.TestTolerance = [];
Dem_ClearDTC.Arguments(1) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(1).Name = 'DTC';
Dem_ClearDTC.Arguments(1).EngDT = dt.u32;
Dem_ClearDTC.Arguments(1).EngMin = 0;
Dem_ClearDTC.Arguments(1).EngMax = 4294967295;
Dem_ClearDTC.Arguments(1).Units = 'Cnt';
Dem_ClearDTC.Arguments(1).Direction = 'In';
Dem_ClearDTC.Arguments(1).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(1).Description = 'DTC';
Dem_ClearDTC.Arguments(2) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(2).Name = 'DTCFormat';
Dem_ClearDTC.Arguments(2).EngDT = enum.Dem_DTCFormatType;
Dem_ClearDTC.Arguments(2).EngMin = Dem_DTCFormatType.DEM_DTC_FORMAT_OBD;
Dem_ClearDTC.Arguments(2).EngMax = Dem_DTCFormatType.DEM_DTC_FORMAT_UDS;
Dem_ClearDTC.Arguments(2).Units = 'Cnt';
Dem_ClearDTC.Arguments(2).Direction = 'In';
Dem_ClearDTC.Arguments(2).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(2).Description = 'DTCFormat';
Dem_ClearDTC.Arguments(3) = DataDict.CSArguments;
Dem_ClearDTC.Arguments(3).Name = 'DTCOrigin';
Dem_ClearDTC.Arguments(3).EngDT = enum.Dem_DTCOriginType;
Dem_ClearDTC.Arguments(3).EngMin = Dem_DTCOriginType.DEM_DTC_ORIGIN_PRIMARY_MEMORY;
Dem_ClearDTC.Arguments(3).EngMax = Dem_DTCOriginType.DEM_DTC_ORIGIN_SECONDARY_MEMORY;
Dem_ClearDTC.Arguments(3).Units = 'Cnt';
Dem_ClearDTC.Arguments(3).Direction = 'In';
Dem_ClearDTC.Arguments(3).InitRowCol = [1  1];
Dem_ClearDTC.Arguments(3).Description = 'DTCOrigin';


Dem_GetDTCOfEvent = DataDict.Client;
Dem_GetDTCOfEvent.CallLocation = {'DiagcMgrPer2'};
Dem_GetDTCOfEvent.Description = 'DEM Get DTC of Event';
Dem_GetDTCOfEvent.Return = DataDict.CSReturn;
Dem_GetDTCOfEvent.Return.Type = 'Standard';
Dem_GetDTCOfEvent.Return.Min = 0;
Dem_GetDTCOfEvent.Return.Max = 1;
Dem_GetDTCOfEvent.Return.TestTolerance = [];
Dem_GetDTCOfEvent.Return.Description = 'Standard';
Dem_GetDTCOfEvent.Arguments(1) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(1).Name = 'EventID';
Dem_GetDTCOfEvent.Arguments(1).EngDT = dt.u16;
Dem_GetDTCOfEvent.Arguments(1).EngMin = 1;
Dem_GetDTCOfEvent.Arguments(1).EngMax = 65535;
Dem_GetDTCOfEvent.Arguments(1).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(1).Direction = 'In';
Dem_GetDTCOfEvent.Arguments(1).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(1).Description = 'EventID';
Dem_GetDTCOfEvent.Arguments(2) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(2).Name = 'DTCFormat';
Dem_GetDTCOfEvent.Arguments(2).EngDT = enum.Dem_DTCFormatType;
Dem_GetDTCOfEvent.Arguments(2).EngMin = Dem_DTCFormatType.DEM_DTC_FORMAT_OBD;
Dem_GetDTCOfEvent.Arguments(2).EngMax = Dem_DTCFormatType.DEM_DTC_FORMAT_UDS;
Dem_GetDTCOfEvent.Arguments(2).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(2).Direction = 'In';
Dem_GetDTCOfEvent.Arguments(2).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(2).Description = 'DTCFormat';
Dem_GetDTCOfEvent.Arguments(3) = DataDict.CSArguments;
Dem_GetDTCOfEvent.Arguments(3).Name = 'DTCOfEvent';
Dem_GetDTCOfEvent.Arguments(3).EngDT = dt.u32;
Dem_GetDTCOfEvent.Arguments(3).EngMin = 0;
Dem_GetDTCOfEvent.Arguments(3).EngMax = 4294967295;
Dem_GetDTCOfEvent.Arguments(3).TestTolerance = 0;
Dem_GetDTCOfEvent.Arguments(3).Units = 'Cnt';
Dem_GetDTCOfEvent.Arguments(3).Direction = 'Out';
Dem_GetDTCOfEvent.Arguments(3).InitRowCol = [1  1];
Dem_GetDTCOfEvent.Arguments(3).Description = 'DTCOfEvent';


Dem_SetEventStatus = DataDict.Client;
Dem_SetEventStatus.CallLocation = {'DiagcMgrPer2'};
Dem_SetEventStatus.Description = 'DEM Set Event Status';
Dem_SetEventStatus.Return = DataDict.CSReturn;
Dem_SetEventStatus.Return.Type = 'Standard';
Dem_SetEventStatus.Return.Min = 0;
Dem_SetEventStatus.Return.Max = 1;
Dem_SetEventStatus.Return.TestTolerance = [];
Dem_SetEventStatus.Return.Description = 'Standard';
Dem_SetEventStatus.Arguments(1) = DataDict.CSArguments;
Dem_SetEventStatus.Arguments(1).Name = 'EventId';
Dem_SetEventStatus.Arguments(1).EngDT = dt.u16;
Dem_SetEventStatus.Arguments(1).EngMin = 1;
Dem_SetEventStatus.Arguments(1).EngMax = 65535;
Dem_SetEventStatus.Arguments(1).Units = 'Cnt';
Dem_SetEventStatus.Arguments(1).Direction = 'In';
Dem_SetEventStatus.Arguments(1).InitRowCol = [1  1];
Dem_SetEventStatus.Arguments(1).Description = 'EventId';
Dem_SetEventStatus.Arguments(2) = DataDict.CSArguments;
Dem_SetEventStatus.Arguments(2).Name = 'EventStatus';
Dem_SetEventStatus.Arguments(2).EngDT = enum.Dem_EventStatusType;
Dem_SetEventStatus.Arguments(2).EngMin = Dem_EventStatusType.DEM_EVENT_STATUS_PASSED;
Dem_SetEventStatus.Arguments(2).EngMax = Dem_EventStatusType.DEM_EVENT_STATUS_PREFAILED;
Dem_SetEventStatus.Arguments(2).Units = 'Cnt';
Dem_SetEventStatus.Arguments(2).Direction = 'In';
Dem_SetEventStatus.Arguments(2).InitRowCol = [1  1];
Dem_SetEventStatus.Arguments(2).Description = 'EventStatus';


DiagcMgrApplCrc_SetRamBlockStatus = DataDict.Client;
DiagcMgrApplCrc_SetRamBlockStatus.CallLocation = {'DiagcMgrInit1'};
DiagcMgrApplCrc_SetRamBlockStatus.Description = [...
  'Diagnostic Manager Application CRC - Set RAM Block Status'];
DiagcMgrApplCrc_SetRamBlockStatus.Return = DataDict.CSReturn;
DiagcMgrApplCrc_SetRamBlockStatus.Return.Type = 'Standard';
DiagcMgrApplCrc_SetRamBlockStatus.Return.Min = 0;
DiagcMgrApplCrc_SetRamBlockStatus.Return.Max = 1;
DiagcMgrApplCrc_SetRamBlockStatus.Return.TestTolerance = 0;
DiagcMgrApplCrc_SetRamBlockStatus.Return.Description = 'None';
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).EngMin = 0;
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).EngMax = 1;
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).Direction = 'In';
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
DiagcMgrApplCrc_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';


DiagcMgrLtchCntrAry_SetRamBlockStatus = DataDict.Client;
DiagcMgrLtchCntrAry_SetRamBlockStatus.CallLocation = {'DiagcMgrPwrDwn','ClrLtchCntrData'};
DiagcMgrLtchCntrAry_SetRamBlockStatus.Description = [...
  'Diagnostic Manager Latch Counter Array - Set RAM Block Status'];
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return = DataDict.CSReturn;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return.Type = 'Standard';
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return.Min = 0;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return.Max = 1;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return.TestTolerance = 0;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Return.Description = 'None';
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
DiagcMgrLtchCntrAry_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';


DiagcMgrNtcFltAry_SetRamBlockStatus = DataDict.Client;
DiagcMgrNtcFltAry_SetRamBlockStatus.CallLocation = {'DiagcMgrPwrDwn'};
DiagcMgrNtcFltAry_SetRamBlockStatus.Description = [...
  'Diagnostic Manager NTC Fault Array - Set RAM Block Status'];
DiagcMgrNtcFltAry_SetRamBlockStatus.Return = DataDict.CSReturn;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Type = 'Standard';
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Min = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Max = 1;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.TestTolerance = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Return.Description = 'None';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
DiagcMgrNtcFltAry_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';


GetDiagcDataApplX = DataDict.Client;
GetDiagcDataApplX.CallLocation = {'DiagcMgrPer1'};
GetDiagcDataApplX.Description = 'Get Diagnostic Data Application X';
GetDiagcDataApplX.Return = DataDict.CSReturn;
GetDiagcDataApplX.Return.Type = 'None';
GetDiagcDataApplX.Return.Min = [];
GetDiagcDataApplX.Return.Max = [];
GetDiagcDataApplX.Return.TestTolerance = [];
GetDiagcDataApplX.Arguments(1) = DataDict.CSArguments;
GetDiagcDataApplX.Arguments(1).Name = 'DiagcData';
GetDiagcDataApplX.Arguments(1).EngDT = struct.DiagcDataRec2;
GetDiagcDataApplX.Arguments(1).EngMin = [struct('DiagcSts',0,'ActvRampRate',0.1,'ActvMotTqCmdSca',0)];
GetDiagcDataApplX.Arguments(1).EngMax = [struct('DiagcSts',255,'ActvRampRate',500,'ActvMotTqCmdSca',1)];
GetDiagcDataApplX.Arguments(1).TestTolerance = 0;
GetDiagcDataApplX.Arguments(1).Units = 'Cnt';
GetDiagcDataApplX.Arguments(1).Direction = 'Out';
GetDiagcDataApplX.Arguments(1).InitRowCol = [1  1];
GetDiagcDataApplX.Arguments(1).Description = 'Diagnostic Data';


GetMcuDiagcSpplData = DataDict.Client;
GetMcuDiagcSpplData.CallLocation = {'SetNtcStsCore'};
GetMcuDiagcSpplData.Description = [...
  'Read the value of register that stores supplimentary information of MC' ...
  'U Diagnostic Data'];
GetMcuDiagcSpplData.Return = DataDict.CSReturn;
GetMcuDiagcSpplData.Return.Type = 'None';
GetMcuDiagcSpplData.Return.Min = [];
GetMcuDiagcSpplData.Return.Max = [];
GetMcuDiagcSpplData.Return.TestTolerance = [];
GetMcuDiagcSpplData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcSpplData.Arguments(1).Name = 'McuDiagcData1';
GetMcuDiagcSpplData.Arguments(1).EngDT = dt.u32;
GetMcuDiagcSpplData.Arguments(1).EngMin = 0;
GetMcuDiagcSpplData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcSpplData.Arguments(1).TestTolerance = 0;
GetMcuDiagcSpplData.Arguments(1).Units = 'Cnt';
GetMcuDiagcSpplData.Arguments(1).Direction = 'Out';
GetMcuDiagcSpplData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcSpplData.Arguments(1).Description = 'None';


GetNtcDebCntrApplX = DataDict.Client;
GetNtcDebCntrApplX.CallLocation = {'ReadNtcInfoAndDebCntr'};
GetNtcDebCntrApplX.Description = [...
  'Get NTC Debounce Counter Application X'];
GetNtcDebCntrApplX.Return = DataDict.CSReturn;
GetNtcDebCntrApplX.Return.Type = 'None';
GetNtcDebCntrApplX.Return.Min = [];
GetNtcDebCntrApplX.Return.Max = [];
GetNtcDebCntrApplX.Return.TestTolerance = [];
GetNtcDebCntrApplX.Arguments(1) = DataDict.CSArguments;
GetNtcDebCntrApplX.Arguments(1).Name = 'DebCntrIdx';
GetNtcDebCntrApplX.Arguments(1).EngDT = dt.u08;
GetNtcDebCntrApplX.Arguments(1).EngMin = 0;
GetNtcDebCntrApplX.Arguments(1).EngMax = 255;
GetNtcDebCntrApplX.Arguments(1).Units = 'Cnt';
GetNtcDebCntrApplX.Arguments(1).Direction = 'In';
GetNtcDebCntrApplX.Arguments(1).InitRowCol = [1  1];
GetNtcDebCntrApplX.Arguments(1).Description = 'NTC Debounce Counter Index';
GetNtcDebCntrApplX.Arguments(2) = DataDict.CSArguments;
GetNtcDebCntrApplX.Arguments(2).Name = 'DebCntr';
GetNtcDebCntrApplX.Arguments(2).EngDT = dt.s16;
GetNtcDebCntrApplX.Arguments(2).EngMin = -32768;
GetNtcDebCntrApplX.Arguments(2).EngMax = 32767;
GetNtcDebCntrApplX.Arguments(2).TestTolerance = 0;
GetNtcDebCntrApplX.Arguments(2).Units = 'Cnt';
GetNtcDebCntrApplX.Arguments(2).Direction = 'Out';
GetNtcDebCntrApplX.Arguments(2).InitRowCol = [1  1];
GetNtcDebCntrApplX.Arguments(2).Description = 'Debounce Counter Value of the NTC';


GetNtcInfoApplX = DataDict.Client;
GetNtcInfoApplX.CallLocation = {'DiagcMgrPer2','ReadNtcInfoAndDebCntr','ReadNtcFltAry','DiagcMgrPwrDown','GetNtcActvCore','GetNtcQlfrStsCore','GetNtcStsCore'};
GetNtcInfoApplX.Description = 'Get NTC Info Application X';
GetNtcInfoApplX.Return = DataDict.CSReturn;
GetNtcInfoApplX.Return.Type = 'None';
GetNtcInfoApplX.Return.Min = [];
GetNtcInfoApplX.Return.Max = [];
GetNtcInfoApplX.Return.TestTolerance = [];
GetNtcInfoApplX.Arguments(1) = DataDict.CSArguments;
GetNtcInfoApplX.Arguments(1).Name = 'NtcInfoIdx';
GetNtcInfoApplX.Arguments(1).EngDT = dt.u08;
GetNtcInfoApplX.Arguments(1).EngMin = 0;
GetNtcInfoApplX.Arguments(1).EngMax = 255;
GetNtcInfoApplX.Arguments(1).Units = 'Cnt';
GetNtcInfoApplX.Arguments(1).Direction = 'In';
GetNtcInfoApplX.Arguments(1).InitRowCol = [1  1];
GetNtcInfoApplX.Arguments(1).Description = 'NTC Info Index';
GetNtcInfoApplX.Arguments(2) = DataDict.CSArguments;
GetNtcInfoApplX.Arguments(2).Name = 'NtcInfo';
GetNtcInfoApplX.Arguments(2).EngDT = struct.NtcInfoRec4;
GetNtcInfoApplX.Arguments(2).EngMin = [struct('NtcStInfo',0,'Sts',0,'AgiCntr',0)];
GetNtcInfoApplX.Arguments(2).EngMax = [struct('NtcStInfo',255,'Sts',255,'AgiCntr',255)];
GetNtcInfoApplX.Arguments(2).TestTolerance = 0;
GetNtcInfoApplX.Arguments(2).Units = 'Cnt';
GetNtcInfoApplX.Arguments(2).Direction = 'Out';
GetNtcInfoApplX.Arguments(2).InitRowCol = [1  1];
GetNtcInfoApplX.Arguments(2).Description = 'NTC Info';


SnpshtDataAry_SetRamBlockStatus = DataDict.Client;
SnpshtDataAry_SetRamBlockStatus.CallLocation = {'SetNtcStsCore'};
SnpshtDataAry_SetRamBlockStatus.Description = [...
  'Snapshot Data Array - Set RAM Block Status'];
SnpshtDataAry_SetRamBlockStatus.Return = DataDict.CSReturn;
SnpshtDataAry_SetRamBlockStatus.Return.Type = 'Standard';
SnpshtDataAry_SetRamBlockStatus.Return.Min = 0;
SnpshtDataAry_SetRamBlockStatus.Return.Max = 1;
SnpshtDataAry_SetRamBlockStatus.Return.TestTolerance = 0;
SnpshtDataAry_SetRamBlockStatus.Return.Description = 'None';
SnpshtDataAry_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngMin = 0;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).EngMax = 1;
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Direction = 'In';
SnpshtDataAry_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
SnpshtDataAry_SetRamBlockStatus.Arguments(1).Description = 'BlockChanged';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
BrdgVltg = DataDict.IpSignal;
BrdgVltg.LongName = 'Bridge Voltage';
BrdgVltg.Description = 'Output Bridge Voltage';
BrdgVltg.DocUnits = 'Volt';
BrdgVltg.EngDT = dt.float32;
BrdgVltg.EngInit = 6;
BrdgVltg.EngMin = 6;
BrdgVltg.EngMax = 26.5;
BrdgVltg.ReadIn = {'SetNtcStsCore'};
BrdgVltg.ReadType = 'Rte';


EcuTFild = DataDict.IpSignal;
EcuTFild.LongName = 'Ecu Temperature Filtered';
EcuTFild.Description = 'Filtered temperature';
EcuTFild.DocUnits = 'DegCgrd';
EcuTFild.EngDT = dt.float32;
EcuTFild.EngInit = 25;
EcuTFild.EngMin = -50;
EcuTFild.EngMax = 150;
EcuTFild.ReadIn = {'SetNtcStsCore'};
EcuTFild.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque Value';
HwTq.Description = [...
  'Value of the Handwheel Torque output '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SetNtcStsCore'};
HwTq.ReadType = 'Rte';


IgnCntr = DataDict.IpSignal;
IgnCntr.LongName = 'Ignition Counter';
IgnCntr.Description = [...
  'Conditioned Value For System-Wide Usage.'];
IgnCntr.DocUnits = 'Cnt';
IgnCntr.EngDT = dt.u32;
IgnCntr.EngInit = 0;
IgnCntr.EngMin = 0;
IgnCntr.EngMax = 4294967295;
IgnCntr.ReadIn = {'SetNtcStsCore'};
IgnCntr.ReadType = 'Rte';


MfgDiagcInhb = DataDict.IpSignal;
MfgDiagcInhb.LongName = 'Manufacture Diagnostic Inhibit';
MfgDiagcInhb.Description = 'Manufacture Diagnostic Inhibit';
MfgDiagcInhb.DocUnits = 'Cnt';
MfgDiagcInhb.EngDT = dt.lgc;
MfgDiagcInhb.EngInit = 0;
MfgDiagcInhb.EngMin = 0;
MfgDiagcInhb.EngMax = 1;
MfgDiagcInhb.ReadIn = {'SetNtcStsCore'};
MfgDiagcInhb.ReadType = 'Rte';


MfgEnaSt = DataDict.IpSignal;
MfgEnaSt.LongName = 'Manufacture Enable State';
MfgEnaSt.Description = 'Manufacture Enable State';
MfgEnaSt.DocUnits = 'Cnt';
MfgEnaSt.EngDT = enum.MfgEnaSt1;
MfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MfgEnaSt.ReadIn = {'SetNtcStsCore'};
MfgEnaSt.ReadType = 'Rte';


MotTqCmdMrfScad = DataDict.IpSignal;
MotTqCmdMrfScad.LongName = 'Mrf Motor Torque Command Scaled';
MotTqCmdMrfScad.Description = [...
  'Scaled version of Mrf Motor Torque Command'];
MotTqCmdMrfScad.DocUnits = 'MotNwtMtr';
MotTqCmdMrfScad.EngDT = dt.float32;
MotTqCmdMrfScad.EngInit = 0;
MotTqCmdMrfScad.EngMin = -8.8;
MotTqCmdMrfScad.EngMax = 8.8;
MotTqCmdMrfScad.ReadIn = {'SetNtcStsCore'};
MotTqCmdMrfScad.ReadType = 'Rte';


SwApplCrc = DataDict.IpSignal;
SwApplCrc.LongName = 'Software Application CRC';
SwApplCrc.Description = [...
  'CRC calcuated by the program before flashing it'];
SwApplCrc.DocUnits = 'Cnt';
SwApplCrc.EngDT = dt.u32;
SwApplCrc.EngInit = 0;
SwApplCrc.EngMin = 0;
SwApplCrc.EngMax = 4294967295;
SwApplCrc.ReadIn = {'DiagcMgrInit1'};
SwApplCrc.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'System State';
SysSt.Description = 'system state';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'SetNtcStsCore'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
ClrDiagcFlgProxy = DataDict.OpSignal;
ClrDiagcFlgProxy.LongName = 'Clear Diagnostics Flag Proxy';
ClrDiagcFlgProxy.Description = [...
  'Clear Flag to Clear all NTCs and DTCs and runs to the Proxy DiagcMgr'];
ClrDiagcFlgProxy.DocUnits = 'Cnt';
ClrDiagcFlgProxy.SwcShoName = 'DiagcMgr';
ClrDiagcFlgProxy.EngDT = dt.u08;
ClrDiagcFlgProxy.EngInit = 0;
ClrDiagcFlgProxy.EngMin = 0;
ClrDiagcFlgProxy.EngMax = 1;
ClrDiagcFlgProxy.TestTolerance = 0;
ClrDiagcFlgProxy.WrittenIn = {'ClrAllDiagc'};
ClrDiagcFlgProxy.WriteType = 'Rte';


DiagcStsCtrldShtDwnFltPrsnt = DataDict.OpSignal;
DiagcStsCtrldShtDwnFltPrsnt.LongName = 'Diagnostic Status Controlled Shutdown Fault Present';
DiagcStsCtrldShtDwnFltPrsnt.Description = [...
  'Controlled Shutdown Fault Present flag'];
DiagcStsCtrldShtDwnFltPrsnt.DocUnits = 'Cnt';
DiagcStsCtrldShtDwnFltPrsnt.SwcShoName = 'DiagcMgr';
DiagcStsCtrldShtDwnFltPrsnt.EngDT = dt.lgc;
DiagcStsCtrldShtDwnFltPrsnt.EngInit = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMin = 0;
DiagcStsCtrldShtDwnFltPrsnt.EngMax = 1;
DiagcStsCtrldShtDwnFltPrsnt.TestTolerance = 0;
DiagcStsCtrldShtDwnFltPrsnt.WrittenIn = {'DiagcMgrPer1'};
DiagcStsCtrldShtDwnFltPrsnt.WriteType = 'Rte';


DiagcStsNonRcvrlReqDiFltPrsnt = DataDict.OpSignal;
DiagcStsNonRcvrlReqDiFltPrsnt.LongName = 'Diagnostic Status Non Recoverable Request Disable Fault Present';
DiagcStsNonRcvrlReqDiFltPrsnt.Description = [...
  'Non Recoverable Request Disable Fault Present flag'];
DiagcStsNonRcvrlReqDiFltPrsnt.DocUnits = 'Cnt';
DiagcStsNonRcvrlReqDiFltPrsnt.SwcShoName = 'DiagcMgr';
DiagcStsNonRcvrlReqDiFltPrsnt.EngDT = dt.lgc;
DiagcStsNonRcvrlReqDiFltPrsnt.EngInit = 0;
DiagcStsNonRcvrlReqDiFltPrsnt.EngMin = 0;
DiagcStsNonRcvrlReqDiFltPrsnt.EngMax = 1;
DiagcStsNonRcvrlReqDiFltPrsnt.TestTolerance = 0;
DiagcStsNonRcvrlReqDiFltPrsnt.WrittenIn = {'DiagcMgrPer1'};
DiagcStsNonRcvrlReqDiFltPrsnt.WriteType = 'Rte';


SysDiMotTqCmdSca = DataDict.OpSignal;
SysDiMotTqCmdSca.LongName = 'System Disable Motor Torque Command Scale';
SysDiMotTqCmdSca.Description = [...
  'Ramp down value to which the System shall be scaled down to after an N' ...
  'TC has been set'];
SysDiMotTqCmdSca.DocUnits = 'Uls';
SysDiMotTqCmdSca.SwcShoName = 'DiagcMgr';
SysDiMotTqCmdSca.EngDT = dt.float32;
SysDiMotTqCmdSca.EngInit = 1;
SysDiMotTqCmdSca.EngMin = 0;
SysDiMotTqCmdSca.EngMax = 1;
SysDiMotTqCmdSca.TestTolerance = 0.001;
SysDiMotTqCmdSca.WrittenIn = {'DiagcMgrPer1'};
SysDiMotTqCmdSca.WriteType = 'Rte';


SysDiRampRate = DataDict.OpSignal;
SysDiRampRate.LongName = 'System Disable Ramp Rate';
SysDiRampRate.Description = [...
  'Rate at which the system ramps down to Zero'];
SysDiRampRate.DocUnits = 'UlsPerSec';
SysDiRampRate.SwcShoName = 'DiagcMgr';
SysDiRampRate.EngDT = dt.float32;
SysDiRampRate.EngInit = 0.1;
SysDiRampRate.EngMin = 0.1;
SysDiRampRate.EngMax = 500;
SysDiRampRate.TestTolerance = 0.002;
SysDiRampRate.WrittenIn = {'DiagcMgrPer1'};
SysDiRampRate.WriteType = 'Rte';


SysStFltOutpReqDi = DataDict.OpSignal;
SysStFltOutpReqDi.LongName = 'System State Fault Output Request Disable';
SysStFltOutpReqDi.Description = [...
  'Logical output which indicates that a fault has occured that is rampin' ...
  'g the system down to Zero (or Disable)'];
SysStFltOutpReqDi.DocUnits = 'Cnt';
SysStFltOutpReqDi.SwcShoName = 'DiagcMgr';
SysStFltOutpReqDi.EngDT = dt.lgc;
SysStFltOutpReqDi.EngInit = 0;
SysStFltOutpReqDi.EngMin = 0;
SysStFltOutpReqDi.EngMax = 1;
SysStFltOutpReqDi.TestTolerance = 0;
SysStFltOutpReqDi.WrittenIn = {'DiagcMgrPer1'};
SysStFltOutpReqDi.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
DiagcMgrFltResp = DataDict.Calibration;
DiagcMgrFltResp.LongName = 'Fault Response';
DiagcMgrFltResp.Description = [...
  'Default value Hex: 0x8700 (Ntc Enabled and F3 type NTCs). Table of 512' ...
  ' elements that each NTC is mapped to which contains the bits that are ' ...
  'responsible for driving the output response'];
DiagcMgrFltResp.DocUnits = 'Cnt';
DiagcMgrFltResp.EngDT = dt.b16;
DiagcMgrFltResp.EngVal =  ...
   [0            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560            34560];
DiagcMgrFltResp.EngMin = 0;
DiagcMgrFltResp.EngMax = 65535;
DiagcMgrFltResp.Cardinality = 'Cmn';
DiagcMgrFltResp.CustomerVisible = false;
DiagcMgrFltResp.Online = false;
DiagcMgrFltResp.Impact = 'H';
DiagcMgrFltResp.TuningOwner = 'EPDT';
DiagcMgrFltResp.GraphLink = {''};
DiagcMgrFltResp.Monotony = 'None';
DiagcMgrFltResp.MaxGrad = 65535;
DiagcMgrFltResp.PortName = 'DiagcMgrFltResp';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
DiagcMgrApplCrc = DataDict.NVM;
DiagcMgrApplCrc.LongName = 'Diagnostic Manager Application CRC';
DiagcMgrApplCrc.Description = [...
  'Application CRC copy stored for comparision at init for clearing latch' ...
  ' counters. EngInit value of this block is set to 0 because there is no' ...
  ' callback function to restore the NvM block in case of NvM Block corru' ...
  'ption.'];
DiagcMgrApplCrc.DocUnits = 'Cnt';
DiagcMgrApplCrc.EngDT = dt.u32;
DiagcMgrApplCrc.EngInit = 0;
DiagcMgrApplCrc.EngMin = 0;
DiagcMgrApplCrc.EngMax = 4294967295;
DiagcMgrApplCrc.CustomerVisible = false;
DiagcMgrApplCrc.Impact = 'M';
DiagcMgrApplCrc.TuningOwner = 'EPDT';
DiagcMgrApplCrc.InitRowCol = [1  1];


DiagcMgrLtchCntrAry = DataDict.NVM;
DiagcMgrLtchCntrAry.LongName = 'Diagnostic Manager Latch Counter Array';
DiagcMgrLtchCntrAry.Description = [...
  'Array of latch counters for all the latching type NTCs'];
DiagcMgrLtchCntrAry.DocUnits = 'Cnt';
DiagcMgrLtchCntrAry.EngDT = dt.u08;
DiagcMgrLtchCntrAry.EngInit = [];
DiagcMgrLtchCntrAry.EngMin = 0;
DiagcMgrLtchCntrAry.EngMax = 255;
DiagcMgrLtchCntrAry.CustomerVisible = false;
DiagcMgrLtchCntrAry.Impact = 'M';
DiagcMgrLtchCntrAry.TuningOwner = 'EPDT';
DiagcMgrLtchCntrAry.InitRowCol = [1  20];


DiagcMgrNtcFltAry = DataDict.NVM;
DiagcMgrNtcFltAry.LongName = 'Diagnostic Manager NTC Fault Array';
DiagcMgrNtcFltAry.Description = [...
  'Contains information of 20 most recent NTCs that are set in an ignitio' ...
  'n cycle'];
DiagcMgrNtcFltAry.DocUnits = 'Cnt';
DiagcMgrNtcFltAry.EngDT = struct.NtcFltInfoRec2;
DiagcMgrNtcFltAry.EngInit = [struct('NtcNr',[],'AgiCntr',[],'Sts',[])];
DiagcMgrNtcFltAry.EngMin = [struct('NtcNr',0,'AgiCntr',0,'Sts',0)];
DiagcMgrNtcFltAry.EngMax = [struct('NtcNr',511,'AgiCntr',255,'Sts',255)];
DiagcMgrNtcFltAry.CustomerVisible = false;
DiagcMgrNtcFltAry.Impact = 'L';
DiagcMgrNtcFltAry.TuningOwner = 'EPDT';
DiagcMgrNtcFltAry.InitRowCol = [1  20];


SnpshtDataAry = DataDict.NVM;
SnpshtDataAry.LongName = 'Diagnostic Manager Snapshot Data Array';
SnpshtDataAry.Description = [...
  'Contains information of 20 most recent NTCs that are set in an ignitio' ...
  'n cycle - Must be placed in Global Shared Memory'];
SnpshtDataAry.DocUnits = 'Cnt';
SnpshtDataAry.EngDT = struct.SnpshtDataRec2;
SnpshtDataAry.EngInit = [struct('SpclSnpshtData0',[],'SpclSnpshtData1',[],'SpclSnpshtData2',[],'MicroDiagcData',[],'IgnCntr',[],'HwTq',[],'MotTq',[],'BrdgVltg',[],'EcuT',[],'NtcNr',[],'NtcStInfo',[],'SysSt',[])];
SnpshtDataAry.EngMin = [struct('SpclSnpshtData0',0,'SpclSnpshtData1',0,'SpclSnpshtData2',0,'MicroDiagcData',0,'HwTq',-10,'MotTq',-8.8,'IgnCntr',0,'BrdgVltg',0,'EcuT',-50,'NtcNr',0,'NtcStInfo',0,'SysSt',0)];
SnpshtDataAry.EngMax = [struct('SpclSnpshtData0',4294967295,'SpclSnpshtData1',4294967295,'SpclSnpshtData2',4294967295,'MicroDiagcData',4294967295,'HwTq',10,'MotTq',8.8,'IgnCntr',4294967295,'BrdgVltg',40,'EcuT',150,'NtcNr',511,'NtcStInfo',255,'SysSt',4)];
SnpshtDataAry.CustomerVisible = false;
SnpshtDataAry.Impact = 'L';
SnpshtDataAry.TuningOwner = 'EPDT';
SnpshtDataAry.InitRowCol = [1  20];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
ClrDiagcFlg = DataDict.PIM;
ClrDiagcFlg.LongName = 'Clear Diagnostic Flag';
ClrDiagcFlg.Description = [...
  'Flag that is used to toggle everytime Clear All Diagnostics function i' ...
  's called'];
ClrDiagcFlg.DocUnits = 'Cnt';
ClrDiagcFlg.EngDT = dt.u08;
ClrDiagcFlg.EngMin = 0;
ClrDiagcFlg.EngMax = 1;
ClrDiagcFlg.InitRowCol = [1  1];


DtcEnaSts = DataDict.PIM;
DtcEnaSts.LongName = 'DTC Enable Status';
DtcEnaSts.Description = 'DTC Enable Current Status';
DtcEnaSts.DocUnits = 'Cnt';
DtcEnaSts.EngDT = dt.u16;
DtcEnaSts.EngMin = 0;
DtcEnaSts.EngMax = 65535;
DtcEnaSts.InitRowCol = [1  1];


DtcIdxPrevSts = DataDict.PIM;
DtcIdxPrevSts.LongName = 'DTC Index Previous Status';
DtcIdxPrevSts.Description = [...
  'DTC Index Previous Status. Length of this Array is defined by the tota' ...
  'l number of DTCs present in the Porgram.'];
DtcIdxPrevSts.DocUnits = 'Cnt';
DtcIdxPrevSts.EngDT = dt.u08;
DtcIdxPrevSts.EngMin = 0;
DtcIdxPrevSts.EngMax = 131;
DtcIdxPrevSts.InitRowCol = [65535      1];


PrevClrDtcFlg = DataDict.PIM;
PrevClrDtcFlg.LongName = 'Previous Clear DTC Flag';
PrevClrDtcFlg.Description = [...
  'Flag that is used to check for Clearing All DTCs information'];
PrevClrDtcFlg.DocUnits = 'Cnt';
PrevClrDtcFlg.EngDT = dt.u08;
PrevClrDtcFlg.EngMin = 0;
PrevClrDtcFlg.EngMax = 1;
PrevClrDtcFlg.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
DEM_CLEAR_PENDING = DataDict.Constant;
DEM_CLEAR_PENDING.LongName = 'DEM Clear Pending';
DEM_CLEAR_PENDING.Description = [...
  'Return Type from DEM. This constant is defined in the Dem header file.' ...
  ' The intent is use to use the same name as that defined in DEM and not' ...
  ' create another constant with Nexteer Naming Convention'];
DEM_CLEAR_PENDING.DocUnits = 'Cnt';
DEM_CLEAR_PENDING.EngDT = dt.u08;
DEM_CLEAR_PENDING.EngVal = 4;
DEM_CLEAR_PENDING.Define = 'Local';


DEM_DTC_GROUP_ALL_DTCS = DataDict.Constant;
DEM_DTC_GROUP_ALL_DTCS.LongName = 'DEM DTC Group All DTCs';
DEM_DTC_GROUP_ALL_DTCS.Description = [...
  'Input argument to DEM to clear all DTCs'];
DEM_DTC_GROUP_ALL_DTCS.DocUnits = 'Cnt';
DEM_DTC_GROUP_ALL_DTCS.EngDT = dt.u32;
DEM_DTC_GROUP_ALL_DTCS.EngVal = 16777215;
DEM_DTC_GROUP_ALL_DTCS.Define = 'Local';


DFTAGICNTR_CNT_U08 = DataDict.Constant;
DFTAGICNTR_CNT_U08.LongName = 'Default Aging Counter';
DFTAGICNTR_CNT_U08.Description = [...
  'Hex:0xFF. Default value of aging counter at initialization'];
DFTAGICNTR_CNT_U08.DocUnits = 'Cnt';
DFTAGICNTR_CNT_U08.EngDT = dt.u08;
DFTAGICNTR_CNT_U08.EngVal = 255;
DFTAGICNTR_CNT_U08.Define = 'Local';


DFTSPCLSNPSHTDATA_CNT_U32 = DataDict.Constant;
DFTSPCLSNPSHTDATA_CNT_U32.LongName = 'Default Special Snapshot Data';
DFTSPCLSNPSHTDATA_CNT_U32.Description = [...
  'Hex:0x0. Default value of snapshot on SetNtcSts Ca;;'];
DFTSPCLSNPSHTDATA_CNT_U32.DocUnits = 'Cnt';
DFTSPCLSNPSHTDATA_CNT_U32.EngDT = dt.u32;
DFTSPCLSNPSHTDATA_CNT_U32.EngVal = 0;
DFTSPCLSNPSHTDATA_CNT_U32.Define = 'Local';


DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM = DataDict.ConfigParam;
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.LongName = 'Diagnostic Manager List of Latching Type NTC';
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.Description = 'Array of 20 - Contains a list of NTCs that are latch capable';
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.IsBuildPrm = false;
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.DocUnits = 'Cnt';
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.EngDT = enum.NtcNrWithResd1;
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.EngVal = [NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD NtcNrWithResd1.NTCNR_RESD];
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.EngMin = NtcNrWithResd1.NTCNR_RESD;
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.EngMax = NtcNrWithResd1.NTCNR_0X1FF;
DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM.Define = 'Local';


DIAGCMGRNTCLTCHCNTRTHD_CNT_U08 = DataDict.ConfigParam;
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.LongName = 'Diagnostic Manager Latch Counter Threshold';
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.Description = [...
  'Array of 20 - Contains a list of threshold for NTCs that are latch cap' ...
  'able'];
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.IsBuildPrm = false;
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.DocUnits = 'Cnt';
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.EngDT = dt.u08;
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.EngVal =  ...
   [255              255              255              255              255              255              255              255              255              255              255              255              255              255              255              255              255              255              255              255];
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.EngMin = 0;
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.EngMax = 255;
DIAGCMGRNTCLTCHCNTRTHD_CNT_U08.Define = 'Local';


DIAGCMGR_NTCINFOCFMDNTC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.LongName = 'NTC Info Status Confirmed NTC';
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.Description = [...
  'Hex: 0x08. Bit Mask to access the "ConfirmedBit" bit in NTC Status Byt' ...
  'e'];
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.EngVal = 8;
DIAGCMGR_NTCINFOCFMDNTC_CNT_U08.Define = 'Global';


DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Fault Set This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.Description = [...
  'Hex: 0x02. Bit Mask to access the "TestFailedThisIgnitionCycle" bit in' ...
  ' NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.EngVal = 2;
DIAGCMGR_NTCINFOSTSTESTFAILDTHISIGNCYC_CNT_U08.Define = 'Global';


DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.LongName = 'NTC Info Status Fault Set';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.Description = [...
  'Hex: 0x01. Bit Mask to access the "TestFailed" bit in NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.EngVal = 1;
DIAGCMGR_NTCINFOSTSTESTFAILD_CNT_U08.Define = 'Global';


DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08 = DataDict.Constant;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.LongName = 'NTC Info Status Test Not Complete This Ignition Cycle';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.Description = [...
  'Hex: 0x40. Bit Mask to access the "TestNotCompleteThisIgnitionCycle" b' ...
  'it in NTC Status Byte'];
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngDT = dt.u08;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.EngVal = 64;
DIAGCMGR_NTCINFOSTSTESTNOTCMPLTHISIGNCYC_CNT_U08.Define = 'Global';


DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08 = DataDict.Constant;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.LongName = 'Diagnostc Status Controlled Shutdown Fault Present';
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.Description = [...
  'Hex:0x01. Bit Mask to access the "Controlled Shutdown Fault Present" b' ...
  'it in Diagnostic Status Word'];
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.DocUnits = 'Cnt';
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.EngDT = dt.b08;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.EngVal = 1;
DIAGCSTSCTRLDSHTDWNFLTPRSNT_CNT_U08.Define = 'Local';


DIAGCSTSININVAL_CNT_U08 = DataDict.Constant;
DIAGCSTSININVAL_CNT_U08.LongName = 'Diagnostic Status Initialization Value';
DIAGCSTSININVAL_CNT_U08.Description = [...
  'Hex: 0x00 Value with Diagnostic Status is initialized'];
DIAGCSTSININVAL_CNT_U08.DocUnits = 'Cnt';
DIAGCSTSININVAL_CNT_U08.EngDT = dt.b08;
DIAGCSTSININVAL_CNT_U08.EngVal = 0;
DIAGCSTSININVAL_CNT_U08.Define = 'Local';


DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08 = DataDict.Constant;
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.LongName = 'Diagnostic Status Ramp to Zero Fault Present';
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.Description = [...
  'Hex:0x04. Bit Mask to access the "Ramp to Zero Fault Present" bit in D' ...
  'iagnostic Status Word'];
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.DocUnits = 'Cnt';
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.EngDT = dt.b08;
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.EngVal = 4;
DIAGCSTSNONRCVRLREQDIFLTPRSNT_CNT_U08.Define = 'Local';


DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08 = DataDict.Constant;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.LongName = 'Diagnostic Status Ramp to Zero Fault Present';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.Description = [...
  'Hex:0x02. Bit Mask to access the "Ramp to Zero Fault Present" bit in D' ...
  'iagnostic Status Word'];
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.DocUnits = 'Cnt';
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.EngDT = dt.b08;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.EngVal = 2;
DIAGCSTSRAMPTOZEROFLTPRSNT_CNT_U08.Define = 'Local';


DTCIDXSTSFAIL_CNT_U08 = DataDict.Constant;
DTCIDXSTSFAIL_CNT_U08.LongName = 'DTC Index Status Fail';
DTCIDXSTSFAIL_CNT_U08.Description = 'DTC Index Status Fail';
DTCIDXSTSFAIL_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSFAIL_CNT_U08.EngDT = dt.u08;
DTCIDXSTSFAIL_CNT_U08.EngVal = 2;
DTCIDXSTSFAIL_CNT_U08.Define = 'Local';


DTCIDXSTSNONTC_CNT_U08 = DataDict.Constant;
DTCIDXSTSNONTC_CNT_U08.LongName = 'DTC Index Status No NTC';
DTCIDXSTSNONTC_CNT_U08.Description = 'DTC Index Status No NTC';
DTCIDXSTSNONTC_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSNONTC_CNT_U08.EngDT = dt.u08;
DTCIDXSTSNONTC_CNT_U08.EngVal = 3;
DTCIDXSTSNONTC_CNT_U08.Define = 'Local';


DTCIDXSTSNORES_CNT_U08 = DataDict.Constant;
DTCIDXSTSNORES_CNT_U08.LongName = 'DTC Index Status No Result';
DTCIDXSTSNORES_CNT_U08.Description = 'DTC Index Status No Result';
DTCIDXSTSNORES_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSNORES_CNT_U08.EngDT = dt.u08;
DTCIDXSTSNORES_CNT_U08.EngVal = 0;
DTCIDXSTSNORES_CNT_U08.Define = 'Local';


DTCIDXSTSPASS_CNT_U08 = DataDict.Constant;
DTCIDXSTSPASS_CNT_U08.LongName = 'DTC Index Status Pass';
DTCIDXSTSPASS_CNT_U08.Description = 'DTC Index Status Pass';
DTCIDXSTSPASS_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSPASS_CNT_U08.EngDT = dt.u08;
DTCIDXSTSPASS_CNT_U08.EngVal = 1;
DTCIDXSTSPASS_CNT_U08.Define = 'Local';


DTCIDXSTSUPDCFMD_CNT_U08 = DataDict.Constant;
DTCIDXSTSUPDCFMD_CNT_U08.LongName = 'DTC Index Status Update Confirmed';
DTCIDXSTSUPDCFMD_CNT_U08.Description = 'DTC Index Status Update Confirmed';
DTCIDXSTSUPDCFMD_CNT_U08.DocUnits = 'Cnt';
DTCIDXSTSUPDCFMD_CNT_U08.EngDT = dt.u08;
DTCIDXSTSUPDCFMD_CNT_U08.EngVal = 128;
DTCIDXSTSUPDCFMD_CNT_U08.Define = 'Local';


E_NOT_OK = DataDict.Constant;
E_NOT_OK.LongName = 'E Not Ok';
E_NOT_OK.Description = [...
  'AUTOSAR Standard Return Type NOT OK value'];
E_NOT_OK.DocUnits = 'Cnt';
E_NOT_OK.EngDT = dt.u08;
E_NOT_OK.EngVal = 1;
E_NOT_OK.Define = 'Global';


E_OK = DataDict.Constant;
E_OK.LongName = 'E Ok';
E_OK.Description = [...
  'AUTOSAR Standard Return Type OK value'];
E_OK.DocUnits = 'Cnt';
E_OK.EngDT = dt.u08;
E_OK.EngVal = 0;
E_OK.Define = 'Global';


FLTRESPDTCIDX_CNT_U16 = DataDict.Constant;
FLTRESPDTCIDX_CNT_U16.LongName = 'Fault Response DTC Index';
FLTRESPDTCIDX_CNT_U16.Description = [...
  'Hex: 0x000F. Bit Mask to access the "DTC Index" bits in the Fault Resp' ...
  'onse'];
FLTRESPDTCIDX_CNT_U16.DocUnits = 'Cnt';
FLTRESPDTCIDX_CNT_U16.EngDT = dt.b16;
FLTRESPDTCIDX_CNT_U16.EngVal = 255;
FLTRESPDTCIDX_CNT_U16.Define = 'Local';


FLTRESPNTCENAD_CNT_U16 = DataDict.Constant;
FLTRESPNTCENAD_CNT_U16.LongName = 'Fault Response NTC Enabled';
FLTRESPNTCENAD_CNT_U16.Description = [...
  'Hex: 0x8000. Bit Mask to access the "NTC Enabled" bit in Fault Respons' ...
  'e Table'];
FLTRESPNTCENAD_CNT_U16.DocUnits = 'Cnt';
FLTRESPNTCENAD_CNT_U16.EngDT = dt.b16;
FLTRESPNTCENAD_CNT_U16.EngVal = 32768;
FLTRESPNTCENAD_CNT_U16.Define = 'Local';


FLTRESPRAMPBITS_CNT_U16 = DataDict.Constant;
FLTRESPRAMPBITS_CNT_U16.LongName = 'Fault Response Ramp Bits';
FLTRESPRAMPBITS_CNT_U16.Description = [...
  'Hex: 0x0700. Bit Mask to access the "Ramp Bits" bit in Fault Response ' ...
  'Table'];
FLTRESPRAMPBITS_CNT_U16.DocUnits = 'Cnt';
FLTRESPRAMPBITS_CNT_U16.EngDT = dt.b16;
FLTRESPRAMPBITS_CNT_U16.EngVal = 1792;
FLTRESPRAMPBITS_CNT_U16.Define = 'Local';


FLTRESPRAMPTBL_ULS_F32 = DataDict.Constant;
FLTRESPRAMPTBL_ULS_F32.LongName = 'Fault Response Ramp Table';
FLTRESPRAMPTBL_ULS_F32.Description = 'Table that provides the ramp rates for time based NTCs';
FLTRESPRAMPTBL_ULS_F32.DocUnits = 'Uls';
FLTRESPRAMPTBL_ULS_F32.EngDT = dt.float32;
FLTRESPRAMPTBL_ULS_F32.EngVal =  ...
   [0.1            0.125              0.2                1               10];
FLTRESPRAMPTBL_ULS_F32.Define = 'Local';


FLTRESPRCVRLFLT_CNT_U16 = DataDict.Constant;
FLTRESPRCVRLFLT_CNT_U16.LongName = 'Fault Response Recoverable Bit';
FLTRESPRCVRLFLT_CNT_U16.Description = [...
  'Hex: 0x4000. Bit Mask to access the "Recoverable Bit" in Fault Respons' ...
  'e Table'];
FLTRESPRCVRLFLT_CNT_U16.DocUnits = 'Cnt';
FLTRESPRCVRLFLT_CNT_U16.EngDT = dt.b16;
FLTRESPRCVRLFLT_CNT_U16.EngVal = 16384;
FLTRESPRCVRLFLT_CNT_U16.Define = 'Local';


LTCHCNTRMAXVAL_CNT_U08 = DataDict.Constant;
LTCHCNTRMAXVAL_CNT_U08.LongName = 'Latch Counter Maximum Value';
LTCHCNTRMAXVAL_CNT_U08.Description = [...
  'The maximum value of the latch counter'];
LTCHCNTRMAXVAL_CNT_U08.DocUnits = 'Cnt';
LTCHCNTRMAXVAL_CNT_U08.EngDT = dt.u08;
LTCHCNTRMAXVAL_CNT_U08.EngVal = 255;
LTCHCNTRMAXVAL_CNT_U08.Define = 'Local';


MAXDEBCNTRVAL_CNT_S16 = DataDict.Constant;
MAXDEBCNTRVAL_CNT_S16.LongName = 'Maximum Debounce Counter Value';
MAXDEBCNTRVAL_CNT_S16.Description = [...
  'The maximum value of the debounce counter'];
MAXDEBCNTRVAL_CNT_S16.DocUnits = 'Cnt';
MAXDEBCNTRVAL_CNT_S16.EngDT = dt.s16;
MAXDEBCNTRVAL_CNT_S16.EngVal = 32767;
MAXDEBCNTRVAL_CNT_S16.Define = 'Local';


MAXRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MAXRAMPRATE_ULSPERSEC_F32.LongName = 'Maximum Ramp Rate';
MAXRAMPRATE_ULSPERSEC_F32.Description = [...
  'Maximum Ramp Rate at which the system goes to shutdown'];
MAXRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MAXRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MAXRAMPRATE_ULSPERSEC_F32.EngVal = 500;
MAXRAMPRATE_ULSPERSEC_F32.Define = 'Local';


MINDEBCNTRVAL_CNT_S16 = DataDict.Constant;
MINDEBCNTRVAL_CNT_S16.LongName = 'Minimum Debounce Counter Value';
MINDEBCNTRVAL_CNT_S16.Description = [...
  'The minimum value of the debounce counter'];
MINDEBCNTRVAL_CNT_S16.DocUnits = 'Cnt';
MINDEBCNTRVAL_CNT_S16.EngDT = dt.s16;
MINDEBCNTRVAL_CNT_S16.EngVal = -32768;
MINDEBCNTRVAL_CNT_S16.Define = 'Local';


MINRAMPRATE_ULSPERSEC_F32 = DataDict.Constant;
MINRAMPRATE_ULSPERSEC_F32.LongName = 'Minimum Ramp Rate Value';
MINRAMPRATE_ULSPERSEC_F32.Description = 'The minimum value of the RampRate';
MINRAMPRATE_ULSPERSEC_F32.DocUnits = 'UlsPerSec';
MINRAMPRATE_ULSPERSEC_F32.EngDT = dt.float32;
MINRAMPRATE_ULSPERSEC_F32.EngVal = 0.1;
MINRAMPRATE_ULSPERSEC_F32.Define = 'Local';


NTCPPTYMFGINHBINENAST_CNT_U08 = DataDict.Constant;
NTCPPTYMFGINHBINENAST_CNT_U08.LongName = 'NTC Property Manufacturing Inhibit In Enable State';
NTCPPTYMFGINHBINENAST_CNT_U08.Description = 'Inhibit NTC in Enable State';
NTCPPTYMFGINHBINENAST_CNT_U08.DocUnits = 'Cnt';
NTCPPTYMFGINHBINENAST_CNT_U08.EngDT = dt.u08;
NTCPPTYMFGINHBINENAST_CNT_U08.EngVal = 4;
NTCPPTYMFGINHBINENAST_CNT_U08.Define = 'Local';


NTCPPTYMFGINHBNOTINENAST_CNT_U08 = DataDict.Constant;
NTCPPTYMFGINHBNOTINENAST_CNT_U08.LongName = 'NTC Property Manufacturing Inhibit Not In Enable State';
NTCPPTYMFGINHBNOTINENAST_CNT_U08.Description = [...
  'Inhibit NTC in any other state other than Enable State'];
NTCPPTYMFGINHBNOTINENAST_CNT_U08.DocUnits = 'Cnt';
NTCPPTYMFGINHBNOTINENAST_CNT_U08.EngDT = dt.u08;
NTCPPTYMFGINHBNOTINENAST_CNT_U08.EngVal = 2;
NTCPPTYMFGINHBNOTINENAST_CNT_U08.Define = 'Local';


NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08 = DataDict.Constant;
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.LongName = 'NTC Property Status Locked This Ignition cycle';
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.Description = [...
  'Status Locked This Ignition cycle - Status cant be changed on clear NT' ...
  'C service'];
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.DocUnits = 'Cnt';
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.EngDT = dt.u08;
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.EngVal = 1;
NTCPPTYSTSLOCKDTHISIGNCYC_CNT_U08.Define = 'Local';


SCAMOTTQCMDTOONE_ULS_F32 = DataDict.Constant;
SCAMOTTQCMDTOONE_ULS_F32.LongName = 'Scale Motor Torque Command to One';
SCAMOTTQCMDTOONE_ULS_F32.Description = [...
  'Initialize Scale Motor Torque Command to One during intialization or d' ...
  'uring updating Scale value every 10ms'];
SCAMOTTQCMDTOONE_ULS_F32.DocUnits = 'Uls';
SCAMOTTQCMDTOONE_ULS_F32.EngDT = dt.float32;
SCAMOTTQCMDTOONE_ULS_F32.EngVal = 1;
SCAMOTTQCMDTOONE_ULS_F32.Define = 'Local';


SCAMOTTQCMDTOZERO_ULS_F32 = DataDict.Constant;
SCAMOTTQCMDTOZERO_ULS_F32.LongName = 'Scale Motor Torque Command to Zero';
SCAMOTTQCMDTOZERO_ULS_F32.Description = [...
  'Scale Motor Torque Command to Zero when a fault that ramps the system ' ...
  'down to 0 is set'];
SCAMOTTQCMDTOZERO_ULS_F32.DocUnits = 'Uls';
SCAMOTTQCMDTOZERO_ULS_F32.EngDT = dt.float32;
SCAMOTTQCMDTOZERO_ULS_F32.EngVal = 0;
SCAMOTTQCMDTOZERO_ULS_F32.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
LtchActv = DataDict.NTC;
LtchActv.NtcNr = NtcNr1.NTCNR_0X0A0;
LtchActv.NtcTyp = 'None';
LtchActv.LongName = 'Latch Active';
LtchActv.Description = 'Latch NTC to show that one or more of the Latch capable NTCs have their latch counters exceed their threshold';
LtchActv.NtcStInfo = DataDict.NtcStInfoBitPacked;
LtchActv.NtcStInfo.Bit0Descr = 'Index of first NTC that latched in the list of Latching Type NTCs';
LtchActv.NtcStInfo.Bit1Descr = 'Index of first NTC that latched in the list of Latching Type NTCs';
LtchActv.NtcStInfo.Bit2Descr = 'Index of first NTC that latched in the list of Latching Type NTCs';
LtchActv.NtcStInfo.Bit3Descr = 'Index of first NTC that latched in the list of Latching Type NTCs';
LtchActv.NtcStInfo.Bit4Descr = 'Index of first NTC that latched in the list of Latching Type NTCs';
LtchActv.NtcStInfo.Bit5Descr = 'Unused';
LtchActv.NtcStInfo.Bit6Descr = 'Unused';
LtchActv.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
