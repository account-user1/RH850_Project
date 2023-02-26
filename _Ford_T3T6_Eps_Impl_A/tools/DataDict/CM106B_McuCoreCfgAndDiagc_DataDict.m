%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 01-Jun-2017 15:59:19       %
%                                  Created with tool release: 2.53.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

CM106B = DataDict.FDD;
CM106B.Version = '1.1.X';
CM106B.LongName = 'MicroController Core Configuration And Diagnostics';
CM106B.ShoName  = 'McuCoreCfgAndDiagc';
CM106B.DesignASIL = 'D';
CM106B.Description = [...
  'This function describes some of the basic MCU diagnostics of the RH850' ...
  '/P1MC microcontroller Field BIST (built-in self-test)'];



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
McuCoreCfgAndDiagcInit1 = DataDict.Runnable;
McuCoreCfgAndDiagcInit1.Context = 'NonRte';
McuCoreCfgAndDiagcInit1.TimeStep = 0;
McuCoreCfgAndDiagcInit1.Description = 'perform Field BIST diagnostics';

McuCoreCfgAndDiagcInit2 = DataDict.Runnable;
McuCoreCfgAndDiagcInit2.Context = 'Rte';
McuCoreCfgAndDiagcInit2.TimeStep = 0;
McuCoreCfgAndDiagcInit2.Description = [...
  'required for memory mapping PIM and Calibration definitions'];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
GetMcuDiagcIdnData = DataDict.Client;
GetMcuDiagcIdnData.CallLocation = {'McuCoreCfgAndDiagcInit1'};
GetMcuDiagcIdnData.Description = 'None';
GetMcuDiagcIdnData.Return = DataDict.CSReturn;
GetMcuDiagcIdnData.Return.Type = 'None';
GetMcuDiagcIdnData.Return.Min = [];
GetMcuDiagcIdnData.Return.Max = [];
GetMcuDiagcIdnData.Return.TestTolerance = [];
GetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
GetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
GetMcuDiagcIdnData.Arguments(1).EngDT = enum.P1mcDiagc1;
GetMcuDiagcIdnData.Arguments(1).EngMin = 0;
GetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
GetMcuDiagcIdnData.Arguments(1).TestTolerance = 0;
GetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
GetMcuDiagcIdnData.Arguments(1).Direction = 'Out';
GetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
GetMcuDiagcIdnData.Arguments(1).Description = 'To get micro diagnostics status';


SetMcuDiagcIdnData = DataDict.Client;
SetMcuDiagcIdnData.CallLocation = {'McuCoreCfgAndDiagcInit1'};
SetMcuDiagcIdnData.Description = 'None';
SetMcuDiagcIdnData.Return = DataDict.CSReturn;
SetMcuDiagcIdnData.Return.Type = 'None';
SetMcuDiagcIdnData.Return.Min = [];
SetMcuDiagcIdnData.Return.Max = [];
SetMcuDiagcIdnData.Return.TestTolerance = [];
SetMcuDiagcIdnData.Arguments(1) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(1).Name = 'McuDiagcData0';
SetMcuDiagcIdnData.Arguments(1).EngDT = enum.P1mcDiagc1;
SetMcuDiagcIdnData.Arguments(1).EngMin = 0;
SetMcuDiagcIdnData.Arguments(1).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(1).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(1).Direction = 'In';
SetMcuDiagcIdnData.Arguments(1).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(1).Description = 'micro diagnostics name';
SetMcuDiagcIdnData.Arguments(2) = DataDict.CSArguments;
SetMcuDiagcIdnData.Arguments(2).Name = 'McuDiagcData1';
SetMcuDiagcIdnData.Arguments(2).EngDT = dt.u32;
SetMcuDiagcIdnData.Arguments(2).EngMin = 0;
SetMcuDiagcIdnData.Arguments(2).EngMax = 4294967295;
SetMcuDiagcIdnData.Arguments(2).Units = 'Cnt';
SetMcuDiagcIdnData.Arguments(2).Direction = 'In';
SetMcuDiagcIdnData.Arguments(2).InitRowCol = [1  1];
SetMcuDiagcIdnData.Arguments(2).Description = 'value';



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
dMcuCoreCfgAndDiagcBistRunCmpl = DataDict.Display;
dMcuCoreCfgAndDiagcBistRunCmpl.LongName = 'MCU Core Configuration And Diagnostic BIST Run Complete';
dMcuCoreCfgAndDiagcBistRunCmpl.Description = 'Indicate the BIST test status';
dMcuCoreCfgAndDiagcBistRunCmpl.DocUnits = 'Cnt';
dMcuCoreCfgAndDiagcBistRunCmpl.EngDT = dt.lgc;
dMcuCoreCfgAndDiagcBistRunCmpl.EngMin = 0;
dMcuCoreCfgAndDiagcBistRunCmpl.EngMax = 1;
dMcuCoreCfgAndDiagcBistRunCmpl.InitRowCol = [1  1];



%%-------------------------------------------
%% Per-Instance Memory Definition            
%%-------------------------------------------

%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------

%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
