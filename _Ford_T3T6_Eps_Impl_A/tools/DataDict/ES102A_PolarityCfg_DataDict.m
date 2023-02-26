%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 29-Apr-2016 13:25:30       %
%                                  Created with tool release: 2.38.0     %
%                                  Synergy file: %version: 1 %           %
%                                  Date Modified: %date_modified: X %    %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES102A = DataDict.FDD;
ES102A.Version = '1.3.X';
ES102A.LongName = 'Polarity Configuration';
ES102A.ShoName  = 'PolarityCfg';
ES102A.DesignASIL = 'D';
ES102A.Description = ...
  'Identifies polarity control settings for certain points in the design';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
PolarityCfgInit1 = DataDict.Runnable;
PolarityCfgInit1.Context = 'Rte';
PolarityCfgInit1.TimeStep = 0;
PolarityCfgInit1.Description = 'Init function';

PolarityCfgRead = DataDict.SrvRunnable;
PolarityCfgRead.Context = 'Rte';
PolarityCfgRead.Description = 'Polarity Configuration Read';
PolarityCfgRead.Return = DataDict.CSReturn;
PolarityCfgRead.Return.Type = 'Standard';
PolarityCfgRead.Return.Min = 0;
PolarityCfgRead.Return.Max = 1;
PolarityCfgRead.Return.TestTolerance = 0;
PolarityCfgRead.Return.Description = 'Standard Return';
PolarityCfgRead.Arguments(1) = DataDict.CSArguments;
PolarityCfgRead.Arguments(1).Name = 'PolarityCfgSaved';
PolarityCfgRead.Arguments(1).EngDT = dt.u32;
PolarityCfgRead.Arguments(1).EngMin = 0;
PolarityCfgRead.Arguments(1).EngMax = 4294967295;
PolarityCfgRead.Arguments(1).Units = 'Cnt';
PolarityCfgRead.Arguments(1).Direction = 'Out';
PolarityCfgRead.Arguments(1).InitRowCol = [1  1];
PolarityCfgRead.Arguments(1).Description = 'Polarity Configuration Saved';

PolarityCfgWr = DataDict.SrvRunnable;
PolarityCfgWr.Context = 'Rte';
PolarityCfgWr.Description = 'Polarity Configuraion Write';
PolarityCfgWr.Return = DataDict.CSReturn;
PolarityCfgWr.Return.Type = 'Standard';
PolarityCfgWr.Return.Min = 0;
PolarityCfgWr.Return.Max = 1;
PolarityCfgWr.Return.TestTolerance = 0;
PolarityCfgWr.Return.Description = 'Standard Return';
PolarityCfgWr.Arguments(1) = DataDict.CSArguments;
PolarityCfgWr.Arguments(1).Name = 'PolarityCfgSaved';
PolarityCfgWr.Arguments(1).EngDT = dt.u32;
PolarityCfgWr.Arguments(1).EngMin = 0;
PolarityCfgWr.Arguments(1).EngMax = 4294967295;
PolarityCfgWr.Arguments(1).Units = 'Cnt';
PolarityCfgWr.Arguments(1).Direction = 'In';
PolarityCfgWr.Arguments(1).InitRowCol = [1  1];
PolarityCfgWr.Arguments(1).Description = 'Polarity Configuration Saved';


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
PolarityCfgSaved_SetRamBlockStatus = DataDict.Client;
PolarityCfgSaved_SetRamBlockStatus.CallLocation = {'PolarityCfgWr'};
PolarityCfgSaved_SetRamBlockStatus.Description = 'Polarity Configuraiton Saved Set RAM Block Status';
PolarityCfgSaved_SetRamBlockStatus.Return = DataDict.CSReturn;
PolarityCfgSaved_SetRamBlockStatus.Return.Type = 'Standard';
PolarityCfgSaved_SetRamBlockStatus.Return.Min = 0;
PolarityCfgSaved_SetRamBlockStatus.Return.Max = 1;
PolarityCfgSaved_SetRamBlockStatus.Return.TestTolerance = 0;
PolarityCfgSaved_SetRamBlockStatus.Return.Description = 'Standard Return';
PolarityCfgSaved_SetRamBlockStatus.Arguments(1) = DataDict.CSArguments;
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).Name = 'BlockChanged';
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).EngDT = dt.lgc;
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).EngMin = 0;
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).EngMax = 1;
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).Units = 'Cnt';
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).Direction = 'In';
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).InitRowCol = [1  1];
PolarityCfgSaved_SetRamBlockStatus.Arguments(1).Description = 'Block Changed';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------

%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------
AssiMechPolarity = DataDict.OpSignal;
AssiMechPolarity.LongName = 'Assist Mechanism Polarity - Gear Relationship';
AssiMechPolarity.Description = ...
  'Assist mechanism polarity - gear relationship';
AssiMechPolarity.DocUnits = 'Uls';
AssiMechPolarity.SwcShoName = 'PolarityCfg';
AssiMechPolarity.EngDT = dt.s08;
AssiMechPolarity.EngInit = 1;
AssiMechPolarity.EngMin = -1;
AssiMechPolarity.EngMax = 1;
AssiMechPolarity.TestTolerance = 1;
AssiMechPolarity.WrittenIn = {'PolarityCfgInit1'};
AssiMechPolarity.WriteType = 'Rte';


HwAg0Polarity = DataDict.OpSignal;
HwAg0Polarity.LongName = 'Handwheel Position Sensor 0 Measurement Polarity Configuration';
HwAg0Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 0' ...
  ''];
HwAg0Polarity.DocUnits = 'Uls';
HwAg0Polarity.SwcShoName = 'PolarityCfg';
HwAg0Polarity.EngDT = dt.s08;
HwAg0Polarity.EngInit = 1;
HwAg0Polarity.EngMin = -1;
HwAg0Polarity.EngMax = 1;
HwAg0Polarity.TestTolerance = 1;
HwAg0Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg0Polarity.WriteType = 'Rte';


HwAg1Polarity = DataDict.OpSignal;
HwAg1Polarity.LongName = 'Handwheel Position Sensor 1 Measurement Polarity Configuration';
HwAg1Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 1' ...
  ''];
HwAg1Polarity.DocUnits = 'Uls';
HwAg1Polarity.SwcShoName = 'PolarityCfg';
HwAg1Polarity.EngDT = dt.s08;
HwAg1Polarity.EngInit = 1;
HwAg1Polarity.EngMin = -1;
HwAg1Polarity.EngMax = 1;
HwAg1Polarity.TestTolerance = 1;
HwAg1Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg1Polarity.WriteType = 'Rte';


HwAg2Polarity = DataDict.OpSignal;
HwAg2Polarity.LongName = 'Handwheel Position Sensor 2 Measurement Polarity Configuration';
HwAg2Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 2' ...
  ''];
HwAg2Polarity.DocUnits = 'Uls';
HwAg2Polarity.SwcShoName = 'PolarityCfg';
HwAg2Polarity.EngDT = dt.s08;
HwAg2Polarity.EngInit = 1;
HwAg2Polarity.EngMin = -1;
HwAg2Polarity.EngMax = 1;
HwAg2Polarity.TestTolerance = 1;
HwAg2Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg2Polarity.WriteType = 'Rte';


HwAg3Polarity = DataDict.OpSignal;
HwAg3Polarity.LongName = 'Handwheel Position Sensor 3 Measurement Polarity Configuration';
HwAg3Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 3' ...
  ''];
HwAg3Polarity.DocUnits = 'Uls';
HwAg3Polarity.SwcShoName = 'PolarityCfg';
HwAg3Polarity.EngDT = dt.s08;
HwAg3Polarity.EngInit = 1;
HwAg3Polarity.EngMin = -1;
HwAg3Polarity.EngMax = 1;
HwAg3Polarity.TestTolerance = 1;
HwAg3Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg3Polarity.WriteType = 'Rte';


HwAg4Polarity = DataDict.OpSignal;
HwAg4Polarity.LongName = 'Handwheel Position Sensor 4 Measurement Polarity Configuration';
HwAg4Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 4' ...
  ''];
HwAg4Polarity.DocUnits = 'Uls';
HwAg4Polarity.SwcShoName = 'PolarityCfg';
HwAg4Polarity.EngDT = dt.s08;
HwAg4Polarity.EngInit = 1;
HwAg4Polarity.EngMin = -1;
HwAg4Polarity.EngMax = 1;
HwAg4Polarity.TestTolerance = 1;
HwAg4Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg4Polarity.WriteType = 'Rte';


HwAg5Polarity = DataDict.OpSignal;
HwAg5Polarity.LongName = 'Handwheel Position Sensor 5 Measurement Polarity Configuration';
HwAg5Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 5' ...
  ''];
HwAg5Polarity.DocUnits = 'Uls';
HwAg5Polarity.SwcShoName = 'PolarityCfg';
HwAg5Polarity.EngDT = dt.s08;
HwAg5Polarity.EngInit = 1;
HwAg5Polarity.EngMin = -1;
HwAg5Polarity.EngMax = 1;
HwAg5Polarity.TestTolerance = 1;
HwAg5Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg5Polarity.WriteType = 'Rte';


HwAg6Polarity = DataDict.OpSignal;
HwAg6Polarity.LongName = 'Handwheel Position Sensor 6 Measurement Polarity Configuration';
HwAg6Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 6' ...
  ''];
HwAg6Polarity.DocUnits = 'Uls';
HwAg6Polarity.SwcShoName = 'PolarityCfg';
HwAg6Polarity.EngDT = dt.s08;
HwAg6Polarity.EngInit = 1;
HwAg6Polarity.EngMin = -1;
HwAg6Polarity.EngMax = 1;
HwAg6Polarity.TestTolerance = 1;
HwAg6Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg6Polarity.WriteType = 'Rte';


HwAg7Polarity = DataDict.OpSignal;
HwAg7Polarity.LongName = 'Handwheel Position Sensor 7 Measurement Polarity Configuration';
HwAg7Polarity.Description = [...
  'Polarity setting for measurement block for handwheel position sensor 7' ...
  ''];
HwAg7Polarity.DocUnits = 'Uls';
HwAg7Polarity.SwcShoName = 'PolarityCfg';
HwAg7Polarity.EngDT = dt.s08;
HwAg7Polarity.EngInit = 1;
HwAg7Polarity.EngMin = -1;
HwAg7Polarity.EngMax = 1;
HwAg7Polarity.TestTolerance = 1;
HwAg7Polarity.WrittenIn = {'PolarityCfgInit1'};
HwAg7Polarity.WriteType = 'Rte';


HwTq0Polarity = DataDict.OpSignal;
HwTq0Polarity.LongName = 'Torque Sensor 0 Measurement Polarity Configuration';
HwTq0Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 0';
HwTq0Polarity.DocUnits = 'Uls';
HwTq0Polarity.SwcShoName = 'PolarityCfg';
HwTq0Polarity.EngDT = dt.s08;
HwTq0Polarity.EngInit = 1;
HwTq0Polarity.EngMin = -1;
HwTq0Polarity.EngMax = 1;
HwTq0Polarity.TestTolerance = 1;
HwTq0Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq0Polarity.WriteType = 'Rte';


HwTq1Polarity = DataDict.OpSignal;
HwTq1Polarity.LongName = 'Torque Sensor 1 Measurement Polarity Configuration';
HwTq1Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 1';
HwTq1Polarity.DocUnits = 'Uls';
HwTq1Polarity.SwcShoName = 'PolarityCfg';
HwTq1Polarity.EngDT = dt.s08;
HwTq1Polarity.EngInit = 1;
HwTq1Polarity.EngMin = -1;
HwTq1Polarity.EngMax = 1;
HwTq1Polarity.TestTolerance = 1;
HwTq1Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq1Polarity.WriteType = 'Rte';


HwTq2Polarity = DataDict.OpSignal;
HwTq2Polarity.LongName = 'Torque Sensor 2 Measurement Polarity Configuration';
HwTq2Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 2';
HwTq2Polarity.DocUnits = 'Uls';
HwTq2Polarity.SwcShoName = 'PolarityCfg';
HwTq2Polarity.EngDT = dt.s08;
HwTq2Polarity.EngInit = 1;
HwTq2Polarity.EngMin = -1;
HwTq2Polarity.EngMax = 1;
HwTq2Polarity.TestTolerance = 1;
HwTq2Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq2Polarity.WriteType = 'Rte';


HwTq3Polarity = DataDict.OpSignal;
HwTq3Polarity.LongName = 'Torque Sensor 3 Measurement Polarity Configuration';
HwTq3Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 3';
HwTq3Polarity.DocUnits = 'Uls';
HwTq3Polarity.SwcShoName = 'PolarityCfg';
HwTq3Polarity.EngDT = dt.s08;
HwTq3Polarity.EngInit = 1;
HwTq3Polarity.EngMin = -1;
HwTq3Polarity.EngMax = 1;
HwTq3Polarity.TestTolerance = 1;
HwTq3Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq3Polarity.WriteType = 'Rte';


HwTq4Polarity = DataDict.OpSignal;
HwTq4Polarity.LongName = 'Torque Sensor 4 Measurement Polarity Configuration';
HwTq4Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 4';
HwTq4Polarity.DocUnits = 'Uls';
HwTq4Polarity.SwcShoName = 'PolarityCfg';
HwTq4Polarity.EngDT = dt.s08;
HwTq4Polarity.EngInit = 1;
HwTq4Polarity.EngMin = -1;
HwTq4Polarity.EngMax = 1;
HwTq4Polarity.TestTolerance = 1;
HwTq4Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq4Polarity.WriteType = 'Rte';


HwTq5Polarity = DataDict.OpSignal;
HwTq5Polarity.LongName = 'Torque Sensor 5 Measurement Polarity Configuration';
HwTq5Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 5';
HwTq5Polarity.DocUnits = 'Uls';
HwTq5Polarity.SwcShoName = 'PolarityCfg';
HwTq5Polarity.EngDT = dt.s08;
HwTq5Polarity.EngInit = 1;
HwTq5Polarity.EngMin = -1;
HwTq5Polarity.EngMax = 1;
HwTq5Polarity.TestTolerance = 1;
HwTq5Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq5Polarity.WriteType = 'Rte';


HwTq6Polarity = DataDict.OpSignal;
HwTq6Polarity.LongName = 'Torque Sensor 6 Measurement Polarity Configuration';
HwTq6Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 6';
HwTq6Polarity.DocUnits = 'Uls';
HwTq6Polarity.SwcShoName = 'PolarityCfg';
HwTq6Polarity.EngDT = dt.s08;
HwTq6Polarity.EngInit = 1;
HwTq6Polarity.EngMin = -1;
HwTq6Polarity.EngMax = 1;
HwTq6Polarity.TestTolerance = 1;
HwTq6Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq6Polarity.WriteType = 'Rte';


HwTq7Polarity = DataDict.OpSignal;
HwTq7Polarity.LongName = 'Torque Sensor 7 Measurement Polarity Configuration';
HwTq7Polarity.Description = ...
  'Polarity setting for measurement block for torque sensor 7';
HwTq7Polarity.DocUnits = 'Uls';
HwTq7Polarity.SwcShoName = 'PolarityCfg';
HwTq7Polarity.EngDT = dt.s08;
HwTq7Polarity.EngInit = 1;
HwTq7Polarity.EngMin = -1;
HwTq7Polarity.EngMax = 1;
HwTq7Polarity.TestTolerance = 1;
HwTq7Polarity.WrittenIn = {'PolarityCfgInit1'};
HwTq7Polarity.WriteType = 'Rte';


MotAgMecl0Polarity = DataDict.OpSignal;
MotAgMecl0Polarity.LongName = 'Motor Position Sensor 0 Measurement Polarity Configuration';
MotAgMecl0Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 0';
MotAgMecl0Polarity.DocUnits = 'Uls';
MotAgMecl0Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl0Polarity.EngDT = dt.s08;
MotAgMecl0Polarity.EngInit = 1;
MotAgMecl0Polarity.EngMin = -1;
MotAgMecl0Polarity.EngMax = 1;
MotAgMecl0Polarity.TestTolerance = 1;
MotAgMecl0Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl0Polarity.WriteType = 'Rte';


MotAgMecl1Polarity = DataDict.OpSignal;
MotAgMecl1Polarity.LongName = 'Motor Position Sensor 1 Measurement Polarity Configuration';
MotAgMecl1Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 1';
MotAgMecl1Polarity.DocUnits = 'Uls';
MotAgMecl1Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl1Polarity.EngDT = dt.s08;
MotAgMecl1Polarity.EngInit = 1;
MotAgMecl1Polarity.EngMin = -1;
MotAgMecl1Polarity.EngMax = 1;
MotAgMecl1Polarity.TestTolerance = 1;
MotAgMecl1Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl1Polarity.WriteType = 'Rte';


MotAgMecl2Polarity = DataDict.OpSignal;
MotAgMecl2Polarity.LongName = 'Motor Position Sensor 2 Measurement Polarity Configuration';
MotAgMecl2Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 2';
MotAgMecl2Polarity.DocUnits = 'Uls';
MotAgMecl2Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl2Polarity.EngDT = dt.s08;
MotAgMecl2Polarity.EngInit = 1;
MotAgMecl2Polarity.EngMin = -1;
MotAgMecl2Polarity.EngMax = 1;
MotAgMecl2Polarity.TestTolerance = 1;
MotAgMecl2Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl2Polarity.WriteType = 'Rte';


MotAgMecl3Polarity = DataDict.OpSignal;
MotAgMecl3Polarity.LongName = 'Motor Position Sensor 3 Measurement Polarity Configuration';
MotAgMecl3Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 3';
MotAgMecl3Polarity.DocUnits = 'Uls';
MotAgMecl3Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl3Polarity.EngDT = dt.s08;
MotAgMecl3Polarity.EngInit = 1;
MotAgMecl3Polarity.EngMin = -1;
MotAgMecl3Polarity.EngMax = 1;
MotAgMecl3Polarity.TestTolerance = 1;
MotAgMecl3Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl3Polarity.WriteType = 'Rte';


MotAgMecl4Polarity = DataDict.OpSignal;
MotAgMecl4Polarity.LongName = 'Motor Position Sensor 4 Measurement Polarity Configuration';
MotAgMecl4Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 4';
MotAgMecl4Polarity.DocUnits = 'Uls';
MotAgMecl4Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl4Polarity.EngDT = dt.s08;
MotAgMecl4Polarity.EngInit = 1;
MotAgMecl4Polarity.EngMin = -1;
MotAgMecl4Polarity.EngMax = 1;
MotAgMecl4Polarity.TestTolerance = 1;
MotAgMecl4Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl4Polarity.WriteType = 'Rte';


MotAgMecl5Polarity = DataDict.OpSignal;
MotAgMecl5Polarity.LongName = 'Motor Position Sensor 5 Measurement Polarity Configuration';
MotAgMecl5Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 5';
MotAgMecl5Polarity.DocUnits = 'Uls';
MotAgMecl5Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl5Polarity.EngDT = dt.s08;
MotAgMecl5Polarity.EngInit = 1;
MotAgMecl5Polarity.EngMin = -1;
MotAgMecl5Polarity.EngMax = 1;
MotAgMecl5Polarity.TestTolerance = 1;
MotAgMecl5Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl5Polarity.WriteType = 'Rte';


MotAgMecl6Polarity = DataDict.OpSignal;
MotAgMecl6Polarity.LongName = 'Motor Position Sensor 6 Measurement Polarity Configuration';
MotAgMecl6Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 6';
MotAgMecl6Polarity.DocUnits = 'Uls';
MotAgMecl6Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl6Polarity.EngDT = dt.s08;
MotAgMecl6Polarity.EngInit = 1;
MotAgMecl6Polarity.EngMin = -1;
MotAgMecl6Polarity.EngMax = 1;
MotAgMecl6Polarity.TestTolerance = 1;
MotAgMecl6Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl6Polarity.WriteType = 'Rte';


MotAgMecl7Polarity = DataDict.OpSignal;
MotAgMecl7Polarity.LongName = 'Motor Position Sensor 7 Measurement Polarity Configuration';
MotAgMecl7Polarity.Description = ...
  'Polarity setting for measurement block for motor position sensor 7';
MotAgMecl7Polarity.DocUnits = 'Uls';
MotAgMecl7Polarity.SwcShoName = 'PolarityCfg';
MotAgMecl7Polarity.EngDT = dt.s08;
MotAgMecl7Polarity.EngInit = 1;
MotAgMecl7Polarity.EngMin = -1;
MotAgMecl7Polarity.EngMax = 1;
MotAgMecl7Polarity.TestTolerance = 1;
MotAgMecl7Polarity.WrittenIn = {'PolarityCfgInit1'};
MotAgMecl7Polarity.WriteType = 'Rte';


MotElecMeclPolarity = DataDict.OpSignal;
MotElecMeclPolarity.LongName = 'Polarity Between the Motor Electrical and Mechanical Characteristsics';
MotElecMeclPolarity.Description = ...
  'Polarity for motor electrical vs. mechanical';
MotElecMeclPolarity.DocUnits = 'Uls';
MotElecMeclPolarity.SwcShoName = 'PolarityCfg';
MotElecMeclPolarity.EngDT = dt.s08;
MotElecMeclPolarity.EngInit = 1;
MotElecMeclPolarity.EngMin = -1;
MotElecMeclPolarity.EngMax = 1;
MotElecMeclPolarity.TestTolerance = 1;
MotElecMeclPolarity.WrittenIn = {'PolarityCfgInit1'};
MotElecMeclPolarity.WriteType = 'Rte';



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
PolarityCfgSaved = DataDict.NVM;
PolarityCfgSaved.LongName = 'Polarity Bit Packed Configuration Data';
PolarityCfgSaved.Description = ...
  'Contains all bits used to change system polarities';
PolarityCfgSaved.DocUnits = 'Cnt';
PolarityCfgSaved.EngDT = dt.u32;
PolarityCfgSaved.EngInit = 0;
PolarityCfgSaved.EngMin = 0;
PolarityCfgSaved.EngMax = 4294967295;
PolarityCfgSaved.CustomerVisible = false;
PolarityCfgSaved.Impact = 'H';
PolarityCfgSaved.TuningOwner = 'EPDT';
PolarityCfgSaved.CoderInfo.Alias = 'None';
PolarityCfgSaved.InitRowCol = [1  1];



%%-------------------------------------------
%% Display Variable Definition               
%%-------------------------------------------

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
