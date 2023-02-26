%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Feb-2018 10:57:04       %
%                                  Created with tool release: 3.2.0      %
%                                  Synergy file: %version: 3 %           %
%                                  Derived by: %derived_by: nz2654 %          %
%%-----------------------------------------------------------------------%

CM104B = DataDict.FDD;
CM104B.Version = '1.3.X';
CM104B.LongName = 'ECM Output and Diagnostics';
CM104B.ShoName  = 'EcmOutpAndDiagc';
CM104B.DesignASIL = 'D';
CM104B.Description = [...
  'Manual control over error out pin (ERROROUTZ) and startup verification' ...
  ' test of ECM Master/Checker functionality'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
EcmOutpAndDiagcInit1 = DataDict.Runnable;
EcmOutpAndDiagcInit1.Context = 'NonRte';
EcmOutpAndDiagcInit1.TimeStep = 0;
EcmOutpAndDiagcInit1.Description = [...
  'Verify ECM Error Output Pin Control during start-up test'];

EcmOutpAndDiagcInit2 = DataDict.Runnable;
EcmOutpAndDiagcInit2.Context = 'Rte';
EcmOutpAndDiagcInit2.TimeStep = 0;
EcmOutpAndDiagcInit2.Description = [...
  'RTE initialization function - empty'];

EcmOutpAndDiagcInit3 = DataDict.Runnable;
EcmOutpAndDiagcInit3.Context = 'NonRte';
EcmOutpAndDiagcInit3.TimeStep = 0;
EcmOutpAndDiagcInit3.Description = [...
  'Verify Interrupts Generation and Propagation during start-up test'];

CtrlErrOut = DataDict.SrvRunnable;
CtrlErrOut.Context = 'Both';
CtrlErrOut.Description = [...
  'Manul control over ECM error out pin (ERROROUTZ)'];
CtrlErrOut.Return = DataDict.CSReturn;
CtrlErrOut.Return.Type = 'None';
CtrlErrOut.Return.Min = [];
CtrlErrOut.Return.Max = [];
CtrlErrOut.Return.TestTolerance = [];
CtrlErrOut.Arguments(1) = DataDict.CSArguments;
CtrlErrOut.Arguments(1).Name = 'PinSt';
CtrlErrOut.Arguments(1).EngDT = dt.lgc;
CtrlErrOut.Arguments(1).EngMin = 0;
CtrlErrOut.Arguments(1).EngMax = 1;
CtrlErrOut.Arguments(1).Units = 'Cnt';
CtrlErrOut.Arguments(1).Direction = 'In';
CtrlErrOut.Arguments(1).InitRowCol = [1  1];
CtrlErrOut.Arguments(1).Description = 'ECM error pin new output state';
CtrlErrOut.Arguments(2) = DataDict.CSArguments;
CtrlErrOut.Arguments(2).Name = 'TrigReg';
CtrlErrOut.Arguments(2).EngDT = enum.TrigReg1;
CtrlErrOut.Arguments(2).EngMin = TrigReg1.TRIGREG_MST;
CtrlErrOut.Arguments(2).EngMax = TrigReg1.TRIGREG_MSTANDCHKR;
CtrlErrOut.Arguments(2).Units = 'Cnt';
CtrlErrOut.Arguments(2).Direction = 'In';
CtrlErrOut.Arguments(2).InitRowCol = [1  1];
CtrlErrOut.Arguments(2).Description = [...
  'ECM unit (Master/Checker) trigger register identifier'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
ChkForStrtUpTest = DataDict.Client;
ChkForStrtUpTest.CallLocation = {'EcmOutpAndDiagcInit3','EcmOutpAndDiagcInit1'};
ChkForStrtUpTest.Description = 'None';
ChkForStrtUpTest.Return = DataDict.CSReturn;
ChkForStrtUpTest.Return.Type = 'None';
ChkForStrtUpTest.Return.Min = [];
ChkForStrtUpTest.Return.Max = [];
ChkForStrtUpTest.Return.TestTolerance = [];
ChkForStrtUpTest.Arguments(1) = DataDict.CSArguments;
ChkForStrtUpTest.Arguments(1).Name = 'ExecStrtUpTest';
ChkForStrtUpTest.Arguments(1).EngDT = dt.lgc;
ChkForStrtUpTest.Arguments(1).EngMin = 0;
ChkForStrtUpTest.Arguments(1).EngMax = 1;
ChkForStrtUpTest.Arguments(1).TestTolerance = 0;
ChkForStrtUpTest.Arguments(1).Units = 'Cnt';
ChkForStrtUpTest.Arguments(1).Direction = 'Out';
ChkForStrtUpTest.Arguments(1).InitRowCol = [1  1];
ChkForStrtUpTest.Arguments(1).Description = 'None';


GetMcuDiagcIdnData = DataDict.Client;
GetMcuDiagcIdnData.CallLocation = {'EcmOutpAndDiagcInit3'};
GetMcuDiagcIdnData.Description = 'None';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).TestTolerance = 0;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcIdnData.Arguments(1).Description = 'None';


Mcu_EcmReleaseErrorOutPin = DataDict.Client;
Mcu_EcmReleaseErrorOutPin.CallLocation = {'CtrlErrOut'};
Mcu_EcmReleaseErrorOutPin.Description = [...
  'This function is part of MCAL components provided by Renesas.         ' ...
  'It is necessary to include Mcu.h header before use'];
Mcu_EcmReleaseErrorOutPin.Return = DataDict.CSReturn;
Mcu_EcmReleaseErrorOutPin.Return.Type = 'None';
Mcu_EcmReleaseErrorOutPin.Return.Min = [];
Mcu_EcmReleaseErrorOutPin.Return.Max = [];
Mcu_EcmReleaseErrorOutPin.Return.TestTolerance = [];


SetMcuDiagcIdnData = DataDict.Client;
SetMcuDiagcIdnData.CallLocation = {'EcmOutpAndDiagcInit3','EcmOutpAndDiagcInit1'};
SetMcuDiagcIdnData.Description = 'None';
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.McuDiagc1;
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(1).Description = 'None';
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'P1mcDiagc1';
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2).Description = 'None';



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

%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------
dEcmVrfyErrOutpCtrlCmpl = DataDict.PIM;
dEcmVrfyErrOutpCtrlCmpl.LongName = 'EcmOutpAndDiagcInit1 Completed';
dEcmVrfyErrOutpCtrlCmpl.Description = [...
  'Flag indicating completed run of EcmOutpAndDiagcInit1 function'];
dEcmVrfyErrOutpCtrlCmpl.DocUnits = 'Cnt';
dEcmVrfyErrOutpCtrlCmpl.EngDT = dt.lgc;
dEcmVrfyErrOutpCtrlCmpl.EngMin = 0;
dEcmVrfyErrOutpCtrlCmpl.EngMax = 1;
dEcmVrfyErrOutpCtrlCmpl.InitRowCol = [1  1];


dEcmVrfyIntrptGennCmpl = DataDict.PIM;
dEcmVrfyIntrptGennCmpl.LongName = 'EcmOutpAndDiagcInit3 Completed';
dEcmVrfyIntrptGennCmpl.Description = [...
  'Flag indicating completed run of EcmOutpAndDiagcInit3 function'];
dEcmVrfyIntrptGennCmpl.DocUnits = 'Cnt';
dEcmVrfyIntrptGennCmpl.EngDT = dt.lgc;
dEcmVrfyIntrptGennCmpl.EngMin = 0;
dEcmVrfyIntrptGennCmpl.EngMax = 1;
dEcmVrfyIntrptGennCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
STD_HIGH = DataDict.Constant;
STD_HIGH.LongName = 'Standard High';
STD_HIGH.Description = [...
  'AUTOSAR value representing a physical high state.  To be used as a alt' ...
  'ernative to TRUE/FALSE as appropriate.'];
STD_HIGH.DocUnits = 'Cnt';
STD_HIGH.EngDT = dt.u08;
STD_HIGH.EngVal = 1;
STD_HIGH.Define = 'Global';


STD_LOW = DataDict.Constant;
STD_LOW.LongName = 'Standard Low';
STD_LOW.Description = [...
  'AUTOSAR value representing a physical low state.  To be used as a alte' ...
  'rnative to TRUE/FALSE as appropriate.'];
STD_LOW.DocUnits = 'Cnt';
STD_LOW.EngDT = dt.u08;
STD_LOW.EngVal = 0;
STD_LOW.Define = 'Global';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
