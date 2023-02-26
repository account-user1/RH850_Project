%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 19-May-2017 11:42:56       %
%                                  Created with tool release: 2.55.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM111A = DataDict.FDD;
CM111A.Version = '4.1.X';
CM111A.LongName = 'Critical Register Verification';
CM111A.ShoName  = 'VrfyCritReg';
CM111A.DesignASIL = 'D';
CM111A.Description = [...
  'This component describes the functions which verify critical registers' ...
  '.'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
VrfyCritRegInit1 = DataDict.Runnable;
VrfyCritRegInit1.Context = 'Rte';
VrfyCritRegInit1.TimeStep = 0;
VrfyCritRegInit1.Description = [...
  'Sub-function verifies critical registers once at initialization'];

VrfyCritRegPer1 = DataDict.Runnable;
VrfyCritRegPer1.Context = 'Rte';
VrfyCritRegPer1.TimeStep = 0.002;
VrfyCritRegPer1.Description = [...
  'Sub-function verifies critical registers periodically'];

VrfyCritRegPer2 = DataDict.Runnable;
VrfyCritRegPer2.Context = 'Rte';
VrfyCritRegPer2.TimeStep = 0.1;
VrfyCritRegPer2.Description = [...
  'MCal Write Verify Exception Handling Periodic 2 at 100ms Rate'];

InjVrfyCritRegErr = DataDict.SrvRunnable;
InjVrfyCritRegErr.Context = 'NonRte';
InjVrfyCritRegErr.Description = [...
  'Inject Verify Critical Register Error'];
InjVrfyCritRegErr.Return = DataDict.CSReturn;
InjVrfyCritRegErr.Return.Type = 'None';
InjVrfyCritRegErr.Return.Min = [];
InjVrfyCritRegErr.Return.Max = [];
InjVrfyCritRegErr.Return.TestTolerance = [];

MCalReadVrfyFailFltInfo = DataDict.SrvRunnable;
MCalReadVrfyFailFltInfo.Context = 'Rte';
MCalReadVrfyFailFltInfo.Description = [...
  'MCal Read Verify Fail Fault Information'];
MCalReadVrfyFailFltInfo.Return = DataDict.CSReturn;
MCalReadVrfyFailFltInfo.Return.Type = 'None';
MCalReadVrfyFailFltInfo.Return.Min = [];
MCalReadVrfyFailFltInfo.Return.Max = [];
MCalReadVrfyFailFltInfo.Return.TestTolerance = [];
MCalReadVrfyFailFltInfo.Arguments(1) = DataDict.CSArguments;
MCalReadVrfyFailFltInfo.Arguments(1).Name = 'PrphlId';
MCalReadVrfyFailFltInfo.Arguments(1).EngDT = dt.u08;
MCalReadVrfyFailFltInfo.Arguments(1).EngMin = 0;
MCalReadVrfyFailFltInfo.Arguments(1).EngMax = 255;
MCalReadVrfyFailFltInfo.Arguments(1).Units = 'Cnt';
MCalReadVrfyFailFltInfo.Arguments(1).Direction = 'In';
MCalReadVrfyFailFltInfo.Arguments(1).InitRowCol = [1  1];
MCalReadVrfyFailFltInfo.Arguments(1).Description = 'None';
MCalReadVrfyFailFltInfo.Arguments(2) = DataDict.CSArguments;
MCalReadVrfyFailFltInfo.Arguments(2).Name = 'ErrId';
MCalReadVrfyFailFltInfo.Arguments(2).EngDT = dt.u16;
MCalReadVrfyFailFltInfo.Arguments(2).EngMin = 0;
MCalReadVrfyFailFltInfo.Arguments(2).EngMax = 65535;
MCalReadVrfyFailFltInfo.Arguments(2).Units = 'Cnt';
MCalReadVrfyFailFltInfo.Arguments(2).Direction = 'In';
MCalReadVrfyFailFltInfo.Arguments(2).InitRowCol = [1  1];
MCalReadVrfyFailFltInfo.Arguments(2).Description = 'None';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ClrErrInjReg = DataDict.Client;
ClrErrInjReg.CallLocation = {'VrfyCritRegInit1','InjVrfyCritRegErr'};
ClrErrInjReg.Description = 'Clear BRAMDAT2';
ClrErrInjReg.Return = DataDict.CSReturn;
ClrErrInjReg.Return.Type = 'None';
ClrErrInjReg.Return.Min = [];
ClrErrInjReg.Return.Max = [];
ClrErrInjReg.Return.TestTolerance = [];


MCalWrVrfyRegFltInfoStorg_GetErrorStatus = DataDict.Client;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.CallLocation = {'VrfyCritRegInit1'};
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Description = 'Get Error Status';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return = DataDict.CSReturn;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return.Type = 'Standard';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return.Min = 0;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return.Max = 1;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return.TestTolerance = [];
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Return.Description = 'Return perameters';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1) = DataDict.CSArguments;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).Name = 'RequestResultPtr';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).EngDT = dt.u08;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).EngMin = 0;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).EngMax = 255;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).TestTolerance = 999;
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).Units = 'Cnt';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).Direction = 'Out';
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).InitRowCol = [1  1];
MCalWrVrfyRegFltInfoStorg_GetErrorStatus.Arguments(1).Description = 'requested error status result';


MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus = DataDict.Client;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.CallLocation = {'VrfyCritRegPer2','VrfyCritRegInit1'};
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Description = 'Set Ram Block Status';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return = DataDict.CSReturn;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return.Type = 'Standard';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return.Min = 0;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return.Max = 1;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return.TestTolerance = 0;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Return.Description = '';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).EngMin = 0;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).EngMax = 1;
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).Direction = 'In';
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
MCalWrVrfyRegFltInfoStorg_SetRamBlockStatus.Arguments(1).Description = '';


ReadErrInjReg = DataDict.Client;
ReadErrInjReg.CallLocation = {'VrfyCritRegInit1','InjVrfyCritRegErr'};
ReadErrInjReg.Description = 'Read BRAMDAT2';
ReadErrInjReg.Return = DataDict.CSReturn;
ReadErrInjReg.Return.Type = 'None';
ReadErrInjReg.Return.Min = [];
ReadErrInjReg.Return.Max = [];
ReadErrInjReg.Return.TestTolerance = [];
ReadErrInjReg.Arguments(1) = DataDict.CSArguments;
ReadErrInjReg.Arguments(1).Name = 'ErrId';
ReadErrInjReg.Arguments(1).EngDT = dt.u32;
ReadErrInjReg.Arguments(1).EngMin = 0;
ReadErrInjReg.Arguments(1).EngMax = 4294967295;
ReadErrInjReg.Arguments(1).TestTolerance = 0;
ReadErrInjReg.Arguments(1).Units = 'Cnt';
ReadErrInjReg.Arguments(1).Direction = 'Out';
ReadErrInjReg.Arguments(1).InitRowCol = [1  1];
ReadErrInjReg.Arguments(1).Description = 'None';


SetNtcSts = DataDict.Client;
SetNtcSts.CallLocation = {'VrfyCritRegInit1','VrfyCritRegPer1','VrfyCritRegPer2'};
SetNtcSts.Description = 'None';
SetNtcSts.Return = DataDict.CSReturn;
SetNtcSts.Return.Type = 'Standard';
SetNtcSts.Return.Min = 0;
SetNtcSts.Return.Max = 1;
SetNtcSts.Return.TestTolerance = [];
SetNtcSts.Return.Description = 'None';
SetNtcSts.Arguments(1) = DataDict.CSArguments;
SetNtcSts.Arguments(1).Name = 'NtcNr';
SetNtcSts.Arguments(1).EngDT = enum.NtcNr1;
SetNtcSts.Arguments(1).EngMin = NtcNr1.NTCNR_0X001;
SetNtcSts.Arguments(1).EngMax = NtcNr1.NTCNR_0X1FF;
SetNtcSts.Arguments(1).Units = 'Cnt';
SetNtcSts.Arguments(1).Direction = 'In';
SetNtcSts.Arguments(1).InitRowCol = [1  1];
SetNtcSts.Arguments(1).Description = 'None';
SetNtcSts.Arguments(2) = DataDict.CSArguments;
SetNtcSts.Arguments(2).Name = 'NtcStInfo';
SetNtcSts.Arguments(2).EngDT = dt.u08;
SetNtcSts.Arguments(2).EngMin = 0;
SetNtcSts.Arguments(2).EngMax = 255;
SetNtcSts.Arguments(2).Units = 'Cnt';
SetNtcSts.Arguments(2).Direction = 'In';
SetNtcSts.Arguments(2).InitRowCol = [1  1];
SetNtcSts.Arguments(2).Description = 'None';
SetNtcSts.Arguments(3) = DataDict.CSArguments;
SetNtcSts.Arguments(3).Name = 'NtcSts';
SetNtcSts.Arguments(3).EngDT = enum.NtcSts1;
SetNtcSts.Arguments(3).EngMin = NtcSts1.NTCSTS_PASSD;
SetNtcSts.Arguments(3).EngMax = NtcSts1.NTCSTS_PREFAILD;
SetNtcSts.Arguments(3).Units = 'Cnt';
SetNtcSts.Arguments(3).Direction = 'In';
SetNtcSts.Arguments(3).InitRowCol = [1  1];
SetNtcSts.Arguments(3).Description = 'None';
SetNtcSts.Arguments(4) = DataDict.CSArguments;
SetNtcSts.Arguments(4).Name = 'DebStep';
SetNtcSts.Arguments(4).EngDT = dt.u16;
SetNtcSts.Arguments(4).EngMin = 0;
SetNtcSts.Arguments(4).EngMax = 65535;
SetNtcSts.Arguments(4).Units = 'Cnt';
SetNtcSts.Arguments(4).Direction = 'In';
SetNtcSts.Arguments(4).InitRowCol = [1  1];
SetNtcSts.Arguments(4).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------

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
MCalWrVrfyRegFltInfoStorg = DataDict.NVM;
MCalWrVrfyRegFltInfoStorg.LongName = 'MCal Write Verify Exception Handling';
MCalWrVrfyRegFltInfoStorg.Description = [...
  'MCal Write Verify Exception Handling'];
MCalWrVrfyRegFltInfoStorg.DocUnits = 'Cnt';
MCalWrVrfyRegFltInfoStorg.EngDT = dt.u32;
MCalWrVrfyRegFltInfoStorg.EngInit = [];
MCalWrVrfyRegFltInfoStorg.EngMin = 0;
MCalWrVrfyRegFltInfoStorg.EngMax = 4294967295;
MCalWrVrfyRegFltInfoStorg.CustomerVisible = false;
MCalWrVrfyRegFltInfoStorg.Impact = 'H';
MCalWrVrfyRegFltInfoStorg.TuningOwner = 'FDD';
MCalWrVrfyRegFltInfoStorg.CoderInfo.Alias = '';
MCalWrVrfyRegFltInfoStorg.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------
dVrfyCritRegCritRegActVal = DataDict.Display;
dVrfyCritRegCritRegActVal.LongName = 'Critical Register Verification Critical Register Actual Value';
dVrfyCritRegCritRegActVal.Description = [...
  'Value of the non-system critical register that was read'];
dVrfyCritRegCritRegActVal.DocUnits = 'Cnt';
dVrfyCritRegCritRegActVal.EngDT = dt.u32;
dVrfyCritRegCritRegActVal.EngMin = 0;
dVrfyCritRegCritRegActVal.EngMax = 65535;
dVrfyCritRegCritRegActVal.InitRowCol = [1  1];


dVrfyCritRegCritRegAdr = DataDict.Display;
dVrfyCritRegCritRegAdr.LongName = 'Critical Register Verification Critical Register Address';
dVrfyCritRegCritRegAdr.Description = [...
  'Address of the non-system critical register to be read'];
dVrfyCritRegCritRegAdr.DocUnits = 'Cnt';
dVrfyCritRegCritRegAdr.EngDT = dt.u32;
dVrfyCritRegCritRegAdr.EngMin = 0;
dVrfyCritRegCritRegAdr.EngMax = 4294967295;
dVrfyCritRegCritRegAdr.InitRowCol = [1  1];


dVrfyCritRegCritRegDesVal = DataDict.Display;
dVrfyCritRegCritRegDesVal.LongName = 'Critical Register Verification Critical Register Desired Value';
dVrfyCritRegCritRegDesVal.Description = [...
  'Expected value of the non-system critical register to be compared agai' ...
  'nst the actual value'];
dVrfyCritRegCritRegDesVal.DocUnits = 'Cnt';
dVrfyCritRegCritRegDesVal.EngDT = dt.u32;
dVrfyCritRegCritRegDesVal.EngMin = 0;
dVrfyCritRegCritRegDesVal.EngMax = 4294967295;
dVrfyCritRegCritRegDesVal.InitRowCol = [1  1];


dVrfyCritRegSysCritRegActVal = DataDict.Display;
dVrfyCritRegSysCritRegActVal.LongName = 'Critical Register Verification System Critical Register Actual Value';
dVrfyCritRegSysCritRegActVal.Description = [...
  'Value of the system critical register that was read'];
dVrfyCritRegSysCritRegActVal.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegActVal.EngDT = dt.u32;
dVrfyCritRegSysCritRegActVal.EngMin = 0;
dVrfyCritRegSysCritRegActVal.EngMax = 4294967295;
dVrfyCritRegSysCritRegActVal.InitRowCol = [1  1];


dVrfyCritRegSysCritRegAdr = DataDict.Display;
dVrfyCritRegSysCritRegAdr.LongName = 'Critical Register Verification System Critical Register Address';
dVrfyCritRegSysCritRegAdr.Description = [...
  'Address of the system critical register to be read'];
dVrfyCritRegSysCritRegAdr.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegAdr.EngDT = dt.u32;
dVrfyCritRegSysCritRegAdr.EngMin = 0;
dVrfyCritRegSysCritRegAdr.EngMax = 4294967295;
dVrfyCritRegSysCritRegAdr.InitRowCol = [1  1];


dVrfyCritRegSysCritRegDesVal = DataDict.Display;
dVrfyCritRegSysCritRegDesVal.LongName = 'Critical Register Verification System Critical Register Desired Value';
dVrfyCritRegSysCritRegDesVal.Description = [...
  'Expected value of the system critical register to be compared against ' ...
  'the actual value'];
dVrfyCritRegSysCritRegDesVal.DocUnits = 'Cnt';
dVrfyCritRegSysCritRegDesVal.EngDT = dt.u32;
dVrfyCritRegSysCritRegDesVal.EngMin = 0;
dVrfyCritRegSysCritRegDesVal.EngMax = 4294967295;
dVrfyCritRegSysCritRegDesVal.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
MCalReadVrfyCritRegFltInfo = DataDict.PIM;
MCalReadVrfyCritRegFltInfo.LongName = 'Verify Critical Register Fault Information';
MCalReadVrfyCritRegFltInfo.Description = [...
  'Verify Critical Register Fault Information'];
MCalReadVrfyCritRegFltInfo.DocUnits = 'Cnt';
MCalReadVrfyCritRegFltInfo.EngDT = dt.u32;
MCalReadVrfyCritRegFltInfo.EngMin = 0;
MCalReadVrfyCritRegFltInfo.EngMax = 4294967295;
MCalReadVrfyCritRegFltInfo.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
NROFININCRITREG16BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG16BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 16 Bit';
NROFININCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 16bit access'];
NROFININCRITREG16BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG16BIT_CNT_U16.EngVal = 0;
NROFININCRITREG16BIT_CNT_U16.EngMin = 0;
NROFININCRITREG16BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG16BIT_CNT_U16.Define = 'Local';


NROFININCRITREG32BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG32BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 32 Bit';
NROFININCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 32 bit access'];
NROFININCRITREG32BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG32BIT_CNT_U16.EngVal = 0;
NROFININCRITREG32BIT_CNT_U16.EngMin = 0;
NROFININCRITREG32BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG32BIT_CNT_U16.Define = 'Local';


NROFININCRITREG8BIT_CNT_U16 = DataDict.ConfigParam;
NROFININCRITREG8BIT_CNT_U16.LongName = 'Number Of Initialization Critical Registers 8 Bit';
NROFININCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read during initializatio' ...
  'n via 8 bit access'];
NROFININCRITREG8BIT_CNT_U16.IsBuildPrm = false;
NROFININCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFININCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFININCRITREG8BIT_CNT_U16.EngVal = 0;
NROFININCRITREG8BIT_CNT_U16.EngMin = 0;
NROFININCRITREG8BIT_CNT_U16.EngMax = 65535;
NROFININCRITREG8BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG16BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG16BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 16 Bit';
NROFPERCRITREG16BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 16 ' ...
  'bit access'];
NROFPERCRITREG16BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG16BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG16BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG16BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG16BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG16BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG16BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG32BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG32BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 32 Bit';
NROFPERCRITREG32BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 32 ' ...
  'bit access'];
NROFPERCRITREG32BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG32BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG32BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG32BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG32BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG32BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG32BIT_CNT_U16.Define = 'Local';


NROFPERCRITREG8BIT_CNT_U16 = DataDict.ConfigParam;
NROFPERCRITREG8BIT_CNT_U16.LongName = 'Number Of Periodic Critical Registers 8 Bit';
NROFPERCRITREG8BIT_CNT_U16.Description = [...
  'Number of critical registers that need to be read periodically via 8 b' ...
  'it access'];
NROFPERCRITREG8BIT_CNT_U16.IsBuildPrm = false;
NROFPERCRITREG8BIT_CNT_U16.DocUnits = 'Cnt';
NROFPERCRITREG8BIT_CNT_U16.EngDT = dt.u16;
NROFPERCRITREG8BIT_CNT_U16.EngVal = 0;
NROFPERCRITREG8BIT_CNT_U16.EngMin = 0;
NROFPERCRITREG8BIT_CNT_U16.EngMax = 65535;
NROFPERCRITREG8BIT_CNT_U16.Define = 'Local';


STD_ON = DataDict.Constant;
STD_ON.LongName = 'Standard On';
STD_ON.Description = 'TRUE';
STD_ON.DocUnits = 'Cnt';
STD_ON.EngDT = dt.lgc;
STD_ON.EngVal = 1;
STD_ON.Define = 'Global';


VRFYCRITREGMCALFLT_CNT_U08 = DataDict.Constant;
VRFYCRITREGMCALFLT_CNT_U08.LongName = 'MCal Fault Handler parameter Bit';
VRFYCRITREGMCALFLT_CNT_U08.Description = [...
  'MCal Fault Handler Failure parameter Bit'];
VRFYCRITREGMCALFLT_CNT_U08.DocUnits = 'Cnt';
VRFYCRITREGMCALFLT_CNT_U08.EngDT = dt.u08;
VRFYCRITREGMCALFLT_CNT_U08.EngVal = 4;
VRFYCRITREGMCALFLT_CNT_U08.Define = 'Local';


VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC = DataDict.ConfigParam;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.LongName = 'MCU Diagnostic Error Injection';
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.Description = [...
  'This is false for production builds.  It is set to true at compile tim' ...
  'e only for s/w special builds with MCU Error Injection active.'];
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.IsBuildPrm = false;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.DocUnits = 'Cnt';
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngDT = dt.lgc;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngVal = 0;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngMin = 0;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.EngMax = 1;
VRFYCRITREG_MCUDIAGCERRINJ_CNT_LGC.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
CritRegFailr = DataDict.NTC;
CritRegFailr.NtcNr = NtcNr1.NTCNR_0X020;
CritRegFailr.NtcTyp = 'None';
CritRegFailr.LongName = 'Critical Register Failure';
CritRegFailr.Description = 'Failure detected when the register value is different from expected value';
CritRegFailr.NtcStInfo = DataDict.NtcStInfoBitPacked;
CritRegFailr.NtcStInfo.Bit0Descr = 'Non-system Critical Register Fault';
CritRegFailr.NtcStInfo.Bit1Descr = 'System Critical Register Fault';
CritRegFailr.NtcStInfo.Bit2Descr = 'MCal Write Verify Exception Handling Fault';
CritRegFailr.NtcStInfo.Bit3Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit4Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit5Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit6Descr = 'Unused';
CritRegFailr.NtcStInfo.Bit7Descr = 'Unused';


%end of Data Dictionary
