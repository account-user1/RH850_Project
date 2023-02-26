%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Mar-2018 17:11:45       %
%                                  Created with tool release: 3.3.0      %
%                                  Synergy file: %version: 5 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM770A = DataDict.FDD;
CM770A.Version = '3.1.X';
CM770A.LongName = 'Gtm Peripheral Configuration and Use';
CM770A.ShoName  = 'GtmCfgAndUse';
CM770A.DesignASIL = 'D';
CM770A.Description = [...
  'Peripheral Gtm Configuration and Use'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
GtmCfgAndUseInit1 = DataDict.Runnable;
GtmCfgAndUseInit1.Context = 'Rte';
GtmCfgAndUseInit1.TimeStep = 0;
GtmCfgAndUseInit1.Description = 'Runnable used for Initializing GTM';

GtmCfgAndUsePer1 = DataDict.Runnable;
GtmCfgAndUsePer1.Context = 'NonRte';
GtmCfgAndUsePer1.TimeStep = 'MotorControl';
GtmCfgAndUsePer1.Description = [...
  'Periodic1 is used to update the Phase On times at Motor Control Rate a' ...
  'nd this need to run after sinevoltagegenn motor control periodic'];

GtmCfgAndUsePer2 = DataDict.Runnable;
GtmCfgAndUsePer2.Context = 'Rte';
GtmCfgAndUsePer2.TimeStep = 0.002;
GtmCfgAndUsePer2.Description = [...
  'Periodic2 is used for the following , 1) phase reasonableness 2) Mappi' ...
  'ng the PWM Timer outputs between GPIO/Peripheral based on system state' ...
  ' 3) Perform EOL calibration. This periodic needs to run before he ES31' ...
  '1'];

GtmGetSent0Data = DataDict.SrvRunnable;
GtmGetSent0Data.Context = 'Rte';
GtmGetSent0Data.Description = [...
  'Server Runnable for getting Sent Data from Gtm/Mcs TIM0/Channel1'];
GtmGetSent0Data.Return = DataDict.CSReturn;
GtmGetSent0Data.Return.Type = 'Standard';
GtmGetSent0Data.Return.Min = 0;
GtmGetSent0Data.Return.Max = 1;
GtmGetSent0Data.Return.TestTolerance = 0;
GtmGetSent0Data.Return.Description = 'Return for the Server runnable';
GtmGetSent0Data.Arguments(1) = DataDict.CSArguments;
GtmGetSent0Data.Arguments(1).Name = 'BufStrt';
GtmGetSent0Data.Arguments(1).EngDT = dt.u32;
GtmGetSent0Data.Arguments(1).EngMin = 0;
GtmGetSent0Data.Arguments(1).EngMax = 4294967295;
GtmGetSent0Data.Arguments(1).TestTolerance = 0;
GtmGetSent0Data.Arguments(1).Units = 'Cnt';
GtmGetSent0Data.Arguments(1).Direction = 'Out';
GtmGetSent0Data.Arguments(1).InitRowCol = [1  32];
GtmGetSent0Data.Arguments(1).Description = [...
  'Argument passed is the address of a buffer'];

GtmGetSent1Data = DataDict.SrvRunnable;
GtmGetSent1Data.Context = 'Rte';
GtmGetSent1Data.Description = [...
  'Server Runnable for getting Sent Data from Gtm/Mcs TIM0/Channel4'];
GtmGetSent1Data.Return = DataDict.CSReturn;
GtmGetSent1Data.Return.Type = 'Standard';
GtmGetSent1Data.Return.Min = 0;
GtmGetSent1Data.Return.Max = 1;
GtmGetSent1Data.Return.TestTolerance = 0;
GtmGetSent1Data.Return.Description = 'Return for the Server runnable';
GtmGetSent1Data.Arguments(1) = DataDict.CSArguments;
GtmGetSent1Data.Arguments(1).Name = 'BufStrt';
GtmGetSent1Data.Arguments(1).EngDT = dt.u32;
GtmGetSent1Data.Arguments(1).EngMin = 0;
GtmGetSent1Data.Arguments(1).EngMax = 4294967295;
GtmGetSent1Data.Arguments(1).TestTolerance = 0;
GtmGetSent1Data.Arguments(1).Units = 'Cnt';
GtmGetSent1Data.Arguments(1).Direction = 'Out';
GtmGetSent1Data.Arguments(1).InitRowCol = [1  32];
GtmGetSent1Data.Arguments(1).Description = [...
  'Argument passed is the address of a buffer'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
IoHwAb_SetFctGpioPhaALowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaALowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaALowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaALowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaALowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaALowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaALowrCmd.Return.Description = 'None';


IoHwAb_SetFctGpioPhaAUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaAUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaAUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaAUpprCmd.Return.Description = 'None';


IoHwAb_SetFctGpioPhaBLowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaBLowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaBLowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaBLowrCmd.Return.Description = 'None';


IoHwAb_SetFctGpioPhaBUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaBUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaBUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaBUpprCmd.Return.Description = 'None';


IoHwAb_SetFctGpioPhaCLowrCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaCLowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaCLowrCmd.Description = 'None';
IoHwAb_SetFctGpioPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaCLowrCmd.Return.Description = 'None';


IoHwAb_SetFctGpioPhaCUpprCmd = DataDict.Client;
IoHwAb_SetFctGpioPhaCUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetFctGpioPhaCUpprCmd.Description = 'None';
IoHwAb_SetFctGpioPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctGpioPhaCUpprCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaALowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaALowrCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaALowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaALowrCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaAUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaAUpprCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaAUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaAUpprCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaBLowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaBLowrCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaBLowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaBLowrCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaBUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaBUpprCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaBUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaBUpprCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaCLowrCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaCLowrCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaCLowrCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaCLowrCmd.Return.Description = 'None';


IoHwAb_SetFctPeriphPhaCUpprCmd = DataDict.Client;
IoHwAb_SetFctPeriphPhaCUpprCmd.CallLocation = {'GtmCfgAndUsePer2'};
IoHwAb_SetFctPeriphPhaCUpprCmd.Description = 'None';
IoHwAb_SetFctPeriphPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetFctPeriphPhaCUpprCmd.Return.Description = 'None';


IoHwAb_SetGpioPhaALowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaALowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaALowrCmd.Description = 'None';
IoHwAb_SetGpioPhaALowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaALowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaALowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaALowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaALowrCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaALowrCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaALowrCmd.Arguments(1).Description = 'None';


IoHwAb_SetGpioPhaAUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaAUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaAUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaAUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaAUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaAUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaAUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaAUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaAUpprCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaAUpprCmd.Arguments(1).Description = 'None';


IoHwAb_SetGpioPhaBLowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaBLowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaBLowrCmd.Description = 'None';
IoHwAb_SetGpioPhaBLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaBLowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaBLowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaBLowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaBLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaBLowrCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaBLowrCmd.Arguments(1).Description = 'None';


IoHwAb_SetGpioPhaBUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaBUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaBUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaBUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaBUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaBUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaBUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaBUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaBUpprCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaBUpprCmd.Arguments(1).Description = 'None';


IoHwAb_SetGpioPhaCLowrCmd = DataDict.Client;
IoHwAb_SetGpioPhaCLowrCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaCLowrCmd.Description = 'None';
IoHwAb_SetGpioPhaCLowrCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaCLowrCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaCLowrCmd.Return.Min = 0;
IoHwAb_SetGpioPhaCLowrCmd.Return.Max = 1;
IoHwAb_SetGpioPhaCLowrCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaCLowrCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaCLowrCmd.Arguments(1).Description = 'None';


IoHwAb_SetGpioPhaCUpprCmd = DataDict.Client;
IoHwAb_SetGpioPhaCUpprCmd.CallLocation = {'GtmCfgAndUseInit1','GtmCfgAndUsePer2'};
IoHwAb_SetGpioPhaCUpprCmd.Description = 'None';
IoHwAb_SetGpioPhaCUpprCmd.Return = DataDict.CSReturn;
IoHwAb_SetGpioPhaCUpprCmd.Return.Type = 'Standard';
IoHwAb_SetGpioPhaCUpprCmd.Return.Min = 0;
IoHwAb_SetGpioPhaCUpprCmd.Return.Max = 1;
IoHwAb_SetGpioPhaCUpprCmd.Return.TestTolerance = 0;
IoHwAb_SetGpioPhaCUpprCmd.Return.Description = 'None';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1) = DataDict.CSArguments;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Name = 'PinSt';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngDT = dt.lgc;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngMin = 0;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).EngMax = 1;
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Units = 'Cnt';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Direction = 'In';
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).InitRowCol = [1  1];
IoHwAb_SetGpioPhaCUpprCmd.Arguments(1).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
IvtrFetFltPha = DataDict.IpSignal;
IvtrFetFltPha.LongName = 'Inverter Field Effect Transistor Fault Phase';
IvtrFetFltPha.Description = [...
  'An indication of a FET failure in the bridge.  Enumerated value indica' ...
  'ting a single FET fault detected in phase A, B or C.  A multiple FET f' ...
  'ailure will result in NOPHASNGGETFLT.'];
IvtrFetFltPha.DocUnits = 'Cnt';
IvtrFetFltPha.EngDT = enum.IvtrFetFltPha1;
IvtrFetFltPha.EngInit = IvtrFetFltPha1.IVTRFETFLTPHA_NOPHASNGFETFLT;
IvtrFetFltPha.EngMin = IvtrFetFltPha1.IVTRFETFLTPHA_NOPHASNGFETFLT;
IvtrFetFltPha.EngMax = IvtrFetFltPha1.IVTRFETFLTPHA_PHACSNGFETFLT;
IvtrFetFltPha.ReadIn = {'GtmCfgAndUsePer2'};
IvtrFetFltPha.ReadType = 'Rte';


MotCtrlMotCurrEolCalSt = DataDict.IpSignal;
MotCtrlMotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCtrlMotCurrEolCalSt.Description = 'None';
MotCtrlMotCurrEolCalSt.DocUnits = 'Cnt';
MotCtrlMotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCtrlMotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCtrlMotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCtrlMotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCtrlMotCurrEolCalSt.ReadIn = {'GtmCfgAndUsePer1'};
MotCtrlMotCurrEolCalSt.ReadType = 'NonRte';


MotCtrlPhaOnTiA = DataDict.IpSignal;
MotCtrlPhaOnTiA.LongName = 'Phase A on Time';
MotCtrlPhaOnTiA.Description = 'None';
MotCtrlPhaOnTiA.DocUnits = 'NanoSec';
MotCtrlPhaOnTiA.EngDT = dt.u32;
MotCtrlPhaOnTiA.EngInit = 0;
MotCtrlPhaOnTiA.EngMin = 0;
MotCtrlPhaOnTiA.EngMax = 71429;
MotCtrlPhaOnTiA.ReadIn = {'GtmCfgAndUsePer1'};
MotCtrlPhaOnTiA.ReadType = 'NonRte';


MotCtrlPhaOnTiB = DataDict.IpSignal;
MotCtrlPhaOnTiB.LongName = 'Phase B on Time';
MotCtrlPhaOnTiB.Description = 'None';
MotCtrlPhaOnTiB.DocUnits = 'NanoSec';
MotCtrlPhaOnTiB.EngDT = dt.u32;
MotCtrlPhaOnTiB.EngInit = 0;
MotCtrlPhaOnTiB.EngMin = 0;
MotCtrlPhaOnTiB.EngMax = 71429;
MotCtrlPhaOnTiB.ReadIn = {'GtmCfgAndUsePer1'};
MotCtrlPhaOnTiB.ReadType = 'NonRte';


MotCtrlPhaOnTiC = DataDict.IpSignal;
MotCtrlPhaOnTiC.LongName = 'Phase C on Time';
MotCtrlPhaOnTiC.Description = 'None';
MotCtrlPhaOnTiC.DocUnits = 'NanoSec';
MotCtrlPhaOnTiC.EngDT = dt.u32;
MotCtrlPhaOnTiC.EngInit = 0;
MotCtrlPhaOnTiC.EngMin = 0;
MotCtrlPhaOnTiC.EngMax = 71429;
MotCtrlPhaOnTiC.ReadIn = {'GtmCfgAndUsePer1'};
MotCtrlPhaOnTiC.ReadType = 'NonRte';


MotCtrlPwmPerd = DataDict.IpSignal;
MotCtrlPwmPerd.LongName = 'PWM Period';
MotCtrlPwmPerd.Description = 'None';
MotCtrlPwmPerd.DocUnits = 'NanoSec';
MotCtrlPwmPerd.EngDT = dt.u32;
MotCtrlPwmPerd.EngInit = 62500;
MotCtrlPwmPerd.EngMin = 55555;
MotCtrlPwmPerd.EngMax = 71429;
MotCtrlPwmPerd.ReadIn = {'GtmCfgAndUsePer1'};
MotCtrlPwmPerd.ReadType = 'NonRte';


MotCurrEolCalSt = DataDict.IpSignal;
MotCurrEolCalSt.LongName = 'Motor Current EOL Calibration State';
MotCurrEolCalSt.Description = 'None';
MotCurrEolCalSt.DocUnits = 'Cnt';
MotCurrEolCalSt.EngDT = enum.MotCurrEolCalSt2;
MotCurrEolCalSt.EngInit = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMin = MotCurrEolCalSt2.MCECS_OFFSCMDSTRT;
MotCurrEolCalSt.EngMax = MotCurrEolCalSt2.MCECS_CMDSAFEST;
MotCurrEolCalSt.ReadIn = {'GtmCfgAndUsePer2'};
MotCurrEolCalSt.ReadType = 'Rte';


SysSt = DataDict.IpSignal;
SysSt.LongName = 'SystemState';
SysSt.Description = 'None';
SysSt.DocUnits = 'Cnt';
SysSt.EngDT = enum.SysSt1;
SysSt.EngInit = SysSt1.SYSST_WRMININ;
SysSt.EngMin = SysSt1.SYSST_DI;
SysSt.EngMax = SysSt1.SYSST_WRMININ;
SysSt.ReadIn = {'GtmCfgAndUsePer2'};
SysSt.ReadType = 'Rte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
PhaOnTiMeasdA = DataDict.OpSignal;
PhaOnTiMeasdA.LongName = 'Phase on Time Measured A';
PhaOnTiMeasdA.Description = 'Measured On Time for Phase A';
PhaOnTiMeasdA.DocUnits = 'NanoSec';
PhaOnTiMeasdA.SwcShoName = 'GtmCfgAndUse';
PhaOnTiMeasdA.EngDT = dt.u32;
PhaOnTiMeasdA.EngInit = 0;
PhaOnTiMeasdA.EngMin = 0;
PhaOnTiMeasdA.EngMax = 4294967295;
PhaOnTiMeasdA.TestTolerance = 0;
PhaOnTiMeasdA.WrittenIn = {'GtmCfgAndUsePer2'};
PhaOnTiMeasdA.WriteType = 'Rte';


PhaOnTiMeasdB = DataDict.OpSignal;
PhaOnTiMeasdB.LongName = 'Phase on Time Measured B';
PhaOnTiMeasdB.Description = 'Measured On Time for Phase B';
PhaOnTiMeasdB.DocUnits = 'NanoSec';
PhaOnTiMeasdB.SwcShoName = 'GtmCfgAndUse';
PhaOnTiMeasdB.EngDT = dt.u32;
PhaOnTiMeasdB.EngInit = 0;
PhaOnTiMeasdB.EngMin = 0;
PhaOnTiMeasdB.EngMax = 4294967295;
PhaOnTiMeasdB.TestTolerance = 0;
PhaOnTiMeasdB.WrittenIn = {'GtmCfgAndUsePer2'};
PhaOnTiMeasdB.WriteType = 'Rte';


PhaOnTiMeasdC = DataDict.OpSignal;
PhaOnTiMeasdC.LongName = 'Phase on Time Measured C';
PhaOnTiMeasdC.Description = 'Measured On Time for Phase C';
PhaOnTiMeasdC.DocUnits = 'NanoSec';
PhaOnTiMeasdC.SwcShoName = 'GtmCfgAndUse';
PhaOnTiMeasdC.EngDT = dt.u32;
PhaOnTiMeasdC.EngInit = 0;
PhaOnTiMeasdC.EngMin = 0;
PhaOnTiMeasdC.EngMax = 4294967295;
PhaOnTiMeasdC.TestTolerance = 0;
PhaOnTiMeasdC.WrittenIn = {'GtmCfgAndUsePer2'};
PhaOnTiMeasdC.WriteType = 'Rte';



%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
GtmCfgAndUseAdcStrtOfCnvn2Offs = DataDict.Calibration;
GtmCfgAndUseAdcStrtOfCnvn2Offs.LongName = 'ADC start of conversion 2 Offset';
GtmCfgAndUseAdcStrtOfCnvn2Offs.Description = 'ADC start of conversion 2 Offset';
GtmCfgAndUseAdcStrtOfCnvn2Offs.DocUnits = 'NanoSec';
GtmCfgAndUseAdcStrtOfCnvn2Offs.EngDT = dt.u32;
GtmCfgAndUseAdcStrtOfCnvn2Offs.EngVal = 25000;
GtmCfgAndUseAdcStrtOfCnvn2Offs.EngMin = 1;
GtmCfgAndUseAdcStrtOfCnvn2Offs.EngMax = 71428;
GtmCfgAndUseAdcStrtOfCnvn2Offs.Cardinality = 'Cmn';
GtmCfgAndUseAdcStrtOfCnvn2Offs.CustomerVisible = false;
GtmCfgAndUseAdcStrtOfCnvn2Offs.Online = false;
GtmCfgAndUseAdcStrtOfCnvn2Offs.Impact = 'H';
GtmCfgAndUseAdcStrtOfCnvn2Offs.TuningOwner = 'FDD';
GtmCfgAndUseAdcStrtOfCnvn2Offs.GraphLink = {''};
GtmCfgAndUseAdcStrtOfCnvn2Offs.Monotony = 'None';
GtmCfgAndUseAdcStrtOfCnvn2Offs.MaxGrad = 0;
GtmCfgAndUseAdcStrtOfCnvn2Offs.PortName = 'GtmCfgAndUseAdcStrtOfCnvn2Offs';


GtmCfgAndUseAdcStrtOfCnvnPeakOffs = DataDict.Calibration;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.LongName = 'ADC start of conversion peak Offset';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.Description = [...
  'ADC start of conversion peak Offset'];
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.DocUnits = 'NanoSec';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.EngDT = dt.u32;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.EngVal = 5000;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.EngMin = 1;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.EngMax = 71428;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.Cardinality = 'Cmn';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.CustomerVisible = false;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.Online = false;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.Impact = 'H';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.TuningOwner = 'FDD';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.GraphLink = {''};
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.Monotony = 'None';
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.MaxGrad = 0;
GtmCfgAndUseAdcStrtOfCnvnPeakOffs.PortName = 'GtmCfgAndUseAdcStrtOfCnvnPeakOffs';


GtmCfgAndUseDma2MilliSecToMotCtrlTrig = DataDict.Calibration;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.LongName = 'DMA Two Milli Second to Motor Control Trigger';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.Description = [...
  'DMA Two Milli Second to Motor Control Trigger'];
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.DocUnits = 'NanoSec';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.EngDT = dt.u32;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.EngVal = 25000;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.EngMin = 1;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.EngMax = 71428;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.Cardinality = 'Cmn';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.CustomerVisible = false;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.Online = false;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.Impact = 'H';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.TuningOwner = 'FDD';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.GraphLink = {''};
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.Monotony = 'None';
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.MaxGrad = 0;
GtmCfgAndUseDma2MilliSecToMotCtrlTrig.PortName = 'GtmCfgAndUseDma2MilliSecToMotCtrlTrig';


GtmCfgAndUseDmaMotAgATrig = DataDict.Calibration;
GtmCfgAndUseDmaMotAgATrig.LongName = 'DMA motor angle A Trigger';
GtmCfgAndUseDmaMotAgATrig.Description = 'DMA motor angle A Trigger';
GtmCfgAndUseDmaMotAgATrig.DocUnits = 'NanoSec';
GtmCfgAndUseDmaMotAgATrig.EngDT = dt.u32;
GtmCfgAndUseDmaMotAgATrig.EngVal = 25000;
GtmCfgAndUseDmaMotAgATrig.EngMin = 1;
GtmCfgAndUseDmaMotAgATrig.EngMax = 71428;
GtmCfgAndUseDmaMotAgATrig.Cardinality = 'Cmn';
GtmCfgAndUseDmaMotAgATrig.CustomerVisible = false;
GtmCfgAndUseDmaMotAgATrig.Online = false;
GtmCfgAndUseDmaMotAgATrig.Impact = 'H';
GtmCfgAndUseDmaMotAgATrig.TuningOwner = 'FDD';
GtmCfgAndUseDmaMotAgATrig.GraphLink = {''};
GtmCfgAndUseDmaMotAgATrig.Monotony = 'None';
GtmCfgAndUseDmaMotAgATrig.MaxGrad = 0;
GtmCfgAndUseDmaMotAgATrig.PortName = 'GtmCfgAndUseDmaMotAgATrig';


GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig = DataDict.Calibration;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.LongName = 'DMA Motor Control to Two Milli Second Trigger';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.Description = [...
  'DMA Motor Control to Two Milli Second Trigger'];
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.DocUnits = 'NanoSec';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.EngDT = dt.u32;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.EngVal = 25000;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.EngMin = 1;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.EngMax = 71428;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.Cardinality = 'Cmn';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.CustomerVisible = false;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.Online = false;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.Impact = 'H';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.TuningOwner = 'FDD';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.GraphLink = {''};
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.Monotony = 'None';
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.MaxGrad = 0;
GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig.PortName = 'GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig';


GtmCfgAndUsePwmDbnd = DataDict.Calibration;
GtmCfgAndUsePwmDbnd.LongName = 'PWM Deadband';
GtmCfgAndUsePwmDbnd.Description = 'PWM Deadband';
GtmCfgAndUsePwmDbnd.DocUnits = 'NanoSec';
GtmCfgAndUsePwmDbnd.EngDT = dt.u32;
GtmCfgAndUsePwmDbnd.EngVal = 200;
GtmCfgAndUsePwmDbnd.EngMin = 1;
GtmCfgAndUsePwmDbnd.EngMax = 1000;
GtmCfgAndUsePwmDbnd.Cardinality = 'Cmn';
GtmCfgAndUsePwmDbnd.CustomerVisible = false;
GtmCfgAndUsePwmDbnd.Online = false;
GtmCfgAndUsePwmDbnd.Impact = 'H';
GtmCfgAndUsePwmDbnd.TuningOwner = 'FDD';
GtmCfgAndUsePwmDbnd.GraphLink = {''};
GtmCfgAndUsePwmDbnd.Monotony = 'None';
GtmCfgAndUsePwmDbnd.MaxGrad = 0;
GtmCfgAndUsePwmDbnd.PortName = 'GtmCfgAndUsePwmDbnd';



%%-------------------------------------------
%% Imported Calibrations Definition                   
%%-------------------------------------------
CurrMeasEolFixdPwmPerd = DataDict.ImprtdCal;
CurrMeasEolFixdPwmPerd.DocUnits = 'NanoSec';
CurrMeasEolFixdPwmPerd.EngDT = dt.u32;
CurrMeasEolFixdPwmPerd.EngVal = 62500;
CurrMeasEolFixdPwmPerd.EngMin = 55555;
CurrMeasEolFixdPwmPerd.EngMax = 71429;
CurrMeasEolFixdPwmPerd.PortName = 'CurrMeasEolFixdPwmPerd';
CurrMeasEolFixdPwmPerd.Description = 'Motor Current EOL Fixed PWM Period';


CurrMeasEolOffsHiCmuOffs = DataDict.ImprtdCal;
CurrMeasEolOffsHiCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsHiCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsHiCmuOffs.EngVal = 50000;
CurrMeasEolOffsHiCmuOffs.EngMin = 35715;
CurrMeasEolOffsHiCmuOffs.EngMax = 71429;
CurrMeasEolOffsHiCmuOffs.PortName = 'CurrMeasEolOffsHiCmuOffs';
CurrMeasEolOffsHiCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];


CurrMeasEolOffsLoCmuOffs = DataDict.ImprtdCal;
CurrMeasEolOffsLoCmuOffs.DocUnits = 'NanoSec';
CurrMeasEolOffsLoCmuOffs.EngDT = dt.u32;
CurrMeasEolOffsLoCmuOffs.EngVal = 6250;
CurrMeasEolOffsLoCmuOffs.EngMin = 0;
CurrMeasEolOffsLoCmuOffs.EngMax = 35714;
CurrMeasEolOffsLoCmuOffs.PortName = 'CurrMeasEolOffsLoCmuOffs';
CurrMeasEolOffsLoCmuOffs.Description = [...
  '71,429ns is derived from the PWM period with dither (1/14kHz = 71428.6' ...
  'ns).  Constraints on the calibration are: HiCmuOffs is desired to be c' ...
  'lose to the maximum period 71429 while LoCmuOffs is desired to be clos' ...
  'e to the minimum period of 0.  However, in reality these values cannot' ...
  ' be max/min due to non-linearity at the extremes.  To meet these const' ...
  'raints 50% of 71429 was chosen to set the limits of CurrMeasEolOffsHiC' ...
  'muOffs.EngMin and CurrMeasEolOffsHiCmuOffs.EngMax'];



%%-------------------------------------------
%% Non-Volatile Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
AdcStrtOfCnvn2 = DataDict.PIM;
AdcStrtOfCnvn2.LongName = 'ADC start of conversion 2';
AdcStrtOfCnvn2.Description = 'ADC start of conversion 2';
AdcStrtOfCnvn2.DocUnits = 'Cnt';
AdcStrtOfCnvn2.EngDT = dt.u32;
AdcStrtOfCnvn2.EngMin = 0;
AdcStrtOfCnvn2.EngMax = 5715;
AdcStrtOfCnvn2.InitRowCol = [1  1];


AdcStrtOfCnvnPeak = DataDict.PIM;
AdcStrtOfCnvnPeak.LongName = 'ADC start of conversion peak';
AdcStrtOfCnvnPeak.Description = 'ADC start of conversion peak';
AdcStrtOfCnvnPeak.DocUnits = 'Cnt';
AdcStrtOfCnvnPeak.EngDT = dt.u32;
AdcStrtOfCnvnPeak.EngMin = 0;
AdcStrtOfCnvnPeak.EngMax = 5715;
AdcStrtOfCnvnPeak.InitRowCol = [1  1];


Dma2MilliSecToMotCtrlTrig = DataDict.PIM;
Dma2MilliSecToMotCtrlTrig.LongName = 'DMA Motor angle 1 spi start';
Dma2MilliSecToMotCtrlTrig.Description = 'DMA Motor angle 1 spi start';
Dma2MilliSecToMotCtrlTrig.DocUnits = 'Cnt';
Dma2MilliSecToMotCtrlTrig.EngDT = dt.u32;
Dma2MilliSecToMotCtrlTrig.EngMin = 0;
Dma2MilliSecToMotCtrlTrig.EngMax = 5715;
Dma2MilliSecToMotCtrlTrig.InitRowCol = [1  1];


DmaMotAgATrig = DataDict.PIM;
DmaMotAgATrig.LongName = 'DMA Motor angle A Trigger';
DmaMotAgATrig.Description = 'DMA Motor angle A Trigger';
DmaMotAgATrig.DocUnits = 'Cnt';
DmaMotAgATrig.EngDT = dt.u32;
DmaMotAgATrig.EngMin = 0;
DmaMotAgATrig.EngMax = 5715;
DmaMotAgATrig.InitRowCol = [1  1];


DmaMotCtrlTo2MilliSecTrig = DataDict.PIM;
DmaMotCtrlTo2MilliSecTrig.LongName = 'DMA Motor Control to Two Milli Second Trigger';
DmaMotCtrlTo2MilliSecTrig.Description = [...
  'DMA Motor Control to Two Milli Second Trigger'];
DmaMotCtrlTo2MilliSecTrig.DocUnits = 'Cnt';
DmaMotCtrlTo2MilliSecTrig.EngDT = dt.u32;
DmaMotCtrlTo2MilliSecTrig.EngMin = 0;
DmaMotCtrlTo2MilliSecTrig.EngMax = 5715;
DmaMotCtrlTo2MilliSecTrig.InitRowCol = [1  1];


MissUpdCntr = DataDict.PIM;
MissUpdCntr.LongName = 'Missed Update - Gross Accumulator';
MissUpdCntr.Description = 'Missed Update - Gross Accumulator';
MissUpdCntr.DocUnits = 'Cnt';
MissUpdCntr.EngDT = dt.u16;
MissUpdCntr.EngMin = 0;
MissUpdCntr.EngMax = 65535;
MissUpdCntr.InitRowCol = [1  1];


MissUpdIninCntr = DataDict.PIM;
MissUpdIninCntr.LongName = 'Missed Update Initialization Counter';
MissUpdIninCntr.Description = [...
  'Missed Update Initialization Counter'];
MissUpdIninCntr.DocUnits = 'MotRev';
MissUpdIninCntr.EngDT = dt.u08;
MissUpdIninCntr.EngMin = 0;
MissUpdIninCntr.EngMax = 255;
MissUpdIninCntr.InitRowCol = [1  1];


PhaAFetFldSts = DataDict.PIM;
PhaAFetFldSts.LongName = 'Phase A FET failed status';
PhaAFetFldSts.Description = [...
  'Boolean Pim used to latch Phase A fault'];
PhaAFetFldSts.DocUnits = 'Cnt';
PhaAFetFldSts.EngDT = dt.lgc;
PhaAFetFldSts.EngMin = 0;
PhaAFetFldSts.EngMax = 1;
PhaAFetFldSts.InitRowCol = [1  1];


PhaBFetFldSts = DataDict.PIM;
PhaBFetFldSts.LongName = 'Phase B FET failed status';
PhaBFetFldSts.Description = [...
  'Boolean Pim used to latch Phase B fault'];
PhaBFetFldSts.DocUnits = 'Cnt';
PhaBFetFldSts.EngDT = dt.lgc;
PhaBFetFldSts.EngMin = 0;
PhaBFetFldSts.EngMax = 1;
PhaBFetFldSts.InitRowCol = [1  1];


PhaCFetFldSts = DataDict.PIM;
PhaCFetFldSts.LongName = 'Phase C FET failed status';
PhaCFetFldSts.Description = [...
  'Boolean Pim used to latch Phase C fault'];
PhaCFetFldSts.DocUnits = 'Cnt';
PhaCFetFldSts.EngDT = dt.lgc;
PhaCFetFldSts.EngMin = 0;
PhaCFetFldSts.EngMax = 1;
PhaCFetFldSts.InitRowCol = [1  1];


PhaOnTiCntrAPrev = DataDict.PIM;
PhaOnTiCntrAPrev.LongName = 'Phase A On Time Counter Previous';
PhaOnTiCntrAPrev.Description = [...
  'Previous instance of the Phase A On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrAPrev.DocUnits = 'Cnt';
PhaOnTiCntrAPrev.EngDT = dt.u32;
PhaOnTiCntrAPrev.EngMin = 0;
PhaOnTiCntrAPrev.EngMax = 4294967295;
PhaOnTiCntrAPrev.InitRowCol = [1  1];


PhaOnTiCntrBPrev = DataDict.PIM;
PhaOnTiCntrBPrev.LongName = 'Phase B On Time Counter Previous';
PhaOnTiCntrBPrev.Description = [...
  'Previous instance of the Phase B On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrBPrev.DocUnits = 'Cnt';
PhaOnTiCntrBPrev.EngDT = dt.u32;
PhaOnTiCntrBPrev.EngMin = 0;
PhaOnTiCntrBPrev.EngMax = 4294967295;
PhaOnTiCntrBPrev.InitRowCol = [1  1];


PhaOnTiCntrCPrev = DataDict.PIM;
PhaOnTiCntrCPrev.LongName = 'Phase C On Time Counter Previous';
PhaOnTiCntrCPrev.Description = [...
  'Previous instance of the Phase C On Time Counter in sampling frequency' ...
  ' units'];
PhaOnTiCntrCPrev.DocUnits = 'Cnt';
PhaOnTiCntrCPrev.EngDT = dt.u32;
PhaOnTiCntrCPrev.EngMin = 0;
PhaOnTiCntrCPrev.EngMax = 4294967295;
PhaOnTiCntrCPrev.InitRowCol = [1  1];


SysStEnaPrev = DataDict.PIM;
SysStEnaPrev.LongName = 'System State in Enable Previous';
SysStEnaPrev.Description = 'System State in Enable Previous';
SysStEnaPrev.DocUnits = 'Cnt';
SysStEnaPrev.EngDT = dt.lgc;
SysStEnaPrev.EngMin = 0;
SysStEnaPrev.EngMax = 1;
SysStEnaPrev.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32 = DataDict.ConfigParam;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.LongName = 'Minimum PWM Period';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Description = [...
  'Minimum PWM period in units of NanoSec.  ELECGLBPRM_PWMPERDMIN_NANOSEC' ...
  '_U32.EngVal = 1e9/ELECGLBPRM_PWMFRQMAX_HZ_U32.EngVal.  EngMin = 1e9/22' ...
  'e3, EngMax = 1e9/14e3'];
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.IsBuildPrm = false;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.DocUnits = 'NanoSec';
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngDT = dt.u32;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngVal = 55555;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMin = 45455;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.EngMax = 71429;
ELECGLBPRM_PWMPERDMIN_NANOSEC_U32.Define = 'Global';


ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19 = DataDict.Constant;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.LongName = 'Inverse Motor Control Period';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Description = [...
  'Inverse of MOTCTRLTIMFRQ in units of NanoSec. ELECGLBPRM_PWMTMRPERDIVS' ...
  '_CNTPERNANOSEC_U13P19.EngVal = ELECGLBPRM_PWMTMRFRQ_HZ_U32.EngVal/1e9'];
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.DocUnits = 'CntPerNanoSec';
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngDT = dt.u13p19;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.EngVal = 0.08;
ELECGLBPRM_PWMTMRPERDIVS_CNTPERNANOSEC_U13P19.Define = 'Global';


GTMSENTRAMALGNDBYTE_CNT_U08 = DataDict.Constant;
GTMSENTRAMALGNDBYTE_CNT_U08.LongName = 'Gtm Sent Ram Alignment constant ';
GTMSENTRAMALGNDBYTE_CNT_U08.Description = 'Gtm Sent Ram Alignment constant';
GTMSENTRAMALGNDBYTE_CNT_U08.DocUnits = 'Cnt';
GTMSENTRAMALGNDBYTE_CNT_U08.EngDT = dt.u08;
GTMSENTRAMALGNDBYTE_CNT_U08.EngVal = 4;
GTMSENTRAMALGNDBYTE_CNT_U08.Define = 'Local';


GTMSENTRAMBASADR0_CNT_U32 = DataDict.Constant;
GTMSENTRAMBASADR0_CNT_U32.LongName = 'GTM SENT RAM BASE ADDRESS 0';
GTMSENTRAMBASADR0_CNT_U32.Description = [...
  'GTM MCS RAM BASE ADDRESS 0 (0xFFE38040)'];
GTMSENTRAMBASADR0_CNT_U32.DocUnits = 'Cnt';
GTMSENTRAMBASADR0_CNT_U32.EngDT = dt.u32;
GTMSENTRAMBASADR0_CNT_U32.EngVal = 4293099584;
GTMSENTRAMBASADR0_CNT_U32.Define = 'Local';


GTMSENTRAMBASADR1_CNT_U32 = DataDict.Constant;
GTMSENTRAMBASADR1_CNT_U32.LongName = 'GTM SENT RAM BASE ADDRESS 1';
GTMSENTRAMBASADR1_CNT_U32.Description = [...
  'GTM MCS RAM BASE ADDRESS 1 (0xFFE380C0)'];
GTMSENTRAMBASADR1_CNT_U32.DocUnits = 'Cnt';
GTMSENTRAMBASADR1_CNT_U32.EngDT = dt.u32;
GTMSENTRAMBASADR1_CNT_U32.EngVal = 4293099712;
GTMSENTRAMBASADR1_CNT_U32.Define = 'Local';


GTMSENTRAMBASADR_CNT_U32 = DataDict.Constant;
GTMSENTRAMBASADR_CNT_U32.LongName = 'GTM SENT RAM BASE ADDRESS';
GTMSENTRAMBASADR_CNT_U32.Description = [...
  'GTM MCS RAM BASE ADDRESS (0xFFE38000)'];
GTMSENTRAMBASADR_CNT_U32.DocUnits = 'Cnt';
GTMSENTRAMBASADR_CNT_U32.EngDT = dt.u32;
GTMSENTRAMBASADR_CNT_U32.EngVal = 4293099520;
GTMSENTRAMBASADR_CNT_U32.Define = 'Local';


GTMSENTRAMBUFSIZE_CNT_U16 = DataDict.Constant;
GTMSENTRAMBUFSIZE_CNT_U16.LongName = 'GTM SENT RAM BUFFER SIZE';
GTMSENTRAMBUFSIZE_CNT_U16.Description = [...
  '(564/4)(u32) This constant has value of Mcs Ram Buffer Size in U32. Th' ...
  'e value of this constant is the (actual buffer size)/4). This constant' ...
  ' is generated by the assembler and its generated value is in bytes(U08' ...
  '). We convert it to U32 to avoid additional computation.'];
GTMSENTRAMBUFSIZE_CNT_U16.DocUnits = 'Cnt';
GTMSENTRAMBUFSIZE_CNT_U16.EngDT = dt.u16;
GTMSENTRAMBUFSIZE_CNT_U16.EngVal = 137;
GTMSENTRAMBUFSIZE_CNT_U16.Define = 'Local';


GTMTIPERCNT_NANOSECPERCNT_U15P1 = DataDict.Constant;
GTMTIPERCNT_NANOSECPERCNT_U15P1.LongName = 'GTM Time per Count';
GTMTIPERCNT_NANOSECPERCNT_U15P1.Description = [...
  'The GTM counter will be sampling the phase feedback signals at a rate ' ...
  'of 80 MHz.  This constant represents the amount of time per count.'];
GTMTIPERCNT_NANOSECPERCNT_U15P1.DocUnits = 'NanoSecPerCnt';
GTMTIPERCNT_NANOSECPERCNT_U15P1.EngDT = dt.u15p1;
GTMTIPERCNT_NANOSECPERCNT_U15P1.EngVal = 12.5;
GTMTIPERCNT_NANOSECPERCNT_U15P1.Define = 'Local';


MISSUPDCNTRTHD_NANOSEC_U32 = DataDict.Constant;
MISSUPDCNTRTHD_NANOSEC_U32.LongName = 'Threshold to compute missed update(s)';
MISSUPDCNTRTHD_NANOSEC_U32.Description = [...
  'Threshold to compute missed update(s)'];
MISSUPDCNTRTHD_NANOSEC_U32.DocUnits = 'NanoSec';
MISSUPDCNTRTHD_NANOSEC_U32.EngDT = dt.u32;
MISSUPDCNTRTHD_NANOSEC_U32.EngVal = 25000;
MISSUPDCNTRTHD_NANOSEC_U32.Define = 'Local';


MISSUPDININCON_CNT_U08 = DataDict.Constant;
MISSUPDININCON_CNT_U08.LongName = 'Missed Update Init Constant ';
MISSUPDININCON_CNT_U08.Description = 'Missed Update Init Constant';
MISSUPDININCON_CNT_U08.DocUnits = 'Cnt';
MISSUPDININCON_CNT_U08.EngDT = dt.u08;
MISSUPDININCON_CNT_U08.EngVal = 100;
MISSUPDININCON_CNT_U08.Define = 'Local';


PHAFBDELTACNTMAX_CNT_U32 = DataDict.Constant;
PHAFBDELTACNTMAX_CNT_U32.LongName = 'Phase Feedback Delta Count Maximum';
PHAFBDELTACNTMAX_CNT_U32.Description = [...
  'This constant represents maximum value between present and previous va' ...
  'lue of motor phase feedback signal accumulator'];
PHAFBDELTACNTMAX_CNT_U32.DocUnits = 'Cnt';
PHAFBDELTACNTMAX_CNT_U32.EngDT = dt.u32;
PHAFBDELTACNTMAX_CNT_U32.EngVal = 320000;
PHAFBDELTACNTMAX_CNT_U32.Define = 'Local';


PHAFBDELTACNTMIN_CNT_U32 = DataDict.Constant;
PHAFBDELTACNTMIN_CNT_U32.LongName = 'Phase Feedback Delta Count Minimum';
PHAFBDELTACNTMIN_CNT_U32.Description = [...
  'This constant represents minimum value between present and previous va' ...
  'lue of motor phase feedback signal accumulator'];
PHAFBDELTACNTMIN_CNT_U32.DocUnits = 'Cnt';
PHAFBDELTACNTMIN_CNT_U32.EngDT = dt.u32;
PHAFBDELTACNTMIN_CNT_U32.EngVal = 0;
PHAFBDELTACNTMIN_CNT_U32.Define = 'Local';


PHAONTIMEASDMAX_NANOSEC_U32 = DataDict.Constant;
PHAONTIMEASDMAX_NANOSEC_U32.LongName = 'Phase On Time Measured Maximum';
PHAONTIMEASDMAX_NANOSEC_U32.Description = [...
  'Maximum value of Phase On Time Measured'];
PHAONTIMEASDMAX_NANOSEC_U32.DocUnits = 'NanoSec';
PHAONTIMEASDMAX_NANOSEC_U32.EngDT = dt.u32;
PHAONTIMEASDMAX_NANOSEC_U32.EngVal = 16777215;
PHAONTIMEASDMAX_NANOSEC_U32.Define = 'Local';


PHAONTIMIN_NANOSEC_U08 = DataDict.Constant;
PHAONTIMIN_NANOSEC_U08.LongName = 'Phase On Time Minimum';
PHAONTIMIN_NANOSEC_U08.Description = [...
  'Minimum Value of dutycycle to be loaded to GTM. This value will preven' ...
  't the unexpected behavior on Phase B and Phase C when operating in (Tr' ...
  'iggered by [x-1]) mode for period'];
PHAONTIMIN_NANOSEC_U08.DocUnits = 'NanoSec';
PHAONTIMIN_NANOSEC_U08.EngDT = dt.u08;
PHAONTIMIN_NANOSEC_U08.EngVal = 15;
PHAONTIMIN_NANOSEC_U08.Define = 'Local';


PWMTMRPERDIVSSCAGFAC_CNT_U08 = DataDict.Constant;
PWMTMRPERDIVSSCAGFAC_CNT_U08.LongName = '19 shifting constant for Division ';
PWMTMRPERDIVSSCAGFAC_CNT_U08.Description = '19 shifting constant for Division';
PWMTMRPERDIVSSCAGFAC_CNT_U08.DocUnits = 'Cnt';
PWMTMRPERDIVSSCAGFAC_CNT_U08.EngDT = dt.u08;
PWMTMRPERDIVSSCAGFAC_CNT_U08.EngVal = 19;
PWMTMRPERDIVSSCAGFAC_CNT_U08.Define = 'Local';


ROUNDTERMCON_CNT_U13P19 = DataDict.Constant;
ROUNDTERMCON_CNT_U13P19.LongName = '2 RAISED TO 18 ROUNDING TERM';
ROUNDTERMCON_CNT_U13P19.Description = '2 RAISED TO 18 ROUNDING TERM';
ROUNDTERMCON_CNT_U13P19.DocUnits = 'Cnt';
ROUNDTERMCON_CNT_U13P19.EngDT = dt.u13p19;
ROUNDTERMCON_CNT_U13P19.EngVal = 0.5;
ROUNDTERMCON_CNT_U13P19.Define = 'Local';


SENTBUFSIZE_CNT_U08 = DataDict.Constant;
SENTBUFSIZE_CNT_U08.LongName = 'GTM MCS SENT buffer size';
SENTBUFSIZE_CNT_U08.Description = 'GTM MCS SENT buffer size';
SENTBUFSIZE_CNT_U08.DocUnits = 'Cnt';
SENTBUFSIZE_CNT_U08.EngDT = dt.u08;
SENTBUFSIZE_CNT_U08.EngVal = 32;
SENTBUFSIZE_CNT_U08.Define = 'Local';


SHIFTBYWORD_CNT_U08 = DataDict.Constant;
SHIFTBYWORD_CNT_U08.LongName = 'SHIFT CONSTANT 16 ';
SHIFTBYWORD_CNT_U08.Description = 'SHIFT CONSTANT 16';
SHIFTBYWORD_CNT_U08.DocUnits = 'Cnt';
SHIFTBYWORD_CNT_U08.EngDT = dt.u08;
SHIFTBYWORD_CNT_U08.EngVal = 16;
SHIFTBYWORD_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
