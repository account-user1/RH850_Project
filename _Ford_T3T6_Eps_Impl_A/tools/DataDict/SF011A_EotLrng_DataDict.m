%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 08-Feb-2017 10:32:27       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF011A = DataDict.FDD;
SF011A.Version = '3.2.X';
SF011A.LongName = 'End of Travel Learning';
SF011A.ShoName  = 'EotLrng';
SF011A.DesignASIL = 'A';
SF011A.Description = [...
  'This FDD is focused on using vehicle operational information to learn ' ...
  'the appropriate end of travel positions for a given system.  Since the' ...
  ' position end stop information is important for such functions as end ' ...
  'of travel protection to mechanically protect the gear and since the da' ...
  'ta can vary from one system to the next, it is important to learn thes' ...
  'e positions.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EotLrngInit1 = DataDict.Runnable;
EotLrngInit1.Context = 'Rte';
EotLrngInit1.TimeStep = 0;
EotLrngInit1.Description = 'Init Runnable';

EotLrngPer1 = DataDict.Runnable;
EotLrngPer1.Context = 'Rte';
EotLrngPer1.TimeStep = 0.01;
EotLrngPer1.Description = 'Periodic Runnable';

GetHwAgOverTrvlCnt = DataDict.SrvRunnable;
GetHwAgOverTrvlCnt.Context = 'Rte';
GetHwAgOverTrvlCnt.Description = [...
  'Server runnable to obtain the actual value of Over Travel counter'];
GetHwAgOverTrvlCnt.Return = DataDict.CSReturn;
GetHwAgOverTrvlCnt.Return.Type = 'None';
GetHwAgOverTrvlCnt.Return.Min = [];
GetHwAgOverTrvlCnt.Return.Max = [];
GetHwAgOverTrvlCnt.Return.TestTolerance = [];
GetHwAgOverTrvlCnt.Arguments(1) = DataDict.CSArguments;
GetHwAgOverTrvlCnt.Arguments(1).Name = 'HwAgOverTrvlCnt';
GetHwAgOverTrvlCnt.Arguments(1).EngDT = dt.u08;
GetHwAgOverTrvlCnt.Arguments(1).EngMin = 0;
GetHwAgOverTrvlCnt.Arguments(1).EngMax = 255;
GetHwAgOverTrvlCnt.Arguments(1).TestTolerance = 0;
GetHwAgOverTrvlCnt.Arguments(1).Units = 'Cnt';
GetHwAgOverTrvlCnt.Arguments(1).Direction = 'Out';
GetHwAgOverTrvlCnt.Arguments(1).InitRowCol = [1  1];
GetHwAgOverTrvlCnt.Arguments(1).Description = [...
  'Number of Over Travel events occured.'];

RstHwAgOverTrvlCnt = DataDict.SrvRunnable;
RstHwAgOverTrvlCnt.Context = 'Rte';
RstHwAgOverTrvlCnt.Description = [...
  'Server runnable to reset the value of Over Travel counter'];
RstHwAgOverTrvlCnt.Return = DataDict.CSReturn;
RstHwAgOverTrvlCnt.Return.Type = 'None';
RstHwAgOverTrvlCnt.Return.Min = [];
RstHwAgOverTrvlCnt.Return.Max = [];
RstHwAgOverTrvlCnt.Return.TestTolerance = [];

RstMaxHwAgCwAndCcw = DataDict.SrvRunnable;
RstMaxHwAgCwAndCcw.Context = 'Rte';
RstMaxHwAgCwAndCcw.Description = [...
  'Server runnable to reset recorded Maximum Handwheel Angle Cw and Ccw'];
RstMaxHwAgCwAndCcw.Return = DataDict.CSReturn;
RstMaxHwAgCwAndCcw.Return.Type = 'None';
RstMaxHwAgCwAndCcw.Return.Min = [];
RstMaxHwAgCwAndCcw.Return.Max = [];
RstMaxHwAgCwAndCcw.Return.TestTolerance = [];

RtnMaxHwAgCwAndCcw = DataDict.SrvRunnable;
RtnMaxHwAgCwAndCcw.Context = 'Rte';
RtnMaxHwAgCwAndCcw.Description = [...
  'Server runnable to return recorded Maximum Handwheel Angle Cw and Ccw'];
RtnMaxHwAgCwAndCcw.Return = DataDict.CSReturn;
RtnMaxHwAgCwAndCcw.Return.Type = 'None';
RtnMaxHwAgCwAndCcw.Return.Min = [];
RtnMaxHwAgCwAndCcw.Return.Max = [];
RtnMaxHwAgCwAndCcw.Return.TestTolerance = [];
RtnMaxHwAgCwAndCcw.Arguments(1) = DataDict.CSArguments;
RtnMaxHwAgCwAndCcw.Arguments(1).Name = 'HwAgCcwMax';
RtnMaxHwAgCwAndCcw.Arguments(1).EngDT = dt.float32;
RtnMaxHwAgCwAndCcw.Arguments(1).EngMin = -1800;
RtnMaxHwAgCwAndCcw.Arguments(1).EngMax = 0;
RtnMaxHwAgCwAndCcw.Arguments(1).TestTolerance = 0.0625;
RtnMaxHwAgCwAndCcw.Arguments(1).Units = 'HwDeg';
RtnMaxHwAgCwAndCcw.Arguments(1).Direction = 'Out';
RtnMaxHwAgCwAndCcw.Arguments(1).InitRowCol = [1  1];
RtnMaxHwAgCwAndCcw.Arguments(1).Description = '';
RtnMaxHwAgCwAndCcw.Arguments(2) = DataDict.CSArguments;
RtnMaxHwAgCwAndCcw.Arguments(2).Name = 'HwAgCwMax';
RtnMaxHwAgCwAndCcw.Arguments(2).EngDT = dt.float32;
RtnMaxHwAgCwAndCcw.Arguments(2).EngMin = 0;
RtnMaxHwAgCwAndCcw.Arguments(2).EngMax = 1800;
RtnMaxHwAgCwAndCcw.Arguments(2).TestTolerance = 0.0625;
RtnMaxHwAgCwAndCcw.Arguments(2).Units = 'HwDeg';
RtnMaxHwAgCwAndCcw.Arguments(2).Direction = 'Out';
RtnMaxHwAgCwAndCcw.Arguments(2).InitRowCol = [1  1];
RtnMaxHwAgCwAndCcw.Arguments(2).Description = [...
  'Server runnable to determine Max Handwheel Angle Cw and Ccw seen by th' ...
  'e gear over life of gear'];

SerlComRstEot = DataDict.SrvRunnable;
SerlComRstEot.Context = 'Rte';
SerlComRstEot.Description = [...
  'Server runnable to reset Serial Comm Eot limit'];
SerlComRstEot.Return = DataDict.CSReturn;
SerlComRstEot.Return.Type = 'None';
SerlComRstEot.Return.Min = [];
SerlComRstEot.Return.Max = [];
SerlComRstEot.Return.TestTolerance = [];

SetHwAgOverTrvlCnt = DataDict.SrvRunnable;
SetHwAgOverTrvlCnt.Context = 'Rte';
SetHwAgOverTrvlCnt.Description = [...
  'Server runnable to set the actual value of Over Travel counter'];
SetHwAgOverTrvlCnt.Return = DataDict.CSReturn;
SetHwAgOverTrvlCnt.Return.Type = 'None';
SetHwAgOverTrvlCnt.Return.Min = [];
SetHwAgOverTrvlCnt.Return.Max = [];
SetHwAgOverTrvlCnt.Return.TestTolerance = [];
SetHwAgOverTrvlCnt.Arguments(1) = DataDict.CSArguments;
SetHwAgOverTrvlCnt.Arguments(1).Name = 'HwAgOverTrvlCnt';
SetHwAgOverTrvlCnt.Arguments(1).EngDT = dt.u08;
SetHwAgOverTrvlCnt.Arguments(1).EngMin = 0;
SetHwAgOverTrvlCnt.Arguments(1).EngMax = 255;
SetHwAgOverTrvlCnt.Arguments(1).Units = 'Cnt';
SetHwAgOverTrvlCnt.Arguments(1).Direction = 'In';
SetHwAgOverTrvlCnt.Arguments(1).InitRowCol = [1  1];
SetHwAgOverTrvlCnt.Arguments(1).Description = [...
  'Number of Over Travel events occured.'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
EotNvmData_GetErrorStatus = DataDict.Client;
EotNvmData_GetErrorStatus.CallLocation = {'EotLrngInit1'};
EotNvmData_GetErrorStatus.Description = [...
  'Client defintion to determine the validity of NVM'];
EotNvmData_GetErrorStatus.Return = DataDict.CSReturn;
EotNvmData_GetErrorStatus.Return.Type = 'Standard';
EotNvmData_GetErrorStatus.Return.Min = 0;
EotNvmData_GetErrorStatus.Return.Max = 1;
EotNvmData_GetErrorStatus.Return.TestTolerance = 0;
EotNvmData_GetErrorStatus.Return.Description = 'Standard Return';
EotNvmData_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
EotNvmData_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
EotNvmData_GetErrorStatus.Arguments(1).EngDT = dt.u08;
EotNvmData_GetErrorStatus.Arguments(1).EngMin = 0;
EotNvmData_GetErrorStatus.Arguments(1).EngMax = 8;
EotNvmData_GetErrorStatus.Arguments(1).TestTolerance = 999;
EotNvmData_GetErrorStatus.Arguments(1).Units = 'Cnt';
EotNvmData_GetErrorStatus.Arguments(1).Direction = 'Out';
EotNvmData_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
EotNvmData_GetErrorStatus.Arguments(1).Description = 'Enum to indicate the NVM status';


EotNvmData_SetRamBlockStatus = DataDict.Client;
EotNvmData_SetRamBlockStatus.CallLocation = {'EotLrngInit1','EotLrngPer1'};
EotNvmData_SetRamBlockStatus.Description = [...
  'Client definition to update the NVM during ignition off'];
EotNvmData_SetRamBlockStatus.Return = DataDict.CSReturn;
EotNvmData_SetRamBlockStatus.Return.Type = 'Standard';
EotNvmData_SetRamBlockStatus.Return.Min = 0;
EotNvmData_SetRamBlockStatus.Return.Max = 1;
EotNvmData_SetRamBlockStatus.Return.TestTolerance = 0;
EotNvmData_SetRamBlockStatus.Return.Description = 'Standard Return';
EotNvmData_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
EotNvmData_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
EotNvmData_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
EotNvmData_SetRamBlockStatus.Arguments(1).EngMin = 0;
EotNvmData_SetRamBlockStatus.Arguments(1).EngMax = 1;
EotNvmData_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
EotNvmData_SetRamBlockStatus.Arguments(1).Direction = 'In';
EotNvmData_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
EotNvmData_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean to indicate NVM Block changed'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'EotLrngPer1'};
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
GetNtcQlfrSts.Arguments(2).TestTolerance = 999;
GetNtcQlfrSts.Arguments(2).Units = 'Cnt';
GetNtcQlfrSts.Arguments(2).Direction = 'Out';
GetNtcQlfrSts.Arguments(2).InitRowCol = [1  1];
GetNtcQlfrSts.Arguments(2).Description = 'Enum to indicate the state of NTC';


GetRefTmr100MicroSec32bit = DataDict.Client;
GetRefTmr100MicroSec32bit.CallLocation = {'EotLrngInit1','EotLrngPer1'};
GetRefTmr100MicroSec32bit.Description = [...
  'Client definition to return the reference time in counts'];
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
GetRefTmr100MicroSec32bit.Arguments(1).TestTolerance = 999;
GetRefTmr100MicroSec32bit.Arguments(1).Units = 'Cnt';
GetRefTmr100MicroSec32bit.Arguments(1).Direction = 'Out';
GetRefTmr100MicroSec32bit.Arguments(1).InitRowCol = [1  1];
GetRefTmr100MicroSec32bit.Arguments(1).Description = 'Return reference time in counts';


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'EotLrngPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Client definition to determine elapse time'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = '';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Return elapsed time in counts';


MaxHwAgCwAndCcw_GetErrorStatus = DataDict.Client;
MaxHwAgCwAndCcw_GetErrorStatus.CallLocation = {'EotLrngInit1'};
MaxHwAgCwAndCcw_GetErrorStatus.Description = [...
  'Client defintion to determine the validity of NVM'];
MaxHwAgCwAndCcw_GetErrorStatus.Return = DataDict.CSReturn;
MaxHwAgCwAndCcw_GetErrorStatus.Return.Type = 'Standard';
MaxHwAgCwAndCcw_GetErrorStatus.Return.Min = 0;
MaxHwAgCwAndCcw_GetErrorStatus.Return.Max = 1;
MaxHwAgCwAndCcw_GetErrorStatus.Return.TestTolerance = 0;
MaxHwAgCwAndCcw_GetErrorStatus.Return.Description = 'Standard Return';
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).Name = 'ReqResPtr';
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).EngMin = 0;
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).EngMax = 8;
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).TestTolerance = 999;
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).Units = 'Cnt';
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).Direction = 'Out';
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MaxHwAgCwAndCcw_GetErrorStatus.Arguments(1).Description = 'Enum to indicate the NVM status';


MaxHwAgCwAndCcw_SetRamBlockStatus = DataDict.Client;
MaxHwAgCwAndCcw_SetRamBlockStatus.CallLocation = {'EotLrngInit1','EotLrngPer1','RstMaxHwAgCwAndCcw'};
MaxHwAgCwAndCcw_SetRamBlockStatus.Description = [...
  'Client definition to update the NVM during ignition off'];
MaxHwAgCwAndCcw_SetRamBlockStatus.Return = DataDict.CSReturn;
MaxHwAgCwAndCcw_SetRamBlockStatus.Return.Type = 'Standard';
MaxHwAgCwAndCcw_SetRamBlockStatus.Return.Min = 0;
MaxHwAgCwAndCcw_SetRamBlockStatus.Return.Max = 1;
MaxHwAgCwAndCcw_SetRamBlockStatus.Return.TestTolerance = 0;
MaxHwAgCwAndCcw_SetRamBlockStatus.Return.Description = 'Standard Return';
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).EngMin = 0;
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).EngMax = 1;
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).Direction = 'In';
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MaxHwAgCwAndCcw_SetRamBlockStatus.Arguments(1).Description = [...
  'Boolean to indicate NVM Block changed'];


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'EotLrngPer1'};
SetNtcSts.Description = [...
  'Client definition to set NTC status'];
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'Standard Return';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = 1;
SetNtcSts.Arguments(1).EngMax = 511;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'Enum to define NTC number';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = [...
  'Info regarding the bits to be set in the NTC'];
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = 0;
SetNtcSts.Arguments(3).EngMax = 3;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = [...
  'Enum indicating the status the NTC to be set to'];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65500;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = [...
  'Debounce step indicating the delay time before settingNTC to either PA' ...
  'SSED or FAILED'];



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = [...
  'Handwheel Angle for use by the application'];
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'EotLrngPer1'};
HwAg.ReadType = 'Rte';


HwAgAuthy = DataDict.IpSignal;
HwAgAuthy.LongName = 'Handwheel Authority';
HwAgAuthy.Description = [...
  'Determines the Handwheel Angle Confidence'];
HwAgAuthy.DocUnits = 'Uls';
HwAgAuthy.EngDT = dt.float32;
HwAgAuthy.EngInit = 0;
HwAgAuthy.EngMin = 0;
HwAgAuthy.EngMax = 1;
HwAgAuthy.ReadIn = {'EotLrngPer1'};
HwAgAuthy.ReadType = 'Rte';


HwAgDiDiagSts = DataDict.IpSignal;
HwAgDiDiagSts.LongName = 'Diagnostic Status Handwheel Position Disable';
HwAgDiDiagSts.Description = [...
  'Boolean to indicate the status of Handwheel position disable'];
HwAgDiDiagSts.DocUnits = 'Cnt';
HwAgDiDiagSts.EngDT = dt.lgc;
HwAgDiDiagSts.EngInit = 0;
HwAgDiDiagSts.EngMin = 0;
HwAgDiDiagSts.EngMax = 1;
HwAgDiDiagSts.ReadIn = {'EotLrngPer1'};
HwAgDiDiagSts.ReadType = 'Rte';


HwAgEotSig0Avl = DataDict.IpSignal;
HwAgEotSig0Avl.LongName = 'Handwheel Angle End of Travel Signal 0 Available';
HwAgEotSig0Avl.Description = [...
  'Boolean to indicate Handwheel Angle Eot Signal 0 availability'];
HwAgEotSig0Avl.DocUnits = 'Cnt';
HwAgEotSig0Avl.EngDT = dt.lgc;
HwAgEotSig0Avl.EngInit = 0;
HwAgEotSig0Avl.EngMin = 0;
HwAgEotSig0Avl.EngMax = 1;
HwAgEotSig0Avl.ReadIn = {'EotLrngPer1'};
HwAgEotSig0Avl.ReadType = 'Rte';


HwAgEotSig0Ccw = DataDict.IpSignal;
HwAgEotSig0Ccw.LongName = 'Handwheel Angle End of Travel Signal 0 Counter Clockwise';
HwAgEotSig0Ccw.Description = 'Eot Signal 0 Ccw received';
HwAgEotSig0Ccw.DocUnits = 'HwDeg';
HwAgEotSig0Ccw.EngDT = dt.float32;
HwAgEotSig0Ccw.EngInit = 0;
HwAgEotSig0Ccw.EngMin = -900;
HwAgEotSig0Ccw.EngMax = 0;
HwAgEotSig0Ccw.ReadIn = {'EotLrngPer1'};
HwAgEotSig0Ccw.ReadType = 'Rte';


HwAgEotSig0Cw = DataDict.IpSignal;
HwAgEotSig0Cw.LongName = 'Handwheel Angle End of Travel Signal 0 Clockwise';
HwAgEotSig0Cw.Description = 'Eot Signal 0 Cw received';
HwAgEotSig0Cw.DocUnits = 'HwDeg';
HwAgEotSig0Cw.EngDT = dt.float32;
HwAgEotSig0Cw.EngInit = 0;
HwAgEotSig0Cw.EngMin = 0;
HwAgEotSig0Cw.EngMax = 900;
HwAgEotSig0Cw.ReadIn = {'EotLrngPer1'};
HwAgEotSig0Cw.ReadType = 'Rte';


HwAgEotSig1Avl = DataDict.IpSignal;
HwAgEotSig1Avl.LongName = 'Handwheel Angle End of Travel Signal 1 Available';
HwAgEotSig1Avl.Description = [...
  'Boolean to indicate Handwheel Angle Eot Signal 1 availability'];
HwAgEotSig1Avl.DocUnits = 'Cnt';
HwAgEotSig1Avl.EngDT = dt.lgc;
HwAgEotSig1Avl.EngInit = 0;
HwAgEotSig1Avl.EngMin = 0;
HwAgEotSig1Avl.EngMax = 1;
HwAgEotSig1Avl.ReadIn = {'EotLrngPer1'};
HwAgEotSig1Avl.ReadType = 'Rte';


HwAgEotSig1Ccw = DataDict.IpSignal;
HwAgEotSig1Ccw.LongName = 'Handwheel Angle End of Travel Signal 1 Counter Clockwise';
HwAgEotSig1Ccw.Description = 'Eot Signal 1 Ccw received';
HwAgEotSig1Ccw.DocUnits = 'HwDeg';
HwAgEotSig1Ccw.EngDT = dt.float32;
HwAgEotSig1Ccw.EngInit = 0;
HwAgEotSig1Ccw.EngMin = -900;
HwAgEotSig1Ccw.EngMax = 0;
HwAgEotSig1Ccw.ReadIn = {'EotLrngPer1'};
HwAgEotSig1Ccw.ReadType = 'Rte';


HwAgEotSig1Cw = DataDict.IpSignal;
HwAgEotSig1Cw.LongName = 'Handwheel Angle End of Travel Signal 1 Clockwise';
HwAgEotSig1Cw.Description = 'Eot Signal 1 Cw received';
HwAgEotSig1Cw.DocUnits = 'HwDeg';
HwAgEotSig1Cw.EngDT = dt.float32;
HwAgEotSig1Cw.EngInit = 0;
HwAgEotSig1Cw.EngMin = 0;
HwAgEotSig1Cw.EngMax = 900;
HwAgEotSig1Cw.ReadIn = {'EotLrngPer1'};
HwAgEotSig1Cw.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = [...
  'Handwheel Torque for use by the application '];
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'EotLrngPer1'};
HwTq.ReadType = 'Rte';


MotVelCrf = DataDict.IpSignal;
MotVelCrf.LongName = 'Motor Velocity Column Reference Frame';
MotVelCrf.Description = [...
  'Motor velocity with polarity as seen by driver.'];
MotVelCrf.DocUnits = 'MotRadPerSec';
MotVelCrf.EngDT = dt.float32;
MotVelCrf.EngInit = 0;
MotVelCrf.EngMin = -1350;
MotVelCrf.EngMax = 1350;
MotVelCrf.ReadIn = {'EotLrngPer1'};
MotVelCrf.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
HwAgCcwDetd = DataDict.OpSignal;
HwAgCcwDetd.LongName = 'Handwheel Angle Counter Clockwise Detected';
HwAgCcwDetd.Description = [...
  'Boolean indicating whether or not a learned position has been found in' ...
  ' the counter clockwise direction.'];
HwAgCcwDetd.DocUnits = 'Cnt';
HwAgCcwDetd.SwcShoName = 'EotLrng';
HwAgCcwDetd.EngDT = dt.lgc;
HwAgCcwDetd.EngInit = 0;
HwAgCcwDetd.EngMin = 0;
HwAgCcwDetd.EngMax = 1;
HwAgCcwDetd.TestTolerance = 0;
HwAgCcwDetd.WrittenIn = {'EotLrngInit1','EotLrngPer1'};
HwAgCcwDetd.WriteType = 'Rte';


HwAgCwDetd = DataDict.OpSignal;
HwAgCwDetd.LongName = 'Handwheel Angle Clockwise Detected';
HwAgCwDetd.Description = [...
  'Boolean indicating whether or not a learned position has been found in' ...
  ' the clockwise direction.'];
HwAgCwDetd.DocUnits = 'Cnt';
HwAgCwDetd.SwcShoName = 'EotLrng';
HwAgCwDetd.EngDT = dt.lgc;
HwAgCwDetd.EngInit = 0;
HwAgCwDetd.EngMin = 0;
HwAgCwDetd.EngMax = 1;
HwAgCwDetd.TestTolerance = 0;
HwAgCwDetd.WrittenIn = {'EotLrngInit1','EotLrngPer1'};
HwAgCwDetd.WriteType = 'Rte';


HwAgEotCcw = DataDict.OpSignal;
HwAgEotCcw.LongName = 'Handwheel Angle End of Travel Counter Clockwise Position';
HwAgEotCcw.Description = [...
  'End of travel learned position in the counter-clockwise direction.  Th' ...
  'is is an NVM value that is both an input and output for the function.'];
HwAgEotCcw.DocUnits = 'HwDeg';
HwAgEotCcw.SwcShoName = 'EotLrng';
HwAgEotCcw.EngDT = dt.float32;
HwAgEotCcw.EngInit = -360;
HwAgEotCcw.EngMin = -900;
HwAgEotCcw.EngMax = -360;
HwAgEotCcw.TestTolerance = 0.0625;
HwAgEotCcw.WrittenIn = {'EotLrngInit1','EotLrngPer1'};
HwAgEotCcw.WriteType = 'Rte';


HwAgEotCw = DataDict.OpSignal;
HwAgEotCw.LongName = 'Handwheel Angle End of Travel Clockwise Position';
HwAgEotCw.Description = [...
  'End of travel learned position in the clockwise direction.  This is an' ...
  ' NVM value that is both an input and output for the function.'];
HwAgEotCw.DocUnits = 'HwDeg';
HwAgEotCw.SwcShoName = 'EotLrng';
HwAgEotCw.EngDT = dt.float32;
HwAgEotCw.EngInit = 360;
HwAgEotCw.EngMin = 360;
HwAgEotCw.EngMax = 900;
HwAgEotCw.TestTolerance = 0.0625;
HwAgEotCw.WrittenIn = {'EotLrngInit1','EotLrngPer1'};
HwAgEotCw.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
EotLrngAuthyStrtLrn = DataDict.Calibration;
EotLrngAuthyStrtLrn.LongName = 'Authority Start Learning';
EotLrngAuthyStrtLrn.Description = [...
  'Minimum level of authority used to activate the learning as well as de' ...
  'termine Cw_Detd and Ccw_Detd outputs.'];
EotLrngAuthyStrtLrn.DocUnits = 'Uls';
EotLrngAuthyStrtLrn.EngDT = dt.float32;
EotLrngAuthyStrtLrn.EngVal = 1;
EotLrngAuthyStrtLrn.EngMin = 0;
EotLrngAuthyStrtLrn.EngMax = 1;
EotLrngAuthyStrtLrn.Cardinality = 'Inin';
EotLrngAuthyStrtLrn.CustomerVisible = false;
EotLrngAuthyStrtLrn.Online = false;
EotLrngAuthyStrtLrn.Impact = 'H';
EotLrngAuthyStrtLrn.TuningOwner = 'CSE';
EotLrngAuthyStrtLrn.GraphLink = {''};
EotLrngAuthyStrtLrn.Monotony = 'None';
EotLrngAuthyStrtLrn.MaxGrad = 998;
EotLrngAuthyStrtLrn.PortName = 'EotLrngAuthyStrtLrn';


EotLrngEntrAndExitHysRngLimr = DataDict.Calibration;
EotLrngEntrAndExitHysRngLimr.LongName = 'Enter And Exit Hysteresis Range Limiter';
EotLrngEntrAndExitHysRngLimr.Description = [...
  'The value which determines the range of the hysteresis used for "dead ' ...
  'zone" between Enter and Exit trigger points. Enter and Exit trigger po' ...
  'ints are used in order to determine the number of Over Travel events.'];
EotLrngEntrAndExitHysRngLimr.DocUnits = 'HwDeg';
EotLrngEntrAndExitHysRngLimr.EngDT = dt.float32;
EotLrngEntrAndExitHysRngLimr.EngVal = 3;
EotLrngEntrAndExitHysRngLimr.EngMin = 0;
EotLrngEntrAndExitHysRngLimr.EngMax = 100;
EotLrngEntrAndExitHysRngLimr.Cardinality = 'Inin';
EotLrngEntrAndExitHysRngLimr.CustomerVisible = false;
EotLrngEntrAndExitHysRngLimr.Online = false;
EotLrngEntrAndExitHysRngLimr.Impact = 'H';
EotLrngEntrAndExitHysRngLimr.TuningOwner = 'CSE';
EotLrngEntrAndExitHysRngLimr.GraphLink = {''};
EotLrngEntrAndExitHysRngLimr.Monotony = 'None';
EotLrngEntrAndExitHysRngLimr.MaxGrad = 998;
EotLrngEntrAndExitHysRngLimr.PortName = 'EotLrngEntrAndExitHysRngLimr';


EotLrngEotLrnTmr = DataDict.Calibration;
EotLrngEotLrnTmr.LongName = 'Learned End of Travel Timer';
EotLrngEotLrnTmr.Description = [...
  'Amount of time (minimum) required to meet conditions to determine an e' ...
  'nd of travel condition has completed.'];
EotLrngEotLrnTmr.DocUnits = 'MilliSec';
EotLrngEotLrnTmr.EngDT = dt.u16;
EotLrngEotLrnTmr.EngVal = 100;
EotLrngEotLrnTmr.EngMin = 0;
EotLrngEotLrnTmr.EngMax = 10000;
EotLrngEotLrnTmr.Cardinality = 'Inin';
EotLrngEotLrnTmr.CustomerVisible = false;
EotLrngEotLrnTmr.Online = false;
EotLrngEotLrnTmr.Impact = 'H';
EotLrngEotLrnTmr.TuningOwner = 'CSE';
EotLrngEotLrnTmr.GraphLink = {''};
EotLrngEotLrnTmr.Monotony = 'None';
EotLrngEotLrnTmr.MaxGrad = 998;
EotLrngEotLrnTmr.PortName = 'EotLrngEotLrnTmr';


EotLrngHwAgOverTrvlCntThd = DataDict.Calibration;
EotLrngHwAgOverTrvlCntThd.LongName = 'Handwheel Angle Over Travel Count Threshold';
EotLrngHwAgOverTrvlCntThd.Description = [...
  'Threshold value for OT Counter. When OT Counter  becomes greater than ' ...
  'this value, NTC message shall be set to Failed.'];
EotLrngHwAgOverTrvlCntThd.DocUnits = 'Cnt';
EotLrngHwAgOverTrvlCntThd.EngDT = dt.u08;
EotLrngHwAgOverTrvlCntThd.EngVal = 5;
EotLrngHwAgOverTrvlCntThd.EngMin = 0;
EotLrngHwAgOverTrvlCntThd.EngMax = 255;
EotLrngHwAgOverTrvlCntThd.Cardinality = 'Cmn';
EotLrngHwAgOverTrvlCntThd.CustomerVisible = false;
EotLrngHwAgOverTrvlCntThd.Online = false;
EotLrngHwAgOverTrvlCntThd.Impact = 'L';
EotLrngHwAgOverTrvlCntThd.TuningOwner = 'CSE';
EotLrngHwAgOverTrvlCntThd.GraphLink = {''};
EotLrngHwAgOverTrvlCntThd.Monotony = 'None';
EotLrngHwAgOverTrvlCntThd.MaxGrad = 998;
EotLrngHwAgOverTrvlCntThd.PortName = 'EotLrngHwAgOverTrvlCntThd';


EotLrngHwTqEotLrn = DataDict.Calibration;
EotLrngHwTqEotLrn.LongName = 'Handwheel Torque End of Travel Learned';
EotLrngHwTqEotLrn.Description = [...
  'Minimum torque applied to indicate learning to start (high torque at e' ...
  'nd of travel).'];
EotLrngHwTqEotLrn.DocUnits = 'HwNwtMtr';
EotLrngHwTqEotLrn.EngDT = dt.float32;
EotLrngHwTqEotLrn.EngVal = 2;
EotLrngHwTqEotLrn.EngMin = 0;
EotLrngHwTqEotLrn.EngMax = 10;
EotLrngHwTqEotLrn.Cardinality = 'Inin';
EotLrngHwTqEotLrn.CustomerVisible = false;
EotLrngHwTqEotLrn.Online = false;
EotLrngHwTqEotLrn.Impact = 'H';
EotLrngHwTqEotLrn.TuningOwner = 'CSE';
EotLrngHwTqEotLrn.GraphLink = {''};
EotLrngHwTqEotLrn.Monotony = 'None';
EotLrngHwTqEotLrn.MaxGrad = 998;
EotLrngHwTqEotLrn.PortName = 'EotLrngHwTqEotLrn';


EotLrngMotVelEotLrn = DataDict.Calibration;
EotLrngMotVelEotLrn.LongName = 'Motor Velocity End of Travel Learned';
EotLrngMotVelEotLrn.Description = [...
  'Maximum velocity threshold to indicate (with high torque) that the end' ...
  ' stop is detected.'];
EotLrngMotVelEotLrn.DocUnits = 'MotRadPerSec';
EotLrngMotVelEotLrn.EngDT = dt.float32;
EotLrngMotVelEotLrn.EngVal = 50;
EotLrngMotVelEotLrn.EngMin = 0;
EotLrngMotVelEotLrn.EngMax = 1350;
EotLrngMotVelEotLrn.Cardinality = 'Inin';
EotLrngMotVelEotLrn.CustomerVisible = false;
EotLrngMotVelEotLrn.Online = false;
EotLrngMotVelEotLrn.Impact = 'H';
EotLrngMotVelEotLrn.TuningOwner = 'CSE';
EotLrngMotVelEotLrn.GraphLink = {''};
EotLrngMotVelEotLrn.Monotony = 'None';
EotLrngMotVelEotLrn.MaxGrad = 998;
EotLrngMotVelEotLrn.PortName = 'EotLrngMotVelEotLrn';


EotLrngRackTrvlMax = DataDict.Calibration;
EotLrngRackTrvlMax.LongName = 'Maximum Rack Travel';
EotLrngRackTrvlMax.Description = 'Maximum rack travel expected.';
EotLrngRackTrvlMax.DocUnits = 'HwDeg';
EotLrngRackTrvlMax.EngDT = dt.float32;
EotLrngRackTrvlMax.EngVal = 800;
EotLrngRackTrvlMax.EngMin = 360;
EotLrngRackTrvlMax.EngMax = 900;
EotLrngRackTrvlMax.Cardinality = 'Inin';
EotLrngRackTrvlMax.CustomerVisible = false;
EotLrngRackTrvlMax.Online = false;
EotLrngRackTrvlMax.Impact = 'H';
EotLrngRackTrvlMax.TuningOwner = 'CSE';
EotLrngRackTrvlMax.GraphLink = {''};
EotLrngRackTrvlMax.Monotony = 'None';
EotLrngRackTrvlMax.MaxGrad = 998;
EotLrngRackTrvlMax.PortName = 'EotLrngRackTrvlMax';


EotLrngRackTrvlMin = DataDict.Calibration;
EotLrngRackTrvlMin.LongName = 'Minimum Rack Travel';
EotLrngRackTrvlMin.Description = 'Minimum rack travel expected.';
EotLrngRackTrvlMin.DocUnits = 'HwDeg';
EotLrngRackTrvlMin.EngDT = dt.float32;
EotLrngRackTrvlMin.EngVal = 400;
EotLrngRackTrvlMin.EngMin = 360;
EotLrngRackTrvlMin.EngMax = 900;
EotLrngRackTrvlMin.Cardinality = 'Inin';
EotLrngRackTrvlMin.CustomerVisible = false;
EotLrngRackTrvlMin.Online = false;
EotLrngRackTrvlMin.Impact = 'H';
EotLrngRackTrvlMin.TuningOwner = 'CSE';
EotLrngRackTrvlMin.GraphLink = {''};
EotLrngRackTrvlMin.Monotony = 'None';
EotLrngRackTrvlMin.MaxGrad = 998;
EotLrngRackTrvlMin.PortName = 'EotLrngRackTrvlMin';


EotLrngRstAuthyMin = DataDict.Calibration;
EotLrngRstAuthyMin.LongName = 'Minimum Reset Authority';
EotLrngRstAuthyMin.Description = [...
  'Minimum confidence needed to allow the actual position to be used to i' ...
  'nternally reset the limits if they are outside min/max cal range.'];
EotLrngRstAuthyMin.DocUnits = 'Uls';
EotLrngRstAuthyMin.EngDT = dt.float32;
EotLrngRstAuthyMin.EngVal = 1;
EotLrngRstAuthyMin.EngMin = 0;
EotLrngRstAuthyMin.EngMax = 1;
EotLrngRstAuthyMin.Cardinality = 'Inin';
EotLrngRstAuthyMin.CustomerVisible = false;
EotLrngRstAuthyMin.Online = false;
EotLrngRstAuthyMin.Impact = 'H';
EotLrngRstAuthyMin.TuningOwner = 'CSE';
EotLrngRstAuthyMin.GraphLink = {''};
EotLrngRstAuthyMin.Monotony = 'None';
EotLrngRstAuthyMin.MaxGrad = 998;
EotLrngRstAuthyMin.PortName = 'EotLrngRstAuthyMin';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
EotProtnRackTrvlLimrEna = DataDict.ImprtdCal;
EotProtnRackTrvlLimrEna.DocUnits = 'Cnt';
EotProtnRackTrvlLimrEna.EngDT = dt.lgc;
EotProtnRackTrvlLimrEna.EngVal = 0;
EotProtnRackTrvlLimrEna.EngMin = 0;
EotProtnRackTrvlLimrEna.EngMax = 1;
EotProtnRackTrvlLimrEna.PortName = 'EotProtnRackTrvlLimrEna';
EotProtnRackTrvlLimrEna.Description = '';


EotProtnRackTrvlLimrRngLimd = DataDict.ImprtdCal;
EotProtnRackTrvlLimrRngLimd.DocUnits = 'HwDeg';
EotProtnRackTrvlLimrRngLimd.EngDT = dt.float32;
EotProtnRackTrvlLimrRngLimd.EngVal = 20;
EotProtnRackTrvlLimrRngLimd.EngMin = 0;
EotProtnRackTrvlLimrRngLimd.EngMax = 50;
EotProtnRackTrvlLimrRngLimd.PortName = 'EotProtnRackTrvlLimrRngLimd';
EotProtnRackTrvlLimrRngLimd.Description = '';



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
EotNvmData = DataDict.NVM;
EotNvmData.LongName = 'End of Travel NVM Data';
EotNvmData.Description = [...
  'Clockwise and Counter clockwise End of travel limits are stored.'];
EotNvmData.DocUnits = 'Uls';
EotNvmData.EngDT = struct.EotNvmDataRec1;
EotNvmData.EngInit = [];
EotNvmData.EngMin = [struct('CwEot',0,'CcwEot',-1800,'CwEotDetd',0,'CcwEotDetd',0)];
EotNvmData.EngMax = [struct('CwEot',1800,'CcwEot',0,'CwEotDetd',1,'CcwEotDetd',1)];
EotNvmData.CustomerVisible = false;
EotNvmData.Impact = 'H';
EotNvmData.TuningOwner = 'CSE';
EotNvmData.CoderInfo.Alias = '';
EotNvmData.InitRowCol = [1  1];


MaxHwAgCwAndCcw = DataDict.NVM;
MaxHwAgCwAndCcw.LongName = 'Maximum Handwheel Angle Clockwise and Counterclockwise';
MaxHwAgCwAndCcw.Description = [...
  'Minimum and Maximum Handwheel angle detected by the gear over life of ' ...
  'gear'];
MaxHwAgCwAndCcw.DocUnits = 'Uls';
MaxHwAgCwAndCcw.EngDT = struct.MaxHwAgCwAndCcwRec2;
MaxHwAgCwAndCcw.EngInit = [];
MaxHwAgCwAndCcw.EngMin = [struct('HwAgCcwMax',-1800,'HwAgCwMax',0,'HwAgOverTrvlCnt',0)];
MaxHwAgCwAndCcw.EngMax = [struct('HwAgCcwMax',0,'HwAgCwMax',1800,'HwAgOverTrvlCnt',255)];
MaxHwAgCwAndCcw.CustomerVisible = false;
MaxHwAgCwAndCcw.Impact = 'H';
MaxHwAgCwAndCcw.TuningOwner = 'CSE';
MaxHwAgCwAndCcw.CoderInfo.Alias = '';
MaxHwAgCwAndCcw.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
CcwEotRefTmr = DataDict.PIM;
CcwEotRefTmr.LongName = 'Counter Clockwise End of Travel Reference Timer';
CcwEotRefTmr.Description = [...
  'Reference time is used to calculate the time span(elasped time) in the' ...
  ' timer detecting counter clockwise end of travel.'];
CcwEotRefTmr.DocUnits = 'Cnt';
CcwEotRefTmr.EngDT = dt.u32;
CcwEotRefTmr.EngMin = 0;
CcwEotRefTmr.EngMax = 4294967295;
CcwEotRefTmr.InitRowCol = [1  1];


CwEotRefTmr = DataDict.PIM;
CwEotRefTmr.LongName = 'Clockwise End of Travel Reference Timer';
CwEotRefTmr.Description = [...
  'Reference time is used to calculate the time span(elasped time) in the' ...
  ' timer detecting clockwise end of travel.'];
CwEotRefTmr.DocUnits = 'Cnt';
CwEotRefTmr.EngDT = dt.u32;
CwEotRefTmr.EngMin = 0;
CwEotRefTmr.EngMax = 4294967295;
CwEotRefTmr.InitRowCol = [1  1];


HwAgOverTrvlCntrNegDi = DataDict.PIM;
HwAgOverTrvlCntrNegDi.LongName = 'Handwheel Angle Over Travel Counter Negative Disable';
HwAgOverTrvlCntrNegDi.Description = [...
  'Used to debounce the counter, when true the counter has already been i' ...
  'nclemented (because of exceeding Enter value in a counter clockwise di' ...
  'rection) and is unavailable until next vehical maneuver'];
HwAgOverTrvlCntrNegDi.DocUnits = 'Uls';
HwAgOverTrvlCntrNegDi.EngDT = dt.lgc;
HwAgOverTrvlCntrNegDi.EngMin = 0;
HwAgOverTrvlCntrNegDi.EngMax = 1;
HwAgOverTrvlCntrNegDi.InitRowCol = [1  1];


HwAgOverTrvlCntrPosDi = DataDict.PIM;
HwAgOverTrvlCntrPosDi.LongName = 'Handwheel Angle Over Travel Counter Positive Disable';
HwAgOverTrvlCntrPosDi.Description = [...
  'Used to debounce the counter, when true the counter has already been i' ...
  'nclemented (because of exceeding Enter value in a clockwise direction)' ...
  'and is unavailable until next vehical maneuver'];
HwAgOverTrvlCntrPosDi.DocUnits = 'Uls';
HwAgOverTrvlCntrPosDi.EngDT = dt.lgc;
HwAgOverTrvlCntrPosDi.EngMin = 0;
HwAgOverTrvlCntrPosDi.EngMax = 1;
HwAgOverTrvlCntrPosDi.InitRowCol = [1  1];


PrevCcwEot = DataDict.PIM;
PrevCcwEot.LongName = 'Previous Counter Clockwise End of Travel';
PrevCcwEot.Description = [...
  'To hold the previous execution cycle Counter Clockwise End of Travel v' ...
  'alue'];
PrevCcwEot.DocUnits = 'HwDeg';
PrevCcwEot.EngDT = dt.float32;
PrevCcwEot.EngMin = -900;
PrevCcwEot.EngMax = -360;
PrevCcwEot.InitRowCol = [1  1];


PrevCwEot = DataDict.PIM;
PrevCwEot.LongName = 'Previous Clockwise End of Travel';
PrevCwEot.Description = [...
  'To hold the previous execution cycle Clockwise End of Travel value'];
PrevCwEot.DocUnits = 'HwDeg';
PrevCwEot.EngDT = dt.float32;
PrevCwEot.EngMin = 360;
PrevCwEot.EngMax = 900;
PrevCwEot.InitRowCol = [1  1];


RstLimReq = DataDict.PIM;
RstLimReq.LongName = 'Reset Limit Required';
RstLimReq.Description = [...
  'State variable is set to True when Serial Communication Reset EOT istr' ...
  'iggered when server runnable is invoked'];
RstLimReq.DocUnits = 'Cnt';
RstLimReq.EngDT = dt.lgc;
RstLimReq.EngMin = 0;
RstLimReq.EngMax = 1;
RstLimReq.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = [...
  'Zero Threshold for float comparisons; renamed float.h FLT_EPSILON beca' ...
  'use that name is reserved in MATLAB'];
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


CNVTOMILLISEC_MILLISECPERCNT_F32 = DataDict.Constant;
CNVTOMILLISEC_MILLISECPERCNT_F32.LongName = 'Convert to Milliseconds';
CNVTOMILLISEC_MILLISECPERCNT_F32.Description = [...
  'Multiply by this constant to convert count to milliseconds'];
CNVTOMILLISEC_MILLISECPERCNT_F32.DocUnits = 'MilliSecPerCnt';
CNVTOMILLISEC_MILLISECPERCNT_F32.EngDT = dt.float32;
CNVTOMILLISEC_MILLISECPERCNT_F32.EngVal = 0.1;
CNVTOMILLISEC_MILLISECPERCNT_F32.Define = 'Local';


CORRLNFLT_CNT_U08 = DataDict.Constant;
CORRLNFLT_CNT_U08.LongName = 'Correlation Fault';
CORRLNFLT_CNT_U08.Description = [...
  'NTC_0X0E1 (Rack End of Travel Storage Fault) Bit 1 is set to indicate ' ...
  'Correlation Fault'];
CORRLNFLT_CNT_U08.DocUnits = 'Cnt';
CORRLNFLT_CNT_U08.EngDT = dt.u08;
CORRLNFLT_CNT_U08.EngVal = 2;
CORRLNFLT_CNT_U08.Define = 'Local';


DEBSTEP_CNT_U16 = DataDict.Constant;
DEBSTEP_CNT_U16.LongName = 'De-Bounce Step';
DEBSTEP_CNT_U16.Description = [...
  'Debounce step count is determined based on delay time needed beforeset' ...
  'ting NTC to FAIL state. Here Debounce step is set such that delay time' ...
  'is equivalent to 500ms till when the NTC fault is set to PREFAIL. Once' ...
  'maximum step count is reached, NTC fault is set to FAIL'];
DEBSTEP_CNT_U16.DocUnits = 'Cnt';
DEBSTEP_CNT_U16.EngDT = dt.u16;
DEBSTEP_CNT_U16.EngVal = 656;
DEBSTEP_CNT_U16.Define = 'Local';


EOTLIMDETD_CNT_LOGL = DataDict.Constant;
EOTLIMDETD_CNT_LOGL.LongName = 'End of Travel Limit Detected';
EOTLIMDETD_CNT_LOGL.Description = [...
  'Constant to define state of EOT detected'];
EOTLIMDETD_CNT_LOGL.DocUnits = 'Cnt';
EOTLIMDETD_CNT_LOGL.EngDT = dt.lgc;
EOTLIMDETD_CNT_LOGL.EngVal = 1;
EOTLIMDETD_CNT_LOGL.Define = 'Local';


EOTLIMNOTDETD_CNT_LOGL = DataDict.Constant;
EOTLIMNOTDETD_CNT_LOGL.LongName = 'End of Travel Limit Not Detected';
EOTLIMNOTDETD_CNT_LOGL.Description = [...
  'Constant to define state of EOT not detected'];
EOTLIMNOTDETD_CNT_LOGL.DocUnits = 'Cnt';
EOTLIMNOTDETD_CNT_LOGL.EngDT = dt.lgc;
EOTLIMNOTDETD_CNT_LOGL.EngVal = 0;
EOTLIMNOTDETD_CNT_LOGL.Define = 'Local';


HWAGEOTCCWHILIM_HWDEG_F32 = DataDict.Constant;
HWAGEOTCCWHILIM_HWDEG_F32.LongName = 'Handwheel Angle End of Travel Counter Clockwise High Limit';
HWAGEOTCCWHILIM_HWDEG_F32.Description = [...
  'Handwheel Angle End of Travel Counter Clockwise High Limit'];
HWAGEOTCCWHILIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGEOTCCWHILIM_HWDEG_F32.EngDT = dt.float32;
HWAGEOTCCWHILIM_HWDEG_F32.EngVal = -360;
HWAGEOTCCWHILIM_HWDEG_F32.Define = 'Local';


HWAGEOTCCWLOWLIM_HWDEG_F32 = DataDict.Constant;
HWAGEOTCCWLOWLIM_HWDEG_F32.LongName = 'Handwheel Angle End of Travel Counter Clockwise Low Limit';
HWAGEOTCCWLOWLIM_HWDEG_F32.Description = [...
  'Handwheel Angle End of Travel Counter Clockwise Low Limit'];
HWAGEOTCCWLOWLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGEOTCCWLOWLIM_HWDEG_F32.EngDT = dt.float32;
HWAGEOTCCWLOWLIM_HWDEG_F32.EngVal = -900;
HWAGEOTCCWLOWLIM_HWDEG_F32.Define = 'Local';


HWAGEOTCWHILIM_HWDEG_F32 = DataDict.Constant;
HWAGEOTCWHILIM_HWDEG_F32.LongName = 'Handwheel Angle End of Travel Clockwise High Limit';
HWAGEOTCWHILIM_HWDEG_F32.Description = [...
  'Handwheel Angle End of Travel Clockwise High Limit'];
HWAGEOTCWHILIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGEOTCWHILIM_HWDEG_F32.EngDT = dt.float32;
HWAGEOTCWHILIM_HWDEG_F32.EngVal = 900;
HWAGEOTCWHILIM_HWDEG_F32.Define = 'Local';


HWAGEOTCWLOWLIM_HWDEG_F32 = DataDict.Constant;
HWAGEOTCWLOWLIM_HWDEG_F32.LongName = 'Handwheel Angle End of Travel Clockwise Low Limit';
HWAGEOTCWLOWLIM_HWDEG_F32.Description = [...
  'Handwheel Angle End of Travel Clockwise Low Limit'];
HWAGEOTCWLOWLIM_HWDEG_F32.DocUnits = 'HwDeg';
HWAGEOTCWLOWLIM_HWDEG_F32.EngDT = dt.float32;
HWAGEOTCWLOWLIM_HWDEG_F32.EngVal = 360;
HWAGEOTCWLOWLIM_HWDEG_F32.Define = 'Local';


HWAGOVERTRVLMAXCNT_CNT_U08 = DataDict.Constant;
HWAGOVERTRVLMAXCNT_CNT_U08.LongName = 'Handwheel Angle Over Travel Maximum Count';
HWAGOVERTRVLMAXCNT_CNT_U08.Description = [...
  'Handwheel Angle Over Travel Maximum Count'];
HWAGOVERTRVLMAXCNT_CNT_U08.DocUnits = 'Cnt';
HWAGOVERTRVLMAXCNT_CNT_U08.EngDT = dt.u08;
HWAGOVERTRVLMAXCNT_CNT_U08.EngVal = 255;
HWAGOVERTRVLMAXCNT_CNT_U08.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


OUTOFRNGFLT_CNT_U08 = DataDict.Constant;
OUTOFRNGFLT_CNT_U08.LongName = 'Out of Range Fault';
OUTOFRNGFLT_CNT_U08.Description = [...
  'NTC_0X0E1 (Rack End of Travel Storage Fault) Bit 2 is set to indicate ' ...
  'Out of Range Fault'];
OUTOFRNGFLT_CNT_U08.DocUnits = 'Cnt';
OUTOFRNGFLT_CNT_U08.EngDT = dt.u08;
OUTOFRNGFLT_CNT_U08.EngVal = 4;
OUTOFRNGFLT_CNT_U08.Define = 'Local';


SIGAVLFLT_CNT_U08 = DataDict.Constant;
SIGAVLFLT_CNT_U08.LongName = 'Signal Available Fault';
SIGAVLFLT_CNT_U08.Description = [...
  'NTC_0X0E1 (Rack End of Travel Storage Fault) Bit 0 is set to indicate ' ...
  'Signal Available Fault'];
SIGAVLFLT_CNT_U08.DocUnits = 'Cnt';
SIGAVLFLT_CNT_U08.EngDT = dt.u08;
SIGAVLFLT_CNT_U08.EngVal = 1;
SIGAVLFLT_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HwAgOverTrvl = DataDict.NTC;
HwAgOverTrvl.NtcNr = NtcNr1.NTCNR_0X0A7;
HwAgOverTrvl.NtcTyp = 'None';
HwAgOverTrvl.LongName = 'Handwheel Angle Over Travel';
HwAgOverTrvl.Description = 'Nexteer Trouble Code Number 0X0A7, released when the number of Over Travel events exceeds a calibratable value.';
HwAgOverTrvl.NtcStInfo = DataDict.NtcStInfoBitPacked;
HwAgOverTrvl.NtcStInfo.Bit0Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit1Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit2Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit3Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit4Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit5Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit6Descr = 'Unused';
HwAgOverTrvl.NtcStInfo.Bit7Descr = 'Unused';


RackEotStorgFlt = DataDict.NTC;
RackEotStorgFlt.NtcNr = NtcNr1.NTCNR_0X0E1;
RackEotStorgFlt.NtcTyp = 'Deb';
RackEotStorgFlt.LongName = 'Rack End of Travel Storage Fault';
RackEotStorgFlt.Description = 'Nexteer Trouble Code Number 0X0E1, will be set when Cw and Ccw Eot signals are not available or if signals do not correlate or if signals   are out of range.';
RackEotStorgFlt.NtcStInfo = DataDict.NtcStInfoBitPacked;
RackEotStorgFlt.NtcStInfo.Bit0Descr = 'Signals Available Fault';
RackEotStorgFlt.NtcStInfo.Bit1Descr = 'Correlation Fault';
RackEotStorgFlt.NtcStInfo.Bit2Descr = 'Out of Range Fault';
RackEotStorgFlt.NtcStInfo.Bit3Descr = 'Unused';
RackEotStorgFlt.NtcStInfo.Bit4Descr = 'Unused';
RackEotStorgFlt.NtcStInfo.Bit5Descr = 'Unused';
RackEotStorgFlt.NtcStInfo.Bit6Descr = 'Unused';
RackEotStorgFlt.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
