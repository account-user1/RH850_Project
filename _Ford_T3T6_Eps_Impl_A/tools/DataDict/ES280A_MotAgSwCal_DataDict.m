%%-----------------------------------------------------------------------%
%% EA4 Component Data Dictionary - Created on 12-Sep-2017 15:32:58       %
%                                  Created with tool release: 3.1.0      %
%                                  Synergy file: %version: 1 %           %
%                                  Derived by: %derived_by: gz324f %          %
%%-----------------------------------------------------------------------%

ES280A = DataDict.FDD;
ES280A.Version = '2.1.X';
ES280A.LongName = 'Motor Angle Software Calibration';
ES280A.ShoName  = 'MotAgSwCal';
ES280A.DesignASIL = 'D';
ES280A.Description = 'Motor Angle Software Calibration';



%%-------------------------------------------
%% Runnable Definitions                      
%%-------------------------------------------
MotAgSwCalInit1 = DataDict.Runnable;
MotAgSwCalInit1.Context = 'Rte';
MotAgSwCalInit1.TimeStep = 0;
MotAgSwCalInit1.Description = 'None';

MotAgSwCalPer1 = DataDict.Runnable;
MotAgSwCalPer1.Context = 'NonRte';
MotAgSwCalPer1.TimeStep = 'MotorControl';
MotAgSwCalPer1.Description = 'None';

MotAgSwCalPer2 = DataDict.Runnable;
MotAgSwCalPer2.Context = 'Rte';
MotAgSwCalPer2.TimeStep = 0.01;
MotAgSwCalPer2.Description = 'None';

SwCalGetPrm = DataDict.SrvRunnable;
SwCalGetPrm.Context = 'Rte';
SwCalGetPrm.Description = [...
  'Server Runnable for Getting Software Based Calibration process paramet' ...
  'ers'];
SwCalGetPrm.Return = DataDict.CSReturn;
SwCalGetPrm.Return.Type = 'None';
SwCalGetPrm.Return.Min = [];
SwCalGetPrm.Return.Max = [];
SwCalGetPrm.Return.TestTolerance = [];
SwCalGetPrm.Arguments(1) = DataDict.CSArguments;
SwCalGetPrm.Arguments(1).Name = 'BoostModlnIdx';
SwCalGetPrm.Arguments(1).EngDT = dt.float32;
SwCalGetPrm.Arguments(1).EngMin = 0;
SwCalGetPrm.Arguments(1).EngMax = 1;
SwCalGetPrm.Arguments(1).TestTolerance = 0;
SwCalGetPrm.Arguments(1).Units = 'Uls';
SwCalGetPrm.Arguments(1).Direction = 'Out';
SwCalGetPrm.Arguments(1).InitRowCol = [1  1];
SwCalGetPrm.Arguments(1).Description = [...
  'Argument passed is the Boost Modulation Index'];
SwCalGetPrm.Arguments(2) = DataDict.CSArguments;
SwCalGetPrm.Arguments(2).Name = 'HldModlnIdx';
SwCalGetPrm.Arguments(2).EngDT = dt.float32;
SwCalGetPrm.Arguments(2).EngMin = 0;
SwCalGetPrm.Arguments(2).EngMax = 1;
SwCalGetPrm.Arguments(2).TestTolerance = 0;
SwCalGetPrm.Arguments(2).Units = 'Uls';
SwCalGetPrm.Arguments(2).Direction = 'Out';
SwCalGetPrm.Arguments(2).InitRowCol = [1  1];
SwCalGetPrm.Arguments(2).Description = [...
  'Argument passed is the Hold Modulation Index'];
SwCalGetPrm.Arguments(3) = DataDict.CSArguments;
SwCalGetPrm.Arguments(3).Name = 'CoolDwnModlnIdx';
SwCalGetPrm.Arguments(3).EngDT = dt.float32;
SwCalGetPrm.Arguments(3).EngMin = 0;
SwCalGetPrm.Arguments(3).EngMax = 1;
SwCalGetPrm.Arguments(3).TestTolerance = 0;
SwCalGetPrm.Arguments(3).Units = 'Uls';
SwCalGetPrm.Arguments(3).Direction = 'Out';
SwCalGetPrm.Arguments(3).InitRowCol = [1  1];
SwCalGetPrm.Arguments(3).Description = [...
  'Argument passed is the Cool Down Modulation Index'];
SwCalGetPrm.Arguments(4) = DataDict.CSArguments;
SwCalGetPrm.Arguments(4).Name = 'Ramp1Ti';
SwCalGetPrm.Arguments(4).EngDT = dt.u08;
SwCalGetPrm.Arguments(4).EngMin = 0;
SwCalGetPrm.Arguments(4).EngMax = 255;
SwCalGetPrm.Arguments(4).TestTolerance = 0;
SwCalGetPrm.Arguments(4).Units = 'MilliSec';
SwCalGetPrm.Arguments(4).Direction = 'Out';
SwCalGetPrm.Arguments(4).InitRowCol = [1  1];
SwCalGetPrm.Arguments(4).Description = 'Argument passed is the Ramp 1 Time';
SwCalGetPrm.Arguments(5) = DataDict.CSArguments;
SwCalGetPrm.Arguments(5).Name = 'Ramp2Ti';
SwCalGetPrm.Arguments(5).EngDT = dt.u08;
SwCalGetPrm.Arguments(5).EngMin = 0;
SwCalGetPrm.Arguments(5).EngMax = 255;
SwCalGetPrm.Arguments(5).TestTolerance = 0;
SwCalGetPrm.Arguments(5).Units = 'MilliSec';
SwCalGetPrm.Arguments(5).Direction = 'Out';
SwCalGetPrm.Arguments(5).InitRowCol = [1  1];
SwCalGetPrm.Arguments(5).Description = 'Argument passed is the Ramp 2 Time';
SwCalGetPrm.Arguments(6) = DataDict.CSArguments;
SwCalGetPrm.Arguments(6).Name = 'Ramp3Ti';
SwCalGetPrm.Arguments(6).EngDT = dt.u08;
SwCalGetPrm.Arguments(6).EngMin = 0;
SwCalGetPrm.Arguments(6).EngMax = 255;
SwCalGetPrm.Arguments(6).TestTolerance = 0;
SwCalGetPrm.Arguments(6).Units = 'MilliSec';
SwCalGetPrm.Arguments(6).Direction = 'Out';
SwCalGetPrm.Arguments(6).InitRowCol = [1  1];
SwCalGetPrm.Arguments(6).Description = 'Argument passed is the Ramp 3 Time';
SwCalGetPrm.Arguments(7) = DataDict.CSArguments;
SwCalGetPrm.Arguments(7).Name = 'BoostTi';
SwCalGetPrm.Arguments(7).EngDT = dt.u08;
SwCalGetPrm.Arguments(7).EngMin = 0;
SwCalGetPrm.Arguments(7).EngMax = 255;
SwCalGetPrm.Arguments(7).TestTolerance = 0;
SwCalGetPrm.Arguments(7).Units = 'MilliSec';
SwCalGetPrm.Arguments(7).Direction = 'Out';
SwCalGetPrm.Arguments(7).InitRowCol = [1  1];
SwCalGetPrm.Arguments(7).Description = 'Argument passed is the Boost Time';
SwCalGetPrm.Arguments(8) = DataDict.CSArguments;
SwCalGetPrm.Arguments(8).Name = 'HldTi';
SwCalGetPrm.Arguments(8).EngDT = dt.u16;
SwCalGetPrm.Arguments(8).EngMin = 0;
SwCalGetPrm.Arguments(8).EngMax = 65535;
SwCalGetPrm.Arguments(8).TestTolerance = 0;
SwCalGetPrm.Arguments(8).Units = 'MilliSec';
SwCalGetPrm.Arguments(8).Direction = 'Out';
SwCalGetPrm.Arguments(8).InitRowCol = [1  1];
SwCalGetPrm.Arguments(8).Description = 'Argument passed is the Hold Time';
SwCalGetPrm.Arguments(9) = DataDict.CSArguments;
SwCalGetPrm.Arguments(9).Name = 'CoolDwnTi';
SwCalGetPrm.Arguments(9).EngDT = dt.u16;
SwCalGetPrm.Arguments(9).EngMin = 0;
SwCalGetPrm.Arguments(9).EngMax = 65535;
SwCalGetPrm.Arguments(9).TestTolerance = 0;
SwCalGetPrm.Arguments(9).Units = 'MilliSec';
SwCalGetPrm.Arguments(9).Direction = 'Out';
SwCalGetPrm.Arguments(9).InitRowCol = [1  1];
SwCalGetPrm.Arguments(9).Description = [...
  'Argument passed is the Cool Down Time'];
SwCalGetPrm.Arguments(10) = DataDict.CSArguments;
SwCalGetPrm.Arguments(10).Name = 'PosnStepSize';
SwCalGetPrm.Arguments(10).EngDT = dt.u0p16;
SwCalGetPrm.Arguments(10).EngMin = 0;
SwCalGetPrm.Arguments(10).EngMax = 0.9999847412;
SwCalGetPrm.Arguments(10).TestTolerance = 0;
SwCalGetPrm.Arguments(10).Units = 'MotRevElec';
SwCalGetPrm.Arguments(10).Direction = 'Out';
SwCalGetPrm.Arguments(10).InitRowCol = [1  1];
SwCalGetPrm.Arguments(10).Description = [...
  'Argument passed is the Position Step Size'];
SwCalGetPrm.Arguments(11) = DataDict.CSArguments;
SwCalGetPrm.Arguments(11).Name = 'ElecRevCnt';
SwCalGetPrm.Arguments(11).EngDT = dt.u08;
SwCalGetPrm.Arguments(11).EngMin = 0;
SwCalGetPrm.Arguments(11).EngMax = 255;
SwCalGetPrm.Arguments(11).TestTolerance = 0;
SwCalGetPrm.Arguments(11).Units = 'Cnt';
SwCalGetPrm.Arguments(11).Direction = 'Out';
SwCalGetPrm.Arguments(11).InitRowCol = [1  1];
SwCalGetPrm.Arguments(11).Description = [...
  'Argument passed is the Electrical Revolution Count'];

SwCalSetPrm = DataDict.SrvRunnable;
SwCalSetPrm.Context = 'Rte';
SwCalSetPrm.Description = [...
  'Server Runnable for setting Software Based Calibration process paramet' ...
  'ers'];
SwCalSetPrm.Return = DataDict.CSReturn;
SwCalSetPrm.Return.Type = 'Standard';
SwCalSetPrm.Return.Min = 0;
SwCalSetPrm.Return.Max = 1;
SwCalSetPrm.Return.TestTolerance = 0;
SwCalSetPrm.Return.Description = '';
SwCalSetPrm.Arguments(1) = DataDict.CSArguments;
SwCalSetPrm.Arguments(1).Name = 'BoostModlnIdx';
SwCalSetPrm.Arguments(1).EngDT = dt.float32;
SwCalSetPrm.Arguments(1).EngMin = 0;
SwCalSetPrm.Arguments(1).EngMax = 1;
SwCalSetPrm.Arguments(1).Units = 'Uls';
SwCalSetPrm.Arguments(1).Direction = 'In';
SwCalSetPrm.Arguments(1).InitRowCol = [1  1];
SwCalSetPrm.Arguments(1).Description = [...
  'Argument passed is the Boost Modulation Index'];
SwCalSetPrm.Arguments(2) = DataDict.CSArguments;
SwCalSetPrm.Arguments(2).Name = 'HldModlnIdx';
SwCalSetPrm.Arguments(2).EngDT = dt.float32;
SwCalSetPrm.Arguments(2).EngMin = 0;
SwCalSetPrm.Arguments(2).EngMax = 1;
SwCalSetPrm.Arguments(2).Units = 'Uls';
SwCalSetPrm.Arguments(2).Direction = 'In';
SwCalSetPrm.Arguments(2).InitRowCol = [1  1];
SwCalSetPrm.Arguments(2).Description = [...
  'Argument passed is the Hold Modulation Index'];
SwCalSetPrm.Arguments(3) = DataDict.CSArguments;
SwCalSetPrm.Arguments(3).Name = 'CoolDwnModlnIdx';
SwCalSetPrm.Arguments(3).EngDT = dt.float32;
SwCalSetPrm.Arguments(3).EngMin = 0;
SwCalSetPrm.Arguments(3).EngMax = 1;
SwCalSetPrm.Arguments(3).Units = 'Uls';
SwCalSetPrm.Arguments(3).Direction = 'In';
SwCalSetPrm.Arguments(3).InitRowCol = [1  1];
SwCalSetPrm.Arguments(3).Description = [...
  'Argument passed is the Cool Down Modulation Index'];
SwCalSetPrm.Arguments(4) = DataDict.CSArguments;
SwCalSetPrm.Arguments(4).Name = 'Ramp1Ti';
SwCalSetPrm.Arguments(4).EngDT = dt.u08;
SwCalSetPrm.Arguments(4).EngMin = 0;
SwCalSetPrm.Arguments(4).EngMax = 255;
SwCalSetPrm.Arguments(4).Units = 'MilliSec';
SwCalSetPrm.Arguments(4).Direction = 'In';
SwCalSetPrm.Arguments(4).InitRowCol = [1  1];
SwCalSetPrm.Arguments(4).Description = 'Argument passed is the Ramp 1 Time';
SwCalSetPrm.Arguments(5) = DataDict.CSArguments;
SwCalSetPrm.Arguments(5).Name = 'Ramp2Ti';
SwCalSetPrm.Arguments(5).EngDT = dt.u08;
SwCalSetPrm.Arguments(5).EngMin = 0;
SwCalSetPrm.Arguments(5).EngMax = 255;
SwCalSetPrm.Arguments(5).Units = 'MilliSec';
SwCalSetPrm.Arguments(5).Direction = 'In';
SwCalSetPrm.Arguments(5).InitRowCol = [1  1];
SwCalSetPrm.Arguments(5).Description = 'Argument passed is the Ramp 2 Time';
SwCalSetPrm.Arguments(6) = DataDict.CSArguments;
SwCalSetPrm.Arguments(6).Name = 'Ramp3Ti';
SwCalSetPrm.Arguments(6).EngDT = dt.u08;
SwCalSetPrm.Arguments(6).EngMin = 0;
SwCalSetPrm.Arguments(6).EngMax = 255;
SwCalSetPrm.Arguments(6).Units = 'MilliSec';
SwCalSetPrm.Arguments(6).Direction = 'In';
SwCalSetPrm.Arguments(6).InitRowCol = [1  1];
SwCalSetPrm.Arguments(6).Description = 'Argument passed is the Ramp 3 Time';
SwCalSetPrm.Arguments(7) = DataDict.CSArguments;
SwCalSetPrm.Arguments(7).Name = 'BoostTi';
SwCalSetPrm.Arguments(7).EngDT = dt.u08;
SwCalSetPrm.Arguments(7).EngMin = 0;
SwCalSetPrm.Arguments(7).EngMax = 255;
SwCalSetPrm.Arguments(7).Units = 'MilliSec';
SwCalSetPrm.Arguments(7).Direction = 'In';
SwCalSetPrm.Arguments(7).InitRowCol = [1  1];
SwCalSetPrm.Arguments(7).Description = 'Argument passed is the Boost Time';
SwCalSetPrm.Arguments(8) = DataDict.CSArguments;
SwCalSetPrm.Arguments(8).Name = 'HldTi';
SwCalSetPrm.Arguments(8).EngDT = dt.u16;
SwCalSetPrm.Arguments(8).EngMin = 0;
SwCalSetPrm.Arguments(8).EngMax = 65535;
SwCalSetPrm.Arguments(8).Units = 'MilliSec';
SwCalSetPrm.Arguments(8).Direction = 'In';
SwCalSetPrm.Arguments(8).InitRowCol = [1  1];
SwCalSetPrm.Arguments(8).Description = 'Argument passed is the Hold Time';
SwCalSetPrm.Arguments(9) = DataDict.CSArguments;
SwCalSetPrm.Arguments(9).Name = 'CoolDwnTi';
SwCalSetPrm.Arguments(9).EngDT = dt.u16;
SwCalSetPrm.Arguments(9).EngMin = 0;
SwCalSetPrm.Arguments(9).EngMax = 65535;
SwCalSetPrm.Arguments(9).Units = 'MilliSec';
SwCalSetPrm.Arguments(9).Direction = 'In';
SwCalSetPrm.Arguments(9).InitRowCol = [1  1];
SwCalSetPrm.Arguments(9).Description = [...
  'Argument passed is the Cool Down Time'];
SwCalSetPrm.Arguments(10) = DataDict.CSArguments;
SwCalSetPrm.Arguments(10).Name = 'PosnStepSize';
SwCalSetPrm.Arguments(10).EngDT = dt.u0p16;
SwCalSetPrm.Arguments(10).EngMin = 0;
SwCalSetPrm.Arguments(10).EngMax = 0.9999847412;
SwCalSetPrm.Arguments(10).Units = 'MotRevElec';
SwCalSetPrm.Arguments(10).Direction = 'In';
SwCalSetPrm.Arguments(10).InitRowCol = [1  1];
SwCalSetPrm.Arguments(10).Description = [...
  'Argument passed is the Position Step Size'];
SwCalSetPrm.Arguments(11) = DataDict.CSArguments;
SwCalSetPrm.Arguments(11).Name = 'ElecRevCnt';
SwCalSetPrm.Arguments(11).EngDT = dt.u08;
SwCalSetPrm.Arguments(11).EngMin = 0;
SwCalSetPrm.Arguments(11).EngMax = 255;
SwCalSetPrm.Arguments(11).Units = 'Cnt';
SwCalSetPrm.Arguments(11).Direction = 'In';
SwCalSetPrm.Arguments(11).InitRowCol = [1  1];
SwCalSetPrm.Arguments(11).Description = [...
  'Argument passed is the Electrical Revolution Count'];

SwCalStop = DataDict.SrvRunnable;
SwCalStop.Context = 'Rte';
SwCalStop.Description = [...
  'Server Runnable for stopping Software Based Calibration'];
SwCalStop.Return = DataDict.CSReturn;
SwCalStop.Return.Type = 'None';
SwCalStop.Return.Min = [];
SwCalStop.Return.Max = [];
SwCalStop.Return.TestTolerance = [];

SwCalStrt = DataDict.SrvRunnable;
SwCalStrt.Context = 'Rte';
SwCalStrt.Description = [...
  'Server Runnable for starting Software Based Calibration'];
SwCalStrt.Return = DataDict.CSReturn;
SwCalStrt.Return.Type = 'None';
SwCalStrt.Return.Min = [];
SwCalStrt.Return.Max = [];
SwCalStrt.Return.TestTolerance = [];


%%-------------------------------------------
%% Client Definitions                        
%%-------------------------------------------
SwCalStsCallBack = DataDict.Client;
SwCalStsCallBack.CallLocation = {'MotAgSwCalPer2'};
SwCalStsCallBack.Description = [...
  'Calibration status call back used to transmit periodic updates to the ' ...
  'test tool while running the motor position calibration routine.'];
SwCalStsCallBack.Return = DataDict.CSReturn;
SwCalStsCallBack.Return.Type = 'None';
SwCalStsCallBack.Return.Min = [];
SwCalStsCallBack.Return.Max = [];
SwCalStsCallBack.Return.TestTolerance = [];
SwCalStsCallBack.Arguments(1) = DataDict.CSArguments;
SwCalStsCallBack.Arguments(1).Name = 'ElecRev';
SwCalStsCallBack.Arguments(1).EngDT = dt.u08;
SwCalStsCallBack.Arguments(1).EngMin = 0;
SwCalStsCallBack.Arguments(1).EngMax = 255;
SwCalStsCallBack.Arguments(1).Units = 'Cnt';
SwCalStsCallBack.Arguments(1).Direction = 'In';
SwCalStsCallBack.Arguments(1).InitRowCol = [1  1];
SwCalStsCallBack.Arguments(1).Description = 'None';
SwCalStsCallBack.Arguments(2) = DataDict.CSArguments;
SwCalStsCallBack.Arguments(2).Name = 'PosIdx';
SwCalStsCallBack.Arguments(2).EngDT = dt.u16;
SwCalStsCallBack.Arguments(2).EngMin = 0;
SwCalStsCallBack.Arguments(2).EngMax = 65535;
SwCalStsCallBack.Arguments(2).Units = 'Cnt';
SwCalStsCallBack.Arguments(2).Direction = 'In';
SwCalStsCallBack.Arguments(2).InitRowCol = [1  1];
SwCalStsCallBack.Arguments(2).Description = 'None';
SwCalStsCallBack.Arguments(3) = DataDict.CSArguments;
SwCalStsCallBack.Arguments(3).Name = 'SnsrData';
SwCalStsCallBack.Arguments(3).EngDT = dt.u16;
SwCalStsCallBack.Arguments(3).EngMin = 0;
SwCalStsCallBack.Arguments(3).EngMax = 65535;
SwCalStsCallBack.Arguments(3).Units = 'Cnt';
SwCalStsCallBack.Arguments(3).Direction = 'In';
SwCalStsCallBack.Arguments(3).InitRowCol = [1  12];
SwCalStsCallBack.Arguments(3).Description = 'None';



%%-------------------------------------------
%% Input Signal Definition                   
%%-------------------------------------------
MotCtrlMfgEnaSt = DataDict.IpSignal;
MotCtrlMfgEnaSt.LongName = 'Manufacture Enable State';
MotCtrlMfgEnaSt.Description = 'Manufacture Enable State';
MotCtrlMfgEnaSt.DocUnits = 'Cnt';
MotCtrlMfgEnaSt.EngDT = enum.MfgEnaSt1;
MotCtrlMfgEnaSt.EngInit = MfgEnaSt1.MFGENAST_PRDNMOD;
MotCtrlMfgEnaSt.EngMin = MfgEnaSt1.MFGENAST_PRDNMOD;
MotCtrlMfgEnaSt.EngMax = MfgEnaSt1.MFGENAST_TESTMOD;
MotCtrlMfgEnaSt.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMfgEnaSt.ReadType = 'NonRte';


MotCtrlMotAg2Cos = DataDict.IpSignal;
MotCtrlMotAg2Cos.LongName = 'Motor Control Motor Angle 2 Cosine';
MotCtrlMotAg2Cos.Description = 'Motor Control Motor Angle 2 Cosine';
MotCtrlMotAg2Cos.DocUnits = 'Volt';
MotCtrlMotAg2Cos.EngDT = dt.float32;
MotCtrlMotAg2Cos.EngInit = 0;
MotCtrlMotAg2Cos.EngMin = 0;
MotCtrlMotAg2Cos.EngMax = 5;
MotCtrlMotAg2Cos.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg2Cos.ReadType = 'NonRte';


MotCtrlMotAg2CosAdcFaild = DataDict.IpSignal;
MotCtrlMotAg2CosAdcFaild.LongName = 'Motor Angle 2 Cos ADC Failed';
MotCtrlMotAg2CosAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg2CosAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg2CosAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg2CosAdcFaild.EngInit = 0;
MotCtrlMotAg2CosAdcFaild.EngMin = 0;
MotCtrlMotAg2CosAdcFaild.EngMax = 1;
MotCtrlMotAg2CosAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg2CosAdcFaild.ReadType = 'NonRte';


MotCtrlMotAg2Sin = DataDict.IpSignal;
MotCtrlMotAg2Sin.LongName = 'Motor Control Motor Angle 2 Sine';
MotCtrlMotAg2Sin.Description = 'Motor Control Motor Angle 2 Sine';
MotCtrlMotAg2Sin.DocUnits = 'Volt';
MotCtrlMotAg2Sin.EngDT = dt.float32;
MotCtrlMotAg2Sin.EngInit = 0;
MotCtrlMotAg2Sin.EngMin = 0;
MotCtrlMotAg2Sin.EngMax = 5;
MotCtrlMotAg2Sin.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg2Sin.ReadType = 'NonRte';


MotCtrlMotAg2SinAdcFaild = DataDict.IpSignal;
MotCtrlMotAg2SinAdcFaild.LongName = 'Motor Angle 2 Sin ADC Failed';
MotCtrlMotAg2SinAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg2SinAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg2SinAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg2SinAdcFaild.EngInit = 0;
MotCtrlMotAg2SinAdcFaild.EngMin = 0;
MotCtrlMotAg2SinAdcFaild.EngMax = 1;
MotCtrlMotAg2SinAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg2SinAdcFaild.ReadType = 'NonRte';


MotCtrlMotAg5Cos = DataDict.IpSignal;
MotCtrlMotAg5Cos.LongName = 'Motor Control Motor Angle 5 Cosine';
MotCtrlMotAg5Cos.Description = 'Motor Control Motor Angle 5 Cosine';
MotCtrlMotAg5Cos.DocUnits = 'Volt';
MotCtrlMotAg5Cos.EngDT = dt.float32;
MotCtrlMotAg5Cos.EngInit = 0;
MotCtrlMotAg5Cos.EngMin = 0;
MotCtrlMotAg5Cos.EngMax = 5;
MotCtrlMotAg5Cos.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg5Cos.ReadType = 'NonRte';


MotCtrlMotAg5CosAdcFaild = DataDict.IpSignal;
MotCtrlMotAg5CosAdcFaild.LongName = 'Motor Angle 5 Cos ADC Failed';
MotCtrlMotAg5CosAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg5CosAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg5CosAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg5CosAdcFaild.EngInit = 0;
MotCtrlMotAg5CosAdcFaild.EngMin = 0;
MotCtrlMotAg5CosAdcFaild.EngMax = 1;
MotCtrlMotAg5CosAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg5CosAdcFaild.ReadType = 'NonRte';


MotCtrlMotAg5Sin = DataDict.IpSignal;
MotCtrlMotAg5Sin.LongName = 'Motor Control Motor Angle 5 Sine';
MotCtrlMotAg5Sin.Description = 'Motor Control Motor Angle 5 Sine';
MotCtrlMotAg5Sin.DocUnits = 'Volt';
MotCtrlMotAg5Sin.EngDT = dt.float32;
MotCtrlMotAg5Sin.EngInit = 0;
MotCtrlMotAg5Sin.EngMin = 0;
MotCtrlMotAg5Sin.EngMax = 5;
MotCtrlMotAg5Sin.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg5Sin.ReadType = 'NonRte';


MotCtrlMotAg5SinAdcFaild = DataDict.IpSignal;
MotCtrlMotAg5SinAdcFaild.LongName = 'Motor Angle 5 Sin ADC Failed';
MotCtrlMotAg5SinAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg5SinAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg5SinAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg5SinAdcFaild.EngInit = 0;
MotCtrlMotAg5SinAdcFaild.EngMin = 0;
MotCtrlMotAg5SinAdcFaild.EngMax = 1;
MotCtrlMotAg5SinAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg5SinAdcFaild.ReadType = 'NonRte';


MotCtrlMotAg6Cos = DataDict.IpSignal;
MotCtrlMotAg6Cos.LongName = 'Motor Control Motor Angle 6 Cosine';
MotCtrlMotAg6Cos.Description = 'Motor Control Motor Angle 6 Cosine';
MotCtrlMotAg6Cos.DocUnits = 'Volt';
MotCtrlMotAg6Cos.EngDT = dt.float32;
MotCtrlMotAg6Cos.EngInit = 0;
MotCtrlMotAg6Cos.EngMin = 0;
MotCtrlMotAg6Cos.EngMax = 5;
MotCtrlMotAg6Cos.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg6Cos.ReadType = 'NonRte';


MotCtrlMotAg6CosAdcFaild = DataDict.IpSignal;
MotCtrlMotAg6CosAdcFaild.LongName = 'Motor Angle 6 Cos ADC Failed';
MotCtrlMotAg6CosAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg6CosAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg6CosAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg6CosAdcFaild.EngInit = 0;
MotCtrlMotAg6CosAdcFaild.EngMin = 0;
MotCtrlMotAg6CosAdcFaild.EngMax = 1;
MotCtrlMotAg6CosAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg6CosAdcFaild.ReadType = 'NonRte';


MotCtrlMotAg6Sin = DataDict.IpSignal;
MotCtrlMotAg6Sin.LongName = 'Motor Control Motor Angle 6 Sine';
MotCtrlMotAg6Sin.Description = 'Motor Control Motor Angle 6 Sine';
MotCtrlMotAg6Sin.DocUnits = 'Volt';
MotCtrlMotAg6Sin.EngDT = dt.float32;
MotCtrlMotAg6Sin.EngInit = 0;
MotCtrlMotAg6Sin.EngMin = 0;
MotCtrlMotAg6Sin.EngMax = 5;
MotCtrlMotAg6Sin.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg6Sin.ReadType = 'NonRte';


MotCtrlMotAg6SinAdcFaild = DataDict.IpSignal;
MotCtrlMotAg6SinAdcFaild.LongName = 'Motor Angle 6 Sin ADC Failed';
MotCtrlMotAg6SinAdcFaild.Description = [...
  'Status Indicating ADC Failed or Not'];
MotCtrlMotAg6SinAdcFaild.DocUnits = 'Cnt';
MotCtrlMotAg6SinAdcFaild.EngDT = dt.lgc;
MotCtrlMotAg6SinAdcFaild.EngInit = 0;
MotCtrlMotAg6SinAdcFaild.EngMin = 0;
MotCtrlMotAg6SinAdcFaild.EngMax = 1;
MotCtrlMotAg6SinAdcFaild.ReadIn = {'MotAgSwCalPer1'};
MotCtrlMotAg6SinAdcFaild.ReadType = 'NonRte';


MotCtrlVehSpd = DataDict.IpSignal;
MotCtrlVehSpd.LongName = 'Vehicle Speed';
MotCtrlVehSpd.Description = [...
  'Conditioned Value For System-Wide Usage.'];
MotCtrlVehSpd.DocUnits = 'Kph';
MotCtrlVehSpd.EngDT = dt.float32;
MotCtrlVehSpd.EngInit = 0;
MotCtrlVehSpd.EngMin = 0;
MotCtrlVehSpd.EngMax = 511;
MotCtrlVehSpd.ReadIn = {'MotAgSwCalPer1'};
MotCtrlVehSpd.ReadType = 'NonRte';



%%-------------------------------------------
%% Output Signal Definition                  
%%-------------------------------------------



MotCtrlSwCalEna = DataDict.OpSignal;
MotCtrlSwCalEna.LongName = 'Motor Control Hall Calibration Enable';
MotCtrlSwCalEna.Description = [...
  'Motor Control Hall Calibration Enable'];
MotCtrlSwCalEna.DocUnits = 'Cnt';
MotCtrlSwCalEna.SwcShoName = 'MotAgSwCal';
MotCtrlSwCalEna.EngDT = dt.lgc;
MotCtrlSwCalEna.EngInit = 0;
MotCtrlSwCalEna.EngMin = 0;
MotCtrlSwCalEna.EngMax = 1;
MotCtrlSwCalEna.TestTolerance = 0;
MotCtrlSwCalEna.WrittenIn = {'MotAgSwCalPer1'};
MotCtrlSwCalEna.WriteType = 'NonRte';


MotCtrlSwCalModlnIdx = DataDict.OpSignal;
MotCtrlSwCalModlnIdx.LongName = 'Motor Control Software Calibration Modulation Index';
MotCtrlSwCalModlnIdx.Description = [...
  'Motor Control Software Calibration Modulation Index'];
MotCtrlSwCalModlnIdx.DocUnits = 'Uls';
MotCtrlSwCalModlnIdx.SwcShoName = 'MotAgSwCal';
MotCtrlSwCalModlnIdx.EngDT = dt.float32;
MotCtrlSwCalModlnIdx.EngInit = 0;
MotCtrlSwCalModlnIdx.EngMin = 0;
MotCtrlSwCalModlnIdx.EngMax = 1;
MotCtrlSwCalModlnIdx.TestTolerance = 0;
MotCtrlSwCalModlnIdx.WrittenIn = {'MotAgSwCalPer1'};
MotCtrlSwCalModlnIdx.WriteType = 'NonRte';


MotCtrlSwCalPosnIdx = DataDict.OpSignal;
MotCtrlSwCalPosnIdx.LongName = 'Motor Control Software Calibration Position Index';
MotCtrlSwCalPosnIdx.Description = [...
  'Motor Control Software Calibration Position Index'];
MotCtrlSwCalPosnIdx.DocUnits = 'Cnt';
MotCtrlSwCalPosnIdx.SwcShoName = 'MotAgSwCal';
MotCtrlSwCalPosnIdx.EngDT = dt.u0p16;
MotCtrlSwCalPosnIdx.EngInit = 0;
MotCtrlSwCalPosnIdx.EngMin = 0;
MotCtrlSwCalPosnIdx.EngMax = 0.9999847412;
MotCtrlSwCalPosnIdx.TestTolerance = 0;
MotCtrlSwCalPosnIdx.WrittenIn = {'MotAgSwCalPer1'};
MotCtrlSwCalPosnIdx.WriteType = 'NonRte';


%%-------------------------------------------
%% Inter-Runnable Variable Definition        
%%-------------------------------------------

%%-------------------------------------------
%% Calibrations Definition                   
%%-------------------------------------------
MotAgSwCalVehSpdThd = DataDict.Calibration;
MotAgSwCalVehSpdThd.LongName = 'Software Calibration Vehicle Speed Threshold';
MotAgSwCalVehSpdThd.Description = [...
  'Software Calibration Vehicle Speed Threshold'];
MotAgSwCalVehSpdThd.DocUnits = 'Kph';
MotAgSwCalVehSpdThd.EngDT = dt.float32;
MotAgSwCalVehSpdThd.EngVal = 3;
MotAgSwCalVehSpdThd.EngMin = 0;
MotAgSwCalVehSpdThd.EngMax = 511;
MotAgSwCalVehSpdThd.Cardinality = 'Cmn';
MotAgSwCalVehSpdThd.CustomerVisible = false;
MotAgSwCalVehSpdThd.Online = false;
MotAgSwCalVehSpdThd.Impact = 'H';
MotAgSwCalVehSpdThd.TuningOwner = 'Safety';
MotAgSwCalVehSpdThd.GraphLink = {''};
MotAgSwCalVehSpdThd.Monotony = 'None';
MotAgSwCalVehSpdThd.MaxGrad = Inf;
MotAgSwCalVehSpdThd.PortName = 'MotAgSwCalVehSpdThd';



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
BoostModlnIdx = DataDict.PIM;
BoostModlnIdx.LongName = 'Boost Modulation Index';
BoostModlnIdx.Description = 'Boost Modulation Index';
BoostModlnIdx.DocUnits = 'Uls';
BoostModlnIdx.EngDT = dt.float32;
BoostModlnIdx.EngMin = 0;
BoostModlnIdx.EngMax = 1;
BoostModlnIdx.InitRowCol = [1  1];


BoostSlew = DataDict.PIM;
BoostSlew.LongName = 'Boost Slew';
BoostSlew.Description = 'Boost Slew';
BoostSlew.DocUnits = 'Uls';
BoostSlew.EngDT = dt.float32;
BoostSlew.EngMin = -83886070;
BoostSlew.EngMax = 83886070;
BoostSlew.InitRowCol = [1  1];


BoostTi = DataDict.PIM;
BoostTi.LongName = 'Boost Time';
BoostTi.Description = 'Boost Time';
BoostTi.DocUnits = 'MilliSec';
BoostTi.EngDT = dt.u08;
BoostTi.EngMin = 0;
BoostTi.EngMax = 255;
BoostTi.InitRowCol = [1  1];


BoostTiOut = DataDict.PIM;
BoostTiOut.LongName = 'Boost Time Out';
BoostTiOut.Description = 'Boost Time Out';
BoostTiOut.DocUnits = 'Cnt';
BoostTiOut.EngDT = dt.u32;
BoostTiOut.EngMin = 0;
BoostTiOut.EngMax = 4294967295;
BoostTiOut.InitRowCol = [1  1];


CoolDwnModlnIdx = DataDict.PIM;
CoolDwnModlnIdx.LongName = 'Cool Down Modulation Index';
CoolDwnModlnIdx.Description = 'Cool Down Modulation Index';
CoolDwnModlnIdx.DocUnits = 'Uls';
CoolDwnModlnIdx.EngDT = dt.float32;
CoolDwnModlnIdx.EngMin = 0;
CoolDwnModlnIdx.EngMax = 1;
CoolDwnModlnIdx.InitRowCol = [1  1];


CoolDwnSlew = DataDict.PIM;
CoolDwnSlew.LongName = 'Cool Down Slew';
CoolDwnSlew.Description = 'Cool Down Slew';
CoolDwnSlew.DocUnits = 'Uls';
CoolDwnSlew.EngDT = dt.float32;
CoolDwnSlew.EngMin = -83886070;
CoolDwnSlew.EngMax = 83886070;
CoolDwnSlew.InitRowCol = [1  1];


CoolDwnTi = DataDict.PIM;
CoolDwnTi.LongName = 'Cool Down Time';
CoolDwnTi.Description = 'Cool Down Time';
CoolDwnTi.DocUnits = 'MilliSec';
CoolDwnTi.EngDT = dt.u16;
CoolDwnTi.EngMin = 0;
CoolDwnTi.EngMax = 65535;
CoolDwnTi.InitRowCol = [1  1];


CoolDwnTiOut = DataDict.PIM;
CoolDwnTiOut.LongName = 'Cool Down Time Out';
CoolDwnTiOut.Description = 'Cool Down Time Out';
CoolDwnTiOut.DocUnits = 'Cnt';
CoolDwnTiOut.EngDT = dt.u32;
CoolDwnTiOut.EngMin = 0;
CoolDwnTiOut.EngMax = 4294967295;
CoolDwnTiOut.InitRowCol = [1  1];


ElecRevCnt = DataDict.PIM;
ElecRevCnt.LongName = 'Electrical Revolution Count';
ElecRevCnt.Description = 'Electrical Revolution Count';
ElecRevCnt.DocUnits = 'Cnt';
ElecRevCnt.EngDT = dt.u08;
ElecRevCnt.EngMin = 0;
ElecRevCnt.EngMax = 255;
ElecRevCnt.InitRowCol = [1  1];


HldModlnIdx = DataDict.PIM;
HldModlnIdx.LongName = 'Hold Modulation Index';
HldModlnIdx.Description = 'Hold Modulation Index';
HldModlnIdx.DocUnits = 'Uls';
HldModlnIdx.EngDT = dt.float32;
HldModlnIdx.EngMin = 0;
HldModlnIdx.EngMax = 1;
HldModlnIdx.InitRowCol = [1  1];


HldSlew = DataDict.PIM;
HldSlew.LongName = 'Hold Slew';
HldSlew.Description = 'Hold Slew';
HldSlew.DocUnits = 'Uls';
HldSlew.EngDT = dt.float32;
HldSlew.EngMin = -83886070;
HldSlew.EngMax = 83886070;
HldSlew.InitRowCol = [1  1];


HldTi = DataDict.PIM;
HldTi.LongName = 'Hold Time';
HldTi.Description = 'Hold Time';
HldTi.DocUnits = 'MilliSec';
HldTi.EngDT = dt.u16;
HldTi.EngMin = 0;
HldTi.EngMax = 65535;
HldTi.InitRowCol = [1  1];


HldTiOut = DataDict.PIM;
HldTiOut.LongName = 'Hold Time Out';
HldTiOut.Description = 'Hold Time Out';
HldTiOut.DocUnits = 'Cnt';
HldTiOut.EngDT = dt.u32;
HldTiOut.EngMin = 0;
HldTiOut.EngMax = 4294967295;
HldTiOut.InitRowCol = [1  1];


MotAg2CosAdcFaildCntr = DataDict.PIM;
MotAg2CosAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 2 Cos ADC Failed Counter';
MotAg2CosAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 2 Cos ADC Failed Counter'];
MotAg2CosAdcFaildCntr.DocUnits = 'Cnt';
MotAg2CosAdcFaildCntr.EngDT = dt.u08;
MotAg2CosAdcFaildCntr.EngMin = 0;
MotAg2CosAdcFaildCntr.EngMax = 255;
MotAg2CosAdcFaildCntr.InitRowCol = [1  1];


MotAg2CosMeasAvrg = DataDict.PIM;
MotAg2CosMeasAvrg.LongName = 'Motor Angle 2 Cosine Measure Average';
MotAg2CosMeasAvrg.Description = [...
  'Motor Angle 2 Cosine Measure Average'];
MotAg2CosMeasAvrg.DocUnits = 'MotRev';
MotAg2CosMeasAvrg.EngDT = dt.u3p13;
MotAg2CosMeasAvrg.EngMin = 0;
MotAg2CosMeasAvrg.EngMax = 7.99987792;
MotAg2CosMeasAvrg.InitRowCol = [1  1];


MotAg2CosMeasRaw = DataDict.PIM;
MotAg2CosMeasRaw.LongName = 'Motor Angle 2 Cosine Measure Raw';
MotAg2CosMeasRaw.Description = 'Motor Angle 2 Cosine Measure Raw';
MotAg2CosMeasRaw.DocUnits = 'MotRev';
MotAg2CosMeasRaw.EngDT = dt.u3p13;
MotAg2CosMeasRaw.EngMin = 0;
MotAg2CosMeasRaw.EngMax = 7.99987792;
MotAg2CosMeasRaw.InitRowCol = [1  50];


MotAg2CosMeasRawCumv = DataDict.PIM;
MotAg2CosMeasRawCumv.LongName = 'Motor Angle 2 Cosine Measure Raw Cumulative';
MotAg2CosMeasRawCumv.Description = [...
  'Motor Angle 2 Cosine Measure Raw Cumulative'];
MotAg2CosMeasRawCumv.DocUnits = 'MotRev';
MotAg2CosMeasRawCumv.EngDT = dt.u3p13;
MotAg2CosMeasRawCumv.EngMin = 0;
MotAg2CosMeasRawCumv.EngMax = 7.99987792;
MotAg2CosMeasRawCumv.InitRowCol = [1  1];


MotAg2CosMeasRawPrev = DataDict.PIM;
MotAg2CosMeasRawPrev.LongName = 'Motor Angle 2 Cosine Measure Raw Previous';
MotAg2CosMeasRawPrev.Description = [...
  'Motor Angle 2 Cosine Measure Raw Previous'];
MotAg2CosMeasRawPrev.DocUnits = 'MotRev';
MotAg2CosMeasRawPrev.EngDT = dt.u3p13;
MotAg2CosMeasRawPrev.EngMin = 0;
MotAg2CosMeasRawPrev.EngMax = 7.99987792;
MotAg2CosMeasRawPrev.InitRowCol = [1  1];


MotAg2SinAdcFaildCntr = DataDict.PIM;
MotAg2SinAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 2 Sine ADC Failed Counter';
MotAg2SinAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 2 Sine ADC Failed Counter' ...
  ''];
MotAg2SinAdcFaildCntr.DocUnits = 'Cnt';
MotAg2SinAdcFaildCntr.EngDT = dt.u08;
MotAg2SinAdcFaildCntr.EngMin = 0;
MotAg2SinAdcFaildCntr.EngMax = 255;
MotAg2SinAdcFaildCntr.InitRowCol = [1  1];


MotAg2SinMeasAvrg = DataDict.PIM;
MotAg2SinMeasAvrg.LongName = 'Motor Angle 2 Sine Measure Average';
MotAg2SinMeasAvrg.Description = 'Motor Angle 2 Sine Measure Average';
MotAg2SinMeasAvrg.DocUnits = 'MotRev';
MotAg2SinMeasAvrg.EngDT = dt.u3p13;
MotAg2SinMeasAvrg.EngMin = 0;
MotAg2SinMeasAvrg.EngMax = 7.99987792;
MotAg2SinMeasAvrg.InitRowCol = [1  1];


MotAg2SinMeasRaw = DataDict.PIM;
MotAg2SinMeasRaw.LongName = 'Motor Angle 2 Sine Measure Raw';
MotAg2SinMeasRaw.Description = 'Motor Angle 2 Sine Measure Raw';
MotAg2SinMeasRaw.DocUnits = 'MotRev';
MotAg2SinMeasRaw.EngDT = dt.u3p13;
MotAg2SinMeasRaw.EngMin = 0;
MotAg2SinMeasRaw.EngMax = 7.99987792;
MotAg2SinMeasRaw.InitRowCol = [1  50];


MotAg2SinMeasRawCumv = DataDict.PIM;
MotAg2SinMeasRawCumv.LongName = 'Motor Angle 2 Sine Measure Raw Cumulative';
MotAg2SinMeasRawCumv.Description = [...
  'Motor Angle 2 Sine Measure Raw Cumulative'];
MotAg2SinMeasRawCumv.DocUnits = 'MotRev';
MotAg2SinMeasRawCumv.EngDT = dt.u3p13;
MotAg2SinMeasRawCumv.EngMin = 0;
MotAg2SinMeasRawCumv.EngMax = 7.99987792;
MotAg2SinMeasRawCumv.InitRowCol = [1  1];


MotAg2SinMeasRawPrev = DataDict.PIM;
MotAg2SinMeasRawPrev.LongName = 'Motor Angle 2 Sine Measure Raw Previous';
MotAg2SinMeasRawPrev.Description = [...
  'Motor Angle 2 Sine Measure Raw Previous'];
MotAg2SinMeasRawPrev.DocUnits = 'MotRev';
MotAg2SinMeasRawPrev.EngDT = dt.u3p13;
MotAg2SinMeasRawPrev.EngMin = 0;
MotAg2SinMeasRawPrev.EngMax = 7.99987792;
MotAg2SinMeasRawPrev.InitRowCol = [1  1];


MotAg5CosAdcFaildCntr = DataDict.PIM;
MotAg5CosAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 5 Cos ADC Failed Counter';
MotAg5CosAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 5 Cos ADC Failed Counter'];
MotAg5CosAdcFaildCntr.DocUnits = 'Cnt';
MotAg5CosAdcFaildCntr.EngDT = dt.u08;
MotAg5CosAdcFaildCntr.EngMin = 0;
MotAg5CosAdcFaildCntr.EngMax = 255;
MotAg5CosAdcFaildCntr.InitRowCol = [1  1];


MotAg5CosMeasAvrg = DataDict.PIM;
MotAg5CosMeasAvrg.LongName = 'Motor Angle 5 Cosine Measure Average';
MotAg5CosMeasAvrg.Description = [...
  'Motor Angle 5 Cosine Measure Average'];
MotAg5CosMeasAvrg.DocUnits = 'MotRev';
MotAg5CosMeasAvrg.EngDT = dt.u3p13;
MotAg5CosMeasAvrg.EngMin = 0;
MotAg5CosMeasAvrg.EngMax = 7.99987792;
MotAg5CosMeasAvrg.InitRowCol = [1  1];


MotAg5CosMeasRaw = DataDict.PIM;
MotAg5CosMeasRaw.LongName = 'Motor Angle 5 Cosine Measure Raw';
MotAg5CosMeasRaw.Description = 'Motor Angle 5 Cosine Measure Raw';
MotAg5CosMeasRaw.DocUnits = 'MotRev';
MotAg5CosMeasRaw.EngDT = dt.u3p13;
MotAg5CosMeasRaw.EngMin = 0;
MotAg5CosMeasRaw.EngMax = 7.99987792;
MotAg5CosMeasRaw.InitRowCol = [1  50];


MotAg5CosMeasRawCumv = DataDict.PIM;
MotAg5CosMeasRawCumv.LongName = 'Motor Angle 5 Cosine Measure Raw Cumulative';
MotAg5CosMeasRawCumv.Description = [...
  'Motor Angle 5 Cosine Measure Raw Cumulative'];
MotAg5CosMeasRawCumv.DocUnits = 'MotRev';
MotAg5CosMeasRawCumv.EngDT = dt.u3p13;
MotAg5CosMeasRawCumv.EngMin = 0;
MotAg5CosMeasRawCumv.EngMax = 7.99987792;
MotAg5CosMeasRawCumv.InitRowCol = [1  1];


MotAg5CosMeasRawPrev = DataDict.PIM;
MotAg5CosMeasRawPrev.LongName = 'Motor Angle 5 Cosine Measure Raw Previous';
MotAg5CosMeasRawPrev.Description = [...
  'Motor Angle 5 Cosine Measure Raw Previous'];
MotAg5CosMeasRawPrev.DocUnits = 'MotRev';
MotAg5CosMeasRawPrev.EngDT = dt.u3p13;
MotAg5CosMeasRawPrev.EngMin = 0;
MotAg5CosMeasRawPrev.EngMax = 7.99987792;
MotAg5CosMeasRawPrev.InitRowCol = [1  1];


MotAg5SinAdcFaildCntr = DataDict.PIM;
MotAg5SinAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 5 Sine ADC Failed Counter';
MotAg5SinAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 5 Sine ADC Failed Counter' ...
  ''];
MotAg5SinAdcFaildCntr.DocUnits = 'Cnt';
MotAg5SinAdcFaildCntr.EngDT = dt.u08;
MotAg5SinAdcFaildCntr.EngMin = 0;
MotAg5SinAdcFaildCntr.EngMax = 255;
MotAg5SinAdcFaildCntr.InitRowCol = [1  1];


MotAg5SinMeasAvrg = DataDict.PIM;
MotAg5SinMeasAvrg.LongName = 'Motor Angle 5 Sine Measure Average';
MotAg5SinMeasAvrg.Description = 'Motor Angle 5 Sine Measure Average';
MotAg5SinMeasAvrg.DocUnits = 'MotRev';
MotAg5SinMeasAvrg.EngDT = dt.u3p13;
MotAg5SinMeasAvrg.EngMin = 0;
MotAg5SinMeasAvrg.EngMax = 7.99987792;
MotAg5SinMeasAvrg.InitRowCol = [1  1];


MotAg5SinMeasRaw = DataDict.PIM;
MotAg5SinMeasRaw.LongName = 'Motor Angle 5 Sine Measure Raw';
MotAg5SinMeasRaw.Description = 'Motor Angle 5 Sine Measure Raw';
MotAg5SinMeasRaw.DocUnits = 'MotRev';
MotAg5SinMeasRaw.EngDT = dt.u3p13;
MotAg5SinMeasRaw.EngMin = 0;
MotAg5SinMeasRaw.EngMax = 7.99987792;
MotAg5SinMeasRaw.InitRowCol = [1  50];


MotAg5SinMeasRawCumv = DataDict.PIM;
MotAg5SinMeasRawCumv.LongName = 'Motor Angle 5 Sine Measure Raw Cumulative';
MotAg5SinMeasRawCumv.Description = [...
  'Motor Angle 5 Sine Measure Raw Cumulative'];
MotAg5SinMeasRawCumv.DocUnits = 'MotRev';
MotAg5SinMeasRawCumv.EngDT = dt.u3p13;
MotAg5SinMeasRawCumv.EngMin = 0;
MotAg5SinMeasRawCumv.EngMax = 7.99987792;
MotAg5SinMeasRawCumv.InitRowCol = [1  1];


MotAg5SinMeasRawPrev = DataDict.PIM;
MotAg5SinMeasRawPrev.LongName = 'Motor Angle 5 Sine Measure Raw Previous';
MotAg5SinMeasRawPrev.Description = [...
  'Motor Angle 5 Sine Measure Raw Previous'];
MotAg5SinMeasRawPrev.DocUnits = 'MotRev';
MotAg5SinMeasRawPrev.EngDT = dt.u3p13;
MotAg5SinMeasRawPrev.EngMin = 0;
MotAg5SinMeasRawPrev.EngMax = 7.99987792;
MotAg5SinMeasRawPrev.InitRowCol = [1  1];


MotAg6CosAdcFaildCntr = DataDict.PIM;
MotAg6CosAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 6 Cos ADC Failed Counter';
MotAg6CosAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 6 Cos ADC Failed Counter'];
MotAg6CosAdcFaildCntr.DocUnits = 'Cnt';
MotAg6CosAdcFaildCntr.EngDT = dt.u08;
MotAg6CosAdcFaildCntr.EngMin = 0;
MotAg6CosAdcFaildCntr.EngMax = 255;
MotAg6CosAdcFaildCntr.InitRowCol = [1  1];


MotAg6CosMeasAvrg = DataDict.PIM;
MotAg6CosMeasAvrg.LongName = 'Motor Angle 6 Cosine Measure Average';
MotAg6CosMeasAvrg.Description = [...
  'Motor Angle 6 Cosine Measure Average'];
MotAg6CosMeasAvrg.DocUnits = 'MotRev';
MotAg6CosMeasAvrg.EngDT = dt.u3p13;
MotAg6CosMeasAvrg.EngMin = 0;
MotAg6CosMeasAvrg.EngMax = 7.99987792;
MotAg6CosMeasAvrg.InitRowCol = [1  1];


MotAg6CosMeasRaw = DataDict.PIM;
MotAg6CosMeasRaw.LongName = 'Motor Angle 6 Cosine Measure Raw';
MotAg6CosMeasRaw.Description = 'Motor Angle 6 Cosine Measure Raw';
MotAg6CosMeasRaw.DocUnits = 'MotRev';
MotAg6CosMeasRaw.EngDT = dt.u3p13;
MotAg6CosMeasRaw.EngMin = 0;
MotAg6CosMeasRaw.EngMax = 7.99987792;
MotAg6CosMeasRaw.InitRowCol = [1  50];


MotAg6CosMeasRawCumv = DataDict.PIM;
MotAg6CosMeasRawCumv.LongName = 'Motor Angle 6 Cosine Measure Raw Cumulative';
MotAg6CosMeasRawCumv.Description = [...
  'Motor Angle 6 Cosine Measure Raw Cumulative'];
MotAg6CosMeasRawCumv.DocUnits = 'MotRev';
MotAg6CosMeasRawCumv.EngDT = dt.u3p13;
MotAg6CosMeasRawCumv.EngMin = 0;
MotAg6CosMeasRawCumv.EngMax = 7.99987792;
MotAg6CosMeasRawCumv.InitRowCol = [1  1];


MotAg6CosMeasRawPrev = DataDict.PIM;
MotAg6CosMeasRawPrev.LongName = 'Motor Angle 6 Cosine Measure Raw Previous';
MotAg6CosMeasRawPrev.Description = [...
  'Motor Angle 6 Cosine Measure Raw Previous'];
MotAg6CosMeasRawPrev.DocUnits = 'MotRev';
MotAg6CosMeasRawPrev.EngDT = dt.u3p13;
MotAg6CosMeasRawPrev.EngMin = 0;
MotAg6CosMeasRawPrev.EngMax = 7.99987792;
MotAg6CosMeasRawPrev.InitRowCol = [1  1];


MotAg6SinAdcFaildCntr = DataDict.PIM;
MotAg6SinAdcFaildCntr.LongName = 'Motor Angle Software Calibration Motor Angle 6 Sine ADC Failed Counter';
MotAg6SinAdcFaildCntr.Description = [...
  'Motor Angle Software Calibration Motor Angle 6 Sine ADC Failed Counter' ...
  ''];
MotAg6SinAdcFaildCntr.DocUnits = 'Cnt';
MotAg6SinAdcFaildCntr.EngDT = dt.u08;
MotAg6SinAdcFaildCntr.EngMin = 0;
MotAg6SinAdcFaildCntr.EngMax = 255;
MotAg6SinAdcFaildCntr.InitRowCol = [1  1];


MotAg6SinMeasAvrg = DataDict.PIM;
MotAg6SinMeasAvrg.LongName = 'Motor Angle 6 Sine Measure Average';
MotAg6SinMeasAvrg.Description = 'Motor Angle 6 Sine Measure Average';
MotAg6SinMeasAvrg.DocUnits = 'MotRev';
MotAg6SinMeasAvrg.EngDT = dt.u3p13;
MotAg6SinMeasAvrg.EngMin = 0;
MotAg6SinMeasAvrg.EngMax = 7.99987792;
MotAg6SinMeasAvrg.InitRowCol = [1  1];


MotAg6SinMeasRaw = DataDict.PIM;
MotAg6SinMeasRaw.LongName = 'Motor Angle 6 Sine Measure Raw';
MotAg6SinMeasRaw.Description = 'Motor Angle 6 Sine Measure Raw';
MotAg6SinMeasRaw.DocUnits = 'MotRev';
MotAg6SinMeasRaw.EngDT = dt.u3p13;
MotAg6SinMeasRaw.EngMin = 0;
MotAg6SinMeasRaw.EngMax = 7.99987792;
MotAg6SinMeasRaw.InitRowCol = [1  50];


MotAg6SinMeasRawCumv = DataDict.PIM;
MotAg6SinMeasRawCumv.LongName = 'Motor Angle 6 Sine Measure Raw Cumulative';
MotAg6SinMeasRawCumv.Description = [...
  'Motor Angle 6 Sine Measure Raw Cumulative'];
MotAg6SinMeasRawCumv.DocUnits = 'MotRev';
MotAg6SinMeasRawCumv.EngDT = dt.u3p13;
MotAg6SinMeasRawCumv.EngMin = 0;
MotAg6SinMeasRawCumv.EngMax = 7.99987792;
MotAg6SinMeasRawCumv.InitRowCol = [1  1];


MotAg6SinMeasRawPrev = DataDict.PIM;
MotAg6SinMeasRawPrev.LongName = 'Motor Angle 6 Sine Measure Raw Previous';
MotAg6SinMeasRawPrev.Description = [...
  'Motor Angle 6 Sine Measure Raw Previous'];
MotAg6SinMeasRawPrev.DocUnits = 'MotRev';
MotAg6SinMeasRawPrev.EngDT = dt.u3p13;
MotAg6SinMeasRawPrev.EngMin = 0;
MotAg6SinMeasRawPrev.EngMax = 7.99987792;
MotAg6SinMeasRawPrev.InitRowCol = [1  1];


PosnIdx = DataDict.PIM;
PosnIdx.LongName = 'Position Index';
PosnIdx.Description = 'Position Index';
PosnIdx.DocUnits = 'MotRevElec';
PosnIdx.EngDT = dt.u16p16;
PosnIdx.EngMin = 0;
PosnIdx.EngMax = 65535.99998;
PosnIdx.InitRowCol = [1  1];


PosnStepSize = DataDict.PIM;
PosnStepSize.LongName = 'Position Step Size';
PosnStepSize.Description = 'Position Step Size';
PosnStepSize.DocUnits = 'MotRevElec';
PosnStepSize.EngDT = dt.u0p16;
PosnStepSize.EngMin = 0;
PosnStepSize.EngMax = 0.9999847412;
PosnStepSize.InitRowCol = [1  1];


Ramp1Ti = DataDict.PIM;
Ramp1Ti.LongName = 'Ramp 1 Time';
Ramp1Ti.Description = 'Ramp 1 Time';
Ramp1Ti.DocUnits = 'MilliSec';
Ramp1Ti.EngDT = dt.u08;
Ramp1Ti.EngMin = 0;
Ramp1Ti.EngMax = 255;
Ramp1Ti.InitRowCol = [1  1];


Ramp2Ti = DataDict.PIM;
Ramp2Ti.LongName = 'Ramp 2 Time';
Ramp2Ti.Description = 'Ramp 2 Time';
Ramp2Ti.DocUnits = 'MilliSec';
Ramp2Ti.EngDT = dt.u08;
Ramp2Ti.EngMin = 0;
Ramp2Ti.EngMax = 255;
Ramp2Ti.InitRowCol = [1  1];


Ramp3Ti = DataDict.PIM;
Ramp3Ti.LongName = 'Ramp 3 Time';
Ramp3Ti.Description = 'Ramp 3 Time';
Ramp3Ti.DocUnits = 'MilliSec';
Ramp3Ti.EngDT = dt.u08;
Ramp3Ti.EngMin = 0;
Ramp3Ti.EngMax = 255;
Ramp3Ti.InitRowCol = [1  1];


SampleIdx = DataDict.PIM;
SampleIdx.LongName = 'Sample Index';
SampleIdx.Description = 'Sample Index';
SampleIdx.DocUnits = 'Cnt';
SampleIdx.EngDT = dt.u08;
SampleIdx.EngMin = 0;
SampleIdx.EngMax = 255;
SampleIdx.InitRowCol = [1  1];


SamplePosnIdx = DataDict.PIM;
SamplePosnIdx.LongName = 'Sample Position Index';
SamplePosnIdx.Description = 'Sample Position Index';
SamplePosnIdx.DocUnits = 'MotRevElec';
SamplePosnIdx.EngDT = dt.u16p16;
SamplePosnIdx.EngMin = 0;
SamplePosnIdx.EngMax = 65535.99998;
SamplePosnIdx.InitRowCol = [1  1];


SampleRdyFlg = DataDict.PIM;
SampleRdyFlg.LongName = 'Sample Ready Flag';
SampleRdyFlg.Description = 'Sample Ready Flag';
SampleRdyFlg.DocUnits = 'Cnt';
SampleRdyFlg.EngDT = dt.lgc;
SampleRdyFlg.EngMin = 0;
SampleRdyFlg.EngMax = 1;
SampleRdyFlg.InitRowCol = [1  1];


SampleStopTi = DataDict.PIM;
SampleStopTi.LongName = 'Sample Stop Time';
SampleStopTi.Description = 'Sample Stop Time';
SampleStopTi.DocUnits = 'Uls';
SampleStopTi.EngDT = dt.u32;
SampleStopTi.EngMin = 0;
SampleStopTi.EngMax = 4294967295;
SampleStopTi.InitRowCol = [1  1];


SampleStrtTi = DataDict.PIM;
SampleStrtTi.LongName = 'Sample Start Time';
SampleStrtTi.Description = 'Sample Start Time';
SampleStrtTi.DocUnits = 'Uls';
SampleStrtTi.EngDT = dt.u32;
SampleStrtTi.EngMin = 0;
SampleStrtTi.EngMax = 4294967295;
SampleStrtTi.InitRowCol = [1  1];


SwCalCycTi = DataDict.PIM;
SwCalCycTi.LongName = 'Software Calibration Cycle Time';
SwCalCycTi.Description = 'Software Calibration Cycle Time';
SwCalCycTi.DocUnits = 'Cnt';
SwCalCycTi.EngDT = dt.u32;
SwCalCycTi.EngMin = 0;
SwCalCycTi.EngMax = 4294967295;
SwCalCycTi.InitRowCol = [1  1];


SwCalEna = DataDict.PIM;
SwCalEna.LongName = 'Software Calibration Enable';
SwCalEna.Description = 'Software Calibration Enable';
SwCalEna.DocUnits = 'Cnt';
SwCalEna.EngDT = dt.lgc;
SwCalEna.EngMin = 0;
SwCalEna.EngMax = 1;
SwCalEna.InitRowCol = [1  1];


SwCalMotModlnIdx = DataDict.PIM;
SwCalMotModlnIdx.LongName = 'Software Calibration Motor Modulation Index';
SwCalMotModlnIdx.Description = [...
  'Software Calibration Motor Modulation Index'];
SwCalMotModlnIdx.DocUnits = 'Uls';
SwCalMotModlnIdx.EngDT = dt.float32;
SwCalMotModlnIdx.EngMin = 0;
SwCalMotModlnIdx.EngMax = 1;
SwCalMotModlnIdx.InitRowCol = [1  1];


SwCalStepDir = DataDict.PIM;
SwCalStepDir.LongName = 'Software Calibration Step Direction';
SwCalStepDir.Description = [...
  'Software Calibration Step Direction'];
SwCalStepDir.DocUnits = 'Cnt';
SwCalStepDir.EngDT = dt.u08;
SwCalStepDir.EngMin = 0;
SwCalStepDir.EngMax = 1;
SwCalStepDir.InitRowCol = [1  1];



%%-------------------------------------------
%% Constant Definition                       
%%-------------------------------------------
ARCHGLBPRM_FLOATZEROTHD_ULS_F32 = DataDict.Constant;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.LongName = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Description = 'Float Zero Threshold';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.DocUnits = 'Uls';
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngDT = dt.float32;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.EngVal = 1.1920929e-07;
ARCHGLBPRM_FLOATZEROTHD_ULS_F32.Define = 'Global';


BOOSTMODLNIDXDFT_ULS_F32 = DataDict.Constant;
BOOSTMODLNIDXDFT_ULS_F32.LongName = 'Boost Mod Index';
BOOSTMODLNIDXDFT_ULS_F32.Description = 'Boost Mod Index';
BOOSTMODLNIDXDFT_ULS_F32.DocUnits = 'Uls';
BOOSTMODLNIDXDFT_ULS_F32.EngDT = dt.float32;
BOOSTMODLNIDXDFT_ULS_F32.EngVal = 0.180895705;
BOOSTMODLNIDXDFT_ULS_F32.Define = 'Local';


BOOSTTIDFT_MILLISEC_U08 = DataDict.Constant;
BOOSTTIDFT_MILLISEC_U08.LongName = 'Boost Time in Milli Second';
BOOSTTIDFT_MILLISEC_U08.Description = 'Boost Time in Milli Second';
BOOSTTIDFT_MILLISEC_U08.DocUnits = 'MilliSec';
BOOSTTIDFT_MILLISEC_U08.EngDT = dt.u08;
BOOSTTIDFT_MILLISEC_U08.EngVal = 10;
BOOSTTIDFT_MILLISEC_U08.Define = 'Local';


COOLDWNMODLNIDXDFT_ULS_F32 = DataDict.Constant;
COOLDWNMODLNIDXDFT_ULS_F32.LongName = 'Cool Down Mod Index';
COOLDWNMODLNIDXDFT_ULS_F32.Description = 'Cool Down Mod Index';
COOLDWNMODLNIDXDFT_ULS_F32.DocUnits = 'Uls';
COOLDWNMODLNIDXDFT_ULS_F32.EngDT = dt.float32;
COOLDWNMODLNIDXDFT_ULS_F32.EngVal = 0;
COOLDWNMODLNIDXDFT_ULS_F32.Define = 'Local';


COOLDWNTIDFT_MILLISEC_U16 = DataDict.Constant;
COOLDWNTIDFT_MILLISEC_U16.LongName = 'Cool Down Time in Milli Second';
COOLDWNTIDFT_MILLISEC_U16.Description = 'Cool Down Time in Milli Second';
COOLDWNTIDFT_MILLISEC_U16.DocUnits = 'MilliSec';
COOLDWNTIDFT_MILLISEC_U16.EngDT = dt.u16;
COOLDWNTIDFT_MILLISEC_U16.EngVal = 200;
COOLDWNTIDFT_MILLISEC_U16.Define = 'Local';


ELECREVCNTDFT_CNT_U08 = DataDict.Constant;
ELECREVCNTDFT_CNT_U08.LongName = 'Electrical Revolution count';
ELECREVCNTDFT_CNT_U08.Description = 'Electrical Revolution count';
ELECREVCNTDFT_CNT_U08.DocUnits = 'Cnt';
ELECREVCNTDFT_CNT_U08.EngDT = dt.u08;
ELECREVCNTDFT_CNT_U08.EngVal = 10;
ELECREVCNTDFT_CNT_U08.Define = 'Local';


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


HLDMODLNIDXDFT_ULS_F32 = DataDict.Constant;
HLDMODLNIDXDFT_ULS_F32.LongName = 'Hold Mod Index';
HLDMODLNIDXDFT_ULS_F32.Description = 'Hold Mod Index';
HLDMODLNIDXDFT_ULS_F32.DocUnits = 'Uls';
HLDMODLNIDXDFT_ULS_F32.EngDT = dt.float32;
HLDMODLNIDXDFT_ULS_F32.EngVal = 0.072358282;
HLDMODLNIDXDFT_ULS_F32.Define = 'Local';


HLDTIDFT_MILLISEC_U16 = DataDict.Constant;
HLDTIDFT_MILLISEC_U16.LongName = 'Hold Time in Milli Second';
HLDTIDFT_MILLISEC_U16.Description = 'Hold Time in Milli Second';
HLDTIDFT_MILLISEC_U16.DocUnits = 'MilliSec';
HLDTIDFT_MILLISEC_U16.EngDT = dt.u16;
HLDTIDFT_MILLISEC_U16.EngVal = 30;
HLDTIDFT_MILLISEC_U16.Define = 'Local';


MOTAGSAMPLEBUFSIZE_CNT_U08 = DataDict.Constant;
MOTAGSAMPLEBUFSIZE_CNT_U08.LongName = 'Motor Angle Sample Buffer Size';
MOTAGSAMPLEBUFSIZE_CNT_U08.Description = 'Motor Angle Sample Buffer Size';
MOTAGSAMPLEBUFSIZE_CNT_U08.DocUnits = 'Cnt';
MOTAGSAMPLEBUFSIZE_CNT_U08.EngDT = dt.u08;
MOTAGSAMPLEBUFSIZE_CNT_U08.EngVal = 50;
MOTAGSAMPLEBUFSIZE_CNT_U08.Define = 'Local';


POSNIDXBYTEMASK_CNT_U08 = DataDict.Constant;
POSNIDXBYTEMASK_CNT_U08.LongName = 'Constant 255';
POSNIDXBYTEMASK_CNT_U08.Description = 'Constant 255';
POSNIDXBYTEMASK_CNT_U08.DocUnits = 'Cnt';
POSNIDXBYTEMASK_CNT_U08.EngDT = dt.u08;
POSNIDXBYTEMASK_CNT_U08.EngVal = 255;
POSNIDXBYTEMASK_CNT_U08.Define = 'Local';


POSNIDXWORDMASK_CNT_U16 = DataDict.Constant;
POSNIDXWORDMASK_CNT_U16.LongName = 'Constant 65535';
POSNIDXWORDMASK_CNT_U16.Description = 'Constant 65535';
POSNIDXWORDMASK_CNT_U16.DocUnits = 'Cnt';
POSNIDXWORDMASK_CNT_U16.EngDT = dt.u16;
POSNIDXWORDMASK_CNT_U16.EngVal = 65535;
POSNIDXWORDMASK_CNT_U16.Define = 'Local';


POSNSTEPSIZEDFT_ULS_F32 = DataDict.Constant;
POSNSTEPSIZEDFT_ULS_F32.LongName = 'Position Index step size';
POSNSTEPSIZEDFT_ULS_F32.Description = 'Position Index step size';
POSNSTEPSIZEDFT_ULS_F32.DocUnits = 'Uls';
POSNSTEPSIZEDFT_ULS_F32.EngDT = dt.float32;
POSNSTEPSIZEDFT_ULS_F32.EngVal = 0.031250477;
POSNSTEPSIZEDFT_ULS_F32.Define = 'Local';


PWMTISCA_CNTPERMILLISEC_U16 = DataDict.Constant;
PWMTISCA_CNTPERMILLISEC_U16.LongName = 'PWM Time Scale';
PWMTISCA_CNTPERMILLISEC_U16.Description = 'PWM Time Scale';
PWMTISCA_CNTPERMILLISEC_U16.DocUnits = 'CntPerMilliSec';
PWMTISCA_CNTPERMILLISEC_U16.EngDT = dt.u16;
PWMTISCA_CNTPERMILLISEC_U16.EngVal = 16;
PWMTISCA_CNTPERMILLISEC_U16.Define = 'Local';


RAMP1TIDFT_MILLISEC_U08 = DataDict.Constant;
RAMP1TIDFT_MILLISEC_U08.LongName = 'Ramp 1 Time in Milli Second';
RAMP1TIDFT_MILLISEC_U08.Description = 'Ramp 1 Time in Milli Second';
RAMP1TIDFT_MILLISEC_U08.DocUnits = 'MilliSec';
RAMP1TIDFT_MILLISEC_U08.EngDT = dt.u08;
RAMP1TIDFT_MILLISEC_U08.EngVal = 20;
RAMP1TIDFT_MILLISEC_U08.Define = 'Local';


RAMP2TIDFT_MILLISEC_U08 = DataDict.Constant;
RAMP2TIDFT_MILLISEC_U08.LongName = 'Ramp 2 Time in Milli Second';
RAMP2TIDFT_MILLISEC_U08.Description = 'Ramp 2 Time in Milli Second';
RAMP2TIDFT_MILLISEC_U08.DocUnits = 'MilliSec';
RAMP2TIDFT_MILLISEC_U08.EngDT = dt.u08;
RAMP2TIDFT_MILLISEC_U08.EngVal = 20;
RAMP2TIDFT_MILLISEC_U08.Define = 'Local';


RAMP3TIDFT_MILLISEC_U08 = DataDict.Constant;
RAMP3TIDFT_MILLISEC_U08.LongName = 'Ramp 3 Time in Milli Second';
RAMP3TIDFT_MILLISEC_U08.Description = 'Ramp 3 Time in Milli Second';
RAMP3TIDFT_MILLISEC_U08.DocUnits = 'MilliSec';
RAMP3TIDFT_MILLISEC_U08.EngDT = dt.u08;
RAMP3TIDFT_MILLISEC_U08.EngVal = 20;
RAMP3TIDFT_MILLISEC_U08.Define = 'Local';


SWCALCYCTIMODCON_CNT_U08 = DataDict.Constant;
SWCALCYCTIMODCON_CNT_U08.LongName = 'Constant 16';
SWCALCYCTIMODCON_CNT_U08.Description = 'Constant 16';
SWCALCYCTIMODCON_CNT_U08.DocUnits = 'Cnt';
SWCALCYCTIMODCON_CNT_U08.EngDT = dt.u08;
SWCALCYCTIMODCON_CNT_U08.EngVal = 16;
SWCALCYCTIMODCON_CNT_U08.Define = 'Local';


SWCALDIRBACKW_CNT_U08 = DataDict.Constant;
SWCALDIRBACKW_CNT_U08.LongName = 'Software Calibration Backward direction';
SWCALDIRBACKW_CNT_U08.Description = [...
  'Software Calibration Backward direction'];
SWCALDIRBACKW_CNT_U08.DocUnits = 'Cnt';
SWCALDIRBACKW_CNT_U08.EngDT = dt.u08;
SWCALDIRBACKW_CNT_U08.EngVal = 1;
SWCALDIRBACKW_CNT_U08.Define = 'Local';


SWCALDIRFWD_CNT_U08 = DataDict.Constant;
SWCALDIRFWD_CNT_U08.LongName = 'Software Calibration forward direction';
SWCALDIRFWD_CNT_U08.Description = [...
  'Software Calibration forward direction'];
SWCALDIRFWD_CNT_U08.DocUnits = 'Cnt';
SWCALDIRFWD_CNT_U08.EngDT = dt.u08;
SWCALDIRFWD_CNT_U08.EngVal = 0;
SWCALDIRFWD_CNT_U08.Define = 'Local';


SWCALMOTAG2COSIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG2COSIDX_CNT_U08.LongName = 'Index Constant 5';
SWCALMOTAG2COSIDX_CNT_U08.Description = 'Index Constant 5';
SWCALMOTAG2COSIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG2COSIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG2COSIDX_CNT_U08.EngVal = 5;
SWCALMOTAG2COSIDX_CNT_U08.Define = 'Local';


SWCALMOTAG2SINIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG2SINIDX_CNT_U08.LongName = 'Index Constant 4';
SWCALMOTAG2SINIDX_CNT_U08.Description = 'Index Constant 4';
SWCALMOTAG2SINIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG2SINIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG2SINIDX_CNT_U08.EngVal = 4;
SWCALMOTAG2SINIDX_CNT_U08.Define = 'Local';


SWCALMOTAG5COSIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG5COSIDX_CNT_U08.LongName = 'Index Constant 1';
SWCALMOTAG5COSIDX_CNT_U08.Description = 'Index Constant 1';
SWCALMOTAG5COSIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG5COSIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG5COSIDX_CNT_U08.EngVal = 1;
SWCALMOTAG5COSIDX_CNT_U08.Define = 'Local';


SWCALMOTAG5SINIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG5SINIDX_CNT_U08.LongName = 'Index Constant 0';
SWCALMOTAG5SINIDX_CNT_U08.Description = 'Index Constant 0';
SWCALMOTAG5SINIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG5SINIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG5SINIDX_CNT_U08.EngVal = 0;
SWCALMOTAG5SINIDX_CNT_U08.Define = 'Local';


SWCALMOTAG6COSIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG6COSIDX_CNT_U08.LongName = 'Index Constant 3';
SWCALMOTAG6COSIDX_CNT_U08.Description = 'Index Constant 3';
SWCALMOTAG6COSIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG6COSIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG6COSIDX_CNT_U08.EngVal = 3;
SWCALMOTAG6COSIDX_CNT_U08.Define = 'Local';


SWCALMOTAG6SINIDX_CNT_U08 = DataDict.Constant;
SWCALMOTAG6SINIDX_CNT_U08.LongName = 'Index Constant 2';
SWCALMOTAG6SINIDX_CNT_U08.Description = 'Index Constant 2';
SWCALMOTAG6SINIDX_CNT_U08.DocUnits = 'Cnt';
SWCALMOTAG6SINIDX_CNT_U08.EngDT = dt.u08;
SWCALMOTAG6SINIDX_CNT_U08.EngVal = 2;
SWCALMOTAG6SINIDX_CNT_U08.Define = 'Local';


SWCALPOSNIDXSHIFTCON_CNT_U08 = DataDict.Constant;
SWCALPOSNIDXSHIFTCON_CNT_U08.LongName = 'Constant 16';
SWCALPOSNIDXSHIFTCON_CNT_U08.Description = 'Constant 16';
SWCALPOSNIDXSHIFTCON_CNT_U08.DocUnits = 'Cnt';
SWCALPOSNIDXSHIFTCON_CNT_U08.EngDT = dt.u08;
SWCALPOSNIDXSHIFTCON_CNT_U08.EngVal = 16;
SWCALPOSNIDXSHIFTCON_CNT_U08.Define = 'Local';


SWCALSAMPLEHLDSTOPCON_CNT_U08 = DataDict.Constant;
SWCALSAMPLEHLDSTOPCON_CNT_U08.LongName = 'Constant 3';
SWCALSAMPLEHLDSTOPCON_CNT_U08.Description = 'Constant 3';
SWCALSAMPLEHLDSTOPCON_CNT_U08.DocUnits = 'Cnt';
SWCALSAMPLEHLDSTOPCON_CNT_U08.EngDT = dt.u08;
SWCALSAMPLEHLDSTOPCON_CNT_U08.EngVal = 3;
SWCALSAMPLEHLDSTOPCON_CNT_U08.Define = 'Local';


SWCALSAMPLEHLDSTRTCON_CNT_U08 = DataDict.Constant;
SWCALSAMPLEHLDSTRTCON_CNT_U08.LongName = 'Constant 4';
SWCALSAMPLEHLDSTRTCON_CNT_U08.Description = 'Constant 4';
SWCALSAMPLEHLDSTRTCON_CNT_U08.DocUnits = 'Cnt';
SWCALSAMPLEHLDSTRTCON_CNT_U08.EngDT = dt.u08;
SWCALSAMPLEHLDSTRTCON_CNT_U08.EngVal = 4;
SWCALSAMPLEHLDSTRTCON_CNT_U08.Define = 'Local';



%%-------------------------------------------
%% NTC Definition                            
%%-------------------------------------------
%end of Data Dictionary
