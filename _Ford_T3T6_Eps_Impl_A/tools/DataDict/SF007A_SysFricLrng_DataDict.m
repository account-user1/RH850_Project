%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-Dec-2017 14:47:31       %
%                                  Created with tool release: 3.2.0      %
%                                  Synergy file: %version: 2 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

SF007A = DataDict.FDD;
SF007A.Version = '3.2.X';
SF007A.LongName = 'System Friction Learning';
SF007A.ShoName  = 'SysFricLrng';
SF007A.DesignASIL = 'QM';
SF007A.Description = [...
  'This function improves the steering feel by automatically identifying ' ...
  'the EPS gear friction changesfrom the baseline friction and providing ' ...
  'the compensation accordingly. The system friction estimationis based o' ...
  'n the hysteresis between the total column torque and the hand wheel an' ...
  'gle. Due to the factthat the friction from the tire and the road surfa' ...
  'ce is dominating at the low vehicle speed,  and itbecomes less signifi' ...
  'cant as the vehicle speed increases, this function focuses on the fric' ...
  'tion changes at higher vehicle speeds.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
SysFricLrngInit1 = DataDict.Runnable;
SysFricLrngInit1.Context = 'Rte';
SysFricLrngInit1.TimeStep = 0;
SysFricLrngInit1.Description = 'Init Runnable';

SysFricLrngPer1 = DataDict.Runnable;
SysFricLrngPer1.Context = 'Rte';
SysFricLrngPer1.TimeStep = 0.01;
SysFricLrngPer1.Description = 'Periodic Runnable of 10 ms';

ClrFricLrngOperMod = DataDict.SrvRunnable;
ClrFricLrngOperMod.Context = 'Rte';
ClrFricLrngOperMod.Description = [...
  'Set the Operating Mode of Friction Learning to Clear'];
ClrFricLrngOperMod.Return = DataDict.CSReturn;
ClrFricLrngOperMod.Return.Type = 'None';
ClrFricLrngOperMod.Return.Min = [];
ClrFricLrngOperMod.Return.Max = [];
ClrFricLrngOperMod.Return.TestTolerance = [];

FricLrngShtDwn = DataDict.SrvRunnable;
FricLrngShtDwn.Context = 'NonRte';
FricLrngShtDwn.Description = 'Execute the logic during Shutdown.';
FricLrngShtDwn.Return = DataDict.CSReturn;
FricLrngShtDwn.Return.Type = 'None';
FricLrngShtDwn.Return.Min = [];
FricLrngShtDwn.Return.Max = [];
FricLrngShtDwn.Return.TestTolerance = [];

GetFricData = DataDict.SrvRunnable;
GetFricData.Context = 'Rte';
GetFricData.Description = 'Get Friction Data Client';
GetFricData.Return = DataDict.CSReturn;
GetFricData.Return.Type = 'None';
GetFricData.Return.Min = [];
GetFricData.Return.Max = [];
GetFricData.Return.TestTolerance = [];
GetFricData.Arguments(1) = DataDict.CSArguments;
GetFricData.Arguments(1).Name = 'FricOffs';
GetFricData.Arguments(1).EngDT = dt.float32;
GetFricData.Arguments(1).EngMin = -5;
GetFricData.Arguments(1).EngMax = 5;
GetFricData.Arguments(1).TestTolerance = 10;
GetFricData.Arguments(1).Units = 'HwNwtMtr';
GetFricData.Arguments(1).Direction = 'Out';
GetFricData.Arguments(1).InitRowCol = [1  1];
GetFricData.Arguments(1).Description = 'Friction Offset';
GetFricData.Arguments(2) = DataDict.CSArguments;
GetFricData.Arguments(2).Name = 'BasLineFric';
GetFricData.Arguments(2).EngDT = dt.float32;
GetFricData.Arguments(2).EngMin = -127;
GetFricData.Arguments(2).EngMax = 254;
GetFricData.Arguments(2).TestTolerance = 254;
GetFricData.Arguments(2).Units = 'HwNwtMtr';
GetFricData.Arguments(2).Direction = 'Out';
GetFricData.Arguments(2).InitRowCol = [4  1];
GetFricData.Arguments(2).Description = 'Baseline Friction';
GetFricData.Arguments(3) = DataDict.CSArguments;
GetFricData.Arguments(3).Name = 'VehLrndFric';
GetFricData.Arguments(3).EngDT = dt.float32;
GetFricData.Arguments(3).EngMin = 0;
GetFricData.Arguments(3).EngMax = 127;
GetFricData.Arguments(3).TestTolerance = 998;
GetFricData.Arguments(3).Units = 'HwNwtMtr';
GetFricData.Arguments(3).Direction = 'Out';
GetFricData.Arguments(3).InitRowCol = [4  1];
GetFricData.Arguments(3).Description = 'Vehicle Learned Friction';
GetFricData.Arguments(4) = DataDict.CSArguments;
GetFricData.Arguments(4).Name = 'Hys';
GetFricData.Arguments(4).EngDT = dt.float32;
GetFricData.Arguments(4).EngMin = -127;
GetFricData.Arguments(4).EngMax = 127;
GetFricData.Arguments(4).TestTolerance = 127;
GetFricData.Arguments(4).Units = 'HwNwtMtr';
GetFricData.Arguments(4).Direction = 'Out';
GetFricData.Arguments(4).InitRowCol = [8  4];
GetFricData.Arguments(4).Description = 'Hystersis Reference Tables';
GetFricData.Arguments(5) = DataDict.CSArguments;
GetFricData.Arguments(5).Name = 'RngCntr';
GetFricData.Arguments(5).EngDT = dt.u16;
GetFricData.Arguments(5).EngMin = 0;
GetFricData.Arguments(5).EngMax = 65535;
GetFricData.Arguments(5).TestTolerance = 65533;
GetFricData.Arguments(5).Units = 'Cnt';
GetFricData.Arguments(5).Direction = 'Out';
GetFricData.Arguments(5).InitRowCol = [8  3];
GetFricData.Arguments(5).Description = 'Range Counter';

GetFricLrngData = DataDict.SrvRunnable;
GetFricLrngData.Context = 'Rte';
GetFricLrngData.Description = 'Get Friction Learning Data Client';
GetFricLrngData.Return = DataDict.CSReturn;
GetFricLrngData.Return.Type = 'None';
GetFricLrngData.Return.Min = [];
GetFricLrngData.Return.Max = [];
GetFricLrngData.Return.TestTolerance = [];
GetFricLrngData.Arguments(1) = DataDict.CSArguments;
GetFricLrngData.Arguments(1).Name = 'FricLrngEna';
GetFricLrngData.Arguments(1).EngDT = dt.lgc;
GetFricLrngData.Arguments(1).EngMin = 0;
GetFricLrngData.Arguments(1).EngMax = 1;
GetFricLrngData.Arguments(1).TestTolerance = 0;
GetFricLrngData.Arguments(1).Units = 'Uls';
GetFricLrngData.Arguments(1).Direction = 'Out';
GetFricLrngData.Arguments(1).InitRowCol = [1  1];
GetFricLrngData.Arguments(1).Description = 'Friction Learning Enable';
GetFricLrngData.Arguments(2) = DataDict.CSArguments;
GetFricLrngData.Arguments(2).Name = 'FricLrngOffsOutpEna';
GetFricLrngData.Arguments(2).EngDT = dt.lgc;
GetFricLrngData.Arguments(2).EngMin = 0;
GetFricLrngData.Arguments(2).EngMax = 1;
GetFricLrngData.Arguments(2).TestTolerance = 0;
GetFricLrngData.Arguments(2).Units = 'Uls';
GetFricLrngData.Arguments(2).Direction = 'Out';
GetFricLrngData.Arguments(2).InitRowCol = [1  1];
GetFricLrngData.Arguments(2).Description = [...
  'Friction Learning Offset Output Enable'];
GetFricLrngData.Arguments(3) = DataDict.CSArguments;
GetFricLrngData.Arguments(3).Name = 'FricLrngOperMod';
GetFricLrngData.Arguments(3).EngDT = enum.SysFricLrngOperMod1;
GetFricLrngData.Arguments(3).EngMin = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_CALIBRATION;
GetFricLrngData.Arguments(3).EngMax = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_BASELINE;
GetFricLrngData.Arguments(3).TestTolerance = 998;
GetFricLrngData.Arguments(3).Units = 'Cnt';
GetFricLrngData.Arguments(3).Direction = 'Out';
GetFricLrngData.Arguments(3).InitRowCol = [1  1];
GetFricLrngData.Arguments(3).Description = 'Friction Learning Operating Mode';
GetFricLrngData.Arguments(4) = DataDict.CSArguments;
GetFricLrngData.Arguments(4).Name = 'EolFric';
GetFricLrngData.Arguments(4).EngDT = dt.float32;
GetFricLrngData.Arguments(4).EngMin = 0;
GetFricLrngData.Arguments(4).EngMax = 127;
GetFricLrngData.Arguments(4).TestTolerance = 127;
GetFricLrngData.Arguments(4).Units = 'HwNwtMtr';
GetFricLrngData.Arguments(4).Direction = 'Out';
GetFricLrngData.Arguments(4).InitRowCol = [1  1];
GetFricLrngData.Arguments(4).Description = 'End of Line Friction';

GetFricOffsOutpDi = DataDict.SrvRunnable;
GetFricOffsOutpDi.Context = 'Rte';
GetFricOffsOutpDi.Description = [...
  'Client Call for obtaining Friction Offset Output Disable'];
GetFricOffsOutpDi.Return = DataDict.CSReturn;
GetFricOffsOutpDi.Return.Type = 'None';
GetFricOffsOutpDi.Return.Min = [];
GetFricOffsOutpDi.Return.Max = [];
GetFricOffsOutpDi.Return.TestTolerance = [];
GetFricOffsOutpDi.Arguments(1) = DataDict.CSArguments;
GetFricOffsOutpDi.Arguments(1).Name = 'FricOffsOutpDi';
GetFricOffsOutpDi.Arguments(1).EngDT = dt.lgc;
GetFricOffsOutpDi.Arguments(1).EngMin = 0;
GetFricOffsOutpDi.Arguments(1).EngMax = 1;
GetFricOffsOutpDi.Arguments(1).TestTolerance = 0;
GetFricOffsOutpDi.Arguments(1).Units = 'Uls';
GetFricOffsOutpDi.Arguments(1).Direction = 'Out';
GetFricOffsOutpDi.Arguments(1).InitRowCol = [1  1];
GetFricOffsOutpDi.Arguments(1).Description = 'Friction Offset Output Disable';

InitFricLrngTbl = DataDict.SrvRunnable;
InitFricLrngTbl.Context = 'Rte';
InitFricLrngTbl.Description = 'Initialize Friction Learning Table';
InitFricLrngTbl.Return = DataDict.CSReturn;
InitFricLrngTbl.Return.Type = 'None';
InitFricLrngTbl.Return.Min = [];
InitFricLrngTbl.Return.Max = [];
InitFricLrngTbl.Return.TestTolerance = [];

SetFricData = DataDict.SrvRunnable;
SetFricData.Context = 'Rte';
SetFricData.Description = [...
  'Client Call for Setting Friction Data'];
SetFricData.Return = DataDict.CSReturn;
SetFricData.Return.Type = 'None';
SetFricData.Return.Min = [];
SetFricData.Return.Max = [];
SetFricData.Return.TestTolerance = [];
SetFricData.Arguments(1) = DataDict.CSArguments;
SetFricData.Arguments(1).Name = 'FricOffs';
SetFricData.Arguments(1).EngDT = dt.float32;
SetFricData.Arguments(1).EngMin = -5;
SetFricData.Arguments(1).EngMax = 5;
SetFricData.Arguments(1).Units = 'Uls';
SetFricData.Arguments(1).Direction = 'In';
SetFricData.Arguments(1).InitRowCol = [1  1];
SetFricData.Arguments(1).Description = [...
  'Friction offset component of friction learning data NVM'];
SetFricData.Arguments(2) = DataDict.CSArguments;
SetFricData.Arguments(2).Name = 'BasLineFric';
SetFricData.Arguments(2).EngDT = dt.float32;
SetFricData.Arguments(2).EngMin = -127;
SetFricData.Arguments(2).EngMax = 254;
SetFricData.Arguments(2).Units = 'HwNwtMtr';
SetFricData.Arguments(2).Direction = 'In';
SetFricData.Arguments(2).InitRowCol = [4  1];
SetFricData.Arguments(2).Description = [...
  'Baseline Friction of friction learning data NVM'];
SetFricData.Arguments(3) = DataDict.CSArguments;
SetFricData.Arguments(3).Name = 'VehLrndFric';
SetFricData.Arguments(3).EngDT = dt.float32;
SetFricData.Arguments(3).EngMin = 0;
SetFricData.Arguments(3).EngMax = 127;
SetFricData.Arguments(3).Units = 'HwNwtMtr';
SetFricData.Arguments(3).Direction = 'In';
SetFricData.Arguments(3).InitRowCol = [4  1];
SetFricData.Arguments(3).Description = [...
  'Vehicle Learned Component of Friction learning data NVM'];
SetFricData.Arguments(4) = DataDict.CSArguments;
SetFricData.Arguments(4).Name = 'Hys';
SetFricData.Arguments(4).EngDT = dt.float32;
SetFricData.Arguments(4).EngMin = -127;
SetFricData.Arguments(4).EngMax = 127;
SetFricData.Arguments(4).Units = 'HwNwtMtr';
SetFricData.Arguments(4).Direction = 'In';
SetFricData.Arguments(4).InitRowCol = [8  4];
SetFricData.Arguments(4).Description = [...
  'Hystersis component of friction learning data NVM'];
SetFricData.Arguments(5) = DataDict.CSArguments;
SetFricData.Arguments(5).Name = 'RngCntr';
SetFricData.Arguments(5).EngDT = dt.u16;
SetFricData.Arguments(5).EngMin = 0;
SetFricData.Arguments(5).EngMax = 65535;
SetFricData.Arguments(5).Units = 'Cnt';
SetFricData.Arguments(5).Direction = 'In';
SetFricData.Arguments(5).InitRowCol = [8  3];
SetFricData.Arguments(5).Description = 'Range Counter';

SetFricLrngData = DataDict.SrvRunnable;
SetFricLrngData.Context = 'Rte';
SetFricLrngData.Description = [...
  'Client Call for Setting Friction Learning Data'];
SetFricLrngData.Return = DataDict.CSReturn;
SetFricLrngData.Return.Type = 'None';
SetFricLrngData.Return.Min = [];
SetFricLrngData.Return.Max = [];
SetFricLrngData.Return.TestTolerance = [];
SetFricLrngData.Arguments(1) = DataDict.CSArguments;
SetFricLrngData.Arguments(1).Name = 'FricLrngEna';
SetFricLrngData.Arguments(1).EngDT = dt.lgc;
SetFricLrngData.Arguments(1).EngMin = 0;
SetFricLrngData.Arguments(1).EngMax = 1;
SetFricLrngData.Arguments(1).Units = 'Uls';
SetFricLrngData.Arguments(1).Direction = 'In';
SetFricLrngData.Arguments(1).InitRowCol = [1  1];
SetFricLrngData.Arguments(1).Description = 'Friction Learning Enable';
SetFricLrngData.Arguments(2) = DataDict.CSArguments;
SetFricLrngData.Arguments(2).Name = 'FricLrngOffsOutpEna';
SetFricLrngData.Arguments(2).EngDT = dt.lgc;
SetFricLrngData.Arguments(2).EngMin = 0;
SetFricLrngData.Arguments(2).EngMax = 1;
SetFricLrngData.Arguments(2).Units = 'Uls';
SetFricLrngData.Arguments(2).Direction = 'In';
SetFricLrngData.Arguments(2).InitRowCol = [1  1];
SetFricLrngData.Arguments(2).Description = [...
  'Friction Learning Offset Output Enable'];
SetFricLrngData.Arguments(3) = DataDict.CSArguments;
SetFricLrngData.Arguments(3).Name = 'FricLrngOperMod';
SetFricLrngData.Arguments(3).EngDT = enum.SysFricLrngOperMod1;
SetFricLrngData.Arguments(3).EngMin = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_CALIBRATION;
SetFricLrngData.Arguments(3).EngMax = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_BASELINE;
SetFricLrngData.Arguments(3).Units = 'Cnt';
SetFricLrngData.Arguments(3).Direction = 'In';
SetFricLrngData.Arguments(3).InitRowCol = [1  1];
SetFricLrngData.Arguments(3).Description = 'Friction Learning Operating Mode';
SetFricLrngData.Arguments(4) = DataDict.CSArguments;
SetFricLrngData.Arguments(4).Name = 'EolFric';
SetFricLrngData.Arguments(4).EngDT = dt.float32;
SetFricLrngData.Arguments(4).EngMin = 0;
SetFricLrngData.Arguments(4).EngMax = 127;
SetFricLrngData.Arguments(4).Units = 'HwNwtMtr';
SetFricLrngData.Arguments(4).Direction = 'In';
SetFricLrngData.Arguments(4).InitRowCol = [1  1];
SetFricLrngData.Arguments(4).Description = 'End of Line Friction';

SetFricOffsOutpDi = DataDict.SrvRunnable;
SetFricOffsOutpDi.Context = 'Rte';
SetFricOffsOutpDi.Description = [...
  'Client Call for setting Friction Offset Output Disable'];
SetFricOffsOutpDi.Return = DataDict.CSReturn;
SetFricOffsOutpDi.Return.Type = 'None';
SetFricOffsOutpDi.Return.Min = [];
SetFricOffsOutpDi.Return.Max = [];
SetFricOffsOutpDi.Return.TestTolerance = [];
SetFricOffsOutpDi.Arguments(1) = DataDict.CSArguments;
SetFricOffsOutpDi.Arguments(1).Name = 'FricOffsOutpDi';
SetFricOffsOutpDi.Arguments(1).EngDT = dt.lgc;
SetFricOffsOutpDi.Arguments(1).EngMin = 0;
SetFricOffsOutpDi.Arguments(1).EngMax = 1;
SetFricOffsOutpDi.Arguments(1).Units = 'Uls';
SetFricOffsOutpDi.Arguments(1).Direction = 'In';
SetFricOffsOutpDi.Arguments(1).InitRowCol = [1  1];
SetFricOffsOutpDi.Arguments(1).Description = 'Friction Offset Output Disable';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
FltInj_f32 = DataDict.Client;
FltInj_f32.CallLocation = {'SysFricLrngPer1'};
FltInj_f32.Description = 'Fault Injection';
FltInj_f32.Return = DataDict.CSReturn;
FltInj_f32.Return.Type = 'None';
FltInj_f32.Return.Min = [];
FltInj_f32.Return.Max = [];
FltInj_f32.Return.TestTolerance = [];
FltInj_f32.Arguments(1) = DataDict.CSArguments;
FltInj_f32.Arguments(1).Name = 'SigPah';
FltInj_f32.Arguments(1).EngDT = dt.float32;
FltInj_f32.Arguments(1).EngMin = -1000000000;
FltInj_f32.Arguments(1).EngMax = 1000000000;
FltInj_f32.Arguments(1).TestTolerance = 999;
FltInj_f32.Arguments(1).Units = 'Uls';
FltInj_f32.Arguments(1).Direction = 'InOut';
FltInj_f32.Arguments(1).InitRowCol = [1  1];
FltInj_f32.Arguments(1).Description = '';
FltInj_f32.Arguments(2) = DataDict.CSArguments;
FltInj_f32.Arguments(2).Name = 'LocnKey';
FltInj_f32.Arguments(2).EngDT = dt.u16;
FltInj_f32.Arguments(2).EngMin = 0;
FltInj_f32.Arguments(2).EngMax = 65535;
FltInj_f32.Arguments(2).Units = 'Cnt';
FltInj_f32.Arguments(2).Direction = 'In';
FltInj_f32.Arguments(2).InitRowCol = [1  1];
FltInj_f32.Arguments(2).Description = '';


FricLrngData_SetRamBlockStatus = DataDict.Client;
FricLrngData_SetRamBlockStatus.CallLocation = {'SysFricLrngInit1'};
FricLrngData_SetRamBlockStatus.Description = [...
  'Set Ram Block Status for Friction Learning Data NVM'];
FricLrngData_SetRamBlockStatus.Return = DataDict.CSReturn;
FricLrngData_SetRamBlockStatus.Return.Type = 'Standard';
FricLrngData_SetRamBlockStatus.Return.Min = 0;
FricLrngData_SetRamBlockStatus.Return.Max = 1;
FricLrngData_SetRamBlockStatus.Return.TestTolerance = 0;
FricLrngData_SetRamBlockStatus.Return.Description = 'Return type:true or false';
FricLrngData_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
FricLrngData_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
FricLrngData_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
FricLrngData_SetRamBlockStatus.Arguments(1).EngMin = 0;
FricLrngData_SetRamBlockStatus.Arguments(1).EngMax = 1;
FricLrngData_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
FricLrngData_SetRamBlockStatus.Arguments(1).Direction = 'In';
FricLrngData_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
FricLrngData_SetRamBlockStatus.Arguments(1).Description = [...
  'Block Changed Argument for specifying NVM updates'];


FricNonLrngData_SetRamBlockStatus = DataDict.Client;
FricNonLrngData_SetRamBlockStatus.CallLocation = {'SetFricLrngData'};
FricNonLrngData_SetRamBlockStatus.Description = [...
  'Set Ram Block Status for Friction Non-Learning Data NVM'];
FricNonLrngData_SetRamBlockStatus.Return = DataDict.CSReturn;
FricNonLrngData_SetRamBlockStatus.Return.Type = 'Standard';
FricNonLrngData_SetRamBlockStatus.Return.Min = 0;
FricNonLrngData_SetRamBlockStatus.Return.Max = 1;
FricNonLrngData_SetRamBlockStatus.Return.TestTolerance = 0;
FricNonLrngData_SetRamBlockStatus.Return.Description = 'Return type:true or false';
FricNonLrngData_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
FricNonLrngData_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
FricNonLrngData_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
FricNonLrngData_SetRamBlockStatus.Arguments(1).EngMin = 0;
FricNonLrngData_SetRamBlockStatus.Arguments(1).EngMax = 1;
FricNonLrngData_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
FricNonLrngData_SetRamBlockStatus.Arguments(1).Direction = 'In';
FricNonLrngData_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
FricNonLrngData_SetRamBlockStatus.Arguments(1).Description = [...
  'Block Changed Argument for specifying NVM updates'];


GetNtcQlfrSts = DataDict.Client;
GetNtcQlfrSts.CallLocation = {'SysFricLrngPer1'};
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
GetRefTmr100MicroSec32bit.CallLocation = {'SysFricLrngInit1','SysFricLrngPer1'};
GetRefTmr100MicroSec32bit.Description = 'Get Current Timer';
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
GetRefTmr100MicroSec32bit.Arguments(1).Description = [...
  'Current Timer Value in micro seconds'];


GetTiSpan100MicroSec32bit = DataDict.Client;
GetTiSpan100MicroSec32bit.CallLocation = {'SysFricLrngPer1'};
GetTiSpan100MicroSec32bit.Description = [...
  'Span Time for calculating Elapsed time'];
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
GetTiSpan100MicroSec32bit.Arguments(1).Description = 'Reference Time';
GetTiSpan100MicroSec32bit.Arguments(2) = DataDict.CSArguments;
GetTiSpan100MicroSec32bit.Arguments(2).Name = 'TiSpan';
GetTiSpan100MicroSec32bit.Arguments(2).EngDT = dt.u32;
GetTiSpan100MicroSec32bit.Arguments(2).EngMin = 0;
GetTiSpan100MicroSec32bit.Arguments(2).EngMax = 4294967295;
GetTiSpan100MicroSec32bit.Arguments(2).TestTolerance = 999;
GetTiSpan100MicroSec32bit.Arguments(2).Units = 'Cnt';
GetTiSpan100MicroSec32bit.Arguments(2).Direction = 'Out';
GetTiSpan100MicroSec32bit.Arguments(2).InitRowCol = [1  1];
GetTiSpan100MicroSec32bit.Arguments(2).Description = 'Elapsed Time';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'SysFricLrngPer1'};
SetNtcSts.Description = 'Set NTC';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'None';
SetNtcSts.Return.Min = [];
SetNtcSts.Return.Max = [];
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'NTC Number information';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'Parameter Bit corresponding to NTC';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = [...
  'Status of NTC:PASSED,FAILED, PREPASSED or PREFAILED'];
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'Debounce Step';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
AssiMechT = DataDict.IpSignal;
AssiMechT.LongName = 'Assist Mechanism Temperature';
AssiMechT.Description = 'Assist Mech Temperature';
AssiMechT.DocUnits = 'DegCgrd';
AssiMechT.EngDT = dt.float32;
AssiMechT.EngInit = 0;
AssiMechT.EngMin = -50;
AssiMechT.EngMax = 150;
AssiMechT.ReadIn = {'SysFricLrngPer1'};
AssiMechT.ReadType = 'Rte';


FricLrngCustEna = DataDict.IpSignal;
FricLrngCustEna.LongName = 'Friction Learning Customer Enable';
FricLrngCustEna.Description = 'Friction Learning Customer Enable';
FricLrngCustEna.DocUnits = 'Cnt';
FricLrngCustEna.EngDT = dt.lgc;
FricLrngCustEna.EngInit = 1;
FricLrngCustEna.EngMin = 0;
FricLrngCustEna.EngMax = 1;
FricLrngCustEna.ReadIn = {'SysFricLrngPer1'};
FricLrngCustEna.ReadType = 'Rte';


FricLrngDi = DataDict.IpSignal;
FricLrngDi.LongName = 'Friction Learning Disable';
FricLrngDi.Description = 'Friction Learning Disable';
FricLrngDi.DocUnits = 'Cnt';
FricLrngDi.EngDT = dt.lgc;
FricLrngDi.EngInit = 0;
FricLrngDi.EngMin = 0;
FricLrngDi.EngMax = 1;
FricLrngDi.ReadIn = {'SysFricLrngPer1'};
FricLrngDi.ReadType = 'Rte';


HwAg = DataDict.IpSignal;
HwAg.LongName = 'Handwheel Angle';
HwAg.Description = 'Handwheel Angle';
HwAg.DocUnits = 'HwDeg';
HwAg.EngDT = dt.float32;
HwAg.EngInit = 0;
HwAg.EngMin = -1440;
HwAg.EngMax = 1440;
HwAg.ReadIn = {'SysFricLrngPer1'};
HwAg.ReadType = 'Rte';


HwAgAuthy = DataDict.IpSignal;
HwAgAuthy.LongName = 'Handwheel Angle Authority';
HwAgAuthy.Description = 'Handwheel Angle Authority';
HwAgAuthy.DocUnits = 'Uls';
HwAgAuthy.EngDT = dt.float32;
HwAgAuthy.EngInit = 0;
HwAgAuthy.EngMin = 0;
HwAgAuthy.EngMax = 1;
HwAgAuthy.ReadIn = {'SysFricLrngPer1'};
HwAgAuthy.ReadType = 'Rte';


HwTq = DataDict.IpSignal;
HwTq.LongName = 'Handwheel Torque';
HwTq.Description = 'Handwheel Torque';
HwTq.DocUnits = 'HwNwtMtr';
HwTq.EngDT = dt.float32;
HwTq.EngInit = 0;
HwTq.EngMin = -10;
HwTq.EngMax = 10;
HwTq.ReadIn = {'SysFricLrngPer1'};
HwTq.ReadType = 'Rte';


HwVel = DataDict.IpSignal;
HwVel.LongName = 'Handwheel Velocity';
HwVel.Description = 'Handwheel Velocity';
HwVel.DocUnits = 'HwRadPerSec';
HwVel.EngDT = dt.float32;
HwVel.EngInit = 0;
HwVel.EngMin = -42;
HwVel.EngMax = 42;
HwVel.ReadIn = {'SysFricLrngPer1'};
HwVel.ReadType = 'Rte';


MotTqCmdCrf = DataDict.IpSignal;
MotTqCmdCrf.LongName = 'Motor Torque Command CRF';
MotTqCmdCrf.Description = 'Motor Torque Command CRF';
MotTqCmdCrf.DocUnits = 'MotNwtMtr';
MotTqCmdCrf.EngDT = dt.float32;
MotTqCmdCrf.EngInit = 0;
MotTqCmdCrf.EngMin = -8.8;
MotTqCmdCrf.EngMax = 8.8;
MotTqCmdCrf.ReadIn = {'SysFricLrngPer1'};
MotTqCmdCrf.ReadType = 'Rte';


VehLatA = DataDict.IpSignal;
VehLatA.LongName = 'Vehicle Lateral Acceleration';
VehLatA.Description = 'Vehicle Lateral Acceleration';
VehLatA.DocUnits = 'MtrPerSecSqd';
VehLatA.EngDT = dt.float32;
VehLatA.EngInit = 0;
VehLatA.EngMin = -10;
VehLatA.EngMax = 10;
VehLatA.ReadIn = {'SysFricLrngPer1'};
VehLatA.ReadType = 'Rte';


VehSpd = DataDict.IpSignal;
VehSpd.LongName = 'Vehicle Speed';
VehSpd.Description = 'Vehicle Speed';
VehSpd.DocUnits = 'Kph';
VehSpd.EngDT = dt.float32;
VehSpd.EngInit = 0;
VehSpd.EngMin = 0;
VehSpd.EngMax = 511;
VehSpd.ReadIn = {'SysFricLrngPer1'};
VehSpd.ReadType = 'Rte';


VehSpdVld = DataDict.IpSignal;
VehSpdVld.LongName = 'Vehicle Speed Valid';
VehSpdVld.Description = 'Vehicle Speed Valid';
VehSpdVld.DocUnits = 'Cnt';
VehSpdVld.EngDT = dt.lgc;
VehSpdVld.EngInit = 0;
VehSpdVld.EngMin = 0;
VehSpdVld.EngMax = 1;
VehSpdVld.ReadIn = {'SysFricLrngPer1'};
VehSpdVld.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
MaxLrndFric = DataDict.OpSignal;
MaxLrndFric.LongName = 'Maximum Learned Friction';
MaxLrndFric.Description = [...
  'Output for Maximum of Learned Friction values'];
MaxLrndFric.DocUnits = 'HwNwtMtr';
MaxLrndFric.SwcShoName = 'SysFricLrng';
MaxLrndFric.EngDT = dt.float32;
MaxLrndFric.EngInit = 0;
MaxLrndFric.EngMin = 0;
MaxLrndFric.EngMax = 254;
MaxLrndFric.TestTolerance = 0.03125;
MaxLrndFric.WrittenIn = {'SysFricLrngPer1'};
MaxLrndFric.WriteType = 'Rte';


SysFricEstimd = DataDict.OpSignal;
SysFricEstimd.LongName = 'System Friction Estimated';
SysFricEstimd.Description = [...
  'Output for estimated System Friction'];
SysFricEstimd.DocUnits = 'HwNwtMtr';
SysFricEstimd.SwcShoName = 'SysFricLrng';
SysFricEstimd.EngDT = dt.float32;
SysFricEstimd.EngInit = 0;
SysFricEstimd.EngMin = 0;
SysFricEstimd.EngMax = 20;
SysFricEstimd.TestTolerance = 0.03125;
SysFricEstimd.WrittenIn = {'SysFricLrngPer1'};
SysFricEstimd.WriteType = 'Rte';


SysFricOffs = DataDict.OpSignal;
SysFricOffs.LongName = 'System Friction Offset';
SysFricOffs.Description = [...
  'Output for the System Friction Learning'];
SysFricOffs.DocUnits = 'HwNwtMtr';
SysFricOffs.SwcShoName = 'SysFricLrng';
SysFricOffs.EngDT = dt.float32;
SysFricOffs.EngInit = 0;
SysFricOffs.EngMin = -5;
SysFricOffs.EngMax = 5;
SysFricOffs.TestTolerance = 0.03125;
SysFricOffs.WrittenIn = {'SysFricLrngInit1','SysFricLrngPer1'};
SysFricOffs.WriteType = 'Rte';


SysSatnFricEstimd = DataDict.OpSignal;
SysSatnFricEstimd.LongName = 'System Saturation Friction Estimated';
SysSatnFricEstimd.Description = [...
  'Output for estimated System Saturation Friction'];
SysSatnFricEstimd.DocUnits = 'HwNwtMtr';
SysSatnFricEstimd.SwcShoName = 'SysFricLrng';
SysSatnFricEstimd.EngDT = dt.float32;
SysSatnFricEstimd.EngInit = 0;
SysSatnFricEstimd.EngMin = 0;
SysSatnFricEstimd.EngMax = 20;
SysSatnFricEstimd.TestTolerance = 0.03125;
SysSatnFricEstimd.WrittenIn = {'SysFricLrngPer1'};
SysSatnFricEstimd.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
SysFricLrngAvrgFricFrq = DataDict.Calibration;
SysFricLrngAvrgFricFrq.LongName = 'System Friction Learning Average Friction Frequency';
SysFricLrngAvrgFricFrq.Description = [...
  'Cutoff Frequency to Calculate Average Friction Through Lowpass Filter'];
SysFricLrngAvrgFricFrq.DocUnits = 'Hz';
SysFricLrngAvrgFricFrq.EngDT = dt.float32;
SysFricLrngAvrgFricFrq.EngVal = 0.1;
SysFricLrngAvrgFricFrq.EngMin = 6.1e-05;
SysFricLrngAvrgFricFrq.EngMax = 4;
SysFricLrngAvrgFricFrq.Cardinality = 'Inin';
SysFricLrngAvrgFricFrq.CustomerVisible = false;
SysFricLrngAvrgFricFrq.Online = false;
SysFricLrngAvrgFricFrq.Impact = 'H';
SysFricLrngAvrgFricFrq.TuningOwner = 'CSE';
SysFricLrngAvrgFricFrq.GraphLink = {''};
SysFricLrngAvrgFricFrq.Monotony = 'None';
SysFricLrngAvrgFricFrq.MaxGrad = 2.99;
SysFricLrngAvrgFricFrq.PortName = 'SysFricLrngAvrgFricFrq';


SysFricLrngBasLineEolFric = DataDict.Calibration;
SysFricLrngBasLineEolFric.LongName = 'System Friction Learning Base Line EOL Friction';
SysFricLrngBasLineEolFric.Description = [...
  'Upper limit of EOL friction difference'];
SysFricLrngBasLineEolFric.DocUnits = 'HwNwtMtr';
SysFricLrngBasLineEolFric.EngDT = dt.float32;
SysFricLrngBasLineEolFric.EngVal = 0;
SysFricLrngBasLineEolFric.EngMin = 0;
SysFricLrngBasLineEolFric.EngMax = 127;
SysFricLrngBasLineEolFric.Cardinality = 'Inin';
SysFricLrngBasLineEolFric.CustomerVisible = false;
SysFricLrngBasLineEolFric.Online = false;
SysFricLrngBasLineEolFric.Impact = 'H';
SysFricLrngBasLineEolFric.TuningOwner = 'CSE';
SysFricLrngBasLineEolFric.GraphLink = {''};
SysFricLrngBasLineEolFric.Monotony = 'None';
SysFricLrngBasLineEolFric.MaxGrad = 127;
SysFricLrngBasLineEolFric.PortName = 'SysFricLrngBasLineEolFric';


SysFricLrngBasLineFric = DataDict.Calibration;
SysFricLrngBasLineFric.LongName = 'System Friction Learning Base Line Friction';
SysFricLrngBasLineFric.Description = [...
  'Weighted average hysteresis (friction) for each vehicle speed.  Baseli' ...
  'ne (target) values'];
SysFricLrngBasLineFric.DocUnits = 'HwNwtMtr';
SysFricLrngBasLineFric.EngDT = dt.float32;
SysFricLrngBasLineFric.EngVal =  ...
   [0                0                0                0];
SysFricLrngBasLineFric.EngMin = 0;
SysFricLrngBasLineFric.EngMax = 127;
SysFricLrngBasLineFric.Cardinality = 'Inin';
SysFricLrngBasLineFric.CustomerVisible = false;
SysFricLrngBasLineFric.Online = false;
SysFricLrngBasLineFric.Impact = 'H';
SysFricLrngBasLineFric.TuningOwner = 'CSE';
SysFricLrngBasLineFric.GraphLink = {''};
SysFricLrngBasLineFric.Monotony = 'None';
SysFricLrngBasLineFric.MaxGrad = 127;
SysFricLrngBasLineFric.PortName = 'SysFricLrngBasLineFric';


SysFricLrngBasLineHys = DataDict.Calibration;
SysFricLrngBasLineHys.LongName = 'System Friction Learning Base Line Hystersis';
SysFricLrngBasLineHys.Description = 'Hysteresis loop Y-values';
SysFricLrngBasLineHys.DocUnits = 'HwNwtMtr';
SysFricLrngBasLineHys.EngDT = dt.float32;
SysFricLrngBasLineHys.EngVal =  ...
   [0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0];
SysFricLrngBasLineHys.EngMin = -20;
SysFricLrngBasLineHys.EngMax = 20;
SysFricLrngBasLineHys.Cardinality = 'Inin';
SysFricLrngBasLineHys.CustomerVisible = false;
SysFricLrngBasLineHys.Online = false;
SysFricLrngBasLineHys.Impact = 'H';
SysFricLrngBasLineHys.TuningOwner = 'CSE';
SysFricLrngBasLineHys.GraphLink = {''};
SysFricLrngBasLineHys.Monotony = 'None';
SysFricLrngBasLineHys.MaxGrad = 40;
SysFricLrngBasLineHys.PortName = 'SysFricLrngBasLineHys';


SysFricLrngBasLineRngCntr = DataDict.Calibration;
SysFricLrngBasLineRngCntr.LongName = 'System Friction Learning Base Line Range Counter';
SysFricLrngBasLineRngCntr.Description = [...
  'Hysteresis loop segment counter for calculating weighted averages'];
SysFricLrngBasLineRngCntr.DocUnits = 'Cnt';
SysFricLrngBasLineRngCntr.EngDT = dt.u16;
SysFricLrngBasLineRngCntr.EngVal =  ...
   [0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0];
SysFricLrngBasLineRngCntr.EngMin = 0;
SysFricLrngBasLineRngCntr.EngMax = 65534;
SysFricLrngBasLineRngCntr.Cardinality = 'Inin';
SysFricLrngBasLineRngCntr.CustomerVisible = false;
SysFricLrngBasLineRngCntr.Online = false;
SysFricLrngBasLineRngCntr.Impact = 'H';
SysFricLrngBasLineRngCntr.TuningOwner = 'CSE';
SysFricLrngBasLineRngCntr.GraphLink = {''};
SysFricLrngBasLineRngCntr.Monotony = 'None';
SysFricLrngBasLineRngCntr.MaxGrad = 65534;
SysFricLrngBasLineRngCntr.PortName = 'SysFricLrngBasLineRngCntr';


SysFricLrngDataPrepLpFilFrq = DataDict.Calibration;
SysFricLrngDataPrepLpFilFrq.LongName = 'System Friction Learning Data Preparation Lowpass Filter Frequency';
SysFricLrngDataPrepLpFilFrq.Description = [...
  'Measurement data preparation low pass filter cutoff frequency'];
SysFricLrngDataPrepLpFilFrq.DocUnits = 'Hz';
SysFricLrngDataPrepLpFilFrq.EngDT = dt.float32;
SysFricLrngDataPrepLpFilFrq.EngVal = 30;
SysFricLrngDataPrepLpFilFrq.EngMin = 1;
SysFricLrngDataPrepLpFilFrq.EngMax = 100;
SysFricLrngDataPrepLpFilFrq.Cardinality = 'Inin';
SysFricLrngDataPrepLpFilFrq.CustomerVisible = false;
SysFricLrngDataPrepLpFilFrq.Online = false;
SysFricLrngDataPrepLpFilFrq.Impact = 'H';
SysFricLrngDataPrepLpFilFrq.TuningOwner = 'CSE';
SysFricLrngDataPrepLpFilFrq.GraphLink = {''};
SysFricLrngDataPrepLpFilFrq.Monotony = 'None';
SysFricLrngDataPrepLpFilFrq.MaxGrad = 99;
SysFricLrngDataPrepLpFilFrq.PortName = 'SysFricLrngDataPrepLpFilFrq';


SysFricLrngDebStep = DataDict.Calibration;
SysFricLrngDebStep.LongName = 'System FrictionLearning De-Bounce Step';
SysFricLrngDebStep.Description = [...
  'Debounce step count is determined based on delay time needed beforeset' ...
  'ting NTC to FAIL state.'];
SysFricLrngDebStep.DocUnits = 'Cnt';
SysFricLrngDebStep.EngDT = dt.u16;
SysFricLrngDebStep.EngVal = 656;
SysFricLrngDebStep.EngMin = 0;
SysFricLrngDebStep.EngMax = 8196;
SysFricLrngDebStep.Cardinality = 'Inin';
SysFricLrngDebStep.CustomerVisible = false;
SysFricLrngDebStep.Online = false;
SysFricLrngDebStep.Impact = 'H';
SysFricLrngDebStep.TuningOwner = 'CSE';
SysFricLrngDebStep.GraphLink = {''};
SysFricLrngDebStep.Monotony = 'None';
SysFricLrngDebStep.MaxGrad = Inf;
SysFricLrngDebStep.PortName = 'SysFricLrngDebStep';


SysFricLrngEolFricDifHiLim = DataDict.Calibration;
SysFricLrngEolFricDifHiLim.LongName = 'System Friction Learning EOL Friction Difference High Limit';
SysFricLrngEolFricDifHiLim.Description = [...
  'Upper limit of EOL friction difference'];
SysFricLrngEolFricDifHiLim.DocUnits = 'HwNwtMtr';
SysFricLrngEolFricDifHiLim.EngDT = dt.float32;
SysFricLrngEolFricDifHiLim.EngVal = 1;
SysFricLrngEolFricDifHiLim.EngMin = -5;
SysFricLrngEolFricDifHiLim.EngMax = 5;
SysFricLrngEolFricDifHiLim.Cardinality = 'Inin';
SysFricLrngEolFricDifHiLim.CustomerVisible = false;
SysFricLrngEolFricDifHiLim.Online = false;
SysFricLrngEolFricDifHiLim.Impact = 'H';
SysFricLrngEolFricDifHiLim.TuningOwner = 'CSE';
SysFricLrngEolFricDifHiLim.GraphLink = {''};
SysFricLrngEolFricDifHiLim.Monotony = 'None';
SysFricLrngEolFricDifHiLim.MaxGrad = 10;
SysFricLrngEolFricDifHiLim.PortName = 'SysFricLrngEolFricDifHiLim';


SysFricLrngEolFricDifLoLim = DataDict.Calibration;
SysFricLrngEolFricDifLoLim.LongName = 'System Friction Learning EOL Friction Difference Low Limit';
SysFricLrngEolFricDifLoLim.Description = [...
  'Lower limit of EOL friction difference'];
SysFricLrngEolFricDifLoLim.DocUnits = 'HwNwtMtr';
SysFricLrngEolFricDifLoLim.EngDT = dt.float32;
SysFricLrngEolFricDifLoLim.EngVal = -1;
SysFricLrngEolFricDifLoLim.EngMin = -5;
SysFricLrngEolFricDifLoLim.EngMax = 5;
SysFricLrngEolFricDifLoLim.Cardinality = 'Inin';
SysFricLrngEolFricDifLoLim.CustomerVisible = false;
SysFricLrngEolFricDifLoLim.Online = false;
SysFricLrngEolFricDifLoLim.Impact = 'H';
SysFricLrngEolFricDifLoLim.TuningOwner = 'CSE';
SysFricLrngEolFricDifLoLim.GraphLink = {''};
SysFricLrngEolFricDifLoLim.Monotony = 'None';
SysFricLrngEolFricDifLoLim.MaxGrad = 10;
SysFricLrngEolFricDifLoLim.PortName = 'SysFricLrngEolFricDifLoLim';


SysFricLrngEolFricDifScagFac = DataDict.Calibration;
SysFricLrngEolFricDifScagFac.LongName = 'System Friction Learning EOL Friction Difference Scaling Factor';
SysFricLrngEolFricDifScagFac.Description = [...
  'Scaling factor of EOL friction difference between particular gear and ' ...
  'baseline gear to initialize the learned friction values.'];
SysFricLrngEolFricDifScagFac.DocUnits = 'Uls';
SysFricLrngEolFricDifScagFac.EngDT = dt.float32;
SysFricLrngEolFricDifScagFac.EngVal = 0.8;
SysFricLrngEolFricDifScagFac.EngMin = 0;
SysFricLrngEolFricDifScagFac.EngMax = 5;
SysFricLrngEolFricDifScagFac.Cardinality = 'Inin';
SysFricLrngEolFricDifScagFac.CustomerVisible = false;
SysFricLrngEolFricDifScagFac.Online = false;
SysFricLrngEolFricDifScagFac.Impact = 'H';
SysFricLrngEolFricDifScagFac.TuningOwner = 'CSE';
SysFricLrngEolFricDifScagFac.GraphLink = {''};
SysFricLrngEolFricDifScagFac.Monotony = 'None';
SysFricLrngEolFricDifScagFac.MaxGrad = 5;
SysFricLrngEolFricDifScagFac.PortName = 'SysFricLrngEolFricDifScagFac';


SysFricLrngFricChgWght = DataDict.Calibration;
SysFricLrngFricChgWght.LongName = 'System Friction Learning Friction Change Weight';
SysFricLrngFricChgWght.Description = [...
  'Weight factor of the vehicle speed dependent frictions'];
SysFricLrngFricChgWght.DocUnits = 'Uls';
SysFricLrngFricChgWght.EngDT = dt.float32;
SysFricLrngFricChgWght.EngVal =  ...
   [1                1                1                1];
SysFricLrngFricChgWght.EngMin = 0;
SysFricLrngFricChgWght.EngMax = 1;
SysFricLrngFricChgWght.Cardinality = 'Inin';
SysFricLrngFricChgWght.CustomerVisible = false;
SysFricLrngFricChgWght.Online = false;
SysFricLrngFricChgWght.Impact = 'H';
SysFricLrngFricChgWght.TuningOwner = 'CSE';
SysFricLrngFricChgWght.GraphLink = {''};
SysFricLrngFricChgWght.Monotony = 'None';
SysFricLrngFricChgWght.MaxGrad = 1;
SysFricLrngFricChgWght.PortName = 'SysFricLrngFricChgWght';


SysFricLrngFricDiagcThd = DataDict.Calibration;
SysFricLrngFricDiagcThd.LongName = 'System Friction Learning Friction Diagnostic Threshold';
SysFricLrngFricDiagcThd.Description = [...
  'Threshold to set high friction diagnostic flag'];
SysFricLrngFricDiagcThd.DocUnits = 'HwNwtMtr';
SysFricLrngFricDiagcThd.EngDT = dt.float32;
SysFricLrngFricDiagcThd.EngVal = 15;
SysFricLrngFricDiagcThd.EngMin = 0;
SysFricLrngFricDiagcThd.EngMax = 127;
SysFricLrngFricDiagcThd.Cardinality = 'Inin';
SysFricLrngFricDiagcThd.CustomerVisible = false;
SysFricLrngFricDiagcThd.Online = false;
SysFricLrngFricDiagcThd.Impact = 'H';
SysFricLrngFricDiagcThd.TuningOwner = 'CSE';
SysFricLrngFricDiagcThd.GraphLink = {''};
SysFricLrngFricDiagcThd.Monotony = 'None';
SysFricLrngFricDiagcThd.MaxGrad = 127;
SysFricLrngFricDiagcThd.PortName = 'SysFricLrngFricDiagcThd';


SysFricLrngFricHysHwAgPt = DataDict.Calibration;
SysFricLrngFricHysHwAgPt.LongName = 'System Friction Learning Friction Hysteresis Hnadwheel Angle Points';
SysFricLrngFricHysHwAgPt.Description = 'Handwheel angle table';
SysFricLrngFricHysHwAgPt.DocUnits = 'HwDeg';
SysFricLrngFricHysHwAgPt.EngDT = dt.float32;
SysFricLrngFricHysHwAgPt.EngVal =  ...
   [-15               -5                5               15];
SysFricLrngFricHysHwAgPt.EngMin = -1000;
SysFricLrngFricHysHwAgPt.EngMax = 1000;
SysFricLrngFricHysHwAgPt.Cardinality = 'Inin';
SysFricLrngFricHysHwAgPt.CustomerVisible = false;
SysFricLrngFricHysHwAgPt.Online = false;
SysFricLrngFricHysHwAgPt.Impact = 'H';
SysFricLrngFricHysHwAgPt.TuningOwner = 'CSE';
SysFricLrngFricHysHwAgPt.GraphLink = {''};
SysFricLrngFricHysHwAgPt.Monotony = 'Strictly_Increasing';
SysFricLrngFricHysHwAgPt.MaxGrad = 2000;
SysFricLrngFricHysHwAgPt.PortName = 'SysFricLrngFricHysHwAgPt';


SysFricLrngFricOffs = DataDict.Calibration;
SysFricLrngFricOffs.LongName = 'System Friction Learning Friction Offset';
SysFricLrngFricOffs.Description = 'Friction Offset';
SysFricLrngFricOffs.DocUnits = 'HwNwtMtr';
SysFricLrngFricOffs.EngDT = dt.float32;
SysFricLrngFricOffs.EngVal = 0;
SysFricLrngFricOffs.EngMin = -5;
SysFricLrngFricOffs.EngMax = 5;
SysFricLrngFricOffs.Cardinality = 'Inin';
SysFricLrngFricOffs.CustomerVisible = false;
SysFricLrngFricOffs.Online = false;
SysFricLrngFricOffs.Impact = 'H';
SysFricLrngFricOffs.TuningOwner = 'CSE';
SysFricLrngFricOffs.GraphLink = {''};
SysFricLrngFricOffs.Monotony = 'None';
SysFricLrngFricOffs.MaxGrad = Inf;
SysFricLrngFricOffs.PortName = 'SysFricLrngFricOffs';


SysFricLrngFricOffsHiLim = DataDict.Calibration;
SysFricLrngFricOffsHiLim.LongName = 'System Friction Learning Friction Offset High Limit';
SysFricLrngFricOffsHiLim.Description = [...
  'Maximum allowable value of function output'];
SysFricLrngFricOffsHiLim.DocUnits = 'HwNwtMtr';
SysFricLrngFricOffsHiLim.EngDT = dt.float32;
SysFricLrngFricOffsHiLim.EngVal = 1;
SysFricLrngFricOffsHiLim.EngMin = -5;
SysFricLrngFricOffsHiLim.EngMax = 5;
SysFricLrngFricOffsHiLim.Cardinality = 'Inin';
SysFricLrngFricOffsHiLim.CustomerVisible = false;
SysFricLrngFricOffsHiLim.Online = false;
SysFricLrngFricOffsHiLim.Impact = 'H';
SysFricLrngFricOffsHiLim.TuningOwner = 'CSE';
SysFricLrngFricOffsHiLim.GraphLink = {''};
SysFricLrngFricOffsHiLim.Monotony = 'None';
SysFricLrngFricOffsHiLim.MaxGrad = 10;
SysFricLrngFricOffsHiLim.PortName = 'SysFricLrngFricOffsHiLim';


SysFricLrngFricOffsLoLim = DataDict.Calibration;
SysFricLrngFricOffsLoLim.LongName = 'System Friction Learning Friction Offset Low Limit';
SysFricLrngFricOffsLoLim.Description = [...
  'Minimum allowable value of function output'];
SysFricLrngFricOffsLoLim.DocUnits = 'HwNwtMtr';
SysFricLrngFricOffsLoLim.EngDT = dt.float32;
SysFricLrngFricOffsLoLim.EngVal = -1;
SysFricLrngFricOffsLoLim.EngMin = -5;
SysFricLrngFricOffsLoLim.EngMax = 5;
SysFricLrngFricOffsLoLim.Cardinality = 'Inin';
SysFricLrngFricOffsLoLim.CustomerVisible = false;
SysFricLrngFricOffsLoLim.Online = false;
SysFricLrngFricOffsLoLim.Impact = 'H';
SysFricLrngFricOffsLoLim.TuningOwner = 'CSE';
SysFricLrngFricOffsLoLim.GraphLink = {''};
SysFricLrngFricOffsLoLim.Monotony = 'None';
SysFricLrngFricOffsLoLim.MaxGrad = 10;
SysFricLrngFricOffsLoLim.PortName = 'SysFricLrngFricOffsLoLim';


SysFricLrngFricOffsLpFilFrq = DataDict.Calibration;
SysFricLrngFricOffsLpFilFrq.LongName = 'System Friction Learning Friction Offset Low Pass Filter Frequency';
SysFricLrngFricOffsLpFilFrq.Description = [...
  'Friction change blending low pass filter cutoff frequency'];
SysFricLrngFricOffsLpFilFrq.DocUnits = 'Hz';
SysFricLrngFricOffsLpFilFrq.EngDT = dt.float32;
SysFricLrngFricOffsLpFilFrq.EngVal = 4;
SysFricLrngFricOffsLpFilFrq.EngMin = 6.1e-05;
SysFricLrngFricOffsLpFilFrq.EngMax = 4;
SysFricLrngFricOffsLpFilFrq.Cardinality = 'Inin';
SysFricLrngFricOffsLpFilFrq.CustomerVisible = false;
SysFricLrngFricOffsLpFilFrq.Online = false;
SysFricLrngFricOffsLpFilFrq.Impact = 'H';
SysFricLrngFricOffsLpFilFrq.TuningOwner = 'CSE';
SysFricLrngFricOffsLpFilFrq.GraphLink = {''};
SysFricLrngFricOffsLpFilFrq.Monotony = 'None';
SysFricLrngFricOffsLpFilFrq.MaxGrad = 2.99;
SysFricLrngFricOffsLpFilFrq.PortName = 'SysFricLrngFricOffsLpFilFrq';


SysFricLrngGain = DataDict.Calibration;
SysFricLrngGain.LongName = 'System Friction Learning Gain';
SysFricLrngGain.Description = 'Learning gain';
SysFricLrngGain.DocUnits = 'Uls';
SysFricLrngGain.EngDT = dt.float32;
SysFricLrngGain.EngVal = 0.2;
SysFricLrngGain.EngMin = 0;
SysFricLrngGain.EngMax = 2;
SysFricLrngGain.Cardinality = 'Inin';
SysFricLrngGain.CustomerVisible = false;
SysFricLrngGain.Online = false;
SysFricLrngGain.Impact = 'H';
SysFricLrngGain.TuningOwner = 'CSE';
SysFricLrngGain.GraphLink = {''};
SysFricLrngGain.Monotony = 'None';
SysFricLrngGain.MaxGrad = 2;
SysFricLrngGain.PortName = 'SysFricLrngGain';


SysFricLrngHiFricDebStep = DataDict.Calibration;
SysFricLrngHiFricDebStep.LongName = 'System Friction Learning High Friction De-Bounce Step';
SysFricLrngHiFricDebStep.Description = [...
  'Debounce step count is determined based on delay time needed beforeset' ...
  'ting NTC to FAIL state.'];
SysFricLrngHiFricDebStep.DocUnits = 'Cnt';
SysFricLrngHiFricDebStep.EngDT = dt.u16;
SysFricLrngHiFricDebStep.EngVal = 656;
SysFricLrngHiFricDebStep.EngMin = 0;
SysFricLrngHiFricDebStep.EngMax = 8196;
SysFricLrngHiFricDebStep.Cardinality = 'Inin';
SysFricLrngHiFricDebStep.CustomerVisible = false;
SysFricLrngHiFricDebStep.Online = false;
SysFricLrngHiFricDebStep.Impact = 'H';
SysFricLrngHiFricDebStep.TuningOwner = 'CSE';
SysFricLrngHiFricDebStep.GraphLink = {''};
SysFricLrngHiFricDebStep.Monotony = 'None';
SysFricLrngHiFricDebStep.MaxGrad = Inf;
SysFricLrngHiFricDebStep.PortName = 'SysFricLrngHiFricDebStep';


SysFricLrngHiFricDiagcThd = DataDict.Calibration;
SysFricLrngHiFricDiagcThd.LongName = 'System Friction Learning High Friction Diagnostic Threshold';
SysFricLrngHiFricDiagcThd.Description = [...
  'Secondary Threshold to set extremely high friction diagnostic flag'];
SysFricLrngHiFricDiagcThd.DocUnits = 'HwNwtMtr';
SysFricLrngHiFricDiagcThd.EngDT = dt.float32;
SysFricLrngHiFricDiagcThd.EngVal = 30;
SysFricLrngHiFricDiagcThd.EngMin = 0;
SysFricLrngHiFricDiagcThd.EngMax = 127;
SysFricLrngHiFricDiagcThd.Cardinality = 'Inin';
SysFricLrngHiFricDiagcThd.CustomerVisible = false;
SysFricLrngHiFricDiagcThd.Online = false;
SysFricLrngHiFricDiagcThd.Impact = 'H';
SysFricLrngHiFricDiagcThd.TuningOwner = 'CSE';
SysFricLrngHiFricDiagcThd.GraphLink = {''};
SysFricLrngHiFricDiagcThd.Monotony = 'None';
SysFricLrngHiFricDiagcThd.MaxGrad = 127;
SysFricLrngHiFricDiagcThd.PortName = 'SysFricLrngHiFricDiagcThd';


SysFricLrngHwPosnAuthyThd = DataDict.Calibration;
SysFricLrngHwPosnAuthyThd.LongName = 'System Friction Learning Handwheel Position Authority Threshold';
SysFricLrngHwPosnAuthyThd.Description = [...
  'Hand wheel position authority constraint'];
SysFricLrngHwPosnAuthyThd.DocUnits = 'Uls';
SysFricLrngHwPosnAuthyThd.EngDT = dt.float32;
SysFricLrngHwPosnAuthyThd.EngVal = 0.98;
SysFricLrngHwPosnAuthyThd.EngMin = 0;
SysFricLrngHwPosnAuthyThd.EngMax = 1;
SysFricLrngHwPosnAuthyThd.Cardinality = 'Inin';
SysFricLrngHwPosnAuthyThd.CustomerVisible = false;
SysFricLrngHwPosnAuthyThd.Online = false;
SysFricLrngHwPosnAuthyThd.Impact = 'H';
SysFricLrngHwPosnAuthyThd.TuningOwner = 'CSE';
SysFricLrngHwPosnAuthyThd.GraphLink = {''};
SysFricLrngHwPosnAuthyThd.Monotony = 'None';
SysFricLrngHwPosnAuthyThd.MaxGrad = 1;
SysFricLrngHwPosnAuthyThd.PortName = 'SysFricLrngHwPosnAuthyThd';


SysFricLrngHwVelConstrLim = DataDict.Calibration;
SysFricLrngHwVelConstrLim.LongName = 'System Friction Learning Handwheel Velocity constraint Limit';
SysFricLrngHwVelConstrLim.Description = [...
  'threshold value of handwheel velocity constraint'];
SysFricLrngHwVelConstrLim.DocUnits = 'HwDegPerSec';
SysFricLrngHwVelConstrLim.EngDT = dt.float32;
SysFricLrngHwVelConstrLim.EngVal = 360;
SysFricLrngHwVelConstrLim.EngMin = 0;
SysFricLrngHwVelConstrLim.EngMax = 360;
SysFricLrngHwVelConstrLim.Cardinality = 'Inin';
SysFricLrngHwVelConstrLim.CustomerVisible = false;
SysFricLrngHwVelConstrLim.Online = false;
SysFricLrngHwVelConstrLim.Impact = 'H';
SysFricLrngHwVelConstrLim.TuningOwner = 'CSE';
SysFricLrngHwVelConstrLim.GraphLink = {''};
SysFricLrngHwVelConstrLim.Monotony = 'None';
SysFricLrngHwVelConstrLim.MaxGrad = 360;
SysFricLrngHwVelConstrLim.PortName = 'SysFricLrngHwVelConstrLim';


SysFricLrngHwVelHiLim = DataDict.Calibration;
SysFricLrngHwVelHiLim.LongName = 'System Friction Learning Handwheel Velocity High Limit';
SysFricLrngHwVelHiLim.Description = 'Maximum hand wheel velocity';
SysFricLrngHwVelHiLim.DocUnits = 'HwDegPerSec';
SysFricLrngHwVelHiLim.EngDT = dt.float32;
SysFricLrngHwVelHiLim.EngVal = 180;
SysFricLrngHwVelHiLim.EngMin = -600;
SysFricLrngHwVelHiLim.EngMax = 600;
SysFricLrngHwVelHiLim.Cardinality = 'Inin';
SysFricLrngHwVelHiLim.CustomerVisible = false;
SysFricLrngHwVelHiLim.Online = false;
SysFricLrngHwVelHiLim.Impact = 'H';
SysFricLrngHwVelHiLim.TuningOwner = 'CSE';
SysFricLrngHwVelHiLim.GraphLink = {''};
SysFricLrngHwVelHiLim.Monotony = 'None';
SysFricLrngHwVelHiLim.MaxGrad = 1200;
SysFricLrngHwVelHiLim.PortName = 'SysFricLrngHwVelHiLim';


SysFricLrngHwVelLoLim = DataDict.Calibration;
SysFricLrngHwVelLoLim.LongName = 'System Friction Learning Handwheel Velocity Low Limit';
SysFricLrngHwVelLoLim.Description = 'Minimum hand wheel velocity';
SysFricLrngHwVelLoLim.DocUnits = 'HwDegPerSec';
SysFricLrngHwVelLoLim.EngDT = dt.float32;
SysFricLrngHwVelLoLim.EngVal = 10;
SysFricLrngHwVelLoLim.EngMin = -600;
SysFricLrngHwVelLoLim.EngMax = 600;
SysFricLrngHwVelLoLim.Cardinality = 'Inin';
SysFricLrngHwVelLoLim.CustomerVisible = false;
SysFricLrngHwVelLoLim.Online = false;
SysFricLrngHwVelLoLim.Impact = 'H';
SysFricLrngHwVelLoLim.TuningOwner = 'CSE';
SysFricLrngHwVelLoLim.GraphLink = {''};
SysFricLrngHwVelLoLim.Monotony = 'None';
SysFricLrngHwVelLoLim.MaxGrad = 1200;
SysFricLrngHwVelLoLim.PortName = 'SysFricLrngHwVelLoLim';


SysFricLrngIgnCycFricChgLim = DataDict.Calibration;
SysFricLrngIgnCycFricChgLim.LongName = 'System Friction Learning Ignition Cycle Friction Change Limit';
SysFricLrngIgnCycFricChgLim.Description = [...
  'Allowable change in estimated friction between ignition cycles'];
SysFricLrngIgnCycFricChgLim.DocUnits = 'HwNwtMtr';
SysFricLrngIgnCycFricChgLim.EngDT = dt.float32;
SysFricLrngIgnCycFricChgLim.EngVal = 3;
SysFricLrngIgnCycFricChgLim.EngMin = 0;
SysFricLrngIgnCycFricChgLim.EngMax = 5;
SysFricLrngIgnCycFricChgLim.Cardinality = 'Inin';
SysFricLrngIgnCycFricChgLim.CustomerVisible = false;
SysFricLrngIgnCycFricChgLim.Online = false;
SysFricLrngIgnCycFricChgLim.Impact = 'H';
SysFricLrngIgnCycFricChgLim.TuningOwner = 'CSE';
SysFricLrngIgnCycFricChgLim.GraphLink = {''};
SysFricLrngIgnCycFricChgLim.Monotony = 'None';
SysFricLrngIgnCycFricChgLim.MaxGrad = 254;
SysFricLrngIgnCycFricChgLim.PortName = 'SysFricLrngIgnCycFricChgLim';


SysFricLrngIgnCycFricOffs = DataDict.Calibration;
SysFricLrngIgnCycFricOffs.LongName = 'System Friction Learning Ignition Cycle Friction Offset';
SysFricLrngIgnCycFricOffs.Description = [...
  'Allowable change in estimated friction between ignition cycles'];
SysFricLrngIgnCycFricOffs.DocUnits = 'HwNwtMtr';
SysFricLrngIgnCycFricOffs.EngDT = dt.float32;
SysFricLrngIgnCycFricOffs.EngVal = 3;
SysFricLrngIgnCycFricOffs.EngMin = 0;
SysFricLrngIgnCycFricOffs.EngMax = 5;
SysFricLrngIgnCycFricOffs.Cardinality = 'Inin';
SysFricLrngIgnCycFricOffs.CustomerVisible = false;
SysFricLrngIgnCycFricOffs.Online = false;
SysFricLrngIgnCycFricOffs.Impact = 'H';
SysFricLrngIgnCycFricOffs.TuningOwner = 'CSE';
SysFricLrngIgnCycFricOffs.GraphLink = {''};
SysFricLrngIgnCycFricOffs.Monotony = 'None';
SysFricLrngIgnCycFricOffs.MaxGrad = 254;
SysFricLrngIgnCycFricOffs.PortName = 'SysFricLrngIgnCycFricOffs';


SysFricLrngIvsTrsmRatX = DataDict.Calibration;
SysFricLrngIvsTrsmRatX.LongName = 'System Friction Learning Inverse Transmission Ratio X';
SysFricLrngIvsTrsmRatX.Description = [...
  'Inverse Transmission Ratio X Value for the linnear Table '];
SysFricLrngIvsTrsmRatX.DocUnits = 'HwDeg';
SysFricLrngIvsTrsmRatX.EngDT = dt.u11p5;
SysFricLrngIvsTrsmRatX.EngVal =  ...
   [0               30               60               90              120              180              270              360              450              540];
SysFricLrngIvsTrsmRatX.EngMin = 0;
SysFricLrngIvsTrsmRatX.EngMax = 1000;
SysFricLrngIvsTrsmRatX.Cardinality = 'Inin';
SysFricLrngIvsTrsmRatX.CustomerVisible = false;
SysFricLrngIvsTrsmRatX.Online = false;
SysFricLrngIvsTrsmRatX.Impact = 'H';
SysFricLrngIvsTrsmRatX.TuningOwner = 'CSE';
SysFricLrngIvsTrsmRatX.GraphLink = {''};
SysFricLrngIvsTrsmRatX.Monotony = 'Strictly_Increasing';
SysFricLrngIvsTrsmRatX.MaxGrad = 1000;
SysFricLrngIvsTrsmRatX.PortName = 'SysFricLrngIvsTrsmRatX';


SysFricLrngIvsTrsmRatY = DataDict.Calibration;
SysFricLrngIvsTrsmRatY.LongName = 'System Friction Learning Inverse Transmission Ratio Y';
SysFricLrngIvsTrsmRatY.Description = [...
  'Inverse Transmission Ratio Y Value for the linnear Table '];
SysFricLrngIvsTrsmRatY.DocUnits = 'HwNwtMtrPerMotNwtMtr';
SysFricLrngIvsTrsmRatY.EngDT = dt.u6p10;
SysFricLrngIvsTrsmRatY.EngVal =  ...
   [23.7             23.7             23.7             23.7             23.7             23.7             23.7             23.7             23.7             23.7];
SysFricLrngIvsTrsmRatY.EngMin = 0;
SysFricLrngIvsTrsmRatY.EngMax = 50;
SysFricLrngIvsTrsmRatY.Cardinality = 'Inin';
SysFricLrngIvsTrsmRatY.CustomerVisible = false;
SysFricLrngIvsTrsmRatY.Online = false;
SysFricLrngIvsTrsmRatY.Impact = 'H';
SysFricLrngIvsTrsmRatY.TuningOwner = 'CSE';
SysFricLrngIvsTrsmRatY.GraphLink = {''};
SysFricLrngIvsTrsmRatY.Monotony = 'None';
SysFricLrngIvsTrsmRatY.MaxGrad = 50;
SysFricLrngIvsTrsmRatY.PortName = 'SysFricLrngIvsTrsmRatY';


SysFricLrngLatAHiLim = DataDict.Calibration;
SysFricLrngLatAHiLim.LongName = 'System Friction Learning Lateral Acceleration High Limit';
SysFricLrngLatAHiLim.Description = 'Maximum lateral acceleration';
SysFricLrngLatAHiLim.DocUnits = 'MtrPerSecSqd';
SysFricLrngLatAHiLim.EngDT = dt.float32;
SysFricLrngLatAHiLim.EngVal = 10;
SysFricLrngLatAHiLim.EngMin = 0;
SysFricLrngLatAHiLim.EngMax = 10;
SysFricLrngLatAHiLim.Cardinality = 'Inin';
SysFricLrngLatAHiLim.CustomerVisible = false;
SysFricLrngLatAHiLim.Online = false;
SysFricLrngLatAHiLim.Impact = 'H';
SysFricLrngLatAHiLim.TuningOwner = 'CSE';
SysFricLrngLatAHiLim.GraphLink = {''};
SysFricLrngLatAHiLim.Monotony = 'None';
SysFricLrngLatAHiLim.MaxGrad = 9.8;
SysFricLrngLatAHiLim.PortName = 'SysFricLrngLatAHiLim';


SysFricLrngLatALoLim = DataDict.Calibration;
SysFricLrngLatALoLim.LongName = 'System Friction Learning Lateral Acceleration Low Limit';
SysFricLrngLatALoLim.Description = 'Minimum lateral acceleration';
SysFricLrngLatALoLim.DocUnits = 'MtrPerSecSqd';
SysFricLrngLatALoLim.EngDT = dt.float32;
SysFricLrngLatALoLim.EngVal = 0;
SysFricLrngLatALoLim.EngMin = 0;
SysFricLrngLatALoLim.EngMax = 10;
SysFricLrngLatALoLim.Cardinality = 'Inin';
SysFricLrngLatALoLim.CustomerVisible = false;
SysFricLrngLatALoLim.Online = false;
SysFricLrngLatALoLim.Impact = 'H';
SysFricLrngLatALoLim.TuningOwner = 'CSE';
SysFricLrngLatALoLim.GraphLink = {''};
SysFricLrngLatALoLim.Monotony = 'None';
SysFricLrngLatALoLim.MaxGrad = 9.8;
SysFricLrngLatALoLim.PortName = 'SysFricLrngLatALoLim';


SysFricLrngMaskVehSpd = DataDict.Calibration;
SysFricLrngMaskVehSpd.LongName = 'System Friction Learning Mask Vehicle Speed';
SysFricLrngMaskVehSpd.Description = [...
  'Mask to include/exclude the frictions for the particular vehicle speed' ...
  ' in the final average friction change detection '];
SysFricLrngMaskVehSpd.DocUnits = 'Cnt';
SysFricLrngMaskVehSpd.EngDT = dt.lgc;
SysFricLrngMaskVehSpd.EngVal =  ...
   [1                1                1                1];
SysFricLrngMaskVehSpd.EngMin = 0;
SysFricLrngMaskVehSpd.EngMax = 1;
SysFricLrngMaskVehSpd.Cardinality = 'Inin';
SysFricLrngMaskVehSpd.CustomerVisible = false;
SysFricLrngMaskVehSpd.Online = false;
SysFricLrngMaskVehSpd.Impact = 'H';
SysFricLrngMaskVehSpd.TuningOwner = 'CSE';
SysFricLrngMaskVehSpd.GraphLink = {''};
SysFricLrngMaskVehSpd.Monotony = 'None';
SysFricLrngMaskVehSpd.MaxGrad = 1;
SysFricLrngMaskVehSpd.PortName = 'SysFricLrngMaskVehSpd';


SysFricLrngRngCntrThd = DataDict.Calibration;
SysFricLrngRngCntrThd.LongName = 'System Friction Learning Range Counter Threshold';
SysFricLrngRngCntrThd.Description = [...
  'Resetting range counter threshold, avoiding counter overflow'];
SysFricLrngRngCntrThd.DocUnits = 'Cnt';
SysFricLrngRngCntrThd.EngDT = dt.u16;
SysFricLrngRngCntrThd.EngVal = 65534;
SysFricLrngRngCntrThd.EngMin = 1;
SysFricLrngRngCntrThd.EngMax = 65534;
SysFricLrngRngCntrThd.Cardinality = 'Inin';
SysFricLrngRngCntrThd.CustomerVisible = false;
SysFricLrngRngCntrThd.Online = false;
SysFricLrngRngCntrThd.Impact = 'H';
SysFricLrngRngCntrThd.TuningOwner = 'CSE';
SysFricLrngRngCntrThd.GraphLink = {''};
SysFricLrngRngCntrThd.Monotony = 'None';
SysFricLrngRngCntrThd.MaxGrad = 65533;
SysFricLrngRngCntrThd.PortName = 'SysFricLrngRngCntrThd';


SysFricLrngTHiLim = DataDict.Calibration;
SysFricLrngTHiLim.LongName = 'System Friction Learning Temperature High Limit';
SysFricLrngTHiLim.Description = 'Maximum EPS temperature';
SysFricLrngTHiLim.DocUnits = 'DegCgrd';
SysFricLrngTHiLim.EngDT = dt.float32;
SysFricLrngTHiLim.EngVal = 100;
SysFricLrngTHiLim.EngMin = -100;
SysFricLrngTHiLim.EngMax = 400;
SysFricLrngTHiLim.Cardinality = 'Inin';
SysFricLrngTHiLim.CustomerVisible = false;
SysFricLrngTHiLim.Online = false;
SysFricLrngTHiLim.Impact = 'H';
SysFricLrngTHiLim.TuningOwner = 'CSE';
SysFricLrngTHiLim.GraphLink = {''};
SysFricLrngTHiLim.Monotony = 'None';
SysFricLrngTHiLim.MaxGrad = 500;
SysFricLrngTHiLim.PortName = 'SysFricLrngTHiLim';


SysFricLrngTLoLim = DataDict.Calibration;
SysFricLrngTLoLim.LongName = 'System Friction Learning Temperature Low Limit';
SysFricLrngTLoLim.Description = 'Minimum EPS temperature';
SysFricLrngTLoLim.DocUnits = 'DegCgrd';
SysFricLrngTLoLim.EngDT = dt.float32;
SysFricLrngTLoLim.EngVal = 0;
SysFricLrngTLoLim.EngMin = -100;
SysFricLrngTLoLim.EngMax = 400;
SysFricLrngTLoLim.Cardinality = 'Inin';
SysFricLrngTLoLim.CustomerVisible = false;
SysFricLrngTLoLim.Online = false;
SysFricLrngTLoLim.Impact = 'H';
SysFricLrngTLoLim.TuningOwner = 'CSE';
SysFricLrngTLoLim.GraphLink = {''};
SysFricLrngTLoLim.Monotony = 'None';
SysFricLrngTLoLim.MaxGrad = 500;
SysFricLrngTLoLim.PortName = 'SysFricLrngTLoLim';


SysFricLrngThd = DataDict.Calibration;
SysFricLrngThd.LongName = 'System Friction Learning Threshold';
SysFricLrngThd.Description = [...
  'Learning occurrence threshold for average friction calculation'];
SysFricLrngThd.DocUnits = 'Cnt';
SysFricLrngThd.EngDT = dt.u32;
SysFricLrngThd.EngVal = 1;
SysFricLrngThd.EngMin = 1;
SysFricLrngThd.EngMax = 65534;
SysFricLrngThd.Cardinality = 'Inin';
SysFricLrngThd.CustomerVisible = false;
SysFricLrngThd.Online = false;
SysFricLrngThd.Impact = 'H';
SysFricLrngThd.TuningOwner = 'CSE';
SysFricLrngThd.GraphLink = {''};
SysFricLrngThd.Monotony = 'None';
SysFricLrngThd.MaxGrad = 65543;
SysFricLrngThd.PortName = 'SysFricLrngThd';


SysFricLrngVehSpd = DataDict.Calibration;
SysFricLrngVehSpd.LongName = 'System Friction Learning Vehicle Speed';
SysFricLrngVehSpd.Description = [...
  'Vehicle Speed to calculate vehicle speed constraint'];
SysFricLrngVehSpd.DocUnits = 'Kph';
SysFricLrngVehSpd.EngDT = dt.float32;
SysFricLrngVehSpd.EngVal =  ...
   [0                5
    60               80
    80              100
    100              120];
SysFricLrngVehSpd.EngMin = 0;
SysFricLrngVehSpd.EngMax = 255;
SysFricLrngVehSpd.Cardinality = 'Inin';
SysFricLrngVehSpd.CustomerVisible = false;
SysFricLrngVehSpd.Online = false;
SysFricLrngVehSpd.Impact = 'H';
SysFricLrngVehSpd.TuningOwner = 'CSE';
SysFricLrngVehSpd.GraphLink = {''};
SysFricLrngVehSpd.Monotony = 'None';
SysFricLrngVehSpd.MaxGrad = 255;
SysFricLrngVehSpd.PortName = 'SysFricLrngVehSpd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------
FricLrngData = DataDict.NVM;
FricLrngData.LongName = 'Friction Learning Data';
FricLrngData.Description = 'NVM Data';
FricLrngData.DocUnits = 'Uls';
FricLrngData.EngDT = struct.SysFricDataRec1;
FricLrngData.EngInit = [struct('FricOffs',0,'BasLineFric', ...
   [0
    0
    0
    0],'VehLrndFric', ...
   [0
    0
    0
    0],'Hys', ...
   [0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0
    0                0                0                0],'RngCntr', ...
   [0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0
    0                0                0],'SysFricLrngOperMod',0)];
FricLrngData.EngMin = [struct('FricOffs',-5,'BasLineFric',-127,'VehLrndFric',0,'Hys',-127,'RngCntr',0,'SysFricLrngOperMod',SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_CALIBRATION)];
FricLrngData.EngMax = [struct('FricOffs',5,'BasLineFric',254,'VehLrndFric',127,'Hys',127,'RngCntr',65535,'SysFricLrngOperMod',SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_BASELINE)];
FricLrngData.CustomerVisible = false;
FricLrngData.Impact = 'H';
FricLrngData.TuningOwner = 'CSE';
FricLrngData.InitRowCol = [1  1];


FricNonLrngData = DataDict.NVM;
FricNonLrngData.LongName = 'Friction Non Learning Enable';
FricNonLrngData.Description = 'NVM Data';
FricNonLrngData.DocUnits = 'Uls';
FricNonLrngData.EngDT = struct.SysFricNonLrngDataRec1;
FricNonLrngData.EngInit = [struct('EolFric',0,'EnaFricLrng',0,'EnaFricOffsOutp',0)];
FricNonLrngData.EngMin = [struct('EolFric',0,'EnaFricLrng',0,'EnaFricOffsOutp',0)];
FricNonLrngData.EngMax = [struct('EolFric',127,'EnaFricLrng',1,'EnaFricOffsOutp',1)];
FricNonLrngData.CustomerVisible = false;
FricNonLrngData.Impact = 'H';
FricNonLrngData.TuningOwner = 'CSE';
FricNonLrngData.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AssiMechTLpFil = DataDict.PIM;
AssiMechTLpFil.LongName = 'Assist Mehcanism Temperature Lowpass Filter';
AssiMechTLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
AssiMechTLpFil.DocUnits = 'Uls';
AssiMechTLpFil.EngDT = struct.FilLpRec1;
AssiMechTLpFil.EngMin = [struct('FilSt',-50,'FilGain',0)];
AssiMechTLpFil.EngMax = [struct('FilSt',150,'FilGain',0.99813256)];
AssiMechTLpFil.InitRowCol = [1  1];


AvrgFricLpFil1 = DataDict.PIM;
AvrgFricLpFil1.LongName = 'Average Friction Lowpass Filter 1';
AvrgFricLpFil1.Description = [...
  'State Variable for Low Pass Filter of calculating Avergae Friction'];
AvrgFricLpFil1.DocUnits = 'Uls';
AvrgFricLpFil1.EngDT = struct.FilLpRec1;
AvrgFricLpFil1.EngMin = [struct('FilSt',-254,'FilGain',0)];
AvrgFricLpFil1.EngMax = [struct('FilSt',254,'FilGain',0.25)];
AvrgFricLpFil1.InitRowCol = [1  1];


AvrgFricLpFil2 = DataDict.PIM;
AvrgFricLpFil2.LongName = 'Average Friction Lowpass Filter 2';
AvrgFricLpFil2.Description = [...
  'State Variable for Low Pass Filter of calculating Avergae Friction'];
AvrgFricLpFil2.DocUnits = 'Uls';
AvrgFricLpFil2.EngDT = struct.FilLpRec1;
AvrgFricLpFil2.EngMin = [struct('FilSt',-254,'FilGain',0)];
AvrgFricLpFil2.EngMax = [struct('FilSt',254,'FilGain',0.25)];
AvrgFricLpFil2.InitRowCol = [1  1];


AvrgFricLpFil3 = DataDict.PIM;
AvrgFricLpFil3.LongName = 'Average Friction Lowpass Filter 3';
AvrgFricLpFil3.Description = [...
  'State Variable for Low Pass Filter of calculating Avergae Friction'];
AvrgFricLpFil3.DocUnits = 'Uls';
AvrgFricLpFil3.EngDT = struct.FilLpRec1;
AvrgFricLpFil3.EngMin = [struct('FilSt',-254,'FilGain',0)];
AvrgFricLpFil3.EngMax = [struct('FilSt',254,'FilGain',0.25)];
AvrgFricLpFil3.InitRowCol = [1  1];


AvrgFricLpFil4 = DataDict.PIM;
AvrgFricLpFil4.LongName = 'Average Friction Lowpass Filter 4';
AvrgFricLpFil4.Description = [...
  'State Variable for Low Pass Filter of calculating Avergae Friction'];
AvrgFricLpFil4.DocUnits = 'Uls';
AvrgFricLpFil4.EngDT = struct.FilLpRec1;
AvrgFricLpFil4.EngMin = [struct('FilSt',-254,'FilGain',0)];
AvrgFricLpFil4.EngMax = [struct('FilSt',254,'FilGain',0.25)];
AvrgFricLpFil4.InitRowCol = [1  1];


ColTqAry = DataDict.PIM;
ColTqAry.LongName = 'column Torque Array';
ColTqAry.Description = [...
  'Used to store cumulative Torque values'];
ColTqAry.DocUnits = 'HwNwtMtr';
ColTqAry.EngDT = dt.float32;
ColTqAry.EngMin = -450;
ColTqAry.EngMax = 450;
ColTqAry.InitRowCol = [1  12];


ColTqLpFil = DataDict.PIM;
ColTqLpFil.LongName = 'Column Torque Lowpass Filter';
ColTqLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
ColTqLpFil.DocUnits = 'Uls';
ColTqLpFil.EngDT = struct.FilLpRec1;
ColTqLpFil.EngMin = [struct('FilSt',-450,'FilGain',0)];
ColTqLpFil.EngMax = [struct('FilSt',450,'FilGain',0.99813256)];
ColTqLpFil.InitRowCol = [1  1];


EstimdFric = DataDict.PIM;
EstimdFric.LongName = 'Estimated Friction';
EstimdFric.Description = [...
  'Temporary variable for storing Estimated Friction'];
EstimdFric.DocUnits = 'HwNwtMtr';
EstimdFric.EngDT = dt.float32;
EstimdFric.EngMin = 0;
EstimdFric.EngMax = 20;
EstimdFric.InitRowCol = [1  1];


FilAvrgFric = DataDict.PIM;
FilAvrgFric.LongName = 'Filter Average Friction';
FilAvrgFric.Description = [...
  'Temporary variable for storing Vehicle Learned Friction Data from NVM'];
FilAvrgFric.DocUnits = 'HwNwtMtr';
FilAvrgFric.EngDT = dt.float32;
FilAvrgFric.EngMin = -254;
FilAvrgFric.EngMax = 254;
FilAvrgFric.InitRowCol = [1  4];


FricChgLpFil = DataDict.PIM;
FricChgLpFil.LongName = 'Friction Change Lowpass Filter';
FricChgLpFil.Description = [...
  'State Variable for Low Pass Filter of calculating chaneg in Friction'];
FricChgLpFil.DocUnits = 'Uls';
FricChgLpFil.EngDT = struct.FilLpRec1;
FricChgLpFil.EngMin = [struct('FilSt',-137,'FilGain',0)];
FricChgLpFil.EngMax = [struct('FilSt',137,'FilGain',0.25)];
FricChgLpFil.InitRowCol = [1  1];


FricLrngOperModPrev = DataDict.PIM;
FricLrngOperModPrev.LongName = 'Friction Learning Operation Mode Previous';
FricLrngOperModPrev.Description = [...
  'variable to Store Delayed value of system Friction Learnign Operation ' ...
  'Mode'];
FricLrngOperModPrev.DocUnits = 'Uls';
FricLrngOperModPrev.EngDT = enum.SysFricLrngOperMod1;
FricLrngOperModPrev.EngMin = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_CALIBRATION;
FricLrngOperModPrev.EngMax = SysFricLrngOperMod1.SYSFRICLRNGOPERMOD_BASELINE;
FricLrngOperModPrev.InitRowCol = [1  1];


FricLrngRunOneTi = DataDict.PIM;
FricLrngRunOneTi.LongName = 'Friction Learning Run One Time';
FricLrngRunOneTi.Description = [...
  'Latch to control Friction Learning Periodic execution'];
FricLrngRunOneTi.DocUnits = 'Cnt';
FricLrngRunOneTi.EngDT = dt.lgc;
FricLrngRunOneTi.EngMin = 0;
FricLrngRunOneTi.EngMax = 1;
FricLrngRunOneTi.InitRowCol = [1  1];


FricOffs = DataDict.PIM;
FricOffs.LongName = 'Friction Offset';
FricOffs.Description = [...
  'Temporary variable for storing friction offset'];
FricOffs.DocUnits = 'HwNwtMtr';
FricOffs.EngDT = dt.float32;
FricOffs.EngMin = -137;
FricOffs.EngMax = 137;
FricOffs.InitRowCol = [1  1];


FricOffsOutpDi = DataDict.PIM;
FricOffsOutpDi.LongName = 'Friction Offset Output Disable';
FricOffsOutpDi.Description = [...
  'Disable Friciton Learning Offset Output'];
FricOffsOutpDi.DocUnits = 'Cnt';
FricOffsOutpDi.EngDT = dt.lgc;
FricOffsOutpDi.EngMin = 0;
FricOffsOutpDi.EngMax = 1;
FricOffsOutpDi.InitRowCol = [1  1];


HwAgAuthyLpFil = DataDict.PIM;
HwAgAuthyLpFil.LongName = 'Handwheel Angle Authority Lowpass Filter';
HwAgAuthyLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
HwAgAuthyLpFil.DocUnits = 'Uls';
HwAgAuthyLpFil.EngDT = struct.FilLpRec1;
HwAgAuthyLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
HwAgAuthyLpFil.EngMax = [struct('FilSt',1,'FilGain',0.99813256)];
HwAgAuthyLpFil.InitRowCol = [1  1];


HwAgBuf = DataDict.PIM;
HwAgBuf.LongName = 'Handwheel Angle Buffer';
HwAgBuf.Description = [...
  'Buffer to store cumulative Handwheel Angle values'];
HwAgBuf.DocUnits = 'HwDeg';
HwAgBuf.EngDT = dt.float32;
HwAgBuf.EngMin = -1440;
HwAgBuf.EngMax = 1440;
HwAgBuf.InitRowCol = [1  12];


HwAgLpFil = DataDict.PIM;
HwAgLpFil.LongName = 'Handwheel angle Lowpass Filter';
HwAgLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
HwAgLpFil.DocUnits = 'Uls';
HwAgLpFil.EngDT = struct.FilLpRec1;
HwAgLpFil.EngMin = [struct('FilSt',-1440,'FilGain',0)];
HwAgLpFil.EngMax = [struct('FilSt',1440,'FilGain',0.99813256)];
HwAgLpFil.InitRowCol = [1  1];


HwVelBuf = DataDict.PIM;
HwVelBuf.LongName = 'Handwheel Velocity Buffer';
HwVelBuf.Description = [...
  'Buffer to store cumulative Handwheel Velocity values'];
HwVelBuf.DocUnits = 'HwDegPerSec';
HwVelBuf.EngDT = dt.float32;
HwVelBuf.EngMin = -2410;
HwVelBuf.EngMax = 2410;
HwVelBuf.InitRowCol = [1  12];


HwVelLpFil = DataDict.PIM;
HwVelLpFil.LongName = 'Handwheel/Hardware Velocity Lowpass Filter';
HwVelLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
HwVelLpFil.DocUnits = 'Uls';
HwVelLpFil.EngDT = struct.FilLpRec1;
HwVelLpFil.EngMin = [struct('FilSt',-2410,'FilGain',0)];
HwVelLpFil.EngMax = [struct('FilSt',2410,'FilGain',0.99813256)];
HwVelLpFil.InitRowCol = [1  1];


LatALpFil = DataDict.PIM;
LatALpFil.LongName = 'Lateral Acceleration Lowpass Filter';
LatALpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
LatALpFil.DocUnits = 'Uls';
LatALpFil.EngDT = struct.FilLpRec1;
LatALpFil.EngMin = [struct('FilSt',-10,'FilGain',0)];
LatALpFil.EngMax = [struct('FilSt',10,'FilGain',0.99813256)];
LatALpFil.InitRowCol = [1  1];


PrevMaxRawAvrgFric = DataDict.PIM;
PrevMaxRawAvrgFric.LongName = 'Previous Maximum Raw Average Friction';
PrevMaxRawAvrgFric.Description = [...
  'Temporary variable for storing Previous Maximum Raw Average Friction D' ...
  'ata from NVM'];
PrevMaxRawAvrgFric.DocUnits = 'HwNwtMtr';
PrevMaxRawAvrgFric.EngDT = dt.float32;
PrevMaxRawAvrgFric.EngMin = 0;
PrevMaxRawAvrgFric.EngMax = 254;
PrevMaxRawAvrgFric.InitRowCol = [1  1];


RawAvrgFric = DataDict.PIM;
RawAvrgFric.LongName = 'Raw Average Friction';
RawAvrgFric.Description = [...
  'Temporary variable for storing Vehicle Learned Friction Data from NVM'];
RawAvrgFric.DocUnits = 'HwNwtMtr';
RawAvrgFric.EngDT = dt.float32;
RawAvrgFric.EngMin = -254;
RawAvrgFric.EngMax = 254;
RawAvrgFric.InitRowCol = [1  4];


RefTmrLrngConstr = DataDict.PIM;
RefTmrLrngConstr.LongName = 'Reference Timer Vehicle Learning Constraint';
RefTmrLrngConstr.Description = [...
  'Reference Timer for Vehicle Learning Constraint'];
RefTmrLrngConstr.DocUnits = 'Cnt';
RefTmrLrngConstr.EngDT = dt.u32;
RefTmrLrngConstr.EngMin = 0;
RefTmrLrngConstr.EngMax = 4294967295;
RefTmrLrngConstr.InitRowCol = [1  1];


SatnAvrgFric = DataDict.PIM;
SatnAvrgFric.LongName = 'Saturation Average Friction';
SatnAvrgFric.Description = [...
  'Temporary variable for storing Vehicle Learned Friction Data from NVM'];
SatnAvrgFric.DocUnits = 'HwNwtMtr';
SatnAvrgFric.EngDT = dt.float32;
SatnAvrgFric.EngMin = -5;
SatnAvrgFric.EngMax = 132;
SatnAvrgFric.InitRowCol = [1  4];


SatnEstimdFric = DataDict.PIM;
SatnEstimdFric.LongName = 'Saturation Estimated Friction';
SatnEstimdFric.Description = [...
  'Temporary variable for storing Saturated estimated friction'];
SatnEstimdFric.DocUnits = 'HwNwtMtr';
SatnEstimdFric.EngDT = dt.float32;
SatnEstimdFric.EngMin = 0;
SatnEstimdFric.EngMax = 20;
SatnEstimdFric.InitRowCol = [1  1];


VehBasLineFric = DataDict.PIM;
VehBasLineFric.LongName = 'Vehicle BaseLine Friction';
VehBasLineFric.Description = [...
  'Temporary variable for storing Baseline Friction Data from NVM'];
VehBasLineFric.DocUnits = 'HwNwtMtr';
VehBasLineFric.EngDT = dt.float32;
VehBasLineFric.EngMin = -5;
VehBasLineFric.EngMax = 132;
VehBasLineFric.InitRowCol = [1  4];


VehSpdLpFil = DataDict.PIM;
VehSpdLpFil.LongName = 'Vehicle Speed Lowpass Filter';
VehSpdLpFil.Description = [...
  'Lowpass Filter used in SysFricLrngInit1 and calibration modes'];
VehSpdLpFil.DocUnits = 'Uls';
VehSpdLpFil.EngDT = struct.FilLpRec1;
VehSpdLpFil.EngMin = [struct('FilSt',0,'FilGain',0)];
VehSpdLpFil.EngMax = [struct('FilSt',511,'FilGain',0.99813256)];
VehSpdLpFil.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_100MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_100MILLISEC_SEC_F32.LongName = '100 Milliseconds';
ARCHGLBPRM_100MILLISEC_SEC_F32.Description = '100ms periodic loop time step';
ARCHGLBPRM_100MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_100MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_100MILLISEC_SEC_F32.EngVal = 0.1;
ARCHGLBPRM_100MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_10MILLISEC_SEC_F32 = DataDict.Constant;
ARCHGLBPRM_10MILLISEC_SEC_F32.LongName = '10 Milliseconds';
ARCHGLBPRM_10MILLISEC_SEC_F32.Description = '10ms periodic loop time step';
ARCHGLBPRM_10MILLISEC_SEC_F32.DocUnits = 'Sec';
ARCHGLBPRM_10MILLISEC_SEC_F32.EngDT = dt.float32;
ARCHGLBPRM_10MILLISEC_SEC_F32.EngVal = 0.01;
ARCHGLBPRM_10MILLISEC_SEC_F32.Define = 'Global';


ARCHGLBPRM_180OVERPI_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_180OVERPI_ULS_F32.LongName = '180 Degrees Over Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.Description = '180 divided by Pi';
ARCHGLBPRM_180OVERPI_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_180OVERPI_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_180OVERPI_ULS_F32.EngVal = 57.29578;
ARCHGLBPRM_180OVERPI_ULS_F32.Define = 'Global';


FLTINJ_SYSFRICLRNG_SYSFRICOFFS = DataDict.Constant;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.LongName = 'Fault Injection System Friction Learning System Friction Offset';
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.Description = [...
  'Internal signal of Average Friction Learning function.  Located prior ' ...
  'to signal saturation and defeat.'];
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.DocUnits = 'Uls';
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.EngDT = dt.u16;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.EngVal = 4;
FLTINJ_SYSFRICLRNG_SYSFRICOFFS.Define = 'Global';


HWPTNUMSUB1_CNT_U08 = DataDict.Constant;
HWPTNUMSUB1_CNT_U08.LongName = 'Handwheenl Point Number Substitute 1';
HWPTNUMSUB1_CNT_U08.Description = [...
  'Value of this equates to HWPTNUM_CNT_U08 - 1'];
HWPTNUMSUB1_CNT_U08.DocUnits = 'Cnt';
HWPTNUMSUB1_CNT_U08.EngDT = dt.u08;
HWPTNUMSUB1_CNT_U08.EngVal = 3;
HWPTNUMSUB1_CNT_U08.Define = 'Local';


HWPTNUM_CNT_U08 = DataDict.Constant;
HWPTNUM_CNT_U08.LongName = 'Handwheenl Point Number';
HWPTNUM_CNT_U08.Description = 'Maximum number of Handwheel Points';
HWPTNUM_CNT_U08.DocUnits = 'Cnt';
HWPTNUM_CNT_U08.EngDT = dt.u08;
HWPTNUM_CNT_U08.EngVal = 4;
HWPTNUM_CNT_U08.Define = 'Local';


HWVELDECDIR_ULS_U08 = DataDict.Constant;
HWVELDECDIR_ULS_U08.LongName = 'Handwheel Velocity Decrease Direction';
HWVELDECDIR_ULS_U08.Description = [...
  'Decreasing Direction for Handwheel Velocity'];
HWVELDECDIR_ULS_U08.DocUnits = 'Uls';
HWVELDECDIR_ULS_U08.EngDT = dt.u08;
HWVELDECDIR_ULS_U08.EngVal = 1;
HWVELDECDIR_ULS_U08.Define = 'Local';


HWVELINCDIR_ULS_U08 = DataDict.Constant;
HWVELINCDIR_ULS_U08.LongName = 'Handwheel Velocity Increase Direction';
HWVELINCDIR_ULS_U08.Description = [...
  'Increasing Direction for Handwheel Velocity'];
HWVELINCDIR_ULS_U08.DocUnits = 'Uls';
HWVELINCDIR_ULS_U08.EngDT = dt.u08;
HWVELINCDIR_ULS_U08.EngVal = 0;
HWVELINCDIR_ULS_U08.Define = 'Local';


IDXCALCNSCAGFAC_ULS_U08 = DataDict.Constant;
IDXCALCNSCAGFAC_ULS_U08.LongName = 'Index Calculation Scaling Factor';
IDXCALCNSCAGFAC_ULS_U08.Description = [...
  'Scaling Factor for Indices Calculation'];
IDXCALCNSCAGFAC_ULS_U08.DocUnits = 'Uls';
IDXCALCNSCAGFAC_ULS_U08.EngDT = dt.u08;
IDXCALCNSCAGFAC_ULS_U08.EngVal = 2;
IDXCALCNSCAGFAC_ULS_U08.Define = 'Local';


IDXSELN1_ULS_U08 = DataDict.Constant;
IDXSELN1_ULS_U08.LongName = 'Index Selection 1';
IDXSELN1_ULS_U08.Description = [...
  'Buffer Size for Constraint Calculation'];
IDXSELN1_ULS_U08.DocUnits = 'Uls';
IDXSELN1_ULS_U08.EngDT = dt.u08;
IDXSELN1_ULS_U08.EngVal = 12;
IDXSELN1_ULS_U08.Define = 'Local';


IDXSELN2_ULS_U08 = DataDict.Constant;
IDXSELN2_ULS_U08.LongName = 'Index Selection 2';
IDXSELN2_ULS_U08.Description = [...
  'Buffer Size for Constraint Calculation'];
IDXSELN2_ULS_U08.DocUnits = 'Uls';
IDXSELN2_ULS_U08.EngDT = dt.u08;
IDXSELN2_ULS_U08.EngVal = 13;
IDXSELN2_ULS_U08.Define = 'Local';


IDXSELN3_ULS_U08 = DataDict.Constant;
IDXSELN3_ULS_U08.LongName = 'Index Selection 3';
IDXSELN3_ULS_U08.Description = [...
  'Buffer Size for Constraint Calculation'];
IDXSELN3_ULS_U08.DocUnits = 'Uls';
IDXSELN3_ULS_U08.EngDT = dt.u08;
IDXSELN3_ULS_U08.EngVal = 6;
IDXSELN3_ULS_U08.Define = 'Local';


LRNGENASCAFAC_MILLISEC_U32 = DataDict.Constant;
LRNGENASCAFAC_MILLISEC_U32.LongName = 'Learning Enable Scaling Factor';
LRNGENASCAFAC_MILLISEC_U32.Description = 'Scaling Factor for Learning Enable';
LRNGENASCAFAC_MILLISEC_U32.DocUnits = 'MilliSec';
LRNGENASCAFAC_MILLISEC_U32.EngDT = dt.u32;
LRNGENASCAFAC_MILLISEC_U32.EngVal = 120;
LRNGENASCAFAC_MILLISEC_U32.Define = 'Local';


MAXLRNDFRICHILIM_HWNWTMTR_F32 = DataDict.Constant;
MAXLRNDFRICHILIM_HWNWTMTR_F32.LongName = 'Maximum Learned Friction High Limit';
MAXLRNDFRICHILIM_HWNWTMTR_F32.Description = [...
  'Higher Limit for Maximum Learned Friction'];
MAXLRNDFRICHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
MAXLRNDFRICHILIM_HWNWTMTR_F32.EngDT = dt.float32;
MAXLRNDFRICHILIM_HWNWTMTR_F32.EngVal = 254;
MAXLRNDFRICHILIM_HWNWTMTR_F32.Define = 'Local';


MAXLRNDFRICLOLIM_HWNWTMTR_F32 = DataDict.Constant;
MAXLRNDFRICLOLIM_HWNWTMTR_F32.LongName = 'Maximum Learned Friction Low Limit';
MAXLRNDFRICLOLIM_HWNWTMTR_F32.Description = [...
  'Lower Limit for Maximum Learned Friction'];
MAXLRNDFRICLOLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
MAXLRNDFRICLOLIM_HWNWTMTR_F32.EngDT = dt.float32;
MAXLRNDFRICLOLIM_HWNWTMTR_F32.EngVal = 0;
MAXLRNDFRICLOLIM_HWNWTMTR_F32.Define = 'Local';


NODEBSTEP_CNT_U16 = DataDict.Constant;
NODEBSTEP_CNT_U16.LongName = 'No De-Bounce Step';
NODEBSTEP_CNT_U16.Description = [...
  'Step used when No debouncing is required'];
NODEBSTEP_CNT_U16.DocUnits = 'Cnt';
NODEBSTEP_CNT_U16.EngDT = dt.u16;
NODEBSTEP_CNT_U16.EngVal = 65535;
NODEBSTEP_CNT_U16.Define = 'Local';


SCAGFACQUARTER_CNT_F32 = DataDict.Constant;
SCAGFACQUARTER_CNT_F32.LongName = 'Scaling Factor Quarter';
SCAGFACQUARTER_CNT_F32.Description = 'Scaling Factor';
SCAGFACQUARTER_CNT_F32.DocUnits = 'Cnt';
SCAGFACQUARTER_CNT_F32.EngDT = dt.float32;
SCAGFACQUARTER_CNT_F32.EngVal = 0.25;
SCAGFACQUARTER_CNT_F32.Define = 'Local';


SCAGFACTEN_CNT_U16 = DataDict.Constant;
SCAGFACTEN_CNT_U16.LongName = 'Scaling Factor 10';
SCAGFACTEN_CNT_U16.Description = 'Scaling Factor';
SCAGFACTEN_CNT_U16.DocUnits = 'Cnt';
SCAGFACTEN_CNT_U16.EngDT = dt.u16;
SCAGFACTEN_CNT_U16.EngVal = 10;
SCAGFACTEN_CNT_U16.Define = 'Local';


SECIDXSELN_ULS_U08 = DataDict.Constant;
SECIDXSELN_ULS_U08.LongName = 'second Index Selection';
SECIDXSELN_ULS_U08.Description = [...
  'Second Index Selection for Friction Learning Vehicle Speed'];
SECIDXSELN_ULS_U08.DocUnits = 'Uls';
SECIDXSELN_ULS_U08.EngDT = dt.u08;
SECIDXSELN_ULS_U08.EngVal = 2;
SECIDXSELN_ULS_U08.Define = 'Local';


SYSFRICESTIMDHILIM_HWNWTMTR_F32 = DataDict.Constant;
SYSFRICESTIMDHILIM_HWNWTMTR_F32.LongName = 'System Friction Estimated High Limit';
SYSFRICESTIMDHILIM_HWNWTMTR_F32.Description = [...
  'Higher Limit for System Friction Estimated'];
SYSFRICESTIMDHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SYSFRICESTIMDHILIM_HWNWTMTR_F32.EngDT = dt.float32;
SYSFRICESTIMDHILIM_HWNWTMTR_F32.EngVal = 20;
SYSFRICESTIMDHILIM_HWNWTMTR_F32.Define = 'Local';


SYSFRICESTIMDLOLIM_HWNWTMTR_F32 = DataDict.Constant;
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.LongName = 'System Friction Estimated Low Limit';
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.Description = [...
  'Lower Limit for System Friction Estimated'];
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.EngDT = dt.float32;
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.EngVal = 0;
SYSFRICESTIMDLOLIM_HWNWTMTR_F32.Define = 'Local';


SYSFRICOFFSLIM_HWNWTMTR_F32 = DataDict.Constant;
SYSFRICOFFSLIM_HWNWTMTR_F32.LongName = 'System Friction Offset Limit';
SYSFRICOFFSLIM_HWNWTMTR_F32.Description = [...
  'Limit for System Friction Estimated'];
SYSFRICOFFSLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SYSFRICOFFSLIM_HWNWTMTR_F32.EngDT = dt.float32;
SYSFRICOFFSLIM_HWNWTMTR_F32.EngVal = 5;
SYSFRICOFFSLIM_HWNWTMTR_F32.Define = 'Local';


SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32 = DataDict.Constant;
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.LongName = 'System Saturation Friction Estimated High Limit';
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.Description = [...
  'Higher Limit for System Saturation Friction'];
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.EngDT = dt.float32;
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.EngVal = 20;
SYSSATNFRICESTIMDHILIM_HWNWTMTR_F32.Define = 'Local';


SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32 = DataDict.Constant;
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.LongName = 'System Saturation Friction Estimated Low Limit';
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.Description = [...
  'Lower Limit for System Saturation Friction'];
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.DocUnits = 'HwNwtMtr';
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.EngDT = dt.float32;
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.EngVal = 0;
SYSSATNFRICESTIMDLOLIM_HWNWTMTR_F32.Define = 'Local';


VEHLRNDFRICHILIM_ULS_F32 = DataDict.Constant;
VEHLRNDFRICHILIM_ULS_F32.LongName = 'Vehicle Learned Friction High Limit';
VEHLRNDFRICHILIM_ULS_F32.Description = [...
  'Higher Limit for vehicle Learned friction'];
VEHLRNDFRICHILIM_ULS_F32.DocUnits = 'Uls';
VEHLRNDFRICHILIM_ULS_F32.EngDT = dt.float32;
VEHLRNDFRICHILIM_ULS_F32.EngVal = 127;
VEHLRNDFRICHILIM_ULS_F32.Define = 'Local';


VEHLRNDFRICLOLIM_ULS_F32 = DataDict.Constant;
VEHLRNDFRICLOLIM_ULS_F32.LongName = 'Vehicle Learned Friction Low Limit';
VEHLRNDFRICLOLIM_ULS_F32.Description = [...
  'Lower Limit for vehicle Learned friction'];
VEHLRNDFRICLOLIM_ULS_F32.DocUnits = 'Uls';
VEHLRNDFRICLOLIM_ULS_F32.EngDT = dt.float32;
VEHLRNDFRICLOLIM_ULS_F32.EngVal = 0;
VEHLRNDFRICLOLIM_ULS_F32.Define = 'Local';


VEHSPDPTNUM1_ULS_U08 = DataDict.Constant;
VEHSPDPTNUM1_ULS_U08.LongName = 'Vehicle Speed Point Number 1';
VEHSPDPTNUM1_ULS_U08.Description = [...
  'Maximum number of Vehicle Speed Points'];
VEHSPDPTNUM1_ULS_U08.DocUnits = 'Uls';
VEHSPDPTNUM1_ULS_U08.EngDT = dt.u08;
VEHSPDPTNUM1_ULS_U08.EngVal = 4;
VEHSPDPTNUM1_ULS_U08.Define = 'Local';


VEHSPDPTNUM2_ULS_U08 = DataDict.Constant;
VEHSPDPTNUM2_ULS_U08.LongName = 'Vehicle Speed Point Number 2';
VEHSPDPTNUM2_ULS_U08.Description = [...
  'Value of this equates to VEHSPDPTNUM1_ULS_U08 * 2 '];
VEHSPDPTNUM2_ULS_U08.DocUnits = 'Uls';
VEHSPDPTNUM2_ULS_U08.EngDT = dt.u08;
VEHSPDPTNUM2_ULS_U08.EngVal = 8;
VEHSPDPTNUM2_ULS_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
HiFricNtc = DataDict.NTC;
HiFricNtc.NtcNr = NtcNr1.NTCNR_0X0A2;
HiFricNtc.NtcTyp = 'Deb';
HiFricNtc.LongName = 'High Friction NTC';
HiFricNtc.Description = 'High Friction Detected ';
HiFricNtc.NtcStInfo = DataDict.NtcStInfoBitPacked;
HiFricNtc.NtcStInfo.Bit0Descr = 'High Friction';
HiFricNtc.NtcStInfo.Bit1Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit2Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit3Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit4Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit5Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit6Descr = 'Unused';
HiFricNtc.NtcStInfo.Bit7Descr = 'Unused';
HiFricNtc.NtcStsLockdThisIgnCyc = 1;


SecdryHiFricNtc = DataDict.NTC;
SecdryHiFricNtc.NtcNr = NtcNr1.NTCNR_0X0D7;
SecdryHiFricNtc.NtcTyp = 'Deb';
SecdryHiFricNtc.LongName = 'Secondary High Friction Detection NTC';
SecdryHiFricNtc.Description = 'Extremely High Friction Detected ';
SecdryHiFricNtc.NtcStInfo = DataDict.NtcStInfoBitPacked;
SecdryHiFricNtc.NtcStInfo.Bit0Descr = 'Extremely High Friction';
SecdryHiFricNtc.NtcStInfo.Bit1Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit2Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit3Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit4Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit5Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit6Descr = 'Unused';
SecdryHiFricNtc.NtcStInfo.Bit7Descr = 'Unused';
SecdryHiFricNtc.NtcStsLockdThisIgnCyc = 1;


%end of Data Dictionary
